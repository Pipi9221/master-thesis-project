## 现象
当切片准则需要保留 loop invariant（`-slice-loop-inv`）且 invariant 中包含对 ACSL 逻辑变量的数组访问（例如 `t[k]` 里 `k` 为 `\forall` 引入的逻辑变量）时，slicing 插件会直接中止：

```
Plug-in slicing aborted: unimplemented feature.
... '[Plug-in slicing] [logic_interp] dependencies of a term lval'
```

这说明 slicing 在计算 “ACSL term lvalue 的依赖（zone/deps）” 时仍存在未实现路径；该问题与早期上游 issue（Mantis 690 / GitLab #608）描述的根因一致：依赖计算仍主要走 “term → C exp → deps” 的通道，对 `\forall` 引入的逻辑变量无法落到 C lvalue 上。

## 环境
- Frama-C: 30.0 (Zinc)

## 最小复现用例
- [loopinv_acsl_forall_zone.c](file://$SLICING_REPO/issues/016-slicing-term-lval-deps/cases/loopinv_acsl_forall_zone.c)

## 复现日志
- [loopinv_acsl_forall_zone.frama.log](file://$SLICING_REPO/issues/016-slicing-term-lval-deps/artifacts/loopinv_acsl_forall_zone.frama.log)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/loopinv_acsl_forall_zone.c \
  -slice-loop-inv main \
  -then-on "Slicing export" -print -ocode /tmp/out.c
```
