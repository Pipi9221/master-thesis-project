
int fdtp_realsmith_bpwsG = 17;

__attribute__((used)) static int
realsmith_bpwsG(int ofw, int node)
{
 int offset;
 offset = (1);
 if (offset < 0)
  return (0);
 offset = (1);
 return ((1));
}

int ENOMEM_realsmith_G9JA6 = 0;

int usbfs_memory_mb_realsmith_G9JA6 = -8;

int usbfs_memory_usage_realsmith_G9JA6 = 19;

__attribute__((used)) static int realsmith_G9JA6(int amount)
{
 int lim;
 lim = (1);
 lim <<= 20;
 (1);
 if (lim > 0 && (1) > lim) {
  (1);
  return -ENOMEM_realsmith_G9JA6;
 }
 return 0;
}

char*
realsmith_qLI3r (char* ptr, long value)
{
    *ptr++ = (char) (value >> 0) & 0xff;
    *ptr++ = (char) (value >> 8) & 0xff;
    *ptr++ = (char) (value >> 16) & 0xff;
    *ptr++ = (char) (value >> 24) & 0xff;
    return ptr;
}
char realsmith_proxy_m0DLx(char p_0_PBk2m, long p_1_tqcci) {
char proxy_HtY13[13] = { 64, 5, p_0_PBk2m, 8, 82, p_0_PBk2m, 38, 21, p_0_PBk2m, p_0_PBk2m, p_0_PBk2m, p_0_PBk2m, 58 };
char * proxy_ret_77Xc4 = realsmith_qLI3r(proxy_HtY13, p_1_tqcci);
return *proxy_ret_77Xc4;
}


int realsmith_nZ4RV(int arg1, int arg2) {
 int result;
 if ( arg2 & 0x80000000 ) {
  if ((arg2 & 0x80000000) == 0x80000000) {
   result = 97;
  } else {
   result = arg1;
  }
 } else {
  result = 98;
 }
 return result;
}

int ESP_ERR_INVALID_STATE_realsmith_R90tg = 10;

long ESP_OK_realsmith_R90tg = 20;

long realsmith_R90tg(void)
{
    long error = ESP_OK_realsmith_R90tg;
    (1);
    (1);
    error = (1);
    (1);
    return error;
}

int ENODEV_realsmith_0wnrx = -4;

int hc_dev_realsmith_0wnrx = -3;

int hc_registers_realsmith_0wnrx = 11;

__attribute__((used)) static int realsmith_0wnrx(void)
{
 if (!hc_dev_realsmith_0wnrx)
  return -ENODEV_realsmith_0wnrx;
 (1);
 (1);
 (1);
 return 0;
}

int B_TRUE_realsmith_x5LMP = -2;

long DMU_OST_ZFS_realsmith_x5LMP = 19;

int FTAG_realsmith_x5LMP = -2;

int ZFS_PROP_VERSION_realsmith_x5LMP = -10;

__attribute__((used)) static int
realsmith_x5LMP(const char *name, int version)
{
 int *os;
 int rc = B_TRUE_realsmith_x5LMP;
 if ((1) == 0) {
  int zplversion;
  if ((1) != DMU_OST_ZFS_realsmith_x5LMP) {
   (1);
   return (B_TRUE_realsmith_x5LMP);
  }
  if ((1) == 0)
   rc = zplversion < version;
  (1);
 }
 return (rc);
}
int realsmith_proxy_HcBku(char p_0_2VNeW, int p_1_wo57J) {
char proxy_rbK7O[16] = { p_0_2VNeW, 96, 94, 82, p_0_2VNeW, 15, 32, 66, p_0_2VNeW, 81, 26, 85, 1, p_0_2VNeW, p_0_2VNeW, 58 };
int proxy_ret_sO5Bx = realsmith_x5LMP(proxy_rbK7O, p_1_wo57J);
return proxy_ret_sO5Bx;
}


int M_BITS_realsmith_CIhXK = 14;

int M_MASK_realsmith_CIhXK = 18;

int NZ_realsmith_CIhXK = 12;

__attribute__((used)) static int
realsmith_CIhXK(int cr)
{
  int flot;
  int tmp = cr & 0x00ffffff;
  int i = 0;
  if (cr == 0)
     return 0;
  while (tmp != 1) {
     tmp >>= 1;
     i++;
  }
  if (i == 9)
     flot = 0x4000 | (i << 9) | (cr & 0x1ff);
  else if (i < 9)
     flot = 0x4000 | (i << 9) | ((cr << (9 - i)) & 0x1ff);
  else
     flot = 0x4000 | (i << 9) | ((cr >> (i - 9)) & 0x1ff);
  return flot;
}

int EINVAL_realsmith_SiFgw = -5;

int SCTLR_EL1_SED_realsmith_SiFgw = -5;

int sctlr_el1_realsmith_SiFgw = -1;

__attribute__((used)) static int realsmith_SiFgw(int enable)
{
 if (!(1))
  return -EINVAL_realsmith_SiFgw;
 if (enable)
  (1);
 else
  (1);
 return 0;
}

__attribute__((used)) static int realsmith_R3xcB(const long *haystack, int h_len,
                          const long *needle, int n_pos, int n_len,
                          int *match_h_offset_ptr, int *match_n_offset_ptr,
                          int *match_len_ptr)
{
    int h_pos;
    for (h_pos = 0; h_pos < h_len; h_pos++) {
        int match_len = 0;
        int match_h_pos, match_n_pos;
        while (h_pos + match_len < h_len && n_pos + match_len < n_len &&
               needle[n_pos + match_len] == haystack[h_pos + match_len])
            match_len++;
        if (match_len <= 8)
            continue;
        match_h_pos = h_pos;
        match_n_pos = n_pos;
        while (match_n_pos > 0 && match_h_pos > 0 &&
               needle[match_n_pos - 1] == haystack[match_h_pos - 1]) {
            match_n_pos--;
            match_h_pos--;
            match_len++;
        }
        if (match_len <= 14)
            continue;
        *match_h_offset_ptr = match_h_pos;
        *match_n_offset_ptr = match_n_pos;
        *match_len_ptr = match_len;
        return 0;
    }
    return -1;
}
int realsmith_proxy_anLJO(long p_0_fD7WP, int p_1_ThBtx, long p_2_WReOL, int p_3_2mNtw, int p_4_MDhnC, int p_5_hv8xC, int p_6_vMstG, int p_7_Mcolf) {
long proxy_AKeQ5[19] = { 9, p_2_WReOL, 60, p_2_WReOL, 13, p_2_WReOL, 63, 12, p_2_WReOL, 32, 24, p_2_WReOL, 46, p_2_WReOL, 33, p_2_WReOL, 74, 89, p_2_WReOL };
int proxy_jEdKT[17] = { 70, 42, p_5_hv8xC, 84, 12, p_5_hv8xC, p_5_hv8xC, p_5_hv8xC, p_5_hv8xC, 62, p_5_hv8xC, 60, 21, 5, p_5_hv8xC, 11, p_5_hv8xC };
int proxy_eye4Z[15] = { 61, 35, 29, p_6_vMstG, p_6_vMstG, 88, p_6_vMstG, 8, p_6_vMstG, p_6_vMstG, p_6_vMstG, 63, 79, 31, 87 };
int proxy_ret_9Fcdr = realsmith_R3xcB(&(p_0_fD7WP), p_1_ThBtx, proxy_AKeQ5, p_3_2mNtw, p_4_MDhnC, proxy_jEdKT, proxy_eye4Z, &(p_7_Mcolf));
return proxy_ret_9Fcdr;
}


__attribute__((used)) static long realsmith_9qcFV(long source_val,
   long source_min, long source_max,
   long target_min, long target_max)
{
 long target_val;
 (1);
 (1);
 source_val = (1);
 target_val = (1);
 target_val = (1);
 target_val += target_min;
 return target_val;
}

int X509_FILETYPE_PEM_realsmith_yJkSW = 9;

__attribute__((used)) static int realsmith_yJkSW(int n)
{
    int ret = 0;
    int *sctx = ((void*)0);
    int *store = ((void*)0);
    int *lookup = ((void*)0);
    const char *cert_f = ("0");
    if ((1)
        && (1)
        && (1)
        && (1))
        ret = 1;
    (1);
    (1);
    return ret;
}

char *
realsmith_RFcu0(char *filename)
{
    char *p = ("0");
    if (!p)
    {
        p = ("0");
    }
    return p ? p + 1 : (char *) filename;
}
char realsmith_proxy_T17zS(char p_0_8ggQs) {
char * proxy_ret_M11PT = realsmith_RFcu0(&(p_0_8ggQs));
return *proxy_ret_M11PT;
}


char *
realsmith_GOVlS(const char *str)
{
 char *new;
 unsigned len;
 if (*str == '\0')
  return ("");
 len = (1) + 1;
 if ((new = ("0")) == ((void*)0))
  (1);
 (1);
 return (new);
}
char realsmith_proxy_61ca8(char p_0_rrriw) {
char proxy_hR9Bs[20] = { p_0_rrriw, 25, p_0_rrriw, 38, 22, 34, 100, 48, p_0_rrriw, 100, 5, 53, p_0_rrriw, p_0_rrriw, p_0_rrriw, p_0_rrriw, p_0_rrriw, p_0_rrriw, 15, 58 };
char * proxy_ret_juaSh = realsmith_GOVlS(proxy_hR9Bs);
return *proxy_ret_juaSh;
}


__attribute__((used)) static int
realsmith_Vnhiy(const unsigned char *s1, const unsigned char *s2)
{
 int l1 = (1) - 1,
    l2 = (1) - 1;
 while (l1 >= 0 && l2 >= 0)
 {
  if (s1[l1] < s2[l2])
   return -1;
  if (s1[l1] > s2[l2])
   return 1;
  l1--;
  l2--;
 }
 if (l1 < l2)
  return -1;
 if (l1 > l2)
  return 1;
 return 0;
}
int realsmith_proxy_gj3Hl(unsigned char p_0_QIK4F, unsigned char p_1_NtoKC) {
int proxy_ret_lC9Se = realsmith_Vnhiy(&(p_0_QIK4F), &(p_1_NtoKC));
return proxy_ret_lC9Se;
}


int RGBLIGHT_MODE_RAINBOW_SWIRL_realsmith_IyKqe = 12;

int RGBLIGHT_MODE_STATIC_LIGHT_realsmith_IyKqe = 20;

int realsmith_IyKqe(int state) {
  switch ((1)) {
    case 128:
      (1);
      (1);
      break;
    default:
      (1);
      (1);
      break;
  }
  return state;
}

int hash_const_05_realsmith_vqd9S = 12;

int realsmith_vqd9S(int arg1, int arg2) {
 int v3 = arg2 & 0x780000;
 if ( (int)v3 <= 0x400000 ) {
  if (v3 == 4194304) {
   return 522;
  }
  if ( (int)v3 > 0x180000 ) {
   if (v3 == 2621440) {
    return 402;
   }
   if (v3 == 3145728) {
    return 411;
   }
  } else {
   if (v3 == 1572864) {
    return 401;
   }
   if (!v3) {
    return 403;
   }
   if (v3 == 524288) {
    return 400;
   }
  }
  return arg1;
 }
 if ((int)v3 <= 0x680000) {
  if (v3 == 0x680000) {
   return 526;
  }
  if (v3 == hash_const_05_realsmith_vqd9S) {
   return 524;
  }
  if (v3 == 0x580000) {
   return 525;
  }
  return arg1;
 }
 if (v3 != 7340032) {
  return arg1;
 }
 return 523;
}

int WITNESS_RANK_CTL_realsmith_2PvMM = 6;

int ctl_initialized_realsmith_2PvMM = 14;

int ctl_mtx_realsmith_2PvMM = 3;

int malloc_mutex_rank_exclusive_realsmith_2PvMM = 12;

int
realsmith_2PvMM(void) {
 if ((1)) {
  return 1;
 }
 ctl_initialized_realsmith_2PvMM = 0;
 return 0;
}

__attribute__((used)) static int
realsmith_gOoRf(int *mrb, int obj)
{
  int x;
  (1);
  x = (1);
  return (1);
}
int realsmith_proxy_xyvpT(int p_0_8PTF3, int p_1_eoUN6) {
int proxy_mmdF8[14] = { p_0_8PTF3, 28, p_0_8PTF3, p_0_8PTF3, 100, 31, p_0_8PTF3, p_0_8PTF3, 5, p_0_8PTF3, 98, 18, p_0_8PTF3, 45 };
int proxy_ret_0s2gK = realsmith_gOoRf(proxy_mmdF8, p_1_eoUN6);
return proxy_ret_0s2gK;
}


int progname_realsmith_kIO0h = 8;

__attribute__((used)) static int realsmith_kIO0h (int *L, int status) {
  if (status && !(1)) {
    const char *msg = ("0");
    if (msg == ((void*)0)) msg = "(error object is not a string)";
    (1);
    (1);
  }
  return status;
}
int realsmith_proxy_enDO6(int p_0_cQkNn, int p_1_5PRq2) {
int proxy_ret_iRypp = realsmith_kIO0h(&(p_0_cQkNn), p_1_5PRq2);
return proxy_ret_iRypp;
}


int BCD_realsmith_oWabL = 4;

int BCDPath_realsmith_oWabL = -1;

int FALSE_realsmith_oWabL = 6;

int HKCR_realsmith_oWabL = 10;

int HKCRPath_realsmith_oWabL = -6;

int HKCU_realsmith_oWabL = 7;

int HKCUPath_realsmith_oWabL = 1;

int HKLM_realsmith_oWabL = 2;

int HKLMPath_realsmith_oWabL = 2;

int HKR_realsmith_oWabL = -1;

int HKU_realsmith_oWabL = 17;

int HKUPath_realsmith_oWabL = -3;

int TRUE_realsmith_oWabL = -1;

__attribute__((used)) static int
realsmith_oWabL(int Name)
{
    if (!(1))
    {
        (1);
        return TRUE_realsmith_oWabL;
    }
    if (!(1))
    {
        (1);
        return TRUE_realsmith_oWabL;
    }
    if (!(1))
    {
        (1);
        return TRUE_realsmith_oWabL;
    }
    if (!(1))
    {
        (1);
        return TRUE_realsmith_oWabL;
    }
    if (!(1))
    {
        (1);
        return TRUE_realsmith_oWabL;
    }
  return FALSE_realsmith_oWabL;
}

__attribute__((used)) static const char *realsmith_bmpaf(int PNS) {
  switch (PNS) {
  case 130:
    return "default setting";
  case 131:
    return "command line";
  case 129:
    return "environment variable";
  case 128:
    return "runtime API";
  default:
    return "Unknown";
  }
}
char realsmith_proxy_5CIP5(int p_0_WJNn2) {
char * proxy_ret_Hinkb = realsmith_bmpaf(p_0_WJNn2);
return *proxy_ret_Hinkb;
}


unsigned long realsmith_LlKJk(char *dest, const char *src, unsigned long size)
{
 unsigned long ret = (1);
 if (size) {
  unsigned long len = (ret >= size) ? size - 1 : ret;
  (1);
  dest[len] = '\0';
 }
 return ret;
}
unsigned long realsmith_proxy_AODFc(char p_0_MofBF, char p_1_EqmU7, unsigned long p_2_XVBl7) {
char proxy_HLAt1[12] = { p_0_MofBF, 27, p_0_MofBF, 7, p_0_MofBF, 78, p_0_MofBF, p_0_MofBF, 96, 73, p_0_MofBF, 72 };
char proxy_qWuSZ[16] = { 100, p_1_EqmU7, p_1_EqmU7, 34, 29, 84, p_1_EqmU7, p_1_EqmU7, 67, 46, p_1_EqmU7, p_1_EqmU7, p_1_EqmU7, p_1_EqmU7, 25, p_1_EqmU7 };
unsigned long proxy_ret_J4kva = realsmith_LlKJk(proxy_HLAt1, proxy_qWuSZ, p_2_XVBl7);
return proxy_ret_J4kva;
}


int realsmith_Gu9Xb (const int *in_buf, const int in_len, int *out_buf)
{
  for (int i = 0, j = 0; i < in_len; i += 2, j += 1)
  {
    out_buf[j] = (1);
  }
  return in_len / 2;
}
int realsmith_proxy_UvPCb(int p_0_2mKgt, int p_1_2CcwJ, int p_2_c4GLn) {
int proxy_mV9L9[14] = { 85, 36, p_2_c4GLn, 54, p_2_c4GLn, p_2_c4GLn, 30, 45, 56, p_2_c4GLn, p_2_c4GLn, p_2_c4GLn, 58, p_2_c4GLn };
int proxy_ret_Lmmzl = realsmith_Gu9Xb(&(p_0_2mKgt), p_1_2CcwJ, proxy_mV9L9);
return proxy_ret_Lmmzl;
}


__attribute__((used)) static int
realsmith_i1IYA(char *buf)
{
 int len, rtrn;
 rtrn = -1;
 len = (1);
 if (len > 1 && (1) == 0)
  rtrn = 1;
 else if (len > 1 && (1) == 0)
  rtrn = 0;
 else if (len > 8 && (1) == 0)
  rtrn = 1;
 else if (len > 8 && (1) == 0)
  rtrn = 0;
 return (rtrn);
}
int realsmith_proxy_cNfOR(char p_0_ApKLK) {
char proxy_LKwrE[19] = { p_0_ApKLK, 34, p_0_ApKLK, p_0_ApKLK, 64, 54, 90, 25, 16, 51, p_0_ApKLK, 86, 7, p_0_ApKLK, 70, 48, p_0_ApKLK, 67, p_0_ApKLK };
int proxy_ret_0heHd = realsmith_i1IYA(proxy_LKwrE);
return proxy_ret_0heHd;
}


int g_debug_realsmith_mT9iL = 15;

int realsmith_mT9iL()
{
 if (g_debug_realsmith_mT9iL == 0x123455)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}

int NID_undef_realsmith_3iMB8 = 20;

int bio_err_realsmith_3iMB8 = 11;

__attribute__((used)) static int realsmith_3iMB8(int *ppbe, const char *str)
{
    if (!str)
        return 0;
    if ((1) == 0) {
        *ppbe = -1;
        return 1;
    }
    *ppbe = (1);
    if (*ppbe == NID_undef_realsmith_3iMB8) {
        (1);
        return 0;
    }
    return 1;
}
int realsmith_proxy_z8O6w(int p_0_9qHoD, char p_1_ntuoM) {
int proxy_ret_DLkeU = realsmith_3iMB8(&(p_0_9qHoD), &(p_1_ntuoM));
return proxy_ret_DLkeU;
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
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output $EXPERIMENTAL_CREAL/batch_experiments_test_failures_v2/test34/LJKE95_seed.c
 * Seed:      757616631
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0x198A8F93L;
static int32_t g_13[2][9][7] = {{{(-5L),1L,(-8L),(-8L),1L,(-5L),1L},{0x54A20A29L,(-1L),(-1L),0x54A20A29L,0xB3A3FC4BL,0x54A20A29L,(-1L)},{1L,1L,(-5L),(-8L),(-5L),1L,1L},{1L,(-1L),0xDDA37BB0L,(-1L),1L,1L,(-1L)},{7L,1L,7L,(-5L),(-5L),7L,1L},{(-1L),0xB3A3FC4BL,0xDDA37BB0L,0xDDA37BB0L,0xB3A3FC4BL,(-1L),0xB3A3FC4BL},{7L,(-5L),(-5L),7L,1L,(-8L),7L},{(-1L),(-1L),0x54A20A29L,0xB3A3FC4BL,0x54A20A29L,(-1L),(-1L)},{(-5L),7L,1L,7L,(-5L),(-5L),7L}},{{0xDDA37BB0L,1L,0xDDA37BB0L,0x54A20A29L,0x54A20A29L,0xDDA37BB0L,1L},{7L,1L,1L,1L,1L,7L,1L},{0xDDA37BB0L,0x54A20A29L,0x54A20A29L,0xDDA37BB0L,1L,0xDDA37BB0L,0x54A20A29L},{(-5L),(-5L),7L,1L,7L,(-5L),(-5L)},{(-1L),0x54A20A29L,0xB3A3FC4BL,0x54A20A29L,(-1L),(-1L),0x54A20A29L},{(-8L),1L,(-8L),7L,7L,(-8L),1L},{0x54A20A29L,1L,0xB3A3FC4BL,0xB3A3FC4BL,1L,0x54A20A29L,1L},{(-8L),7L,7L,(-8L),1L,(-8L),7L},{(-1L),(-1L),0x54A20A29L,0xB3A3FC4BL,0x54A20A29L,(-1L),(-1L)}}};
static uint16_t g_25 = 0UL;
static int16_t g_36 = 0x947DL;
static uint8_t g_45 = 7UL;
static uint8_t * const g_44[7] = {&g_45,(void*)0,&g_45,&g_45,(void*)0,&g_45,&g_45};
static int64_t g_89[10][3] = {{0x3AF2BE4639A72115LL,0L,0x3AF2BE4639A72115LL},{8L,0x0AFD421DEF15EDA0LL,0x0AFD421DEF15EDA0LL},{0x260EE2FB047B2A23LL,0L,0x260EE2FB047B2A23LL},{8L,8L,0x0AFD421DEF15EDA0LL},{0x3AF2BE4639A72115LL,0L,0x3AF2BE4639A72115LL},{8L,0x0AFD421DEF15EDA0LL,0x0AFD421DEF15EDA0LL},{0x260EE2FB047B2A23LL,0L,0x260EE2FB047B2A23LL},{8L,8L,0x0AFD421DEF15EDA0LL},{0x3AF2BE4639A72115LL,0L,0x3AF2BE4639A72115LL},{8L,0x0AFD421DEF15EDA0LL,0x0AFD421DEF15EDA0LL}};
static int32_t *g_95 = &g_13[0][1][2];
static int16_t g_103 = 0xD576L;
static int32_t **g_113 = (void*)0;
static int32_t ***g_112[9][3][9] = {{{(void*)0,&g_113,&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113,(void*)0},{&g_113,&g_113,(void*)0,&g_113,&g_113,(void*)0,&g_113,&g_113,(void*)0},{&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113}},{{&g_113,&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,(void*)0},{&g_113,&g_113,(void*)0,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113}},{{(void*)0,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113},{(void*)0,&g_113,(void*)0,&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113,(void*)0,(void*)0,(void*)0,&g_113}},{{(void*)0,&g_113,(void*)0,&g_113,(void*)0,&g_113,(void*)0,&g_113,&g_113},{(void*)0,&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113,(void*)0,(void*)0},{&g_113,(void*)0,&g_113,&g_113,&g_113,&g_113,&g_113,(void*)0,&g_113}},{{&g_113,&g_113,(void*)0,&g_113,(void*)0,(void*)0,(void*)0,&g_113,&g_113},{(void*)0,&g_113,&g_113,&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113},{&g_113,(void*)0,(void*)0,&g_113,(void*)0,&g_113,&g_113,&g_113,&g_113}},{{&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,(void*)0},{(void*)0,(void*)0,&g_113,&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113},{(void*)0,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113}},{{(void*)0,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,(void*)0,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113,&g_113}},{{(void*)0,&g_113,(void*)0,&g_113,&g_113,&g_113,&g_113,&g_113,(void*)0},{&g_113,(void*)0,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,(void*)0,&g_113,&g_113,(void*)0,&g_113,&g_113,(void*)0}},{{(void*)0,(void*)0,&g_113,&g_113,(void*)0,&g_113,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,(void*)0,(void*)0,&g_113,&g_113,&g_113},{&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,(void*)0,&g_113}}};
static uint16_t g_172 = 1UL;
static uint32_t g_229 = 0UL;
static uint32_t g_235 = 0x60826268L;
static const int64_t g_240 = (-8L);
static int8_t g_249 = 0x85L;
static int16_t g_381 = 0xC6E3L;
static int16_t *g_380 = &g_381;
static uint8_t *g_382 = (void*)0;
static int64_t g_386 = 0xF6B5BFCAD32F07F1LL;
static int64_t *g_385 = &g_386;
static uint64_t g_420 = 0x164E7873D1D0FA7BLL;
static uint64_t g_425 = 0xADFAF91B15A70C79LL;
static int32_t ****g_553 = &g_112[1][2][1];
static uint32_t *g_582 = &g_235;
static uint32_t **g_581 = &g_582;
static int16_t g_605 = 0xE0F2L;
static uint64_t g_670 = 9UL;
static int64_t **g_749 = &g_385;
static int64_t ***g_748 = &g_749;
static int32_t g_751 = 0L;
static int8_t g_755 = 0xC0L;
static uint8_t **g_760 = (void*)0;
static uint8_t ** const *g_759 = &g_760;
static uint64_t *g_770 = &g_420;
static uint64_t **g_769 = &g_770;
static uint32_t ** const *g_785 = (void*)0;
static uint64_t g_807[8][7] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL,0x7E70C7F799223ED4LL}};
static int16_t g_841 = 2L;
static int32_t *g_891[6] = {&g_751,&g_751,&g_751,&g_751,&g_751,&g_751};


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int32_t  func_28(int16_t  p_29, int8_t  p_30, int32_t * p_31, uint8_t * p_32);
static int8_t  func_37(uint8_t * p_38, uint32_t  p_39);
static uint32_t  func_40(uint8_t * const  p_41, int32_t * p_42, int64_t * p_43);
static int32_t * func_46(int16_t * p_47, int16_t * p_48, uint8_t * p_49, int32_t  p_50, int16_t  p_51);
static int16_t * func_52(uint64_t  p_53, uint8_t * p_54, int16_t  p_55, uint64_t  p_56);
static uint8_t  func_60(int16_t  p_61, int64_t  p_62, uint32_t  p_63, uint32_t  p_64, uint32_t  p_65);
static int16_t  func_66(uint8_t  p_67, int32_t  p_68, int16_t * p_69);
static int32_t  func_74(int32_t * p_75, int64_t  p_76, const int64_t * p_77);
static int16_t  func_83(int64_t * const  p_84, int64_t  p_85, int64_t  p_86, const int32_t  p_87);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_13 g_25 g_3 g_36 g_44 g_89 g_235 g_172 g_240 g_45 g_103 g_229 g_380 g_382 g_381 g_385 g_386 g_670 g_755 g_769 g_770 g_420
 * writes: g_25 g_3 g_36 g_89 g_95 g_235 g_103 g_13 g_172 g_45 g_229 g_420 g_425 g_891 g_755
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = &g_3;
    int32_t *l_7 = &g_3;
    int32_t *l_8 = &g_3;
    int32_t *l_9 = &g_3;
    int32_t l_10 = 1L;
    int32_t *l_11 = &g_3;
    int8_t l_12[9] = {0L,0xD1L,0L,0L,0xD1L,0L,0L,0xD1L,0L};
    int32_t *l_14[2];
    int32_t l_15 = 0L;
    int64_t l_16 = 0x75DAAFE497D6A583LL;
    uint32_t l_17 = 4UL;
    int32_t *l_22[9];
    uint8_t *l_24[3][6][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    uint8_t l_26 = 1UL;
    int64_t *l_27 = &l_16;
    int16_t *l_33 = (void*)0;
    int16_t *l_34 = (void*)0;
    int16_t *l_35 = &g_36;
    uint8_t l_57[1];
    int16_t *l_306 = &g_103;
    uint8_t l_333 = 255UL;
    int32_t **l_384 = &l_5;
    int32_t l_905 = 0xED32A41BL;
    uint16_t l_906 = 65529UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_14[i] = (void*)0;
    for (i = 0; i < 9; i++)
        l_22[i] = &l_10;
    for (i = 0; i < 1; i++)
        l_57[i] = 3UL;
    --l_17;
    /*bef_stmt:91173*/
/*bef_stmt:91173*/
/*bef_stmt:91173*/
/*bef_stmt:91173*/
/*bef_stmt:91173*/
/*bef_stmt:91173*/
/*bef_stmt:91173*/
g_3 = (Tag1(/*int32_t:0:0:91173:e*/g_13[0][2][0]) & (((((safe_mul_func_uint16_t_u_u(((void*)0 != l_22[3]), /*TAG2:STA*/((int32_t)(realsmith_proxy_m0DLx((char)(g_13[1][6][4])+(-56), (long)(g_13[1][6][4])+(4))+(char)(g_13[1][6][4])-(83))+g_13[1][6][4])/*TAG2:END:g_13[1][6][4]*/)) | (~((*l_27) = (((g_25 &= Tag3(/*int32_t:0:0:91173:e*/g_13[0][1][2])) & Tag4(/*uint8_t:91867:91867:91173:e*/l_26)) && Tag5(/*int32_t:0:0:91173:e*/g_3))))) , /*TAG6:STA*/((uint16_t)(realsmith_proxy_HcBku((char)(g_13[0][1][2])+(-52), (int)(g_13[0][1][2])+(63))+(int)(g_25)+(int)(g_13[0][1][2])+(int)(g_13[0][2][0])+(int)(g_13[1][6][4])-(-1))+g_25)/*TAG6:END:g_25*/) <= ((&l_26 != (void*)0) , 0xEE0C605FL)) , /*TAG7:STA*/((int32_t)(realsmith_G9JA6((int)(g_13[0][1][2])+(95))+(int)(g_13[1][5][2])+(int)(g_13[0][1][2])+(int)(g_13[1][6][4])+(int)(g_13[0][2][0])+(int)(g_25)-(-7))+g_13[1][5][2])/*TAG7:END:g_13[1][5][2]*/));
/*aft_stmt:91173*/
/*aft_stmt:91173*/
/*aft_stmt:91173*/
/*aft_stmt:91173*/
/*aft_stmt:91173*/
/*aft_stmt:91173*/
/*aft_stmt:91173*/
    /*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
/*bef_stmt:91827*/
l_905 ^= func_28(((*l_35) &= (Tag8(/*int32_t:91867:91867:91827:e*/*l_9))), func_37(&l_26, func_40(g_44[2], ((*l_384) = func_46(func_52((/*TAG9:STA*/((uint8_t)(realsmith_oWabL((int)(g_13[1][6][4])+(95))+(int)(l_57[0])+(int)(l_26)+(int)(g_13[1][6][4])+(int)(g_13[0][2][0])+(int)(g_13[1][5][2])-(4))+l_57[0])/*TAG9:END:l_57[0]*/ , (/*TAG10:STA*/((uint16_t)(realsmith_R90tg()+(long)(g_25)+(long)(g_13[1][5][2])+(long)(g_13[0][2][0])+(long)(g_13[1][6][4])+(long)(g_3)-(-5))+g_25)/*TAG10:END:g_25*/ || ((safe_sub_func_uint8_t_u_u(func_60(((*l_306) = (func_66((Tag11(/*int32_t:91867:91867:91827:e*/*l_2)), (Tag12(/*int32_t:91867:91867:91827:e*/*l_6)), l_35) , (-1L))), Tag13(/*uint16_t:0:0:91827:e*/g_172), (Tag14(/*int32_t:91867:91867:91827:e*/*l_6)), Tag15(/*uint16_t:0:0:91827:e*/g_172), Tag16(/*const int64_t:0:0:91827:e*/g_240)), (/*TAG17:STA*/((int32_t)(realsmith_IyKqe((int)(l_57[0])+(68))+(int)(*l_8)+(int)(l_57[0])+(int)(g_13[1][5][2])+(int)(*l_2)+(int)(*l_6)-(66))+*l_8)/*TAG17:END:*l_8*/))) ^ Tag18(/*uint8_t:91867:91867:91827:e*/l_333)))), &l_57[0], Tag19(/*const int64_t:0:0:91827:e*/g_240), Tag20(/*uint8_t:0:0:91827:e*/g_45)), g_380, g_382, Tag21(/*int16_t:0:0:91827:e*/g_381), (Tag22(/*int16_t:0:0:91827:e*/*g_380)))), g_385)), &l_10, &l_26);
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
/*aft_stmt:91827*/
    /*bef_stmt:91865*/
return Tag23(/*uint16_t:91867:91867:91865:e*/l_906);
/*aft_stmt:91865*/
}


/* ------------------------------------------ */
/* 
 * reads : g_172 g_25 g_13 g_385 g_386 g_755 g_769 g_770 g_420
 * writes: g_172 g_891 g_755 g_13
 */
static int32_t  func_28(int16_t  p_29, int8_t  p_30, int32_t * p_31, uint8_t * p_32)
{ /* block id: 355 */
    int32_t *l_877 = &g_13[0][1][2];
    uint8_t l_900 = 0UL;
    uint16_t l_901 = 0UL;
    uint64_t l_903 = 0xB745466633946681LL;
    uint8_t l_904[5];
    int i;
    for (i = 0; i < 5; i++)
        l_904[i] = 8UL;
    p_31 = l_877;
    for (g_172 = (-1); (g_172 != 27); g_172 = safe_add_func_int8_t_s_s(g_172, 7))
    { /* block id: 359 */
        int32_t l_882 = (-1L);
        uint32_t l_896 = 0x8BE027BEL;
        int8_t *l_899 = &g_755;
        int32_t *l_902 = &g_13[0][1][2];
        /*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
/*bef_stmt:93145*/
(*p_31) = (((((safe_mod_func_int64_t_s_s(((Tag24(/*int16_t:93223:93223:93145:e*/p_29) > Tag25(/*int32_t:93184:93223:93145:e*/l_882)) == (safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((((*l_899) ^= ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s((&l_882 != (g_891[4] = l_877)), Tag26(/*uint16_t:0:0:93145:e*/g_25))) & (safe_sub_func_int64_t_s_s(/*TAG27:STA*/((int16_t)(realsmith_proxy_gj3Hl((unsigned char)(p_29)+(63), (unsigned char)(p_29)+(-5))+(int)(p_29)-(-1))+p_29)/*TAG27:END:p_29*/, (safe_add_func_int64_t_s_s(Tag28(/*uint32_t:93184:93223:93145:e*/l_896), (4UL | (safe_mod_func_int64_t_s_s(((0x2564L & 0xF26CL) , (Tag29(/*int32_t:93223:93223:93145:e*/*l_877))), (Tag30(/*int64_t:0:0:93145:e*/*g_385)))))))))), /*TAG31:STA*/((int8_t)(realsmith_mT9iL()+(int)(p_30)+(int)(g_381)+(int)(g_45)+(int)(g_172)+(int)(*g_380)-(36302))+p_30)/*TAG31:END:p_30*/)) >= Tag32(/*int32_t:93184:93223:93145:e*/l_882))) ^ 0x80L) , 0x3433975BA773AB74LL), /*TAG33:STA*/((uint32_t)(realsmith_proxy_anLJO((long)(l_896)+(-2346723184), (int)(l_896)+(1948244111), (long)(l_896)+(-2346723327), (int)(l_896)+(1948244090), (int)(l_896)+(1948244084), (int)(l_896)+(1948244073), (int)(l_896)+(1948244003), (int)(l_896)+(1948243958))+(int)(l_896)-(-1948244035))+l_896)/*TAG33:END:l_896*/)), (/*TAG34:STA*/((uint64_t)(realsmith_0wnrx()+(int)(**g_769)-(-774833541))+**g_769)/*TAG34:END:**g_769*/)))), Tag35(/*uint8_t:93223:93223:93145:e*/l_900))) & (Tag36(/*int32_t:93223:93223:93145:e*/*l_877))) ^ Tag37(/*uint16_t:93223:93223:93145:e*/l_901)) | Tag38(/*uint32_t:93184:93223:93145:e*/l_896)) && 0x5AL);
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
/*aft_stmt:93145*/
        l_877 = l_902;
        /*bef_stmt:93174*/
return Tag39(/*uint64_t:93223:93223:93174:e*/l_903);
/*aft_stmt:93174*/
    }
    /*bef_stmt:93221*/
return Tag40(/*uint8_t:93223:93223:93221:e*/l_904[1]);
/*aft_stmt:93221*/
}


/* ------------------------------------------ */
/* 
 * reads : g_3 g_103 g_385 g_386 g_235 g_670
 * writes: g_229 g_13 g_420 g_425 g_172 g_25
 */
static int8_t  func_37(uint8_t * p_38, uint32_t  p_39)
{ /* block id: 155 */
    uint32_t l_392 = 18446744073709551607UL;
    int32_t l_428 = 1L;
    uint64_t *l_432 = &g_420;
    uint64_t **l_431 = &l_432;
    int32_t l_499 = 0x7E91F970L;
    int32_t l_500 = 0x60E26A3CL;
    int32_t l_501 = 0x38930B4BL;
    uint8_t l_518 = 1UL;
    int32_t *l_571[3];
    int32_t *****l_593[6][4] = {{&g_553,&g_553,&g_553,&g_553},{&g_553,&g_553,&g_553,&g_553},{&g_553,&g_553,&g_553,&g_553},{&g_553,&g_553,&g_553,&g_553},{&g_553,&g_553,&g_553,&g_553},{&g_553,&g_553,&g_553,&g_553}};
    uint16_t *l_619 = &g_25;
    uint16_t **l_618 = &l_619;
    int8_t l_690[6][7][6] = {{{0xA0L,0x7DL,0x7EL,0L,(-5L),3L},{9L,(-9L),(-1L),1L,(-5L),0L},{0L,0x7DL,0x65L,(-7L),0xAFL,9L},{0xFCL,2L,(-10L),0x65L,(-1L),0x82L},{0xCEL,9L,0x1BL,0x96L,(-9L),0x65L},{0x0BL,0x7FL,3L,0x7DL,0L,0xA0L},{3L,0x1BL,0xE2L,0x1BL,3L,0x37L}},{{(-9L),0xFFL,0x82L,0L,0x7EL,0xAFL},{(-7L),1L,9L,0xFFL,0x7DL,0xAFL},{0xE2L,(-1L),0x82L,3L,0xCEL,0x37L},{0x7DL,0x0BL,0xE2L,0x65L,0x1BL,1L},{0L,2L,0L,0xFFL,0x65L,0x37L},{0x7FL,0x1BL,(-1L),1L,0L,(-9L)},{0x82L,0xB9L,0L,0L,0xB9L,0x82L}},{{1L,0x7EL,0x37L,(-1L),(-5L),0x96L},{2L,0xC1L,0xB9L,9L,0x7FL,0xFFL},{2L,(-9L),9L,(-1L),3L,9L},{1L,(-5L),(-1L),0L,0x37L,(-7L)},{0x82L,(-1L),0xE2L,1L,0L,2L},{0x7FL,0xE2L,(-10L),0xFFL,0x0DL,0L},{0L,(-5L),0xC1L,0x65L,0xC1L,(-5L)}},{{(-10L),3L,0xA0L,0xE2L,1L,0xAFL},{3L,0x7DL,3L,0L,0x82L,3L},{0xCEL,0x7DL,9L,0xFCL,1L,0xB9L},{0xAFL,3L,0L,(-1L),0xC1L,(-1L)},{0L,(-5L),0x7EL,(-10L),0x0DL,0L},{0L,0xE2L,0x96L,(-10L),0L,(-1L)},{(-5L),(-1L),0x7FL,0x37L,0x37L,0x7FL}},{{(-5L),(-5L),(-10L),0xCEL,3L,0xE2L},{0xC1L,(-9L),0x82L,0x7DL,0x7FL,(-10L)},{9L,0xC1L,0x82L,0x7EL,(-5L),0xE2L},{1L,0x7EL,(-10L),3L,0xB9L,0x7FL},{3L,0xB9L,0x7FL,0L,0L,(-1L)},{9L,0x1BL,0x96L,(-9L),0x65L,0L},{0x65L,2L,0x7EL,(-1L),0x1BL,(-1L)}},{{0L,0L,0L,0xAFL,(-5L),0xB9L},{(-1L),1L,9L,(-5L),(-10L),3L},{0xFFL,0xA0L,3L,(-5L),9L,0xAFL},{(-1L),0L,0xA0L,0xAFL,0L,(-5L)},{0L,(-1L),0xC1L,(-1L),0xFCL,0L},{0x65L,1L,(-10L),(-9L),0xAFL,2L},{9L,9L,0xE2L,0L,(-7L),(-7L)}}};
    int64_t l_730 = 2L;
    int64_t **l_747[6][6][5] = {{{&g_385,&g_385,(void*)0,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{(void*)0,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,(void*)0,(void*)0,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{(void*)0,&g_385,&g_385,&g_385,&g_385}},{{&g_385,&g_385,(void*)0,&g_385,&g_385},{&g_385,(void*)0,(void*)0,&g_385,(void*)0},{(void*)0,&g_385,&g_385,&g_385,(void*)0},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385}},{{&g_385,&g_385,&g_385,&g_385,(void*)0},{&g_385,&g_385,&g_385,&g_385,(void*)0},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,(void*)0,&g_385,&g_385}},{{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,(void*)0,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,(void*)0}},{{(void*)0,&g_385,&g_385,&g_385,&g_385},{&g_385,(void*)0,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,(void*)0,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,(void*)0,&g_385}},{{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,(void*)0,&g_385,&g_385,(void*)0},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385},{&g_385,(void*)0,&g_385,&g_385,&g_385},{&g_385,&g_385,&g_385,&g_385,&g_385}}};
    int64_t ***l_746 = &l_747[5][1][2];
    uint16_t l_866[3][7][5] = {{{65530UL,5UL,0x9CEBL,0x6E79L,0x21DAL},{0x195DL,65532UL,0xB64DL,0xCC57L,0x9CEBL},{0xD0EDL,0x2A7DL,0x6E79L,65530UL,65532UL},{65532UL,0x6E79L,0xD0EDL,65530UL,65530UL},{0x6E79L,0x57B1L,0x21DAL,0xD0EDL,4UL},{0xD0EDL,0x21DAL,0x57B1L,0x6E79L,65530UL},{65530UL,0xD0EDL,0x6E79L,65532UL,65532UL}},{{65530UL,4UL,65530UL,65532UL,0x7D43L},{0xF045L,0x9CEBL,0xB64DL,0x6E79L,65530UL},{4UL,0x7D43L,0x826EL,0xD0EDL,0xF91EL},{0x32B3L,0x279AL,0xB64DL,65530UL,0x57B1L},{0x2A7DL,5UL,65530UL,65530UL,5UL},{0xF91EL,5UL,0x6E79L,0xF045L,65535UL},{0x21DAL,0x279AL,0x57B1L,4UL,0x195DL}},{{0xB64DL,0x7D43L,0x21DAL,0x32B3L,65526UL},{0x21DAL,0x9CEBL,0xD0EDL,0x2A7DL,0x6E79L},{0xF91EL,4UL,4UL,0xF91EL,0x6E79L},{0x2A7DL,0xD0EDL,0x9CEBL,0x21DAL,65526UL},{0x32B3L,0x21DAL,0x7D43L,0xB64DL,0x195DL},{4UL,0x57B1L,0x279AL,0x21DAL,65535UL},{0xF045L,0x6E79L,5UL,0xF91EL,5UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_571[i] = &g_13[0][1][2];
    for (g_229 = 15; (g_229 >= 51); g_229 = safe_add_func_int8_t_s_s(g_229, 1))
    { /* block id: 158 */
        const uint8_t l_390 = 0x65L;
        int32_t *l_391 = &g_13[0][1][2];
        int32_t **l_395 = &l_391;
        uint64_t *l_419 = &g_420;
        uint64_t *l_421 = (void*)0;
        uint64_t *l_422 = (void*)0;
        uint64_t *l_423 = (void*)0;
        uint64_t *l_424 = &g_425;
        uint16_t *l_426 = &g_172;
        uint16_t *l_427 = &g_25;
        /*bef_stmt:103179*/
(*l_391) = Tag41(/*const uint8_t:103975:104010:103179:e*/l_390);
/*aft_stmt:103179*/
        l_392++;
        (*l_395) = l_391;
        /*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
/*bef_stmt:103969*/
l_428 ^= ((((~((*l_427) = (safe_mul_func_uint16_t_u_u(((*l_426) = (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((((*l_424) = (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((((**l_395) = Tag42(/*int32_t:0:0:103969:e*/g_3)) , Tag43(/*uint32_t:104010:104010:103969:e*/p_39)), 7)) == Tag44(/*uint32_t:104010:104010:103969:e*/p_39)), Tag45(/*int16_t:0:0:103969:e*/g_103))) , (((safe_div_func_uint32_t_u_u(Tag46(/*uint32_t:104010:104010:103969:e*/l_392), (((((safe_add_func_uint64_t_u_u(((*l_419) = Tag47(/*uint32_t:104010:104010:103969:e*/p_39)), Tag48(/*uint32_t:104010:104010:103969:e*/l_392))) | (Tag49(/*uint32_t:104010:104010:103969:e*/l_392) >= Tag50(/*uint32_t:104010:104010:103969:e*/p_39))) != 0xD8L) > Tag51(/*uint32_t:104010:104010:103969:e*/l_392)) && 18446744073709551615UL))) == Tag52(/*uint32_t:104010:104010:103969:e*/l_392)) , Tag53(/*uint32_t:104010:104010:103969:e*/p_39))), Tag54(/*uint32_t:104010:104010:103969:e*/p_39))), 2))) && Tag55(/*uint32_t:104010:104010:103969:e*/p_39)) && (-1L)), (Tag56(/*int64_t:0:0:103969:e*/*g_385)))), 246UL)), Tag57(/*uint32_t:104010:104010:103969:e*/l_392))), Tag58(/*uint32_t:104010:104010:103969:e*/l_392)))), Tag59(/*uint32_t:104010:104010:103969:e*/l_392))))) >= Tag60(/*uint32_t:104010:104010:103969:e*/p_39)) > Tag61(/*uint32_t:104010:104010:103969:e*/p_39)) > Tag62(/*uint32_t:0:0:103969:e*/g_235));
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
/*aft_stmt:103969*/
    }
    /*bef_stmt:104008*/
return /*TAG63:STA*/((uint64_t)(realsmith_nZ4RV((int)(g_670)+(36), (int)(g_670)+(72))+(int)(g_670)-(107))+g_670)/*TAG63:END:g_670*/;
/*aft_stmt:104008*/
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint32_t  func_40(uint8_t * const  p_41, int32_t * p_42, int64_t * p_43)
{ /* block id: 153 */
    uint16_t l_387 = 65535UL;
    /*bef_stmt:104156*/
return /*TAG64:STA*/((uint16_t)(realsmith_proxy_61ca8((char)(l_387)+(43))+(char)(l_387)-(47))+l_387)/*TAG64:END:l_387*/;
/*aft_stmt:104156*/
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_46(int16_t * p_47, int16_t * p_48, uint8_t * p_49, int32_t  p_50, int16_t  p_51)
{ /* block id: 150 */
    int32_t *l_383 = &g_3;
    return l_383;
}


/* ------------------------------------------ */
/* 
 * reads : g_45 g_3 g_13 g_25 g_172 g_229 g_89 l_26
 * writes: g_45 g_13 g_25 g_172 g_229 l_26
 */
static int16_t * func_52(uint64_t  p_53, uint8_t * p_54, int16_t  p_55, uint64_t  p_56)
{ /* block id: 117 */
    uint32_t l_341[5][2][7] = {{{3UL,0x0C169AB8L,0x0C169AB8L,3UL,4294967295UL,0UL,0xC65014AAL},{4UL,0xE957CD22L,0x9A5A3B34L,0xE957CD22L,4UL,4294967295UL,0x9A5A3B34L}},{{0x5341E847L,0x09FCE162L,0UL,0UL,0x09FCE162L,0x5341E847L,0xC65014AAL},{4294967291UL,0xA21E68D7L,4294967288UL,4294967295UL,4294967288UL,0xA21E68D7L,4294967291UL}},{{0x5341E847L,0UL,0xC65014AAL,3UL,3UL,0xC65014AAL,0UL},{4UL,0xA21E68D7L,4294967295UL,0x7D343D97L,4UL,0x7D343D97L,4294967295UL}},{{3UL,0x09FCE162L,0xC65014AAL,0x0C169AB8L,0x5341E847L,0x5341E847L,0x0C169AB8L},{4294967288UL,0xE957CD22L,4294967288UL,0x7D343D97L,4294967291UL,0xE957CD22L,4294967291UL}},{{0x09FCE162L,0x0C169AB8L,0UL,3UL,0x5341E847L,0UL,0UL},{4UL,4294967295UL,0x9A5A3B34L,4294967295UL,4UL,0xE957CD22L,0x9A5A3B34L}}};
    int32_t l_354 = 0x9E01EE1CL;
    uint32_t l_355 = 0x2528239FL;
    int i, j, k;
    for (g_45 = 0; (g_45 <= 20); g_45++)
    { /* block id: 120 */
        int32_t *l_340 = &g_13[1][7][4];
        int32_t l_352 = 0xEE5A397BL;
        /*bef_stmt:105725*/
if (/*TAG65:STA*/((int16_t)(realsmith_proxy_z8O6w((int)(p_55)+(-17), (char)(p_55)+(40))+(int)(p_55)-(-7))+p_55)/*TAG65:END:p_55*/)
            break;
/*aft_stmt:105725*/
        /*bef_stmt:105834*/
/*bef_stmt:105834*/
(*l_340) &= (safe_sub_func_uint8_t_u_u(((*p_54) |= (safe_mul_func_uint16_t_u_u(Tag66(/*int32_t:0:0:105834:e*/g_3), Tag67(/*int16_t:115218:115218:105834:e*/p_55)))), 0x88L));
/*aft_stmt:105834*/
/*aft_stmt:105834*/
        /*bef_stmt:105906*/
if (Tag68(/*uint32_t:115218:115218:105906:e*/l_341[2][1][3]))
            break;
/*aft_stmt:105906*/
        for (p_55 = 19; (p_55 > (-9)); p_55 = safe_sub_func_uint32_t_u_u(p_55, 1))
        { /* block id: 127 */
            int32_t l_358[6][10][4] = {{{0x7D08B27AL,(-1L),0x859ACC1EL,0x660C4750L},{2L,0x87826831L,0x0494A7C0L,0x456384BCL},{0x294FBC3FL,(-1L),(-1L),(-1L)},{(-1L),(-1L),0x364BC235L,0x456384BCL},{0x7D08B27AL,0x87826831L,0x58DEB099L,0x660C4750L},{0L,(-1L),0x0494A7C0L,0x58DEB099L},{(-1L),(-1L),5L,0x660C4750L},{0x87826831L,0x78EAE60FL,0x364BC235L,0x58DEB099L},{1L,0x87826831L,0x859ACC1EL,5L},{0L,0x87826831L,0x4B164CA1L,0x58DEB099L}},{{0x294FBC3FL,0x78EAE60FL,5L,(-1L)},{0x78EAE60FL,0x87826831L,0x364BC235L,0x859ACC1EL},{(-1L),0x87826831L,0x456384BCL,(-1L)},{0L,0x78EAE60FL,(-2L),0x58DEB099L},{0xB9DC072AL,0x87826831L,5L,5L},{0x87826831L,0x87826831L,0xE3B2CB94L,0x58DEB099L},{(-1L),0x78EAE60FL,0x859ACC1EL,(-1L)},{0x506E8762L,0x87826831L,(-2L),0x859ACC1EL},{0x294FBC3FL,0x87826831L,0x660C4750L,(-1L)},{0x87826831L,0x78EAE60FL,0x364BC235L,0x58DEB099L}},{{1L,0x87826831L,0x859ACC1EL,5L},{0L,0x87826831L,0x4B164CA1L,0x58DEB099L},{0x294FBC3FL,0x78EAE60FL,5L,(-1L)},{0x78EAE60FL,0x87826831L,0x364BC235L,0x859ACC1EL},{(-1L),0x87826831L,0x456384BCL,(-1L)},{0L,0x78EAE60FL,(-2L),0x58DEB099L},{0xB9DC072AL,0x87826831L,5L,5L},{0x87826831L,0x87826831L,0xE3B2CB94L,0x58DEB099L},{(-1L),0x78EAE60FL,0x859ACC1EL,(-1L)},{0x506E8762L,0x87826831L,(-2L),0x859ACC1EL}},{{0x294FBC3FL,0x87826831L,0x660C4750L,(-1L)},{0x87826831L,0x78EAE60FL,0x364BC235L,0x58DEB099L},{1L,0x87826831L,0x859ACC1EL,5L},{0L,0x87826831L,0x4B164CA1L,0x58DEB099L},{0x294FBC3FL,0x78EAE60FL,5L,(-1L)},{0x78EAE60FL,0x87826831L,0x364BC235L,0x859ACC1EL},{(-1L),0x87826831L,0x456384BCL,(-1L)},{0L,0x78EAE60FL,(-2L),0x58DEB099L},{0xB9DC072AL,0x87826831L,5L,5L},{0x87826831L,0x87826831L,0xE3B2CB94L,0x58DEB099L}},{{(-1L),0x78EAE60FL,0x859ACC1EL,(-1L)},{0x506E8762L,0x87826831L,(-2L),0x859ACC1EL},{0x294FBC3FL,0x87826831L,0x660C4750L,(-1L)},{0x87826831L,0x78EAE60FL,0x364BC235L,0x58DEB099L},{1L,0x87826831L,0x859ACC1EL,5L},{0L,0x87826831L,0x4B164CA1L,0x58DEB099L},{0x294FBC3FL,0x78EAE60FL,5L,(-1L)},{0x78EAE60FL,0x87826831L,0x364BC235L,0x859ACC1EL},{(-1L),0x87826831L,0x456384BCL,(-1L)},{0L,0x78EAE60FL,(-2L),0x58DEB099L}},{{0xB9DC072AL,0x87826831L,5L,5L},{0x87826831L,0x87826831L,0xE3B2CB94L,0x58DEB099L},{(-1L),0x78EAE60FL,0x859ACC1EL,(-1L)},{0x506E8762L,0x87826831L,(-2L),0x859ACC1EL},{0x294FBC3FL,0x87826831L,0x660C4750L,5L},{0x78EAE60FL,(-1L),0xE3B2CB94L,0x859ACC1EL},{0x7D08B27AL,0x78EAE60FL,0x456384BCL,0x660C4750L},{0x506E8762L,0x78EAE60FL,0x0494A7C0L,0x859ACC1EL},{0xB9DC072AL,(-1L),0x660C4750L,5L},{(-1L),0x78EAE60FL,0xE3B2CB94L,0x456384BCL}}};
            int i, j, k;
            for (p_56 = 0; (p_56 != 60); p_56 = safe_add_func_int16_t_s_s(p_56, 1))
            { /* block id: 130 */
                int64_t l_353 = (-1L);
                int32_t l_359[4][5][10] = {{{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L}},{{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L}},{{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L}},{{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L},{0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L,0x9CBFE1E8L}}};
                int i, j, k;
                for (g_25 = (-23); (g_25 == 23); g_25 = safe_add_func_uint32_t_u_u(g_25, 1))
                { /* block id: 133 */
                    uint16_t l_360[9][1][5] = {{{0x7973L,65531UL,65531UL,0x7973L,1UL}},{{65527UL,0x9ACAL,0xE6C8L,65535UL,65535UL}},{{0x7973L,65531UL,65531UL,0x7973L,1UL}},{{65527UL,0x9ACAL,0xE6C8L,65535UL,65535UL}},{{0x7973L,65531UL,65531UL,0x7973L,1UL}},{{65527UL,0x9ACAL,0xE6C8L,65535UL,65535UL}},{{0x7973L,65531UL,65531UL,0x7973L,1UL}},{{65527UL,0x9ACAL,0xE6C8L,65535UL,65535UL}},{{0x7973L,65531UL,65531UL,0x7973L,1UL}}};
                    int8_t *l_377 = &g_249;
                    int i, j, k;
                    for (g_172 = 11; (g_172 >= 55); g_172 = safe_add_func_int8_t_s_s(g_172, 1))
                    { /* block id: 136 */
                        int32_t *l_350 = &g_13[0][8][1];
                        int32_t *l_351[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint32_t *l_378 = &g_229;
                        uint16_t *l_379 = &l_360[4][0][1];
                        int i;
                        --l_355;
                        /*bef_stmt:114355*/
if (Tag69(/*uint32_t:115218:115218:114355:e*/l_341[4][0][3]))
                            break;
/*aft_stmt:114355*/
                        l_360[4][0][1]++;
                        /*bef_stmt:115134*/
/*bef_stmt:115134*/
/*bef_stmt:115134*/
/*bef_stmt:115134*/
/*bef_stmt:115134*/
/*bef_stmt:115134*/
/*bef_stmt:115134*/
/*bef_stmt:115134*/
(*l_340) = (g_172 , ((Tag70(/*uint8_t:115218:115218:115134:e*/*p_54)) && ((*p_54) = (Tag71(/*uint64_t:115218:115218:115134:e*/p_53) || (safe_sub_func_uint32_t_u_u((Tag72(/*uint32_t:0:0:115134:e*/g_229) , (safe_rshift_func_uint16_t_u_u(((*l_379) = (((*l_378) = (safe_mul_func_int16_t_s_s(((((-1L) == (Tag73(/*int32_t:115182:115194:115134:e*/l_358[3][2][3]) , (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((((-8L) < (1UL < ((((void*)0 == l_377) > 0UL) >= g_25))) < 6UL) <= (-6L)), Tag74(/*int64_t:0:0:115134:e*/g_89[3][1]))), Tag75(/*uint16_t:115156:115169:115134:e*/l_360[4][0][4]))), (Tag76(/*int32_t:115194:115218:115134:e*/*l_340)))))) , p_56) < g_25), 2L))) || Tag77(/*int32_t:115182:115194:115134:e*/l_358[4][2][0]))), 12))), 0x4986D508L))))));
/*aft_stmt:115134*/
/*aft_stmt:115134*/
/*aft_stmt:115134*/
/*aft_stmt:115134*/
/*aft_stmt:115134*/
/*aft_stmt:115134*/
/*aft_stmt:115134*/
/*aft_stmt:115134*/
                    }
                }
            }
        }
    }
    return &g_103;
}


/* ------------------------------------------ */
/* 
 * reads : g_13 g_172 g_103
 * writes: g_172
 */
static uint8_t  func_60(int16_t  p_61, int64_t  p_62, uint32_t  p_63, uint32_t  p_64, uint32_t  p_65)
{ /* block id: 104 */
    int32_t *l_307 = &g_13[1][8][0];
    int32_t *l_308 = &g_13[0][1][2];
    int32_t *l_309[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_310 = 18446744073709551607UL;
    int32_t **l_313 = &l_309[3];
    int32_t l_332 = 0x27BBCBA3L;
    int i;
    ++l_310;
    (*l_313) = l_309[3];
    for (p_65 = 23; (p_65 > 53); p_65++)
    { /* block id: 109 */
        uint16_t l_316[10][1][7] = {{{0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L}},{{0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L}},{{0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L}},{{0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L}},{{0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L}},{{0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L}},{{0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L}},{{0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L}},{{0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L,0x0562L}},{{0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L,0x1868L}}};
        int16_t *l_321 = &g_103;
        int32_t l_328 = 0x757E24B3L;
        uint16_t *l_329 = &l_316[2][0][0];
        int32_t l_330 = (-9L);
        uint16_t *l_331 = &g_172;
        int i, j, k;
        --l_316[2][0][0];
        /*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
/*bef_stmt:117904*/
l_332 &= (((*l_331) = (safe_mod_func_int16_t_s_s((Tag78(/*uint32_t:117940:117940:117904:e*/p_64) ^ ((((2UL ^ (Tag79(/*uint16_t:117910:117940:117904:e*/l_316[2][0][0]) <= (&g_113 != (void*)0))) < (l_321 == (void*)0)) && (((((*l_329) = (((Tag80(/*int64_t:117940:117940:117904:e*/p_62) && (safe_rshift_func_int8_t_s_u((((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((l_328 &= Tag81(/*uint32_t:117940:117940:117904:e*/p_64)) && Tag82(/*uint32_t:117940:117940:117904:e*/p_64)), Tag83(/*int32_t:0:0:117904:e*/g_13[0][1][2]))), Tag84(/*int16_t:117940:117940:117904:e*/p_61))) < Tag85(/*uint16_t:117910:117940:117904:e*/l_316[2][0][0])) , (-2L)), 3))) , Tag86(/*uint16_t:0:0:117904:e*/g_172)) < Tag87(/*uint32_t:117940:117940:117904:e*/p_63))) > Tag88(/*int32_t:117910:117940:117904:e*/l_330)) , (void*)0) != (void*)0)) , (Tag89(/*int32_t:117940:117940:117904:e*/*l_308)))), Tag90(/*int16_t:0:0:117904:e*/g_103)))) && 0x9096L);
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
/*aft_stmt:117904*/
    }
    /*bef_stmt:117938*/
return /*TAG91:STA*/((uint32_t)(realsmith_yJkSW((int)(p_63)+(93))+(int)(p_63)-(1))+p_63)/*TAG91:END:p_63*/;
/*aft_stmt:117938*/
}


/* ------------------------------------------ */
/* 
 * reads : g_89 g_13 g_3 g_235 g_25 g_172 g_240 g_45
 * writes: g_89 g_95 g_235 g_103 g_13
 */
static int16_t  func_66(uint8_t  p_67, int32_t  p_68, int16_t * p_69)
{ /* block id: 6 */
    const int64_t *l_80[2];
    int32_t l_92 = 0xCE3ABF99L;
    int8_t l_238 = (-4L);
    int i;
    for (i = 0; i < 2; i++)
        l_80[i] = (void*)0;
    for (p_67 = 0; (p_67 != 30); p_67++)
    { /* block id: 9 */
        int64_t * const l_88 = &g_89[3][1];
        int32_t l_90 = 0x8094BF1CL;
        int32_t l_91[9];
        const int64_t *l_239 = &g_240;
        int32_t **l_305 = &g_95;
        int i;
        for (i = 0; i < 9; i++)
            l_91[i] = 0xDF9F9BE4L;
        /*bef_stmt:119145*/
/*bef_stmt:119145*/
/*bef_stmt:119145*/
/*bef_stmt:119145*/
/*bef_stmt:119145*/
/*bef_stmt:119145*/
/*bef_stmt:119145*/
/*bef_stmt:119145*/
/*bef_stmt:119145*/
/*bef_stmt:119145*/
(*l_305) = (((safe_mul_func_uint8_t_u_u((((func_74((((safe_mul_func_uint16_t_u_u((l_80[1] == l_80[1]), (safe_add_func_uint32_t_u_u((((func_83(l_88, Tag92(/*int32_t:119160:119189:119145:e*/l_90), ((*l_88) = (l_91[3] = Tag93(/*int64_t:0:0:119145:e*/g_89[3][1]))), (Tag94(/*int32_t:119189:119189:119145:e*/l_92) , (-1L))) , (((~((p_67 <= Tag95(/*int32_t:0:0:119145:e*/g_13[0][4][3])) , Tag96(/*int32_t:0:0:119145:e*/g_3))) == Tag97(/*int32_t:119189:119189:119145:e*/l_92)) < 5UL)) , &p_68) == &l_90), /*TAG98:STA*/((int8_t)(realsmith_9qcFV((long)(g_172)+(71), (long)(g_3)+(88), (long)(l_238)+(69), (long)(l_238)+(18), (long)(g_13[0][1][2])+(91))+(long)(l_238)+(long)(g_89[3][1])+(long)(g_3)+(long)(g_172)+(long)(g_13[0][1][2])-(19))+l_238)/*TAG98:END:l_238*/)))) , Tag99(/*int32_t:119189:119189:119145:e*/p_68)) , &l_92), /*TAG100:STA*/((int32_t)(realsmith_proxy_cNfOR((char)(p_68)+(-40))+(int)(p_68)+(int)(g_13[0][4][3])+(int)(g_172)+(int)(g_89[3][1])+(int)(l_238)-(-1))+p_68)/*TAG100:END:p_68*/, l_239) < 1UL) && 18446744073709551610UL) > 0x084176EAL), /*TAG101:STA*/((int8_t)(realsmith_proxy_T17zS((char)(g_13[0][4][3])+(35))+(char)(l_238)+(char)(g_3)+(char)(g_13[0][4][3])+(char)(g_89[3][1])-(-1))+l_238)/*TAG101:END:l_238*/)) || 0xDACD0897L) , &p_68);
/*aft_stmt:119145*/
/*aft_stmt:119145*/
/*aft_stmt:119145*/
/*aft_stmt:119145*/
/*aft_stmt:119145*/
/*aft_stmt:119145*/
/*aft_stmt:119145*/
/*aft_stmt:119145*/
/*aft_stmt:119145*/
/*aft_stmt:119145*/
    }
    /*bef_stmt:119187*/
return /*TAG102:STA*/((uint8_t)(realsmith_proxy_xyvpT((int)(g_45)+(-8), (int)(g_45)+(3))+(int)(g_45)-(8))+g_45)/*TAG102:END:g_45*/;
/*aft_stmt:119187*/
}


/* ------------------------------------------ */
/* 
 * reads : g_235 g_89 g_25 g_172 g_240 g_13
 * writes: g_235 g_103 g_13 g_95
 */
static int32_t  func_74(int32_t * p_75, int64_t  p_76, const int64_t * p_77)
{ /* block id: 79 */
    uint16_t l_246 = 0x2E7FL;
    int8_t *l_248[2][10] = {{&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249,&g_249},{&g_249,&g_249,(void*)0,&g_249,&g_249,(void*)0,&g_249,&g_249,(void*)0,&g_249}};
    int32_t l_250 = 0x3A84CD22L;
    uint32_t *l_251[3];
    int16_t *l_259[2];
    int16_t **l_258 = &l_259[0];
    int16_t *l_260 = &g_103;
    int32_t l_261[10][2][7] = {{{(-8L),0L,(-1L),(-8L),1L,1L,(-8L)},{(-1L),0xFC53933CL,(-1L),1L,0xFC53933CL,0L,0L}},{{0L,1L,0x48232200L,1L,0L,0x48232200L,(-1L)},{(-1L),0x632790A9L,8L,(-1L),8L,0x632790A9L,(-1L)}},{{0xFF80766CL,(-1L),0x632790A9L,8L,(-1L),8L,0x632790A9L},{(-1L),(-1L),0x48232200L,0L,1L,0x48232200L,1L}},{{0L,0x632790A9L,0x632790A9L,0L,8L,0xFF80766CL,0L},{0xFF80766CL,1L,8L,8L,1L,0xFF80766CL,0x632790A9L}},{{1L,0L,0x48232200L,(-1L),(-1L),0x48232200L,0L},{1L,0x632790A9L,0xFF80766CL,1L,8L,8L,1L}},{{0xFF80766CL,0L,0xFF80766CL,8L,0L,0x632790A9L,0x632790A9L},{0L,1L,0x48232200L,1L,0L,0x48232200L,(-1L)}},{{(-1L),0x632790A9L,8L,(-1L),8L,0x632790A9L,(-1L)},{0xFF80766CL,(-1L),0x632790A9L,8L,(-1L),8L,0x632790A9L}},{{(-1L),(-1L),0x48232200L,0L,1L,0x48232200L,1L},{0L,0x632790A9L,0x632790A9L,0L,8L,0xFF80766CL,0L}},{{0xFF80766CL,1L,8L,8L,1L,0xFF80766CL,0x632790A9L},{1L,0L,0x48232200L,(-1L),(-1L),0x48232200L,0L}},{{1L,0x632790A9L,0xFF80766CL,1L,8L,8L,1L},{0xFF80766CL,0L,0xFF80766CL,8L,0L,0x632790A9L,0x632790A9L}}};
    uint16_t * const l_288 = (void*)0;
    uint16_t * const *l_287 = &l_288;
    uint16_t * const l_293[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t * const *l_292 = &l_293[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_251[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_259[i] = &g_103;
    /*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
/*bef_stmt:124896*/
if (((safe_mul_func_uint8_t_u_u((+18446744073709551615UL), ((safe_add_func_int8_t_s_s((((Tag103(/*uint16_t:124928:124928:124896:e*/l_246) , (((g_235 &= (+(l_250 = Tag104(/*int64_t:124928:124928:124896:e*/p_76)))) | (Tag105(/*int64_t:124928:124928:124896:e*/p_76) & Tag106(/*uint16_t:124928:124928:124896:e*/l_246))) > (safe_mod_func_uint32_t_u_u(((((((*l_260) = (l_261[0][0][5] = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((((((*l_258) = (void*)0) != l_260) > 1UL) | Tag107(/*uint16_t:124928:124928:124896:e*/l_246)) <= 6UL), 6)), /*TAG108:STA*/((int64_t)(realsmith_CIhXK((int)(g_89[3][1])+(19))+(int)(g_89[7][2])+(int)(g_3)+(int)(g_45)+(int)(g_89[3][1])+(int)(g_13[0][4][3])-(-283756790))+g_89[7][2])/*TAG108:END:g_89[7][2]*/)))) , (Tag109(/*int32_t:124928:124928:124896:e*/*p_75))) , 6UL) || /*TAG110:STA*/((int64_t)(realsmith_proxy_enDO6((int)(g_45)+(27), (int)(g_13[0][4][3])+(85))+(int)(p_76)+(int)(g_45)+(int)(g_89[3][1])+(int)(g_13[0][4][3])-(90))+p_76)/*TAG110:END:p_76*/) & Tag111(/*int64_t:124928:124928:124896:e*/p_76)), Tag112(/*int64_t:124928:124928:124896:e*/p_76))))) != Tag113(/*uint16_t:124928:124928:124896:e*/l_246)) < 0L), 0x87L)) , 255UL))) && Tag114(/*int64_t:124928:124928:124896:e*/p_76)))
    { /* block id: 85 */
        int32_t **l_262[8] = {&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95};
        int i;
        p_75 = p_75;
    }
    else
    { /* block id: 87 */
        int16_t l_275 = (-1L);
        int32_t *l_286 = &g_13[0][1][2];
        uint16_t * const **l_289 = &l_287;
        uint16_t * const *l_291 = &l_288;
        uint16_t * const **l_290[9] = {&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291,&l_291};
        int32_t l_300 = 0x78E50A10L;
        int32_t l_301 = 0x4F7DB7DDL;
        uint16_t l_302 = 6UL;
        int i;
        /*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
/*bef_stmt:124354*/
(*l_286) |= ((safe_rshift_func_uint8_t_u_s(254UL, 1)) , ((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_div_func_uint64_t_u_u(((/*TAG115:STA*/((int32_t)(realsmith_proxy_AODFc((char)(g_13[0][4][3])+(99), (char)(g_45)+(-26), 1)+(unsigned long)(l_250)+(unsigned long)(g_45)+(unsigned long)(l_246)+(unsigned long)(p_76)-(11911))+l_250)/*TAG115:END:l_250*/ , (0x852FL || Tag116(/*int16_t:124881:124928:124354:e*/l_275))) < ((safe_lshift_func_uint16_t_u_u((((((safe_add_func_uint8_t_u_u(/*TAG117:STA*/((int32_t)(realsmith_vqd9S((int)(l_250)+(90), (int)(g_45)+(88))+(int)(l_250)+(int)(p_76)+(int)(l_246)+(int)(g_45)+(int)(g_89[7][2])-(-283763271))+l_250)/*TAG117:END:l_250*/, ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((/*TAG118:STA*/((int16_t)(realsmith_2PvMM()+(int)(l_275)-(0))+l_275)/*TAG118:END:l_275*/ > (safe_add_func_uint8_t_u_u((((l_286 == ((Tag119(/*int32_t:124928:124928:124354:e*/*p_75)) , p_75)) == Tag120(/*int32_t:124928:124928:124354:e*/l_261[0][0][5])) | 0xE7L), /*TAG121:STA*/((int64_t)(realsmith_bpwsG((int)(p_76)+(34), (int)(l_261[0][0][5])+(23))+(int)(p_76)+(int)(l_246)+(int)(l_250)+(int)(l_261[0][0][5])+(int)(g_45)-(11911))+p_76)/*TAG121:END:p_76*/))), /*TAG122:STA*/((int64_t)(realsmith_proxy_5CIP5((int)(g_45)+(66))+(char)(p_76)+(char)(g_45)+(char)(l_250)+((char)(l_246)-(127))+(char)(l_261[0][0][5])-(92))+p_76)/*TAG122:END:p_76*/)), 3)) != /*TAG123:STA*/((uint16_t)(realsmith_proxy_UvPCb((int)(g_25)+(-66), (int)(g_25)+(7), (int)(g_25)+(-55))+(int)(g_25)-(3))+g_25)/*TAG123:END:g_25*/))) && (Tag124(/*int32_t:124928:124928:124354:e*/*p_75))) & Tag125(/*int64_t:124928:124928:124354:e*/p_76)) >= Tag126(/*int64_t:124928:124928:124354:e*/p_76)) , Tag127(/*uint16_t:0:0:124354:e*/g_172)), 11)) && Tag128(/*int32_t:124928:124928:124354:e*/l_250))), Tag129(/*const int64_t:0:0:124354:e*/g_240))) | 1UL), 3)) || /*TAG130:STA*/((int64_t)(realsmith_SiFgw((int)(p_76)+(33))+(int)(p_76)-(0))+p_76)/*TAG130:END:p_76*/), Tag131(/*int64_t:0:0:124354:e*/g_89[7][0]))), Tag132(/*int64_t:124928:124928:124354:e*/p_76))), Tag133(/*uint16_t:0:0:124354:e*/g_25))) | 0x6BL));
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
/*aft_stmt:124354*/
        /*bef_stmt:124391*/
(*p_75) |= (Tag134(/*int32_t:124881:124928:124391:e*/*l_286));
/*aft_stmt:124391*/
        l_292 = ((*l_289) = l_287);
        for (l_246 = 0; (l_246 <= 2); l_246 += 1)
        { /* block id: 94 */
            int32_t **l_294 = &g_95;
            int32_t l_295 = (-1L);
            int32_t *l_296 = &g_13[0][1][2];
            int32_t *l_297 = (void*)0;
            int32_t *l_298 = &l_250;
            int32_t *l_299[2];
            int i;
            for (i = 0; i < 2; i++)
                l_299[i] = &g_13[0][1][2];
            (*l_294) = l_251[l_246];
            --l_302;
        }
    }
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
/*aft_stmt:124896*/
    /*bef_stmt:124919*/
return (Tag135(/*int32_t:124928:124928:124919:e*/*p_75));
/*aft_stmt:124919*/
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_95
 */
static int16_t  func_83(int64_t * const  p_84, int64_t  p_85, int64_t  p_86, const int32_t  p_87)
{ /* block id: 12 */
    int64_t l_101 = 0x5671B2A7AC8E6169LL;
    int32_t l_118[1][3];
    int32_t l_124 = (-1L);
    int16_t l_163 = 0L;
    uint8_t *l_205[9][7] = {{&g_45,&g_45,(void*)0,(void*)0,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,(void*)0,&g_45,&g_45},{(void*)0,&g_45,(void*)0,(void*)0,(void*)0,(void*)0,&g_45},{(void*)0,(void*)0,&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,(void*)0,(void*)0,(void*)0,&g_45,&g_45,&g_45},{(void*)0,&g_45,(void*)0,&g_45,(void*)0,&g_45,(void*)0},{&g_45,&g_45,&g_45,&g_45,&g_45,(void*)0,(void*)0},{(void*)0,&g_45,&g_45,&g_45,&g_45,(void*)0,&g_45},{(void*)0,&g_45,(void*)0,&g_45,&g_45,&g_45,&g_45}};
    int32_t *l_212 = &g_13[0][1][2];
    uint32_t l_227 = 18446744073709551612UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_118[i][j] = 0x11EA0A7BL;
    }
    for (p_85 = 1; (p_85 >= 0); p_85 -= 1)
    { /* block id: 15 */
        int32_t *l_93 = (void*)0;
        int32_t **l_94[3];
        uint16_t l_169 = 0xEE2FL;
        int8_t l_178[6][10][4] = {{{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,1L},{1L,0L,0x03L,0x03L},{(-1L),(-1L),1L,0x03L},{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,1L},{1L,0L,0x03L,0x03L},{(-1L),(-1L),1L,0x03L}},{{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,1L},{1L,0L,0x03L,0x03L},{(-1L),(-1L),1L,0x03L},{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,1L},{1L,0L,0x03L,0x03L},{(-1L),(-1L),1L,0x03L}},{{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,1L},{1L,0L,0x03L,0x03L},{(-1L),(-1L),1L,0x03L},{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,1L},{1L,0L,0x03L,0x03L},{(-1L),(-1L),1L,0x03L}},{{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,1L},{1L,0L,0x03L,0x03L},{(-1L),(-1L),1L,0x03L},{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,1L},{1L,0L,0x03L,0x03L},{(-1L),(-1L),1L,0x03L}},{{(-10L),0L,(-10L),1L},{(-10L),1L,1L,(-10L)},{(-1L),1L,0x03L,(-10L)},{(-10L),(-1L),0L,0L},{1L,1L,(-10L),0L},{0x03L,(-1L),0x03L,(-10L)},{0x03L,(-10L),(-10L),0x03L},{1L,(-10L),0L,(-10L)},{(-10L),(-1L),0L,0L},{1L,1L,(-10L),0L}},{{0x03L,(-1L),0x03L,(-10L)},{0x03L,(-10L),(-10L),0x03L},{1L,(-10L),0L,(-10L)},{(-10L),(-1L),0L,0L},{1L,1L,(-10L),0L},{0x03L,(-1L),0x03L,(-10L)},{0x03L,(-10L),(-10L),0x03L},{1L,(-10L),0L,(-10L)},{(-10L),(-1L),0L,0L},{1L,1L,(-10L),0L}}};
        uint32_t l_182 = 0UL;
        int32_t l_236 = 8L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_94[i] = &l_93;
        g_95 = l_93;
    }
    /*bef_stmt:131343*/
return Tag136(/*int64_t:131345:131345:131343:e*/p_86);
/*aft_stmt:131343*/
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_13[i][j][k], "g_13[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_89[i][j], "g_89[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_751, "g_751", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_807[i][j], "g_807[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_841, "g_841", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 199
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

XXX max expression depth: 35
breakdown:
   depth: 1, occurrence: 56
   depth: 2, occurrence: 12
   depth: 4, occurrence: 1
   depth: 14, occurrence: 1
   depth: 25, occurrence: 1
   depth: 26, occurrence: 2
   depth: 27, occurrence: 1
   depth: 29, occurrence: 1
   depth: 30, occurrence: 1
   depth: 32, occurrence: 1
   depth: 35, occurrence: 1

XXX total number of pointers: 183

XXX times a variable address is taken: 355
XXX times a pointer is dereferenced on RHS: 99
breakdown:
   depth: 1, occurrence: 75
   depth: 2, occurrence: 15
   depth: 3, occurrence: 9
XXX times a pointer is dereferenced on LHS: 75
breakdown:
   depth: 1, occurrence: 67
   depth: 2, occurrence: 6
   depth: 3, occurrence: 2
XXX times a pointer is compared with null: 15
XXX times a pointer is compared with address of another variable: 3
XXX times a pointer is compared with another pointer: 5
XXX times a pointer is qualified to be dereferenced: 2807

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 330
   level: 2, occurrence: 65
   level: 3, occurrence: 45
   level: 4, occurrence: 23
   level: 5, occurrence: 19
XXX number of pointers point to pointers: 69
XXX number of pointers point to scalars: 114
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25.7
XXX average alias set size: 1.23

XXX times a non-volatile is read: 761
XXX times a non-volatile is write: 277
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 4

XXX stmts: 52
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 23
   depth: 1, occurrence: 20
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 4, occurrence: 1
   depth: 5, occurrence: 4

XXX percentage a fresh-made variable is used: 14.3
XXX percentage an existing variable is used: 85.7
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: DA85F841 */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: DA85F841 */
