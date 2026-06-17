## 根因分析

### 现象 A：__fc_vla_alloc 未定义

#### 问题定位

搜索 `__fc_vla_alloc` 在源码中的位置：

```
src/kernel_internals/typing/cabs2cil.ml:2886
  memoBuiltin ~force_keep:true "__fc_vla_alloc" ~spec

src/plugins/eva/domains/cvalue/builtins_malloc.ml:502
  register_malloc ~replace:"__fc_vla_alloc" "vla_alloc" "malloc" Base.VLA
```

#### 根因

`__fc_vla_alloc` 是 Frama-C 的内置函数（builtin），用于在 EVA（值分析）执行期间将 VLA（变长数组）转换为堆分配。当切片导出包含 VLA 的代码时：

1. CIL 在 `cabs2cil.ml` 中将 VLA 转换为调用 `__fc_vla_alloc`
2. 这个函数是 Frama-C 运行时提供的，不是标准 C 库函数
3. 切片导出时只包含了函数声明（`__fc_vla_alloc(unsigned long size)`），没有提供定义
4. 链接器报错：`undefined reference to __fc_vla_alloc`

#### 结论

这是一个**真正的 bug**。切片导出不包含 VLA 运行时库的实现，导致导出的代码无法独立编译链接。

---

### 现象 B：多维 VLA 解析 abort

#### 问题定位

在 Frama-C 内核中，多维 VLA 只支持第一维，其他维度的 VLA 会触发中止。

#### 根因

这是 Frama-C CIL 处理的已知限制，不是切片插件的问题。在 `cabs2cil.ml` 中有检查：

```
For multi-dimensional arrays, variable length is only supported on the first dimension
```

#### 结论

这是**已知限制（Known Limitation）**，不是切片插件的 bug，而是上游 Frama-C 内核的功能缺失。
