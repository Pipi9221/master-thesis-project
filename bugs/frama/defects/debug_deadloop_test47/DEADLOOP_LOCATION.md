# 死循环出现在哪个程序？

## 🎯 直接答案

**死循环实际发生在**: `mutant_program` (突变体切片后添加printf并编译的可执行文件)

---

## 📊 详细检查结果

| 程序 | 包含死循环函数？ | 实际运行？ | 状态 |
|------|----------------|----------|------|
| **1. 源程序** (`7RR349_seed.c`) | ✅ **否** | ✅ 是 | ✅ **正常** |
| **2. 突变体** (`7RR349_seed_syn0.c`) | ❌ **是** | ❌ 否 | - |
| **3. 源程序切片** (`source_sliced.c`) | ✅ **否** | ✅ 是 | ✅ **正常** |
| **4. 突变体切片** (`mutant_sliced.c`) | ❌ **是** | ❌ 否 | - |
| **5. 突变体+printf** (`mutant_modified.c`) | ❌ **是** | ✅ 是 | ❌ **卡住！** |

---

## 🔄 完整流程

### 程序生成和演化链

```
第1步: Csmith生成源程序
  ↓
  7RR349_seed.c (1146行)
  ✅ 不包含 realsmith_3L7lB_slice_1
  ✅ 安全、可运行

第2步: Creal生成突变体
  ↓
  7RR349_seed_syn0.c (2024行)
  ❌ Creal添加了 realsmith_3L7lB_slice_1 函数
  ⚠️  包含潜在死循环，但未直接运行

第3步: Frama-C对源程序切片
  ↓
  source_sliced.c (162行)
  ✅ 切片后不包含死循环函数
  ✅ 运行正常

第4步: Frama-C对突变体切片
  ↓
  mutant_sliced.c (287行)
  ❌ 切片后保留了 realsmith_3L7lB_slice_1 函数
  ⚠️  包含死循环函数，但未直接运行

第5步: 添加printf语句
  ↓
  mutant_modified.c (299行)
  ❌ 基于 mutant_sliced.c，添加printf
  ❌ 仍包含 realsmith_3L7lB_slice_1 函数

第6步: 编译并运行
  ↓
  mutant_program (可执行文件)
  ❌ 运行时触发死循环
  ❌ CPU 110%，运行13小时+
  ⭐ 这是实际卡住的程序！
```

---

## 💡 关键点理解

### 1. 死循环函数的来源

**Creal添加的**:
- 源程序 → ✅ 无此函数
- 突变体 → ❌ Creal添加了此函数

### 2. 切片的影响

**Frama-C切片**:
- 源程序切片 → ✅ 没有此函数（因为源程序本来就没有）
- 突变体切片 → ❌ 保留了此函数（因为被判断为"有用"）

### 3. 实际运行的程序

实验框架的运行流程：
```python
# 1. 编译突变体切片+printf版本
gcc -o mutant_program mutant_modified.c

# 2. 运行程序
./mutant_program  # ← 在这里卡住！
```

---

## 🎯 为什么只有突变体卡住？

### 原因分析

1. **Creal只在突变体中添加了代理函数**
   - 源程序：Csmith原始生成，无代理函数
   - 突变体：Creal插桩，添加了 `realsmith_3L7lB_slice_1`

2. **Frama-C切片保留了代理函数**
   - 源程序切片：本来就没有，切片后也没有
   - 突变体切片：切片后保留了（因为在调用链中）

3. **运行时触发了特定参数条件**
   - 参数 `p_11` 的值恰好 < 247
   - 触发无符号整数下溢
   - 导致循环需要执行 10^19 次

---

## 📁 文件对比

### 源程序相关文件

```bash
# 源程序 - 无死循环函数
$ grep -c "realsmith_3L7lB" 7RR349_seed.c
0  # ✅ 不包含

# 源程序切片 - 无死循环函数
$ grep -c "realsmith_3L7lB" source_sliced.c
0  # ✅ 不包含
```

### 突变体相关文件

```bash
# Creal突变体 - 有死循环函数
$ grep -c "realsmith_3L7lB" 7RR349_seed_syn0.c
3  # ❌ 包含（函数定义 + 调用）

# 突变体切片 - 有死循环函数
$ grep -c "realsmith_3L7lB" mutant_sliced.c
3  # ❌ 包含（Frama-C保留了）

# 突变体+printf - 有死循环函数
$ grep -c "realsmith_3L7lB" mutant_modified.c
3  # ❌ 包含（基于mutant_sliced.c）
```

---

## 🔍 实际运行证据

从进程信息 `process_info.txt`:

```
PID     CMD
1472888 ./batch_experiments/test_20251024_002744/test47/mutant_program
```

- **运行的程序**: `mutant_program`
- **编译来源**: `mutant_modified.c`
- **基础来源**: `mutant_sliced.c` (Frama-C切片后的突变体)
- **最初来源**: `7RR349_seed_syn0.c` (Creal突变体)

---

## 📊 对比表格

### 函数存在性

| 文件 | 函数定义 | 函数调用 | 行号 |
|------|---------|---------|------|
| 源程序 (seed.c) | ❌ | ❌ | - |
| 突变体 (syn0.c) | ✅ | ✅ | ~1000+ |
| 源切片 (source_sliced.c) | ❌ | ❌ | - |
| 突切片 (mutant_sliced.c) | ✅ | ✅ | 26 |
| 突+printf (mutant_modified.c) | ✅ | ✅ | 27 |

### 运行状态

| 程序 | 编译 | 运行 | 结果 |
|------|------|------|------|
| source_program | ✅ | ✅ | ✅ 正常结束 |
| mutant_program | ✅ | ✅ | ❌ **死循环卡住** |

---

## ✅ 最终结论

### 死循环函数存在于：

1. ❌ Creal突变体 (`7RR349_seed_syn0.c`)
2. ❌ Frama-C切片后的突变体 (`mutant_sliced.c`)
3. ❌ 添加printf的突变体 (`mutant_modified.c`)

### 死循环实际发生在：

⭐ **`mutant_program`** (由 `mutant_modified.c` 编译而来)

这是实验框架编译并运行的可执行程序，基于Frama-C切片后的突变体。

### 为什么源程序没问题？

✅ 源程序从头到尾都不包含 `realsmith_3L7lB_slice_1` 函数  
✅ 这个函数是Creal在生成突变体时添加的  
✅ 源程序切片自然也不包含此函数  

### 为什么突变体有问题？

❌ Creal在生成突变体时添加了有缺陷的代理函数  
❌ Frama-C切片时保留了这个函数（因为在调用链中）  
❌ 运行时触发了特定参数条件，导致死循环  

---

**总结**: 死循环是Creal的问题，在突变体及其衍生程序中存在，在运行 `mutant_program` 时实际触发。

