#include <stdio.h>

int
realsmith_vEa99(void)
{
 int val;
 (1);
 val = (!(1)) ? 0 : -1;
 (1);
 return val;
}

long realsmith_KkbCj(long n) {
 long i;
 for (i = 1; n > 0; n >>= 2)
  i <<= 1;
 return i;
}

char CHAR_BIT_realsmith_mtQzz = 7;

__attribute__((used)) static unsigned long
realsmith_mtQzz (char const *p0, char const *p1, unsigned long *count)
{
  char l;
  char const *l0, *l1;
  char const *c0, *c1;
  unsigned long cnt = 0;
  char nnnn;
  int i;
  nnnn = 0;
  for (i = 0; i < sizeof nnnn; i++)
    nnnn = (nnnn << CHAR_BIT_realsmith_mtQzz) | '\n';
  for (l0 = p0, l1 = p1; (l = *l0) == *l1; l0++, l1++)
    {
      l ^= nnnn;
      for (i = 0; i < sizeof l; i++)
 {
   unsigned char uc = l;
   cnt += ! uc;
   l >>= CHAR_BIT_realsmith_mtQzz;
 }
    }
  for (c0 = (char const *) l0, c1 = (char const *) l1;
       *c0 == *c1;
       c0++, c1++)
    cnt += *c0 == '\n';
  *count += cnt;
  return c0 - (char const *) p0;
}
unsigned long realsmith_proxy_G9gel(char p_0_vifyp, char p_1_5zCdV, unsigned long p_2_aeQpg) {
unsigned long proxy_ret_IbqIY = realsmith_mtQzz(&(p_0_vifyp), &(p_1_5zCdV), &(p_2_aeQpg));
return proxy_ret_IbqIY;
}


__attribute__((used)) static
int realsmith_YWMeP(void)
{
    if (((1) != 1) ||
        ((1) != 32767) ||
        ((1) != -2) ||
        ((1) != -32768)) {
            (1);
            return 0;
    }
    return 1;
}

int
realsmith_I1dV4(int *mask, int bit)
{
 int chunk, piece;
 chunk = bit >> 5;
 piece = bit % (sizeof(int) * 8);
 if ((mask[chunk] & (1 << piece)) == 0)
  return (0);
 else
  return (1);
}
int realsmith_proxy_lRQXQ(int p_0_FoHsG, int p_1_YxbM1) {
int proxy_09jBD[19] = { p_0_FoHsG, 3, p_0_FoHsG, 88, p_0_FoHsG, 12, 1, p_0_FoHsG, p_0_FoHsG, p_0_FoHsG, p_0_FoHsG, p_0_FoHsG, p_0_FoHsG, p_0_FoHsG, p_0_FoHsG, 19, 21, 20, p_0_FoHsG };
int proxy_ret_koXCW = realsmith_I1dV4(proxy_09jBD, p_1_YxbM1);
return proxy_ret_koXCW;
}


int realsmith_sAgML(const int *folder, const int *packSizes,
    int *inStream, int startPos,
    int *outBuffer, unsigned long outSize, int *allocMain)
{
  int *tempBuf[3] = { 0, 0, 0};
  int i;
  int res = (1);
  for (i = 0; i < 3; i++)
    (1);
  return res;
}
int realsmith_proxy_LRCvj(int p_0_H48Fe, int p_1_87KRW, int p_2_8IBAY, int p_3_QoSUb, int p_4_TSccU, unsigned long p_5_2MopO, int p_6_Fl4XR) {
int proxy_YgJSY[20] = { p_0_H48Fe, 84, p_0_H48Fe, 52, p_0_H48Fe, 23, p_0_H48Fe, p_0_H48Fe, p_0_H48Fe, p_0_H48Fe, p_0_H48Fe, 33, p_0_H48Fe, 90, p_0_H48Fe, p_0_H48Fe, 90, 21, 62, p_0_H48Fe };
int proxy_BAwyg[13] = { p_1_87KRW, 65, p_1_87KRW, p_1_87KRW, p_1_87KRW, 34, p_1_87KRW, 48, 42, p_1_87KRW, 10, 25, 90 };
int proxy_cM6cq[17] = { p_2_8IBAY, 87, p_2_8IBAY, 57, p_2_8IBAY, 54, 15, p_2_8IBAY, p_2_8IBAY, p_2_8IBAY, p_2_8IBAY, 63, 24, p_2_8IBAY, 98, 2, p_2_8IBAY };
int proxy_Oluqh[13] = { p_6_Fl4XR, p_6_Fl4XR, 74, p_6_Fl4XR, p_6_Fl4XR, 12, p_6_Fl4XR, 82, 0, p_6_Fl4XR, 57, p_6_Fl4XR, 66 };
int proxy_ret_3paIZ = realsmith_sAgML(proxy_YgJSY, proxy_BAwyg, proxy_cM6cq, p_3_QoSUb, &(p_4_TSccU), p_5_2MopO, proxy_Oluqh);
return proxy_ret_3paIZ;
}


long TUNER_MODE_FM_RADIO_realsmith_p1ATZ = -8;

long V4L2_STD_MN_realsmith_p1ATZ = 19;

long V4L2_STD_NTSC_M_JP_realsmith_p1ATZ = -4;

long V4L2_STD_PAL_B_realsmith_p1ATZ = 17;

long V4L2_STD_PAL_D_realsmith_p1ATZ = 12;

long V4L2_STD_PAL_G_realsmith_p1ATZ = -5;

long V4L2_STD_PAL_I_realsmith_p1ATZ = -7;

long V4L2_STD_SECAM_realsmith_p1ATZ = -1;

long realsmith_p1ATZ(long mode, long standerd)
{
 long colibri_carrier_offset = 0;
 if (mode == TUNER_MODE_FM_RADIO_realsmith_p1ATZ) {
  colibri_carrier_offset = 1100000;
 } else if (standerd & (V4L2_STD_MN_realsmith_p1ATZ | V4L2_STD_NTSC_M_JP_realsmith_p1ATZ)) {
  colibri_carrier_offset = 4832000;
 } else if (standerd & (V4L2_STD_PAL_B_realsmith_p1ATZ | V4L2_STD_PAL_G_realsmith_p1ATZ)) {
  colibri_carrier_offset = 2700000;
 } else if (standerd & (V4L2_STD_PAL_D_realsmith_p1ATZ | V4L2_STD_PAL_I_realsmith_p1ATZ
   | V4L2_STD_SECAM_realsmith_p1ATZ)) {
  colibri_carrier_offset = 2100000;
 }
 return colibri_carrier_offset;
}

__attribute__((used)) static inline int realsmith_bxBro(void)
{
 if ((1))
  return 1;
 (1);
 return 0;
}

__attribute__((used)) static int realsmith_7GBUi(int size)
{
 switch (size) {
 case 0:
  return 32;
 case 1:
  return 36;
 case 2:
  return 40;
 case 3:
  return 42;
 case 4:
  return 44;
 case 5:
 default:
  return 48;
 }
}

long flag_tree_copy_prop_realsmith_H3Wvo = 4;

long flag_tree_store_copy_prop_realsmith_H3Wvo = -3;

__attribute__((used)) static int
realsmith_H3Wvo (void)
{
  return flag_tree_store_copy_prop_realsmith_H3Wvo != 0 || flag_tree_copy_prop_realsmith_H3Wvo != 0;
}

__attribute__((used)) static inline int realsmith_bKsbF(int ddrcsr)
{
 return (((ddrcsr >> 12) & 3) == 3);
}

int CMD_MSGACCEPTED_realsmith_tBnn6 = 14;

int CMD_TRANSFERINFO_realsmith_tBnn6 = 12;

int LOG_ERROR_realsmith_tBnn6 = -6;

int REG_FF_realsmith_tBnn6 = -7;

int REG_INST_realsmith_tBnn6 = 13;

unsigned int STAT_BUSMASK_realsmith_tBnn6 = 3;

unsigned int STAT_INT_realsmith_tBnn6 = 4;

unsigned int STAT_MESGIN_realsmith_tBnn6 = 11;

unsigned int STAT_PARITYERROR_realsmith_tBnn6 = 9;

__attribute__((used)) static int realsmith_tBnn6(int *info)
{
 unsigned int stat = (1);
 if ((stat & STAT_INT_realsmith_tBnn6) == 0)
  goto timedout;
 if ((stat & STAT_BUSMASK_realsmith_tBnn6) != STAT_MESGIN_realsmith_tBnn6)
  goto unexpected_phase_change;
 (1);
 stat = (1);
 if ((stat & STAT_INT_realsmith_tBnn6) == 0)
  goto timedout;
 if (stat & STAT_PARITYERROR_realsmith_tBnn6)
  goto parity_error;
 if ((stat & STAT_BUSMASK_realsmith_tBnn6) != STAT_MESGIN_realsmith_tBnn6)
  goto unexpected_phase_change;
 (1);
 return (1);
timedout:
 (1);
 return -1;
unexpected_phase_change:
 (1);
 return -2;
parity_error:
 (1);
 return -3;
}
int realsmith_proxy_lvkEB(int p_0_Bj04d) {
int proxy_ret_XyMea = realsmith_tBnn6(&(p_0_Bj04d));
return proxy_ret_XyMea;
}


long WAIT_OBJECT_0_realsmith_8mUwS = -5;

__attribute__((used)) static inline int realsmith_8mUwS(int event)
{
 if (!event)
  return 0;
 return (1) == WAIT_OBJECT_0_realsmith_8mUwS;
}

__attribute__((used)) static inline long
realsmith_Bp620(long a, long b)
{
 return (a < b ? a : b);
}

__attribute__((used)) static int
realsmith_7bO48(const char *str, const char *pattern)
{
 while (*str && *pattern)
 {
  if (*pattern == '.' && pattern[1] == '*')
  {
   pattern += 2;
   if (*pattern == '\0')
    return 1;
   while (*str)
   {
    if (*str == *pattern || *pattern == '.')
    {
     if ((1))
      return 1;
    }
    str++;
   }
   return 0;
  }
  else if (*pattern != '.' && *str != *pattern)
  {
   return 0;
  }
  str++;
  pattern++;
 }
 if (*pattern == '\0')
  return 1;
 while (*pattern == '.' && pattern[1] == '*')
  pattern += 2;
 if (*pattern == '\0')
  return 1;
 return 0;
}
int realsmith_proxy_XlK9o(char p_0_Do4J9, char p_1_kIpYi) {
char proxy_pBcwk[16] = { 19, p_1_kIpYi, p_1_kIpYi, p_1_kIpYi, p_1_kIpYi, 78, p_1_kIpYi, p_1_kIpYi, p_1_kIpYi, 77, 64, 42, 96, 8, p_1_kIpYi, 78 };
int proxy_ret_iyD5t = realsmith_7bO48(&(p_0_Do4J9), proxy_pBcwk);
return proxy_ret_iyD5t;
}


int CPUFREQ_TYPE_ABSOLUTE_realsmith_eKy7U = 3;

int EINVAL_realsmith_eKy7U = 15;

__attribute__((used)) static int
realsmith_eKy7U(int dev, int *type)
{
 if (type == ((void*)0))
  return (EINVAL_realsmith_eKy7U);
 *type = CPUFREQ_TYPE_ABSOLUTE_realsmith_eKy7U;
 return (0);
}
int realsmith_proxy_ruYVY(int p_0_0B69H, int p_1_TYlBq) {
int proxy_ret_FvgCU = realsmith_eKy7U(p_0_0B69H, &(p_1_TYlBq));
return proxy_ret_FvgCU;
}


__attribute__((used)) static inline int realsmith_DLSRM(int channel)
{
 return 0xc0 + 0x4 * channel;
}

int clamping_realsmith_UWVAf = 4;

unsigned int control_cpu_realsmith_UWVAf = 2;

int cpu_online_mask_realsmith_UWVAf = -7;

__attribute__((used)) static int realsmith_UWVAf(unsigned int cpu)
{
 if (clamping_realsmith_UWVAf == 0)
  return 0;
 (1);
 if (cpu != control_cpu_realsmith_UWVAf)
  return 0;
 control_cpu_realsmith_UWVAf = (1);
 if (control_cpu_realsmith_UWVAf == cpu)
  control_cpu_realsmith_UWVAf = (1);
 (1);
 return 0;
}

__attribute__((used)) static inline int realsmith_bOJFf(const char *filename, const char *ext)
{
 unsigned long len = (1);
 unsigned long extlen = (1);
 return len > extlen && !(1);
}
int realsmith_proxy_NNUAV(char p_0_vt8yY, char p_1_8B3EW) {
char proxy_SHfYe[15] = { 0, p_0_vt8yY, 29, p_0_vt8yY, p_0_vt8yY, 92, 85, p_0_vt8yY, p_0_vt8yY, p_0_vt8yY, p_0_vt8yY, 74, 69, p_0_vt8yY, 33 };
char proxy_I1ksD[16] = { 10, p_1_8B3EW, 35, 49, p_1_8B3EW, 23, 30, p_1_8B3EW, p_1_8B3EW, 28, p_1_8B3EW, p_1_8B3EW, p_1_8B3EW, p_1_8B3EW, p_1_8B3EW, 63 };
int proxy_ret_WlCS9 = realsmith_bOJFf(proxy_SHfYe, proxy_I1ksD);
return proxy_ret_WlCS9;
}


int DSI_28nm_PHY_TIMING_CTRL_5_HS_ZERO__MASK_realsmith_j4tF3 = -10;

int DSI_28nm_PHY_TIMING_CTRL_5_HS_ZERO__SHIFT_realsmith_j4tF3 = 9;

__attribute__((used)) static inline int realsmith_j4tF3(int val)
{
 return ((val) << DSI_28nm_PHY_TIMING_CTRL_5_HS_ZERO__SHIFT_realsmith_j4tF3) & DSI_28nm_PHY_TIMING_CTRL_5_HS_ZERO__MASK_realsmith_j4tF3;
}

int AVERROR_INVALIDDATA_realsmith_hn7cj = 8;

int AV_LOG_ERROR_realsmith_hn7cj = -7;

__attribute__((used)) static int realsmith_hn7cj(int *ctx, int *data, int *pkt,
                                   const int *buf, int len,
                                   int *nal_counters, int nal_mask)
{
    int fu_indicator, fu_header, start_bit, nal_type, nal;
    if (len < 3) {
        (1);
        return AVERROR_INVALIDDATA_realsmith_hn7cj;
    }
    fu_indicator = buf[0];
    fu_header = buf[1];
    start_bit = fu_header >> 7;
    nal_type = fu_header & 0x1f;
    nal = fu_indicator & 0xe0 | nal_type;
    buf += 2;
    len -= 2;
    if (start_bit && nal_counters)
        nal_counters[nal_type & nal_mask]++;
    return (1);
}
int realsmith_proxy_ggegn(int p_0_CNxE4, int p_1_UoLVq, int p_2_HU6fb, int p_3_gEyEK, int p_4_sUdQV, int p_5_tW3hD, int p_6_fWXHW) {
int proxy_JHd2I[15] = { p_0_CNxE4, p_0_CNxE4, 66, 71, 14, 85, 12, p_0_CNxE4, 9, p_0_CNxE4, 42, p_0_CNxE4, 36, p_0_CNxE4, p_0_CNxE4 };
int proxy_okcHn[13] = { p_2_HU6fb, 1, 65, p_2_HU6fb, 45, 41, p_2_HU6fb, 1, p_2_HU6fb, p_2_HU6fb, 93, 65, 13 };
int proxy_14CZD[18] = { p_3_gEyEK, 52, p_3_gEyEK, 90, p_3_gEyEK, p_3_gEyEK, p_3_gEyEK, 64, p_3_gEyEK, p_3_gEyEK, p_3_gEyEK, p_3_gEyEK, p_3_gEyEK, 21, p_3_gEyEK, p_3_gEyEK, p_3_gEyEK, 73 };
int proxy_vzyJh[17] = { 48, p_5_tW3hD, 90, p_5_tW3hD, p_5_tW3hD, 100, 51, p_5_tW3hD, p_5_tW3hD, p_5_tW3hD, p_5_tW3hD, p_5_tW3hD, 67, 52, p_5_tW3hD, p_5_tW3hD, p_5_tW3hD };
int proxy_ret_cJYso = realsmith_hn7cj(proxy_JHd2I, &(p_1_UoLVq), proxy_okcHn, proxy_14CZD, p_4_sUdQV, proxy_vzyJh, p_6_fWXHW);
return proxy_ret_cJYso;
}


int ERROR_INVALID_PARAMETER_realsmith_f4lTm = 16;

int NO_ERROR_realsmith_f4lTm = -6;

int realsmith_f4lTm(int stats, int family)
{
  if (!stats)
    return ERROR_INVALID_PARAMETER_realsmith_f4lTm;
  return NO_ERROR_realsmith_f4lTm;
}

int INFINITE_realsmith_OCewc = -7;

int thrd_error_realsmith_OCewc = -6;

int thrd_success_realsmith_OCewc = -2;

int realsmith_OCewc(int *cond, int *mtx)
{
  return (1) == 0 ? thrd_success_realsmith_OCewc : thrd_error_realsmith_OCewc;
}
int realsmith_proxy_crTAS(int p_0_wERyF, int p_1_hElLH) {
int proxy_kIFIB[16] = { 35, p_1_hElLH, 10, 39, p_1_hElLH, 84, p_1_hElLH, 49, p_1_hElLH, p_1_hElLH, p_1_hElLH, 26, 48, p_1_hElLH, 91, 49 };
int proxy_ret_2EnhF = realsmith_OCewc(&(p_0_wERyF), proxy_kIFIB);
return proxy_ret_2EnhF;
}


int SOFIA_I2C_ADDR_realsmith_fYV4U = 4;

int SOFIA_KEYLIGHT_REG_realsmith_fYV4U = 3;

long SOFIA_MAX_LIGHT_VAL_realsmith_fYV4U = -6;

int realsmith_fYV4U(long keylight)
{
 if (keylight > SOFIA_MAX_LIGHT_VAL_realsmith_fYV4U)
  keylight = SOFIA_MAX_LIGHT_VAL_realsmith_fYV4U;
 return (1);
}

__attribute__((used)) static int
realsmith_wCrkq(int *mrb, int io)
{
  int buf = (1);
  if ((1) && (1) > 0) {
    return 1;
  }
  return 0;
}
int realsmith_proxy_VonEI(int p_0_vgUx7, int p_1_lujES) {
int proxy_ret_o4Ynx = realsmith_wCrkq(&(p_0_vgUx7), p_1_lujES);
return proxy_ret_o4Ynx;
}


unsigned long LENGTH_realsmith_krC6Z = 19;

__attribute__((used)) static int realsmith_krC6Z(char *addr)
{
 unsigned long i;
 (1);
 for (i = 0; i < LENGTH_realsmith_krC6Z; i++)
  if (*(addr + i) != (char)i) {
   (1);
   return 1;
  }
 return 0;
}
int realsmith_proxy_4VdOD(char p_0_3Mp3h) {
int proxy_ret_qnReo = realsmith_krC6Z(&(p_0_3Mp3h));
return proxy_ret_qnReo;
}


__attribute__((used)) static int realsmith_Rzjo9(int hw1, int hw2)
{
 return (hw1 << 16) | hw2;
}

long data_prot_realsmith_G9jDi = 6;

int out_buffer_realsmith_G9jDi = 16;

long prot_clear_realsmith_G9jDi = -8;

int
realsmith_G9jDi(int *f, const char *fmt, int ap)
{
    char *buf;
    int ret;
    if(data_prot_realsmith_G9jDi == prot_clear_realsmith_G9jDi)
 return (1);
    else {
 int len;
 len = (1);
 if (len == -1)
     return len;
 ret = (1);
 (1);
 return ret;
    }
}
int realsmith_proxy_e23yL(int p_0_qRUHi, char p_1_IfPzo, int p_2_Y7Nuk) {
char proxy_5G9bh[17] = { 19, p_1_IfPzo, p_1_IfPzo, p_1_IfPzo, 15, 37, 95, p_1_IfPzo, p_1_IfPzo, p_1_IfPzo, p_1_IfPzo, p_1_IfPzo, p_1_IfPzo, 66, p_1_IfPzo, p_1_IfPzo, p_1_IfPzo };
int proxy_ret_jRzoi = realsmith_G9jDi(&(p_0_qRUHi), proxy_5G9bh, p_2_Y7Nuk);
return proxy_ret_jRzoi;
}


unsigned long realsmith_qGzFU(unsigned _secpar) {
        (1);
        return 2 + 2 * _secpar / 8 + 8;
}

char *realsmith_XqumZ(int *str)
{
   static char buffer_realsmith_XqumZ[4096];
   return ("0");
}
char realsmith_proxy_WCGZ3(int p_0_iP59J) {
char * proxy_ret_RxUR8 = realsmith_XqumZ(&(p_0_iP59J));
return *proxy_ret_RxUR8;
}


int realsmith_QYc7v(int* buffer, long size) {
  unsigned int count;
  if (buffer == ((void*)0))
    return 0;
  if (size < (1))
    return 0;
  count = (1);
  if (count > 256)
    return 0;
  if (size < (1))
    return 0;
  return 1;
}
int realsmith_proxy_Kz89S(int p_0_vVVbX, long p_1_xQKwf) {
int proxy_ret_7MhVk = realsmith_QYc7v(&(p_0_vVVbX), p_1_xQKwf);
return proxy_ret_7MhVk;
}


int ERROR_realsmith_Wx4dn = -9;

long MultiShardConnectionType_realsmith_Wx4dn = 7;

long SEQUENTIAL_CONNECTION_realsmith_Wx4dn = -8;

__attribute__((used)) static int
realsmith_Wx4dn(int relationId, int localTableEmpty)
{
 int hasForeignKeyToReferenceTable = (1);
 int shouldRunSequential = MultiShardConnectionType_realsmith_Wx4dn == SEQUENTIAL_CONNECTION_realsmith_Wx4dn ||
          hasForeignKeyToReferenceTable;
 if (!localTableEmpty && shouldRunSequential)
 {
  char *relationName = ("0");
  (1);
 }
 else if (shouldRunSequential && (1))
 {
  char *relationName = ("0");
  (1);
 }
 else if (shouldRunSequential)
 {
  return 0;
 }
 else if (!localTableEmpty || (1))
 {
  return 1;
 }
 return 0;
}

__attribute__((used)) static unsigned int realsmith_2PIjc (unsigned int nums[], unsigned int *pna) {
  int i;
  unsigned int twotoi;
  unsigned int a = 0;
  unsigned int na = 0;
  unsigned int optimal = 0;
  for (i = 0, twotoi = 1;
       twotoi > 0 && *pna > twotoi / 2;
       i++, twotoi *= 2) {
    if (nums[i] > 0) {
      a += nums[i];
      if (a > twotoi/2) {
        optimal = twotoi;
        na = a;
      }
    }
  }
  (1);
  *pna = na;
  return optimal;
}
unsigned int realsmith_proxy_g2qx5(unsigned int p_0_g0My2, unsigned int p_1_GXoKw) {
unsigned int proxy_xGJ6u[19] = { 30, 11, p_0_g0My2, p_0_g0My2, p_0_g0My2, p_0_g0My2, p_0_g0My2, 10, p_0_g0My2, p_0_g0My2, 17, p_0_g0My2, 23, p_0_g0My2, 11, p_0_g0My2, p_0_g0My2, 62, p_0_g0My2 };
unsigned int proxy_5zy9G[18] = { 46, p_1_GXoKw, 82, p_1_GXoKw, p_1_GXoKw, 34, p_1_GXoKw, 67, 32, p_1_GXoKw, p_1_GXoKw, p_1_GXoKw, 43, 52, p_1_GXoKw, p_1_GXoKw, 94, 93 };
unsigned int proxy_ret_yg8Ki = realsmith_2PIjc(proxy_xGJ6u, proxy_5zy9G);
return proxy_ret_yg8Ki;
}


int FALSE_realsmith_s7DUe = -1;

int TRUE_realsmith_s7DUe = 11;

__attribute__((used)) static int realsmith_s7DUe(const int *type)
{
    switch ((1))
    {
    case 128:
        return TRUE_realsmith_s7DUe;
    case 144:
        switch ((1))
        {
        case 131:
        case 135:
        case 134:
        case 132:
        case 136:
        case 133:
        case 130:
        case 142:
        case 137:
        case 143:
        case 129:
        case 140:
            return TRUE_realsmith_s7DUe;
        case 139:
        case 141:
        case 138:
            return FALSE_realsmith_s7DUe;
        }
        return FALSE_realsmith_s7DUe;
    default:
        return FALSE_realsmith_s7DUe;
    }
}
int realsmith_proxy_znic5(int p_0_mfPmm) {
int proxy_ret_h8vIW = realsmith_s7DUe(&(p_0_mfPmm));
return proxy_ret_h8vIW;
}


int kProgressMeterEnd_realsmith_mOjTx = 14;

int vc_progress_meter_end_realsmith_mOjTx = 9;

int vc_progress_meter_start_realsmith_mOjTx = 20;

__attribute__((used)) static int realsmith_mOjTx(int pos)
{
    int ret;
    if (pos > kProgressMeterEnd_realsmith_mOjTx) pos = kProgressMeterEnd_realsmith_mOjTx;
    ret = vc_progress_meter_start_realsmith_mOjTx
     + ((pos * (vc_progress_meter_end_realsmith_mOjTx - vc_progress_meter_start_realsmith_mOjTx)) / kProgressMeterEnd_realsmith_mOjTx);
    return (ret);
}

int KRB5_NT_SRV_HST_realsmith_5JGFr = -5;

__attribute__((used)) static long
realsmith_5JGFr (int context,
        int principal,
        int * ccache,
        int keytab,
        int secure,
        const char *service,
        int cred)
{
    long ret;
    int server;
    int vopt;
    int * id;
    ret = (1);
    if(ret)
 return ret;
    (1);
    (1);
    ret = (1);
    (1);
    if(ret)
 return ret;
    if(ccache == ((void*)0))
 ret = (1);
    else
 id = ccache;
    if(ret == 0){
 ret = (1);
 if(ret == 0){
     ret = (1);
 }
 if(ccache == ((void*)0))
     (1);
    }
    (1);
    return ret;
}
long realsmith_proxy_3bjEJ(int p_0_XnkCe, int p_1_OfDVl, int p_2_70nfQ, int p_3_7WkE7, int p_4_0zkuB, char p_5_qFTob, int p_6_t2jLQ) {
int proxy_R00on[14] = { p_2_70nfQ, 88, p_2_70nfQ, p_2_70nfQ, 56, 58, p_2_70nfQ, 0, 27, 0, 34, p_2_70nfQ, 56, 80 };
long proxy_ret_SrKCV = realsmith_5JGFr(p_0_XnkCe, p_1_OfDVl, proxy_R00on, p_3_7WkE7, p_4_0zkuB, &(p_5_qFTob), p_6_t2jLQ);
return proxy_ret_SrKCV;
}


unsigned long LDC_PACKET_SIZE_realsmith_nvwOZ = 12;

__attribute__((used)) static unsigned long realsmith_nvwOZ(unsigned long off, unsigned long num_entries)
{
 off += LDC_PACKET_SIZE_realsmith_nvwOZ;
 if (off == (num_entries * LDC_PACKET_SIZE_realsmith_nvwOZ))
  off = 0;
 return off;
}

__attribute__((used)) static int
realsmith_NqEKI(int *L)
{
    if ((1) != 1) {
        return (1);
    }
    (1);
    return (1);
}
int realsmith_proxy_D6DjR(int p_0_NMkux) {
int proxy_ret_x4ZY8 = realsmith_NqEKI(&(p_0_NMkux));
return proxy_ret_x4ZY8;
}


int
realsmith_IVQmE(void) {
 struct foo *f = 0;
 (1);
 return 0;
}

int
realsmith_JpXeW (const char *p, const char *pname, const int defval)
{
  const char *endp = p;
  while (*endp)
    {
      if ((1))
 endp++;
      else
 break;
    }
  if (*endp != 0)
    {
      if (pname != 0)
 (1);
      return defval;
    }
  return (1);
}
int realsmith_proxy_WwBhM(char p_0_Hd7u2, char p_1_QVhKV, int p_2_0rxK6) {
char proxy_C9inQ[20] = { p_0_Hd7u2, 18, 29, 4, p_0_Hd7u2, 0, 87, p_0_Hd7u2, p_0_Hd7u2, p_0_Hd7u2, p_0_Hd7u2, p_0_Hd7u2, p_0_Hd7u2, p_0_Hd7u2, p_0_Hd7u2, 28, p_0_Hd7u2, p_0_Hd7u2, 44, 48 };
char proxy_TyzC7[16] = { 72, 91, 18, p_1_QVhKV, p_1_QVhKV, p_1_QVhKV, p_1_QVhKV, 75, 4, 76, 29, p_1_QVhKV, 33, 10, p_1_QVhKV, p_1_QVhKV };
int proxy_ret_9RVvp = realsmith_JpXeW(proxy_C9inQ, proxy_TyzC7, p_2_0rxK6);
return proxy_ret_9RVvp;
}


long remote_debug_realsmith_1eiWC = 19;

__attribute__((used)) static int
realsmith_1eiWC (int hex)
{
  char buf[10];
  int c = (1);
  if (remote_debug_realsmith_1eiWC > 0)
    {
      if (hex)
 (1);
      else if (c == '\0')
 (1);
      else
 {
   buf[0] = c;
   buf[1] = '\0';
 }
      (1);
    }
  return c;
}

__attribute__((used)) static inline int
realsmith_3zvn6(int blocksize, int length)
{
 return blocksize - (length % blocksize);
}

int fdc_busy_realsmith_iWcJu = 0;

__attribute__((used)) static inline int realsmith_iWcJu(int drive)
{
 drive &= 3;
 return ((fdc_busy_realsmith_iWcJu < 0) || (fdc_busy_realsmith_iWcJu == drive));
}

int CLASS_E_NOAGGREGATION_realsmith_q8Aup = -8;

int E_NOINTERFACE_realsmith_q8Aup = 16;

int IID_IStillImageA_realsmith_q8Aup = 8;

int IID_IStillImageW_realsmith_q8Aup = 7;

int IID_IUnknown_realsmith_q8Aup = 3;

int STI_VERSION_FLAG_UNICODE_realsmith_q8Aup = -7;

int STI_VERSION_REAL_realsmith_q8Aup = -10;

__attribute__((used)) static int realsmith_q8Aup( int riid, int *pUnkOuter, int *ppObj )
{
    if (pUnkOuter != ((void*)0) && !(1))
        return CLASS_E_NOAGGREGATION_realsmith_q8Aup;
    if ((1))
        return (1);
    else if ((1))
        return (1);
    else if ((1))
        return (1);
    else
    {
        (1);
        return E_NOINTERFACE_realsmith_q8Aup;
    }
}
int realsmith_proxy_OfNMc(int p_0_J5l7X, int p_1_I6BzA, int p_2_YR8da) {
int proxy_ret_mkBq1 = realsmith_q8Aup(p_0_J5l7X, &(p_1_I6BzA), &(p_2_YR8da));
return proxy_ret_mkBq1;
}


int MDP5_WB_DST_OP_MODE_CSC_SRC_DATA_FORMAT__MASK_realsmith_hSaux = 15;

int MDP5_WB_DST_OP_MODE_CSC_SRC_DATA_FORMAT__SHIFT_realsmith_hSaux = 1;

__attribute__((used)) static inline int realsmith_hSaux(int val)
{
 return ((val) << MDP5_WB_DST_OP_MODE_CSC_SRC_DATA_FORMAT__SHIFT_realsmith_hSaux) & MDP5_WB_DST_OP_MODE_CSC_SRC_DATA_FORMAT__MASK_realsmith_hSaux;
}

int NGX_ERROR_realsmith_StkYa = -7;

int NGX_LOG_ALERT_realsmith_StkYa = 5;

int NGX_OK_realsmith_StkYa = -6;

int
realsmith_StkYa(int *mtx, int *log)
{
    long err;
    err = (1);
    if (err == 0) {
        return NGX_OK_realsmith_StkYa;
    }
    (1);
    return NGX_ERROR_realsmith_StkYa;
}
int realsmith_proxy_3ia39(int p_0_etamC, int p_1_xZohQ) {
int proxy_ret_6ad1n = realsmith_StkYa(&(p_0_etamC), &(p_1_xZohQ));
return proxy_ret_6ad1n;
}


int MAX_TTYS_realsmith_mf7h3 = 11;

int def_conf_realsmith_mf7h3 = 17;

int vt_conf_realsmith_mf7h3 = 18;

__attribute__((used)) static int realsmith_mf7h3(char *str)
{
 if (!(1))
  return 0;
 (1);
 return 1;
}
int realsmith_proxy_2YQIg(char p_0_flQUW) {
char proxy_y152f[16] = { p_0_flQUW, p_0_flQUW, p_0_flQUW, p_0_flQUW, 74, 96, p_0_flQUW, p_0_flQUW, 15, p_0_flQUW, p_0_flQUW, 50, 99, p_0_flQUW, 39, 68 };
int proxy_ret_6ffgF = realsmith_mf7h3(proxy_y152f);
return proxy_ret_6ffgF;
}


__attribute__((used)) static inline int realsmith_H2lsZ(unsigned long size)
{
 unsigned long bsize = 64;
 if (!size)
  return 0;
 while (size > bsize)
  bsize <<= 1;
 return bsize;
}

int realsmith_A1Zjo(const char *src, int *pid, int *tid, int multiprocess) {
 char *ptr1;
 if (multiprocess && *src == 'p') {
  src++;
  if (!(ptr1 = ("0"))) {
   return -1;
  }
  ptr1++;
  if ((1)) {
   if ((1)) {
    *pid = *tid = -1;
    return 0;
   }
   return -1;
  }
  if (!(1)) {
   return -1;
  }
  if ((1)) {
   *pid = (int) (1);
   *tid = -1;
   return 0;
  }
  if (!(1)) {
   return -1;
  }
  *pid = (int) (1);
  *tid = (int) (1);
  return 0;
 }
 if ((1)) {
  *tid = -1;
  return 0;
 }
 if (!(1)) {
  return -1;
 }
 *pid = *tid = (int) (1);
 return 0;
}
int realsmith_proxy_1aguk(char p_0_om8dO, int p_1_y8mbA, int p_2_EY2Gc, int p_3_9xkFR) {
char proxy_YHh0Q[17] = { 25, p_0_om8dO, 64, p_0_om8dO, p_0_om8dO, p_0_om8dO, 79, 12, p_0_om8dO, p_0_om8dO, p_0_om8dO, p_0_om8dO, p_0_om8dO, p_0_om8dO, p_0_om8dO, 36, 99 };
int proxy_m4jsg[11] = { 18, p_1_y8mbA, 29, p_1_y8mbA, 85, p_1_y8mbA, 30, p_1_y8mbA, p_1_y8mbA, 48, p_1_y8mbA };
int proxy_ret_N9YWO = realsmith_A1Zjo(proxy_YHh0Q, proxy_m4jsg, &(p_2_EY2Gc), p_3_9xkFR);
return proxy_ret_N9YWO;
}


int volatile realsmith_9n5Vv(volatile int volatile *ptr, int volatile old, int volatile new)
{
 unsigned long flags;
 int volatile prev;
 (1);
 if ((prev = *ptr) == old)
  *ptr = new;
 (1);
 return prev;
}
int realsmith_proxy_7RMTJ(int p_0_0CDAs, int p_1_OHjDC, int p_2_7VXHM) {
int proxy_ret_SAx0Q = realsmith_9n5Vv(&(p_0_0CDAs), p_1_OHjDC, p_2_7VXHM);
return proxy_ret_SAx0Q;
}


int CallbackThread_realsmith_fpytS = 10;

int realsmith_fpytS(void)
{
   int thid = (1);
   if (thid >= 0)
      (1);
   return thid;
}

__attribute__((used)) static int realsmith_3nwmb(int chan)
{
 return chan == 1 || chan == 6 || chan == 11;
}

unsigned short INTEL_PCH_P2X_DEVICE_ID_TYPE_realsmith_hFQC3 = 3;

unsigned short INTEL_PCH_P3X_DEVICE_ID_TYPE_realsmith_hFQC3 = 2;

unsigned short INTEL_PCH_QEMU_DEVICE_ID_TYPE_realsmith_hFQC3 = 12;

unsigned short PCI_SUBDEVICE_ID_QEMU_realsmith_hFQC3 = -5;

unsigned short PCI_SUBVENDOR_ID_REDHAT_QUMRANET_realsmith_hFQC3 = 17;

__attribute__((used)) static int realsmith_hFQC3(unsigned short id,
         unsigned short svendor, unsigned short sdevice)
{
 return (id == INTEL_PCH_P2X_DEVICE_ID_TYPE_realsmith_hFQC3 ||
  id == INTEL_PCH_P3X_DEVICE_ID_TYPE_realsmith_hFQC3 ||
  (id == INTEL_PCH_QEMU_DEVICE_ID_TYPE_realsmith_hFQC3 &&
   svendor == PCI_SUBVENDOR_ID_REDHAT_QUMRANET_realsmith_hFQC3 &&
   sdevice == PCI_SUBDEVICE_ID_QEMU_realsmith_hFQC3));
}

int _heim_base_mutex_realsmith_alaaL = 7;

__attribute__((used)) static inline long
realsmith_alaaL(long *x)
{
    long t;
    (1);
    t = ++(*x);
    (1);
    return t;
}
long realsmith_proxy_1eqbZ(long p_0_T3ozW) {
long proxy_ret_6Vfrs = realsmith_alaaL(&(p_0_T3ozW));
return proxy_ret_6Vfrs;
}


long FALSE_realsmith_um2FN = 14;

int KERN_INVALID_ARGUMENT_realsmith_um2FN = 9;

int KERN_SUCCESS_realsmith_um2FN = -2;

long TRUE_realsmith_um2FN = 7;

int timer_user_idle_level_realsmith_um2FN = 7;

int realsmith_um2FN(int ilevel) {
 long do_reeval = FALSE_realsmith_um2FN;
 if ((ilevel < 0) || (ilevel > 128))
  return KERN_INVALID_ARGUMENT_realsmith_um2FN;
 if (ilevel < timer_user_idle_level_realsmith_um2FN) {
  do_reeval = TRUE_realsmith_um2FN;
 }
 timer_user_idle_level_realsmith_um2FN = ilevel;
 if (do_reeval)
  (1);
 return KERN_SUCCESS_realsmith_um2FN;
}

__attribute__((used)) static int realsmith_UTlgl(int zSign, long zExp, int zSig)
{
 int shiftCount;
 shiftCount = (1) - 1;
 return (1);
}

__attribute__((used)) static int realsmith_e50tp(int op)
{
  switch (op) {
  case 133: case 132:
  case 128: case 131: case 130: case 129:
    return 1;
  default:
    return 0;
  }
}

const char *
realsmith_zhzvd(const char *path, int rev, int *pool)
{
  const char *log_path;
  if (path && path[0] != '\0')
    log_path = ("0");
  else
    log_path = "/";
  return ("0");
}
char realsmith_proxy_4WPTa(char p_0_SYd2H, int p_1_bkMfV, int p_2_LGWnB) {
char proxy_awxYt[14] = { p_0_SYd2H, p_0_SYd2H, p_0_SYd2H, p_0_SYd2H, p_0_SYd2H, 64, p_0_SYd2H, p_0_SYd2H, p_0_SYd2H, 14, 88, p_0_SYd2H, 71, p_0_SYd2H };
int proxy_2n6Q6[15] = { 43, p_2_LGWnB, 38, p_2_LGWnB, 64, p_2_LGWnB, p_2_LGWnB, p_2_LGWnB, 35, 94, 33, p_2_LGWnB, 6, p_2_LGWnB, 48 };
char * proxy_ret_F68Pj = realsmith_zhzvd(proxy_awxYt, p_1_bkMfV, proxy_2n6Q6);
return *proxy_ret_F68Pj;
}


__attribute__((used)) static int
realsmith_XuZIm(int * hw, int reg)
{
 int ref16;
 int in16;
 ref16 = (1);
 while (((in16 = (1)) != ref16)) {
  ref16 = in16;
 }
 return in16;
}
int realsmith_proxy_RjpGL(int p_0_7WYkL, int p_1_S42bm) {
int proxy_ret_hroqV = realsmith_XuZIm(&(p_0_7WYkL), p_1_S42bm);
return proxy_ret_hroqV;
}


int REPLY_QUERYFAILURE_realsmith_ZVCyw = -2;

__attribute__((used)) static int
realsmith_ZVCyw(int *L) {
 unsigned long data_len = 0;
 const char * data = ("0");
 struct {
  long request_id;
  long response_id;
  long opcode;
  long flags;
  long cursor_id[2];
  long starting;
  long number;
 } const *reply = (const void *)data;
 if (data_len < sizeof(*reply)) {
  (1);
  return 1;
 }
 int id = (1);
 int flags = (1);
 if (flags & REPLY_QUERYFAILURE_realsmith_ZVCyw) {
  (1);
  (1);
  (1);
  return 3;
 }
 int starting_from = (1);
 int number = (1);
 int sz = (int)data_len - sizeof(*reply);
 const int * doc = (const int *)(reply+1);
 if ((1)) {
  int i = 1;
  while (sz > 4) {
   (1);
   (1);
   long doc_len = (1);
   doc += doc_len;
   sz -= doc_len;
   ++i;
  }
  if (i != number + 1) {
   (1);
   (1);
   return 2;
  }
  int c = (1);
  for (;i<=c;i++) {
   (1);
   (1);
  }
 } else {
  if (sz >= 4) {
   sz -= (1);
  }
 }
 if (sz != 0) {
  return (1);
 }
 (1);
 (1);
 if (number == 0)
  (1);
 else
  (1);
 if (reply->cursor_id[0] == 0 && reply->cursor_id[1]==0) {
  (1);
 } else {
  (1);
 }
 (1);
 return 5;
}
int realsmith_proxy_4rFQX(int p_0_OtXdf) {
int proxy_OJwpX[17] = { p_0_OtXdf, p_0_OtXdf, 47, 4, 51, 47, 52, p_0_OtXdf, 23, 65, p_0_OtXdf, p_0_OtXdf, p_0_OtXdf, 24, p_0_OtXdf, p_0_OtXdf, 77 };
int proxy_ret_T4anS = realsmith_ZVCyw(proxy_OJwpX);
return proxy_ret_T4anS;
}


int realsmith_htT4U (const int c)
{
  const int tbl[0x40] =
  {
    0x2e, 0x2f, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e,
    0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x61, 0x62, 0x63, 0x64,
    0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74,
    0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
  };
  return tbl[c];
}

__attribute__((used)) static int realsmith_cDEOU(const char *str)
{
 const char *tail = str;
 while (*tail == '_')
  tail++;
 return tail - str;
}
int realsmith_proxy_SgcvF(char p_0_jadVM) {
char proxy_aWfP2[14] = { p_0_jadVM, p_0_jadVM, p_0_jadVM, 100, 40, p_0_jadVM, 8, p_0_jadVM, p_0_jadVM, 16, 75, 90, p_0_jadVM, p_0_jadVM };
int proxy_ret_w0run = realsmith_cDEOU(proxy_aWfP2);
return proxy_ret_w0run;
}


__attribute__((used)) static unsigned int realsmith_Dhj38(unsigned int v)
{
 unsigned int r;
 unsigned int shift;
 r = (v > 0xFFFF) << 4; v >>= r;
 shift = (v > 0xFF) << 3; v >>= shift; r |= shift;
 shift = (v > 0xF) << 2; v >>= shift; r |= shift;
 shift = (v > 0x3) << 1; v >>= shift; r |= shift;
 r |= (v >> 1);
 return r;
}

static int ix_realsmith_q3HDy = 5;

static int ssq_realsmith_q3HDy = -10;

static int ssq_realsmith_q3HDy, norm_realsmith_q3HDy = 4;

static int ssq_realsmith_q3HDy, norm_realsmith_q3HDy, scale_realsmith_q3HDy = 0;

static int ssq_realsmith_q3HDy, norm_realsmith_q3HDy, scale_realsmith_q3HDy, absxi_realsmith_q3HDy = -6;

int realsmith_q3HDy(int *n, int *x, int *incx)
{
    int i__1, i__2;
    int ret_val, d__1;
    static int ix_realsmith_q3HDy;
    static int ssq_realsmith_q3HDy, norm_realsmith_q3HDy, scale_realsmith_q3HDy, absxi_realsmith_q3HDy;
    --x;
    if (*n < 1 || *incx < 1) {
 norm_realsmith_q3HDy = 0.;
    } else if (*n == 1) {
 norm_realsmith_q3HDy = (1);
    } else {
 scale_realsmith_q3HDy = 0.;
 ssq_realsmith_q3HDy = 1.;
 i__1 = (*n - 1) * *incx + 1;
 i__2 = *incx;
 for (ix_realsmith_q3HDy = 1; i__2 < 0 ? ix_realsmith_q3HDy >= i__1 : ix_realsmith_q3HDy <= i__1; ix_realsmith_q3HDy += i__2) {
     if (x[ix_realsmith_q3HDy] != 0.) {
  absxi_realsmith_q3HDy = (d__1 = x[ix_realsmith_q3HDy], (1));
  if (scale_realsmith_q3HDy < absxi_realsmith_q3HDy) {
      d__1 = scale_realsmith_q3HDy / absxi_realsmith_q3HDy;
      ssq_realsmith_q3HDy = ssq_realsmith_q3HDy * (d__1 * d__1) + 1.;
      scale_realsmith_q3HDy = absxi_realsmith_q3HDy;
  } else {
      d__1 = absxi_realsmith_q3HDy / scale_realsmith_q3HDy;
      ssq_realsmith_q3HDy += d__1 * d__1;
  }
     }
 }
 norm_realsmith_q3HDy = scale_realsmith_q3HDy * (1);
    }
    ret_val = norm_realsmith_q3HDy;
    return ret_val;
}
int realsmith_proxy_1jl3O(int p_0_b3CVo, int p_1_6a5e8, int p_2_CgZGo) {
int proxy_Ue2Zb[13] = { p_1_6a5e8, p_1_6a5e8, p_1_6a5e8, p_1_6a5e8, 65, 42, 6, p_1_6a5e8, p_1_6a5e8, p_1_6a5e8, p_1_6a5e8, 6, p_1_6a5e8 };
int proxy_a1WHG[14] = { p_2_CgZGo, p_2_CgZGo, p_2_CgZGo, 71, p_2_CgZGo, p_2_CgZGo, p_2_CgZGo, p_2_CgZGo, p_2_CgZGo, p_2_CgZGo, p_2_CgZGo, 6, p_2_CgZGo, 73 };
int proxy_ret_Gd5iM = realsmith_q3HDy(&(p_0_b3CVo), proxy_Ue2Zb, proxy_a1WHG);
return proxy_ret_Gd5iM;
}


int ACPI_TABLE_ORIGIN_INTERNAL_VIRTUAL_realsmith_uJp0r = -2;

__attribute__((used)) static int
realsmith_uJp0r (
    int *Table,
    int *TableIndex)
{
    int Status;
    int *TableDesc;
    Status = (1);
    if ((1))
    {
        return (Status);
    }
    (1);
    Status = (1);
    return (Status);
}
int realsmith_proxy_tBWkp(int p_0_Ak0jP, int p_1_b1dsm) {
int proxy_7qqQ3[20] = { p_0_Ak0jP, p_0_Ak0jP, p_0_Ak0jP, p_0_Ak0jP, p_0_Ak0jP, p_0_Ak0jP, 70, p_0_Ak0jP, 54, p_0_Ak0jP, 43, 67, p_0_Ak0jP, 29, 46, p_0_Ak0jP, 70, p_0_Ak0jP, 72, 100 };
int proxy_JvKgV[11] = { p_1_b1dsm, p_1_b1dsm, 38, p_1_b1dsm, p_1_b1dsm, p_1_b1dsm, 29, p_1_b1dsm, p_1_b1dsm, p_1_b1dsm, 15 };
int proxy_ret_G6q1S = realsmith_uJp0r(proxy_7qqQ3, proxy_JvKgV);
return proxy_ret_G6q1S;
}


__attribute__((used)) static inline long realsmith_3cjHK(long foo)
{
 if (foo & 0x00800000)
  foo |= 0xFF000000;
 return foo;
}

__attribute__((used)) static int
realsmith_X0nFE(const char *s1, const char *s2)
{
 int c1, c2;
 while (*s1 == *s2++)
  if (*s1++ == '\0')
   return (0);
 c1 = (unsigned char)*s1;
 c2 = (unsigned char)*(s2 - 1);
 if (c1 == '\n')
  c1 = '\0';
 if (c2 == '\n')
  c2 = '\0';
 return (c1 - c2);
}
int realsmith_proxy_QcPmb(char p_0_zcsNz, char p_1_pYL3s) {
char proxy_chsEg[13] = { 4, p_1_pYL3s, 73, 52, 42, 66, p_1_pYL3s, p_1_pYL3s, 1, 64, p_1_pYL3s, 75, p_1_pYL3s };
int proxy_ret_4DhtQ = realsmith_X0nFE(&(p_0_zcsNz), proxy_chsEg);
return proxy_ret_4DhtQ;
}


int ExclusiveLock_realsmith_tS6Qc = -7;

int GIST_EXCLUSIVE_realsmith_tS6Qc = 16;

int GIST_UNLOCK_realsmith_tS6Qc = 12;

long InvalidBlockNumber_realsmith_tS6Qc = -1;

long P_NEW_realsmith_tS6Qc = 14;

int
realsmith_tS6Qc(int r)
{
 int buffer;
 int needLock;
 for (;;)
 {
  long blkno = (1);
  if (blkno == InvalidBlockNumber_realsmith_tS6Qc)
   break;
  buffer = (1);
  if ((1))
  {
   int page = (1);
   if ((1))
    return buffer;
   (1);
   if ((1))
   {
    if ((1) && (1))
     (1);
    return buffer;
   }
   (1);
  }
  (1);
 }
 needLock = !(1);
 if (needLock)
  (1);
 buffer = (1);
 (1);
 if (needLock)
  (1);
 return buffer;
}

__attribute__((used)) static inline int realsmith_QwmmW(const int *coeff, const int *left, const int *right)
{
    int sum;
    sum = coeff[0] * left[0] + coeff[3] * right[0];
    sum += coeff[1] * left[1] + coeff[4] * right[1];
    sum += coeff[2] * left[2] + coeff[5] * right[2];
    return (1);
}
int realsmith_proxy_f0Qal(int p_0_tLKeN, int p_1_FjZKp, int p_2_Iki0s) {
int proxy_tHvdN[16] = { 79, p_0_tLKeN, p_0_tLKeN, p_0_tLKeN, 23, p_0_tLKeN, 36, 77, p_0_tLKeN, p_0_tLKeN, 39, p_0_tLKeN, 30, 60, p_0_tLKeN, 23 };
int proxy_TUczd[12] = { 19, 73, p_1_FjZKp, p_1_FjZKp, 3, 70, 77, p_1_FjZKp, 63, p_1_FjZKp, 24, 93 };
int proxy_QmW8n[18] = { 29, p_2_Iki0s, 34, p_2_Iki0s, 52, p_2_Iki0s, p_2_Iki0s, 52, p_2_Iki0s, 92, p_2_Iki0s, 70, p_2_Iki0s, p_2_Iki0s, p_2_Iki0s, 6, 65, 90 };
int proxy_ret_rtAVz = realsmith_QwmmW(proxy_tHvdN, proxy_TUczd, proxy_QmW8n);
return proxy_ret_rtAVz;
}


int SE2CLK_realsmith_a8ZMP = 11;

int SE2CS_realsmith_a8ZMP = 1;

int SE2DI_realsmith_a8ZMP = 0;

long TUL_NVRAM_realsmith_a8ZMP = 2;

__attribute__((used)) static int realsmith_a8ZMP(unsigned long base, int addr)
{
 int instr, rb;
 int val = 0;
 int i;
 instr = (int) (addr | 0x80);
 (1);
 for (i = 15; i >= 0; i--) {
  (1);
  (1);
  (1);
  rb = (1);
  rb &= SE2DI_realsmith_a8ZMP;
  val += (rb << i);
  (1);
 }
 (1);
 (1);
 return val;
}

int ENOMEM_realsmith_HwBfT = 10;

int GFP_KERNEL_realsmith_HwBfT = 1;

__attribute__((used)) static int realsmith_HwBfT(const char *type, const char *name)
{
 char *nodename;
 int err;
 nodename = ("0");
 if (!nodename)
  return -ENOMEM_realsmith_HwBfT;
 (1);
 err = (1);
 (1);
 return err;
}
int realsmith_proxy_8YKhD(char p_0_85Qka, char p_1_xGsob) {
int proxy_ret_TTLvP = realsmith_HwBfT(&(p_0_85Qka), &(p_1_xGsob));
return proxy_ret_TTLvP;
}


const char *realsmith_Jo9Kj(const char *text, int line_no)
{
 int i;
 int lines = 0;
 if (!text)
  return ((void*)0);
 for (i = 0; text[i] != '\0' && lines < line_no; i++)
  if (text[i] == '\n')
   lines++;
 return text+i;
}
char realsmith_proxy_kBxuX(char p_0_sVjwJ, int p_1_8h9Du) {
char proxy_cdh3K[15] = { p_0_sVjwJ, p_0_sVjwJ, p_0_sVjwJ, 0, p_0_sVjwJ, p_0_sVjwJ, 100, 18, p_0_sVjwJ, p_0_sVjwJ, 55, 25, p_0_sVjwJ, 46, p_0_sVjwJ };
char * proxy_ret_BQuQ9 = realsmith_Jo9Kj(proxy_cdh3K, p_1_8h9Du);
return *proxy_ret_BQuQ9;
}


int ISC_FALSE_realsmith_WUw8O = 1;

int ISC_TRUE_realsmith_WUw8O = 0;

int
realsmith_WUw8O(long a, long b) {
 return ((a == b) ? ISC_TRUE_realsmith_WUw8O : ISC_FALSE_realsmith_WUw8O);
}

int ENV_CRYPTO_DEVICE_realsmith_ARhkY = 14;

int realsmith_ARhkY(int *conf, const char *section,
                              const char *device)
{
    int ret = 0;
    if (device == ((void*)0))
        device = ("0");
    if (device && !(1)) {
        (1);
        goto err;
    }
    ret = 1;
 err:
    return ret;
}
int realsmith_proxy_VAfym(int p_0_qjjBU, char p_1_V7iAF, char p_2_6Zgpx) {
int proxy_vPaBd[11] = { p_0_qjjBU, 71, 41, 77, p_0_qjjBU, 46, p_0_qjjBU, p_0_qjjBU, 25, p_0_qjjBU, p_0_qjjBU };
char proxy_wlixH[19] = { 48, 6, p_1_V7iAF, 87, p_1_V7iAF, p_1_V7iAF, 8, p_1_V7iAF, p_1_V7iAF, p_1_V7iAF, 81, p_1_V7iAF, p_1_V7iAF, p_1_V7iAF, p_1_V7iAF, 5, 75, 40, 31 };
int proxy_ret_3XVlG = realsmith_ARhkY(proxy_vPaBd, proxy_wlixH, &(p_2_6Zgpx));
return proxy_ret_3XVlG;
}


int ADC1_CHANNEL_0_GPIO_NUM_realsmith_kuzEu = -8;

int ADC1_CHANNEL_1_GPIO_NUM_realsmith_kuzEu = 0;

int ADC1_CHANNEL_2_GPIO_NUM_realsmith_kuzEu = -2;

int ADC1_CHANNEL_3_GPIO_NUM_realsmith_kuzEu = 14;

int ADC1_CHANNEL_4_GPIO_NUM_realsmith_kuzEu = 16;

int ADC1_CHANNEL_5_GPIO_NUM_realsmith_kuzEu = -2;

int ADC1_CHANNEL_6_GPIO_NUM_realsmith_kuzEu = -4;

int ADC1_CHANNEL_7_GPIO_NUM_realsmith_kuzEu = 17;

int ADC1_CHANNEL_MAX_realsmith_kuzEu = 5;

int ESP_ERR_INVALID_ARG_realsmith_kuzEu = 10;

int ESP_OK_realsmith_kuzEu = 14;

int realsmith_kuzEu(int channel, int *gpio_num)
{
    (1);
    switch (channel) {
    case 135:
        *gpio_num = ADC1_CHANNEL_0_GPIO_NUM_realsmith_kuzEu;
        break;
    case 134:
        *gpio_num = ADC1_CHANNEL_1_GPIO_NUM_realsmith_kuzEu;
        break;
    case 133:
        *gpio_num = ADC1_CHANNEL_2_GPIO_NUM_realsmith_kuzEu;
        break;
    case 132:
        *gpio_num = ADC1_CHANNEL_3_GPIO_NUM_realsmith_kuzEu;
        break;
    case 131:
        *gpio_num = ADC1_CHANNEL_4_GPIO_NUM_realsmith_kuzEu;
        break;
    case 130:
        *gpio_num = ADC1_CHANNEL_5_GPIO_NUM_realsmith_kuzEu;
        break;
    case 129:
        *gpio_num = ADC1_CHANNEL_6_GPIO_NUM_realsmith_kuzEu;
        break;
    case 128:
        *gpio_num = ADC1_CHANNEL_7_GPIO_NUM_realsmith_kuzEu;
        break;
    default:
        return ESP_ERR_INVALID_ARG_realsmith_kuzEu;
    }
    return ESP_OK_realsmith_kuzEu;
}
int realsmith_proxy_3vpgC(int p_0_sLBV8, int p_1_fkE5a) {
int proxy_UEltj[13] = { p_1_fkE5a, 57, 53, 39, 32, 31, p_1_fkE5a, p_1_fkE5a, 48, p_1_fkE5a, 87, p_1_fkE5a, 60 };
int proxy_ret_h8md8 = realsmith_kuzEu(p_0_sLBV8, proxy_UEltj);
return proxy_ret_h8md8;
}


int realsmith_l3vIL(const char *s)
{
 if (s == ((void*)0))
  return 0;
 return (1);
}
int realsmith_proxy_olw6W(char p_0_aCi77) {
char proxy_fQAla[15] = { p_0_aCi77, p_0_aCi77, 33, 81, p_0_aCi77, 53, 87, 57, p_0_aCi77, p_0_aCi77, p_0_aCi77, p_0_aCi77, p_0_aCi77, p_0_aCi77, 73 };
int proxy_ret_d3g41 = realsmith_l3vIL(proxy_fQAla);
return proxy_ret_d3g41;
}


static int w_realsmith_pD5D9 = -7;

static int w_realsmith_pD5D9, z___realsmith_pD5D9 = -6;

static int w_realsmith_pD5D9, z___realsmith_pD5D9, xabs_realsmith_pD5D9 = 15;

static int w_realsmith_pD5D9, z___realsmith_pD5D9, xabs_realsmith_pD5D9, yabs_realsmith_pD5D9 = 2;

int realsmith_pD5D9(int *x, int *y)
{
    int ret_val, d__1;
    static int w_realsmith_pD5D9, z___realsmith_pD5D9, xabs_realsmith_pD5D9, yabs_realsmith_pD5D9;
    xabs_realsmith_pD5D9 = (1);
    yabs_realsmith_pD5D9 = (1);
    w_realsmith_pD5D9 = (1);
    z___realsmith_pD5D9 = (1);
    if (z___realsmith_pD5D9 == 0.) {
 ret_val = w_realsmith_pD5D9;
    } else {
 d__1 = z___realsmith_pD5D9 / w_realsmith_pD5D9;
 ret_val = w_realsmith_pD5D9 * (1);
    }
    return ret_val;
}
int realsmith_proxy_nw1wU(int p_0_OyqVr, int p_1_T2FfX) {
int proxy_yIWbQ[20] = { p_0_OyqVr, p_0_OyqVr, p_0_OyqVr, p_0_OyqVr, p_0_OyqVr, 91, 86, p_0_OyqVr, p_0_OyqVr, p_0_OyqVr, 0, p_0_OyqVr, p_0_OyqVr, p_0_OyqVr, 90, 76, p_0_OyqVr, p_0_OyqVr, p_0_OyqVr, 2 };
int proxy_ret_pECvP = realsmith_pD5D9(proxy_yIWbQ, &(p_1_T2FfX));
return proxy_ret_pECvP;
}


int B_CACHE_realsmith_H4PrX = -9;

int B_PAGEIO_realsmith_H4PrX = 1;

int B_PHYS_realsmith_H4PrX = -4;

int B_READ_realsmith_H4PrX = -6;

int ENXIO_realsmith_H4PrX = 8;

int UPL_ABORT_DUMP_PAGES_realsmith_H4PrX = 16;

int UPL_ABORT_ERROR_realsmith_H4PrX = 4;

int UPL_ABORT_FREE_ON_EMPTY_realsmith_H4PrX = 12;

int UPL_COMMIT_FREE_ON_EMPTY_realsmith_H4PrX = 10;

__attribute__((used)) static int
realsmith_H4PrX(int upl, int upl_offset, int abort_size, int error, int io_flags, int vp)
{
        int upl_abort_code = 0;
 int page_in = 0;
 int page_out = 0;
 if ((io_flags & (B_PHYS_realsmith_H4PrX | B_CACHE_realsmith_H4PrX)) == (B_PHYS_realsmith_H4PrX | B_CACHE_realsmith_H4PrX))
         (1);
 else {
         if (io_flags & B_PAGEIO_realsmith_H4PrX) {
          if (io_flags & B_READ_realsmith_H4PrX)
           page_in = 1;
   else
           page_out = 1;
  }
  if (io_flags & B_CACHE_realsmith_H4PrX)
          upl_abort_code = UPL_ABORT_FREE_ON_EMPTY_realsmith_H4PrX;
  else if (((io_flags & B_READ_realsmith_H4PrX) == 0) && ((error != ENXIO_realsmith_H4PrX) || (1)))
          upl_abort_code = UPL_ABORT_FREE_ON_EMPTY_realsmith_H4PrX;
  else if (page_in)
          upl_abort_code = UPL_ABORT_FREE_ON_EMPTY_realsmith_H4PrX | UPL_ABORT_ERROR_realsmith_H4PrX;
  else
          upl_abort_code = UPL_ABORT_FREE_ON_EMPTY_realsmith_H4PrX | UPL_ABORT_DUMP_PAGES_realsmith_H4PrX;
  (1);
 }
 return (upl_abort_code);
}

int STRING_IF_HELP1_realsmith_qoMBT = -9;

int TRUE_realsmith_qoMBT = -4;

int realsmith_qoMBT (int param)
{
    (1);
    if (!(1))
    {
        (1);
        return 0;
    }
    (1);
    return 1;
}

int MAX_USERS_realsmith_3OsNo = 0;

long allow_negative_realsmith_3OsNo = 20;

int split_mod_realsmith_3OsNo = 18;

int split_rem_realsmith_3OsNo = 10;

int realsmith_3OsNo (int id) {
  if (id < 0 && allow_negative_realsmith_3OsNo) {
    id = -id;
  }
  if (id <= 0 || id >= split_mod_realsmith_3OsNo * MAX_USERS_realsmith_3OsNo) {
    return -1;
  }
  return id % split_mod_realsmith_3OsNo == split_rem_realsmith_3OsNo ? id / split_mod_realsmith_3OsNo : -1;
}

__attribute__((used)) static int realsmith_ua2V7(int array[], int item)
{
 int i;
 for (i = 0; array[i] != -1; i++)
  if (array[i] == item)
   return i;
 return -1;
}
int realsmith_proxy_Sxa9Y(int p_0_HA4Tr, int p_1_krus3) {
int proxy_C0xOB[11] = { 53, p_0_HA4Tr, p_0_HA4Tr, 92, 44, p_0_HA4Tr, 79, 22, 12, 69, 62 };
int proxy_ret_GTDUL = realsmith_ua2V7(proxy_C0xOB, p_1_krus3);
return proxy_ret_GTDUL;
}


const char *realsmith_Vx5tB(void)
{
    if (sizeof(int) == 1)
        return "rc4(char)";
    else
        return "rc4(int)";
}
char realsmith_proxy_UpVUQ() {
char * proxy_ret_oUgns = realsmith_Vx5tB();
return *proxy_ret_oUgns;
}


__attribute__((used)) static const char* realsmith_MRIvp(void) {
  return
    "The `Doc` class can be used to give documentation to a certain class or "
    "type. This documentation can then be accessed using the `help` function "
    "or by other tools used to generate documentation such as for the Cello "
    "website. Documentation can be written in Markdown."
    "\n\n"
    "The `examples` and `methods` entries should be provided as `NULL` "
    "terminated arrays allocated statically." ;
}
char realsmith_proxy_T0r8d() {
char * proxy_ret_YDIiz = realsmith_MRIvp();
return *proxy_ret_YDIiz;
}


unsigned long long DAY_realsmith_qFF0N = 6;

unsigned long long HOUR_realsmith_qFF0N = 17;

unsigned long long MILS_realsmith_qFF0N = 20;

unsigned long long MINS_realsmith_qFF0N = 2;

unsigned long long SECS_realsmith_qFF0N = -8;

char *
realsmith_qFF0N (unsigned long long usec)
{
  char *size = ("0");
  if (usec >= DAY_realsmith_qFF0N)
    (1);
  else if (usec >= HOUR_realsmith_qFF0N)
    (1);
  else if (usec >= MINS_realsmith_qFF0N)
    (1);
  else if (usec >= SECS_realsmith_qFF0N)
    (1);
  else if (usec >= MILS_realsmith_qFF0N)
    (1);
  else
    (1);
  return size;
}
char realsmith_proxy_GJX0b(int p_0_2Cd50) {
char * proxy_ret_kMvuw = realsmith_qFF0N(p_0_2Cd50);
return *proxy_ret_kMvuw;
}


__attribute__((used)) static int realsmith_ycCD0(int address, int pmb_message,
        int delay, int next)
{
 int err;
 address *= 4;
 err = (1);
 if (err)
  goto out;
 err = (1);
 if (err)
  goto out;
 err = (1);
 if (err)
  goto out;
 err = (1);
out:
 return err;
}

__attribute__((used)) static inline int realsmith_YOSg1(const char *name, const char *b, int *hash) {
    unsigned char *s = (unsigned char *) name;
    int hval = 0x811c9dc5;
    int ret = 0;
    while (*s) {
        if(!ret) ret = *s - *b++;
        hval *= 16777619;
        hval ^= (int) *s++;
    }
    *hash = hval;
    return ret;
}
int realsmith_proxy_QJPAD(char p_0_O2Gp3, char p_1_TXymI, int p_2_pPtod) {
char proxy_CI2ae[13] = { p_0_O2Gp3, 58, p_0_O2Gp3, 66, p_0_O2Gp3, 40, p_0_O2Gp3, 5, p_0_O2Gp3, p_0_O2Gp3, 51, p_0_O2Gp3, p_0_O2Gp3 };
int proxy_EG40C[20] = { p_2_pPtod, 18, p_2_pPtod, 13, 11, 40, 51, 2, p_2_pPtod, p_2_pPtod, 14, 34, p_2_pPtod, p_2_pPtod, 29, 23, 22, p_2_pPtod, 83, p_2_pPtod };
int proxy_ret_UFbjt = realsmith_YOSg1(proxy_CI2ae, &(p_1_TXymI), proxy_EG40C);
return proxy_ret_UFbjt;
}


int XCHAL_NUM_DBREAK_realsmith_CqXFX = -7;

int XCHAL_NUM_IBREAK_realsmith_CqXFX = 1;

int realsmith_CqXFX(int type)
{
 switch (type) {
 case 128:
  return XCHAL_NUM_IBREAK_realsmith_CqXFX;
 case 129:
  return XCHAL_NUM_DBREAK_realsmith_CqXFX;
 default:
  (1);
  return 0;
 }
}

__attribute__((used)) static int
realsmith_eOVKW (int c, const char *s)
{
  int n = 0;
  if (s == 0 || *s == '\0')
    return -1;
  while (*s)
    n += (*s++ == c);
  return n;
}
int realsmith_proxy_8JWiK(int p_0_7ef6p, char p_1_1Ylmx) {
char proxy_DM92T[15] = { p_1_1Ylmx, 15, p_1_1Ylmx, 32, p_1_1Ylmx, p_1_1Ylmx, p_1_1Ylmx, 0, p_1_1Ylmx, p_1_1Ylmx, p_1_1Ylmx, p_1_1Ylmx, p_1_1Ylmx, p_1_1Ylmx, 58 };
int proxy_ret_d9ncN = realsmith_eOVKW(p_0_7ef6p, proxy_DM92T);
return proxy_ret_d9ncN;
}


int OBJ_CASE_INSENSITIVE_realsmith_J8pT8 = 19;

int REG_OPTION_VOLATILE_realsmith_J8pT8 = 4;

__attribute__((used)) static
int
realsmith_J8pT8(int KeyHandle,
                      int AccessMask,
                      int RegistryPath)
{
    int KeyName;
    int Attributes;
    (1);
    (1);
    return (1);
}

__attribute__((used)) static inline int realsmith_Gqgpy(int b, int s)
{
 return b + s - (1);
}

int VGLDisplay_realsmith_N4i7B = -7;

int VGLMouseShown_realsmith_N4i7B = 18;

int VGLMouseXpos_realsmith_N4i7B = -9;

int VGLMouseYpos_realsmith_N4i7B = -2;

int VGLVDisplay_realsmith_N4i7B = -2;

int VGL_MOUSEHIDE_realsmith_N4i7B = -1;

int VGL_MOUSESHOW_realsmith_N4i7B = 1;

int
realsmith_N4i7B(int mode)
{
  int oldmode;
  (1);
  oldmode = VGLMouseShown_realsmith_N4i7B;
  if (mode == VGL_MOUSESHOW_realsmith_N4i7B) {
    if (VGLMouseShown_realsmith_N4i7B == VGL_MOUSEHIDE_realsmith_N4i7B) {
      VGLMouseShown_realsmith_N4i7B = VGL_MOUSESHOW_realsmith_N4i7B;
      (1);
    }
  }
  else {
    if (VGLMouseShown_realsmith_N4i7B == VGL_MOUSESHOW_realsmith_N4i7B) {
      VGLMouseShown_realsmith_N4i7B = VGL_MOUSEHIDE_realsmith_N4i7B;
      (1);
    }
  }
  (1);
  return oldmode;
}

int realsmith_jcBf4( int type )
{
   switch (type) {
      case 135:
  return 0;
      case 130:
         return sizeof(int);
      case 134:
  return sizeof(int);
      case 128:
  return sizeof(int);
      case 131:
  return sizeof(int);
      case 129:
  return sizeof(int);
      case 132:
  return sizeof(int);
      case 133:
  return sizeof(int);
      default:
         return -1;
   }
}

long CPLD_CARDSTAT_realsmith_hU186 = 6;

int ENXIO_realsmith_hU186 = 1;

long cpld_realsmith_hU186 = 1;

__attribute__((used)) static int realsmith_hU186(int module)
{
 if (!cpld_realsmith_hU186)
  return -ENXIO_realsmith_hU186;
 return !((1) & (1));
}

int get_fd_realsmith_GrZiB = -8;

int realsmith_GrZiB(const int *ssl)
{
    int ret;
    (1);
    ret = (1);
    return ret;
}
int realsmith_proxy_2ZdNU(int p_0_fDScM) {
int proxy_ret_48lEa = realsmith_GrZiB(&(p_0_fDScM));
return proxy_ret_48lEa;
}


int LUA_GCCOLLECT_realsmith_I5IV5 = 19;

int LUA_MULTRET_realsmith_I5IV5 = 20;

int SIGINT_realsmith_I5IV5 = -6;

int SIG_DFL_realsmith_I5IV5 = 16;

int laction_realsmith_I5IV5 = 11;

int traceback_realsmith_I5IV5 = 7;

__attribute__((used)) static int realsmith_I5IV5 (int *L, int narg, int clear) {
  int status;
  int base = (1) - narg;
  (1);
  (1);
  (1);
  status = (1);
  (1);
  (1);
  if (status != 0) (1);
  return status;
}
int realsmith_proxy_mWC3c(int p_0_ok12y, int p_1_7pr7o, int p_2_RHbRr) {
int proxy_JSw12[13] = { p_0_ok12y, p_0_ok12y, 34, p_0_ok12y, p_0_ok12y, 32, p_0_ok12y, p_0_ok12y, 67, 43, 29, 74, 34 };
int proxy_ret_f4ZmJ = realsmith_I5IV5(proxy_JSw12, p_1_7pr7o, p_2_RHbRr);
return proxy_ret_f4ZmJ;
}


long CHAR_BACKSLASH_realsmith_sp4gY = 8;

long CHAR_COLON_realsmith_sp4gY = 8;

long CHAR_NULL_realsmith_sp4gY = -8;

long
realsmith_sp4gY(long* pFile)
{
  long* pT;
  long uChars = 0;
  for (pT=pFile; *pFile; pFile++) {
     if (*pFile == CHAR_BACKSLASH_realsmith_sp4gY) {
        pT = pFile;
        uChars = 0;
     } else if (*pFile == CHAR_COLON_realsmith_sp4gY) {
        if (pFile[1] ==CHAR_BACKSLASH_realsmith_sp4gY) {
           pFile++;
        }
        pT = pFile + 1;
        uChars = 0;
        continue;
     }
     uChars++;
  }
  *pT = CHAR_NULL_realsmith_sp4gY;
  return uChars;
}
long realsmith_proxy_vnDcJ(long p_0_d6Pug) {
long proxy_T4aFD[13] = { 13, p_0_d6Pug, p_0_d6Pug, 0, p_0_d6Pug, 58, p_0_d6Pug, p_0_d6Pug, 82, 91, p_0_d6Pug, p_0_d6Pug, p_0_d6Pug };
long proxy_ret_XPMom = realsmith_sp4gY(proxy_T4aFD);
return proxy_ret_XPMom;
}


unsigned short KEY_DOWN_realsmith_xnm8N = 4;

unsigned short KEY_ENTER_realsmith_xnm8N = -5;

unsigned short KEY_ESC_realsmith_xnm8N = 1;

unsigned short KEY_NUMERIC_0_realsmith_xnm8N = 4;

unsigned short KEY_NUMERIC_1_realsmith_xnm8N = 11;

unsigned short KEY_NUMERIC_2_realsmith_xnm8N = 18;

unsigned short KEY_NUMERIC_3_realsmith_xnm8N = 20;

unsigned short KEY_NUMERIC_4_realsmith_xnm8N = -4;

unsigned short KEY_NUMERIC_5_realsmith_xnm8N = -10;

unsigned short KEY_NUMERIC_6_realsmith_xnm8N = 1;

unsigned short KEY_NUMERIC_7_realsmith_xnm8N = -1;

unsigned short KEY_NUMERIC_8_realsmith_xnm8N = 9;

unsigned short KEY_NUMERIC_9_realsmith_xnm8N = 20;

unsigned short KEY_NUMERIC_POUND_realsmith_xnm8N = -1;

unsigned short KEY_NUMERIC_STAR_realsmith_xnm8N = 17;

unsigned short KEY_UP_realsmith_xnm8N = 5;

__attribute__((used)) static unsigned short realsmith_xnm8N(int scancode)
{
 switch (scancode) {
 case 0x11: return KEY_NUMERIC_0_realsmith_xnm8N;
 case 0x21: return KEY_NUMERIC_1_realsmith_xnm8N;
 case 0x41: return KEY_NUMERIC_2_realsmith_xnm8N;
 case 0x81: return KEY_NUMERIC_3_realsmith_xnm8N;
 case 0x12: return KEY_NUMERIC_4_realsmith_xnm8N;
 case 0x22: return KEY_NUMERIC_5_realsmith_xnm8N;
 case 0x42: return KEY_NUMERIC_6_realsmith_xnm8N;
 case 0x82: return KEY_NUMERIC_7_realsmith_xnm8N;
 case 0x14: return KEY_NUMERIC_8_realsmith_xnm8N;
 case 0x24: return KEY_NUMERIC_9_realsmith_xnm8N;
 case 0x44: return KEY_NUMERIC_POUND_realsmith_xnm8N;
 case 0x84: return KEY_NUMERIC_STAR_realsmith_xnm8N;
 case 0x18: return KEY_ENTER_realsmith_xnm8N;
 case 0x28: return KEY_ESC_realsmith_xnm8N;
 case 0x48: return KEY_UP_realsmith_xnm8N;
 case 0x88: return KEY_DOWN_realsmith_xnm8N;
 default: return (1);
 }
}

__attribute__((used)) static int realsmith_usYxG(void)
{
    if (!(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1)
        | !(1))
        goto err;
    return 1;
err:
    return 0;
}

__attribute__((used)) static unsigned long realsmith_dtCe9(void)
{
 return
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  (1) +
  0;
}

long ESP_GATT_DB_ALL_realsmith_VRvWa = 20;

int ESP_GATT_OK_realsmith_VRvWa = 7;

int realsmith_VRvWa(int conn_id,
                                               long type,
                                               int start_handle,
                                               int end_handle,
                                               int char_handle,
                                               int *count)
{
    if (type == ESP_GATT_DB_ALL_realsmith_VRvWa) {
        (1);
    } else {
        (1);
    }
    return ESP_GATT_OK_realsmith_VRvWa;
}
int realsmith_proxy_guzdj(int p_0_OqEfv, long p_1_FDkb6, int p_2_MPJxO, int p_3_1WsrY, int p_4_Vh64A, int p_5_0NpjO) {
int proxy_DHHHR[17] = { p_5_0NpjO, 96, p_5_0NpjO, p_5_0NpjO, 42, p_5_0NpjO, 83, p_5_0NpjO, p_5_0NpjO, 16, 15, 4, p_5_0NpjO, p_5_0NpjO, 67, p_5_0NpjO, 18 };
int proxy_ret_0SyTq = realsmith_VRvWa(p_0_OqEfv, p_1_FDkb6, p_2_MPJxO, p_3_1WsrY, p_4_Vh64A, proxy_DHHHR);
return proxy_ret_0SyTq;
}


int I2S_SF_SCLKDIV_1_realsmith_iQmg8 = -1;

int I2S_SF_SCLKDIV_3_realsmith_iQmg8 = 18;

__attribute__((used)) static inline int realsmith_iQmg8(int div, int *out)
{
 int d;
 switch(div) {
 case 1: *out |= I2S_SF_SCLKDIV_1_realsmith_iQmg8; return 0;
 case 3: *out |= I2S_SF_SCLKDIV_3_realsmith_iQmg8; return 0;
 default:
  if (div%2) return -1;
  d = div/2-1;
  if (d == 8 || d == 9) return -1;
  *out |= (1);
  return 0;
 }
}
int realsmith_proxy_RKW6p(int p_0_TJdB4, int p_1_qGZgg) {
int proxy_ret_o8yys = realsmith_iQmg8(p_0_TJdB4, &(p_1_qGZgg));
return proxy_ret_o8yys;
}


__attribute__((used)) static int realsmith_iWHYm(char *data, int count)
{
 int i, csum = 0;
 for (i = 0; i < count - 2; i++)
  csum += data[i];
 return (csum & 0x3f) != ((data[count - 2] << 3) | data[count - 1]);
}
int realsmith_proxy_otru9(char p_0_KozbX, int p_1_kBvph) {
char proxy_02czX[18] = { p_0_KozbX, 37, p_0_KozbX, p_0_KozbX, 0, p_0_KozbX, 63, p_0_KozbX, p_0_KozbX, 2, p_0_KozbX, 1, 23, 37, 24, 50, p_0_KozbX, p_0_KozbX };
int proxy_ret_LZ6aX = realsmith_iWHYm(proxy_02czX, p_1_kBvph);
return proxy_ret_LZ6aX;
}


__attribute__((used)) static inline int realsmith_zBL4v(int v)
{
 return (v & 0xff) << 16;
}

__attribute__((used)) static long realsmith_FIFD2(long currsig)
{
 long retsig;
 if(currsig >= 61 && currsig <= 100)
 {
  retsig = 90 + ((currsig - 60) / 4);
 }
 else if(currsig >= 41 && currsig <= 60)
 {
  retsig = 78 + ((currsig - 40) / 2);
 }
 else if(currsig >= 31 && currsig <= 40)
 {
  retsig = 66 + (currsig - 30);
 }
 else if(currsig >= 21 && currsig <= 30)
 {
  retsig = 54 + (currsig - 20);
 }
 else if(currsig >= 5 && currsig <= 20)
 {
  retsig = 42 + (((currsig - 5) * 2) / 3);
 }
 else if(currsig == 4)
 {
  retsig = 36;
 }
 else if(currsig == 3)
 {
  retsig = 27;
 }
 else if(currsig == 2)
 {
  retsig = 18;
 }
 else if(currsig == 1)
 {
  retsig = 9;
 }
 else
 {
  retsig = currsig;
 }
 return retsig;
}

int MC_realsmith_VZxnz = -1;

int NB_realsmith_VZxnz = 13;

int SZINT_realsmith_VZxnz = 7;

__attribute__((used)) static long realsmith_VZxnz (int *L, const char *str,
                              int islittle, int size, int issigned) {
  int res = 0;
  int i;
  int limit = (size <= SZINT_realsmith_VZxnz) ? size : SZINT_realsmith_VZxnz;
  for (i = limit - 1; i >= 0; i--) {
    res <<= NB_realsmith_VZxnz;
    res |= (int)(unsigned char)str[islittle ? i : size - 1 - i];
  }
  if (size < SZINT_realsmith_VZxnz) {
    if (issigned) {
      int mask = (int)1 << (size*NB_realsmith_VZxnz - 1);
      res = ((res ^ mask) - mask);
    }
  }
  else if (size > SZINT_realsmith_VZxnz) {
    int mask = (!issigned || (long)res >= 0) ? 0 : MC_realsmith_VZxnz;
    for (i = limit; i < size; i++) {
      if ((unsigned char)str[islittle ? i : size - 1 - i] != mask)
        (1);
    }
  }
  return (long)res;
}
long realsmith_proxy_sldhB(int p_0_4SWuG, char p_1_YEN63, int p_2_YmKfa, int p_3_mt5y8, int p_4_UDKwY) {
char proxy_cJkin[12] = { p_1_YEN63, 8, 89, p_1_YEN63, 7, 27, 64, p_1_YEN63, p_1_YEN63, p_1_YEN63, p_1_YEN63, 67 };
long proxy_ret_2N9QS = realsmith_VZxnz(&(p_0_4SWuG), proxy_cJkin, p_2_YmKfa, p_3_mt5y8, p_4_UDKwY);
return proxy_ret_2N9QS;
}


int INAT_GRP_MASK_realsmith_mMsrz = 2;

int INAT_GRP_OFFS_realsmith_mMsrz = 5;

__attribute__((used)) static inline int realsmith_mMsrz(int attr)
{
 return (attr & INAT_GRP_MASK_realsmith_mMsrz) >> INAT_GRP_OFFS_realsmith_mMsrz;
}

int IRQ_MAC_RX_realsmith_Uyzpc = 12;

int IRQ_MAC_TX_realsmith_Uyzpc = 4;

int IRQ_MEM_DMA0_realsmith_Uyzpc = -1;

int IRQ_MEM_DMA1_realsmith_Uyzpc = 8;

int IRQ_PPI_realsmith_Uyzpc = 16;

int IRQ_SPI_realsmith_Uyzpc = -1;

int IRQ_SPORT0_RX_realsmith_Uyzpc = 20;

int IRQ_SPORT0_TX_realsmith_Uyzpc = 13;

int IRQ_SPORT1_RX_realsmith_Uyzpc = 3;

int IRQ_SPORT1_TX_realsmith_Uyzpc = 11;

int IRQ_UART0_RX_realsmith_Uyzpc = -7;

int IRQ_UART0_TX_realsmith_Uyzpc = -3;

int IRQ_UART1_RX_realsmith_Uyzpc = -4;

int IRQ_UART1_TX_realsmith_Uyzpc = 0;

int realsmith_Uyzpc(unsigned int channel)
{
 int ret_irq = -1;
 switch (channel) {
 case 137:
  ret_irq = IRQ_PPI_realsmith_Uyzpc;
  break;
 case 143:
  ret_irq = IRQ_MAC_RX_realsmith_Uyzpc;
  break;
 case 142:
  ret_irq = IRQ_MAC_TX_realsmith_Uyzpc;
  break;
 case 129:
  ret_irq = IRQ_UART1_RX_realsmith_Uyzpc;
  break;
 case 128:
  ret_irq = IRQ_UART1_TX_realsmith_Uyzpc;
  break;
 case 135:
  ret_irq = IRQ_SPORT0_RX_realsmith_Uyzpc;
  break;
 case 134:
  ret_irq = IRQ_SPORT0_TX_realsmith_Uyzpc;
  break;
 case 133:
  ret_irq = IRQ_SPORT1_RX_realsmith_Uyzpc;
  break;
 case 132:
  ret_irq = IRQ_SPORT1_TX_realsmith_Uyzpc;
  break;
 case 136:
  ret_irq = IRQ_SPI_realsmith_Uyzpc;
  break;
 case 131:
  ret_irq = IRQ_UART0_RX_realsmith_Uyzpc;
  break;
 case 130:
  ret_irq = IRQ_UART0_TX_realsmith_Uyzpc;
  break;
 case 140:
 case 141:
  ret_irq = IRQ_MEM_DMA0_realsmith_Uyzpc;
  break;
 case 138:
 case 139:
  ret_irq = IRQ_MEM_DMA1_realsmith_Uyzpc;
  break;
 }
 return ret_irq;
}

char *realsmith_9I3la (char *s, int n) {
  char *v = ("0");
  (1);
  return v;
}
char realsmith_proxy_uii7O(char p_0_K2C4x, int p_1_n9iHQ) {
char * proxy_ret_ykKs0 = realsmith_9I3la(&(p_0_K2C4x), p_1_n9iHQ);
return *proxy_ret_ykKs0;
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
#define Tag168(x) (x)
#define Tag169(x) (x)
#define Tag170(x) (x)
#define Tag171(x) (x)
#define Tag172(x) (x)
#define Tag173(x) (x)
#define Tag174(x) (x)
#define Tag175(x) (x)
#define Tag176(x) (x)
#define Tag177(x) (x)
#define Tag178(x) (x)
#define Tag179(x) (x)
#define Tag180(x) (x)
#define Tag181(x) (x)
#define Tag182(x) (x)
#define Tag183(x) (x)
#define Tag184(x) (x)
#define Tag185(x) (x)
#define Tag186(x) (x)
#define Tag187(x) (x)
#define Tag188(x) (x)
#define Tag189(x) (x)
#define Tag190(x) (x)
#define Tag191(x) (x)
#define Tag192(x) (x)
#define Tag193(x) (x)
#define Tag194(x) (x)
#define Tag195(x) (x)
#define Tag196(x) (x)
#define Tag197(x) (x)
#define Tag198(x) (x)
#define Tag199(x) (x)
#define Tag200(x) (x)
#define Tag201(x) (x)
#define Tag202(x) (x)
#define Tag203(x) (x)
#define Tag204(x) (x)
#define Tag205(x) (x)
#define Tag206(x) (x)
#define Tag207(x) (x)
#define Tag208(x) (x)
#define Tag209(x) (x)
#define Tag210(x) (x)
#define Tag211(x) (x)
#define Tag212(x) (x)
#define Tag213(x) (x)
#define Tag214(x) (x)
#define Tag215(x) (x)
#define Tag216(x) (x)
#define Tag217(x) (x)
#define Tag218(x) (x)
#define Tag219(x) (x)
#define Tag220(x) (x)
#define Tag221(x) (x)
#define Tag222(x) (x)
#define Tag223(x) (x)
#define Tag224(x) (x)
#define Tag225(x) (x)
#define Tag226(x) (x)
#define Tag227(x) (x)
#define Tag228(x) (x)
#define Tag229(x) (x)
#define Tag230(x) (x)
#define Tag231(x) (x)
#define Tag232(x) (x)
#define Tag233(x) (x)
#define Tag234(x) (x)
#define Tag235(x) (x)
#define Tag236(x) (x)
#define Tag237(x) (x)
#define Tag238(x) (x)
#define Tag239(x) (x)
#define Tag240(x) (x)
#define Tag241(x) (x)
#define Tag242(x) (x)
#define Tag243(x) (x)
#define Tag244(x) (x)
#define Tag245(x) (x)
#define Tag246(x) (x)
#define Tag247(x) (x)
#define Tag248(x) (x)
#define Tag249(x) (x)
#define Tag250(x) (x)
#define Tag251(x) (x)
#define Tag252(x) (x)
#define Tag253(x) (x)
#define Tag254(x) (x)
#define Tag255(x) (x)
#define Tag256(x) (x)
#define Tag257(x) (x)
#define Tag258(x) (x)
#define Tag259(x) (x)
#define Tag260(x) (x)
#define Tag261(x) (x)
#define Tag262(x) (x)
#define Tag263(x) (x)
#define Tag264(x) (x)
#define Tag265(x) (x)
#define Tag266(x) (x)
#define Tag267(x) (x)
#define Tag268(x) (x)
#define Tag269(x) (x)
#define Tag270(x) (x)
#define Tag271(x) (x)
#define Tag272(x) (x)
#define Tag273(x) (x)
#define Tag274(x) (x)
#define Tag275(x) (x)
#define Tag276(x) (x)
#define Tag277(x) (x)
#define Tag278(x) (x)
#define Tag279(x) (x)
#define Tag280(x) (x)
#define Tag281(x) (x)
#define Tag282(x) (x)
#define Tag283(x) (x)
#define Tag284(x) (x)
#define Tag285(x) (x)
#define Tag286(x) (x)
#define Tag287(x) (x)
#define Tag288(x) (x)
#define Tag289(x) (x)
#define Tag290(x) (x)
#define Tag291(x) (x)
#define Tag292(x) (x)
#define Tag293(x) (x)
#define Tag294(x) (x)
#define Tag295(x) (x)
#define Tag296(x) (x)
#define Tag297(x) (x)
#define Tag298(x) (x)
#define Tag299(x) (x)
#define Tag300(x) (x)
#define Tag301(x) (x)
#define Tag302(x) (x)
#define Tag303(x) (x)
#define Tag304(x) (x)
#define Tag305(x) (x)
#define Tag306(x) (x)
#define Tag307(x) (x)
#define Tag308(x) (x)
#define Tag309(x) (x)
#define Tag310(x) (x)
#define Tag311(x) (x)
#define Tag312(x) (x)
#define Tag313(x) (x)
#define Tag314(x) (x)
#define Tag315(x) (x)
#define Tag316(x) (x)
#define Tag317(x) (x)
#define Tag318(x) (x)
#define Tag319(x) (x)
#define Tag320(x) (x)
#define Tag321(x) (x)
#define Tag322(x) (x)
#define Tag323(x) (x)
#define Tag324(x) (x)
#define Tag325(x) (x)
#define Tag326(x) (x)
#define Tag327(x) (x)
#define Tag328(x) (x)
#define Tag329(x) (x)
#define Tag330(x) (x)
#define Tag331(x) (x)
#define Tag332(x) (x)
#define Tag333(x) (x)
#define Tag334(x) (x)
#define Tag335(x) (x)
#define Tag336(x) (x)
#define Tag337(x) (x)
#define Tag338(x) (x)
#define Tag339(x) (x)
#define Tag340(x) (x)
#define Tag341(x) (x)
#define Tag342(x) (x)
#define Tag343(x) (x)
#define Tag344(x) (x)
#define Tag345(x) (x)
#define Tag346(x) (x)
#define Tag347(x) (x)
#define Tag348(x) (x)
#define Tag349(x) (x)
#define Tag350(x) (x)
#define Tag351(x) (x)
#define Tag352(x) (x)
#define Tag353(x) (x)
#define Tag354(x) (x)
#define Tag355(x) (x)
#define Tag356(x) (x)
#define Tag357(x) (x)
#define Tag358(x) (x)
#define Tag359(x) (x)
#define Tag360(x) (x)
#define Tag361(x) (x)
#define Tag362(x) (x)
#define Tag363(x) (x)
#define Tag364(x) (x)
#define Tag365(x) (x)
#define Tag366(x) (x)
#define Tag367(x) (x)
#define Tag368(x) (x)
#define Tag369(x) (x)
#define Tag370(x) (x)
#define Tag371(x) (x)
#define Tag372(x) (x)
#define Tag373(x) (x)
#define Tag374(x) (x)
#define Tag375(x) (x)
#define Tag376(x) (x)
#define Tag377(x) (x)
#define Tag378(x) (x)
#define Tag379(x) (x)
#define Tag380(x) (x)
#define Tag381(x) (x)
#define Tag382(x) (x)
#define Tag383(x) (x)
#define Tag384(x) (x)
#define Tag385(x) (x)
#define Tag386(x) (x)
#define Tag387(x) (x)
#define Tag388(x) (x)
#define Tag389(x) (x)
#define Tag390(x) (x)
#define Tag391(x) (x)
#define Tag392(x) (x)
#define Tag393(x) (x)
#define Tag394(x) (x)
#define Tag395(x) (x)
#define Tag396(x) (x)
#define Tag397(x) (x)
#define Tag398(x) (x)
#define Tag399(x) (x)
#define Tag400(x) (x)
#define Tag401(x) (x)
#define Tag402(x) (x)
#define Tag403(x) (x)
#define Tag404(x) (x)
#define Tag405(x) (x)
#define Tag406(x) (x)
#define Tag407(x) (x)
#define Tag408(x) (x)
#define Tag409(x) (x)
#define Tag410(x) (x)
#define Tag411(x) (x)
#define Tag412(x) (x)
#define Tag413(x) (x)
#define Tag414(x) (x)
#define Tag415(x) (x)
#define Tag416(x) (x)
#define Tag417(x) (x)
#define Tag418(x) (x)
#define Tag419(x) (x)
#define Tag420(x) (x)
#define Tag421(x) (x)
#define Tag422(x) (x)
#define Tag423(x) (x)
#define Tag424(x) (x)
#define Tag425(x) (x)
#define Tag426(x) (x)
#define Tag427(x) (x)
#define Tag428(x) (x)
#define Tag429(x) (x)
#define Tag430(x) (x)
#define Tag431(x) (x)
#define Tag432(x) (x)
#define Tag433(x) (x)
#define Tag434(x) (x)
#define Tag435(x) (x)
#define Tag436(x) (x)
#define Tag437(x) (x)
#define Tag438(x) (x)
#define Tag439(x) (x)
#define Tag440(x) (x)
#define Tag441(x) (x)
#define Tag442(x) (x)
#define Tag443(x) (x)
#define Tag444(x) (x)
#define Tag445(x) (x)
#define Tag446(x) (x)
#define Tag447(x) (x)
#define Tag448(x) (x)
#define Tag449(x) (x)
#define Tag450(x) (x)
#define Tag451(x) (x)
#define Tag452(x) (x)
#define Tag453(x) (x)
#define Tag454(x) (x)
#define Tag455(x) (x)
#define Tag456(x) (x)
#define Tag457(x) (x)
#define Tag458(x) (x)
#define Tag459(x) (x)
#define Tag460(x) (x)
#define Tag461(x) (x)
#define Tag462(x) (x)
#define Tag463(x) (x)
#define Tag464(x) (x)
#define Tag465(x) (x)
#define Tag466(x) (x)
#define Tag467(x) (x)
#define Tag468(x) (x)
#define Tag469(x) (x)
#define Tag470(x) (x)
#define Tag471(x) (x)
#define Tag472(x) (x)
#define Tag473(x) (x)
#define Tag474(x) (x)
#define Tag475(x) (x)
#define Tag476(x) (x)
#define Tag477(x) (x)
#define Tag478(x) (x)
#define Tag479(x) (x)
#define Tag480(x) (x)
#define Tag481(x) (x)
#define Tag482(x) (x)
#define Tag483(x) (x)
#define Tag484(x) (x)
#define Tag485(x) (x)
#define Tag486(x) (x)
#define Tag487(x) (x)
#define Tag488(x) (x)
#define Tag489(x) (x)
#define Tag490(x) (x)
#define Tag491(x) (x)
#define Tag492(x) (x)
#define Tag493(x) (x)
#define Tag494(x) (x)
#define Tag495(x) (x)
#define Tag496(x) (x)
#define Tag497(x) (x)
#define Tag498(x) (x)
#define Tag499(x) (x)
#define Tag500(x) (x)
#define Tag501(x) (x)
#define Tag502(x) (x)
#define Tag503(x) (x)
#define Tag504(x) (x)
#define Tag505(x) (x)
#define Tag506(x) (x)
#define Tag507(x) (x)
#define Tag508(x) (x)
#define Tag509(x) (x)
#define Tag510(x) (x)
#define Tag511(x) (x)
#define Tag512(x) (x)
#define Tag513(x) (x)
#define Tag514(x) (x)
#define Tag515(x) (x)
#define Tag516(x) (x)
#define Tag517(x) (x)
#define Tag518(x) (x)
#define Tag519(x) (x)
#define Tag520(x) (x)
#define Tag521(x) (x)
#define Tag522(x) (x)
#define Tag523(x) (x)
#define Tag524(x) (x)
#define Tag525(x) (x)
#define Tag526(x) (x)
#define Tag527(x) (x)
#define Tag528(x) (x)
#define Tag529(x) (x)
#define Tag530(x) (x)
#define Tag531(x) (x)
#define Tag532(x) (x)
#define Tag533(x) (x)
#define Tag534(x) (x)
#define Tag535(x) (x)
#define Tag536(x) (x)
#define Tag537(x) (x)
#define Tag538(x) (x)
#define Tag539(x) (x)
#define Tag540(x) (x)
#define Tag541(x) (x)
#define Tag542(x) (x)
#define Tag543(x) (x)
#define Tag544(x) (x)
#define Tag545(x) (x)
#define Tag546(x) (x)
#define Tag547(x) (x)
#define Tag548(x) (x)
#define Tag549(x) (x)
#define Tag550(x) (x)
#define Tag551(x) (x)
#define Tag552(x) (x)
#define Tag553(x) (x)
#define Tag554(x) (x)
#define Tag555(x) (x)
#define Tag556(x) (x)
#define Tag557(x) (x)
#define Tag558(x) (x)
#define Tag559(x) (x)
#define Tag560(x) (x)
#define Tag561(x) (x)
#define Tag562(x) (x)
#define Tag563(x) (x)
#define Tag564(x) (x)
#define Tag565(x) (x)
#define Tag566(x) (x)
#define Tag567(x) (x)
#define Tag568(x) (x)
#define Tag569(x) (x)
#define Tag570(x) (x)
#define Tag571(x) (x)
#define Tag572(x) (x)
#define Tag573(x) (x)
#define Tag574(x) (x)
#define Tag575(x) (x)
#define Tag576(x) (x)
#define Tag577(x) (x)
#define Tag578(x) (x)
#define Tag579(x) (x)
#define Tag580(x) (x)
#define Tag581(x) (x)
#define Tag582(x) (x)
#define Tag583(x) (x)
#define Tag584(x) (x)
#define Tag585(x) (x)
#define Tag586(x) (x)
#define Tag587(x) (x)
#define Tag588(x) (x)
#define Tag589(x) (x)
#define Tag590(x) (x)
#define Tag591(x) (x)
#define Tag592(x) (x)
#define Tag593(x) (x)
#define Tag594(x) (x)
#define Tag595(x) (x)
#define Tag596(x) (x)
#define Tag597(x) (x)
#define Tag598(x) (x)
#define Tag599(x) (x)
#define Tag600(x) (x)
#define Tag601(x) (x)
#define Tag602(x) (x)
#define Tag603(x) (x)
#define Tag604(x) (x)
#define Tag605(x) (x)
#define Tag606(x) (x)
#define Tag607(x) (x)
#define Tag608(x) (x)
#define Tag609(x) (x)
#define Tag610(x) (x)
#define Tag611(x) (x)
#define Tag612(x) (x)
#define Tag613(x) (x)
#define Tag614(x) (x)
#define Tag615(x) (x)
#define Tag616(x) (x)
#define Tag617(x) (x)
#define Tag618(x) (x)
#define Tag619(x) (x)
#define Tag620(x) (x)
#define Tag621(x) (x)
#define Tag622(x) (x)
#define Tag623(x) (x)
#define Tag624(x) (x)
#define Tag625(x) (x)
#define Tag626(x) (x)
#define Tag627(x) (x)
#define Tag628(x) (x)
#define Tag629(x) (x)
#define Tag630(x) (x)
#define Tag631(x) (x)
#define Tag632(x) (x)
#define Tag633(x) (x)
#define Tag634(x) (x)
#define Tag635(x) (x)
#define Tag636(x) (x)
#define Tag637(x) (x)
#define Tag638(x) (x)
#define Tag639(x) (x)
#define Tag640(x) (x)
#define Tag641(x) (x)
#define Tag642(x) (x)
#define Tag643(x) (x)
#define Tag644(x) (x)
#define Tag645(x) (x)
#define Tag646(x) (x)
#define Tag647(x) (x)
#define Tag648(x) (x)
#define Tag649(x) (x)
#define Tag650(x) (x)
#define Tag651(x) (x)
#define Tag652(x) (x)
#define Tag653(x) (x)
#define Tag654(x) (x)
#define Tag655(x) (x)
#define Tag656(x) (x)
#define Tag657(x) (x)
#define Tag658(x) (x)
#define Tag659(x) (x)
#define Tag660(x) (x)
#define Tag661(x) (x)
#define Tag662(x) (x)
#define Tag663(x) (x)
#define Tag664(x) (x)
#define Tag665(x) (x)
#define Tag666(x) (x)
#define Tag667(x) (x)
#define Tag668(x) (x)
#define Tag669(x) (x)
#define Tag670(x) (x)
#define Tag671(x) (x)
#define Tag672(x) (x)
#define Tag673(x) (x)
#define Tag674(x) (x)
#define Tag675(x) (x)
#define Tag676(x) (x)
#define Tag677(x) (x)
#define Tag678(x) (x)
#define Tag679(x) (x)
#define Tag680(x) (x)
#define Tag681(x) (x)
#define Tag682(x) (x)
#define Tag683(x) (x)
#define Tag684(x) (x)
#define Tag685(x) (x)
#define Tag686(x) (x)
#define Tag687(x) (x)
#define Tag688(x) (x)
#define Tag689(x) (x)
#define Tag690(x) (x)
#define Tag691(x) (x)
#define Tag692(x) (x)
#define Tag693(x) (x)
#define Tag694(x) (x)
#define Tag695(x) (x)
#define Tag696(x) (x)
#define Tag697(x) (x)
#define Tag698(x) (x)
#define Tag699(x) (x)
#define Tag700(x) (x)
#define Tag701(x) (x)
#define Tag702(x) (x)
#define Tag703(x) (x)
#define Tag704(x) (x)
#define Tag705(x) (x)
#define Tag706(x) (x)
#define Tag707(x) (x)
#define Tag708(x) (x)
#define Tag709(x) (x)
#define Tag710(x) (x)
#define Tag711(x) (x)
#define Tag712(x) (x)
#define Tag713(x) (x)
#define Tag714(x) (x)
#define Tag715(x) (x)
#define Tag716(x) (x)
#define Tag717(x) (x)
#define Tag718(x) (x)
#define Tag719(x) (x)
#define Tag720(x) (x)
#define Tag721(x) (x)
#define Tag722(x) (x)
#define Tag723(x) (x)
#define Tag724(x) (x)
#define Tag725(x) (x)
#define Tag726(x) (x)
#define Tag727(x) (x)
#define Tag728(x) (x)
#define Tag729(x) (x)
#define Tag730(x) (x)
#define Tag731(x) (x)
#define Tag732(x) (x)
#define Tag733(x) (x)
#define Tag734(x) (x)
#define Tag735(x) (x)
#define Tag736(x) (x)
#define Tag737(x) (x)
#define Tag738(x) (x)
#define Tag739(x) (x)
#define Tag740(x) (x)
#define Tag741(x) (x)
#define Tag742(x) (x)
#define Tag743(x) (x)
#define Tag744(x) (x)
#define Tag745(x) (x)
#define Tag746(x) (x)
#define Tag747(x) (x)
#define Tag748(x) (x)
#define Tag749(x) (x)
#define Tag750(x) (x)
#define Tag751(x) (x)
#define Tag752(x) (x)
#define Tag753(x) (x)
#define Tag754(x) (x)
#define Tag755(x) (x)
#define Tag756(x) (x)
#define Tag757(x) (x)
#define Tag758(x) (x)
#define Tag759(x) (x)
#define Tag760(x) (x)
#define Tag761(x) (x)
#define Tag762(x) (x)
#define Tag763(x) (x)
#define Tag764(x) (x)
#define Tag765(x) (x)
#define Tag766(x) (x)
#define Tag767(x) (x)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output /home/chuang/FramaCsliceNew/creal/batch_experiments/test_20251023_185230/test6/5J7MYV_seed.c
 * Seed:      259672985
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0x4E064826L;
static int32_t g_6 = 9L;
static uint8_t g_20 = 0x2BL;
static uint64_t g_26 = 0xB659BAAA4F69A750LL;
static int32_t *g_45 = &g_6;
static int32_t **g_44 = &g_45;
static int32_t g_68 = (-1L);
static int16_t g_88 = (-1L);
static uint16_t g_90 = 1UL;
static uint16_t g_131 = 65535UL;
static uint8_t g_150 = 250UL;
static uint32_t g_168 = 0xA92D9FAAL;
static int64_t g_180 = 0xF66F7480E96666BELL;
static int32_t *g_186 = &g_2;
static int32_t **g_185 = &g_186;
static int64_t g_197[7][8][2] = {{{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL}},{{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL}},{{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL}},{{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL}},{{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL}},{{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL}},{{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL},{0x0D3B926A7F400C75LL,0x0D3B926A7F400C75LL}}};
static int32_t g_222 = 0xA699A93FL;
static uint32_t g_224 = 0UL;
static uint64_t g_256 = 18446744073709551614UL;
static uint32_t g_260 = 0x40F3676AL;
static int16_t g_298 = 0x6F54L;
static int8_t g_347 = (-1L);
static int32_t ****g_361 = (void*)0;
static uint8_t g_372 = 0x8CL;
static uint32_t g_404 = 0xA504CCB4L;
static uint64_t g_449 = 0xCD37671AC5D8D414LL;
static const int32_t *g_508 = &g_6;
static const int32_t **g_507 = &g_508;
static const int32_t ***g_506 = &g_507;
static const int32_t ****g_505 = &g_506;
static const int32_t *****g_504 = &g_505;
static int32_t *g_514[5][1][1] = {{{&g_2}},{{&g_2}},{{&g_2}},{{&g_2}},{{&g_2}}};
static int32_t ** const g_513 = &g_514[1][0][0];
static int32_t ** const *g_512[9][2][3] = {{{&g_513,(void*)0,&g_513},{&g_513,&g_513,&g_513}},{{&g_513,(void*)0,&g_513},{&g_513,&g_513,&g_513}},{{&g_513,&g_513,&g_513},{&g_513,&g_513,&g_513}},{{&g_513,&g_513,&g_513},{&g_513,&g_513,&g_513}},{{&g_513,(void*)0,&g_513},{&g_513,&g_513,&g_513}},{{&g_513,(void*)0,&g_513},{&g_513,&g_513,&g_513}},{{&g_513,&g_513,&g_513},{&g_513,&g_513,&g_513}},{{&g_513,&g_513,&g_513},{&g_513,&g_513,&g_513}},{{&g_513,(void*)0,&g_513},{&g_513,&g_513,&g_513}}};
static const uint16_t *g_575 = &g_131;
static const uint16_t * const *g_574 = &g_575;
static int64_t * const g_626 = &g_197[5][0][1];
static int64_t * const *g_625 = &g_626;
static int16_t g_655 = 0xEAD6L;
static uint64_t *g_742 = &g_26;
static const int8_t g_763 = (-1L);
static int32_t g_787[5][9][5] = {{{1L,0x271FB478L,0x0E4E887AL,(-10L),(-3L)},{(-1L),0x8C0EAFB8L,0L,0xC3504C20L,0L},{0x252BA0E1L,0x252BA0E1L,0x470A2184L,0L,0xDE89AFB2L},{9L,0x880DFF8CL,0x94D0C06FL,0L,0x880DFF8CL},{0xBFA38196L,0x7464696AL,0x2F1BE285L,1L,0x59416A1DL},{0x0CECF920L,0x880DFF8CL,0x30679D81L,0xB99CBB39L,0x69935DC2L},{0x0E4E887AL,0x252BA0E1L,0x65ED7561L,0x59416A1DL,1L},{0L,0x8C0EAFB8L,0x8C0EAFB8L,0L,1L},{0xDE89AFB2L,0x271FB478L,0L,0x252BA0E1L,0x0C9A38ECL}},{{9L,0x69935DC2L,1L,1L,0x0CECF920L},{0x0C9A38ECL,0x65ED7561L,0xBCEEE883L,0x252BA0E1L,0x59416A1DL},{0xC3504C20L,0xE9EA712EL,7L,0L,4L},{1L,0xBFA38196L,0x59416A1DL,0x59416A1DL,0xBFA38196L},{0x880DFF8CL,0x30679D81L,0x87F1A176L,1L,1L},{0x65ED7561L,(-10L),0x0C9A38ECL,0x59416A1DL,0x7464696AL},{0x87F1A176L,0xF30318AAL,0x30679D81L,1L,9L},{0x65ED7561L,0L,0x470A2184L,0x65ED7561L,0xC2AACBB9L},{0L,0x2CD05E34L,0xE9EA712EL,0xF30318AAL,0xF30318AAL}},{{0x7BF2F0F1L,(-10L),0x7BF2F0F1L,0xC2AACBB9L,0x65ED7561L},{0xF30318AAL,(-1L),9L,9L,1L},{1L,0x0E4E887AL,1L,0x7464696AL,0x59416A1DL},{1L,1L,9L,1L,1L},{(-10L),0L,0x7BF2F0F1L,0xBCEEE883L,(-10L)},{0x2CD05E34L,0x94D0C06FL,0xE9EA712EL,0x94D0C06FL,0x2CD05E34L},{0xE29DB715L,1L,0x470A2184L,(-10L),0x2F1BE285L},{0x91319EAEL,(-1L),0x30679D81L,0x91319EAEL,9L},{0xBCEEE883L,0x65ED7561L,0x0C9A38ECL,1L,0x2F1BE285L}},{{1L,0x91319EAEL,0x87F1A176L,9L,0x2CD05E34L},{0x2F1BE285L,0L,(-10L),0x0E4E887AL,(-10L)},{1L,1L,0xC3504C20L,0x8C0EAFB8L,1L},{0x7BF2F0F1L,0x59416A1DL,0x0CAAD896L,(-10L),0x59416A1DL},{0x94D0C06FL,0x30679D81L,0x5B10002CL,0L,1L},{0x7464696AL,0x59416A1DL,0x0C9A38ECL,(-10L),0x65ED7561L},{0x87F1A176L,1L,(-1L),1L,0xF30318AAL},{(-10L),0L,0L,(-10L),0xC2AACBB9L},{1L,0x91319EAEL,0xE9EA712EL,1L,9L}},{{0x7BF2F0F1L,0x65ED7561L,1L,0xC2AACBB9L,0x7464696AL},{9L,(-1L),0xB4ABD055L,1L,1L},{0x0E4E887AL,1L,1L,(-10L),0xBCEEE883L},{1L,0x94D0C06FL,1L,1L,0x94D0C06FL},{0x59416A1DL,0L,0xE29DB715L,(-10L),(-10L)},{0x8C0EAFB8L,1L,0xE9EA712EL,0L,0x91319EAEL},{0xE29DB715L,0x0E4E887AL,0L,(-10L),1L},{0x8C0EAFB8L,(-1L),7L,0x8C0EAFB8L,9L},{0x59416A1DL,(-10L),0x0C9A38ECL,0x0E4E887AL,0x0E4E887AL}}};
static uint32_t g_802[9][8][3] = {{{0xCB2E23F6L,1UL,0xCB2E23F6L},{7UL,0xFFC5D4D8L,18446744073709551612UL},{0xCB2E23F6L,0x224F8A36L,0x8C2021E4L},{7UL,0UL,7UL},{0xCB2E23F6L,1UL,0x6BAE6C21L},{7UL,18446744073709551612UL,0xCB5DC14CL},{0xCB2E23F6L,1UL,0xCB2E23F6L},{7UL,0xFFC5D4D8L,18446744073709551612UL}},{{0xCB2E23F6L,0x224F8A36L,0x8C2021E4L},{7UL,0UL,7UL},{0xCB2E23F6L,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL},{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L},{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL}},{{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL},{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L},{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL},{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL}},{{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L},{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL},{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL},{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L}},{{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL},{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL},{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L},{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL}},{{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL},{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L},{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL},{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL}},{{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L},{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL},{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL},{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L}},{{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL},{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL},{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L},{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL}},{{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL},{1UL,0x6BAE6C21L,1UL},{0UL,7UL,0xD7585F84L},{1UL,0x8C2021E4L,0xB2EA789DL},{0UL,18446744073709551612UL,0UL},{1UL,0xCB2E23F6L,6UL},{0UL,0xCB5DC14CL,1UL}}};
static uint8_t *g_910 = &g_372;
static uint8_t **g_909 = &g_910;
static uint16_t g_965 = 65526UL;
static int64_t **g_1019 = (void*)0;
static int64_t ***g_1018 = &g_1019;
static uint8_t g_1136 = 0xB0L;
static int16_t *g_1471 = (void*)0;
static int16_t **g_1470[7][2] = {{&g_1471,&g_1471},{&g_1471,&g_1471},{&g_1471,&g_1471},{&g_1471,&g_1471},{&g_1471,&g_1471},{&g_1471,&g_1471},{&g_1471,&g_1471}};
static int8_t *g_1539[7][2][1] = {{{&g_347},{&g_347}},{{&g_347},{&g_347}},{{&g_347},{&g_347}},{{&g_347},{&g_347}},{{&g_347},{&g_347}},{{&g_347},{&g_347}},{{&g_347},{&g_347}}};
static uint32_t g_1542 = 4294967295UL;
static uint8_t g_1623[4] = {251UL,251UL,251UL,251UL};
static const int64_t * const **g_1716 = (void*)0;
static int16_t g_1796[10][9][2] = {{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L},{2L,0x62E3L},{2L,2L},{0x62E3L,2L}},{{2L,0x62E3L},{2L,0x62E3L},{(-9L),0x62E3L},{0x62E3L,(-9L)},{0x62E3L,0x62E3L},{(-9L),0x62E3L},{0x62E3L,(-9L)},{0x62E3L,0x62E3L},{(-9L),0x62E3L}}};
static int16_t ***g_1805 = &g_1470[6][0];
static int32_t g_1851 = 0L;
static uint64_t g_1854 = 18446744073709551614UL;
static int32_t g_1869 = 0x820F5903L;
static uint8_t g_1873 = 1UL;
static int64_t *g_1915 = (void*)0;
static uint16_t g_1974 = 1UL;
static uint8_t g_2003[1] = {0x21L};
static uint8_t ***g_2012[5][1] = {{&g_909},{&g_909},{&g_909},{&g_909},{&g_909}};
static uint8_t ****g_2011 = &g_2012[2][0];
static uint8_t ***** const g_2010 = &g_2011;
static uint32_t *g_2020 = &g_168;
static uint32_t **g_2095 = &g_2020;
static uint32_t ***g_2094[7][1] = {{&g_2095},{&g_2095},{&g_2095},{&g_2095},{&g_2095},{&g_2095},{&g_2095}};
static int16_t g_2131 = 0x19B0L;
static const int16_t g_2177 = 0x14F2L;
static uint16_t *g_2191 = &g_90;
static uint16_t **g_2190 = &g_2191;
static const uint32_t g_2212 = 4294967291UL;
static uint32_t g_2352 = 0UL;
static uint32_t **** const g_2442 = &g_2094[5][0];
static uint32_t **** const *g_2441 = &g_2442;
static int32_t g_2494 = (-8L);
static int32_t *g_2501[4] = {&g_1851,&g_1851,&g_1851,&g_1851};
static int32_t * const g_2513 = &g_222;
static int32_t * const *g_2512 = &g_2513;
static const int8_t *g_2644 = &g_763;
static const int8_t ** const g_2643[9] = {&g_2644,&g_2644,&g_2644,&g_2644,&g_2644,&g_2644,&g_2644,&g_2644,&g_2644};
static const int8_t ** const *g_2642 = &g_2643[0];
static int32_t *g_2667[9][9][3] = {{{(void*)0,(void*)0,(void*)0},{&g_1869,&g_787[0][7][0],&g_787[3][1][0]},{&g_787[3][1][0],&g_1869,&g_787[0][7][0]},{&g_787[3][1][0],&g_68,(void*)0},{&g_1869,&g_1851,&g_1869},{(void*)0,&g_68,&g_787[3][1][0]},{&g_787[0][7][0],&g_1869,&g_787[3][1][0]},{&g_787[3][1][0],&g_787[0][7][0],&g_1869},{(void*)0,(void*)0,(void*)0}},{{&g_787[3][1][0],(void*)0,&g_787[0][7][0]},{&g_787[0][7][0],(void*)0,&g_787[3][1][0]},{(void*)0,(void*)0,(void*)0},{&g_1869,&g_787[0][7][0],&g_787[3][1][0]},{&g_787[3][1][0],&g_1869,&g_787[0][7][0]},{&g_787[3][1][0],&g_68,(void*)0},{&g_1869,&g_1851,&g_1869},{(void*)0,&g_68,&g_787[3][1][0]},{&g_787[0][7][0],&g_1869,&g_787[3][1][0]}},{{&g_787[3][1][0],&g_787[0][7][0],&g_1869},{(void*)0,(void*)0,(void*)0},{&g_787[3][1][0],(void*)0,&g_787[0][7][0]},{&g_787[0][7][0],(void*)0,&g_787[3][1][0]},{(void*)0,(void*)0,(void*)0},{&g_1869,&g_787[0][7][0],&g_787[3][1][0]},{&g_787[3][1][0],&g_1869,&g_787[0][7][0]},{&g_787[3][1][0],&g_68,(void*)0},{&g_1869,&g_1851,&g_1869}},{{(void*)0,&g_68,&g_787[3][1][0]},{&g_787[0][7][0],&g_1869,&g_787[3][1][0]},{&g_787[3][1][0],&g_787[0][7][0],&g_1869},{(void*)0,(void*)0,(void*)0},{&g_787[3][1][0],(void*)0,&g_787[0][7][0]},{&g_787[0][7][0],(void*)0,&g_787[3][1][0]},{(void*)0,(void*)0,(void*)0},{&g_1869,&g_787[0][7][0],&g_787[3][1][0]},{&g_787[3][1][0],&g_1869,&g_787[0][7][0]}},{{&g_787[3][1][0],&g_68,(void*)0},{&g_1869,&g_1851,&g_1869},{(void*)0,&g_68,&g_787[3][1][0]},{&g_787[0][7][0],&g_1869,&g_787[3][1][0]},{&g_787[3][1][0],&g_787[0][7][0],&g_1869},{(void*)0,(void*)0,(void*)0},{&g_787[3][1][0],(void*)0,&g_787[0][7][0]},{&g_787[0][7][0],(void*)0,&g_787[3][1][0]},{(void*)0,(void*)0,(void*)0}},{{&g_1869,&g_787[0][7][0],&g_787[3][1][0]},{&g_787[3][1][0],&g_1869,&g_787[0][7][0]},{&g_787[3][1][0],&g_68,(void*)0},{&g_1869,&g_1851,&g_1869},{(void*)0,&g_68,&g_787[3][1][0]},{&g_1851,&g_787[3][1][0],&g_1869},{&g_787[3][1][0],&g_1851,&g_68},{&g_68,&g_68,(void*)0},{&g_787[3][1][0],(void*)0,&g_1851}},{{&g_1851,(void*)0,&g_787[3][1][0]},{(void*)0,&g_68,&g_68},{&g_68,&g_1851,&g_787[3][1][0]},{&g_1869,&g_787[3][1][0],&g_1851},{&g_1869,(void*)0,(void*)0},{&g_68,&g_68,&g_68},{(void*)0,(void*)0,&g_1869},{&g_1851,&g_787[3][1][0],&g_1869},{&g_787[3][1][0],&g_1851,&g_68}},{{&g_68,&g_68,(void*)0},{&g_787[3][1][0],(void*)0,&g_1851},{&g_1851,(void*)0,&g_787[3][1][0]},{(void*)0,&g_68,&g_68},{&g_68,&g_1851,&g_787[3][1][0]},{&g_1869,&g_787[3][1][0],&g_1851},{&g_1869,(void*)0,(void*)0},{&g_68,&g_68,&g_68},{(void*)0,(void*)0,&g_1869}},{{&g_1851,&g_787[3][1][0],&g_1869},{&g_787[3][1][0],&g_1851,&g_68},{&g_68,&g_68,(void*)0},{&g_787[3][1][0],(void*)0,&g_1851},{&g_1851,(void*)0,&g_787[3][1][0]},{(void*)0,&g_68,&g_68},{&g_68,&g_1851,&g_787[3][1][0]},{&g_1869,&g_787[3][1][0],&g_1851},{&g_1869,(void*)0,(void*)0}}};
static uint64_t g_2708 = 0xFDAD28D076BA9E9ALL;
static int32_t g_2725[6][9] = {{(-9L),0xFC990BD8L,0L,3L,3L,0L,0xFC990BD8L,(-9L),0L},{(-9L),0xFC990BD8L,0L,3L,3L,0L,0xFC990BD8L,(-9L),0L},{(-9L),0xFC990BD8L,0L,3L,3L,0L,0xFC990BD8L,(-9L),0L},{(-9L),0xFC990BD8L,0L,3L,3L,0L,0xFC990BD8L,(-9L),0L},{(-9L),0xFC990BD8L,0L,3L,3L,0L,0xFC990BD8L,(-9L),0L},{(-9L),0xFC990BD8L,0L,3L,3L,0L,0xFC990BD8L,(-9L),0L}};
static int8_t **g_2750[4][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],(void*)0},{(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,&g_1539[0][1][0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],(void*)0},{(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0],(void*)0}},{{&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0]},{(void*)0,&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0]},{&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0],(void*)0}},{{&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0],(void*)0,&g_1539[0][1][0],&g_1539[0][1][0]},{(void*)0,&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0]},{&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0],(void*)0,(void*)0,&g_1539[0][1][0],(void*)0}}};
static int8_t ***g_2749 = &g_2750[1][0][0];
static int8_t ****g_2748 = &g_2749;
static int8_t *****g_2747 = &g_2748;
static int32_t * const *g_2763 = &g_45;
static int32_t * const **g_2762 = &g_2763;
static int32_t * const ***g_2761 = &g_2762;
static int32_t * const ****g_2760 = &g_2761;
static int32_t *g_2932 = &g_2725[4][0];
static int32_t **g_2931 = &g_2932;
static const int64_t *g_3076 = &g_197[1][0][0];
static const int64_t **g_3075 = &g_3076;
static const int64_t ***g_3074 = &g_3075;
static const int64_t ****g_3073 = &g_3074;
static uint32_t g_3088 = 0x9B7DF12AL;


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);
static uint16_t  func_32(uint16_t  p_33, int32_t * p_34, const int64_t  p_35, int32_t ** const  p_36, int32_t * p_37);
static int32_t *** func_52(const int8_t  p_53, uint64_t  p_54, int32_t  p_55);
static int32_t  func_69(int32_t * p_70, int32_t *** p_71, uint32_t  p_72, int32_t  p_73, uint32_t  p_74);
static int32_t * func_76(int32_t * p_77, uint32_t  p_78, int32_t ** p_79);
static const int64_t  func_82(const uint16_t  p_83, int32_t  p_84, int32_t  p_85, const uint32_t  p_86, uint64_t  p_87);
static uint32_t  func_93(int32_t  p_94, int32_t  p_95);
static int32_t * func_98(int32_t *** p_99, const int32_t *** p_100);
static int32_t * func_107(uint32_t  p_108, const int32_t * p_109, uint32_t  p_110);
static uint32_t  func_112(uint8_t  p_113);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_20 g_26 g_44 g_68 g_90 g_45 g_88 g_513 g_347 g_186 g_131 g_574 g_575 g_298 g_742 g_185 g_197 g_508 g_625 g_626 g_222 g_505 g_506 g_507 g_404 g_909 g_655 g_787 g_910 g_965 g_372 g_514 g_504 g_802 g_1018 g_150 g_256 g_449 g_1019 g_168 g_1136 g_224 g_260 g_180 g_1539 g_1542 g_1623 g_1716 g_1851 g_1854 g_1869 g_763 g_1974 g_2003 g_2010 g_2011 g_2191 g_2095 g_2020 g_2190 g_2352 g_2494 g_2501 g_2512 g_2131 g_2177
 * writes: g_2 g_6 g_20 g_26 g_68 g_90 g_88 g_514 g_347 g_150 g_197 g_131 g_372 g_168 g_965 g_222 g_180 g_1018 g_298 g_449 g_1019 g_787 g_1136 g_508 g_404 g_45 g_655 g_186 g_224 g_1539 g_1542 g_1623 g_1716 g_1470 g_260 g_1805 g_1851 g_1873 g_1915 g_2131 g_2352 g_1796
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    uint64_t l_11 = 0x09BA87A5EAFB5D1CLL;
    int8_t l_14[4] = {0xC4L,0xC4L,0xC4L,0xC4L};
    int32_t l_17 = (-1L);
    int32_t l_19 = 0x54D8142CL;
    int32_t *l_25 = (void*)0;
    const int32_t *l_47 = (void*)0;
    const int32_t **l_46 = &l_47;
    const int32_t ***l_48 = &l_46;
    int32_t l_62 = 0x9C81B934L;
    int32_t ****l_2517 = (void*)0;
    int32_t ****l_2518 = (void*)0;
    int32_t ***l_2520 = (void*)0;
    int32_t ****l_2519[9][6] = {{&l_2520,&l_2520,&l_2520,(void*)0,&l_2520,&l_2520},{(void*)0,&l_2520,&l_2520,(void*)0,&l_2520,&l_2520},{&l_2520,&l_2520,&l_2520,(void*)0,&l_2520,(void*)0},{(void*)0,&l_2520,(void*)0,(void*)0,&l_2520,&l_2520},{&l_2520,&l_2520,&l_2520,&l_2520,&l_2520,&l_2520},{&l_2520,&l_2520,(void*)0,&l_2520,&l_2520,(void*)0},{&l_2520,&l_2520,&l_2520,&l_2520,&l_2520,&l_2520},{&l_2520,&l_2520,&l_2520,(void*)0,&l_2520,&l_2520},{(void*)0,&l_2520,&l_2520,(void*)0,&l_2520,&l_2520}};
    int32_t ***l_2521 = &g_185;
    int64_t l_2522 = 7L;
    int8_t l_2523 = 0L;
    int32_t *l_2524 = &g_1869;
    int32_t ** const l_2525 = &l_25;
    int16_t l_3134 = 0L;
    int32_t l_3135 = (-1L);
    int i, j;
    for (g_2 = (-23); (g_2 == 7); g_2 = safe_add_func_uint32_t_u_u(g_2, 1))
    { /* block id: 3 */
        int32_t *l_5 = &g_6;
        int32_t *l_7 = &g_6;
        int32_t *l_8 = &g_6;
        int32_t *l_9 = &g_6;
        int32_t *l_10[4][9][5] = {{{&g_6,&g_6,&g_6,&g_2,&g_2},{(void*)0,&g_6,(void*)0,&g_6,&g_2},{&g_2,&g_6,(void*)0,&g_6,&g_6},{&g_6,&g_6,&g_6,&g_6,&g_6},{&g_2,&g_2,&g_6,&g_6,&g_2},{&g_6,&g_2,&g_2,(void*)0,&g_2},{&g_2,&g_6,&g_2,&g_6,&g_2},{&g_2,&g_2,(void*)0,(void*)0,(void*)0},{&g_2,(void*)0,&g_6,&g_6,&g_2}},{{&g_6,&g_6,&g_2,(void*)0,&g_2},{&g_2,&g_2,(void*)0,&g_6,&g_2},{&g_6,(void*)0,(void*)0,&g_6,&g_2},{&g_2,(void*)0,&g_6,(void*)0,&g_2},{(void*)0,&g_2,&g_2,(void*)0,(void*)0},{&g_6,&g_2,&g_6,&g_2,&g_6},{(void*)0,(void*)0,&g_6,(void*)0,(void*)0},{&g_6,(void*)0,&g_2,(void*)0,&g_6},{(void*)0,(void*)0,(void*)0,&g_6,&g_2}},{{&g_6,&g_2,(void*)0,&g_6,(void*)0},{&g_2,(void*)0,&g_6,(void*)0,(void*)0},{&g_6,&g_2,&g_2,(void*)0,&g_2},{(void*)0,&g_2,(void*)0,(void*)0,(void*)0},{&g_2,&g_2,&g_2,&g_6,&g_2},{(void*)0,(void*)0,&g_6,&g_6,&g_2},{&g_2,&g_2,&g_6,(void*)0,&g_6},{&g_2,(void*)0,&g_6,&g_2,&g_2},{&g_6,&g_2,&g_6,&g_2,&g_2}},{{&g_6,&g_2,(void*)0,&g_2,&g_6},{&g_2,&g_2,&g_6,&g_6,&g_6},{&g_6,(void*)0,&g_2,&g_6,(void*)0},{&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,(void*)0,&g_2,&g_2,&g_6},{&g_2,(void*)0,(void*)0,&g_2,&g_6},{(void*)0,(void*)0,(void*)0,(void*)0,&g_6},{&g_6,&g_2,&g_6,&g_2,&g_2},{&g_6,(void*)0,(void*)0,&g_2,(void*)0}}};
        int i, j, k;
        (*l_5) &= 0x925B0E44L;
        --l_11;
    }
    for (g_6 = 0; (g_6 <= 3); g_6 += 1)
    { /* block id: 9 */
        int32_t *l_15 = &g_2;
        int32_t *l_16 = &g_2;
        int32_t *l_18[9];
        const int32_t *l_24 = (void*)0;
        const int32_t **l_23[7];
        int i;
        for (i = 0; i < 9; i++)
            l_18[i] = &g_2;
        for (i = 0; i < 7; i++)
            l_23[i] = &l_24;
        g_20++;
        l_25 = (void*)0;
        g_2 ^= l_14[g_6];
        --g_26;
    }
    for (l_11 = 0; (l_11 >= 27); ++l_11)
    { /* block id: 17 */
        /*bef_stmt:117628*/
return Tag1(/*int32_t:0:0:117628:e*/g_6);
/*aft_stmt:117628*/
    }
    /*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
/*bef_stmt:118466*/
l_3135 = ((safe_unary_minus_func_uint8_t_u(2UL)) ^ ((func_32(((safe_lshift_func_uint16_t_u_s((Tag2(/*uint8_t:0:0:118466:e*/g_20) <= (safe_mul_func_int8_t_s_s(Tag3(/*int32_t:0:0:118466:e*/g_6), (((void*)0 != &l_25) & (safe_sub_func_int8_t_s_s((((g_44 == ((*l_48) = l_46)) , ((&g_45 == ((~((safe_mul_func_uint8_t_u_u(((l_2521 = func_52((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(Tag4(/*int32_t:0:0:118466:e*/g_2), /*TAG5:STA*/((int32_t)(realsmith_mMsrz((int)(g_6)+(3))+(int)(g_6)+(int)(g_20)-(51))+g_6)/*TAG5:END:g_6*/)), (-1L))), Tag6(/*int32_t:0:0:118466:e*/g_2))), /*TAG7:STA*/((int32_t)(realsmith_proxy_f0Qal((int)(l_62)+(1669220048), (int)(g_20)+(-49), (int)(g_20)+(-43))+(int)(l_62)+(int)(g_20)+(int)(g_6)-(-1669219992))+l_62)/*TAG7:END:l_62*/, /*TAG8:STA*/((int32_t)(realsmith_proxy_2ZdNU((int)(g_6)+(87))+(int)(g_6)+(int)(g_20)-(52))+g_6)/*TAG8:END:g_6*/)) == (void*)0), /*TAG9:STA*/((int8_t)(realsmith_proxy_e23yL((int)(g_6)+(-47), (char)(g_763)+(-72), (int)(g_20)+(32))+(int)(g_763)+(int)(g_20)+(int)(g_6)-(51))+g_763)/*TAG9:END:g_763*/)) , 0x96DB09CD0517D568LL)) , (void*)0)) , (Tag10(/*uint64_t:0:0:118466:e*/*g_742)))) < Tag11(/*int64_t:118533:118533:118466:e*/l_2522)), /*TAG12:STA*/((int8_t)(realsmith_H4PrX((int)(l_62)+(1669220118), (int)(l_2522)+(63), (int)(g_20)+(-23), (int)(l_62)+(1669220082), (int)(g_20)+(23), (int)(g_20)+(18))+(int)(l_2523)+(int)(g_6)+(int)(l_2522)+(int)(l_62)+(int)(g_20)-(-1669219974))+l_2523)/*TAG12:END:l_2523*/)))))), /*TAG13:STA*/((uint32_t)(realsmith_jcBf4((int)(g_763)+(73))+(int)(g_802[7][2][2])+(int)(g_6)+(int)(g_763)+(int)(g_20)-(55))+g_802[7][2][2])/*TAG13:END:g_802[7][2][2]*/)) , (Tag14(/*uint16_t:0:0:118466:e*/*g_2191))), l_2524, /*TAG15:STA*/((int16_t)(realsmith_proxy_vnDcJ((long)(g_6)+(-6))+(long)(g_2177)+(long)(g_6)+(long)(g_802[7][2][2])+(long)(g_20)+(long)(g_763)-(5421))+g_2177)/*TAG15:END:g_2177*/, l_2525, (*l_2525)) || (Tag16(/*int32_t:118533:118533:118466:e*/*l_2524))) <= Tag17(/*int16_t:118533:118533:118466:e*/l_3134)));
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
/*aft_stmt:118466*/
    /*bef_stmt:118531*/
return (Tag18(/*int64_t:0:0:118531:e*/*g_626));
/*aft_stmt:118531*/
}


/* ------------------------------------------ */
/* 
 * reads : g_2020 g_168
 * writes: g_1796 g_655 g_298
 */
static uint16_t  func_32(uint16_t  p_33, int32_t * p_34, const int64_t  p_35, int32_t ** const  p_36, int32_t * p_37)
{ /* block id: 1134 */
    int64_t l_2532 = 0x0D4D81558201ED89LL;
    uint32_t *l_2544 = &g_404;
    int16_t *l_2545 = &g_1796[8][8][1];
    int16_t *l_2546 = &g_655;
    int16_t *l_2547 = &g_298;
    int32_t l_2550 = 3L;
    int16_t ****l_2551 = &g_1805;
    int32_t *l_2556[9] = {&g_2494,&g_2494,&g_2494,&g_2494,&g_2494,&g_2494,&g_2494,&g_2494,&g_2494};
    int32_t **l_2555 = &l_2556[1];
    uint8_t **l_2557 = &g_910;
    uint64_t l_2606 = 1UL;
    int32_t l_2608 = 0L;
    int32_t **l_2679 = &g_186;
    int32_t l_2697 = 0L;
    int32_t l_2698 = 1L;
    int32_t l_2707 = 0L;
    uint8_t ****l_2719 = &g_2012[2][0];
    int32_t *****l_2759[1][9];
    uint32_t l_2788 = 18446744073709551615UL;
    int64_t **l_2816[7];
    const int32_t *l_2840 = &l_2697;
    uint32_t ***l_2921 = &g_2095;
    uint64_t **l_2995 = &g_742;
    int64_t l_3086 = (-1L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_2759[i][j] = (void*)0;
    }
    for (i = 0; i < 7; i++)
        l_2816[i] = (void*)0;
    /*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
/*bef_stmt:120491*/
l_2550 = (safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((/*TAG19:STA*/((int64_t)(realsmith_nvwOZ((unsigned long)(l_2532)+(-958564499953151340), (unsigned long)(l_2532)+(-958564499953151328))+(unsigned long)(l_2532)-(958564499953151410))+l_2532)/*TAG19:END:l_2532*/ >= (((/*TAG20:STA*/((uint32_t)(realsmith_zBL4v((int)(*g_2020)+(14))+(int)(*g_2020)-(917504))+*g_2020)/*TAG20:END:*g_2020*/) != (safe_add_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((~(safe_lshift_func_int16_t_s_u(Tag21(/*int64_t:120507:120507:120491:e*/l_2532), 5))), 6)) && (/*TAG22:STA*/((uint32_t)(realsmith_um2FN((int)(*g_2020)+(95))+(int)(*g_2020)-(-2))+*g_2020)/*TAG22:END:*g_2020*/)) , ((*l_2545) = ((l_2544 = p_34) != p_34))), (((*l_2546) = Tag23(/*const int64_t:120507:120507:120491:e*/p_35)) >= ((*l_2547) = Tag24(/*int64_t:120507:120507:120491:e*/l_2532))))) , ((safe_div_func_int64_t_s_s((Tag25(/*uint16_t:120507:120507:120491:e*/p_33) <= /*TAG26:STA*/((int64_t)(realsmith_proxy_VonEI((int)(p_35)+(-5317), (int)(p_35)+(-5323))+(int)(p_35)-(5363))+p_35)/*TAG26:END:p_35*/), /*TAG27:STA*/((int64_t)(realsmith_H3Wvo()+(int)(l_2532)-(-2113802870))+l_2532)/*TAG27:END:l_2532*/)) >= Tag28(/*int64_t:120507:120507:120491:e*/l_2532))), Tag29(/*int32_t:120507:120507:120491:e*/l_2550))) == Tag30(/*int32_t:120507:120507:120491:e*/l_2550)) > 0x1541A2144C835FBCLL), 0x150DC9D2E276DA2DLL))) < 0x2DFF457AF73D9572LL)) && /*TAG31:STA*/((uint16_t)(realsmith_proxy_D6DjR((int)(p_33)+(23))+(int)(p_33)-(1))+p_33)/*TAG31:END:p_33*/), 0x75L)), 5));
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
/*aft_stmt:120491*/
    /*bef_stmt:120505*/
return /*TAG32:STA*/((int64_t)(realsmith_proxy_LRCvj((int)(p_35)+(-5432), (int)(p_35)+(-5332), (int)(p_35)+(-5271), (int)(p_35)+(-5355), (int)(p_35)+(-5462), (unsigned long)(p_35)+(-5357), (int)(p_35)+(-5330))+(int)(p_35)-(5363))+p_35)/*TAG32:END:p_35*/;
/*aft_stmt:120505*/
}


/* ------------------------------------------ */
/* 
 * reads : g_2 g_68 g_90 g_44 g_45 g_6 g_88 g_513 g_347 g_186 g_131 g_574 g_575 g_298 g_742 g_185 g_197 g_508 g_26 g_625 g_626 g_222 g_505 g_506 g_507 g_404 g_909 g_655 g_787 g_910 g_965 g_372 g_514 g_504 g_20 g_802 g_1018 g_150 g_256 g_449 g_1019 g_168 g_1136 g_224 g_260 g_180 g_1539 g_1542 g_1623 g_1716 g_1851 g_1854 g_1869 g_763 g_1974 g_2003 g_2010 g_2011 g_2191 g_2095 g_2020 g_2190 g_2352 g_2494 g_2501 g_2512 g_2131
 * writes: g_68 g_90 g_88 g_514 g_347 g_2 g_26 g_150 g_197 g_131 g_372 g_168 g_965 g_222 g_180 g_1018 g_298 g_449 g_1019 g_787 g_1136 g_508 g_404 g_45 g_655 g_186 g_224 g_1539 g_1542 g_1623 g_1716 g_1470 g_260 g_1805 g_1851 g_1873 g_1915 g_2131 g_2352
 */
static int32_t *** func_52(const int8_t  p_53, uint64_t  p_54, int32_t  p_55)
{ /* block id: 21 */
    uint64_t l_1516 = 18446744073709551612UL;
    int32_t l_1860 = 2L;
    int32_t *l_1863[2];
    int32_t **l_1862 = &l_1863[1];
    uint8_t *l_1943 = &g_150;
    int64_t ** const l_2008[6] = {&g_1915,&g_1915,&g_1915,&g_1915,&g_1915,&g_1915};
    const uint8_t **l_2016 = (void*)0;
    const uint8_t ** const *l_2015 = &l_2016;
    const uint8_t ** const **l_2014[2][5][2] = {{{&l_2015,&l_2015},{&l_2015,&l_2015},{&l_2015,&l_2015},{&l_2015,&l_2015},{&l_2015,&l_2015}},{{&l_2015,&l_2015},{&l_2015,&l_2015},{&l_2015,&l_2015},{&l_2015,&l_2015},{&l_2015,&l_2015}}};
    const uint8_t ** const *** const l_2013 = &l_2014[1][1][1];
    uint32_t l_2079 = 0x24505FCCL;
    int32_t l_2096 = 0xD4EAE271L;
    int32_t *l_2143[2];
    int32_t *****l_2147 = &g_361;
    uint32_t l_2164[5] = {1UL,1UL,1UL,1UL,1UL};
    int16_t *l_2166 = &g_2131;
    int16_t *l_2167 = (void*)0;
    uint32_t **l_2202 = (void*)0;
    int16_t l_2240[8] = {0xB45BL,0xB45BL,0xB45BL,0xB45BL,0xB45BL,0xB45BL,0xB45BL,0xB45BL};
    uint16_t ***l_2365 = (void*)0;
    int32_t l_2399 = (-10L);
    int32_t l_2409[10];
    uint32_t ****l_2473 = (void*)0;
    uint32_t *****l_2472[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1863[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_2143[i] = &l_1860;
    for (i = 0; i < 10; i++)
        l_2409[i] = 0x462C3DB6L;
    for (i = 0; i < 2; i++)
        l_2472[i] = &l_2473;
    if ((safe_div_func_int8_t_s_s(0x02L, (8UL | 1UL))))
    { /* block id: 22 */
        int32_t *l_67 = &g_68;
        /*bef_stmt:122825*/
(*l_67) ^= (safe_rshift_func_uint16_t_u_s(Tag33(/*int32_t:0:0:122825:e*/g_2), 15));
/*aft_stmt:122825*/
    }
    else
    { /* block id: 24 */
        int32_t * const *l_75 = &g_45;
        uint16_t *l_89 = &g_90;
        uint32_t l_1517 = 0x1D5DDCBFL;
        int8_t *l_1859[8];
        int32_t *l_1861 = &g_6;
        uint8_t l_1920[1][10][8] = {{{3UL,0x4BL,7UL,4UL,254UL,0x8BL,0x45L,252UL},{0x45L,0xE9L,3UL,0xD1L,3UL,0xE9L,0x45L,0x4BL},{0x8FL,0xD1L,7UL,0x8BL,0UL,0xE9L,254UL,0xE9L},{0UL,0xE9L,254UL,0xE9L,0UL,0x8BL,7UL,0xD1L},{0x8FL,0x4BL,0x45L,0xE9L,3UL,0xD1L,3UL,0xE9L},{0x45L,252UL,0x45L,4UL,3UL,252UL,254UL,0xD1L},{1UL,247UL,3UL,0x8BL,0x8FL,0x8BL,3UL,247UL},{1UL,0xD1L,254UL,252UL,3UL,4UL,0UL,247UL},{0UL,0x4BL,1UL,0x8BL,1UL,0x4BL,0UL,0xD1L},{0x45L,0x8BL,254UL,4UL,7UL,0x4BL,3UL,0x4BL}}};
        int64_t l_1921 = 1L;
        uint32_t l_1928 = 0UL;
        int32_t l_1965 = 1L;
        int32_t *l_1985 = &g_222;
        int32_t * const *l_1984[2][7][4] = {{{(void*)0,&l_1985,&l_1985,&l_1985},{(void*)0,&l_1985,(void*)0,&l_1985},{&l_1985,&l_1985,&l_1985,&l_1985},{&l_1985,&l_1985,(void*)0,(void*)0},{&l_1985,(void*)0,&l_1985,(void*)0},{&l_1985,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1985,(void*)0}},{{(void*)0,&l_1985,&l_1985,&l_1985},{(void*)0,&l_1985,(void*)0,&l_1985},{&l_1985,&l_1985,&l_1985,&l_1985},{&l_1985,&l_1985,(void*)0,(void*)0},{&l_1985,(void*)0,&l_1985,(void*)0},{&l_1985,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1985,(void*)0}}};
        const int8_t l_1986 = (-10L);
        int64_t ** const l_2009 = &g_1915;
        uint16_t **l_2056 = &l_89;
        uint16_t ***l_2055 = &l_2056;
        int64_t l_2082 = (-1L);
        uint32_t **l_2090[7][9][1] = {{{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0}},{{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0}},{{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0}},{{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0}},{{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0}},{{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0}},{{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0},{&g_2020},{(void*)0},{(void*)0}}};
        uint32_t ***l_2089 = &l_2090[0][7][0];
        uint32_t l_2091[2];
        int16_t * const *l_2113[1][5][9] = {{{&g_1471,&g_1471,(void*)0,&g_1471,&g_1471,&g_1471,&g_1471,&g_1471,(void*)0},{&g_1471,&g_1471,(void*)0,&g_1471,&g_1471,&g_1471,(void*)0,&g_1471,&g_1471},{&g_1471,&g_1471,&g_1471,&g_1471,&g_1471,&g_1471,&g_1471,&g_1471,&g_1471},{&g_1471,(void*)0,(void*)0,&g_1471,&g_1471,&g_1471,&g_1471,&g_1471,(void*)0},{(void*)0,(void*)0,&g_1471,&g_1471,&g_1471,&g_1471,&g_1471,(void*)0,(void*)0}}};
        int32_t l_2127[7][2] = {{3L,(-7L)},{3L,(-7L)},{3L,(-7L)},{3L,(-7L)},{3L,(-7L)},{3L,(-7L)},{3L,(-7L)}};
        int16_t l_2241[6][8][5] = {{{(-2L),0x42C3L,1L,5L,0x9F48L},{0x4F97L,0x325CL,0xC80FL,0x03C3L,(-4L)},{(-8L),0x1F5EL,0x4772L,0L,6L},{0x4F97L,0L,0xB4FFL,(-1L),(-1L)},{(-2L),(-3L),(-1L),2L,7L},{0x5621L,6L,0x325CL,(-4L),(-1L)},{1L,0xC5CEL,(-10L),0xEAFDL,0xEAFDL},{0L,0x35E4L,0L,(-4L),0x2AD9L}},{{1L,0L,0L,0x4772L,(-3L)},{0x02EEL,(-1L),(-9L),0L,0xCE00L},{0xB60FL,(-8L),0L,(-3L),1L},{9L,0x914AL,0L,(-1L),6L},{0x9F48L,0L,(-10L),7L,(-4L)},{0x914AL,0x2AD9L,0x325CL,(-1L),0x4F97L},{0x4772L,1L,(-1L),1L,0x4772L},{(-9L),0xB256L,0xB4FFL,0x35E4L,0x846CL}},{{2L,1L,0x4772L,7L,0x1F5EL},{0x1580L,0x4F97L,0xC80FL,0xB256L,0x846CL},{0x2652L,7L,1L,0xDB0FL,0x4772L},{0x846CL,0xAA2AL,0x914AL,0L,0x4F97L},{1L,0x2CF3L,(-8L),(-6L),(-4L)},{0x7179L,(-6L),6L,0xC80FL,6L},{(-10L),(-10L),0x2CF3L,0x1F5EL,1L},{0x03C3L,0x6128L,(-4L),0x02EEL,0xCE00L}},{{6L,0x9F48L,1L,0x2652L,(-3L)},{0xC80FL,0x6128L,0L,(-9L),0x2AD9L},{5L,(-10L),0x293CL,0x42C3L,0xEAFDL},{0xB256L,(-6L),0x02EEL,0x4F97L,(-1L)},{0x42C3L,0x2CF3L,0L,(-8L),7L},{9L,0xAA2AL,0xAA2AL,9L,(-1L)},{(-6L),7L,0xEAFDL,0L,6L},{0x6128L,0x4F97L,4L,0x684AL,(-4L)}},{{0L,1L,(-6L),0L,0x9F48L},{0x2AD9L,0x02EEL,(-9L),(-2L),0x4F97L},{(-2L),(-8L),0x4772L,0x42C3L,1L},{(-4L),(-1L),0x914AL,6L,0x2AD9L},{7L,(-1L),0x9F48L,0x9F48L,(-1L)},{0xB4FFL,9L,9L,0x325CL,(-2L)},{0xC5CEL,1L,0xB60FL,7L,2L},{(-7L),(-1L),0x02EEL,0x7179L,0x35E4L}},{{0xC5CEL,(-1L),1L,(-4L),0x1F5EL},{0xB4FFL,(-6L),0L,0x6128L,0xCE00L},{7L,0x4772L,1L,2L,0xEAFDL},{(-4L),0xB256L,0x5621L,0x03C3L,0x03C3L},{(-2L),(-3L),(-2L),0L,1L},{(-1L),(-1L),0x4F97L,0x02EEL,(-6L)},{1L,(-4L),(-8L),(-2L),0L},{(-4L),(-7L),0x4F97L,(-6L),9L}}};
        uint8_t ***l_2268[1];
        int32_t ***l_2271 = &g_185;
        int32_t ****l_2270 = &l_2271;
        int16_t l_2334 = 0xFA3AL;
        int64_t ***l_2344[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint8_t l_2366 = 0xE0L;
        int64_t l_2421 = (-4L);
        int64_t l_2426[2];
        int64_t l_2433 = (-8L);
        uint16_t l_2434[7] = {9UL,9UL,0xA673L,9UL,9UL,0xA673L,9UL};
        uint32_t ****l_2440 = &l_2089;
        uint32_t **** const * const l_2439 = &l_2440;
        int8_t l_2495 = 9L;
        int16_t l_2496 = 0x48CCL;
        uint16_t l_2514 = 65535UL;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_1859[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_2091[i] = 3UL;
        for (i = 0; i < 1; i++)
            l_2268[i] = &g_909;
        for (i = 0; i < 2; i++)
            l_2426[i] = (-1L);
        /*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
/*bef_stmt:135254*/
l_1920[0][1][2] |= func_69(((l_75 != (void*)0) , func_76((((safe_sub_func_uint16_t_u_u(0xFBCDL, (((l_1860 = (func_82((--(*l_89)), Tag34(/*uint64_t:164048:164048:135254:e*/p_54), Tag35(/*const int8_t:164048:164048:135254:e*/p_53), ((((func_93((Tag36(/*int32_t:0:0:135254:e*/**g_44)), Tag37(/*uint64_t:164048:164048:135254:e*/p_54)) || (/*TAG38:STA*/((int8_t)(realsmith_Dhj38((unsigned int)(p_53)+(17))+(unsigned int)(p_53)+(unsigned int)(p_54)-(2625747256))+p_53)/*TAG38:END:p_53*/ < (-9L))) ^ /*TAG39:STA*/((uint64_t)(realsmith_3OsNo((int)(p_54)+(1669220096))+(int)(l_1516)+(int)(p_53)+(int)(p_54)-(-1669220049))+l_1516)/*TAG39:END:l_1516*/) , Tag40(/*const int8_t:164048:164048:135254:e*/p_53)) <= /*TAG41:STA*/((uint32_t)(realsmith_proxy_ruYVY((int)(l_1516)+(15), (int)(l_1517)+(-492690570))+(int)(l_1517)+(int)(l_1516)+(int)(p_53)-(492690619))+l_1517)/*TAG41:END:l_1517*/), /*TAG42:STA*/((uint64_t)(realsmith_e50tp((int)(p_54)+(1669220143))+(int)(p_54)+(int)(l_1516)+(int)(p_53)-(-1669220048))+p_54)/*TAG42:END:p_54*/) == /*TAG43:STA*/((uint64_t)(realsmith_Rzjo9((int)(l_1516)+(14), (int)(p_53)+(87))+(int)(l_1516)+(int)(p_54)+(int)(p_53)-(-1668564601))+l_1516)/*TAG43:END:l_1516*/)) < Tag44(/*uint8_t:0:0:135254:e*/g_20)) , (Tag45(/*const uint16_t:0:0:135254:e*/**g_574))))) != 65527UL) , l_1861), Tag46(/*uint32_t:0:0:135254:e*/g_802[4][4][0]), l_1862)), &l_1862, Tag47(/*int32_t:0:0:135254:e*/g_1869), /*TAG48:STA*/((int8_t)(realsmith_proxy_RKW6p((int)(g_802[4][4][0])+(92), (int)(g_1869)+(2112923439))+(int)(g_763)+(int)(**g_574)+(int)(g_802[4][4][0])+(int)(g_1869)-(-2112857855))+g_763)/*TAG48:END:g_763*/, Tag49(/*int32_t:164048:164048:135254:e*/p_55));
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
/*aft_stmt:135254*/
        for (g_1136 = 0; (g_1136 <= 7); g_1136 += 1)
        { /* block id: 863 */
            uint8_t l_1942[2][5][9] = {{{0xD8L,0xEEL,0x27L,0xE3L,5UL,0xE3L,0x27L,0xEEL,0xD8L},{252UL,1UL,0xBDL,0x27L,0UL,0xEEL,0x72L,0xEEL,0UL},{253UL,0x72L,0x72L,253UL,0xE3L,1UL,249UL,0UL,0xBDL},{252UL,0UL,0x72L,6UL,6UL,0x72L,0UL,252UL,5UL},{0xD8L,6UL,0xBDL,252UL,0xE3L,0UL,0UL,0xE3L,252UL}},{{0x27L,0xD8L,0x27L,1UL,0UL,6UL,249UL,5UL,5UL},{0x72L,0xD8L,5UL,0UL,5UL,0xD8L,0x72L,249UL,0xBDL},{249UL,6UL,0UL,1UL,0x27L,0xD8L,0x27L,1UL,0UL},{0UL,0UL,0xE3L,252UL,0xBDL,6UL,0xD8L,249UL,0xD8L},{0UL,0x72L,6UL,6UL,0x72L,0UL,252UL,5UL,253UL}}};
            const uint8_t *****l_1944 = (void*)0;
            int32_t *l_1983 = (void*)0;
            int32_t **l_1982 = &l_1983;
            int32_t l_1990[7][1][5] = {{{0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L}}};
            int i, j, k;
            /*bef_stmt:137409*/
l_1921 = /*TAG50:STA*/((int32_t)(realsmith_8mUwS((int)(p_55)+(86))+(int)(p_55)-(4))+p_55)/*TAG50:END:p_55*/;
/*aft_stmt:137409*/
            for (g_404 = 0; (g_404 <= 7); g_404 += 1)
            { /* block id: 867 */
                const uint32_t l_1935 = 4UL;
                int32_t l_1945 = 1L;
                int32_t l_1946 = 0x2E5D2037L;
                const int32_t *l_1988 = &g_2;
                uint8_t l_1989 = 0x0EL;
                uint64_t l_1991 = 0UL;
                int i;
                /*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
/*bef_stmt:140950*/
if ((l_1945 &= (safe_lshift_func_uint16_t_u_s(((((((((safe_sub_func_int64_t_s_s(((*g_626) = (safe_add_func_int64_t_s_s(((((void*)0 == (*l_1862)) , (Tag51(/*uint32_t:163985:164048:140950:e*/l_1928) | Tag52(/*int16_t:0:0:140950:e*/g_88))) ^ ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((Tag53(/*const uint32_t:141195:141216:140950:e*/l_1935) <= (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((Tag54(/*const int8_t:164048:164048:140950:e*/p_53) != ((*g_742) |= (safe_lshift_func_uint8_t_u_s(/*TAG55:STA*/((uint32_t)(realsmith_proxy_kBxuX((char)(l_1935)+(-17), (int)(l_1935)+(4))+(char)(l_1935)-(4))+l_1935)/*TAG55:END:l_1935*/, /*TAG56:STA*/((uint8_t)(realsmith_proxy_Sxa9Y((int)(l_1942[0][2][8])+(-200), (int)(l_1942[0][2][8])+(-145))+(int)(l_1942[0][2][8])-(193))+l_1942[0][2][8])/*TAG56:END:l_1942[0][2][8]*/)))), ((*g_909) == l_1943))), 2))) , l_1944) == (void*)0), (/*TAG57:STA*/((int32_t)(realsmith_vEa99()+(int)(*l_1861)-(3))+*l_1861)/*TAG57:END:*l_1861*/))), (Tag58(/*int32_t:163985:164048:140950:e*/**l_75)))), 1UL)) , 7UL)), (Tag59(/*int64_t:0:0:140950:e*/*g_626))))), 18446744073709551608UL)) , (void*)0) != (void*)0) < (-9L)) == 0x048FC853L) & /*TAG60:STA*/((int8_t)(realsmith_proxy_mWC3c((int)(l_1516)+(11), (int)(l_1516)+(81), (int)(**g_574)+(-65499))+(int)(p_53)+(int)(p_54)+(int)(**g_574)+(int)(l_1516)+((int)(g_1869)-(-2112923389))-(-1669154512))+p_53)/*TAG60:END:p_53*/) , Tag61(/*const int8_t:164048:164048:140950:e*/p_53)) <= Tag62(/*uint64_t:164048:164048:140950:e*/p_54)), 4))))
                { /* block id: 871 */
                    uint8_t l_1947[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1947[i] = 254UL;
                    l_1947[0]--;
                }
                else
                { /* block id: 873 */
                    int32_t l_1961[10][2] = {{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L}};
                    int32_t l_1964[6] = {1L,0xE8AD1687L,1L,1L,0xE8AD1687L,1L};
                    int32_t *l_1973 = (void*)0;
                    int32_t **l_1972 = &l_1973;
                    int16_t *l_1987 = &g_655;
                    int i, j;
                    (*l_1862) = ((*g_513) = (void*)0);
                    for (g_298 = 1; (g_298 >= 0); g_298 -= 1)
                    { /* block id: 878 */
                        int i, j, k;
                        /*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
/*bef_stmt:140068*/
l_1965 = (g_787[(g_298 + 2)][(g_1136 + 1)][(g_298 + 3)] = ((/*TAG63:STA*/((int32_t)(realsmith_proxy_8YKhD((char)(p_55)+(85), (char)(p_55)+(-27))+(int)(p_55)-(5))+p_55)/*TAG63:END:p_55*/ < ((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((Tag64(/*const uint16_t:0:0:140068:e*/**g_574)), Tag65(/*int32_t:164048:164048:140068:e*/p_55))), (~(((18446744073709551615UL == Tag66(/*int32_t:164048:164048:140068:e*/p_55)) ^ ((Tag67(/*uint64_t:0:0:140068:e*/*g_742)) <= /*TAG68:STA*/((uint8_t)(realsmith_a8ZMP(25, (int)(l_1928)+(34))+(int)(l_1942[0][2][8])+(int)(l_1928)+(int)(*l_1861)+(int)(p_55)+(int)(g_763)-(196))+l_1942[0][2][8])/*TAG68:END:l_1942[0][2][8]*/)) | (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_1964[4] &= ((((safe_lshift_func_int16_t_s_u(/*TAG69:STA*/((int32_t)(realsmith_KkbCj((long)(l_1961[8][0])+(17))+(long)(l_1961[8][0])-(8))+l_1961[8][0])/*TAG69:END:l_1961[8][0]*/, (safe_mul_func_uint8_t_u_u(Tag70(/*uint64_t:164048:164048:140068:e*/p_54), Tag71(/*int32_t:164048:164048:140068:e*/p_55))))) , (/*TAG72:STA*/((uint16_t)(realsmith_Gqgpy((int)(*g_742)+(1669220135), (int)(**g_574)+(-65507))+(int)(**g_574)+(int)(g_88)+(int)(*g_742)-(-1669154429))+**g_574)/*TAG72:END:**g_574*/)) , 0UL) , 1L)), 0x17L)), Tag73(/*int32_t:141195:141216:140068:e*/l_1945))))))) , /*TAG74:STA*/((uint8_t)(realsmith_j4tF3((int)(l_1942[0][4][6])+(56))+(int)(l_1942[0][4][6])-(28672))+l_1942[0][4][6])/*TAG74:END:l_1942[0][4][6]*/)) , (Tag75(/*int32_t:163985:164048:140068:e*/**l_75))));
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
/*aft_stmt:140068*/
                        /*bef_stmt:140093*/
l_1945 ^= (Tag76(/*int32_t:163985:164048:140093:e*/*l_1861));
/*aft_stmt:140093*/
                    }
                    /*bef_stmt:140875*/
/*bef_stmt:140875*/
/*bef_stmt:140875*/
/*bef_stmt:140875*/
/*bef_stmt:140875*/
/*bef_stmt:140875*/
/*bef_stmt:140875*/
/*bef_stmt:140875*/
/*bef_stmt:140875*/
l_1990[1][0][3] = ((safe_mul_func_int8_t_s_s((l_1989 = ((((((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0L, ((&g_222 == ((*l_1972) = (void*)0)) < /*TAG77:STA*/((uint16_t)(realsmith_proxy_4WPTa((char)(**g_574)+(22), (int)(**g_574)+(-65442), (int)(g_1974)+(-37))+(char)(g_1974)+(char)(**g_574)+(char)(*g_742)-(79))+g_1974)/*TAG77:END:g_1974*/))), ((((*l_1987) = ((safe_lshift_func_uint16_t_u_u((Tag78(/*const uint16_t:0:0:140875:e*/*g_575)), 7)) < (((((*l_89) ^= ((safe_mod_func_int8_t_s_s((~((((**g_909) |= (7UL >= (/*TAG79:STA*/((int32_t)(realsmith_3cjHK((long)(g_1974)+(4))+(long)(**l_75)+(long)(*g_742)+(long)(*g_575)+(long)(g_1974)+(long)(p_53)-(-1669154525))+**l_75)/*TAG79:END:**l_75*/))) , ((l_1982 != l_1984[1][0][1]) >= /*TAG80:STA*/((int8_t)(realsmith_qGzFU((unsigned int)(p_53)+(60))+(unsigned long)(p_53)-(25))+p_53)/*TAG80:END:p_53*/)) && Tag81(/*uint64_t:164048:164048:140875:e*/p_54))), Tag82(/*int32_t:164048:164048:140875:e*/p_55))) && 0x8AL)) && 0x518DL) , /*TAG83:STA*/((int8_t)(realsmith_proxy_1eqbZ((long)(l_1986)+(33))+(long)(l_1986)-(14))+l_1986)/*TAG83:END:l_1986*/) != 0x3BDB79E6L))) , l_1988) != (*l_1862)))) >= 65535UL) < 0xB5L) , (void*)0) == (void*)0) ^ 0x7CBBAF1232225BDALL)), Tag84(/*int32_t:164048:164048:140875:e*/p_55))) , Tag85(/*uint64_t:164048:164048:140875:e*/p_54));
/*aft_stmt:140875*/
/*aft_stmt:140875*/
/*aft_stmt:140875*/
/*aft_stmt:140875*/
/*aft_stmt:140875*/
/*aft_stmt:140875*/
/*aft_stmt:140875*/
/*aft_stmt:140875*/
/*aft_stmt:140875*/
                    l_1990[5][0][1] = 0x0A557A2DL;
                }
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
/*aft_stmt:140950*/
                /*bef_stmt:140964*/
if (Tag86(/*const int8_t:164048:164048:140964:e*/p_53))
                    break;
/*aft_stmt:140964*/
                /*bef_stmt:140992*/
if ((/*TAG87:STA*/((int32_t)(realsmith_proxy_ggegn((int)(**l_75)+(-5), (int)(**l_75)+(55), (int)(**l_75)+(5), (int)(**l_75)+(21), (int)(**l_75)+(60), (int)(**l_75)+(-30), (int)(**l_75)+(36))+(int)(**l_75)-(0))+**l_75)/*TAG87:END:**l_75*/))
                    break;
/*aft_stmt:140992*/
                /*bef_stmt:141004*/
if (Tag88(/*uint64_t:141195:141216:141004:e*/l_1991))
                    break;
/*aft_stmt:141004*/
                for (l_1517 = 0; (l_1517 <= 4); l_1517 += 1)
                { /* block id: 897 */
                    for (g_1873 = 0; (g_1873 <= 4); g_1873 += 1)
                    { /* block id: 900 */
                        int32_t **l_1992 = &l_1861;
                        (*l_1992) = (*l_75);
                    }
                }
            }
        }
        /*bef_stmt:150612*/
/*bef_stmt:150612*/
/*bef_stmt:150612*/
/*bef_stmt:150612*/
/*bef_stmt:150612*/
/*bef_stmt:150612*/
/*bef_stmt:150612*/
/*bef_stmt:150612*/
/*bef_stmt:150612*/
if ((~(safe_sub_func_uint32_t_u_u((g_168 = (safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_1965 = ((Tag89(/*uint64_t:164048:164048:150612:e*/p_54) < (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((/*TAG90:STA*/((uint8_t)(realsmith_fpytS()+(int)(g_2003[0])-(34))+g_2003[0])/*TAG90:END:g_2003[0]*/ | ((**g_625) &= 0x165CBF54EE735150LL)))), 1L))) , ((((*g_742) = (safe_lshift_func_uint16_t_u_u((Tag91(/*int32_t:164048:164048:150612:e*/p_55) != ((safe_div_func_int64_t_s_s(((Tag92(/*const int8_t:164048:164048:150612:e*/p_53) | (0x07D2CB1F362039D0LL ^ (l_2008[5] != l_2009))) < (Tag93(/*uint8_t:0:0:150612:e*/**g_909))), /*TAG94:STA*/((uint64_t)(realsmith_proxy_3bjEJ((int)(p_54)+(1669220132), (int)(p_54)+(1669220089), (int)(p_54)+(1669220063), (int)(p_54)+(1669220097), (int)(p_54)+(1669220121), (char)(p_54)+(-86), (int)(p_54)+(1669220095))+(long)(p_54)-(-1669220043))+p_54)/*TAG94:END:p_54*/)) , Tag95(/*int32_t:164048:164048:150612:e*/p_55))), 6))) , g_2010) == l_2013))), /*TAG96:STA*/((int32_t)(realsmith_1eiWC((int)(p_55)+(55))+(int)(p_55)-(5))+p_55)/*TAG96:END:p_55*/)), (Tag97(/*int32_t:163985:164048:150612:e*/*l_1861))))), 0UL))))
        { /* block id: 910 */
            uint32_t *l_2019[3][7];
            int8_t l_2043 = 0x95L;
            const uint8_t l_2060 = 0xA4L;
            uint64_t l_2061 = 0x07D8913605A0B2A5LL;
            int32_t ***l_2066[1];
            int32_t l_2081[3];
            uint32_t **l_2087 = &l_2019[2][5];
            uint32_t ***l_2086 = &l_2087;
            int32_t l_2122[6][7][3] = {{{7L,(-4L),0x81995DAEL},{0x2F3AF89FL,0x51B64910L,0xBA90EA3FL},{8L,(-9L),1L},{(-2L),0x51B64910L,2L},{0xCBE8AA05L,(-4L),0xEE478A3DL},{0L,(-2L),0x3BC4EFB2L},{0x53F33685L,(-2L),7L}},{{7L,8L,0xEC263276L},{0xEE478A3DL,0L,(-8L)},{(-4L),(-9L),4L},{0x7454E95BL,1L,(-1L)},{0x7454E95BL,0L,0xEE478A3DL},{(-4L),0x7454E95BL,0xCBE8AA05L},{0xEE478A3DL,(-1L),0xFB7480E6L}},{{7L,0x18BDF026L,0x7B8A2DEBL},{0x53F33685L,0x53F33685L,(-1L)},{0L,(-9L),0x77556963L},{0xCBE8AA05L,(-8L),(-2L)},{(-2L),0xC6A97AFDL,0xEE478A3DL},{8L,0xCBE8AA05L,(-2L)},{0x2F3AF89FL,0x3BC4EFB2L,0x77556963L}},{{7L,0x85AEAF26L,(-1L)},{0L,0xEE478A3DL,0x7B8A2DEBL},{0xC6A97AFDL,(-9L),0xFB7480E6L},{2L,0x2F3AF89FL,0xCBE8AA05L},{(-2L),0L,0xEE478A3DL},{0x18BDF026L,2L,(-1L)},{(-8L),2L,4L}},{{7L,0L,(-8L)},{0x51B64910L,0x2F3AF89FL,0xEC263276L},{0L,(-9L),7L},{0x3BC4EFB2L,0xEE478A3DL,0x3BC4EFB2L},{(-1L),0x85AEAF26L,0xEE478A3DL},{0x85AEAF26L,0x3BC4EFB2L,2L},{1L,0xCBE8AA05L,1L}},{{7L,0xC6A97AFDL,0xBA90EA3FL},{1L,(-8L),0x81995DAEL},{0x85AEAF26L,(-9L),0L},{(-1L),0x53F33685L,(-2L)},{0x3BC4EFB2L,0x18BDF026L,0xEE478A3DL},{0L,(-1L),0x7454E95BL},{0x51B64910L,0x7454E95BL,0x75E10B48L}}};
            int8_t l_2132 = (-2L);
            int32_t l_2165 = 0xB70AEF2AL;
            uint16_t ***l_2184 = &l_2056;
            uint8_t l_2214 = 255UL;
            int8_t l_2247 = 0x01L;
            int64_t ** const *l_2248 = &g_1019;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 7; j++)
                    l_2019[i][j] = &g_1542;
            }
            for (i = 0; i < 1; i++)
                l_2066[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_2081[i] = 0xE7C7B823L;
            for (l_1517 = 0; (l_1517 != 26); l_1517 = safe_add_func_uint16_t_u_u(l_1517, 1))
            { /* block id: 913 */
                uint32_t *l_2022 = &g_1542;
                uint32_t **l_2021 = &l_2022;
                uint32_t l_2034[8][4][5] = {{{0UL,0xE475A8AAL,4294967295UL,0UL,0xE475A8AAL},{0xE3188A69L,0x381650F1L,0x381650F1L,0xE3188A69L,0xF4F881A4L},{0xECA69AECL,4294967286UL,0xC7D1536BL,0xE475A8AAL,0xE475A8AAL},{8UL,0xE3188A69L,8UL,4294967288UL,0x381650F1L}},{{0UL,0xC7D1536BL,4294967295UL,0UL,4294967295UL},{8UL,8UL,0x44446897L,0x381650F1L,0xF4F881A4L},{4294967290UL,0UL,4294967295UL,4294967295UL,0UL},{0xF4F881A4L,4294967294UL,0x02B2B418L,0xF4F881A4L,4294967288UL}},{{4294967295UL,0UL,0xE475A8AAL,0UL,4294967295UL},{0x02B2B418L,8UL,4294967294UL,4294967288UL,8UL},{4294967295UL,0xC7D1536BL,0xC7D1536BL,4294967295UL,4294967295UL},{0xF4F881A4L,0x381650F1L,0x44446897L,8UL,8UL}},{{4294967290UL,4294967295UL,4294967290UL,4294967295UL,4294967295UL},{8UL,4294967294UL,4294967288UL,8UL,4294967288UL},{0UL,0UL,0xE475A8AAL,4294967295UL,0UL},{0x02B2B418L,0xF4F881A4L,4294967288UL,4294967288UL,0xF4F881A4L}},{{0UL,0xC7D1536BL,4294967290UL,0UL,4294967295UL},{0x381650F1L,0xF4F881A4L,0x44446897L,0xF4F881A4L,0x381650F1L},{4294967290UL,0UL,0xC7D1536BL,4294967295UL,0UL},{0x381650F1L,4294967294UL,4294967294UL,0x381650F1L,4294967288UL}},{{0UL,4294967295UL,0xE475A8AAL,0UL,0UL},{0x02B2B418L,0x381650F1L,0x02B2B418L,4294967288UL,0x381650F1L},{0UL,0xC7D1536BL,4294967295UL,0UL,4294967295UL},{8UL,8UL,0x44446897L,0x381650F1L,0xF4F881A4L}},{{4294967290UL,0UL,4294967295UL,4294967295UL,0UL},{0xF4F881A4L,4294967294UL,0x02B2B418L,0xF4F881A4L,4294967288UL},{4294967295UL,0UL,0xE475A8AAL,0UL,4294967295UL},{0x02B2B418L,8UL,4294967294UL,4294967288UL,8UL}},{{4294967295UL,0xC7D1536BL,0xC7D1536BL,4294967295UL,4294967295UL},{0xF4F881A4L,0x381650F1L,0x44446897L,8UL,8UL},{4294967290UL,4294967295UL,4294967290UL,4294967295UL,4294967295UL},{8UL,4294967294UL,4294967288UL,8UL,4294967288UL}}};
                uint16_t l_2042 = 65530UL;
                int32_t l_2080 = 0x18A183DAL;
                int16_t **l_2112[6];
                int32_t l_2126 = 0L;
                int32_t l_2129[4][9][3] = {{{0L,7L,0L},{2L,(-4L),(-3L)},{0x0F5B3DE5L,0x001CCCF6L,0x001CCCF6L},{0x15A1D19AL,(-6L),0x001CCCF6L},{0x0A0D33D0L,0L,(-3L)},{0xBAACD44BL,0x0A0D33D0L,0L},{0x088C18BDL,0x9A056D32L,(-6L)},{0x50CC7F01L,0x0A0D33D0L,7L},{0x0331A6D9L,0L,0x0F5B3DE5L}},{{(-6L),(-6L),0x0A0D33D0L},{(-6L),0x001CCCF6L,0x50CC7F01L},{0x0331A6D9L,(-4L),0x2F3977B4L},{0x50CC7F01L,7L,0x0331A6D9L},{0x088C18BDL,0x0331A6D9L,0x2F3977B4L},{0xBAACD44BL,2L,0x50CC7F01L},{0x0A0D33D0L,2L,0x0A0D33D0L},{0x15A1D19AL,7L,0x0A0D33D0L},{0x0A0D33D0L,0x9A056D32L,0xBAACD44BL}},{{7L,0L,0x088C18BDL},{0x001CCCF6L,0xBAACD44BL,0x50CC7F01L},{7L,(-3L),0x0331A6D9L},{0x0A0D33D0L,(-6L),(-6L)},{(-4L),0x088C18BDL,(-6L)},{0x15A1D19AL,0x001CCCF6L,0x0331A6D9L},{0L,0x15A1D19AL,0x50CC7F01L},{0xDD6AB31BL,0x2F3977B4L,0x088C18BDL},{0x0F5B3DE5L,0x15A1D19AL,0xBAACD44BL}},{{0L,0x001CCCF6L,0x0A0D33D0L},{0x088C18BDL,0x088C18BDL,0x15A1D19AL},{0x088C18BDL,(-6L),0x0F5B3DE5L},{0L,(-3L),2L},{0x0F5B3DE5L,0xBAACD44BL,0L},{0xDD6AB31BL,0L,2L},{0L,0x9A056D32L,0x0F5B3DE5L},{0x15A1D19AL,7L,0x15A1D19AL},{(-4L),7L,0x0A0D33D0L}}};
                int64_t l_2171 = 0x8469046CB577C89FLL;
                uint16_t **l_2189 = &l_89;
                uint16_t **l_2192 = &l_89;
                uint64_t l_2209 = 0x67C2F2B6D31DCEB1LL;
                const int32_t ***l_2216 = &g_507;
                int64_t l_2232 = 4L;
                uint64_t l_2256 = 0x8E54706CD8FDA5E0LL;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_2112[i] = &g_1471;
            }
        }
        else
        { /* block id: 995 */
            int32_t *l_2257[1];
            int i;
            for (i = 0; i < 1; i++)
                l_2257[i] = &g_787[3][1][0];
            (**g_506) = ((*g_185) = l_2257[0]);
        }
/*aft_stmt:150612*/
/*aft_stmt:150612*/
/*aft_stmt:150612*/
/*aft_stmt:150612*/
/*aft_stmt:150612*/
/*aft_stmt:150612*/
/*aft_stmt:150612*/
/*aft_stmt:150612*/
/*aft_stmt:150612*/
        /*bef_stmt:163979*/
if (Tag98(/*uint64_t:164048:164048:163979:e*/p_54))
        { /* block id: 999 */
            uint16_t l_2263 = 0x274DL;
            int32_t l_2269 = (-7L);
            int32_t l_2272 = 0x814A6675L;
            int32_t l_2273 = 0x3FB2F251L;
            /*bef_stmt:151235*/
/*bef_stmt:151235*/
/*bef_stmt:151235*/
/*bef_stmt:151235*/
/*bef_stmt:151235*/
/*bef_stmt:151235*/
/*bef_stmt:151235*/
l_2273 = (safe_lshift_func_int16_t_s_s(((&l_2090[0][7][0] != &l_2202) ^ (0xE185721BA6C3C0C8LL & (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s(((9UL && (l_2272 |= ((Tag99(/*uint16_t:151239:163985:151235:e*/l_2263) >= (safe_div_func_uint16_t_u_u(((***l_2055) &= (0x4089D3BBD11537C3LL | ((((safe_add_func_int32_t_s_s(((void*)0 == (*l_75)), ((void*)0 != l_2268[0]))) > /*TAG100:STA*/((int32_t)(realsmith_CqXFX((int)(l_2269)+(70))+(int)(l_2269)-(-7))+l_2269)/*TAG100:END:l_2269*/) , l_2270) == (void*)0))), 65531UL))) <= Tag101(/*uint64_t:164048:164048:151235:e*/p_54)))) >= Tag102(/*int32_t:151239:163985:151235:e*/l_2269)))) | Tag103(/*uint16_t:151239:163985:151235:e*/l_2263)), Tag104(/*int32_t:164048:164048:151235:e*/p_55))))), /*TAG105:STA*/((uint64_t)(realsmith_bxBro()+(int)(p_54)-(-1669220043))+p_54)/*TAG105:END:p_54*/));
/*aft_stmt:151235*/
/*aft_stmt:151235*/
/*aft_stmt:151235*/
/*aft_stmt:151235*/
/*aft_stmt:151235*/
/*aft_stmt:151235*/
/*aft_stmt:151235*/
        }
        else
        { /* block id: 1003 */
            int16_t l_2286 = 0x20C4L;
            int32_t l_2314 = 0xF88D2697L;
            int32_t l_2315 = (-3L);
            int32_t l_2316 = (-1L);
            int64_t l_2333[2][2];
            int32_t ***l_2336[6] = {&g_185,&g_185,&l_1862,&g_185,&g_185,&l_1862};
            int32_t l_2350 = 0x0CD5182CL;
            int8_t *l_2373[2][1][10] = {{{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347}},{{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347}}};
            int64_t **l_2461 = &g_1915;
            uint8_t ****l_2471 = &g_2012[2][0];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2333[i][j] = 1L;
            }
            for (g_1851 = 1; (g_1851 >= 0); g_1851 -= 1)
            { /* block id: 1006 */
                uint32_t * const *l_2278 = &g_2020;
                uint32_t * const **l_2279 = &l_2278;
                uint32_t **l_2280 = &g_2020;
                const int32_t l_2285 = 0x5FAC05FCL;
                int32_t l_2287 = (-5L);
                int32_t ***l_2335 = &l_1862;
                int32_t l_2349 = 1L;
                int32_t l_2351 = 0x161D8D22L;
                /*bef_stmt:152785*/
/*bef_stmt:152785*/
/*bef_stmt:152785*/
/*bef_stmt:152785*/
/*bef_stmt:152785*/
/*bef_stmt:152785*/
/*bef_stmt:152785*/
/*bef_stmt:152785*/
l_2287 &= (((safe_div_func_uint8_t_u_u(0x99L, Tag106(/*const int8_t:164048:164048:152785:e*/p_53))) > Tag107(/*int32_t:164048:164048:152785:e*/p_55)) == (((safe_rshift_func_uint16_t_u_u((((*l_2279) = l_2278) == l_2280), 14)) == ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((Tag108(/*const int32_t:154897:163961:152785:e*/l_2285) & (Tag109(/*int16_t:163961:163985:152785:e*/l_2286) <= (Tag110(/*int32_t:163985:164048:152785:e*/**l_75)))), 7)), Tag111(/*const int8_t:164048:164048:152785:e*/p_53))) , Tag112(/*int16_t:163961:163985:152785:e*/l_2286))) && Tag113(/*uint64_t:164048:164048:152785:e*/p_54)));
/*aft_stmt:152785*/
/*aft_stmt:152785*/
/*aft_stmt:152785*/
/*aft_stmt:152785*/
/*aft_stmt:152785*/
/*aft_stmt:152785*/
/*aft_stmt:152785*/
/*aft_stmt:152785*/
                /*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
/*bef_stmt:153557*/
l_2316 |= (+(~(!(l_2315 = ((((safe_div_func_int8_t_s_s(((+((((safe_lshift_func_uint16_t_u_s(((void*)0 == (*g_2010)), 13)) , &l_2286) == &l_2240[3]) , (Tag114(/*int32_t:164048:164048:153557:e*/p_55) , (safe_mul_func_int16_t_s_s((l_2314 = ((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(Tag115(/*int32_t:164048:164048:153557:e*/p_55), (safe_lshift_func_int16_t_s_s(Tag116(/*uint64_t:164048:164048:153557:e*/p_54), 10)))) , 0xDBF62E6AL) , (safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((((((**g_909) ^= ((l_2287 = (safe_mod_func_int64_t_s_s(Tag117(/*int32_t:154897:163961:153557:e*/l_2287), (-8L)))) && Tag118(/*int32_t:164048:164048:153557:e*/p_55))) && Tag119(/*const int8_t:164048:164048:153557:e*/p_53)) != Tag120(/*uint64_t:164048:164048:153557:e*/p_54)) == (Tag121(/*uint64_t:0:0:153557:e*/*g_742))) | 0x65CE0FBC7DB13CF2LL), Tag122(/*uint64_t:164048:164048:153557:e*/p_54))) & Tag123(/*const int8_t:164048:164048:153557:e*/p_53)), 0x2EL)), 2L)), Tag124(/*const int8_t:164048:164048:153557:e*/p_53)))), (Tag125(/*uint16_t:0:0:153557:e*/*g_2191)))) <= 0xEFL)), Tag126(/*const int8_t:164048:164048:153557:e*/p_53)))))) < 1UL), Tag127(/*int16_t:163961:163985:153557:e*/l_2286))) && 1UL) <= Tag128(/*uint64_t:164048:164048:153557:e*/p_54)) , Tag129(/*int32_t:154897:163961:153557:e*/l_2287))))));
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
/*aft_stmt:153557*/
                /*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
/*bef_stmt:154742*/
if (((1L <= (l_2314 = (safe_div_func_uint16_t_u_u(Tag130(/*int32_t:164048:164048:154742:e*/p_55), (((safe_rshift_func_int16_t_s_s(Tag131(/*uint64_t:164048:164048:154742:e*/p_54), 11)) ^ (l_2287 = ((safe_mul_func_uint16_t_u_u(((l_2315 ^= (((safe_mul_func_int16_t_s_s(0x1010L, ((*l_2166) = Tag132(/*int32_t:164048:164048:154742:e*/p_55)))) >= ((((**g_2095) = ((safe_sub_func_int16_t_s_s(((((((Tag133(/*uint64_t:164048:164048:154742:e*/p_54) , 0xF1L) && (((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0x1E35FF2BL, 0x947B0305L)), Tag134(/*int64_t:163961:163985:154742:e*/l_2333[0][0]))), Tag135(/*const int32_t:154897:163961:154742:e*/l_2285))) , Tag136(/*int32_t:154897:163961:154742:e*/l_2287)) < Tag137(/*int32_t:164048:164048:154742:e*/p_55))) > 1UL) < Tag138(/*int16_t:163985:164048:154742:e*/l_2334)) != Tag139(/*uint64_t:164048:164048:154742:e*/p_54)) & Tag140(/*uint64_t:164048:164048:154742:e*/p_54)), Tag141(/*int32_t:163961:163985:154742:e*/l_2314))) || Tag142(/*int32_t:164048:164048:154742:e*/p_55))) || 1L) , Tag143(/*int32_t:154897:163961:154742:e*/l_2287))) || 6UL)) > 0x8743DCC9L), Tag144(/*uint64_t:164048:164048:154742:e*/p_54))) || Tag145(/*const int8_t:164048:164048:154742:e*/p_53)))) ^ 2L))))) < (Tag146(/*uint16_t:0:0:154742:e*/**g_2190))))
                { /* block id: 1019 */
                    int32_t ***l_2337[7] = {&g_44,&g_44,&g_44,&g_44,&g_44,&g_44,&g_44};
                    int i;
                    return l_2337[4];
                }
                else
                { /* block id: 1021 */
                    uint16_t l_2347 = 0x29B3L;
                    /*bef_stmt:154732*/
/*bef_stmt:154732*/
/*bef_stmt:154732*/
l_2287 |= (safe_unary_minus_func_int16_t_s(((+(safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(Tag147(/*const int8_t:164048:164048:154732:e*/p_53), (Tag148(/*int32_t:163985:164048:154732:e*/*l_1861)))), 4UL))) | ((*g_2191) = ((l_2344[1] != &l_2008[5]) | ((l_2347 = (++(**g_2095))) >= ((-9L) & Tag149(/*int32_t:164048:164048:154732:e*/p_55))))))));
/*aft_stmt:154732*/
/*aft_stmt:154732*/
/*aft_stmt:154732*/
                }
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
/*aft_stmt:154742*/
                /*bef_stmt:154766*/
if ((Tag150(/*int32_t:0:0:154766:e*/*g_45)))
                    break;
/*aft_stmt:154766*/
                for (l_2096 = 0; (l_2096 <= 1); l_2096 += 1)
                { /* block id: 1030 */
                    int32_t l_2348 = 2L;
                    int i, j;
                    --g_2352;
                }
            }
            for (g_372 = 0; (g_372 == 14); ++g_372)
            { /* block id: 1036 */
                const uint32_t l_2372 = 1UL;
                int32_t l_2398[5][7] = {{0x30E36697L,(-8L),0x30E36697L,(-8L),0x30E36697L,(-8L),0x30E36697L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x30E36697L,(-8L),0x30E36697L,(-8L),0x30E36697L,(-8L),0x30E36697L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x30E36697L,(-8L),0x30E36697L,(-8L),0x30E36697L,(-8L),0x30E36697L}};
                int8_t l_2418 = 4L;
                int32_t l_2429 = (-3L);
                int8_t l_2430 = 0x32L;
                int16_t l_2431 = 1L;
                int8_t l_2432 = (-3L);
                uint64_t l_2462[1][2][10] = {{{0x871057F93DC4E0A8LL,0xD334C36D06428326LL,0xD334C36D06428326LL,0x871057F93DC4E0A8LL,0x4B4BCC05ABCEF0ECLL,0x871057F93DC4E0A8LL,0xD334C36D06428326LL,0xD334C36D06428326LL,0x871057F93DC4E0A8LL,0x4B4BCC05ABCEF0ECLL},{0x871057F93DC4E0A8LL,0xD334C36D06428326LL,0xD334C36D06428326LL,0x871057F93DC4E0A8LL,0x4B4BCC05ABCEF0ECLL,0x871057F93DC4E0A8LL,0xD334C36D06428326LL,0xD334C36D06428326LL,0x871057F93DC4E0A8LL,0x4B4BCC05ABCEF0ECLL}}};
                int i, j, k;
            }
            for (g_2 = 0; (g_2 < 25); g_2 = safe_add_func_uint64_t_u_u(g_2, 6))
            { /* block id: 1103 */
                int16_t l_2489 = (-1L);
                int32_t l_2491 = 3L;
                int32_t l_2492[7][8][4] = {{{0x1F39B553L,(-1L),0xFE7D34ABL,1L},{0L,0x2BA443ADL,(-10L),0x2BA443ADL},{(-1L),0x6CC26548L,0x5A7DCC65L,7L},{6L,0xA8D9B2F9L,1L,0xF0129C5DL},{(-10L),0x880312BFL,0x7FCA3854L,0xFE7D34ABL},{(-10L),0L,1L,0x1F39B553L},{6L,0xFE7D34ABL,0x5A7DCC65L,0L},{(-1L),(-10L),(-10L),(-1L)}},{{0L,0x5A7DCC65L,0xFE7D34ABL,6L},{0x1F39B553L,1L,0L,(-10L)},{0xFE7D34ABL,0x7FCA3854L,0x880312BFL,(-10L)},{0xD03C19C4L,0x1F39B553L,(-1L),0xFE7D34ABL},{1L,(-10L),0x7FCA3854L,0x958DC6ACL},{0x594716C1L,0L,0x594716C1L,0xA8D9B2F9L},{0x2BA443ADL,0L,0x880312BFL,6L},{(-10L),1L,6L,0L}},{{(-1L),0x6CC26548L,6L,0xD03C19C4L},{(-10L),(-1L),0x880312BFL,1L},{0x2BA443ADL,0x7FCA3854L,0x594716C1L,0x594716C1L},{0x594716C1L,0x594716C1L,0x7FCA3854L,0x2BA443ADL},{1L,0x880312BFL,(-1L),(-10L)},{0xD03C19C4L,6L,0x6CC26548L,(-1L)},{0L,6L,1L,(-10L)},{6L,0x880312BFL,0L,0x2BA443ADL}},{{0xA8D9B2F9L,0x594716C1L,0L,0x594716C1L},{0x958DC6ACL,0x7FCA3854L,(-10L),1L},{0xFE7D34ABL,(-1L),0x1F39B553L,0xD03C19C4L},{0L,0x6CC26548L,0xF0129C5DL,0L},{0L,1L,0x1F39B553L,6L},{0xFE7D34ABL,0L,(-10L),0xA8D9B2F9L},{0x958DC6ACL,0L,0L,0x958DC6ACL},{0xA8D9B2F9L,(-10L),0L,0xFE7D34ABL}},{{6L,0x1F39B553L,1L,0L},{0L,0xF0129C5DL,0x6CC26548L,0L},{0xD03C19C4L,0x1F39B553L,(-1L),0xFE7D34ABL},{1L,(-10L),0x7FCA3854L,0x958DC6ACL},{0x594716C1L,0L,0x594716C1L,0xA8D9B2F9L},{0x2BA443ADL,0L,0x880312BFL,6L},{(-10L),1L,6L,0L},{(-1L),0x6CC26548L,6L,0xD03C19C4L}},{{(-10L),(-1L),0x880312BFL,1L},{0x2BA443ADL,0x7FCA3854L,0x594716C1L,0x594716C1L},{0x594716C1L,0x594716C1L,0x7FCA3854L,0x2BA443ADL},{1L,0x880312BFL,(-1L),(-10L)},{0xD03C19C4L,6L,0x6CC26548L,(-1L)},{0L,6L,1L,(-10L)},{6L,0x880312BFL,0L,0x2BA443ADL},{0xA8D9B2F9L,0x594716C1L,0L,0x594716C1L}},{{0x958DC6ACL,0x7FCA3854L,(-10L),1L},{0xFE7D34ABL,(-1L),0x1F39B553L,0xD03C19C4L},{0L,0x6CC26548L,0xF0129C5DL,0L},{0L,1L,0x1F39B553L,6L},{0xFE7D34ABL,0L,(-10L),0xA8D9B2F9L},{0x958DC6ACL,0L,0L,0x958DC6ACL},{0xA8D9B2F9L,(-10L),0L,0xFE7D34ABL},{6L,0x1F39B553L,1L,0L}}};
                int32_t * const *l_2493 = &l_1863[1];
                int i, j, k;
                /*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
/*bef_stmt:160901*/
l_2496 ^= (((Tag151(/*const int8_t:164048:164048:160901:e*/p_53) , (((***l_2055) |= ((safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((((Tag152(/*uint64_t:164048:164048:160901:e*/p_54) || ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((+Tag153(/*int16_t:163907:163961:160901:e*/l_2489)) >= ((Tag154(/*const uint16_t:0:0:160901:e*/*g_575)) && (+Tag155(/*const int8_t:164048:164048:160901:e*/p_53)))) , ((l_2492[3][1][0] = (l_2491 |= 1L)) , 251UL)), (((void*)0 != l_2493) == Tag156(/*const int8_t:164048:164048:160901:e*/p_53)))), 15)) > Tag157(/*int32_t:164048:164048:160901:e*/p_55))) && Tag158(/*int32_t:0:0:160901:e*/g_2494)) ^ Tag159(/*uint64_t:164048:164048:160901:e*/p_54)), 0xA457L)) <= Tag160(/*int8_t:163985:164048:160901:e*/l_2495)), 1L)) == Tag161(/*int32_t:164048:164048:160901:e*/p_55))) && (Tag162(/*uint16_t:0:0:160901:e*/*g_2191)))) , (Tag163(/*uint16_t:0:0:160901:e*/*g_2191))) == (-8L));
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
/*aft_stmt:160901*/
                for (g_1873 = 24; (g_1873 < 27); ++g_1873)
                { /* block id: 1110 */
                    uint16_t ** const *l_2510[5];
                    int64_t l_2516 = 3L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2510[i] = (void*)0;
                    for (l_1965 = 0; (l_1965 < (-30)); l_1965 = safe_sub_func_int16_t_s_s(l_1965, 7))
                    { /* block id: 1113 */
                        const uint32_t l_2502[4][5][5] = {{{0x027B496DL,0x046DA488L,0xABA84B95L,0UL,0UL},{4294967287UL,0x0493DAA7L,4294967287UL,4294967295UL,2UL},{0x027B496DL,0x5FEEE2FAL,0xD94C0175L,0xB5F45A77L,0x5FEEE2FAL},{9UL,4294967295UL,1UL,4294967295UL,9UL},{0x5FEEE2FAL,0xB5F45A77L,0xD94C0175L,0x5FEEE2FAL,0x179AACC9L}},{{4294967287UL,1UL,0x887C43A5L,0x49E2B523L,0x887C43A5L},{0xD07D6048L,0xD07D6048L,0x5CE8A771L,0xB5F45A77L,0x179AACC9L},{4294967287UL,0x49E2B523L,4294967295UL,0x57507327L,9UL},{0x179AACC9L,0xD94C0175L,0xABA84B95L,0xD07D6048L,0x5FEEE2FAL},{4294967287UL,0x49E2B523L,2UL,4294967295UL,4294967287UL}},{{4294967295UL,0xD07D6048L,0xD94C0175L,0xD94C0175L,0xD07D6048L},{9UL,1UL,4294967295UL,4294967295UL,4294967287UL},{0xD07D6048L,0xB5F45A77L,0x046DA488L,0xD07D6048L,0x179AACC9L},{0x887C43A5L,4294967295UL,0x887C43A5L,0x57507327L,4294967287UL},{0xD07D6048L,0x5FEEE2FAL,0xABA84B95L,0xB5F45A77L,4294967295UL}},{{9UL,0x49E2B523L,1UL,0x49E2B523L,9UL},{4294967295UL,0xB5F45A77L,0xABA84B95L,0x5FEEE2FAL,0xD07D6048L},{4294967287UL,0x57507327L,0x887C43A5L,4294967295UL,0x887C43A5L},{0x179AACC9L,0xD07D6048L,0x046DA488L,0xB5F45A77L,0xD07D6048L},{4294967287UL,4294967295UL,4294967295UL,1UL,9UL}}};
                        int32_t l_2511 = 0L;
                        int32_t l_2515[1][6] = {{0L,0x5221FF19L,0x5221FF19L,0L,0x5221FF19L,0x5221FF19L}};
                        int i, j, k;
                        (*g_185) = g_2501[1];
                        /*bef_stmt:163053*/
if (Tag164(/*const int8_t:164048:164048:163053:e*/p_53))
                            break;
/*aft_stmt:163053*/
                        /*bef_stmt:163649*/
/*bef_stmt:163649*/
/*bef_stmt:163649*/
/*bef_stmt:163649*/
/*bef_stmt:163649*/
/*bef_stmt:163649*/
/*bef_stmt:163649*/
/*bef_stmt:163649*/
l_2516 = (((Tag165(/*int32_t:164048:164048:163649:e*/p_55) && Tag166(/*const uint32_t:163653:163892:163649:e*/l_2502[3][0][0])) != (((*g_2010) != (*l_2013)) , (safe_rshift_func_uint16_t_u_u(0x771DL, ((safe_rshift_func_int8_t_s_s(Tag167(/*int32_t:164048:164048:163649:e*/p_55), 3)) < (l_2515[0][5] = (l_2492[3][1][0] = ((((((0x9DL < (~(l_2511 = (((*g_742) &= (((void*)0 != l_2510[4]) != 0xF27EL)) != Tag168(/*const int8_t:0:0:163649:e*/g_763))))) , g_2512) != &l_1985) | Tag169(/*uint64_t:164048:164048:163649:e*/p_54)) == (Tag170(/*int64_t:0:0:163649:e*/**g_625))) > Tag171(/*uint16_t:163985:164048:163649:e*/l_2514))))))))) == Tag172(/*const int8_t:164048:164048:163649:e*/p_53));
/*aft_stmt:163649*/
/*aft_stmt:163649*/
/*aft_stmt:163649*/
/*aft_stmt:163649*/
/*aft_stmt:163649*/
/*aft_stmt:163649*/
/*aft_stmt:163649*/
/*aft_stmt:163649*/
                    }
                    for (g_2131 = 0; (g_2131 <= 3); g_2131 += 1)
                    { /* block id: 1124 */
                        int i, j, k;
                        l_2492[g_2131][(g_2131 + 4)][g_2131] &= l_2240[(g_2131 + 4)];
                    }
                }
            }
            (*g_507) = (*l_1862);
        }
/*aft_stmt:163979*/
    }
    return &g_44;
}


/* ------------------------------------------ */
/* 
 * reads : g_575 g_131 g_574 g_909 g_910 g_372 g_1851
 * writes: g_1915 g_1851
 */
static int32_t  func_69(int32_t * p_70, int32_t *** p_71, uint32_t  p_72, int32_t  p_73, uint32_t  p_74)
{ /* block id: 851 */
    int64_t *l_1901 = (void*)0;
    int64_t *l_1902 = &g_197[5][3][1];
    uint16_t *l_1911[5][4] = {{&g_965,&g_90,&g_90,&g_965},{&g_90,&g_965,&g_90,&g_90},{&g_965,&g_965,&g_90,&g_965},{&g_965,&g_90,&g_90,&g_965},{&g_90,&g_965,&g_90,&g_90}};
    int32_t l_1912 = 1L;
    int64_t *l_1914 = &g_197[1][5][1];
    int64_t **l_1913[8][1][10] = {{{&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914}},{{&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1901,&l_1914}},{{&l_1901,&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1901}},{{&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914}},{{&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1901,&l_1914}},{{&l_1901,&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1901}},{{&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914,&l_1914}},{{&l_1914,&l_1901,&l_1901,&l_1914,&l_1901,&l_1914,&l_1901,&l_1914,&l_1914,&l_1901}}};
    int32_t l_1916 = (-1L);
    int32_t l_1917 = 0xB9924FE6L;
    int32_t l_1918 = 0xDDEE5E40L;
    int32_t *l_1919 = &g_1851;
    int i, j, k;
    /*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
/*bef_stmt:166666*/
(*l_1919) ^= ((l_1902 = l_1901) != ((((safe_sub_func_uint16_t_u_u((l_1918 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((l_1912 = (/*TAG173:STA*/((uint16_t)(realsmith_bKsbF((int)(*g_575)+(-65446))+(int)(*g_575)-(65535))+*g_575)/*TAG173:END:*g_575*/)) | (Tag174(/*const uint16_t:0:0:166666:e*/**g_574))), (((g_1915 = l_1901) == (void*)0) | (l_1917 = (l_1916 = Tag175(/*int32_t:166691:166691:166666:e*/l_1916)))))), Tag176(/*int32_t:166691:166691:166666:e*/l_1918))), (((((Tag177(/*int32_t:166691:166691:166666:e*/l_1918) < Tag178(/*int32_t:166691:166691:166666:e*/p_73)) == Tag179(/*int32_t:166691:166691:166666:e*/l_1918)) == (/*TAG180:STA*/((uint8_t)(realsmith_proxy_UpVUQ()+(char)(**g_909)-(13))+**g_909)/*TAG180:END:**g_909*/)) > /*TAG181:STA*/((int32_t)(realsmith_proxy_XlK9o((char)(p_73)+(-68), (char)(p_73)+(-40))+(int)(p_73)+(int)(l_1916)+(int)(**g_625)+(int)(**g_909)+(int)(*g_575)-(65805))+p_73)/*TAG181:END:p_73*/) ^ (-2L))))), /*TAG182:STA*/((int32_t)(realsmith_proxy_4VdOD((char)(*g_2191)+(-92))+(int)(p_73)+(int)(**g_909)+(int)(l_1916)+(int)(*g_2191)+(int)(*g_575)-(65689))+p_73)/*TAG182:END:p_73*/)) & 0xDB32L) < /*TAG183:STA*/((uint32_t)(realsmith_proxy_Kz89S((int)(p_72)+(2112923465), (long)(p_72)+(-2182043896))+(int)(p_72)-(-2112923388))+p_72)/*TAG183:END:p_72*/) , (void*)0));
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
/*aft_stmt:166666*/
    /*bef_stmt:166689*/
return (Tag184(/*int32_t:166691:166691:166689:e*/*l_1919));
/*aft_stmt:166689*/
}


/* ------------------------------------------ */
/* 
 * reads : g_6 g_574 g_575 g_131 g_2 g_68 g_787 g_45
 * writes: g_2 g_1873
 */
static int32_t * func_76(int32_t * p_77, uint32_t  p_78, int32_t ** p_79)
{ /* block id: 844 */
    int32_t *l_1864 = (void*)0;
    int32_t *l_1865 = &g_2;
    int32_t *l_1866 = (void*)0;
    int32_t *l_1867[1][9] = {{&g_787[2][6][2],&g_787[2][6][2],&g_787[2][6][2],&g_787[2][6][2],&g_787[2][6][2],&g_787[2][6][2],&g_787[2][6][2],&g_787[2][6][2],&g_787[2][6][2]}};
    int32_t l_1868 = 0xAD8E409DL;
    uint64_t l_1870 = 0UL;
    uint32_t l_1874 = 1UL;
    const uint16_t * const l_1881 = &g_90;
    int i, j;
    l_1870--;
    g_1873 = ((*l_1865) = 0xCC0EF727L);
    ++l_1874;
    /*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
/*bef_stmt:168282*/
(*l_1865) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((void*)0 == l_1881), (safe_div_func_int16_t_s_s(((((void*)0 != &l_1868) == (safe_add_func_int8_t_s_s((-9L), ((((((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u((Tag185(/*uint32_t:168316:168316:168282:e*/p_78) != ((/*TAG186:STA*/((int32_t)(realsmith_proxy_nw1wU((int)(*p_77)+(81), (int)(*p_77)+(-46))+(int)(*p_77)-(5))+*p_77)/*TAG186:END:*p_77*/) , ((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((/*TAG187:STA*/((uint16_t)(realsmith_tS6Qc((int)(**g_574)+(-65521))+(int)(**g_574)-(65536))+**g_574)/*TAG187:END:**g_574*/), (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u(Tag188(/*uint32_t:168316:168316:168282:e*/p_78), Tag189(/*uint32_t:168316:168316:168282:e*/p_78))) || /*TAG190:STA*/((uint32_t)(realsmith_proxy_SgcvF((char)(p_78)+(23))+(int)(p_78)-(1))+p_78)/*TAG190:END:p_78*/) ^ 4294967295UL) , /*TAG191:STA*/((uint32_t)(realsmith_proxy_VAfym((int)(p_78)+(57), (char)(p_78)+(72), (char)(p_78)+(45))+(int)(p_78)-(2))+p_78)/*TAG191:END:p_78*/), /*TAG192:STA*/((uint32_t)(realsmith_mOjTx((int)(p_78)+(17))+(int)(p_78)-(10))+p_78)/*TAG192:END:p_78*/)) <= Tag193(/*uint32_t:168316:168316:168282:e*/p_78)), Tag194(/*uint32_t:168316:168316:168282:e*/p_78))))), (Tag195(/*int32_t:168316:168316:168282:e*/*l_1865)))) | 0xC9F96064L), (Tag196(/*int32_t:168316:168316:168282:e*/*p_77)))) >= 0UL))))), 18446744073709551615UL)) , 255UL) , p_77) != (void*)0) & (Tag197(/*const uint16_t:0:0:168282:e*/**g_574))) | Tag198(/*uint32_t:168316:168316:168282:e*/p_78))))) , 1L), /*TAG199:STA*/((uint32_t)(realsmith_proxy_NNUAV((char)(**g_574)+(-98), (char)(**g_909)+(109))+(int)(p_78)+(int)(*p_77)+(int)(**g_574)+(int)(**g_909)-(65695))+p_78)/*TAG199:END:p_78*/)))), 0xEF32L));
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
/*aft_stmt:168282*/
    return (*p_79);
}


/* ------------------------------------------ */
/* 
 * reads : g_507 g_513 g_1539 g_1542 g_742 g_26 g_260 g_347 g_68 g_168 g_197 g_131 g_625 g_626 g_910 g_372 g_802 g_787 g_909 g_574 g_575 g_1623 g_965 g_44 g_45 g_6 g_1716 g_404 g_505 g_506 g_1851 g_1854
 * writes: g_404 g_508 g_514 g_1539 g_1542 g_68 g_347 g_168 g_26 g_131 g_222 g_1018 g_787 g_2 g_1623 g_372 g_965 g_197 g_1716 g_1136 g_1470 g_260 g_224 g_45 g_150 g_1805 g_449 g_1851
 */
static const int64_t  func_82(const uint16_t  p_83, int32_t  p_84, int32_t  p_85, const uint32_t  p_86, uint64_t  p_87)
{ /* block id: 689 */
    int8_t l_1535 = 4L;
    int32_t ** const l_1536[3] = {&g_514[2][0][0],&g_514[2][0][0],&g_514[2][0][0]};
    int32_t *l_1538 = (void*)0;
    int8_t **l_1540 = (void*)0;
    int8_t **l_1541 = &g_1539[3][0][0];
    uint8_t l_1543 = 1UL;
    const uint16_t l_1572 = 65535UL;
    uint64_t **l_1582 = &g_742;
    int32_t l_1621[2];
    int16_t l_1626 = 0xB61EL;
    uint64_t l_1631 = 18446744073709551608UL;
    const int32_t l_1688[10][4] = {{0xF56C82E4L,(-1L),0xFAF389C4L,(-1L)},{0xEFB0BB23L,(-3L),0x3F428F02L,0xFAF389C4L},{(-1L),(-3L),(-3L),(-1L)},{(-3L),(-1L),0xEFB0BB23L,0xF56C82E4L},{(-3L),0xEFB0BB23L,(-3L),0x3F428F02L},{(-1L),0xF56C82E4L,0x3F428F02L,0x3F428F02L},{0xEFB0BB23L,0xEFB0BB23L,0xFAF389C4L,0xF56C82E4L},{0xF56C82E4L,(-1L),0xFAF389C4L,(-1L)},{0xEFB0BB23L,(-3L),0x3F428F02L,0xFAF389C4L},{(-1L),(-3L),(-3L),(-1L)}};
    uint64_t l_1787 = 18446744073709551615UL;
    uint32_t l_1798 = 4294967295UL;
    const int32_t * const *l_1813[1];
    const int32_t * const **l_1812 = &l_1813[0];
    const int32_t * const ***l_1811 = &l_1812;
    const int32_t * const ****l_1810 = &l_1811;
    uint64_t l_1857[9][10] = {{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL},{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL},{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL},{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL},{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL},{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL},{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL},{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL},{18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL,18446744073709551614UL,18446744073709551614UL,0x804D70E2E3F4FBCELL,18446744073709551612UL,0x804D70E2E3F4FBCELL}};
    int32_t *l_1858 = &g_2;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1621[i] = 1L;
    for (i = 0; i < 1; i++)
        l_1813[i] = &g_508;
lbl_1830:
    for (g_404 = 0; (g_404 >= 46); ++g_404)
    { /* block id: 692 */
        int16_t ***l_1521 = (void*)0;
        int16_t ****l_1520 = &l_1521;
        int32_t l_1530 = 0xF156E611L;
        int32_t l_1537 = 0x8518F1BEL;
        (*l_1520) = &g_1470[6][0];
        (*g_507) = l_1538;
        (*g_513) = &l_1537;
    }
    l_1543 |= (g_1542 &= (((*l_1541) = g_1539[3][0][0]) != &g_347));
    for (l_1535 = 1; (l_1535 != 16); l_1535++)
    { /* block id: 703 */
        const int8_t l_1550 = 0xDEL;
        int16_t *l_1553[9][10] = {{&g_298,&g_298,(void*)0,&g_298,&g_298,(void*)0,&g_298,&g_298,(void*)0,&g_298},{&g_298,&g_88,&g_88,&g_298,&g_88,&g_88,&g_298,&g_88,&g_88,&g_298},{&g_88,&g_298,&g_88,&g_88,&g_298,&g_88,&g_88,&g_298,&g_88,&g_88},{&g_298,&g_298,(void*)0,&g_298,&g_298,(void*)0,&g_298,&g_298,(void*)0,&g_298},{&g_298,&g_88,&g_88,&g_298,(void*)0,(void*)0,&g_88,(void*)0,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,(void*)0,&g_88,(void*)0,(void*)0,&g_88,(void*)0,(void*)0},{&g_88,&g_88,&g_298,&g_88,&g_88,&g_298,&g_88,&g_88,&g_298,&g_88},{&g_88,(void*)0,(void*)0,&g_88,(void*)0,(void*)0,&g_88,(void*)0,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,(void*)0,&g_88,(void*)0,(void*)0,&g_88,(void*)0,(void*)0}};
        int32_t l_1571[7] = {5L,5L,5L,5L,5L,5L,5L};
        int32_t l_1690 = 2L;
        uint64_t **l_1704 = &g_742;
        uint8_t l_1742 = 0x1AL;
        int16_t ***l_1754 = (void*)0;
        int64_t l_1825 = 0x3C9AE25F62E22E98LL;
        int32_t *****l_1849[5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_1849[i] = &g_361;
        for (g_68 = 0; (g_68 >= 0); g_68 -= 1)
        { /* block id: 706 */
            const int16_t *l_1554 = &g_655;
            int32_t l_1557 = 0xAECB10C9L;
            int64_t *l_1577[9][3] = {{&g_197[1][5][1],&g_197[3][4][0],(void*)0},{(void*)0,&g_197[5][5][1],&g_197[5][5][1]},{&g_197[1][5][1],&g_197[3][4][0],(void*)0},{(void*)0,&g_197[5][5][1],&g_197[5][5][1]},{&g_197[1][5][1],&g_197[3][4][0],(void*)0},{(void*)0,&g_197[5][5][1],&g_197[5][5][1]},{&g_197[1][5][1],&g_197[3][4][0],(void*)0},{(void*)0,&g_197[5][5][1],&g_197[5][5][1]},{&g_197[1][5][1],&g_197[3][4][0],(void*)0}};
            int64_t ** const l_1576[1][8][3] = {{{&l_1577[1][2],&l_1577[1][2],&l_1577[1][2]},{&l_1577[1][2],&l_1577[1][2],&l_1577[1][2]},{&l_1577[1][2],&l_1577[1][2],&l_1577[1][2]},{&l_1577[1][2],&l_1577[1][2],&l_1577[1][2]},{&l_1577[1][2],&l_1577[1][2],&l_1577[1][2]},{&l_1577[1][2],&l_1577[1][2],&l_1577[1][2]},{&l_1577[1][2],&l_1577[1][2],&l_1577[1][2]},{&l_1577[1][2],&l_1577[1][2],&l_1577[1][2]}}};
            int32_t l_1622 = (-6L);
            int32_t l_1627 = 0x61318196L;
            int32_t l_1628[4];
            int8_t l_1630 = 0L;
            int16_t ***l_1642[3][10][4] = {{{&g_1470[6][0],(void*)0,(void*)0,&g_1470[6][0]},{&g_1470[6][1],&g_1470[0][1],&g_1470[6][0],(void*)0},{&g_1470[0][1],(void*)0,&g_1470[6][0],&g_1470[6][0]},{&g_1470[6][0],&g_1470[6][1],(void*)0,&g_1470[6][0]},{&g_1470[2][0],(void*)0,&g_1470[2][0],(void*)0},{&g_1470[6][0],&g_1470[0][1],&g_1470[1][0],&g_1470[6][0]},{&g_1470[6][0],(void*)0,&g_1470[6][0],&g_1470[0][1]},{(void*)0,(void*)0,&g_1470[6][0],&g_1470[6][0]},{&g_1470[6][0],&g_1470[6][0],&g_1470[1][0],&g_1470[6][0]},{&g_1470[6][0],&g_1470[6][0],&g_1470[2][0],&g_1470[0][1]}},{{&g_1470[2][0],&g_1470[0][1],(void*)0,&g_1470[2][0]},{&g_1470[6][0],&g_1470[0][1],&g_1470[6][0],&g_1470[0][1]},{&g_1470[0][1],&g_1470[6][0],&g_1470[6][0],&g_1470[6][0]},{&g_1470[6][1],&g_1470[6][0],(void*)0,&g_1470[6][0]},{&g_1470[6][0],(void*)0,&g_1470[5][1],&g_1470[0][1]},{&g_1470[6][0],(void*)0,(void*)0,&g_1470[6][0]},{&g_1470[6][1],&g_1470[0][1],&g_1470[6][0],(void*)0},{&g_1470[0][1],(void*)0,&g_1470[6][0],&g_1470[6][0]},{&g_1470[6][0],&g_1470[6][1],(void*)0,&g_1470[6][0]},{&g_1470[2][0],(void*)0,&g_1470[2][0],(void*)0}},{{&g_1470[6][0],&g_1470[0][1],&g_1470[1][0],&g_1470[6][0]},{&g_1470[6][0],(void*)0,&g_1470[6][0],&g_1470[2][0]},{&g_1470[5][1],&g_1470[6][1],&g_1470[6][0],&g_1470[6][0]},{(void*)0,(void*)0,&g_1470[6][0],&g_1470[6][0]},{&g_1470[6][0],&g_1470[6][0],&g_1470[6][0],&g_1470[2][0]},{&g_1470[6][0],&g_1470[2][0],&g_1470[5][1],&g_1470[6][0]},{(void*)0,&g_1470[2][0],(void*)0,&g_1470[2][0]},{&g_1470[2][0],&g_1470[6][0],&g_1470[6][0],&g_1470[6][0]},{&g_1470[1][0],(void*)0,&g_1470[5][1],&g_1470[6][0]},{&g_1470[6][0],&g_1470[6][1],&g_1470[6][0],&g_1470[2][0]}}};
            int16_t ****l_1641 = &l_1642[1][3][2];
            int8_t l_1699 = 3L;
            int64_t ***l_1715 = (void*)0;
            uint32_t l_1734 = 0x90B236D0L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1628[i] = 0xA85B5151L;
            /*bef_stmt:197281*/
/*bef_stmt:197281*/
/*bef_stmt:197281*/
/*bef_stmt:197281*/
/*bef_stmt:197281*/
if ((safe_mod_func_uint64_t_u_u((Tag200(/*uint64_t:0:0:197281:e*/*g_742)), ((safe_mul_func_uint16_t_u_u((0UL == (1UL < /*TAG201:STA*/((int8_t)(realsmith_proxy_otru9((char)(l_1550)+(94), (int)(**g_574)+(-65531))+(int)(l_1550)+(int)(**g_574)-(65502))+l_1550)/*TAG201:END:l_1550*/)), ((0xFAE9C293E443EFE4LL ^ (safe_mod_func_int16_t_s_s((l_1553[0][2] != l_1554), (safe_sub_func_uint32_t_u_u((Tag202(/*int32_t:197913:210246:197281:e*/l_1557) < /*TAG203:STA*/((int8_t)(realsmith_proxy_sldhB((int)(l_1550)+(34), (char)(**g_574)+(-2), (int)(**g_574)+(-65532), (int)(l_1550)+(36), (int)(**g_574)+(-65534))+(long)(l_1550)+(long)(**g_574)-(131290))+l_1550)/*TAG203:END:l_1550*/), Tag204(/*uint32_t:0:0:197281:e*/g_260)))))) , 0xF505L))) && 1L))))
            { /* block id: 707 */
                int16_t l_1568 = 0x02F8L;
                int32_t l_1569[4];
                int32_t *l_1589[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2,&l_1571[5],&g_2,&l_1571[5],&g_2},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2,&l_1571[5],&g_2,&l_1571[5],&g_2},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2,&l_1571[5],&g_2,&l_1571[5],&g_2},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2,&l_1571[5],&g_2,&l_1571[5],&g_2}};
                int64_t ****l_1617[6] = {&g_1018,&g_1018,&g_1018,&g_1018,&g_1018,&g_1018};
                int16_t l_1629 = 0x3087L;
                uint16_t *l_1660 = &g_965;
                uint8_t *l_1661 = &g_1623[0];
                int32_t l_1700[7][7][1] = {{{0L},{0x150F7F3AL},{0L},{2L},{0L},{0x150F7F3AL},{0L}},{{0x150F7F3AL},{0L},{2L},{0L},{0x150F7F3AL},{0L},{0x150F7F3AL}},{{0L},{2L},{0L},{0x150F7F3AL},{0L},{0x150F7F3AL},{0L}},{{2L},{0L},{0x150F7F3AL},{0L},{0x150F7F3AL},{0L},{2L}},{{0L},{0x150F7F3AL},{0L},{0x150F7F3AL},{0L},{2L},{0L}},{{0x150F7F3AL},{0L},{0x150F7F3AL},{0L},{2L},{0L},{0x150F7F3AL}},{{0L},{0x150F7F3AL},{0L},{2L},{0L},{0x150F7F3AL},{0L}}};
                int32_t ****l_1703 = (void*)0;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1569[i] = 0x61803664L;
                /*bef_stmt:190981*/
/*bef_stmt:190981*/
/*bef_stmt:190981*/
if ((((safe_div_func_int8_t_s_s(Tag205(/*int32_t:210309:210309:190981:e*/p_84), ((**l_1541) &= (-1L)))) || Tag206(/*int32_t:197913:210246:190981:e*/l_1557)) , Tag207(/*const int8_t:210246:210309:190981:e*/l_1550)))
                { /* block id: 709 */
                    uint32_t l_1570 = 0xD79F6B44L;
                    const int64_t l_1587 = (-1L);
                    int32_t *l_1588 = &g_787[3][1][0];
                    int32_t *l_1615[7];
                    int64_t l_1616 = 0x4B0618C2BFDC2F1BLL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1615[i] = (void*)0;
                    for (g_168 = 0; (g_168 <= 1); g_168 += 1)
                    { /* block id: 712 */
                        uint16_t *l_1564 = (void*)0;
                        uint16_t *l_1565[6] = {&g_90,&g_90,&g_90,&g_90,&g_90,&g_90};
                        int i, j, k;
                        /*bef_stmt:185007*/
/*bef_stmt:185007*/
/*bef_stmt:185007*/
/*bef_stmt:185007*/
/*bef_stmt:185007*/
/*bef_stmt:185007*/
/*bef_stmt:185007*/
/*bef_stmt:185007*/
l_1571[5] = (l_1570 = (l_1569[3] &= ((((((*g_742) = 0x3D3367657279B1E1LL) , (!(((((((((((-5L) <= (safe_rshift_func_int16_t_s_u(g_197[(g_68 + 5)][(g_168 + 1)][g_168], (g_131 ^= ((7UL && (~Tag208(/*const uint32_t:210309:210309:185007:e*/p_86))) , 65529UL))))) <= (safe_mod_func_uint8_t_u_u(g_197[(g_68 + 5)][(g_168 + 1)][g_168], 0x3BL))) || /*TAG209:STA*/((uint64_t)(realsmith_proxy_lRQXQ((int)(p_87)+(1669219981), (int)(p_87)+(1669220091))+(int)(p_87)+(int)(p_86)+((int)(p_84)-(-1669220044))-(-1669220043))+p_87)/*TAG209:END:p_87*/) >= 0L) , Tag210(/*int16_t:196976:197913:185007:e*/l_1568)) <= /*TAG211:STA*/((uint64_t)(realsmith_7GBUi((int)(p_84)+(1669220142))+(int)(p_87)+((int)(p_84)-(-1669220044))+(int)(p_86)-(-1669219995))+p_87)/*TAG211:END:p_87*/) < /*TAG212:STA*/((uint32_t)(realsmith_proxy_crTAS((int)(p_86)+(92), (int)(p_84)+(1669220135))+(int)(p_86)+(int)(p_87)+((int)(p_84)-(-1669220044))-(-1669220049))+p_86)/*TAG212:END:p_86*/) < 0xC1L) , Tag213(/*const uint16_t:210309:210309:185007:e*/p_83)) < 0L))) <= (/*TAG214:STA*/((int64_t)(realsmith_ycCD0((int)(**g_625)+(-28), (int)(**g_625)+(-54), (int)(**g_625)+(-48), (int)(**g_625)+(-61))+(int)(**g_625)-(118))+**g_625)/*TAG214:END:**g_625*/)) != (Tag215(/*uint8_t:0:0:185007:e*/*g_910))) , (-1L))));
/*aft_stmt:185007*/
/*aft_stmt:185007*/
/*aft_stmt:185007*/
/*aft_stmt:185007*/
/*aft_stmt:185007*/
/*aft_stmt:185007*/
/*aft_stmt:185007*/
/*aft_stmt:185007*/
                        /*bef_stmt:185019*/
if (/*TAG216:STA*/((uint64_t)(realsmith_iWcJu((int)(p_87)+(1669220131))+(int)(p_87)+(int)(**g_625)+(int)(p_83)+((int)(p_84)-(-1669220044))+(int)(*g_742)-(251358090))+p_87)/*TAG216:END:p_87*/)
                            continue;
/*aft_stmt:185019*/
                    }
                    /*bef_stmt:185098*/
l_1589[5][4] = (Tag217(/*uint64_t:210309:210309:185098:e*/p_87) , l_1588);
/*aft_stmt:185098*/
                    /*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
/*bef_stmt:186055*/
if (((safe_rshift_func_int16_t_s_u((l_1571[3] = (((**l_1582) = /*TAG218:STA*/((int32_t)(realsmith_UWVAf((unsigned int)(p_84)+(-2625747241))+(int)(p_84)+((int)(p_87)-(-1669220044))+(int)(p_86)-(-1669220043))+p_84)/*TAG218:END:p_84*/) && (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((/*TAG219:STA*/((uint32_t)(realsmith_usYxG()+(int)(g_802[5][7][1])+(int)(**g_625)-(-883047998))+g_802[5][7][1])/*TAG219:END:g_802[5][7][1]*/ , (safe_add_func_int32_t_s_s((-10L), 0x6D54E71CL))), ((safe_rshift_func_int8_t_s_s(2L, 3)) , (!(safe_lshift_func_uint8_t_u_s((!Tag220(/*uint64_t:210309:210309:186055:e*/p_87)), ((((safe_sub_func_int32_t_s_s((+(safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((g_1018 = ((g_222 = ((0x714CC084L | (Tag221(/*const int8_t:210246:210309:186055:e*/l_1550) > (l_1557 = (safe_mul_func_uint8_t_u_u(Tag222(/*uint64_t:210309:210309:186055:e*/p_87), 0UL))))) & Tag223(/*int32_t:210309:210309:186055:e*/p_85))) , (void*)0)) == &l_1576[0][0][2]) ^ Tag224(/*uint32_t:0:0:186055:e*/g_260)), Tag225(/*int32_t:210309:210309:186055:e*/p_85))), Tag226(/*int32_t:210309:210309:186055:e*/p_85)))), Tag227(/*int32_t:210309:210309:186055:e*/p_85))) != (Tag228(/*int32_t:186061:196976:186055:e*/*l_1588))) , 0L) > 0xC811L))))))) , /*TAG229:STA*/((int32_t)(realsmith_proxy_WCGZ3((int)(p_83)+(-89))+((char)(l_1571[5])-(100))+(char)(p_87)+((char)(p_84)-(52))+((char)(g_802[5][7][1])-(76))+(char)(p_83)-(100))+l_1571[5])/*TAG229:END:l_1571[5]*/) & Tag230(/*const uint32_t:210309:210309:186055:e*/p_86)), (Tag231(/*uint8_t:0:0:186055:e*/**g_909)))), Tag232(/*int64_t:186061:196976:186055:e*/l_1616))))), (/*TAG233:STA*/((uint16_t)(realsmith_proxy_GJX0b((int)(g_802[5][7][1])+(883048116))+(char)(**g_574)+(char)(g_802[5][7][1])+((char)(**g_625)-(117))-(123))+**g_574)/*TAG233:END:**g_574*/))) ^ (Tag234(/*const uint16_t:0:0:186055:e*/**g_574))))
                    { /* block id: 726 */
                        (*l_1588) = ((void*)0 == l_1617[3]);
                        /*bef_stmt:186021*/
if (Tag235(/*const uint16_t:210309:210309:186021:e*/p_83))
                            break;
/*aft_stmt:186021*/
                    }
                    else
                    { /* block id: 729 */
                        /*bef_stmt:186050*/
return Tag236(/*int32_t:210246:210309:186050:e*/l_1571[2]);
/*aft_stmt:186050*/
                    }
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
/*aft_stmt:186055*/
                }
                else
                { /* block id: 732 */
                    int32_t l_1618 = 0x7E48E7ABL;
                    int32_t l_1620[9][9][3] = {{{(-1L),0x196BF1D5L,0L},{0x2D5356FAL,1L,4L},{0x69C32839L,(-1L),8L},{0xAB3D508BL,0L,0x99BEF6F6L},{(-2L),0x905005B3L,5L},{1L,(-1L),8L},{0x10223AC4L,3L,0x319FBC25L},{0x0121CADDL,4L,1L},{0x196BF1D5L,0L,(-4L)}},{{0x6FE669D4L,(-2L),0xD0B19051L},{0x00EEDB8AL,0L,0x00EEDB8AL},{0xEBFB67D8L,0xC7A07977L,1L},{0L,0x10223AC4L,4L},{0x569CDA1BL,0x7E10BA68L,5L},{(-1L),0xA2B6AAC1L,0xA0319F6FL},{0x569CDA1BL,0x2D5356FAL,0x5B7D227FL},{0L,0x7BC102F6L,(-9L)},{0xEBFB67D8L,8L,0xEE4C8EE1L}},{{0x00EEDB8AL,0L,0x4A16A37BL},{(-1L),(-8L),0L},{0x7BC102F6L,0xA2B6AAC1L,0L},{0xEBFB67D8L,0L,0xD0B19051L},{0L,1L,0x2703412BL},{0x99BEF6F6L,0xC87A0DB2L,0L},{(-1L),0x4A16A37BL,0x5F7DCCABL},{1L,1L,(-1L)},{(-4L),0x296CEED4L,(-1L)}},{{0L,(-1L),1L},{(-1L),(-1L),0xC85E1512L},{1L,0xEBFB67D8L,0L},{0L,0xA0319F6FL,5L},{8L,8L,0xE52357F1L},{(-9L),0L,5L},{(-6L),1L,0L},{4L,0xC43A69BCL,0xC85E1512L},{(-2L),0xBB9D8844L,1L}},{{1L,7L,(-1L)},{0xE52357F1L,0x047F4AA0L,(-1L)},{0L,(-4L),0x5F7DCCABL},{(-1L),8L,0L},{(-1L),0x5F7DCCABL,0x2703412BL},{0x371A921DL,0x7E10BA68L,0xD0B19051L},{0L,(-1L),0L},{0xD0B19051L,0L,0L},{(-9L),0L,0x4A16A37BL}},{{0xC87A0DB2L,0x0121CADDL,0x0121CADDL},{1L,4L,0x7DABC0E0L},{(-2L),8L,(-6L)},{(-1L),0xE10DEECEL,0x196BF1D5L},{0x156E44EDL,0xC7A07977L,0x047F4AA0L},{(-1L),0xE10DEECEL,0L},{1L,8L,0x99BEF6F6L},{0xA2B6AAC1L,4L,(-1L)},{0L,0x0121CADDL,0x156E44EDL}},{{0xA0319F6FL,0L,0x10223AC4L},{4L,0L,5L},{0xFD320CFBL,(-1L),1L},{(-9L),0x7E10BA68L,0x71C36480L},{0x319FBC25L,0x5F7DCCABL,0xCDEEBF9AL},{1L,8L,0x569CDA1BL},{0xC4DEAC0BL,(-4L),0L},{0x0121CADDL,0x047F4AA0L,0L},{0x69C32839L,7L,(-9L)}},{{0xEA678011L,0xBB9D8844L,0xEA678011L},{0x4A16A37BL,0xC43A69BCL,0x319FBC25L},{0xBB9D8844L,1L,(-1L)},{3L,0L,(-2L)},{0xA8A22DFCL,8L,0xEE4C8EE1L},{3L,0xA0319F6FL,(-1L)},{0xBB9D8844L,0xEBFB67D8L,0x6FE669D4L},{0x4A16A37BL,(-1L),0x7BC102F6L},{0xEA678011L,(-1L),0L}},{{0x69C32839L,0x296CEED4L,(-1L)},{0x0121CADDL,1L,8L},{0xC4DEAC0BL,0x4A16A37BL,0L},{1L,0xC87A0DB2L,(-1L)},{0x319FBC25L,1L,0xA0319F6FL},{(-9L),0L,0xDA9BF706L},{0xFD320CFBL,0xA2B6AAC1L,(-4L)},{4L,(-8L),8L},{0xA0319F6FL,0x2703412BL,0xFD320CFBL}}};
                    int i, j, k;
                    for (g_2 = 0; (g_2 <= 0); g_2 += 1)
                    { /* block id: 735 */
                        int16_t l_1619 = 0x4EA3L;
                        g_1623[0]++;
                    }
                    /*bef_stmt:190970*/
if (Tag237(/*int32_t:210309:210309:190970:e*/p_85))
                        continue;
/*aft_stmt:190970*/
                }
/*aft_stmt:190981*/
/*aft_stmt:190981*/
/*aft_stmt:190981*/
                l_1631--;
                /*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
/*bef_stmt:191716*/
l_1557 = (l_1622 = (safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((l_1628[1] = 4L))) > (safe_lshift_func_uint16_t_u_s((((void*)0 != l_1641) && ((safe_rshift_func_uint16_t_u_s(((Tag238(/*uint64_t:0:0:191716:e*/*g_742)) , ((0xD52084A7L | (safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(Tag239(/*int32_t:210309:210309:191716:e*/p_84), ((*l_1661) = (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((**g_909)++), (safe_mul_func_int16_t_s_s(((/*TAG240:STA*/((int32_t)(realsmith_FIFD2((long)(p_87)+(1669220135))+(long)(l_1571[5])+(long)(*g_742)+(long)(l_1571[2])+(long)(p_87)-(-1702647502))+l_1571[5])/*TAG240:END:l_1571[5]*/ & (safe_add_func_int32_t_s_s(((+(/*TAG241:STA*/((uint32_t)(realsmith_Uyzpc((unsigned int)(p_87)+(-2625747178))+(int)(p_86)+(int)(**g_574)+(int)(p_83)+(int)(p_84)+((int)(p_87)-(-1669220044))-(-1669154509))+p_86)/*TAG241:END:p_86*/ ^ ((*l_1660) ^= ((255UL ^ /*TAG242:STA*/((uint16_t)(realsmith_xnm8N((int)(p_84)+(1669220120))+(int)(p_83)+(int)(p_84)+(int)(**g_574)-(-1669154508))+p_83)/*TAG242:END:p_83*/) , (Tag243(/*const uint16_t:0:0:191716:e*/*g_575)))))) == 0UL), 0xC3C32F36L))) ^ 0L), 1UL)))) , /*TAG244:STA*/((uint32_t)(realsmith_proxy_znic5((int)(p_83)+(-42))+(int)(p_86)+(int)(**g_574)+(int)(*g_742)+(int)(p_83)-(-1669154509))+p_86)/*TAG244:END:p_86*/), Tag245(/*int32_t:210309:210309:191716:e*/p_84)))))), (/*TAG246:STA*/((int64_t)(realsmith_3zvn6((int)(**g_574)+(-65462), (int)(**g_574)+(-65464))+(int)(**g_625)+(int)(**g_574)+(int)(*g_575)+(int)(*g_742)-(-1669088855))+**g_625)/*TAG246:END:**g_625*/)))) >= (-1L))), 13)) != Tag247(/*int32_t:210309:210309:191716:e*/p_85))), 12))), /*TAG248:STA*/((uint64_t)(realsmith_Bp620((long)(p_84)+(1669220140), (long)(**g_625)+(-79))+(long)(p_87)+(long)(p_86)+(long)(p_83)+(long)(**g_625)+(long)(p_84)-(-3338439932))+p_87)/*TAG248:END:p_87*/)) == 0x9E185E82L), 1UL)));
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
/*aft_stmt:191716*/
                /*bef_stmt:196970*/
if (Tag249(/*const uint16_t:210309:210309:196970:e*/p_83))
                { /* block id: 747 */
                    int32_t ***l_1662 = &g_44;
                    uint32_t *l_1663 = (void*)0;
                    uint32_t *l_1664[6][10] = {{(void*)0,&g_1542,&g_404,&g_168,&g_168,&g_404,&g_1542,(void*)0,(void*)0,&g_1542},{(void*)0,&g_168,&g_1542,&g_1542,&g_168,(void*)0,&g_404,&g_404,(void*)0,&g_168},{&g_168,&g_1542,&g_1542,&g_168,(void*)0,&g_404,&g_404,(void*)0,&g_168,&g_1542},{&g_168,&g_168,&g_404,&g_1542,(void*)0,(void*)0,&g_1542,&g_404,&g_168,&g_168},{(void*)0,&g_1542,&g_404,&g_168,&g_168,&g_404,&g_1542,(void*)0,(void*)0,&g_1542},{(void*)0,&g_168,&g_1542,&g_1542,&g_168,(void*)0,&g_404,&g_404,(void*)0,&g_168}};
                    int64_t ** const *l_1666 = &g_1019;
                    int64_t ** const **l_1665[2][8][7] = {{{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,(void*)0,&l_1666},{(void*)0,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,(void*)0,&l_1666,(void*)0,&l_1666,&l_1666,&l_1666},{&l_1666,(void*)0,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666}},{{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,(void*)0,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{(void*)0,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,(void*)0},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,(void*)0,&l_1666,&l_1666,&l_1666,&l_1666,(void*)0},{&l_1666,(void*)0,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666}}};
                    int16_t ****l_1673 = &l_1642[1][3][2];
                    int i, j, k;
                    /*bef_stmt:194892*/
/*bef_stmt:194892*/
/*bef_stmt:194892*/
/*bef_stmt:194892*/
l_1571[5] = (((**l_1541) = (((*l_1660) = (((Tag250(/*int64_t:0:0:194892:e*/*g_626)) & ((l_1627 &= Tag251(/*int32_t:210246:210309:194892:e*/l_1571[5])) <= ((((l_1628[3] = (l_1662 != (void*)0)) >= ((-1L) > 0xA5L)) , &g_1018) == l_1665[0][7][3]))) | 0x490912FCL)) && (Tag252(/*const uint16_t:0:0:194892:e*/**g_574)))) | (Tag253(/*int32_t:196399:196976:194892:e*/***l_1662)));
/*aft_stmt:194892*/
/*aft_stmt:194892*/
/*aft_stmt:194892*/
/*aft_stmt:194892*/
                    for (g_2 = 0; (g_2 >= 0); g_2 -= 1)
                    { /* block id: 755 */
                        int32_t l_1689 = 0xE20ECD64L;
                        int i, j, k;
                        /*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
/*bef_stmt:195750*/
l_1690 ^= (safe_div_func_uint16_t_u_u((((((Tag254(/*int32_t:196399:196976:195750:e*/***l_1662)) != (safe_rshift_func_int16_t_s_u((Tag255(/*int32_t:210309:210309:195750:e*/p_84) ^ (Tag256(/*uint8_t:0:0:195750:e*/*g_910))), (&g_1471 != (((safe_add_func_uint8_t_u_u(((((((*l_1661) = ((void*)0 != l_1673)) , ((safe_mul_func_uint16_t_u_u((((**l_1541) |= ((safe_sub_func_int64_t_s_s(Tag257(/*int32_t:210309:210309:195750:e*/p_85), 0x807CF9990CE452CELL)) ^ ((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(Tag258(/*const uint32_t:210309:210309:195750:e*/p_86), 0L)), Tag259(/*int32_t:210309:210309:195750:e*/p_84))), Tag260(/*int32_t:210309:210309:195750:e*/p_85))), Tag261(/*int32_t:210309:210309:195750:e*/p_84))), 1UL)) >= Tag262(/*int32_t:210246:210309:195750:e*/l_1571[2])))) <= 0x01L), Tag263(/*const int32_t:210309:210309:195750:e*/l_1688[8][2]))) || 0x8874L)) > (Tag264(/*int32_t:0:0:195750:e*/*g_45))) , 0L) > Tag265(/*int32_t:195779:196399:195750:e*/l_1689)), 0x16L)) >= 0x10L) , &g_1471))))) > (-6L)) > Tag266(/*int32_t:210309:210309:195750:e*/p_85)) || 0xED0CA171L), (Tag267(/*const uint16_t:0:0:195750:e*/*g_575))));
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
/*aft_stmt:195750*/
                        /*bef_stmt:195775*/
if (Tag268(/*uint64_t:210309:210309:195775:e*/p_87))
                            break;
/*aft_stmt:195775*/
                    }
                    /*bef_stmt:196393*/
/*bef_stmt:196393*/
/*bef_stmt:196393*/
/*bef_stmt:196393*/
/*bef_stmt:196393*/
/*bef_stmt:196393*/
/*bef_stmt:196393*/
/*bef_stmt:196393*/
/*bef_stmt:196393*/
/*bef_stmt:196393*/
l_1622 &= (safe_mul_func_int16_t_s_s(((l_1557 = 0UL) != (safe_mul_func_int16_t_s_s(Tag269(/*uint64_t:210309:210309:196393:e*/p_87), (safe_add_func_uint16_t_u_u((Tag270(/*const int8_t:210246:210309:196393:e*/l_1550) , (safe_add_func_int16_t_s_s((l_1700[6][5][0] = Tag271(/*int8_t:197913:210246:196393:e*/l_1699)), (((((((*l_1660) = ((l_1627 &= Tag272(/*int32_t:210246:210309:196393:e*/l_1571[5])) <= (safe_sub_func_int64_t_s_s((l_1628[1] &= ((*g_626) = ((void*)0 != l_1703))), (l_1704 != l_1582))))) > (Tag273(/*const uint16_t:0:0:196393:e*/*g_575))) >= Tag274(/*int32_t:210246:210309:196393:e*/l_1571[5])) && (Tag275(/*int32_t:196399:196976:196393:e*/***l_1662))) , Tag276(/*uint16_t:0:0:196393:e*/g_965)) != (Tag277(/*int32_t:196399:196976:196393:e*/***l_1662)))))), 0x9B7DL))))), (Tag278(/*const uint16_t:0:0:196393:e*/**g_574))));
/*aft_stmt:196393*/
/*aft_stmt:196393*/
/*aft_stmt:196393*/
/*aft_stmt:196393*/
/*aft_stmt:196393*/
/*aft_stmt:196393*/
/*aft_stmt:196393*/
/*aft_stmt:196393*/
/*aft_stmt:196393*/
/*aft_stmt:196393*/
                }
                else
                { /* block id: 768 */
                    const int64_t * const ***l_1717 = &g_1716;
                    uint16_t l_1718 = 0xC6F3L;
                    /*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
/*bef_stmt:196961*/
l_1627 = (((Tag279(/*int8_t:197913:210246:196961:e*/l_1630) && (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((/*TAG280:STA*/((int32_t)(realsmith_proxy_tBWkp((int)(l_1688[8][2])+(-1061326656), (int)(p_84)+(1669219957))+(int)(p_84)+(int)(l_1688[8][2])+((int)(p_87)-(-1669220044))-(-607893449))+p_84)/*TAG280:END:p_84*/ < (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(6L, 12)) , (void*)0) == (void*)0), (Tag281(/*const uint16_t:210309:210309:196961:e*/p_83) , ((/*TAG282:STA*/((uint32_t)(realsmith_proxy_RjpGL((int)(**g_574)+(-65617), (int)(*g_575)+(-65501))+(int)(g_802[4][1][1])+(int)(**g_574)+(int)(*g_575)-(131067))+g_802[4][1][1])/*TAG282:END:g_802[4][1][1]*/ , ((l_1715 = (void*)0) != ((*l_1717) = g_1716))) && (Tag283(/*uint64_t:0:0:196961:e*/*g_742)))))), (Tag284(/*const uint16_t:0:0:196961:e*/*g_575))))) ^ Tag285(/*uint16_t:196965:196976:196961:e*/l_1718)) ^ /*TAG286:STA*/((uint16_t)(realsmith_proxy_QJPAD((char)(*g_742)+(-52), (char)(l_1630)+(-5), (int)(*g_742)+(1669220043))+(int)(l_1718)+(int)(*g_742)+(int)(l_1630)+((int)(p_84)-(-1669220044))+(int)(l_1699)-(-1669169110))+l_1718)/*TAG286:END:l_1718*/) , Tag287(/*int32_t:210309:210309:196961:e*/p_85)), Tag288(/*int8_t:197913:210246:196961:e*/l_1630))), Tag289(/*int32_t:210309:210309:196961:e*/p_85)))) , (/*TAG290:STA*/((int64_t)(realsmith_qoMBT((int)(*g_575)+(-65524))+(int)(**g_625)+(int)(*g_742)+(int)(*g_575)+(int)(g_802[4][1][1])+(int)(**g_574)-(-1669088860))+**g_625)/*TAG290:END:**g_625*/)) , 0xA5A53939L);
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
/*aft_stmt:196961*/
                }
/*aft_stmt:196970*/
            }
            else
            { /* block id: 773 */
                uint64_t l_1725 = 0xEAAAB185BD3A84DALL;
                /*bef_stmt:197260*/
/*bef_stmt:197260*/
/*bef_stmt:197260*/
/*bef_stmt:197260*/
/*bef_stmt:197260*/
/*bef_stmt:197260*/
/*bef_stmt:197260*/
/*bef_stmt:197260*/
l_1725 = ((safe_div_func_uint32_t_u_u(Tag291(/*uint64_t:210309:210309:197260:e*/p_87), ((Tag292(/*uint32_t:0:0:197260:e*/g_404) , Tag293(/*int32_t:197913:210246:197260:e*/l_1627)) && Tag294(/*const uint32_t:210309:210309:197260:e*/p_86)))) >= (safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(Tag295(/*const uint32_t:210309:210309:197260:e*/p_86), 3)) <= ((Tag296(/*int32_t:210309:210309:197260:e*/p_84) > 0xC2L) >= (((**l_1541) |= Tag297(/*int32_t:197913:210246:197260:e*/l_1622)) != Tag298(/*const uint32_t:210309:210309:197260:e*/p_86)))), 0xEECAL)));
/*aft_stmt:197260*/
/*aft_stmt:197260*/
/*aft_stmt:197260*/
/*aft_stmt:197260*/
/*aft_stmt:197260*/
/*aft_stmt:197260*/
/*aft_stmt:197260*/
/*aft_stmt:197260*/
                /*bef_stmt:197272*/
if (Tag299(/*uint64_t:210309:210309:197272:e*/p_87))
                    continue;
/*aft_stmt:197272*/
            }
/*aft_stmt:197281*/
/*aft_stmt:197281*/
/*aft_stmt:197281*/
/*aft_stmt:197281*/
/*aft_stmt:197281*/
            for (g_1136 = 0; (g_1136 <= 0); g_1136 += 1)
            { /* block id: 780 */
                int32_t l_1735 = 1L;
                int32_t l_1736[6] = {0xDD9D8F2AL,0x05451EB4L,0x05451EB4L,0xDD9D8F2AL,0x05451EB4L,0x05451EB4L};
                int i;
                /*bef_stmt:197896*/
/*bef_stmt:197896*/
/*bef_stmt:197896*/
/*bef_stmt:197896*/
/*bef_stmt:197896*/
/*bef_stmt:197896*/
/*bef_stmt:197896*/
/*bef_stmt:197896*/
/*bef_stmt:197896*/
l_1736[2] = ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(/*TAG300:STA*/((uint64_t)(realsmith_proxy_G9gel((char)(*g_575)+(-73), (char)(*g_575)+(40), (unsigned long)(p_83)+(38))+(unsigned long)(*g_575)+(unsigned long)(p_83)+(unsigned long)(**g_625)-(65652))+p_87)/*TAG300:END:p_87*/, 13)) , ((g_1470[4][0] = &l_1553[0][2]) == (void*)0)), (((/*TAG301:STA*/((uint64_t)(realsmith_proxy_WwBhM((char)(p_87)+(-82), (char)(p_87)+(19), (int)(p_87)+(1669220136))+(int)(p_87)-(-1669220043))+p_87)/*TAG301:END:p_87*/ ^ ((*g_505) == (void*)0)) , ((((safe_mod_func_uint8_t_u_u((Tag302(/*uint32_t:197913:210246:197896:e*/l_1734) != ((/*TAG303:STA*/((uint16_t)(realsmith_proxy_g2qx5((unsigned int)(**g_574)+(-65541), (unsigned int)(*g_575)+(-65547))+(unsigned int)(**g_574)+(unsigned int)(*g_742)+(unsigned int)(*g_575)+(unsigned int)(**g_625)-(2625878471))+**g_574)/*TAG303:END:**g_574*/) <= 0x6FB4L)), (Tag304(/*uint8_t:0:0:197896:e*/*g_910)))) != 18446744073709551615UL) , Tag305(/*int32_t:210246:210309:197896:e*/l_1571[4])) | Tag306(/*int32_t:210309:210309:197896:e*/p_84))) > Tag307(/*int32_t:210309:210309:197896:e*/p_85)))) >= /*TAG308:STA*/((int32_t)(realsmith_proxy_2YQIg((char)(l_1622)+(43))+(int)(l_1735)+(int)(p_87)+(int)(l_1622)+(int)(**g_625)-(-1669219925))+l_1735)/*TAG308:END:l_1735*/);
/*aft_stmt:197896*/
/*aft_stmt:197896*/
/*aft_stmt:197896*/
/*aft_stmt:197896*/
/*aft_stmt:197896*/
/*aft_stmt:197896*/
/*aft_stmt:197896*/
/*aft_stmt:197896*/
/*aft_stmt:197896*/
            }
        }
        for (g_260 = 24; (g_260 != 45); g_260 = safe_add_func_uint64_t_u_u(g_260, 3))
        { /* block id: 787 */
            int32_t *l_1765 = &g_68;
            int32_t l_1767 = 0x57F04881L;
            int32_t l_1770 = 0L;
            int32_t l_1771 = 0x30EDF632L;
            int32_t l_1774 = 0xC0EC2C14L;
            int32_t l_1776 = 0xB72EFB54L;
            int32_t l_1780 = (-1L);
            int32_t l_1781 = (-1L);
            int32_t l_1782 = 0xF747B831L;
            int32_t l_1784 = 0x05AC76BEL;
            for (p_85 = 0; (p_85 != (-3)); p_85--)
            { /* block id: 790 */
                int32_t l_1741 = 0xE63CE16DL;
                int32_t *l_1745 = &l_1690;
                int32_t l_1766 = 9L;
                int32_t l_1768 = 0x6EC68C63L;
                int32_t l_1769 = 0xAE6EE0E2L;
                int32_t l_1772 = 0x82C2E9D1L;
                int32_t l_1773 = 4L;
                int32_t l_1775 = 0x8AC7B29AL;
                int32_t l_1777 = 0x13988D5EL;
                int32_t l_1778 = 1L;
                int32_t l_1779 = 0L;
                int32_t l_1783 = 0x26D2A832L;
                int32_t l_1785 = 3L;
                int32_t l_1786 = (-4L);
                int32_t *****l_1814[6][2][7] = {{{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361}},{{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361}},{{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361}},{{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361}},{{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361}},{{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361}}};
                uint64_t **l_1826 = &g_742;
                int i, j, k;
                for (g_404 = 3; (g_404 <= 8); g_404 += 1)
                { /* block id: 793 */
                    /*bef_stmt:200106*/
if ((Tag309(/*int32_t:0:0:200106:e*/*g_45)))
                        break;
/*aft_stmt:200106*/
                    l_1742++;
                    for (g_224 = 3; (g_224 <= 8); g_224 += 1)
                    { /* block id: 798 */
                        (*g_513) = l_1745;
                        (***g_505) = l_1745;
                    }
                }
                for (l_1631 = 0; (l_1631 <= 33); ++l_1631)
                { /* block id: 805 */
                    int16_t * const *l_1756[10] = {&g_1471,&l_1553[1][5],&l_1553[1][5],&g_1471,&l_1553[1][5],&l_1553[1][5],&g_1471,&l_1553[1][5],&l_1553[1][5],&g_1471};
                    int16_t * const **l_1755 = &l_1756[9];
                    uint32_t *l_1757 = &g_404;
                    int32_t l_1763[1];
                    uint64_t l_1764 = 0xAA51A866F6EB8A6DLL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1763[i] = 0xEE691277L;
                    /*bef_stmt:201354*/
/*bef_stmt:201354*/
/*bef_stmt:201354*/
/*bef_stmt:201354*/
/*bef_stmt:201354*/
/*bef_stmt:201354*/
/*bef_stmt:201354*/
/*bef_stmt:201354*/
/*bef_stmt:201354*/
l_1571[5] = ((safe_div_func_int64_t_s_s(/*TAG310:STA*/((int32_t)(realsmith_proxy_QcPmb((char)(p_87)+(-72), (char)(p_86)+(49))+(int)(p_84)+(int)(p_86)+(int)(g_404)+((int)(p_87)-(-1669220044))-(-1669219808))+p_84)/*TAG310:END:p_84*/, (Tag311(/*uint64_t:0:0:201354:e*/*g_742)))) , (safe_add_func_int64_t_s_s((-10L), ((((safe_lshift_func_int8_t_s_s((((((*l_1757) |= (l_1754 == l_1755)) , (safe_sub_func_uint32_t_u_u((((/*TAG312:STA*/((uint32_t)(realsmith_IVQmE()+(int)(p_86)+(int)(p_87)+((int)(p_84)-(-1669220044))+(int)(**g_574)-(-1669154508))+p_86)/*TAG312:END:p_86*/ ^ (Tag313(/*const uint16_t:0:0:201354:e*/**g_574))) , ((!((p_85 ^ ((--(**l_1582)) , (0x96L <= (-3L)))) != /*TAG314:STA*/((int32_t)(realsmith_3nwmb((int)(p_86)+(36))+(int)(l_1763[0])+(int)(p_86)+(int)(**g_574)-(-295038345))+l_1763[0])/*TAG314:END:l_1763[0]*/)) , (/*TAG315:STA*/((uint16_t)(realsmith_proxy_7RMTJ((int)(**g_574)+(-65623), (int)(**g_574)+(-65458), (int)(**g_574)+(-65528))+(int)(**g_574)-(65447))+**g_574)/*TAG315:END:**g_574*/))) > (Tag316(/*const uint16_t:0:0:201354:e*/**g_574))), 0x3636E2D4L))) ^ /*TAG317:STA*/((uint64_t)(realsmith_proxy_olw6W((char)(p_87)+(-36))+(int)(l_1764)+(int)(**g_574)+(int)(p_86)+(int)(p_87)-(-1821490270))+l_1764)/*TAG317:END:l_1764*/) != 1L), 3)) , 0xDED30605CEB8D5BBLL) || p_85) >= /*TAG318:STA*/((uint32_t)(realsmith_hFQC3((int)(p_84)+(1669220045), (int)(p_84)+(1669220128), (int)(p_84)+(1669220123))+(int)(p_86)+(int)(p_84)+(int)(**g_574)-(-1669154508))+p_86)/*TAG318:END:p_86*/))));
/*aft_stmt:201354*/
/*aft_stmt:201354*/
/*aft_stmt:201354*/
/*aft_stmt:201354*/
/*aft_stmt:201354*/
/*aft_stmt:201354*/
/*aft_stmt:201354*/
/*aft_stmt:201354*/
/*aft_stmt:201354*/
                    (*g_44) = l_1765;
                    /*bef_stmt:201391*/
if (/*TAG319:STA*/((uint32_t)(realsmith_UTlgl((int)(p_87)+(1669220045), (long)(*g_45)+(1), (int)(*g_45)+(8))+(int)(p_86)+(int)(p_84)+((int)(p_87)-(-1669220044))+(int)(*g_45)-(-1669220043))+p_86)/*TAG319:END:p_86*/)
                        break;
/*aft_stmt:201391*/
                }
                l_1787++;
                for (g_150 = 17; (g_150 == 46); ++g_150)
                { /* block id: 815 */
                    int16_t l_1792 = 0x4AC8L;
                    int32_t l_1793 = 1L;
                    int32_t l_1794 = 0x8878A9C4L;
                    int32_t l_1795 = 0x6951D946L;
                    int32_t l_1797[4][7][8] = {{{0xE59459ACL,0x496C55BAL,(-1L),(-1L),0x2EA7877EL,(-1L),6L,0x934CD18AL},{0x706F33B3L,(-6L),0x934CD18AL,0xDB29D616L,(-3L),1L,0x567AA9FDL,0xF4A1487AL},{0xA9EDDF64L,0x7690A9A0L,0x6EEDF344L,0x95791717L,0x4BC28641L,0xDB29D616L,0x01D13ED7L,4L},{1L,0xE78C3EFBL,0x6170F2DDL,0x0B351BE4L,1L,0x4BC28641L,0x496C55BAL,0x496C55BAL},{0L,0x01D13ED7L,0x3194A7C2L,0x3194A7C2L,0x01D13ED7L,0L,0xDB29D616L,0x2EA7877EL},{0xDB29D616L,0xCE4DBE2CL,0x496C55BAL,0xF4A1487AL,0x9E3F5BFBL,0xE78C3EFBL,0x64FBFA06L,(-1L)},{(-1L),0x3194A7C2L,0x8F5BBBE9L,0xF4A1487AL,(-8L),0xACD13FD7L,0x706F33B3L,0x2EA7877EL}},{{1L,(-8L),0L,0x3194A7C2L,0x77E70238L,0x6EEDF344L,(-3L),0x496C55BAL},{0x95791717L,0x64FBFA06L,0x01D13ED7L,0x0B351BE4L,0xACD13FD7L,0xC01063D5L,(-8L),4L},{0x48D0D677L,0x6EEDF344L,0xA9EDDF64L,0x95791717L,0x48274116L,0xF4A1487AL,0L,0xF4A1487AL},{(-6L),0xDB29D616L,0xE59459ACL,0xDB29D616L,(-6L),0x2EA7877EL,0x9455EA14L,0x934CD18AL},{0L,0x0B351BE4L,4L,(-1L),0x8F5BBBE9L,0x9455EA14L,0x6170F2DDL,0xDB29D616L},{6L,0x77E70238L,4L,0xE59459ACL,0xF4A1487AL,9L,0x9455EA14L,0xE78C3EFBL},{0x8F5BBBE9L,(-1L),0xE59459ACL,0x934CD18AL,0xCE4DBE2CL,0xA9EDDF64L,0L,(-6L)}},{{0xFB7AD583L,0x9E3F5BFBL,0x4BC28641L,0xC01063D5L,0xA9EDDF64L,(-1L),0x9455EA14L,0xACD13FD7L},{0x567AA9FDL,0x934CD18AL,1L,0x496C55BAL,0x48D0D677L,0xCE4DBE2CL,0xCE4DBE2CL,0x48D0D677L},{9L,0x01D13ED7L,0x01D13ED7L,9L,2L,0x8F5BBBE9L,0x496C55BAL,0xFB7AD583L},{0x77E70238L,0xFB7AD583L,0x9E3F5BFBL,(-1L),(-6L),0L,0xA9EDDF64L,0xCE4DBE2CL},{0x48D0D677L,0xFB7AD583L,(-8L),0x64FBFA06L,(-1L),0x8F5BBBE9L,0x95791717L,1L},{0x9455EA14L,0x01D13ED7L,0x77E70238L,0xE78C3EFBL,0x48274116L,0xCE4DBE2CL,(-8L),(-1L)},{0L,0x934CD18AL,0xACD13FD7L,2L,1L,(-1L),1L,0L}},{{0x01D13ED7L,0x9E3F5BFBL,0x48274116L,1L,0x7690A9A0L,0x4BC28641L,0x7690A9A0L,1L},{(-6L),0x8F5BBBE9L,(-6L),0x48D0D677L,0L,0xF4A1487AL,(-1L),(-1L)},{0xA9EDDF64L,0xE78C3EFBL,0x8F5BBBE9L,0x7690A9A0L,0x95791717L,0L,0L,0x6170F2DDL},{0xA9EDDF64L,6L,0xF4A1487AL,0x01D13ED7L,0L,0x567AA9FDL,0x4BC28641L,9L},{(-6L),0x95791717L,0xCE4DBE2CL,0x706F33B3L,0x7690A9A0L,1L,0x6170F2DDL,0xF4A1487AL},{0x01D13ED7L,0x48274116L,0x64FBFA06L,0x6EEDF344L,1L,0x934CD18AL,0xF4A1487AL,0x77E70238L},{0L,0xA9EDDF64L,(-1L),(-1L),0x48274116L,0x48274116L,(-1L),(-1L)}}};
                    int i, j, k;
                    l_1798++;
                    if (p_85)
                        continue;
                    for (g_372 = 24; (g_372 < 39); g_372 = safe_add_func_int8_t_s_s(g_372, 1))
                    { /* block id: 820 */
                        int16_t ****l_1803 = (void*)0;
                        int16_t ****l_1804[8][8] = {{&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754},{&l_1754,&l_1754,(void*)0,(void*)0,&l_1754,&l_1754,&l_1754,(void*)0},{&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754},{&l_1754,&l_1754,(void*)0,&l_1754,&l_1754,&l_1754,&l_1754,(void*)0},{&l_1754,&l_1754,&l_1754,(void*)0,&l_1754,&l_1754,&l_1754,&l_1754},{&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754},{&l_1754,&l_1754,(void*)0,(void*)0,&l_1754,&l_1754,&l_1754,(void*)0},{&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754,&l_1754}};
                        int64_t l_1807 = (-9L);
                        int32_t l_1827[4][4][5] = {{{(-1L),0x4B6FCD91L,(-4L),0x4B6FCD91L,(-1L)},{(-1L),0x4B6FCD91L,0x26D20DAFL,(-1L),0L},{0L,(-6L),(-4L),(-1L),0L},{(-1L),0x53FFF9AEL,0x4CCA22CAL,0x13011874L,1L}},{{1L,0L,0x506052CAL,1L,3L},{1L,0x53FFF9AEL,0x506052CAL,0xE3CC3EB9L,(-6L)},{(-1L),0x3A4F3AC8L,0x4CCA22CAL,1L,(-6L)},{3L,0x13011874L,8L,0x13011874L,3L}},{{(-1L),0x13011874L,0x6622CFD7L,0L,1L},{1L,0x3A4F3AC8L,8L,0L,0x4B6FCD91L},{1L,0x53FFF9AEL,0x4CCA22CAL,0x13011874L,1L},{1L,0L,0x506052CAL,1L,3L}},{{1L,0x53FFF9AEL,0x506052CAL,0xE3CC3EB9L,(-6L)},{(-1L),0x3A4F3AC8L,0x4CCA22CAL,1L,(-6L)},{3L,0x13011874L,8L,0x13011874L,3L},{(-1L),0x13011874L,0x6622CFD7L,0L,1L}}};
                        int i, j, k;
                        g_1805 = &g_1470[6][0];
                        /*bef_stmt:207291*/
if (Tag320(/*int32_t:210309:210309:207291:e*/p_84))
                            continue;
/*aft_stmt:207291*/
                        /*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
/*bef_stmt:208050*/
l_1827[1][1][3] |= (((((+(Tag321(/*int64_t:208056:209913:208050:e*/l_1807) && (safe_sub_func_uint64_t_u_u((l_1810 == (l_1814[2][1][5] = &g_361)), ((Tag322(/*int64_t:208056:209913:208050:e*/l_1807) & ((((safe_add_func_uint8_t_u_u(((((((((Tag323(/*int32_t:210309:210309:208050:e*/p_84) , (safe_rshift_func_int16_t_s_u(Tag324(/*int32_t:210309:210309:208050:e*/p_84), (Tag325(/*int32_t:209932:209962:208050:e*/*l_1745))))) , ((safe_mod_func_uint8_t_u_u(0x10L, (safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(Tag326(/*int64_t:210246:210309:208050:e*/l_1825), (Tag327(/*uint8_t:0:0:208050:e*/**g_909)))) && (Tag328(/*int32_t:209962:210246:208050:e*/*l_1765))), (Tag329(/*const uint16_t:0:0:208050:e*/**g_574)))))) | Tag330(/*int32_t:210246:210309:208050:e*/l_1571[0]))) , l_1826) == &g_742) , Tag331(/*const uint32_t:210309:210309:208050:e*/p_86)) , Tag332(/*uint64_t:210309:210309:208050:e*/p_87)) != 0x7FAFE78E67FC1779LL) && (Tag333(/*uint8_t:0:0:208050:e*/*g_910))), 0UL)) <= Tag334(/*const uint32_t:210309:210309:208050:e*/p_86)) , (void*)0) == (void*)0)) , Tag335(/*const uint16_t:210309:210309:208050:e*/p_83)))))) , 0x5863L) < (Tag336(/*int32_t:209962:210246:208050:e*/*l_1765))) | (-9L)) <= (Tag337(/*int32_t:209962:210246:208050:e*/*l_1765)));
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
/*aft_stmt:208050*/
                    }
                    for (g_449 = 20; (g_449 == 26); g_449++)
                    { /* block id: 828 */
                        uint16_t *l_1847[2][4][8] = {{{&g_131,&g_90,&g_965,&g_131,&g_131,&g_965,&g_90,&g_131},{&g_131,&g_90,&g_90,&g_131,&g_965,&g_965,&g_131,&g_131},{&g_131,&g_90,&g_965,&g_131,&g_131,&g_965,&g_90,&g_131},{&g_131,&g_90,&g_90,&g_131,&g_965,&g_965,&g_131,&g_131}},{{&g_131,&g_90,&g_965,&g_131,&g_131,&g_965,&g_90,&g_131},{&g_131,&g_90,&g_90,&g_131,&g_965,&g_965,&g_131,&g_131},{&g_131,&g_90,&g_965,&g_131,&g_131,&g_965,&g_90,&g_131},{&g_131,&g_90,&g_90,&g_131,&g_965,&g_965,&g_131,&g_131}}};
                        int32_t l_1848 = (-10L);
                        int32_t l_1850 = (-9L);
                        int i, j, k;
                        /*bef_stmt:209164*/
if (Tag338(/*const uint32_t:210309:210309:209164:e*/p_86))
                            goto lbl_1830;
/*aft_stmt:209164*/
                        /*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
/*bef_stmt:209892*/
g_1851 |= (l_1797[0][3][4] |= (l_1850 &= (safe_mul_func_int16_t_s_s((((((safe_add_func_uint8_t_u_u((Tag339(/*uint64_t:210309:210309:209892:e*/p_87) & ((((safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((((*l_1765) |= 1L) , 1L) || ((((safe_mul_func_int16_t_s_s((Tag340(/*uint64_t:210309:210309:209892:e*/p_87) > (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((l_1848 = (Tag341(/*const uint16_t:0:0:209892:e*/*g_575))) >= p_85), Tag342(/*const uint32_t:210309:210309:209892:e*/p_86))), (l_1849[3] != (Tag343(/*int32_t:210309:210309:209892:e*/p_84) , (void*)0))))), (Tag344(/*int32_t:209932:209962:209892:e*/*l_1745)))) <= Tag345(/*const uint16_t:210309:210309:209892:e*/p_83)) | 0xF4C0F7D3F498A17FLL) >= Tag346(/*const uint32_t:210309:210309:209892:e*/p_86))), 0x1D530017L)), (Tag347(/*const uint16_t:0:0:209892:e*/*g_575)))) == 0xDE20E42B828CB9C2LL), Tag348(/*const uint32_t:210309:210309:209892:e*/p_86))) , (void*)0) != (void*)0) ^ p_85)), Tag349(/*int32_t:210309:210309:209892:e*/p_84))) || Tag350(/*uint64_t:210309:210309:209892:e*/p_87)) != 0x3F72DB5A28DF2CD7LL) ^ (Tag351(/*uint8_t:0:0:209892:e*/*g_910))) , Tag352(/*int32_t:209913:209932:209892:e*/l_1793)), 0UL))));
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
/*aft_stmt:209892*/
                    }
                }
            }
        }
        /*bef_stmt:210242*/
/*bef_stmt:210242*/
/*bef_stmt:210242*/
/*bef_stmt:210242*/
l_1857[3][6] = ((l_1582 != l_1704) , (safe_mod_func_uint16_t_u_u((Tag353(/*uint64_t:0:0:210242:e*/g_1854) >= ((0x6232573A1BD5B06BLL | (Tag354(/*uint64_t:0:0:210242:e*/*g_742))) || (safe_mod_func_uint8_t_u_u((&l_1688[8][2] != &l_1621[1]), /*TAG355:STA*/((int32_t)(realsmith_proxy_3ia39((int)(p_84)+(1669220081), (int)(p_84)+(1669219978))+(int)(p_84)-(-1669220051))+p_84)/*TAG355:END:p_84*/)))), (/*TAG356:STA*/((uint16_t)(realsmith_N4i7B((int)(*g_575)+(-65473))+(int)(*g_575)+(int)(*g_742)+(int)(g_1854)-(-1669154514))+*g_575)/*TAG356:END:*g_575*/))));
/*aft_stmt:210242*/
/*aft_stmt:210242*/
/*aft_stmt:210242*/
/*aft_stmt:210242*/
    }
    (*g_507) = l_1858;
    /*bef_stmt:210307*/
return Tag357(/*int32_t:210309:210309:210307:e*/p_85);
/*aft_stmt:210307*/
}


/* ------------------------------------------ */
/* 
 * reads : g_44 g_45 g_513 g_347 g_186 g_131 g_574 g_575 g_298 g_742 g_185 g_2 g_197 g_508 g_6 g_787 g_26 g_625 g_626 g_222 g_505 g_506 g_507 g_404 g_909 g_655 g_910 g_88 g_965 g_372 g_514 g_504 g_20 g_802 g_1018 g_150 g_68 g_256 g_449 g_1019 g_168 g_1136 g_224 g_260 g_180
 * writes: g_88 g_514 g_347 g_2 g_26 g_150 g_197 g_131 g_372 g_168 g_965 g_222 g_180 g_1018 g_298 g_449 g_1019 g_787 g_68 g_1136 g_508 g_404 g_45 g_655 g_186 g_224
 */
static uint32_t  func_93(int32_t  p_94, int32_t  p_95)
{ /* block id: 26 */
    int32_t ***l_101[3];
    const int32_t *l_104[4][10] = {{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_68,&g_6,&g_68,&g_6},{&g_2,&g_6,&g_2,&g_6,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_68,&g_68,&g_2,&g_6,&g_6,&g_2,&g_6,&g_6,&g_2},{&g_6,&g_2,&g_6,&g_6,&g_2,&g_68,&g_68,&g_2,&g_6,&g_6}};
    const int32_t **l_103 = &l_104[3][1];
    const int32_t ***l_102 = &l_103;
    const uint8_t *l_861[3][8] = {{&g_150,&g_150,&g_150,&g_150,&g_150,&g_150,&g_150,&g_150},{&g_150,&g_150,&g_150,&g_150,&g_150,&g_150,&g_150,&g_150},{&g_150,&g_150,&g_150,&g_150,&g_150,&g_150,&g_150,&g_150}};
    int8_t *l_862 = (void*)0;
    int8_t *l_863 = (void*)0;
    int8_t *l_864 = (void*)0;
    int8_t *l_865[9][8] = {{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347}};
    uint8_t *l_880 = &g_150;
    const uint16_t l_887 = 0x2761L;
    int16_t l_888 = 0x9E33L;
    int64_t * const l_889[5][10][3] = {{{&g_197[0][1][1],(void*)0,&g_197[2][1][0]},{&g_180,(void*)0,(void*)0},{(void*)0,&g_197[1][5][1],&g_180},{&g_197[3][5][0],&g_197[6][5][0],&g_180},{&g_197[1][5][1],&g_197[1][5][1],(void*)0},{&g_180,(void*)0,&g_197[6][5][0]},{&g_180,&g_180,&g_197[1][5][1]},{&g_197[2][4][0],&g_197[2][4][0],&g_197[2][3][1]},{&g_197[3][2][0],&g_197[1][5][1],&g_197[0][1][1]},{&g_180,&g_180,&g_180}},{{&g_180,&g_180,&g_197[1][5][1]},{&g_197[1][5][1],&g_180,&g_180},{&g_180,&g_197[1][5][1],&g_197[0][1][1]},{&g_180,&g_197[1][5][1],&g_197[2][3][1]},{(void*)0,&g_197[0][3][0],&g_197[1][5][1]},{(void*)0,&g_197[5][1][0],&g_197[6][5][0]},{&g_197[5][0][0],&g_180,(void*)0},{&g_197[2][3][1],(void*)0,&g_180},{&g_180,&g_180,&g_180},{&g_180,(void*)0,(void*)0}},{{(void*)0,&g_197[1][5][1],&g_197[2][1][0]},{(void*)0,&g_180,&g_180},{&g_180,&g_197[2][3][1],&g_180},{&g_180,&g_180,&g_197[1][3][1]},{&g_197[2][3][1],&g_180,(void*)0},{&g_197[5][0][0],&g_197[1][5][1],&g_180},{(void*)0,&g_197[1][5][1],&g_197[1][5][1]},{(void*)0,&g_197[6][0][0],&g_180},{&g_180,&g_197[3][5][0],&g_197[1][5][1]},{&g_180,&g_180,(void*)0}},{{&g_197[1][5][1],&g_197[0][1][1],&g_197[0][0][1]},{&g_180,&g_180,&g_197[1][5][1]},{&g_180,&g_197[3][5][0],(void*)0},{&g_197[3][2][0],&g_197[6][0][0],&g_197[1][5][1]},{&g_197[2][4][0],&g_197[1][5][1],&g_197[1][5][1]},{&g_180,&g_197[1][5][1],&g_197[3][2][0]},{&g_180,&g_180,(void*)0},{&g_197[1][5][1],&g_180,&g_197[1][5][1]},{&g_197[3][5][0],&g_197[2][3][1],&g_197[5][0][0]},{&g_180,&g_180,&g_197[1][5][1]}},{{(void*)0,&g_197[1][5][1],&g_197[1][5][1]},{&g_180,&g_197[1][5][1],&g_197[1][5][1]},{&g_180,(void*)0,&g_197[3][2][0]},{&g_197[1][5][1],&g_180,&g_197[2][1][0]},{&g_180,(void*)0,&g_180},{&g_197[1][5][1],(void*)0,&g_197[1][5][1]},{(void*)0,&g_197[1][5][1],(void*)0},{&g_180,(void*)0,&g_180},{&g_197[1][5][1],&g_197[0][6][1],&g_197[1][5][1]},{(void*)0,&g_197[6][5][0],&g_180}}};
    uint8_t **l_908[4][9][4] = {{{&l_880,&l_880,(void*)0,&l_880},{&l_880,(void*)0,&l_880,&l_880},{&l_880,&l_880,(void*)0,&l_880},{&l_880,&l_880,&l_880,&l_880},{(void*)0,(void*)0,(void*)0,&l_880},{&l_880,(void*)0,&l_880,&l_880},{(void*)0,&l_880,&l_880,&l_880},{&l_880,&l_880,(void*)0,&l_880},{&l_880,(void*)0,(void*)0,&l_880}},{{&l_880,&l_880,&l_880,&l_880},{(void*)0,&l_880,&l_880,(void*)0},{&l_880,(void*)0,(void*)0,(void*)0},{(void*)0,&l_880,&l_880,&l_880},{&l_880,&l_880,(void*)0,&l_880},{&l_880,(void*)0,&l_880,&l_880},{&l_880,&l_880,(void*)0,&l_880},{&l_880,&l_880,&l_880,&l_880},{(void*)0,(void*)0,(void*)0,&l_880}},{{&l_880,(void*)0,&l_880,&l_880},{(void*)0,&l_880,&l_880,&l_880},{&l_880,&l_880,(void*)0,&l_880},{&l_880,(void*)0,(void*)0,&l_880},{&l_880,&l_880,&l_880,&l_880},{(void*)0,&l_880,&l_880,(void*)0},{&l_880,(void*)0,(void*)0,(void*)0},{(void*)0,&l_880,&l_880,&l_880},{&l_880,&l_880,(void*)0,&l_880}},{{&l_880,(void*)0,&l_880,&l_880},{&l_880,&l_880,(void*)0,&l_880},{&l_880,&l_880,&l_880,&l_880},{(void*)0,(void*)0,(void*)0,&l_880},{&l_880,(void*)0,&l_880,&l_880},{(void*)0,&l_880,&l_880,&l_880},{&l_880,&l_880,(void*)0,&l_880},{&l_880,(void*)0,(void*)0,&l_880},{&l_880,&l_880,&l_880,&l_880}}};
    uint32_t l_912 = 1UL;
    uint8_t l_957[4][6];
    const uint16_t l_976 = 65526UL;
    int16_t l_1058 = 0x01F1L;
    uint16_t *l_1201 = &g_965;
    uint16_t **l_1200 = &l_1201;
    int32_t l_1208 = (-8L);
    uint32_t l_1209 = 0x8CC10A8DL;
    const uint8_t * const * const l_1220 = &l_861[1][5];
    const uint8_t * const * const *l_1219 = &l_1220;
    int32_t l_1238 = 0x18CEDAB5L;
    uint32_t l_1239 = 0xD2A834EAL;
    uint32_t l_1312 = 18446744073709551615UL;
    int32_t ***l_1341 = (void*)0;
    uint64_t l_1343 = 18446744073709551615UL;
    uint8_t l_1413 = 255UL;
    int16_t l_1422[7][8] = {{1L,0xB3C1L,0xED23L,0x3E23L,0x3E23L,0xED23L,0xB3C1L,1L},{0x18D5L,0x3E23L,0xC49CL,0x708DL,0x3E23L,0x708DL,0xED23L,0x18D5L},{0x708DL,0xED23L,0x710FL,0x708DL,0x0AA5L,0x0AA5L,0x708DL,0x710FL},{0x18D5L,0x18D5L,0x3E23L,0xC49CL,0x708DL,0x3E23L,0x708DL,0xC49CL},{0x710FL,0xC49CL,0x710FL,0x0AA5L,0xC49CL,0xED23L,0xED23L,0xC49CL},{0xC49CL,0xED23L,0xED23L,0xC49CL,0x0AA5L,0x710FL,0xC49CL,0x710FL},{0xC49CL,0x708DL,0x3E23L,0x708DL,0xC49CL,0x3E23L,0x18D5L,0x18D5L}};
    int16_t **l_1467 = (void*)0;
    int32_t l_1512 = 0x4CF41B38L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_101[i] = &g_44;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
            l_957[i][j] = 1UL;
    }
/*bef_stmt:222760*/
/*bef_stmt:222760*/
lbl_1088:
    (*g_186) = (((*g_44) == ((*g_513) = func_98((/*TAG358:STA*/((int32_t)(realsmith_hU186((int)(p_94)+(67))+(int)(p_94)-(4))+p_94)/*TAG358:END:p_94*/ , l_101[0]), l_102))) < ((safe_rshift_func_int16_t_s_u(((Tag359(/*int32_t:268920:268920:222760:e*/p_94) <= ((void*)0 == l_861[2][7])) | (g_347 &= (-2L))), 4)) >= 8UL));
/*aft_stmt:222760*/
/*aft_stmt:222760*/
    /*bef_stmt:222946*/
/*bef_stmt:222946*/
/*bef_stmt:222946*/
/*bef_stmt:222946*/
(**g_185) &= (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(/*TAG360:STA*/((int32_t)(realsmith_proxy_uii7O((char)(*g_575)+(-78), (int)(g_1854)+(62))+(char)(p_94)+(char)(*g_575)+(char)(*g_910)+(char)(g_1854)-(-67))+p_94)/*TAG360:END:p_94*/, 0UL)), ((*g_742) = (/*TAG361:STA*/((uint16_t)(realsmith_J8pT8((int)(g_1854)+(49), (int)(g_131)+(-65450), (int)(g_131)+(-65457))+(int)(g_131)+(int)(g_1854)+(int)(*g_910)+(int)(*g_575)-(131209))+g_131)/*TAG361:END:g_131*/ > (7L || (safe_mul_func_uint16_t_u_u((/*TAG362:STA*/((uint16_t)(realsmith_proxy_8JWiK((int)(*g_910)+(-80), (char)(g_131)+(-29))+(int)(**g_574)+(int)(g_131)+(int)(*g_910)+(int)(g_1854)+(int)(*g_575)-(196743))+**g_574)/*TAG362:END:**g_574*/), /*TAG363:STA*/((int16_t)(realsmith_fYV4U((long)(g_298)+(-28469))+(int)(g_298)-(28501))+g_298)/*TAG363:END:g_298*/)))))));
/*aft_stmt:222946*/
/*aft_stmt:222946*/
/*aft_stmt:222946*/
/*aft_stmt:222946*/
    /*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
/*bef_stmt:266755*/
if ((((((safe_lshift_func_uint16_t_u_s((((**g_625) = (safe_add_func_uint8_t_u_u(/*TAG364:STA*/((int64_t)(realsmith_proxy_guzdj((int)(g_197[4][5][1])+(-2134903869), (long)(g_197[4][5][1])+(-953516732218084464), (int)(g_197[4][5][1])+(-2134903859), (int)(g_197[4][5][1])+(-2134903911), (int)(g_197[4][5][1])+(-2134903924), (int)(g_197[4][5][1])+(-2134903832))+(int)(g_197[4][5][1])-(2134903932))+g_197[4][5][1])/*TAG364:END:g_197[4][5][1]*/, (safe_lshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((-7L) || ((*l_880) = ((/*TAG365:STA*/((int32_t)(realsmith_proxy_OfNMc((int)(*g_508)+(68), (int)(*g_508)+(-31), (int)(*g_508)+(-58))+(int)(*g_508)-(5))+*g_508)/*TAG365:END:*g_508*/) , /*TAG366:STA*/((uint64_t)(realsmith_proxy_lvkEB((int)(g_26)+(-75))+(int)(g_26)-(0))+g_26)/*TAG366:END:g_26*/))), /*TAG367:STA*/((int32_t)(realsmith_p1ATZ((long)(p_94)+(19), (long)(p_94)+(72))+(long)(p_94)-(4832004))+p_94)/*TAG367:END:p_94*/)) < (/*TAG368:STA*/((int32_t)(realsmith_proxy_T0r8d()+(char)(g_6)-(88))+g_6)/*TAG368:END:g_6*/ && (safe_rshift_func_uint16_t_u_u(/*TAG369:STA*/((int32_t)(realsmith_hSaux((int)(p_94)+(87))+(int)(p_94)-(10))+p_94)/*TAG369:END:p_94*/, 4)))), (safe_sub_func_int8_t_s_s((0xEE2EDD8B18D2B3A6LL || ((((safe_mod_func_uint16_t_u_u(Tag370(/*int32_t:268920:268920:266755:e*/p_94), /*TAG371:STA*/((uint16_t)(realsmith_htT4U((int)(l_887)+(-10025))+(int)(l_887)-(10131))+l_887)/*TAG371:END:l_887*/)) , /*TAG372:STA*/((int32_t)(realsmith_WUw8O((long)(p_95)+(1669220053), (long)(p_95)+(1669220062))+(int)(p_95)-(-1669220043))+p_95)/*TAG372:END:p_95*/) , 0xF695815DC8A72B0ALL) != (/*TAG373:STA*/((uint64_t)(realsmith_proxy_1jl3O((int)(*g_742)+(25), (int)(*g_742)+(-18), (int)(*g_742)+(-17))+(int)(*g_742)-(1))+*g_742)/*TAG373:END:*g_742*/))), /*TAG374:STA*/((int16_t)(realsmith_DLSRM((int)(l_888)+(25071))+(int)(l_888)-(-24709))+l_888)/*TAG374:END:l_888*/))))))) && (/*TAG375:STA*/((uint64_t)(realsmith_Wx4dn((int)(*g_742)+(89), (int)(*g_742)+(83))+(int)(*g_742)-(1))+*g_742)/*TAG375:END:*g_742*/)), Tag376(/*int32_t:268920:268920:266755:e*/p_95))) || (-1L)) ^ (-1L)) , l_889[1][0][2]) == (*g_625)))
    { /* block id: 408 */
        uint16_t l_896 = 8UL;
        const int32_t **l_907 = &g_508;
        int32_t l_956 = 0L;
        int32_t l_962 = 0L;
        int32_t l_974[8] = {0x3DA73055L,0x3DA73055L,0x3DA73055L,0x3DA73055L,0x3DA73055L,0x3DA73055L,0x3DA73055L,0x3DA73055L};
        int64_t *l_975 = &g_180;
        int32_t *l_977 = (void*)0;
        int32_t *l_978 = (void*)0;
        uint16_t **l_1011 = (void*)0;
        int32_t **l_1074[1][4][1] = {{{&g_514[3][0][0]},{&g_186},{&g_514[3][0][0]},{&g_186}}};
        int32_t **l_1075 = &g_186;
        int16_t l_1099 = 0x26CBL;
        uint8_t l_1109 = 0x49L;
        int8_t l_1129 = 0L;
        uint16_t **l_1210 = &l_1201;
        uint64_t l_1213 = 0UL;
        int i, j, k;
        for (g_2 = 29; (g_2 != (-29)); g_2--)
        { /* block id: 411 */
            uint16_t *l_911 = &g_131;
            int32_t l_913 = 0x27BC8D97L;
            const int32_t * const *l_924[6][1] = {{&g_508},{&g_508},{&g_508},{&g_508},{&g_508},{&g_508}};
            const int32_t * const **l_923 = &l_924[5][0];
            int i, j;
            /*bef_stmt:227723*/
/*bef_stmt:227723*/
/*bef_stmt:227723*/
/*bef_stmt:227723*/
/*bef_stmt:227723*/
/*bef_stmt:227723*/
/*bef_stmt:227723*/
/*bef_stmt:227723*/
if ((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((Tag377(/*int32_t:0:0:227723:e*/g_222) >= 0UL), 4UL)) <= Tag378(/*uint16_t:240588:268920:227723:e*/l_896)), ((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_913 = ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((Tag379(/*uint16_t:240588:268920:227723:e*/l_896) ^ (safe_lshift_func_int8_t_s_s((l_907 != (**g_505)), 7))), Tag380(/*uint32_t:0:0:227723:e*/g_404))), ((*l_911) ^= (l_908[3][1][3] != g_909)))) || Tag381(/*uint32_t:268920:268920:227723:e*/l_912))) || Tag382(/*int32_t:227804:240588:227723:e*/l_913)), Tag383(/*int16_t:0:0:227723:e*/g_655))), 1UL)) , Tag384(/*int32_t:0:0:227723:e*/g_787[0][6][1])))))
            { /* block id: 414 */
                for (g_372 = (-13); (g_372 != 52); ++g_372)
                { /* block id: 417 */
                    /*bef_stmt:225470*/
return Tag385(/*int16_t:0:0:225470:e*/g_655);
/*aft_stmt:225470*/
                }
                for (l_913 = 8; (l_913 > (-27)); l_913 = safe_sub_func_uint8_t_u_u(l_913, 7))
                { /* block id: 422 */
                    for (g_372 = 0; (g_372 != 24); g_372 = safe_add_func_int64_t_s_s(g_372, 3))
                    { /* block id: 425 */
                        const int32_t * const *l_921 = &l_104[1][5];
                        const int32_t * const **l_920 = &l_921;
                        const int32_t * const ***l_922[6][9] = {{&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920},{&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920},{&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920},{&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920},{&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920},{&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920,&l_920}};
                        int i, j;
                        l_923 = l_920;
                    }
                }
            }
            else
            { /* block id: 429 */
                uint8_t *l_933 = (void*)0;
                uint32_t *l_941 = &g_168;
                int16_t *l_955 = &g_88;
                int32_t l_963 = (-1L);
                uint32_t l_964 = 0UL;
                /*bef_stmt:226678*/
if ((Tag386(/*const int32_t:227804:240588:226678:e*/***l_923)))
                    break;
/*aft_stmt:226678*/
                /*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
/*bef_stmt:227697*/
l_913 ^= ((safe_sub_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((g_965 &= ((safe_sub_func_int16_t_s_s((((l_933 == (*g_909)) && (safe_mul_func_uint8_t_u_u(1UL, (safe_mul_func_int8_t_s_s((((*l_941) = (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u(255UL, 4))))) <= (+((((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_962 &= ((((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((l_956 = ((*l_955) &= 8L)), (((0xB593045B1CF67D91LL > 0x4F96E519818E68BELL) , Tag387(/*uint8_t:268920:268920:227697:e*/l_957[1][3])) > (((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(0x43B39460L, Tag388(/*int32_t:268920:268920:227697:e*/p_95))), 0x9961L)) , Tag389(/*int32_t:268920:268920:227697:e*/p_95)) > Tag390(/*int32_t:268920:268920:227697:e*/p_95))))) & 0UL), Tag391(/*int32_t:268920:268920:227697:e*/p_94))) & 5L) && Tag392(/*int32_t:268920:268920:227697:e*/p_94)) && Tag393(/*int32_t:268920:268920:227697:e*/p_94))), Tag394(/*int32_t:227714:227804:227697:e*/l_963))), Tag395(/*int32_t:268920:268920:227697:e*/p_94))) | Tag396(/*int8_t:0:0:227697:e*/g_347)) , 0xE109L), Tag397(/*uint32_t:227714:227804:227697:e*/l_964))), 4UL)) , (Tag398(/*const int32_t:227804:240588:227697:e*/***l_923))) & 0UL) , (Tag399(/*int64_t:0:0:227697:e*/**g_625))))), 0x1AL))))) & Tag400(/*int32_t:268920:268920:227697:e*/p_95)), 0x611EL)) >= Tag401(/*int32_t:268920:268920:227697:e*/p_95))) ^ Tag402(/*int32_t:268920:268920:227697:e*/p_94)), (Tag403(/*uint8_t:0:0:227697:e*/**g_909)))), Tag404(/*int16_t:0:0:227697:e*/g_655))) , Tag405(/*int32_t:268920:268920:227697:e*/p_94)), (Tag406(/*int64_t:0:0:227697:e*/*g_626)))) , (Tag407(/*int32_t:0:0:227697:e*/**g_513)));
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
/*aft_stmt:227697*/
            }
/*aft_stmt:227723*/
/*aft_stmt:227723*/
/*aft_stmt:227723*/
/*aft_stmt:227723*/
/*aft_stmt:227723*/
/*aft_stmt:227723*/
/*aft_stmt:227723*/
/*aft_stmt:227723*/
            (*l_103) = func_98(l_101[2], (**g_504));
        }
        /*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
/*bef_stmt:228300*/
l_956 |= (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((Tag408(/*int32_t:268920:268920:228300:e*/p_95) > (safe_mod_func_uint8_t_u_u((((g_222 ^= (((Tag409(/*int64_t:0:0:228300:e*/*g_626)) > (((safe_mod_func_int32_t_s_s((l_974[2] = (Tag410(/*const int32_t:0:0:228300:e*/*g_508))), ((**g_185) = 6L))) , ((1UL == (((void*)0 == l_975) != ((Tag411(/*int32_t:268920:268920:228300:e*/p_94) , ((Tag412(/*const uint16_t:268920:268920:228300:e*/l_976) , Tag413(/*int32_t:268920:268920:228300:e*/p_95)) , Tag414(/*int32_t:268920:268920:228300:e*/p_95))) == (Tag415(/*const int32_t:240588:268920:228300:e*/**l_907))))) && Tag416(/*int32_t:268920:268920:228300:e*/p_94))) <= 0xE45DBA77L)) & Tag417(/*int32_t:268920:268920:228300:e*/p_94))) , Tag418(/*int32_t:268920:268920:228300:e*/p_95)) > Tag419(/*int32_t:268920:268920:228300:e*/p_95)), Tag420(/*int16_t:0:0:228300:e*/g_88)))) >= 0x6C517EBEF2A287AELL), Tag421(/*uint64_t:0:0:228300:e*/g_26))), Tag422(/*int16_t:0:0:228300:e*/g_655)));
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
/*aft_stmt:228300*/
        for (l_888 = 0; (l_888 >= (-8)); l_888 = safe_sub_func_uint8_t_u_u(l_888, 5))
        { /* block id: 446 */
            int32_t l_1012 = 0x5C6B03A1L;
            int16_t *l_1017 = &g_88;
            int64_t ****l_1020 = &g_1018;
            uint16_t *l_1028 = (void*)0;
            uint16_t *l_1029 = (void*)0;
            uint16_t *l_1030 = (void*)0;
            uint16_t *l_1031[1][1];
            int32_t l_1032 = 0x17658FB2L;
            int16_t *l_1049 = &g_298;
            int32_t l_1057 = (-2L);
            uint64_t *l_1059 = &g_449;
            const int32_t **l_1076 = &g_508;
            int32_t l_1101[2][9][7] = {{{0x082806D1L,6L,3L,2L,0xF0CE7B8DL,0xF0CE7B8DL,2L},{0L,7L,0L,9L,0xE2939A33L,0xF0CE7B8DL,0L},{0x0D93AAB1L,(-4L),0x8D5A3917L,(-1L),0L,0xF0CE7B8DL,(-3L)},{0x8D5A3917L,1L,0x41B6DDFCL,0L,0x8F390795L,0xF0CE7B8DL,(-1L)},{0x83CB9B9FL,0xA248EF90L,0x082806D1L,0x73F7124EL,(-1L),0xF0CE7B8DL,0xC405C396L},{0x41B6DDFCL,0xC34BB7F1L,0x0D93AAB1L,0xC405C396L,0x587E185BL,0xF0CE7B8DL,9L},{3L,(-1L),0x83CB9B9FL,(-3L),1L,0xF0CE7B8DL,0x73F7124EL},{0x082806D1L,6L,3L,2L,0xF0CE7B8DL,0xF0CE7B8DL,2L},{0L,7L,0L,9L,0xE2939A33L,0xF0CE7B8DL,0L}},{{0x0D93AAB1L,(-4L),0x8D5A3917L,(-1L),0L,0xF0CE7B8DL,(-3L)},{0x8D5A3917L,1L,0x41B6DDFCL,0L,0x8F390795L,0xF0CE7B8DL,0x8F390795L},{0xBCC255F7L,0x1D29DC7AL,(-10L),0xF0CE7B8DL,1L,(-4L),0L},{1L,0x58AF59CFL,0x0843A619L,0L,0xC34BB7F1L,(-4L),0xE2939A33L},{1L,0x7050CDACL,0xBCC255F7L,(-1L),6L,(-4L),0xF0CE7B8DL},{(-10L),0x1FD36EF1L,1L,1L,(-4L),(-4L),1L},{0x2FAF5EDCL,0x11D58D76L,0x2FAF5EDCL,0xE2939A33L,0xA248EF90L,(-4L),0x587E185BL},{0x0843A619L,(-1L),0x3CC56C68L,0x8F390795L,(-1L),(-4L),(-1L)},{0x3CC56C68L,0x962FA0E2L,1L,0x587E185BL,7L,(-4L),0x8F390795L}}};
            int32_t l_1105 = 2L;
            int32_t l_1123[4] = {8L,8L,8L,8L};
            int32_t l_1140 = 8L;
            int16_t l_1164 = 0x8B0AL;
            int32_t l_1212 = 0x4F31CFD5L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1031[i][j] = &l_896;
            }
            /*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
/*bef_stmt:232176*/
(*g_186) = ((0x28C026557C6E9B94LL && (safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((0x6FAAL > 0x912CL), (safe_rshift_func_uint8_t_u_u((Tag423(/*uint8_t:0:0:232176:e*/**g_909)), (+(((!((**g_625) = (safe_sub_func_int32_t_s_s(Tag424(/*int32_t:268920:268920:232176:e*/p_95), (safe_rshift_func_uint16_t_u_u(((((((((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((safe_mod_func_int64_t_s_s(((*l_975) = (safe_sub_func_int16_t_s_s((Tag425(/*uint16_t:0:0:232176:e*/g_965) <= (safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s(((Tag426(/*int8_t:0:0:232176:e*/g_347) > (safe_lshift_func_int8_t_s_s(Tag427(/*int32_t:268920:268920:232176:e*/p_95), (((*g_742) = (safe_mod_func_int32_t_s_s(((l_1011 == &g_575) < 7L), (Tag428(/*const int32_t:240588:268920:232176:e*/**l_907))))) & Tag429(/*int32_t:268920:268920:232176:e*/p_95))))) & 1L), (Tag430(/*const int32_t:240588:268920:232176:e*/**l_907)))) && (Tag431(/*uint8_t:0:0:232176:e*/**g_909))) > (Tag432(/*int32_t:0:0:232176:e*/*g_186))) , (Tag433(/*const int32_t:240588:268920:232176:e*/**l_907))), 0x0AL)) >= Tag434(/*int32_t:268920:268920:232176:e*/p_95)), 12))), Tag435(/*int64_t:0:0:232176:e*/g_197[4][0][0])))), Tag436(/*int32_t:268920:268920:232176:e*/p_94))) > (Tag437(/*const int32_t:240588:268920:232176:e*/**l_907))) < Tag438(/*int32_t:268920:268920:232176:e*/p_95)), Tag439(/*uint8_t:0:0:232176:e*/g_20))), (Tag440(/*const int32_t:240588:268920:232176:e*/**l_907)))) == (Tag441(/*uint8_t:0:0:232176:e*/**g_909))) , (-1L)) , (Tag442(/*const int32_t:240588:268920:232176:e*/**l_907))) , Tag443(/*int32_t:0:0:232176:e*/g_2)) , l_1011) == (void*)0) == Tag444(/*uint32_t:0:0:232176:e*/g_802[3][1][1])), Tag445(/*int32_t:240460:240588:232176:e*/l_1012))))))) > 0L) <= Tag446(/*int32_t:268920:268920:232176:e*/p_94))))))) != 4294967294UL), 65535UL))) ^ 0xB62C45EA8F2FF26ALL);
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
/*aft_stmt:232176*/
            /*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
/*bef_stmt:232835*/
(*g_186) ^= (((safe_lshift_func_uint8_t_u_u((((*g_742) &= ((((*l_1017) = (safe_rshift_func_int16_t_s_s((Tag447(/*const int32_t:240588:268920:232835:e*/**l_907)), 6))) , ((*l_1020) = g_1018)) != ((&l_975 != ((((Tag448(/*const int32_t:240588:268920:232835:e*/**l_907)) | (safe_mul_func_uint8_t_u_u(((Tag449(/*const uint16_t:0:0:232835:e*/**g_574)) ^ (safe_sub_func_int32_t_s_s(((Tag450(/*uint8_t:0:0:232835:e*/g_150) , ((*g_626) = ((+0L) , (Tag451(/*int64_t:0:0:232835:e*/**g_625))))) >= (((((l_1012 = ((l_956 &= 0x9ABFL) != Tag452(/*int32_t:0:0:232835:e*/g_68))) <= 4UL) != Tag453(/*int32_t:268920:268920:232835:e*/p_94)) , l_1011) == (void*)0)), Tag454(/*int32_t:240460:240588:232835:e*/l_1032)))), Tag455(/*uint64_t:0:0:232835:e*/g_256)))) | Tag456(/*int32_t:268920:268920:232835:e*/p_94)) , &g_626)) , (void*)0))) , 0xF1L), 6)) <= (Tag457(/*const int32_t:240588:268920:232835:e*/**l_907))) , (Tag458(/*const int32_t:240588:268920:232835:e*/**l_907)));
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
/*aft_stmt:232835*/
            (*g_186) ^= 0x67CCFECFL;
            /*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
/*bef_stmt:240454*/
if ((((*l_1059) &= (((((((((safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((Tag459(/*int32_t:268920:268920:240454:e*/p_95) ^ ((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((*l_1049) ^= (l_1032 = ((*l_1017) ^= 0xF1B9L))) ^ ((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u((~(Tag460(/*const uint16_t:0:0:240454:e*/**g_574))), 7)) && ((l_956 = 0x32EBL) > Tag461(/*int32_t:240460:240588:240454:e*/l_1012))), (l_861[2][7] == &g_347))) && (Tag462(/*int64_t:0:0:240454:e*/g_197[0][4][1]) | ((l_956 = (l_1012 = Tag463(/*uint64_t:0:0:240454:e*/g_26))) == Tag464(/*int32_t:240460:240588:240454:e*/l_1057))))), 14)), Tag465(/*int32_t:0:0:240454:e*/g_787[3][1][0]))) < 248UL)), (Tag466(/*const uint16_t:0:0:240454:e*/*g_575)))), (Tag467(/*const int32_t:240588:268920:240454:e*/**l_907)))) , 1UL), 1UL)), Tag468(/*int32_t:268920:268920:240454:e*/p_95))), Tag469(/*int32_t:268920:268920:240454:e*/p_95))), (Tag470(/*uint8_t:0:0:240454:e*/*g_910)))) & Tag471(/*int32_t:268920:268920:240454:e*/p_94)) && (Tag472(/*uint64_t:0:0:240454:e*/*g_742))) == Tag473(/*int32_t:268920:268920:240454:e*/p_94)) , Tag474(/*int32_t:268920:268920:240454:e*/p_95)) , 1UL) >= Tag475(/*int16_t:268920:268920:240454:e*/l_1058)) , Tag476(/*int32_t:268920:268920:240454:e*/p_95)) && Tag477(/*int32_t:240460:240588:240454:e*/l_1032))) && Tag478(/*int32_t:268920:268920:240454:e*/p_95)))
            { /* block id: 466 */
                uint8_t l_1067 = 0xFBL;
                int32_t l_1091 = 0x6AD111D4L;
                int32_t l_1093 = (-1L);
                int32_t l_1103 = 8L;
                int32_t l_1106 = 8L;
                int32_t l_1107 = 0xFDC4AD45L;
                int64_t l_1108 = 3L;
                /*bef_stmt:234307*/
/*bef_stmt:234307*/
/*bef_stmt:234307*/
/*bef_stmt:234307*/
(*g_186) = (safe_add_func_int64_t_s_s(((1L | 0xBCB5L) | (safe_lshift_func_int16_t_s_s((0x33084581L || (Tag479(/*int32_t:268920:268920:234307:e*/p_95) == ((2L | (0xB5A97D49L & (Tag480(/*const int32_t:0:0:234307:e*/***g_506)))) != (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((--l_1067))), (Tag481(/*const int32_t:240588:268920:234307:e*/**l_907))))))), 6))), ((safe_mod_func_uint32_t_u_u((((*g_1018) = (*g_1018)) != (void*)0), (Tag482(/*int32_t:0:0:234307:e*/**g_513)))) , 18446744073709551615UL)));
/*aft_stmt:234307*/
/*aft_stmt:234307*/
/*aft_stmt:234307*/
/*aft_stmt:234307*/
                /*bef_stmt:236507*/
/*bef_stmt:236507*/
/*bef_stmt:236507*/
/*bef_stmt:236507*/
/*bef_stmt:236507*/
/*bef_stmt:236507*/
/*bef_stmt:236507*/
if ((safe_sub_func_int8_t_s_s(((l_1075 = l_1074[0][0][0]) != l_1076), ((*l_880) = ((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((((safe_div_func_int16_t_s_s(Tag483(/*int32_t:268920:268920:236507:e*/p_95), ((Tag484(/*int32_t:268920:268920:236507:e*/p_95) && (safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((Tag485(/*int32_t:268920:268920:236507:e*/p_95) || (((**g_909) = (&l_896 != (void*)0)) >= 0xC5L)) < (-1L)))) < Tag486(/*int32_t:0:0:236507:e*/g_2)), Tag487(/*int32_t:268920:268920:236507:e*/p_94)))) , Tag488(/*int32_t:268920:268920:236507:e*/p_95)))) | 0x82L) | 0x0D5AE476CD8FE110LL) >= 5UL), 0xB8812994L)), (Tag489(/*const int32_t:240460:240588:236507:e*/**l_1076)))) >= 0UL)))))
                { /* block id: 473 */
                    int32_t l_1092 = 9L;
                    int32_t l_1094 = 0xBB29619BL;
                    int32_t l_1102 = 0x661A0017L;
                    int32_t l_1104 = 0x1CE30E10L;
                    uint32_t *l_1121 = &g_404;
                    (**l_1075) = 0xCF5C9A94L;
                    for (g_2 = 15; (g_2 > 17); g_2++)
                    { /* block id: 477 */
                        /*bef_stmt:235033*/
if (Tag490(/*uint32_t:0:0:235033:e*/g_404))
                            goto lbl_1088;
/*aft_stmt:235033*/
                        /*bef_stmt:235061*/
if ((Tag491(/*const int32_t:0:0:235061:e*/**g_507)))
                            continue;
/*aft_stmt:235061*/
                    }
                    for (g_372 = 7; (g_372 != 24); g_372++)
                    { /* block id: 483 */
                        uint32_t l_1095 = 4294967295UL;
                        int32_t l_1098 = 0x0BD9912FL;
                        int32_t l_1100[3][1][10] = {{{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}}};
                        int i, j, k;
                        l_1095++;
                        l_1109--;
                        /*bef_stmt:235756*/
if ((Tag492(/*const int32_t:240460:240588:235756:e*/**l_1076)))
                            continue;
/*aft_stmt:235756*/
                    }
                    for (g_222 = 0; (g_222 > (-15)); --g_222)
                    { /* block id: 490 */
                        /*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
/*bef_stmt:236373*/
l_1057 = (((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s((0L > ((((safe_lshift_func_int16_t_s_s(0x4DCDL, Tag493(/*int32_t:0:0:236373:e*/g_68))) < (g_168 |= (0UL != (p_94 = ((safe_unary_minus_func_uint32_t_u(((Tag494(/*int32_t:268920:268920:236373:e*/p_95) != (((**g_185) ^= (Tag495(/*const int32_t:240460:240588:236373:e*/**l_1076))) > ((((void*)0 != l_1121) <= (Tag496(/*uint64_t:0:0:236373:e*/*g_742))) , (Tag497(/*int32_t:0:0:236373:e*/*g_45))))) != (Tag498(/*const int32_t:0:0:236373:e*/****g_505))))) ^ (Tag499(/*const int32_t:240460:240588:236373:e*/**l_1076))))))) == (Tag500(/*int64_t:0:0:236373:e*/**g_625))) & 1UL)), Tag501(/*int32_t:268920:268920:236373:e*/p_95))) >= (Tag502(/*const uint16_t:0:0:236373:e*/**g_574))), Tag503(/*int32_t:240402:240460:236373:e*/l_1106))) , Tag504(/*int32_t:240402:240460:236373:e*/l_1106)) <= (Tag505(/*const int32_t:240588:268920:236373:e*/**l_907)));
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
/*aft_stmt:236373*/
                    }
                }
                else
                { /* block id: 496 */
                    int64_t *l_1122 = &g_180;
                    (**g_513) = (l_889[1][0][2] == l_1122);
                }
/*aft_stmt:236507*/
/*aft_stmt:236507*/
/*aft_stmt:236507*/
/*aft_stmt:236507*/
/*aft_stmt:236507*/
/*aft_stmt:236507*/
/*aft_stmt:236507*/
                /*bef_stmt:237794*/
if ((((*g_910) |= (Tag506(/*int32_t:240460:240588:237794:e*/l_1123[3]) == 0x053FL)) && 0x4BL))
                { /* block id: 500 */
                    int8_t l_1126 = 7L;
                    int32_t l_1127 = 0x110FC472L;
                    int32_t l_1128 = 0L;
                    int32_t l_1132 = 0xC2114F75L;
                    int32_t l_1134 = (-1L);
                    int32_t l_1135 = (-6L);
                    int32_t ***l_1139 = &l_1074[0][0][0];
                    (**l_1075) = (0x1157EE55L || 0x40327F3AL);
                    for (g_68 = 0; (g_68 > 0); g_68++)
                    { /* block id: 504 */
                        int64_t l_1130 = 0x70E36AF53874ADFCLL;
                        int32_t l_1131 = 6L;
                        int32_t l_1133[10] = {0L,0xF199AF79L,0L,0x47CD3627L,0x47CD3627L,0L,0xF199AF79L,0L,0x47CD3627L,0x47CD3627L};
                        int i;
                        g_1136++;
                        /*bef_stmt:237107*/
if (Tag507(/*int32_t:237123:237212:237107:e*/l_1131))
                            continue;
/*aft_stmt:237107*/
                        /*bef_stmt:237121*/
return Tag508(/*uint64_t:0:0:237121:e*/g_449);
/*aft_stmt:237121*/
                    }
                    (*l_1076) = func_98(l_1139, &l_103);
                    /*bef_stmt:237208*/
(*g_186) = Tag509(/*int32_t:240460:240588:237208:e*/l_1140);
/*aft_stmt:237208*/
                }
                else
                { /* block id: 511 */
                    const int32_t *** const l_1145 = (void*)0;
                    int32_t l_1150 = 0x0C4AB606L;
                    /*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
/*bef_stmt:237774*/
(*g_186) = ((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((Tag510(/*const uint16_t:0:0:237774:e*/*g_575)) , l_975) != &g_26), (Tag511(/*const int32_t:240460:240588:237774:e*/**l_1076)))) , (((void*)0 != l_1145) != ((Tag512(/*int32_t:0:0:237774:e*/g_6) ^ ((Tag513(/*int32_t:240402:240460:237774:e*/l_1093) > (((safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((((Tag514(/*uint8_t:0:0:237774:e*/**g_909)) >= Tag515(/*uint32_t:0:0:237774:e*/g_802[7][1][1])) >= Tag516(/*int32_t:268920:268920:237774:e*/p_94)), Tag517(/*int32_t:268920:268920:237774:e*/p_95))) ^ 0xB70BL), 0x6231448AL)) & Tag518(/*int64_t:0:0:237774:e*/g_197[3][3][1])) || 0xB405AA27L)) != Tag519(/*int32_t:268920:268920:237774:e*/p_94))) , Tag520(/*int32_t:240402:240460:237774:e*/l_1106)))), Tag521(/*int32_t:237789:240402:237774:e*/l_1150))) >= Tag522(/*int32_t:240402:240460:237774:e*/l_1103));
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
/*aft_stmt:237774*/
                }
/*aft_stmt:237794*/
                for (l_1105 = (-14); (l_1105 < 1); ++l_1105)
                { /* block id: 516 */
                    uint32_t l_1169 = 0x4F26BA1DL;
                    uint16_t ***l_1202 = &l_1011;
                    int32_t *l_1211 = &l_1140;
                    /*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
/*bef_stmt:238641*/
(****g_504) = func_98(&l_1074[0][0][0], (((safe_sub_func_int16_t_s_s((+((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((((Tag523(/*uint8_t:0:0:238641:e*/*g_910)) < (safe_add_func_uint32_t_u_u(Tag524(/*int16_t:0:0:238641:e*/g_655), ((l_1032 = (((safe_mod_func_uint8_t_u_u((Tag525(/*uint8_t:0:0:238641:e*/*g_910)), Tag526(/*int16_t:240460:240588:238641:e*/l_1164))) < ((((l_1101[0][6][0] &= 2UL) != (Tag527(/*int32_t:268920:268920:238641:e*/p_95) , ((safe_div_func_int8_t_s_s((g_347 = 0x70L), ((safe_sub_func_int32_t_s_s(Tag528(/*int32_t:268920:268920:238641:e*/p_95), (Tag529(/*const int32_t:0:0:238641:e*/*g_508)))) & (Tag530(/*const uint16_t:0:0:238641:e*/**g_574))))) ^ (Tag531(/*const int32_t:240460:240588:238641:e*/**l_1076))))) & Tag532(/*int32_t:240402:240460:238641:e*/l_1093)) <= Tag533(/*int32_t:240402:240460:238641:e*/l_1103))) <= Tag534(/*int32_t:268920:268920:238641:e*/p_94))) | Tag535(/*uint8_t:0:0:238641:e*/g_20))))) , Tag536(/*int16_t:0:0:238641:e*/g_655)), (Tag537(/*const int32_t:240460:240588:238641:e*/**l_1076)))), Tag538(/*uint32_t:0:0:238641:e*/g_224))) || Tag539(/*uint32_t:240386:240402:238641:e*/l_1169))), 0x05DFL)) == (Tag540(/*const int32_t:240460:240588:238641:e*/**l_1076))) , (void*)0));
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
/*aft_stmt:238641*/
                    for (l_896 = 0; (l_896 <= 1); l_896 += 1)
                    { /* block id: 523 */
                        uint32_t l_1188 = 3UL;
                        int i, j, k;
                        if (g_197[(l_896 + 3)][l_896][l_896])
                            break;
                        /*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
/*bef_stmt:239569*/
(*g_186) ^= (l_1188 = (safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(g_197[(l_896 + 1)][l_896][l_896], (((safe_mul_func_uint16_t_u_u(Tag541(/*int32_t:268920:268920:239569:e*/p_95), ((safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s((255UL | 1L), Tag542(/*int32_t:268920:268920:239569:e*/p_95))), ((safe_add_func_uint64_t_u_u((g_197[(l_896 + 1)][l_896][l_896] < (safe_rshift_func_int8_t_s_s((g_197[(l_896 + 3)][l_896][l_896] != ((safe_mul_func_int16_t_s_s(0xB663L, ((((safe_div_func_int8_t_s_s(((Tag543(/*int32_t:268920:268920:239569:e*/p_95) , (-6L)) || (Tag544(/*const int32_t:240460:240588:239569:e*/**l_1076))), 0xB6L)) != Tag545(/*uint32_t:240386:240402:239569:e*/l_1169)) , 1L) != 0x51L))) == 0xBBE383BFL)), Tag546(/*uint32_t:0:0:239569:e*/g_260)))), (Tag547(/*uint64_t:0:0:239569:e*/*g_742)))) || 0x34A929BB3BD43E60LL))) , Tag548(/*int16_t:0:0:239569:e*/g_88)))) == Tag549(/*int32_t:268920:268920:239569:e*/p_95)) & Tag550(/*int32_t:268920:268920:239569:e*/p_95)))) ^ (Tag551(/*const int32_t:240460:240588:239569:e*/**l_1076))), Tag552(/*int32_t:268920:268920:239569:e*/p_95))));
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
/*aft_stmt:239569*/
                        /*bef_stmt:239585*/
return Tag553(/*int32_t:268920:268920:239585:e*/p_94);
/*aft_stmt:239585*/
                    }
                    for (g_298 = 0; (g_298 != (-23)); --g_298)
                    { /* block id: 531 */
                        const int32_t ***l_1191 = &l_907;
                        (**l_1191) = func_98(&g_44, l_1191);
                    }
                    /*bef_stmt:240382*/
/*bef_stmt:240382*/
/*bef_stmt:240382*/
/*bef_stmt:240382*/
/*bef_stmt:240382*/
/*bef_stmt:240382*/
/*bef_stmt:240382*/
/*bef_stmt:240382*/
/*bef_stmt:240382*/
p_94 = ((7UL ^ ((((*g_742) = (safe_sub_func_int32_t_s_s((((*l_1211) = (safe_mod_func_int8_t_s_s((((**g_909) = (safe_add_func_int8_t_s_s(Tag554(/*int32_t:268920:268920:240382:e*/p_95), (1L != Tag555(/*uint32_t:0:0:240382:e*/g_802[2][0][0]))))) < (((safe_add_func_uint8_t_u_u(((((((*l_1202) = l_1200) == (((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(7L, ((safe_unary_minus_func_uint16_t_u(7UL)) <= Tag556(/*int32_t:268920:268920:240382:e*/p_95)))), (Tag557(/*int32_t:268920:268920:240382:e*/l_1208) && 0L))) , Tag558(/*uint32_t:268920:268920:240382:e*/l_1209)) , l_1210)) <= 0L) , Tag559(/*int32_t:0:0:240382:e*/g_787[3][1][0])) , Tag560(/*uint32_t:240386:240402:240382:e*/l_1169)), 0x39L)) < Tag561(/*int32_t:268920:268920:240382:e*/p_94)) == 0xC61688ECE3B5B99CLL)), 0x38L))) , (Tag562(/*const int32_t:240460:240588:240382:e*/**l_1076))), 0x3AFF5A41L))) && 1L) == 0x65L)) | 0x0E056C4279DACBEBLL);
/*aft_stmt:240382*/
/*aft_stmt:240382*/
/*aft_stmt:240382*/
/*aft_stmt:240382*/
/*aft_stmt:240382*/
/*aft_stmt:240382*/
/*aft_stmt:240382*/
/*aft_stmt:240382*/
/*aft_stmt:240382*/
                }
            }
            else
            { /* block id: 540 */
                l_1213--;
                /*bef_stmt:240448*/
return (Tag563(/*const int32_t:240460:240588:240448:e*/**l_1076));
/*aft_stmt:240448*/
            }
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
/*aft_stmt:240454*/
        }
        for (g_347 = 0; (g_347 != 27); ++g_347)
        { /* block id: 547 */
            (*l_907) = &p_94;
            /*bef_stmt:240575*/
return Tag564(/*int64_t:0:0:240575:e*/g_180);
/*aft_stmt:240575*/
        }
    }
    else
    { /* block id: 551 */
        const uint8_t * const * const **l_1221 = &l_1219;
        int32_t l_1229[10][1] = {{0x8CA75643L},{0L},{0x8CA75643L},{0x8CA75643L},{0L},{0x8CA75643L},{0x8CA75643L},{0L},{0x8CA75643L},{0x8CA75643L}};
        int32_t l_1230 = 0x91C334D2L;
        int64_t l_1231 = 0x0845EDEFC2B2A4DCLL;
        uint32_t l_1275 = 0xFD4ABC6FL;
        uint64_t l_1304[5] = {0xC20E508973DC1839LL,0xC20E508973DC1839LL,0xC20E508973DC1839LL,0xC20E508973DC1839LL,0xC20E508973DC1839LL};
        int32_t ***l_1375 = &g_44;
        int i, j;
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
/*bef_stmt:242122*/
lbl_1322:
        (**g_513) &= (((((((safe_unary_minus_func_uint64_t_u(18446744073709551606UL)) == ((/*TAG565:STA*/((int32_t)(realsmith_H2lsZ((unsigned long)(p_94)+(-2))+(int)(p_94)+(int)(g_180)+(int)(l_1208)+(int)(*g_742)+((int)(l_1209)-(-1933505907))-(-379164933))+p_94)/*TAG565:END:p_94*/ , (void*)0) == ((*l_1221) = l_1219))) & ((+(safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((**l_1200) = (safe_lshift_func_int8_t_s_u(/*TAG566:STA*/((int32_t)(realsmith_YWMeP()+(int)(l_1229[6][0])-(-1935190461))+l_1229[6][0])/*TAG566:END:l_1229[6][0]*/, 4))), (((l_1230 = ((*g_742) = (Tag567(/*uint64_t:0:0:242122:e*/*g_742)))) | /*TAG568:STA*/((int64_t)(realsmith_f4lTm((int)(l_1231)+(1028479793), (int)(l_1231)+(1028479797))+(int)(l_1231)-(-1028479786))+l_1231)/*TAG568:END:l_1231*/) >= ((*g_626) |= 1L)))) < ((((safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((((((0x0751L || Tag569(/*int32_t:268920:268920:242122:e*/p_94)) == Tag570(/*int32_t:266742:268920:242122:e*/l_1229[6][0])) , Tag571(/*int32_t:268920:268920:242122:e*/l_1238)) | (Tag572(/*uint8_t:0:0:242122:e*/*g_910))) >= 0x2393324403716922LL), Tag573(/*int64_t:266742:268920:242122:e*/l_1231))), /*TAG574:STA*/((int32_t)(realsmith_proxy_4rFQX((int)(p_94)+(72))+(int)(p_94)-(5))+p_94)/*TAG574:END:p_94*/)) != (-5L)), Tag575(/*int32_t:266742:268920:242122:e*/l_1229[1][0]))) , /*TAG576:STA*/((int32_t)(realsmith_proxy_1aguk((char)(l_1208)+(17), (int)(l_1229[9][0])+(1935190472), (int)(l_1229[6][0])+(1935190519), (int)(*g_742)+(89))+(int)(l_1229[9][0])+((int)(g_180)-(-379164994))+((int)(l_1229[6][0])-(-1935190461))+(int)(l_1208)+(int)(*g_742)-(-1935190468))+l_1229[9][0])/*TAG576:END:l_1229[9][0]*/) != /*TAG577:STA*/((int32_t)(realsmith_dtCe9()+(unsigned long)(p_94)+(unsigned long)(l_1209)+(unsigned long)(*g_910)+(unsigned long)(l_1238)-(2777671144))+p_94)/*TAG577:END:p_94*/) , Tag578(/*int32_t:268920:268920:242122:e*/p_94))), 0xF90EL))) <= Tag579(/*int32_t:268920:268920:242122:e*/p_95))) != Tag580(/*int32_t:266742:268920:242122:e*/l_1229[6][0])) && Tag581(/*uint32_t:268920:268920:242122:e*/l_1239)) == 0UL) || (/*TAG582:STA*/((uint16_t)(realsmith_proxy_3vpgC((int)(**g_574)+(-65468), (int)(**g_574)+(-65479))+(int)(**g_574)-(65545))+**g_574)/*TAG582:END:**g_574*/));
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
/*aft_stmt:242122*/
        for (l_1208 = 17; (l_1208 > (-24)); l_1208 = safe_sub_func_int8_t_s_s(l_1208, 1))
        { /* block id: 560 */
            uint32_t *l_1272 = &l_1209;
            uint32_t *l_1276 = &g_404;
            int32_t l_1298 = 4L;
            const int32_t ***l_1321[3];
            int16_t l_1336[9][3] = {{(-9L),0xFCBEL,0xDA0FL},{5L,0xFCBEL,0x864FL},{0x810AL,0xFCBEL,0xFCBEL},{(-9L),0xFCBEL,0xDA0FL},{5L,0xFCBEL,0x864FL},{0x810AL,0xFCBEL,0xFCBEL},{(-9L),0xFCBEL,0xDA0FL},{5L,0xFCBEL,0x864FL},{0x810AL,0xFCBEL,0xFCBEL}};
            uint8_t ***l_1352 = &g_909;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1321[i] = &g_507;
            /*bef_stmt:243019*/
if (Tag583(/*int32_t:268920:268920:243019:e*/p_95))
                break;
/*aft_stmt:243019*/
            /*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
/*bef_stmt:248966*/
if ((!((~(((safe_rshift_func_int8_t_s_s((((*l_1276) |= ((l_1275 = ((**g_513) = ((safe_rshift_func_uint8_t_u_s(((Tag584(/*const uint16_t:0:0:248966:e*/*g_575)) | (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((Tag585(/*uint8_t:0:0:248966:e*/g_20) <= (safe_mul_func_uint8_t_u_u(((*g_910) = (Tag586(/*uint8_t:0:0:248966:e*/*g_910))), (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((((Tag587(/*int32_t:268920:268920:248966:e*/p_95) , 6L) <= Tag588(/*int32_t:268920:268920:248966:e*/p_94)) | ((safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((((*l_1272) = Tag589(/*int32_t:268920:268920:248966:e*/p_94)) == (safe_lshift_func_int16_t_s_u((g_298 = 0x158FL), 0))), 0x2A5B81FAL)), 9)), 2UL)) & 0x49L) == 65535UL), 3)), Tag590(/*int32_t:268920:268920:248966:e*/p_94))), 0xA1E3655275E77859LL)) , Tag591(/*uint16_t:0:0:248966:e*/g_965))) | 255UL), Tag592(/*uint32_t:0:0:248966:e*/g_168))) , Tag593(/*int32_t:268920:268920:248966:e*/p_95)), Tag594(/*int32_t:268920:268920:248966:e*/p_94))), Tag595(/*int64_t:0:0:248966:e*/g_180)))))), Tag596(/*int64_t:0:0:248966:e*/g_197[4][6][0]))), Tag597(/*int32_t:266742:268920:248966:e*/l_1230)))), 1)) >= 0x08CEC3E2L))) | Tag598(/*int32_t:268920:268920:248966:e*/p_95))) | Tag599(/*int32_t:268920:268920:248966:e*/p_94)), 6)) == Tag600(/*int32_t:268920:268920:248966:e*/p_95)) >= 18446744073709551606UL)) < Tag601(/*int64_t:266742:268920:248966:e*/l_1231))))
            { /* block id: 568 */
                uint16_t l_1303 = 0x1281L;
                /*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
/*bef_stmt:244748*/
l_1298 = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(0x77L, (!((Tag602(/*int64_t:0:0:244748:e*/**g_625)) | (safe_lshift_func_int16_t_s_u(Tag603(/*int32_t:268920:268920:244748:e*/p_94), (safe_lshift_func_uint8_t_u_s(((Tag604(/*uint64_t:0:0:244748:e*/*g_742)) & (safe_mul_func_uint16_t_u_u((((((l_1303 = (safe_lshift_func_int8_t_s_u((&g_1018 != ((((**g_185) = Tag605(/*int32_t:248972:266742:244748:e*/l_1298)) < ((((safe_add_func_uint8_t_u_u(0x23L, (safe_sub_func_int16_t_s_s(0x3DA3L, (3L == Tag606(/*int32_t:248972:266742:244748:e*/l_1298)))))) & Tag607(/*int32_t:266742:268920:244748:e*/l_1230)) , (*g_44)) != (void*)0)) , &g_1018)), (Tag608(/*uint8_t:0:0:244748:e*/**g_909))))) && 0x8BE7FC89L) == (Tag609(/*uint64_t:0:0:244748:e*/*g_742))) || Tag610(/*int32_t:268920:268920:244748:e*/p_95)) , Tag611(/*int32_t:268920:268920:244748:e*/p_94)), Tag612(/*int32_t:268920:268920:244748:e*/p_94)))), 4)))))))) ^ (Tag613(/*int64_t:0:0:244748:e*/**g_625))), Tag614(/*int32_t:268920:268920:244748:e*/p_95))) & (Tag615(/*uint8_t:0:0:244748:e*/*g_910))), (Tag616(/*const uint16_t:0:0:244748:e*/**g_574)))) | Tag617(/*uint16_t:0:0:244748:e*/g_965)), Tag618(/*int32_t:268920:268920:244748:e*/p_95))) , (Tag619(/*uint8_t:0:0:244748:e*/*g_910))), (Tag620(/*uint8_t:0:0:244748:e*/*g_910)))), Tag621(/*int32_t:0:0:244748:e*/g_222)));
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
/*aft_stmt:244748*/
            }
            else
            { /* block id: 572 */
                int16_t l_1320 = 0x8AC8L;
                uint8_t * const l_1333[6] = {&g_20,&g_20,&g_20,&g_20,&g_20,&g_20};
                int32_t l_1348 = (-1L);
                int32_t l_1349[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1349[i] = 0x0005BD9DL;
                /*bef_stmt:246309*/
if (Tag622(/*uint64_t:266742:268920:246309:e*/l_1304[4]))
                { /* block id: 573 */
                    int32_t l_1319[6][9][4];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_1319[i][j][k] = 0L;
                        }
                    }
                    for (g_449 = 0; (g_449 <= 0); g_449 += 1)
                    { /* block id: 576 */
                        int i, j;
                        /*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
/*bef_stmt:246139*/
l_1298 |= (l_1229[(g_449 + 5)][g_449] = (safe_mul_func_int16_t_s_s((((l_1229[(g_449 + 9)][g_449] && (Tag623(/*const uint16_t:0:0:246139:e*/**g_574))) ^ Tag624(/*int32_t:268920:268920:246139:e*/p_95)) >= Tag625(/*int32_t:268920:268920:246139:e*/p_94)), (+(0UL == ((Tag626(/*int32_t:268920:268920:246139:e*/p_94) != ((((((safe_sub_func_int16_t_s_s(Tag627(/*uint32_t:268920:268920:246139:e*/l_1312), (l_1230 = ((g_404 = ((*l_1272) &= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((Tag628(/*int32_t:246287:248954:246139:e*/l_1319[2][5][0]) ^ l_1229[(g_449 + 9)][g_449]), Tag629(/*int16_t:0:0:246139:e*/g_298))), 7)), Tag630(/*int16_t:248954:248972:246139:e*/l_1320))))) == Tag631(/*uint32_t:0:0:246139:e*/g_224))))) ^ 0x5AL) != Tag632(/*int32_t:268920:268920:246139:e*/p_94)) != l_1229[(g_449 + 9)][g_449]) >= 4L) && Tag633(/*int32_t:268920:268920:246139:e*/p_95))) != 0xC4B48858555C04CALL))))));
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
/*aft_stmt:246139*/
                        /*bef_stmt:246172*/
(**g_513) ^= Tag634(/*uint32_t:266742:268920:246172:e*/l_1275);
/*aft_stmt:246172*/
                        (***g_505) = func_98(l_101[1], l_1321[2]);
                    }
                    /*bef_stmt:246283*/
if (Tag635(/*int32_t:0:0:246283:e*/g_222))
                        goto lbl_1322;
/*aft_stmt:246283*/
                }
                else
                { /* block id: 586 */
                    /*bef_stmt:246304*/
return Tag636(/*int16_t:248954:248972:246304:e*/l_1320);
/*aft_stmt:246304*/
                }
/*aft_stmt:246309*/
                /*bef_stmt:248717*/
if (Tag637(/*int32_t:268920:268920:248717:e*/p_95))
                { /* block id: 589 */
                    uint64_t l_1329 = 0xAA9819C8BBB58F94LL;
                    uint8_t *l_1332[6][2];
                    int32_t ***l_1339 = &g_44;
                    int32_t ****l_1340 = &l_101[2];
                    int32_t ****l_1342 = &l_1341;
                    int16_t *l_1344 = &g_298;
                    uint8_t l_1345 = 0UL;
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1332[i][j] = (void*)0;
                    }
                    /*bef_stmt:246756*/
if (Tag638(/*int32_t:268920:268920:246756:e*/p_94))
                        break;
/*aft_stmt:246756*/
                    /*bef_stmt:247433*/
/*bef_stmt:247433*/
/*bef_stmt:247433*/
/*bef_stmt:247433*/
/*bef_stmt:247433*/
/*bef_stmt:247433*/
/*bef_stmt:247433*/
/*bef_stmt:247433*/
/*bef_stmt:247433*/
p_94 ^= ((*g_186) |= (((((*l_880)--) | (safe_sub_func_int16_t_s_s(((*l_1344) = (safe_mod_func_int32_t_s_s((((Tag639(/*int32_t:268920:268920:247433:e*/p_95) != ((**g_625) = (Tag640(/*uint64_t:247867:248954:247433:e*/l_1329) || (safe_sub_func_int32_t_s_s(((l_1332[2][1] != l_1333[4]) && (safe_add_func_int64_t_s_s(Tag641(/*int16_t:248972:266742:247433:e*/l_1336[3][1]), (((void*)0 != (*l_1200)) >= (((((safe_mul_func_int8_t_s_s((((*l_1340) = l_1339) != ((*l_1342) = l_1341)), (Tag642(/*uint8_t:0:0:247433:e*/*g_910)))) == 1L) & 0xDDL) != Tag643(/*int32_t:266742:268920:247433:e*/l_1229[6][0])) & Tag644(/*int32_t:268920:268920:247433:e*/p_95)))))), 4294967293UL))))) >= 0L) , Tag645(/*uint64_t:268920:268920:247433:e*/l_1343)), 1UL))), Tag646(/*int32_t:268920:268920:247433:e*/p_95)))) > 0xBB2EL) && Tag647(/*uint8_t:247867:248954:247433:e*/l_1345)));
/*aft_stmt:247433*/
/*aft_stmt:247433*/
/*aft_stmt:247433*/
/*aft_stmt:247433*/
/*aft_stmt:247433*/
/*aft_stmt:247433*/
/*aft_stmt:247433*/
/*aft_stmt:247433*/
/*aft_stmt:247433*/
                    /*bef_stmt:247863*/
/*bef_stmt:247863*/
/*bef_stmt:247863*/
/*bef_stmt:247863*/
(**g_513) = ((!(g_347 = (((l_1349[3] = (!((Tag648(/*int64_t:0:0:247863:e*/*g_626)) == (l_1298 = ((l_1348 = (-1L)) && 0x05C9B58C4E1927E6LL))))) >= Tag649(/*int32_t:268920:268920:247863:e*/p_95)) ^ ((safe_div_func_uint16_t_u_u(((**l_1200) |= (((void*)0 == l_1352) <= (Tag650(/*const uint16_t:0:0:247863:e*/**g_574)))), ((safe_div_func_uint64_t_u_u(((*g_504) == (*g_504)), 0xBF1DEC25E377698ELL)) ^ Tag651(/*int32_t:266742:268920:247863:e*/l_1230)))) , 255UL)))) , (-7L));
/*aft_stmt:247863*/
/*aft_stmt:247863*/
/*aft_stmt:247863*/
/*aft_stmt:247863*/
                }
                else
                { /* block id: 604 */
                    int32_t l_1359 = 0x284E4B1BL;
                    const int8_t *l_1366 = &g_763;
                    int32_t l_1372 = 0x97AA697BL;
                    int8_t *l_1373 = &g_347;
                    /*bef_stmt:248002*/
if (Tag652(/*int32_t:248954:248972:248002:e*/l_1349[3]))
                        break;
/*aft_stmt:248002*/
                    for (l_1058 = (-3); (l_1058 >= (-28)); --l_1058)
                    { /* block id: 608 */
                        int8_t **l_1374 = &l_865[2][6];
                        /*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
/*bef_stmt:248681*/
(**g_185) = (safe_mul_func_int16_t_s_s((Tag653(/*int32_t:248709:248954:248681:e*/l_1359) | ((((safe_rshift_func_int16_t_s_s((((*g_626) = (safe_sub_func_int32_t_s_s(Tag654(/*int32_t:268920:268920:248681:e*/p_94), (Tag655(/*const int32_t:0:0:248681:e*/*****g_504))))) != (safe_add_func_uint8_t_u_u(((l_1366 == ((*l_1374) = (((l_1372 = ((((*l_1272) |= (safe_unary_minus_func_int64_t_s((l_1298 = (safe_div_func_int16_t_s_s(Tag656(/*int16_t:0:0:248681:e*/g_298), Tag657(/*int32_t:248954:248972:248681:e*/l_1348))))))) && Tag658(/*int32_t:268920:268920:248681:e*/p_94)) >= (safe_mul_func_uint16_t_u_u(Tag659(/*int32_t:268920:268920:248681:e*/p_94), 65533UL)))) | 0x1E36L) , l_1373))) && Tag660(/*int32_t:248954:248972:248681:e*/l_1349[3])), (Tag661(/*uint8_t:0:0:248681:e*/**g_909))))), 3)) , (Tag662(/*const uint16_t:0:0:248681:e*/**g_574))) , Tag663(/*int32_t:268920:268920:248681:e*/p_94)) ^ Tag664(/*int32_t:268920:268920:248681:e*/p_95))), Tag665(/*uint8_t:0:0:248681:e*/g_150)));
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
/*aft_stmt:248681*/
                        /*bef_stmt:248695*/
return Tag666(/*int32_t:0:0:248695:e*/g_6);
/*aft_stmt:248695*/
                    }
                }
/*aft_stmt:248717*/
                (**l_1375) = func_98(l_1375, (*g_505));
                for (p_94 = 16; (p_94 >= (-13)); p_94--)
                { /* block id: 621 */
                    (**g_506) = (***g_505);
                    /*bef_stmt:248937*/
l_1298 |= ((*g_186) = (Tag667(/*const int32_t:0:0:248937:e*/***g_506)));
/*aft_stmt:248937*/
                }
            }
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
/*aft_stmt:248966*/
        }
        for (l_1275 = 0; (l_1275 > 53); l_1275++)
        { /* block id: 630 */
            uint8_t l_1386 = 0x48L;
            uint8_t ***l_1393[5][7][2] = {{{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]}},{{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]}},{{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]}},{{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&g_909},{&l_908[3][1][3],&l_908[3][1][3]}},{{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&g_909,&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&l_908[3][1][3]},{&l_908[3][1][3],&g_909},{&l_908[3][1][3],&l_908[3][1][3]}}};
            uint8_t ****l_1392[9][7][4] = {{{&l_1393[2][6][1],&l_1393[1][1][0],&l_1393[2][5][1],(void*)0},{(void*)0,&l_1393[1][2][1],&l_1393[2][3][0],(void*)0},{&l_1393[0][1][1],&l_1393[1][3][1],&l_1393[2][4][0],&l_1393[2][3][0]},{&l_1393[1][1][0],&l_1393[2][3][0],&l_1393[2][3][0],(void*)0},{&l_1393[1][1][0],&l_1393[4][4][0],&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[1][5][0],&l_1393[2][3][0]},{&l_1393[3][1][0],&l_1393[2][6][0],&l_1393[0][5][0],(void*)0}},{{&l_1393[1][1][0],&l_1393[2][5][0],&l_1393[2][3][0],(void*)0},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[1][6][0]},{&l_1393[3][2][0],&l_1393[1][1][0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1393[2][3][0]},{&l_1393[2][3][0],(void*)0,&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[2][6][0],(void*)0,&l_1393[2][3][0],&l_1393[2][1][0]},{(void*)0,(void*)0,&l_1393[1][6][0],(void*)0}},{{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[4][2][1],&l_1393[2][3][0]},{(void*)0,&l_1393[2][3][0],(void*)0,&l_1393[3][4][0]},{&l_1393[2][3][0],&l_1393[2][6][1],&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[1][2][1],&l_1393[0][1][1],&l_1393[2][6][1],&l_1393[2][6][1]},{&l_1393[2][3][0],&l_1393[2][5][1],&l_1393[2][6][1],&l_1393[2][3][0]},{&l_1393[1][2][1],&l_1393[2][1][1],&l_1393[2][3][0],&l_1393[1][2][1]},{&l_1393[2][3][0],&l_1393[2][3][0],(void*)0,&l_1393[1][5][0]}},{{(void*)0,&l_1393[1][5][0],&l_1393[4][2][1],&l_1393[2][3][0]},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[1][6][0],&l_1393[2][3][0]},{(void*)0,&l_1393[1][3][1],&l_1393[2][3][0],&l_1393[0][0][1]},{&l_1393[2][6][0],&l_1393[0][3][1],&l_1393[2][3][0],&l_1393[4][1][0]},{&l_1393[2][3][0],&l_1393[4][5][1],(void*)0,&l_1393[1][6][1]},{(void*)0,&l_1393[2][3][0],(void*)0,&l_1393[1][1][0]},{&l_1393[3][2][0],&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[2][3][0]}},{{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[2][3][0],(void*)0},{&l_1393[1][1][0],&l_1393[2][3][0],&l_1393[0][5][0],&l_1393[1][3][1]},{&l_1393[3][1][0],&l_1393[0][2][0],&l_1393[1][5][0],&l_1393[2][3][0]},{&l_1393[2][3][0],&l_1393[2][6][1],&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[1][1][0],&l_1393[0][4][1],&l_1393[2][3][0],(void*)0},{&l_1393[1][1][0],&l_1393[2][3][0],&l_1393[2][4][0],(void*)0},{&l_1393[0][1][1],&l_1393[4][0][0],&l_1393[2][3][0],&l_1393[2][3][0]}},{{(void*)0,&l_1393[3][5][1],&l_1393[2][5][1],&l_1393[0][0][1]},{&l_1393[2][6][1],&l_1393[2][3][0],&l_1393[0][0][1],(void*)0},{(void*)0,&l_1393[3][4][0],&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[1][3][0],&l_1393[2][3][0]},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[3][1][0],&l_1393[2][6][0]},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[3][2][0],&l_1393[0][3][1]},{&l_1393[1][2][1],&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[2][3][0]}},{{(void*)0,(void*)0,&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[0][5][0],&l_1393[2][3][0],&l_1393[2][3][0],(void*)0},{&l_1393[2][3][0],&l_1393[2][5][1],&l_1393[1][2][1],&l_1393[2][3][0]},{(void*)0,&l_1393[2][5][1],&l_1393[2][3][0],(void*)0},{&l_1393[2][5][1],&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[1][1][0],&l_1393[0][0][1],&l_1393[4][2][1],&l_1393[2][1][0]}},{{&l_1393[2][1][1],&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[3][2][0]},{&l_1393[2][3][0],&l_1393[2][6][1],&l_1393[2][3][0],&l_1393[0][0][1]},{(void*)0,&l_1393[4][2][1],&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[0][0][1],&l_1393[2][4][0],&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[0][0][1],&l_1393[2][3][0]},{(void*)0,&l_1393[2][3][0],(void*)0,&l_1393[2][3][0]},{&l_1393[1][6][0],&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[4][4][0]}},{{&l_1393[2][6][1],&l_1393[2][3][0],&l_1393[0][5][0],&l_1393[2][3][0]},{&l_1393[1][4][1],&l_1393[1][3][1],&l_1393[2][6][1],&l_1393[1][1][0]},{(void*)0,(void*)0,&l_1393[2][3][0],&l_1393[4][0][0]},{&l_1393[1][1][0],(void*)0,&l_1393[2][3][0],&l_1393[2][3][0]},{&l_1393[2][3][0],&l_1393[2][3][0],(void*)0,&l_1393[2][6][1]},{(void*)0,&l_1393[0][2][0],&l_1393[1][1][0],&l_1393[0][0][1]},{&l_1393[2][3][0],&l_1393[2][3][0],&l_1393[1][3][0],(void*)0}}};
            uint64_t l_1404[4];
            int32_t l_1412 = 0x49FA61ECL;
            int32_t l_1444 = 1L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1404[i] = 18446744073709551606UL;
            /*bef_stmt:265935*/
/*bef_stmt:265935*/
/*bef_stmt:265935*/
/*bef_stmt:265935*/
/*bef_stmt:265935*/
/*bef_stmt:265935*/
/*bef_stmt:265935*/
/*bef_stmt:265935*/
if ((safe_mod_func_int8_t_s_s(Tag668(/*int32_t:268920:268920:265935:e*/p_95), (safe_mul_func_int16_t_s_s((Tag669(/*int32_t:268920:268920:265935:e*/p_95) > (safe_add_func_uint8_t_u_u(Tag670(/*uint8_t:266722:266742:265935:e*/l_1386), 0xCAL))), (~(safe_div_func_uint32_t_u_u(((-1L) == (Tag671(/*int32_t:268920:268920:265935:e*/p_95) && (safe_mul_func_uint8_t_u_u(0x06L, (Tag672(/*uint8_t:0:0:265935:e*/g_150) > (Tag673(/*uint8_t:266722:266742:265935:e*/l_1386) , Tag674(/*int32_t:0:0:265935:e*/g_2))))))), (Tag675(/*int32_t:266742:268920:265935:e*/***l_1375))))))))))
            { /* block id: 631 */
                uint8_t *****l_1394 = &l_1392[8][3][3];
                int16_t *l_1407 = &l_888;
                (*l_1394) = l_1392[8][3][3];
                (*l_103) = ((***g_505) = (**g_506));
                for (p_95 = 0; (p_95 >= (-3)); p_95--)
                { /* block id: 637 */
                    /*bef_stmt:265902*/
if ((safe_unary_minus_func_uint16_t_u(((**l_1200) |= Tag676(/*uint8_t:266722:266742:265902:e*/l_1386)))))
                    { /* block id: 639 */
                        /*bef_stmt:265141*/
p_94 = (Tag677(/*int32_t:268920:268920:265141:e*/p_94) >= ((void*)0 == &g_909));
/*aft_stmt:265141*/
                        /*bef_stmt:265155*/
return Tag678(/*int32_t:268920:268920:265155:e*/p_94);
/*aft_stmt:265155*/
                    }
                    else
                    { /* block id: 642 */
                        int16_t *l_1406 = &l_888;
                        int16_t **l_1408 = &l_1407;
                        int32_t l_1411[1][1][7] = {{{0x1E1959D3L,(-10L),0x1E1959D3L,0x1E1959D3L,(-10L),0x1E1959D3L,0x1E1959D3L}}};
                        int i, j, k;
                        p_94 |= 0xA63D9581L;
                        /*bef_stmt:265789*/
/*bef_stmt:265789*/
/*bef_stmt:265789*/
/*bef_stmt:265789*/
(**g_513) = ((safe_mul_func_int8_t_s_s(((0xCABFL | ((((safe_mod_func_uint16_t_u_u(1UL, 0x173DL)) & ((Tag679(/*uint64_t:0:0:265789:e*/*g_742)) > 0L)) , Tag680(/*int32_t:268920:268920:265789:e*/p_94)) & (safe_mul_func_uint8_t_u_u(Tag681(/*uint64_t:266722:266742:265789:e*/l_1404[0]), (~(l_1406 != ((*l_1408) = l_1407))))))) && 0xEF7D7D30L), Tag682(/*int32_t:0:0:265789:e*/g_222))) , (-1L));
/*aft_stmt:265789*/
/*aft_stmt:265789*/
/*aft_stmt:265789*/
/*aft_stmt:265789*/
                        /*bef_stmt:265889*/
p_94 = (safe_lshift_func_int16_t_s_s((g_655 = Tag683(/*int32_t:265893:265908:265889:e*/l_1411[0][0][2])), 10));
/*aft_stmt:265889*/
                    }
/*aft_stmt:265902*/
                }
            }
            else
            { /* block id: 650 */
                l_1413--;
            }
/*aft_stmt:265935*/
/*aft_stmt:265935*/
/*aft_stmt:265935*/
/*aft_stmt:265935*/
/*aft_stmt:265935*/
/*aft_stmt:265935*/
/*aft_stmt:265935*/
/*aft_stmt:265935*/
            /*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
/*bef_stmt:266691*/
l_1444 ^= (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_1422[4][0] = Tag684(/*uint64_t:266722:266742:266691:e*/l_1404[0])), ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(((((!((Tag685(/*int32_t:0:0:266691:e*/g_68) ^ 0x835CL) | 0xC8L)) >= (safe_sub_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(((*g_626) = (safe_mul_func_int8_t_s_s((l_1412 = (safe_add_func_uint8_t_u_u((Tag686(/*uint64_t:266722:266742:266691:e*/l_1404[2]) | Tag687(/*int32_t:0:0:266691:e*/g_2)), (&p_94 != (*g_513))))), Tag688(/*uint8_t:266722:266742:266691:e*/l_1386)))), 1L)) , (Tag689(/*int32_t:266742:268920:266691:e*/***l_1375))), (Tag690(/*uint64_t:0:0:266691:e*/*g_742))))) , 18446744073709551614UL) || Tag691(/*int32_t:268920:268920:266691:e*/p_94)), Tag692(/*uint8_t:266722:266742:266691:e*/l_1386))) , (*l_1200)) != (*l_1200)), Tag693(/*int32_t:268920:268920:266691:e*/p_95))), Tag694(/*int32_t:268920:268920:266691:e*/p_95))), Tag695(/*int32_t:268920:268920:266691:e*/p_95))), Tag696(/*int32_t:268920:268920:266691:e*/p_94))), Tag697(/*int32_t:268920:268920:266691:e*/p_95))) ^ Tag698(/*int32_t:268920:268920:266691:e*/p_94)))), 5)) >= (-1L)), Tag699(/*int32_t:268920:268920:266691:e*/p_95)));
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
/*aft_stmt:266691*/
            (*g_185) = &p_94;
        }
    }
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
/*aft_stmt:266755*/
    for (g_224 = (-21); (g_224 == 42); g_224 = safe_add_func_uint16_t_u_u(g_224, 8))
    { /* block id: 662 */
        int32_t *l_1449 = &g_68;
        int32_t l_1479[9][6] = {{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL},{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL},{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL},{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL},{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL},{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL},{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL},{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL},{0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL,0x6C1C18CDL}};
        int16_t *l_1506 = &l_1058;
        uint32_t l_1510[5][2][7] = {{{0UL,0UL,0x60C55C5BL,0UL,0UL,0x60C55C5BL,0UL},{0UL,1UL,1UL,0UL,1UL,1UL,0UL}},{{1UL,0UL,1UL,1UL,0UL,1UL,1UL},{0UL,0UL,0x60C55C5BL,0UL,0UL,0x60C55C5BL,0UL}},{{0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL}},{{0UL,0UL,0x60C55C5BL,0UL,0UL,0UL,1UL},{1UL,0x60C55C5BL,0x60C55C5BL,1UL,0x60C55C5BL,0x60C55C5BL,1UL}},{{0x60C55C5BL,1UL,0x60C55C5BL,0x60C55C5BL,1UL,0x60C55C5BL,0x60C55C5BL},{1UL,1UL,0UL,1UL,1UL,0UL,1UL}}};
        uint64_t l_1511[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1511[i] = 18446744073709551615UL;
    }
    /*bef_stmt:268918*/
return Tag700(/*int32_t:268920:268920:268918:e*/p_94);
/*aft_stmt:268918*/
}


/* ------------------------------------------ */
/* 
 * reads : g_88
 * writes: g_88
 */
static int32_t * func_98(int32_t *** p_99, const int32_t *** p_100)
{ /* block id: 27 */
    uint64_t l_111[8][7] = {{0xA1F81FC11418CD0ELL,1UL,0x8B361F168752EB69LL,18446744073709551606UL,1UL,0x7FA13A89CE68EBBCLL,0xE4373440B9FCDB2BLL},{0xE4373440B9FCDB2BLL,0x40B10513B6624E94LL,0x53ECDF3DC4946A2BLL,0x53ECDF3DC4946A2BLL,0x40B10513B6624E94LL,0xE4373440B9FCDB2BLL,1UL},{0x40B10513B6624E94LL,0x8B361F168752EB69LL,1UL,0x53ECDF3DC4946A2BLL,18446744073709551615UL,0xA9F1E5685F082010LL,0x618944B8798E375BLL},{0UL,0xE4373440B9FCDB2BLL,18446744073709551615UL,18446744073709551606UL,1UL,18446744073709551606UL,18446744073709551615UL},{0x8B361F168752EB69LL,0x8B361F168752EB69LL,0x7FA13A89CE68EBBCLL,18446744073709551615UL,0x53ECDF3DC4946A2BLL,0xA1F81FC11418CD0ELL,18446744073709551615UL},{1UL,0x40B10513B6624E94LL,18446744073709551615UL,0x8B361F168752EB69LL,18446744073709551615UL,0x618944B8798E375BLL,0x618944B8798E375BLL},{0x53ECDF3DC4946A2BLL,1UL,0UL,1UL,0x53ECDF3DC4946A2BLL,0x8B361F168752EB69LL,1UL},{0xA9F1E5685F082010LL,0x7FA13A89CE68EBBCLL,0UL,0x57B2633072FE88D3LL,1UL,18446744073709551615UL,0xE4373440B9FCDB2BLL}};
    int32_t *l_858[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_858[i] = &g_787[3][1][0];
    for (g_88 = 0; (g_88 != 4); ++g_88)
    { /* block id: 30 */
        const uint16_t *l_130 = &g_131;
        uint16_t *l_132 = &g_131;
        int32_t l_137 = 0x5564AC20L;
        uint32_t *l_170 = &g_168;
    }
    return l_858[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_26 g_506 g_507 g_508 g_504 g_505 g_260 g_256 g_298 g_372 g_449 g_574 g_575 g_626 g_197 g_185 g_186 g_2 g_224 g_131 g_20 g_625 g_6 g_68 g_655 g_513 g_168 g_347 g_763 g_514 g_44 g_45
 * writes: g_508 g_260 g_256 g_298 g_2 g_347 g_131 g_372 g_150 g_26 g_655 g_514 g_168 g_742
 */
static int32_t * func_107(uint32_t  p_108, const int32_t * p_109, uint32_t  p_110)
{ /* block id: 47 */
    int32_t l_175 = 0L;
    int32_t *l_184 = &g_2;
    int32_t **l_183[6] = {&l_184,&l_184,&l_184,&l_184,&l_184,&l_184};
    uint16_t l_306 = 0UL;
    uint8_t *l_393 = &g_20;
    uint64_t l_431 = 0UL;
    uint32_t l_432 = 3UL;
    int32_t *****l_443 = (void*)0;
    int64_t *l_479 = (void*)0;
    const int64_t *l_489 = &g_180;
    int32_t l_532 = 4L;
    int32_t l_608 = 1L;
    uint16_t l_614[1][9] = {{0xFBF5L,0xFBF5L,0xB042L,0xFBF5L,0xFBF5L,0xB042L,0xFBF5L,0xFBF5L,0xB042L}};
    uint32_t l_657[4][2];
    const int64_t *l_697 = &g_180;
    int32_t *l_736 = &g_6;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_657[i][j] = 0xC3523A17L;
    }
    /*bef_stmt:277270*/
/*bef_stmt:277270*/
/*bef_stmt:277270*/
/*bef_stmt:277270*/
if (((l_175 = (Tag701(/*uint32_t:286180:286180:277270:e*/p_110) >= (0xFD48341D410C6DFDLL ^ ((safe_lshift_func_int8_t_s_s(Tag702(/*uint64_t:0:0:277270:e*/g_26), Tag703(/*uint32_t:286180:286180:277270:e*/p_108))) && 0L)))) != Tag704(/*uint32_t:286180:286180:277270:e*/p_108)))
    { /* block id: 49 */
        int64_t l_178 = 0x9704766C6174CE2ELL;
        int64_t *l_179 = &g_180;
        int32_t **l_181[3];
        int32_t ***l_182[7][7][5] = {{{&g_44,&l_181[0],&g_44,&l_181[0],&g_44},{&g_44,(void*)0,&l_181[0],(void*)0,&g_44},{&g_44,&g_44,&l_181[0],(void*)0,&l_181[0]},{&l_181[2],&l_181[2],&l_181[0],&g_44,&l_181[0]},{&g_44,&g_44,&g_44,&g_44,&l_181[0]},{(void*)0,&g_44,&l_181[0],&l_181[0],&g_44},{&l_181[0],&g_44,&l_181[0],&g_44,&g_44}},{{(void*)0,&l_181[2],(void*)0,&l_181[0],&l_181[0]},{(void*)0,&g_44,&g_44,&g_44,(void*)0},{(void*)0,(void*)0,&l_181[2],&g_44,&l_181[2]},{&l_181[0],&l_181[0],&g_44,(void*)0,&l_181[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_181[2]},{&g_44,(void*)0,&l_181[0],&l_181[0],(void*)0},{&l_181[2],(void*)0,&l_181[0],&l_181[0],&l_181[0]}},{{&g_44,&l_181[0],&g_44,&l_181[0],&g_44},{&g_44,(void*)0,&l_181[0],(void*)0,&g_44},{&g_44,&g_44,&l_181[0],(void*)0,&l_181[0]},{&l_181[2],&l_181[2],&l_181[0],&g_44,&l_181[0]},{&g_44,&g_44,&g_44,&g_44,&l_181[0]},{(void*)0,&g_44,&l_181[0],&l_181[0],&l_181[0]},{&l_181[0],(void*)0,&g_44,&l_181[0],&l_181[0]}},{{&g_44,&l_181[0],&g_44,&l_181[0],&l_181[2]},{&l_181[0],&g_44,&l_181[0],&g_44,&l_181[0]},{&g_44,(void*)0,&l_181[0],&l_181[0],&l_181[0]},{&l_181[0],&l_181[0],&l_181[0],&l_181[0],&g_44},{(void*)0,&g_44,&g_44,(void*)0,&l_181[0]},{&g_44,&l_181[0],&g_44,&g_44,&l_181[0]},{&l_181[0],&g_44,&l_181[0],&l_181[2],&l_181[2]}},{{(void*)0,&l_181[0],(void*)0,&g_44,&l_181[0]},{&l_181[0],(void*)0,&l_181[2],(void*)0,&l_181[0]},{(void*)0,&g_44,&l_181[0],&l_181[0],&l_181[0]},{&l_181[0],&l_181[0],&l_181[2],&l_181[0],(void*)0},{&g_44,(void*)0,(void*)0,&g_44,&l_181[0]},{(void*)0,&l_181[0],&l_181[0],&l_181[0],&l_181[0]},{&l_181[0],(void*)0,&g_44,&l_181[0],&l_181[0]}},{{&g_44,&l_181[0],&g_44,&l_181[0],&l_181[2]},{&l_181[0],&g_44,&l_181[0],&g_44,&l_181[0]},{&g_44,(void*)0,&l_181[0],&l_181[0],&l_181[0]},{&l_181[0],&l_181[0],&l_181[0],&l_181[0],&g_44},{(void*)0,&g_44,&g_44,(void*)0,&l_181[0]},{&g_44,&l_181[0],&g_44,&g_44,&l_181[0]},{&l_181[0],&g_44,&l_181[0],&l_181[2],&l_181[2]}},{{(void*)0,&l_181[0],(void*)0,&g_44,&l_181[0]},{&l_181[0],(void*)0,&l_181[2],(void*)0,&l_181[0]},{(void*)0,&g_44,&l_181[0],&l_181[0],&l_181[0]},{&l_181[0],&l_181[0],&l_181[2],&l_181[0],(void*)0},{&g_44,(void*)0,(void*)0,&g_44,&l_181[0]},{(void*)0,&l_181[0],&l_181[0],&l_181[0],&l_181[0]},{&l_181[0],(void*)0,&g_44,&l_181[0],&l_181[0]}}};
        uint16_t *l_317 = &l_306;
        uint16_t **l_316 = &l_317;
        uint16_t *l_319 = (void*)0;
        uint16_t **l_318 = &l_319;
        uint16_t *l_320[6] = {&g_131,&g_131,&g_131,&g_131,&g_131,&g_131};
        int32_t l_488 = 0x8F860F2EL;
        const int32_t *****l_509 = &g_505;
        int8_t l_612 = 0x25L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_181[i] = &g_45;
    }
    else
    { /* block id: 279 */
        (****g_504) = (**g_506);
    }
/*aft_stmt:277270*/
/*aft_stmt:277270*/
/*aft_stmt:277270*/
/*aft_stmt:277270*/
    for (g_260 = 0; (g_260 <= 1); g_260 += 1)
    { /* block id: 284 */
        uint16_t *l_676 = (void*)0;
        const int32_t l_679 = 0x102237A1L;
        int32_t l_687 = 1L;
        int32_t l_696[9] = {0xA275CDC3L,0xA275CDC3L,0xA275CDC3L,0xA275CDC3L,0xA275CDC3L,0xA275CDC3L,0xA275CDC3L,0xA275CDC3L,0xA275CDC3L};
        const int8_t *l_710 = (void*)0;
        const uint64_t *l_739 = (void*)0;
        uint8_t * const *l_830 = &l_393;
        int i;
        for (g_256 = 0; (g_256 <= 1); g_256 += 1)
        { /* block id: 287 */
            uint32_t l_658 = 0UL;
            int32_t l_680 = 1L;
            int32_t *****l_720 = &g_361;
            --l_658;
            for (g_298 = 0; (g_298 <= 1); g_298 += 1)
            { /* block id: 291 */
                int i, j;
                /*bef_stmt:278491*/
/*bef_stmt:278491*/
/*bef_stmt:278491*/
/*bef_stmt:278491*/
/*bef_stmt:278491*/
/*bef_stmt:278491*/
/*bef_stmt:278491*/
/*bef_stmt:278491*/
/*bef_stmt:278491*/
/*bef_stmt:278491*/
(**g_185) &= ((0x056350959DFD9E39LL ^ l_657[(g_256 + 1)][g_298]) | (safe_mod_func_int8_t_s_s(((Tag705(/*uint32_t:286180:286180:278491:e*/p_110) || (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(l_657[(g_256 + 1)][g_298], (!(((((safe_add_func_uint8_t_u_u(Tag706(/*uint8_t:0:0:278491:e*/g_372), Tag707(/*uint64_t:0:0:278491:e*/g_449))) , (safe_rshift_func_uint8_t_u_u((l_676 != (((safe_lshift_func_uint8_t_u_s(Tag708(/*uint32_t:286180:286180:278491:e*/p_108), Tag709(/*const int32_t:286142:286180:278491:e*/l_679))) == 0x8245L) , (*g_574))), 5))) || 0L) || Tag710(/*const int32_t:286142:286180:278491:e*/l_679)) | l_657[(g_256 + 1)][g_298])))), (Tag711(/*int64_t:0:0:278491:e*/*g_626)))), 255UL)), Tag712(/*uint32_t:286180:286180:278491:e*/p_108)))) || Tag713(/*int32_t:284755:286142:278491:e*/l_680)), Tag714(/*uint32_t:286180:286180:278491:e*/p_108))));
/*aft_stmt:278491*/
/*aft_stmt:278491*/
/*aft_stmt:278491*/
/*aft_stmt:278491*/
/*aft_stmt:278491*/
/*aft_stmt:278491*/
/*aft_stmt:278491*/
/*aft_stmt:278491*/
/*aft_stmt:278491*/
/*aft_stmt:278491*/
            }
            for (g_347 = 1; (g_347 >= 0); g_347 -= 1)
            { /* block id: 296 */
                int32_t l_692[2][10][6] = {{{1L,0L,0x6AC78369L,0x1C41CFDDL,(-6L),0x72DAB1A7L},{1L,1L,0L,0xF5EA6A72L,0L,0x42E43F03L},{1L,1L,0L,0xADDF96A9L,0xADDF96A9L,0L},{0xC49D0F23L,0xC49D0F23L,0x6EF1E140L,0x667349DEL,(-1L),0L},{8L,(-6L),0L,0x42E43F03L,(-5L),0L},{0L,0xADDF96A9L,0x9DF30B3FL,0x72DAB1A7L,0x02E9200EL,8L},{1L,0x72DAB1A7L,0L,(-1L),0L,0x667349DEL},{(-1L),0L,0x667349DEL,(-9L),0xF296BF6FL,0x6EF1E140L},{(-6L),(-1L),0L,(-1L),(-5L),(-9L)},{(-5L),2L,0x42E43F03L,1L,5L,0x72DAB1A7L}},{{0x42E43F03L,(-6L),(-1L),(-5L),(-1L),(-6L)},{0x9DF30B3FL,0x055F8D67L,(-5L),2L,0x72DAB1A7L,0xF296BF6FL},{0x6AC78369L,1L,0L,0x8D5BACB6L,1L,(-6L)},{(-3L),1L,0xD05CAEF9L,0xBC6336FEL,0x72DAB1A7L,0x1A0AD856L},{(-6L),0x055F8D67L,(-5L),1L,(-1L),0x62415062L},{0x055F8D67L,(-6L),0x6E5B3B5DL,0L,5L,0x6AC78369L},{2L,2L,(-6L),0x667349DEL,(-5L),(-1L)},{0x6E5B3B5DL,(-1L),0L,(-6L),0xF296BF6FL,(-1L)},{1L,0L,0xADDF96A9L,0xADDF96A9L,0L,1L},{0x667349DEL,0x72DAB1A7L,(-1L),(-6L),0x02E9200EL,0xBC6336FEL}}};
                uint64_t *l_695[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t *l_698 = &g_372;
                int16_t *l_699[5] = {&g_655,&g_655,&g_655,&g_655,&g_655};
                int32_t l_700 = 0x247EBA00L;
                int i, j, k;
                /*bef_stmt:281506*/
/*bef_stmt:281506*/
/*bef_stmt:281506*/
/*bef_stmt:281506*/
/*bef_stmt:281506*/
/*bef_stmt:281506*/
/*bef_stmt:281506*/
/*bef_stmt:281506*/
/*bef_stmt:281506*/
/*bef_stmt:281506*/
l_700 ^= (l_692[0][6][0] = (safe_mod_func_int8_t_s_s((((Tag715(/*int64_t:0:0:281506:e*/g_197[0][1][0]) == (safe_mul_func_int16_t_s_s((l_680 = (safe_sub_func_int16_t_s_s((l_687 &= 0x1D90L), (Tag716(/*uint32_t:0:0:281506:e*/g_224) > ((*l_698) = (((-1L) && (safe_add_func_uint8_t_u_u((Tag717(/*uint32_t:0:0:281506:e*/g_224) | ((safe_div_func_uint64_t_u_u((l_696[7] = (65532UL > (++g_131))), ((Tag718(/*uint32_t:286180:286180:281506:e*/p_110) <= (((void*)0 != l_697) , g_256)) ^ Tag719(/*uint8_t:0:0:281506:e*/g_20)))) < 4294967287UL)), Tag720(/*int32_t:281558:284755:281506:e*/l_692[1][5][4])))) ^ (Tag721(/*int64_t:0:0:281506:e*/**g_625)))))))), Tag722(/*uint32_t:286180:286180:281506:e*/p_108)))) , Tag723(/*uint32_t:286180:286180:281506:e*/p_110)) == 1UL), Tag724(/*uint32_t:284755:286142:281506:e*/l_658))));
/*aft_stmt:281506*/
/*aft_stmt:281506*/
/*aft_stmt:281506*/
/*aft_stmt:281506*/
/*aft_stmt:281506*/
/*aft_stmt:281506*/
/*aft_stmt:281506*/
/*aft_stmt:281506*/
/*aft_stmt:281506*/
/*aft_stmt:281506*/
                /*bef_stmt:281552*/
(*g_186) &= (Tag725(/*int32_t:281558:284755:281552:e*/l_700) || (-7L));
/*aft_stmt:281552*/
            }
            for (g_150 = 0; (g_150 <= 1); g_150 += 1)
            { /* block id: 308 */
                uint16_t l_703 = 65533UL;
                uint64_t *l_704 = &l_431;
                uint64_t *l_712 = &g_26;
                int16_t *l_713 = (void*)0;
                int16_t *l_714[2][10][1] = {{{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298}},{{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298},{&g_298}}};
                int16_t l_734 = 0xCA69L;
                int32_t *l_735 = &g_6;
                int i, j, k;
                /*bef_stmt:284731*/
/*bef_stmt:284731*/
/*bef_stmt:284731*/
/*bef_stmt:284731*/
/*bef_stmt:284731*/
/*bef_stmt:284731*/
if ((((safe_mod_func_uint64_t_u_u(((*l_704) = Tag726(/*uint16_t:284737:284755:284731:e*/l_703)), 6UL)) >= ((+((*l_184) = (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((l_710 != l_710), 6)), (((!((*l_712) = (Tag727(/*uint32_t:286180:286180:284731:e*/p_110) || (Tag728(/*const int32_t:0:0:284731:e*/***g_506))))) == 0L) >= (g_655 &= Tag729(/*int32_t:0:0:284731:e*/g_68))))) != (Tag730(/*uint32_t:286180:286180:284731:e*/p_108) == (-1L))) , 0L))) <= (-8L))) && (Tag731(/*int32_t:286180:286180:284731:e*/*l_184))))
                { /* block id: 313 */
                    return (*g_185);
                }
                else
                { /* block id: 315 */
                    int32_t *****l_719[9][8] = {{&g_361,(void*)0,&g_361,&g_361,(void*)0,&g_361,&g_361,(void*)0},{(void*)0,&g_361,&g_361,(void*)0,&g_361,&g_361,(void*)0,&g_361},{(void*)0,&g_361,&g_361,&g_361,(void*)0,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,(void*)0,&g_361,&g_361,&g_361,&g_361,(void*)0,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361}};
                    int32_t l_733 = 1L;
                    int i, j;
                    /*bef_stmt:284719*/
/*bef_stmt:284719*/
/*bef_stmt:284719*/
/*bef_stmt:284719*/
/*bef_stmt:284719*/
/*bef_stmt:284719*/
/*bef_stmt:284719*/
/*bef_stmt:284719*/
if ((safe_mod_func_int8_t_s_s(Tag732(/*uint32_t:0:0:284719:e*/g_224), (Tag733(/*uint16_t:0:0:284719:e*/g_131) || ((((&p_110 == (void*)0) , ((safe_mod_func_int64_t_s_s(((l_719[8][6] = &g_361) != (l_720 = &g_361)), (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(0x7148L, (l_733 = (safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(Tag734(/*uint32_t:286180:286180:284719:e*/p_110), 9)) , (((safe_rshift_func_uint8_t_u_s(0xF3L, Tag735(/*int32_t:284725:284737:284719:e*/l_733))) < 0L) >= Tag736(/*int32_t:286142:286180:284719:e*/l_696[1]))) >= Tag737(/*uint32_t:284755:286142:284719:e*/l_658)), 2))))), 1UL)))) >= Tag738(/*int32_t:286142:286180:284719:e*/l_687))) < 0xF8DEL) , Tag739(/*uint16_t:284737:284755:284719:e*/l_703))))))
                    { /* block id: 319 */
                        /*bef_stmt:284690*/
l_734 = (((*g_513) = (*g_185)) == (Tag740(/*uint32_t:0:0:284690:e*/g_168) , p_109));
/*aft_stmt:284690*/
                        return l_735;
                    }
                    else
                    { /* block id: 323 */
                        return l_736;
                    }
/*aft_stmt:284719*/
/*aft_stmt:284719*/
/*aft_stmt:284719*/
/*aft_stmt:284719*/
/*aft_stmt:284719*/
/*aft_stmt:284719*/
/*aft_stmt:284719*/
/*aft_stmt:284719*/
                }
/*aft_stmt:284731*/
/*aft_stmt:284731*/
/*aft_stmt:284731*/
/*aft_stmt:284731*/
/*aft_stmt:284731*/
/*aft_stmt:284731*/
            }
        }
        for (g_168 = 0; (g_168 <= 1); g_168 += 1)
        { /* block id: 331 */
            uint64_t *l_741 = (void*)0;
            uint64_t **l_740[8];
            const int32_t l_744 = (-1L);
            int16_t *l_750 = &g_298;
            int32_t l_789[2][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
            uint8_t **l_831 = &l_393;
            int8_t l_837 = 0xBAL;
            int32_t l_842 = 0x7767393DL;
            int32_t ***l_849 = &l_183[0];
            int32_t ****l_848 = &l_849;
            int i, j;
            for (i = 0; i < 8; i++)
                l_740[i] = &l_741;
            /*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
/*bef_stmt:286057*/
(**g_513) = ((((safe_mod_func_int64_t_s_s((l_739 != (g_742 = &g_256)), (safe_unary_minus_func_int64_t_s(Tag741(/*const int32_t:286118:286142:286057:e*/l_744))))) | (+(Tag742(/*uint32_t:286180:286180:286057:e*/p_110) ^ (safe_lshift_func_int16_t_s_s(Tag743(/*int8_t:0:0:286057:e*/g_347), 9))))) | ((&g_655 == l_750) == (((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((((safe_add_func_uint64_t_u_u((((0x9AF7L && (safe_mod_func_uint8_t_u_u(((0x68L ^ Tag744(/*int32_t:0:0:286057:e*/g_68)) == Tag745(/*uint32_t:286180:286180:286057:e*/p_110)), 0x40L))) | 0xA2ADL) ^ Tag746(/*uint32_t:286180:286180:286057:e*/p_108)), Tag747(/*const int32_t:286118:286142:286057:e*/l_744))) , Tag748(/*int32_t:0:0:286057:e*/g_6)) , (Tag749(/*int64_t:0:0:286057:e*/*g_626))) < Tag750(/*int32_t:286142:286180:286057:e*/l_696[7])), Tag751(/*uint32_t:0:0:286057:e*/g_224))), Tag752(/*const int8_t:0:0:286057:e*/g_763))), 0xC2L)), Tag753(/*int8_t:0:0:286057:e*/g_347))) , &l_432) != (void*)0))) > 0x88L);
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
/*aft_stmt:286057*/
            /*bef_stmt:286091*/
if (Tag754(/*int32_t:286142:286180:286091:e*/l_696[7]))
                continue;
/*aft_stmt:286091*/
            /*bef_stmt:286114*/
if (Tag755(/*int32_t:286142:286180:286114:e*/l_696[7]))
                continue;
/*aft_stmt:286114*/
        }
    }
    return (*g_44);
}


/* ------------------------------------------ */
/* 
 * reads : g_2 g_131 g_168
 * writes: g_2 g_131 g_150 g_168
 */
static uint32_t  func_112(uint8_t  p_113)
{ /* block id: 32 */
    int64_t l_145 = 0xB3D0AF170B72F399LL;
    int32_t l_165 = 0x94C91969L;
    for (g_2 = 0; (g_2 >= 11); g_2++)
    { /* block id: 35 */
        int16_t l_166 = (-4L);
        int32_t l_169 = 0x0B1A2B57L;
        for (g_131 = 22; (g_131 == 50); g_131 = safe_add_func_uint16_t_u_u(g_131, 2))
        { /* block id: 38 */
            uint8_t *l_146 = (void*)0;
            uint8_t *l_147 = (void*)0;
            uint8_t *l_148 = (void*)0;
            uint8_t *l_149 = &g_150;
            uint32_t *l_167 = &g_168;
            /*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
/*bef_stmt:287265*/
l_169 &= (+(((safe_lshift_func_int16_t_s_u(((((&g_131 != (void*)0) , Tag756(/*int64_t:287307:287307:287265:e*/l_145)) > (((*l_149) = g_131) , (safe_add_func_uint32_t_u_u((4L == (safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((((0x92DBL < (((*l_167) = ((Tag757(/*uint8_t:287307:287307:287265:e*/p_113) != Tag758(/*int64_t:287307:287307:287265:e*/l_145)) ^ (safe_div_func_int32_t_s_s((l_165 ^= (safe_add_func_int32_t_s_s((-1L), Tag759(/*uint8_t:287307:287307:287265:e*/p_113)))), Tag760(/*int16_t:287286:287307:287265:e*/l_166))))) <= 0xA00283E5L)) , 0x9428C401L) <= 0x7B641BACL), Tag761(/*uint8_t:287307:287307:287265:e*/p_113))) , Tag762(/*int32_t:287307:287307:287265:e*/l_165)) == Tag763(/*uint8_t:287307:287307:287265:e*/p_113)), Tag764(/*uint8_t:287307:287307:287265:e*/p_113))) | g_2), 0x17A65E2B664D7910LL)) != 0xB87FL), 0))), g_131)))) , Tag765(/*uint32_t:0:0:287265:e*/g_168)), Tag766(/*int64_t:287307:287307:287265:e*/l_145))) > 1UL) < 65528UL));
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
/*aft_stmt:287265*/
        }
    }
    /*bef_stmt:287305*/
return Tag767(/*uint32_t:0:0:287305:e*/g_168);
/*aft_stmt:287305*/
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
    printf("g_2: %d\n", g_2);
    printf("g_131: %u\n", (unsigned int)g_131);
    printf("g_150: %u\n", (unsigned int)g_150);
    printf("g_168: %lu\n", (unsigned long)g_168);
    printf("g_26: %lu\n", (unsigned long)g_26);
    printf("g_298: %d\n", (int)g_298);
    printf("g_347: %d\n", (int)g_347);
    printf("g_372: %u\n", (unsigned int)g_372);
    printf("g_655: %d\n", (int)g_655);
    printf("g_68: %d\n", g_68);
    printf("g_88: %d\n", (int)g_88);
    printf("g_222: %d\n", g_222);
    printf("g_224: %lu\n", (unsigned long)g_224);
    printf("g_260: %lu\n", (unsigned long)g_260);

    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_197[i][j][k], "g_197[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_787[i][j][k], "g_787[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_802[i][j][k], "g_802[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_965, "g_965", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1542, "g_1542", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1623[i], "g_1623[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1796[i][j][k], "g_1796[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1851, "g_1851", print_hash_value);
    transparent_crc(g_1854, "g_1854", print_hash_value);
    transparent_crc(g_1869, "g_1869", print_hash_value);
    transparent_crc(g_1873, "g_1873", print_hash_value);
    transparent_crc(g_1974, "g_1974", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2003[i], "g_2003[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2131, "g_2131", print_hash_value);
    transparent_crc(g_2177, "g_2177", print_hash_value);
    transparent_crc(g_2212, "g_2212", print_hash_value);
    transparent_crc(g_2352, "g_2352", print_hash_value);
    transparent_crc(g_2494, "g_2494", print_hash_value);
    transparent_crc(g_2708, "g_2708", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2725[i][j], "g_2725[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3088, "g_3088", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 776
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

XXX max expression depth: 43
breakdown:
   depth: 1, occurrence: 218
   depth: 2, occurrence: 72
   depth: 3, occurrence: 8
   depth: 4, occurrence: 3
   depth: 5, occurrence: 1
   depth: 7, occurrence: 2
   depth: 9, occurrence: 1
   depth: 11, occurrence: 2
   depth: 12, occurrence: 2
   depth: 13, occurrence: 2
   depth: 14, occurrence: 1
   depth: 15, occurrence: 1
   depth: 16, occurrence: 1
   depth: 17, occurrence: 1
   depth: 18, occurrence: 3
   depth: 19, occurrence: 1
   depth: 20, occurrence: 2
   depth: 21, occurrence: 3
   depth: 22, occurrence: 5
   depth: 23, occurrence: 6
   depth: 24, occurrence: 2
   depth: 25, occurrence: 2
   depth: 26, occurrence: 1
   depth: 27, occurrence: 2
   depth: 28, occurrence: 2
   depth: 29, occurrence: 3
   depth: 30, occurrence: 4
   depth: 31, occurrence: 4
   depth: 32, occurrence: 2
   depth: 33, occurrence: 3
   depth: 34, occurrence: 1
   depth: 37, occurrence: 1
   depth: 39, occurrence: 1
   depth: 43, occurrence: 2

XXX total number of pointers: 516

XXX times a variable address is taken: 1206
XXX times a pointer is dereferenced on RHS: 473
breakdown:
   depth: 1, occurrence: 280
   depth: 2, occurrence: 142
   depth: 3, occurrence: 27
   depth: 4, occurrence: 12
   depth: 5, occurrence: 12
XXX times a pointer is dereferenced on LHS: 363
breakdown:
   depth: 1, occurrence: 260
   depth: 2, occurrence: 75
   depth: 3, occurrence: 14
   depth: 4, occurrence: 9
   depth: 5, occurrence: 5
XXX times a pointer is compared with null: 61
XXX times a pointer is compared with address of another variable: 14
XXX times a pointer is compared with another pointer: 23
XXX times a pointer is qualified to be dereferenced: 11895

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1424
   level: 2, occurrence: 948
   level: 3, occurrence: 239
   level: 4, occurrence: 106
   level: 5, occurrence: 91
XXX number of pointers point to pointers: 273
XXX number of pointers point to scalars: 243
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 29.1
XXX average alias set size: 1.44

XXX times a non-volatile is read: 2953
XXX times a non-volatile is write: 1324
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 3
XXX backward jumps: 10

XXX stmts: 249
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 33
   depth: 1, occurrence: 29
   depth: 2, occurrence: 33
   depth: 3, occurrence: 46
   depth: 4, occurrence: 59
   depth: 5, occurrence: 49

XXX percentage a fresh-made variable is used: 15.2
XXX percentage an existing variable is used: 84.8
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: 930E3BFB */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: 930E3BFB */
