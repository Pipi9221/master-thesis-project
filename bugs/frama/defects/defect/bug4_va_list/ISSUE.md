# Bug 4: va_list类型转换错误

## 问题描述

使用Frama-C对包含可变参数（`...`）的函数进行切片后，生成的代码无法编译，错误信息：
```
error: assignment to expression with array type
```

## 复现步骤

### 1. 源程序

文件：`test_va_list_dependency.c`

```c
#include <stdio.h>
#include <stdarg.h>

static int g_sum = 0;

int sum_with_side_effect(int count, ...) {
    va_list args;
    va_start(args, count);  // ✅ 正确：使用va_start初始化
    int total = 0;
    for (int i = 0; i < count; i++) {
        int val = va_arg(args, int);
        total += val;
        g_sum += val;
    }
    va_end(args);
    return total;
}

int main(void) {
    int val = 10;
    int r1 = sum_with_side_effect(3, 10, 20, 30);
    int result = val + r1 + g_sum;
    return result;
}
```

### 2. 切片命令

```bash
frama-c test_va_list_dependency.c -slice-value result -then-on 'Slicing export' -print -ocode test_va_list_dependency_sliced.c
```

### 3. 切片后的错误代码

文件：`test_va_list_dependency_sliced.c`

```c
int sum_with_side_effect_slice_1(int count, void * const *__va_params) {
    va_list args;
    args = __va_params;  // ❌ 错误：数组不能赋值
    // ...
}
```

### 4. 编译错误

```bash
$ gcc test_va_list_dependency_sliced.c
test_va_list_dependency_sliced.c:9:8: error: assignment to expression with array type
test_va_list_dependency_sliced.c:16:9: error: cannot convert to a pointer type
test_va_list_dependency_sliced.c:17:14: error: lvalue required as increment operand
```

## 预期行为

切片后的代码应该能够编译，并且：
1. 保持va_list的正确使用方式（va_start/va_end）
2. 或者使用正确的类型转换方式（如memcpy）

## 实际行为

切片后的代码无法编译，因为：
1. Frama-C将 `...` 转换为 `void * const *__va_params`
2. 尝试将指针赋值给数组类型 `va_list`
3. 违反了C语言的语法规则

## 根本原因

### 1. va_list的类型特性

`va_list` 在大多数C实现中是一个**数组类型**：
- 在x86_64 Linux上：`typedef char va_list[24];`
- 数组类型不能直接赋值

### 2. C语言的数组赋值规则

```c
int arr1[10];
int arr2[10];
arr1 = arr2;  // ❌ 错误：数组不能赋值
```

### 3. Frama-C的转换问题

Frama-C在处理可变参数时：
1. 将 `...` 参数转换为 `void * const *__va_params`（指针类型）
2. 尝试将 `__va_params`（指针）赋值给 `args`（数组）
3. 这违反了C语言的语法规则

## 问题代码

### 错误的赋值语句

```c
va_list args;        // args是数组类型（如 char[24]）
args = __va_params;  // __va_params是指针类型
                      // ❌ 不能将指针赋值给数组
```

## 修复建议

### 方案1：保持va_start/va_end（推荐）

```c
int sum_with_side_effect_slice_1(int count, ...) {
    va_list args;
    va_start(args, count);  // ✅ 保持原始方式
    // ...
    va_end(args);
}
```

### 方案2：使用memcpy

```c
int sum_with_side_effect_slice_1(int count, void * const *__va_params) {
    va_list args;
    memcpy(&args, &__va_params, sizeof(va_list));  // ✅ 使用memcpy
    // ...
}
```

### 方案3：使用指针（不推荐）

```c
int sum_with_side_effect_slice_1(int count, void * const *__va_params) {
    va_list *args = (va_list *)&__va_params;  // ⚠️ 需要修改后续使用
    // ...
}
```

## 影响范围

所有使用可变参数（`...`）的函数在切片后都可能出现这个问题：
- `printf` 系列函数
- `scanf` 系列函数
- 自定义可变参数函数

## 环境信息

- **Frama-C版本**: 需要确认
- **编译器**: GCC
- **平台**: Linux x86_64
- **C标准**: C99/C11

## 相关Bug

- Bug 1: 函数指针引用未更新
- Bug 2: Switch-case标签处理错误
- Bug 3: VLA链接错误
- **Bug 4: va_list类型转换错误**（本bug）

## 状态

- **发现时间**: 2024年
- **严重性**: 高（导致代码无法编译）
- **类型**: 语法错误/类型转换错误
- **状态**: 待修复



