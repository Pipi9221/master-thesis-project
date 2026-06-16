# 死循环现场总结报告

## 📅 时间
- 发现时间: 2025-10-24 14:58:52
- 卡住时长: 14小时23分钟
- 程序运行: 13小时3分38秒

## 🎯 死循环位置

**文件**: `mutant_modified.c`
**函数**: `realsmith_3L7lB_slice_1()`
**行号**: 27-43

### 问题代码

```c
unsigned long realsmith_3L7lB_slice_1(char *dst, unsigned long siz)
{
  unsigned long n = siz;
  char *d = dst;
  
  while (1) {                    // ← 死循环！
    unsigned long tmp = n;
    n--;
    if (!(tmp != 0)) break;      // 只有当n为0时才跳出
    d++;
  }
  // ...
}
```

## 💥 根本原因

### 1. 无符号整数下溢
调用链：
```
func_9_slice_1(p_11)
  → realsmith_proxy_Ob9Ok_slice_1(..., p_11 + (-247))
    → realsmith_3L7lB_slice_1(..., 超大值)  ← p_11是小值时，触发下溢
```

传入的 `siz` 参数：
- `p_11 + (unsigned long)(-247)`
- 如果 `p_11` < 247，导致下溢
- 变成巨大值（约 2^64 - 247）
- 需要循环约10^19次才能到0

### 2. Creal代理函数缺陷
`realsmith_3L7lB_slice_1` 模拟 `strnlen`，但：
- ❌ 无边界检查
- ❌ 无超时保护
- ❌ 未验证输入合法性

### 3. 实验框架超时保护失效
- 测试程序应该有超时限制（通常30秒）
- 实际运行了13小时+
- 说明超时机制失效

## 📊 影响范围

- ❌ 实验47卡住
- ❌ 后续实验（48-5000）全部阻塞
- ❌ 损失14小时实验时间
- ❌ 总进度停滞在62.64%

## 📁 保存的现场文件

- `DEADLOOP_SCENE.md` - 现场记录
- `DEADLOOP_ANALYSIS.md` - 详细分析
- `process_info.txt` - 进程信息
- `test47_backup/` - 完整测试文件
  - `7RR349_seed.c` (1146行) - 原始源程序
  - `7RR349_seed_syn0.c` (2024行) - Creal突变体
  - `mutant_modified.c` (299行) - 添加了printf的突变体 ← 死循环程序
  - `mutant_sliced.c` (287行) - Frama-C切片后
  - 其他配置文件

## 🔧 建议的修复方案

### 立即措施
```bash
# 1. 杀死卡住的进程
kill -9 1472888

# 2. 检查主进程是否恢复
tail -f $EXPERIMENTAL_FRAMAC/continuous_exp_5000.log

# 3. 如需重启，跳过test47
```

### 短期修复
在运行测试程序时添加超时：
```python
subprocess.run(
    ['./mutant_program'], 
    timeout=30,  # 30秒超时
    capture_output=True
)
```

### 长期修复
1. 修复Creal的代理函数，添加边界检查
2. 在Frama-C切片后验证程序终止性
3. 增强测试框架的超时保护机制

## 🎓 经验教训

1. **自动化测试必须有超时保护**
   - 单个测试程序超时：30秒
   - 单个实验超时：5分钟
   - 批次超时：4小时

2. **Creal生成的代理函数需要验证**
   - 检查无符号整数运算
   - 验证循环终止条件
   - 添加边界检查

3. **监控异常行为**
   - 检测长时间无日志更新
   - 检测CPU使用率异常
   - 自动重启卡住的实验

## ✅ 现场已完整保存

所有相关文件已保存在：
`$EXPERIMENTAL_FRAMAC/debug_deadloop_test47/`

可安全终止卡住的进程，继续后续实验。
