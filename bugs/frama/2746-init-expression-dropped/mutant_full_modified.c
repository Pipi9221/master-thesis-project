#include <stdio.h>

long KC_A_realsmith_mJycR = 17;

long KC_P0_realsmith_mJycR = -9;

long KC_P1_realsmith_mJycR = 2;

long realsmith_mJycR(int hex) {
    if (hex == 0x0) {
        return KC_P0_realsmith_mJycR;
    } else if (hex < 0xA) {
        return KC_P1_realsmith_mJycR + (hex - 0x1);
    } else {
        return KC_A_realsmith_mJycR + (hex - 0xA);
    }
}

 int
realsmith_3cBEF (int a, int b)
{
  return (a + b - 1) / b;
}

long JV_KIND_ARRAY_realsmith_nl1Mm = 19;

__attribute__((used)) static int realsmith_nl1Mm(int values, int keys, int is_min) {
  if ((1) != JV_KIND_ARRAY_realsmith_nl1Mm)
    return (1);
  if ((1) != JV_KIND_ARRAY_realsmith_nl1Mm)
    return (1);
  if ((1) != (1))
    return (1);
  if ((1) == 0) {
    (1);
    (1);
    return (1);
  }
  int ret = (1);
  int retkey = (1);
  for (int i=1; i<(1); i++) {
    int item = (1);
    int cmp = (1);
    if ((cmp < 0) == (is_min == 1)) {
      (1);
      retkey = item;
      (1);
      ret = (1);
    } else {
      (1);
    }
  }
  (1);
  (1);
  (1);
  return ret;
}

int ENOTSUPP_realsmith_SPXUr = 11;

int realsmith_SPXUr(void)
{
 int r;
 if ((1) == 0)
  r = 0;
 else
  r = -ENOTSUPP_realsmith_SPXUr;
 return r;
}

int CP_DRAW_INDX_OFFSET_5_INDX_SIZE__MASK_realsmith_Kq6Wj = 11;

int CP_DRAW_INDX_OFFSET_5_INDX_SIZE__SHIFT_realsmith_Kq6Wj = 12;

__attribute__((used)) static inline int realsmith_Kq6Wj(int val)
{
 return ((val) << CP_DRAW_INDX_OFFSET_5_INDX_SIZE__SHIFT_realsmith_Kq6Wj) & CP_DRAW_INDX_OFFSET_5_INDX_SIZE__MASK_realsmith_Kq6Wj;
}

__attribute__((used)) static inline int realsmith_V8gK3(int x)
{
 x++;
 return x ? x : 1;
}

char *realsmith_aSpHO(const char *s, int gfp)
{
 unsigned long len;
 char *buf;
 if (!s)
  return ((void*)0);
 len = (1) + 1;
 buf = ("0");
 if (buf)
  (1);
 return buf;
}
char realsmith_proxy_JHN8g(char p_0_Pjcfd, int p_1_vG2P8) {
char proxy_xr2qR[20] = { p_0_Pjcfd, p_0_Pjcfd, 79, 94, 95, 4, p_0_Pjcfd, p_0_Pjcfd, 63, p_0_Pjcfd, p_0_Pjcfd, p_0_Pjcfd, p_0_Pjcfd, 5, 82, p_0_Pjcfd, p_0_Pjcfd, p_0_Pjcfd, p_0_Pjcfd, p_0_Pjcfd };
char * proxy_ret_NS6ZE = realsmith_aSpHO(proxy_xr2qR, p_1_vG2P8);
return *proxy_ret_NS6ZE;
}


int MC_CMD_PHY_CAP_10000FDX_LBN_realsmith_gW7n0 = 18;

int MC_CMD_PHY_CAP_1000FDX_LBN_realsmith_gW7n0 = 20;

int MC_CMD_PHY_CAP_1000HDX_LBN_realsmith_gW7n0 = -8;

int MC_CMD_PHY_CAP_100FDX_LBN_realsmith_gW7n0 = -3;

int MC_CMD_PHY_CAP_100HDX_LBN_realsmith_gW7n0 = 15;

int MC_CMD_PHY_CAP_10FDX_LBN_realsmith_gW7n0 = 2;

int MC_CMD_PHY_CAP_10HDX_LBN_realsmith_gW7n0 = 7;

int MC_CMD_PHY_CAP_AN_LBN_realsmith_gW7n0 = 4;

int MC_CMD_PHY_CAP_ASYM_LBN_realsmith_gW7n0 = 19;

int MC_CMD_PHY_CAP_PAUSE_LBN_realsmith_gW7n0 = 13;

int SUPPORTED_10000baseKX4_Full_realsmith_gW7n0 = 20;

int SUPPORTED_10000baseT_Full_realsmith_gW7n0 = 18;

int SUPPORTED_1000baseKX_Full_realsmith_gW7n0 = 0;

int SUPPORTED_1000baseT_Full_realsmith_gW7n0 = -3;

int SUPPORTED_1000baseT_Half_realsmith_gW7n0 = 7;

int SUPPORTED_100baseT_Full_realsmith_gW7n0 = -9;

int SUPPORTED_100baseT_Half_realsmith_gW7n0 = -9;

int SUPPORTED_10baseT_Full_realsmith_gW7n0 = -3;

int SUPPORTED_10baseT_Half_realsmith_gW7n0 = -6;

int SUPPORTED_Asym_Pause_realsmith_gW7n0 = -2;

int SUPPORTED_Autoneg_realsmith_gW7n0 = 13;

int SUPPORTED_Backplane_realsmith_gW7n0 = -1;

int SUPPORTED_FIBRE_realsmith_gW7n0 = 9;

int SUPPORTED_Pause_realsmith_gW7n0 = 2;

int SUPPORTED_TP_realsmith_gW7n0 = 16;

__attribute__((used)) static int realsmith_gW7n0(int media, int cap)
{
 int result = 0;
 switch (media) {
 case 130:
  result |= SUPPORTED_Backplane_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_1000FDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_1000baseKX_Full_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_10000FDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_10000baseKX4_Full_realsmith_gW7n0;
  break;
 case 128:
 case 129:
  result |= SUPPORTED_FIBRE_realsmith_gW7n0;
  break;
 case 131:
  result |= SUPPORTED_TP_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_10HDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_10baseT_Half_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_10FDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_10baseT_Full_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_100HDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_100baseT_Half_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_100FDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_100baseT_Full_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_1000HDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_1000baseT_Half_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_1000FDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_1000baseT_Full_realsmith_gW7n0;
  if (cap & (1 << MC_CMD_PHY_CAP_10000FDX_LBN_realsmith_gW7n0))
   result |= SUPPORTED_10000baseT_Full_realsmith_gW7n0;
  break;
 }
 if (cap & (1 << MC_CMD_PHY_CAP_PAUSE_LBN_realsmith_gW7n0))
  result |= SUPPORTED_Pause_realsmith_gW7n0;
 if (cap & (1 << MC_CMD_PHY_CAP_ASYM_LBN_realsmith_gW7n0))
  result |= SUPPORTED_Asym_Pause_realsmith_gW7n0;
 if (cap & (1 << MC_CMD_PHY_CAP_AN_LBN_realsmith_gW7n0))
  result |= SUPPORTED_Autoneg_realsmith_gW7n0;
 return result;
}

__attribute__((used)) static inline int realsmith_OwylX(const int *a)
{
 return !(a[0] | a[1] | a[2] | a[3] | a[4] | a[5]);
}
int realsmith_proxy_KulvT(int p_0_eiTVw) {
int proxy_poj9G[17] = { 93, p_0_eiTVw, 76, p_0_eiTVw, 49, 40, p_0_eiTVw, p_0_eiTVw, p_0_eiTVw, p_0_eiTVw, p_0_eiTVw, p_0_eiTVw, p_0_eiTVw, 12, p_0_eiTVw, 54, 5 };
int proxy_ret_NaDY4 = realsmith_OwylX(proxy_poj9G);
return proxy_ret_NaDY4;
}


__attribute__((used)) static int realsmith_lRAgj(int bitOffset, int fqid)
{
    int i, mask, numOfOnesToClear, walking1Mask = 1;
    if (bitOffset<8)
    {
        mask = 0;
        for (i = 0 ; i < bitOffset ; i++, walking1Mask <<= 1)
            mask |= walking1Mask;
    }
    else
    {
       mask = 0xFF;
       numOfOnesToClear = 0;
       if (fqid && bitOffset>24)
           numOfOnesToClear = (int)(bitOffset-24);
       else
          if (!fqid && bitOffset>8)
               numOfOnesToClear = (int)(bitOffset-8);
       for (i = 0 ; i < numOfOnesToClear ; i++, walking1Mask <<= 1)
           mask &= ~walking1Mask;
    }
    return mask;
}

int realsmith_MJw5R(const char *file, int line, const char *s, int b)
{
    if (!b)
        return 1;
    (1);
    return 0;
}
int realsmith_proxy_KGXZo(char p_0_gSLYa, int p_1_zopE9, char p_2_42oDo, int p_3_zVJWM) {
char proxy_A8Fkk[13] = { p_0_gSLYa, p_0_gSLYa, 93, p_0_gSLYa, 27, 90, 66, 92, 76, 12, 62, 1, p_0_gSLYa };
int proxy_ret_wQI7E = realsmith_MJw5R(proxy_A8Fkk, p_1_zopE9, &(p_2_42oDo), p_3_zVJWM);
return proxy_ret_wQI7E;
}


int V4L2_STD_MN_realsmith_GTQ0O = -10;

int V4L2_STD_PAL_Nc_realsmith_GTQ0O = 1;

__attribute__((used)) static inline unsigned int realsmith_GTQ0O(int norm)
{
 return (norm & (V4L2_STD_MN_realsmith_GTQ0O & ~V4L2_STD_PAL_Nc_realsmith_GTQ0O)) ? 754 : 922;
}

int CAP_NET_ADMIN_realsmith_Puc4k = 9;

unsigned long FL_MAX_LINGER_realsmith_Puc4k = -5;

unsigned long FL_MIN_LINGER_realsmith_Puc4k = -10;

unsigned long HZ_realsmith_Puc4k = 19;

__attribute__((used)) static unsigned long realsmith_Puc4k(unsigned long ttl)
{
 if (ttl < FL_MIN_LINGER_realsmith_Puc4k)
  return FL_MIN_LINGER_realsmith_Puc4k*HZ_realsmith_Puc4k;
 if (ttl > FL_MAX_LINGER_realsmith_Puc4k && !(1))
  return 0;
 return ttl*HZ_realsmith_Puc4k;
}

long const realsmith_7QoqD (const long const v, const long const m)
{
  if (m == 0) return v;
  const long const r = v % m;
  printf("v: %d\n", v);
  printf("m: %d\n", m);
  printf("r: %d\n", r);
  if (r == 0) return v;
  return v + m - r;
}

__attribute__((used)) static long realsmith_yMGHh(int n)
{
 long log = 0;
 if (!n)
  return 0;
 while (n > 1) {
  n >>= 1;
  ++log;
 }
 return log;
}

long SMB_ADDR_realsmith_T4Ysq = -2;

long SMB_CMD_realsmith_T4Ysq = -3;

long SMB_DATA_realsmith_T4Ysq = 9;

long SMB_PRTCL_realsmith_T4Ysq = 16;

int SMB_PRTCL_WORD_DATA_realsmith_T4Ysq = -10;

int SMB_PRTCL_WRITE_realsmith_T4Ysq = -9;

__attribute__((used)) static int
realsmith_T4Ysq(int dev, int slave, char cmd, short word)
{
 struct nfsmb_softc *sc = (struct nfsmb_softc *)(1);
 int error;
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 error = (1);
 (1);
 (1);
 return (error);
}

int F_OK_realsmith_7k19t = -5;

int
realsmith_7k19t(const char *filename, int line, const char *f)
{
 (1);
 if (!(1))
  return (1);
 (1);
 (1);
 return (0);
}
int realsmith_proxy_HIAAe(char p_0_SRTy7, int p_1_4uQsn, char p_2_sPK3v) {
char proxy_PVQdW[17] = { 68, 38, p_0_SRTy7, p_0_SRTy7, 99, p_0_SRTy7, 35, 68, p_0_SRTy7, p_0_SRTy7, p_0_SRTy7, p_0_SRTy7, p_0_SRTy7, 86, 22, 88, p_0_SRTy7 };
char proxy_hyBxu[10] = { 74, p_2_sPK3v, p_2_sPK3v, p_2_sPK3v, 9, p_2_sPK3v, 99, p_2_sPK3v, 49, 43 };
int proxy_ret_2piYC = realsmith_7k19t(proxy_PVQdW, p_1_4uQsn, proxy_hyBxu);
return proxy_ret_2piYC;
}


int realsmith_4EG1e(int rop, int src, int dst)
{
  switch (rop)
  {
    case 0x0: return 0;
    case 0x1: return ~(src | dst);
    case 0x2: return (~src) & dst;
    case 0x3: return ~src;
    case 0x4: return src & (~dst);
    case 0x5: return ~(dst);
    case 0x6: return src ^ dst;
    case 0x7: return ~(src & dst);
    case 0x8: return src & dst;
    case 0x9: return ~(src) ^ dst;
    case 0xa: return dst;
    case 0xb: return (~src) | dst;
    case 0xc: return src;
    case 0xd: return src | (~dst);
    case 0xe: return src | dst;
    case 0xf: return ~0;
  }
  return dst;
}

__attribute__((used)) static int realsmith_JMj5V(void) {
    return ((1) + 8) >> 4;
}

unsigned int INTBITS_realsmith_L0BDc = -10;

__attribute__((used)) static int
realsmith_L0BDc (unsigned b, int* c)
{
  return c[b / INTBITS_realsmith_L0BDc] & 1 << b % INTBITS_realsmith_L0BDc;
}
int realsmith_proxy_YQdM2(unsigned int p_0_MGJYp, int p_1_J1jBj) {
int proxy_67RUV[15] = { p_1_J1jBj, 90, p_1_J1jBj, p_1_J1jBj, p_1_J1jBj, 25, 5, 18, p_1_J1jBj, 72, 49, p_1_J1jBj, 42, 99, p_1_J1jBj };
int proxy_ret_xe0vS = realsmith_L0BDc(p_0_MGJYp, proxy_67RUV);
return proxy_ret_xe0vS;
}

#include<stdint.h>
#include<inttypes.h>
#include<stddef.h>
#define Tag1(x) (x)
#define Tag2(x) (x)
#define Tag3(x) (x)
#define Tag4(x) (x)
#define Tag5(x) (x)
#define Tag6(x) (x)
#define Tag7(x) (x)
#define Tag8(x) (x)
#define Tag9(x) (x)
#define Tag10(x) (x)
#define Tag11(x) (x)
#define Tag12(x) (x)
#define Tag13(x) (x)
#define Tag14(x) (x)
#define Tag15(x) (x)
#define Tag16(x) (x)
#define Tag17(x) (x)
#define Tag18(x) (x)
#define Tag19(x) (x)
#define Tag20(x) (x)
#define Tag21(x) (x)
#define Tag22(x) (x)
#define Tag23(x) (x)
#define Tag24(x) (x)
#define Tag25(x) (x)
#define Tag26(x) (x)
#define Tag27(x) (x)
#define Tag28(x) (x)
#define Tag29(x) (x)
#define Tag30(x) (x)
#define Tag31(x) (x)
#define Tag32(x) (x)
#define Tag33(x) (x)
#define Tag34(x) (x)
#define Tag35(x) (x)
#define Tag36(x) (x)
#define Tag37(x) (x)
#define Tag38(x) (x)
#define Tag39(x) (x)
#define Tag40(x) (x)
#define Tag41(x) (x)
#define Tag42(x) (x)
#define Tag43(x) (x)
#define Tag44(x) (x)
#define Tag45(x) (x)
#define Tag46(x) (x)
#define Tag47(x) (x)
#define Tag48(x) (x)
#define Tag49(x) (x)
#define Tag50(x) (x)
#define Tag51(x) (x)
#define Tag52(x) (x)
#define Tag53(x) (x)
#define Tag54(x) (x)
#define Tag55(x) (x)
#define Tag56(x) (x)
#define Tag57(x) (x)
#define Tag58(x) (x)
#define Tag59(x) (x)
#define Tag60(x) (x)
#define Tag61(x) (x)
#define Tag62(x) (x)
#define Tag63(x) (x)
#define Tag64(x) (x)
#define Tag65(x) (x)
#define Tag66(x) (x)
#define Tag67(x) (x)
#define Tag68(x) (x)
#define Tag69(x) (x)
#define Tag70(x) (x)
#define Tag71(x) (x)
#define Tag72(x) (x)
#define Tag73(x) (x)
#define Tag74(x) (x)
#define Tag75(x) (x)
#define Tag76(x) (x)
#define Tag77(x) (x)
#define Tag78(x) (x)
#define Tag79(x) (x)
#define Tag80(x) (x)
#define Tag81(x) (x)
#define Tag82(x) (x)
#define Tag83(x) (x)
#define Tag84(x) (x)
#define Tag85(x) (x)
#define Tag86(x) (x)
#define Tag87(x) (x)
#define Tag88(x) (x)
#define Tag89(x) (x)
#define Tag90(x) (x)
#define Tag91(x) (x)
#define Tag92(x) (x)
#define Tag93(x) (x)
#define Tag94(x) (x)
#define Tag95(x) (x)
#define Tag96(x) (x)
#define Tag97(x) (x)
#define Tag98(x) (x)
#define Tag99(x) (x)
#define Tag100(x) (x)
#define Tag101(x) (x)
#define Tag102(x) (x)
#define Tag103(x) (x)
#define Tag104(x) (x)
#define Tag105(x) (x)
#define Tag106(x) (x)
#define Tag107(x) (x)
#define Tag108(x) (x)
#define Tag109(x) (x)
#define Tag110(x) (x)
#define Tag111(x) (x)
#define Tag112(x) (x)
#define Tag113(x) (x)
#define Tag114(x) (x)
#define Tag115(x) (x)
#define Tag116(x) (x)
#define Tag117(x) (x)
#define Tag118(x) (x)
#define Tag119(x) (x)
#define Tag120(x) (x)
#define Tag121(x) (x)
#define Tag122(x) (x)
#define Tag123(x) (x)
#define Tag124(x) (x)
#define Tag125(x) (x)
#define Tag126(x) (x)
#define Tag127(x) (x)
#define Tag128(x) (x)
#define Tag129(x) (x)
#define Tag130(x) (x)
#define Tag131(x) (x)
#define Tag132(x) (x)
#define Tag133(x) (x)
#define Tag134(x) (x)
#define Tag135(x) (x)
#define Tag136(x) (x)
#define Tag137(x) (x)
#define Tag138(x) (x)
#define Tag139(x) (x)
#define Tag140(x) (x)
#define Tag141(x) (x)
#define Tag142(x) (x)
#define Tag143(x) (x)
#define Tag144(x) (x)
#define Tag145(x) (x)
#define Tag146(x) (x)
#define Tag147(x) (x)
#define Tag148(x) (x)
#define Tag149(x) (x)
#define Tag150(x) (x)
#define Tag151(x) (x)
#define Tag152(x) (x)
#define Tag153(x) (x)
#define Tag154(x) (x)
#define Tag155(x) (x)
#define Tag156(x) (x)
#define Tag157(x) (x)
#define Tag158(x) (x)
#define Tag159(x) (x)
#define Tag160(x) (x)
#define Tag161(x) (x)
#define Tag162(x) (x)
#define Tag163(x) (x)
#define Tag164(x) (x)
#define Tag165(x) (x)
#define Tag166(x) (x)
#define Tag167(x) (x)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output $EXPERIMENTAL_CREAL/batch_experiments/test_20251023_212011/test80/7IA9GI_seed.c
 * Seed:      2130429687
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   const uint8_t  f2;
   int64_t  f3;
   int16_t  f4;
   int8_t  f5;
   const uint64_t  f6;
   const int32_t  f7;
   int64_t  f8;
};

/* --- GLOBAL VARIABLES --- */
static uint32_t g_7 = 4294967295UL;
static struct S0 *g_9 = (void*)0;
static int32_t g_29 = 5L;
static int32_t * const g_28 = &g_29;
static int32_t *g_55 = (void*)0;
static uint8_t g_57 = 255UL;
static struct S0 g_62 = {0xFB07D6E1L,0xCCD29D3EL,246UL,0x19AB6322A57D884BLL,0L,9L,0UL,-1L,0xFA8187147D86C3CELL};
static uint16_t g_71 = 65526UL;
static uint32_t g_73 = 0xCD44262CL;
static int8_t g_114[1][5] = {{0xBDL,0xBDL,0xBDL,0xBDL,0xBDL}};
static int16_t g_118 = 0x4DB2L;
static int32_t g_119[10][6][4] = {{{0xECD0F842L,0x0D521574L,0L,0x68793B77L},{0L,0L,0xA941DAE9L,0x0D521574L},{7L,0xECD0F842L,0x180ABA06L,0xECD0F842L},{0L,(-1L),0L,0xBCF0FF9CL},{(-9L),6L,(-1L),(-9L)},{6L,0xECD0F842L,(-9L),7L}},{{6L,0L,(-1L),0x68793B77L},{(-9L),7L,0L,0L},{0L,0L,0x180ABA06L,7L},{7L,(-9L),0xA941DAE9L,0xECD0F842L},{0L,0x0D521574L,0x180ABA06L,(-9L)},{(-1L),0x0D521574L,7L,(-1L)}},{{0x0D521574L,0x9B7F1410L,8L,0L},{0xE632A9BCL,0x9BD61A28L,0xE632A9BCL,0x180ABA06L},{(-1L),0L,0xBCF0FF9CL,0xA941DAE9L},{0x9BD61A28L,8L,(-9L),0L},{(-9L),(-1L),(-9L),0x9B7F1410L},{0x9BD61A28L,0x0D521574L,0xBCF0FF9CL,0L}},{{(-1L),0xE632A9BCL,0xE632A9BCL,(-1L)},{0xE632A9BCL,(-1L),8L,(-9L)},{0x0D521574L,0x9BD61A28L,7L,0xA941DAE9L},{(-1L),(-9L),0x180ABA06L,0xA941DAE9L},{8L,0x9BD61A28L,(-9L),(-9L)},{0L,(-1L),0L,(-1L)}},{{0x9BD61A28L,0xE632A9BCL,0x180ABA06L,0L},{0x9B7F1410L,0x0D521574L,0xE632A9BCL,0x9B7F1410L},{0x0D521574L,(-1L),0x47723E4DL,0L},{0x0D521574L,8L,0xE632A9BCL,0xA941DAE9L},{0x9B7F1410L,0L,0x180ABA06L,0x180ABA06L},{0x9BD61A28L,0x9BD61A28L,0L,0L}},{{0L,0x9B7F1410L,(-9L),(-1L)},{8L,0x0D521574L,0x180ABA06L,(-9L)},{(-1L),0x0D521574L,7L,(-1L)},{0x0D521574L,0x9B7F1410L,8L,0L},{0xE632A9BCL,0x9BD61A28L,0xE632A9BCL,0x180ABA06L},{(-1L),0L,0xBCF0FF9CL,0xA941DAE9L}},{{0x9BD61A28L,8L,(-9L),0L},{(-9L),(-1L),(-9L),0x9B7F1410L},{0x9BD61A28L,0x0D521574L,0xBCF0FF9CL,0L},{(-1L),0xE632A9BCL,0xE632A9BCL,(-1L)},{0xE632A9BCL,(-1L),8L,(-9L)},{0x0D521574L,0x9BD61A28L,7L,0xA941DAE9L}},{{(-1L),(-9L),0x180ABA06L,0xA941DAE9L},{8L,0x9BD61A28L,(-9L),(-9L)},{0L,(-1L),0L,(-1L)},{0x9BD61A28L,0xE632A9BCL,0x180ABA06L,0L},{0x9B7F1410L,0x0D521574L,0xE632A9BCL,0x9B7F1410L},{0x0D521574L,(-1L),0x47723E4DL,0L}},{{0x0D521574L,8L,0xE632A9BCL,0xA941DAE9L},{0x9B7F1410L,0L,0x180ABA06L,0x180ABA06L},{0x9BD61A28L,0x9BD61A28L,0L,0L},{0L,0x9B7F1410L,(-9L),(-1L)},{8L,0x0D521574L,0x180ABA06L,(-9L)},{(-1L),0x0D521574L,7L,(-1L)}},{{0x0D521574L,0x9B7F1410L,8L,0L},{0xE632A9BCL,0x9BD61A28L,0xE632A9BCL,0x180ABA06L},{(-1L),0L,0xBCF0FF9CL,0xA941DAE9L},{0x9BD61A28L,8L,(-9L),0L},{0xBCF0FF9CL,0xE632A9BCL,0x47723E4DL,7L},{0x27EF2E4FL,(-9L),0L,8L}}};
static int16_t g_122 = (-1L);
static uint32_t g_126 = 3UL;
static uint32_t g_130 = 0xB578CF17L;
static uint32_t g_139 = 0x1A91C28AL;
static uint8_t g_176 = 0UL;
static uint16_t g_238 = 65527UL;
static struct S0 **g_243[2] = {&g_9,&g_9};
static struct S0 ***g_242 = &g_243[0];
static struct S0 ****g_241 = &g_242;
static int16_t g_275 = 0L;
static int8_t g_277 = 1L;
static int32_t g_278 = (-1L);
static uint32_t g_280 = 0x35F32714L;
static uint32_t g_304[2] = {18446744073709551612UL,18446744073709551612UL};
static uint16_t *g_323 = (void*)0;
static int8_t g_363 = 0L;
static int32_t g_376 = 0x4FFE9D0BL;
static int16_t g_377 = (-1L);
static int32_t g_378[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
static int16_t g_379 = (-10L);
static int64_t g_380[8][2][4] = {{{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL},{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL}},{{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL},{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL}},{{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL},{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL}},{{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL},{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL}},{{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL},{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL}},{{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL},{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL}},{{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL},{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL}},{{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL},{0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL,0x96F2B2D53C59B481LL}}};
static uint8_t g_384[5][10] = {{0x9BL,255UL,0xA1L,0xA1L,255UL,0x9BL,0xA1L,0x9DL,0x9BL,0x9BL},{255UL,0x9DL,0x65L,255UL,255UL,0x65L,0x9DL,255UL,4UL,0x9DL},{255UL,0x9BL,0xA1L,0x9DL,0x9BL,0x9BL,0x9DL,0xA1L,0x9BL,255UL},{0x9BL,0x9DL,0xA1L,0x9BL,255UL,0xA1L,0xA1L,255UL,0x9BL,0xA1L},{255UL,255UL,0x65L,0x9DL,255UL,4UL,0x9DL,0x9DL,4UL,255UL}};
static uint32_t g_388 = 0xF5662A3AL;
static uint32_t g_391 = 0xB19036ABL;
static struct S0 g_394 = {0L,0x77997638L,255UL,0x28089FA9871E9C7BLL,0x902DL,0xFDL,0xDE7C1975B9A4AED9LL,0x64FAAABBL,0L};
static uint32_t g_419 = 0x55BCE893L;
static uint64_t g_451 = 6UL;
static uint8_t g_483 = 6UL;
static int8_t g_537 = 0x96L;
static int16_t g_541 = (-2L);
static uint32_t g_544[7][2] = {{0xC7D90080L,0xC7D90080L},{0xC7D90080L,0xC7D90080L},{0xC7D90080L,0xC7D90080L},{0xC7D90080L,0xC7D90080L},{0xC7D90080L,0xC7D90080L},{0xC7D90080L,0xC7D90080L},{0xC7D90080L,0xC7D90080L}};
static int8_t g_565 = 0x27L;
static uint32_t g_567[1][2] = {{0UL,0UL}};
static uint8_t g_600[10] = {253UL,255UL,253UL,253UL,255UL,253UL,253UL,255UL,253UL,253UL};
static int32_t *g_657[4] = {&g_29,&g_29,&g_29,&g_29};
static int64_t g_718 = (-4L);
static uint8_t g_726 = 0xC2L;
static int8_t *g_756 = &g_363;
static int8_t **g_755 = &g_756;
static uint8_t *g_761[7][1][2] = {{{&g_726,&g_726}},{{&g_726,&g_726}},{{&g_726,&g_726}},{{&g_726,&g_726}},{{&g_726,&g_726}},{{&g_726,&g_726}},{{&g_726,&g_726}}};
static uint8_t **g_760 = &g_761[3][0][0];
static struct S0 g_791 = {0xCC8AD50CL,0xA3E61125L,0x35L,0xC352FB0226B493C6LL,-1L,6L,0x13CD236484478288LL,-7L,0x728D82B4AC6260B2LL};
static struct S0 g_793[4][1][8] = {{{{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xAC85E38FL,0UL,254UL,-1L,0xE1EFL,0xAFL,1UL,6L,0x129805A83EE30BCDLL},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xAC85E38FL,0UL,254UL,-1L,0xE1EFL,0xAFL,1UL,6L,0x129805A83EE30BCDLL},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L}}},{{{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L}}},{{{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xAC85E38FL,0UL,254UL,-1L,0xE1EFL,0xAFL,1UL,6L,0x129805A83EE30BCDLL},{0xAC85E38FL,0UL,254UL,-1L,0xE1EFL,0xAFL,1UL,6L,0x129805A83EE30BCDLL},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xAC85E38FL,0UL,254UL,-1L,0xE1EFL,0xAFL,1UL,6L,0x129805A83EE30BCDLL},{0xAC85E38FL,0UL,254UL,-1L,0xE1EFL,0xAFL,1UL,6L,0x129805A83EE30BCDLL},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xAC85E38FL,0UL,254UL,-1L,0xE1EFL,0xAFL,1UL,6L,0x129805A83EE30BCDLL}}},{{{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xA9D054F5L,0x6B1C3DBCL,0x9CL,0x4FBE6D4F4E495037LL,0x3ED1L,9L,0xBCD33A864BEAEB9BLL,8L,-3L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L},{0xE4669808L,0x4B28F7C3L,0x82L,0x179916D8B19BB011LL,-7L,0x52L,0xE14B0DB79A953DB8LL,-2L,0L}}}};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static struct S0 * func_2(uint8_t  p_3, const struct S0  p_4, struct S0 * p_5, struct S0 * p_6);
static struct S0 * func_10(struct S0 * p_11, struct S0 * p_12, uint8_t  p_13, uint64_t  p_14);
static int32_t * func_16(const struct S0 * p_17, const uint32_t  p_18, uint64_t  p_19, uint16_t  p_20);
static uint64_t  func_22(struct S0 * p_23, const struct S0 * p_24, int32_t * const  p_25, uint32_t  p_26, uint32_t  p_27);
static uint32_t  func_30(uint16_t  p_31, int32_t * p_32, uint64_t  p_33, const struct S0 * p_34, struct S0 * const  p_35);
static int32_t * func_36(int32_t  p_37, uint64_t  p_38, uint64_t  p_39);
static uint8_t  func_47(struct S0 * p_48);
static struct S0 * func_49(int64_t  p_50);
static int16_t  func_51(int32_t  p_52, uint16_t  p_53, const uint64_t  p_54);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_9 g_28 g_29 g_57 g_62.f1 g_388 g_130 g_391 g_380 g_384 g_71 g_394.f0 g_394.f4 g_419 g_241 g_242 g_280 g_238 g_278 g_62.f7 g_451 g_376 g_483 g_62.f2 g_55 g_114 g_176 g_62.f8 g_378 g_537 g_544 g_394.f8 g_394.f7 g_243 g_394.f1 g_567 g_122 g_62.f0 g_726 g_73 g_755 g_62.f4 g_277 g_760 g_119 g_756 g_363 g_62.f6 g_379
 * writes: g_29 g_55 g_57 g_62.f1 g_388 g_391 g_238 g_384 g_394.f4 g_419 g_377 g_380 g_394.f8 g_451 g_71 g_483 g_62.f4 g_544 g_242 g_657 g_122 g_565 g_726 g_73
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    const struct S0 l_8 = {-10L,0UL,6UL,0x56E348CC3837ACEDLL,-3L,0L,18446744073709551612UL,-2L,1L};
    struct S0 *l_788 = (void*)0;
    struct S0 **l_789[3];
    struct S0 *l_790 = &g_791;
    struct S0 *l_792 = &g_793[1][0][3];
    int32_t l_794 = 6L;
    int i;
    for (i = 0; i < 3; i++)
        l_789[i] = &g_9;
    /*bef_stmt:93680*/
/*bef_stmt:93680*/
/*bef_stmt:93680*/
/*bef_stmt:93680*/
/*bef_stmt:93680*/
/*bef_stmt:93680*/
l_792 = (l_790 = (l_788 = func_2((6L != Tag1(/*uint32_t:0:0:93680:e*/g_7)), l_8, g_9, func_10(g_9, ((+Tag2(/*const int64_t:93707:93707:93680:e*/l_8.f8)) , (void*)0), Tag3(/*const int16_t:93707:93707:93680:e*/l_8.f4), ((/*TAG4:STA*/((int16_t)(realsmith_proxy_KulvT((int)(l_8.f4)+(-50))+(int)(l_8.f4)-(-3))+l_8.f4)/*TAG4:END:l_8.f4*/ ^ /*TAG5:STA*/((uint32_t)(realsmith_T4Ysq((int)(g_7)+(65), (int)(g_7)+(54), (char)(g_7)+(99), (int)(g_7)+(55))+(int)(g_7)-(0))+g_7)/*TAG5:END:g_7*/) && Tag6(/*uint32_t:0:0:93680:e*/g_7))))));
/*aft_stmt:93680*/
/*aft_stmt:93680*/
/*aft_stmt:93680*/
/*aft_stmt:93680*/
/*aft_stmt:93680*/
/*aft_stmt:93680*/
    /*bef_stmt:93705*/
return Tag7(/*int32_t:93707:93707:93705:e*/l_794);
/*aft_stmt:93705*/
}


/* ------------------------------------------ */
/* 
 * reads : g_567 g_28 g_29 g_9 g_7 g_57 g_388 g_130 g_391 g_122 g_62.f0 g_238 g_394.f4 g_380 g_71 g_114 g_726 g_241 g_242 g_243 g_73 g_544 g_755 g_62.f4 g_451 g_277 g_760 g_119 g_756 g_363 g_62.f6 g_62.f8 g_379
 * writes: g_29 g_55 g_57 g_62.f1 g_388 g_391 g_657 g_122 g_565 g_238 g_71 g_419 g_726 g_73 g_544
 */
static struct S0 * func_2(uint8_t  p_3, const struct S0  p_4, struct S0 * p_5, struct S0 * p_6)
{ /* block id: 313 */
    uint32_t *l_658[4];
    uint32_t *l_660 = &g_304[1];
    uint32_t **l_659 = &l_660;
    int32_t l_664 = 0xC9CCD4F2L;
    int8_t *l_675 = &g_277;
    int32_t l_717 = 0x157E8DE8L;
    int32_t l_720 = 0xEB7F5C01L;
    int32_t l_723 = 0x4D6E5A41L;
    int32_t l_724 = (-7L);
    int32_t l_725[6] = {0x3F0F50A3L,0x3F0F50A3L,0x3F0F50A3L,0x3F0F50A3L,0x3F0F50A3L,0x3F0F50A3L};
    uint8_t **l_764[8];
    const struct S0 *l_768[1];
    const struct S0 **l_767[3][6][2] = {{{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]}},{{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]}},{{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]},{&l_768[0],&l_768[0]}}};
    const struct S0 ***l_766[5][8][3] = {{{&l_767[0][1][1],&l_767[0][1][1],&l_767[0][1][1]},{&l_767[0][1][1],&l_767[2][0][1],&l_767[1][5][1]},{&l_767[2][1][0],(void*)0,&l_767[1][2][0]},{(void*)0,&l_767[0][1][1],&l_767[0][1][1]},{&l_767[1][0][0],&l_767[0][1][1],&l_767[1][1][0]},{&l_767[2][3][1],&l_767[2][4][1],(void*)0},{&l_767[0][1][1],&l_767[1][0][0],(void*)0},{&l_767[1][3][1],&l_767[1][0][0],&l_767[0][1][1]}},{{&l_767[0][1][1],&l_767[2][4][1],&l_767[0][5][0]},{&l_767[1][1][1],&l_767[0][1][1],&l_767[0][1][1]},{&l_767[2][4][1],&l_767[0][1][1],&l_767[2][0][1]},{&l_767[0][1][1],(void*)0,&l_767[0][1][1]},{(void*)0,&l_767[2][0][1],(void*)0},{&l_767[2][0][1],&l_767[0][1][1],&l_767[1][0][0]},{&l_767[1][5][1],&l_767[1][1][0],&l_767[2][0][1]},{&l_767[0][1][1],(void*)0,&l_767[0][1][1]}},{{&l_767[1][5][1],&l_767[1][3][1],(void*)0},{&l_767[2][0][1],&l_767[0][1][1],&l_767[0][1][1]},{(void*)0,(void*)0,&l_767[2][3][1]},{&l_767[0][1][1],&l_767[0][1][1],(void*)0},{&l_767[2][4][1],(void*)0,(void*)0},{&l_767[1][1][1],(void*)0,&l_767[0][1][1]},{&l_767[0][1][1],&l_767[0][1][1],(void*)0},{&l_767[1][3][1],&l_767[1][5][1],(void*)0}},{{&l_767[0][1][1],&l_767[0][1][1],&l_767[0][1][1]},{&l_767[2][3][1],&l_767[2][1][0],(void*)0},{&l_767[1][0][0],&l_767[0][1][1],(void*)0},{(void*)0,&l_767[2][3][1],&l_767[2][3][1]},{&l_767[2][1][0],&l_767[0][1][1],&l_767[0][1][1]},{&l_767[0][1][1],&l_767[1][5][1],(void*)0},{&l_767[0][1][1],&l_767[1][1][1],&l_767[0][1][1]},{&l_767[0][1][1],&l_767[0][1][1],&l_767[2][0][1]}},{{&l_767[0][1][1],&l_767[1][1][1],&l_767[1][0][0]},{&l_767[1][1][0],&l_767[1][5][1],(void*)0},{&l_767[0][1][1],&l_767[0][1][1],&l_767[0][1][1]},{(void*)0,&l_767[2][3][1],&l_767[2][0][1]},{&l_767[0][1][1],&l_767[0][1][1],&l_767[0][1][1]},{(void*)0,&l_767[2][1][0],&l_767[0][5][0]},{&l_767[1][5][1],&l_767[0][1][1],&l_767[0][1][1]},{(void*)0,&l_767[1][5][1],(void*)0}}};
    const struct S0 ****l_765[4][1] = {{&l_766[4][4][2]},{&l_766[4][4][2]},{&l_766[4][4][2]},{&l_766[4][4][2]}};
    int8_t l_775 = (-1L);
    int16_t l_785 = 2L;
    int16_t *l_786[3][7][3] = {{{&g_275,&g_118,(void*)0},{&g_379,(void*)0,&l_785},{&g_118,&g_118,&g_394.f4},{&g_394.f4,(void*)0,&l_785},{&g_275,&g_379,&g_379},{(void*)0,&g_394.f4,(void*)0},{&g_379,&g_275,&g_379}},{{&l_785,&l_785,&l_785},{&g_118,(void*)0,&g_394.f4},{&g_394.f4,&g_394.f4,&g_394.f4},{&g_118,&l_785,&l_785},{&g_394.f4,&l_785,(void*)0},{&g_118,(void*)0,&g_118},{&l_785,(void*)0,&g_394.f4}},{{&g_379,&g_394.f4,&g_122},{(void*)0,(void*)0,&g_541},{&g_275,(void*)0,&g_377},{&g_394.f4,&l_785,&g_62.f4},{&g_118,&l_785,(void*)0},{&g_62.f4,&g_394.f4,&g_62.f4},{&g_377,(void*)0,&g_377}}};
    struct S0 *l_787 = &g_394;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_658[i] = &g_304[0];
    for (i = 0; i < 8; i++)
        l_764[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_768[i] = &g_62;
    if ((l_658[0] == ((*l_659) = l_658[0])))
    { /* block id: 315 */
        uint32_t l_661 = 0xC754A2FBL;
        int32_t **l_662 = (void*)0;
        int32_t **l_663 = &g_657[3];
        /*bef_stmt:103771*/
/*bef_stmt:103771*/
/*bef_stmt:103771*/
(*l_663) = func_36((Tag8(/*uint8_t:119555:119555:103771:e*/p_3) | 0x6F740F60L), Tag9(/*uint32_t:103775:119555:103771:e*/l_661), /*TAG10:STA*/((uint32_t)(realsmith_SPXUr()+(int)(g_567[0][0])-(-11))+g_567[0][0])/*TAG10:END:g_567[0][0]*/);
/*aft_stmt:103771*/
/*aft_stmt:103771*/
/*aft_stmt:103771*/
    }
    else
    { /* block id: 317 */
        int16_t *l_668 = &g_122;
        struct S0 l_669 = {-1L,0x65F7A293L,0UL,-1L,0L,0x99L,18446744073709551612UL,0x1170BA5EL,-6L};
        int8_t *l_670 = &g_565;
        int8_t *l_676 = &g_394.f5;
        uint32_t *l_682 = &g_139;
        uint16_t l_683 = 0x7843L;
        int32_t l_703[2];
        int32_t l_704 = (-3L);
        int i;
        for (i = 0; i < 2; i++)
            l_703[i] = 5L;
/*bef_stmt:104668*/
/*bef_stmt:104668*/
/*bef_stmt:104668*/
/*bef_stmt:104668*/
/*bef_stmt:104668*/
/*bef_stmt:104668*/
/*bef_stmt:104668*/
/*bef_stmt:104668*/
/*bef_stmt:104668*/
lbl_735:
        g_657[3] = func_36(Tag11(/*const int64_t:119555:119555:104668:e*/p_4.f3), Tag12(/*int32_t:119555:119555:104668:e*/l_664), (((((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(((*l_668) ^= Tag13(/*uint8_t:0:0:104668:e*/g_57)))) , (l_669 , Tag14(/*int32_t:0:0:104668:e*/g_62.f0))), ((*l_670) = Tag15(/*int32_t:119555:119555:104668:e*/l_664)))) != ((g_238 |= 65535UL) , (safe_mul_func_int16_t_s_s((0x9B984513L && (safe_mod_func_int32_t_s_s(((l_675 == l_676) , Tag16(/*const uint32_t:119555:119555:104668:e*/p_4.f1)), Tag17(/*const int64_t:119555:119555:104668:e*/p_4.f3)))), Tag18(/*int32_t:119555:119555:104668:e*/l_664))))) == 0x739EL) , Tag19(/*const int32_t:119555:119555:104668:e*/p_4.f0)) == 0L));
/*aft_stmt:104668*/
/*aft_stmt:104668*/
/*aft_stmt:104668*/
/*aft_stmt:104668*/
/*aft_stmt:104668*/
/*aft_stmt:104668*/
/*aft_stmt:104668*/
/*aft_stmt:104668*/
/*aft_stmt:104668*/
        for (g_238 = (-3); (g_238 >= 7); g_238++)
        { /* block id: 324 */
            int8_t l_700 = 0xEFL;
            uint8_t l_701[5][10][1] = {{{1UL},{0x48L},{0xEEL},{252UL},{248UL},{249UL},{5UL},{255UL},{255UL},{5UL}},{{249UL},{248UL},{252UL},{0xEEL},{0x48L},{1UL},{2UL},{0xA4L},{2UL},{1UL}},{{0x48L},{0xEEL},{252UL},{248UL},{249UL},{5UL},{255UL},{255UL},{5UL},{249UL}},{{248UL},{252UL},{0xEEL},{0x48L},{1UL},{2UL},{0xA4L},{2UL},{1UL},{0x48L}},{{0xEEL},{252UL},{248UL},{249UL},{5UL},{255UL},{255UL},{5UL},{249UL},{248UL}}};
            uint16_t *l_702[10][6][4] = {{{&g_238,&l_683,&l_683,&l_683},{(void*)0,(void*)0,&l_683,(void*)0},{&g_238,&g_238,(void*)0,&g_238},{&l_683,&g_238,&g_238,(void*)0},{&g_238,(void*)0,&g_238,&l_683},{&g_238,&l_683,&g_238,&g_71}},{{&l_683,&l_683,(void*)0,&g_71},{&g_238,&l_683,&l_683,&l_683},{(void*)0,(void*)0,&l_683,(void*)0},{&g_238,&g_238,(void*)0,&g_238},{&l_683,&g_238,&g_238,(void*)0},{&g_238,(void*)0,&g_238,&l_683}},{{&g_238,&l_683,&g_238,&g_71},{&l_683,&l_683,(void*)0,&g_71},{&g_238,&l_683,&l_683,&l_683},{(void*)0,(void*)0,&l_683,(void*)0},{&g_238,&g_238,(void*)0,&g_238},{&l_683,&g_238,&g_238,(void*)0}},{{&g_238,(void*)0,&g_238,&l_683},{&g_238,&l_683,&g_238,&g_71},{&l_683,&l_683,(void*)0,&g_71},{&g_238,&l_683,&g_238,&g_71},{(void*)0,&g_238,&g_238,&g_238},{&l_683,&l_683,&l_683,&l_683}},{{&g_238,&l_683,(void*)0,&g_238},{(void*)0,&g_238,&l_683,&g_71},{(void*)0,&g_71,(void*)0,&g_238},{&g_238,&g_71,&l_683,&g_238},{&l_683,&g_71,&g_238,&g_71},{(void*)0,&g_238,&g_238,&g_238}},{{&l_683,&l_683,&l_683,&l_683},{&g_238,&l_683,(void*)0,&g_238},{(void*)0,&g_238,&l_683,&g_71},{(void*)0,&g_71,(void*)0,&g_238},{&g_238,&g_71,&l_683,&g_238},{&l_683,&g_71,&g_238,&g_71}},{{(void*)0,&g_238,&g_238,&g_238},{&l_683,&l_683,&l_683,&l_683},{&g_238,&l_683,(void*)0,&g_238},{(void*)0,&g_238,&l_683,&g_71},{(void*)0,&g_71,(void*)0,&g_238},{&g_238,&g_71,&l_683,&g_238}},{{&l_683,&g_71,&g_238,&g_71},{(void*)0,&g_238,&g_238,&g_238},{&l_683,&l_683,&l_683,&l_683},{&g_238,&l_683,(void*)0,&g_238},{(void*)0,&g_238,&l_683,&g_71},{(void*)0,&g_71,(void*)0,&g_238}},{{&g_238,&g_71,&l_683,&g_238},{&l_683,&g_71,&g_238,&g_71},{(void*)0,&g_238,&g_238,&g_238},{&l_683,&l_683,&l_683,&l_683},{&g_238,&l_683,(void*)0,&g_238},{(void*)0,&g_238,&l_683,&g_71}},{{(void*)0,&g_71,(void*)0,&g_238},{&g_238,&g_71,&l_683,&g_238},{&l_683,&g_71,&g_238,&g_71},{(void*)0,&g_238,&g_238,&g_238},{&l_683,&l_683,&l_683,&l_683},{&g_238,&l_683,(void*)0,&g_238}}};
            int32_t l_714 = (-3L);
            int32_t l_715 = 0x95C2C738L;
            int32_t l_716 = 0x7A236A14L;
            int32_t l_719[3];
            int8_t l_721 = 0L;
            struct S0 l_738 = {0xBE1C81B3L,4294967291UL,1UL,0x60583FB754941AB0LL,0xA8DFL,0x3CL,0UL,-8L,8L};
            int8_t **l_757[1];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_719[i] = 0x8032C116L;
            for (i = 0; i < 1; i++)
                l_757[i] = &l_675;
            /*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
/*bef_stmt:112358*/
(*g_28) ^= ((~((safe_mod_func_int16_t_s_s((((void*)0 == l_682) < Tag20(/*uint16_t:118436:119555:112358:e*/l_683)), ((safe_mul_func_uint8_t_u_u((Tag21(/*const int16_t:119555:119555:112358:e*/p_4.f4) <= Tag22(/*int16_t:0:0:112358:e*/g_394.f4)), ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(0xD918A401L, ((((safe_rshift_func_uint16_t_u_s((l_703[0] = (g_71 = (((Tag23(/*const uint64_t:119555:119555:112358:e*/p_4.f6) ^ (safe_div_func_int64_t_s_s(((Tag24(/*int64_t:0:0:112358:e*/g_380[2][1][2]) < (safe_div_func_uint64_t_u_u(((+(safe_sub_func_uint16_t_u_u(((!Tag25(/*const int64_t:119555:119555:112358:e*/p_4.f8)) >= Tag26(/*int8_t:118411:118436:112358:e*/l_700)), Tag27(/*int8_t:118411:118436:112358:e*/l_700)))) < 0xC5F78FB2L), Tag28(/*uint8_t:118411:118436:112358:e*/l_701[1][1][0])))) > Tag29(/*int32_t:119555:119555:112358:e*/l_664)), Tag30(/*uint16_t:0:0:112358:e*/g_71)))) , 0x3BL) < Tag31(/*int8_t:0:0:112358:e*/g_114[0][1])))), 1)) | 0xCBL) , Tag32(/*uint8_t:118411:118436:112358:e*/l_701[1][1][0])) | Tag33(/*const int64_t:119555:119555:112358:e*/p_4.f3)))), Tag34(/*const uint64_t:119555:119555:112358:e*/p_4.f6))) >= Tag35(/*const int16_t:119555:119555:112358:e*/p_4.f4)))) & Tag36(/*int32_t:118436:119555:112358:e*/l_704)))) <= Tag37(/*uint8_t:118411:118436:112358:e*/l_701[1][1][0]))) > 0xF475C936784AAD12LL);
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
/*aft_stmt:112358*/
            for (g_29 = 0; (g_29 < 6); g_29 = safe_add_func_uint8_t_u_u(g_29, 7))
            { /* block id: 330 */
                const struct S0 *l_708 = &g_62;
                const struct S0 **l_707 = &l_708;
                int32_t *l_709[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_709[i] = &g_29;
                (*l_707) = &p_4;
                g_55 = l_709[1];
                /*bef_stmt:117141*/
if (Tag38(/*int8_t:118411:118436:117141:e*/l_700))
                { /* block id: 333 */
                    int32_t *l_712 = (void*)0;
                    int32_t l_722[6] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
                    int i;
                    for (g_419 = (-17); (g_419 >= 49); g_419++)
                    { /* block id: 336 */
                        int32_t **l_713 = &g_657[3];
                        (*l_713) = l_712;
                    }
                    /*bef_stmt:113058*/
if (Tag39(/*uint8_t:118411:118436:113058:e*/l_701[1][1][0]))
                        continue;
/*aft_stmt:113058*/
                    ++g_726;
                    for (g_726 = 0; (g_726 <= 20); g_726 = safe_add_func_uint64_t_u_u(g_726, 2))
                    { /* block id: 343 */
                        struct S0 *l_731[9][5][5] = {{{(void*)0,&g_62,&g_62,&g_62,&g_62},{(void*)0,&g_394,&g_62,&g_62,&g_62},{&g_62,(void*)0,&l_669,&g_394,(void*)0},{&g_62,(void*)0,&g_62,&g_394,&g_394},{&g_394,&g_62,&l_669,&g_62,(void*)0}},{{&g_394,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_62,&l_669,(void*)0,&g_62},{&l_669,&g_394,&g_394,&l_669,&g_394},{&g_62,&g_62,(void*)0,&g_62,(void*)0},{(void*)0,&g_62,&l_669,(void*)0,(void*)0}},{{&g_62,&g_62,(void*)0,&g_62,&g_62},{&g_62,(void*)0,&l_669,&l_669,&g_62},{&g_394,&g_62,&g_62,(void*)0,(void*)0},{(void*)0,(void*)0,&g_62,(void*)0,&g_62},{&g_62,&l_669,&g_62,&g_394,&l_669}},{{&l_669,&l_669,(void*)0,&g_62,&g_62},{&g_62,(void*)0,&g_62,&g_62,&l_669},{&g_62,&g_62,&l_669,&g_62,&g_62},{&g_62,(void*)0,&g_394,(void*)0,&g_62},{&l_669,&g_62,&g_62,&g_62,&l_669}},{{&g_394,&g_62,(void*)0,(void*)0,&g_62},{&g_62,&g_62,&g_394,&g_62,&g_62},{&g_62,&g_394,(void*)0,(void*)0,&l_669},{&g_394,&g_62,&g_62,&l_669,&g_62},{&g_394,(void*)0,&g_394,&g_394,&l_669}},{{&g_62,&g_62,&g_394,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_394,(void*)0},{&l_669,&g_62,(void*)0,(void*)0,&g_62},{&g_62,&g_62,&g_394,&l_669,&g_62},{&g_62,&g_62,(void*)0,&l_669,(void*)0}},{{&g_62,&l_669,&g_62,&g_62,(void*)0},{&g_62,&g_394,&g_394,&g_394,&g_394},{&g_62,&l_669,&l_669,(void*)0,&g_62},{&l_669,&l_669,&g_62,&g_62,&g_62},{&g_62,(void*)0,(void*)0,&g_62,(void*)0}},{{&g_62,(void*)0,&g_62,&g_62,&g_62},{&g_394,&g_62,&g_62,&g_62,&g_394},{&g_394,&g_394,&g_62,(void*)0,&g_62},{&g_62,&g_62,&l_669,&g_394,&g_62},{&g_62,(void*)0,(void*)0,&g_62,&g_62}},{{&g_394,&l_669,&l_669,&l_669,(void*)0},{&l_669,(void*)0,(void*)0,&l_669,&l_669},{&g_62,&g_62,&g_394,(void*)0,(void*)0},{&g_62,&g_394,&l_669,&g_394,&g_394},{&g_62,&g_394,&g_62,&g_394,&g_394}}};
                        int i, j, k;
                        return (***g_241);
                    }
                }
                else
                { /* block id: 346 */
                    for (l_669.f5 = 1; (l_669.f5 >= 0); l_669.f5 -= 1)
                    { /* block id: 349 */
                        uint8_t l_732 = 0x0FL;
                        --l_732;
                    }
                }
/*aft_stmt:117141*/
                /*bef_stmt:117163*/
if (Tag40(/*uint32_t:118436:119555:117163:e*/l_669.f1))
                    goto lbl_735;
/*aft_stmt:117163*/
            }
            for (g_73 = 21; (g_73 < 50); g_73 = safe_add_func_int32_t_s_s(g_73, 1))
            { /* block id: 357 */
                const int64_t l_758 = 0x7B3170294C4F757BLL;
                struct S0 l_759 = {0xF34A4ECDL,0UL,1UL,0x12AEEE380B185D49LL,0L,0L,0xF14313F828FBF7F1LL,0xF218A656L,-1L};
                uint8_t ***l_762 = (void*)0;
                uint8_t **l_763 = &g_761[1][0][0];
                /*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
/*bef_stmt:118148*/
(*g_28) &= (((l_669 , (Tag41(/*const int32_t:119555:119555:118148:e*/p_4.f0) >= (((((l_738 , (Tag42(/*const uint8_t:119555:119555:118148:e*/p_4.f2) , (((safe_sub_func_uint16_t_u_u(Tag43(/*uint32_t:0:0:118148:e*/g_544[5][0]), ((safe_sub_func_uint16_t_u_u(0xC936L, (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((0xAB73D9C547C7F43BLL || (safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((g_755 != (l_757[0] = &g_756)) < 5UL), Tag44(/*int16_t:0:0:118148:e*/g_62.f4))), Tag45(/*uint64_t:0:0:118148:e*/g_451))) <= Tag46(/*int32_t:119555:119555:118148:e*/l_724)), Tag47(/*int64_t:0:0:118148:e*/g_380[6][1][1]))), 7))), Tag48(/*const int64_t:118396:118411:118148:e*/l_758))), 1)))) && Tag49(/*const int32_t:119555:119555:118148:e*/p_4.f0)))) & 0x0979L) <= Tag50(/*const uint32_t:119555:119555:118148:e*/p_4.f1)))) | (-6L)) == Tag51(/*uint8_t:119555:119555:118148:e*/p_3)) == 0xEB79B3968B45CC10LL) , Tag52(/*const uint64_t:119555:119555:118148:e*/p_4.f6)))) > 0x030FL) > Tag53(/*int8_t:0:0:118148:e*/g_277));
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
/*aft_stmt:118148*/
                /*bef_stmt:118390*/
/*bef_stmt:118390*/
l_719[2] ^= ((*g_28) = (l_759 , ((((l_763 = g_760) != l_764[5]) == (Tag54(/*const int32_t:119555:119555:118390:e*/p_4.f0) > Tag55(/*const int32_t:119555:119555:118390:e*/p_4.f0))) == ((void*)0 == l_765[2][0]))));
/*aft_stmt:118390*/
/*aft_stmt:118390*/
            }
        }
    }
    /*bef_stmt:118980*/
/*bef_stmt:118980*/
/*bef_stmt:118980*/
/*bef_stmt:118980*/
/*bef_stmt:118980*/
/*bef_stmt:118980*/
/*bef_stmt:118980*/
/*bef_stmt:118980*/
l_717 = ((*g_28) = (Tag56(/*int32_t:0:0:118980:e*/g_119[9][5][2]) && (safe_mod_func_int8_t_s_s(((g_544[4][1] |= Tag57(/*const uint8_t:119555:119555:118980:e*/p_4.f2)) | (safe_rshift_func_uint8_t_u_s(((l_664 = (&g_29 == ((safe_mul_func_uint8_t_u_u((p_3 = ((Tag58(/*const int32_t:119555:119555:118980:e*/p_4.f0) || 0x08A5D25098221674LL) >= ((l_764[5] == &g_761[1][0][1]) || (p_4 , ((/*TAG59:STA*/((int32_t)(realsmith_4EG1e((int)(l_725[5])+(-1057968215), (int)(l_725[5])+(-1057968216), (int)(l_725[5])+(-1057968260))+(int)(l_725[5])-(1057968322))+l_725[5])/*TAG59:END:l_725[5]*/ , Tag60(/*int8_t:119555:119555:118980:e*/l_775)) | Tag61(/*int32_t:119555:119555:118980:e*/l_724)))))), 1UL)) , &l_725[3]))) , Tag62(/*int32_t:119555:119555:118980:e*/l_664)), (/*TAG63:STA*/((int8_t)(realsmith_nl1Mm((int)(*g_756)+(63), (int)(*g_756)+(27), (int)(*g_756)+(76))+(int)(*g_756)-(1))+*g_756)/*TAG63:END:*g_756*/)))), 0xDDL))));
/*aft_stmt:118980*/
/*aft_stmt:118980*/
/*aft_stmt:118980*/
/*aft_stmt:118980*/
/*aft_stmt:118980*/
/*aft_stmt:118980*/
/*aft_stmt:118980*/
/*aft_stmt:118980*/
    /*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
/*bef_stmt:119540*/
(*g_28) |= (+(((Tag64(/*int32_t:119555:119555:119540:e*/l_725[5]) ^ ((safe_rshift_func_uint16_t_u_s(/*TAG65:STA*/((uint8_t)(realsmith_proxy_YQdM2((unsigned int)(p_3)+(-1), (int)(p_3)+(2))+(int)(p_3)-(2))+p_3)/*TAG65:END:p_3*/, 11)) < (g_122 = ((/*TAG66:STA*/((int32_t)(realsmith_mJycR((int)(p_4.f7)+(102))+(long)(p_4.f7)-(105))+p_4.f7)/*TAG66:END:p_4.f7*/ && (safe_sub_func_int16_t_s_s(Tag67(/*int8_t:119555:119555:119540:e*/l_775), 0xAAE0L))) == (((7L != (Tag68(/*const uint64_t:0:0:119540:e*/g_62.f6) >= (safe_lshift_func_int8_t_s_u((Tag69(/*int64_t:0:0:119540:e*/g_62.f8) >= ((((safe_lshift_func_int8_t_s_s(/*TAG70:STA*/((int16_t)(realsmith_proxy_JHN8g((char)(l_785)+(-7), (int)(l_785)+(76))+(char)(l_785)-(50))+l_785)/*TAG70:END:l_785*/, 4)) & /*TAG71:STA*/((int64_t)(realsmith_lRAgj((int)(g_380[6][1][1])+(-1012511822), (int)(g_380[6][1][1])+(-1012511831))+(int)(g_380[6][1][1])-(1012511873))+g_380[6][1][1])/*TAG71:END:g_380[6][1][1]*/) | 0x40L) <= /*TAG72:STA*/((int64_t)(realsmith_GTQ0O((int)(p_4.f3)+(-943172798))+(unsigned int)(p_4.f3)-(943173599))+p_4.f3)/*TAG72:END:p_4.f3*/)), 0)))) == Tag73(/*int16_t:0:0:119540:e*/g_379)) != /*TAG74:STA*/((int32_t)(realsmith_V8gK3((int)(l_725[0])+(-1057968223))+(int)(l_725[0])-(1057968360))+l_725[0])/*TAG74:END:l_725[0]*/))))) , (void*)0) == l_786[0][1][2]));
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
/*aft_stmt:119540*/
    return l_787;
}


/* ------------------------------------------ */
/* 
 * reads : g_9 g_28 g_7 g_29 g_57 g_62.f1 g_388 g_130 g_391 g_380 g_384 g_71 g_394.f0 g_394.f4 g_419 g_241 g_242 g_280 g_238 g_278 g_62.f7 g_451 g_376 g_483 g_62.f2 g_55 g_114 g_176 g_62.f8 g_378 g_537 g_544 g_394.f8 g_394.f7 g_243 g_394.f1
 * writes: g_29 g_55 g_57 g_62.f1 g_388 g_391 g_238 g_384 g_394.f4 g_419 g_377 g_380 g_394.f8 g_451 g_71 g_483 g_62.f4 g_544 g_242 g_657
 */
static struct S0 * func_10(struct S0 * p_11, struct S0 * p_12, uint8_t  p_13, uint64_t  p_14)
{ /* block id: 1 */
    const int32_t l_21 = 0x65E1BFEDL;
    struct S0 * const l_393 = &g_394;
    uint64_t *l_637 = &g_451;
    int32_t **l_656[4] = {&g_55,&g_55,&g_55,&g_55};
    int i;
    /*bef_stmt:120225*/
/*bef_stmt:120225*/
/*bef_stmt:120225*/
/*bef_stmt:120225*/
/*bef_stmt:120225*/
/*bef_stmt:120225*/
/*bef_stmt:120225*/
/*bef_stmt:120225*/
g_657[3] = func_16(g_9, Tag75(/*const int32_t:120271:120271:120225:e*/l_21), ((*l_637) = func_22(p_12, p_11, g_28, Tag76(/*uint64_t:120271:120271:120225:e*/p_14), func_30(/*TAG77:STA*/((uint32_t)(realsmith_Puc4k((unsigned long)(g_7)+(-4294967236))-(-190)+(unsigned long)(g_7)-(4294967295))+g_7)/*TAG77:END:g_7*/, func_36((Tag78(/*int32_t:0:0:120225:e*/*g_28)), Tag79(/*uint8_t:120271:120271:120225:e*/p_13), Tag80(/*const int32_t:120271:120271:120225:e*/l_21)), Tag81(/*int64_t:0:0:120225:e*/g_380[6][1][1]), p_12, l_393))), Tag82(/*uint64_t:120271:120271:120225:e*/p_14));
/*aft_stmt:120225*/
/*aft_stmt:120225*/
/*aft_stmt:120225*/
/*aft_stmt:120225*/
/*aft_stmt:120225*/
/*aft_stmt:120225*/
/*aft_stmt:120225*/
/*aft_stmt:120225*/
    return (***g_241);
}


/* ------------------------------------------ */
/* 
 * reads : g_384 g_394.f7 g_483 g_241 g_242 g_243 g_376 g_378 g_394.f1 g_28 g_29
 * writes: g_483 g_242 g_29
 */
static int32_t * func_16(const struct S0 * p_17, const uint32_t  p_18, uint64_t  p_19, uint16_t  p_20)
{ /* block id: 304 */
    uint32_t l_642 = 0xDFAF91B1L;
    int32_t l_643 = 7L;
    uint32_t *l_651 = &g_280;
    uint8_t *l_652 = &g_483;
    struct S0 ***l_653 = &g_243[1];
    /*bef_stmt:121085*/
/*bef_stmt:121085*/
/*bef_stmt:121085*/
/*bef_stmt:121085*/
/*bef_stmt:121085*/
/*bef_stmt:121085*/
/*bef_stmt:121085*/
/*bef_stmt:121085*/
/*bef_stmt:121085*/
/*bef_stmt:121085*/
(*g_28) ^= ((p_19 = ((safe_sub_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((l_643 = /*TAG83:STA*/((uint32_t)(realsmith_JMj5V()+(int)(l_642)-(-542142031))+l_642)/*TAG83:END:l_642*/), (/*TAG84:STA*/((uint8_t)(realsmith_3cBEF((int)(g_384[0][7])+(-125), (int)(g_384[0][7])+(-60))+(int)(g_384[0][7])-(159))+g_384[0][7])/*TAG84:END:g_384[0][7]*/ < (Tag85(/*uint64_t:121100:121100:121085:e*/p_19) ^ (safe_sub_func_uint8_t_u_u(Tag86(/*const int32_t:0:0:121085:e*/g_394.f7), (safe_div_func_int8_t_s_s((~((safe_add_func_uint16_t_u_u(((((*l_652) ^= (l_651 != (void*)0)) | (((*g_241) = (*g_241)) == l_653)) != (safe_mul_func_int8_t_s_s((&p_17 == (*l_653)), Tag87(/*const uint32_t:121100:121100:121085:e*/p_18)))), Tag88(/*int32_t:0:0:121085:e*/g_376))) ^ 1L)), 0x4BL)))))))) , Tag89(/*int32_t:0:0:121085:e*/g_378[1])) <= Tag90(/*uint64_t:121100:121100:121085:e*/p_19)), Tag91(/*const uint32_t:121100:121100:121085:e*/p_18))) & /*TAG92:STA*/((uint32_t)(realsmith_Kq6Wj((int)(g_394.f1)+(-2006545937))+(int)(g_394.f1)-(2006545976))+g_394.f1)/*TAG92:END:g_394.f1*/)) == 18446744073709551615UL);
/*aft_stmt:121085*/
/*aft_stmt:121085*/
/*aft_stmt:121085*/
/*aft_stmt:121085*/
/*aft_stmt:121085*/
/*aft_stmt:121085*/
/*aft_stmt:121085*/
/*aft_stmt:121085*/
/*aft_stmt:121085*/
/*aft_stmt:121085*/
    return &g_29;
}


/* ------------------------------------------ */
/* 
 * reads : g_241 g_242 g_28 g_29 g_384 g_280 g_238 g_278 g_380 g_62.f7 g_451 g_376 g_483 g_62.f2 g_71 g_55 g_114 g_7 g_176 g_62.f8 g_378 g_537 g_544 g_394.f8
 * writes: g_55 g_377 g_29 g_419 g_380 g_394.f8 g_451 g_71 g_483 g_384 g_62.f4 g_544
 */
static uint64_t  func_22(struct S0 * p_23, const struct S0 * p_24, int32_t * const  p_25, uint32_t  p_26, uint32_t  p_27)
{ /* block id: 222 */
    int32_t **l_422 = &g_55;
    int16_t *l_428 = &g_377;
    int32_t l_482 = 3L;
    int32_t l_581 = 0x5DCB3628L;
    struct S0 l_621 = {0x6448941DL,0x168A9AB6L,5UL,0x7A04CEC2F5A4CBF8LL,-7L,1L,1UL,-1L,0xEB6C835080BE0762LL};
lbl_538:
    (*l_422) = p_25;
    for (p_26 = 0; (p_26 >= 1); p_26 = safe_add_func_int16_t_s_s(p_26, 2))
    { /* block id: 226 */
        uint64_t l_455[7];
        int32_t l_461 = 0xD7538749L;
        struct S0 *l_534 = &g_394;
        uint16_t l_535 = 7UL;
        int32_t l_536[9];
        int i;
        for (i = 0; i < 7; i++)
            l_455[i] = 1UL;
        for (i = 0; i < 9; i++)
            l_536[i] = 0L;
        for (g_377 = 0; (g_377 <= 3); g_377 += 1)
        { /* block id: 229 */
            int8_t l_431 = 1L;
            int32_t *l_463 = &l_461;
            int32_t l_467 = 9L;
            int32_t l_471 = 0x9017054DL;
            int8_t *l_562 = &g_277;
            const int32_t l_580 = 0x32B87569L;
            (*g_28) &= ((*g_241) == (*g_241));
            for (g_419 = 0; (g_419 <= 3); g_419 += 1)
            { /* block id: 233 */
                const int32_t l_425 = (-4L);
                int8_t *l_432 = &l_431;
                int64_t *l_448 = &g_380[2][0][1];
                int64_t *l_449 = &g_394.f8;
                uint64_t *l_450 = &g_451;
                int32_t *l_462 = &g_29;
                uint64_t l_533 = 0x518AA6FBDC7FCA74LL;
                int32_t l_542[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_542[i] = (-1L);
                /*bef_stmt:122586*/
if (Tag93(/*const int32_t:127434:127455:122586:e*/l_425))
                    break;
/*aft_stmt:122586*/
                /*bef_stmt:127428*/
/*bef_stmt:127428*/
/*bef_stmt:127428*/
/*bef_stmt:127428*/
/*bef_stmt:127428*/
/*bef_stmt:127428*/
if ((safe_add_func_uint16_t_u_u(((void*)0 == l_428), ((safe_rshift_func_int8_t_s_s(((*l_432) = (0x2E1EDE2DL >= Tag94(/*int8_t:127455:127472:127428:e*/l_431))), (~(safe_sub_func_int64_t_s_s(((safe_add_func_int16_t_s_s(Tag95(/*uint8_t:0:0:127428:e*/g_384[4][9]), (-1L))) | p_26), Tag96(/*uint32_t:0:0:127428:e*/g_280)))))) < (safe_mod_func_uint64_t_u_u(((*l_450) = (safe_add_func_int64_t_s_s(((*l_449) = ((*l_448) ^= ((safe_sub_func_int32_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((Tag97(/*const int32_t:127434:127455:127428:e*/l_425) || 1UL), 7)), 0x91L)) <= 0x01D432DFEADECD47LL) & p_26) ^ 0x2C94C3D77D111FC7LL), Tag98(/*uint16_t:0:0:127428:e*/g_238))) , Tag99(/*int32_t:0:0:127428:e*/g_278)))), 0x2E9C4CB7AFF6C8F9LL))), 0xA0F1E17E1DD6F901LL))))))
                { /* block id: 239 */
                    uint16_t *l_452 = &g_71;
                    uint8_t *l_460[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_464 = (void*)0;
                    int32_t *l_465 = &g_29;
                    int32_t *l_466 = (void*)0;
                    int32_t *l_468 = &l_461;
                    int32_t *l_469 = &l_461;
                    int32_t *l_470 = &l_467;
                    int32_t *l_472 = &l_461;
                    int32_t *l_473 = &l_471;
                    int32_t *l_474 = &l_461;
                    int32_t *l_475 = &l_467;
                    int32_t *l_476 = &l_461;
                    int32_t *l_477 = &l_461;
                    int32_t *l_478 = &l_461;
                    int32_t *l_479 = &l_471;
                    int32_t *l_480 = &g_29;
                    int32_t *l_481 = &l_471;
                    int i, j;
                    /*bef_stmt:124538*/
/*bef_stmt:124538*/
/*bef_stmt:124538*/
/*bef_stmt:124538*/
/*bef_stmt:124538*/
/*bef_stmt:124538*/
/*bef_stmt:124538*/
/*bef_stmt:124538*/
if ((((1UL == (Tag100(/*const int32_t:0:0:124538:e*/g_62.f7) >= ((0xBDL >= (((*l_452) = Tag101(/*uint32_t:127508:127508:124538:e*/p_27)) < ((safe_mul_func_int16_t_s_s(Tag102(/*uint64_t:127472:127508:124538:e*/l_455[4]), ((safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((l_461 = Tag103(/*uint64_t:0:0:124538:e*/g_451)), 4)) || 4294967295UL) >= ((&p_27 == &g_7) & 1L)), 0)) || Tag104(/*uint8_t:0:0:124538:e*/g_384[0][7])))) , p_26))) >= Tag105(/*int32_t:0:0:124538:e*/g_376)))) == Tag106(/*int64_t:0:0:124538:e*/g_380[1][1][3])) | Tag107(/*const int32_t:127434:127455:124538:e*/l_425)))
                    { /* block id: 242 */
                        /*bef_stmt:124515*/
return Tag108(/*int32_t:0:0:124515:e*/g_376);
/*aft_stmt:124515*/
                    }
                    else
                    { /* block id: 244 */
                        l_462 = p_25;
                    }
/*aft_stmt:124538*/
/*aft_stmt:124538*/
/*aft_stmt:124538*/
/*aft_stmt:124538*/
/*aft_stmt:124538*/
/*aft_stmt:124538*/
/*aft_stmt:124538*/
/*aft_stmt:124538*/
                    (*l_422) = (l_463 = l_463);
                    g_483++;
                    /*bef_stmt:126098*/
if ((safe_lshift_func_int8_t_s_s(Tag109(/*const uint8_t:0:0:126098:e*/g_62.f2), 5)))
                    { /* block id: 250 */
                        uint32_t l_512 = 1UL;
                        int32_t l_515 = 1L;
                        int16_t *l_532 = &g_62.f4;
                        /*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
/*bef_stmt:126071*/
(*l_475) |= (((((safe_sub_func_int16_t_s_s(0x9980L, (--(*l_452)))) == (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((l_536[3] &= ((safe_div_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((Tag110(/*uint32_t:127508:127508:126071:e*/p_27) | ((((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((((l_512--) | (g_384[0][7]--)) <= Tag111(/*uint32_t:127508:127508:126071:e*/p_27)), ((*l_432) ^= (safe_mul_func_int16_t_s_s((Tag112(/*int32_t:127434:127455:126071:e*/*l_462)), ((p_26 ^ ((((((safe_sub_func_int16_t_s_s(((*l_532) = (((Tag113(/*int32_t:127508:127508:126071:e*/*p_25)) >= (Tag114(/*int32_t:0:0:126071:e*/g_376) || (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((Tag115(/*int32_t:127508:127508:126071:e*/**l_422)), (1L & p_26))), Tag116(/*uint32_t:127508:127508:126071:e*/p_27))) >= 0x8AB9L), 0x47B8B4C02CD9F857LL)) && 0xDDL) ^ p_26) , (Tag117(/*int32_t:126104:127434:126071:e*/*l_468))), 5)), 0xC1DC8D08L)))) ^ Tag118(/*int8_t:0:0:126071:e*/g_114[0][0]))), Tag119(/*uint32_t:127508:127508:126071:e*/p_27))) || 0x6B98L) > Tag120(/*int32_t:126077:126104:126071:e*/l_515)) ^ Tag121(/*uint32_t:127508:127508:126071:e*/p_27)) && Tag122(/*uint8_t:0:0:126071:e*/g_483)) < Tag123(/*uint64_t:127434:127455:126071:e*/l_533))) & Tag124(/*uint32_t:0:0:126071:e*/g_7))))))), Tag125(/*uint32_t:127508:127508:126071:e*/p_27))) , p_26) < 0x23L) == Tag126(/*int64_t:0:0:126071:e*/g_380[6][1][1])) , Tag127(/*int32_t:0:0:126071:e*/g_278)) != 247UL)) , p_23) != l_534), Tag128(/*uint32_t:127508:127508:126071:e*/p_27))), p_26)) & Tag129(/*uint8_t:0:0:126071:e*/g_176)), Tag130(/*uint32_t:127508:127508:126071:e*/p_27))), Tag131(/*uint16_t:127472:127508:126071:e*/l_535))), Tag132(/*uint32_t:127508:127508:126071:e*/p_27))) , Tag133(/*int64_t:0:0:126071:e*/g_62.f8)), Tag134(/*int32_t:0:0:126071:e*/g_378[3]))) == Tag135(/*uint32_t:127508:127508:126071:e*/p_27))), p_26)), (Tag136(/*int32_t:127455:127472:126071:e*/*l_463))))) && Tag137(/*uint8_t:0:0:126071:e*/g_384[0][7])) == Tag138(/*int8_t:0:0:126071:e*/g_114[0][1])) | 0xFF7EL);
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
/*aft_stmt:126071*/
                    }
                    else
                    { /* block id: 258 */
                        /*bef_stmt:126093*/
return Tag139(/*int8_t:0:0:126093:e*/g_537);
/*aft_stmt:126093*/
                    }
/*aft_stmt:126098*/
                }
                else
                { /* block id: 261 */
                    int16_t l_543 = 0x5F43L;
                    for (l_431 = 0; (l_431 <= 3); l_431 += 1)
                    { /* block id: 264 */
                        int32_t *l_539 = &l_536[1];
                        int32_t *l_540[3][2][7] = {{{&l_536[3],&l_536[2],&l_536[2],&l_536[3],&l_536[2],&l_536[2],&l_536[3]},{&l_467,&l_536[3],&l_467,&l_536[3],&l_536[6],&l_536[3],&l_467}},{{&l_536[3],&l_536[3],&l_467,&l_536[3],&l_536[3],&l_467,&l_536[3]},{&l_536[6],&l_536[3],&l_467,&l_536[3],&l_467,&l_536[3],&l_536[6]}},{{&l_536[2],&l_536[3],&l_536[2],&l_536[2],&l_536[3],&l_536[2],&l_536[2]},{&l_536[6],&l_536[3],&g_29,&l_536[3],&l_536[6],&l_536[3],&l_536[6]}}};
                        int i, j, k;
                        /*bef_stmt:127377*/
if (Tag140(/*uint64_t:0:0:127377:e*/g_451))
                            goto lbl_538;
/*aft_stmt:127377*/
                        ++g_544[3][0];
                    }
                }
/*aft_stmt:127428*/
/*aft_stmt:127428*/
/*aft_stmt:127428*/
/*aft_stmt:127428*/
/*aft_stmt:127428*/
/*aft_stmt:127428*/
            }
        }
    }
    /*bef_stmt:127506*/
return /*TAG141:STA*/((int64_t)(realsmith_proxy_KGXZo((char)(g_394.f8)+(-24), (int)(g_394.f8)+(6), (char)(g_394.f8)+(-69), (int)(g_394.f8)+(29))+(int)(g_394.f8)-(0))+g_394.f8)/*TAG141:END:g_394.f8*/;
/*aft_stmt:127506*/
}


/* ------------------------------------------ */
/* 
 * reads : g_384 g_71 g_394.f0 g_28 g_29 g_9 g_7 g_57 g_62.f1 g_388 g_130 g_391 g_394.f4 g_419
 * writes: g_238 g_384 g_29 g_55 g_57 g_62.f1 g_388 g_391 g_394.f4 g_419
 */
static uint32_t  func_30(uint16_t  p_31, int32_t * p_32, uint64_t  p_33, const struct S0 * p_34, struct S0 * const  p_35)
{ /* block id: 212 */
    const struct S0 **l_399 = (void*)0;
    const struct S0 ***l_398 = &l_399;
    const struct S0 ****l_397 = &l_398;
    int32_t l_401 = (-6L);
    uint8_t *l_402 = &g_384[0][7];
    int32_t **l_412 = &g_55;
    int32_t l_417 = 0x134EDAD8L;
    int32_t l_418 = 0x7564C0EFL;
    /*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
/*bef_stmt:128391*/
(*l_412) = func_36(((0x7F52L <= ((((((safe_lshift_func_int16_t_s_s(((&g_242 == l_397) & Tag142(/*uint16_t:128673:128673:128391:e*/p_31)), 11)) | (+Tag143(/*uint16_t:128673:128673:128391:e*/p_31))) , (((g_238 = Tag144(/*int32_t:128673:128673:128391:e*/l_401)) , (/*TAG145:STA*/((int32_t)(realsmith_gW7n0((int)(l_401)+(18), (int)(l_401)+(33))+(int)(l_401)-(7))+l_401)/*TAG145:END:l_401*/ < (++(*l_402)))) , ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(/*TAG146:STA*/((int32_t)(realsmith_yMGHh((int)(l_401)+(73))+(long)(l_401)-(0))+l_401)/*TAG146:END:l_401*/, (+((l_402 == &g_176) == 0x3EF37439L)))), Tag147(/*uint16_t:0:0:128391:e*/g_71))) == Tag148(/*uint16_t:128673:128673:128391:e*/p_31)), Tag149(/*int32_t:128673:128673:128391:e*/l_401))) != 0x2551L))) <= 0x61L) ^ Tag150(/*int32_t:128673:128673:128391:e*/l_401)) != Tag151(/*uint64_t:128673:128673:128391:e*/p_33))) , Tag152(/*int32_t:128673:128673:128391:e*/l_401)), Tag153(/*int32_t:0:0:128391:e*/g_394.f0), Tag154(/*uint16_t:128673:128673:128391:e*/p_31));
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
/*aft_stmt:128391*/
    for (g_394.f4 = (-19); (g_394.f4 == (-11)); ++g_394.f4)
    { /* block id: 218 */
        int32_t *l_415 = &g_29;
        int32_t *l_416[2];
        int i;
        for (i = 0; i < 2; i++)
            l_416[i] = (void*)0;
        g_419++;
    }
    /*bef_stmt:128671*/
return Tag155(/*uint16_t:128673:128673:128671:e*/p_31);
/*aft_stmt:128671*/
}


/* ------------------------------------------ */
/* 
 * reads : g_28 g_29 g_9 g_7 g_57 g_62.f1 g_388 g_130 g_391
 * writes: g_29 g_55 g_57 g_62.f1 g_388 g_391
 */
static int32_t * func_36(int32_t  p_37, uint64_t  p_38, uint64_t  p_39)
{ /* block id: 2 */
    int16_t l_42 = (-1L);
    int32_t *l_392[1];
    int i;
    for (i = 0; i < 1; i++)
        l_392[i] = &g_29;
    /*bef_stmt:129312*/
/*bef_stmt:129312*/
/*bef_stmt:129312*/
/*bef_stmt:129312*/
/*bef_stmt:129312*/
/*bef_stmt:129312*/
/*bef_stmt:129312*/
g_391 ^= (safe_rshift_func_uint8_t_u_u(/*TAG156:STA*/((int16_t)(realsmith_7QoqD((long)(g_537)+(187), (long)(g_394.f0)+(64))+(long)(l_42)+(long)(g_394.f0)+(long)(g_394.f8)+(long)(g_537)-(21))+l_42)/*TAG156:END:l_42*/, (safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u(0x29BAD2CE6C1CC492LL, (Tag157(/*int32_t:129338:129338:129312:e*/p_37) | (249UL || func_47((((*g_28) ^= Tag158(/*uint64_t:129338:129338:129312:e*/p_39)) , func_49(((func_51((Tag159(/*int32_t:0:0:129312:e*/*g_28)), ((g_9 == (void*)0) >= ((Tag160(/*int16_t:129338:129338:129312:e*/l_42) , &g_29) != &g_29)), /*TAG161:STA*/((int16_t)(realsmith_proxy_HIAAe((char)(l_42)+(-22), (int)(g_71)+(-65446), (char)(g_394.f8)+(-43))+(int)(l_42)+(int)(g_394.f8)+(int)(*g_28)+(int)(g_71)-(65530))+l_42)/*TAG161:END:l_42*/) >= 65535UL) | Tag162(/*int32_t:0:0:129312:e*/g_29))))))))), (-5L)))));
/*aft_stmt:129312*/
/*aft_stmt:129312*/
/*aft_stmt:129312*/
/*aft_stmt:129312*/
/*aft_stmt:129312*/
/*aft_stmt:129312*/
/*aft_stmt:129312*/
    return l_392[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_57 g_28 g_62.f1 g_388 g_130
 * writes: g_57 g_29 g_62.f1 g_388
 */
static uint8_t  func_47(struct S0 * p_48)
{ /* block id: 11 */
    int32_t *l_65 = (void*)0;
    int32_t l_85 = (-1L);
    uint16_t l_99 = 0x161DL;
    uint8_t *l_102 = &g_57;
    uint64_t l_113 = 18446744073709551615UL;
    uint8_t l_227 = 0x43L;
    int32_t l_237 = 0L;
    struct S0 **l_372 = (void*)0;
    int32_t l_381 = 7L;
    int32_t l_382 = 0L;
    int32_t *l_387[1][7];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_387[i][j] = (void*)0;
    }
    for (g_57 = 28; (g_57 > 9); --g_57)
    { /* block id: 14 */
        const uint32_t l_86[10] = {1UL,0xBCD0122BL,0xBCD0122BL,1UL,0xBCD0122BL,0xBCD0122BL,1UL,0xBCD0122BL,0xBCD0122BL,1UL};
        int32_t *l_96 = &g_29;
        int32_t l_124 = (-1L);
        int32_t l_129 = (-10L);
        struct S0 *l_146 = &g_62;
        uint32_t l_186 = 0xC5983163L;
        uint16_t * const l_322 = &g_238;
        int8_t *l_356 = &g_114[0][4];
        int i;
        (*g_28) = ((void*)0 == l_65);
        for (g_62.f1 = 0; (g_62.f1 > 51); g_62.f1 = safe_add_func_int64_t_s_s(g_62.f1, 6))
        { /* block id: 18 */
            struct S0 **l_69 = &g_9;
            struct S0 ***l_68 = &l_69;
            uint32_t *l_72 = &g_73;
            int32_t l_82 = (-1L);
            const uint64_t l_87 = 0x6E0AFCEDF4A203F8LL;
            int32_t l_125 = 8L;
            int32_t *l_138 = &l_129;
            uint8_t * const l_221 = &g_176;
            int16_t l_224 = 0x8FCFL;
            int32_t l_233 = 1L;
            int32_t l_234 = (-1L);
            int32_t l_235 = 0xC0455941L;
            int32_t l_236[2][7][4] = {{{0x6DD29B11L,0x281AE0F8L,0x6DD29B11L,0x6DD29B11L},{0x281AE0F8L,0x281AE0F8L,0x3D768784L,0x281AE0F8L},{0x281AE0F8L,0x6DD29B11L,0x6DD29B11L,0x281AE0F8L},{0x6DD29B11L,0x281AE0F8L,0x6DD29B11L,0x6DD29B11L},{0x281AE0F8L,0x281AE0F8L,0x3D768784L,0x281AE0F8L},{0x281AE0F8L,0x6DD29B11L,0x6DD29B11L,0x281AE0F8L},{0x6DD29B11L,0x281AE0F8L,0x6DD29B11L,0x6DD29B11L}},{{0x281AE0F8L,0x281AE0F8L,0x3D768784L,0x281AE0F8L},{0x281AE0F8L,0x6DD29B11L,0x6DD29B11L,0x281AE0F8L},{0x6DD29B11L,0x281AE0F8L,0x6DD29B11L,0x6DD29B11L},{0x281AE0F8L,0x281AE0F8L,0x3D768784L,0x281AE0F8L},{0x281AE0F8L,0x6DD29B11L,0x6DD29B11L,0x281AE0F8L},{0x6DD29B11L,0x281AE0F8L,0x6DD29B11L,0x6DD29B11L},{0x281AE0F8L,0x281AE0F8L,0x3D768784L,0x281AE0F8L}}};
            uint16_t l_319 = 0xF467L;
            const uint8_t l_338 = 0x53L;
            int i, j, k;
            (*l_68) = &g_9;
        }
    }
    ++g_388;
    /*bef_stmt:131988*/
return Tag163(/*uint32_t:0:0:131988:e*/g_130);
/*aft_stmt:131988*/
}


/* ------------------------------------------ */
/* 
 * reads : g_7 g_28 g_29 g_57
 * writes: g_55 g_57 g_29
 */
static struct S0 * func_49(int64_t  p_50)
{ /* block id: 6 */
    uint8_t *l_56 = &g_57;
    int32_t l_60 = 0xE56CDAA9L;
    struct S0 *l_61 = &g_62;
    /*bef_stmt:132181*/
g_55 = (Tag164(/*uint32_t:0:0:132181:e*/g_7) , (void*)0);
/*aft_stmt:132181*/
    /*bef_stmt:132263*/
/*bef_stmt:132263*/
(*g_28) = (((Tag165(/*int32_t:0:0:132263:e*/*g_28)) , ((*l_56)++)) || Tag166(/*int32_t:132276:132276:132263:e*/l_60));
/*aft_stmt:132263*/
/*aft_stmt:132263*/
    return l_61;
}


/* ------------------------------------------ */
/* 
 * reads : g_29
 * writes:
 */
static int16_t  func_51(int32_t  p_52, uint16_t  p_53, const uint64_t  p_54)
{ /* block id: 4 */
    /*bef_stmt:132370*/
return Tag167(/*int32_t:0:0:132370:e*/g_29);
/*aft_stmt:132370*/
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    printf("g_29: %d\n", g_29);
    printf("g_57: %u\n", (unsigned int)g_57);
    printf("g_388: %lu\n", (unsigned long)g_388);
    printf("g_391: %lu\n", (unsigned long)g_391);
    printf("g_419: %lu\n", (unsigned long)g_419);
    printf("g_71: %u\n", (unsigned int)g_71);
    printf("g_238: %u\n", (unsigned int)g_238);

    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2, "g_62.f2", print_hash_value);
    transparent_crc(g_62.f3, "g_62.f3", print_hash_value);
    transparent_crc(g_62.f4, "g_62.f4", print_hash_value);
    transparent_crc(g_62.f5, "g_62.f5", print_hash_value);
    transparent_crc(g_62.f6, "g_62.f6", print_hash_value);
    transparent_crc(g_62.f7, "g_62.f7", print_hash_value);
    transparent_crc(g_62.f8, "g_62.f8", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_114[i][j], "g_114[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_119[i][j][k], "g_119[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_304[i], "g_304[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_378[i], "g_378[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_379, "g_379", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_380[i][j][k], "g_380[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_384[i][j], "g_384[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_394.f0, "g_394.f0", print_hash_value);
    transparent_crc(g_394.f1, "g_394.f1", print_hash_value);
    transparent_crc(g_394.f2, "g_394.f2", print_hash_value);
    transparent_crc(g_394.f3, "g_394.f3", print_hash_value);
    transparent_crc(g_394.f4, "g_394.f4", print_hash_value);
    transparent_crc(g_394.f5, "g_394.f5", print_hash_value);
    transparent_crc(g_394.f6, "g_394.f6", print_hash_value);
    transparent_crc(g_394.f7, "g_394.f7", print_hash_value);
    transparent_crc(g_394.f8, "g_394.f8", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_544[i][j], "g_544[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_565, "g_565", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_567[i][j], "g_567[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_600[i], "g_600[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_791.f0, "g_791.f0", print_hash_value);
    transparent_crc(g_791.f1, "g_791.f1", print_hash_value);
    transparent_crc(g_791.f2, "g_791.f2", print_hash_value);
    transparent_crc(g_791.f3, "g_791.f3", print_hash_value);
    transparent_crc(g_791.f4, "g_791.f4", print_hash_value);
    transparent_crc(g_791.f5, "g_791.f5", print_hash_value);
    transparent_crc(g_791.f6, "g_791.f6", print_hash_value);
    transparent_crc(g_791.f7, "g_791.f7", print_hash_value);
    transparent_crc(g_791.f8, "g_791.f8", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_793[i][j][k].f0, "g_793[i][j][k].f0", print_hash_value);
                transparent_crc(g_793[i][j][k].f1, "g_793[i][j][k].f1", print_hash_value);
                transparent_crc(g_793[i][j][k].f2, "g_793[i][j][k].f2", print_hash_value);
                transparent_crc(g_793[i][j][k].f3, "g_793[i][j][k].f3", print_hash_value);
                transparent_crc(g_793[i][j][k].f4, "g_793[i][j][k].f4", print_hash_value);
                transparent_crc(g_793[i][j][k].f5, "g_793[i][j][k].f5", print_hash_value);
                transparent_crc(g_793[i][j][k].f6, "g_793[i][j][k].f6", print_hash_value);
                transparent_crc(g_793[i][j][k].f7, "g_793[i][j][k].f7", print_hash_value);
                transparent_crc(g_793[i][j][k].f8, "g_793[i][j][k].f8", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 196
   depth: 1, occurrence: 5
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 57
breakdown:
   depth: 1, occurrence: 60
   depth: 2, occurrence: 18
   depth: 3, occurrence: 1
   depth: 4, occurrence: 1
   depth: 5, occurrence: 1
   depth: 9, occurrence: 1
   depth: 15, occurrence: 1
   depth: 19, occurrence: 3
   depth: 20, occurrence: 3
   depth: 23, occurrence: 2
   depth: 26, occurrence: 1
   depth: 27, occurrence: 1
   depth: 28, occurrence: 1
   depth: 57, occurrence: 1

XXX total number of pointers: 174

XXX times a variable address is taken: 391
XXX times a pointer is dereferenced on RHS: 80
breakdown:
   depth: 1, occurrence: 72
   depth: 2, occurrence: 4
   depth: 3, occurrence: 4
XXX times a pointer is dereferenced on LHS: 100
breakdown:
   depth: 1, occurrence: 99
   depth: 2, occurrence: 1
XXX times a pointer is compared with null: 19
XXX times a pointer is compared with address of another variable: 6
XXX times a pointer is compared with another pointer: 6
XXX times a pointer is qualified to be dereferenced: 1706

XXX max dereference level: 4
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 392
   level: 2, occurrence: 16
   level: 3, occurrence: 7
   level: 4, occurrence: 1
XXX number of pointers point to pointers: 48
XXX number of pointers point to scalars: 102
XXX number of pointers point to structs: 24
XXX percent of pointers has null in alias set: 27
XXX average alias set size: 1.42

XXX times a non-volatile is read: 618
XXX times a non-volatile is write: 299
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 2

XXX stmts: 65
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 25
   depth: 1, occurrence: 7
   depth: 2, occurrence: 6
   depth: 3, occurrence: 8
   depth: 4, occurrence: 10
   depth: 5, occurrence: 9

XXX percentage a fresh-made variable is used: 21.8
XXX percentage an existing variable is used: 78.2
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: A11F3F8E */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: A11F3F8E */
