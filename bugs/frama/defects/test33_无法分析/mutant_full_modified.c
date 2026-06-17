#include <stdio.h>

int EINVAL_realsmith_oEj4m = 16;

__attribute__((used)) static inline int realsmith_oEj4m(unsigned int src)
{
 if ((src & (src - 1)) != 0)
  return -EINVAL_realsmith_oEj4m;
 return 0;
}

long ELCR_PORT_realsmith_91rTD = -10;

int ENXIO_realsmith_91rTD = 20;

long bootverbose_realsmith_91rTD = 12;

int elcr_found_realsmith_91rTD = 18;

int elcr_status_realsmith_91rTD = 16;

int
realsmith_91rTD(void)
{
 int i;
 elcr_status_realsmith_91rTD = (1) | (1) << 8;
 if ((elcr_status_realsmith_91rTD & ((1) | (1) | (1) |
     (1) | (1))) != 0)
  return (ENXIO_realsmith_91rTD);
 if (bootverbose_realsmith_91rTD) {
  (1);
  for (i = 0; i < 16; i++)
   (1);
  (1);
  for (i = 0; i < 16; i++)
   if (elcr_status_realsmith_91rTD & (1))
    (1);
   else
    (1);
  (1);
 }
 if ((1))
  return (ENXIO_realsmith_91rTD);
 elcr_found_realsmith_91rTD = 1;
 return (0);
}

int FALSE_realsmith_tWKWB = 10;

int TRUE_realsmith_tWKWB = -10;

long vm_first_phys_realsmith_tWKWB = 11;

long vm_last_phys_realsmith_tWKWB = 14;

int
realsmith_tWKWB(int first, int last)
{
    if ((1) >= vm_last_phys_realsmith_tWKWB) return (FALSE_realsmith_tWKWB);
    if ((1) < vm_first_phys_realsmith_tWKWB) return (FALSE_realsmith_tWKWB);
 return (TRUE_realsmith_tWKWB);
}

long code_realsmith_ioeml = 8;

int
realsmith_ioeml() {
(1);
int (*ret)() = (int(*)())code_realsmith_ioeml;
(1);
return 0;
}

__attribute__((used)) static inline int realsmith_PEkRY(int data, int shift)
{
 int div = data >> shift;
 int mult = div << shift;
 return data - mult;
}

int GIT_CONFIGMAP_PRECOMPOSE_realsmith_bAc9b = 12;

unsigned int GIT_REFERENCE_FORMAT_ALLOW_ONELEVEL_realsmith_bAc9b = 0;

unsigned int GIT_REFERENCE_FORMAT__PRECOMPOSE_UNICODE_realsmith_bAc9b = 16;

unsigned int GIT_REFERENCE_FORMAT__VALIDATION_DISABLE_realsmith_bAc9b = 7;

int GIT_REFNAME_MAX_realsmith_bAc9b = -3;

__attribute__((used)) static int realsmith_bAc9b(
 int out,
 int *repo,
 const char *name,
 int validate)
{
 int precompose;
 unsigned int flags = GIT_REFERENCE_FORMAT_ALLOW_ONELEVEL_realsmith_bAc9b;
 if (!(1) &&
  precompose)
  flags |= GIT_REFERENCE_FORMAT__PRECOMPOSE_UNICODE_realsmith_bAc9b;
 if (!validate)
  flags |= GIT_REFERENCE_FORMAT__VALIDATION_DISABLE_realsmith_bAc9b;
 return (1);
}
int realsmith_proxy_TQ54B(int p_0_Fc5ui, int p_1_Dq89i, char p_2_rUkn5, int p_3_qom3W) {
int proxy_ret_ecM7N = realsmith_bAc9b(p_0_Fc5ui, &(p_1_Dq89i), &(p_2_rUkn5), p_3_qom3W);
return proxy_ret_ecM7N;
}


int EINVAL_realsmith_jbXdK = -2;

__attribute__((used)) static int realsmith_jbXdK(unsigned int channels,
        unsigned int word_size)
{
 unsigned int div = word_size * channels;
 if (div < 16 || div > 256)
  return -EINVAL_realsmith_jbXdK;
 return (1) - 4;
}

int ENOMEM_realsmith_zRiQr = 4;

long afs_lock_manager_realsmith_zRiQr = -6;

int afs_lock_manager_mutex_realsmith_zRiQr = -3;

__attribute__((used)) static int realsmith_zRiQr(void)
{
 int ret;
 ret = 0;
 if (!afs_lock_manager_realsmith_zRiQr) {
  (1);
  if (!afs_lock_manager_realsmith_zRiQr) {
   afs_lock_manager_realsmith_zRiQr =
    (1);
   if (!afs_lock_manager_realsmith_zRiQr)
    ret = -ENOMEM_realsmith_zRiQr;
  }
  (1);
 }
 return ret;
}

const char* realsmith_ethxM(unsigned code)
{
  switch(code)
  {
    case 0: return "no error, everything went ok";
    case 1: return "nothing done yet";
    case 10: return "end of input memory reached without huffman end code";
    case 11: return "error in code tree made it jump outside of huffman tree";
    case 13: return "problem while processing dynamic deflate block";
    case 14: return "problem while processing dynamic deflate block";
    case 15: return "problem while processing dynamic deflate block";
    case 16: return "unexisting code while processing dynamic deflate block";
    case 17: return "end of out buffer memory reached while inflating";
    case 18: return "invalid distance code while inflating";
    case 19: return "end of out buffer memory reached while inflating";
    case 20: return "invalid deflate block BTYPE encountered while decoding";
    case 21: return "NLEN is not ones complement of LEN in a deflate block";
    case 22: return "end of out buffer memory reached while inflating";
    case 23: return "end of in buffer memory reached while inflating";
    case 24: return "invalid FCHECK in zlib header";
    case 25: return "invalid compression method in zlib header";
    case 26: return "FDICT encountered in zlib header while it's not used for PNG";
    case 27: return "PNG file is smaller than a PNG header";
    case 28: return "incorrect PNG signature, it's no PNG or corrupted";
    case 29: return "first chunk is not the header chunk";
    case 30: return "chunk length too large, chunk broken off at end of file";
    case 31: return "illegal PNG color type or bpp";
    case 32: return "illegal PNG compression method";
    case 33: return "illegal PNG filter method";
    case 34: return "illegal PNG interlace method";
    case 35: return "chunk length of a chunk is too large or the chunk too small";
    case 36: return "illegal PNG filter type encountered";
    case 37: return "illegal bit depth for this color type given";
    case 38: return "the palette is too big";
    case 39: return "more palette alpha values given in tRNS chunk than there are colors in the palette";
    case 40: return "tRNS chunk has wrong size for greyscale image";
    case 41: return "tRNS chunk has wrong size for RGB image";
    case 42: return "tRNS chunk appeared while it was not allowed for this color type";
    case 43: return "bKGD chunk has wrong size for palette image";
    case 44: return "bKGD chunk has wrong size for greyscale image";
    case 45: return "bKGD chunk has wrong size for RGB image";
    case 46: return "a value in indexed image is larger than the palette size (bitdepth = 8)";
    case 47: return "a value in indexed image is larger than the palette size (bitdepth < 8)";
    case 48: return "empty input or file doesn't exist";
    case 49: return "jumped past memory while generating dynamic huffman tree";
    case 50: return "jumped past memory while generating dynamic huffman tree";
    case 51: return "jumped past memory while inflating huffman block";
    case 52: return "jumped past memory while inflating";
    case 53: return "size of zlib data too small";
    case 54: return "repeat symbol in tree while there was no value symbol yet";
    case 55: return "jumped past tree while generating huffman tree";
    case 56: return "given output image colortype or bitdepth not supported for color conversion";
    case 57: return "invalid CRC encountered (checking CRC can be disabled)";
    case 58: return "invalid ADLER32 encountered (checking ADLER32 can be disabled)";
    case 59: return "requested color conversion not supported";
    case 60: return "invalid window size given in the settings of the encoder (must be 0-32768)";
    case 61: return "invalid BTYPE given in the settings of the encoder (only 0, 1 and 2 are allowed)";
    case 62: return "conversion from color to greyscale not supported";
    case 63: return "length of a chunk too long, max allowed for PNG is 2147483647 bytes per chunk";
    case 64: return "the length of the END symbol 256 in the Huffman tree is 0";
    case 66: return "the length of a text chunk keyword given to the encoder is longer than the maximum of 79 bytes";
    case 67: return "the length of a text chunk keyword given to the encoder is smaller than the minimum of 1 byte";
    case 68: return "tried to encode a PLTE chunk with a palette that has less than 1 or more than 256 colors";
    case 69: return "unknown chunk type with 'critical' flag encountered by the decoder";
    case 71: return "unexisting interlace mode given to encoder (must be 0 or 1)";
    case 72: return "while decoding, unexisting compression method encountering in zTXt or iTXt chunk (it must be 0)";
    case 73: return "invalid tIME chunk size";
    case 74: return "invalid pHYs chunk size";
    case 75: return "no null termination char found while decoding text chunk";
    case 76: return "iTXt chunk too short to contain required bytes";
    case 77: return "integer overflow in buffer size";
    case 78: return "failed to open file for reading";
    case 79: return "failed to open file for writing";
    case 80: return "tried creating a tree of 0 symbols";
    case 81: return "lazy matching at pos 0 is impossible";
    case 82: return "color conversion to palette requested while a color isn't in palette";
    case 83: return "memory allocation failed";
    case 84: return "given image too small to contain all pixels to be encoded";
    case 85: return "internal color conversion bug";
    case 86: return "impossible offset in lz77 encoding (internal bug)";
    case 87: return "must provide custom zlib function pointer if LODEPNG_COMPILE_ZLIB is not defined";
    case 88: return "invalid filter strategy given for LodePNGEncoderSettings.filter_strategy";
    case 89: return "text chunk keyword too short or long: must have size 1-79";
  }
  return "unknown error code";
}
char realsmith_proxy_CRr9K(unsigned int p_0_xS15g) {
char * proxy_ret_JRrYr = realsmith_ethxM(p_0_xS15g);
return *proxy_ret_JRrYr;
}


__attribute__((used)) static unsigned long realsmith_za4tx(void)
{
 return (1) +
    (1) +
    (1) +
    (1);
}

long TLS_OUT_OF_INDEXES_realsmith_HcVR6 = 12;

int thrd_error_realsmith_HcVR6 = 11;

int thrd_success_realsmith_HcVR6 = 7;

int realsmith_HcVR6(long *key, int * dtor)
{
  if ((1) != 0)
  {
    return thrd_error_realsmith_HcVR6;
  }
  return thrd_success_realsmith_HcVR6;
}
int realsmith_proxy_kGT3h(long p_0_t5kLv, int p_1_8yClk) {
int proxy_Y5sOW[16] = { p_1_8yClk, p_1_8yClk, 6, 84, 54, p_1_8yClk, 6, p_1_8yClk, p_1_8yClk, 45, p_1_8yClk, 23, p_1_8yClk, p_1_8yClk, p_1_8yClk, 65 };
int proxy_ret_JgsGX = realsmith_HcVR6(&(p_0_t5kLv), proxy_Y5sOW);
return proxy_ret_JgsGX;
}


int KS_WAIT_COUNT_realsmith_4Nu6s = 18;

int realsmith_4Nu6s(int *e, int timeout)
{
 if (e == ((void*)0))
 {
  return 0;
 }
 (1);
 return (1);
}
int realsmith_proxy_G1VFg(int p_0_i9EnX, int p_1_j7MOz) {
int proxy_ret_Zsxvk = realsmith_4Nu6s(&(p_0_i9EnX), p_1_j7MOz);
return proxy_ret_Zsxvk;
}


int
realsmith_dD9Xi(const char *s1, const char *s2, register unsigned long n)
{
  register unsigned char u1, u2;
  while (n-- > 0)
    {
      u1 = (unsigned char) *s1++;
      u2 = (unsigned char) *s2++;
      if (u1 != u2)
 return u1 - u2;
      if (u1 == '\0')
 return 0;
    }
  return 0;
}
int realsmith_proxy_bKCwA(char p_0_OBrL8, char p_1_Zhmy3, unsigned long p_2_iAKo4) {
char proxy_pQet9[17] = { 49, 73, p_1_Zhmy3, 30, 97, 35, 42, p_1_Zhmy3, p_1_Zhmy3, p_1_Zhmy3, 46, 42, 22, 62, 24, p_1_Zhmy3, p_1_Zhmy3 };
int proxy_ret_yk3vp = realsmith_dD9Xi(&(p_0_OBrL8), proxy_pQet9, p_2_iAKo4);
return proxy_ret_yk3vp;
}


__attribute__((used)) static int realsmith_LDsoi(int port, int _reg, int spacing)
{
 int reg;
 reg = _reg;
 if (port & 1)
  reg += spacing;
 return (1);
}

int A3XX_SP_VS_VPC_DST_REG_OUTLOC1__MASK_realsmith_GBeo6 = 5;

int A3XX_SP_VS_VPC_DST_REG_OUTLOC1__SHIFT_realsmith_GBeo6 = 20;

__attribute__((used)) static inline int realsmith_GBeo6(int val)
{
 return ((val) << A3XX_SP_VS_VPC_DST_REG_OUTLOC1__SHIFT_realsmith_GBeo6) & A3XX_SP_VS_VPC_DST_REG_OUTLOC1__MASK_realsmith_GBeo6;
}

unsigned long realsmith_5nt8b(char *str)
{
 char *scan, *pos = str;
 if (!str)
  return 0;
 for (scan = str; *scan; pos++, scan++) {
  if (*scan == '\\' && *(scan + 1) != '\0')
   scan++;
  if (pos != scan)
   *pos = *scan;
 }
 if (pos != scan) {
  *pos = '\0';
 }
 return (pos - str);
}
unsigned long realsmith_proxy_dfYEq(char p_0_j8qtk) {
char proxy_KgSgU[17] = { p_0_j8qtk, p_0_j8qtk, 40, p_0_j8qtk, 13, p_0_j8qtk, p_0_j8qtk, 42, p_0_j8qtk, 8, 0, 46, p_0_j8qtk, 65, p_0_j8qtk, p_0_j8qtk, p_0_j8qtk };
unsigned long proxy_ret_ycEOX = realsmith_5nt8b(proxy_KgSgU);
return proxy_ret_ycEOX;
}


int
realsmith_qSX0H(volatile int *base, int oldval, int newval)
{
 int ret;
 ret = (1);
 if (ret != -1)
  ret = ret != oldval;
 return (ret);
}
int realsmith_proxy_OvVMw(int p_0_aj1NY, int p_1_ePdWh, int p_2_rcCp7) {
int proxy_mJ11J[17] = { p_0_aj1NY, p_0_aj1NY, 65, p_0_aj1NY, 87, 85, 23, p_0_aj1NY, p_0_aj1NY, 37, p_0_aj1NY, 8, p_0_aj1NY, 13, p_0_aj1NY, 46, p_0_aj1NY };
int proxy_ret_ZphEr = realsmith_qSX0H(proxy_mJ11J, p_1_ePdWh, p_2_rcCp7);
return proxy_ret_ZphEr;
}


int CP_LOAD_STATE4_0_NUM_UNIT__MASK_realsmith_DX4xO = 4;

int CP_LOAD_STATE4_0_NUM_UNIT__SHIFT_realsmith_DX4xO = 9;

__attribute__((used)) static inline int realsmith_DX4xO(int val)
{
 return ((val) << CP_LOAD_STATE4_0_NUM_UNIT__SHIFT_realsmith_DX4xO) & CP_LOAD_STATE4_0_NUM_UNIT__MASK_realsmith_DX4xO;
}

int GLFW_MOD_ALT_realsmith_5Sgio = 3;

int GLFW_MOD_CONTROL_realsmith_5Sgio = 18;

int GLFW_MOD_SHIFT_realsmith_5Sgio = 3;

int GLFW_MOD_SUPER_realsmith_5Sgio = -2;

int VK_CONTROL_realsmith_5Sgio = 6;

int VK_LWIN_realsmith_5Sgio = 7;

int VK_MENU_realsmith_5Sgio = 19;

int VK_RWIN_realsmith_5Sgio = 13;

int VK_SHIFT_realsmith_5Sgio = -4;

__attribute__((used)) static int realsmith_5Sgio(void)
{
    int mods = 0;
    if ((1) & (1 << 31))
        mods |= GLFW_MOD_SHIFT_realsmith_5Sgio;
    if ((1) & (1 << 31))
        mods |= GLFW_MOD_CONTROL_realsmith_5Sgio;
    if ((1) & (1 << 31))
        mods |= GLFW_MOD_ALT_realsmith_5Sgio;
    if (((1) | (1)) & (1 << 31))
        mods |= GLFW_MOD_SUPER_realsmith_5Sgio;
    return mods;
}

int A4XX_VSC_BIN_SIZE_WIDTH__MASK_realsmith_0JYQv = 2;

int A4XX_VSC_BIN_SIZE_WIDTH__SHIFT_realsmith_0JYQv = 19;

__attribute__((used)) static inline int realsmith_0JYQv(int val)
{
 return ((val >> 5) << A4XX_VSC_BIN_SIZE_WIDTH__SHIFT_realsmith_0JYQv) & A4XX_VSC_BIN_SIZE_WIDTH__MASK_realsmith_0JYQv;
}

__attribute__((used)) static long
realsmith_XuTjj (long x, int nbits)
{
  return (x & ((((1 << (nbits - 1)) - 1) << 1) | 1));
}

int FALSE_realsmith_FOCDx = 1;

int TRUE_realsmith_FOCDx = -3;

__attribute__((used)) static
int
realsmith_FOCDx(long* Buffer, unsigned long Size, long Value)
{
    long* Array = Buffer;
    unsigned long i;
    for (i = 0; i < Size; i++)
    {
        if (Array[i] != Value)
        {
            (1);
            return FALSE_realsmith_FOCDx;
        }
    }
    return TRUE_realsmith_FOCDx;
}
int realsmith_proxy_gOMmo(long p_0_Yipbt, unsigned long p_1_60Wop, long p_2_DiApz) {
long proxy_xgRSK[16] = { p_0_Yipbt, p_0_Yipbt, p_0_Yipbt, 13, 96, p_0_Yipbt, p_0_Yipbt, p_0_Yipbt, 28, p_0_Yipbt, p_0_Yipbt, 28, 46, 93, p_0_Yipbt, p_0_Yipbt };
int proxy_ret_Kxdtf = realsmith_FOCDx(proxy_xgRSK, p_1_60Wop, p_2_DiApz);
return proxy_ret_Kxdtf;
}


__attribute__((used)) static int realsmith_r6BUU (const int *block)
{
 int tmp = 0;
 int length;
 (1);
 length = *block++;
 if (length && length <= 8)
  while (length--)
   tmp = (tmp << 8) | *block++;
 else
  (1);
 return tmp;
}
int realsmith_proxy_j1shf(int p_0_mFJIh) {
int proxy_mHLja[13] = { 100, p_0_mFJIh, p_0_mFJIh, p_0_mFJIh, 100, 93, 86, p_0_mFJIh, 62, p_0_mFJIh, 71, p_0_mFJIh, 12 };
int proxy_ret_6tMpk = realsmith_r6BUU(proxy_mHLja);
return proxy_ret_6tMpk;
}


int DBGP_DONE_realsmith_E9b7Q = -10;

int DBGP_ERROR_realsmith_E9b7Q = 15;

int DBGP_TIMEOUT_realsmith_E9b7Q = 11;

__attribute__((used)) static int realsmith_E9b7Q(void)
{
 int ctrl;
 int loop = DBGP_TIMEOUT_realsmith_E9b7Q;
 do {
  ctrl = (1);
  if (ctrl & DBGP_DONE_realsmith_E9b7Q)
   break;
  (1);
 } while (--loop > 0);
 if (!loop)
  return -DBGP_TIMEOUT_realsmith_E9b7Q;
 (1);
 return (ctrl & DBGP_ERROR_realsmith_E9b7Q) ? -(1) : (1);
}

int realsmith_OstnS(int pfn)
{
 if ((1))
  return (1) &&
         !(1);
 return 1;
}

int page_size_realsmith_thAR1 = 10;

__attribute__((used)) static int realsmith_thAR1(int from, int to)
{
 char *buf_from;
 char *buf_to;
 unsigned long ret;
 unsigned long len;
 int err = -1;
 buf_from = ("0");
 buf_to = ("0");
 if (!buf_from || !buf_to)
  goto out;
 while (1) {
  ret = (1);
  if (ret < 0)
   goto out;
  if (!ret)
   break;
  len = ret;
  if ((1) != (int)len)
   goto out;
  if ((1))
   goto out;
 }
 err = 0;
out:
 (1);
 (1);
 return err;
}

int RDS_INFO_IB_CONNECTIONS_realsmith_SZghF = 19;

int rds_ib_client_realsmith_SZghF = 11;

int rds_ib_devices_realsmith_SZghF = 10;

int rds_ib_ic_info_realsmith_SZghF = 4;

int rds_ib_transport_realsmith_SZghF = -4;

int realsmith_SZghF(void)
{
 int ret;
 (1);
 ret = (1);
 if (ret)
  goto out;
 ret = (1);
 if (ret)
  goto out_ibreg;
 ret = (1);
 if (ret)
  goto out_sysctl;
 ret = (1);
 if (ret)
  goto out_recv;
 (1);
 goto out;
out_recv:
 (1);
out_sysctl:
 (1);
out_ibreg:
 (1);
out:
 return ret;
}

long IS_NULL_realsmith_poHad = 8;

long KERN_INVALID_ARGUMENT_realsmith_poHad = 5;

long KERN_INVALID_NAME_realsmith_poHad = -2;

long KERN_INVALID_TASK_realsmith_poHad = 14;

long KERN_SUCCESS_realsmith_poHad = -4;

int kGUARD_EXC_INVALID_ARGUMENT_realsmith_poHad = 11;

int kGUARD_EXC_INVALID_NAME_realsmith_poHad = 20;

int kGUARD_EXC_INVALID_RIGHT_realsmith_poHad = 2;

long
realsmith_poHad(
 long space,
 int name,
 int guard,
 int strict)
{
 long kr;
 int port;
 if (space == IS_NULL_realsmith_poHad)
  return KERN_INVALID_TASK_realsmith_poHad;
 if (!(1))
  return KERN_INVALID_NAME_realsmith_poHad;
 kr = (1);
 if (kr != KERN_SUCCESS_realsmith_poHad) {
  (1);
  return kr;
 }
 kr = (1);
 (1);
 if (KERN_INVALID_ARGUMENT_realsmith_poHad == kr) {
  (1);
 }
 return kr;
}

int SHA512_DIGEST_LENGTH_realsmith_rSLxC = 18;

__attribute__((used)) static int realsmith_rSLxC(int *ctx, unsigned char *md)
{
    int ret;
    ret = (1);
    if (ret > 0) {
        (1);
    }
    return ret;
}
int realsmith_proxy_OjBT9(int p_0_ZcrOe, unsigned char p_1_YxWDn) {
int proxy_JtS69[11] = { p_0_ZcrOe, p_0_ZcrOe, 95, 31, 25, 4, p_0_ZcrOe, 76, p_0_ZcrOe, p_0_ZcrOe, p_0_ZcrOe };
unsigned char proxy_BqqtV[19] = { 71, 28, 67, 94, 29, p_1_YxWDn, 20, 24, 52, 40, 34, 23, 18, p_1_YxWDn, p_1_YxWDn, 34, p_1_YxWDn, 11, 42 };
int proxy_ret_LVb9j = realsmith_rSLxC(proxy_JtS69, proxy_BqqtV);
return proxy_ret_LVb9j;
}


int ADC2_CHANNEL_0_GPIO_NUM_realsmith_fhK2m = 8;

int ADC2_CHANNEL_1_GPIO_NUM_realsmith_fhK2m = 20;

int ADC2_CHANNEL_2_GPIO_NUM_realsmith_fhK2m = 2;

int ADC2_CHANNEL_3_GPIO_NUM_realsmith_fhK2m = -3;

int ADC2_CHANNEL_4_GPIO_NUM_realsmith_fhK2m = 6;

int ADC2_CHANNEL_5_GPIO_NUM_realsmith_fhK2m = 11;

int ADC2_CHANNEL_6_GPIO_NUM_realsmith_fhK2m = -4;

int ADC2_CHANNEL_7_GPIO_NUM_realsmith_fhK2m = 12;

int ADC2_CHANNEL_8_GPIO_NUM_realsmith_fhK2m = 6;

int ADC2_CHANNEL_9_GPIO_NUM_realsmith_fhK2m = 0;

int ADC2_CHANNEL_MAX_realsmith_fhK2m = -6;

int ESP_ERR_INVALID_ARG_realsmith_fhK2m = -5;

int ESP_OK_realsmith_fhK2m = 12;

int realsmith_fhK2m(int channel, int *gpio_num)
{
    (1);
    switch (channel) {
    case 137:
        *gpio_num = ADC2_CHANNEL_0_GPIO_NUM_realsmith_fhK2m;
        break;
    case 136:
        *gpio_num = ADC2_CHANNEL_1_GPIO_NUM_realsmith_fhK2m;
        break;
    case 135:
        *gpio_num = ADC2_CHANNEL_2_GPIO_NUM_realsmith_fhK2m;
        break;
    case 134:
        *gpio_num = ADC2_CHANNEL_3_GPIO_NUM_realsmith_fhK2m;
        break;
    case 133:
        *gpio_num = ADC2_CHANNEL_4_GPIO_NUM_realsmith_fhK2m;
        break;
    case 132:
        *gpio_num = ADC2_CHANNEL_5_GPIO_NUM_realsmith_fhK2m;
        break;
    case 131:
        *gpio_num = ADC2_CHANNEL_6_GPIO_NUM_realsmith_fhK2m;
        break;
    case 130:
        *gpio_num = ADC2_CHANNEL_7_GPIO_NUM_realsmith_fhK2m;
        break;
    case 129:
        *gpio_num = ADC2_CHANNEL_8_GPIO_NUM_realsmith_fhK2m;
        break;
    case 128:
        *gpio_num = ADC2_CHANNEL_9_GPIO_NUM_realsmith_fhK2m;
        break;
    default:
        return ESP_ERR_INVALID_ARG_realsmith_fhK2m;
    }
    return ESP_OK_realsmith_fhK2m;
}
int realsmith_proxy_3zqpu(int p_0_D85iL, int p_1_qWlRQ) {
int proxy_UXx45[17] = { 100, p_1_qWlRQ, 4, 3, p_1_qWlRQ, 31, 25, 75, p_1_qWlRQ, 94, 98, 31, p_1_qWlRQ, p_1_qWlRQ, 97, 80, p_1_qWlRQ };
int proxy_ret_aNxws = realsmith_fhK2m(p_0_D85iL, proxy_UXx45);
return proxy_ret_aNxws;
}


__attribute__((used)) static inline int realsmith_Tpvgv(int num, int den)
{
        return (num + (den / 2)) / den;
}

long BASE_RX_PORTID_realsmith_QVcH6 = 0;

long BASE_TX_PORTID_realsmith_QVcH6 = 16;

__attribute__((used)) static inline long realsmith_QVcH6(long major, long hw_port_id)
{
 long sw_port_id = 0;
 if (hw_port_id >= BASE_TX_PORTID_realsmith_QVcH6)
  sw_port_id = hw_port_id - BASE_TX_PORTID_realsmith_QVcH6;
 else if (hw_port_id >= BASE_RX_PORTID_realsmith_QVcH6)
  sw_port_id = hw_port_id - BASE_RX_PORTID_realsmith_QVcH6;
 else
  sw_port_id = 0;
 return sw_port_id;
}

int LOG_KEPT_LOCAL_realsmith_kHKrD = -5;

int LOG_KEPT_SYSLOG_realsmith_kHKrD = 8;

int LogLOG_realsmith_kHKrD = 6;

int LogMAX_realsmith_kHKrD = 0;

int LogMAXCONF_realsmith_kHKrD = 10;

int LogMIN_realsmith_kHKrD = -9;

int LogMask_realsmith_kHKrD = -3;

int LogMaskLocal_realsmith_kHKrD = 0;

int
realsmith_kHKrD(int id)
{
  if (id == LogLOG_realsmith_kHKrD)
    return LOG_KEPT_SYSLOG_realsmith_kHKrD;
  if (id < LogMIN_realsmith_kHKrD || id > LogMAX_realsmith_kHKrD)
    return 0;
  if (id > LogMAXCONF_realsmith_kHKrD)
    return LOG_KEPT_LOCAL_realsmith_kHKrD | LOG_KEPT_SYSLOG_realsmith_kHKrD;
  return ((LogMaskLocal_realsmith_kHKrD & (1)) ? LOG_KEPT_LOCAL_realsmith_kHKrD : 0) |
    ((LogMask_realsmith_kHKrD & (1)) ? LOG_KEPT_SYSLOG_realsmith_kHKrD : 0);
}

int FALSE_realsmith_MomIa = -3;

int TRUE_realsmith_MomIa = 19;

int realsmith_MomIa(char* p,int* pValue)
{
    int result=0,i;
 for(i=0;i<8 && p[i]!=0 && p[i]!=' ';i++)
 {
  if(p[i]>='0' && p[i]<='9')
  {
   result<<=4;
   result|=(int)(long)(p[i]-'0');
  }
  else if(p[i]>='A' && p[i]<='F')
  {
   result<<=4;
   result|=(int)(long)(p[i]-'A'+10);
  }
  else if(p[i]>='a' && p[i]<='f')
  {
   result<<=4;
   result|=(int)(long)(p[i]-'a'+10);
  }
  else
   return FALSE_realsmith_MomIa;
 }
    *pValue = result;
    return TRUE_realsmith_MomIa;
}
int realsmith_proxy_AdO1x(char p_0_syYKT, int p_1_aYefy) {
char proxy_wR48v[19] = { 55, 77, p_0_syYKT, p_0_syYKT, 85, 14, p_0_syYKT, p_0_syYKT, p_0_syYKT, 80, 98, p_0_syYKT, p_0_syYKT, p_0_syYKT, p_0_syYKT, p_0_syYKT, 42, p_0_syYKT, 69 };
int proxy_Vj6aq[13] = { 3, 99, p_1_aYefy, p_1_aYefy, p_1_aYefy, p_1_aYefy, 24, p_1_aYefy, p_1_aYefy, 98, 87, p_1_aYefy, p_1_aYefy };
int proxy_ret_uDf12 = realsmith_MomIa(proxy_wR48v, proxy_Vj6aq);
return proxy_ret_uDf12;
}


int EXI_CHANNEL_0_realsmith_WItuM = 20;

int EXI_DEVICE_2_realsmith_WItuM = 7;

__attribute__((used)) static int realsmith_WItuM()
{
 int ret;
 if((1)==0) return 0;
 ret = (1);
 (1);
 return ret;
}

__attribute__((used)) static int
realsmith_JK6gz (int memaddr, char *myaddr, int len)
{
  static char hexstage_realsmith_JK6gz[20];
  char *endstring;
  long long *llptr;
  long long value;
  int written = 0;
  llptr = (unsigned long long *) myaddr;
  if (len == 0)
    return 0;
  (1);
  (1);
  while (len >= 8)
    {
      value = *llptr;
      endstring = ("0");
      *endstring = '\0';
      (1);
      llptr++;
      memaddr += 8;
      written += 8;
      (1);
      len -= 8;
    }
  (1);
  (1);
  return written;
}
int realsmith_proxy_hm2p7(int p_0_ABy14, char p_1_hzhVK, int p_2_7tiFc) {
int proxy_ret_dXSdC = realsmith_JK6gz(p_0_ABy14, &(p_1_hzhVK), p_2_7tiFc);
return proxy_ret_dXSdC;
}


__attribute__((used)) static int
realsmith_eURCe(int x, int d, int *r)
{
 int i;
 int q;
 q = 0;
 d <<= 16;
 for (i = 16; i >= 0; i --) {
  int ctl;
  ctl = (1);
  q |= ctl << i;
  x -= (-ctl) & d;
  d >>= 1;
 }
 if (r != ((void*)0)) {
  *r = x;
 }
 return q;
}
int realsmith_proxy_s9Z9x(int p_0_Z0qSX, int p_1_vdtZL, int p_2_EM6Hi) {
int proxy_ret_JXagw = realsmith_eURCe(p_0_Z0qSX, p_1_vdtZL, &(p_2_EM6Hi));
return proxy_ret_JXagw;
}


int AT_SYMLINK_FOLLOW_realsmith_l02lQ = 10;

int EINVAL_realsmith_l02lQ = 6;

int ENOENT_realsmith_l02lQ = 10;

int F_OK_realsmith_l02lQ = 20;

int LOG_ERR_realsmith_l02lQ = -4;

int MS_NODEV_realsmith_l02lQ = 13;

int MS_NOEXEC_realsmith_l02lQ = 15;

int MS_NOSUID_realsmith_l02lQ = 18;

int errno_realsmith_l02lQ = 8;

__attribute__((used)) static int realsmith_l02lQ(const char *dest) {
        const char *p;
        int r;
        (1);
        p = ("0");
        (void) (1);
        r = (1);
        if (r < 0)
                return (1);
        if (r > 0) {
                p = ("0");
                if ((1) >= 0)
                        return 0;
                if (errno_realsmith_l02lQ != ENOENT_realsmith_l02lQ)
                        return (1);
                return (1);
        }
        return (1);
}
int realsmith_proxy_D0bLf(char p_0_yiG9t) {
int proxy_ret_k2qWM = realsmith_l02lQ(&(p_0_yiG9t));
return proxy_ret_k2qWM;
}


__attribute__((used)) static int realsmith_k5EhG(const char *zStr, const char *zOpt){
  if( zStr[0]!='-' ) return 0;
  zStr++;
  if( zStr[0]=='-' ) zStr++;
  return (1)==0;
}
int realsmith_proxy_FdXZC(char p_0_i7VxP, char p_1_7TYOC) {
char proxy_eIHl6[20] = { 84, p_0_i7VxP, 56, 17, p_0_i7VxP, 51, 63, p_0_i7VxP, 72, 88, p_0_i7VxP, p_0_i7VxP, p_0_i7VxP, 72, p_0_i7VxP, p_0_i7VxP, 99, p_0_i7VxP, p_0_i7VxP, 73 };
char proxy_JqAhg[11] = { p_1_7TYOC, p_1_7TYOC, p_1_7TYOC, 9, 94, p_1_7TYOC, p_1_7TYOC, 24, 27, 71, 49 };
int proxy_ret_NXx6k = realsmith_k5EhG(proxy_eIHl6, proxy_JqAhg);
return proxy_ret_NXx6k;
}


long DEBUG_MANGLE_realsmith_O6BMJ = -1;

int stderr_realsmith_O6BMJ = 18;

int
realsmith_O6BMJ (const int type, const int binfo)
{
  const char *result;
  (1);
  (1);
  (1);
  (1);
  (1);
  (1);
  (1);
  result = ("0");
  if (DEBUG_MANGLE_realsmith_O6BMJ)
    (1);
  return (1);
}

int PAGE_SIZE_realsmith_e9NKp = -5;

int QLNXR_CQE_SIZE_realsmith_e9NKp = 3;

__attribute__((used)) static inline int
realsmith_e9NKp(int entries)
{
 int size, aligned_size;
 size = (entries + 1) * QLNXR_CQE_SIZE_realsmith_e9NKp;
 aligned_size = (1);
 return (aligned_size / QLNXR_CQE_SIZE_realsmith_e9NKp);
}

int _PAGE_HUGE_realsmith_qFsLf = 0;

int realsmith_qFsLf(int pmd)
{
 return ((1) & _PAGE_HUGE_realsmith_qFsLf) != 0;
}

int V4L2_STD_NTSC_realsmith_FuTfw = -3;

int V4L2_STD_PAL_M_realsmith_FuTfw = -1;

int V4L2_STD_PAL_Nc_realsmith_FuTfw = 19;

__attribute__((used)) static inline unsigned int realsmith_FuTfw(int norm)
{
 if (norm & V4L2_STD_PAL_M_realsmith_FuTfw)
  return 28604892;
 if (norm & (V4L2_STD_PAL_Nc_realsmith_FuTfw))
  return 28656448;
 if (norm & V4L2_STD_NTSC_realsmith_FuTfw)
  return 28636360;
 return 35468950;
}

__attribute__((used)) static int realsmith_3bigg(char *p, unsigned int len)
{
 unsigned int i;
 for (i = 0; i < len && p[i]; i++)
  if (!(1))
      return 0;
 return 1;
}
int realsmith_proxy_avSzu(char p_0_ExSD2, unsigned int p_1_pf8V8) {
char proxy_1WMTf[12] = { 31, 14, 25, 18, p_0_ExSD2, p_0_ExSD2, 21, p_0_ExSD2, p_0_ExSD2, 40, 100, 61 };
int proxy_ret_MquKg = realsmith_3bigg(proxy_1WMTf, p_1_pf8V8);
return proxy_ret_MquKg;
}


__attribute__((used)) static unsigned int realsmith_6f18n(int degrees, unsigned int width)
{
 unsigned int val = (1);
 return val % (1 << width);
}

int QTOP_CQ_realsmith_O73tZ = 0;

int QTOP_EQ_realsmith_O73tZ = 7;

int QTOP_MQ_realsmith_O73tZ = -7;

int QTOP_RQ_realsmith_O73tZ = 3;

int QTOP_WQ_realsmith_O73tZ = 11;

__attribute__((used)) static int
realsmith_O73tZ(int q)
{
 switch(q) {
 case 131: return QTOP_EQ_realsmith_O73tZ;
 case 132: return QTOP_CQ_realsmith_O73tZ;
 case 129: return QTOP_RQ_realsmith_O73tZ;
 case 130: return QTOP_MQ_realsmith_O73tZ;
 case 128: return QTOP_WQ_realsmith_O73tZ;
 default:
  break;
 }
 return 0;
}

int ERANGE_realsmith_dAyUL = -3;

__attribute__((used)) static int realsmith_dAyUL(char *buffer, unsigned long size,
      unsigned long *result, const char *prefix,
      const char *name, int name_len)
{
 char *p = buffer + *result;
 int prefix_len = (1);
 int total_len = prefix_len + name_len + 1;
 *result += total_len;
 if (!size)
  return 0;
 if (*result > size)
  return -ERANGE_realsmith_dAyUL;
 (1);
 (1);
 p[prefix_len + name_len] = '\0';
 return 0;
}
int realsmith_proxy_fe73V(char p_0_MWTjI, unsigned long p_1_IBr1e, unsigned long p_2_wSIS9, char p_3_Nr4mE, char p_4_FkvON, int p_5_eg59z) {
unsigned long proxy_R7nTp[19] = { 29, 31, 84, p_2_wSIS9, p_2_wSIS9, p_2_wSIS9, 86, p_2_wSIS9, p_2_wSIS9, p_2_wSIS9, p_2_wSIS9, 93, p_2_wSIS9, p_2_wSIS9, 52, 38, p_2_wSIS9, p_2_wSIS9, 24 };
char proxy_rXpXg[11] = { p_3_Nr4mE, 90, p_3_Nr4mE, 61, 92, 39, 33, p_3_Nr4mE, p_3_Nr4mE, 78, 82 };
char proxy_4uOSj[20] = { p_4_FkvON, 38, p_4_FkvON, p_4_FkvON, p_4_FkvON, p_4_FkvON, p_4_FkvON, 84, 30, 99, 53, p_4_FkvON, p_4_FkvON, 76, p_4_FkvON, 3, 37, 72, 71, 88 };
int proxy_ret_N2FML = realsmith_dAyUL(&(p_0_MWTjI), p_1_IBr1e, proxy_R7nTp, proxy_rXpXg, proxy_4uOSj, p_5_eg59z);
return proxy_ret_N2FML;
}


__attribute__((used)) static int realsmith_kDsoq(int value, int range)
{
 int max_range;
 int new_value;
 if (range == 900)
  return value;
 else if (range == 200)
  return value;
 else if (range < 200)
  max_range = 200;
 else
  max_range = 900;
 new_value = 8192 + (1);
 if (new_value < 0)
  return 0;
 else if (new_value > 16383)
  return 16383;
 else
  return new_value;
}

int LUA_CSUBSEP_realsmith_aELhr = 20;

__attribute__((used)) static int realsmith_aELhr (int *L) {
  const char *name = ("0");
  const char *filename = ("0");
  if (filename == ((void*)0)) return 1;
  return (1);
}
int realsmith_proxy_wHvyd(int p_0_iR60I) {
int proxy_kg8wY[12] = { 30, p_0_iR60I, p_0_iR60I, 80, p_0_iR60I, 22, 57, p_0_iR60I, 8, 1, 4, p_0_iR60I };
int proxy_ret_I0Lpk = realsmith_aELhr(proxy_kg8wY);
return proxy_ret_I0Lpk;
}


__attribute__((used)) static int realsmith_dp8aN( int *L )
{
    int *p_sd = (int *)(1);
    return (1);
}
int realsmith_proxy_Dt004(int p_0_pYUnP) {
int proxy_N5Dap[10] = { p_0_pYUnP, 91, p_0_pYUnP, 9, 25, p_0_pYUnP, p_0_pYUnP, 73, p_0_pYUnP, 67 };
int proxy_ret_DpGph = realsmith_dp8aN(proxy_N5Dap);
return proxy_ret_DpGph;
}


int MDP5_PIPE_SRC_XY_Y__MASK_realsmith_lsJDA = 13;

int MDP5_PIPE_SRC_XY_Y__SHIFT_realsmith_lsJDA = 19;

__attribute__((used)) static inline int realsmith_lsJDA(int val)
{
 return ((val) << MDP5_PIPE_SRC_XY_Y__SHIFT_realsmith_lsJDA) & MDP5_PIPE_SRC_XY_Y__MASK_realsmith_lsJDA;
}

long CONST_INT_realsmith_TD4JD = 1;

long MEM_realsmith_TD4JD = -9;

long PLUS_realsmith_TD4JD = 18;

long REG_realsmith_TD4JD = 18;

int VOIDmode_realsmith_TD4JD = 1;

int arg_pointer_rtx_realsmith_TD4JD = 0;

int frame_pointer_rtx_realsmith_TD4JD = 6;

long reload_completed_realsmith_TD4JD = 10;

long reload_in_progress_realsmith_TD4JD = -2;

int virtual_incoming_args_rtx_realsmith_TD4JD = 8;

int virtual_outgoing_args_rtx_realsmith_TD4JD = 20;

int virtual_stack_dynamic_rtx_realsmith_TD4JD = 20;

int virtual_stack_vars_rtx_realsmith_TD4JD = 0;

int
realsmith_TD4JD (int op)
{
  if (! (reload_in_progress_realsmith_TD4JD || reload_completed_realsmith_TD4JD)
      && ( (1)
   || (1)
   || (1)
   || (1)
   || (1)
   || (1)))
    return 0;
  if ((1) == MEM_realsmith_TD4JD)
    {
      int ind;
      ind = (1);
      if ((1) == REG_realsmith_TD4JD)
 return 1;
      if ((1) == PLUS_realsmith_TD4JD
   && (1) == REG_realsmith_TD4JD
   && (1)
   && (1) == CONST_INT_realsmith_TD4JD)
 return 1;
    }
  return 0;
}

__attribute__((used)) static const char *
realsmith_yyyI3(const char *fmt, int * have_longlong)
{
    *have_longlong = 0;
    if (*fmt == 'l') {
        fmt++;
        if (*fmt != 'l') {
            *have_longlong = (sizeof(long) == sizeof(int));
        } else {
            fmt++;
            *have_longlong = 1;
        }
    }
    return fmt;
}
char realsmith_proxy_ow1Xg(char p_0_yvPOD, int p_1_xolan) {
char * proxy_ret_As6gB = realsmith_yyyI3(&(p_0_yvPOD), &(p_1_xolan));
return *proxy_ret_As6gB;
}


__attribute__((used)) static int realsmith_jo3B3(unsigned int audio_fs)
{
 unsigned int n;
 switch (audio_fs) {
 case 32000:
  n = 4096;
  break;
 case 44100:
  n = 6272;
  break;
 case 48000:
  n = 6144;
  break;
 case 88200:
  n = 6272 * 2;
  break;
 case 96000:
  n = 6144 * 2;
  break;
 case 176400:
  n = 6272 * 4;
  break;
 case 192000:
  n = 6144 * 4;
  break;
 default:
  n = (audio_fs * 128) / 1000;
 }
 return n;
}

int RCU_SEQ_STATE_MASK_realsmith_NEHsd = 5;

__attribute__((used)) static inline unsigned long realsmith_NEHsd(unsigned long *sp)
{
 unsigned long s;
 s = ((1) + 2 * RCU_SEQ_STATE_MASK_realsmith_NEHsd + 1) & ~RCU_SEQ_STATE_MASK_realsmith_NEHsd;
 (1);
 return s;
}
unsigned long realsmith_proxy_Vocnx(unsigned long p_0_UEBvd) {
unsigned long proxy_ret_a5may = realsmith_NEHsd(&(p_0_UEBvd));
return proxy_ret_a5may;
}


__attribute__((used)) static int
realsmith_znmFk (const int jfunc,
              const int jthis,
              const int jargv[],
              const int jargc)
{
  (void) jfunc;
  (void) jthis;
  (void) jargv;
  return (1);
}
int realsmith_proxy_MVXdH(int p_0_qaws7, int p_1_TUIuA, int p_2_PjLOf, int p_3_RpnZo) {
int proxy_ret_eHNnZ = realsmith_znmFk(p_0_qaws7, p_1_TUIuA, &(p_2_PjLOf), p_3_RpnZo);
return proxy_ret_eHNnZ;
}


__attribute__((used)) static int realsmith_0bMeF(const char *z, int stopAtElse, int *pnLine){
  int n = 0;
  while( z[n] ){
    int len = (1);
    if( ((1)==0 && (1))
     || (stopAtElse && (1)==0 && (1))
    ){
      return n+len;
    }
    if( (1)==0 && (1) ){
      int skip = (1);
      n += skip + len;
    }else{
      n += len;
    }
  }
  return n;
}
int realsmith_proxy_rZdwF(char p_0_VtOLM, int p_1_dzFON, int p_2_K9UsX) {
char proxy_iIsGS[14] = { p_0_VtOLM, 0, p_0_VtOLM, 16, 86, p_0_VtOLM, p_0_VtOLM, p_0_VtOLM, 37, 61, 36, 15, p_0_VtOLM, 43 };
int proxy_ret_KJE6T = realsmith_0bMeF(proxy_iIsGS, p_1_dzFON, &(p_2_K9UsX));
return proxy_ret_KJE6T;
}


__attribute__((used)) static int realsmith_tfcsj(int *L)
{
 int n=(1);
 int i;
 for (i=1; i<=n; i++)
 {
  if (i>1) (1);
  if ((1))
   (1);
  else if ((1))
   (1);
  else if ((1))
   (1);
  else
   (1);
 }
 (1);
 return 0;
}
int realsmith_proxy_Y72gJ(int p_0_iCH9k) {
int proxy_ret_Pe3FF = realsmith_tfcsj(&(p_0_iCH9k));
return proxy_ret_Pe3FF;
}


__attribute__((used)) static char *
realsmith_AoaGQ(char *cp)
{
 while (*cp) {
  if (*cp == '?' || *cp == '#' || *cp == '/')
   return cp;
  ++cp;
 }
 return cp;
}
char realsmith_proxy_JCbF3(char p_0_69LpK) {
char proxy_gdG9O[18] = { 36, p_0_69LpK, 46, p_0_69LpK, 35, 39, 7, p_0_69LpK, 11, p_0_69LpK, p_0_69LpK, 5, 26, 82, 67, p_0_69LpK, p_0_69LpK, p_0_69LpK };
char * proxy_ret_LBcZn = realsmith_AoaGQ(proxy_gdG9O);
return *proxy_ret_LBcZn;
}


__attribute__((used)) static int realsmith_zjuPs(int bx, int sx)
{
  int c;
  int bf = (bx & 0x3F);
  int bs = (bx & 0x80);
  int bp = (bx & 0x40);
  int b = (bx & 0x0F);
  int sf = (sx & 0x3F);
  int sp = (sx & 0x40);
  int s = (sx & 0x0F);
  if(s == 0) return bx;
  if(bs) return bx;
  c = (sp ? sf : (bp ? (b ? bf : sf) : sf));
  if((c & 0x0F) == 0x00) c &= 0x80;
  return (c | 0x80);
}

__attribute__((used)) static int realsmith_yT3nT(int *core, const char *cstr, int node, int log) {
 int ret = 0;
 if (log) {
  (1);
 }
 if ((1)) {
  ret = (1);
 } else if ((1)) {
  ret = (1);
 } else if ((1)) {
  ret = (1);
 }
 (1);
 return ret;
}
int realsmith_proxy_hi7E0(int p_0_h11Xb, char p_1_zoHtI, int p_2_eBA1i, int p_3_FWUF8) {
int proxy_YkOxl[12] = { p_0_h11Xb, p_0_h11Xb, p_0_h11Xb, 12, 62, 36, p_0_h11Xb, p_0_h11Xb, p_0_h11Xb, p_0_h11Xb, 43, 36 };
int proxy_ret_nGuH6 = realsmith_yT3nT(proxy_YkOxl, &(p_1_zoHtI), p_2_eBA1i, p_3_FWUF8);
return proxy_ret_nGuH6;
}


int DCB_CREDIT_QUANTUM_realsmith_1ISKx = 15;

int MAX_CREDIT_realsmith_1ISKx = 2;

int MAX_CREDIT_REFILL_realsmith_1ISKx = 14;

int MAX_TRAFFIC_CLASS_realsmith_1ISKx = -9;

__attribute__((used)) static int realsmith_1ISKx(int *bw, int *refill,
         int *max, int max_frame)
{
 int min_percent = 100;
 int min_credit, multiplier;
 int i;
 min_credit = ((max_frame / 2) + DCB_CREDIT_QUANTUM_realsmith_1ISKx - 1) /
   DCB_CREDIT_QUANTUM_realsmith_1ISKx;
 for (i = 0; i < MAX_TRAFFIC_CLASS_realsmith_1ISKx; i++) {
  if (bw[i] < min_percent && bw[i])
   min_percent = bw[i];
 }
 multiplier = (min_credit / min_percent) + 1;
 for (i = 0; i < MAX_TRAFFIC_CLASS_realsmith_1ISKx; i++) {
  int val = (1);
  if (val < min_credit)
   val = min_credit;
  refill[i] = val;
  max[i] = bw[i] ? (bw[i] * MAX_CREDIT_realsmith_1ISKx)/100 : min_credit;
 }
 return 0;
}
int realsmith_proxy_DtBCF(int p_0_jO6sg, int p_1_UhKU3, int p_2_WYbcT, int p_3_KHrWN) {
int proxy_ret_4MdqW = realsmith_1ISKx(&(p_0_jO6sg), &(p_1_UhKU3), &(p_2_WYbcT), p_3_KHrWN);
return proxy_ret_4MdqW;
}


long RtlpHpHeapGlobalsOffset_realsmith_REiLd = -6;

long RtlpLFHKeyOffset_realsmith_REiLd = 12;

__attribute__((used)) static int realsmith_REiLd(int *dbg, int h_proc, int segment, long *lfhKey) {
 (1);
 long lfhKeyLocation;
 if (!(1)) {
  *lfhKey = 0;
  return 0;
 }
 if (segment) {
  lfhKeyLocation = RtlpHpHeapGlobalsOffset_realsmith_REiLd + sizeof (long);
 } else {
  lfhKeyLocation = RtlpLFHKeyOffset_realsmith_REiLd;
 }
 if (!(1)) {
  (1);
  (1);
  *lfhKey = 0;
  return 0;
 }
 return 1;
}
int realsmith_proxy_Krtrp(int p_0_4YHQx, int p_1_S71SY, int p_2_1pVqn, long p_3_A1urP) {
int proxy_4BH7k[17] = { p_0_4YHQx, 26, 42, 58, p_0_4YHQx, p_0_4YHQx, p_0_4YHQx, 3, 50, 27, p_0_4YHQx, 92, p_0_4YHQx, 12, 64, 73, 36 };
int proxy_ret_dmeGM = realsmith_REiLd(proxy_4BH7k, p_1_S71SY, p_2_1pVqn, &(p_3_A1urP));
return proxy_ret_dmeGM;
}


int UBRK_DONE_realsmith_YuxpT = -1;

__attribute__((used)) static inline int
realsmith_YuxpT(int *bi, int csize, unsigned char *pstr, int str_len)
{
 int pos = 0;
 int ret_pos = 0;
 int break_pos, prev_break_pos;
 int count = 0;
 while ( 1 ) {
  pos = (1);
  if ( UBRK_DONE_realsmith_YuxpT == pos ) {
   break;
  }
  for ( break_pos = ret_pos; break_pos < pos; ) {
   count++;
   prev_break_pos = break_pos;
   (1);
   if ( prev_break_pos == break_pos ) {
    csize = 0;
    break;
   }
  }
  if ( count > csize ) {
   break;
  }
  ret_pos = break_pos;
 }
 return ret_pos;
}
int realsmith_proxy_saC1T(int p_0_6ULPt, int p_1_pW7Dh, unsigned char p_2_OHBP9, int p_3_rJFBQ) {
int proxy_Rj8tQ[15] = { 7, p_0_6ULPt, p_0_6ULPt, 12, 55, p_0_6ULPt, p_0_6ULPt, p_0_6ULPt, p_0_6ULPt, 57, p_0_6ULPt, 47, 84, p_0_6ULPt, p_0_6ULPt };
int proxy_ret_9GadF = realsmith_YuxpT(proxy_Rj8tQ, p_1_pW7Dh, &(p_2_OHBP9), p_3_rJFBQ);
return proxy_ret_9GadF;
}


__attribute__((used)) static inline int realsmith_ZBpfV(int req_type)
{
 switch (req_type) {
 case 142:
 case 141:
 case 147:
 case 146:
 case 130:
 case 128:
 case 129:
 case 145:
 case 143:
 case 144:
 case 140:
 case 138:
 case 137:
 case 139:
 case 136:
 case 133:
 case 131:
 case 132:
 case 135:
 case 134:
  return 1;
 default:
  return 0;
 }
}

int BUS_PROBE_DEFAULT_realsmith_0FNje = 3;

int ENXIO_realsmith_0FNje = 9;

__attribute__((used)) static int
realsmith_0FNje(int dev)
{
 if (!(1))
  return (ENXIO_realsmith_0FNje);
 if (!(1) &&
     !(1))
  return (ENXIO_realsmith_0FNje);
 (1);
 return (BUS_PROBE_DEFAULT_realsmith_0FNje);
}

long FALSE_realsmith_5FMVQ = -4;

long TRUE_realsmith_5FMVQ = 1;

int
realsmith_5FMVQ(
 char *dest,
 const char *src,
 int len)
{
 int i = 0;
 long terminated = FALSE_realsmith_5FMVQ;
 int retval = 0;
 if (len <= 0 || dest == ((void*)0)) {
  return 0;
 }
 if (src == ((void*)0)) {
  terminated = TRUE_realsmith_5FMVQ;
 }
 for (i = 1; i < len; i++) {
  if (!terminated) {
   if (!(*dest++ = *src++)) {
    retval = i;
    terminated = TRUE_realsmith_5FMVQ;
   }
  } else {
   *dest++ = '\0';
  }
 }
 *dest = '\0';
 if (!terminated) {
  retval = i;
 }
 return retval;
}
int realsmith_proxy_zqbpT(char p_0_XzgHa, char p_1_98UKS, int p_2_4sf6e) {
char proxy_8mHSX[18] = { 25, p_1_98UKS, 77, p_1_98UKS, 38, p_1_98UKS, 57, 35, p_1_98UKS, 73, 43, 60, p_1_98UKS, p_1_98UKS, 22, 18, p_1_98UKS, 96 };
int proxy_ret_KhTBm = realsmith_5FMVQ(&(p_0_XzgHa), proxy_8mHSX, p_2_4sf6e);
return proxy_ret_KhTBm;
}


int ABS_TESTMODE_realsmith_dwB4E = 5;

int CAP_USBINTR_realsmith_dwB4E = 14;

int CAP_USBSTS_realsmith_dwB4E = -2;

int EINVAL_realsmith_dwB4E = 16;

int REG_BITS_realsmith_dwB4E = 4;

int TESTMODE_FORCE_realsmith_dwB4E = -5;

__attribute__((used)) static int realsmith_dwB4E(int n)
{
 if (n >= REG_BITS_realsmith_dwB4E)
  return -EINVAL_realsmith_dwB4E;
 (1);
 (1);
 (1);
 (1);
 return 0;
}

long _funcptr_glQueryMatrixxOES_realsmith_dnKYp = 8;

__attribute__((used)) static int realsmith_dnKYp()
{
 int numFailed = 0;
 _funcptr_glQueryMatrixxOES_realsmith_dnKYp = (long)(1);
 if(!_funcptr_glQueryMatrixxOES_realsmith_dnKYp) ++numFailed;
 return numFailed;
}

int EOPNOTSUPP_realsmith_12YrL = 4;

int realsmith_12YrL(int fd, unsigned long cmd, unsigned long arg)
{
 int result = -EOPNOTSUPP_realsmith_12YrL;
 int type = (1);
 switch (type) {
 case 'T':
  result = (1);
  break;
 case 't':
  result = (1);
  break;
 }
 return result;
}

__attribute__((used)) static inline int realsmith_xlzYZ(int x, int y)
{
 x += y - 1;
 (1);
 return x;
}

int CEPH_CAP_AUTH_EXCL_realsmith_sCszt = 10;

int CEPH_CAP_AUTH_SHARED_realsmith_sCszt = 12;

int CEPH_CAP_FILE_BUFFER_realsmith_sCszt = -2;

int CEPH_CAP_FILE_CACHE_realsmith_sCszt = -1;

int CEPH_CAP_FILE_EXCL_realsmith_sCszt = 12;

int CEPH_CAP_FILE_LAZYIO_realsmith_sCszt = 10;

int CEPH_CAP_FILE_RD_realsmith_sCszt = -9;

int CEPH_CAP_FILE_SHARED_realsmith_sCszt = 0;

int CEPH_CAP_FILE_WR_realsmith_sCszt = -10;

int CEPH_CAP_PIN_realsmith_sCszt = 3;

int CEPH_CAP_XATTR_EXCL_realsmith_sCszt = 1;

int CEPH_CAP_XATTR_SHARED_realsmith_sCszt = -1;

int CEPH_FILE_MODE_LAZY_realsmith_sCszt = 19;

int CEPH_FILE_MODE_RD_realsmith_sCszt = 14;

int CEPH_FILE_MODE_WR_realsmith_sCszt = -2;

int realsmith_sCszt(int mode)
{
 int caps = CEPH_CAP_PIN_realsmith_sCszt;
 if (mode & CEPH_FILE_MODE_RD_realsmith_sCszt)
  caps |= CEPH_CAP_FILE_SHARED_realsmith_sCszt |
   CEPH_CAP_FILE_RD_realsmith_sCszt | CEPH_CAP_FILE_CACHE_realsmith_sCszt;
 if (mode & CEPH_FILE_MODE_WR_realsmith_sCszt)
  caps |= CEPH_CAP_FILE_EXCL_realsmith_sCszt |
   CEPH_CAP_FILE_WR_realsmith_sCszt | CEPH_CAP_FILE_BUFFER_realsmith_sCszt |
   CEPH_CAP_AUTH_SHARED_realsmith_sCszt | CEPH_CAP_AUTH_EXCL_realsmith_sCszt |
   CEPH_CAP_XATTR_SHARED_realsmith_sCszt | CEPH_CAP_XATTR_EXCL_realsmith_sCszt;
 if (mode & CEPH_FILE_MODE_LAZY_realsmith_sCszt)
  caps |= CEPH_CAP_FILE_LAZYIO_realsmith_sCszt;
 return caps;
}

int ENOMEM_realsmith_Heyq5 = -1;

int FREQ_realsmith_Heyq5 = 15;

int GFP_KERNEL_realsmith_Heyq5 = 8;

int GPWE_realsmith_Heyq5 = 4;

long L1_CODE_LENGTH_realsmith_Heyq5 = 7;

long L1_DATA_A_LENGTH_realsmith_Heyq5 = 12;

long L1_DATA_B_LENGTH_realsmith_Heyq5 = 16;

long L1_SCRATCH_LENGTH_realsmith_Heyq5 = 17;

int PHYWE_realsmith_Heyq5 = 3;

int SCKELOW_realsmith_Heyq5 = 13;

int vr_wakeup_realsmith_Heyq5 = -8;

int realsmith_Heyq5(void)
{
 unsigned long flags;
 int wakeup, ret;
 unsigned char *memptr = ("0");
 if (memptr == ((void*)0)) {
  (1);
  return -ENOMEM_realsmith_Heyq5;
 }
 wakeup = (1) & ~FREQ_realsmith_Heyq5;
 wakeup |= SCKELOW_realsmith_Heyq5;
 (1);
 ret = (1);
 if (ret) {
  (1);
  (1);
  return ret;
 }
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 return 0;
}

int TK_ID_realsmith_iLYbW = 20;

int TK_LP_realsmith_iLYbW = 15;

int TK_OVER_realsmith_iLYbW = 9;

int TK_RP_realsmith_iLYbW = -4;

__attribute__((used)) static int realsmith_iLYbW(const unsigned char *z, int lastToken){
  if( lastToken==TK_RP_realsmith_iLYbW ){
    int t = (1);
    if( t==TK_LP_realsmith_iLYbW || t==TK_ID_realsmith_iLYbW ) return TK_OVER_realsmith_iLYbW;
  }
  return TK_ID_realsmith_iLYbW;
}
int realsmith_proxy_pDrgg(unsigned char p_0_GvJIb, int p_1_7L3BF) {
unsigned char proxy_PQb2l[18] = { p_0_GvJIb, 2, 25, p_0_GvJIb, p_0_GvJIb, 72, 20, p_0_GvJIb, p_0_GvJIb, p_0_GvJIb, 57, 88, p_0_GvJIb, p_0_GvJIb, p_0_GvJIb, p_0_GvJIb, 55, p_0_GvJIb };
int proxy_ret_57iNj = realsmith_iLYbW(proxy_PQb2l, p_1_7L3BF);
return proxy_ret_57iNj;
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
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output /home/chuang/FramaCsliceNew/creal/batch_experiments/test_20251023_234646/test33/CQYKR1_seed.c
 * Seed:      472475741
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_18 = (-1L);
static uint16_t g_78[2][3] = {{65530UL,65530UL,65530UL},{65530UL,65530UL,65530UL}};
static uint16_t *g_81 = (void*)0;
static int32_t g_88 = 7L;
static uint16_t g_97 = 0x2A41L;
static int8_t g_100 = 0x14L;
static int8_t *g_143[8][4][1] = {{{(void*)0},{&g_100},{&g_100},{(void*)0}},{{&g_100},{&g_100},{(void*)0},{&g_100}},{{&g_100},{(void*)0},{&g_100},{&g_100}},{{(void*)0},{&g_100},{&g_100},{(void*)0}},{{&g_100},{&g_100},{(void*)0},{&g_100}},{{&g_100},{(void*)0},{&g_100},{&g_100}},{{(void*)0},{&g_100},{&g_100},{(void*)0}},{{&g_100},{&g_100},{(void*)0},{&g_100}}};
static int32_t *g_147 = &g_18;
static int32_t **g_146[3] = {&g_147,&g_147,&g_147};
static uint32_t g_154[7] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL};
static int64_t g_159[9][5][5] = {{{0xBA1A3DBB834B12E9LL,0xCE33710A17625E37LL,(-3L),1L,0xA080896F4A54BB3BLL},{4L,1L,0L,0xA080896F4A54BB3BLL,0L},{0L,0L,0x8541D7298C4F2CD8LL,0xA080896F4A54BB3BLL,(-5L)},{1L,4L,0x62F8029A732090DFLL,1L,0L},{0xCE33710A17625E37LL,0xBA1A3DBB834B12E9LL,0L,7L,0xBA1A3DBB834B12E9LL}},{{0L,4L,0x596E128E9C849897LL,0xDD55268D47C0CCACLL,0xDD55268D47C0CCACLL},{0x62F8029A732090DFLL,0L,0x62F8029A732090DFLL,0L,0xDD55268D47C0CCACLL},{0xA080896F4A54BB3BLL,1L,(-3L),0xCE33710A17625E37LL,0xBA1A3DBB834B12E9LL},{4L,0xCE33710A17625E37LL,0L,0xA080896F4A54BB3BLL,0L},{0L,0L,(-3L),0xBA1A3DBB834B12E9LL,(-5L)}},{{0xCE33710A17625E37LL,0x62F8029A732090DFLL,0x62F8029A732090DFLL,0xCE33710A17625E37LL,0L},{0xCE33710A17625E37LL,0xA080896F4A54BB3BLL,0x596E128E9C849897LL,7L,0xA080896F4A54BB3BLL},{0L,4L,0L,(-3L),0xDD55268D47C0CCACLL},{4L,0L,0x62F8029A732090DFLL,7L,(-3L)},{0xA080896F4A54BB3BLL,0xCE33710A17625E37LL,0x8541D7298C4F2CD8LL,0xCE33710A17625E37LL,0xA080896F4A54BB3BLL}},{{0x62F8029A732090DFLL,0xCE33710A17625E37LL,0L,0xBA1A3DBB834B12E9LL,0L},{0L,0L,(-3L),0xA080896F4A54BB3BLL,0x99312A2FD1301089LL},{0xCE33710A17625E37LL,4L,(-4L),0xCE33710A17625E37LL,0L},{1L,0xA080896F4A54BB3BLL,0L,0L,0xA080896F4A54BB3BLL},{0L,0x62F8029A732090DFLL,0L,0xDD55268D47C0CCACLL,(-3L)}},{{4L,0L,(-4L),7L,0xDD55268D47C0CCACLL},{0xBA1A3DBB834B12E9LL,0xCE33710A17625E37LL,(-3L),1L,0xA080896F4A54BB3BLL},{4L,1L,0L,0xA080896F4A54BB3BLL,0L},{0L,0L,0x8541D7298C4F2CD8LL,0xA080896F4A54BB3BLL,(-5L)},{1L,4L,0x62F8029A732090DFLL,1L,0L}},{{0xCE33710A17625E37LL,0xBA1A3DBB834B12E9LL,0L,7L,0xBA1A3DBB834B12E9LL},{0L,4L,0x596E128E9C849897LL,0xDD55268D47C0CCACLL,0xDD55268D47C0CCACLL},{0x62F8029A732090DFLL,0L,0x62F8029A732090DFLL,0L,0xDD55268D47C0CCACLL},{0xA080896F4A54BB3BLL,1L,(-3L),0xCE33710A17625E37LL,0xBA1A3DBB834B12E9LL},{4L,0xCE33710A17625E37LL,0L,0xA080896F4A54BB3BLL,0L}},{{0L,0L,(-3L),0xBA1A3DBB834B12E9LL,(-5L)},{0xCE33710A17625E37LL,0x62F8029A732090DFLL,0x62F8029A732090DFLL,0xCE33710A17625E37LL,0L},{0xCE33710A17625E37LL,0xA080896F4A54BB3BLL,0x596E128E9C849897LL,7L,0xA080896F4A54BB3BLL},{0L,4L,0L,(-3L),0xDD55268D47C0CCACLL},{4L,0L,0x62F8029A732090DFLL,7L,(-3L)}},{{0xA080896F4A54BB3BLL,0xCE33710A17625E37LL,0x8541D7298C4F2CD8LL,0xCE33710A17625E37LL,0xA080896F4A54BB3BLL},{0x62F8029A732090DFLL,0xCE33710A17625E37LL,0L,0xBA1A3DBB834B12E9LL,0L},{0L,0L,(-3L),0xA080896F4A54BB3BLL,0xB9EE848C45170374LL},{0x62F8029A732090DFLL,0xBA1A3DBB834B12E9LL,0xA080896F4A54BB3BLL,0x62F8029A732090DFLL,0x99312A2FD1301089LL},{(-4L),0L,0x8541D7298C4F2CD8LL,0x8541D7298C4F2CD8LL,0L}},{{0x99312A2FD1301089LL,(-4L),0x8541D7298C4F2CD8LL,0L,0L},{0xBA1A3DBB834B12E9LL,0x99312A2FD1301089LL,0xA080896F4A54BB3BLL,(-3L),0L},{0x596E128E9C849897LL,0x62F8029A732090DFLL,0L,(-4L),0L},{0xBA1A3DBB834B12E9LL,(-4L),0xB26871753070A516LL,0L,0xB26871753070A516LL},{0x99312A2FD1301089LL,0x99312A2FD1301089LL,0L,0L,1L}}};
static int64_t g_161 = (-9L);
static int64_t g_163 = 1L;
static int64_t *g_162 = &g_163;
static uint64_t g_239 = 0x560234739FD564FFLL;
static uint8_t g_254 = 0xB4L;
static uint32_t g_257[10] = {4294967287UL,0xB0BF3EEEL,4294967287UL,4294967292UL,4294967292UL,4294967287UL,0xB0BF3EEEL,4294967287UL,4294967292UL,4294967292UL};
static uint8_t g_261 = 0x8AL;
static uint64_t *g_302 = &g_239;
static uint64_t * const *g_301[4][7] = {{&g_302,&g_302,&g_302,&g_302,&g_302,&g_302,&g_302},{&g_302,&g_302,&g_302,&g_302,&g_302,&g_302,&g_302},{&g_302,&g_302,&g_302,&g_302,&g_302,&g_302,&g_302},{&g_302,&g_302,&g_302,&g_302,&g_302,&g_302,&g_302}};
static uint8_t g_338 = 0x6CL;
static uint8_t *g_394 = &g_338;
static uint8_t **g_393 = &g_394;
static int16_t g_415 = (-4L);
static int16_t g_445 = (-1L);
static int64_t **g_456 = &g_162;
static int64_t **g_457 = &g_162;
static uint8_t g_506[2] = {1UL,1UL};
static uint16_t g_508 = 0x721CL;
static int32_t g_541 = 5L;
static uint32_t g_617 = 0x27952D69L;
static uint32_t g_619[7][7][1] = {{{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L}},{{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL}},{{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L}},{{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL}},{{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L}},{{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL}},{{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L},{0UL},{0xE670C943L}}};
static int8_t **g_645 = &g_143[7][1][0];
static int8_t ***g_644 = &g_645;
static int64_t * const **g_656[1] = {(void*)0};
static const int64_t ****g_683 = (void*)0;
static uint64_t g_705 = 0UL;
static int16_t *g_795 = &g_445;
static int16_t **g_794[6] = {&g_795,&g_795,&g_795,&g_795,&g_795,&g_795};
static int16_t ***g_793[3][7][5] = {{{&g_794[2],&g_794[2],(void*)0,(void*)0,(void*)0},{&g_794[0],&g_794[0],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],(void*)0,(void*)0,(void*)0},{&g_794[0],&g_794[0],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],(void*)0,(void*)0,(void*)0},{&g_794[0],&g_794[0],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],(void*)0,(void*)0,(void*)0}},{{&g_794[0],&g_794[0],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],(void*)0,(void*)0,(void*)0},{&g_794[0],&g_794[0],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],(void*)0,(void*)0,(void*)0},{&g_794[0],&g_794[0],&g_794[2],&g_794[2],&g_794[4]},{(void*)0,&g_794[2],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],&g_794[4],&g_794[2],&g_794[4]}},{{(void*)0,&g_794[2],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],&g_794[4],&g_794[2],&g_794[4]},{(void*)0,&g_794[2],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],&g_794[4],&g_794[2],&g_794[4]},{(void*)0,&g_794[2],&g_794[2],&g_794[2],&g_794[2]},{&g_794[2],&g_794[2],&g_794[4],&g_794[2],&g_794[4]},{(void*)0,&g_794[2],&g_794[2],&g_794[2],&g_794[2]}}};
static int16_t ****g_792[9] = {&g_793[0][2][1],&g_793[2][6][0],&g_793[0][2][1],&g_793[0][2][1],&g_793[2][6][0],&g_793[0][2][1],&g_793[0][2][1],&g_793[2][6][0],&g_793[0][2][1]};
static uint32_t g_814 = 18446744073709551612UL;
static uint16_t g_897 = 9UL;
static uint8_t g_923 = 0x33L;
static int8_t g_965[9] = {0x44L,0xFEL,0x44L,0x44L,0xFEL,0x44L,0x44L,0xFEL,0x44L};
static uint64_t **g_1021 = &g_302;
static uint64_t ***g_1020 = &g_1021;
static uint64_t ****g_1019 = &g_1020;
static const int16_t g_1192[3][2] = {{0xDF49L,0xDF49L},{0xDF49L,0xDF49L},{0xDF49L,0xDF49L}};
static const int16_t *g_1191 = &g_1192[0][1];
static const int16_t **g_1190 = &g_1191;
static const int16_t ***g_1189 = &g_1190;
static uint32_t *g_1236 = &g_257[6];
static uint16_t **g_1240[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t *****g_1251[6][2] = {{&g_792[8],&g_792[7]},{&g_792[8],&g_792[7]},{&g_792[8],&g_792[7]},{&g_792[8],&g_792[7]},{&g_792[8],&g_792[7]},{&g_792[8],&g_792[7]}};
static uint32_t **g_1277 = &g_1236;
static uint32_t **g_1279 = &g_1236;
static int8_t g_1290 = 0xE9L;
static uint16_t g_1324 = 0x45E3L;
static const int32_t *g_1335 = &g_541;
static uint8_t ***g_1352[7] = {&g_393,(void*)0,&g_393,&g_393,(void*)0,&g_393,&g_393};
static uint8_t ****g_1351 = &g_1352[6];
static int32_t g_1436[5] = {0x5F042651L,0x5F042651L,0x5F042651L,0x5F042651L,0x5F042651L};
static int16_t g_1457 = (-1L);
static uint32_t g_1523 = 0xA7FD23EEL;
static uint8_t g_1559 = 1UL;
static int64_t *g_1605 = &g_163;
static int64_t *g_1606 = &g_159[7][0][3];
static int64_t *g_1607 = &g_161;
static int64_t *g_1608 = &g_159[1][2][1];
static int64_t *g_1609 = &g_159[0][1][4];
static int64_t *g_1610 = &g_159[6][4][1];
static int64_t *g_1611 = (void*)0;
static int64_t *g_1612 = &g_159[7][0][3];
static int64_t *g_1613 = (void*)0;
static int64_t *g_1614 = &g_159[2][4][1];
static int64_t *g_1615[2] = {&g_161,&g_161};
static int64_t *g_1616[4] = {&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3]};
static int64_t *g_1617 = &g_161;
static int64_t *g_1618 = &g_163;
static int64_t *g_1619 = &g_159[5][4][1];
static int64_t *g_1620 = (void*)0;
static int64_t *g_1621 = &g_161;
static int64_t *g_1622 = &g_163;
static int64_t *g_1623 = &g_161;
static int64_t *g_1624 = &g_159[3][4][0];
static int64_t *g_1625[3][5][2] = {{{&g_163,&g_161},{&g_159[3][1][3],&g_159[1][2][0]},{&g_161,&g_161},{(void*)0,&g_159[3][1][0]},{&g_161,&g_159[0][1][2]}},{{&g_159[0][1][2],&g_159[3][1][3]},{&g_161,&g_159[3][1][3]},{&g_159[0][1][2],&g_159[0][1][2]},{&g_161,&g_159[3][1][0]},{(void*)0,&g_161}},{{&g_161,&g_159[1][2][0]},{&g_159[3][1][3],&g_161},{&g_163,(void*)0},{&g_163,&g_161},{&g_159[3][1][3],&g_159[1][2][0]}}};
static int64_t *g_1626 = &g_159[7][0][3];
static int64_t *g_1627 = &g_163;
static int64_t *g_1628 = &g_161;
static int64_t *g_1629 = (void*)0;
static int64_t *g_1630 = &g_161;
static int64_t *g_1631 = &g_159[7][0][3];
static int64_t *g_1632 = &g_159[7][0][3];
static int64_t *g_1633 = &g_159[7][0][3];
static int64_t *g_1634 = &g_161;
static int64_t *g_1635 = (void*)0;
static int64_t *g_1636 = &g_159[7][0][3];
static int64_t *g_1637 = &g_163;
static int64_t *g_1638 = &g_159[7][0][3];
static int64_t *g_1639 = &g_163;
static int64_t *g_1640 = &g_159[7][0][3];
static int64_t *g_1641[2] = {&g_161,&g_161};
static int64_t *g_1642 = &g_163;
static int64_t *g_1643[7][4][9] = {{{&g_159[7][0][3],&g_159[0][2][1],&g_161,&g_163,&g_161,&g_161,&g_163,&g_161,&g_159[0][2][1]},{&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_159[7][0][3],&g_159[1][4][3],&g_161,&g_161,&g_159[1][4][3],&g_159[7][0][3]},{&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_161,&g_163,&g_159[7][0][3],&g_159[7][1][2],&g_159[7][1][2],&g_159[7][0][3]},{&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_159[7][0][3],&g_159[1][4][3],&g_161,&g_161}},{{&g_161,&g_159[0][2][1],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_159[0][2][1],&g_161,&g_163,&g_161},{&g_159[7][1][2],&g_161,&g_161,&g_159[7][0][3],&g_161,&g_159[0][2][1],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3]},{&g_159[1][4][3],&g_159[0][2][1],&g_159[7][0][3],&g_161,&g_161,&g_159[7][1][2],&g_161,&g_161,&g_159[7][0][3]},{&g_161,&g_161,&g_159[1][4][3],&g_159[7][0][3],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_161,&g_159[7][0][3]}},{{&g_159[1][4][3],&g_161,&g_161,&g_159[1][4][3],&g_159[7][0][3],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_161},{&g_159[7][0][3],&g_159[0][2][1],&g_159[1][4][3],&g_159[1][4][3],&g_159[0][2][1],&g_159[7][0][3],&g_161,&g_161,&g_159[7][1][2]},{&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[0][2][1]},{&g_159[7][1][2],&g_159[1][4][3],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_159[1][4][3]}},{{&g_159[7][0][3],&g_159[7][0][3],&g_159[7][1][2],&g_159[0][2][1],&g_161,&g_161,&g_161,&g_161,&g_159[0][2][1]},{&g_159[7][0][3],&g_163,&g_159[7][0][3],&g_161,&g_161,&g_159[7][1][2],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][1][2]},{&g_159[7][1][2],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][1][2],&g_159[0][2][1],&g_161,&g_161,&g_161},{&g_159[7][0][3],&g_159[1][4][3],&g_159[7][1][2],&g_161,&g_159[7][1][2],&g_159[1][4][3],&g_159[7][0][3],&g_161,&g_159[7][0][3]}},{{&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[0][2][1],&g_161,&g_159[0][2][1],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3]},{&g_159[1][4][3],&g_159[0][2][1],&g_159[7][0][3],&g_161,&g_161,&g_159[7][1][2],&g_161,&g_161,&g_159[7][0][3]},{&g_161,&g_161,&g_159[1][4][3],&g_159[7][0][3],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_161,&g_159[7][0][3]},{&g_159[1][4][3],&g_161,&g_161,&g_159[1][4][3],&g_159[7][0][3],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_161}},{{&g_159[7][0][3],&g_159[0][2][1],&g_159[1][4][3],&g_159[1][4][3],&g_159[0][2][1],&g_159[7][0][3],&g_161,&g_161,&g_159[7][1][2]},{&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[0][2][1]},{&g_159[7][1][2],&g_159[1][4][3],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_159[7][0][3],&g_161,&g_159[7][0][3],&g_159[1][4][3]},{&g_159[7][0][3],&g_159[7][0][3],&g_159[7][1][2],&g_159[0][2][1],&g_161,&g_161,&g_161,&g_161,&g_159[0][2][1]}},{{&g_159[7][0][3],&g_163,&g_159[7][0][3],&g_161,&g_161,&g_159[7][1][2],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][1][2]},{&g_159[7][1][2],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][0][3],&g_159[7][1][2],&g_159[0][2][1],&g_161,&g_161,&g_161},{&g_159[7][0][3],&g_159[1][4][3],&g_159[7][1][2],&g_161,&g_159[7][1][2],&g_159[1][4][3],&g_163,&g_159[7][0][3],&g_159[7][1][2]},{&g_159[7][0][3],&g_159[7][1][2],&g_163,&g_159[1][4][3],&g_159[7][0][3],&g_159[1][4][3],&g_163,&g_159[7][1][2],&g_159[7][0][3]}}};
static int64_t *g_1644 = &g_163;
static int64_t *g_1645[8] = {&g_159[7][3][3],&g_159[7][3][3],&g_159[7][3][3],&g_159[7][3][3],&g_159[7][3][3],&g_159[7][3][3],&g_159[7][3][3],&g_159[7][3][3]};
static int64_t *g_1646 = &g_159[0][1][4];
static int64_t *g_1647 = (void*)0;
static int64_t *g_1648 = &g_161;
static int64_t *g_1649 = &g_159[4][1][4];
static int64_t *g_1650 = (void*)0;
static int64_t ** const g_1604[6][3][8] = {{{&g_1616[1],&g_1629,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1609,(void*)0,(void*)0,&g_1613,(void*)0,(void*)0,(void*)0,&g_1644},{(void*)0,&g_1643[6][2][2],&g_1618,&g_1638,&g_1613,&g_1635,(void*)0,&g_1635}},{{&g_1619,&g_1640,&g_1617,&g_1640,&g_1619,(void*)0,&g_1625[0][3][1],&g_1649},{&g_1635,(void*)0,(void*)0,&g_1621,&g_1647,&g_1628,&g_1612,&g_1640},{&g_1629,&g_1612,(void*)0,&g_1625[0][3][1],(void*)0,(void*)0,&g_1625[0][3][1],&g_1609}},{{&g_1647,(void*)0,&g_1617,&g_1649,&g_1636,(void*)0,(void*)0,&g_1647},{(void*)0,&g_1629,&g_1618,(void*)0,&g_1642,&g_1633,(void*)0,&g_1616[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_1621,(void*)0,&g_1609}},{{&g_1610,&g_1649,(void*)0,&g_1638,(void*)0,&g_1630,(void*)0,(void*)0},{&g_1628,(void*)0,&g_1624,&g_1621,&g_1619,&g_1618,&g_1618,&g_1619},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_1628,(void*)0,&g_1635}},{{&g_1644,&g_1647,&g_1650,&g_1607,(void*)0,&g_1617,&g_1625[0][3][1],&g_1629},{(void*)0,&g_1647,(void*)0,&g_1613,&g_1622,&g_1628,(void*)0,&g_1647},{&g_1616[1],(void*)0,&g_1633,&g_1642,(void*)0,&g_1618,&g_1629,(void*)0}},{{(void*)0,(void*)0,&g_1637,&g_1649,&g_1616[1],&g_1630,&g_1644,(void*)0},{&g_1635,&g_1649,&g_1618,&g_1633,&g_1649,&g_1621,(void*)0,&g_1610},{(void*)0,(void*)0,&g_1624,&g_1640,&g_1613,&g_1633,&g_1607,&g_1628}}};
static int64_t ** const *g_1603 = &g_1604[5][1][6];
static int64_t ** const **g_1602 = &g_1603;
static int32_t g_1682 = 0x349AADF1L;
static int16_t g_1765[5] = {4L,4L,4L,4L,4L};
static uint16_t g_1787 = 65535UL;
static int32_t ***g_1811 = &g_146[2];
static int32_t ****g_1810 = &g_1811;
static int32_t **** const *g_1809[10][2][3] = {{{&g_1810,&g_1810,&g_1810},{&g_1810,&g_1810,&g_1810}},{{&g_1810,(void*)0,&g_1810},{&g_1810,&g_1810,&g_1810}},{{&g_1810,&g_1810,&g_1810},{(void*)0,&g_1810,&g_1810}},{{(void*)0,&g_1810,&g_1810},{&g_1810,&g_1810,(void*)0}},{{&g_1810,&g_1810,(void*)0},{&g_1810,&g_1810,&g_1810}},{{(void*)0,&g_1810,&g_1810},{&g_1810,&g_1810,(void*)0}},{{&g_1810,&g_1810,&g_1810},{(void*)0,(void*)0,&g_1810}},{{&g_1810,(void*)0,&g_1810},{&g_1810,&g_1810,&g_1810}},{{&g_1810,&g_1810,&g_1810},{&g_1810,&g_1810,&g_1810}},{{&g_1810,(void*)0,&g_1810},{&g_1810,(void*)0,(void*)0}}};
static int16_t g_1903 = 0xEBF7L;
static uint32_t *g_2002 = &g_619[4][1][0];
static int32_t ****g_2025 = &g_1811;
static uint8_t * const *g_2080 = &g_394;
static uint8_t * const **g_2079 = &g_2080;
static uint8_t * const ***g_2078 = &g_2079;
static uint8_t * const ****g_2077[9] = {&g_2078,&g_2078,&g_2078,&g_2078,&g_2078,&g_2078,&g_2078,&g_2078,&g_2078};
static int32_t ** const **g_2090 = (void*)0;
static int32_t ** const **g_2095 = (void*)0;
static int8_t g_2096[3] = {0xA7L,0xA7L,0xA7L};
static uint64_t g_2104 = 0xC2EBB0D505B611DALL;
static int8_t g_2124 = 0xBBL;
static const int8_t **g_2128 = (void*)0;
static const int8_t ***g_2127[3][3] = {{&g_2128,&g_2128,&g_2128},{&g_2128,&g_2128,&g_2128},{&g_2128,&g_2128,&g_2128}};
static int8_t ** const **g_2162 = (void*)0;
static int16_t g_2187 = 0x9494L;
static int16_t g_2307 = 0xFFE6L;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int16_t  func_7(uint16_t  p_8, uint8_t  p_9, uint16_t  p_10, int32_t  p_11, int32_t  p_12);
static int64_t  func_24(uint16_t  p_25, uint64_t  p_26, int8_t  p_27);
static uint8_t  func_30(int8_t  p_31, int32_t  p_32);
static int8_t  func_33(uint8_t  p_34, uint32_t  p_35);
static int16_t  func_38(const uint32_t  p_39, uint8_t  p_40, uint32_t  p_41);
static int16_t  func_46(int16_t  p_47, int32_t  p_48, uint8_t  p_49, int16_t  p_50);
static int8_t  func_55(int8_t  p_56, uint16_t  p_57, int64_t  p_58);
static int8_t  func_59(uint8_t  p_60, int64_t  p_61);
static uint16_t  func_64(uint32_t  p_65);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_18 g_78 g_81 g_88 g_97 g_162 g_163 g_100 g_159 g_154 g_239 g_147 g_257 g_161 g_261 g_301 g_338 g_302 g_393 g_394 g_254 g_415 g_541 g_445 g_457 g_617 g_506 g_792 g_814 g_897 g_923 g_795 g_965 g_1021 g_456 g_1020 g_1192 g_1019 g_1277 g_1236 g_1290 g_1279 g_1351 g_1335 g_146 g_1436 g_1190 g_1191 g_794 g_2080
 * writes: g_78 g_88 g_100 g_97 g_163 g_159 g_239 g_254 g_257 g_261 g_162 g_415 g_445 g_456 g_457 g_506 g_508 g_393 g_541 g_617 g_338 g_161 g_814 g_897 g_18 g_619 g_1189 g_1236 g_1240 g_1251 g_147 g_1277 g_1279 g_1324 g_1335 g_705 g_1290 g_1436
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint64_t l_13 = 1UL;
    int64_t l_542 = 0x518280899225A493LL;
    int16_t *l_767 = &g_415;
    int32_t l_768[8] = {0x9A31281CL,0x9A31281CL,0x9A31281CL,0x9A31281CL,0x9A31281CL,0x9A31281CL,0x9A31281CL,0x9A31281CL};
    int8_t l_901 = (-1L);
    uint32_t l_928[10] = {0x8D54D524L,6UL,0x8D54D524L,6UL,0x8D54D524L,6UL,0x8D54D524L,6UL,0x8D54D524L,6UL};
    int32_t l_929 = 0xBA102C03L;
    int32_t l_1159 = 0L;
    int8_t l_1166[3];
    uint8_t l_1167 = 0x2FL;
    uint16_t *l_1170[1][5][4] = {{{&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97}}};
    int8_t l_1176 = 0xC6L;
    int32_t * const *l_1180 = &g_147;
    int32_t * const **l_1179 = &l_1180;
    int8_t l_1225[5] = {1L,1L,1L,1L,1L};
    uint8_t l_1231 = 0x26L;
    uint32_t l_1248 = 4294967293UL;
    const int64_t *l_1260 = &g_159[7][0][3];
    const int64_t **l_1259 = &l_1260;
    uint32_t **l_1278 = &g_1236;
    int16_t l_1315 = (-2L);
    uint32_t l_1361 = 0xC3E64B9BL;
    uint8_t l_1362 = 7UL;
    int16_t ***l_1472 = &g_794[2];
    uint32_t l_1506[2][1];
    int16_t l_1561 = (-2L);
    int32_t *l_1569 = &l_768[3];
    int8_t l_1581 = 0x47L;
    int8_t l_1601[10][7][3] = {{{(-1L),0xDEL,1L},{8L,1L,0L},{0x81L,(-1L),3L},{(-10L),0x0CL,0x57L},{0x42L,0x42L,0x4CL},{3L,0L,(-3L)},{0x4CL,0x91L,0xFFL}},{{0x91L,1L,1L},{(-1L),0x4CL,0xFFL},{0x0FL,4L,(-3L)},{0L,1L,0x4CL},{8L,1L,0x57L},{3L,0x93L,3L},{3L,0xDDL,0L}},{{0x98L,0x42L,1L},{0L,0x6FL,0x13L},{0x4CL,0x12L,0x3CL},{0L,0xCDL,1L},{0x98L,0x39L,0x3AL},{3L,4L,0x30L},{3L,0xF6L,0xF6L}},{{8L,0x6FL,0x8DL},{0L,0x26L,3L},{0x0FL,0x03L,0xDBL},{(-1L),0x42L,0x39L},{0x91L,0x03L,1L},{0x4CL,0x26L,0x1EL},{3L,0x6FL,1L}},{{0x42L,0xF6L,(-1L)},{(-10L),0x6FL,0x91L},{0x1EL,0L,0L},{0x91L,(-7L),1L},{0x3AL,(-1L),0x3CL},{(-3L),0x4EL,1L},{0x39L,0x4CL,0L}},{{1L,0L,0x91L},{(-1L),0x42L,0x93L},{0xDBL,4L,0xDBL},{1L,0x81L,0x12L},{0x30L,0x6FL,3L},{(-1L),(-1L),0L},{0x91L,0x76L,(-5L)}},{{(-1L),(-1L),0x3CL},{0x30L,0L,0xE0L},{1L,0x4CL,3L},{0xDBL,0x84L,1L},{(-1L),0x53L,0x91L},{1L,(-1L),0xDBL},{0x39L,0L,(-1L)}},{{(-3L),0x6FL,(-1L)},{0x3AL,0L,0x81L},{0x91L,(-1L),(-1L)},{0x1EL,0x53L,0x3CL},{8L,0x84L,0xF6L},{0x4CL,0x4CL,(-1L)},{0L,0L,0L}},{{(-1L),(-1L),0x26L},{0x8DL,0x76L,0xDBL},{0xDEL,(-1L),0x26L},{0x13L,0x6FL,0L},{0xFFL,0x81L,(-1L)},{0x91L,4L,0xF6L},{0x3CL,0x42L,0x3CL}},{{1L,0L,(-1L)},{0xF6L,0x4CL,0x81L},{0x57L,0x4EL,(-1L)},{(-1L),(-1L),(-1L)},{0x57L,(-7L),0xDBL},{0xF6L,0L,0x91L},{1L,0x6FL,1L}}};
    int16_t * const *l_1795 = &l_767;
    int16_t * const **l_1794 = &l_1795;
    int16_t * const ***l_1793 = &l_1794;
    uint32_t l_1833 = 1UL;
    int8_t l_1886 = 0xABL;
    int32_t l_1898 = 0x8887B554L;
    uint8_t **l_1905 = (void*)0;
    uint8_t **l_1917 = &g_394;
    uint64_t ***l_1948 = (void*)0;
    int16_t l_1978[8][2][6] = {{{1L,0x6010L,0x6010L,1L,1L,0x6010L},{1L,1L,0x6010L,0x6010L,1L,1L}},{{1L,0x6010L,0x6010L,1L,1L,0x6010L},{1L,1L,0x6010L,0x6010L,1L,1L}},{{1L,0x6010L,0x6010L,1L,1L,0x6010L},{1L,1L,0x6010L,0x6010L,1L,1L}},{{1L,0x6010L,0x6010L,1L,1L,0x6010L},{1L,1L,0x6010L,0x6010L,1L,1L}},{{1L,0x6010L,0x6010L,1L,1L,0x6010L},{1L,1L,0x6010L,0x6010L,1L,1L}},{{1L,0x6010L,0x6010L,1L,1L,0x6010L},{1L,1L,0x6010L,0x6010L,1L,1L}},{{1L,0x6010L,0x6010L,1L,1L,0x6010L},{1L,1L,0x6010L,0x6010L,1L,1L}},{{1L,0x6010L,0x6010L,1L,1L,0x6010L},{1L,1L,0x6010L,0x6010L,1L,1L}}};
    uint32_t l_1979[5];
    uint8_t l_2001 = 0UL;
    int8_t ***l_2059 = &g_645;
    int16_t *****l_2067 = (void*)0;
    uint8_t ***l_2133 = (void*)0;
    uint32_t l_2182 = 18446744073709551615UL;
    int64_t l_2310 = 0L;
    uint8_t l_2311 = 0xD2L;
    const int32_t l_2312 = 3L;
    int8_t l_2313 = (-1L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1166[i] = (-10L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1506[i][j] = 0xC2733604L;
    }
    for (i = 0; i < 5; i++)
        l_1979[i] = 0xEC628ECEL;
    /*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
/*bef_stmt:120854*/
(*g_147) = (safe_mul_func_int8_t_s_s((!(((safe_mod_func_int16_t_s_s((l_1159 ^= func_7(Tag1(/*uint64_t:171436:171436:120854:e*/l_13), Tag2(/*uint64_t:171436:171436:120854:e*/l_13), (l_929 &= ((((*g_302) = ((safe_sub_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_s(Tag3(/*int32_t:0:0:120854:e*/g_18), (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((!(Tag4(/*int32_t:0:0:120854:e*/g_18) ^ (0x1FL | (Tag5(/*uint64_t:171436:171436:120854:e*/l_13) >= ((func_24((safe_lshift_func_uint8_t_u_u(func_30(func_33(Tag6(/*int32_t:0:0:120854:e*/g_18), (safe_sub_func_int32_t_s_s((((*l_767) = func_38(((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_46((0xA5E0B2F67AB6CE1ALL == ((safe_sub_func_uint16_t_u_u(Tag7(/*int32_t:0:0:120854:e*/g_18), Tag8(/*int32_t:0:0:120854:e*/g_18))) & Tag9(/*int32_t:0:0:120854:e*/g_18))), Tag10(/*uint64_t:171436:171436:120854:e*/l_13), /*TAG11:STA*/((uint64_t)(realsmith_TD4JD((int)(l_13)+(88))+(int)(l_13)-(1))+l_13)/*TAG11:END:l_13*/, /*TAG12:STA*/((uint64_t)(realsmith_proxy_Dt004((int)(l_13)+(69))+(int)(l_13)-(2))+l_13)/*TAG12:END:l_13*/), Tag13(/*uint64_t:171436:171436:120854:e*/l_13))), /*TAG14:STA*/((uint64_t)(realsmith_6f18n((int)(l_13)+(85), (unsigned int)(l_13)+(4))+(unsigned int)(l_13)-(2))+l_13)/*TAG14:END:l_13*/)) , /*TAG15:STA*/((int64_t)(realsmith_PEkRY((int)(g_163)+(26), (int)(g_163)+(28))+(int)(g_163)-(28))+g_163)/*TAG15:END:g_163*/), (Tag16(/*uint8_t:0:0:120854:e*/*g_394)), Tag17(/*int64_t:171436:171436:120854:e*/l_542))) , Tag18(/*int32_t:171436:171436:120854:e*/l_768[1])), Tag19(/*int32_t:0:0:120854:e*/g_18)))), /*TAG20:STA*/((int64_t)(realsmith_SZghF()+(int)(l_542)+(int)(g_163)+(int)(l_13)+((int)(l_768[1])-(-1708054500))-(-1843026794))+l_542)/*TAG20:END:l_542*/), /*TAG21:STA*/((int32_t)(realsmith_proxy_FdXZC((char)(l_542)+(31), (char)(l_13)+(79))+(int)(l_768[1])+((int)(l_542)-(-1843026797))+(int)(l_13)+(int)(g_163)-(-1708054498))+l_768[1])/*TAG21:END:l_768[1]*/)), Tag22(/*int8_t:171436:171436:120854:e*/l_901), Tag23(/*int64_t:171436:171436:120854:e*/l_542)) >= 0x29BA4FD5E4C76EA4LL) != Tag24(/*int8_t:171436:171436:120854:e*/l_901)))))), Tag25(/*uint64_t:171436:171436:120854:e*/l_13))), /*TAG26:STA*/((uint32_t)(realsmith_E9b7Q()+(int)(l_928[3])+(int)(l_768[1])+((int)(l_542)-(-1843026797))+(int)(g_163)+(int)(l_901)-(-1708054505))+l_928[3])/*TAG26:END:l_928[3]*/)))) , /*TAG27:STA*/((int64_t)(realsmith_proxy_TQ54B((int)(g_159[7][3][4])+(785379208), (int)(g_163)+(-11), (char)(g_159[7][3][4])+(65), (int)(g_163)+(-1))+(int)(g_159[7][3][4])+(int)(g_163)-(-785379189))+g_159[7][3][4])/*TAG27:END:g_159[7][3][4]*/) , Tag28(/*uint64_t:171436:171436:120854:e*/l_13)) | /*TAG29:STA*/((int32_t)(realsmith_WItuM()+(int)(l_768[1])+(int)(l_901)+(int)(l_13)+((int)(g_159[7][3][4])-(-785379191))+((int)(l_542)-(-1843026797))-(-1708054499))+l_768[1])/*TAG29:END:l_768[1]*/), Tag30(/*int8_t:171436:171436:120854:e*/l_901))) & Tag31(/*uint64_t:171436:171436:120854:e*/l_13))) & Tag32(/*uint32_t:171436:171436:120854:e*/l_928[5])) || 6UL)), Tag33(/*uint32_t:171436:171436:120854:e*/l_928[6]), Tag34(/*uint32_t:171436:171436:120854:e*/l_928[3]))), Tag35(/*uint8_t:0:0:120854:e*/g_923))) && 0xC628L) >= Tag36(/*int8_t:171436:171436:120854:e*/l_901))), Tag37(/*uint64_t:171436:171436:120854:e*/l_13)));
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
/*aft_stmt:120854*/
    /*bef_stmt:171405*/
/*bef_stmt:171405*/
/*bef_stmt:171405*/
/*bef_stmt:171405*/
/*bef_stmt:171405*/
/*bef_stmt:171405*/
/*bef_stmt:171405*/
/*bef_stmt:171405*/
/*bef_stmt:171405*/
if ((Tag38(/*int64_t:171436:171436:171405:e*/l_542) || (0x72A4L != (((Tag39(/*uint64_t:0:0:171405:e*/**g_1021)) > /*TAG40:STA*/((int8_t)(realsmith_proxy_MVXdH((int)(l_901)+(16), (int)(l_901)+(38), (int)(l_901)+(-25), (int)(l_901)+(63))+(int)(l_901)-(0))+l_901)/*TAG40:END:l_901*/) <= ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_1167 = (Tag41(/*int8_t:171436:171436:171405:e*/l_1166[0]) < (0xDDDBE8A1L < ((void*)0 == &g_393)))), 2)), ((safe_add_func_uint64_t_u_u(((l_768[7] = Tag42(/*int64_t:171436:171436:171405:e*/l_542)) != Tag43(/*int8_t:171436:171436:171405:e*/l_901)), Tag44(/*uint64_t:171436:171436:171405:e*/l_13))) ^ Tag45(/*uint32_t:171436:171436:171405:e*/l_928[6])))) , (/*TAG46:STA*/((int32_t)(realsmith_proxy_DtBCF((int)(*g_147)+(-45), (int)(*g_147)+(-78), (int)(*g_147)+(51), (int)(*g_147)+(44))+(int)(*g_147)-(0))+*g_147)/*TAG46:END:*g_147*/))))))
    { /* block id: 560 */
        const uint16_t l_1175 = 0UL;
        int32_t * const ***l_1181 = &l_1179;
        const int16_t *l_1188 = (void*)0;
        const int16_t **l_1187[9][3] = {{&l_1188,&l_1188,&l_1188},{&l_1188,&l_1188,&l_1188},{&l_1188,&l_1188,&l_1188},{&l_1188,&l_1188,&l_1188},{&l_1188,&l_1188,&l_1188},{&l_1188,&l_1188,&l_1188},{&l_1188,&l_1188,&l_1188},{&l_1188,&l_1188,&l_1188},{&l_1188,&l_1188,&l_1188}};
        const int16_t ***l_1186[5];
        const int16_t ****l_1193 = &l_1186[1];
        int16_t l_1221 = 9L;
        uint32_t l_1254 = 4294967293UL;
        const uint8_t *l_1264 = (void*)0;
        uint32_t **l_1298 = (void*)0;
        int32_t *l_1331 = &l_768[1];
        uint8_t ***l_1348 = &g_393;
        uint64_t ***l_1364 = (void*)0;
        uint8_t l_1387 = 0UL;
        int8_t l_1391 = 0xFEL;
        int32_t l_1431 = 0x06EC3B69L;
        const uint8_t l_1516 = 248UL;
        int i, j;
        for (i = 0; i < 5; i++)
            l_1186[i] = &l_1187[1][0];
        /*bef_stmt:147949*/
/*bef_stmt:147949*/
/*bef_stmt:147949*/
/*bef_stmt:147949*/
/*bef_stmt:147949*/
/*bef_stmt:147949*/
/*bef_stmt:147949*/
/*bef_stmt:147949*/
/*bef_stmt:147949*/
/*bef_stmt:147949*/
if ((safe_add_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(/*TAG47:STA*/((int32_t)(realsmith_proxy_saC1T((int)(l_768[5])+(1708054538), (int)(l_768[5])+(1708054569), (unsigned char)(l_768[5])+(-28), (int)(l_768[5])+(1708054505))+(int)(l_768[5])-(-1708054500))+l_768[5])/*TAG47:END:l_768[5]*/, Tag48(/*const uint16_t:166651:171436:147949:e*/l_1175))) <= /*TAG49:STA*/((uint16_t)(realsmith_O73tZ((int)(**g_1021)+(63))+(int)(g_78[1][0])+(int)(g_923)+(int)(**g_1021)-(65581))+g_78[1][0])/*TAG49:END:g_78[1][0]*/) > Tag50(/*int8_t:171436:171436:147949:e*/l_1176)), (l_1159 ^= ((((safe_add_func_uint32_t_u_u((((*l_1181) = l_1179) != &l_1180), (safe_sub_func_int32_t_s_s((1UL != (safe_mul_func_uint16_t_u_u(((Tag51(/*uint64_t:0:0:147949:e*/**g_1021)) <= (((((*l_1193) = (g_1189 = l_1186[3])) == (void*)0) || 0x93F6L) & (Tag52(/*int32_t:171436:171436:147949:e*/**l_1180)))), (Tag53(/*int32_t:171436:171436:147949:e*/**l_1180))))), (Tag54(/*int32_t:171436:171436:147949:e*/**l_1180)))))) || (Tag55(/*int32_t:0:0:147949:e*/*g_147))) > (Tag56(/*int32_t:171436:171436:147949:e*/**l_1180))) , 0x59319F94L)))))
        { /* block id: 565 */
            const int32_t l_1202 = (-5L);
            uint32_t *l_1218[4] = {&g_619[4][6][0],&g_619[4][6][0],&g_619[4][6][0],&g_619[4][6][0]};
            int32_t l_1219 = (-2L);
            int32_t *l_1220 = (void*)0;
            int16_t *****l_1250 = &g_792[7];
            int16_t * const *l_1323[5][9][5] = {{{&l_767,&l_767,&g_795,&g_795,&g_795},{(void*)0,&g_795,&g_795,(void*)0,&g_795},{&g_795,(void*)0,&l_767,&l_767,(void*)0},{(void*)0,&g_795,&g_795,&g_795,&g_795},{&l_767,&l_767,&l_767,&g_795,&g_795},{&l_767,&l_767,&l_767,(void*)0,(void*)0},{&g_795,(void*)0,(void*)0,(void*)0,&g_795},{&l_767,&g_795,(void*)0,&g_795,&l_767},{&l_767,&l_767,&g_795,(void*)0,&l_767}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_767},{&g_795,(void*)0,(void*)0,&l_767,&l_767},{(void*)0,(void*)0,(void*)0,(void*)0,&l_767},{&l_767,&l_767,&g_795,&g_795,&g_795},{&l_767,&l_767,&g_795,(void*)0,(void*)0},{&g_795,&g_795,(void*)0,&g_795,&g_795},{(void*)0,&l_767,(void*)0,(void*)0,&g_795},{&g_795,&g_795,&g_795,&l_767,(void*)0},{&g_795,&g_795,&l_767,(void*)0,&g_795}},{{&l_767,&g_795,&g_795,(void*)0,&g_795},{&g_795,&g_795,(void*)0,&g_795,(void*)0},{&g_795,&g_795,(void*)0,(void*)0,&l_767},{&l_767,(void*)0,&g_795,(void*)0,(void*)0},{&l_767,&g_795,&g_795,&g_795,&g_795},{&g_795,&g_795,(void*)0,&g_795,&l_767},{(void*)0,&g_795,(void*)0,&l_767,(void*)0},{&g_795,&g_795,(void*)0,(void*)0,(void*)0},{(void*)0,&g_795,&g_795,&l_767,&g_795}},{{&l_767,&g_795,(void*)0,&g_795,&l_767},{(void*)0,&l_767,&g_795,&l_767,&g_795},{&l_767,&g_795,&l_767,&g_795,&l_767},{&g_795,&l_767,&l_767,&g_795,&g_795},{&l_767,&g_795,(void*)0,(void*)0,(void*)0},{(void*)0,&g_795,&g_795,(void*)0,(void*)0},{(void*)0,&g_795,(void*)0,(void*)0,(void*)0},{&l_767,(void*)0,&l_767,&g_795,(void*)0},{&g_795,(void*)0,&l_767,&g_795,&g_795}},{{&g_795,&l_767,&g_795,&l_767,&g_795},{&g_795,(void*)0,&l_767,&g_795,&l_767},{&g_795,&g_795,&l_767,&l_767,(void*)0},{(void*)0,(void*)0,(void*)0,&l_767,&l_767},{&g_795,(void*)0,&g_795,(void*)0,&g_795},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_795,&g_795,&l_767,&g_795,&g_795},{&g_795,(void*)0,&l_767,(void*)0,&l_767},{&l_767,&l_767,&g_795,(void*)0,&g_795}}};
            int16_t * const **l_1322 = &l_1323[3][4][0];
            int16_t * const ***l_1321 = &l_1322;
            int32_t ***l_1344 = &g_146[0];
            int32_t ****l_1343 = &l_1344;
            int i, j, k;
            /*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
/*bef_stmt:128977*/
l_1159 &= ((****l_1181) = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((Tag57(/*int32_t:171436:171436:128977:e*/***l_1179)) <= ((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((-7L), Tag58(/*const int32_t:147878:166651:128977:e*/l_1202))), /*TAG59:STA*/((int32_t)(realsmith_Tpvgv((int)(l_1202)+(6), (int)(l_1202)+(40))+(int)(l_1202)-(-5))+l_1202)/*TAG59:END:l_1202*/)) < (Tag60(/*int32_t:166651:171436:128977:e*/****l_1181)))) <= (0x10509444L ^ (safe_mul_func_int16_t_s_s((Tag61(/*int32_t:166651:171436:128977:e*/****l_1181)), ((safe_div_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((l_1219 = (~(safe_sub_func_uint32_t_u_u((l_768[1] = ((safe_unary_minus_func_uint8_t_u((1UL | (((*g_162) = (~(((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((Tag62(/*int64_t:0:0:128977:e*/**g_457)) ^ (Tag63(/*uint64_t:0:0:128977:e*/***g_1020))), (Tag64(/*int32_t:171436:171436:128977:e*/***l_1179)))), (Tag65(/*int32_t:166651:171436:128977:e*/****l_1181)))) , (Tag66(/*int32_t:171436:171436:128977:e*/***l_1179))) && (Tag67(/*int32_t:171436:171436:128977:e*/***l_1179))))) != (Tag68(/*int32_t:166651:171436:128977:e*/****l_1181)))))) , Tag69(/*uint32_t:0:0:128977:e*/g_154[2]))), Tag70(/*uint16_t:0:0:128977:e*/g_78[0][0]))))), 18446744073709551606UL)) && (Tag71(/*int32_t:166651:171436:128977:e*/****l_1181))), Tag72(/*int16_t:0:0:128977:e*/g_445))) > 0L))))), 0UL)), (Tag73(/*uint8_t:0:0:128977:e*/**g_393)))));
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
/*aft_stmt:128977*/
            /*bef_stmt:140261*/
/*bef_stmt:140261*/
if (((Tag74(/*int32_t:166651:171436:140261:e*/****l_1181)) & Tag75(/*int16_t:166651:171436:140261:e*/l_1221)))
            { /* block id: 571 */
                int32_t l_1243[5] = {0xF0308A5AL,0xF0308A5AL,0xF0308A5AL,0xF0308A5AL,0xF0308A5AL};
                int32_t l_1247 = 0x935BCCC7L;
                int16_t l_1293 = 0x4FB3L;
                int8_t *l_1294[6][4] = {{(void*)0,(void*)0,&g_1290,(void*)0},{(void*)0,&g_965[1],&g_965[1],(void*)0},{&g_965[1],(void*)0,&g_965[1],&g_965[1]},{(void*)0,(void*)0,&g_1290,(void*)0},{(void*)0,&g_965[1],&g_965[1],(void*)0},{&g_965[1],(void*)0,&g_965[1],&g_965[1]}};
                int32_t l_1295 = 0x2393D09FL;
                int i, j;
                for (g_161 = 0; (g_161 >= 0); g_161 -= 1)
                { /* block id: 574 */
                    uint32_t l_1246 = 0x37696F3CL;
                    const int64_t **l_1261 = &l_1260;
                    uint32_t l_1266 = 0x4A226888L;
                    for (l_1159 = 0; (l_1159 >= 0); l_1159 -= 1)
                    { /* block id: 577 */
                        uint16_t l_1222[10][10][2] = {{{3UL,0UL},{65534UL,65534UL},{65534UL,65534UL},{0UL,3UL},{65527UL,5UL},{65534UL,0xCFA4L},{5UL,0UL},{0x2B79L,0UL},{5UL,0xCFA4L},{65534UL,5UL}},{{65527UL,3UL},{0UL,65534UL},{65534UL,65534UL},{65534UL,0UL},{3UL,65527UL},{5UL,65534UL},{0xCFA4L,5UL},{0UL,0x2B79L},{0UL,5UL},{0xCFA4L,65534UL}},{{5UL,65527UL},{3UL,0UL},{65534UL,65534UL},{65534UL,65534UL},{0UL,3UL},{65527UL,5UL},{65534UL,0xCFA4L},{5UL,0UL},{0x2B79L,0UL},{5UL,0xCFA4L}},{{65534UL,5UL},{65527UL,3UL},{0UL,65534UL},{65534UL,65534UL},{65534UL,65534UL},{4UL,65534UL},{0x2B79L,65535UL},{0x33DBL,0x2B79L},{65534UL,65529UL},{65534UL,0x2B79L}},{{0x33DBL,65535UL},{0x2B79L,65534UL},{4UL,65534UL},{0x6DB2L,65535UL},{65535UL,0x6DB2L},{65534UL,4UL},{65534UL,0x2B79L},{65535UL,0x33DBL},{0x2B79L,65534UL},{65529UL,65534UL}},{{0x2B79L,0x33DBL},{65535UL,0x2B79L},{65534UL,4UL},{65534UL,0x6DB2L},{65535UL,65535UL},{0x6DB2L,65534UL},{4UL,65534UL},{0x2B79L,65535UL},{0x33DBL,0x2B79L},{65534UL,65529UL}},{{65534UL,0x2B79L},{0x33DBL,65535UL},{0x2B79L,65534UL},{4UL,65534UL},{0x6DB2L,65535UL},{65535UL,0x6DB2L},{65534UL,4UL},{65534UL,0x2B79L},{65535UL,0x33DBL},{0x2B79L,65534UL}},{{65529UL,65534UL},{0x2B79L,0x33DBL},{65535UL,0x2B79L},{65534UL,4UL},{65534UL,0x6DB2L},{65535UL,65535UL},{0x6DB2L,65534UL},{4UL,65534UL},{0x2B79L,65535UL},{0x33DBL,0x2B79L}},{{65534UL,65529UL},{65534UL,0x2B79L},{0x33DBL,65535UL},{0x2B79L,65534UL},{4UL,65534UL},{0x6DB2L,65535UL},{65535UL,0x6DB2L},{65534UL,4UL},{65534UL,0x2B79L},{65535UL,0x33DBL}},{{0x2B79L,65534UL},{65529UL,65534UL},{0x2B79L,0x33DBL},{65535UL,0x2B79L},{65534UL,4UL},{65534UL,0x6DB2L},{65535UL,65535UL},{0x6DB2L,65534UL},{4UL,65534UL},{0x2B79L,65535UL}}};
                        int32_t *l_1226 = &l_768[4];
                        int32_t *l_1227 = &l_768[7];
                        int32_t *l_1228 = (void*)0;
                        int32_t *l_1229 = &g_18;
                        int32_t *l_1230[3][7] = {{&g_88,&l_1159,&g_88,&g_88,&l_1159,&g_88,&g_88},{&g_541,&g_541,&l_768[2],&g_541,&g_541,&l_768[2],&g_541},{&l_1159,&g_88,&g_88,&l_1159,&g_88,&g_88,&l_1159}};
                        uint32_t **l_1234 = (void*)0;
                        uint32_t **l_1235[2][5][4] = {{{&l_1218[2],&l_1218[3],&l_1218[1],&l_1218[1]},{&l_1218[1],&l_1218[1],&l_1218[3],(void*)0},{&l_1218[1],&l_1218[0],&l_1218[1],&l_1218[1]},{&l_1218[2],(void*)0,&l_1218[2],&l_1218[1]},{&l_1218[3],(void*)0,&l_1218[3],&l_1218[1]}},{{(void*)0,&l_1218[0],&l_1218[0],(void*)0},{&l_1218[2],&l_1218[1],&l_1218[0],&l_1218[1]},{(void*)0,&l_1218[3],&l_1218[3],&l_1218[3]},{&l_1218[3],&l_1218[0],&l_1218[2],&l_1218[3]},{&l_1218[2],&l_1218[3],&l_1218[1],&l_1218[3]}}};
                        int i, j, k;
                        --l_1222[2][4][0];
                        l_1231--;
                        /*bef_stmt:137002*/
/*bef_stmt:137002*/
/*bef_stmt:137002*/
/*bef_stmt:137002*/
/*bef_stmt:137002*/
/*bef_stmt:137002*/
/*bef_stmt:137002*/
/*bef_stmt:137002*/
/*bef_stmt:137002*/
(*l_1229) = ((l_1247 |= ((g_1236 = &g_257[6]) == ((0x27L & ((/*TAG76:STA*/((uint8_t)(realsmith_proxy_Krtrp((int)(**g_393)+(2), (int)(**g_393)+(43), (int)(**g_393)+(6), (long)(**g_393)+(99))+(int)(**g_393)-(2))+**g_393)/*TAG76:END:**g_393*/) , (safe_mul_func_uint16_t_u_u((~0x601FDFFC2B20C5F3LL), (((g_1240[8] = &g_81) == (void*)0) || ((safe_lshift_func_uint8_t_u_s(((((Tag77(/*int32_t:140168:147878:137002:e*/l_1243[0]) & (safe_mod_func_int64_t_s_s(((*g_162) |= (((/*TAG78:STA*/((uint64_t)(realsmith_DX4xO((int)(***g_1020)+(38))+(int)(***g_1020)-(0))+***g_1020)/*TAG78:END:***g_1020*/) <= ((*g_456) == (void*)0)) == (Tag79(/*uint8_t:0:0:137002:e*/*g_394)))), (Tag80(/*int32_t:166651:171436:137002:e*/****l_1181))))) | /*TAG81:STA*/((uint32_t)(realsmith_proxy_G1VFg((int)(***g_1020)+(-3), (int)(**g_457)+(79))+(int)(l_1246)+(int)(g_154[2])+(int)(***g_1020)+(int)(g_445)+(int)(**g_457)-(929656645))+l_1246)/*TAG81:END:l_1246*/) != (-9L)) < (Tag82(/*int32_t:171436:171436:137002:e*/***l_1179))), 0)) ^ /*TAG83:STA*/((uint32_t)(realsmith_jo3B3((unsigned int)(g_78[0][0])+(-65450))+(int)(l_1246)+(int)(***g_1020)+(int)(l_1243[0])+(int)(g_78[0][0])+(int)(*g_394)-(664467868))+l_1246)/*TAG83:END:l_1246*/)))))) , (void*)0))) == /*TAG84:STA*/((uint32_t)(realsmith_QVcH6((long)(l_1248)+(-4294967285), (long)(l_1248)+(-4294967238))+(long)(l_1248)-(4294967332))+l_1248)/*TAG84:END:l_1248*/);
/*aft_stmt:137002*/
/*aft_stmt:137002*/
/*aft_stmt:137002*/
/*aft_stmt:137002*/
/*aft_stmt:137002*/
/*aft_stmt:137002*/
/*aft_stmt:137002*/
/*aft_stmt:137002*/
/*aft_stmt:137002*/
                    }
                    for (g_338 = 0; (g_338 <= 0); g_338 += 1)
                    { /* block id: 588 */
                        /*bef_stmt:137096*/
if ((Tag85(/*int32_t:0:0:137096:e*/*g_147)))
                            break;
/*aft_stmt:137096*/
                        /*bef_stmt:137265*/
(*g_147) |= (((+0xD852L) , l_1250) != (Tag86(/*const int16_t:0:0:137265:e*/g_1192[1][0]) , (g_1251[0][0] = &g_792[7])));
/*aft_stmt:137265*/
                    }
                    for (g_261 = 0; (g_261 <= 0); g_261 += 1)
                    { /* block id: 595 */
                        const uint8_t **l_1265 = &l_1264;
                        int32_t l_1267 = (-9L);
                        uint32_t l_1268[6][3][2] = {{{1UL,1UL},{1UL,0xB171CD34L},{1UL,1UL}},{{1UL,0xB171CD34L},{1UL,1UL},{1UL,0xB171CD34L}},{{1UL,1UL},{1UL,0xB171CD34L},{1UL,1UL}},{{1UL,0xB171CD34L},{1UL,1UL},{1UL,0xB171CD34L}},{{1UL,1UL},{1UL,0xB171CD34L},{1UL,1UL}},{{1UL,0xB171CD34L},{1UL,1UL},{1UL,0xB171CD34L}}};
                        int32_t *l_1269 = &l_1267;
                        int32_t **l_1270 = (void*)0;
                        int32_t *l_1271 = &g_88;
                        int32_t **l_1272 = &g_147;
                        int i, j, k;
                        /*bef_stmt:139258*/
/*bef_stmt:139258*/
/*bef_stmt:139258*/
/*bef_stmt:139258*/
/*bef_stmt:139258*/
/*bef_stmt:139258*/
/*bef_stmt:139258*/
/*bef_stmt:139258*/
/*bef_stmt:139258*/
(*l_1269) = ((safe_lshift_func_uint8_t_u_u((((Tag87(/*uint64_t:0:0:139258:e*/**g_1021)) == ((Tag88(/*uint32_t:166651:171436:139258:e*/l_1254) != ((*l_767) = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_1259 != l_1261), (18446744073709551615UL != ((((*g_394) = (((***l_1179) = (safe_lshift_func_uint16_t_u_s(((((*g_393) == ((*l_1265) = l_1264)) >= ((void*)0 != l_1170[0][3][0])) > 18446744073709551615UL), 14))) == (/*TAG89:STA*/((uint64_t)(realsmith_LDsoi((int)(****g_1019)+(35), (int)(****g_1019)+(93), (int)(****g_1019)+(88))+(int)(****g_1019)-(1))+****g_1019)/*TAG89:END:****g_1019*/))) >= 0x46L) | Tag90(/*uint32_t:139324:140168:139258:e*/l_1266))))), /*TAG91:STA*/((uint32_t)(realsmith_proxy_j1shf((int)(l_1254)+(-86))+(int)(l_1254)-(-3))+l_1254)/*TAG91:END:l_1254*/)))) , Tag92(/*int32_t:139304:139324:139258:e*/l_1267))) >= Tag93(/*uint32_t:139304:139324:139258:e*/l_1268[1][0][0])), Tag94(/*uint32_t:139304:139324:139258:e*/l_1268[5][0][0]))) || (Tag95(/*int32_t:171436:171436:139258:e*/**l_1180)));
/*aft_stmt:139258*/
/*aft_stmt:139258*/
/*aft_stmt:139258*/
/*aft_stmt:139258*/
/*aft_stmt:139258*/
/*aft_stmt:139258*/
/*aft_stmt:139258*/
/*aft_stmt:139258*/
/*aft_stmt:139258*/
                        l_1220 = &l_1247;
                        (*l_1272) = l_1271;
                    }
                }
                for (l_1159 = 0; (l_1159 == 16); l_1159++)
                { /* block id: 607 */
                    uint32_t **l_1276 = &g_1236;
                    uint32_t ***l_1275[10] = {&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276};
                    int i;
                    (**l_1180) |= ((g_1277 = &g_1236) != (g_1279 = l_1278));
                    (**l_1180) &= 0x5314FD33L;
                    for (g_415 = 21; (g_415 == (-7)); g_415--)
                    { /* block id: 614 */
                        /*bef_stmt:139759*/
return (Tag96(/*uint8_t:0:0:139759:e*/*g_394));
/*aft_stmt:139759*/
                    }
                }
                /*bef_stmt:140164*/
/*bef_stmt:140164*/
/*bef_stmt:140164*/
/*bef_stmt:140164*/
/*bef_stmt:140164*/
/*bef_stmt:140164*/
/*bef_stmt:140164*/
l_1295 = ((****l_1181) = (safe_mul_func_int8_t_s_s(((l_1243[2] = ((safe_mul_func_uint16_t_u_u(Tag97(/*int32_t:140168:147878:140164:e*/l_1247), (((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((Tag98(/*uint32_t:0:0:140164:e*/**g_1277)), ((void*)0 == &g_1019))), Tag99(/*int32_t:140168:147878:140164:e*/l_1243[4]))) ^ (0x6306L > /*TAG100:STA*/((int8_t)(realsmith_proxy_s9Z9x((int)(g_1290)+(67), (int)(g_1192[1][0])+(8402), (int)(*g_394)+(-71))+(int)(g_1290)+(int)(*g_394)+(int)(**g_1277)+(int)(****g_1019)+(int)(g_1192[1][0])-(-1329521120))+g_1290)/*TAG100:END:g_1290*/)) < /*TAG101:STA*/((int32_t)(realsmith_proxy_wHvyd((int)(g_1192[1][0])+(8329))+(int)(l_1247)+(int)(*g_394)+(int)(**g_1021)+(int)(g_1192[1][0])+(int)(****g_1019)-(-1822708718))+l_1247)/*TAG101:END:l_1247*/))) != (safe_add_func_int8_t_s_s(1L, Tag102(/*int16_t:140168:147878:140164:e*/l_1293))))) | 1UL), (Tag103(/*uint8_t:0:0:140164:e*/*g_394)))));
/*aft_stmt:140164*/
/*aft_stmt:140164*/
/*aft_stmt:140164*/
/*aft_stmt:140164*/
/*aft_stmt:140164*/
/*aft_stmt:140164*/
/*aft_stmt:140164*/
            }
            else
            { /* block id: 621 */
                int32_t *l_1296 = &g_88;
                int32_t **l_1297 = &l_1220;
                (*l_1297) = l_1296;
            }
/*aft_stmt:140261*/
/*aft_stmt:140261*/
            /*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
/*bef_stmt:143247*/
if ((((/*TAG104:STA*/((int32_t)(realsmith_GBeo6((int)(****l_1181)+(74))+(int)(****l_1181)-(1))+****l_1181)/*TAG104:END:****l_1181*/) , ((&g_1236 != l_1298) >= ((*g_1236) = (safe_mod_func_int16_t_s_s(Tag105(/*int32_t:147878:166651:143247:e*/l_1219), ((safe_mod_func_uint64_t_u_u((((g_1324 = (safe_sub_func_int64_t_s_s((((safe_div_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((((((safe_div_func_int32_t_s_s((Tag106(/*int16_t:171436:171436:143247:e*/l_1315) , (Tag107(/*int32_t:0:0:143247:e*/*g_147))), (safe_rshift_func_uint8_t_u_u((/*TAG108:STA*/((uint8_t)(realsmith_oEj4m((unsigned int)(g_1290)+(-4294967236))+(int)(**g_393)+(int)(****g_1019)+(int)(*g_147)+(int)(g_1290)+(int)(*g_394)-(-36))+**g_393)/*TAG108:END:**g_393*/), (safe_sub_func_uint32_t_u_u((!(l_1321 == &l_1186[3])), (Tag109(/*int32_t:171436:171436:143247:e*/***l_1179)))))))) == 8L) & (Tag110(/*uint32_t:0:0:143247:e*/*g_1236))) != (Tag111(/*int32_t:166651:171436:143247:e*/****l_1181))) == (Tag112(/*int32_t:166651:171436:143247:e*/****l_1181))), (/*TAG113:STA*/((int32_t)(realsmith_kHKrD((int)(**g_393)+(1))+(int)(***l_1179)+(int)(l_1315)+(int)(**g_393)+(int)(g_1290)+(int)(**l_1180)-(-22))+***l_1179)/*TAG113:END:***l_1179*/))) || 0x954F300EL), 1)), (Tag114(/*int32_t:171436:171436:143247:e*/**l_1180)))), 6UL)) < (/*TAG115:STA*/((int32_t)(realsmith_proxy_ow1Xg((char)(**l_1180)+(57), (int)(*g_394)+(77))+(char)(****l_1181)+(char)(l_1315)+(char)(**g_393)+(char)(*g_394)+(char)(**l_1180)-(60))+****l_1181)/*TAG115:END:****l_1181*/)) & 0x1A79L), (Tag116(/*int64_t:0:0:143247:e*/**g_457))))) , &g_645) == (void*)0), (Tag117(/*uint64_t:0:0:143247:e*/****g_1019)))) , (Tag118(/*int32_t:171436:171436:143247:e*/**l_1180)))))))) , (/*TAG119:STA*/((int32_t)(realsmith_proxy_pDrgg((unsigned char)(l_1315)+(-292), (int)(g_1290)+(25))+(int)(****l_1181)+(int)(l_1315)+(int)(*g_394)+(int)(g_1290)+(int)(***l_1179)-(-2))+****l_1181)/*TAG119:END:****l_1181*/)))
            { /* block id: 626 */
                int32_t *l_1325 = &l_929;
                for (g_100 = 0; (g_100 <= 9); g_100 += 1)
                { /* block id: 629 */
                    int32_t *l_1326[4] = {&g_541,&g_541,&g_541,&g_541};
                    int i;
                    l_1326[0] = l_1325;
                }
            }
            else
            { /* block id: 632 */
                int32_t *l_1329 = &l_1159;
                uint8_t *** const l_1338 = &g_393;
                uint8_t *** const *l_1337[8] = {&l_1338,&l_1338,&l_1338,&l_1338,&l_1338,&l_1338,&l_1338,&l_1338};
                int32_t ***l_1341 = (void*)0;
                int32_t ****l_1340[5] = {&l_1341,&l_1341,&l_1341,&l_1341,&l_1341};
                int32_t *****l_1342[6][5] = {{&l_1340[0],&l_1340[4],&l_1340[4],&l_1340[0],(void*)0},{&l_1340[1],&l_1340[4],&l_1340[1],&l_1340[1],(void*)0},{&l_1340[0],&l_1340[1],&l_1340[1],&l_1340[0],&l_1340[0]},{&l_1340[0],&l_1340[4],&l_1340[4],&l_1340[0],(void*)0},{&l_1340[1],&l_1340[4],&l_1340[1],&l_1340[1],(void*)0},{&l_1340[0],&l_1340[1],&l_1340[1],&l_1340[0],&l_1340[0]}};
                int i, j;
                for (g_415 = 15; (g_415 == 21); g_415 = safe_add_func_int32_t_s_s(g_415, 6))
                { /* block id: 635 */
                    int32_t **l_1330[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1330[i] = &l_1329;
                    l_1331 = l_1329;
                }
                for (g_163 = 0; (g_163 != (-17)); g_163--)
                { /* block id: 640 */
                    int32_t *l_1336 = &l_768[1];
                    for (g_814 = 0; (g_814 <= 1); g_814 += 1)
                    { /* block id: 643 */
                        const int32_t **l_1334 = (void*)0;
                        uint8_t *** const **l_1339 = &l_1337[7];
                        g_1335 = &l_1202;
                        l_1336 = l_1336;
                        (*l_1339) = l_1337[7];
                    }
                    /*bef_stmt:143195*/
return (Tag120(/*int32_t:171436:171436:143195:e*/***l_1179));
/*aft_stmt:143195*/
                }
                l_1343 = l_1340[1];
            }
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
/*aft_stmt:143247*/
            for (g_254 = 4; (g_254 >= 28); g_254++)
            { /* block id: 654 */
                uint8_t ***l_1349 = &g_393;
                int32_t l_1350 = 0L;
                int8_t **l_1363 = &g_143[3][0][0];
                /*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
/*bef_stmt:147696*/
if ((~(((((void*)0 == (*g_1279)) | ((Tag121(/*uint64_t:0:0:147696:e*/***g_1020)) | ((l_1348 != l_1349) , (((((((Tag122(/*int32_t:147864:147878:147696:e*/l_1350) >= ((g_1351 == ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((((((((*g_147) |= Tag123(/*int32_t:147864:147878:147696:e*/l_1350)) == ((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((0xAE895A7EL < Tag124(/*int32_t:147864:147878:147696:e*/l_1350)), 0x6DL)), Tag125(/*int32_t:147864:147878:147696:e*/l_1350))) | 0x24B84C45E07ECF83LL)) , Tag126(/*int32_t:147864:147878:147696:e*/l_1350)) > Tag127(/*uint32_t:171436:171436:147696:e*/l_1361)) <= 0xD1L) | Tag128(/*int32_t:147864:147878:147696:e*/l_1350)), 6)) | (Tag129(/*uint64_t:0:0:147696:e*/****g_1019))), Tag130(/*uint8_t:171436:171436:147696:e*/l_1362))) , &l_1349)) == (Tag131(/*int32_t:166651:171436:147696:e*/*l_1331)))) <= (Tag132(/*int32_t:166651:171436:147696:e*/*l_1331))) , l_1363) != (void*)0) , (void*)0) != l_1364) , 0x5D44D3EA2D22B08CLL)))) & Tag133(/*int32_t:147864:147878:147696:e*/l_1350)) , 0x087F8DC5L)))
                { /* block id: 656 */
                    uint64_t *l_1380 = &g_705;
                    const int32_t l_1381 = 0x4CC66F34L;
                    uint8_t l_1382[1][5][4] = {{{0x3BL,0x65L,0xE9L,0xBDL},{0x3AL,0x65L,0x65L,0x3AL},{0x65L,0x3AL,0x3BL,0x51L},{0x65L,0x3BL,0x65L,0xE9L},{0x3AL,0x51L,0xE9L,0xE9L}}};
                    int32_t *l_1383 = &g_541;
                    int32_t *l_1384 = &g_88;
                    int32_t *l_1385 = &l_1159;
                    int32_t *l_1386[6][1][10] = {{{&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1]}},{{&l_768[1],&l_768[1],&g_18,&l_768[1],&l_768[1],&g_18,&l_768[1],&l_768[1],&g_18,&l_768[1]}},{{&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1]}},{{&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1]}},{{&l_768[1],&l_768[1],&g_18,&l_768[1],&l_768[1],&g_18,&l_768[1],&l_768[1],&g_18,&l_768[1]}},{{&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1],&l_768[1]}}};
                    int i, j, k;
                    /*bef_stmt:146899*/
/*bef_stmt:146899*/
/*bef_stmt:146899*/
/*bef_stmt:146899*/
/*bef_stmt:146899*/
/*bef_stmt:146899*/
/*bef_stmt:146899*/
/*bef_stmt:146899*/
/*bef_stmt:146899*/
/*bef_stmt:146899*/
(*g_147) = ((safe_mod_func_uint16_t_u_u((((Tag134(/*uint32_t:0:0:146899:e*/**g_1279)) > (safe_mul_func_int8_t_s_s((((***l_1349) = ((safe_mul_func_int16_t_s_s((Tag135(/*int32_t:147864:147878:146899:e*/l_1350) & (safe_mul_func_int8_t_s_s((((*l_1380) = (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(((*g_302) = ((~(0xBFE96348L ^ (Tag136(/*const int32_t:0:0:146899:e*/*g_1335)))) , (&g_683 != ((Tag137(/*uint8_t:0:0:146899:e*/**g_393)) , &g_683)))), 0x8D92C7B3D8E81852LL)) , ((-9L) <= (Tag138(/*uint64_t:0:0:146899:e*/***g_1020)))), 5)), 4UL))) | 0xE5091CD2ED9AEB78LL), (Tag139(/*int32_t:171436:171436:146899:e*/***l_1179))))), (-5L))) , 0x2AL)) , (Tag140(/*int32_t:171436:171436:146899:e*/***l_1179))), Tag141(/*const int32_t:146921:147864:146899:e*/l_1381)))) & (Tag142(/*uint32_t:0:0:146899:e*/**g_1279))), Tag143(/*uint8_t:146921:147864:146899:e*/l_1382[0][3][1]))) , 0xBA728418L);
/*aft_stmt:146899*/
/*aft_stmt:146899*/
/*aft_stmt:146899*/
/*aft_stmt:146899*/
/*aft_stmt:146899*/
/*aft_stmt:146899*/
/*aft_stmt:146899*/
/*aft_stmt:146899*/
/*aft_stmt:146899*/
/*aft_stmt:146899*/
                    ++l_1387;
                }
                else
                { /* block id: 662 */
                    int32_t **l_1390[4][10] = {{(void*)0,&l_1331,&l_1220,&l_1331,&l_1220,&l_1331,&l_1331,&l_1220,&l_1331,&l_1220},{&l_1331,&l_1331,&l_1220,&l_1331,&l_1220,&l_1331,(void*)0,&l_1220,&l_1331,&l_1220},{&l_1331,(void*)0,(void*)0,(void*)0,&l_1331,&l_1220,&l_1331,&l_1220,&l_1331,&l_1331},{&l_1220,&l_1220,&l_1220,&l_1220,&l_1220,&l_1220,&l_1220,&l_1220,(void*)0,&l_1331}};
                    uint16_t l_1392 = 65535UL;
                    int i, j;
                    l_1220 = ((**l_1344) = (**l_1344));
                    /*bef_stmt:147664*/
if ((Tag144(/*int32_t:0:0:147664:e*/*g_147)))
                        continue;
/*aft_stmt:147664*/
                    /*bef_stmt:147676*/
if (Tag145(/*int8_t:166651:171436:147676:e*/l_1391))
                        break;
/*aft_stmt:147676*/
                    ++l_1392;
                }
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
/*aft_stmt:147696*/
                for (l_1176 = 20; (l_1176 >= 1); l_1176 = safe_sub_func_uint32_t_u_u(l_1176, 1))
                { /* block id: 671 */
                    for (l_1350 = 4; (l_1350 >= 1); l_1350 -= 1)
                    { /* block id: 674 */
                        /*bef_stmt:147842*/
return (Tag146(/*uint8_t:0:0:147842:e*/*g_394));
/*aft_stmt:147842*/
                    }
                }
            }
        }
        else
        { /* block id: 679 */
            uint64_t l_1397 = 8UL;
            /*bef_stmt:147941*/
(*g_147) = Tag147(/*uint64_t:147945:166651:147941:e*/l_1397);
/*aft_stmt:147941*/
        }
/*aft_stmt:147949*/
/*aft_stmt:147949*/
/*aft_stmt:147949*/
/*aft_stmt:147949*/
/*aft_stmt:147949*/
/*aft_stmt:147949*/
/*aft_stmt:147949*/
/*aft_stmt:147949*/
/*aft_stmt:147949*/
/*aft_stmt:147949*/
        for (g_100 = 2; (g_100 != (-6)); g_100 = safe_sub_func_uint32_t_u_u(g_100, 8))
        { /* block id: 684 */
            int32_t l_1400[8][6][4] = {{{(-8L),7L,0x7CE61D52L,0x9855CBDDL},{0x9855CBDDL,0x4A4663B2L,(-1L),0x9C5AE0EBL},{(-1L),0x9C5AE0EBL,0L,0L},{(-1L),(-1L),(-2L),0x6BCA4F13L},{(-6L),0xBFCC4ED1L,1L,(-1L)},{(-1L),0x6BCA4F13L,1L,1L}},{{0x9C5AE0EBL,0x6BCA4F13L,0x7CE61D52L,(-1L)},{0x6BCA4F13L,0xBFCC4ED1L,0L,0x6BCA4F13L},{0x5B96C463L,(-1L),0xBFCC4ED1L,0L},{4L,0x9C5AE0EBL,0x7CE61D52L,0x9C5AE0EBL},{7L,0x4A4663B2L,0x5B96C463L,0x9855CBDDL},{(-1L),7L,0x2344FABCL,0L}},{{(-1L),(-6L),(-2L),(-8L)},{(-1L),0xBFCC4ED1L,0x2344FABCL,(-1L)},{(-1L),(-8L),0x5B96C463L,1L},{7L,4L,0x7CE61D52L,(-6L)},{4L,0xBFCC4ED1L,0xBFCC4ED1L,4L},{0x5B96C463L,(-1L),0L,0L}},{{0x6BCA4F13L,0x9855CBDDL,0x7CE61D52L,7L},{0x9C5AE0EBL,0x4A4663B2L,1L,7L},{(-1L),0x9855CBDDL,1L,0L},{(-6L),(-1L),(-2L),4L},{(-1L),0xBFCC4ED1L,0L,(-6L)},{(-1L),4L,(-1L),1L}},{{0x9855CBDDL,(-8L),0x7CE61D52L,(-1L)},{(-8L),0xBFCC4ED1L,0x4A4663B2L,(-8L)},{0x5B96C463L,(-6L),0x4A4663B2L,0L},{(-8L),7L,0x7CE61D52L,0x9855CBDDL},{0x9855CBDDL,0x4A4663B2L,(-1L),0x9C5AE0EBL},{(-1L),0x9C5AE0EBL,0L,0L}},{{(-1L),(-1L),(-2L),0x6BCA4F13L},{(-6L),0xBFCC4ED1L,1L,(-1L)},{(-1L),0x6BCA4F13L,1L,1L},{0x9C5AE0EBL,0x6BCA4F13L,0x7CE61D52L,(-1L)},{0x6BCA4F13L,0xBFCC4ED1L,0L,0x6BCA4F13L},{0x5B96C463L,(-1L),0xBFCC4ED1L,0L}},{{4L,0x9C5AE0EBL,0x7CE61D52L,0x9C5AE0EBL},{7L,0x4A4663B2L,0x5B96C463L,0x9855CBDDL},{(-1L),7L,0x2344FABCL,0L},{(-1L),(-6L),(-2L),(-8L)},{(-1L),0xBFCC4ED1L,0x2344FABCL,(-1L)},{(-1L),(-8L),0x5B96C463L,(-1L)}},{{0L,0L,(-1L),0x5B96C463L},{0L,(-5L),(-5L),0L},{(-1L),(-1L),(-2L),0x3D1DAE6EL},{0xBFCC4ED1L,1L,(-1L),0L},{0x2344FABCL,0x7CE61D52L,(-1L),0L},{0xBF8C24CCL,1L,(-1L),0x3D1DAE6EL}}};
            int32_t *l_1401 = (void*)0;
            int32_t l_1403 = (-1L);
            int64_t ***l_1407 = &g_456;
            int64_t ****l_1406 = &l_1407;
            int64_t ***** const l_1405 = &l_1406;
            uint64_t *****l_1434[8] = {&g_1019,&g_1019,(void*)0,&g_1019,&g_1019,(void*)0,&g_1019,&g_1019};
            uint16_t *l_1500 = &g_97;
            int32_t l_1501 = 1L;
            int i, j, k;
            /*bef_stmt:166012*/
if (/*TAG148:STA*/((int32_t)(realsmith_5Sgio()+(int)(l_1400[1][1][1])-(-1077129519))+l_1400[1][1][1])/*TAG148:END:l_1400[1][1][1]*/)
            { /* block id: 685 */
                l_1401 = (**l_1179);
            }
            else
            { /* block id: 687 */
                int8_t l_1404 = (-5L);
                uint64_t l_1430 = 0xD3095673B7510814LL;
                int32_t l_1456 = 0xB559B636L;
                int32_t l_1458[2][3][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1458[i][j][k] = 0L;
                    }
                }
                /*bef_stmt:152734*/
/*bef_stmt:152734*/
(***l_1179) &= (((0x9DL <= (+Tag149(/*int32_t:166595:166651:152734:e*/l_1403))) ^ Tag150(/*int8_t:166001:166595:152734:e*/l_1404)) == (l_1405 == &g_683));
/*aft_stmt:152734*/
/*aft_stmt:152734*/
                for (l_1231 = (-28); (l_1231 < 33); l_1231 = safe_add_func_int8_t_s_s(l_1231, 6))
                { /* block id: 691 */
                    uint32_t l_1414[5][9][5] = {{{6UL,0x4E771FCBL,0x7CBEB714L,0x4E771FCBL,6UL},{18446744073709551606UL,1UL,0UL,0x54794C73L,0xC028765FL},{0x04218D10L,0x90FD25AAL,0x94B99CB6L,0x09BBB8C3L,18446744073709551615UL},{1UL,18446744073709551609UL,6UL,1UL,0xC028765FL},{0x7CBEB714L,0x09BBB8C3L,1UL,3UL,6UL},{0xC028765FL,0xED44A7D1L,18446744073709551607UL,0x65E6EA3EL,0UL},{0xFBD99CA1L,5UL,18446744073709551615UL,0xD80CC3CBL,0xF08AF0EDL},{18446744073709551607UL,1UL,18446744073709551615UL,0x65E6EA3EL,0x65E6EA3EL},{7UL,18446744073709551615UL,7UL,3UL,18446744073709551609UL}},{{1UL,18446744073709551615UL,0x25BC28A6L,1UL,0x54794C73L},{6UL,0UL,6UL,0x09BBB8C3L,18446744073709551615UL},{1UL,0x65E6EA3EL,0x25BC28A6L,0x54794C73L,0x25BC28A6L},{18446744073709551615UL,6UL,7UL,0x4E771FCBL,0xF8495265L},{0UL,0xB27E381DL,18446744073709551615UL,0xF8DDBE2EL,18446744073709551606UL},{18446744073709551615UL,0xE0EE4EBBL,18446744073709551615UL,0xE951F74EL,0x94B99CB6L},{1UL,0xB27E381DL,18446744073709551607UL,18446744073709551607UL,0xB27E381DL},{18446744073709551615UL,6UL,1UL,0x733A884AL,0UL},{18446744073709551609UL,0x65E6EA3EL,6UL,1UL,0xF8DDBE2EL}},{{18446744073709551611UL,0UL,0x94B99CB6L,0xE0EE4EBBL,0x7CBEB714L},{18446744073709551609UL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551609UL},{18446744073709551615UL,18446744073709551615UL,0x7CBEB714L,0x2400178AL,18446744073709551615UL},{1UL,1UL,0x54794C73L,0xED44A7D1L,1UL},{18446744073709551615UL,5UL,0x48987C23L,18446744073709551615UL,18446744073709551615UL},{0UL,0xED44A7D1L,0xED44A7D1L,0UL,18446744073709551609UL},{18446744073709551615UL,0x09BBB8C3L,6UL,18446744073709551612UL,0x7CBEB714L},{1UL,18446744073709551609UL,0xC028765FL,0x25BC28A6L,0xF8DDBE2EL},{6UL,0x90FD25AAL,0x99541A85L,18446744073709551612UL,0UL}},{{1UL,1UL,1UL,0UL,0xB27E381DL},{7UL,0x4E771FCBL,0xF8495265L,18446744073709551615UL,0x94B99CB6L},{18446744073709551607UL,18446744073709551615UL,18446744073709551609UL,0xED44A7D1L,18446744073709551606UL},{0xFBD99CA1L,18446744073709551612UL,0xF8495265L,0x2400178AL,0xF8495265L},{0xC028765FL,0xC028765FL,1UL,0xED44A7D1L,18446744073709551609UL},{7UL,0xE0EE4EBBL,0x04218D10L,1UL,0UL},{0xEC9760D7L,6UL,1UL,0x54794C73L,18446744073709551607UL},{0x94B99CB6L,0xE0EE4EBBL,0x7CBEB714L,3UL,0xF08AF0EDL},{0x65E6EA3EL,1UL,0xC028765FL,0UL,0x25BC28A6L}},{{18446744073709551611UL,0xD80CC3CBL,0xFBD99CA1L,0x2400178AL,0x48987C23L},{0xED44A7D1L,1UL,18446744073709551607UL,6UL,1UL},{18446744073709551611UL,0x09BBB8C3L,7UL,0x09BBB8C3L,18446744073709551611UL},{0x65E6EA3EL,18446744073709551615UL,1UL,18446744073709551607UL,1UL},{0x94B99CB6L,0xFA53C928L,6UL,6UL,0xC2DD9EE2L},{0xEC9760D7L,18446744073709551615UL,1UL,18446744073709551615UL,1UL},{7UL,6UL,18446744073709551615UL,0x90FD25AAL,18446744073709551611UL},{1UL,0xC028765FL,0UL,0x25BC28A6L,1UL},{0x99541A85L,0x4E771FCBL,18446744073709551615UL,5UL,0x48987C23L}}};
                    int32_t l_1435[7][1] = {{0xBAE09F40L},{0L},{0xBAE09F40L},{0L},{0xBAE09F40L},{0L},{0xBAE09F40L}};
                    int64_t *l_1447 = &g_159[7][0][3];
                    uint32_t l_1450 = 1UL;
                    int32_t *l_1485 = &g_1436[3];
                    int i, j, k;
                    for (g_1290 = 0; (g_1290 != (-20)); g_1290--)
                    { /* block id: 694 */
                        const uint8_t **l_1417 = &l_1264;
                        const uint8_t ***l_1416 = &l_1417;
                        const uint8_t ****l_1415 = &l_1416;
                        int32_t l_1429 = 1L;
                        int32_t **l_1432 = &g_147;
                    }
                    /*bef_stmt:156839*/
if (Tag151(/*int32_t:0:0:156839:e*/g_1436[3]))
                        break;
/*aft_stmt:156839*/
                    /*bef_stmt:164213*/
/*bef_stmt:164213*/
if ((Tag152(/*int32_t:166595:166651:164213:e*/l_1403) != (Tag153(/*int32_t:171436:171436:164213:e*/***l_1179))))
                    { /* block id: 702 */
                        uint16_t l_1441[5][10][5] = {{{0xDECAL,0x6182L,1UL,0x6B32L,0x0C76L},{0xB457L,0xDECAL,0x6B32L,0x8C63L,0x8C63L},{0x0C76L,0x0EC9L,0x0C76L,0x8C63L,0xB550L},{65533UL,4UL,0x08F1L,0x6B32L,0xB457L},{0x0EC9L,0xB550L,65535UL,0xDECAL,65535UL},{0UL,0xD634L,0x08F1L,0xB457L,1UL},{65530UL,0xD03CL,0x0C76L,0x0C76L,0xD03CL},{65535UL,0xD03CL,0x6B32L,65533UL,0x39EBL},{0x6182L,0xD634L,1UL,0x0EC9L,0x3745L},{0x08F1L,0xB550L,0x6182L,0UL,1UL}},{{0x6182L,4UL,0xDECAL,65530UL,0x6B32L},{65535UL,0x0EC9L,0x0EC9L,65535UL,0x6B32L},{65530UL,0xDECAL,4UL,0x6182L,1UL},{0UL,0x6182L,0xB550L,0x08F1L,0x3745L},{0x0EC9L,1UL,0xD634L,0x6182L,0x39EBL},{65533UL,0x6B32L,0xD03CL,65535UL,0xD03CL},{0x0C76L,0x0C76L,0xD03CL,65530UL,1UL},{0xB457L,0x08F1L,0xD634L,0UL,65535UL},{0xDECAL,65535UL,0xB550L,0x0EC9L,0xB457L},{0x6B32L,0x08F1L,4UL,65533UL,0xB550L}},{{0x8C63L,0x0C76L,0x0EC9L,0x0C76L,0x8C63L},{0x8C63L,0x6B32L,0xDECAL,0xB457L,0x0C76L},{0x6B32L,1UL,0x6182L,0xDECAL,0x0EC9L},{0xDECAL,0x6182L,65530UL,0x0EC9L,0x39EBL},{0xDECAL,0x8C63L,0x0EC9L,0x08F1L,0x08F1L},{0x39EBL,0x5961L,0x39EBL,0x08F1L,0xD03CL},{0xD634L,0xB550L,4UL,0x0EC9L,0xDECAL},{0x5961L,0xD03CL,0UL,0x8C63L,0x7CFCL},{1UL,0x6182L,4UL,0xDECAL,65530UL},{0x0C76L,65535UL,0x39EBL,0x39EBL,65535UL}},{{0x7CFCL,65535UL,0x0EC9L,0xD634L,0x3745L},{0xB457L,0x6182L,65530UL,0x5961L,0x6B32L},{4UL,0xD03CL,0xB457L,1UL,65535UL},{0xB457L,0xB550L,0x8C63L,0x0C76L,0x0EC9L},{0x7CFCL,0x5961L,0x5961L,0x7CFCL,0x0EC9L},{0x0C76L,0x8C63L,0xB550L,0xB457L,65535UL},{1UL,0xB457L,0xD03CL,4UL,0x6B32L},{0x5961L,65530UL,0x6182L,0xB457L,0x3745L},{0xD634L,0x0EC9L,65535UL,0x7CFCL,65535UL},{0x39EBL,0x39EBL,65535UL,0x0C76L,65530UL}},{{0xDECAL,4UL,0x6182L,1UL,0x7CFCL},{0x8C63L,0UL,0xD03CL,0x5961L,0xDECAL},{0x0EC9L,4UL,0xB550L,0xD634L,0xD03CL},{0x08F1L,0x39EBL,0x5961L,0x39EBL,0x08F1L},{0x08F1L,0x0EC9L,0x8C63L,0xDECAL,0x39EBL},{0x0EC9L,65530UL,0xB457L,0x8C63L,0x5961L},{0x8C63L,0xB457L,65530UL,0x0EC9L,0x39EBL},{0xDECAL,0x8C63L,0x0EC9L,0x08F1L,0x08F1L},{0x39EBL,0x5961L,0x39EBL,0x08F1L,0xD03CL},{0xD634L,0xB550L,4UL,0x0EC9L,0xDECAL}}};
                        int64_t *l_1451[1][9][9] = {{{&g_163,&l_542,&l_542,&g_163,&l_542,&l_542,&g_163,&l_542,&l_542},{&g_163,&l_542,&l_542,&g_163,&l_542,&l_542,&g_163,&l_542,&l_542},{&g_163,&l_542,&l_542,&g_163,&l_542,&l_542,&g_163,&l_542,&l_542},{&g_163,&l_542,&l_542,&g_163,&l_542,&l_542,&g_163,&l_542,&l_542},{&g_163,&l_542,&l_542,&g_163,&l_542,&l_542,&g_163,&l_542,&l_542},{&g_163,&l_542,&l_542,&g_163,&l_542,&l_542,&g_163,&l_542,&l_542},{&g_163,&l_542,&l_542,&g_163,&g_161,&g_161,&l_542,&g_161,&g_161},{&l_542,&g_161,&g_161,&l_542,&g_161,&g_161,&l_542,&g_161,&g_161},{&l_542,&g_161,&g_161,&l_542,&g_161,&g_161,&l_542,&g_161,&g_161}}};
                        int64_t ** const *l_1454 = &g_457;
                        int64_t ** const **l_1453 = &l_1454;
                        int64_t ** const ***l_1452 = &l_1453;
                        int i, j, k;
                        /*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
/*bef_stmt:162622*/
(*l_1331) = (safe_mul_func_int16_t_s_s(((Tag154(/*int64_t:0:0:162622:e*/**g_457)) == (Tag155(/*uint64_t:0:0:162622:e*/**g_1021))), ((safe_sub_func_uint16_t_u_u(((Tag156(/*int32_t:166651:171436:162622:e*/*l_1331)) != ((*g_795) ^= Tag157(/*uint16_t:162626:165025:162622:e*/l_1441[3][7][4]))), ((safe_mul_func_uint16_t_u_u((((Tag158(/*uint32_t:165025:166001:162622:e*/l_1414[2][8][1]) && (-6L)) >= (((****l_1181) = 0x6646L) < (((*l_1447) = (((safe_mod_func_int32_t_s_s(((((!((l_1447 != ((safe_lshift_func_int16_t_s_u(Tag159(/*uint32_t:165025:166001:162622:e*/l_1450), Tag160(/*int32_t:165025:166001:162622:e*/l_1435[2][0]))) , l_1451[0][6][8])) , (Tag161(/*int32_t:166651:171436:162622:e*/*l_1331)))) , l_1452) == &l_1406) , 0xCBC7BAA7L), Tag162(/*int32_t:165025:166001:162622:e*/l_1435[2][0]))) < (Tag163(/*int32_t:166651:171436:162622:e*/*l_1331))) ^ 0x3565A9F13D396FCALL)) <= (Tag164(/*uint64_t:0:0:162622:e*/****g_1019))))) | 0x56C3L), 0L)) , Tag165(/*uint16_t:162626:165025:162622:e*/l_1441[3][7][4])))) , 0L)));
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
/*aft_stmt:162622*/
                    }
                    else
                    { /* block id: 707 */
                        int32_t *l_1455[7][9] = {{&l_1400[1][1][1],&g_18,&l_1431,&l_1400[1][1][1],&l_1431,&g_18,&l_1400[1][1][1],&l_1431,&l_1431},{&l_1400[1][1][1],&g_18,&l_1431,&l_1400[1][1][1],&l_1431,&g_18,&l_1400[1][1][1],&l_1431,&l_1431},{&l_1400[1][1][1],&g_18,&l_1431,&l_1400[1][1][1],&l_1431,&g_18,&l_1400[1][1][1],&l_1431,&l_1431},{&l_1400[1][1][1],&g_18,&l_1431,&l_1400[1][1][1],&l_1431,&g_18,&l_1400[1][1][1],&l_1431,&l_1431},{&l_1400[1][1][1],&g_18,&l_1431,&l_1400[1][1][1],&l_1431,&g_18,&l_1400[1][1][1],&l_1431,&l_1431},{&l_1400[1][1][1],&g_18,&l_1431,&l_1400[1][1][1],&l_1431,&g_18,&l_1400[1][1][1],&l_1431,&l_1431},{&l_1400[1][1][1],&g_18,&l_1431,&l_1400[1][1][1],&l_1431,&g_18,&l_1400[1][1][1],&l_1431,&l_1431}};
                        uint32_t l_1459 = 9UL;
                        int i, j;
                        l_1459++;
                    }
/*aft_stmt:164213*/
/*aft_stmt:164213*/
                    /*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
/*bef_stmt:165019*/
(*l_1485) &= ((+(safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u(((**g_1021) = Tag166(/*int32_t:166001:166595:165019:e*/l_1458[0][0][0])), (safe_sub_func_uint64_t_u_u((~Tag167(/*int32_t:166001:166595:165019:e*/l_1456)), ((void*)0 == l_1472))))) <= (safe_div_func_int8_t_s_s((0x534F8958L == ((((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((Tag168(/*uint64_t:166001:166595:165019:e*/l_1430) , (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_1331) |= (Tag169(/*int32_t:171436:171436:165019:e*/***l_1179))), 12)), (0x5787L >= (l_1435[2][0] = (Tag170(/*const int16_t:0:0:165019:e*/**g_1190))))))), (Tag171(/*const int16_t:0:0:165019:e*/*g_1191)))) < (Tag172(/*int32_t:171436:171436:165019:e*/**l_1180))), 0L)), Tag173(/*int32_t:166001:166595:165019:e*/l_1458[0][0][0]))) , Tag174(/*int32_t:166001:166595:165019:e*/l_1458[0][2][0])) == 0x48L) <= Tag175(/*int32_t:166595:166651:165019:e*/l_1400[7][3][0]))), 1UL))) < 65534UL), Tag176(/*uint32_t:165025:166001:165019:e*/l_1414[0][2][4]))), 7))) , 0x6BB0035CL);
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
/*aft_stmt:165019*/
                }
                /*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
/*bef_stmt:165997*/
(*g_147) = (safe_rshift_func_int8_t_s_s((~(((safe_div_func_uint64_t_u_u((Tag177(/*int32_t:166651:171436:165997:e*/****l_1181)), ((safe_mod_func_uint32_t_u_u((((247UL <= (18446744073709551614UL < (((((*g_394) ^= (Tag178(/*uint64_t:166001:166595:165997:e*/l_1430) & ((Tag179(/*uint32_t:0:0:165997:e*/*g_1236)) == (Tag180(/*int32_t:171436:171436:165997:e*/**l_1180))))) < (((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u(((((***l_1472) = Tag181(/*int8_t:166001:166595:165997:e*/l_1404)) > (((l_1458[0][2][0] = (+((Tag182(/*int32_t:171436:171436:165997:e*/***l_1179)) > ((((***l_1407) = (Tag183(/*int64_t:0:0:165997:e*/**g_457))) < 0xA0967C15419746B6LL) , 0UL)))) || (Tag184(/*uint32_t:0:0:165997:e*/*g_1236))) , Tag185(/*int32_t:166595:166651:165997:e*/l_1403))) , (Tag186(/*int32_t:171436:171436:165997:e*/**l_1180))), Tag187(/*int32_t:166595:166651:165997:e*/l_1400[6][0][2]))) , l_1500) == (void*)0), 4294967289UL)), 0UL)) , 1L) ^ 4294967295UL)) , (Tag188(/*int32_t:166651:171436:165997:e*/****l_1181))) , 0x73EBAFF2E1D90169LL))) < (Tag189(/*uint32_t:0:0:165997:e*/*g_1236))) || 0x1A316C64L), (Tag190(/*int32_t:166651:171436:165997:e*/*l_1331)))) | (Tag191(/*int32_t:166651:171436:165997:e*/****l_1181))))) | (Tag192(/*const int32_t:0:0:165997:e*/*g_1335))) > Tag193(/*int32_t:166595:166651:165997:e*/l_1403))), 5));
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
/*aft_stmt:165997*/
            }
/*aft_stmt:166012*/
            /*bef_stmt:166553*/
/*bef_stmt:166553*/
/*bef_stmt:166553*/
/*bef_stmt:166553*/
/*bef_stmt:166553*/
/*bef_stmt:166553*/
/*bef_stmt:166553*/
/*bef_stmt:166553*/
l_1431 &= (/*TAG194:STA*/((int32_t)(realsmith_tWKWB((int)(l_1501)+(8), (int)(l_1501)+(15))+(int)(l_1501)-(11))+l_1501)/*TAG194:END:l_1501*/ ^ (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(/*TAG195:STA*/((uint32_t)(realsmith_proxy_avSzu((char)(**l_1180)+(10), (unsigned int)(**l_1180)+(7))+(int)(l_1506[0][0])+((int)(*g_1335)-(-1843026794))+(int)(**l_1180)+(int)(**g_457)+(int)(***l_1179)-(-1032636922))+l_1506[0][0])/*TAG195:END:l_1506[0][0]*/, (((((((~((**g_1019) == ((Tag196(/*int32_t:166651:171436:166553:e*/****l_1181)) , (*g_1020)))) , (Tag197(/*int32_t:166651:171436:166553:e*/*l_1331))) <= (((safe_mul_func_int8_t_s_s((Tag198(/*int32_t:171436:171436:166553:e*/**l_1180)), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((***l_1348)++), 3)), ((*g_1236) = ((void*)0 != (***l_1405))))))) >= 0xB2B61D79L) ^ /*TAG199:STA*/((int32_t)(realsmith_thAR1((int)(l_1506[0][0])+(1032636942), (int)(l_1501)+(51))+(int)(l_1501)+(int)(**l_1180)+(int)(l_1506[0][0])+(int)(*l_1331)+(int)(**g_457)-(-1032636915))+l_1501)/*TAG199:END:l_1501*/)) , 0x277B217B03A04A0BLL) , &g_1236) != &g_1236) ^ Tag200(/*const uint8_t:166651:171436:166553:e*/l_1516)))), (Tag201(/*int32_t:166651:171436:166553:e*/*l_1331)))));
/*aft_stmt:166553*/
/*aft_stmt:166553*/
/*aft_stmt:166553*/
/*aft_stmt:166553*/
/*aft_stmt:166553*/
/*aft_stmt:166553*/
/*aft_stmt:166553*/
/*aft_stmt:166553*/
            (*l_1331) = 0xEB76702DL;
        }
        /*bef_stmt:166649*/
return (Tag202(/*int32_t:171436:171436:166649:e*/***l_1179));
/*aft_stmt:166649*/
    }
    else
    { /* block id: 727 */
        int32_t * const l_1517 = (void*)0;
        int32_t **l_1518 = &g_147;
        const int32_t l_1530 = 0x06C22945L;
        uint32_t l_1560 = 9UL;
        int64_t ** const **l_1653 = &g_1603;
        int32_t l_1661 = 0x3EB5BCCFL;
        int32_t l_1662 = 0xCA97E461L;
        int32_t l_1677 = 0x51D177B2L;
        int32_t l_1679[2][8][7] = {{{0xFB4BADE9L,0x0990A702L,0x2A33BB26L,0xA21C9BBEL,0x90A72F18L,0x2A33BB26L,0x1992C544L},{0x90A72F18L,0x1992C544L,0L,0L,0x1992C544L,0x90A72F18L,0x0990A702L},{0xFB4BADE9L,0xA21C9BBEL,(-1L),0xFB4BADE9L,0x1992C544L,(-5L),0xA21C9BBEL},{0x72BA40A7L,0x61E8BDD6L,0x90A72F18L,0x59E56B34L,0x90A72F18L,0x61E8BDD6L,0x72BA40A7L},{0x61E8BDD6L,0xA21C9BBEL,0L,0x90A72F18L,0x72BA40A7L,0x61E8BDD6L,0x90A72F18L},{0xFB4BADE9L,0x1992C544L,(-5L),0xA21C9BBEL,0xA21C9BBEL,(-5L),0x1992C544L},{0xA21C9BBEL,0x0990A702L,0L,0x59E56B34L,0x0990A702L,0x90A72F18L,0x1992C544L},{0x2A33BB26L,0xA21C9BBEL,0x90A72F18L,0x2A33BB26L,0x1992C544L,0x2A33BB26L,0x90A72F18L}},{{0x72BA40A7L,0x72BA40A7L,(-1L),0x59E56B34L,0xA21C9BBEL,(-1L),0x72BA40A7L},{0x72BA40A7L,0x90A72F18L,0L,0xA21C9BBEL,0x61E8BDD6L,0x61E8BDD6L,0xA21C9BBEL},{0x2A33BB26L,0x1992C544L,0x2A33BB26L,0x90A72F18L,0xA21C9BBEL,0x2A33BB26L,0x0990A702L},{0xA21C9BBEL,0x1992C544L,1L,0x59E56B34L,0x1992C544L,(-1L),0x1992C544L},{0xFB4BADE9L,0x90A72F18L,0x90A72F18L,0xFB4BADE9L,0x0990A702L,0x2A33BB26L,0xA21C9BBEL},{0x61E8BDD6L,0x72BA40A7L,0x90A72F18L,0L,0xA21C9BBEL,0x61E8BDD6L,0x61E8BDD6L},{0x72BA40A7L,0xA21C9BBEL,1L,0xA21C9BBEL,0x72BA40A7L,(-1L),0x2A33BB26L},{0L,(-1L),1L,0x2A33BB26L,(-5L),1L,0x61E8BDD6L}}};
        int32_t l_1695 = (-10L);
        uint32_t l_1725 = 0UL;
        int32_t l_1739 = (-1L);
        int16_t l_1750 = 0xD5BCL;
        uint16_t l_1782 = 65532UL;
        uint32_t l_1808 = 4UL;
        uint8_t l_1831[1];
        int8_t l_1832 = (-1L);
        int16_t **l_1856 = &l_767;
        const uint32_t l_1918 = 0x971BAB8CL;
        uint8_t l_1945[7] = {0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L,0xB2L};
        const uint8_t l_1956 = 0UL;
        int64_t l_1972 = 0L;
        int64_t l_2009 = (-1L);
        int32_t l_2019[10][3] = {{0xA8BE6446L,(-3L),(-3L)},{0L,9L,0L},{0xA8BE6446L,0xA8BE6446L,(-3L)},{(-8L),9L,(-8L)},{0xA8BE6446L,(-3L),(-3L)},{0L,9L,0L},{0xA8BE6446L,0xA8BE6446L,(-3L)},{(-8L),9L,(-8L)},{0xA8BE6446L,(-3L),(-3L)},{0L,9L,0L}};
        uint32_t **l_2053 = &g_2002;
        uint32_t l_2069 = 0UL;
        uint8_t *****l_2076[4];
        uint32_t l_2097 = 0xF1DE96E4L;
        uint16_t l_2115 = 65535UL;
        uint64_t l_2139 = 0xAB1509D6CF03371ELL;
        int8_t ****l_2159 = &l_2059;
        uint16_t l_2178 = 1UL;
        int32_t l_2180 = 0x4532B5D1L;
        uint8_t l_2183 = 255UL;
        int32_t * const *** const l_2221 = &l_1179;
        uint32_t l_2227 = 3UL;
        int32_t l_2231[8][10] = {{0x9624C872L,0x9624C872L,0x78B0C543L,0x8ED4221EL,0x5E8B8947L,0x78B0C543L,0x5E8B8947L,0x8ED4221EL,0x78B0C543L,0x9624C872L},{0x5E8B8947L,0L,7L,0x5E8B8947L,0xA52D416FL,0xA52D416FL,0x5E8B8947L,7L,0L,0x5E8B8947L},{7L,0x9624C872L,0L,0xA52D416FL,0x9624C872L,0xA52D416FL,0L,0x9624C872L,7L,7L},{0x5E8B8947L,0x8ED4221EL,0x78B0C543L,0x9624C872L,0x9624C872L,0x78B0C543L,0x8ED4221EL,0x5E8B8947L,0x78B0C543L,0x5E8B8947L},{0x9624C872L,0L,0xA52D416FL,0x9624C872L,0xA52D416FL,0L,0x9624C872L,7L,7L,0x9624C872L},{7L,0x5E8B8947L,0xA52D416FL,0xA52D416FL,0x5E8B8947L,7L,0L,0x5E8B8947L,0L,7L},{0x8ED4221EL,0x5E8B8947L,0x78B0C543L,0x5E8B8947L,0x8ED4221EL,0x78B0C543L,0x9624C872L,0x9624C872L,0x78B0C543L,0x8ED4221EL},{0x8ED4221EL,0L,0L,0x8ED4221EL,0xA52D416FL,7L,0x8ED4221EL,7L,0xA52D416FL,0x8ED4221EL}};
        uint32_t l_2232 = 0x1766560EL;
        int16_t l_2300 = 0x873BL;
        int64_t l_2308 = 0L;
        int64_t l_2309 = 0x66D29CACD0F03474LL;
        int32_t *l_2314 = &l_1159;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1831[i] = 0x6FL;
        for (i = 0; i < 4; i++)
            l_2076[i] = (void*)0;
        (*l_1518) = l_1517;
    }
/*aft_stmt:171405*/
/*aft_stmt:171405*/
/*aft_stmt:171405*/
/*aft_stmt:171405*/
/*aft_stmt:171405*/
/*aft_stmt:171405*/
/*aft_stmt:171405*/
/*aft_stmt:171405*/
/*aft_stmt:171405*/
    /*bef_stmt:171434*/
return (Tag203(/*uint8_t:0:0:171434:e*/**g_2080));
/*aft_stmt:171434*/
}


/* ------------------------------------------ */
/* 
 * reads : g_147 g_18 g_965 g_1021 g_302 g_394 g_159 g_257 g_162 g_163 g_456 g_457 g_254
 * writes: g_18 g_239 g_338 g_257 g_163 g_619
 */
static int16_t  func_7(uint16_t  p_8, uint8_t  p_9, uint16_t  p_10, int32_t  p_11, int32_t  p_12)
{ /* block id: 444 */
    uint32_t l_936 = 0xC8FFBCACL;
    int8_t l_1027 = 0L;
    int32_t l_1034 = 0x66889D30L;
    int32_t l_1035[3];
    int16_t ****l_1048 = &g_793[2][6][0];
    int64_t ***l_1105[4][3] = {{&g_457,&g_457,&g_457},{&g_456,&g_456,&g_456},{&g_457,&g_457,&g_457},{&g_456,&g_456,&g_456}};
    int64_t ****l_1104 = &l_1105[2][2];
    int64_t *****l_1103 = &l_1104;
    int64_t *****l_1108[5];
    int32_t l_1143[5][8] = {{3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L}};
    uint8_t ***l_1157 = &g_393;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1035[i] = (-1L);
    for (i = 0; i < 5; i++)
        l_1108[i] = &l_1104;
    for (p_12 = 3; (p_12 == (-26)); p_12--)
    { /* block id: 447 */
        uint32_t l_972[9];
        uint32_t l_1013[4][4] = {{1UL,1UL,5UL,0xE3C66D52L},{18446744073709551608UL,7UL,18446744073709551608UL,5UL},{18446744073709551608UL,5UL,5UL,18446744073709551608UL},{1UL,5UL,7UL,18446744073709551608UL}};
        int32_t l_1032 = 0x81753A2AL;
        int32_t l_1037 = (-1L);
        int32_t l_1038[9];
        uint8_t l_1039 = 0x57L;
        uint32_t l_1121 = 1UL;
        uint32_t * const *l_1126[6];
        int64_t ** const l_1136[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        for (i = 0; i < 9; i++)
            l_972[i] = 0x1F05E121L;
        for (i = 0; i < 9; i++)
            l_1038[i] = 0xE2EC432BL;
        for (i = 0; i < 6; i++)
            l_1126[i] = (void*)0;
    }
    for (p_12 = 0; (p_12 >= 0); p_12 -= 1)
    { /* block id: 545 */
        const int64_t * const ****l_1155 = (void*)0;
        uint32_t *l_1156 = &g_257[6];
        int32_t *l_1158[4];
        int i;
        for (i = 0; i < 4; i++)
            l_1158[i] = &l_1035[2];
        (*g_147) |= 1L;
        /*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
/*bef_stmt:175585*/
l_1035[2] ^= ((g_965[(p_12 + 1)] || (g_965[(p_12 + 5)] == (((((((/*TAG204:STA*/((int32_t)(realsmith_proxy_AdO1x((char)(p_11)+(-26), (int)(p_11)+(1923820345))+(int)(p_11)-(-1923820255))+p_11)/*TAG204:END:p_11*/ || ((((!(g_619[0][2][0] = (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((255UL < (((*****l_1103) = ((((((((*g_147) ^= 0x88EEC63AL) || ((*l_1156) |= ((safe_rshift_func_uint16_t_u_s((((**g_1021) = 0UL) ^ (((((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((*g_394) = ((void*)0 != l_1155)), g_965[(p_12 + 1)])), /*TAG205:STA*/((int32_t)(realsmith_proxy_fe73V((char)(l_1143[3][7])+(-43), (unsigned long)(l_1143[3][7])+(27), (unsigned long)(l_1143[3][7])+(-32), (char)(l_1143[3][7])+(-22), (char)(l_1143[3][7])+(49), (int)(l_1143[3][7])+(37))+(int)(l_1143[3][7])-(6))+l_1143[3][7])/*TAG205:END:l_1143[3][7]*/)) >= p_12) >= 0x7CF59DE2L) || 0x5B8F55FDL) || 7UL)), Tag206(/*uint16_t:175630:175630:175585:e*/p_10))) , Tag207(/*int64_t:0:0:175585:e*/g_159[1][1][3])))) & Tag208(/*int32_t:175630:175630:175585:e*/p_11)) , l_1157) == l_1157) , (Tag209(/*int64_t:0:0:175585:e*/*g_162))) ^ 1L)) != 0x9260AD31A807E223LL)) & g_965[(p_12 + 1)]) , /*TAG210:STA*/((int8_t)(realsmith_proxy_CRr9K((unsigned int)(l_1027)+(54))+(char)(l_1027)-(114))+l_1027)/*TAG210:END:l_1027*/) == 0x33B7L), Tag211(/*int32_t:175630:175630:175585:e*/l_1143[2][5]))), g_965[(p_12 + 1)])))) , /*TAG212:STA*/((uint8_t)(realsmith_proxy_Vocnx((unsigned long)(g_254)+(29))+(unsigned long)(g_254)-(28))+g_254)/*TAG212:END:g_254*/) , p_12) | /*TAG213:STA*/((uint8_t)(realsmith_proxy_OvVMw((int)(g_254)+(-109), (int)(g_254)+(12), (int)(g_254)+(46))+(int)(g_254)-(21))+g_254)/*TAG213:END:g_254*/)) | Tag214(/*int32_t:175630:175630:175585:e*/l_1143[3][2])) , /*TAG215:STA*/((int32_t)(realsmith_za4tx()+(unsigned long)(l_1034)-(1720229172))+l_1034)/*TAG215:END:l_1034*/) | 1UL) , /*TAG216:STA*/((uint8_t)(realsmith_proxy_gOMmo((long)(p_9)+(83), (unsigned long)(p_9)+(34), (long)(p_9)+(34))+(int)(p_9)-(2))+p_9)/*TAG216:END:p_9*/) >= p_12) && 0x3984AF5BL))) & 0xDA2E46955CB4A063LL);
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
/*aft_stmt:175585*/
    }
    /*bef_stmt:175628*/
return /*TAG217:STA*/((int32_t)(realsmith_proxy_D0bLf((char)(l_1035[0])+(-91))+(int)(l_1035[0])-(-1))+l_1035[0])/*TAG217:END:l_1035[0]*/;
/*aft_stmt:175628*/
}


/* ------------------------------------------ */
/* 
 * reads : g_897 g_88 g_302 g_239 g_923 g_795 g_445
 * writes: g_897 g_88 g_100 g_445
 */
static int64_t  func_24(uint16_t  p_25, uint64_t  p_26, int8_t  p_27)
{ /* block id: 430 */
    int32_t *l_902 = &g_88;
    int32_t **l_903 = &l_902;
    uint16_t **l_913[8] = {&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81};
    int16_t l_924 = (-1L);
    int8_t *l_925 = (void*)0;
    int8_t *l_926 = &g_100;
    int64_t l_927 = (-2L);
    int i;
    (*l_903) = l_902;
    for (g_897 = (-12); (g_897 < 24); g_897 = safe_add_func_int16_t_s_s(g_897, 9))
    { /* block id: 434 */
        uint16_t l_906 = 6UL;
        /*bef_stmt:176212*/
return Tag218(/*uint16_t:176214:176924:176212:e*/l_906);
/*aft_stmt:176212*/
    }
    /*bef_stmt:176249*/
(*l_902) ^= Tag219(/*int8_t:176924:176924:176249:e*/p_27);
/*aft_stmt:176249*/
    /*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
/*bef_stmt:176892*/
(**l_903) = (safe_add_func_uint8_t_u_u((((-2L) && ((safe_rshift_func_uint8_t_u_s((((/*TAG220:STA*/((uint64_t)(realsmith_0JYQv((int)(p_26)+(76))+(int)(p_26)-(-1))+p_26)/*TAG220:END:p_26*/ || (Tag221(/*int32_t:176924:176924:176892:e*/*l_902))) == (((*g_795) &= (((safe_lshift_func_int8_t_s_s(1L, 7)) == ((void*)0 == l_913[2])) ^ (!((*l_926) = ((safe_rshift_func_int16_t_s_u((Tag222(/*int32_t:176924:176924:176892:e*/*l_902)), 11)) <= (safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((Tag223(/*int32_t:176924:176924:176892:e*/**l_903)) || ((safe_mul_func_uint16_t_u_u((((-1L) | (Tag224(/*uint64_t:0:0:176892:e*/*g_302))) <= Tag225(/*uint8_t:0:0:176892:e*/g_923)), 0x6431L)) & /*TAG226:STA*/((int16_t)(realsmith_XuTjj((long)(g_923)+(-30), (int)(g_254)+(8))+(long)(l_924)+(long)(p_26)+(long)(g_254)+(long)(p_27)+(long)(g_923)-(-19))+l_924)/*TAG226:END:l_924*/)), /*TAG227:STA*/((uint16_t)(realsmith_qFsLf((int)(p_25)+(60))+(int)(p_25)+(int)(p_27)+(int)(g_923)+(int)(*g_302)-(-1613404986))+p_25)/*TAG227:END:p_25*/)) < 0x89677E12L), /*TAG228:STA*/((uint16_t)(realsmith_proxy_hi7E0((int)(p_25)+(49), (char)(p_25)+(-64), (int)(p_25)+(83), (int)(p_25)+(26))+(int)(p_25)-(2))+p_25)/*TAG228:END:p_25*/))))))) <= /*TAG229:STA*/((int8_t)(realsmith_91rTD()+(int)(p_27)+(int)(g_923)+(int)(*g_302)+(int)(p_26)+(int)(*g_162)-(-1613404967))+p_27)/*TAG229:END:p_27*/)) != Tag230(/*uint16_t:176924:176924:176892:e*/p_25)), /*TAG231:STA*/((int64_t)(realsmith_ZBpfV((int)(g_923)+(21))+(int)(l_927)+(int)(g_923)+(int)(*g_302)+(int)(p_27)-(-1613404989))+l_927)/*TAG231:END:l_927*/)) != Tag232(/*int8_t:176924:176924:176892:e*/p_27))) >= (Tag233(/*int32_t:176924:176924:176892:e*/**l_903))), 255UL));
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
/*aft_stmt:176892*/
    /*bef_stmt:176922*/
return (Tag234(/*int32_t:176924:176924:176922:e*/**l_903));
/*aft_stmt:176922*/
}


/* ------------------------------------------ */
/* 
 * reads : g_792 g_541 g_393 g_394 g_261 g_338 g_161 g_415 g_254 g_159 g_814 g_97 g_257 g_162 g_163 g_457 g_147 g_18 g_100 g_445 g_897
 * writes: g_541 g_338 g_261 g_161 g_415 g_254 g_97 g_445 g_814 g_257 g_78 g_163 g_88 g_897
 */
static uint8_t  func_30(int8_t  p_31, int32_t  p_32)
{ /* block id: 329 */
    const int32_t *l_769 = (void*)0;
    const int32_t **l_770 = &l_769;
    int32_t *l_771 = &g_541;
    int32_t l_772 = 1L;
    int32_t *l_773 = &l_772;
    int32_t *l_774[2];
    int32_t l_775 = 2L;
    uint8_t l_776[2][10] = {{0x33L,0UL,0UL,0x33L,0UL,0UL,0x33L,0UL,0UL,0x33L},{0UL,0x33L,0UL,0UL,0x33L,0UL,0UL,0x33L,0UL,0UL}};
    uint8_t **l_789 = &g_394;
    const uint8_t *l_799 = &g_338;
    const uint8_t **l_798 = &l_799;
    const uint8_t ***l_800 = &l_798;
    int64_t **l_808 = &g_162;
    int64_t **l_809 = &g_162;
    const uint64_t *l_850 = (void*)0;
    const uint64_t **l_849 = &l_850;
    int16_t ** const *l_855 = &g_794[2];
    int16_t ** const **l_854 = &l_855;
    int16_t ** const **l_858 = &l_855;
    uint64_t l_862 = 0x42396CFF20B00090LL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_774[i] = &g_541;
    (*l_770) = l_769;
    l_776[0][7]--;
    /*bef_stmt:186287*/
/*bef_stmt:186287*/
/*bef_stmt:186287*/
/*bef_stmt:186287*/
/*bef_stmt:186287*/
/*bef_stmt:186287*/
/*bef_stmt:186287*/
/*bef_stmt:186287*/
/*bef_stmt:186287*/
if (((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u(/*TAG235:STA*/((int32_t)(realsmith_Heyq5()+(int)(p_32)-(-1843026796))+p_32)/*TAG235:END:p_32*/, (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((g_261 |= ((((**g_393) = (l_789 != ((*l_800) = ((safe_div_func_uint64_t_u_u((((void*)0 == g_792[7]) != ((safe_rshift_func_int8_t_s_s(((*l_773) = Tag236(/*int32_t:186368:186368:186287:e*/p_32)), 3)) && (((/*TAG237:STA*/((int8_t)(realsmith_ioeml()+(int)(p_31)-(29))+p_31)/*TAG237:END:p_31*/ | (0x86L ^ 0xD8L)) , ((*l_771) ^= (Tag238(/*int32_t:186368:186368:186287:e*/*l_773)))) < 0xA3BDA736L))), 1L)) , l_798)))) && Tag239(/*int32_t:186368:186368:186287:e*/p_32)) , 1UL)) ^ Tag240(/*int8_t:186368:186368:186287:e*/p_31)) == 0xEDL), 2)), 0x31L)), Tag241(/*int32_t:186368:186368:186287:e*/p_32))))), /*TAG242:STA*/((int8_t)(realsmith_proxy_dfYEq((char)(p_31)+(-30))+(unsigned long)(p_31)+(unsigned long)(g_923)-(90))+p_31)/*TAG242:END:p_31*/)) || (Tag243(/*uint8_t:0:0:186287:e*/*g_394))))
    { /* block id: 337 */
        int32_t *l_801[10][10] = {{&l_772,&l_775,&l_775,&g_88,&l_772,&l_772,&g_541,&g_88,&g_88,&g_541},{&l_772,&g_541,&g_88,&g_88,&g_541,&l_772,&l_772,&g_88,&l_775,&l_775},{&l_772,&l_772,&g_88,&l_775,&l_775,&l_772,&l_772,&g_88,&l_772,(void*)0},{&l_772,&l_772,&g_88,&l_772,(void*)0,&l_772,(void*)0,&l_772,&g_88,&l_772},{&l_772,(void*)0,&l_772,&g_88,&l_772,&l_772,&l_775,&l_775,&g_88,&l_772},{&l_772,&l_775,&l_775,&g_88,&l_772,&l_772,&g_541,&g_88,&g_88,&g_541},{&l_772,&g_541,&g_88,&g_88,&g_541,&l_772,&l_772,&g_88,&l_775,&l_775},{&l_772,&l_772,&g_88,&l_775,&l_775,&l_772,&l_772,&g_88,&l_772,(void*)0},{&l_772,&l_772,&g_88,&l_772,(void*)0,&l_772,(void*)0,&l_772,&g_88,&l_772},{&l_772,(void*)0,&l_772,&g_88,&l_772,&l_772,&l_775,&l_775,&g_88,&l_772}};
        int i, j;
        (*l_770) = l_801[0][2];
        for (g_161 = 8; (g_161 >= (-1)); g_161 = safe_sub_func_int32_t_s_s(g_161, 6))
        { /* block id: 341 */
            uint16_t l_804 = 0x4470L;
            for (g_415 = 1; (g_415 >= 0); g_415 -= 1)
            { /* block id: 344 */
                l_804--;
            }
        }
    }
    else
    { /* block id: 348 */
        int32_t l_845[10];
        const int16_t l_880 = (-1L);
        int32_t *l_881[4][1] = {{&l_772},{&g_541},{&l_772},{&g_541}};
        uint64_t **l_896 = (void*)0;
        uint64_t ***l_900 = &l_896;
        int i, j;
        for (i = 0; i < 10; i++)
            l_845[i] = (-10L);
        (*l_773) = ((*l_798) == (void*)0);
        for (g_254 = 0; (g_254 <= 8); g_254 += 1)
        { /* block id: 352 */
            int64_t **l_807 = &g_162;
            int32_t l_810[8][4];
            uint16_t *l_852 = &g_97;
            int16_t ** const ***l_856 = (void*)0;
            int16_t ** const ***l_857 = &l_854;
            int64_t ***l_865 = &l_809;
            int64_t ****l_864[2];
            int64_t *****l_863 = &l_864[1];
            uint64_t l_893 = 0x49841878B3DEB006LL;
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 4; j++)
                    l_810[i][j] = (-5L);
            }
            for (i = 0; i < 2; i++)
                l_864[i] = &l_865;
            l_809 = (l_808 = l_807);
            for (p_32 = 0; (p_32 <= 4); p_32 += 1)
            { /* block id: 357 */
                uint8_t ****l_813 = (void*)0;
                int32_t l_848 = 0L;
                for (p_31 = 0; (p_31 >= 0); p_31 -= 1)
                { /* block id: 360 */
                    int i, j, k;
                    l_810[4][2] = (g_159[(p_32 + 3)][p_31][p_32] < (&g_146[2] == (void*)0));
                }
                for (g_97 = 0; (g_97 <= 4); g_97 += 1)
                { /* block id: 365 */
                    const uint64_t l_827 = 0xF40ECB1B15CFB78BLL;
                    for (g_445 = 0; (g_445 <= 8); g_445 += 1)
                    { /* block id: 368 */
                        uint8_t ***l_812 = (void*)0;
                        uint8_t **** const l_811[7] = {&l_812,(void*)0,&l_812,&l_812,(void*)0,&l_812,&l_812};
                        int i, j, k;
                        l_813 = l_811[1];
                        --g_814;
                        if (g_159[(g_97 + 2)][p_32][g_97])
                            continue;
                    }
                    for (g_161 = 8; (g_161 >= 0); g_161 -= 1)
                    { /* block id: 375 */
                        const uint64_t l_817 = 0x6F591A70EB9C440ELL;
                        int32_t l_818 = 0L;
                        /*bef_stmt:182336*/
l_818 = Tag244(/*const uint64_t:182363:183468:182336:e*/l_817);
/*aft_stmt:182336*/
                        if (p_32)
                            continue;
                    }
                    for (g_445 = 8; (g_445 >= 1); g_445 -= 1)
                    { /* block id: 381 */
                        uint8_t l_846 = 0xC4L;
                        uint16_t *l_847 = &g_78[0][0];
                        const uint64_t ***l_851[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_851[i] = (void*)0;
                        /*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
/*bef_stmt:183374*/
(*l_771) = ((safe_mod_func_uint32_t_u_u(0x60A77BB4L, (safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((**g_457) = (safe_mul_func_uint16_t_u_u(Tag245(/*const uint64_t:183468:183509:183374:e*/l_827), (((safe_unary_minus_func_int64_t_s(((((*l_847) = (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((Tag246(/*int32_t:186368:186368:183374:e*/*l_773)), ((++g_257[0]) , (2L || 255UL)))), (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((((p_32 < Tag247(/*int32_t:186225:186275:183374:e*/l_810[6][0])) && (0x0AL ^ Tag248(/*int32_t:186275:186368:183374:e*/l_845[2]))) == Tag249(/*uint8_t:183450:183468:183374:e*/l_846)), (Tag250(/*uint8_t:0:0:183374:e*/**g_393)))), p_32)))) && (Tag251(/*int64_t:0:0:183374:e*/*g_162))), p_32)) & p_32), (Tag252(/*uint8_t:0:0:183374:e*/**g_393))))) && 0L) < Tag253(/*int32_t:183509:186225:183374:e*/l_848)))) >= Tag254(/*int8_t:186368:186368:183374:e*/p_31)) || 0x07032CF5L)))), Tag255(/*int8_t:186368:186368:183374:e*/p_31))), 0x0BA3L)))) && Tag256(/*const uint64_t:183468:183509:183374:e*/l_827));
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
/*aft_stmt:183374*/
                        /*bef_stmt:183409*/
(*l_771) = (Tag257(/*int32_t:0:0:183409:e*/*g_147));
/*aft_stmt:183409*/
                        l_849 = l_849;
                        /*bef_stmt:183446*/
if ((Tag258(/*int32_t:0:0:183446:e*/*g_147)))
                            continue;
/*aft_stmt:183446*/
                    }
                }
                (*l_770) = &l_848;
            }
            /*bef_stmt:183706*/
(*l_773) = (((*l_852) &= Tag259(/*int8_t:0:0:183706:e*/g_100)) < (safe_unary_minus_func_uint32_t_u((&g_793[0][1][1] != (l_858 = ((*l_857) = l_854))))));
/*aft_stmt:183706*/
            for (g_445 = 0; (g_445 <= 4); g_445 += 1)
            { /* block id: 399 */
                int32_t l_876 = 0x32690522L;
                uint32_t *l_877 = (void*)0;
                int32_t l_878 = 0x2B9272EEL;
                int16_t l_879[5][5] = {{1L,0x4D53L,(-1L),0x4D53L,1L},{0x978EL,0x4D53L,(-4L),1L,(-4L)},{(-4L),(-4L),(-1L),1L,(-8L)},{0x4D53L,0x978EL,0x978EL,0x4D53L,(-4L)},{0x4D53L,1L,0x0E2AL,0x0E2AL,1L}};
                int i, j;
                /*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
/*bef_stmt:185140*/
l_810[4][2] &= (safe_lshift_func_int8_t_s_u((Tag260(/*int32_t:186275:186368:185140:e*/l_845[0]) , Tag261(/*int32_t:186368:186368:185140:e*/p_32)), ((((((void*)0 == &g_656[0]) == ((*l_852) = (+Tag262(/*uint64_t:186368:186368:185140:e*/l_862)))) <= (((((l_863 != (((((!(safe_add_func_uint32_t_u_u(((+((l_878 = (g_445 , (safe_div_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((Tag263(/*int32_t:186368:186368:185140:e*/*l_771)), ((safe_add_func_uint32_t_u_u((((Tag264(/*int32_t:186207:186225:185140:e*/l_876) > Tag265(/*int8_t:186368:186368:185140:e*/p_31)) > g_445) > Tag266(/*int8_t:186368:186368:185140:e*/p_31)), Tag267(/*int8_t:186368:186368:185140:e*/p_31))) != (Tag268(/*int32_t:0:0:185140:e*/*g_147))))) < Tag269(/*int8_t:186368:186368:185140:e*/p_31)) && 0x6D74B173061F92DCLL), Tag270(/*int32_t:186368:186368:185140:e*/p_32))))) <= Tag271(/*int32_t:186275:186368:185140:e*/l_845[4]))) | 0x02E0L), Tag272(/*int64_t:0:0:185140:e*/g_159[3][4][4])))) ^ 0x9CBFL) | 7L) , Tag273(/*int32_t:186207:186225:185140:e*/l_876)) , (void*)0)) & Tag274(/*int32_t:186207:186225:185140:e*/l_876)) || Tag275(/*int16_t:186207:186225:185140:e*/l_879[2][4])) >= 0L) <= 9L)) < Tag276(/*int32_t:186368:186368:185140:e*/p_32)) , Tag277(/*const int16_t:186275:186368:185140:e*/l_880))));
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
/*aft_stmt:185140*/
                /*bef_stmt:185165*/
if (Tag278(/*int32_t:186368:186368:185165:e*/p_32))
                    break;
/*aft_stmt:185165*/
                /*bef_stmt:185177*/
if (Tag279(/*int8_t:186368:186368:185177:e*/p_31))
                    continue;
/*aft_stmt:185177*/
                for (g_97 = 0; (g_97 <= 4); g_97 += 1)
                { /* block id: 407 */
                    uint32_t **l_890 = (void*)0;
                    uint32_t **l_891 = &l_877;
                    uint32_t l_892 = 0xCEDD5145L;
                    int i, j, k;
                    (*l_770) = l_881[3][0];
                    /*bef_stmt:185880*/
/*bef_stmt:185880*/
/*bef_stmt:185880*/
/*bef_stmt:185880*/
/*bef_stmt:185880*/
/*bef_stmt:185880*/
(*l_771) ^= ((safe_add_func_uint32_t_u_u((g_159[g_254][g_445][g_97] > (Tag280(/*int8_t:186368:186368:185880:e*/p_31) > Tag281(/*int32_t:186368:186368:185880:e*/p_32))), Tag282(/*uint32_t:0:0:185880:e*/g_814))) >= (((**g_393) = (safe_add_func_int64_t_s_s(Tag283(/*int8_t:186368:186368:185880:e*/p_31), 18446744073709551608UL))) || ((((***l_865) = (safe_add_func_int64_t_s_s((-10L), (((safe_lshift_func_int8_t_s_s((((*l_891) = &g_617) == l_881[2][0]), 7)) ^ Tag284(/*uint32_t:186190:186207:185880:e*/l_892)) <= Tag285(/*uint64_t:186225:186275:185880:e*/l_893))))) , 7L) , (-9L))));
/*aft_stmt:185880*/
/*aft_stmt:185880*/
/*aft_stmt:185880*/
/*aft_stmt:185880*/
/*aft_stmt:185880*/
/*aft_stmt:185880*/
                    for (g_88 = 6; (g_88 >= 2); g_88 -= 1)
                    { /* block id: 415 */
                        uint64_t **l_895 = &g_302;
                        uint64_t ***l_894[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_894[i] = &l_895;
                        l_896 = &g_302;
                    }
                    for (g_261 = 1; (g_261 <= 8); g_261 += 1)
                    { /* block id: 420 */
                        ++g_897;
                    }
                }
            }
        }
        (*l_900) = l_896;
    }
/*aft_stmt:186287*/
/*aft_stmt:186287*/
/*aft_stmt:186287*/
/*aft_stmt:186287*/
/*aft_stmt:186287*/
/*aft_stmt:186287*/
/*aft_stmt:186287*/
/*aft_stmt:186287*/
/*aft_stmt:186287*/
    (*l_770) = (void*)0;
    /*bef_stmt:186343*/
return (Tag286(/*uint8_t:0:0:186343:e*/*g_394));
/*aft_stmt:186343*/
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int8_t  func_33(uint8_t  p_34, uint32_t  p_35)
{ /* block id: 327 */
    /*bef_stmt:186523*/
return /*TAG287:STA*/((uint32_t)(realsmith_dwB4E((int)(p_35)+(1708054552))+(int)(p_35)-(-1708054515))+p_35)/*TAG287:END:p_35*/;
/*aft_stmt:186523*/
}


/* ------------------------------------------ */
/* 
 * reads : g_154 g_445 g_393 g_394 g_338 g_457 g_162 g_163 g_97 g_257 g_302 g_239 g_541 g_88 g_617 g_506 g_254
 * writes: g_445 g_415 g_88 g_100 g_257 g_541 g_508 g_163 g_617 g_97 g_254 g_338
 */
static int16_t  func_38(const uint32_t  p_39, uint8_t  p_40, uint32_t  p_41)
{ /* block id: 219 */
    int8_t l_545 = 0x02L;
    int16_t *l_550 = &g_445;
    uint64_t l_553 = 3UL;
    int32_t l_560 = (-4L);
    uint64_t l_561 = 0xFAF56826B681CE33LL;
    int32_t *l_562 = (void*)0;
    int32_t *l_563 = &g_88;
    int32_t *l_564 = &g_541;
    int32_t *l_565 = &g_88;
    int32_t *l_566[7] = {&l_560,&g_541,&g_541,&l_560,&g_541,&g_541,&l_560};
    uint8_t l_567 = 0x51L;
    int8_t **l_630 = (void*)0;
    int8_t ***l_629 = &l_630;
    int64_t ** const *l_653 = &g_456;
    int64_t ***l_681 = &g_456;
    int64_t ****l_680[3][7] = {{&l_681,&l_681,&l_681,&l_681,&l_681,&l_681,&l_681},{&l_681,&l_681,&l_681,&l_681,&l_681,&l_681,&l_681},{&l_681,&l_681,&l_681,&l_681,&l_681,&l_681,&l_681}};
    const int64_t *l_687 = (void*)0;
    const int64_t **l_686 = &l_687;
    const int64_t ***l_685 = &l_686;
    const int64_t ****l_684 = &l_685;
    int i, j;
    /*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
/*bef_stmt:188174*/
(*l_563) = (safe_mul_func_uint16_t_u_u((Tag288(/*int8_t:196675:196675:188174:e*/l_545) , Tag289(/*uint32_t:0:0:188174:e*/g_154[2])), (g_415 = (safe_mul_func_int16_t_s_s(((((((*l_550) |= (safe_lshift_func_int16_t_s_u(Tag290(/*int8_t:196675:196675:188174:e*/l_545), 11))) > ((((safe_add_func_uint32_t_u_u(((l_553 ^= /*TAG291:STA*/((int8_t)(realsmith_zjuPs((int)(l_545)+(93), (int)(l_545)+(95))+(int)(l_545)-(163))+l_545)/*TAG291:END:l_545*/) && ((Tag292(/*uint32_t:196675:196675:188174:e*/p_41) <= (Tag293(/*uint64_t:196675:196675:188174:e*/l_553) < (/*TAG294:STA*/((uint8_t)(realsmith_OstnS((int)(**g_393)+(-39))+(int)(**g_393)-(108))+**g_393)/*TAG294:END:**g_393*/))) <= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((l_560 = (((safe_mod_func_uint8_t_u_u((Tag295(/*uint8_t:0:0:188174:e*/*g_394)), Tag296(/*int8_t:196675:196675:188174:e*/l_545))) & 0x2A282369L) , Tag297(/*uint64_t:196675:196675:188174:e*/l_553))), Tag298(/*uint64_t:196675:196675:188174:e*/l_561))), Tag299(/*uint32_t:196675:196675:188174:e*/p_41))))), 0xF9536990L)) , Tag300(/*const uint32_t:196675:196675:188174:e*/p_39)) < Tag301(/*const uint32_t:196675:196675:188174:e*/p_39)) >= (/*TAG302:STA*/((int64_t)(realsmith_zRiQr()+(int)(**g_457)-(1))+**g_457)/*TAG302:END:**g_457*/))) && 0xA7L) > Tag303(/*uint8_t:196675:196675:188174:e*/p_40)) != 0x55ACL), (-1L))))));
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
/*aft_stmt:188174*/
    l_567++;
    for (p_40 = 16; (p_40 > 29); p_40 = safe_add_func_uint16_t_u_u(p_40, 5))
    { /* block id: 228 */
        int16_t *l_612 = &g_415;
        int32_t l_631 = (-1L);
        int8_t ****l_648 = &l_629;
        int32_t * const *l_711 = &l_566[4];
        int32_t * const ** const l_710 = &l_711;
        for (l_553 = 0; (l_553 == 39); l_553++)
        { /* block id: 231 */
            int16_t l_578[8][7][4] = {{{0x4069L,0x7CDEL,7L,0xA979L},{0x189BL,(-7L),0xF7F8L,0x4069L},{(-1L),0x715DL,0xE857L,0x28AAL},{0xE857L,0x28AAL,4L,9L},{1L,0x1FF9L,3L,6L},{(-7L),0xBF25L,0x9B8CL,0x9BE4L},{0x97EAL,0x9B8CL,3L,0x3BC9L}},{{6L,0x8B12L,0x4069L,0xEC26L},{0xF7F8L,7L,1L,0L},{1L,(-1L),0x28AAL,0x9B8CL},{0L,0x7245L,8L,0xA1EBL},{7L,9L,0x8B12L,0x8B12L},{0x7E17L,0x7E17L,0L,0x1FF9L},{0xBF25L,1L,0x79F0L,0xE857L}},{{(-5L),0L,0x97EAL,0x79F0L},{(-2L),0L,0L,0xE857L},{0L,1L,0xFC65L,0x1FF9L},{0x7CDEL,0x7E17L,(-1L),0x8B12L},{0x7842L,9L,(-1L),0xA1EBL},{0L,0x7245L,0x7842L,0x9B8CL},{0x3A4CL,(-1L),1L,0L}},{{4L,7L,(-6L),0xEC26L},{0x1FF9L,0x8B12L,0L,0x3BC9L},{0xEC26L,0x9B8CL,0xA1EBL,0x9BE4L},{3L,0xBF25L,0x3BC9L,6L},{0x5CB2L,0x1FF9L,(-1L),9L},{0xA979L,0x28AAL,0x07A2L,0x28AAL},{0xF056L,0x715DL,0xBF25L,0x4069L}},{{0x8B12L,(-7L),(-2L),0xA979L},{4L,0x7CDEL,4L,0x07A2L},{4L,0xA1EBL,(-2L),4L},{0x8B12L,0x07A2L,0xBF25L,0L},{0xF056L,0x2C1DL,0x07A2L,0L},{0xA979L,0x79F0L,(-1L),4L},{0x5CB2L,0x3A4CL,0x3BC9L,8L}},{{3L,0xA979L,0xA1EBL,0x97EAL},{0xEC26L,1L,0L,0L},{0x1FF9L,8L,(-6L),3L},{4L,0L,1L,0x7CDEL},{0x3A4CL,0x9BE4L,0x7842L,0x15F1L},{0L,0xF056L,(-1L),0x5CB2L},{0x7842L,(-1L),(-1L),0x7842L}},{{0x7CDEL,0xE857L,0xFC65L,(-7L)},{0L,3L,0L,3L},{(-2L),0xF7F8L,0x97EAL,3L},{6L,0x97EAL,8L,(-1L)},{1L,0xFC65L,0x1FF9L,0x4069L},{0x07A2L,0L,4L,3L},{0x9B8CL,0xBF25L,(-7L),(-1L)}},{{0x1FF9L,0x189BL,0xF7F8L,0xA1EBL},{(-6L),0x1FF9L,0x3A4CL,0x97EAL},{0x5CB2L,(-7L),0x9BE4L,(-1L)},{0L,0x7245L,1L,0L},{0L,0xEC26L,(-1L),(-7L)},{(-1L),0x8B12L,0x7CDEL,3L},{0x3A4CL,8L,3L,0x79F0L}}};
            int32_t **l_604 = &l_562;
            int i, j, k;
            for (g_100 = 10; (g_100 != 25); g_100++)
            { /* block id: 234 */
                uint32_t l_597 = 1UL;
                uint32_t *l_602 = &g_257[6];
                uint32_t l_603[10] = {0x85EA884DL,0x119C1A0FL,0x119C1A0FL,0x85EA884DL,0x119C1A0FL,0x119C1A0FL,0x85EA884DL,0x119C1A0FL,0x119C1A0FL,0x85EA884DL};
                int i;
                /*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
/*bef_stmt:193368*/
(*l_564) = (((safe_rshift_func_int8_t_s_u(Tag304(/*int16_t:193536:196637:193368:e*/l_578[1][0][1]), 4)) || ((*l_563) &= (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(Tag305(/*uint16_t:0:0:193368:e*/g_97), (p_40 && ((safe_unary_minus_func_uint8_t_u(1UL)) , (((Tag306(/*int16_t:193536:196637:193368:e*/l_578[5][2][0]) ^ 0xF871E3B8L) > (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u((~(-1L)), 15)) == ((((*l_602) ^= ((safe_add_func_int64_t_s_s(Tag307(/*uint32_t:193395:193536:193368:e*/l_597), (safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(0x7A87C6D3D1DB4794LL, 0xF2FD8803E8A4BB95LL)), (Tag308(/*int64_t:0:0:193368:e*/**g_457)))))) , p_40)) || Tag309(/*uint8_t:0:0:193368:e*/g_338)) | Tag310(/*uint32_t:193395:193536:193368:e*/l_597))) && Tag311(/*uint32_t:193395:193536:193368:e*/l_597)), (Tag312(/*uint64_t:0:0:193368:e*/*g_302)))), p_40))) ^ Tag313(/*int32_t:0:0:193368:e*/g_541)))))), 0L)), 2UL)), 0xCB8EL)))) | Tag314(/*uint32_t:0:0:193368:e*/g_154[2]));
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
/*aft_stmt:193368*/
                /*bef_stmt:193393*/
return Tag315(/*uint32_t:193395:193536:193393:e*/l_603[6]);
/*aft_stmt:193393*/
            }
            (*l_604) = &l_560;
            for (g_508 = 0; (g_508 <= 4); g_508 += 1)
            { /* block id: 243 */
                (*l_604) = (*l_604);
            }
        }
        for (g_163 = 0; (g_163 < (-9)); g_163--)
        { /* block id: 249 */
            int8_t l_607 = (-2L);
            int8_t *l_610 = &l_607;
            int32_t l_611 = 6L;
            int16_t **l_613 = &l_550;
            uint32_t *l_614 = (void*)0;
            uint32_t *l_615 = &g_257[6];
            uint32_t *l_616 = &g_617;
            uint32_t *l_618[9] = {&g_619[4][4][0],&g_619[4][4][0],&g_619[4][4][0],&g_619[4][4][0],&g_619[4][4][0],&g_619[4][4][0],&g_619[4][4][0],&g_619[4][4][0],&g_619[4][4][0]};
            int64_t ***l_624 = &g_456;
            int64_t *** const *l_623 = &l_624;
            int32_t l_641[2];
            uint16_t l_717 = 65531UL;
            uint16_t *l_764 = (void*)0;
            uint16_t *l_765 = &g_97;
            int32_t l_766 = 0x0D6D0B11L;
            int i;
            for (i = 0; i < 2; i++)
                l_641[i] = (-1L);
            /*bef_stmt:194886*/
/*bef_stmt:194886*/
/*bef_stmt:194886*/
(*l_564) = (Tag316(/*const uint32_t:196675:196675:194886:e*/p_39) || ((0x01L < 0L) < (Tag317(/*int8_t:196608:196637:194886:e*/l_607) && (safe_mod_func_uint8_t_u_u((((*l_610) = (((*l_565) &= 0xC2EB5BDBL) >= 0L)) > ((l_611 = ((*l_616) |= ((*l_615) = (Tag318(/*int32_t:196608:196637:194886:e*/l_611) , (((*l_613) = l_612) == (void*)0))))) >= 4294967295UL)), 255UL)))));
/*aft_stmt:194886*/
/*aft_stmt:194886*/
/*aft_stmt:194886*/
            for (l_611 = (-19); (l_611 >= 16); ++l_611)
            { /* block id: 259 */
                uint64_t l_622 = 0x3CC29D45515B2318LL;
                int8_t **l_627 = (void*)0;
                int8_t ***l_626[4];
                int64_t ** const *l_638 = &g_456;
                int64_t ** const **l_637 = &l_638;
                int64_t ** const ***l_636[2][6] = {{&l_637,&l_637,&l_637,&l_637,&l_637,&l_637},{&l_637,&l_637,&l_637,&l_637,&l_637,&l_637}};
                int16_t l_640 = 4L;
                uint64_t l_676 = 0x63F47867D9309B52LL;
                uint32_t l_679 = 4294967295UL;
                int16_t ** const *l_696 = &l_613;
                int32_t ***l_712 = &g_146[2];
                int32_t l_715 = (-5L);
                int32_t l_716 = 4L;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_626[i] = &l_627;
            }
            /*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
/*bef_stmt:196584*/
l_766 ^= (safe_rshift_func_uint16_t_u_u(((*l_565) = ((((((l_611 = ((Tag319(/*const uint32_t:196675:196675:196584:e*/p_39) , (safe_rshift_func_uint8_t_u_u(((*g_394) = (g_254 ^= (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((Tag320(/*int32_t:196637:196675:196584:e*/**l_711)), (Tag321(/*uint32_t:196675:196675:196584:e*/p_41) , (+((**l_613) = ((Tag322(/*int32_t:196608:196637:196584:e*/l_611) || ((Tag323(/*int32_t:196675:196675:196584:e*/*l_564)) > ((safe_mul_func_uint8_t_u_u((((*l_610) &= (((*l_765) = (!(safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((~(Tag324(/*int32_t:196637:196675:196584:e*/***l_710))), (Tag325(/*int32_t:196637:196675:196584:e*/**l_711)))), (l_641[0] ^= ((5UL | (((safe_mod_func_int16_t_s_s(Tag326(/*uint32_t:0:0:196584:e*/g_154[1]), 0xC132L)) < Tag327(/*const uint32_t:196675:196675:196584:e*/p_39)) == 0xCB6CAD5BL)) && Tag328(/*uint8_t:0:0:196584:e*/g_338))))), Tag329(/*uint8_t:0:0:196584:e*/g_506[1]))))) <= 5UL)) <= p_40), 0x4EL)) & Tag330(/*uint8_t:0:0:196584:e*/g_506[1])))) == p_40)))))) > 0x6BE8E4EEL), 0L)), p_40)))), 0))) & Tag331(/*uint16_t:196608:196637:196584:e*/l_717))) , 0UL) <= Tag332(/*uint32_t:196675:196675:196584:e*/p_41)) == Tag333(/*uint32_t:196675:196675:196584:e*/p_41)) || p_40) || Tag334(/*const uint32_t:196675:196675:196584:e*/p_39))), 2));
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
/*aft_stmt:196584*/
        }
    }
    /*bef_stmt:196673*/
return (Tag335(/*int32_t:196675:196675:196673:e*/*l_563));
/*aft_stmt:196673*/
}


/* ------------------------------------------ */
/* 
 * reads : g_18 g_78 g_81 g_88 g_97 g_162 g_163 g_100 g_159 g_154 g_239 g_147 g_257 g_161 g_261 g_301 g_338 g_302 g_393 g_394 g_254 g_415 g_541
 * writes: g_78 g_88 g_100 g_97 g_163 g_159 g_239 g_254 g_257 g_261 g_162 g_415 g_445 g_456 g_457 g_506 g_508 g_393 g_541
 */
static int16_t  func_46(int16_t  p_47, int32_t  p_48, uint8_t  p_49, int16_t  p_50)
{ /* block id: 1 */
    int8_t l_499 = 0x68L;
    uint8_t *l_504 = (void*)0;
    uint8_t *l_505 = &g_506[1];
    uint16_t *l_507 = &g_508;
    int32_t *l_540 = &g_541;
    /*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
/*bef_stmt:197497*/
(*l_540) |= ((safe_rshift_func_uint8_t_u_s(6UL, 3)) < func_55(((Tag336(/*int32_t:0:0:197497:e*/g_18) , func_59(Tag337(/*int16_t:197515:197515:197497:e*/p_47), (1L != (safe_add_func_uint16_t_u_u(func_64(/*TAG338:STA*/((int32_t)(realsmith_proxy_bKCwA((char)(g_154[1])+(91), (char)(g_338)+(-41), (unsigned long)(g_338)+(-32))+(int)(g_18)+(int)(g_338)+(int)(g_154[1])-(167))+g_18)/*TAG338:END:g_18*/), ((*l_507) = ((((1UL > ((((safe_add_func_int8_t_s_s(/*TAG339:STA*/((int8_t)(realsmith_proxy_hm2p7((int)(g_338)+(-62), (char)(g_338)+(-105), (int)(g_154[1])+(-2))+(int)(l_499)+(int)(p_47)+(int)(g_18)+(int)(g_154[1])+(int)(g_338)-(220))+l_499)/*TAG339:END:l_499*/, ((safe_add_func_uint8_t_u_u(((*l_505) = ((safe_mul_func_uint8_t_u_u((Tag340(/*int16_t:197515:197515:197497:e*/p_47) , /*TAG341:STA*/((int8_t)(realsmith_poHad((long)(g_338)+(-30), (int)(p_47)+(81), (int)(g_338)+(-73), (int)(g_338)+(-17))+(long)(l_499)+(long)(g_154[1])+(long)(p_47)+(long)(g_338)+(long)(g_18)-(221))+l_499)/*TAG341:END:l_499*/), Tag342(/*int16_t:197515:197515:197497:e*/p_50))) & Tag343(/*int32_t:0:0:197497:e*/g_18))), /*TAG344:STA*/((int16_t)(realsmith_lsJDA((int)(l_499)+(-72))+(int)(p_47)+(int)(l_499)+(int)(g_338)+(int)(g_18)+(int)(p_50)-(212))+p_47)/*TAG344:END:p_47*/)) , Tag345(/*int16_t:197515:197515:197497:e*/p_47)))) | 0x15L) , /*TAG346:STA*/((int8_t)(realsmith_sCszt((int)(g_154[1])+(76))+(int)(l_499)+(int)(g_18)+(int)(p_50)+(int)(p_47)+(int)(g_154[1])-(112))+l_499)/*TAG346:END:l_499*/) >= 0UL)) >= 1L) & 0UL) == 0x37E89115L))))))) >= 0x87L), Tag347(/*int8_t:197515:197515:197497:e*/l_499), Tag348(/*int16_t:197515:197515:197497:e*/p_47)));
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
/*aft_stmt:197497*/
    /*bef_stmt:197513*/
return /*TAG349:STA*/((uint8_t)(realsmith_FuTfw((int)(p_49)+(6))+(unsigned int)(p_49)-(28604893))+p_49)/*TAG349:END:p_49*/;
/*aft_stmt:197513*/
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int8_t  func_55(int8_t  p_56, uint16_t  p_57, int64_t  p_58)
{ /* block id: 215 */
    /*bef_stmt:197610*/
return Tag350(/*uint16_t:197612:197612:197610:e*/p_57);
/*aft_stmt:197610*/
}


/* ------------------------------------------ */
/* 
 * reads : g_163 g_394 g_338 g_254 g_415 g_162
 * writes: g_393 g_254
 */
static int8_t  func_59(uint8_t  p_60, int64_t  p_61)
{ /* block id: 204 */
    int16_t l_509 = 0x8401L;
    const int64_t ***l_510 = (void*)0;
    uint8_t **l_511 = &g_394;
    uint8_t ***l_512 = (void*)0;
    int32_t l_513 = 0x524F030EL;
    int32_t l_520[10][3][8] = {{{0xE4A80783L,6L,(-4L),0xFE0502ABL,4L,0x0FA89832L,0x0FA89832L,4L},{6L,(-6L),(-6L),6L,0x9EDE1A37L,0xE4A80783L,1L,0xFE0502ABL},{(-1L),1L,1L,3L,0xC08A83DDL,0L,3L,(-1L)}},{{0x9EDE1A37L,1L,(-4L),0xE4A80783L,0xFF7B69FDL,0xE4A80783L,(-4L),1L},{1L,(-6L),0x0FA89832L,0xC08A83DDL,(-4L),0x0FA89832L,(-1L),0x9EDE1A37L},{(-1L),6L,(-1L),4L,1L,0x8E9172E6L,(-1L),(-1L)}},{{0xFE0502ABL,4L,0x0FA89832L,0x0FA89832L,4L,0xFE0502ABL,(-4L),6L},{4L,0xFE0502ABL,(-4L),6L,0xE4A80783L,0x0FA89832L,3L,0xE4A80783L},{6L,(-1L),1L,6L,1L,0L,1L,6L}},{{(-6L),1L,(-6L),0x0FA89832L,0xC08A83DDL,(-4L),0x0FA89832L,(-1L)},{1L,0x9EDE1A37L,(-4L),4L,0x9CDF76C4L,0xE4A80783L,0xC08A83DDL,0x9EDE1A37L},{1L,(-1L),0x44A72146L,0xC08A83DDL,0xC08A83DDL,0x44A72146L,(-1L),1L}},{{(-6L),6L,0x9EDE1A37L,0xE4A80783L,1L,0xFE0502ABL,(-6L),(-1L)},{6L,0xE4A80783L,0x0FA89832L,3L,0xE4A80783L,0xFE0502ABL,0xC08A83DDL,0xFE0502ABL},{4L,6L,0L,6L,0x0FA89832L,0xC08A83DDL,(-4L),0x0FA89832L}},{{1L,0xE4A80783L,0L,1L,0x9CDF76C4L,0x44A72146L,6L,(-6L)},{0xE4A80783L,6L,0L,(-4L),(-1L),(-1L),(-4L),0L},{0x9CDF76C4L,0x9CDF76C4L,1L,0x0FA89832L,0xFE0502ABL,3L,0x9EDE1A37L,0x9CDF76C4L}},{{6L,0xE4A80783L,0L,(-1L),0x9EDE1A37L,0L,0L,0x9CDF76C4L},{0xE4A80783L,1L,6L,0x0FA89832L,6L,1L,0xE4A80783L,0L},{(-6L),0x0FA89832L,0xC08A83DDL,(-4L),0x0FA89832L,(-1L),0x9EDE1A37L,(-6L)}},{{0x44A72146L,(-6L),(-1L),1L,0x0FA89832L,0L,0L,0x0FA89832L},{(-6L),0L,0L,(-6L),6L,0x44A72146L,0x9CDF76C4L,1L},{0xE4A80783L,0x9CDF76C4L,4L,(-4L),0x9EDE1A37L,1L,(-4L),0xE4A80783L}},{{6L,0x9CDF76C4L,(-1L),0x44A72146L,0xFE0502ABL,0x44A72146L,(-1L),0x9CDF76C4L},{0x9CDF76C4L,0L,0L,0x9EDE1A37L,(-1L),0L,0xE4A80783L,6L},{0xE4A80783L,(-6L),0xFF7B69FDL,0x0FA89832L,0x9CDF76C4L,(-1L),0xE4A80783L,0xE4A80783L}},{{1L,0x0FA89832L,0L,0L,0x0FA89832L,1L,(-1L),(-6L)},{0x0FA89832L,1L,(-1L),(-6L),0x44A72146L,0L,(-4L),0x44A72146L},{(-6L),0xE4A80783L,4L,(-6L),0x9CDF76C4L,3L,0x9CDF76C4L,(-6L)}}};
    uint32_t l_521 = 0x9ACBB18AL;
    int32_t *l_522 = (void*)0;
    int32_t l_523[2][5][6] = {{{0x88373F0DL,0xA148D267L,0x0E711AE6L,0x15580540L,(-1L),(-1L)},{4L,0x0E711AE6L,0x88373F0DL,0L,0L,0x88373F0DL},{0x0E711AE6L,0x0E711AE6L,0x92AE3696L,4L,(-1L),0L},{0L,0xA148D267L,0x15580540L,0x92AE3696L,(-1L),0x92AE3696L},{0x15580540L,0L,0x15580540L,(-1L),0x0E711AE6L,0L}},{{0x1D1A26F7L,(-1L),0x92AE3696L,0x13D05738L,0x88373F0DL,0x88373F0DL},{0x13D05738L,0x88373F0DL,0x88373F0DL,0x13D05738L,0x92AE3696L,(-1L)},{0x1D1A26F7L,0L,0x0E711AE6L,(-1L),0x15580540L,0L},{0x15580540L,0x92AE3696L,(-1L),0x92AE3696L,0x15580540L,0xA148D267L},{0L,0L,(-1L),4L,0x92AE3696L,0x0E711AE6L}}};
    int32_t l_530 = (-2L);
    uint16_t ** const l_535 = (void*)0;
    int i, j, k;
    /*bef_stmt:203107*/
/*bef_stmt:203107*/
/*bef_stmt:203107*/
/*bef_stmt:203107*/
/*bef_stmt:203107*/
/*bef_stmt:203107*/
/*bef_stmt:203107*/
/*bef_stmt:203107*/
/*bef_stmt:203107*/
/*bef_stmt:203107*/
l_523[1][4][4] = (Tag351(/*int16_t:203641:203641:203107:e*/l_509) < ((((void*)0 != l_510) <= /*TAG352:STA*/((int16_t)(realsmith_0FNje((int)(l_509)+(31830))+(int)(l_509)-(-31740))+l_509)/*TAG352:END:l_509*/) || ((l_513 = ((g_393 = l_511) == &g_394)) , (((safe_rshift_func_uint16_t_u_s(((1UL < ((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((l_520[5][2][2] = ((/*TAG353:STA*/((int32_t)(realsmith_dnKYp()+(int)(l_520[6][2][0])-(-6))+l_520[6][2][0])/*TAG353:END:l_520[6][2][0]*/ ^ ((&l_509 != (void*)0) && Tag354(/*int32_t:203641:203641:203107:e*/l_513))) >= Tag355(/*int64_t:203641:203641:203107:e*/p_61))) || /*TAG356:STA*/((uint8_t)(realsmith_proxy_OjBT9((int)(g_18)+(-33), (unsigned char)(p_60)+(67))+(int)(p_60)+(int)(l_520[6][2][0])+(int)(l_509)+(int)(p_61)+(int)(g_18)-(-31748))+p_60)/*TAG356:END:p_60*/), 1)), /*TAG357:STA*/((int64_t)(realsmith_jbXdK((unsigned int)(p_60)+(94), (unsigned int)(g_18)+(-4294967272))+(int)(p_61)+(int)(g_18)+(int)(l_520[6][2][0])+(int)(l_509)+(int)(p_60)-(-31747))+p_61)/*TAG357:END:p_61*/)) == Tag358(/*uint32_t:203641:203641:203107:e*/l_521))) & 0L), 3)) != /*TAG359:STA*/((int64_t)(realsmith_proxy_Y72gJ((int)(g_163)+(-92))+(int)(g_163)-(1))+g_163)/*TAG359:END:g_163*/) , (Tag360(/*uint8_t:0:0:203107:e*/*g_394))))));
/*aft_stmt:203107*/
/*aft_stmt:203107*/
/*aft_stmt:203107*/
/*aft_stmt:203107*/
/*aft_stmt:203107*/
/*aft_stmt:203107*/
/*aft_stmt:203107*/
/*aft_stmt:203107*/
/*aft_stmt:203107*/
/*aft_stmt:203107*/
    for (g_254 = 0; (g_254 <= 16); g_254 = safe_add_func_int32_t_s_s(g_254, 5))
    { /* block id: 211 */
        int32_t *l_539 = &l_523[1][4][4];
        /*bef_stmt:203601*/
/*bef_stmt:203601*/
/*bef_stmt:203601*/
/*bef_stmt:203601*/
/*bef_stmt:203601*/
/*bef_stmt:203601*/
/*bef_stmt:203601*/
/*bef_stmt:203601*/
(*l_539) |= (safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((/*TAG361:STA*/((int32_t)(realsmith_xlzYZ((int)(l_530)+(46), (int)(l_530)+(37))+(int)(l_530)-(76))+l_530)/*TAG361:END:l_530*/ | (safe_lshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((65530UL < Tag362(/*int16_t:0:0:203601:e*/g_415)), ((&g_81 == l_535) | ((safe_sub_func_uint8_t_u_u((((Tag363(/*int64_t:203641:203641:203601:e*/p_61) , (Tag364(/*int64_t:203641:203641:203601:e*/p_61) , (!((&g_393 == &g_393) > Tag365(/*uint8_t:203641:203641:203601:e*/p_60))))) | 3UL) | Tag366(/*uint8_t:203641:203641:203601:e*/p_60)), /*TAG367:STA*/((int64_t)(realsmith_e9NKp((int)(p_61)+(10))+(int)(p_61)-(1))+p_61)/*TAG367:END:p_61*/)) , 0xAA8280FFA9D9D95ALL)))), 10))), (Tag368(/*int64_t:0:0:203601:e*/*g_162)))), 7));
/*aft_stmt:203601*/
/*aft_stmt:203601*/
/*aft_stmt:203601*/
/*aft_stmt:203601*/
/*aft_stmt:203601*/
/*aft_stmt:203601*/
/*aft_stmt:203601*/
/*aft_stmt:203601*/
    }
    /*bef_stmt:203639*/
return /*TAG369:STA*/((int64_t)(realsmith_kDsoq((int)(p_61)+(75), (int)(p_61)+(96))+(int)(p_61)-(8194))+p_61)/*TAG369:END:p_61*/;
/*aft_stmt:203639*/
}


/* ------------------------------------------ */
/* 
 * reads : g_78 g_81 g_18 g_88 g_97 g_162 g_163 g_100 g_159 g_154 g_239 g_147 g_257 g_161 g_261 g_301 g_338 g_302 g_393 g_394
 * writes: g_78 g_88 g_100 g_97 g_163 g_159 g_239 g_254 g_257 g_261 g_162 g_415 g_445 g_456 g_457
 */
static uint16_t  func_64(uint32_t  p_65)
{ /* block id: 2 */
    uint16_t *l_77 = &g_78[0][0];
    int32_t *l_87 = &g_88;
    uint16_t *l_96 = &g_97;
    uint16_t **l_95 = &l_96;
    int32_t l_98[3][1];
    int8_t *l_99 = &g_100;
    int32_t **l_180[9] = {&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87};
    uint16_t l_196[3];
    uint32_t l_201[8][1][7] = {{{4294967295UL,8UL,4294967295UL,1UL,1UL,4294967295UL,8UL}},{{1UL,8UL,0xDD84272FL,0xDD84272FL,8UL,1UL,8UL}},{{4294967295UL,1UL,1UL,4294967295UL,8UL,4294967295UL,1UL}},{{0UL,0UL,1UL,0xDD84272FL,1UL,0UL,0UL}},{{0UL,1UL,0xDD84272FL,1UL,0UL,0UL,1UL}},{{4294967295UL,8UL,4294967295UL,1UL,1UL,4294967295UL,8UL}},{{1UL,8UL,0xDD84272FL,0xDD84272FL,8UL,1UL,8UL}},{{4294967295UL,1UL,1UL,4294967295UL,8UL,4294967295UL,1UL}}};
    uint8_t l_258 = 0UL;
    uint64_t l_340 = 18446744073709551606UL;
    uint8_t *l_351 = &g_254;
    int64_t l_378 = (-6L);
    uint8_t l_390 = 6UL;
    uint16_t l_433 = 1UL;
    uint32_t l_442 = 0x20B105ACL;
    int64_t **l_454 = &g_162;
    uint16_t l_496 = 0xEA14L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_98[i][j] = 0x4D355714L;
    }
    for (i = 0; i < 3; i++)
        l_196[i] = 0xA8B7L;
    /*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
/*bef_stmt:239159*/
if ((safe_rshift_func_uint16_t_u_u((Tag370(/*uint32_t:239174:239174:239159:e*/p_65) , (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((*l_99) = (/*TAG371:STA*/((uint32_t)(realsmith_proxy_3zqpu((int)(p_65)+(90), (int)(p_65)+(75))+(int)(p_65)-(-6))+p_65)/*TAG371:END:p_65*/ != ((((+(((safe_lshift_func_uint16_t_u_u(((*l_77)++), (l_77 != g_81))) <= (Tag372(/*uint32_t:239174:239174:239159:e*/p_65) , 0x05B3L)) & ((((((*l_95) = (((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((((*l_87) &= (safe_unary_minus_func_uint64_t_u(/*TAG373:STA*/((int32_t)(realsmith_12YrL((int)(g_18)+(61), 37, 19)+(int)(g_18)-(-5))+g_18)/*TAG373:END:g_18*/))) == ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((0x2B60D90CL ^ (safe_div_func_int32_t_s_s((/*TAG374:STA*/((int32_t)(realsmith_proxy_zqbpT((char)(g_18)+(5), (char)(g_18)+(4), (int)(g_18)+(2))+(int)(g_18)-(-1))+g_18)/*TAG374:END:g_18*/ >= Tag375(/*int32_t:0:0:239159:e*/g_18)), Tag376(/*int32_t:0:0:239159:e*/g_18)))), Tag377(/*uint32_t:239174:239174:239159:e*/p_65))) , Tag378(/*int32_t:0:0:239159:e*/g_18)), 65535UL)) , /*TAG379:STA*/((uint32_t)(realsmith_proxy_JCbF3((char)(p_65)+(-76))+(char)(p_65)-(34))+p_65)/*TAG379:END:p_65*/)), 7)), Tag380(/*int32_t:0:0:239159:e*/g_18))) , Tag381(/*int32_t:0:0:239159:e*/g_88)) , g_81)) == (void*)0) != 65535UL) || 0xF201L) & 0xC81CL))) == Tag382(/*uint16_t:0:0:239159:e*/g_97)) ^ Tag383(/*int32_t:239174:239174:239159:e*/l_98[0][0])) > 0x3575542ED5AEC2C0LL))), /*TAG384:STA*/((uint32_t)(realsmith_proxy_kGT3h((long)(g_18)+(-86), (int)(g_18)+(34))+(int)(p_65)+(int)(g_18)+(int)(l_98[0][0])+(int)(*g_162)-(1295341342))+p_65)/*TAG384:END:p_65*/)) == Tag385(/*uint32_t:239174:239174:239159:e*/p_65)), 0x105EL)), Tag386(/*uint16_t:0:0:239159:e*/g_97)))), Tag387(/*uint32_t:239174:239174:239159:e*/p_65))))
    { /* block id: 7 */
        int32_t l_102 = 0x3B032F89L;
        int32_t *l_103 = &g_88;
        int32_t **l_104 = &l_87;
        uint32_t l_105 = 18446744073709551615UL;
        int8_t *l_141 = (void*)0;
        int32_t l_304 = (-5L);
        int32_t l_306 = 0xF7334FE1L;
        int32_t l_309 = 0x24845AF6L;
        uint64_t l_310 = 5UL;
        int64_t *l_367 = &g_159[7][0][3];
        uint32_t l_446 = 18446744073709551615UL;
        int32_t l_475 = (-1L);
        /*bef_stmt:238782*/
if (((*l_103) = (~((/*TAG388:STA*/((int32_t)(realsmith_proxy_rZdwF((char)(p_65)+(-97), (int)(p_65)+(92), (int)(l_102)+(-990064530))+(int)(l_102)+(int)(p_65)+(int)(g_18)+(int)(*g_162)-(990064521))+l_102)/*TAG388:END:l_102*/ , (void*)0) == ((*l_104) = l_103)))))
        { /* block id: 10 */
            int32_t l_121 = (-5L);
            int32_t **l_122[1][6] = {{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87}};
            int8_t *l_139 = &g_100;
            int i, j;
            for (g_97 = 0; (g_97 <= 0); g_97 += 1)
            { /* block id: 13 */
                int32_t l_120 = 0L;
                int32_t *l_134[5] = {&g_18,&g_18,&g_18,&g_18,&g_18};
                const int32_t *l_149 = &g_18;
                const int32_t ** const l_148 = &l_149;
                int8_t **l_168[4][10][5] = {{{(void*)0,(void*)0,(void*)0,&l_99,&l_141},{&l_99,(void*)0,&g_143[6][1][0],(void*)0,&l_139},{(void*)0,&l_99,&l_99,(void*)0,&l_141},{(void*)0,&l_139,&g_143[7][2][0],&l_139,&l_139},{&l_141,(void*)0,&g_143[6][1][0],&l_99,&l_99},{(void*)0,&l_99,&l_139,&l_139,&g_143[6][1][0]},{&l_99,(void*)0,(void*)0,(void*)0,&l_99},{&l_139,(void*)0,&l_99,(void*)0,(void*)0},{&l_141,&l_141,&l_99,&l_99,&g_143[1][3][0]},{(void*)0,(void*)0,&l_139,(void*)0,(void*)0}},{{&g_143[6][1][0],&l_99,&g_143[6][1][0],&g_143[6][1][0],&l_99},{(void*)0,&l_139,&l_141,&l_139,&g_143[6][1][0]},{(void*)0,&l_141,&l_99,&g_143[6][1][0],&l_99},{(void*)0,(void*)0,&g_143[6][1][0],&g_143[6][1][0],&l_139},{(void*)0,&g_143[6][1][0],&l_141,&l_99,&l_141},{(void*)0,(void*)0,&g_143[6][2][0],&l_139,&l_139},{&g_143[6][1][0],(void*)0,&l_99,&g_143[6][1][0],&l_141},{(void*)0,(void*)0,&l_141,&l_139,(void*)0},{&l_141,(void*)0,&l_139,&l_99,&l_99},{&l_139,(void*)0,&l_139,&l_141,&l_139}},{{&l_99,&g_143[6][1][0],&l_99,(void*)0,&l_139},{(void*)0,(void*)0,&g_143[3][1][0],&l_139,(void*)0},{&l_141,&l_141,&l_99,&l_139,&g_143[2][2][0]},{(void*)0,&l_139,&l_139,(void*)0,&l_99},{(void*)0,&g_143[6][1][0],&l_99,&l_99,&g_143[6][1][0]},{&l_99,(void*)0,&g_143[6][2][0],&g_143[3][1][0],&l_99},{&l_139,&l_139,&g_143[6][1][0],&l_99,(void*)0},{&l_141,&l_139,(void*)0,&l_139,&l_141},{&g_143[6][1][0],&l_99,&l_139,&l_139,&g_143[1][3][0]},{(void*)0,&l_99,&g_143[3][1][0],&l_141,&l_139}},{{&l_99,&l_139,&l_99,&l_99,&g_143[1][3][0]},{&l_139,&l_141,&g_143[6][2][0],&g_143[6][2][0],&l_141},{&g_143[1][3][0],&g_143[6][1][0],(void*)0,&l_141,(void*)0},{(void*)0,(void*)0,&l_139,&g_143[6][1][0],&l_99},{&l_139,&l_99,(void*)0,&l_99,&g_143[6][1][0]},{(void*)0,&l_139,&l_99,&l_141,&l_99},{&g_143[1][3][0],&g_143[1][3][0],&l_141,&g_143[6][1][0],&g_143[6][1][0]},{&l_139,(void*)0,&l_139,&l_139,(void*)0},{&l_99,&l_139,(void*)0,&l_99,&l_139},{(void*)0,(void*)0,&l_139,&l_99,&l_99}}};
                int i, j, k;
            }
        }
        else
        { /* block id: 44 */
            int32_t ***l_173 = (void*)0;
            int32_t *l_208 = &g_18;
            int32_t *l_209[8] = {&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18};
            int8_t * const *l_280 = &g_143[0][3][0];
            uint8_t l_313 = 246UL;
            int64_t *l_427 = &g_161;
            uint64_t *l_432[6][9] = {{&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&l_340,&g_239,&l_340,&g_239,&l_340,&g_239,&l_340,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&l_340,&g_239,&l_340,&g_239,&l_340,&g_239,&l_340,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&l_340,&g_239,&l_340,&g_239,&l_340,&g_239,&l_340,&g_239}};
            uint16_t **l_450 = &l_77;
            int8_t l_464 = (-1L);
            int64_t l_471 = 0L;
            int i, j;
            /*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
/*bef_stmt:238762*/
if ((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((((*g_162) = (l_173 != (((Tag389(/*int64_t:0:0:238762:e*/*g_162)) & (((-4L) == Tag390(/*uint32_t:239174:239174:238762:e*/p_65)) != (Tag391(/*int32_t:238812:239174:238762:e*/*l_103)))) , &g_146[0]))) > ((-1L) || (safe_sub_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(Tag392(/*int32_t:0:0:238762:e*/g_18), ((((&l_87 == l_180[4]) , (*l_104)) == (*l_104)) && Tag393(/*uint32_t:239174:239174:238762:e*/p_65)))) | Tag394(/*int8_t:0:0:238762:e*/g_100)) >= (Tag395(/*int32_t:238812:239174:238762:e*/**l_104))), Tag396(/*uint32_t:239174:239174:238762:e*/p_65))) | 7UL), Tag397(/*uint32_t:239174:239174:238762:e*/p_65))))), Tag398(/*int64_t:0:0:238762:e*/g_159[2][4][0]))), (Tag399(/*int32_t:239174:239174:238762:e*/*l_87)))))
            { /* block id: 46 */
                uint32_t l_182 = 0xBB508EA8L;
                int32_t **l_189[9] = {&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147};
                int i;
                /*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
/*bef_stmt:220395*/
if ((!(Tag400(/*uint32_t:221890:238768:220395:e*/l_182) , (Tag401(/*uint32_t:239174:239174:220395:e*/p_65) , (!(safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((!(l_189[8] == &g_147)), ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((Tag402(/*uint16_t:239174:239174:220395:e*/l_196[2]) <= 0x45BFL) , (safe_add_func_uint32_t_u_u((((*l_77) ^= Tag403(/*uint32_t:239174:239174:220395:e*/l_201[5][0][4])) == (Tag404(/*uint32_t:239174:239174:220395:e*/p_65) <= (((safe_div_func_uint8_t_u_u((!((((((((void*)0 == &g_143[0][0][0]) || (-1L)) >= Tag405(/*uint32_t:239174:239174:220395:e*/p_65)) || Tag406(/*uint32_t:239174:239174:220395:e*/p_65)) == 0x218DL) , 0xBCL) & 7L)), 0x04L)) < Tag407(/*int8_t:0:0:220395:e*/g_100)) | Tag408(/*uint32_t:239174:239174:220395:e*/p_65)))), Tag409(/*uint32_t:239174:239174:220395:e*/p_65)))), Tag410(/*uint32_t:239174:239174:220395:e*/p_65))), 9L)), 65535UL)) != (Tag411(/*int32_t:238812:239174:220395:e*/**l_104))))), 0UL)))))))
                { /* block id: 48 */
                    uint64_t l_205 = 0x2091D055632A555FLL;
                    /*bef_stmt:214482*/
(*l_87) = Tag412(/*uint32_t:239174:239174:214482:e*/p_65);
/*aft_stmt:214482*/
                    /*bef_stmt:214599*/
(**l_104) = (0xFC4768125F44ECFELL || (((void*)0 != &g_143[3][1][0]) > Tag413(/*uint64_t:214694:221890:214599:e*/l_205)));
/*aft_stmt:214599*/
                    for (g_100 = 0; (g_100 >= 2); ++g_100)
                    { /* block id: 53 */
                        /*bef_stmt:214657*/
return Tag414(/*uint64_t:214694:221890:214657:e*/l_205);
/*aft_stmt:214657*/
                    }
                    (*l_104) = l_208;
                }
                else
                { /* block id: 57 */
                    int32_t l_229 = 0x2118C4A8L;
                    int32_t l_231[7][4][1] = {{{1L},{1L},{1L},{1L}},{{0xE952823AL},{1L},{1L},{1L}},{{1L},{0xE952823AL},{1L},{1L}},{{1L},{1L},{0xE952823AL},{1L}},{{1L},{1L},{1L},{0xE952823AL}},{{1L},{1L},{1L},{1L}},{{0xE952823AL},{1L},{1L},{1L}}};
                    int i, j, k;
                    (*l_104) = l_209[5];
                    for (p_65 = 0; (p_65 <= 46); p_65 = safe_add_func_uint8_t_u_u(p_65, 1))
                    { /* block id: 61 */
                        int32_t ***l_228 = &l_180[0];
                        int64_t *l_230 = &g_159[1][0][3];
                        uint64_t *l_238 = &g_239;
                        const int32_t *l_251 = &l_98[1][0];
                        const int32_t **l_250[10][9] = {{&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251,(void*)0,(void*)0,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,(void*)0,&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251},{(void*)0,(void*)0,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,(void*)0,&l_251,&l_251,(void*)0,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251},{(void*)0,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,&l_251,(void*)0,&l_251}};
                        const int32_t ***l_249 = &l_250[3][3];
                        int8_t ** const l_252 = &g_143[6][3][0];
                        uint8_t *l_253 = &g_254;
                        uint32_t *l_255 = (void*)0;
                        uint32_t *l_256[8][2];
                        uint8_t *l_259 = (void*)0;
                        uint8_t *l_260 = &g_261;
                        int32_t l_262 = 0x29664DEEL;
                        uint64_t **l_275 = &l_238;
                        int i, j;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_256[i][j] = &l_201[5][0][4];
                        }
                        /*bef_stmt:218721*/
/*bef_stmt:218721*/
/*bef_stmt:218721*/
/*bef_stmt:218721*/
/*bef_stmt:218721*/
/*bef_stmt:218721*/
/*bef_stmt:218721*/
/*bef_stmt:218721*/
/*bef_stmt:218721*/
l_231[1][0][0] = (2UL >= (((safe_div_func_uint16_t_u_u((Tag415(/*int64_t:0:0:218721:e*/g_163) , (Tag416(/*int32_t:238812:239174:218721:e*/**l_104))), ((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_65, (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((((*l_228) = &g_147) != &g_147) ^ p_65) || ((*l_230) = (((((((*l_77) = ((l_229 = (Tag417(/*int32_t:220387:221890:218721:e*/l_229) , 0x06D4L)) <= p_65)) < (-9L)) , p_65) | Tag418(/*uint32_t:0:0:218721:e*/g_154[2])) < Tag419(/*int64_t:0:0:218721:e*/g_159[5][4][0])) , (Tag420(/*int64_t:0:0:218721:e*/*g_162))))), 15)), p_65)))), p_65)), 0x203BL)), p_65)), Tag421(/*int32_t:220387:221890:218721:e*/l_231[6][0][0]))) , (Tag422(/*int32_t:238812:239174:218721:e*/**l_104))))) < 0x2A3FL) < Tag423(/*uint16_t:0:0:218721:e*/g_97)));
/*aft_stmt:218721*/
/*aft_stmt:218721*/
/*aft_stmt:218721*/
/*aft_stmt:218721*/
/*aft_stmt:218721*/
/*aft_stmt:218721*/
/*aft_stmt:218721*/
/*aft_stmt:218721*/
/*aft_stmt:218721*/
                        /*bef_stmt:219036*/
l_231[5][1][0] &= (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(((p_65 ^ ((*l_238) &= (safe_rshift_func_int8_t_s_s(((*l_99) = p_65), ((void*)0 == &g_81))))) < ((void*)0 != (*l_95))), 0xF9ACL)) ^ ((4UL && Tag424(/*int64_t:0:0:219036:e*/g_163)) <= 0L)), 4));
/*aft_stmt:219036*/
                        /*bef_stmt:219778*/
/*bef_stmt:219778*/
/*bef_stmt:219778*/
/*bef_stmt:219778*/
/*bef_stmt:219778*/
/*bef_stmt:219778*/
/*bef_stmt:219778*/
l_262 |= ((+((*l_260) &= (65527UL | ((p_65 > (((safe_div_func_uint32_t_u_u((g_257[6] ^= (((*l_253) = (1L & ((*l_230) = ((*g_162) ^= (Tag425(/*uint32_t:0:0:219778:e*/g_154[6]) <= (((safe_mul_func_int8_t_s_s(((((*l_103) = (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(1L, ((((Tag426(/*int32_t:220346:220387:219778:e*/***l_228)) && ((&l_189[8] == l_249) , ((&g_143[2][3][0] == l_252) > p_65))) > (Tag427(/*int32_t:238812:239174:219778:e*/*l_103))) || 9UL))), 8UL))) , p_65) != 18446744073709551615UL), p_65)) || Tag428(/*int32_t:220387:221890:219778:e*/l_231[6][0][0])) > (Tag429(/*int32_t:238768:238812:219778:e*/*l_208)))))))) >= 0x49L)), Tag430(/*uint8_t:239174:239174:219778:e*/l_258))) <= p_65) >= Tag431(/*int64_t:0:0:219778:e*/g_161))) ^ p_65)))) , 1L);
/*aft_stmt:219778*/
/*aft_stmt:219778*/
/*aft_stmt:219778*/
/*aft_stmt:219778*/
/*aft_stmt:219778*/
/*aft_stmt:219778*/
/*aft_stmt:219778*/
                        /*bef_stmt:220340*/
/*bef_stmt:220340*/
/*bef_stmt:220340*/
/*bef_stmt:220340*/
/*bef_stmt:220340*/
/*bef_stmt:220340*/
/*bef_stmt:220340*/
(*l_103) |= (((((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint8_t_u(((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(Tag432(/*int32_t:220387:221890:220340:e*/l_231[6][0][0]), 4)) <= (Tag433(/*const int32_t:220346:220387:220340:e*/*l_251))), ((0xC5L & ((safe_rshift_func_int16_t_s_s((((*l_275) = l_230) != (void*)0), 5)) <= ((p_65 ^ (safe_mod_func_uint16_t_u_u(Tag434(/*uint32_t:0:0:220340:e*/g_257[1]), p_65))) == (&l_99 != l_280)))) ^ (Tag435(/*int32_t:238768:238812:220340:e*/*l_208))))) , Tag436(/*int64_t:0:0:220340:e*/g_163)), p_65)), Tag437(/*uint64_t:0:0:220340:e*/g_239))) != (Tag438(/*int32_t:0:0:220340:e*/*g_147))))))) | 6L) , 0x53B5C747L) , &g_147) == &g_147);
/*aft_stmt:220340*/
/*aft_stmt:220340*/
/*aft_stmt:220340*/
/*aft_stmt:220340*/
/*aft_stmt:220340*/
/*aft_stmt:220340*/
/*aft_stmt:220340*/
                    }
                    /*bef_stmt:220385*/
return Tag439(/*uint32_t:239174:239174:220385:e*/p_65);
/*aft_stmt:220385*/
                }
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
/*aft_stmt:220395*/
                for (l_105 = 0; (l_105 > 25); l_105 = safe_add_func_uint8_t_u_u(l_105, 8))
                { /* block id: 84 */
                    uint32_t l_285 = 0x8A6EBA9FL;
                    int32_t l_295 = 0x7274E396L;
                    uint8_t *l_296 = &g_261;
                    uint64_t **l_303 = &g_302;
                    int32_t l_316[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_316[i][j] = 1L;
                    }
                    /*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
/*bef_stmt:221855*/
if (((((*l_99) |= (0xFDE0L ^ Tag440(/*uint32_t:221861:221890:221855:e*/l_285))) | (0x5E4FAD0D5CC44B69LL <= ((safe_add_func_int64_t_s_s((Tag441(/*int64_t:0:0:221855:e*/*g_162)), ((-10L) <= ((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(0xC0C1L, (!(((Tag442(/*int64_t:0:0:221855:e*/*g_162)) >= (((safe_mod_func_int32_t_s_s((((*l_296)--) || ((-10L) > (((((safe_lshift_func_uint16_t_u_s(((((void*)0 == l_296) , Tag443(/*int32_t:221861:221890:221855:e*/l_295)) ^ 1UL), Tag444(/*uint32_t:239174:239174:221855:e*/p_65))) ^ Tag445(/*uint32_t:239174:239174:221855:e*/p_65)) ^ Tag446(/*int64_t:0:0:221855:e*/g_163)) , g_301[1][5]) != l_303))), (Tag447(/*int32_t:239174:239174:221855:e*/*l_87)))) >= Tag448(/*int64_t:0:0:221855:e*/g_161)) || 0x2DL)) | Tag449(/*uint32_t:239174:239174:221855:e*/p_65))))), (Tag450(/*int64_t:0:0:221855:e*/*g_162)))) > (Tag451(/*int32_t:238812:239174:221855:e*/*l_103)))))) & Tag452(/*uint32_t:239174:239174:221855:e*/p_65)))) & Tag453(/*uint16_t:0:0:221855:e*/g_78[0][0])))
                    { /* block id: 87 */
                        int64_t l_305 = (-5L);
                        int32_t l_307 = 0x237E1D04L;
                        int32_t l_308 = 0x988B8C5FL;
                        --l_310;
                    }
                    else
                    { /* block id: 89 */
                        int32_t l_317[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_317[i] = (-1L);
                        /*bef_stmt:221799*/
/*bef_stmt:221799*/
l_317[0] = (l_316[0][2] = (l_295 = (Tag454(/*uint8_t:238768:238812:221799:e*/l_313) , (safe_mul_func_int8_t_s_s(1L, Tag455(/*uint32_t:239174:239174:221799:e*/p_65))))));
/*aft_stmt:221799*/
/*aft_stmt:221799*/
                        /*bef_stmt:221846*/
return Tag456(/*int64_t:0:0:221846:e*/g_159[8][2][3]);
/*aft_stmt:221846*/
                    }
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
/*aft_stmt:221855*/
                }
                /*bef_stmt:221888*/
return Tag457(/*uint32_t:239174:239174:221888:e*/p_65);
/*aft_stmt:221888*/
            }
            else
            { /* block id: 97 */
                uint16_t *l_336[3];
                int32_t l_337 = (-1L);
                uint8_t *l_348[6][2] = {{&g_254,&g_254},{&g_254,&g_254},{&g_254,&g_254},{&g_254,&g_254},{&g_254,&g_254},{&g_254,&g_254}};
                uint8_t *l_350[4][2][6] = {{{&g_338,&g_254,&l_258,&g_338,&g_254,&g_338},{&g_338,&g_338,&g_338,&g_338,&g_338,&l_258}},{{&g_338,&l_313,&g_338,&g_338,&l_313,&g_338},{&g_338,&g_254,&l_258,&g_338,&g_254,&g_338}},{{&g_338,&g_338,&g_338,&g_338,&g_338,&l_258},{&g_338,&l_313,&g_338,&g_338,&l_313,&g_338}},{{&g_338,&g_254,&l_258,&g_338,&g_254,&g_338},{&g_338,&g_338,&g_338,&g_338,&g_338,&l_258}}};
                uint8_t **l_349 = &l_350[3][0][1];
                int32_t *l_366 = &g_88;
                int64_t *l_370 = &g_161;
                int16_t *l_443 = &g_415;
                int16_t *l_444[2][5][3] = {{{&g_445,&g_445,&g_445},{&g_445,&g_445,&g_445},{&g_445,&g_445,(void*)0},{&g_445,&g_445,&g_445},{(void*)0,&g_445,&g_445}},{{&g_445,&g_445,&g_445},{(void*)0,(void*)0,(void*)0},{&g_445,&g_445,&g_445},{&g_445,(void*)0,&g_445},{&g_445,&g_445,&g_445}}};
                int32_t l_473 = (-2L);
                int32_t l_474[10][5][5] = {{{0L,(-1L),5L,0xAD1CE206L,0x3A770B7FL},{5L,0xB42A2987L,0L,5L,5L},{(-5L),(-1L),0x79D1801DL,(-1L),0xBFD1EF39L},{(-3L),0x33D357AAL,0L,(-5L),0x6C35FD77L},{0L,0x92D3DB41L,0L,(-1L),5L}},{{5L,0L,0xB42A2987L,0xCEC666D2L,0x6C35FD77L},{4L,0xAD1CE206L,0x8CDD4282L,(-8L),0x781EBB9CL},{(-1L),(-2L),0xB42A2987L,(-5L),(-1L)},{0L,0L,0xAC8FD313L,0x92D3DB41L,0L},{0x33D357AAL,2L,2L,0x33D357AAL,3L}},{{(-5L),(-8L),0x3FF0AD99L,(-1L),9L},{(-1L),(-3L),0x67BEEB56L,0xB42A2987L,0x5BBA43CEL},{5L,0xB08DB740L,0x3F468151L,(-1L),1L},{5L,0L,0xE778CAB6L,0x33D357AAL,(-1L)},{0x44C248C6L,0x92D3DB41L,7L,0x92D3DB41L,0x44C248C6L}},{{0xC7E84D8DL,0xCEC666D2L,0L,(-5L),5L},{0xFFA0DFD8L,0xB08DB740L,0x7C23049CL,(-8L),0x3A770B7FL},{0x6C35FD77L,0xD2840640L,(-5L),0xCEC666D2L,5L},{0x6E4DC9F0L,(-8L),4L,0x8A85E2C5L,0x44C248C6L},{5L,(-1L),0L,0L,(-1L)}},{{0x7C23049CL,0L,5L,0x6AFEA466L,1L},{(-3L),0x312A780DL,(-5L),3L,0x5BBA43CEL},{0xBFD1EF39L,0xAD1CE206L,0x781EBB9CL,0L,9L},{(-3L),0x73363220L,0L,0xE46E8177L,3L},{0x7C23049CL,0xB5344A76L,0L,0xB08DB740L,0L}},{{5L,0xB42A2987L,0xE778CAB6L,0xC7E84D8DL,(-1L)},{0x6E4DC9F0L,0x8A85E2C5L,9L,0L,0x781EBB9CL},{0x6C35FD77L,3L,0x67BEEB56L,0xE778CAB6L,0x6C35FD77L},{0xFFA0DFD8L,0x8A85E2C5L,1L,0x6AFEA466L,5L},{0xC7E84D8DL,0xB42A2987L,2L,0x73363220L,0x73363220L}},{{0x44C248C6L,0xB5344A76L,0x44C248C6L,0x8A85E2C5L,4L},{5L,0x73363220L,0xB42A2987L,0L,0x6C35FD77L},{5L,0xAD1CE206L,0x3A770B7FL,(-8L),0x7C23049CL},{(-1L),0x312A780DL,0xB42A2987L,0x6C35FD77L,(-1L)},{(-5L),0L,0x44C248C6L,0x92D3DB41L,7L}},{{0x33D357AAL,(-1L),2L,4L,3L},{0L,(-8L),1L,(-1L),0x3F468151L},{(-1L),0xD2840640L,0x67BEEB56L,5L,0x5BBA43CEL},{4L,0xB08DB740L,9L,(-1L),0x3FF0AD99L},{5L,0xCEC666D2L,0xE778CAB6L,4L,(-1L)}},{{0xAC8FD313L,0x92D3DB41L,0L,0x92D3DB41L,0xAC8FD313L},{0xC7E84D8DL,0L,0L,0x6C35FD77L,5L},{0x51BBF9B4L,0xB08DB740L,0x781EBB9CL,(-8L),0x781EBB9CL},{0x73363220L,0xC7E84D8DL,0L,0x312A780DL,3L},{0xAC8FD313L,0xAD1CE206L,0x3F468151L,0L,0x3A770B7FL}},{{3L,4L,2L,(-1L),0x33D357AAL},{0xBFD1EF39L,0x8BD7F8BFL,9L,(-8L),7L},{0xC7E84D8DL,(-1L),0L,0xD2840640L,5L},{5L,0L,0L,0xB08DB740L,0L},{0xC7E84D8DL,2L,0x67BEEB56L,0xCEC666D2L,(-3L)}}};
                uint32_t l_476 = 0xB7078473L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_336[i] = &g_97;
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
/*bef_stmt:229371*/
lbl_371:
                if (((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(Tag458(/*uint32_t:0:0:229371:e*/g_257[9]), Tag459(/*uint16_t:0:0:229371:e*/g_78[0][0]))), (safe_add_func_int16_t_s_s(((((*l_99) = (0L != 0xB616523478FD67EFLL)) , Tag460(/*uint32_t:239174:239174:229371:e*/p_65)) | (((safe_mod_func_int32_t_s_s((255UL != Tag461(/*uint8_t:0:0:229371:e*/g_261)), (((((Tag462(/*int64_t:0:0:229371:e*/g_159[8][1][2]) || (safe_div_func_uint8_t_u_u((((((safe_mod_func_uint16_t_u_u(((**l_104) ^= (((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((((*l_95) = (void*)0) == l_336[2]), (-7L))), Tag463(/*uint32_t:239174:239174:229371:e*/p_65))), Tag464(/*uint64_t:0:0:229371:e*/g_239))) , 0x930BF4E5084947FFLL) || Tag465(/*uint32_t:239174:239174:229371:e*/p_65))), Tag466(/*int32_t:238742:238768:229371:e*/l_337))) && Tag467(/*uint32_t:239174:239174:229371:e*/p_65)) , &l_336[1]) != (void*)0) >= Tag468(/*uint32_t:239174:239174:229371:e*/p_65)), Tag469(/*uint16_t:0:0:229371:e*/g_78[0][0])))) , Tag470(/*int64_t:0:0:229371:e*/g_159[3][1][4])) , Tag471(/*uint32_t:239174:239174:229371:e*/p_65)) || Tag472(/*uint32_t:239174:239174:229371:e*/p_65)) | 65530UL))) != Tag473(/*uint32_t:239174:239174:229371:e*/p_65)) < 0xDEDD0729L)), Tag474(/*uint8_t:0:0:229371:e*/g_338))))) , 1L))
                { /* block id: 101 */
                    /*bef_stmt:229021*/
return Tag475(/*uint32_t:239174:239174:229021:e*/p_65);
/*aft_stmt:229021*/
                }
                else
                { /* block id: 103 */
                    int32_t *l_339 = &l_309;
                    for (l_309 = 0; l_309 < 8; l_309 += 1)
                    {
                        l_209[l_309] = &l_98[0][0];
                    }
                    (*l_104) = (*l_104);
                    for (g_88 = 8; (g_88 >= 0); g_88 -= 1)
                    { /* block id: 108 */
                        int i;
                        (*l_104) = l_339;
                        /*bef_stmt:229286*/
if (Tag476(/*uint32_t:239174:239174:229286:e*/p_65))
                            continue;
/*aft_stmt:229286*/
                        (*l_104) = (void*)0;
                        /*bef_stmt:229331*/
if (Tag477(/*uint64_t:239174:239174:229331:e*/l_340))
                            continue;
/*aft_stmt:229331*/
                    }
                }
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
/*aft_stmt:229371*/
                /*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
/*bef_stmt:233289*/
if ((!(safe_div_func_uint64_t_u_u(((*g_302) = ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(Tag478(/*uint32_t:239174:239174:233289:e*/p_65), (((l_348[4][1] = &g_261) == (l_351 = ((*l_349) = &g_254))) <= (Tag479(/*uint32_t:239174:239174:233289:e*/p_65) , (!((safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u((+(safe_div_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u((Tag480(/*int32_t:238812:239174:233289:e*/*l_103)), 0x7297D7F472F36C47LL)) < ((((safe_sub_func_int64_t_s_s((-1L), (Tag481(/*uint32_t:239174:239174:233289:e*/p_65) ^ (safe_lshift_func_uint8_t_u_u(Tag482(/*uint32_t:239174:239174:233289:e*/p_65), 1))))) | 7L) , Tag483(/*int32_t:238742:238768:233289:e*/l_337)) <= 0x7672026AL)), 0x554C3ABCL))), Tag484(/*uint64_t:0:0:233289:e*/g_239))) > 255UL), (Tag485(/*int64_t:0:0:233289:e*/*g_162)))) , Tag486(/*int32_t:238742:238768:233289:e*/l_337))))))), Tag487(/*uint32_t:239174:239174:233289:e*/p_65))) == 0xE1ED7FD0L)), Tag488(/*int32_t:238742:238768:233289:e*/l_337)))))
                { /* block id: 119 */
                    int64_t **l_368 = (void*)0;
                    int64_t **l_369[2][6][7] = {{{(void*)0,&g_162,&g_162,&l_367,&l_367,(void*)0,&g_162},{&g_162,&g_162,&l_367,&l_367,&g_162,&g_162,&l_367},{&g_162,&g_162,&g_162,&l_367,&g_162,&l_367,&g_162},{&l_367,&g_162,&g_162,&l_367,&l_367,&l_367,&l_367},{&l_367,&l_367,&g_162,&g_162,&l_367,&l_367,&g_162},{&g_162,&g_162,&l_367,&g_162,&l_367,&g_162,&g_162}},{{&g_162,&g_162,(void*)0,&l_367,&g_162,(void*)0,&l_367},{&l_367,&l_367,&g_162,&g_162,&l_367,&g_162,&l_367},{&l_367,&l_367,(void*)0,&l_367,&g_162,&l_367,&g_162},{&g_162,&l_367,&l_367,&g_162,&g_162,(void*)0,&l_367},{&g_162,&g_162,&g_162,&g_162,&l_367,(void*)0,&g_162},{(void*)0,&l_367,&g_162,&g_162,&g_162,&g_162,&l_367}}};
                    int32_t l_410 = (-1L);
                    int32_t l_411 = 0L;
                    int32_t l_412 = (-3L);
                    int i, j, k;
                    (*l_104) = l_366;
                    /*bef_stmt:233092*/
if ((1UL || (((l_370 = l_367) != (g_162 = &g_163)) || Tag489(/*uint32_t:239174:239174:233092:e*/p_65))))
                    { /* block id: 123 */
                        /*bef_stmt:231484*/
if (Tag490(/*uint8_t:238768:238812:231484:e*/l_313))
                            goto lbl_371;
/*aft_stmt:231484*/
                    }
                    else
                    { /* block id: 125 */
                        uint16_t l_389 = 3UL;
                        int32_t l_413 = (-2L);
                        int16_t *l_414 = &g_415;
                        int32_t l_416 = (-6L);
                        /*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
/*bef_stmt:232231*/
l_390 ^= (safe_lshift_func_int16_t_s_s((((safe_add_func_int64_t_s_s((Tag491(/*int32_t:239174:239174:232231:e*/*l_87)), (safe_rshift_func_int8_t_s_s((((Tag492(/*uint32_t:239174:239174:232231:e*/p_65) != (Tag493(/*uint32_t:0:0:232231:e*/g_257[5]) < Tag494(/*int64_t:239174:239174:232231:e*/l_378))) != (((((void*)0 == &g_302) , (safe_add_func_int64_t_s_s(((Tag495(/*int32_t:238768:238812:232231:e*/*l_208)) , (((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(Tag496(/*uint32_t:239174:239174:232231:e*/p_65), (((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(Tag497(/*uint16_t:233083:233223:232231:e*/l_389), (Tag498(/*int64_t:0:0:232231:e*/*g_162)))), Tag499(/*uint32_t:239174:239174:232231:e*/p_65))) , &g_146[2]) == &l_104))), Tag500(/*uint32_t:239174:239174:232231:e*/p_65))) | (Tag501(/*int64_t:0:0:232231:e*/*g_162))) & 0x61L) , (Tag502(/*int32_t:238812:239174:232231:e*/**l_104))) != (Tag503(/*int64_t:0:0:232231:e*/*g_162)))), (Tag504(/*int32_t:238768:238812:232231:e*/*l_208))))) , Tag505(/*uint32_t:239174:239174:232231:e*/p_65)) || Tag506(/*uint32_t:239174:239174:232231:e*/p_65))) < 1L), (Tag507(/*int32_t:239174:239174:232231:e*/*l_87)))))) ^ Tag508(/*uint32_t:239174:239174:232231:e*/p_65)) >= 0UL), Tag509(/*uint16_t:233083:233223:232231:e*/l_389)));
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
/*aft_stmt:232231*/
                        /*bef_stmt:232342*/
(*l_366) = (0x4570321CL && ((safe_add_func_int32_t_s_s(0x8FD661C1L, (Tag510(/*int32_t:238742:238768:232342:e*/*l_366)))) > ((void*)0 != g_393)));
/*aft_stmt:232342*/
                        /*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
/*bef_stmt:233077*/
l_416 ^= (((*l_414) = ((((void*)0 == l_366) > Tag511(/*uint16_t:233083:233223:233077:e*/l_389)) >= (((!((safe_lshift_func_uint16_t_u_s((Tag512(/*int32_t:238812:239174:233077:e*/**l_104)), ((safe_div_func_uint16_t_u_u(((*l_77) = (((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0x5FL, 0)), Tag513(/*int64_t:0:0:233077:e*/g_159[7][0][3]))) & (l_413 &= (((safe_rshift_func_int8_t_s_u((Tag514(/*uint32_t:239174:239174:233077:e*/p_65) && ((*l_351) = (((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((Tag515(/*int32_t:239174:239174:233077:e*/*l_87)), ((l_411 = (l_410 = (Tag516(/*int32_t:0:0:233077:e*/*g_147)))) ^ Tag517(/*int32_t:233223:238742:233077:e*/l_412)))), Tag518(/*uint64_t:0:0:233077:e*/g_239))) , 18446744073709551615UL) , (Tag519(/*int32_t:238742:238768:233077:e*/*l_366))))), 5)) , Tag520(/*uint32_t:239174:239174:233077:e*/p_65)) != (Tag521(/*int32_t:238742:238768:233077:e*/*l_366))))) >= Tag522(/*uint32_t:239174:239174:233077:e*/p_65)) & 0L) , Tag523(/*uint32_t:239174:239174:233077:e*/p_65))), 9L)) , (Tag524(/*int32_t:239174:239174:233077:e*/*l_87))))) <= Tag525(/*uint32_t:239174:239174:233077:e*/p_65))) != Tag526(/*uint32_t:239174:239174:233077:e*/p_65)) , Tag527(/*uint32_t:239174:239174:233077:e*/p_65)))) != (Tag528(/*int32_t:238742:238768:233077:e*/*l_366)));
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
/*aft_stmt:233077*/
                    }
/*aft_stmt:233092*/
                    for (l_306 = 0; (l_306 > 7); ++l_306)
                    { /* block id: 138 */
                        /*bef_stmt:233184*/
(*l_103) &= (safe_div_func_int64_t_s_s(Tag529(/*uint32_t:239174:239174:233184:e*/p_65), 18446744073709551608UL));
/*aft_stmt:233184*/
                        /*bef_stmt:233210*/
return (Tag530(/*int32_t:238768:238812:233210:e*/*l_208));
/*aft_stmt:233210*/
                    }
                }
                else
                { /* block id: 142 */
                    /*bef_stmt:233282*/
(*l_103) = (safe_lshift_func_uint16_t_u_s(Tag531(/*uint32_t:239174:239174:233282:e*/p_65), 7));
/*aft_stmt:233282*/
                }
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
/*aft_stmt:233289*/
                /*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
/*bef_stmt:238597*/
if ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((void*)0 != l_427), ((g_445 = ((*l_443) = ((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((((&l_310 != (l_432[1][3] = &l_340)) , Tag532(/*uint16_t:239174:239174:238597:e*/l_433)) >= (safe_sub_func_int32_t_s_s(((Tag533(/*int32_t:0:0:238597:e*/*g_147)) ^ ((((*l_366) &= ((((((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(Tag534(/*uint32_t:239174:239174:238597:e*/p_65), (((18446744073709551612UL != Tag535(/*uint32_t:239174:239174:238597:e*/p_65)) <= Tag536(/*uint32_t:239174:239174:238597:e*/p_65)) <= 0L))), Tag537(/*uint32_t:239174:239174:238597:e*/p_65))), 0x7C65L)) == Tag538(/*uint32_t:239174:239174:238597:e*/l_442)) < 1L) == 0UL) ^ Tag539(/*uint32_t:239174:239174:238597:e*/p_65)) , 2L)) < Tag540(/*uint32_t:239174:239174:238597:e*/p_65)) ^ Tag541(/*uint32_t:239174:239174:238597:e*/p_65))), Tag542(/*uint64_t:0:0:238597:e*/g_239)))) || Tag543(/*uint32_t:239174:239174:238597:e*/p_65)), Tag544(/*uint32_t:239174:239174:238597:e*/p_65))), Tag545(/*uint32_t:239174:239174:238597:e*/p_65))) || (Tag546(/*int32_t:238768:238812:238597:e*/*l_208))))) ^ 1L))), Tag547(/*uint32_t:238812:239174:238597:e*/l_446))))
                { /* block id: 149 */
                    uint32_t l_453 = 0x00F448ECL;
                    for (l_433 = 0; (l_433 == 59); l_433 = safe_add_func_uint64_t_u_u(l_433, 1))
                    { /* block id: 152 */
                        int32_t *l_449[2][9] = {{&l_98[0][0],&l_98[0][0],&l_306,&l_306,&l_309,&l_306,&l_309,&l_306,&l_306},{&l_98[0][0],&l_98[0][0],&l_306,&l_306,&l_309,&l_306,&l_309,&l_306,&l_306}};
                        int i, j;
                        /*bef_stmt:234475*/
if (Tag548(/*uint32_t:239174:239174:234475:e*/p_65))
                            break;
/*aft_stmt:234475*/
                        (*l_104) = l_449[0][4];
                        /*bef_stmt:234666*/
/*bef_stmt:234666*/
(*l_103) |= ((l_450 != &g_81) && (Tag549(/*uint16_t:0:0:234666:e*/g_97) , (l_453 = ((safe_lshift_func_int8_t_s_u(Tag550(/*uint32_t:239174:239174:234666:e*/p_65), 3)) , (-8L)))));
/*aft_stmt:234666*/
/*aft_stmt:234666*/
                        /*bef_stmt:234696*/
(*l_103) = Tag551(/*uint32_t:239174:239174:234696:e*/p_65);
/*aft_stmt:234696*/
                    }
                    /*bef_stmt:234725*/
return Tag552(/*uint32_t:239174:239174:234725:e*/p_65);
/*aft_stmt:234725*/
                }
                else
                { /* block id: 160 */
                    int64_t ***l_455[5][6][2] = {{{&l_454,&l_454},{&l_454,&l_454},{&l_454,(void*)0},{&l_454,(void*)0},{&l_454,&l_454},{&l_454,&l_454}},{{&l_454,(void*)0},{&l_454,(void*)0},{&l_454,&l_454},{&l_454,&l_454},{&l_454,(void*)0},{&l_454,(void*)0}},{{&l_454,&l_454},{&l_454,&l_454},{&l_454,(void*)0},{&l_454,(void*)0},{&l_454,&l_454},{&l_454,&l_454}},{{&l_454,(void*)0},{&l_454,(void*)0},{&l_454,&l_454},{&l_454,&l_454},{&l_454,(void*)0},{&l_454,(void*)0}},{{&l_454,&l_454},{&l_454,&l_454},{&l_454,(void*)0},{&l_454,(void*)0},{&l_454,&l_454},{&l_454,&l_454}}};
                    int32_t *l_460 = &l_98[0][0];
                    uint32_t *l_463 = &l_201[5][0][4];
                    int32_t l_468[8][8] = {{(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL},{(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL},{(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL},{(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL},{(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL},{(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL},{(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL},{(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL,(-1L),0xAA3F65DDL}};
                    int16_t l_470 = 0xBE10L;
                    int i, j, k;
                    /*bef_stmt:238227*/
/*bef_stmt:238227*/
/*bef_stmt:238227*/
/*bef_stmt:238227*/
/*bef_stmt:238227*/
/*bef_stmt:238227*/
/*bef_stmt:238227*/
/*bef_stmt:238227*/
if ((((((g_456 = l_454) == (g_457 = &g_162)) , (safe_mod_func_uint8_t_u_u(((l_460 != (((*l_460) = ((safe_sub_func_int32_t_s_s(Tag553(/*uint32_t:239174:239174:238227:e*/p_65), ((*l_366) = ((*l_463) = Tag554(/*uint32_t:239174:239174:238227:e*/p_65))))) >= ((*g_302) = (Tag555(/*uint32_t:239174:239174:238227:e*/p_65) , (Tag556(/*uint64_t:0:0:238227:e*/*g_302)))))) , (*l_104))) <= (((-1L) == 0x93E1D8396C674AB2LL) | (Tag557(/*uint8_t:0:0:238227:e*/*g_394)))), Tag558(/*int8_t:238768:238812:238227:e*/l_464)))) && (Tag559(/*uint8_t:0:0:238227:e*/*g_394))) , Tag560(/*uint32_t:239174:239174:238227:e*/p_65)))
                    { /* block id: 167 */
                        uint16_t l_465 = 0xCA66L;
                        int32_t l_469 = 0L;
                        int32_t l_472[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_472[i] = 0L;
                        --l_465;
                        --l_476;
                        /*bef_stmt:238133*/
return Tag561(/*uint16_t:238135:238587:238133:e*/l_465);
/*aft_stmt:238133*/
                    }
                    else
                    { /* block id: 171 */
                        uint8_t ***l_479 = &l_349;
                        (*l_366) = 0xD88587AAL;
                        (*l_479) = &l_351;
                    }
/*aft_stmt:238227*/
/*aft_stmt:238227*/
/*aft_stmt:238227*/
/*aft_stmt:238227*/
/*aft_stmt:238227*/
/*aft_stmt:238227*/
/*aft_stmt:238227*/
/*aft_stmt:238227*/
                    for (l_105 = 0; (l_105 < 31); l_105++)
                    { /* block id: 177 */
                        const int8_t l_482[8] = {0x80L,0xAEL,0x80L,0xAEL,0x80L,0xAEL,0x80L,0xAEL};
                        int i;
                        /*bef_stmt:238449*/
if ((Tag562(/*int32_t:0:0:238449:e*/*g_147)))
                            break;
/*aft_stmt:238449*/
                        (*l_104) = &l_474[7][0][1];
                        /*bef_stmt:238545*/
if (Tag563(/*uint32_t:239174:239174:238545:e*/p_65))
                            break;
/*aft_stmt:238545*/
                        /*bef_stmt:238568*/
if (Tag564(/*const int8_t:238572:238587:238568:e*/l_482[0]))
                            continue;
/*aft_stmt:238568*/
                    }
                }
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
/*aft_stmt:238597*/
                for (g_163 = 0; (g_163 <= 2); g_163 += 1)
                { /* block id: 186 */
                    int32_t *l_483 = &l_473;
                    (*l_104) = l_483;
                    /*bef_stmt:238726*/
if ((Tag565(/*int32_t:0:0:238726:e*/*g_147)))
                        break;
/*aft_stmt:238726*/
                }
            }
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
/*aft_stmt:238762*/
        }
/*aft_stmt:238782*/
        (*l_103) &= 0x5268356CL;
    }
    else
    { /* block id: 193 */
        int32_t l_490 = 0xD3ABA04FL;
        int32_t l_495 = 0xCC7D11EEL;
        for (g_97 = 0; (g_97 < 48); ++g_97)
        { /* block id: 196 */
            /*bef_stmt:238932*/
return Tag566(/*uint32_t:239174:239174:238932:e*/p_65);
/*aft_stmt:238932*/
        }
        /*bef_stmt:239147*/
/*bef_stmt:239147*/
/*bef_stmt:239147*/
/*bef_stmt:239147*/
/*bef_stmt:239147*/
/*bef_stmt:239147*/
l_495 ^= (safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((0xAD7B503A509B1685LL < ((0x0A78L == Tag567(/*int32_t:239153:239174:239147:e*/l_490)) != Tag568(/*uint32_t:239174:239174:239147:e*/p_65))), (Tag569(/*uint32_t:239174:239174:239147:e*/p_65) > Tag570(/*uint32_t:239174:239174:239147:e*/p_65)))), ((safe_add_func_int8_t_s_s(Tag571(/*uint32_t:239174:239174:239147:e*/p_65), (safe_mod_func_int8_t_s_s(Tag572(/*int32_t:239153:239174:239147:e*/l_490), 1UL)))) ^ 0x4EAD1AE066ADCDE6LL)));
/*aft_stmt:239147*/
/*aft_stmt:239147*/
/*aft_stmt:239147*/
/*aft_stmt:239147*/
/*aft_stmt:239147*/
/*aft_stmt:239147*/
    }
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
/*aft_stmt:239159*/
    /*bef_stmt:239172*/
return /*TAG573:STA*/((uint16_t)(realsmith_O6BMJ((int)(l_496)+(-59883), (int)(l_496)+(-59900))+(int)(l_496)-(59925))+l_496)/*TAG573:END:l_496*/;
/*aft_stmt:239172*/
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
    printf("g_88: %d\n", g_88);
    printf("g_163: %ld\n", (long)g_163);
    printf("g_254: %u\n", (unsigned int)g_254);
    printf("g_445: %d\n", (int)g_445);
    printf("g_97: %u\n", (unsigned int)g_97);
    printf("g_100: %d\n", (int)g_100);
    printf("g_415: %d\n", (int)g_415);
    printf("g_239: %lu\n", (unsigned long)g_239);
    printf("g_261: %u\n", (unsigned int)g_261);
    printf("g_338: %u\n", (unsigned int)g_338);

    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_78[i][j], "g_78[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_154[i], "g_154[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_159[i][j][k], "g_159[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_257[i], "g_257[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_506[i], "g_506[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_619[i][j][k], "g_619[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_923, "g_923", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_965[i], "g_965[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1192[i][j], "g_1192[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1290, "g_1290", print_hash_value);
    transparent_crc(g_1324, "g_1324", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1436[i], "g_1436[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1457, "g_1457", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1559, "g_1559", print_hash_value);
    transparent_crc(g_1682, "g_1682", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1765[i], "g_1765[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1787, "g_1787", print_hash_value);
    transparent_crc(g_1903, "g_1903", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2096[i], "g_2096[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2104, "g_2104", print_hash_value);
    transparent_crc(g_2124, "g_2124", print_hash_value);
    transparent_crc(g_2187, "g_2187", print_hash_value);
    transparent_crc(g_2307, "g_2307", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 559
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

XXX max expression depth: 52
breakdown:
   depth: 1, occurrence: 201
   depth: 2, occurrence: 56
   depth: 3, occurrence: 1
   depth: 4, occurrence: 2
   depth: 5, occurrence: 5
   depth: 6, occurrence: 2
   depth: 7, occurrence: 1
   depth: 10, occurrence: 1
   depth: 13, occurrence: 1
   depth: 14, occurrence: 1
   depth: 16, occurrence: 1
   depth: 17, occurrence: 3
   depth: 20, occurrence: 2
   depth: 21, occurrence: 2
   depth: 22, occurrence: 1
   depth: 23, occurrence: 3
   depth: 24, occurrence: 1
   depth: 25, occurrence: 2
   depth: 26, occurrence: 6
   depth: 27, occurrence: 3
   depth: 28, occurrence: 3
   depth: 29, occurrence: 1
   depth: 31, occurrence: 3
   depth: 32, occurrence: 3
   depth: 34, occurrence: 1
   depth: 36, occurrence: 1
   depth: 38, occurrence: 1
   depth: 43, occurrence: 1
   depth: 52, occurrence: 1

XXX total number of pointers: 535

XXX times a variable address is taken: 1221
XXX times a pointer is dereferenced on RHS: 394
breakdown:
   depth: 1, occurrence: 219
   depth: 2, occurrence: 108
   depth: 3, occurrence: 38
   depth: 4, occurrence: 29
XXX times a pointer is dereferenced on LHS: 293
breakdown:
   depth: 1, occurrence: 246
   depth: 2, occurrence: 25
   depth: 3, occurrence: 13
   depth: 4, occurrence: 7
   depth: 5, occurrence: 2
XXX times a pointer is compared with null: 47
XXX times a pointer is compared with address of another variable: 18
XXX times a pointer is compared with another pointer: 9
XXX times a pointer is qualified to be dereferenced: 5872

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1005
   level: 2, occurrence: 512
   level: 3, occurrence: 260
   level: 4, occurrence: 163
   level: 5, occurrence: 23
XXX number of pointers point to pointers: 290
XXX number of pointers point to scalars: 245
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 28.6
XXX average alias set size: 1.46

XXX times a non-volatile is read: 2237
XXX times a non-volatile is write: 949
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 1
XXX backward jumps: 6

XXX stmts: 210
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 29
   depth: 1, occurrence: 19
   depth: 2, occurrence: 22
   depth: 3, occurrence: 32
   depth: 4, occurrence: 51
   depth: 5, occurrence: 57

XXX percentage a fresh-made variable is used: 15.6
XXX percentage an existing variable is used: 84.4
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: 8C0F994 */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: 8C0F994 */
