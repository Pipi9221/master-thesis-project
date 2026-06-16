
long HPDF_OK_realsmith_nXhhk = -10;

int HPDF_TRUE_realsmith_nXhhk = -7;

__attribute__((used)) static long
realsmith_nXhhk (int fontdef)
{
    long ret = (1);
    if (ret != HPDF_OK_realsmith_nXhhk)
        return ret;
    return (1);
}

__attribute__((used)) static inline int realsmith_PiJPn(const char *name, const char *b, int *hash) {
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
int realsmith_proxy_e5IyA(char p_0_1kjXA, char p_1_Gvtw7, int p_2_Jb4vy) {
int proxy_ynnOY[13] = { p_2_Jb4vy, p_2_Jb4vy, p_2_Jb4vy, 63, p_2_Jb4vy, p_2_Jb4vy, p_2_Jb4vy, p_2_Jb4vy, p_2_Jb4vy, 56, 17, p_2_Jb4vy, p_2_Jb4vy };
int proxy_ret_enwR0 = realsmith_PiJPn(&(p_0_1kjXA), &(p_1_Gvtw7), proxy_ynnOY);
return proxy_ret_enwR0;
}


unsigned int realsmith_bwJ9D(const char *str, unsigned int length)
{
 unsigned long hash = 0;
 unsigned char c;
 while (length--) {
  c = *str++;
  hash = (hash + (c << 4) + (c >> 4)) * 11;
 }
 return hash;
}
unsigned int realsmith_proxy_ZvfjM(char p_0_ZrgPR, unsigned int p_1_LsSyF) {
char proxy_zCXpQ[17] = { p_0_ZrgPR, p_0_ZrgPR, p_0_ZrgPR, 33, p_0_ZrgPR, p_0_ZrgPR, p_0_ZrgPR, 33, p_0_ZrgPR, 2, p_0_ZrgPR, p_0_ZrgPR, p_0_ZrgPR, 13, p_0_ZrgPR, 43, p_0_ZrgPR };
unsigned int proxy_ret_5dRrN = realsmith_bwJ9D(proxy_zCXpQ, p_1_LsSyF);
return proxy_ret_5dRrN;
}


__attribute__((used)) static const char *
realsmith_m7rco(const char *strp)
{
 char c;
 while ((c = *strp) != '\0' && !(1) && c != ',' && c != '-' &&
     c != '+')
  ++strp;
 return strp;
}
char realsmith_proxy_62AaG(char p_0_uvN2w) {
char proxy_5CVGb[12] = { 95, p_0_uvN2w, p_0_uvN2w, 83, p_0_uvN2w, p_0_uvN2w, 7, p_0_uvN2w, p_0_uvN2w, 98, p_0_uvN2w, p_0_uvN2w };
char * proxy_ret_THxzC = realsmith_m7rco(proxy_5CVGb);
return *proxy_ret_THxzC;
}


__attribute__((used)) static inline int realsmith_u69rU(int cyc, int mult, int shift)
{
 return (cyc * mult) >> shift;
}

long _funcptr_glFinishTextureSUNX_realsmith_S3HuG = 20;

__attribute__((used)) static int realsmith_S3HuG()
{
 int numFailed = 0;
 _funcptr_glFinishTextureSUNX_realsmith_S3HuG = (long)(1);
 if(!_funcptr_glFinishTextureSUNX_realsmith_S3HuG) ++numFailed;
 return numFailed;
}

unsigned long realsmith_GRshZ(const unsigned char *s)
{
  return (1) ? 2 : 1;
}
unsigned long realsmith_proxy_4X56f(unsigned char p_0_HgjMj) {
unsigned char proxy_7R9SW[16] = { 44, p_0_HgjMj, p_0_HgjMj, 37, p_0_HgjMj, p_0_HgjMj, p_0_HgjMj, 16, 18, 8, 65, 52, p_0_HgjMj, 7, p_0_HgjMj, 1 };
unsigned long proxy_ret_qnfR5 = realsmith_GRshZ(proxy_7R9SW);
return proxy_ret_qnfR5;
}


int realsmith_6TB05(char* source,char* dest)
    {
        int len;
        len=(1);
        (1);
        return len;
    }
int realsmith_proxy_tVUQF(char p_0_uwoTi, char p_1_Whpjb) {
char proxy_KGHw1[12] = { 41, p_0_uwoTi, 47, p_0_uwoTi, 9, 1, 15, 91, 50, 59, 44, 91 };
int proxy_ret_U7nZy = realsmith_6TB05(proxy_KGHw1, &(p_1_Whpjb));
return proxy_ret_U7nZy;
}


__attribute__((used)) static int realsmith_luiFh(int carrier)
{
 int a = carrier;
 a <<= 24;
 (1);
 return a;
}

unsigned long SIZE_MAX_realsmith_wbjcx = 6;

unsigned long realsmith_wbjcx(char *dst, const char *s, unsigned long len)
{
    if ((1)) {
        unsigned long hufflen = (1);
        if ((1)) {
            unsigned long head_len;
            if ((1)) {
                dst[0] = (char)(0x80 | hufflen);
                head_len = 1;
            } else {
                char head[8];
                head[0] = '\x80';
                head_len = ("0") - head;
                (1);
                (1);
            }
            return head_len + hufflen;
        }
    }
    return (1);
}
unsigned long realsmith_proxy_nacNZ(char p_0_hka8D, char p_1_T2iDo, unsigned long p_2_8lUxU) {
char proxy_Ibo2K[15] = { 47, p_0_hka8D, p_0_hka8D, 12, p_0_hka8D, p_0_hka8D, p_0_hka8D, 78, 33, 69, 30, p_0_hka8D, 71, 36, p_0_hka8D };
char proxy_2xfYP[14] = { 35, p_1_T2iDo, p_1_T2iDo, 22, 50, p_1_T2iDo, 23, 53, p_1_T2iDo, 4, 79, p_1_T2iDo, p_1_T2iDo, p_1_T2iDo };
unsigned long proxy_ret_jTV10 = realsmith_wbjcx(proxy_Ibo2K, proxy_2xfYP, p_2_8lUxU);
return proxy_ret_jTV10;
}


int LE_ADV_DIRECT_IND_realsmith_J17BA = 6;

int LE_ADV_IND_realsmith_J17BA = 0;

int LE_ADV_INVALID_realsmith_J17BA = 10;

int LE_ADV_NONCONN_IND_realsmith_J17BA = 6;

int LE_ADV_SCAN_IND_realsmith_J17BA = 12;

int LE_ADV_SCAN_RSP_realsmith_J17BA = 5;

int LE_EXT_ADV_CONN_IND_realsmith_J17BA = 14;

int LE_EXT_ADV_DIRECT_IND_realsmith_J17BA = 0;

int LE_EXT_ADV_LEGACY_PDU_realsmith_J17BA = 15;

int LE_EXT_ADV_NON_CONN_IND_realsmith_J17BA = -10;

int LE_EXT_ADV_SCAN_IND_realsmith_J17BA = 7;

int LE_EXT_ADV_SCAN_RSP_realsmith_J17BA = 2;

__attribute__((used)) static int realsmith_J17BA(int evt_type)
{
 if (evt_type & LE_EXT_ADV_LEGACY_PDU_realsmith_J17BA) {
  switch (evt_type) {
  case 132:
   return LE_ADV_IND_realsmith_J17BA;
  case 133:
   return LE_ADV_DIRECT_IND_realsmith_J17BA;
  case 131:
   return LE_ADV_SCAN_IND_realsmith_J17BA;
  case 130:
   return LE_ADV_NONCONN_IND_realsmith_J17BA;
  case 129:
  case 128:
   return LE_ADV_SCAN_RSP_realsmith_J17BA;
  }
  (1);
  return LE_ADV_INVALID_realsmith_J17BA;
 }
 if (evt_type & LE_EXT_ADV_CONN_IND_realsmith_J17BA) {
  if (evt_type & LE_EXT_ADV_DIRECT_IND_realsmith_J17BA)
   return LE_ADV_DIRECT_IND_realsmith_J17BA;
  return LE_ADV_IND_realsmith_J17BA;
 }
 if (evt_type & LE_EXT_ADV_SCAN_RSP_realsmith_J17BA)
  return LE_ADV_SCAN_RSP_realsmith_J17BA;
 if (evt_type & LE_EXT_ADV_SCAN_IND_realsmith_J17BA)
  return LE_ADV_SCAN_IND_realsmith_J17BA;
 if (evt_type == LE_EXT_ADV_NON_CONN_IND_realsmith_J17BA ||
     evt_type & LE_EXT_ADV_DIRECT_IND_realsmith_J17BA)
  return LE_ADV_NONCONN_IND_realsmith_J17BA;
 (1);
 return LE_ADV_INVALID_realsmith_J17BA;
}

__attribute__((used)) static inline int realsmith_6EYFP(const char *name)
{
 return (1) || name[0] == '_';
}
int realsmith_proxy_qqVMS(char p_0_o3lOu) {
int proxy_ret_atjf8 = realsmith_6EYFP(&(p_0_o3lOu));
return proxy_ret_atjf8;
}


__attribute__((used)) static int realsmith_01i8A(int minv, int maxv)
{
    return maxv == minv ? maxv : (1) % (maxv - minv) + minv;
}

__attribute__((used)) static int
realsmith_iKq97(const char *s)
{
 int v[4] = {0};
 int i = 0, x = 0;
 char c;
 const char *p = s;
 if (((1) > 15) || ((1) < 7))
  goto end;
 while ((c = *p++)) {
  if (c == '.') {
   i++;
   continue;
  }
  if (i > 3 || !(1))
   goto end;
  v[i] = v[i] * 10 + (c - '0');
 }
 for (i = 3; i >= 0; i--)
  if (v[i] > 0xff)
   goto end;
 x |= (v[0] << 24) | v[1] << 16 | v[2] << 8 | v[3];
end:
 if (x == 0) {
  (1);
  return -1;
 }
 return x;
}
int realsmith_proxy_rPp6I(char p_0_htMLc) {
char proxy_F4yDb[13] = { p_0_htMLc, 91, 23, p_0_htMLc, 37, p_0_htMLc, p_0_htMLc, p_0_htMLc, p_0_htMLc, p_0_htMLc, p_0_htMLc, 34, p_0_htMLc };
int proxy_ret_1prJI = realsmith_iKq97(proxy_F4yDb);
return proxy_ret_1prJI;
}


int SMP_AUTH_BONDING_realsmith_AGkrq = 10;

int SMP_AUTH_MITM_realsmith_AGkrq = -2;

int SMP_AUTH_NONE_realsmith_AGkrq = 8;

__attribute__((used)) static int realsmith_AGkrq(int sec_level)
{
 switch (sec_level) {
 case 130:
 case 129:
  return SMP_AUTH_MITM_realsmith_AGkrq | SMP_AUTH_BONDING_realsmith_AGkrq;
 case 128:
  return SMP_AUTH_BONDING_realsmith_AGkrq;
 default:
  return SMP_AUTH_NONE_realsmith_AGkrq;
 }
}

int GIT_ERROR_OS_realsmith_230wp = 12;

int _SC_PAGE_SIZE_realsmith_230wp = 7;

int realsmith_230wp(unsigned long *page_size)
{
 long sc_page_size = (1);
 if (sc_page_size < 0) {
  (1);
  return -1;
 }
 *page_size = (unsigned long) sc_page_size;
 return 0;
}
int realsmith_proxy_Kdx9f(unsigned long p_0_kwQcL) {
unsigned long proxy_TX2oA[13] = { 29, p_0_kwQcL, p_0_kwQcL, p_0_kwQcL, p_0_kwQcL, p_0_kwQcL, p_0_kwQcL, 52, p_0_kwQcL, 100, p_0_kwQcL, p_0_kwQcL, 93 };
int proxy_ret_u0HNd = realsmith_230wp(proxy_TX2oA);
return proxy_ret_u0HNd;
}


int current_vcpu_realsmith_z26kK = 17;

__attribute__((used)) static unsigned long realsmith_z26kK(void)
{
 unsigned long ip = 0;
 if ((1))
  ip = (1);
 return ip;
}

__attribute__((used)) static inline char *realsmith_6WV5t(const char *str)
{
 return str ? ("0") : ((void*)0);
}
char realsmith_proxy_65Ikv(char p_0_ACJc5) {
char proxy_imNvc[15] = { 50, p_0_ACJc5, p_0_ACJc5, p_0_ACJc5, p_0_ACJc5, p_0_ACJc5, p_0_ACJc5, 91, 44, 2, 90, 64, p_0_ACJc5, 56, p_0_ACJc5 };
char * proxy_ret_3ncmx = realsmith_6WV5t(proxy_imNvc);
return *proxy_ret_3ncmx;
}


int XEN_PCI_ERR_access_denied_realsmith_4akOJ = -7;

int XEN_PCI_ERR_dev_not_found_realsmith_4akOJ = 17;

int XEN_PCI_ERR_invalid_offset_realsmith_4akOJ = -8;

int XEN_PCI_ERR_not_implemented_realsmith_4akOJ = 16;

int XEN_PCI_ERR_success_realsmith_4akOJ = 13;

__attribute__((used)) static int realsmith_4akOJ(int err)
{
 switch (err) {
 case 128:
  return XEN_PCI_ERR_success_realsmith_4akOJ;
 case 131:
  return XEN_PCI_ERR_dev_not_found_realsmith_4akOJ;
 case 132:
  return XEN_PCI_ERR_invalid_offset_realsmith_4akOJ;
 case 130:
  return XEN_PCI_ERR_not_implemented_realsmith_4akOJ;
 case 129:
  return XEN_PCI_ERR_access_denied_realsmith_4akOJ;
 }
 return err;
}

int AV_CH_BACK_CENTER_realsmith_70frQ = 17;

int AV_CH_BACK_LEFT_realsmith_70frQ = 0;

int AV_CH_BACK_RIGHT_realsmith_70frQ = -1;

int AV_CH_FRONT_CENTER_realsmith_70frQ = 14;

int AV_CH_FRONT_LEFT_realsmith_70frQ = 5;

int AV_CH_FRONT_LEFT_OF_CENTER_realsmith_70frQ = -3;

int AV_CH_FRONT_RIGHT_realsmith_70frQ = 0;

int AV_CH_FRONT_RIGHT_OF_CENTER_realsmith_70frQ = 15;

int AV_CH_LOW_FREQUENCY_realsmith_70frQ = -9;

int AV_LOG_WARNING_realsmith_70frQ = -2;

__attribute__((used)) static int realsmith_70frQ(int *s, int bit)
{
    switch (bit) {
    case 2: return AV_CH_BACK_RIGHT_realsmith_70frQ;
    case 3:
        (1);
        break;
    case 4: return AV_CH_BACK_CENTER_realsmith_70frQ;
    case 5:
        (1);
        break;
    case 6: return AV_CH_BACK_LEFT_realsmith_70frQ;
    case 24: return AV_CH_LOW_FREQUENCY_realsmith_70frQ;
    case 26: return AV_CH_FRONT_RIGHT_realsmith_70frQ;
    case 27: return AV_CH_FRONT_RIGHT_OF_CENTER_realsmith_70frQ;
    case 28: return AV_CH_FRONT_CENTER_realsmith_70frQ;
    case 29: return AV_CH_FRONT_LEFT_OF_CENTER_realsmith_70frQ;
    case 30: return AV_CH_FRONT_LEFT_realsmith_70frQ;
    default:
        (1);
        break;
    }
    return 0;
}
int realsmith_proxy_PuBx6(int p_0_SVnmv, int p_1_rSrxJ) {
int proxy_ret_O2JNO = realsmith_70frQ(&(p_0_SVnmv), p_1_rSrxJ);
return proxy_ret_O2JNO;
}


long EPOC_TIME_realsmith_uytAf = 5;

__attribute__((used)) static int
realsmith_uytAf(int t, long ns)
{
 int fileTime;
 fileTime = t;
 fileTime *= 10000000;
 fileTime += ns / 100;
 fileTime += EPOC_TIME_realsmith_uytAf;
 return (fileTime);
}

unsigned int MPI_L2PCFG_CFG_SEL_MASK_realsmith_3ZGyl = 1;

int MPI_L2PCFG_CFG_TYPE_SHIFT_realsmith_3ZGyl = 18;

unsigned int MPI_L2PCFG_CFG_USEREG_MASK_realsmith_3ZGyl = 15;

unsigned int MPI_L2PCFG_DEVNUM_MASK_realsmith_3ZGyl = 15;

unsigned int MPI_L2PCFG_DEVNUM_SHIFT_realsmith_3ZGyl = 20;

unsigned int MPI_L2PCFG_FUNC_MASK_realsmith_3ZGyl = -6;

unsigned int MPI_L2PCFG_FUNC_SHIFT_realsmith_3ZGyl = -5;

int MPI_L2PCFG_REG_realsmith_3ZGyl = 15;

unsigned int MPI_L2PCFG_REG_MASK_realsmith_3ZGyl = 18;

unsigned int MPI_L2PCFG_REG_SHIFT_realsmith_3ZGyl = 16;

__attribute__((used)) static int realsmith_3ZGyl(int type, unsigned int busn,
        unsigned int devfn, int where)
{
 unsigned int slot, func, reg;
 unsigned int val;
 slot = (1);
 func = (1);
 reg = where >> 2;
 if (slot > (MPI_L2PCFG_DEVNUM_MASK_realsmith_3ZGyl >> MPI_L2PCFG_DEVNUM_SHIFT_realsmith_3ZGyl))
  return 1;
 if (func > (MPI_L2PCFG_FUNC_MASK_realsmith_3ZGyl >> MPI_L2PCFG_FUNC_SHIFT_realsmith_3ZGyl))
  return 1;
 if (reg > (MPI_L2PCFG_REG_MASK_realsmith_3ZGyl >> MPI_L2PCFG_REG_SHIFT_realsmith_3ZGyl))
  return 1;
 val = (reg << MPI_L2PCFG_REG_SHIFT_realsmith_3ZGyl);
 val |= (func << MPI_L2PCFG_FUNC_SHIFT_realsmith_3ZGyl);
 val |= (slot << MPI_L2PCFG_DEVNUM_SHIFT_realsmith_3ZGyl);
 val |= MPI_L2PCFG_CFG_USEREG_MASK_realsmith_3ZGyl;
 val |= MPI_L2PCFG_CFG_SEL_MASK_realsmith_3ZGyl;
 if (type != 0) {
  val |= (1 << MPI_L2PCFG_CFG_TYPE_SHIFT_realsmith_3ZGyl);
 }
 (1);
 return 0;
}

int A6XX_RB_MRT_FLAG_BUFFER_PITCH_ARRAY_PITCH__MASK_realsmith_NquDV = -3;

int A6XX_RB_MRT_FLAG_BUFFER_PITCH_ARRAY_PITCH__SHIFT_realsmith_NquDV = 10;

__attribute__((used)) static inline int realsmith_NquDV(int val)
{
 return ((val >> 5) << A6XX_RB_MRT_FLAG_BUFFER_PITCH_ARRAY_PITCH__SHIFT_realsmith_NquDV) & A6XX_RB_MRT_FLAG_BUFFER_PITCH_ARRAY_PITCH__MASK_realsmith_NquDV;
}

long ERROR_SUCCESS_realsmith_Zeh51 = -7;

__attribute__((used)) static long realsmith_Zeh51( int hdb )
{
    long r = (1);
    (1);
    return r;
}

__attribute__((used)) static inline int realsmith_Hb94H(int dB)
{
 if (dB < -96)
  dB = -96;
 else if (dB > 8)
  dB = 8;
 return (dB + 119) << 9;
}

__attribute__((used)) static inline long
realsmith_rZ1U7(long a, long b)
{
        return (a > b ? a : b);
}

int A2XX_CP_SET_MARKER_0_MARKER__MASK_realsmith_JD05o = 1;

int A2XX_CP_SET_MARKER_0_MARKER__SHIFT_realsmith_JD05o = 16;

__attribute__((used)) static inline int realsmith_JD05o(int val)
{
 return ((val) << A2XX_CP_SET_MARKER_0_MARKER__SHIFT_realsmith_JD05o) & A2XX_CP_SET_MARKER_0_MARKER__MASK_realsmith_JD05o;
}

__attribute__((used)) static unsigned long realsmith_Elwll(const char *s)
{
 unsigned char c = (unsigned char)*s++;
 if (c <= 0x7F) {
  return 1;
 } else if (c <= 0xC1) {
  return 0;
 } else if (c <= 0xDF) {
  if (((unsigned char)*s++ & 0xC0) != 0x80)
   return 0;
  return 2;
 } else if (c <= 0xEF) {
  if (c == 0xE0 && (unsigned char)*s < 0xA0)
   return 0;
  if (c == 0xED && (unsigned char)*s > 0x9F)
   return 0;
  if (((unsigned char)*s++ & 0xC0) != 0x80)
   return 0;
  if (((unsigned char)*s++ & 0xC0) != 0x80)
   return 0;
  return 3;
 } else if (c <= 0xF4) {
  if (c == 0xF0 && (unsigned char)*s < 0x90)
   return 0;
  if (c == 0xF4 && (unsigned char)*s > 0x8F)
   return 0;
  if (((unsigned char)*s++ & 0xC0) != 0x80)
   return 0;
  if (((unsigned char)*s++ & 0xC0) != 0x80)
   return 0;
  if (((unsigned char)*s++ & 0xC0) != 0x80)
   return 0;
  return 4;
 } else {
  return 0;
 }
}
unsigned long realsmith_proxy_dtgev(char p_0_p1aqS) {
unsigned long proxy_ret_cW3Bl = realsmith_Elwll(&(p_0_p1aqS));
return proxy_ret_cW3Bl;
}


int L3C_ESR_DATATAG_MASK_realsmith_EJ4ip = 14;

__attribute__((used)) static int realsmith_EJ4ip(int l3cesr, int l3celr)
{
 if (l3cesr & L3C_ESR_DATATAG_MASK_realsmith_EJ4ip) {
  switch ((1)) {
  case 0x13C:
  case 0x0B4:
  case 0x007:
  case 0x00D:
  case 0x00E:
  case 0x019:
  case 0x01A:
  case 0x01C:
  case 0x04E:
  case 0x041:
   return 1;
  }
 } else if ((1) == 9)
  return 1;
 return 0;
}

long _funcptr_glColorSubTable_realsmith_lsz9L = 12;

long _funcptr_glColorTable_realsmith_lsz9L = 15;

long _funcptr_glColorTableParameterfv_realsmith_lsz9L = -4;

long _funcptr_glColorTableParameteriv_realsmith_lsz9L = 8;

long _funcptr_glConvolutionFilter1D_realsmith_lsz9L = 19;

long _funcptr_glConvolutionFilter2D_realsmith_lsz9L = 15;

long _funcptr_glConvolutionParameterf_realsmith_lsz9L = 18;

long _funcptr_glConvolutionParameterfv_realsmith_lsz9L = -7;

long _funcptr_glConvolutionParameteri_realsmith_lsz9L = 10;

long _funcptr_glConvolutionParameteriv_realsmith_lsz9L = 18;

long _funcptr_glCopyColorSubTable_realsmith_lsz9L = -10;

long _funcptr_glCopyColorTable_realsmith_lsz9L = 9;

long _funcptr_glCopyConvolutionFilter1D_realsmith_lsz9L = -8;

long _funcptr_glCopyConvolutionFilter2D_realsmith_lsz9L = 7;

long _funcptr_glGetColorTable_realsmith_lsz9L = -5;

long _funcptr_glGetColorTableParameterfv_realsmith_lsz9L = 11;

long _funcptr_glGetColorTableParameteriv_realsmith_lsz9L = -5;

long _funcptr_glGetConvolutionFilter_realsmith_lsz9L = 13;

long _funcptr_glGetConvolutionParameterfv_realsmith_lsz9L = -4;

long _funcptr_glGetConvolutionParameteriv_realsmith_lsz9L = -2;

long _funcptr_glGetHistogram_realsmith_lsz9L = -6;

long _funcptr_glGetHistogramParameterfv_realsmith_lsz9L = 12;

long _funcptr_glGetHistogramParameteriv_realsmith_lsz9L = -1;

long _funcptr_glGetMinmax_realsmith_lsz9L = 14;

long _funcptr_glGetMinmaxParameterfv_realsmith_lsz9L = 5;

long _funcptr_glGetMinmaxParameteriv_realsmith_lsz9L = -4;

long _funcptr_glGetSeparableFilter_realsmith_lsz9L = 8;

long _funcptr_glHistogram_realsmith_lsz9L = 20;

long _funcptr_glMinmax_realsmith_lsz9L = -9;

long _funcptr_glResetHistogram_realsmith_lsz9L = 12;

long _funcptr_glResetMinmax_realsmith_lsz9L = 5;

long _funcptr_glSeparableFilter2D_realsmith_lsz9L = 19;

__attribute__((used)) static int realsmith_lsz9L()
{
 int numFailed = 0;
 _funcptr_glColorSubTable_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glColorSubTable_realsmith_lsz9L) ++numFailed;
 _funcptr_glColorTable_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glColorTable_realsmith_lsz9L) ++numFailed;
 _funcptr_glColorTableParameterfv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glColorTableParameterfv_realsmith_lsz9L) ++numFailed;
 _funcptr_glColorTableParameteriv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glColorTableParameteriv_realsmith_lsz9L) ++numFailed;
 _funcptr_glConvolutionFilter1D_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glConvolutionFilter1D_realsmith_lsz9L) ++numFailed;
 _funcptr_glConvolutionFilter2D_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glConvolutionFilter2D_realsmith_lsz9L) ++numFailed;
 _funcptr_glConvolutionParameterf_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glConvolutionParameterf_realsmith_lsz9L) ++numFailed;
 _funcptr_glConvolutionParameterfv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glConvolutionParameterfv_realsmith_lsz9L) ++numFailed;
 _funcptr_glConvolutionParameteri_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glConvolutionParameteri_realsmith_lsz9L) ++numFailed;
 _funcptr_glConvolutionParameteriv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glConvolutionParameteriv_realsmith_lsz9L) ++numFailed;
 _funcptr_glCopyColorSubTable_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glCopyColorSubTable_realsmith_lsz9L) ++numFailed;
 _funcptr_glCopyColorTable_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glCopyColorTable_realsmith_lsz9L) ++numFailed;
 _funcptr_glCopyConvolutionFilter1D_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glCopyConvolutionFilter1D_realsmith_lsz9L) ++numFailed;
 _funcptr_glCopyConvolutionFilter2D_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glCopyConvolutionFilter2D_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetColorTable_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetColorTable_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetColorTableParameterfv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetColorTableParameterfv_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetColorTableParameteriv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetColorTableParameteriv_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetConvolutionFilter_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetConvolutionFilter_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetConvolutionParameterfv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetConvolutionParameterfv_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetConvolutionParameteriv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetConvolutionParameteriv_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetHistogram_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetHistogram_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetHistogramParameterfv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetHistogramParameterfv_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetHistogramParameteriv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetHistogramParameteriv_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetMinmax_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetMinmax_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetMinmaxParameterfv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetMinmaxParameterfv_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetMinmaxParameteriv_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetMinmaxParameteriv_realsmith_lsz9L) ++numFailed;
 _funcptr_glGetSeparableFilter_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glGetSeparableFilter_realsmith_lsz9L) ++numFailed;
 _funcptr_glHistogram_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glHistogram_realsmith_lsz9L) ++numFailed;
 _funcptr_glMinmax_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glMinmax_realsmith_lsz9L) ++numFailed;
 _funcptr_glResetHistogram_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glResetHistogram_realsmith_lsz9L) ++numFailed;
 _funcptr_glResetMinmax_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glResetMinmax_realsmith_lsz9L) ++numFailed;
 _funcptr_glSeparableFilter2D_realsmith_lsz9L = (long)(1);
 if(!_funcptr_glSeparableFilter2D_realsmith_lsz9L) ++numFailed;
 return numFailed;
}

__attribute__((used)) static inline int realsmith_p2Tx3(int v)
{
 return (v & 0xffff) << 2;
}

int STT_FUNC_realsmith_mx1D0 = 14;

int STT_OBJECT_realsmith_mx1D0 = 14;

int realsmith_mx1D0(char type)
{
 type = ('a');
 return (type == 't' || type == 'w') ? STT_FUNC_realsmith_mx1D0 : STT_OBJECT_realsmith_mx1D0;
}

int LIBINPUT_CONFIG_SEND_EVENTS_DISABLED_realsmith_7pjmY = 3;

int LIBINPUT_CONFIG_SEND_EVENTS_DISABLED_ON_EXTERNAL_MOUSE_realsmith_7pjmY = 11;

int LIBINPUT_CONFIG_SEND_EVENTS_ENABLED_realsmith_7pjmY = -3;

__attribute__((used)) static int realsmith_7pjmY(const char *name) {
 if (!(1)) {
  return LIBINPUT_CONFIG_SEND_EVENTS_ENABLED_realsmith_7pjmY;
 } else if (!(1)) {
  return LIBINPUT_CONFIG_SEND_EVENTS_DISABLED_ON_EXTERNAL_MOUSE_realsmith_7pjmY;
 } else if (!(1)) {
  return LIBINPUT_CONFIG_SEND_EVENTS_DISABLED_realsmith_7pjmY;
 }
 return -1;
}
int realsmith_proxy_1QEQg(char p_0_mZzNm) {
int proxy_ret_F50To = realsmith_7pjmY(&(p_0_mZzNm));
return proxy_ret_F50To;
}


__attribute__((used)) static int realsmith_nHcAa(int cpsr)
{
 return
  ((cpsr & 0x06000000) >> 25) |
  ((cpsr & 0x0000FC00) >> 8);
}

int FASTTRAP_T_COMMON_realsmith_boagh = 13;

int FASTTRAP_T_INV_realsmith_boagh = 12;

int FASTTRAP_T_MOV_PC_REG_realsmith_boagh = -2;

long REG_PC_realsmith_boagh = -2;

__attribute__((used)) static
int realsmith_boagh(int instr)
{
 int op1 = (1), op2 = (1), op3 = (1);
 if (op1 == 0x11 || op1 == 0x13 || op1 == 0x15 || op1 == 0x17) {
  if ((1) != REG_PC_realsmith_boagh && (1) != REG_PC_realsmith_boagh)
   return FASTTRAP_T_COMMON_realsmith_boagh;
  return FASTTRAP_T_INV_realsmith_boagh;
 }
 if (op1 == 0x1A && op2 == 0 && op3 == 0 && (1) == REG_PC_realsmith_boagh)
  return FASTTRAP_T_MOV_PC_REG_realsmith_boagh;
 if ((1) != REG_PC_realsmith_boagh && (1) != REG_PC_realsmith_boagh && (1) != REG_PC_realsmith_boagh)
  return FASTTRAP_T_COMMON_realsmith_boagh;
 return FASTTRAP_T_INV_realsmith_boagh;
}

int AUX_MU_IO_REG_realsmith_kxDtU = 13;

int AUX_MU_LSR_REG_realsmith_kxDtU = 7;

char realsmith_kxDtU ( void )
{
 while(1) {
  if((1)&0x01)
   break;
 }
 return((1)&0xFF);
}

__attribute__((used)) static inline unsigned int realsmith_hiqF9(unsigned int channel)
{
 return (channel & 0x3) << 8;
}

int
realsmith_ZdwY5(long* string, unsigned long size)
{
   int state=0;
   unsigned long char_index=0;
   if ((1) != 0 &&
      (char_index == size || string[char_index] == 0))
      return state ;
   return 0;
}
int realsmith_proxy_wePPT(long p_0_KbZ8K, unsigned long p_1_xUBcC) {
long proxy_VKFkP[15] = { 86, p_0_KbZ8K, 53, p_0_KbZ8K, p_0_KbZ8K, 76, p_0_KbZ8K, p_0_KbZ8K, 11, p_0_KbZ8K, 75, p_0_KbZ8K, p_0_KbZ8K, 81, p_0_KbZ8K };
int proxy_ret_Fth0T = realsmith_ZdwY5(proxy_VKFkP, p_1_xUBcC);
return proxy_ret_Fth0T;
}


__attribute__((used)) static int realsmith_IvXFT(int track)
{
 return (track & 0x000000f0) >> 4;
}

__attribute__((used)) static int realsmith_Jnptk(char c)
{
    if('0' <= c && c <= '9')
        return c-'0';
    if('a' <= c && c <= 'f')
        return c+10-'a';
    if('A' <= c && c <= 'F')
        return c+10-'A';
    return -1;
}

__attribute__ ((weak))
int realsmith_25dH1(int current_matrix[]) {
    int changed = 1;
    return changed;
}
int realsmith_proxy_qVZ6a(int p_0_30QWt) {
int proxy_EJRHu[19] = { p_0_30QWt, p_0_30QWt, p_0_30QWt, 95, p_0_30QWt, p_0_30QWt, 72, 79, 92, 1, 17, 59, 53, 100, p_0_30QWt, 98, p_0_30QWt, 25, 17 };
int proxy_ret_wz0gQ = realsmith_25dH1(proxy_EJRHu);
return proxy_ret_wz0gQ;
}


int OPJ_TRUE_realsmith_hgzRl = 8;

__attribute__((used)) static int realsmith_hgzRl(int * p_j2k,
                                      int *p_stream,
                                      int * p_manager)
{
    (void)p_j2k;
    (void)p_stream;
    (void)p_manager;
    return OPJ_TRUE_realsmith_hgzRl;
}
int realsmith_proxy_JEuwk(int p_0_rCDHF, int p_1_rxXo2, int p_2_rKiI0) {
int proxy_Ge3XP[20] = { p_0_rCDHF, 31, 17, 74, 94, 69, p_0_rCDHF, 11, p_0_rCDHF, p_0_rCDHF, p_0_rCDHF, p_0_rCDHF, 54, p_0_rCDHF, p_0_rCDHF, 86, 1, 93, p_0_rCDHF, p_0_rCDHF };
int proxy_pGgMu[10] = { 81, 82, p_2_rKiI0, 24, 65, 93, p_2_rKiI0, p_2_rKiI0, p_2_rKiI0, p_2_rKiI0 };
int proxy_ret_w0WVB = realsmith_hgzRl(proxy_Ge3XP, &(p_1_rxXo2), proxy_pGgMu);
return proxy_ret_w0WVB;
}


__attribute__((used)) static inline int realsmith_ktBLo(int a)
{
 return a >> 2 & 1;
}

__attribute__((used)) static int realsmith_jSyDV(char const*str)
{
 return str && ('a') == 'r' && (1) == 2
  && '0' <= str[1] && str[1] <= '7';
}
int realsmith_proxy_pcL4T(char p_0_2Zf7N) {
int proxy_ret_uU03q = realsmith_jSyDV(&(p_0_2Zf7N));
return proxy_ret_uU03q;
}


int FASTTRAP_T_COMMON_realsmith_NSwoq = 14;

int FASTTRAP_T_INV_realsmith_NSwoq = 6;

long REG_PC_realsmith_NSwoq = 2;

__attribute__((used)) static
int realsmith_NSwoq(int instr)
{
 if ((1) != REG_PC_realsmith_NSwoq)
  return FASTTRAP_T_COMMON_realsmith_NSwoq;
 return FASTTRAP_T_INV_realsmith_NSwoq;
}

__attribute__((used)) static int
realsmith_zTFaq(int width, const char *string)
{
    int need = (1);
    int left;
    left = (width - need) / 2 - 1;
    if (left < 0)
 left = 0;
    return left;
}
int realsmith_proxy_yfCVS(int p_0_C6uUU, char p_1_kGiJl) {
char proxy_fHIqW[13] = { 90, 67, 90, p_1_kGiJl, p_1_kGiJl, p_1_kGiJl, p_1_kGiJl, 48, 97, 46, p_1_kGiJl, p_1_kGiJl, 3 };
int proxy_ret_cIG7Y = realsmith_zTFaq(p_0_C6uUU, proxy_fHIqW);
return proxy_ret_cIG7Y;
}


int PPB_DONTWAIT_realsmith_9leW4 = 1;

__attribute__((used)) static int
realsmith_9leW4(int dev)
{
 int ppbus = (1);
 static int testbyte_realsmith_9leW4[18] = {
  0x55,
  0xaa,
  0xfe, 0xfd, 0xfb, 0xf7,
  0xef, 0xdf, 0xbf, 0x7f,
  0x01, 0x02, 0x04, 0x08,
  0x10, 0x20, 0x40, 0x80
 };
 int i, error, status;
 status = 1;
 (1);
 if ((error = (1))) {
  (1);
  (1);
  return (0);
 }
 for (i = 0; i < 18 && status; i++)
  if (!(1)) {
   status = 0;
   break;
  }
 (1);
 (1);
 (1);
 (1);
 return (status);
}

int SQLITE_ANY_realsmith_p5wgr = 0;

int SQLITE_NOMEM_realsmith_p5wgr = 1;

int SQLITE_OK_realsmith_p5wgr = -7;

int fts3TokenizerFunc_realsmith_p5wgr = 0;

int intTestFunc_realsmith_p5wgr = 16;

int testFunc_realsmith_p5wgr = 18;

int realsmith_p5wgr(
  int *db,
  int *pHash,
  const char *zName
){
  int rc = SQLITE_OK_realsmith_p5wgr;
  void *p = (void *)pHash;
  const int any = SQLITE_ANY_realsmith_p5wgr;
  if( SQLITE_OK_realsmith_p5wgr==rc ){
    rc = (1);
  }
  if( SQLITE_OK_realsmith_p5wgr==rc ){
    rc = (1);
  }
  return rc;
}
int realsmith_proxy_Cugah(int p_0_WVlZu, int p_1_17Y9B, char p_2_VgyBy) {
int proxy_a3PmJ[17] = { 5, 90, 56, p_0_WVlZu, 66, 76, 79, 60, 87, 85, 5, 64, 93, 89, 7, 57, 2 };
int proxy_ret_GuZRh = realsmith_p5wgr(proxy_a3PmJ, &(p_1_17Y9B), &(p_2_VgyBy));
return proxy_ret_GuZRh;
}


int ENOMEM_realsmith_iDL2m = 0;

int HFI1_MAX_ACTIVE_WORKQUEUE_ENTRIES_realsmith_iDL2m = -6;

int WQ_CPU_INTENSIVE_realsmith_iDL2m = 20;

int WQ_HIGHPRI_realsmith_iDL2m = -8;

int WQ_MEM_RECLAIM_realsmith_iDL2m = 10;

int WQ_SYSFS_realsmith_iDL2m = 13;

int opfn_wq_realsmith_iDL2m = 6;

int realsmith_iDL2m(void)
{
 opfn_wq_realsmith_iDL2m = (1);
 if (!opfn_wq_realsmith_iDL2m)
  return -ENOMEM_realsmith_iDL2m;
 return 0;
}

unsigned long realsmith_bS2WK(const char * s, unsigned long count)
{
 const char *sc;
 for (sc = s; count-- && *sc != '\0'; ++sc)
               ;
 return sc - s;
}
unsigned long realsmith_proxy_5Berf(char p_0_dHXfK, unsigned long p_1_hPE8a) {
char proxy_x6gG0[15] = { 70, p_0_dHXfK, 95, p_0_dHXfK, p_0_dHXfK, p_0_dHXfK, p_0_dHXfK, p_0_dHXfK, 57, 31, 11, 18, 94, p_0_dHXfK, 35 };
unsigned long proxy_ret_XJ68P = realsmith_bS2WK(proxy_x6gG0, p_1_hPE8a);
return proxy_ret_XJ68P;
}


int FASTTRAP_T_COMMON_realsmith_kauN8 = -4;

int FASTTRAP_T_INV_realsmith_kauN8 = 16;

long REG_PC_realsmith_kauN8 = 12;

__attribute__((used)) static
int realsmith_kauN8(int instr)
{
 int op1 = (1);
 if ((op1 & 0x4) == 0) {
  if ((1) != REG_PC_realsmith_kauN8 && (1) != REG_PC_realsmith_kauN8 && (1) != REG_PC_realsmith_kauN8)
   return FASTTRAP_T_COMMON_realsmith_kauN8;
 } else {
  if ((1) != REG_PC_realsmith_kauN8 && (1) != REG_PC_realsmith_kauN8)
   return FASTTRAP_T_COMMON_realsmith_kauN8;
 }
 return FASTTRAP_T_INV_realsmith_kauN8;
}

int CLOCK_TICK_RATE_realsmith_UHyid = 13;

int pas_lock_realsmith_UHyid = 2;

int pcm_channels_realsmith_UHyid = 0;

int pcm_filter_realsmith_UHyid = -4;

int pcm_speed_realsmith_UHyid = 15;

__attribute__((used)) static int realsmith_UHyid(int arg)
{
 int foo, tmp;
 unsigned long flags;
 if (arg == 0)
  return pcm_speed_realsmith_UHyid;
 if (arg > 44100)
  arg = 44100;
 if (arg < 5000)
  arg = 5000;
 if (pcm_channels_realsmith_UHyid & 2)
 {
  foo = ((CLOCK_TICK_RATE_realsmith_UHyid / 2) + (arg / 2)) / arg;
  arg = ((CLOCK_TICK_RATE_realsmith_UHyid / 2) + (foo / 2)) / foo;
 }
 else
 {
  foo = (CLOCK_TICK_RATE_realsmith_UHyid + (arg / 2)) / arg;
  arg = (CLOCK_TICK_RATE_realsmith_UHyid + (foo / 2)) / foo;
 }
 pcm_speed_realsmith_UHyid = arg;
 tmp = (1);
 tmp &= 0xe0;
 if (pcm_speed_realsmith_UHyid >= 2 * 17897)
  tmp |= 0x01;
 else if (pcm_speed_realsmith_UHyid >= 2 * 15909)
  tmp |= 0x02;
 else if (pcm_speed_realsmith_UHyid >= 2 * 11931)
  tmp |= 0x09;
 else if (pcm_speed_realsmith_UHyid >= 2 * 8948)
  tmp |= 0x11;
 else if (pcm_speed_realsmith_UHyid >= 2 * 5965)
  tmp |= 0x19;
 else if (pcm_speed_realsmith_UHyid >= 2 * 2982)
  tmp |= 0x04;
 pcm_filter_realsmith_UHyid = tmp;
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 return pcm_speed_realsmith_UHyid;
}

long processing_template_decl_realsmith_L1HXk = 13;

__attribute__((used)) static int
realsmith_L1HXk (long t1, long t2, int allow_redeclaration)
{
  long d1;
  long d2;
  long max1, max2;
  if (t1 == t2)
    return 1;
  if (!(1))
    return 0;
  d1 = (1);
  d2 = (1);
  if (d1 == d2)
    return 1;
  if (!d1 || !d2)
    return allow_redeclaration;
  if (!(1))
    return 0;
  max1 = (1);
  max2 = (1);
  if (processing_template_decl_realsmith_L1HXk && !(1)
      && !(1)
      && !(1))
    {
      max1 = (1);
      max2 = (1);
    }
  if (!(1))
    return 0;
  return 1;
}

int DIST_STATES_realsmith_Fks4P = 19;

long MATCH_LEN_MIN_realsmith_Fks4P = -10;

__attribute__((used)) static inline long realsmith_Fks4P(long len)
{
 return len < DIST_STATES_realsmith_Fks4P + MATCH_LEN_MIN_realsmith_Fks4P
   ? len - MATCH_LEN_MIN_realsmith_Fks4P : DIST_STATES_realsmith_Fks4P - 1;
}

int MDP5_WB_CSC_MATRIX_COEFF_0_COEFF_11__MASK_realsmith_8dqTV = 8;

int MDP5_WB_CSC_MATRIX_COEFF_0_COEFF_11__SHIFT_realsmith_8dqTV = 13;

__attribute__((used)) static inline int realsmith_8dqTV(int val)
{
 return ((val) << MDP5_WB_CSC_MATRIX_COEFF_0_COEFF_11__SHIFT_realsmith_8dqTV) & MDP5_WB_CSC_MATRIX_COEFF_0_COEFF_11__MASK_realsmith_8dqTV;
}

int PDF_TOK_ENDOBJ_realsmith_UuVtt = 18;

int PDF_TOK_ENDSTREAM_realsmith_UuVtt = -9;

int PDF_TOK_ERROR_realsmith_UuVtt = 17;

int PDF_TOK_FALSE_realsmith_UuVtt = 7;

int PDF_TOK_KEYWORD_realsmith_UuVtt = 18;

int PDF_TOK_NULL_realsmith_UuVtt = 7;

int PDF_TOK_OBJ_realsmith_UuVtt = 2;

int PDF_TOK_R_realsmith_UuVtt = 5;

int PDF_TOK_STARTXREF_realsmith_UuVtt = -8;

int PDF_TOK_STREAM_realsmith_UuVtt = 11;

int PDF_TOK_TRAILER_realsmith_UuVtt = 12;

int PDF_TOK_TRUE_realsmith_UuVtt = -1;

int PDF_TOK_XREF_realsmith_UuVtt = 1;

__attribute__((used)) static int
realsmith_UuVtt(char *key)
{
 switch (*key)
 {
 case 'R':
  if (!(1)) return PDF_TOK_R_realsmith_UuVtt;
  break;
 case 't':
  if (!(1)) return PDF_TOK_TRUE_realsmith_UuVtt;
  if (!(1)) return PDF_TOK_TRAILER_realsmith_UuVtt;
  break;
 case 'f':
  if (!(1)) return PDF_TOK_FALSE_realsmith_UuVtt;
  break;
 case 'n':
  if (!(1)) return PDF_TOK_NULL_realsmith_UuVtt;
  break;
 case 'o':
  if (!(1)) return PDF_TOK_OBJ_realsmith_UuVtt;
  break;
 case 'e':
  if (!(1)) return PDF_TOK_ENDOBJ_realsmith_UuVtt;
  if (!(1)) return PDF_TOK_ENDSTREAM_realsmith_UuVtt;
  break;
 case 's':
  if (!(1)) return PDF_TOK_STREAM_realsmith_UuVtt;
  if (!(1)) return PDF_TOK_STARTXREF_realsmith_UuVtt;
  break;
 case 'x':
  if (!(1)) return PDF_TOK_XREF_realsmith_UuVtt;
  break;
 }
 while (*key)
 {
  if (!(1))
   return PDF_TOK_ERROR_realsmith_UuVtt;
  ++key;
 }
 return PDF_TOK_KEYWORD_realsmith_UuVtt;
}
int realsmith_proxy_9Duel(char p_0_1ga6H) {
char proxy_a9oNI[19] = { p_0_1ga6H, 100, p_0_1ga6H, 0, p_0_1ga6H, 25, p_0_1ga6H, 87, 24, 3, p_0_1ga6H, 77, p_0_1ga6H, p_0_1ga6H, 66, p_0_1ga6H, p_0_1ga6H, 99, 26 };
int proxy_ret_CiB7K = realsmith_UuVtt(proxy_a9oNI);
return proxy_ret_CiB7K;
}


int SQLITE_INTEGER_realsmith_Idy3R = -2;

__attribute__((used)) static int realsmith_Idy3R(int *pVal, int iDefault){
  if( pVal ){
    int eType = (1);
    if( eType==SQLITE_INTEGER_realsmith_Idy3R ){
      return (1);
    }
  }
  return iDefault;
}
int realsmith_proxy_LGCmE(int p_0_FXQ34, int p_1_fpwZ4) {
int proxy_3xnrc[13] = { 93, p_0_FXQ34, 65, p_0_FXQ34, 8, 93, p_0_FXQ34, p_0_FXQ34, p_0_FXQ34, 77, 29, p_0_FXQ34, p_0_FXQ34 };
int proxy_ret_4iQ4h = realsmith_Idy3R(proxy_3xnrc, p_1_fpwZ4);
return proxy_ret_4iQ4h;
}


__attribute__((used)) static inline int realsmith_asafu(const int seq1, const int seq2)
{
 return (long)((seq2 << 16) - (seq1 << 16)) > 0;
}

long NULL_RTX_realsmith_AyXA6 = 16;

long USE_realsmith_AyXA6 = 1;

__attribute__((used)) static long
realsmith_AyXA6 (int bb, int skip_use_p)
{
  long insn = (1);
  long head = (1);
  while ((1)
  || (1)
  || (skip_use_p
      && (1)
      && (1) == USE_realsmith_AyXA6))
    {
      if (insn == head)
 return NULL_RTX_realsmith_AyXA6;
      insn = (1);
    }
  if ((1))
    return NULL_RTX_realsmith_AyXA6;
  return insn;
}

int VC_CONTAINER_NET_ERROR_ACCESS_DENIED_realsmith_BwL19 = 18;

int VC_CONTAINER_NET_ERROR_CONNECTION_LOST_realsmith_BwL19 = 19;

int VC_CONTAINER_NET_ERROR_CONNECTION_REFUSED_realsmith_BwL19 = -6;

int VC_CONTAINER_NET_ERROR_GENERAL_realsmith_BwL19 = 7;

int VC_CONTAINER_NET_ERROR_INVALID_PARAMETER_realsmith_BwL19 = -6;

int VC_CONTAINER_NET_ERROR_INVALID_SOCKET_realsmith_BwL19 = 6;

int VC_CONTAINER_NET_ERROR_IN_PROGRESS_realsmith_BwL19 = -8;

int VC_CONTAINER_NET_ERROR_IN_USE_realsmith_BwL19 = -2;

int VC_CONTAINER_NET_ERROR_NETWORK_realsmith_BwL19 = 20;

int VC_CONTAINER_NET_ERROR_NOT_CONNECTED_realsmith_BwL19 = 2;

int VC_CONTAINER_NET_ERROR_NO_MEMORY_realsmith_BwL19 = 15;

int VC_CONTAINER_NET_ERROR_TIMED_OUT_realsmith_BwL19 = 17;

int VC_CONTAINER_NET_ERROR_TOO_BIG_realsmith_BwL19 = 18;

int VC_CONTAINER_NET_ERROR_WOULD_BLOCK_realsmith_BwL19 = 2;

int errno_realsmith_BwL19 = 13;

int realsmith_BwL19()
{
   switch (errno_realsmith_BwL19)
   {
   case 153: return VC_CONTAINER_NET_ERROR_ACCESS_DENIED_realsmith_BwL19;
   case 145: return VC_CONTAINER_NET_ERROR_INVALID_PARAMETER_realsmith_BwL19;
   case 141: return VC_CONTAINER_NET_ERROR_INVALID_PARAMETER_realsmith_BwL19;
   case 139: return VC_CONTAINER_NET_ERROR_TOO_BIG_realsmith_BwL19;
   case 128: return VC_CONTAINER_NET_ERROR_WOULD_BLOCK_realsmith_BwL19;
   case 142: return VC_CONTAINER_NET_ERROR_IN_PROGRESS_realsmith_BwL19;
   case 150: return VC_CONTAINER_NET_ERROR_IN_PROGRESS_realsmith_BwL19;
   case 152: return VC_CONTAINER_NET_ERROR_IN_USE_realsmith_BwL19;
   case 151: return VC_CONTAINER_NET_ERROR_INVALID_PARAMETER_realsmith_BwL19;
   case 137: return VC_CONTAINER_NET_ERROR_NETWORK_realsmith_BwL19;
   case 135: return VC_CONTAINER_NET_ERROR_NETWORK_realsmith_BwL19;
   case 136: return VC_CONTAINER_NET_ERROR_CONNECTION_LOST_realsmith_BwL19;
   case 149: return VC_CONTAINER_NET_ERROR_CONNECTION_LOST_realsmith_BwL19;
   case 147: return VC_CONTAINER_NET_ERROR_CONNECTION_LOST_realsmith_BwL19;
   case 134: return VC_CONTAINER_NET_ERROR_NO_MEMORY_realsmith_BwL19;
   case 133: return VC_CONTAINER_NET_ERROR_NOT_CONNECTED_realsmith_BwL19;
   case 132: return VC_CONTAINER_NET_ERROR_CONNECTION_LOST_realsmith_BwL19;
   case 130: return VC_CONTAINER_NET_ERROR_TIMED_OUT_realsmith_BwL19;
   case 148: return VC_CONTAINER_NET_ERROR_CONNECTION_REFUSED_realsmith_BwL19;
   case 140: return VC_CONTAINER_NET_ERROR_INVALID_PARAMETER_realsmith_BwL19;
   case 138: return VC_CONTAINER_NET_ERROR_INVALID_PARAMETER_realsmith_BwL19;
   case 144: return VC_CONTAINER_NET_ERROR_NETWORK_realsmith_BwL19;
   case 143: return VC_CONTAINER_NET_ERROR_NETWORK_realsmith_BwL19;
   case 129: return VC_CONTAINER_NET_ERROR_NO_MEMORY_realsmith_BwL19;
   case 146: return VC_CONTAINER_NET_ERROR_NO_MEMORY_realsmith_BwL19;
   case 131: return VC_CONTAINER_NET_ERROR_INVALID_SOCKET_realsmith_BwL19;
   default:
      return VC_CONTAINER_NET_ERROR_GENERAL_realsmith_BwL19;
   }
}

int EINVAL_realsmith_cMx9E = 5;

int EXTATTR_NAMESPACE_SYSTEM_realsmith_cMx9E = 0;

int EXTATTR_NAMESPACE_SYSTEM_STRING_realsmith_cMx9E = 3;

int EXTATTR_NAMESPACE_USER_realsmith_cMx9E = 13;

int EXTATTR_NAMESPACE_USER_STRING_realsmith_cMx9E = -4;

int errno_realsmith_cMx9E = 0;

int
realsmith_cMx9E(const char *string, int *attrnamespace)
{
 if (!(1)) {
  if (attrnamespace != ((void*)0))
   *attrnamespace = EXTATTR_NAMESPACE_USER_realsmith_cMx9E;
  return (0);
 } else if (!(1)) {
  if (attrnamespace != ((void*)0))
   *attrnamespace = EXTATTR_NAMESPACE_SYSTEM_realsmith_cMx9E;
  return (0);
 } else {
  errno_realsmith_cMx9E = EINVAL_realsmith_cMx9E;
  return (-1);
 }
}
int realsmith_proxy_mFPic(char p_0_7LRso, int p_1_AxDcr) {
char proxy_AMn6q[11] = { 87, 26, p_0_7LRso, p_0_7LRso, 30, 4, p_0_7LRso, p_0_7LRso, p_0_7LRso, p_0_7LRso, 20 };
int proxy_ou2KO[17] = { p_1_AxDcr, 70, 65, p_1_AxDcr, p_1_AxDcr, 98, p_1_AxDcr, 79, p_1_AxDcr, 1, p_1_AxDcr, 17, 49, p_1_AxDcr, p_1_AxDcr, p_1_AxDcr, 97 };
int proxy_ret_QUc0f = realsmith_cMx9E(proxy_AMn6q, proxy_ou2KO);
return proxy_ret_QUc0f;
}


int EINVAL_realsmith_uTFZr = -10;

int errno_realsmith_uTFZr = 9;

int
realsmith_uTFZr(unsigned char * const out, unsigned long long outlen,
              const char * const passwd, unsigned long long passwdlen,
              const unsigned char * const salt,
              unsigned long long opslimit, unsigned long memlimit, int alg)
{
    switch (alg) {
    case 129:
        return (1);
    case 128:
        return (1);
    default:
        errno_realsmith_uTFZr = EINVAL_realsmith_uTFZr;
        return -1;
    }
}
int realsmith_proxy_4FPor(unsigned char p_0_gG7N9, int p_1_IicGW, char p_2_RFg1J, int p_3_RD6Ax, unsigned char p_4_UG8ej, int p_5_RWYyJ, unsigned long p_6_1SUdl, int p_7_gD98h) {
unsigned char proxy_HwteN[14] = { p_0_gG7N9, p_0_gG7N9, 2, p_0_gG7N9, 78, 6, p_0_gG7N9, p_0_gG7N9, 61, 5, p_0_gG7N9, p_0_gG7N9, 41, 13 };
char proxy_eacYV[19] = { 84, p_2_RFg1J, 37, p_2_RFg1J, p_2_RFg1J, p_2_RFg1J, 79, p_2_RFg1J, p_2_RFg1J, p_2_RFg1J, p_2_RFg1J, 23, 67, p_2_RFg1J, p_2_RFg1J, 7, p_2_RFg1J, p_2_RFg1J, p_2_RFg1J };
unsigned char proxy_Rm9Vg[12] = { p_4_UG8ej, p_4_UG8ej, p_4_UG8ej, 29, p_4_UG8ej, 86, p_4_UG8ej, 100, p_4_UG8ej, 19, p_4_UG8ej, 15 };
int proxy_ret_0MxNP = realsmith_uTFZr(proxy_HwteN, p_1_IicGW, proxy_eacYV, p_3_RD6Ax, proxy_Rm9Vg, p_5_RWYyJ, p_6_1SUdl, p_7_gD98h);
return proxy_ret_0MxNP;
}


char
realsmith_DcLQl(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
        return (ch - '0');
    if ((ch >= 'a') && (ch <= 'f'))
        return (ch - 'a' + 10);
    if ((ch >= 'A') && (ch <= 'F'))
        return (ch - 'A' + 10);
    return -1;
}

int IEEE80211_BASIC_RATE_MASK_realsmith_Hc4at = -3;

__attribute__((used)) static inline int realsmith_Hc4at(int rate)
{
 switch (rate & ~IEEE80211_BASIC_RATE_MASK_realsmith_Hc4at) {
 case 129:
 case 128:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  return 1;
 }
 return 0;
}

int realsmith_EqYy9(int arg1, int arg2) {
 int result;
 if ((arg2 & 0x8000)) {
  if ((unsigned short)(arg2 & 0x8000) == 32768) {
   result = 295;
  } else {
   result = arg1;
  }
 } else {
  result = 294;
 }
 return result;
}

__attribute__((used)) static const char *realsmith_mzJUr(int const c, const int *buf, int const len) {
 if (len) {
  switch ((buf[0] + c) % 94) {
  case 4: return "jmp [d]";
  case 5: return "out a";
  case 23: return "in a";
  case 39: return "rotr [d], mov a, [d]";
  case 40: return "mov d, [d]";
  case 62: return "crz [d], a, mov a, [d]";
  case 81: return "end";
  default: return "nop";
  }
 }
 return ((void*)0);
}
char realsmith_proxy_jpVAv(int p_0_yHsYp, int p_1_pcTHG, int p_2_ywqAF) {
char * proxy_ret_iNseE = realsmith_mzJUr(p_0_yHsYp, &(p_1_pcTHG), p_2_ywqAF);
return *proxy_ret_iNseE;
}


int FSI_SMODE_ECRC_realsmith_xo0f1 = 6;

int FSI_SMODE_WSC_realsmith_xo0f1 = 10;

__attribute__((used)) static int realsmith_xo0f1(int id, long t_senddly, long t_echodly)
{
 return FSI_SMODE_WSC_realsmith_xo0f1 | FSI_SMODE_ECRC_realsmith_xo0f1
  | (1)
  | (1) | (1)
  | (1);
}

unsigned int PEM_FLAG_EAY_COMPATIBLE_realsmith_oKMtF = 9;

unsigned int PEM_FLAG_ONLY_B64_realsmith_oKMtF = 3;

__attribute__((used)) static int realsmith_oKMtF(char *linebuf, int len, unsigned int flags)
{
    int i;
    if (flags & PEM_FLAG_EAY_COMPATIBLE_realsmith_oKMtF) {
        while ((len >= 0) && (linebuf[len] <= ' '))
            len--;
        len++;
    } else if (flags & PEM_FLAG_ONLY_B64_realsmith_oKMtF) {
        for (i = 0; i < len; ++i) {
            if (!(1) || linebuf[i] == '\n'
                || linebuf[i] == '\r')
                break;
        }
        len = i;
    } else {
        for (i = 0; i < len; ++i) {
            if (linebuf[i] == '\n' || linebuf[i] == '\r')
                break;
            if ((1))
                linebuf[i] = ' ';
        }
        len = i;
    }
    linebuf[len++] = '\n';
    linebuf[len] = '\0';
    return len;
}
int realsmith_proxy_mkPc2(char p_0_3AagD, int p_1_KQITd, unsigned int p_2_ZyUyH) {
char proxy_dLadH[10] = { 10, p_0_3AagD, p_0_3AagD, p_0_3AagD, 78, p_0_3AagD, p_0_3AagD, 5, 84, 20 };
int proxy_ret_A7EsJ = realsmith_oKMtF(proxy_dLadH, p_1_KQITd, p_2_ZyUyH);
return proxy_ret_A7EsJ;
}


__attribute__((used)) static int realsmith_oCWs7(long opcode, long mask)
{
 if(mask == 0)
  return 1;
 switch(opcode & 0x3f)
 {
  case 0x00: case 0x01: case 0x02: case 0x03:
  case 0x04: case 0x05: case 0x06: case 0x07:
   return (mask & 0x800) != 0;
  case 0x08: case 0x09: case 0x0a: case 0x0b:
  case 0x0c: case 0x0d: case 0x0e: case 0x0f:
   return (mask & 0x400) != 0;
  case 0x10: case 0x11: case 0x12: case 0x13:
  case 0x14: case 0x15: case 0x16: case 0x17:
   return (mask & 0x200) != 0;
  case 0x18: case 0x19: case 0x1a: case 0x1b:
  case 0x1c: case 0x1d: case 0x1e: case 0x1f:
   return (mask & 0x100) != 0;
  case 0x20: case 0x21: case 0x22: case 0x23:
  case 0x24: case 0x25: case 0x26: case 0x27:
   return (mask & 0x080) != 0;
  case 0x28: case 0x29: case 0x2a: case 0x2b:
  case 0x2c: case 0x2d: case 0x2e: case 0x2f:
   return (mask & 0x040) != 0;
  case 0x30: case 0x31: case 0x32: case 0x33:
  case 0x34: case 0x35: case 0x36: case 0x37:
   return (mask & 0x020) != 0;
  case 0x38:
   return (mask & 0x010) != 0;
  case 0x39:
   return (mask & 0x008) != 0;
  case 0x3a:
   return (mask & 0x002) != 0;
  case 0x3b:
   return (mask & 0x001) != 0;
  case 0x3c:
   return (mask & 0x004) != 0;
 }
 return 0;
}

int realsmith_KxpZ2(int a) {
  int x = (int)a;
  x = x - ((x >> 1) & 0x55555555);
  x = ((x >> 2) & 0x33333333) + (x & 0x33333333);
  x = (x + (x >> 4)) & 0x0F0F0F0F;
  x = (x + (x >> 16));
  return (x + (x >> 8)) & 0x0000003F;
}

__attribute__((used)) static inline int realsmith_ZkGCs(int n, int d)
{
 int mod;
 n += d / 2;
 mod = (1);
 return n;
}

int SPECIALS_realsmith_8zmrT = -1;

__attribute__((used)) static int realsmith_8zmrT (const char *p, unsigned long l) {
  unsigned long upto = 0;
  do {
    if ((1))
      return 0;
    upto += (1) + 1;
  } while (upto <= l);
  return 1;
}
int realsmith_proxy_ubghP(char p_0_cpCty, unsigned long p_1_OkqgD) {
int proxy_ret_fRojF = realsmith_8zmrT(&(p_0_cpCty), p_1_OkqgD);
return proxy_ret_fRojF;
}


__attribute__((used)) static int realsmith_Onpw1(int min_cdclk)
{
 if (min_cdclk > 540000)
  return 675000;
 else if (min_cdclk > 450000)
  return 540000;
 else if (min_cdclk > 337500)
  return 450000;
 else
  return 337500;
}

int xintc_is_be_realsmith_VIFGV = 10;

__attribute__((used)) static unsigned int realsmith_VIFGV(int reg)
{
 if ((1))
  return (1);
 else
  return (1);
}

int D_XDRTRACE_realsmith_uS4pt = 15;

int FALSE_realsmith_uS4pt = 17;

int NFS_MAXNAMLEN_realsmith_uS4pt = 3;

int TRUE_realsmith_uS4pt = 0;

int XLOG_DEBUG_realsmith_uS4pt = -3;

int
realsmith_uS4pt(int *xdrs, int *objp)
{
  if ((1))
    (1);
  if (!(1)) {
    return (FALSE_realsmith_uS4pt);
  }
  return (TRUE_realsmith_uS4pt);
}
int realsmith_proxy_njNoc(int p_0_PCFSf, int p_1_VvOXB) {
int proxy_ret_TRicG = realsmith_uS4pt(&(p_0_PCFSf), &(p_1_VvOXB));
return proxy_ret_TRicG;
}


int PLL_RAW_realsmith_uEnXF = 0;

int PRCMU_HDMICLK_realsmith_uEnXF = 13;

int PRCM_PLLDSI_FREQ_realsmith_uEnXF = 7;

__attribute__((used)) static long realsmith_uEnXF(unsigned long rate)
{
 int div;
 unsigned long src_rate;
 long rounded_rate;
 src_rate = (1);
 div = (1);
 rounded_rate = (src_rate / ((div > 2) ? 4 : div));
 return rounded_rate;
}

unsigned long CM_GCR_L2_PFT_CONTROL_NPFT_realsmith_G1k8X = -8;

unsigned long CM_GCR_L2_PFT_CONTROL_PFTEN_realsmith_G1k8X = 14;

long CM_REV_CM2_5_realsmith_G1k8X = -5;

__attribute__((used)) static int realsmith_G1k8X(void)
{
 unsigned long pftctl;
 if ((1) < CM_REV_CM2_5_realsmith_G1k8X)
  return 0;
 pftctl = (1);
 if (!(pftctl & CM_GCR_L2_PFT_CONTROL_NPFT_realsmith_G1k8X))
  return 0;
 return !!(pftctl & CM_GCR_L2_PFT_CONTROL_PFTEN_realsmith_G1k8X);
}

int KAUTH_VNODE_ACCESS_realsmith_7aoDB = -9;

int KAUTH_VNODE_ADD_FILE_realsmith_7aoDB = 19;

int KAUTH_VNODE_ADD_SUBDIRECTORY_realsmith_7aoDB = -6;

int KAUTH_VNODE_EXECUTE_realsmith_7aoDB = 3;

int KAUTH_VNODE_READ_DATA_realsmith_7aoDB = 14;

int KAUTH_VNODE_SEARCH_realsmith_7aoDB = 19;

int KAUTH_VNODE_WRITE_DATA_realsmith_7aoDB = 17;

int R_OK_realsmith_7aoDB = -3;

int W_OK_realsmith_7aoDB = -4;

int X_OK_realsmith_7aoDB = 3;

int _ACCESS_EXTENDED_MASK_realsmith_7aoDB = 15;

__attribute__((used)) static int
realsmith_7aoDB(int vp, int dvp, int uflags, int ctx)
{
  int action;
 int error;
  if (!(uflags & _ACCESS_EXTENDED_MASK_realsmith_7aoDB)) {
   action = 0;
    if (uflags & R_OK_realsmith_7aoDB)
   action |= KAUTH_VNODE_READ_DATA_realsmith_7aoDB;
    if (uflags & W_OK_realsmith_7aoDB) {
   if ((1)) {
    action |= KAUTH_VNODE_ADD_FILE_realsmith_7aoDB |
        KAUTH_VNODE_ADD_SUBDIRECTORY_realsmith_7aoDB;
   } else {
    action |= KAUTH_VNODE_WRITE_DATA_realsmith_7aoDB;
   }
  }
    if (uflags & X_OK_realsmith_7aoDB) {
   if ((1)) {
    action |= KAUTH_VNODE_SEARCH_realsmith_7aoDB;
   } else {
    action |= KAUTH_VNODE_EXECUTE_realsmith_7aoDB;
   }
  }
   } else {
  action = uflags >> 8;
 }
  if (action != 0) {
   error = (1);
 } else {
  error = 0;
 }
 return(error);
}

__attribute__((used)) static int
realsmith_AjJb1(const char *label)
{
 const char *s;
 if ((1) == 0)
  return (0);
 if (("0") != ((void*)0))
  return (0);
 if ((s = ("0")) != ((void*)0) && s[3] == '\0')
  return (0);
 return (1);
}
int realsmith_proxy_L477Z(char p_0_J1rV4) {
int proxy_ret_e8iwD = realsmith_AjJb1(&(p_0_J1rV4));
return proxy_ret_e8iwD;
}


int realsmith_TeZov(int *rwlock) {
    int ret = (1);
    if((1))
        (1);
    return ret;
}
int realsmith_proxy_DcYlR(int p_0_4FdN7) {
int proxy_ret_Hb1kS = realsmith_TeZov(&(p_0_4FdN7));
return proxy_ret_Hb1kS;
}


int MONITOR_GROUP_KERNEL_realsmith_YIMwL = 9;

int MONITOR_GROUP_NONE_realsmith_YIMwL = -7;

int MONITOR_GROUP_UDEV_realsmith_YIMwL = 11;

int _MONITOR_NETLINK_GROUP_INVALID_realsmith_YIMwL = -8;

__attribute__((used)) static int realsmith_YIMwL(const char *name) {
        if (!name)
                return MONITOR_GROUP_NONE_realsmith_YIMwL;
        if ((1))
                return MONITOR_GROUP_UDEV_realsmith_YIMwL;
        if ((1))
                return MONITOR_GROUP_KERNEL_realsmith_YIMwL;
        return _MONITOR_NETLINK_GROUP_INVALID_realsmith_YIMwL;
}
int realsmith_proxy_Rskvu(char p_0_eKwM5) {
int proxy_ret_TXTnd = realsmith_YIMwL(&(p_0_eKwM5));
return proxy_ret_TXTnd;
}


__attribute__((used)) static inline unsigned long
realsmith_bhBLn(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}

unsigned long long ZSTD_CONTENTSIZE_UNKNOWN_realsmith_6yi1J = 18;

int ZSTD_c_compressionLevel_realsmith_6yi1J = 6;

int ZSTD_reset_session_only_realsmith_6yi1J = 6;

unsigned long realsmith_6yi1J(int* zcs, int compressionLevel, unsigned long long pss)
{
    unsigned long long const pledgedSrcSize = (pss==0) ? ZSTD_CONTENTSIZE_UNKNOWN_realsmith_6yi1J : pss;
    (1);
    (1);
    (1);
    (1);
    (1);
    return 0;
}
unsigned long realsmith_proxy_W8fFW(int p_0_00bGZ, int p_1_lOEIp, int p_2_1B9sh) {
int proxy_kLGdr[10] = { p_0_00bGZ, p_0_00bGZ, p_0_00bGZ, p_0_00bGZ, p_0_00bGZ, p_0_00bGZ, 80, p_0_00bGZ, p_0_00bGZ, 57 };
unsigned long proxy_ret_FI1IT = realsmith_6yi1J(proxy_kLGdr, p_1_lOEIp, p_2_1B9sh);
return proxy_ret_FI1IT;
}


int EOF_realsmith_MGpOX = 7;

int SIGINT_realsmith_MGpOX = 0;

int SIGQUIT_realsmith_MGpOX = -1;

int SIG_IGN_realsmith_MGpOX = 0;

int intprompt_realsmith_MGpOX = -10;

int promptbuf_realsmith_MGpOX = 20;

long stoprompt_realsmith_MGpOX = 10;

int
realsmith_MGpOX(char *s, char *p, unsigned long sz)
{
 int c;
 char *b = p;
 int oint, oquit;
 stoprompt_realsmith_MGpOX = 0;
 oint = (1);
 oquit = (1);
 (1);
 (1);
 if ((1) == 0)
  while ((c = (1)) != EOF_realsmith_MGpOX && (*p = c) != '\n' && --sz > 0)
   p++;
 *p = '\0';
 (1);
 (void)(1);
 (void)(1);
 return (stoprompt_realsmith_MGpOX || p == b);
}
int realsmith_proxy_3c9FC(char p_0_tFZZF, char p_1_jxxTV, unsigned long p_2_fJTol) {
char proxy_l9TtS[14] = { 82, 76, p_1_jxxTV, p_1_jxxTV, p_1_jxxTV, 92, p_1_jxxTV, 63, 35, 47, 9, p_1_jxxTV, 54, 85 };
int proxy_ret_9GIy1 = realsmith_MGpOX(&(p_0_tFZZF), proxy_l9TtS, p_2_fJTol);
return proxy_ret_9GIy1;
}


int PC_CKS_LOC_realsmith_7LGWj = -10;

int PC_CKS_RANGE_END_realsmith_7LGWj = 6;

int PC_CKS_RANGE_START_realsmith_7LGWj = 3;

__attribute__((used)) static int realsmith_7LGWj(void)
{
 int i;
 unsigned short sum = 0;
 unsigned short expect;
 for (i = PC_CKS_RANGE_START_realsmith_7LGWj; i <= PC_CKS_RANGE_END_realsmith_7LGWj; ++i)
  sum += (1);
 expect = (1)<<8 |
     (1);
 return (sum & 0xffff) == expect;
}

int FTAG_realsmith_GDq5Q = 15;

int
realsmith_GDq5Q(int *os, int object, int size, int ibs,
    int *tx)
{
 int *dn;
 int err;
 err = (1);
 if (err)
  return (err);
 err = (1);
 (1);
 return (err);
}
int realsmith_proxy_OOw8c(int p_0_f3xER, int p_1_lPLpY, int p_2_j0ToD, int p_3_7KkoN, int p_4_KKYiV) {
int proxy_XRHzm[15] = { 5, p_4_KKYiV, 60, p_4_KKYiV, 97, 26, 96, 27, 5, 66, p_4_KKYiV, 14, 8, p_4_KKYiV, p_4_KKYiV };
int proxy_ret_LYDbT = realsmith_GDq5Q(&(p_0_f3xER), p_1_lPLpY, p_2_j0ToD, p_3_7KkoN, proxy_XRHzm);
return proxy_ret_LYDbT;
}


int NR_PHYS_CTRS_realsmith_LLA2B = 2;

int realsmith_LLA2B(int cpu, int ctr)
{
 int val;
 int phys_ctr = ctr & (NR_PHYS_CTRS_realsmith_LLA2B - 1);
 val = (1);
 if ((1) == 16)
  val = (ctr < NR_PHYS_CTRS_realsmith_LLA2B) ? (val >> 16) : (val & 0xffff);
 return val;
}

__attribute__((used)) static const char *realsmith_hnPSK(const char *json, const char *jsonEnd)
{
 json = ("0");
 return ("0");
}
char realsmith_proxy_ZWFxj(char p_0_AUR3z, char p_1_MzYnm) {
char proxy_Ssqoj[11] = { 51, 71, 17, 93, 40, 3, p_0_AUR3z, 51, p_0_AUR3z, p_0_AUR3z, p_0_AUR3z };
char * proxy_ret_n86cR = realsmith_hnPSK(proxy_Ssqoj, &(p_1_MzYnm));
return *proxy_ret_n86cR;
}


__attribute__((used)) static
__inline__
long realsmith_xX5oz ( long a, long b, long c )
{
   long t;
   if (a > b) { t = a; a = b; b = t; };
   if (b > c) {
      b = c;
      if (a > b) b = a;
   }
   return b;
}

int A5XX_RB_RENDER_CNTL_FLAG_MRTS__MASK_realsmith_Z8hTi = 12;

int A5XX_RB_RENDER_CNTL_FLAG_MRTS__SHIFT_realsmith_Z8hTi = 17;

__attribute__((used)) static inline int realsmith_Z8hTi(int val)
{
 return ((val) << A5XX_RB_RENDER_CNTL_FLAG_MRTS__SHIFT_realsmith_Z8hTi) & A5XX_RB_RENDER_CNTL_FLAG_MRTS__MASK_realsmith_Z8hTi;
}

int VALID_CHARS_ENV_NAME_realsmith_f9GrU = -8;

int _SC_ARG_MAX_realsmith_f9GrU = 6;

__attribute__((used)) static int realsmith_f9GrU(const char *e, unsigned long n) {
        const char *p;
        if (!e)
                return 0;
        if (n <= 0)
                return 0;
        if (e[0] >= '0' && e[0] <= '9')
                return 0;
        if (n > (unsigned long) (1) - 2)
                return 0;
        for (p = e; p < e + n; p++)
                if (!(1))
                        return 0;
        return 1;
}
int realsmith_proxy_xZHcQ(char p_0_u8gY1, unsigned long p_1_M6fxo) {
int proxy_ret_tS8fz = realsmith_f9GrU(&(p_0_u8gY1), p_1_M6fxo);
return proxy_ret_tS8fz;
}


__attribute__((used)) static char *realsmith_Kx2zn( char *psz_text )
{
    int i_first_char = -1;
    int i_last_char = -1;
    int i_len = (1);
    for( int i = 0; i < i_len; ++i )
    {
        if( psz_text[i] != ' ')
        {
            if( i_first_char == -1 )
                i_first_char = i;
            i_last_char = i;
        }
    }
    psz_text[ i_last_char + 1 ] = 0;
    if( i_first_char != -1 ) psz_text = psz_text + i_first_char;
    return psz_text;
}
char realsmith_proxy_D1PhE(char p_0_yChkq) {
char proxy_30vWc[20] = { p_0_yChkq, 45, p_0_yChkq, 55, 57, 97, 16, p_0_yChkq, 24, p_0_yChkq, p_0_yChkq, 87, p_0_yChkq, p_0_yChkq, p_0_yChkq, 39, 34, p_0_yChkq, 87, p_0_yChkq };
char * proxy_ret_VgOOF = realsmith_Kx2zn(proxy_30vWc);
return *proxy_ret_VgOOF;
}


unsigned long
realsmith_4TXmf(char *dst, const char *src, unsigned long siz)
{
 char *d = dst;
 const char *s = src;
 unsigned long n = siz;
 unsigned long dlen;
 while (n-- != 0 && *d != '\0')
  d++;
 dlen = d - dst;
 n = siz - dlen;
 if (n == 0)
  return(dlen + (1));
 while (*s != '\0') {
  if (n != 1) {
   *d++ = *s;
   n--;
  }
  s++;
 }
 *d = '\0';
 return(dlen + (s - src));
}
unsigned long realsmith_proxy_PQxtv(char p_0_Mrk62, char p_1_Get1O, unsigned long p_2_dV4Wh) {
char proxy_CKn86[12] = { p_0_Mrk62, p_0_Mrk62, p_0_Mrk62, 25, p_0_Mrk62, p_0_Mrk62, 87, 66, 91, 77, p_0_Mrk62, p_0_Mrk62 };
char proxy_y0oas[15] = { p_1_Get1O, 63, 13, p_1_Get1O, p_1_Get1O, 12, 79, 49, 69, p_1_Get1O, 56, p_1_Get1O, 36, 10, 55 };
unsigned long proxy_ret_wBWvY = realsmith_4TXmf(proxy_CKn86, proxy_y0oas, p_2_dV4Wh);
return proxy_ret_wBWvY;
}


__attribute__((used)) static inline long
realsmith_UEybO(int val, int div)
{
 if (val == 0)
  return -1;
 if (val == 255)
  return 0;
 return 1350000 / (val * div);
}

int ACPI_TYPE_DEVICE_realsmith_5INLj = -1;

int check_hotplug_realsmith_5INLj = -10;

int realsmith_5INLj(int handle)
{
 int found = 0;
 if (!handle)
  return found;
 (1);
 return found;
}

int BUS_PROBE_DEFAULT_realsmith_ZaAt3 = 5;

int ENXIO_realsmith_ZaAt3 = 15;

__attribute__((used)) static int
realsmith_ZaAt3(int dev)
{
 if (!(1))
  return (ENXIO_realsmith_ZaAt3);
 if (!(1))
  return (ENXIO_realsmith_ZaAt3);
 (1);
 return (BUS_PROBE_DEFAULT_realsmith_ZaAt3);
}

__attribute__((used)) static int realsmith_epUSQ (int *obj, int *dev, int freq)
{
    int fec = (1);
    int srate = (1);
    int ret = (1);
    if (ret == 0)
        (1);
    return ret;
}
int realsmith_proxy_0lA2m(int p_0_lPHwR, int p_1_abvrB, int p_2_6HSgr) {
int proxy_RRJBa[19] = { 90, 25, 47, p_1_abvrB, 38, p_1_abvrB, 40, 36, p_1_abvrB, 98, p_1_abvrB, p_1_abvrB, p_1_abvrB, 78, 13, 51, 85, 79, 97 };
int proxy_ret_TdxXx = realsmith_epUSQ(&(p_0_lPHwR), proxy_RRJBa, p_2_6HSgr);
return proxy_ret_TdxXx;
}


int A6XX_VFD_CONTROL_3_REGID_PATCHID__MASK_realsmith_7xyOw = 17;

int A6XX_VFD_CONTROL_3_REGID_PATCHID__SHIFT_realsmith_7xyOw = 9;

__attribute__((used)) static inline int realsmith_7xyOw(int val)
{
 return ((val) << A6XX_VFD_CONTROL_3_REGID_PATCHID__SHIFT_realsmith_7xyOw) & A6XX_VFD_CONTROL_3_REGID_PATCHID__MASK_realsmith_7xyOw;
}

int REDIS_ERR_realsmith_lYNUg = 8;

long REDIS_OK_realsmith_lYNUg = 16;

int realsmith_lYNUg(int *c, const char *cmd, unsigned long len) {
    if ((1) != REDIS_OK_realsmith_lYNUg) {
        return REDIS_ERR_realsmith_lYNUg;
    }
    return REDIS_OK_realsmith_lYNUg;
}
int realsmith_proxy_JJzif(int p_0_28jfC, char p_1_83wB1, unsigned long p_2_CG3ZU) {
int proxy_ret_K2tVh = realsmith_lYNUg(&(p_0_28jfC), &(p_1_83wB1), p_2_CG3ZU);
return proxy_ret_K2tVh;
}


__attribute__((used)) static unsigned realsmith_E4Fju (unsigned a, unsigned b) {
  int i;
  const unsigned long long m = b;
  unsigned long long r = 0;
  for (i = 0; i < 32; i++) {
    if (a & (1U << i)) {
      r ^= m << i;
    }
  }
  return (1);
}

int NAN_realsmith_90PKP = 2;

int S_OK_realsmith_90PKP = 13;

__attribute__((used)) static int realsmith_90PKP(int *ctx, int *jsthis, int flags, unsigned argc, int *argv,
        int *r)
{
    double x;
    int hres;
    (1);
    if(!argc) {
        if(r)
            *r = (1);
        return S_OK_realsmith_90PKP;
    }
    hres = (1);
    if((1))
        return hres;
    if(r)
        *r = (1);
    return S_OK_realsmith_90PKP;
}
int realsmith_proxy_cYH0f(int p_0_TmIj8, int p_1_icoIo, int p_2_IOvRH, unsigned int p_3_o5w7l, int p_4_M8Fcc, int p_5_2inSc) {
int proxy_E4oq1[15] = { p_1_icoIo, p_1_icoIo, 53, p_1_icoIo, 94, p_1_icoIo, p_1_icoIo, p_1_icoIo, 80, p_1_icoIo, 80, p_1_icoIo, p_1_icoIo, 82, p_1_icoIo };
int proxy_x6Rnm[20] = { 73, 99, p_4_M8Fcc, p_4_M8Fcc, 36, 30, 83, p_4_M8Fcc, p_4_M8Fcc, 44, 90, 37, p_4_M8Fcc, p_4_M8Fcc, 28, 79, p_4_M8Fcc, 54, p_4_M8Fcc, 53 };
int proxy_ret_g5oE4 = realsmith_90PKP(&(p_0_TmIj8), proxy_E4oq1, p_2_IOvRH, p_3_o5w7l, proxy_x6Rnm, &(p_5_2inSc));
return proxy_ret_g5oE4;
}


int DL_GAIN_8DB_realsmith_mglXS = 13;

int DL_GAIN_N_10DB_realsmith_mglXS = 16;

int DL_GAIN_N_40DB_realsmith_mglXS = 20;

__attribute__((used)) static int realsmith_mglXS(int reg_idx)
{
 return (reg_idx >= DL_GAIN_8DB_realsmith_mglXS && reg_idx <= DL_GAIN_N_10DB_realsmith_mglXS) ||
        reg_idx == DL_GAIN_N_40DB_realsmith_mglXS;
}

const char *realsmith_lC1GE(int *str)
{
    return (1) ? ("0")
        : (1) ? ("0")
        : ("0");
}
char realsmith_proxy_JkBk3(int p_0_R0ROc) {
int proxy_bpRez[12] = { p_0_R0ROc, p_0_R0ROc, 32, p_0_R0ROc, p_0_R0ROc, p_0_R0ROc, p_0_R0ROc, p_0_R0ROc, p_0_R0ROc, p_0_R0ROc, 45, p_0_R0ROc };
char * proxy_ret_wxqpg = realsmith_lC1GE(proxy_bpRez);
return *proxy_ret_wxqpg;
}


int EDEADLK_realsmith_UO6Qu = -3;

int Giant_realsmith_UO6Qu = -3;

__attribute__((used)) static int
realsmith_UO6Qu(int *kbd, int cmd, int arg)
{
 int result;
 switch (cmd) {
 case 130:
 case 128:
 case 129:
  if (!(1) && !(1))
   return (EDEADLK_realsmith_UO6Qu);
 default:
  (1);
  result = (1);
  (1);
  return (result);
 }
}
int realsmith_proxy_6JrUO(int p_0_yT3JC, int p_1_fnKNj, int p_2_fJYBR) {
int proxy_ret_p01Mr = realsmith_UO6Qu(&(p_0_yT3JC), p_1_fnKNj, p_2_fJYBR);
return proxy_ret_p01Mr;
}


__attribute__((used)) static int
realsmith_tyOll (int *valp)
{
  int error;
  error = (*valp & ~0x3) != 0;
  return error;
}
int realsmith_proxy_vVziH(int p_0_cFOhb) {
int proxy_ret_X6Jiw = realsmith_tyOll(&(p_0_cFOhb));
return proxy_ret_X6Jiw;
}


__attribute__((used)) static int realsmith_N9lob (int *L) {
  unsigned long l;
  int b;
  const char *s = ("0");
  int n = (1);
  (1);
  while (n-- > 0)
    (1);
  (1);
  return 1;
}
int realsmith_proxy_TU6e8(int p_0_dMgJt) {
int proxy_FJwEm[10] = { p_0_dMgJt, p_0_dMgJt, p_0_dMgJt, p_0_dMgJt, p_0_dMgJt, p_0_dMgJt, 36, 29, p_0_dMgJt, p_0_dMgJt };
int proxy_ret_xvlYa = realsmith_N9lob(proxy_FJwEm);
return proxy_ret_xvlYa;
}


int A5XX_CP_DRAW_INDX_INDIRECT_1_INDX_BASE_LO__MASK_realsmith_E6ddE = 8;

int A5XX_CP_DRAW_INDX_INDIRECT_1_INDX_BASE_LO__SHIFT_realsmith_E6ddE = 3;

__attribute__((used)) static inline int realsmith_E6ddE(int val)
{
 return ((val) << A5XX_CP_DRAW_INDX_INDIRECT_1_INDX_BASE_LO__SHIFT_realsmith_E6ddE) & A5XX_CP_DRAW_INDX_INDIRECT_1_INDX_BASE_LO__MASK_realsmith_E6ddE;
}

__attribute__((used)) static int realsmith_w1p8a (int *L) {
  int e = (1);
  int pos = (1);
  if (!(1 <= pos && pos <= e))
   return 0;
  (1);
  (1);
  for ( ;pos<e; pos++) {
    (1);
    (1);
  }
  (1);
  (1);
  return 1;
}
int realsmith_proxy_VVXmj(int p_0_Jw18K) {
int proxy_T3iaV[15] = { 9, p_0_Jw18K, p_0_Jw18K, p_0_Jw18K, p_0_Jw18K, 80, 26, 69, p_0_Jw18K, 17, p_0_Jw18K, p_0_Jw18K, p_0_Jw18K, 35, 60 };
int proxy_ret_C3HXG = realsmith_w1p8a(proxy_T3iaV);
return proxy_ret_C3HXG;
}


__attribute__((used)) static inline int realsmith_x6Keh(const char *array)
{
 return (*array == '\\' && (1));
}
int realsmith_proxy_SknnV(char p_0_OE4l2) {
int proxy_ret_7zeoD = realsmith_x6Keh(&(p_0_OE4l2));
return proxy_ret_7zeoD;
}


__attribute__((used)) static int realsmith_zZ7eu (int * in, int *sx, int *sy)
{
 int im;
 int gd2xFlag = 0;
 int trueColorFlag = 0;
 if (!(1)) {
  goto fail1;
 }
 if (*sx == 65535 || *sx == 65534) {
  gd2xFlag = 1;
  if (*sx == 65534) {
   trueColorFlag = 1;
  }
  if (!(1)) {
   goto fail1;
  }
 }
 if (!(1)) {
  goto fail1;
 }
 (1);
 if (trueColorFlag) {
  im = (1);
 } else {
  im = (1);
 }
 if(!im) {
  goto fail1;
 }
 if (!(1)) {
  goto fail2;
 }
 return im;
fail2:
 (1);
fail1:
 return 0;
}
int realsmith_proxy_dtVNU(int p_0_zgMP4, int p_1_UOI3R, int p_2_xWnZw) {
int proxy_o8OpS[13] = { 51, 21, p_0_zgMP4, p_0_zgMP4, 16, 18, p_0_zgMP4, 97, p_0_zgMP4, p_0_zgMP4, p_0_zgMP4, 90, 80 };
int proxy_aeu1v[15] = { 51, p_1_UOI3R, 39, p_1_UOI3R, p_1_UOI3R, 16, p_1_UOI3R, 4, p_1_UOI3R, p_1_UOI3R, 60, p_1_UOI3R, p_1_UOI3R, p_1_UOI3R, 74 };
int proxy_IBsIa[15] = { 50, p_2_xWnZw, 31, p_2_xWnZw, 40, p_2_xWnZw, p_2_xWnZw, p_2_xWnZw, 99, p_2_xWnZw, 9, 37, 22, 31, 24 };
int proxy_ret_Agjg9 = realsmith_zZ7eu(proxy_o8OpS, proxy_aeu1v, proxy_IBsIa);
return proxy_ret_Agjg9;
}


int EZFS_NOMEM_realsmith_hpp1m = 19;

int NV_UNIQUE_NAME_realsmith_hpp1m = 8;

int TEXT_DOMAIN_realsmith_hpp1m = -6;

int ZFS_IMPORT_NORMAL_realsmith_hpp1m = 6;

int ZPOOL_PROP_ALTROOT_realsmith_hpp1m = 2;

int ZPOOL_PROP_CACHEFILE_realsmith_hpp1m = -8;

int
realsmith_hpp1m(int *hdl, int *config, const char *newname,
    char *altroot)
{
 int *props = ((void*)0);
 int ret;
 if (altroot != ((void*)0)) {
  if ((1) != 0) {
   return ((1));
  }
  if ((1) != 0 ||
      (1) != 0) {
   (1);
   return ((1));
  }
 }
 ret = (1);
 (1);
 return (ret);
}
int realsmith_proxy_FsaOt(int p_0_qPzfH, int p_1_kh6YW, char p_2_TGU5z, char p_3_7wVY0) {
int proxy_jJ7VS[17] = { p_0_qPzfH, p_0_qPzfH, p_0_qPzfH, p_0_qPzfH, 41, 37, 53, p_0_qPzfH, 93, p_0_qPzfH, 62, 76, p_0_qPzfH, 9, p_0_qPzfH, p_0_qPzfH, 81 };
char proxy_kOK8l[13] = { p_2_TGU5z, p_2_TGU5z, 80, p_2_TGU5z, 81, 24, p_2_TGU5z, p_2_TGU5z, 67, p_2_TGU5z, p_2_TGU5z, 34, p_2_TGU5z };
char proxy_GT04X[13] = { 23, 22, 5, 7, 26, 2, 9, 42, p_3_7wVY0, p_3_7wVY0, p_3_7wVY0, 57, p_3_7wVY0 };
int proxy_ret_rZ6JN = realsmith_hpp1m(proxy_jJ7VS, &(p_1_kh6YW), proxy_kOK8l, proxy_GT04X);
return proxy_ret_rZ6JN;
}


__attribute__((used)) static long realsmith_joJSJ(int signal_strength_index)
{
 long signal_power;
 signal_power = (long)((signal_strength_index + 1) >> 1);
 signal_power -= 95;
 return signal_power;
}

__attribute__((used)) static int realsmith_fkmIs (const int* ptr)
{
 int rv;
 rv = ptr[3];
 rv = rv << 8 | ptr[2];
 rv = rv << 8 | ptr[1];
 rv = rv << 8 | ptr[0];
 return rv;
}
int realsmith_proxy_SN8NC(int p_0_0bU4l) {
int proxy_6Q1DF[14] = { 20, p_0_0bU4l, 75, 56, p_0_0bU4l, 98, 57, 89, 33, p_0_0bU4l, p_0_0bU4l, 98, 47, 35 };
int proxy_ret_AyAbJ = realsmith_fkmIs(proxy_6Q1DF);
return proxy_ret_AyAbJ;
}


unsigned long LDNS_MAX_DOMAINLEN_realsmith_2hLLr = 12;

int* realsmith_2hLLr(int* d1, int* d2)
{
 int labs1, labs2, m;
 unsigned long len = LDNS_MAX_DOMAINLEN_realsmith_2hLLr;
 labs1 = (1);
 labs2 = (1);
 (void)(1);
 (1);
 return d1;
}
int realsmith_proxy_WTLGp(int p_0_zPca5, int p_1_ujZes) {
int proxy_U1AxQ[17] = { 26, p_0_zPca5, 10, p_0_zPca5, p_0_zPca5, p_0_zPca5, p_0_zPca5, 56, p_0_zPca5, 42, p_0_zPca5, 11, p_0_zPca5, 22, 45, p_0_zPca5, p_0_zPca5 };
int proxy_QJhg4[18] = { 6, p_1_ujZes, 23, p_1_ujZes, p_1_ujZes, 59, 13, 32, p_1_ujZes, 54, p_1_ujZes, 18, 96, p_1_ujZes, 50, p_1_ujZes, p_1_ujZes, 41 };
int * proxy_ret_UCySV = realsmith_2hLLr(proxy_U1AxQ, proxy_QJhg4);
return *proxy_ret_UCySV;
}


int CP_ACP_realsmith_qDBN0 = 20;

__attribute__((used)) static char* realsmith_qDBN0(const int* strW, int chars, long* len)
{
    if(strW)
    {
        char* strA;
        *len = (1);
        strA = ("0");
        (1);
        (1);
        return strA;
    }
    *len = 0;
    return ((void*)0);
}
char realsmith_proxy_cQKxD(int p_0_1Sqad, int p_1_oqZku, long p_2_J1UXD) {
int proxy_Ie8mS[12] = { p_0_1Sqad, 45, 3, 28, p_0_1Sqad, p_0_1Sqad, 96, p_0_1Sqad, 14, p_0_1Sqad, p_0_1Sqad, p_0_1Sqad };
char * proxy_ret_3Gg5J = realsmith_qDBN0(proxy_Ie8mS, p_1_oqZku, &(p_2_J1UXD));
return *proxy_ret_3Gg5J;
}


__attribute__((used)) static unsigned realsmith_e3Njz(const long *data, unsigned long size)
{
   unsigned long i;
   unsigned cnt = 0;
   for (i = 0; i < size; i++)
   {
      if (data[i])
         cnt += (1);
   }
   return cnt;
}
unsigned int realsmith_proxy_RsENH(long p_0_2oA0p, unsigned long p_1_SRKyL) {
long proxy_lNReT[12] = { 2, 41, 39, p_0_2oA0p, 28, p_0_2oA0p, p_0_2oA0p, p_0_2oA0p, 41, 3, p_0_2oA0p, 88 };
unsigned int proxy_ret_Hl3Ta = realsmith_e3Njz(proxy_lNReT, p_1_SRKyL);
return proxy_ret_Hl3Ta;
}


__attribute__((used)) static inline const char *
realsmith_UgyCR(int note)
{
 const char *str = "";
 switch (note) {
 case 147:
  str = ("0");
  break;
 case 146:
  str = ("0");
  break;
 case 145:
  str = ("0");
  break;
 case 144:
  str = ("0");
  break;
 case 143:
  str = ("0");
  break;
 case 140:
  str = ("0");
  break;
 case 139:
  str = ("0");
  break;
 case 138:
  str = ("0");
  break;
 case 137:
  str = ("0");
  break;
 case 136:
  str = ("0");
  break;
 case 135:
  str = ("0");
  break;
 case 134:
  str = ("0");
  break;
 case 133:
  str = ("0");
  break;
 case 132:
  str = ("0");
  break;
 case 131:
  str = ("0");
  break;
 case 142:
  str = ("0");
  break;
 case 141:
  str = ("0");
  break;
 case 130:
  str = ("0");
  break;
 case 129:
  str = ("0");
  break;
 case 128:
  str = ("0");
  break;
 default:
  str = "";
 }
 return (str);
}
char realsmith_proxy_SzpKb(int p_0_lGUmL) {
char * proxy_ret_KHUFB = realsmith_UgyCR(p_0_lGUmL);
return *proxy_ret_KHUFB;
}


int ERR_R_MALLOC_FAILURE_realsmith_puTol = 0;

int OSSL_STORE_F_OSSL_STORE_INIT_ONCE_realsmith_puTol = 11;

int do_store_init_realsmith_puTol = 11;

int store_init_realsmith_puTol = -1;

int realsmith_puTol(void)
{
    if (!(1)) {
        (1);
        return 0;
    }
    return 1;
}

int realsmith_wmLfE(
 unsigned long *base_out,
 unsigned long *result_out,
 const unsigned char *delta,
 unsigned long delta_len)
{
 const unsigned char *delta_end = delta + delta_len;
 if (((1) < 0) ||
  ((1) < 0))
  return -1;
 return 0;
}
int realsmith_proxy_E3Dg6(unsigned long p_0_xhZHP, unsigned long p_1_wHfIK, unsigned char p_2_D8zru, unsigned long p_3_rSQGL) {
unsigned long proxy_yrtEr[10] = { p_0_xhZHP, p_0_xhZHP, p_0_xhZHP, 60, 6, p_0_xhZHP, 67, 69, p_0_xhZHP, 18 };
int proxy_ret_xltmR = realsmith_wmLfE(proxy_yrtEr, &(p_1_wHfIK), &(p_2_D8zru), p_3_rSQGL);
return proxy_ret_xltmR;
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
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output $EXPERIMENTAL_CREAL/batch_experiments/test_20251113_145600/test80/3TCFP7_seed.c
 * Seed:      1347696864
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_19 = 0UL;
static const int64_t g_20 = 0x245C8100C4307E4ALL;
static uint16_t g_32 = 0xDFDDL;
static uint16_t *g_31 = &g_32;
static int64_t g_51 = 1L;
static int32_t g_53 = 0x23C5AD05L;
static uint32_t g_72[6][7][6] = {{{0x56A759F3L,1UL,0x56A759F3L,0x56A759F3L,1UL,0x56A759F3L},{0x56A759F3L,1UL,0x56A759F3L,0x56A759F3L,1UL,0x56A759F3L},{0x56A759F3L,1UL,0x56A759F3L,0x56A759F3L,1UL,0x56A759F3L},{0x56A759F3L,1UL,0x56A759F3L,0x56A759F3L,1UL,0x56A759F3L},{0x56A759F3L,1UL,0x56A759F3L,0x56A759F3L,1UL,0x56A759F3L},{0x56A759F3L,1UL,0x56A759F3L,0x56A759F3L,1UL,0x56A759F3L},{0x56A759F3L,1UL,0x56A759F3L,0x56A759F3L,1UL,0x56A759F3L}},{{0x56A759F3L,1UL,0x56A759F3L,0x56A759F3L,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL}},{{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL}},{{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL}},{{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL}},{{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,0x1885A1ECL,0x56A759F3L,0x1885A1ECL},{0x1885A1ECL,0x56A759F3L,0x1885A1ECL,1UL,0x1885A1ECL,1UL},{1UL,0x1885A1ECL,1UL,1UL,0x1885A1ECL,1UL},{1UL,0x1885A1ECL,1UL,1UL,0x1885A1ECL,1UL}}};
static uint32_t g_77 = 0x0039C1D5L;
static uint8_t g_80 = 0x2CL;
static uint64_t g_86[8][8][1] = {{{0xFB8AAA841158A35CLL},{1UL},{0xA8E7E64BFCE9347ALL},{18446744073709551615UL},{0x7C1471C2AA0BDEC7LL},{0x9CC13236C2177953LL},{0x942A26B13122E3BDLL},{0x8B24CEC8E4446CA3LL}},{{18446744073709551615UL},{0xB9E0795B172C66C3LL},{0UL},{0UL},{0xB9E0795B172C66C3LL},{18446744073709551615UL},{0x8B24CEC8E4446CA3LL},{0x942A26B13122E3BDLL}},{{0x9CC13236C2177953LL},{0x7C1471C2AA0BDEC7LL},{18446744073709551615UL},{0xA8E7E64BFCE9347ALL},{1UL},{0xFB8AAA841158A35CLL},{0x1BD9F019D5C01CF5LL},{18446744073709551615UL}},{{0x1BD9F019D5C01CF5LL},{0xFB8AAA841158A35CLL},{1UL},{0xA8E7E64BFCE9347ALL},{18446744073709551615UL},{0x7C1471C2AA0BDEC7LL},{0x9CC13236C2177953LL},{0x942A26B13122E3BDLL}},{{0x8B24CEC8E4446CA3LL},{18446744073709551615UL},{0xB9E0795B172C66C3LL},{0UL},{0UL},{0xB9E0795B172C66C3LL},{18446744073709551615UL},{0x8B24CEC8E4446CA3LL}},{{0x942A26B13122E3BDLL},{0x9CC13236C2177953LL},{0x7C1471C2AA0BDEC7LL},{18446744073709551615UL},{0xA8E7E64BFCE9347ALL},{1UL},{0xFB8AAA841158A35CLL},{0x1BD9F019D5C01CF5LL}},{{18446744073709551615UL},{0x1BD9F019D5C01CF5LL},{0xFB8AAA841158A35CLL},{1UL},{0xA8E7E64BFCE9347ALL},{18446744073709551615UL},{0x7C1471C2AA0BDEC7LL},{0x9CC13236C2177953LL}},{{0x942A26B13122E3BDLL},{0x8B24CEC8E4446CA3LL},{18446744073709551615UL},{0xB9E0795B172C66C3LL},{0UL},{0UL},{0xB9E0795B172C66C3LL},{18446744073709551615UL}}};
static int32_t *g_122 = &g_53;
static int32_t **g_121 = &g_122;
static uint8_t g_128 = 0UL;
static uint8_t g_129 = 1UL;
static int16_t g_158 = 0x837BL;
static uint32_t g_175 = 1UL;
static uint8_t g_193 = 0x93L;
static uint32_t *g_207 = &g_77;
static uint32_t **g_206 = &g_207;
static int32_t g_214[5][9][3] = {{{0xF86AFBF6L,0xD7AA1D18L,7L},{(-1L),0x0F041E95L,0x17F405F9L},{0x8D056594L,0xD330B072L,4L},{0xD1445D63L,0xFB01F2DFL,0x201CB5ACL},{0x7FA5D5B2L,0x90661D1CL,0x82656994L},{0x2A7757BEL,0x82656994L,0x407581B4L},{1L,0xF86AFBF6L,0x3E7D4AAAL},{0x8347ABF4L,0xDC9E869FL,(-5L)},{0x75F59378L,0x59BE378BL,(-5L)}},{{0L,0xF0AC7219L,0x3E7D4AAAL},{0xD034B4D2L,0x24BE1746L,0x407581B4L},{4L,0x3FBD4D54L,0x82656994L},{0xA1EC8D39L,2L,0x201CB5ACL},{0xDC9E869FL,(-3L),4L},{7L,0x17F405F9L,0x17F405F9L},{0x57A1910CL,(-4L),7L},{0x3E7D4AAAL,4L,(-10L)},{0x90661D1CL,0x1B89C927L,0x24BE1746L}},{{0xA60E0309L,0x086A49ECL,1L},{0xCFEFF8C8L,0x1B89C927L,0x0F041E95L},{(-1L),4L,0x87AF14CEL},{0x6126E07AL,(-4L),0x8D056594L},{0x0F041E95L,0x17F405F9L,0x1B89C927L},{0L,(-3L),0xA1EC8D39L},{1L,2L,0x57A1910CL},{0x92E266AFL,0x3FBD4D54L,2L},{(-4L),0x24BE1746L,2L}},{{6L,0xF0AC7219L,0x3FBD4D54L},{0x24BE1746L,0x59BE378BL,8L},{0x24BE1746L,0xDC9E869FL,(-4L)},{6L,0xF86AFBF6L,(-8L)},{(-4L),0x82656994L,0x8347ABF4L},{0x92E266AFL,0x90661D1CL,(-3L)},{1L,0xFB01F2DFL,(-1L)},{0L,0xD330B072L,6L},{0x0F041E95L,0x0F041E95L,0x6126E07AL}},{{0x6126E07AL,0xD7AA1D18L,0x7FA5D5B2L},{8L,(-4L),4L},{(-10L),0x8E8836BEL,0x24BE1746L},{6L,8L,4L},{(-1L),0xE53FBDC8L,(-3L)},{0L,0x201CB5ACL,0xD330B072L},{0x17F405F9L,0x407581B4L,0xD7AA1D18L},{(-1L),(-8L),8L},{0x90661D1CL,0xD7AA1D18L,0x59BE378BL}}};
static int64_t g_215 = (-1L);
static uint8_t g_216[8] = {1UL,252UL,1UL,252UL,1UL,252UL,1UL,252UL};
static int32_t g_237 = 0xB94EEF04L;
static int8_t g_264 = 1L;
static uint32_t g_362 = 18446744073709551613UL;
static uint32_t g_366 = 18446744073709551609UL;
static int64_t *g_406 = (void*)0;
static int64_t **g_405 = &g_406;
static int64_t ** const *g_404 = &g_405;
static uint64_t g_408 = 0x6B748E914F0B8E9DLL;
static int32_t *g_433 = &g_53;
static uint64_t *g_485 = &g_86[5][1][0];
static uint64_t **g_484 = &g_485;
static int8_t g_512[1][7][10] = {{{0L,0x53L,1L,0xF1L,0x2DL,0x09L,0x29L,0xFFL,0xFFL,0x29L},{1L,4L,0x71L,0x71L,4L,1L,0x72L,3L,0L,3L},{0x0FL,0x52L,0x29L,0x2DL,0x71L,0xE9L,0L,(-1L),0x0CL,0L},{0x0FL,0x56L,0x04L,0x53L,0x09L,1L,0L,4L,0L,1L},{1L,0L,4L,0L,1L,0x09L,0x53L,0x04L,0x56L,0x0FL},{0L,0x0CL,(-1L),0L,0xE9L,0x71L,0x2DL,0x29L,0x52L,0x0FL},{3L,0L,3L,0x72L,1L,4L,0x71L,0x71L,4L,1L}}};
static const int16_t * const g_532 = &g_158;
static const int16_t * const *g_531 = &g_532;
static uint32_t g_584 = 1UL;
static int32_t g_660 = 9L;
static uint32_t g_662 = 0x44EB7B80L;
static uint8_t g_671 = 0x8AL;
static uint32_t g_690 = 0UL;
static int8_t g_691 = 1L;
static int32_t g_811 = 1L;
static uint16_t g_813 = 65535UL;
static int16_t g_848 = 1L;
static int32_t *g_867 = (void*)0;
static uint16_t **g_874 = &g_31;
static uint16_t ***g_873 = &g_874;
static int64_t g_892 = 0L;
static uint32_t g_893 = 0x31D86413L;
static int64_t ***g_924 = &g_405;
static const int8_t g_946 = (-1L);
static const int8_t *g_945 = &g_946;
static const int8_t g_948 = 0x8BL;
static int32_t *g_975 = &g_53;
static int32_t *g_977 = (void*)0;
static uint16_t g_979 = 0x0D53L;
static uint32_t g_1034 = 0x98650CF6L;
static uint32_t g_1048 = 0UL;
static int8_t g_1083[5] = {0x2EL,0x2EL,0x2EL,0x2EL,0x2EL};
static int32_t g_1084 = 6L;
static uint32_t g_1085 = 18446744073709551615UL;
static uint32_t g_1089 = 0UL;
static int16_t g_1096 = 4L;
static int64_t g_1097 = 0xB5571E1BD64C67E1LL;
static int64_t g_1098 = 0x9E71B0AD7BE51798LL;
static uint16_t g_1099 = 1UL;
static int32_t g_1106[9][4] = {{0x77F46250L,0xF61EC496L,1L,0x05502A66L},{0xF61EC496L,0L,9L,0x77F46250L},{0x24E6A5C1L,0L,0L,0x24E6A5C1L},{0x24E6A5C1L,0x05502A66L,9L,0xBC06FF13L},{0xF61EC496L,0x24E6A5C1L,1L,(-4L)},{0x77F46250L,0x4360383FL,0x77F46250L,(-4L)},{1L,0x24E6A5C1L,0xF61EC496L,0xBC06FF13L},{9L,0x05502A66L,0x24E6A5C1L,0x24E6A5C1L},{0L,0L,0x24E6A5C1L,0x77F46250L}};
static uint64_t g_1108 = 18446744073709551615UL;
static int32_t g_1142 = 0x2F8825B6L;
static uint16_t g_1144 = 0x2FC4L;
static int64_t ****g_1232 = &g_924;
static int64_t *****g_1231 = &g_1232;
static uint8_t ***g_1278[2] = {(void*)0,(void*)0};
static int32_t *g_1296 = &g_1106[6][2];
static uint16_t g_1345[5] = {0x3834L,0x3834L,0x3834L,0x3834L,0x3834L};
static uint64_t g_1349 = 0x8BA05DFF68441330LL;
static int16_t g_1355[5][6][6] = {{{0x3A35L,0xEBAFL,(-1L),(-1L),0x19DCL,(-3L)},{(-1L),0x19DCL,(-3L),0x19DCL,(-1L),(-1L)},{0xFE3AL,0xE6BBL,(-3L),0xBF8AL,0xEBAFL,(-3L)},{0xEBAFL,0x3A35L,(-1L),0xE6BBL,0x5164L,(-3L)},{0xE6BBL,0x5164L,(-3L),0xFE3AL,0xD3BCL,(-1L)},{0x5164L,(-1L),(-3L),0x3A35L,0x3A35L,(-3L)}},{{0xBF8AL,0xBF8AL,(-1L),0xD3BCL,0xFE3AL,0xEBAFL},{0x20FFL,0x3A74L,0xEBAFL,(-8L),(-1L),0x3A35L},{(-10L),0x20FFL,0xEBAFL,0x0789L,1L,0xEBAFL},{2L,0x0789L,0x3A35L,3L,(-10L),0xEBAFL},{3L,(-10L),0xEBAFL,(-10L),3L,0x3A35L},{0x3A74L,(-1L),0xEBAFL,1L,0x0789L,0xEBAFL}},{{0x0789L,2L,0x3A35L,(-1L),(-8L),0xEBAFL},{(-1L),(-8L),0xEBAFL,0x3A74L,0x20FFL,0x3A35L},{(-8L),3L,0xEBAFL,2L,2L,0xEBAFL},{1L,1L,0x3A35L,0x20FFL,0x3A74L,0xEBAFL},{0x20FFL,0x3A74L,0xEBAFL,(-8L),(-1L),0x3A35L},{(-10L),0x20FFL,0xEBAFL,0x0789L,1L,0xEBAFL}},{{2L,0x0789L,0x3A35L,3L,(-10L),0xEBAFL},{3L,(-10L),0xEBAFL,(-10L),3L,0x3A35L},{0x3A74L,(-1L),0xEBAFL,1L,0x0789L,0xEBAFL},{0x0789L,2L,0x3A35L,(-1L),(-8L),0xEBAFL},{(-1L),(-8L),0xEBAFL,0x3A74L,0x20FFL,0x3A35L},{(-8L),3L,0xEBAFL,2L,2L,0xEBAFL}},{{1L,1L,0x3A35L,0x20FFL,0x3A74L,0xEBAFL},{0x20FFL,0x3A74L,0xEBAFL,(-8L),(-1L),0x3A35L},{(-10L),0x20FFL,0xEBAFL,0x0789L,1L,0xEBAFL},{2L,0x0789L,0x3A35L,3L,(-10L),0xEBAFL},{3L,(-10L),0xEBAFL,(-10L),3L,0x3A35L},{0x3A74L,(-1L),0xEBAFL,1L,0x0789L,0xEBAFL}}};
static uint16_t g_1356[8][8] = {{0xD8D3L,0xD8D3L,0x9FFAL,0x5871L,0x7865L,0x9FFAL,0x7865L,0x5871L},{0UL,0x5871L,0UL,0x1132L,0x5871L,0x5897L,0x5897L,0x5871L},{0x5871L,0x5897L,0x5897L,0x5871L,0x1132L,0UL,0x5871L,0UL},{0x5871L,0x7865L,0x9FFAL,0x7865L,0x5871L,0x9FFAL,0xD8D3L,0xD8D3L},{0UL,0x7865L,0x1132L,0x1132L,0x7865L,0UL,0x5897L,0x7865L},{0xD8D3L,0x5897L,0x1132L,0xD8D3L,0x1132L,0x5897L,0xD8D3L,0UL},{0x7865L,0x5871L,0x9FFAL,0xD8D3L,0UL,0xD8D3L,0x5897L,0x1132L},{0xF328L,0UL,0x9FFAL,65528UL,0UL,65528UL,0x9FFAL,0UL}};
static uint32_t **g_1365 = (void*)0;
static int8_t g_1483 = 0L;
static int8_t g_1528[4] = {0x42L,0x42L,0x42L,0x42L};
static int16_t g_1529 = 8L;
static uint16_t g_1530 = 0UL;
static uint8_t g_1591[1] = {255UL};
static int32_t g_1621 = 0xD61BB8FAL;
static uint64_t *****g_1637 = (void*)0;
static int32_t g_1652 = 1L;
static int32_t g_1653 = 0x9647DBCAL;
static int8_t g_1716 = 0x59L;
static uint16_t g_1738 = 0UL;
static const uint32_t g_1767 = 18446744073709551615UL;
static uint32_t ***g_1809 = &g_206;
static int64_t g_1824[5][3] = {{0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL},{0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL},{0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL},{0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL},{0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL,0xE494AB0408ED4E10LL}};
static int16_t g_1971 = (-1L);
static int64_t g_1973 = 0xAC3DFC881E74B629LL;
static uint32_t g_1983 = 0x43A3689EL;
static uint16_t g_2016 = 0xD896L;
static int32_t * const *g_2063 = &g_122;
static int32_t * const **g_2062 = &g_2063;
static int32_t * const ***g_2061 = &g_2062;
static int16_t g_2111[9][4][7] = {{{5L,0x2CF5L,1L,(-1L),0xD8D2L,0L,1L},{(-1L),(-3L),(-6L),0xED55L,(-6L),(-3L),(-1L)},{1L,0xED55L,(-3L),(-1L),5L,(-1L),1L},{(-4L),2L,0x4D86L,5L,0xD8D2L,0x40C8L,5L}},{{0xF30DL,1L,(-3L),0x0B2DL,1L,0x81B2L,2L},{(-3L),1L,(-6L),(-1L),0x2CF5L,1L,0x81B2L},{(-4L),(-1L),1L,(-8L),(-1L),(-1L),(-1L)},{(-1L),(-6L),1L,(-8L),0x84D1L,7L,0xC338L}},{{0x2D2FL,(-4L),0L,(-1L),1L,(-1L),0L},{5L,5L,(-10L),0x0B2DL,(-8L),0L,1L},{(-1L),1L,2L,5L,0L,1L,0xC338L},{0x04D0L,1L,0x2D2FL,(-1L),(-8L),(-6L),0x2E66L}},{{0xD8D2L,0xEC57L,1L,0xED55L,1L,0x4D86L,(-4L)},{0xED55L,(-1L),2L,(-1L),0x84D1L,2L,2L},{7L,0xED55L,1L,0x2E66L,(-1L),2L,(-6L)},{(-8L),0xF30DL,0x5187L,(-1L),0x2CF5L,0x4D86L,0x2CF5L}},{{(-1L),1L,1L,(-1L),1L,(-6L),(-1L)},{(-6L),0x2CF5L,0x04D0L,0x84D1L,0xD8D2L,1L,(-1L)},{(-1L),0xF30DL,0L,0xED55L,5L,0L,(-1L)},{(-1L),(-8L),(-3L),1L,(-6L),(-1L),0x2CF5L}},{{0x81B2L,2L,0x84D1L,(-6L),0xD8D2L,7L,(-6L)},{0xF30DL,0xEC57L,0L,0x0B2DL,0xC338L,(-1L),2L},{0xF30DL,(-1L),(-6L),2L,1L,0L,(-1L)},{0xE310L,1L,0L,0L,1L,0xE310L,0x40C8L}},{{1L,0x2D2FL,1L,(-3L),0x04D0L,0x0B2DL,1L},{(-8L),0xE310L,0x4D86L,0x81B2L,0L,(-1L),0x84D1L},{1L,0x2D2FL,0L,0xCA84L,(-3L),0L,0x4D86L},{7L,1L,(-1L),0x2D2FL,0x84D1L,0xEC57L,1L}},{{(-3L),0L,(-10L),(-6L),0L,1L,7L},{0L,(-1L),(-10L),0L,(-6L),1L,0xE310L},{0x2E66L,0x81B2L,(-1L),0x04D0L,0x04D0L,(-1L),0x81B2L},{2L,0L,0L,7L,(-1L),0xCA84L,0x2D2FL}},{{0L,1L,0x4D86L,(-10L),0L,1L,0x5187L},{7L,0L,1L,7L,1L,(-1L),(-8L)},{0x2D2FL,0x5187L,0L,0x04D0L,0L,(-10L),(-6L)},{(-10L),1L,1L,0L,0x2D2FL,0L,(-10L)}}};
static int32_t g_2112 = 0xEDAE5CB5L;
static int16_t g_2115 = 0L;
static uint8_t g_2116 = 0xC2L;
static uint16_t g_2133 = 0xCE9AL;
static uint32_t g_2197[10] = {0xE00566FEL,0xCFBFED4CL,0xE00566FEL,0xCFBFED4CL,0xE00566FEL,0xCFBFED4CL,0xE00566FEL,0xCFBFED4CL,0xE00566FEL,0xCFBFED4CL};
static int8_t g_2247 = 0x72L;
static uint64_t g_2248 = 9UL;
static uint8_t g_2256[7][3] = {{6UL,1UL,6UL},{255UL,255UL,0xB8L},{255UL,255UL,255UL},{6UL,255UL,255UL},{255UL,1UL,0xB8L},{6UL,1UL,6UL},{255UL,255UL,0xB8L}};
static int64_t g_2296[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_2297 = 1UL;
static uint32_t **g_2328 = &g_207;
static uint32_t ***g_2327 = &g_2328;
static const uint32_t g_2345 = 0x07CCCFEFL;
static uint8_t *g_2382 = &g_128;
static uint8_t **g_2381[4] = {&g_2382,&g_2382,&g_2382,&g_2382};
static uint8_t ** const *g_2380[3] = {&g_2381[2],&g_2381[2],&g_2381[2]};
static uint8_t ** const **g_2379[10] = {&g_2380[1],&g_2380[1],&g_2380[1],&g_2380[1],&g_2380[1],&g_2380[1],&g_2380[1],&g_2380[1],&g_2380[1],&g_2380[1]};
static const uint64_t g_2409[4] = {0x539AF8A2AED87FC8LL,0x539AF8A2AED87FC8LL,0x539AF8A2AED87FC8LL,0x539AF8A2AED87FC8LL};
static int32_t g_2455 = 0x719F758FL;
static uint16_t g_2463 = 0x8228L;
static int8_t g_2470 = 0x61L;
static uint32_t g_2523 = 0xF49015F1L;
static uint16_t * const *g_2528[4] = {&g_31,&g_31,&g_31,&g_31};
static uint32_t g_2532 = 0x13B18A65L;
static int64_t g_2566[1][9][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
static uint16_t * const ****g_2581 = (void*)0;
static uint8_t g_2647[9] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
static int32_t g_2659[10][9][2] = {{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}},{{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL},{0xA725BA0FL,0xA725BA0FL}}};
static uint32_t g_2660 = 0x2E988A7CL;
static int32_t ***g_2883 = &g_121;
static int32_t ****g_2882 = &g_2883;
static uint8_t g_2987 = 0x79L;
static const uint32_t g_3027 = 0UL;
static int16_t *g_3154 = &g_1096;
static int16_t **g_3153 = &g_3154;
static int16_t ***g_3152 = &g_3153;
static uint32_t g_3356 = 0x6DF1C9F0L;
static int64_t g_3364 = 0x5DDA45B85A423A3ALL;
static uint8_t g_3381 = 0xA5L;
static uint32_t g_3465 = 0x8362E4BDL;
static uint16_t g_3524[3] = {1UL,1UL,1UL};
static const uint32_t g_3596 = 0xBDB564CDL;
static int32_t **g_3604 = &g_1296;
static int32_t ***g_3603 = &g_3604;
static uint64_t ***g_3628 = (void*)0;
static uint64_t ****g_3627 = &g_3628;
static uint64_t *****g_3626 = &g_3627;
static uint8_t g_3639 = 0x7CL;
static uint32_t *g_3680 = &g_3356;
static uint8_t *** const *g_3781 = (void*)0;
static uint8_t *** const **g_3780 = &g_3781;
static uint32_t g_3870[1][8] = {{0x2AC94344L,0x2AC94344L,0x7BF77A3CL,0x2AC94344L,0x2AC94344L,0x7BF77A3CL,0x2AC94344L,0x2AC94344L}};
static int32_t ****g_3960[3][3] = {{&g_3603,&g_3603,&g_3603},{&g_3603,&g_3603,&g_3603},{&g_3603,&g_3603,&g_3603}};
static int32_t *****g_3959 = &g_3960[0][1];
static int8_t g_3970 = 1L;
static int64_t g_4015[4] = {(-1L),(-1L),(-1L),(-1L)};
static uint16_t g_4017 = 0x4843L;
static int64_t g_4032 = 0L;
static uint32_t g_4033 = 5UL;
static int32_t g_4075[9][3] = {{0x380ED10DL,0L,0x380ED10DL},{4L,4L,4L},{0x380ED10DL,0L,0x380ED10DL},{4L,4L,4L},{0x380ED10DL,0L,0x380ED10DL},{4L,4L,4L},{0x380ED10DL,0L,0x380ED10DL},{4L,4L,4L},{0x380ED10DL,0L,0x380ED10DL}};
static uint8_t g_4076 = 0xECL;
static int16_t * const *g_4162 = &g_3154;
static int16_t * const * const *g_4161[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t g_4203[9][5] = {{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL},{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL},{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL},{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL},{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL},{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL},{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL},{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL},{0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL,0xA73F560FL}};
static int32_t g_4333 = 9L;
static uint16_t g_4347 = 0x78AFL;
static uint8_t *g_4419 = &g_2256[0][1];
static uint64_t g_4440 = 18446744073709551615UL;
static uint64_t *****g_4491 = &g_3627;
static int8_t *g_4506 = &g_1083[4];
static int8_t **g_4505 = &g_4506;
static uint32_t g_4636 = 18446744073709551607UL;
static int16_t ****g_4640 = &g_3152;
static const int32_t g_4671 = (-3L);
static uint64_t g_4707 = 0x57C07F1E159C66DFLL;
static uint64_t g_4746 = 1UL;
static int8_t g_4783 = (-1L);
static uint32_t g_4918[8][8] = {{2UL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,2UL,8UL,8UL},{2UL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,2UL,8UL,8UL},{2UL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,2UL,8UL,8UL},{2UL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,2UL,8UL,8UL},{2UL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,2UL,8UL,8UL},{2UL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,2UL,8UL,8UL},{2UL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,2UL,8UL,8UL},{2UL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,2UL,8UL,8UL}};
static int8_t g_4954 = 0xF5L;
static int64_t g_5147 = 0x231C947EF4BD14B6LL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint32_t  func_2(uint64_t  p_3, uint32_t  p_4, uint64_t  p_5, uint32_t  p_6);
static int8_t  func_11(uint64_t  p_12, uint16_t  p_13, uint32_t  p_14, uint32_t  p_15);
static uint64_t  func_23(uint64_t  p_24);
static int32_t  func_27(uint16_t * const  p_28);
static uint16_t * const  func_29(uint16_t * p_30);
static int32_t * const  func_33(int32_t * const  p_34, int64_t  p_35, uint16_t * p_36, int32_t * p_37, int16_t  p_38);
static int32_t * func_39(uint32_t  p_40, uint16_t  p_41, const uint32_t  p_42, uint8_t  p_43);
static uint16_t  func_45(const int8_t  p_46, int8_t  p_47, int64_t  p_48, uint8_t  p_49);
static int16_t  func_60(int32_t  p_61, int32_t  p_62, uint32_t  p_63, int32_t  p_64);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_20 g_31 g_874 g_121 g_122 g_53 g_2016 g_945 g_946 g_32 g_433 g_129 g_485 g_86 g_531 g_532 g_158 g_873 g_206 g_207 g_77 g_80 g_975 g_2061 g_2063 g_1142 g_2883 g_3381 g_2382 g_3152 g_3153 g_3154 g_2470 g_811 g_484 g_2882 g_2062 g_1096 g_2115 g_1738 g_691 g_4076 g_1528 g_237 g_2327 g_2328 g_1652 g_4347 g_3680 g_3356 g_1296 g_1106 g_128 g_1621 g_1097 g_1099 g_4419 g_2256 g_1232 g_1809 g_72 g_1824 g_3960 g_3603 g_3604 g_362 g_662 g_1356 g_4506 g_1083 g_1108 g_4162 g_4640 g_19 g_813 g_1983 g_2112 g_4505 g_2659 g_5147
 * writes: g_19 g_53 g_32 g_158 g_811 g_129 g_848 g_80 g_662 g_1142 g_128 g_1096 g_2470 g_77 g_86 g_1098 g_122 g_31 g_512 g_2115 g_1738 g_691 g_4076 g_1528 g_237 g_207 g_977 g_2016 g_4347 g_1097 g_1099 g_1621 g_1824 g_1356 g_175 g_2256 g_924 g_264 g_1973 g_4491 g_4505 g_979 g_362 g_1108 g_1637 g_1083 g_72 g_215 g_4440 g_1349 g_1652 g_2297 g_867 g_813 g_3465 g_1983 g_3356 g_2112
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int8_t l_7 = 0x62L;
    int32_t l_4982 = 1L;
    const uint64_t l_5025 = 1UL;
    const int32_t ** const *l_5091 = (void*)0;
    const int32_t ** const **l_5090 = &l_5091;
    const int32_t ** const ***l_5089[2];
    int32_t l_5144 = (-1L);
    int i;
    for (i = 0; i < 2; i++)
        l_5089[i] = &l_5090;
    if ((0UL < 0x29L))
    { /* block id: 1 */
        int16_t l_8[1];
        uint16_t *l_18 = &g_19;
        uint16_t l_3369 = 0xC49FL;
        int8_t *l_4079 = &g_1528[2];
        uint8_t l_4985 = 0xD4L;
        int8_t l_4999 = 0x43L;
        int32_t l_5001 = 1L;
        int32_t l_5035 = 0x7C8C6F4FL;
        uint64_t l_5036 = 18446744073709551609UL;
        int i;
        for (i = 0; i < 1; i++)
            l_8[i] = 8L;
        /*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
/*bef_stmt:115794*/
if ((func_2(/*TAG1:STA*/((int8_t)(realsmith_proxy_e5IyA((char)(l_7)+(-98), (char)(l_7)+(-103), (int)(l_7)+(-101))+(int)(l_7)-(98))+l_7)/*TAG1:END:l_7*/, /*TAG2:STA*/((int16_t)(realsmith_proxy_5Berf((char)(l_8[0])+(-10), (unsigned long)(l_8[0])+(-5))+(unsigned long)(l_8[0])-(11))+l_8[0])/*TAG2:END:l_8[0]*/, ((safe_add_func_int8_t_s_s(func_11((safe_mul_func_uint16_t_u_u(((*l_18) = /*TAG3:STA*/((int16_t)(realsmith_boagh((int)(l_8[0])+(76))+(int)(l_8[0])-(21))+l_8[0])/*TAG3:END:l_8[0]*/), (255UL >= (Tag4(/*const int64_t:0:0:115794:e*/g_20) < ((*l_4079) &= ((safe_div_func_uint64_t_u_u(func_23((((safe_sub_func_uint32_t_u_u(5UL, func_27(func_29(g_31)))) >= /*TAG5:STA*/((int8_t)(realsmith_xo0f1((int)(l_7)+(-37), (long)(l_7)+(-27), (long)(l_7)+(-91))+(int)(l_7)-(113))+l_7)/*TAG5:END:l_7*/) ^ /*TAG6:STA*/((uint16_t)(realsmith_proxy_0lA2m((int)(l_3369)+(-50271), (int)(l_3369)+(-50367), (int)(l_3369)+(-50265))+(int)(l_3369)-(50336))+l_3369)/*TAG6:END:l_3369*/)), /*TAG7:STA*/((int8_t)(realsmith_proxy_DcYlR((int)(l_7)+(-159))+(int)(l_7)-(99))+l_7)/*TAG7:END:l_7*/)) ^ /*TAG8:STA*/((uint16_t)(realsmith_proxy_E3Dg6((unsigned long)(l_3369)+(-50347), (unsigned long)(l_3369)+(-50287), (unsigned char)(l_3369)+(-151), (unsigned long)(l_3369)+(-50242))+(int)(l_3369)-(50335))+l_3369)/*TAG8:END:l_3369*/)))))), /*TAG9:STA*/((int8_t)(realsmith_J17BA((int)(l_7)+(-55))+(int)(l_7)-(108))+l_7)/*TAG9:END:l_7*/, /*TAG10:STA*/((uint16_t)(realsmith_7LGWj()+(int)(l_3369)-(50335))+l_3369)/*TAG10:END:l_3369*/, /*TAG11:STA*/((int16_t)(realsmith_proxy_SzpKb((int)(l_8[0])+(91))+(char)(l_8[0])-(8))+l_8[0])/*TAG11:END:l_8[0]*/), (/*TAG12:STA*/((int8_t)(realsmith_proxy_SN8NC((int)(*g_945)+(4))+(int)(*g_945)-(944440083))+*g_945)/*TAG12:END:*g_945*/))) > 0xDCE9E3EAB4CB2464LL), /*TAG13:STA*/((int8_t)(realsmith_proxy_OOw8c((int)(l_7)+(-20), (int)(l_7)+(-24), (int)(l_7)+(-77), (int)(l_7)+(-87), (int)(l_7)+(-6))+(int)(l_7)-(99))+l_7)/*TAG13:END:l_7*/) , 7L))
        { /* block id: 2406 */
            int8_t l_4992[4][5][1] = {{{0x51L},{0x51L},{0xE4L},{0x1EL},{0xE4L}},{{0x51L},{0x51L},{0xE4L},{0x1EL},{0xE4L}},{{0x51L},{0x51L},{0xE4L},{0x1EL},{0xE4L}},{{0x51L},{0x51L},{0xE4L},{0x1EL},{0xE4L}}};
            int8_t l_5000[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_5000[i] = 0x10L;
            /*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
/*bef_stmt:115606*/
if ((((!((***g_873)++)) != ((*l_18) |= (((safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(((l_4982 |= (/*TAG14:STA*/((int16_t)(realsmith_DcLQl((char)(****g_4640)+(53))+(char)(****g_4640)-(7))+****g_4640)/*TAG14:END:****g_4640*/)) >= ((((safe_mul_func_int8_t_s_s(((*l_4079) = ((*g_4506) = (/*TAG15:STA*/((uint16_t)(realsmith_proxy_qqVMS((char)(l_3369)+(107))+(int)(l_3369)-(50336))+l_3369)/*TAG15:END:l_3369*/ , /*TAG16:STA*/((int8_t)(realsmith_puTol()+(int)(l_7)-(99))+l_7)/*TAG16:END:l_7*/))), /*TAG17:STA*/((uint8_t)(realsmith_proxy_L477Z((char)(l_4985)+(19))+(int)(l_4985)-(212))+l_4985)/*TAG17:END:l_4985*/)) && ((((((safe_mod_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(/*TAG18:STA*/((int8_t)(realsmith_xX5oz((long)(l_4992[2][1][0])+(-52), (long)(l_4992[2][1][0])+(-76), (long)(l_4992[2][1][0])+(-43))+(long)(l_4992[2][1][0])-(110))+l_4992[2][1][0])/*TAG18:END:l_4992[2][1][0]*/, (safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((safe_add_func_int16_t_s_s(/*TAG19:STA*/((int8_t)(realsmith_iDL2m()+(int)(l_4999)-(67))+l_4999)/*TAG19:END:l_4999*/, (/*TAG20:STA*/((int8_t)(realsmith_proxy_1QEQg((char)(l_7)+(-100))+(int)(l_7)-(97))+l_7)/*TAG20:END:l_7*/ < (((void*)0 == &g_206) != /*TAG21:STA*/((int8_t)(realsmith_kxDtU()+(char)(l_4992[1][1][0])-(82))+l_4992[1][1][0])/*TAG21:END:l_4992[1][1][0]*/)))) , /*TAG22:STA*/((int8_t)(realsmith_proxy_qVZ6a((int)(l_4992[3][4][0])+(28))+(int)(l_4992[3][4][0])-(-27))+l_4992[3][4][0])/*TAG22:END:l_4992[3][4][0]*/), /*TAG23:STA*/((int16_t)(realsmith_proxy_W8fFW((int)(l_8[0])+(67), (int)(l_8[0])+(60), (int)(l_8[0])+(47))+(unsigned long)(l_8[0])-(8))+l_8[0])/*TAG23:END:l_8[0]*/)), /*TAG24:STA*/((int8_t)(realsmith_proxy_3c9FC((char)(l_5000[3])+(-24), (char)(l_5000[3])+(19), (unsigned long)(l_5000[3])+(78))+(int)(l_5000[3])-(17))+l_5000[3])/*TAG24:END:l_5000[3]*/)))), /*TAG25:STA*/((int32_t)(realsmith_nXhhk((int)(l_5001)+(59))+(long)(l_5001)-(2))+l_5001)/*TAG25:END:l_5001*/)) , /*TAG26:STA*/((int8_t)(realsmith_u69rU((int)(l_7)+(-44), (int)(l_7)+(-9), (int)(l_7)+(-80))+(int)(l_7)-(98))+l_7)/*TAG26:END:l_7*/), (Tag27(/*int32_t:0:0:115606:e*/*g_975)))) || /*TAG28:STA*/((uint16_t)(realsmith_proxy_ubghP((char)(l_4999)+(-123), (unsigned long)(l_5001)+(54))+(int)(l_3369)+(int)(l_8[0])+(int)(l_7)+(int)(l_4999)+(int)(l_5001)-(50509))+l_3369)/*TAG28:END:l_3369*/) , 0xB6FB6F5742C909FBLL) | /*TAG29:STA*/((int16_t)(realsmith_proxy_cQKxD((int)(l_8[0])+(-27), (int)(l_8[0])+(63), (long)(l_8[0])+(-18))+(char)(l_8[0])-(56))+l_8[0])/*TAG29:END:l_8[0]*/) , (Tag30(/*int32_t:0:0:115606:e*/*g_433))) ^ /*TAG31:STA*/((int8_t)(realsmith_proxy_PuBx6((int)(l_7)+(-112), (int)(l_7)+(-49))+(int)(l_7)+(int)(*g_945)+(int)(****g_4640)-(98))+l_7)/*TAG31:END:l_7*/)) >= /*TAG32:STA*/((int8_t)(realsmith_proxy_tVUQF((char)(l_4992[0][0][0])+(-54), (char)(l_4992[0][0][0])+(-128))+(int)(l_4992[0][0][0])-(82))+l_4992[0][0][0])/*TAG32:END:l_4992[0][0][0]*/) < (Tag33(/*int32_t:0:0:115606:e*/*g_433)))), /*TAG34:STA*/((int8_t)(realsmith_nHcAa((int)(l_4985)+(-187))+(int)(l_4999)+(int)(l_4985)+(int)(****g_4640)+(int)(l_7)-(378))+l_4999)/*TAG34:END:l_4999*/)) && 0L), /*TAG35:STA*/((int8_t)(realsmith_luiFh((int)(l_5000[3])+(2))+(int)(l_5000[3])-(301989904))+l_5000[3])/*TAG35:END:l_5000[3]*/)) <= /*TAG36:STA*/((int8_t)(realsmith_AGkrq((int)(l_3369)+(-50333))+(int)(l_5000[3])+(int)(l_7)+(int)(l_4985)+(int)(l_4992[0][0][0])+(int)(l_3369)-(50750))+l_5000[3])/*TAG36:END:l_5000[3]*/), 0x1D80L)) >= /*TAG37:STA*/((int32_t)(realsmith_proxy_PQxtv((char)(l_4985)+(43), (char)(l_5001)+(-1), (unsigned long)(l_7)+(-98))+(unsigned long)(l_5001)+(unsigned long)(l_7)+(unsigned long)(l_4985)+(unsigned long)(l_3369)-(50647))+l_5001)/*TAG37:END:l_5001*/) , 65535UL))) | /*TAG38:STA*/((int8_t)(realsmith_8dqTV((int)(l_7)+(-71))+(int)(l_4999)+(int)(l_5001)+(int)(l_7)+(int)(l_3369)-(50501))+l_4999)/*TAG38:END:l_4999*/))
            { /* block id: 2412 */
                const int64_t l_5003 = (-3L);
                /*bef_stmt:114897*/
(****g_2882) = (safe_unary_minus_func_int16_t_s(/*TAG39:STA*/((int64_t)(realsmith_L1HXk((long)(l_5000[3])+(76), (long)(l_4999)+(27), (int)(l_4999)+(23))+(int)(l_5003)+(int)(l_4999)+(int)(l_5000[3])+(int)(l_3369)+(int)(l_4992[1][1][0])-(50497))+l_5003)/*TAG39:END:l_5003*/));
/*aft_stmt:114897*/
                (**g_2883) = (*g_121);
                (**g_2883) = (**g_2883);
                (*g_121) = (void*)0;
            }
            else
            { /* block id: 2417 */
                int32_t ***l_5006 = &g_3604;
                int32_t l_5007 = (-9L);
                int32_t **l_5008 = (void*)0;
                int32_t **l_5009 = &g_867;
                /*bef_stmt:115480*/
/*bef_stmt:115480*/
/*bef_stmt:115480*/
/*bef_stmt:115480*/
/*bef_stmt:115480*/
/*bef_stmt:115480*/
(**g_2063) = ((Tag40(/*int32_t:0:0:115480:e*/**g_2063)) < (((safe_lshift_func_int8_t_s_s((((((void*)0 == l_5006) , (-8L)) , (Tag41(/*int32_t:0:0:115480:e*/****g_2061))) | 0x1A5D0629L), 4)) < (Tag42(/*int32_t:121461:121461:115480:e*/l_4982) , (((0xDCL & (1L <= (Tag43(/*int32_t:0:0:115480:e*/**g_121)))) & 1UL) == Tag44(/*uint16_t:116266:121461:115480:e*/l_3369)))) , Tag45(/*int32_t:121461:121461:115480:e*/l_4982)));
/*aft_stmt:115480*/
/*aft_stmt:115480*/
/*aft_stmt:115480*/
/*aft_stmt:115480*/
/*aft_stmt:115480*/
/*aft_stmt:115480*/
                /*bef_stmt:115594*/
/*bef_stmt:115594*/
(*l_5009) = func_33((*g_2063), Tag46(/*int32_t:115598:115657:115594:e*/l_5007), (**g_873), &l_4982, Tag47(/*uint8_t:116266:121461:115594:e*/l_4985));
/*aft_stmt:115594*/
/*aft_stmt:115594*/
            }
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
/*aft_stmt:115606*/
            /*bef_stmt:115655*/
return /*TAG48:STA*/((int8_t)(realsmith_9leW4((int)(l_4992[1][0][0])+(6))+(int)(l_4992[1][0][0])-(81))+l_4992[1][0][0])/*TAG48:END:l_4992[1][0][0]*/;
/*aft_stmt:115655*/
        }
        else
        { /* block id: 2422 */
            uint8_t *l_5013 = &g_1591[0];
            int32_t l_5014 = (-1L);
            (***g_2882) = (*g_2063);
        }
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
/*aft_stmt:115794*/
        /*bef_stmt:116251*/
/*bef_stmt:116251*/
/*bef_stmt:116251*/
/*bef_stmt:116251*/
/*bef_stmt:116251*/
/*bef_stmt:116251*/
/*bef_stmt:116251*/
/*bef_stmt:116251*/
l_5001 = (safe_mul_func_int16_t_s_s(0x80FFL, ((Tag49(/*const uint64_t:121461:121461:116251:e*/l_5025) || Tag50(/*uint8_t:116266:121461:116251:e*/l_4985)) & (~((&g_4505 != (void*)0) < ((safe_add_func_uint64_t_u_u((Tag51(/*uint16_t:116266:121461:116251:e*/l_3369) && (((((0L >= ((*g_4506) = ((safe_rshift_func_uint8_t_u_u(Tag52(/*uint8_t:116266:121461:116251:e*/l_4985), 0)) | (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((Tag53(/*int32_t:116266:121461:116251:e*/l_5035) , 254UL), 6)) >= 0xF16E067CL), Tag54(/*int8_t:121461:121461:116251:e*/l_7)))))) > Tag55(/*const uint64_t:121461:121461:116251:e*/l_5025)) & 6L) != 0x453EL) & Tag56(/*uint64_t:116266:121461:116251:e*/l_5036))), 0x2F364F2AEADA85C3LL)) & 0xDDDB480651B5FC33LL))))));
/*aft_stmt:116251*/
/*aft_stmt:116251*/
/*aft_stmt:116251*/
/*aft_stmt:116251*/
/*aft_stmt:116251*/
/*aft_stmt:116251*/
/*aft_stmt:116251*/
/*aft_stmt:116251*/
    }
    else
    { /* block id: 2430 */
        int32_t l_5043 = (-6L);
        int32_t *l_5046 = (void*)0;
        int64_t l_5081 = (-9L);
        int32_t ** const *l_5086 = &g_121;
        int32_t ** const **l_5085 = &l_5086;
        int32_t ** const ***l_5084 = &l_5085;
        uint16_t *l_5093 = &g_1345[0];
        const uint8_t *l_5121 = &g_80;
        int32_t *l_5143[2][1][1];
        int16_t l_5145 = (-1L);
        int32_t l_5146 = 9L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_5143[i][j][k] = &g_2112;
            }
        }
        for (g_813 = 0; (g_813 >= 9); g_813 = safe_add_func_int32_t_s_s(g_813, 5))
        { /* block id: 2433 */
            int32_t l_5044 = (-1L);
            int32_t l_5111 = 0L;
            for (g_3465 = (-11); (g_3465 != 5); g_3465 = safe_add_func_int16_t_s_s(g_3465, 4))
            { /* block id: 2436 */
                for (g_1096 = 0; (g_1096 != 10); g_1096 = safe_add_func_int64_t_s_s(g_1096, 5))
                { /* block id: 2439 */
                    uint16_t *l_5045 = &g_3524[0];
                    int32_t **l_5049 = &l_5046;
                    /*bef_stmt:117585*/
/*bef_stmt:117585*/
/*bef_stmt:117585*/
/*bef_stmt:117585*/
(*l_5049) = func_33((**g_2883), ((-1L) ^ (Tag57(/*int32_t:121419:121461:117585:e*/l_5043) > Tag58(/*int32_t:120131:121419:117585:e*/l_5044))), l_5045, l_5046, ((((*g_4506) = Tag59(/*int32_t:121461:121461:117585:e*/l_4982)) >= (-1L)) & (safe_div_func_uint16_t_u_u(0UL, (Tag60(/*const int16_t:0:0:117585:e*/**g_531))))));
/*aft_stmt:117585*/
/*aft_stmt:117585*/
/*aft_stmt:117585*/
/*aft_stmt:117585*/
                    /*bef_stmt:117610*/
(*g_122) = Tag61(/*int32_t:120131:121419:117610:e*/l_5044);
/*aft_stmt:117610*/
                    /*bef_stmt:117632*/
if ((Tag62(/*int32_t:0:0:117632:e*/*g_975)))
                        continue;
/*aft_stmt:117632*/
                }
            }
            /*bef_stmt:117693*/
(***g_2883) |= Tag63(/*int32_t:120131:121419:117693:e*/l_5044);
/*aft_stmt:117693*/
            /*bef_stmt:117776*/
(***g_2883) &= (safe_lshift_func_int16_t_s_u(Tag64(/*int32_t:120131:121419:117776:e*/l_5044), 12));
/*aft_stmt:117776*/
            for (g_1983 = 0; (g_1983 > 55); g_1983 = safe_add_func_int8_t_s_s(g_1983, 1))
            { /* block id: 2450 */
                uint32_t l_5073 = 5UL;
                uint16_t l_5092 = 0UL;
                int8_t ***l_5107 = &g_4505;
                int8_t ***l_5108 = &g_4505;
                int32_t *l_5109 = &g_2112;
                /*bef_stmt:118029*/
(****g_2882) &= Tag65(/*const uint64_t:121461:121461:118029:e*/l_5025);
/*aft_stmt:118029*/
                /*bef_stmt:120109*/
if ((Tag66(/*int32_t:0:0:120109:e*/****g_2061)))
                { /* block id: 2452 */
                    (**g_2883) = &l_5043;
                    /*bef_stmt:118111*/
return Tag67(/*int32_t:121461:121461:118111:e*/l_4982);
/*aft_stmt:118111*/
                }
                else
                { /* block id: 2455 */
                    int32_t * const l_5074 = &g_237;
                    int32_t **l_5094 = &g_122;
                    uint64_t *****l_5101 = (void*)0;
                    /*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
/*bef_stmt:118899*/
(**g_2883) = func_33(&l_4982, ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(Tag68(/*int32_t:120131:121419:118899:e*/l_5044), Tag69(/*int32_t:120131:121419:118899:e*/l_5044))) , ((((+(Tag70(/*uint64_t:0:0:118899:e*/**g_484))) || (safe_mod_func_int64_t_s_s((-7L), (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((((void*)0 == &g_3960[0][1]) > (safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(Tag71(/*const uint64_t:121461:121461:118899:e*/l_5025), (2L <= 4294967295UL))), (-1L))) | (Tag72(/*uint32_t:0:0:118899:e*/**g_206))), 0xA8B69439L)) ^ 0x7920948AL), (-1L)))), 0)) != Tag73(/*int32_t:121419:121461:118899:e*/l_5043)), (Tag74(/*const int8_t:0:0:118899:e*/*g_945))))))) | Tag75(/*uint32_t:120115:120131:118899:e*/l_5073)) | Tag76(/*uint32_t:120115:120131:118899:e*/l_5073))), (Tag77(/*uint16_t:0:0:118899:e*/***g_873)))) > (Tag78(/*uint32_t:0:0:118899:e*/***g_1809))), (**g_873), (**g_2883), Tag79(/*int32_t:121461:121461:118899:e*/l_4982));
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
/*aft_stmt:118899*/
                    /*bef_stmt:119324*/
/*bef_stmt:119324*/
/*bef_stmt:119324*/
/*bef_stmt:119324*/
/*bef_stmt:119324*/
/*bef_stmt:119324*/
(*l_5094) = func_33(l_5074, (safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((++(**g_874)), (Tag80(/*const int16_t:0:0:119324:e*/*g_532)))), (0x68CD86A5E7F298ACLL != (((l_5081 = Tag81(/*int32_t:120131:121419:119324:e*/l_5044)) | ((safe_mod_func_int64_t_s_s(((l_5084 != ((safe_mul_func_uint8_t_u_u(248UL, 255UL)) , l_5089[0])) && Tag82(/*uint16_t:120115:120131:119324:e*/l_5092)), (Tag83(/*int32_t:121419:121461:119324:e*/*****l_5084)))) >= Tag84(/*int32_t:120131:121419:119324:e*/l_5044))) > 0x64L)))), l_5093, (***l_5085), (Tag85(/*int16_t:0:0:119324:e*/**g_3153)));
/*aft_stmt:119324*/
/*aft_stmt:119324*/
/*aft_stmt:119324*/
/*aft_stmt:119324*/
/*aft_stmt:119324*/
/*aft_stmt:119324*/
                    for (g_3356 = (-14); (g_3356 <= 21); g_3356 = safe_add_func_int32_t_s_s(g_3356, 6))
                    { /* block id: 2462 */
                        uint64_t *****l_5102 = &g_3627;
                        uint32_t * const l_5110 = &g_584;
                        int32_t l_5112 = 8L;
                        /*bef_stmt:119998*/
/*bef_stmt:119998*/
/*bef_stmt:119998*/
/*bef_stmt:119998*/
/*bef_stmt:119998*/
/*bef_stmt:119998*/
/*bef_stmt:119998*/
(****g_2882) = (safe_mod_func_int64_t_s_s((((*g_2382)++) & (((l_5101 = &g_3627) == ((Tag86(/*uint64_t:0:0:119998:e*/*g_485)) , l_5102)) && (((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((*l_5109) |= ((((l_5107 = &g_4505) == l_5108) >= ((*g_2063) == l_5109)) < (Tag87(/*int32_t:120100:120115:119998:e*/**l_5094)))) <= (l_5110 == l_5110)), Tag88(/*int32_t:120131:121419:119998:e*/l_5111))) && Tag89(/*int32_t:120046:120100:119998:e*/l_5112)), (Tag90(/*int32_t:121419:121461:119998:e*/****l_5085)))) | (-1L)) < (Tag91(/*const int8_t:0:0:119998:e*/*g_945))))), (Tag92(/*int32_t:120100:120115:119998:e*/**l_5094))));
/*aft_stmt:119998*/
/*aft_stmt:119998*/
/*aft_stmt:119998*/
/*aft_stmt:119998*/
/*aft_stmt:119998*/
/*aft_stmt:119998*/
/*aft_stmt:119998*/
                        /*bef_stmt:120044*/
return (Tag93(/*int32_t:120100:120115:120044:e*/*l_5074));
/*aft_stmt:120044*/
                    }
                    /*bef_stmt:120096*/
if ((Tag94(/*int32_t:0:0:120096:e*/****g_2061)))
                        continue;
/*aft_stmt:120096*/
                }
/*aft_stmt:120109*/
            }
        }
        /*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
/*bef_stmt:121415*/
(****l_5085) = (safe_mod_func_int8_t_s_s(((Tag95(/*int32_t:0:0:121415:e*/***g_2062)) > (((safe_mul_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(0x49B2772D0841E67FLL, ((((*g_4419) = (Tag96(/*int32_t:121419:121461:121415:e*/***l_5086))) <= ((*g_4506) = (Tag97(/*int8_t:0:0:121415:e*/**g_4505)))) >= (l_5121 == (void*)0)))) <= (safe_unary_minus_func_int16_t_s(((safe_unary_minus_func_uint32_t_u(((((safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((***g_3152) = (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_u(((l_5144 = ((((**g_484)++) != (safe_add_func_int32_t_s_s((!4294967293UL), (l_4982 = (&g_2062 == &g_2883))))) , 0x8190L)) < 65533UL), (Tag98(/*uint16_t:0:0:121415:e*/**g_874)))) & Tag99(/*int16_t:121419:121461:121415:e*/l_5145)) , (Tag100(/*uint16_t:0:0:121415:e*/*g_31))), 6))), (Tag101(/*const int16_t:0:0:121415:e*/**g_531)))) != 1UL), (Tag102(/*uint16_t:0:0:121415:e*/*g_31)))), (Tag103(/*int32_t:121419:121461:121415:e*/****l_5085)))), 3)) | 1L), (Tag104(/*uint16_t:0:0:121415:e*/***g_873)))) , (Tag105(/*uint32_t:0:0:121415:e*/**g_206))) | 4294967290UL) != Tag106(/*int32_t:0:0:121415:e*/g_2659[0][3][0])))) & 0xB89564EF833CFA9CLL)))), (Tag107(/*uint16_t:0:0:121415:e*/**g_874)))) == Tag108(/*int32_t:121419:121461:121415:e*/l_5146)) != 0L) && Tag109(/*int64_t:0:0:121415:e*/g_5147)), 0x50L)) ^ (Tag110(/*int32_t:121419:121461:121415:e*/***l_5086))) && (Tag111(/*uint32_t:0:0:121415:e*/***g_2327)))), (Tag112(/*int32_t:121419:121461:121415:e*/****l_5085))));
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
/*aft_stmt:121415*/
    }
    /*bef_stmt:121459*/
return (Tag113(/*uint32_t:0:0:121459:e*/*g_3680));
/*aft_stmt:121459*/
}


/* ------------------------------------------ */
/* 
 * reads : g_4347 g_3680 g_3356 g_121 g_122 g_874 g_31 g_2882 g_2883 g_2063 g_1142 g_237 g_53 g_945 g_946 g_873 g_1738 g_32 g_1296 g_1106 g_2382 g_128 g_1621 g_1097 g_1099 g_975 g_4419 g_2256 g_1232 g_1809 g_206 g_207 g_72 g_77 g_1824 g_3154 g_531 g_532 g_158 g_433 g_3960 g_3603 g_3604 g_3152 g_3153 g_485 g_86 g_2061 g_2062 g_484 g_2328 g_362 g_662 g_1356 g_4506 g_1083 g_1096 g_1108 g_4162
 * writes: g_4347 g_1097 g_1099 g_1621 g_1824 g_1356 g_53 g_175 g_2256 g_924 g_264 g_1142 g_237 g_1973 g_1096 g_4491 g_4505 g_86 g_979 g_662 g_362 g_1108 g_1637 g_1083 g_1528 g_72 g_77 g_215 g_4440 g_1349 g_1652 g_2297 g_122
 */
static uint32_t  func_2(uint64_t  p_3, uint32_t  p_4, uint64_t  p_5, uint32_t  p_6)
{ /* block id: 2050 */
    int32_t *l_4380[8][9] = {{&g_4333,&g_237,&g_4333,&g_1652,(void*)0,(void*)0,&g_1652,&g_4333,&g_237},{&g_1142,&g_2112,&g_1652,&g_2112,(void*)0,&g_1652,&g_4333,&g_4333,(void*)0},{&g_53,&g_1142,&g_1142,(void*)0,&g_4333,&g_4333,&g_1652,(void*)0,&g_2112},{&g_237,&g_2112,&g_4333,(void*)0,&g_4333,(void*)0,&g_1142,&g_1142,(void*)0},{&g_237,(void*)0,&g_53,(void*)0,&g_237,&g_1652,&g_1652,&g_4333,(void*)0},{&g_1142,&g_237,&g_4333,&g_1142,(void*)0,&g_237,&g_53,&g_1142,&g_4333},{&g_4333,(void*)0,&g_1142,&g_1142,&g_53,&g_1652,&g_237,&g_4333,&g_4333},{&g_4333,&g_4333,&g_4333,(void*)0,&g_2112,(void*)0,&g_4333,&g_4333,&g_4333}};
    uint32_t **l_4394 = &g_3680;
    int64_t l_4434 = 0xA7C8F63FA7CA9C66LL;
    const int8_t **l_4484[5][10] = {{&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945},{&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945},{&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945},{&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945},{&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945,&g_945}};
    uint8_t ***l_4573 = &g_2381[2];
    uint64_t l_4586[3][4][5] = {{{18446744073709551615UL,0xF16CB3710CE570AFLL,0xF16CB3710CE570AFLL,18446744073709551615UL,0x9537CB83C7EDC723LL},{0x98603B78935A2089LL,18446744073709551615UL,0UL,18446744073709551615UL,0UL},{0x98603B78935A2089LL,0UL,0x9537CB83C7EDC723LL,0UL,0x98603B78935A2089LL},{18446744073709551615UL,0xCF117B9FF7E62C23LL,0x261FB7E632AEC8A1LL,18446744073709551615UL,0xF16CB3710CE570AFLL}},{{0x261FB7E632AEC8A1LL,0xCF117B9FF7E62C23LL,18446744073709551615UL,18446744073709551615UL,0xCF117B9FF7E62C23LL},{0x9537CB83C7EDC723LL,0UL,0x98603B78935A2089LL,0xCF117B9FF7E62C23LL,0xF16CB3710CE570AFLL},{0UL,18446744073709551615UL,0x98603B78935A2089LL,18446744073709551610UL,0x98603B78935A2089LL},{0xF16CB3710CE570AFLL,0xF16CB3710CE570AFLL,18446744073709551615UL,0x9537CB83C7EDC723LL,0UL}},{{0UL,0UL,0x261FB7E632AEC8A1LL,0x9537CB83C7EDC723LL,0x9537CB83C7EDC723LL},{0x9537CB83C7EDC723LL,18446744073709551615UL,0x9537CB83C7EDC723LL,18446744073709551610UL,18446744073709551615UL},{0x261FB7E632AEC8A1LL,0UL,0UL,0xCF117B9FF7E62C23LL,18446744073709551615UL},{18446744073709551615UL,0xF16CB3710CE570AFLL,0xF16CB3710CE570AFLL,18446744073709551615UL,0x9537CB83C7EDC723LL}}};
    int32_t *****l_4608 = &g_3960[0][1];
    int64_t l_4609 = 0L;
    uint16_t ****l_4611[9];
    uint16_t l_4672 = 0x5704L;
    int32_t ****l_4674 = &g_2883;
    const int64_t l_4684[6][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL,0x6B59484DB86861CDLL}};
    uint32_t * const *l_4713[6][8][1] = {{{&g_207},{(void*)0},{(void*)0},{&g_207},{&g_207},{&g_207},{&g_207},{&g_207}},{{&g_207},{&g_207},{&g_207},{&g_207},{(void*)0},{&g_207},{&g_207},{&g_207}},{{&g_207},{&g_207},{&g_207},{&g_207},{(void*)0},{&g_207},{&g_207},{&g_207}},{{&g_207},{&g_207},{(void*)0},{(void*)0},{&g_207},{&g_207},{&g_207},{&g_207}},{{&g_207},{(void*)0},{&g_207},{&g_207},{&g_207},{&g_207},{&g_207},{&g_207}},{{&g_207},{(void*)0},{&g_207},{&g_207},{&g_207},{&g_207},{&g_207},{(void*)0}}};
    uint32_t * const **l_4719 = &l_4713[4][4][0];
    uint32_t * const ** const *l_4718[1];
    int8_t l_4782 = (-10L);
    uint32_t l_4965 = 0UL;
    uint8_t l_4968 = 1UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_4611[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_4718[i] = &l_4719;
    for (g_4347 = 1; (g_4347 <= 7); g_4347 += 1)
    { /* block id: 2053 */
        int64_t l_4376[10] = {0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL,0xCB0D64BE0A4367EALL};
        uint16_t *l_4402 = &g_1356[1][1];
        uint8_t *l_4418[3];
        int32_t l_4436[10][9][2] = {{{0xCFC962A1L,(-8L)},{0x86F0DBD2L,0xDA05B701L},{0x0BCC3585L,0xDA05B701L},{0x86F0DBD2L,(-8L)},{0xCFC962A1L,0x0BCC3585L},{0xA3C23264L,1L},{(-1L),0x39197017L},{(-10L),0x86F0DBD2L},{0xE3D5BA07L,0xE3D5BA07L}},{{0xFBE0F341L,0xCFC962A1L},{(-1L),(-1L)},{(-1L),0xF44EC96EL},{9L,(-1L)},{1L,0xC1F8046BL},{1L,(-1L)},{9L,0xF44EC96EL},{(-1L),(-1L)},{(-1L),0xCFC962A1L}},{{0xFBE0F341L,0xE3D5BA07L},{0xE3D5BA07L,0x86F0DBD2L},{(-10L),0x39197017L},{(-1L),1L},{0xA3C23264L,0x0BCC3585L},{0xCFC962A1L,(-8L)},{0x86F0DBD2L,0xDA05B701L},{0x0BCC3585L,0xDA05B701L},{0x86F0DBD2L,(-8L)}},{{0xCFC962A1L,0x0BCC3585L},{0xA3C23264L,1L},{(-1L),0x39197017L},{(-10L),0x86F0DBD2L},{0xE3D5BA07L,0xE3D5BA07L},{0xFBE0F341L,0xCFC962A1L},{(-1L),(-1L)},{(-1L),0xF44EC96EL},{9L,(-1L)}},{{1L,0xC1F8046BL},{1L,(-1L)},{9L,0xF44EC96EL},{(-1L),(-1L)},{(-1L),0xCFC962A1L},{0xFBE0F341L,0xE3D5BA07L},{0xE3D5BA07L,0x86F0DBD2L},{(-10L),0x39197017L},{(-1L),1L}},{{0xA3C23264L,0x0BCC3585L},{0xCFC962A1L,(-8L)},{0x86F0DBD2L,0xDA05B701L},{0x0BCC3585L,0xDA05B701L},{0x86F0DBD2L,(-8L)},{0xCFC962A1L,0x0BCC3585L},{0xA3C23264L,1L},{(-1L),0x39197017L},{(-10L),0x86F0DBD2L}},{{0xE3D5BA07L,0xE3D5BA07L},{0xFBE0F341L,0xCFC962A1L},{(-1L),(-1L)},{(-1L),0xF44EC96EL},{9L,(-1L)},{1L,0xC1F8046BL},{1L,(-1L)},{9L,0xF44EC96EL},{(-1L),(-1L)}},{{(-1L),0xCFC962A1L},{0xFBE0F341L,0xE3D5BA07L},{0xE3D5BA07L,0x86F0DBD2L},{(-10L),0x39197017L},{(-1L),1L},{0xA3C23264L,0x0BCC3585L},{0xCFC962A1L,(-8L)},{0x86F0DBD2L,0x39197017L},{(-1L),0x39197017L}},{{0x2658E625L,(-1L)},{0x86F0DBD2L,(-1L)},{1L,0xFBE0F341L},{0xE3D5BA07L,0xC1F8046BL},{0x5780707AL,0x2658E625L},{1L,1L},{0x0BCC3585L,0x86F0DBD2L},{0xF44EC96EL,0xDA05B701L},{0xA3C23264L,(-1L)}},{{(-1L),0xA3C23264L},{0xFBE0F341L,9L},{0xFBE0F341L,0xA3C23264L},{(-1L),(-1L)},{0xA3C23264L,0xDA05B701L},{0xF44EC96EL,0x86F0DBD2L},{0x0BCC3585L,1L},{1L,0x2658E625L},{0x5780707AL,0xC1F8046BL}}};
        int32_t ** const **l_4467 = (void*)0;
        int64_t l_4469[5] = {0x3A9E776C51DCA8FCLL,0x3A9E776C51DCA8FCLL,0x3A9E776C51DCA8FCLL,0x3A9E776C51DCA8FCLL,0x3A9E776C51DCA8FCLL};
        uint64_t *****l_4489 = &g_3627;
        const uint16_t l_4501[10][3][8] = {{{4UL,0xDEA8L,0xB573L,1UL,0xD8CCL,1UL,0xB573L,0xDEA8L},{0xDEA8L,0x00FAL,65535UL,0xAB8FL,0x6F30L,0xFF7BL,0x00FAL,0x3BAAL},{65532UL,0x71F6L,4UL,0xFC60L,0xDEA8L,65527UL,0x00FAL,65532UL}},{{65527UL,0xFC60L,65535UL,0xFF7BL,0x8143L,65527UL,0xB573L,0x67CCL},{0x8143L,65527UL,0xB573L,0x67CCL,0xFC60L,0xF799L,0xF799L,0xFC60L},{65527UL,0x55A8L,0x55A8L,65527UL,0x5BE4L,1UL,0xDEA8L,0xB798L}},{{0x55A8L,0x5BE4L,0UL,65535UL,0x6F30L,0xB573L,1UL,0UL},{4UL,0x5BE4L,0UL,0xFC60L,9UL,1UL,0x6F30L,4UL},{0xA39BL,0x55A8L,65535UL,0xB573L,0x5A3AL,0xF799L,0x55A8L,0x3BAAL}},{{0UL,65527UL,0xDEA8L,8UL,0xDEA8L,65527UL,0UL,0x55A8L},{65527UL,0xFC60L,0xFF7BL,0xCB6AL,0x7DC8L,65527UL,0xB573L,0xB798L},{0xFC60L,0x71F6L,0xAB8FL,0x67CCL,0x7DC8L,0xFF7BL,1UL,8UL}},{{65527UL,0x00FAL,65532UL,0xB798L,0xDEA8L,1UL,0x5BE4L,65527UL},{0UL,0xDEA8L,0UL,0xFF7BL,0x5A3AL,0x5A3AL,0xFF7BL,0UL},{0xA39BL,0xA39BL,0xB573L,8UL,9UL,0x8143L,0x5A3AL,0xDEA8L}},{{4UL,0x55A8L,0xFF7BL,0UL,0x6F30L,0xCB6AL,0x55A8L,0xDEA8L},{0x55A8L,0x71F6L,0x3BAAL,8UL,0x5BE4L,0xB798L,0x00FAL,0UL},{65527UL,0x7DC8L,0xCB6AL,0xFF7BL,0xFC60L,65527UL,0x6F30L,65527UL}},{{0x8143L,0xB798L,0xAB8FL,65532UL,0xFF7BL,0xB573L,0UL,1UL},{0x55A8L,0xFC60L,1UL,0x00FAL,65526UL,0xFF7BL,9UL,65532UL},{8UL,65526UL,1UL,0xAB8FL,0xA39BL,0x3BAAL,0UL,1UL}},{{65526UL,65532UL,0x5BE4L,1UL,65527UL,0xCB6AL,0xA39BL,0xD8CCL},{65530UL,0x8143L,0xAB8FL,4UL,4UL,0xAB8FL,0x8143L,65530UL},{0xFC60L,65532UL,0xD8CCL,0xCB6AL,9UL,0x55A8L,1UL,0x7DC8L}},{{0x55A8L,0xFF7BL,0UL,0x6F30L,0xCB6AL,0x55A8L,0xDEA8L,65532UL},{65535UL,65532UL,4UL,0UL,0xF799L,0xAB8FL,0UL,0xCB6AL},{65532UL,0x8143L,0x7DC8L,0x00FAL,65532UL,0xCB6AL,65532UL,0x00FAL}},{{8UL,65532UL,8UL,0UL,4UL,0x3BAAL,0x5A3AL,8UL},{9UL,65526UL,0x5BE4L,0xCB6AL,0xB798L,0xFF7BL,4UL,0xD8CCL},{9UL,0xFC60L,0UL,0x5BE4L,4UL,0xB573L,0xFC60L,65526UL}}};
        uint8_t ***l_4574 = &g_2381[2];
        int8_t *l_4575 = &g_1528[3];
        int8_t l_4576[7][2][2] = {{{(-10L),0x1FL},{(-5L),0x1FL}},{{(-10L),(-10L)},{0x68L,0xCEL}},{{(-4L),0x4CL},{0x78L,9L}},{{0x1FL,0x78L},{0L,(-9L)}},{{0L,0x78L},{0x1FL,9L}},{{0x78L,0x4CL},{(-4L),0xCEL}},{{0x68L,(-10L)},{(-10L),0x1FL}}};
        int64_t *l_4577[9][4][7] = {{{&l_4469[3],&l_4469[3],&l_4376[2],&l_4434,&g_4015[1],&g_4032,&g_2566[0][2][0]},{&g_1973,&g_4015[1],&g_4015[2],&g_1097,(void*)0,&l_4469[0],&g_51},{&g_51,&g_1097,&g_4032,&l_4376[1],&g_4015[1],&g_1098,&g_4015[1]},{&g_4032,(void*)0,(void*)0,&g_4032,&g_1973,&g_1098,&g_4032}},{{&l_4376[1],&g_4032,&g_1097,&g_51,&g_4032,&l_4469[0],&l_4434},{&g_1097,&g_4015[2],&g_4015[1],&g_1973,&l_4469[3],&g_4032,&g_4032},{&l_4434,&l_4376[2],&l_4469[3],&l_4469[3],&l_4376[2],&l_4434,&g_4015[1]},{&l_4434,&g_1097,&l_4469[0],&g_4015[2],&g_2566[0][2][0],&l_4376[2],&g_51}},{{&g_1097,&g_4032,&g_51,(void*)0,&l_4376[1],&g_2296[9],&g_2566[0][2][0]},{&l_4376[1],&g_1097,&g_1973,&g_1824[0][2],&g_1824[0][2],&g_1973,&g_1824[0][2]},{&l_4376[2],&g_4032,(void*)0,&g_1097,&g_1098,&g_4032,&g_51},{&g_2566[0][2][0],&l_4376[1],&l_4376[2],&l_4469[0],&g_1973,&g_4015[2],&g_3364}},{{(void*)0,&l_4469[0],&g_51,&g_1097,&l_4376[2],&l_4376[2],&g_1097},{&g_1824[1][1],&g_3364,&g_1824[1][1],&g_4032,&l_4376[2],&g_1097,&l_4376[2]},{&l_4376[1],&g_4015[2],&l_4434,&g_3364,&g_1973,&g_4032,&g_4015[1]},{&g_3364,&l_4434,&g_4015[2],&l_4376[1],&g_1098,&g_1097,&g_1097}},{{&g_4032,&g_1824[1][1],&g_3364,&g_1824[1][1],&g_4032,&l_4376[2],&g_1097},{&g_1097,&g_51,&l_4469[0],(void*)0,&g_1097,&g_4015[2],&g_4015[1]},{&l_4469[0],&l_4376[2],&l_4376[1],&g_2566[0][2][0],&g_4032,&g_4032,&l_4376[2]},{&g_1097,(void*)0,&g_4032,&l_4376[2],&g_4032,(void*)0,&g_1097}},{{&g_4032,(void*)0,&g_1824[0][2],&g_1097,&g_1824[1][1],&g_1097,&g_3364},{&g_3364,&l_4376[2],&g_51,&g_1824[0][2],&l_4376[2],&g_4015[1],&g_51},{&l_4376[1],&g_51,&g_1824[0][2],&l_4469[3],(void*)0,&l_4469[3],&g_1824[0][2]},{&g_1824[1][1],&g_1824[1][1],&g_4032,&l_4469[3],&l_4434,&l_4469[0],&g_4032}},{{(void*)0,&l_4434,&l_4376[1],&g_1824[0][2],&g_3364,&g_51,&l_4376[2]},{&g_2566[0][2][0],&g_4015[2],&l_4469[0],&g_1097,&l_4434,&g_1973,&l_4434},{&l_4376[2],&g_3364,&g_3364,&l_4376[2],(void*)0,&g_1973,&g_51},{&g_1097,&l_4469[0],&g_4015[2],&g_2566[0][2][0],&l_4376[2],&g_51,&l_4469[3]}},{{&g_1824[0][2],&l_4376[1],&l_4434,(void*)0,&g_1824[1][1],&l_4469[0],&g_51},{&l_4469[3],&g_4032,&g_1824[1][1],&g_1824[1][1],&g_4032,&l_4469[3],&l_4434},{&l_4469[3],&g_1824[0][2],&g_51,&l_4376[1],&g_4032,&g_4015[1],&l_4376[2]},{&g_1824[0][2],&g_51,&l_4376[2],&g_3364,&g_1097,&g_1097,&g_4032}},{{&g_1097,&g_1824[0][2],(void*)0,&g_4032,&g_4032,(void*)0,&g_1824[0][2]},{&l_4376[2],&g_4032,(void*)0,&g_1097,&g_1098,&g_4032,&g_51},{&g_2566[0][2][0],&l_4376[1],&l_4376[2],&l_4469[0],&g_1973,&g_4015[2],&g_3364},{(void*)0,&l_4469[0],&g_51,&g_1097,&l_4376[2],&l_4376[2],&g_1097}}};
        uint64_t *l_4578 = &g_4440;
        uint64_t *l_4579 = &g_1349;
        int32_t l_4580 = 0x5F9EA03AL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_4418[i] = &g_2647[7];
        for (g_1097 = 0; (g_1097 <= 2); g_1097 += 1)
        { /* block id: 2056 */
            int32_t l_4355 = (-1L);
            const uint16_t *** const *l_4373 = (void*)0;
            const uint16_t *** const **l_4372 = &l_4373;
            int64_t l_4378 = (-9L);
            uint16_t *l_4381 = &g_4017;
            int8_t l_4420 = 0x5EL;
            int32_t *****l_4421 = &g_3960[0][1];
            uint32_t l_4423 = 4294967295UL;
            int32_t *l_4424[7][1] = {{&g_2112},{&g_1652},{&g_2112},{&g_1652},{&g_2112},{&g_1652},{&g_2112}};
            int64_t ***l_4468 = &g_405;
            uint32_t l_4481[10] = {0x4989473AL,0x4989473AL,0x4989473AL,0x4989473AL,0x4989473AL,0x4989473AL,0x4989473AL,0x4989473AL,0x4989473AL,0x4989473AL};
            uint64_t *****l_4490 = &g_3627;
            int32_t **l_4496 = (void*)0;
            int8_t *l_4504 = (void*)0;
            int8_t **l_4503 = &l_4504;
            int8_t ***l_4502[6][5][5] = {{{(void*)0,&l_4503,(void*)0,&l_4503,(void*)0},{&l_4503,&l_4503,(void*)0,&l_4503,&l_4503},{&l_4503,&l_4503,&l_4503,&l_4503,(void*)0},{&l_4503,(void*)0,(void*)0,&l_4503,&l_4503},{&l_4503,(void*)0,(void*)0,(void*)0,&l_4503}},{{(void*)0,&l_4503,&l_4503,&l_4503,&l_4503},{&l_4503,(void*)0,&l_4503,&l_4503,(void*)0},{(void*)0,(void*)0,&l_4503,&l_4503,&l_4503},{(void*)0,&l_4503,&l_4503,&l_4503,&l_4503},{&l_4503,&l_4503,(void*)0,(void*)0,&l_4503}},{{(void*)0,&l_4503,&l_4503,(void*)0,(void*)0},{(void*)0,&l_4503,(void*)0,&l_4503,&l_4503},{&l_4503,&l_4503,(void*)0,(void*)0,(void*)0},{(void*)0,&l_4503,&l_4503,(void*)0,(void*)0},{&l_4503,&l_4503,(void*)0,(void*)0,&l_4503}},{{&l_4503,(void*)0,(void*)0,(void*)0,&l_4503},{&l_4503,(void*)0,&l_4503,(void*)0,&l_4503},{&l_4503,&l_4503,(void*)0,(void*)0,&l_4503},{(void*)0,(void*)0,&l_4503,(void*)0,&l_4503},{(void*)0,(void*)0,&l_4503,&l_4503,&l_4503}},{{&l_4503,&l_4503,&l_4503,(void*)0,&l_4503},{(void*)0,&l_4503,&l_4503,(void*)0,(void*)0},{(void*)0,&l_4503,(void*)0,&l_4503,(void*)0},{&l_4503,&l_4503,(void*)0,&l_4503,&l_4503},{&l_4503,&l_4503,&l_4503,&l_4503,(void*)0}},{{&l_4503,(void*)0,(void*)0,&l_4503,&l_4503},{&l_4503,(void*)0,(void*)0,(void*)0,&l_4503},{(void*)0,&l_4503,&l_4503,&l_4503,&l_4503},{&l_4503,(void*)0,&l_4503,&l_4503,(void*)0},{(void*)0,(void*)0,&l_4503,&l_4503,&l_4503}}};
            int32_t **l_4507[5];
            int32_t **l_4508 = (void*)0;
            int32_t **l_4509 = &l_4380[0][6];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_4507[i] = (void*)0;
            for (g_1099 = 0; (g_1099 <= 7); g_1099 += 1)
            { /* block id: 2059 */
                int32_t *l_4359 = &g_53;
                const uint64_t ***l_4387 = (void*)0;
                const uint64_t ****l_4386 = &l_4387;
                const uint64_t *****l_4385 = &l_4386;
                uint32_t **l_4415[5][4] = {{(void*)0,&g_207,&g_207,(void*)0},{&g_207,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_207},{(void*)0,&g_207,(void*)0,(void*)0},{&g_207,&g_207,&g_207,(void*)0}};
                int32_t l_4438[8] = {1L,1L,0xB1611EAFL,1L,1L,0xB1611EAFL,1L,1L};
                int8_t *l_4470 = &g_264;
                int i, j;
                /*bef_stmt:149713*/
if ((0x25EDD9D2L < /*TAG114:STA*/((uint64_t)(realsmith_proxy_yfCVS((int)(p_3)+(-20), (char)(p_3)+(-114))+(int)(p_3)-(135))+p_3)/*TAG114:END:p_3*/))
                { /* block id: 2060 */
                    /*bef_stmt:146941*/
return (Tag115(/*uint32_t:0:0:146941:e*/*g_3680));
/*aft_stmt:146941*/
                }
                else
                { /* block id: 2062 */
                    uint32_t l_4356[10][7] = {{0xD4D91C86L,0x2491B11EL,0x2491B11EL,0xD4D91C86L,2UL,3UL,3UL},{0x2491B11EL,18446744073709551615UL,18446744073709551615UL,0xD1877D82L,0x7971F32BL,0x88A00C09L,18446744073709551615UL},{0x88A00C09L,0x7971F32BL,0xD1877D82L,18446744073709551615UL,18446744073709551615UL,0x2491B11EL,3UL},{3UL,2UL,3UL,0xD4D91C86L,0xD4D91C86L,3UL,2UL},{0x7971F32BL,2UL,0x9D459D4DL,0xEFCA7837L,0x290F4857L,0x7971F32BL,0xDB3304FCL},{0x340BA3B8L,0x7971F32BL,0x5F2E9763L,3UL,0xDB3304FCL,1UL,0xD4D91C86L},{0x654D1EA4L,18446744073709551615UL,3UL,0xEFCA7837L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xD4D91C86L,0x819FA923L,0xD4D91C86L,18446744073709551615UL,18446744073709551615UL,0x5F2E9763L},{18446744073709551615UL,0x290F4857L,3UL,18446744073709551615UL,3UL,1UL,0x290F4857L},{0x7971F32BL,0xDB3304FCL,18446744073709551609UL,0xD1877D82L,18446744073709551606UL,0x7971F32BL,0x4CEEB745L}};
                    int32_t l_4399 = 0L;
                    int32_t *****l_4431 = &g_3960[0][1];
                    int32_t l_4433 = 0x1F6ABFA4L;
                    int32_t l_4437 = 0xC8E84F86L;
                    int i, j;
                    /*bef_stmt:148594*/
if ((safe_rshift_func_int16_t_s_s(/*TAG116:STA*/((uint64_t)(realsmith_proxy_Kdx9f((unsigned long)(p_3)+(-105))+(int)(p_3)-(98))+p_3)/*TAG116:END:p_3*/, 8)))
                    { /* block id: 2063 */
                        /*bef_stmt:148103*/
return Tag117(/*uint64_t:163280:163280:148103:e*/p_5);
/*aft_stmt:148103*/
                    }
                    else
                    { /* block id: 2065 */
                        uint64_t l_4377 = 0xD9C9107867BFCD2ELL;
                        uint16_t *l_4379 = &g_979;
                        int32_t **l_4382 = &l_4380[0][6];
                        ++l_4356[5][5];
                        l_4359 = (void*)0;
                        /*bef_stmt:148553*/
/*bef_stmt:148553*/
/*bef_stmt:148553*/
/*bef_stmt:148553*/
/*bef_stmt:148553*/
/*bef_stmt:148553*/
(*l_4382) = func_33(func_33(func_33((*g_121), /*TAG118:STA*/((int64_t)(realsmith_mx1D0((char)(l_4378)+(10))+(int)(l_4378)-(5))+l_4378)/*TAG118:END:l_4378*/, l_4379, l_4380[0][6], /*TAG119:STA*/((int64_t)(realsmith_joJSJ((int)(l_4378)+(93))+(long)(l_4378)-(-62))+l_4378)/*TAG119:END:l_4378*/), Tag120(/*int64_t:158998:163280:148553:e*/l_4376[6]), (*g_874), (***g_2882), Tag121(/*uint32_t:149702:151571:148553:e*/l_4356[5][5])), /*TAG122:STA*/((int64_t)(realsmith_proxy_JJzif((int)(l_4376[7])+(-172189723), (char)(l_4376[7])+(93), 26)+(int)(l_4376[7])-(172189682))+l_4376[7])/*TAG122:END:l_4376[7]*/, l_4381, (*g_121), /*TAG123:STA*/((int32_t)(realsmith_proxy_4X56f((unsigned char)(l_4355)+(-193))-(2))+l_4355)/*TAG123:END:l_4355*/);
/*aft_stmt:148553*/
/*aft_stmt:148553*/
/*aft_stmt:148553*/
/*aft_stmt:148553*/
/*aft_stmt:148553*/
/*aft_stmt:148553*/
                        /*bef_stmt:148581*/
if ((/*TAG124:STA*/((int32_t)(realsmith_hiqF9((unsigned int)(**g_2063)+(-600174491))+(unsigned int)(**g_2063)-(600174559))+**g_2063)/*TAG124:END:**g_2063*/))
                            continue;
/*aft_stmt:148581*/
                    }
/*aft_stmt:148594*/
                    for (g_1621 = 0; (g_1621 <= 2); g_1621 += 1)
                    { /* block id: 2076 */
                        uint32_t ***l_4395 = &l_4394;
                        int32_t l_4398 = 0L;
                        int i, j;
                        /*bef_stmt:149263*/
/*bef_stmt:149263*/
/*bef_stmt:149263*/
/*bef_stmt:149263*/
/*bef_stmt:149263*/
/*bef_stmt:149263*/
/*bef_stmt:149263*/
/*bef_stmt:149263*/
/*bef_stmt:149263*/
/*bef_stmt:149263*/
l_4399 ^= (Tag125(/*uint32_t:149702:151571:149263:e*/l_4356[5][5]) <= (safe_sub_func_uint16_t_u_u((g_1356[g_1621][g_1099] = ((g_1824[(g_1621 + 1)][g_1097] = ((l_4385 != (void*)0) , (safe_div_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((Tag126(/*const int8_t:0:0:149263:e*/*g_945)), ((((safe_div_func_int64_t_s_s((((*l_4395) = l_4394) != &g_3680), (safe_lshift_func_int16_t_s_u(Tag127(/*uint64_t:163280:163280:149263:e*/p_3), (Tag128(/*uint16_t:0:0:149263:e*/***g_873)))))) , ((Tag129(/*int32_t:0:0:149263:e*/*g_1296)) , 0x317F8D5C8C23CBCCLL)) | Tag130(/*uint64_t:163280:163280:149263:e*/p_3)) < Tag131(/*uint32_t:163280:163280:149263:e*/p_4)))) < Tag132(/*int32_t:149359:149702:149263:e*/l_4398)) , (Tag133(/*uint8_t:0:0:149263:e*/*g_2382))), Tag134(/*uint64_t:163280:163280:149263:e*/p_3))))) != 18446744073709551607UL)), 0x92EAL)));
/*aft_stmt:149263*/
/*aft_stmt:149263*/
/*aft_stmt:149263*/
/*aft_stmt:149263*/
/*aft_stmt:149263*/
/*aft_stmt:149263*/
/*aft_stmt:149263*/
/*aft_stmt:149263*/
/*aft_stmt:149263*/
/*aft_stmt:149263*/
                        /*bef_stmt:149277*/
if (Tag135(/*uint32_t:163280:163280:149277:e*/p_6))
                            continue;
/*aft_stmt:149277*/
                        (*g_975) = (safe_rshift_func_uint8_t_u_u(((void*)0 != l_4402), 4));
                    }
                    for (g_175 = 1; (g_175 <= 7); g_175 += 1)
                    { /* block id: 2086 */
                        uint32_t l_4422 = 0x97C9119BL;
                        int32_t **l_4425 = &l_4380[5][4];
                        int32_t l_4432 = 0xDD5406FBL;
                        int32_t l_4435 = 0x21DC1C6DL;
                        int32_t l_4439[6] = {0x6BF581F8L,0x6BF581F8L,0x6BF581F8L,0x6BF581F8L,0x6BF581F8L,0x6BF581F8L};
                        int i;
                    }
                }
/*aft_stmt:149713*/
                /*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
/*bef_stmt:150454*/
l_4438[5] ^= (safe_add_func_uint16_t_u_u(((Tag136(/*const int8_t:0:0:150454:e*/*g_945)) ^ (Tag137(/*uint32_t:163280:163280:150454:e*/p_6) < (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((0x7FD0L <= (safe_add_func_uint8_t_u_u(((*g_4419)--), (safe_div_func_int8_t_s_s(((*l_4470) = (safe_add_func_uint8_t_u_u((&g_3960[0][0] == (l_4421 = &g_3960[0][0])), (Tag138(/*uint64_t:163280:163280:150454:e*/p_3) && ((safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_4467 != (void*)0), ((((*g_1232) = (((Tag139(/*int32_t:0:0:150454:e*/**g_2063)) , 0xB0C756BEL) , (void*)0)) != l_4468) & (Tag140(/*const int8_t:0:0:150454:e*/*g_945))))), 4)), Tag141(/*uint32_t:163280:163280:150454:e*/p_6))) != 0L), Tag142(/*int64_t:158998:163280:150454:e*/l_4469[0]))) || (Tag143(/*uint32_t:0:0:150454:e*/***g_1809))))))), Tag144(/*uint64_t:163280:163280:150454:e*/p_5)))))) & Tag145(/*uint32_t:163280:163280:150454:e*/p_6)), Tag146(/*uint32_t:163280:163280:150454:e*/p_4))), Tag147(/*uint64_t:163280:163280:150454:e*/p_5))))), (Tag148(/*uint16_t:0:0:150454:e*/***g_873))));
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
/*aft_stmt:150454*/
                /*bef_stmt:150493*/
(***g_2883) &= Tag149(/*uint32_t:163280:163280:150493:e*/p_4);
/*aft_stmt:150493*/
                for (g_1973 = 0; (g_1973 <= 2); g_1973 += 1)
                { /* block id: 2105 */
                    int32_t l_4480[8][2] = {{0x789A12C2L,0x789A12C2L},{9L,0xD7B51BC2L},{0x2513B736L,0xD7B51BC2L},{9L,0x789A12C2L},{0x789A12C2L,9L},{0xD7B51BC2L,0x2513B736L},{0xD7B51BC2L,9L},{0x789A12C2L,0x789A12C2L}};
                    int i, j;
                    /*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
/*bef_stmt:151555*/
(*g_433) = (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((~((0x7AL <= Tag150(/*uint32_t:163280:163280:151555:e*/p_6)) || (g_1824[(g_1097 + 2)][g_1097] ^= ((void*)0 != &g_3960[0][0])))) != Tag151(/*uint64_t:163280:163280:151555:e*/p_3)), (safe_mod_func_int32_t_s_s(((Tag152(/*uint8_t:0:0:151555:e*/*g_2382)) | ((65534UL < ((safe_rshift_func_uint16_t_u_u((((*g_3154) = Tag153(/*uint64_t:163280:163280:151555:e*/p_3)) > ((((0L > Tag154(/*uint32_t:163280:163280:151555:e*/p_4)) == Tag155(/*int32_t:151559:151571:151555:e*/l_4480[6][0])) < Tag156(/*uint64_t:163280:163280:151555:e*/p_3)) , Tag157(/*int32_t:151559:151571:151555:e*/l_4480[5][0]))), (Tag158(/*uint16_t:0:0:151555:e*/*g_31)))) , Tag159(/*uint32_t:163280:163280:151555:e*/p_4))) ^ (Tag160(/*const int16_t:0:0:151555:e*/**g_531)))), (Tag161(/*uint32_t:0:0:151555:e*/*g_207)))))) , 0xA625L), Tag162(/*uint32_t:163280:163280:151555:e*/p_6)));
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
/*aft_stmt:151555*/
                }
            }
            --l_4481[5];
            /*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
/*bef_stmt:152424*/
(*l_4509) = func_33((((*g_485) &= (((((l_4484[1][0] == (g_4505 = (((/*TAG163:STA*/((int32_t)(realsmith_proxy_wePPT((long)(*g_122)+(-600174634), (unsigned long)(*g_122)+(-600174537))+(int)(*g_122)-(600174559))+*g_122)/*TAG163:END:*g_122*/) < ((/*TAG164:STA*/((int8_t)(realsmith_z26kK()-(1))+*g_945)/*TAG164:END:*g_945*/) <= (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((l_4490 = l_4489) == (g_4491 = &g_3627)), (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((***g_3152) = ((***l_4421) != l_4496)) > (safe_sub_func_uint64_t_u_u(18446744073709551609UL, ((safe_div_func_uint16_t_u_u((0x84B1FF86L || (-4L)), /*TAG165:STA*/((uint16_t)(realsmith_7aoDB((int)(l_4501[5][1][2])+(-15189), (int)(l_4501[5][1][2])+(-15234), (int)(l_4501[5][1][2])+(-15194), (int)(l_4501[5][1][2])+(-15189))+(int)(l_4501[5][1][2])-(15275))+l_4501[5][1][2])/*TAG165:END:l_4501[5][1][2]*/)) == /*TAG166:STA*/((uint64_t)(realsmith_proxy_LGCmE((int)(p_5)+(-32), (int)(p_5)+(12))+(int)(p_5)-(12))+p_5)/*TAG166:END:p_5*/)))), 0x69L)), /*TAG167:STA*/((uint16_t)(realsmith_proxy_TU6e8((int)(l_4501[9][1][4])+(-47019))+(int)(l_4501[9][1][4])-(47001))+l_4501[9][1][4])/*TAG167:END:l_4501[9][1][4]*/)))), /*TAG168:STA*/((uint32_t)(realsmith_proxy_vVziH((int)(p_4)+(-93))+(int)(p_4)-(9))+p_4)/*TAG168:END:p_4*/)))) , (void*)0))) ^ /*TAG169:STA*/((uint32_t)(realsmith_uytAf((int)(p_6)+(-26), (long)(p_6)+(-25))+(int)(p_6)-(720000103))+p_6)/*TAG169:END:p_6*/) >= /*TAG170:STA*/((uint64_t)(realsmith_ktBLo((int)(p_3)+(-49))+(int)(p_3)-(98))+p_3)/*TAG170:END:p_3*/) , /*TAG171:STA*/((uint32_t)(realsmith_UHyid((int)(p_6)+(-98))+(int)(p_6)-(113))+p_6)/*TAG171:END:p_6*/) > 7UL)) , l_4380[7][6]), /*TAG172:STA*/((uint64_t)(realsmith_E4Fju((unsigned int)(p_3)+(-31), (unsigned int)(p_3)+(-64))+(unsigned int)(p_3)-(99))+p_3)/*TAG172:END:p_3*/, (*g_874), l_4424[1][0], /*TAG173:STA*/((uint64_t)(realsmith_proxy_6JrUO((int)(p_5)+(55), (int)(p_5)+(87), (int)(p_5)+(68))+(int)(p_5)-(1))+p_5)/*TAG173:END:p_5*/);
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
/*aft_stmt:152424*/
        }
        for (g_979 = 1; (g_979 <= 7); g_979 += 1)
        { /* block id: 2121 */
            int64_t l_4533[4];
            uint8_t l_4534[3][5][9] = {{{7UL,0UL,246UL,0UL,246UL,255UL,1UL,0UL,1UL},{254UL,1UL,0x63L,0x63L,1UL,254UL,0x3BL,0xCBL,252UL},{246UL,0x65L,0UL,0x56L,0xBDL,0UL,0UL,0xD7L,0UL},{1UL,0x82L,0xCBL,0xA8L,0x3BL,0xF5L,0x3BL,0xA8L,0xCBL},{0xD7L,0xD7L,1UL,0UL,1UL,0x65L,1UL,0UL,255UL}},{{254UL,0x74L,0x65L,249UL,0x34L,0xAEL,7UL,0x3BL,0x3BL},{255UL,0xD3L,1UL,0xBDL,1UL,0xD3L,255UL,0x2AL,0x36L},{0xD6L,7UL,0xCBL,1UL,0xA8L,0x82L,0xAEL,0xF5L,254UL},{0UL,1UL,0UL,0x78L,0x2AL,246UL,246UL,0x2AL,0x78L},{0x63L,254UL,0x63L,0x13L,0x74L,0xA8L,0x34L,0x3BL,1UL}},{{0x56L,0x78L,246UL,0x65L,0x03L,0UL,0UL,0UL,0x39L},{0xA8L,249UL,1UL,0x13L,0xCBL,254UL,0x13L,249UL,0x15L},{0xD7L,0x36L,246UL,246UL,0xBDL,1UL,1UL,0x2AL,0x03L},{0x13L,0xA8L,254UL,254UL,0x15L,7UL,1UL,7UL,0x15L},{0x39L,0xD3L,0xD3L,0x39L,0UL,0xD3L,0x56L,0xD7L,1UL}}};
            uint64_t *l_4544 = &g_1108;
            int32_t l_4547 = 0x74B452C1L;
            int32_t ***** const l_4549 = &g_2882;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_4533[i] = 0x9B29539EA0BC9406LL;
            for (g_662 = 0; (g_662 <= 7); g_662 += 1)
            { /* block id: 2124 */
                uint8_t l_4538 = 0x3DL;
                int64_t *l_4548 = &l_4469[2];
                uint64_t *** const *l_4559 = &g_3628;
                uint64_t *** const **l_4558 = &l_4559;
                int32_t l_4560[5][3] = {{0x8074B646L,0xA0B75F3DL,0xA0B75F3DL},{(-4L),(-1L),(-1L)},{0x8074B646L,0xA0B75F3DL,0xA0B75F3DL},{(-4L),(-1L),(-1L)},{0x8074B646L,0xA0B75F3DL,0xA0B75F3DL}};
                int i, j;
                for (g_362 = 1; (g_362 <= 4); g_362 += 1)
                { /* block id: 2127 */
                    int64_t l_4514 = 0xD78F751E563AC10BLL;
                    int64_t *l_4520 = &g_1824[3][0];
                    uint64_t l_4535 = 0UL;
                    int32_t l_4536[4];
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_4536[i] = 0x486E951AL;
                    /*bef_stmt:155406*/
if ((Tag174(/*int32_t:0:0:155406:e*/****g_2061)))
                        break;
/*aft_stmt:155406*/
                    /*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
/*bef_stmt:156374*/
l_4436[3][0][0] |= (safe_mul_func_int8_t_s_s((((l_4536[2] = (((safe_mul_func_uint8_t_u_u((Tag175(/*int64_t:156405:157696:156374:e*/l_4514) & (~((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((g_1356[(g_362 + 3)][g_662] &= (((-1L) != Tag176(/*uint32_t:163280:163280:156374:e*/p_4)) >= (((*l_4520) = 0x08846749EE72C5B7LL) ^ (1UL && (((safe_sub_func_int64_t_s_s(((++(**g_484)) && (((**g_121) ^= ((-6L) == (((*g_485) |= Tag177(/*uint64_t:163280:163280:156374:e*/p_3)) > (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(((((Tag178(/*uint32_t:0:0:156374:e*/**g_2328)) & ((Tag179(/*uint64_t:163280:163280:156374:e*/p_3) , 1L) != Tag180(/*uint64_t:163280:163280:156374:e*/p_3))) < (-1L)) < Tag181(/*uint32_t:163280:163280:156374:e*/p_4)), Tag182(/*int64_t:157714:158998:156374:e*/l_4533[3]))) & Tag183(/*uint32_t:163280:163280:156374:e*/p_4)), 6)), 7))))) == 0xAAFEE834L)), 0x6BDA8077B37AC638LL)) <= 0UL) < Tag184(/*uint64_t:163280:163280:156374:e*/p_3)))))), 0xDA54L)) || Tag185(/*uint32_t:163280:163280:156374:e*/p_6)), 255UL)) | Tag186(/*uint8_t:157714:158998:156374:e*/l_4534[0][4][1])))), (Tag187(/*int8_t:0:0:156374:e*/*g_4506)))) < Tag188(/*uint64_t:156405:157696:156374:e*/l_4535)) >= Tag189(/*uint32_t:163280:163280:156374:e*/p_6))) && (Tag190(/*uint32_t:0:0:156374:e*/***g_1809))) , Tag191(/*uint64_t:163280:163280:156374:e*/p_3)), 0xBFL));
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
/*aft_stmt:156374*/
                    (*g_122) = 0x1EB2B0CBL;
                }
                /*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
/*bef_stmt:157062*/
(****g_2061) = (((/*TAG192:STA*/((uint64_t)(realsmith_oCWs7((long)(p_3)+(-41), (long)(p_3)+(-5))+(int)(p_5)+(int)(**g_2328)+(int)(p_3)+(int)(p_6)+(int)(***g_1809)-(7570543))+p_5)/*TAG192:END:p_5*/ & (+((((/*TAG193:STA*/((uint8_t)(realsmith_uEnXF((unsigned long)(l_4538)+(-36))+(long)(l_4538)-(62))+l_4538)/*TAG193:END:l_4538*/ & (safe_rshift_func_int16_t_s_s((/*TAG194:STA*/((int16_t)(realsmith_proxy_dtgev((char)(**g_2328)+(-28))+(unsigned long)(***g_3152)+(unsigned long)(***g_1809)+(unsigned long)(**g_2328)+(unsigned long)(*g_4506)-(7570393))+***g_3152)/*TAG194:END:***g_3152*/), (((((*l_4548) = (l_4547 |= ((~(safe_lshift_func_uint8_t_u_s(((((/*TAG195:STA*/((uint64_t)(realsmith_proxy_VVXmj((int)(p_3)+(-149))+(int)(p_3)-(99))+p_3)/*TAG195:END:p_3*/ , l_4544) == (void*)0) <= /*TAG196:STA*/((uint64_t)(realsmith_G1k8X()+(int)(p_3)-(98))+p_3)/*TAG196:END:p_3*/) >= (((*l_4544) &= (safe_sub_func_int64_t_s_s(/*TAG197:STA*/((uint32_t)(realsmith_E6ddE((int)(p_6)+(-54))+(int)(p_6)-(98))+p_6)/*TAG197:END:p_6*/, ((((/*TAG198:STA*/((int16_t)(realsmith_UEybO((int)(*g_532)+(31906), (int)(*g_532)+(31915))+(long)(*g_532)-(-30652))+*g_532)/*TAG198:END:*g_532*/) && (/*TAG199:STA*/((uint16_t)(realsmith_proxy_njNoc((int)(*g_31)+(-57297), (int)(*g_31)+(-57258))+(int)(*g_31)-(57309))+*g_31)/*TAG199:END:*g_31*/)) | (-1L)) > 0xA9L)))) == (/*TAG200:STA*/((uint64_t)(realsmith_3ZGyl((int)(*g_485)+(89), (unsigned int)(*g_485)+(97), (unsigned int)(*g_485)+(10), (int)(*g_485)+(2))+(int)(*g_485)-(2))+*g_485)/*TAG200:END:*g_485*/))), 6))) , (-9L)))) , l_4549) == &g_2061) && 0x329AB924L)))) != 0x36184115L) > (/*TAG201:STA*/((uint8_t)(realsmith_Z8hTi((int)(*g_4419)+(84))+(int)(*g_4419)-(1))+*g_4419)/*TAG201:END:*g_4419*/)) && (/*TAG202:STA*/((uint32_t)(realsmith_lsz9L()+(int)(***g_1809)-(3785173))+***g_1809)/*TAG202:END:***g_1809*/)))) , /*TAG203:STA*/((uint8_t)(realsmith_proxy_62AaG((char)(l_4538)+(-82))+((char)(l_4538)-(61))-(95))+l_4538)/*TAG203:END:l_4538*/) != /*TAG204:STA*/((uint8_t)(realsmith_proxy_cYH0f((int)(l_4538)+(-109), (int)(l_4538)+(-159), (int)(l_4538)+(15), (unsigned int)(l_4538)+(14), (int)(l_4538)+(-160), (int)(l_4538)+(-64))+(int)(l_4538)-(62))+l_4538)/*TAG204:END:l_4538*/);
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
/*aft_stmt:157062*/
                for (g_362 = 0; (g_362 <= 7); g_362 += 1)
                { /* block id: 2144 */
                    int8_t l_4555 = 0x12L;
                    /*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
/*bef_stmt:157679*/
(****g_2061) = ((safe_lshift_func_int16_t_s_u((/*TAG205:STA*/((int16_t)(realsmith_IvXFT((int)(**g_3153)+(43))+(int)(**g_3153)-(3))+**g_3153)/*TAG205:END:**g_3153*/), ((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int8_t_s_u((((Tag206(/*int32_t:157714:158998:157679:e*/*****l_4549)) | ((0x135130D1L != ((/*TAG207:STA*/((int16_t)(realsmith_proxy_FsaOt((int)(*g_532)+(31797), (int)(*g_532)+(31903), (char)(*g_532)+(-77), (char)(*g_532)+(-27))+(int)(*g_532)-(-31876))+*g_532)/*TAG207:END:*g_532*/) != /*TAG208:STA*/((int8_t)(realsmith_proxy_JkBk3((int)(***g_1809)+(-3785086))+(char)(l_4555)+(char)(***g_3152)+((char)(p_3)-(98))+((char)(p_6)-(98))+(char)(***g_1809)-(24))+l_4555)/*TAG208:END:l_4555*/)) <= (safe_mod_func_int32_t_s_s(((l_4560[0][0] = (((/*TAG209:STA*/((uint32_t)(realsmith_proxy_9Duel((char)(p_4)+(30))+(int)(p_4)-(26))+p_4)/*TAG209:END:p_4*/ , ((l_4558 = (/*TAG210:STA*/((int8_t)(realsmith_proxy_Rskvu((char)(l_4555)+(-81))+(int)(l_4555)-(29))+l_4555)/*TAG210:END:l_4555*/ , l_4558)) != (g_1637 = &g_3627))) & 0L) == /*TAG211:STA*/((uint32_t)(realsmith_proxy_ZWFxj((char)(p_6)+(-139), (char)(p_6)+(-131))+((char)(p_6)-(98))-(48))+p_6)/*TAG211:END:p_6*/)) && /*TAG212:STA*/((int8_t)(realsmith_Hc4at((int)(l_4555)+(-11))+(int)(l_4555)-(18))+l_4555)/*TAG212:END:l_4555*/), (Tag213(/*int32_t:0:0:157679:e*/**g_2063)))))) == /*TAG214:STA*/((uint8_t)(realsmith_mglXS((int)(p_6)+(-64))+(int)(l_4538)+(int)(p_3)+(int)(*g_31)+(int)(p_6)+(int)(*g_4419)-(57567))+l_4538)/*TAG214:END:l_4538*/), /*TAG215:STA*/((int8_t)(realsmith_proxy_rPp6I((char)(*g_532)+(-25))+(int)(l_4555)+(int)(*g_4419)+(int)(*g_532)+(int)(*g_31)+(int)(l_4538)-(25511))+l_4555)/*TAG215:END:l_4555*/)) || /*TAG216:STA*/((uint64_t)(realsmith_Jnptk((char)(p_5)+(43))+(int)(p_5)-(-1))+p_5)/*TAG216:END:p_5*/))) ^ 255UL))) <= /*TAG217:STA*/((uint8_t)(realsmith_Fks4P((long)(l_4538)+(-38))+(long)(l_4538)-(79))+l_4538)/*TAG217:END:l_4538*/);
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
/*aft_stmt:157679*/
                }
            }
        }
        /*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
/*bef_stmt:158647*/
l_4580 &= (g_1652 = (+(l_4436[3][0][0] = (((*l_4579) = ((*l_4578) = (/*TAG218:STA*/((uint32_t)(realsmith_BwL19()+(int)(p_6)+(int)(**g_3153)+(int)(p_4)+(int)(*g_532)+(int)(*g_31)-(25546))+p_6)/*TAG218:END:p_6*/ | ((**g_484) = ((g_215 = ((safe_mod_func_uint32_t_u_u(0x0CCAA974L, ((*g_207) = (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((/*TAG219:STA*/((uint32_t)(realsmith_asafu((int)(p_4)+(-5), (int)(*g_532)+(31949))+(int)(p_4)+(int)(*g_31)+(int)(*g_532)+(int)(p_6)+(int)(**g_3153)-(25540))+p_4)/*TAG219:END:p_4*/ >= (((/*TAG220:STA*/((int16_t)(realsmith_proxy_JEuwk((int)(*g_532)+(31908), (int)(*g_532)+(31795), (int)(**g_2063)+(-6))+(int)(**g_4162)+(int)(**g_2063)+(int)(*g_532)+(int)(**g_3153)-(-31866))+**g_4162)/*TAG220:END:**g_4162*/) || ((((*g_975) = (((((safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_s(1L, 3)))) , (/*TAG221:STA*/((uint16_t)(realsmith_5INLj((int)(***g_873)+(-57298))+(int)(***g_873)+(int)(*g_532)+(int)(**g_3153)+(int)(**g_2063)+(int)(**g_4162)-(25435))+***g_873)/*TAG221:END:***g_873*/)) < ((p_5 = ((safe_sub_func_uint16_t_u_u(((l_4573 != l_4574) | ((((((*l_4575) = ((*g_4506) = /*TAG222:STA*/((uint32_t)(realsmith_kauN8((int)(*g_532)+(31889))+(int)(p_6)+(int)(*g_532)+(int)(**g_2063)+(int)(p_5)+(int)(**g_3153)-(-31781))+p_6)/*TAG222:END:p_6*/)) , (/*TAG223:STA*/((int16_t)(realsmith_JD05o((int)(**g_3153)+(67))+(int)(**g_3153)-(1))+**g_3153)/*TAG223:END:**g_3153*/)) ^ (/*TAG224:STA*/((uint16_t)(realsmith_p2Tx3((int)(*g_31)+(-57301))+(int)(*g_31)-(57341))+*g_31)/*TAG224:END:*g_31*/)) && 0x624D5447L) != /*TAG225:STA*/((uint32_t)(realsmith_S3HuG()+(int)(p_6)-(98))+p_6)/*TAG225:END:p_6*/)), /*TAG226:STA*/((uint64_t)(realsmith_4akOJ((int)(p_3)+(0))+(int)(p_3)-(196))+p_3)/*TAG226:END:p_3*/)) != /*TAG227:STA*/((uint64_t)(realsmith_bhBLn((unsigned long)(p_3)+(-88), (unsigned long)(p_3)+(0))+(unsigned long)(p_3)-(2936))+p_3)/*TAG227:END:p_3*/)) | /*TAG228:STA*/((uint32_t)(realsmith_Onpw1((int)(p_6)+(-53))+(int)(p_6)-(337598))+p_6)/*TAG228:END:p_6*/)) < /*TAG229:STA*/((int8_t)(realsmith_proxy_4FPor((unsigned char)(l_4576[1][0][0])+(-280), (int)(l_4576[1][0][0])+(14), (char)(l_4576[1][0][0])+(94), (int)(l_4576[1][0][0])+(20), (unsigned char)(l_4576[1][0][0])+(-250), (int)(l_4576[1][0][0])+(82), 8, (int)(l_4576[1][0][0])+(50))+(int)(l_4576[1][0][0])-(-11))+l_4576[1][0][0])/*TAG229:END:l_4576[1][0][0]*/) & /*TAG230:STA*/((uint64_t)(realsmith_ZkGCs((int)(p_3)+(-13), (int)(p_3)+(-42))+(int)(p_3)-(211))+p_3)/*TAG230:END:p_3*/)) | /*TAG231:STA*/((uint32_t)(realsmith_KxpZ2((int)(p_6)+(-59))+(int)(p_6)-(102))+p_6)/*TAG231:END:p_6*/) > Tag232(/*uint32_t:163280:163280:158647:e*/p_4))) , /*TAG233:STA*/((uint32_t)(realsmith_01i8A((int)(p_4)+(48), (int)(p_4)+(68))+(int)(p_4)-(65))+p_4)/*TAG233:END:p_4*/)), /*TAG234:STA*/((uint32_t)(realsmith_AyXA6((int)(p_4)+(3), (int)(p_4)+(76))+(long)(p_4)-(24))+p_4)/*TAG234:END:p_4*/)), /*TAG235:STA*/((uint32_t)(realsmith_NquDV((int)(p_4)+(17))+(int)(p_4)-(8))+p_4)/*TAG235:END:p_4*/))))) | 1UL)) | /*TAG236:STA*/((uint32_t)(realsmith_7xyOw((int)(p_4)+(19))+(int)(p_4)-(8))+p_4)/*TAG236:END:p_4*/))))) != /*TAG237:STA*/((uint32_t)(realsmith_proxy_pcL4T((char)(p_4)+(4))+(int)(p_4)-(8))+p_4)/*TAG237:END:p_4*/))));
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
/*aft_stmt:158647*/
        /*bef_stmt:158689*/
if ((/*TAG238:STA*/((int32_t)(realsmith_proxy_nacNZ((char)(****g_2061)+(32), (char)(****g_2061)+(-35), (unsigned long)(****g_2061)+(26))+(unsigned long)(****g_2061)-(3))+****g_2061)/*TAG238:END:****g_2061*/))
            break;
/*aft_stmt:158689*/
        for (g_2297 = 0; (g_2297 <= 2); g_2297 += 1)
        { /* block id: 2167 */
            int32_t *l_4581 = &g_1142;
            uint32_t ****l_4582 = &g_2327;
            uint32_t *****l_4583 = (void*)0;
            uint32_t *****l_4584 = (void*)0;
            uint32_t *****l_4585 = &l_4582;
            (**g_2883) = l_4581;
            (*l_4585) = l_4582;
        }
    }
    l_4586[2][3][2]--;
    for (g_1621 = 3; (g_1621 == 10); ++g_1621)
    { /* block id: 2175 */
        int32_t l_4597 = 0x45B81726L;
        int32_t *****l_4607 = &g_3960[0][1];
        int16_t *l_4610 = &g_158;
        uint16_t ** const *l_4613[5][5][9] = {{{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874,&g_874,(void*)0},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874}},{{&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874,&g_874,(void*)0},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874,&g_874,(void*)0}},{{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874,&g_874,(void*)0},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874}},{{(void*)0,&g_874,(void*)0,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874},{(void*)0,(void*)0,&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874},{&g_874,(void*)0,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874}},{{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874},{(void*)0,(void*)0,&g_874,&g_874,&g_874,&g_874,(void*)0,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874},{&g_874,(void*)0,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874},{&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874,&g_874}}};
        uint16_t ** const **l_4612 = &l_4613[4][1][0];
        int32_t l_4635 = (-9L);
        int16_t *****l_4700 = &g_4640;
        int32_t l_4706 = (-2L);
        const uint8_t l_4747 = 0xAEL;
        uint8_t *l_4830 = (void*)0;
        int i, j, k;
    }
    ++l_4968;
    /*bef_stmt:163278*/
return (/*TAG239:STA*/((uint32_t)(realsmith_VIFGV((int)(*g_3680)+(-1844562361))+(unsigned int)(*g_3680)-(1844562417))+*g_3680)/*TAG239:END:*g_3680*/);
/*aft_stmt:163278*/
}


/* ------------------------------------------ */
/* 
 * reads : g_121 g_122 g_2882 g_2883 g_237 g_53 g_2062 g_2063 g_2327 g_2328 g_1652 g_532 g_158 g_874 g_31 g_2016 g_4347 g_485 g_86 g_975
 * writes: g_122 g_237 g_53 g_207 g_977 g_2016 g_4347
 */
static int8_t  func_11(uint64_t  p_12, uint16_t  p_13, uint32_t  p_14, uint32_t  p_15)
{ /* block id: 1929 */
    uint16_t *l_4080 = &g_3524[0];
    int32_t l_4081 = (-1L);
    uint16_t ****l_4083 = &g_873;
    uint16_t *****l_4082 = &l_4083;
    int8_t *l_4088[2];
    int32_t l_4089 = 0x84A7A107L;
    uint8_t l_4090 = 5UL;
    uint32_t l_4091 = 1UL;
    int32_t **l_4305 = &g_1296;
    int16_t ***l_4313 = &g_3153;
    uint8_t * const *l_4330[2][10][9] = {{{&g_2382,&g_2382,(void*)0,&g_2382,(void*)0,&g_2382,&g_2382,(void*)0,&g_2382},{(void*)0,(void*)0,(void*)0,&g_2382,&g_2382,(void*)0,(void*)0,(void*)0,&g_2382},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_2382,(void*)0,&g_2382,(void*)0,(void*)0,&g_2382,(void*)0,&g_2382},{(void*)0,(void*)0,&g_2382,&g_2382,(void*)0,(void*)0,(void*)0,&g_2382,&g_2382},{(void*)0,(void*)0,&g_2382,(void*)0,&g_2382,(void*)0,(void*)0,&g_2382,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_2382,&g_2382,(void*)0,(void*)0,(void*)0,&g_2382,&g_2382,(void*)0},{&g_2382,(void*)0,&g_2382,(void*)0,&g_2382,&g_2382,(void*)0,&g_2382,(void*)0},{&g_2382,(void*)0,(void*)0,(void*)0,(void*)0,&g_2382,(void*)0,(void*)0,(void*)0}},{{&g_2382,&g_2382,(void*)0,&g_2382,(void*)0,&g_2382,&g_2382,(void*)0,&g_2382},{(void*)0,(void*)0,(void*)0,&g_2382,&g_2382,(void*)0,(void*)0,(void*)0,&g_2382},{(void*)0,(void*)0,(void*)0,&g_2382,&g_2382,&g_2382,(void*)0,(void*)0,&g_2382},{&g_2382,(void*)0,(void*)0,(void*)0,&g_2382,&g_2382,(void*)0,(void*)0,(void*)0},{(void*)0,&g_2382,(void*)0,(void*)0,&g_2382,(void*)0,&g_2382,(void*)0,(void*)0},{&g_2382,&g_2382,(void*)0,(void*)0,(void*)0,&g_2382,&g_2382,(void*)0,(void*)0},{&g_2382,&g_2382,&g_2382,(void*)0,(void*)0,&g_2382,&g_2382,&g_2382,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint32_t *l_4336 = &g_72[3][2][4];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_4088[i] = &g_1716;
    (*g_121) = (*g_121);
    /*bef_stmt:171850*/
/*bef_stmt:171850*/
/*bef_stmt:171850*/
/*bef_stmt:171850*/
/*bef_stmt:171850*/
/*bef_stmt:171850*/
/*bef_stmt:171850*/
if (((****g_2882) |= ((((((void*)0 != l_4080) < (1L || (/*TAG240:STA*/((int32_t)(realsmith_proxy_Cugah((int)(*g_31)+(-57334), (int)(**g_3153)+(44), (char)(l_4081)+(81))+(int)(l_4081)+(int)(*g_3680)+(int)(*g_31)+(int)(**g_4162)+(int)(**g_3153)-(1844619725))+l_4081)/*TAG240:END:l_4081*/ != ((l_4082 != (void*)0) != ((safe_add_func_uint64_t_u_u((((4L & 0x8A80E8F53231B139LL) < ((safe_lshift_func_int8_t_s_u((l_4089 = /*TAG241:STA*/((int32_t)(realsmith_proxy_D1PhE((char)(*g_3680)+(52))+(char)(l_4081)+(char)(**g_3153)+(char)(*g_31)+(char)(*g_3680)+(char)(***g_873)-(-51))+l_4081)/*TAG241:END:l_4081*/), 4)) <= 0L)) , /*TAG242:STA*/((uint32_t)(realsmith_proxy_WTLGp((int)(l_4081)+(33), (int)(*g_3680)+(-1844562417))+(int)(p_15)+(int)(*g_31)+(int)(l_4081)+(int)(*g_3680)+(int)(**g_3153)-(1844619758))+p_15)/*TAG242:END:p_15*/), Tag243(/*uint16_t:171868:171868:171850:e*/p_13))) || /*TAG244:STA*/((uint8_t)(realsmith_proxy_ZvfjM((char)(l_4081)+(-2), (unsigned int)(l_4090)+(-1))+(unsigned int)(l_4090)+(unsigned int)(*g_3680)+(unsigned int)(*g_31)+((unsigned int)(l_4081)-(4294967295))+(unsigned int)(p_15)-(1910011427))+l_4090)/*TAG244:END:l_4090*/))))) && /*TAG245:STA*/((uint32_t)(realsmith_proxy_mkPc2((char)(*g_3680)+(79), (int)(l_4081)+(1), (unsigned int)(l_4090)+(57))+(int)(l_4091)+(int)(*g_3680)+(int)(l_4081)+(int)(l_4090)-(1844562422))+l_4091)/*TAG245:END:l_4091*/) ^ /*TAG246:STA*/((uint32_t)(realsmith_rZ1U7((long)(l_4090)+(66), (long)(l_4091)+(47))+(long)(l_4091)+(long)(l_4090)+(long)(p_15)+(long)(l_4081)-(84))+l_4091)/*TAG246:END:l_4091*/) | 0x4ADFL)))
    { /* block id: 1933 */
        int16_t *l_4098 = &g_2111[3][1][0];
        int32_t ****l_4144 = &g_2883;
        int32_t l_4147[5] = {8L,8L,8L,8L,8L};
        int16_t l_4175 = (-2L);
        int64_t l_4240 = 0xC401A9AB8E7E6098LL;
        int32_t *l_4253 = &g_2659[5][8][1];
        int8_t l_4260 = 0x3AL;
        int i;
        for (p_13 = 0; (p_13 == 29); p_13++)
        { /* block id: 1936 */
            uint16_t l_4120 = 65533UL;
            int32_t l_4130 = 1L;
            int32_t l_4146 = 9L;
            int32_t l_4148 = 0x9EDECAD1L;
            int64_t ** const l_4190 = &g_406;
            int32_t l_4192 = 0xB076F311L;
            int32_t *l_4243 = &l_4148;
            int64_t ****l_4302 = &g_924;
            int32_t **l_4309 = &g_1296;
        }
    }
    else
    { /* block id: 2027 */
        int16_t ***l_4310 = (void*)0;
        int16_t ****l_4311[3][1];
        int16_t ***l_4312[1][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int16_t *l_4317[7];
        int16_t ** const l_4316[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t ** const *l_4315[1][5];
        int16_t ** const **l_4314 = &l_4315[0][2];
        uint16_t l_4323 = 3UL;
        int32_t ** const *l_4335 = &g_3604;
        int32_t l_4341[1][7] = {{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_4311[i][j] = &l_4310;
        }
        for (i = 0; i < 7; i++)
            l_4317[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_4315[i][j] = &l_4316[3];
        }
        (***g_2062) = ((l_4313 = (l_4312[0][3][0] = l_4310)) == ((*l_4314) = &g_3153));
        for (p_14 = 0; (p_14 > 22); p_14 = safe_add_func_uint32_t_u_u(p_14, 6))
        { /* block id: 2034 */
            int32_t * const l_4320 = &g_1652;
            uint8_t l_4327 = 0x59L;
            const uint8_t *l_4332 = &g_2647[4];
            const uint8_t **l_4331 = &l_4332;
            int32_t ** const *l_4334 = &l_4305;
            int32_t *l_4337 = &g_237;
            int32_t **l_4338 = &g_977;
            int32_t l_4345 = 0xFB41EFD5L;
            int32_t l_4346 = 0xD8D5030DL;
            /*bef_stmt:170787*/
/*bef_stmt:170787*/
/*bef_stmt:170787*/
/*bef_stmt:170787*/
(*l_4338) = func_33(l_4320, (((safe_mul_func_uint16_t_u_u(((((**g_2327) = l_4336) != (void*)0) ^ (Tag247(/*int32_t:171700:171830:170787:e*/*l_4320))), (Tag248(/*const int16_t:0:0:170787:e*/*g_532)))) != (Tag249(/*int32_t:171700:171830:170787:e*/*l_4320))) , p_14), (*g_874), l_4337, (Tag250(/*const int16_t:0:0:170787:e*/*g_532)));
/*aft_stmt:170787*/
/*aft_stmt:170787*/
/*aft_stmt:170787*/
/*aft_stmt:170787*/
            /*bef_stmt:170810*/
if (Tag251(/*uint32_t:171868:171868:170810:e*/p_15))
                continue;
/*aft_stmt:170810*/
            for (g_2016 = 0; (g_2016 < 11); g_2016 = safe_add_func_uint8_t_u_u(g_2016, 1))
            { /* block id: 2042 */
                int32_t *l_4342 = &g_237;
                int32_t *l_4343 = (void*)0;
                int32_t *l_4344[8][3] = {{&g_1142,&g_1142,&l_4341[0][0]},{(void*)0,&g_4333,(void*)0},{&g_1142,&l_4341[0][0],&l_4341[0][0]},{(void*)0,&g_4333,(void*)0},{&g_1142,&g_1142,&l_4341[0][0]},{(void*)0,&g_4333,(void*)0},{&g_1142,&l_4341[0][0],&l_4341[0][0]},{(void*)0,&g_4333,(void*)0}};
                int i, j;
                --g_4347;
            }
        }
        /*bef_stmt:171792*/
/*bef_stmt:171792*/
(*g_975) = (~(safe_div_func_int64_t_s_s(Tag252(/*uint8_t:171868:171868:171792:e*/l_4090), (Tag253(/*uint64_t:0:0:171792:e*/*g_485)))));
/*aft_stmt:171792*/
/*aft_stmt:171792*/
        /*bef_stmt:171828*/
return Tag254(/*int32_t:171830:171868:171828:e*/l_4341[0][2]);
/*aft_stmt:171828*/
    }
/*aft_stmt:171850*/
/*aft_stmt:171850*/
/*aft_stmt:171850*/
/*aft_stmt:171850*/
/*aft_stmt:171850*/
/*aft_stmt:171850*/
/*aft_stmt:171850*/
    /*bef_stmt:171866*/
return /*TAG255:STA*/((int32_t)(realsmith_proxy_mFPic((char)(l_4089)+(-99), (int)(l_4089)+(2069389088))+(int)(l_4089)-(-2069389050))+l_4089)/*TAG255:END:l_4089*/;
/*aft_stmt:171866*/
}


/* ------------------------------------------ */
/* 
 * reads : g_531 g_532 g_158 g_3381 g_874 g_31 g_1738 g_32 g_2382 g_3152 g_3153 g_3154 g_207 g_77 g_485 g_945 g_946 g_484 g_86 g_2883 g_121 g_122 g_2882 g_2062 g_2063 g_53 g_1096 g_2061 g_2115 g_691 g_4076 g_2470 g_811
 * writes: g_128 g_1096 g_2470 g_811 g_1738 g_32 g_77 g_86 g_1098 g_122 g_31 g_512 g_53 g_2115 g_691 g_4076
 */
static uint64_t  func_23(uint64_t  p_24)
{ /* block id: 1659 */
    const uint64_t l_3372 = 0xFF17FD9C6C5E1BB3LL;
    uint64_t l_3386 = 0UL;
    int32_t l_3395 = 9L;
    int8_t *l_3396[7] = {&g_1528[3],&g_1528[3],&g_1528[3],&g_1528[3],&g_1528[3],&g_1528[3],&g_1528[3]};
    int32_t l_3397 = 1L;
    int32_t l_3460 = 0L;
    int16_t ***l_3502 = &g_3153;
    int32_t l_3523[7] = {(-1L),(-4L),(-1L),(-1L),(-4L),(-1L),(-1L)};
    uint8_t **l_3544[9][9][3] = {{{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,(void*)0,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,(void*)0,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,(void*)0,(void*)0}},{{&g_2382,(void*)0,&g_2382},{&g_2382,&g_2382,&g_2382},{(void*)0,(void*)0,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,(void*)0,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382}},{{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{(void*)0,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,(void*)0},{&g_2382,&g_2382,&g_2382}},{{&g_2382,&g_2382,(void*)0},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{(void*)0,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{(void*)0,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,(void*)0}},{{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,(void*)0},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,(void*)0}},{{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,(void*)0,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{(void*)0,&g_2382,&g_2382},{&g_2382,&g_2382,(void*)0},{&g_2382,&g_2382,&g_2382}},{{(void*)0,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,(void*)0,&g_2382},{&g_2382,&g_2382,(void*)0},{&g_2382,(void*)0,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382}},{{&g_2382,&g_2382,&g_2382},{(void*)0,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{(void*)0,&g_2382,(void*)0},{(void*)0,&g_2382,&g_2382},{&g_2382,&g_2382,(void*)0},{&g_2382,(void*)0,&g_2382},{&g_2382,&g_2382,&g_2382}},{{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,(void*)0},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,(void*)0,&g_2382}}};
    int64_t ** const l_3602 = &g_406;
    uint32_t l_3659 = 0UL;
    uint64_t *****l_3734 = (void*)0;
    uint16_t l_3758 = 0x9BD0L;
    uint8_t ****l_3783[9][5] = {{&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1]},{&g_1278[0],&g_1278[0],&g_1278[0],&g_1278[0],&g_1278[0]},{&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1]},{&g_1278[0],&g_1278[0],&g_1278[0],&g_1278[0],&g_1278[0]},{&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1]},{&g_1278[0],&g_1278[0],&g_1278[0],&g_1278[0],&g_1278[0]},{&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1]},{&g_1278[0],&g_1278[0],&g_1278[0],&g_1278[0],&g_1278[0]},{&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1],&g_1278[1]}};
    uint8_t *****l_3782 = &l_3783[0][0];
    uint16_t ** const l_3846 = &g_31;
    uint8_t l_3847 = 0xC7L;
    int32_t l_3893 = 0x275A732CL;
    const uint64_t *l_3926 = &g_1108;
    const uint64_t **l_3925 = &l_3926;
    uint8_t l_3947 = 0x90L;
    uint8_t l_3993 = 0x2AL;
    uint64_t l_4070[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_4070[i] = 0xF122D06F18BF4EFCLL;
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
/*bef_stmt:193274*/
lbl_4069:
    if ((safe_rshift_func_int16_t_s_u((/*TAG256:STA*/((uint64_t)(realsmith_proxy_jpVAv((int)(l_3372)+(-1818106762), (int)(l_3372)+(-1818106877), (int)(l_3372)+(-1818106747))+(char)(l_3372)-(33))+l_3372)/*TAG256:END:l_3372*/ , (safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_3397 = (safe_sub_func_int16_t_s_s((/*TAG257:STA*/((int16_t)(realsmith_proxy_65Ikv((char)(**g_531)+(-69))+((char)(**g_531)-(123))-(48))+**g_531)/*TAG257:END:**g_531*/), ((safe_mod_func_int16_t_s_s(/*TAG258:STA*/((uint8_t)(realsmith_EJ4ip((int)(g_3381)+(-160), (int)(g_3381)+(-113))+(int)(g_3381)-(165))+g_3381)/*TAG258:END:g_3381*/, (safe_mul_func_uint16_t_u_u(0xBD7BL, ((***g_3152) = (safe_lshift_func_uint8_t_u_u(/*TAG259:STA*/((uint64_t)(realsmith_Hb94H((int)(l_3386)+(4))+(int)(l_3386)-(62976))+l_3386)/*TAG259:END:l_3386*/, ((*g_2382) = (/*TAG260:STA*/((uint64_t)(realsmith_proxy_RsENH((long)(p_24)+(-50339), (unsigned long)(p_24)+(-50330))+(unsigned int)(p_24)-(50338))+p_24)/*TAG260:END:p_24*/ && (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(/*TAG261:STA*/((uint64_t)(realsmith_EqYy9((int)(p_24)+(-50241), (int)(p_24)+(-50268))+(int)(p_24)-(50628))+p_24)/*TAG261:END:p_24*/, (safe_add_func_uint16_t_u_u(Tag262(/*const uint64_t:193838:193838:193274:e*/l_3372), ((l_3395 &= (/*TAG263:STA*/((uint16_t)(realsmith_proxy_xZHcQ((char)(**g_874)+(31), (unsigned long)(**g_874)+(-57308))+(int)(**g_874)-(57310))+**g_874)/*TAG263:END:**g_874*/)) | (-1L)))))), /*TAG264:STA*/((uint64_t)(realsmith_proxy_SknnV((char)(p_24)+(160))+(int)(p_24)-(50334))+p_24)/*TAG264:END:p_24*/)), 1L))))))))))) , 0UL)))), /*TAG265:STA*/((uint64_t)(realsmith_Zeh51((int)(l_3386)+(79))+(long)(l_3386)-(1))+l_3386)/*TAG265:END:l_3386*/)), /*TAG266:STA*/((uint64_t)(realsmith_proxy_dtVNU((int)(l_3372)+(-1818106831), (int)(l_3372)+(-1818106829), (int)(l_3372)+(-1818106885))+(int)(l_3372)-(1818106804))+l_3372)/*TAG266:END:l_3372*/))), 3)))
    { /* block id: 1664 */
        /*bef_stmt:179395*/
return /*TAG267:STA*/((uint64_t)(realsmith_ZaAt3((int)(l_3386)+(1))+(int)(l_3386)-(5))+l_3386)/*TAG267:END:l_3386*/;
/*aft_stmt:179395*/
    }
    else
    { /* block id: 1666 */
        uint32_t l_3421 = 0x6D8A9585L;
        uint16_t **l_3434 = &g_31;
        int32_t l_3457 = 1L;
        int32_t l_3461 = 0x86215CF8L;
        int32_t l_3462 = 1L;
        int16_t ****l_3491[7][5][7] = {{{&g_3152,&g_3152,(void*)0,&g_3152,&g_3152,(void*)0,(void*)0},{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152},{&g_3152,&g_3152,(void*)0,(void*)0,&g_3152,&g_3152,(void*)0},{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152},{&g_3152,&g_3152,(void*)0,&g_3152,&g_3152,(void*)0,(void*)0}},{{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152},{&g_3152,&g_3152,(void*)0,(void*)0,&g_3152,&g_3152,(void*)0},{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152},{&g_3152,&g_3152,(void*)0,&g_3152,&g_3152,(void*)0,(void*)0},{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152}},{{&g_3152,&g_3152,(void*)0,(void*)0,&g_3152,&g_3152,(void*)0},{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152},{&g_3152,&g_3152,(void*)0,&g_3152,&g_3152,(void*)0,(void*)0},{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152},{&g_3152,&g_3152,(void*)0,(void*)0,&g_3152,&g_3152,(void*)0}},{{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152},{&g_3152,&g_3152,(void*)0,&g_3152,&g_3152,(void*)0,(void*)0},{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152},{&g_3152,&g_3152,(void*)0,(void*)0,&g_3152,&g_3152,(void*)0},{(void*)0,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152,&g_3152}},{{&g_3152,&g_3152,(void*)0,&g_3152,&g_3152,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_3152,&g_3152,&g_3152,(void*)0},{&g_3152,&g_3152,&g_3152,(void*)0,&g_3152,(void*)0,&g_3152},{&g_3152,(void*)0,(void*)0,&g_3152,(void*)0,&g_3152,(void*)0},{&g_3152,&g_3152,&g_3152,(void*)0,&g_3152,(void*)0,&g_3152}},{{&g_3152,(void*)0,(void*)0,&g_3152,&g_3152,&g_3152,(void*)0},{&g_3152,&g_3152,&g_3152,(void*)0,&g_3152,(void*)0,&g_3152},{&g_3152,(void*)0,(void*)0,&g_3152,(void*)0,&g_3152,(void*)0},{&g_3152,&g_3152,&g_3152,(void*)0,&g_3152,(void*)0,&g_3152},{&g_3152,(void*)0,(void*)0,&g_3152,&g_3152,&g_3152,(void*)0}},{{&g_3152,&g_3152,&g_3152,(void*)0,&g_3152,(void*)0,&g_3152},{&g_3152,(void*)0,(void*)0,&g_3152,(void*)0,&g_3152,(void*)0},{&g_3152,&g_3152,&g_3152,(void*)0,&g_3152,(void*)0,&g_3152},{&g_3152,(void*)0,(void*)0,&g_3152,&g_3152,&g_3152,(void*)0},{&g_3152,&g_3152,&g_3152,(void*)0,&g_3152,(void*)0,&g_3152}}};
        int32_t l_3535 = 0xF85180F4L;
        int32_t *l_3597 = &g_2659[2][5][0];
        uint32_t l_3691 = 6UL;
        uint8_t * const *l_3702 = &g_2382;
        int32_t *l_3726 = (void*)0;
        const uint64_t ***l_3767 = (void*)0;
        uint32_t **l_3770 = &g_207;
        uint8_t *** const *l_3779 = (void*)0;
        uint8_t *** const **l_3778[2][7][10] = {{{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779}},{{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779},{&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779,&l_3779}}};
        const uint16_t l_3848 = 65533UL;
        int8_t *l_3849 = &g_512[0][0][2];
        int64_t ** const l_3875 = &g_406;
        int32_t *****l_3961 = &g_3960[2][2];
        int64_t l_4013 = 8L;
        int64_t *l_4046 = &g_1098;
        int i, j, k;
        for (g_2470 = (-8); (g_2470 <= 2); g_2470++)
        { /* block id: 1669 */
            int32_t *l_3400 = &g_237;
            int32_t *l_3401 = &g_2112;
            int32_t *l_3402 = &g_1142;
            int32_t *l_3403 = &l_3397;
            int32_t *l_3404 = &g_53;
            int32_t *l_3405 = &g_1652;
            int32_t *l_3406 = &g_1652;
            int32_t *l_3407 = &g_1142;
            int32_t *l_3408 = &g_1652;
            int32_t *l_3409 = &l_3395;
            int32_t *l_3410 = &g_1652;
            int32_t *l_3411 = &g_1142;
            int32_t *l_3412 = &g_2112;
            int32_t *l_3413 = &g_1142;
            int32_t *l_3414 = &l_3397;
            int32_t *l_3415 = &l_3397;
            int32_t *l_3416 = &g_2112;
            int32_t *l_3417 = (void*)0;
            int32_t *l_3418 = &g_237;
            int32_t *l_3419 = (void*)0;
            int32_t *l_3420[7][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            l_3421++;
        }
        for (g_811 = 13; (g_811 != (-3)); g_811 = safe_sub_func_uint16_t_u_u(g_811, 2))
        { /* block id: 1674 */
            uint8_t *l_3435 = &g_2256[4][2];
            int32_t l_3442 = (-3L);
            int32_t l_3459[1][2];
            int32_t l_3464 = 0L;
            int32_t *l_3508 = &g_2112;
            uint8_t ****l_3575 = &g_1278[0];
            uint16_t l_3616 = 1UL;
            uint64_t ***l_3625[3][4][10];
            uint64_t ****l_3624 = &l_3625[0][3][3];
            uint64_t *****l_3623 = &l_3624;
            int32_t l_3641 = (-1L);
            uint32_t l_3674 = 0UL;
            uint32_t *l_3681 = &g_366;
            uint16_t ****l_3831[4][6][5] = {{{(void*)0,&g_873,&g_873,&g_873,(void*)0},{&g_873,&g_873,&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873,&g_873,(void*)0},{&g_873,&g_873,(void*)0,(void*)0,&g_873},{&g_873,&g_873,(void*)0,&g_873,&g_873}},{{&g_873,&g_873,(void*)0,&g_873,&g_873},{(void*)0,(void*)0,&g_873,&g_873,&g_873},{&g_873,(void*)0,&g_873,(void*)0,&g_873},{&g_873,(void*)0,&g_873,&g_873,(void*)0},{&g_873,(void*)0,&g_873,(void*)0,&g_873},{&g_873,&g_873,&g_873,&g_873,(void*)0}},{{&g_873,&g_873,&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873,&g_873,(void*)0},{&g_873,&g_873,(void*)0,&g_873,(void*)0},{&g_873,&g_873,&g_873,&g_873,&g_873},{(void*)0,&g_873,&g_873,(void*)0,&g_873}},{{&g_873,&g_873,&g_873,(void*)0,(void*)0},{&g_873,&g_873,&g_873,(void*)0,&g_873},{&g_873,(void*)0,(void*)0,&g_873,(void*)0},{&g_873,&g_873,&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873,&g_873,&g_873},{&g_873,&g_873,&g_873,&g_873,&g_873}}};
            int8_t **l_3832 = (void*)0;
            uint32_t l_3873 = 0x0D0AD64AL;
            uint32_t l_3874[2][7][5] = {{{7UL,9UL,7UL,9UL,7UL},{0UL,0UL,0UL,0UL,0UL},{7UL,9UL,7UL,9UL,7UL},{0UL,0UL,0UL,0UL,0UL},{7UL,9UL,7UL,9UL,7UL},{0UL,0UL,0UL,0UL,0UL},{7UL,9UL,7UL,9UL,7UL}},{{0UL,0UL,0UL,0UL,0UL},{7UL,9UL,7UL,9UL,7UL},{0UL,0UL,0UL,0UL,0UL},{7UL,9UL,7UL,9UL,7UL},{0UL,0UL,0UL,0UL,0UL},{7UL,9UL,7UL,9UL,7UL},{0UL,0UL,0UL,0UL,0UL}}};
            int64_t *l_3876 = (void*)0;
            int64_t *l_3877[1];
            int8_t l_3895 = 9L;
            int16_t ** const l_3974[6] = {&g_3154,&g_3154,&g_3154,&g_3154,&g_3154,&g_3154};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_3459[i][j] = (-9L);
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 10; k++)
                        l_3625[i][j][k] = &g_484;
                }
            }
            for (i = 0; i < 1; i++)
                l_3877[i] = &g_892;
        }
        /*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
/*bef_stmt:193225*/
if (((((safe_sub_func_uint64_t_u_u((Tag268(/*uint64_t:193838:193838:193225:e*/p_24) , (l_3397 = ((Tag269(/*int32_t:193231:193838:193225:e*/l_3457) || Tag270(/*uint64_t:193838:193838:193225:e*/p_24)) , (((((*l_4046) = ((safe_lshift_func_uint16_t_u_u((Tag271(/*uint64_t:193838:193838:193225:e*/p_24) , ((safe_div_func_int8_t_s_s(((((Tag272(/*int32_t:193838:193838:193225:e*/l_3893) && (Tag273(/*uint8_t:193838:193838:193225:e*/l_3847) <= (((p_24 = ((*g_485) = ((((*g_207) = (((**l_3434) = ((safe_div_func_uint8_t_u_u(0x49L, ((Tag274(/*uint32_t:0:0:193225:e*/*g_207)) && (safe_mod_func_int16_t_s_s(Tag275(/*uint32_t:193231:193838:193225:e*/l_3691), Tag276(/*uint64_t:193838:193838:193225:e*/p_24)))))) <= 0UL)) ^ Tag277(/*uint64_t:193838:193838:193225:e*/p_24))) ^ Tag278(/*uint8_t:193838:193838:193225:e*/l_3993)) >= 0L))) , &g_2883) == &g_2062))) , (-1L)) && Tag279(/*uint64_t:193838:193838:193225:e*/p_24)) >= Tag280(/*uint32_t:193231:193838:193225:e*/l_3421)), (Tag281(/*const int8_t:0:0:193225:e*/*g_945)))) >= Tag282(/*int32_t:193231:193838:193225:e*/l_3457))), 8)) , Tag283(/*uint64_t:193838:193838:193225:e*/l_3386))) , 0xE94B2E50L) <= (-2L)) && (Tag284(/*uint64_t:0:0:193225:e*/**g_484)))))), Tag285(/*int32_t:193231:193838:193225:e*/l_3457))) || Tag286(/*uint64_t:193838:193838:193225:e*/p_24)) | 0UL) < 255UL))
        { /* block id: 1903 */
            /*bef_stmt:192428*/
return Tag287(/*uint64_t:193838:193838:192428:e*/p_24);
/*aft_stmt:192428*/
        }
        else
        { /* block id: 1905 */
            uint16_t *l_4051 = &g_1738;
            int32_t l_4066 = (-1L);
            (***g_2882) = (**g_2883);
            /*bef_stmt:193215*/
/*bef_stmt:193215*/
/*bef_stmt:193215*/
/*bef_stmt:193215*/
/*bef_stmt:193215*/
/*bef_stmt:193215*/
/*bef_stmt:193215*/
/*bef_stmt:193215*/
/*bef_stmt:193215*/
/*bef_stmt:193215*/
(****g_2061) = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(1L, (((*g_874) = l_4051) == ((safe_mod_func_uint16_t_u_u((18446744073709551611UL & ((safe_add_func_int32_t_s_s((Tag288(/*int32_t:0:0:193215:e*/***g_2062)), ((((safe_add_func_int16_t_s_s((Tag289(/*const int16_t:0:0:193215:e*/*g_532)), (safe_add_func_uint64_t_u_u((l_3523[1] = (safe_add_func_uint32_t_u_u(((void*)0 == &g_1716), (safe_mul_func_uint8_t_u_u((((Tag290(/*uint64_t:193838:193838:193215:e*/p_24) && (((((*l_3849) = (safe_div_func_int64_t_s_s(Tag291(/*int32_t:193219:193231:193215:e*/l_4066), Tag292(/*uint64_t:193838:193838:193215:e*/p_24)))) | 1L) == 0L) > Tag293(/*int32_t:193838:193838:193215:e*/l_3460))) | (Tag294(/*int16_t:0:0:193215:e*/**g_3153))) || 0x4CC214B8L), 0x8AL))))), Tag295(/*int32_t:193219:193231:193215:e*/l_4066))))) , 0xF6L) , 0xB03D0F78L) , 0L))) >= (Tag296(/*int16_t:0:0:193215:e*/***g_3152)))), Tag297(/*int32_t:193219:193231:193215:e*/l_4066))) , (void*)0)))), 10)) && 0xE7L);
/*aft_stmt:193215*/
/*aft_stmt:193215*/
/*aft_stmt:193215*/
/*aft_stmt:193215*/
/*aft_stmt:193215*/
/*aft_stmt:193215*/
/*aft_stmt:193215*/
/*aft_stmt:193215*/
/*aft_stmt:193215*/
/*aft_stmt:193215*/
        }
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
/*aft_stmt:193225*/
    }
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
/*aft_stmt:193274*/
    for (g_2115 = 6; (g_2115 != 19); g_2115++)
    { /* block id: 1915 */
        int32_t *l_4074[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        /*bef_stmt:193516*/
if (Tag298(/*int32_t:193838:193838:193516:e*/l_3460))
            goto lbl_4069;
/*aft_stmt:193516*/
        /*bef_stmt:193540*/
if (Tag299(/*uint64_t:193838:193838:193540:e*/l_4070[0]))
            continue;
/*aft_stmt:193540*/
        for (g_691 = 19; (g_691 != (-27)); g_691--)
        { /* block id: 1920 */
            int32_t *l_4073[1];
            int i;
            for (i = 0; i < 1; i++)
                l_4073[i] = &g_237;
            (***g_2882) = (l_4074[5] = l_4073[0]);
            /*bef_stmt:193791*/
return Tag300(/*uint64_t:193838:193838:193791:e*/l_3386);
/*aft_stmt:193791*/
        }
        ++g_4076;
    }
    /*bef_stmt:193836*/
return Tag301(/*uint64_t:193838:193838:193836:e*/p_24);
/*aft_stmt:193836*/
}


/* ------------------------------------------ */
/* 
 * reads : g_121 g_122 g_53 g_2016 g_945 g_946 g_874 g_31 g_32 g_433 g_129 g_485 g_86 g_531 g_532 g_158 g_873 g_206 g_207 g_77 g_80 g_975 g_2061 g_2063 g_1142 g_2883
 * writes: g_53 g_32 g_158 g_811 g_129 g_848 g_80 g_662 g_1142
 */
static int32_t  func_27(uint16_t * const  p_28)
{ /* block id: 1041 */
    uint8_t l_2022 = 0x75L;
    int32_t * const l_2035 = &g_53;
    int32_t l_2110[2];
    uint64_t ***l_2159[8] = {&g_484,&g_484,(void*)0,&g_484,&g_484,(void*)0,&g_484,&g_484};
    uint64_t ****l_2158[1];
    uint64_t *****l_2157 = &l_2158[0];
    int32_t l_2163[10][8][3] = {{{9L,0x287B09A6L,0x3E54232FL},{0x907FC65CL,0xCA08D569L,(-1L)},{(-5L),(-1L),(-5L)},{0x907FC65CL,5L,(-6L)},{9L,(-1L),0x3E54232FL},{1L,0xCA08D569L,(-6L)},{(-5L),0x287B09A6L,(-5L)},{1L,5L,(-1L)}},{{9L,0x287B09A6L,0x3E54232FL},{0x907FC65CL,0xCA08D569L,(-1L)},{(-5L),(-1L),(-5L)},{0x907FC65CL,5L,(-6L)},{9L,(-1L),0x3E54232FL},{1L,0xCA08D569L,(-6L)},{(-5L),0x287B09A6L,(-5L)},{1L,5L,(-1L)}},{{9L,0x287B09A6L,0x3E54232FL},{0x907FC65CL,0xCA08D569L,(-1L)},{(-5L),(-1L),(-5L)},{0x907FC65CL,5L,(-6L)},{9L,(-1L),0x3E54232FL},{1L,0xCA08D569L,(-6L)},{(-5L),0x287B09A6L,(-5L)},{1L,5L,(-1L)}},{{9L,0x287B09A6L,0x3E54232FL},{0x907FC65CL,0xCA08D569L,(-1L)},{(-5L),(-1L),(-5L)},{0x907FC65CL,5L,(-6L)},{9L,(-1L),0x3E54232FL},{1L,0xCA08D569L,(-6L)},{(-5L),0x287B09A6L,(-5L)},{1L,5L,(-1L)}},{{9L,(-6L),3L},{0x5A6FA756L,1L,1L},{1L,(-2L),1L},{0x5A6FA756L,(-1L),0xC983061CL},{0xB32CE405L,(-2L),3L},{1L,1L,0xC983061CL},{1L,(-6L),1L},{1L,(-1L),1L}},{{0xB32CE405L,(-6L),3L},{0x5A6FA756L,1L,1L},{1L,(-2L),1L},{0x5A6FA756L,(-1L),0xC983061CL},{0xB32CE405L,(-2L),3L},{1L,1L,0xC983061CL},{1L,(-6L),1L},{1L,(-1L),1L}},{{0xB32CE405L,(-6L),3L},{0x5A6FA756L,1L,1L},{1L,(-2L),1L},{0x5A6FA756L,(-1L),0xC983061CL},{0xB32CE405L,(-2L),3L},{1L,1L,0xC983061CL},{1L,(-6L),1L},{1L,(-1L),1L}},{{0xB32CE405L,(-6L),3L},{0x5A6FA756L,1L,1L},{1L,(-2L),1L},{0x5A6FA756L,(-1L),0xC983061CL},{0xB32CE405L,(-2L),3L},{1L,1L,0xC983061CL},{1L,(-6L),1L},{1L,(-1L),1L}},{{0xB32CE405L,(-6L),3L},{0x5A6FA756L,1L,1L},{1L,(-2L),1L},{0x5A6FA756L,(-1L),0xC983061CL},{0xB32CE405L,(-2L),3L},{1L,1L,0xC983061CL},{1L,(-6L),1L},{1L,(-1L),1L}},{{0xB32CE405L,(-6L),3L},{0x5A6FA756L,1L,1L},{1L,(-2L),1L},{0x5A6FA756L,(-1L),0xC983061CL},{0xB32CE405L,(-2L),3L},{1L,1L,0xC983061CL},{1L,(-6L),1L},{1L,(-1L),1L}}};
    int64_t l_2277 = (-3L);
    int8_t l_2322[10][9][2] = {{{0x09L,0xD4L},{0xB2L,(-1L)},{(-4L),1L},{0L,0xA1L},{0xB2L,0x95L},{0L,0xD4L},{(-2L),0xA1L},{(-4L),0xB9L},{(-4L),0xA1L}},{{(-2L),0xD4L},{0L,0x95L},{0xB2L,0xA1L},{0L,1L},{(-4L),(-1L)},{0xB2L,0xD4L},{0x09L,0xD4L},{0xB2L,(-1L)},{(-4L),1L}},{{0L,0xA1L},{0xB2L,0x95L},{0L,0xD4L},{(-2L),0xA1L},{(-4L),0xB9L},{(-4L),0xA1L},{0L,0xB9L},{(-2L),4L},{0x6AL,0x81L}},{{1L,(-1L)},{0x09L,0xE7L},{0x6AL,0xB9L},{0xD7L,0xB9L},{0x6AL,0xE7L},{0x09L,(-1L)},{1L,0x81L},{0x6AL,4L},{(-2L),0xB9L}},{{0L,0x81L},{0x09L,8L},{0x09L,0x81L},{0L,0xB9L},{(-2L),4L},{0x6AL,0x81L},{1L,(-1L)},{0x09L,0xE7L},{0x6AL,0xB9L}},{{0xD7L,0xB9L},{0x6AL,0xE7L},{0x09L,(-1L)},{1L,0x81L},{0x6AL,4L},{(-2L),0xB9L},{0L,0x81L},{0x09L,8L},{0x09L,0x81L}},{{0L,0xB9L},{(-2L),4L},{0x6AL,0x81L},{1L,(-1L)},{0x09L,0xE7L},{0x6AL,0xB9L},{0xD7L,0xB9L},{0x6AL,0xE7L},{0x09L,(-1L)}},{{1L,0x81L},{0x6AL,4L},{(-2L),0xB9L},{0L,0x81L},{0x09L,8L},{0x09L,0x81L},{0L,0xB9L},{(-2L),4L},{0x6AL,0x81L}},{{1L,(-1L)},{0x09L,0xE7L},{0x6AL,0xB9L},{0xD7L,0xB9L},{0x6AL,0xE7L},{0x09L,(-1L)},{1L,0x81L},{0x6AL,4L},{(-2L),0xB9L}},{{0L,0x81L},{0x09L,8L},{0x09L,0x81L},{0L,0xB9L},{(-2L),4L},{0x6AL,0x81L},{1L,(-1L)},{0x09L,0xE7L},{0x6AL,0xB9L}}};
    const uint32_t **l_2342 = (void*)0;
    int32_t * const ****l_2351 = &g_2061;
    uint32_t ****l_2364 = &g_1809;
    int64_t l_2428 = (-10L);
    uint32_t l_2506 = 1UL;
    uint8_t l_2598 = 249UL;
    int64_t l_2716 = (-1L);
    uint16_t l_2717 = 0xAACEL;
    int64_t ** const *l_2732 = &g_405;
    uint32_t l_2738 = 0x5127CA5FL;
    int8_t l_2751 = 0x6BL;
    uint16_t ***l_2752 = &g_874;
    uint8_t **l_2873[5][8] = {{(void*)0,&g_2382,(void*)0,(void*)0,&g_2382,(void*)0,(void*)0,&g_2382},{&g_2382,(void*)0,(void*)0,&g_2382,(void*)0,(void*)0,&g_2382,(void*)0},{&g_2382,&g_2382,&g_2382,&g_2382,&g_2382,&g_2382,&g_2382,&g_2382},{(void*)0,&g_2382,(void*)0,(void*)0,&g_2382,(void*)0,(void*)0,&g_2382},{&g_2382,(void*)0,(void*)0,&g_2382,(void*)0,(void*)0,&g_2382,(void*)0}};
    uint32_t l_2896 = 0UL;
    int8_t l_2897 = (-1L);
    uint8_t l_2902 = 255UL;
    const int16_t *l_3157 = &g_1355[2][1][5];
    const int16_t **l_3156 = &l_3157;
    const int16_t ***l_3155 = &l_3156;
    uint16_t l_3252[8];
    int32_t l_3257 = (-8L);
    int64_t l_3321 = 0x7B80A10F34E1C315LL;
    int32_t **l_3368 = &g_1296;
    int32_t ***l_3367[8][8];
    int32_t **** const l_3366[10] = {&l_3367[2][2],&l_3367[2][2],&l_3367[2][2],&l_3367[2][2],&l_3367[2][2],&l_3367[2][2],&l_3367[2][2],&l_3367[2][2],&l_3367[2][2],&l_3367[2][2]};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2110[i] = 9L;
    for (i = 0; i < 1; i++)
        l_2158[i] = &l_2159[3];
    for (i = 0; i < 8; i++)
        l_3252[i] = 65533UL;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            l_3367[i][j] = &l_3368;
    }
    /*bef_stmt:205886*/
if (((**g_121) = (/*TAG302:STA*/((int32_t)(realsmith_LLA2B((int)(**g_121)+(-600157436), (int)(**g_121)+(-600157345))+(int)(**g_121)-(600157446))+**g_121)/*TAG302:END:**g_121*/)))
    { /* block id: 1043 */
        /*bef_stmt:205828*/
return /*TAG303:STA*/((uint16_t)(realsmith_NSwoq((int)(g_2016)+(-55406))+(int)(g_2016)-(55460))+g_2016)/*TAG303:END:g_2016*/;
/*aft_stmt:205828*/
    }
    else
    { /* block id: 1045 */
        int32_t *l_2017 = (void*)0;
        l_2017 = l_2017;
    }
/*aft_stmt:205886*/
    /*bef_stmt:219296*/
/*bef_stmt:219296*/
/*bef_stmt:219296*/
/*bef_stmt:219296*/
/*bef_stmt:219296*/
/*bef_stmt:219296*/
/*bef_stmt:219296*/
/*bef_stmt:219296*/
if (((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((Tag304(/*const int8_t:0:0:219296:e*/*g_945)), Tag305(/*uint8_t:219333:219333:219296:e*/l_2022))) || (0xB20623774E6E5D5ALL || Tag306(/*uint8_t:219333:219333:219296:e*/l_2022))) , (safe_lshift_func_uint8_t_u_s((Tag307(/*uint8_t:219333:219333:219296:e*/l_2022) <= (0xEDL | (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(6UL, (safe_sub_func_int64_t_s_s(((((**g_874)++) ^ Tag308(/*uint8_t:219333:219333:219296:e*/l_2022)) > ((((l_2035 != (void*)0) > (Tag309(/*int32_t:219333:219333:219296:e*/*l_2035))) , &g_874) != (void*)0)), 0xE31DB4AA5E7A491DLL)))), (Tag310(/*int32_t:219333:219333:219296:e*/*l_2035)))))), 6))), 0L)) < (Tag311(/*int32_t:219333:219333:219296:e*/*l_2035))))
    { /* block id: 1049 */
        uint64_t l_2056 = 0x0E726A31613932B1LL;
        int32_t *l_2064 = &g_1142;
        (*g_122) = 0x1898F0E0L;
        for (g_158 = (-16); (g_158 > 10); g_158 = safe_add_func_int8_t_s_s(g_158, 4))
        { /* block id: 1053 */
            /*bef_stmt:206521*/
return (Tag312(/*int32_t:0:0:206521:e*/*g_433));
/*aft_stmt:206521*/
        }
        for (g_811 = 0; (g_811 >= 25); ++g_811)
        { /* block id: 1058 */
            uint8_t *l_2044 = &g_129;
            int32_t l_2055 = 0xC7EB14C3L;
            int16_t *l_2057 = &g_848;
            uint8_t *l_2058 = &g_80;
            (*l_2035) &= (-1L);
            /*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
/*bef_stmt:207670*/
(*g_975) = ((safe_rshift_func_int8_t_s_s((((*l_2058) |= ((250UL >= (safe_rshift_func_uint8_t_u_s((((Tag313(/*int32_t:219333:219333:207670:e*/*l_2035)) , (((l_2035 == ((((*l_2044)++) < (((Tag314(/*uint64_t:0:0:207670:e*/*g_485)) , 1L) & (5L != ((((((((((safe_rshift_func_int16_t_s_u(((*l_2057) = (((((safe_add_func_int16_t_s_s(((-7L) != ((safe_add_func_int16_t_s_s(((0x0898767AL < (((Tag315(/*int32_t:207791:207887:207670:e*/l_2055) < Tag316(/*uint64_t:207887:219333:207670:e*/l_2056)) , (-3L)) >= (Tag317(/*const int16_t:0:0:207670:e*/**g_531)))) & Tag318(/*int32_t:207791:207887:207670:e*/l_2055)), (Tag319(/*const int16_t:0:0:207670:e*/*g_532)))) ^ 0xFB3E70BDL)), (Tag320(/*int32_t:219333:219333:207670:e*/*l_2035)))) || (Tag321(/*uint16_t:0:0:207670:e*/***g_873))) || Tag322(/*int32_t:207791:207887:207670:e*/l_2055)) || (Tag323(/*uint32_t:0:0:207670:e*/**g_206))) < (Tag324(/*const int8_t:0:0:207670:e*/*g_945)))), (Tag325(/*uint16_t:0:0:207670:e*/**g_874)))) ^ Tag326(/*uint64_t:207887:219333:207670:e*/l_2056)) & Tag327(/*int32_t:207791:207887:207670:e*/l_2055)) == Tag328(/*int32_t:207791:207887:207670:e*/l_2055)) <= (Tag329(/*int32_t:219333:219333:207670:e*/*l_2035))) > (Tag330(/*int32_t:219333:219333:207670:e*/*l_2035))) , 7L) < (Tag331(/*int32_t:219333:219333:207670:e*/*l_2035))) == 0x2E42FD8ECC93300ELL) , (-1L))))) , (void*)0)) || Tag332(/*int32_t:207791:207887:207670:e*/l_2055)) , 18446744073709551615UL)) ^ (Tag333(/*uint64_t:0:0:207670:e*/*g_485))), 3))) <= (Tag334(/*uint64_t:0:0:207670:e*/*g_485)))) >= (-1L)), 7)) , (Tag335(/*int32_t:0:0:207670:e*/**g_121)));
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
/*aft_stmt:207670*/
            for (g_662 = (-12); (g_662 > 14); g_662 = safe_add_func_int16_t_s_s(g_662, 1))
            { /* block id: 1066 */
                /*bef_stmt:207777*/
if ((Tag336(/*int32_t:0:0:207777:e*/*g_122)))
                    break;
/*aft_stmt:207777*/
            }
        }
        (*l_2064) ^= ((**g_2063) |= ((void*)0 == g_2061));
    }
    else
    { /* block id: 1072 */
        uint64_t l_2083 = 0xF7BE9DFD355B2CBALL;
        int64_t l_2109 = (-2L);
        int32_t l_2114 = 0x112CBF76L;
        uint32_t *l_2129 = &g_584;
        uint16_t ****l_2149 = &g_873;
        uint16_t ***l_2161 = &g_874;
        int32_t l_2162 = 0L;
        int32_t *l_2165 = &g_237;
        uint32_t ***l_2173 = &g_206;
        uint8_t l_2202 = 0x72L;
        uint16_t l_2213 = 65533UL;
        int32_t l_2244 = 0x2B853920L;
        int32_t l_2246 = 0x012111AEL;
        int32_t l_2251 = 1L;
        int32_t l_2253 = 0x7D28D674L;
        int32_t l_2254 = 0x62DEDEF6L;
        int8_t l_2276 = 0xCAL;
        const int32_t *l_2284 = &g_1653;
        const int32_t **l_2283[6];
        const int32_t ***l_2282 = &l_2283[0];
        uint64_t l_2308[1];
        uint64_t ****l_2399 = &l_2159[3];
        uint64_t *l_2405 = &l_2308[0];
        const uint64_t *l_2408[9][7][4] = {{{(void*)0,(void*)0,&g_2409[3],(void*)0},{&g_2409[3],&g_2409[2],&g_2409[3],&g_2409[0]},{&g_2409[3],&g_2409[0],(void*)0,&g_2409[3]},{&g_2409[3],&g_2409[2],&g_2409[3],(void*)0},{&g_2409[3],(void*)0,&g_2409[3],&g_2409[2]},{&g_2409[3],&g_2409[3],(void*)0,&g_2409[0]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]}},{{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],(void*)0,(void*)0,&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[0]},{&g_2409[3],&g_2409[0],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],(void*)0,(void*)0},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]}},{{&g_2409[3],&g_2409[0],(void*)0,&g_2409[3]},{&g_2409[3],&g_2409[2],&g_2409[3],(void*)0},{&g_2409[3],(void*)0,&g_2409[3],&g_2409[2]},{&g_2409[3],&g_2409[3],(void*)0,&g_2409[0]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],(void*)0,(void*)0,&g_2409[3]}},{{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[0]},{&g_2409[3],&g_2409[0],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],(void*)0,(void*)0},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[0],(void*)0,&g_2409[3]},{&g_2409[3],&g_2409[2],&g_2409[3],(void*)0}},{{&g_2409[3],(void*)0,&g_2409[3],&g_2409[2]},{&g_2409[3],&g_2409[3],(void*)0,&g_2409[0]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],(void*)0,(void*)0,&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[0]},{&g_2409[3],&g_2409[0],&g_2409[3],&g_2409[3]}},{{&g_2409[3],&g_2409[3],(void*)0,(void*)0},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[0],(void*)0,&g_2409[3]},{&g_2409[3],&g_2409[2],&g_2409[3],(void*)0},{&g_2409[3],(void*)0,&g_2409[3],&g_2409[2]},{&g_2409[3],&g_2409[3],(void*)0,&g_2409[0]}},{{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],(void*)0,(void*)0,&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[0]},{&g_2409[3],&g_2409[0],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],(void*)0,(void*)0},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]}},{{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],(void*)0,(void*)0,&g_2409[3]},{(void*)0,&g_2409[3],(void*)0,(void*)0},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],(void*)0,&g_2409[3]},{&g_2409[2],&g_2409[2],(void*)0,&g_2409[3]}},{{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[2]},{&g_2409[3],&g_2409[2],(void*)0,&g_2409[3]},{(void*)0,&g_2409[3],(void*)0,&g_2409[2]},{&g_2409[3],&g_2409[2],&g_2409[3],&g_2409[3]},{&g_2409[3],&g_2409[3],(void*)0,&g_2409[2]},{&g_2409[2],&g_2409[3],(void*)0,&g_2409[3]},{&g_2409[3],&g_2409[3],&g_2409[3],&g_2409[3]}}};
        int8_t l_2431[7];
        int32_t l_2462 = 1L;
        int16_t l_2504 = (-1L);
        int32_t l_2565 = 0xC53CFACAL;
        uint32_t l_2679 = 0x4A0370FDL;
        const int16_t l_2698[4][3][5] = {{{1L,(-9L),0xA66FL,(-1L),0xD3CCL},{0x653CL,(-8L),0x12D9L,(-7L),0x3228L},{0L,(-9L),(-9L),0L,(-4L)}},{{(-7L),1L,(-9L),0xA66FL,(-1L)},{0xA66FL,(-4L),0x12D9L,0x653CL,(-9L)},{(-8L),(-7L),0xA66FL,0xA66FL,(-7L)}},{{0xD3CCL,(-7L),0x304CL,0L,(-7L)},{(-4L),0x3228L,1L,(-7L),(-9L)},{(-7L),(-7L),0x3457L,(-1L),(-1L)}},{{(-4L),0x304CL,(-4L),0x3457L,(-4L)},{0xD3CCL,0x304CL,0x653CL,(-7L),0x3228L},{(-8L),(-7L),(-1L),1L,0xD3CCL}}};
        int16_t *l_2715[2][5][9] = {{{(void*)0,&g_848,&l_2504,&g_2111[3][3][0],&g_1529,&g_2115,&g_2115,&g_1529,&g_2111[3][3][0]},{&g_2111[4][2][4],&g_848,&g_2111[4][2][4],&g_2111[4][2][4],&l_2504,&g_1529,&g_158,&g_1096,&g_1096},{&g_1529,(void*)0,&g_2111[3][3][1],&g_2115,&g_2111[3][3][1],(void*)0,&g_1529,&g_2111[4][0][0],&l_2504},{&g_158,&g_1529,&l_2504,&g_2111[4][2][4],&g_2111[4][2][4],&g_848,&g_2111[4][2][4],&g_2111[4][2][4],&l_2504},{&g_2115,&g_2115,&g_1529,&g_2111[3][3][0],&l_2504,&g_848,(void*)0,&g_2111[4][0][0],(void*)0}},{{&l_2504,&g_1096,&g_1529,&g_1529,&g_1096,&l_2504,&l_2504,&g_1096,&g_1355[4][2][4]},{&g_2111[4][0][0],&g_1355[4][5][1],&g_1529,(void*)0,&g_1529,&g_1529,(void*)0,&g_1529,&g_1355[4][5][1]},{&g_1096,&g_2111[1][1][3],&l_2504,&g_2111[4][2][4],(void*)0,&g_2111[4][2][4],&l_2504,&l_2504,&g_2111[4][2][4]},{&g_1096,&g_1529,&g_2111[3][3][1],&g_1529,&g_1096,&l_2504,&g_2111[3][3][0],&g_1529,&g_2115},{&l_2504,(void*)0,&g_1529,&g_848,&g_158,&g_848,&g_1529,(void*)0,&l_2504}}};
        uint32_t l_2796 = 1UL;
        uint8_t **l_2872 = &g_2382;
        int32_t ****l_2905 = (void*)0;
        int64_t ** const l_2939 = &g_406;
        int64_t ** const **l_2980 = &g_404;
        int16_t l_3002[4] = {(-7L),(-7L),(-7L),(-7L)};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_2283[i] = &l_2284;
        for (i = 0; i < 1; i++)
            l_2308[i] = 0x1B2B2E8FC8AE1AD0LL;
        for (i = 0; i < 7; i++)
            l_2431[i] = 0x56L;
    }
/*aft_stmt:219296*/
/*aft_stmt:219296*/
/*aft_stmt:219296*/
/*aft_stmt:219296*/
/*aft_stmt:219296*/
/*aft_stmt:219296*/
/*aft_stmt:219296*/
/*aft_stmt:219296*/
    /*bef_stmt:219331*/
return (Tag337(/*int32_t:0:0:219331:e*/***g_2883));
/*aft_stmt:219331*/
}


/* ------------------------------------------ */
/* 
 * reads : g_874 g_31
 * writes:
 */
static uint16_t * const  func_29(uint16_t * p_30)
{ /* block id: 3 */
    int32_t l_44 = 0x1EE4CFF1L;
    int64_t *l_50 = &g_51;
    int32_t *l_52 = &g_53;
    uint16_t *l_978 = &g_979;
    int32_t l_1981 = 0L;
    int32_t l_1982[1][10] = {{0x84C96E89L,0x71B5BFF6L,0xD60428B7L,0x71B5BFF6L,0x84C96E89L,0x84C96E89L,0x71B5BFF6L,0xD60428B7L,0x71B5BFF6L,0x84C96E89L}};
    uint64_t **l_2005[3][7] = {{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485,&g_485},{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485,&g_485},{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485,&g_485}};
    int32_t *l_2007 = (void*)0;
    int32_t *l_2008 = (void*)0;
    int32_t *l_2009 = &g_1652;
    int32_t *l_2010 = &g_1142;
    int32_t *l_2011 = &g_1652;
    int32_t *l_2012[6];
    uint32_t l_2013 = 0x0B780EAEL;
    int i, j;
    for (i = 0; i < 6; i++)
        l_2012[i] = &l_1981;
    return (*g_874);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * const  func_33(int32_t * const  p_34, int64_t  p_35, uint16_t * p_36, int32_t * p_37, int16_t  p_38)
{ /* block id: 456 */
    int8_t *l_988 = &g_512[0][1][0];
    int32_t **l_991[5][1];
    int32_t ***l_992 = &g_121;
    int16_t *l_1011 = &g_848;
    int16_t **l_1010 = &l_1011;
    uint16_t l_1012 = 65529UL;
    uint8_t *l_1013 = &g_128;
    uint8_t *l_1014 = &g_129;
    uint64_t l_1038 = 5UL;
    int32_t l_1095 = 0L;
    uint32_t l_1250[10][7] = {{0xAB371FFBL,0xAB371FFBL,9UL,18446744073709551615UL,0xAB371FFBL,18446744073709551614UL,18446744073709551615UL},{7UL,0xBAF307A7L,0x2024BCA4L,0UL,0x2024BCA4L,0xBAF307A7L,7UL},{6UL,18446744073709551615UL,0UL,6UL,0xAB371FFBL,0UL,0UL},{18446744073709551615UL,0UL,0x6C208FB2L,0UL,18446744073709551615UL,0UL,18446744073709551615UL},{0xAB371FFBL,6UL,0UL,18446744073709551615UL,6UL,6UL,18446744073709551615UL},{0x2024BCA4L,0UL,0x2024BCA4L,0xBAF307A7L,7UL,0xBAF307A7L,0x2024BCA4L},{0xAB371FFBL,18446744073709551615UL,9UL,0xAB371FFBL,0xAB371FFBL,9UL,18446744073709551615UL},{18446744073709551615UL,0xBAF307A7L,0x44992FE1L,0UL,0x44992FE1L,0xBAF307A7L,18446744073709551615UL},{6UL,0xAB371FFBL,0UL,0UL,0xAB371FFBL,6UL,0UL},{7UL,0UL,18446744073709551615UL,0UL,7UL,0UL,7UL}};
    uint64_t l_1385 = 18446744073709551615UL;
    uint8_t l_1462 = 0x18L;
    uint32_t l_1463 = 0xDC5ADEE2L;
    int32_t l_1482[10] = {0xB68A6064L,0xB68A6064L,0xB68A6064L,0xB68A6064L,0xB68A6064L,0xB68A6064L,0xB68A6064L,0xB68A6064L,0xB68A6064L,0xB68A6064L};
    int32_t l_1487 = 0x15AF21EBL;
    const uint64_t *l_1493 = (void*)0;
    const uint64_t **l_1492[3];
    int64_t l_1552 = 0xF2B12AA8BF727870LL;
    int64_t l_1553 = 0xEF7B9EC651443B55LL;
    int32_t *l_1554 = &l_1487;
    uint64_t ***l_1642 = &g_484;
    uint64_t ****l_1641 = &l_1642;
    uint64_t *****l_1640 = &l_1641;
    uint16_t **l_1687 = &g_31;
    uint8_t l_1710 = 0xBBL;
    uint16_t l_1713 = 65535UL;
    int32_t **l_1714 = &g_1296;
    int32_t *l_1715 = (void*)0;
    uint32_t l_1717 = 0xCA0D682CL;
    int32_t *l_1718 = &g_237;
    int32_t l_1719 = 7L;
    uint32_t l_1743 = 0UL;
    int64_t l_1785 = 0xB623D2CEA6BF66B4LL;
    int64_t l_1802 = (-1L);
    uint32_t ***l_1807[4][9] = {{(void*)0,&g_206,&g_206,(void*)0,&g_206,(void*)0,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206}};
    int32_t l_1849 = 0x11760983L;
    uint32_t l_1903 = 0UL;
    uint32_t l_1915[2];
    uint32_t l_1935 = 4294967292UL;
    uint64_t * const *l_1936[6][2] = {{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485}};
    int32_t *l_1937[10][4][1] = {{{&l_1487},{&g_1652},{(void*)0},{(void*)0}},{{&g_1652},{&l_1487},{&g_1652},{(void*)0}},{{(void*)0},{&g_1652},{&l_1487},{&g_1652}},{{(void*)0},{(void*)0},{&g_1652},{(void*)0}},{{&l_1487},{(void*)0},{(void*)0},{&l_1487}},{{(void*)0},{&l_1487},{(void*)0},{(void*)0}},{{&l_1487},{(void*)0},{&l_1487},{(void*)0}},{{(void*)0},{&l_1487},{(void*)0},{&l_1487}},{{(void*)0},{(void*)0},{&l_1487},{(void*)0}},{{&l_1487},{(void*)0},{(void*)0},{&l_1487}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_991[i][j] = &g_975;
    }
    for (i = 0; i < 3; i++)
        l_1492[i] = &l_1493;
    for (i = 0; i < 2; i++)
        l_1915[i] = 0x772C0325L;
    return &g_53;
}


/* ------------------------------------------ */
/* 
 * reads : g_206 g_207 g_77 g_86 g_366 g_32 g_31 g_158 g_237 g_121 g_404 g_405 g_53 g_128 g_122 g_129 g_264 g_216 g_72 g_175 g_214 g_484 g_433 g_406 g_485 g_408 g_813 g_531 g_532 g_867 g_873 g_893 g_193 g_874 g_691 g_512 g_975 g_977 g_690
 * writes: g_433 g_158 g_237 g_122 g_86 g_32 g_484 g_51 g_690 g_53 g_175 g_72 g_671 g_216 g_77 g_31 g_813 g_405 g_512 g_264 g_848 g_406 g_691 g_129 g_811 g_873 g_893 g_660 g_924 g_128 g_945 g_80
 */
static int32_t * func_39(uint32_t  p_40, uint16_t  p_41, const uint32_t  p_42, uint8_t  p_43)
{ /* block id: 157 */
    uint32_t l_410 = 0x7330FED9L;
    int32_t l_411 = 0xA5F8B7EBL;
    int16_t * const l_422 = &g_158;
    int16_t *l_423 = &g_158;
    uint8_t l_434 = 9UL;
    int32_t **l_442 = &g_122;
    uint64_t *l_456 = &g_408;
    uint64_t *l_457 = &g_86[0][3][0];
    int64_t ** const *l_623[10] = {&g_405,&g_405,&g_405,&g_405,&g_405,&g_405,&g_405,&g_405,&g_405,&g_405};
    int64_t l_665 = 0xE40B88A21464A109LL;
    int32_t l_667 = 0xDD333886L;
    int32_t l_668 = 0xDDA7A95BL;
    int32_t l_782 = 0x4F100E99L;
    int64_t **l_825 = &g_406;
    uint8_t l_843 = 6UL;
    int32_t l_887 = 0L;
    uint16_t l_926 = 0x1AD3L;
    const int8_t *l_943 = &g_512[0][0][1];
    int32_t *l_976[6] = {&l_887,&l_887,&l_887,&l_887,&l_887,&l_887};
    int i;
/*bef_stmt:238229*/
lbl_767:
    if ((l_411 ^= (~Tag338(/*uint32_t:257066:257066:238229:e*/l_410))))
    { /* block id: 159 */
        int16_t **l_424 = &l_423;
        int64_t **l_430 = &g_406;
        int32_t **l_431 = &g_122;
        int32_t **l_432[8][5][6] = {{{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122},{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122}},{{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122}},{{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122},{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122}},{{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122}},{{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122}},{{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122},{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122}},{{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122}},{{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122},{(void*)0,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122},{&g_122,&g_122,&g_122,&g_122,(void*)0,&g_122},{&g_122,&g_122,&g_122,&g_122,&g_122,&g_122}}};
        int i, j, k;
        /*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
/*bef_stmt:230968*/
g_237 &= (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(Tag339(/*int32_t:257066:257066:230968:e*/l_411), ((*l_422) |= (((((safe_rshift_func_uint8_t_u_s(((Tag340(/*uint32_t:0:0:230968:e*/**g_206)) && Tag341(/*uint64_t:0:0:230968:e*/g_86[6][7][0])), 7)) && (l_422 == ((*l_424) = l_423))) , (-1L)) >= ((~(((((((((safe_lshift_func_int8_t_s_u((((void*)0 == l_430) && ((g_433 = &l_411) != &l_411)), Tag342(/*uint32_t:0:0:230968:e*/g_366))) < 0x2DC9772731BEFFFFLL) < Tag343(/*int32_t:257066:257066:230968:e*/l_411)) | Tag344(/*uint16_t:0:0:230968:e*/g_32)) , Tag345(/*uint8_t:257066:257066:230968:e*/l_434)) < (Tag346(/*uint16_t:0:0:230968:e*/*g_31))) , 0xF9L) ^ 0xF8L) != Tag347(/*uint8_t:257066:257066:230968:e*/p_43))) > Tag348(/*uint8_t:257066:257066:230968:e*/p_43))) < (-1L))))), 0x373DL)), Tag349(/*uint32_t:257066:257066:230968:e*/p_40)));
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
/*aft_stmt:230968*/
    }
    else
    { /* block id: 164 */
        uint64_t l_467 = 18446744073709551615UL;
        uint32_t *l_482 = (void*)0;
        int32_t l_513 = 0L;
        int64_t ***l_550 = (void*)0;
        int64_t **** const l_549 = &l_550;
        int32_t *l_582 = &l_411;
        int32_t *l_583 = &g_237;
        (*g_121) = &l_411;
        for (p_41 = 7; (p_41 < 47); p_41++)
        { /* block id: 168 */
            uint32_t *l_439 = &g_175;
            const int32_t l_443[5] = {0L,0L,0L,0L,0L};
            uint64_t *l_448 = &g_86[2][5][0];
            int32_t l_468 = 0xA095CF3CL;
            const int16_t *l_530 = &g_158;
            const int16_t **l_529 = &l_530;
            int32_t l_669 = 0xF092A402L;
            int16_t l_722 = 0xB9BAL;
            int32_t l_729 = 0xCABDD607L;
            int i;
            /*bef_stmt:237144*/
/*bef_stmt:237144*/
/*bef_stmt:237144*/
/*bef_stmt:237144*/
/*bef_stmt:237144*/
/*bef_stmt:237144*/
if ((((*l_448) = (safe_div_func_int32_t_s_s((Tag350(/*int32_t:257066:257066:237144:e*/l_411) | ((((void*)0 != l_439) < (safe_sub_func_int64_t_s_s(0xB7CAE5FA1D2478E7LL, (&g_433 != l_442)))) > Tag351(/*const int32_t:238181:238202:237144:e*/l_443[1]))), (Tag352(/*const int32_t:238181:238202:237144:e*/l_443[4]) ^ (safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((((*g_404) != (void*)0) <= 0x6B217372L) || Tag353(/*const int32_t:238181:238202:237144:e*/l_443[0])), Tag354(/*int32_t:0:0:237144:e*/g_53))), Tag355(/*uint8_t:257066:257066:237144:e*/p_43))))))) , p_41))
            { /* block id: 170 */
                uint64_t **l_455[2][9][10] = {{{&l_448,(void*)0,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,(void*)0,&l_448},{&l_448,(void*)0,(void*)0,&l_448,(void*)0,(void*)0,&l_448,&l_448,(void*)0,(void*)0},{(void*)0,&l_448,&l_448,(void*)0,(void*)0,&l_448,(void*)0,(void*)0,&l_448,&l_448},{(void*)0,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,(void*)0,&l_448,&l_448},{&l_448,(void*)0,&l_448,(void*)0,&l_448,&l_448,&l_448,&l_448,(void*)0,&l_448},{(void*)0,(void*)0,&l_448,&l_448,&l_448,&l_448,&l_448,(void*)0,(void*)0,&l_448},{(void*)0,&l_448,&l_448,&l_448,&l_448,(void*)0,&l_448,(void*)0,&l_448,&l_448},{&l_448,(void*)0,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,(void*)0,&l_448},{&l_448,(void*)0,(void*)0,&l_448,(void*)0,(void*)0,&l_448,&l_448,(void*)0,(void*)0}},{{(void*)0,&l_448,&l_448,(void*)0,(void*)0,&l_448,&l_448,&l_448,&l_448,&l_448},{&l_448,&l_448,&l_448,(void*)0,(void*)0,&l_448,&l_448,&l_448,&l_448,&l_448},{&l_448,&l_448,(void*)0,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,(void*)0},{&l_448,&l_448,(void*)0,&l_448,(void*)0,&l_448,(void*)0,&l_448,&l_448,(void*)0},{&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,(void*)0,&l_448,&l_448,&l_448},{&l_448,&l_448,&l_448,&l_448,(void*)0,(void*)0,&l_448,&l_448,&l_448,&l_448},{&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448},{&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448,&l_448},{&l_448,&l_448,&l_448,(void*)0,(void*)0,&l_448,&l_448,&l_448,&l_448,&l_448}}};
                int32_t l_465 = 0L;
                int i, j, k;
                /*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
/*bef_stmt:235308*/
(**l_442) = ((safe_div_func_uint32_t_u_u(((0x977ADD14L == ((((++(*l_448)) || Tag356(/*const uint32_t:257066:257066:235308:e*/p_42)) | ((*g_31) = (l_422 == (void*)0))) , (safe_rshift_func_uint8_t_u_u((Tag357(/*uint8_t:0:0:235308:e*/g_128) >= ((((((Tag358(/*int32_t:257066:257066:235308:e*/**l_442)) , ((l_456 = &g_408) == l_457)) || ((((((~(((++(*l_448)) != (safe_add_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((Tag359(/*uint32_t:257066:257066:235308:e*/p_40) >= 0x42L) | Tag360(/*const int32_t:238181:238202:235308:e*/l_443[1])), Tag361(/*int32_t:236996:238181:235308:e*/l_465))) && 1UL) && Tag362(/*uint8_t:0:0:235308:e*/g_129)), Tag363(/*uint32_t:0:0:235308:e*/g_77)))) >= 1UL)) == 18446744073709551608UL) && 1L) , Tag364(/*uint32_t:257066:257066:235308:e*/p_40)) , 0x58DE11E3C6B21A75LL) < (Tag365(/*int32_t:257066:257066:235308:e*/**l_442)))) || 0x63L) , &g_32) == &p_41)), 4)))) , (Tag366(/*uint32_t:0:0:235308:e*/*g_207))), Tag367(/*const uint32_t:257066:257066:235308:e*/p_42))) , (Tag368(/*int32_t:0:0:235308:e*/*g_122)));
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
/*aft_stmt:235308*/
                if (p_41)
                { /* block id: 176 */
                    /*bef_stmt:236034*/
if ((Tag369(/*int32_t:0:0:236034:e*/*g_122)))
                    { /* block id: 177 */
                        return l_439;
                    }
                    else
                    { /* block id: 179 */
                        int16_t l_466[7][6] = {{0xB710L,0xB710L,0L,0xB710L,0xB710L,0L},{0xB710L,0xB710L,0L,0xB710L,0xB710L,0L},{0xB710L,0xB710L,0L,0xB710L,0xB710L,0L},{0xB710L,0xB710L,0L,0xB710L,0xB710L,0L},{0xB710L,0xB710L,0L,0xB710L,0xB710L,0L},{0xB710L,0xB710L,0L,0xB710L,0xB710L,0L},{0xB710L,0xB710L,0L,0xB710L,0xB710L,0L}};
                        int i, j;
                        /*bef_stmt:236025*/
if (Tag370(/*int16_t:236029:236052:236025:e*/l_466[0][4]))
                            break;
/*aft_stmt:236025*/
                    }
/*aft_stmt:236034*/
                    /*bef_stmt:236048*/
if (Tag371(/*uint64_t:238202:257066:236048:e*/l_467))
                        continue;
/*aft_stmt:236048*/
                }
                else
                { /* block id: 183 */
                    uint32_t l_478 = 8UL;
                    int32_t l_481[3];
                    int32_t l_483 = 0x41E486DEL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_481[i] = 5L;
                    /*bef_stmt:236250*/
l_468 = (Tag372(/*int32_t:0:0:236250:e*/**g_121));
/*aft_stmt:236250*/
                    /*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
/*bef_stmt:236941*/
l_483 = ((safe_mod_func_uint8_t_u_u(((((((l_481[2] = (Tag373(/*int8_t:0:0:236941:e*/g_264) , (3UL ^ (~(safe_add_func_uint64_t_u_u((--(*l_457)), ((((Tag374(/*uint8_t:0:0:236941:e*/g_216[5]) , (((safe_rshift_func_int8_t_s_u(Tag375(/*uint32_t:236980:236996:236941:e*/l_478), (Tag376(/*uint8_t:257066:257066:236941:e*/p_43) | ((((**l_442) = Tag377(/*uint32_t:236980:236996:236941:e*/l_478)) | (Tag378(/*const uint32_t:257066:257066:236941:e*/p_42) ^ (Tag379(/*uint16_t:0:0:236941:e*/*g_31)))) , ((l_465 = ((safe_mod_func_uint32_t_u_u(Tag380(/*int32_t:236996:238181:236941:e*/l_465), Tag381(/*uint64_t:238202:257066:236941:e*/l_467))) , (-4L))) == p_41))))) , Tag382(/*const int32_t:238181:238202:236941:e*/l_443[1])) , p_41)) || Tag383(/*int8_t:0:0:236941:e*/g_264)) , Tag384(/*uint32_t:0:0:236941:e*/g_72[3][1][2])) ^ Tag385(/*uint32_t:0:0:236941:e*/g_72[3][1][0])))))))) , Tag386(/*int32_t:236996:238181:236941:e*/l_465)) >= Tag387(/*uint32_t:0:0:236941:e*/g_175)) , 0x49L) , l_482) != l_439), Tag388(/*uint16_t:0:0:236941:e*/g_32))) < Tag389(/*int32_t:0:0:236941:e*/g_214[0][8][2]));
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
/*aft_stmt:236941*/
                    (*g_121) = (*g_121);
                }
            }
            else
            { /* block id: 192 */
                uint64_t ***l_486 = &g_484;
                uint64_t **l_488 = (void*)0;
                uint64_t ***l_487 = &l_488;
                (*l_487) = ((*l_486) = g_484);
            }
/*aft_stmt:237144*/
/*aft_stmt:237144*/
/*aft_stmt:237144*/
/*aft_stmt:237144*/
/*aft_stmt:237144*/
/*aft_stmt:237144*/
            for (g_51 = (-12); (g_51 > (-26)); --g_51)
            { /* block id: 198 */
                int64_t l_491[8][1][6] = {{{0x6337888637AB950DLL,0x436C59E75CB03915LL,0x8E6E6E3DF97D46C5LL,(-8L),0xBE98BD8E4BD24334LL,0xBE98BD8E4BD24334LL}},{{0x436C59E75CB03915LL,1L,1L,0x436C59E75CB03915LL,0xA6DC8848BFD57F4BLL,0xBE98BD8E4BD24334LL}},{{1L,0xBE98BD8E4BD24334LL,0x8E6E6E3DF97D46C5LL,0x97BFD730CA24AB21LL,(-8L),0x97BFD730CA24AB21LL}},{{0xA6DC8848BFD57F4BLL,1L,0xA6DC8848BFD57F4BLL,(-1L),(-8L),0x6337888637AB950DLL}},{{0x8E6E6E3DF97D46C5LL,0xBE98BD8E4BD24334LL,1L,0xA6DC8848BFD57F4BLL,0xA6DC8848BFD57F4BLL,1L}},{{1L,1L,0x436C59E75CB03915LL,0xA6DC8848BFD57F4BLL,0xBE98BD8E4BD24334LL,(-1L)}},{{0x8E6E6E3DF97D46C5LL,0x436C59E75CB03915LL,0x6337888637AB950DLL,(-1L),0x6337888637AB950DLL,0x436C59E75CB03915LL}},{{0xA6DC8848BFD57F4BLL,0x8E6E6E3DF97D46C5LL,0x6337888637AB950DLL,0x97BFD730CA24AB21LL,1L,(-1L)}}};
                int32_t l_565 = 0L;
                int i, j, k;
            }
        }
    }
/*aft_stmt:238229*/
    /*bef_stmt:257051*/
if ((Tag390(/*int32_t:0:0:257051:e*/*g_433)))
    { /* block id: 315 */
        int16_t l_741 = 9L;
        int32_t *l_785 = &l_667;
        uint8_t *l_795 = &g_216[6];
        int32_t l_812 = 0x317EB4B1L;
        for (g_690 = (-20); (g_690 != 36); g_690 = safe_add_func_uint8_t_u_u(g_690, 8))
        { /* block id: 318 */
            uint64_t *l_740 = &g_408;
            int32_t * const l_746 = &l_667;
            int32_t *l_786 = &g_237;
            int64_t * const ***l_793 = (void*)0;
            int32_t *l_807 = &l_668;
            int32_t *l_808 = &l_411;
            int32_t *l_809 = (void*)0;
            int32_t *l_810[7][4] = {{&l_411,&l_411,&l_667,&l_411},{&l_411,&g_237,&g_237,&l_411},{&g_237,&l_411,&g_237,&g_237},{&l_411,&l_411,&l_667,&l_411},{&g_237,&l_667,&l_667,&g_237},{&l_667,&g_237,&l_667,&l_667},{&g_237,&g_237,&l_411,&g_237}};
            int i, j;
            for (l_410 = 0; (l_410 >= 17); l_410 = safe_add_func_uint64_t_u_u(l_410, 1))
            { /* block id: 321 */
                uint16_t l_737 = 0UL;
                --l_737;
                (*g_433) ^= 0xF708C92BL;
                /*bef_stmt:239386*/
/*bef_stmt:239386*/
l_741 &= (((void*)0 == l_740) | (Tag391(/*int8_t:0:0:239386:e*/g_264) > Tag392(/*uint16_t:239392:242425:239386:e*/l_737)));
/*aft_stmt:239386*/
/*aft_stmt:239386*/
            }
            for (g_175 = 0; (g_175 == 37); g_175++)
            { /* block id: 328 */
                uint64_t *l_757 = (void*)0;
                int32_t l_766 = 0x5BAE4D30L;
                int64_t *** const *l_792 = (void*)0;
                for (l_665 = (-10); (l_665 >= 1); l_665 = safe_add_func_int8_t_s_s(l_665, 2))
                { /* block id: 331 */
                    int32_t **l_747 = &g_433;
                    (*l_747) = l_746;
                }
                for (g_158 = (-6); (g_158 > (-1)); g_158++)
                { /* block id: 336 */
                    int64_t l_765[1][2];
                    int32_t l_776 = 0x63454881L;
                    int32_t l_784 = 1L;
                    uint8_t *l_791 = &g_671;
                    uint8_t *l_794 = &g_216[6];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_765[i][j] = 0x8BDC220F8A89E102LL;
                    }
                    /*bef_stmt:241159*/
if (Tag393(/*int16_t:242446:257066:241159:e*/l_741))
                    { /* block id: 337 */
                        int8_t *l_752 = (void*)0;
                        uint32_t *l_764 = &g_72[3][5][1];
                        /*bef_stmt:240746*/
/*bef_stmt:240746*/
/*bef_stmt:240746*/
/*bef_stmt:240746*/
/*bef_stmt:240746*/
/*bef_stmt:240746*/
/*bef_stmt:240746*/
/*bef_stmt:240746*/
/*bef_stmt:240746*/
(*g_121) = ((Tag394(/*uint8_t:257066:257066:240746:e*/p_43) , (((*g_31) ^= (((((void*)0 != l_752) & (Tag395(/*uint32_t:0:0:240746:e*/*g_207))) <= (Tag396(/*const uint32_t:257066:257066:240746:e*/p_42) | ((*l_746) = (((l_766 |= ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((l_757 != l_757), 9)), (safe_mod_func_uint32_t_u_u(((*l_764) = ((Tag397(/*uint16_t:257066:257066:240746:e*/p_41) , (safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(0x4C481E23L, 0x03CA05E0L)), 0xF0L))) || Tag398(/*uint8_t:257066:257066:240746:e*/p_43))), Tag399(/*int64_t:241765:242403:240746:e*/l_765[0][1]))))) ^ Tag400(/*int16_t:242446:257066:240746:e*/l_741))) >= (Tag401(/*int32_t:242425:242446:240746:e*/*l_746))) < 0xEF24L)))) ^ 0UL)) >= Tag402(/*int16_t:242446:257066:240746:e*/l_741))) , &g_53);
/*aft_stmt:240746*/
/*aft_stmt:240746*/
/*aft_stmt:240746*/
/*aft_stmt:240746*/
/*aft_stmt:240746*/
/*aft_stmt:240746*/
/*aft_stmt:240746*/
/*aft_stmt:240746*/
/*aft_stmt:240746*/
                        /*bef_stmt:240760*/
if (Tag403(/*int32_t:0:0:240760:e*/g_237))
                            goto lbl_767;
/*aft_stmt:240760*/
                    }
                    else
                    { /* block id: 344 */
                        uint8_t l_783 = 253UL;
                        /*bef_stmt:241128*/
/*bef_stmt:241128*/
/*bef_stmt:241128*/
/*bef_stmt:241128*/
/*bef_stmt:241128*/
/*bef_stmt:241128*/
/*bef_stmt:241128*/
l_784 ^= ((safe_mul_func_int8_t_s_s(0xE4L, (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((l_776 = Tag404(/*int32_t:242403:242425:241128:e*/l_766)), 0xB737L)) > (!Tag405(/*uint32_t:257066:257066:241128:e*/p_40))), (safe_mod_func_int32_t_s_s((((safe_sub_func_int64_t_s_s(((Tag406(/*int32_t:257066:257066:241128:e*/l_782) == 1UL) && (Tag407(/*uint16_t:0:0:241128:e*/*g_31))), ((&g_485 != &g_485) == 0x0FL))) , (Tag408(/*uint32_t:0:0:241128:e*/*g_207))) ^ 0x78B5FB88L), Tag409(/*uint8_t:241154:241765:241128:e*/l_783))))))) ^ (Tag410(/*int32_t:242425:242446:241128:e*/*l_746)));
/*aft_stmt:241128*/
/*aft_stmt:241128*/
/*aft_stmt:241128*/
/*aft_stmt:241128*/
/*aft_stmt:241128*/
/*aft_stmt:241128*/
/*aft_stmt:241128*/
                        return l_786;
                    }
/*aft_stmt:241159*/
                    /*bef_stmt:241183*/
if ((Tag411(/*int32_t:242425:242446:241183:e*/*l_746)))
                        continue;
/*aft_stmt:241183*/
                    /*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
/*bef_stmt:241759*/
(*g_122) ^= ((((((((void*)0 == (**g_404)) >= (safe_mul_func_uint16_t_u_u(((*g_31) = (((((Tag412(/*int32_t:241765:242403:241759:e*/l_776) , (safe_mul_func_uint8_t_u_u(0x08L, ((*l_794) = (Tag413(/*uint32_t:257066:257066:241759:e*/p_40) | ((Tag414(/*uint64_t:0:0:241759:e*/*g_485)) | (Tag415(/*uint32_t:257066:257066:241759:e*/p_40) >= ((((*l_791) = Tag416(/*int64_t:241765:242403:241759:e*/l_765[0][1])) & (l_792 != l_793)) >= (-1L))))))))) || (Tag417(/*int32_t:242446:257066:241759:e*/*l_785))) < Tag418(/*uint64_t:0:0:241759:e*/g_408)) , l_795) == &g_128)), Tag419(/*uint32_t:257066:257066:241759:e*/p_40)))) && (Tag420(/*uint64_t:0:0:241759:e*/**g_484))) ^ 1L) & (Tag421(/*int32_t:242425:242446:241759:e*/*l_746))) != Tag422(/*int64_t:241765:242403:241759:e*/l_765[0][1])) | (-1L));
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
/*aft_stmt:241759*/
                }
                /*bef_stmt:242397*/
if ((Tag423(/*int32_t:0:0:242397:e*/*g_433)))
                { /* block id: 355 */
                    uint32_t l_802 = 0x73DC789EL;
                    uint16_t **l_803 = (void*)0;
                    uint16_t **l_804 = &g_31;
                    int16_t *l_805 = &l_741;
                    /*bef_stmt:242305*/
/*bef_stmt:242305*/
/*bef_stmt:242305*/
/*bef_stmt:242305*/
/*bef_stmt:242305*/
/*bef_stmt:242305*/
/*bef_stmt:242305*/
/*bef_stmt:242305*/
/*bef_stmt:242305*/
/*bef_stmt:242305*/
(*l_785) = ((safe_sub_func_int32_t_s_s(((((*g_207) ^= Tag424(/*int32_t:242403:242425:242305:e*/l_766)) | ((safe_add_func_int16_t_s_s(((*l_805) = (Tag425(/*const uint32_t:257066:257066:242305:e*/p_42) <= (safe_div_func_uint16_t_u_u(((Tag426(/*uint32_t:242321:242403:242305:e*/l_802) != ((Tag427(/*const uint32_t:257066:257066:242305:e*/p_42) <= (((*l_804) = &g_32) != ((Tag428(/*int32_t:242446:257066:242305:e*/*l_785)) , &p_41))) & ((*l_422) &= 0x7C55L))) != Tag429(/*uint32_t:257066:257066:242305:e*/p_40)), Tag430(/*uint16_t:257066:257066:242305:e*/p_41))))), Tag431(/*uint32_t:242321:242403:242305:e*/l_802))) != 18446744073709551613UL)) | Tag432(/*uint8_t:257066:257066:242305:e*/p_43)), 0x20361A2BL)) > Tag433(/*int32_t:242403:242425:242305:e*/l_766));
/*aft_stmt:242305*/
/*aft_stmt:242305*/
/*aft_stmt:242305*/
/*aft_stmt:242305*/
/*aft_stmt:242305*/
/*aft_stmt:242305*/
/*aft_stmt:242305*/
/*aft_stmt:242305*/
/*aft_stmt:242305*/
/*aft_stmt:242305*/
                    /*bef_stmt:242317*/
if (Tag434(/*uint32_t:242321:242403:242317:e*/l_802))
                        break;
/*aft_stmt:242317*/
                }
                else
                { /* block id: 362 */
                    int32_t *l_806 = &g_53;
                    l_806 = (void*)0;
                    /*bef_stmt:242388*/
if (Tag435(/*int8_t:0:0:242388:e*/g_264))
                        goto lbl_767;
/*aft_stmt:242388*/
                }
/*aft_stmt:242397*/
            }
            --g_813;
        }
    }
    else
    { /* block id: 369 */
        uint16_t l_819 = 0x88ACL;
        int64_t **l_823 = &g_406;
        int32_t l_829[7];
        uint32_t **l_845 = &g_207;
        uint32_t l_973 = 0UL;
        int i;
        for (i = 0; i < 7; i++)
            l_829[i] = 0x47C9DF72L;
        /*bef_stmt:257035*/
if (Tag436(/*int32_t:257066:257066:257035:e*/l_668))
        { /* block id: 370 */
            int8_t l_820 = 0L;
            int64_t ***l_824 = &g_405;
            int64_t ***l_826 = &l_825;
            uint32_t ** const l_844 = &g_207;
            int8_t *l_846 = &g_264;
            int16_t *l_847[5][10] = {{(void*)0,&g_848,&g_848,&g_158,&g_848,&g_848,(void*)0,&g_848,&g_848,&g_158},{&g_848,&g_158,&g_848,&g_848,&g_158,&g_848,&g_848,&g_158,&g_848,&g_848},{(void*)0,&g_158,&g_158,&g_158,(void*)0,&g_158,(void*)0,&g_158,&g_158,&g_158},{&g_158,&g_848,&g_848,&g_158,&g_848,&g_848,&g_158,&g_848,&g_848,&g_158},{&g_848,&g_158,&g_848,&g_848,(void*)0,&g_848,&g_848,&g_158,&g_848,&g_848}};
            int32_t *l_865[2];
            int32_t *l_866 = &l_829[3];
            int i, j;
            for (i = 0; i < 2; i++)
                l_865[i] = &l_667;
            /*bef_stmt:244444*/
/*bef_stmt:244444*/
/*bef_stmt:244444*/
/*bef_stmt:244444*/
/*bef_stmt:244444*/
/*bef_stmt:244444*/
/*bef_stmt:244444*/
/*bef_stmt:244444*/
/*bef_stmt:244444*/
/*bef_stmt:244444*/
(*g_433) = (!(safe_lshift_func_int16_t_s_u(2L, (((Tag437(/*uint16_t:257041:257066:244444:e*/l_819) ^ Tag438(/*int8_t:245846:257041:244444:e*/l_820)) | (safe_add_func_int32_t_s_s((l_829[4] = ((((*l_824) = l_823) != ((*l_826) = l_825)) || (safe_rshift_func_int16_t_s_s(Tag439(/*uint8_t:257066:257066:244444:e*/p_43), 15)))), 4294967295UL))) && ((*g_31) = (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((Tag440(/*const int16_t:0:0:244444:e*/**g_531)), (g_848 = (safe_rshift_func_int16_t_s_s(((((~(((*l_846) ^= (g_512[0][4][8] = ((((((safe_mul_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(0xA332C744L, 6L)) != Tag441(/*uint16_t:257066:257066:244444:e*/p_41)) || (Tag442(/*uint16_t:0:0:244444:e*/*g_31))), (-1L))) , Tag443(/*uint32_t:0:0:244444:e*/g_366)) && Tag444(/*uint8_t:257066:257066:244444:e*/l_843)) | Tag445(/*const uint32_t:257066:257066:244444:e*/p_42)) , l_844) == l_845))) | 6UL)) > 65529UL) & 0L) , (Tag446(/*const int16_t:0:0:244444:e*/**g_531))), 10))))), 0xB7E2L)), 5)))))));
/*aft_stmt:244444*/
/*aft_stmt:244444*/
/*aft_stmt:244444*/
/*aft_stmt:244444*/
/*aft_stmt:244444*/
/*aft_stmt:244444*/
/*aft_stmt:244444*/
/*aft_stmt:244444*/
/*aft_stmt:244444*/
/*aft_stmt:244444*/
            for (g_32 = 0; (g_32 == 30); ++g_32)
            { /* block id: 381 */
                int64_t *l_861 = (void*)0;
                int8_t *l_862 = (void*)0;
                int8_t *l_863[1][6][5] = {{{&g_691,&g_691,&l_820,&g_691,&g_691},{&g_691,(void*)0,&l_820,&g_691,(void*)0},{&g_691,&l_820,&l_820,&g_691,&g_691},{&g_691,&g_691,&l_820,(void*)0,(void*)0},{&g_691,&g_691,&g_691,&g_691,&g_691},{(void*)0,&l_820,&g_691,(void*)0,&g_691}}};
                int i, j, k;
                /*bef_stmt:245727*/
/*bef_stmt:245727*/
/*bef_stmt:245727*/
/*bef_stmt:245727*/
/*bef_stmt:245727*/
/*bef_stmt:245727*/
(*g_433) &= (safe_unary_minus_func_uint64_t_u((safe_add_func_int64_t_s_s((((g_512[0][0][2] = 0x16L) < (g_691 = (safe_mul_func_int8_t_s_s((Tag447(/*int32_t:257041:257066:245727:e*/l_829[5]) ^ ((+(&l_782 == (Tag448(/*uint8_t:257066:257066:245727:e*/p_43) , &g_811))) == ((*l_423) ^= ((safe_div_func_uint64_t_u_u((Tag449(/*uint64_t:0:0:245727:e*/**g_484)), Tag450(/*int32_t:257041:257066:245727:e*/l_829[4]))) , ((safe_mod_func_uint64_t_u_u((((*l_846) ^= (((*l_823) = (*g_405)) == l_861)) >= 0x4DL), Tag451(/*int32_t:257041:257066:245727:e*/l_829[4]))) || 1L))))), 0xDBL)))) ^ 0xF9L), Tag452(/*int8_t:245846:257041:245727:e*/l_820)))));
/*aft_stmt:245727*/
/*aft_stmt:245727*/
/*aft_stmt:245727*/
/*aft_stmt:245727*/
/*aft_stmt:245727*/
/*aft_stmt:245727*/
            }
            for (g_129 = 0; (g_129 <= 6); g_129 += 1)
            { /* block id: 391 */
                int32_t *l_864 = &l_668;
                return g_867;
            }
        }
        else
        { /* block id: 394 */
            int16_t l_872[2];
            int32_t l_879 = 2L;
            int32_t l_883 = 0xC29EC319L;
            int32_t l_891 = 0x5CA4DF84L;
            int64_t ***l_921 = &g_405;
            int i;
            for (i = 0; i < 2; i++)
                l_872[i] = 0xC81AL;
            for (l_434 = (-20); (l_434 == 23); l_434 = safe_add_func_int8_t_s_s(l_434, 7))
            { /* block id: 397 */
                int32_t *l_876 = (void*)0;
                int32_t l_886 = 0x9C3ABB18L;
                int32_t l_890 = 6L;
                for (g_811 = 26; (g_811 < (-20)); g_811--)
                { /* block id: 400 */
                    int32_t *l_878 = &g_237;
                    int32_t l_888 = (-1L);
                    int32_t l_889[9];
                    const int8_t *l_947[8][2][2] = {{{&g_948,&g_946},{&g_948,&g_946}},{{&g_948,&g_946},{&g_948,&g_946}},{{&g_948,&g_946},{&g_948,&g_946}},{{&g_948,&g_946},{&g_948,&g_946}},{{&g_948,&g_946},{&g_948,&g_946}},{{&g_948,&g_946},{&g_948,&g_946}},{{&g_948,&g_946},{&g_948,&g_946}},{{&g_948,&g_946},{&g_948,&g_946}}};
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_889[i] = (-10L);
                    /*bef_stmt:251972*/
/*bef_stmt:251972*/
if ((Tag453(/*int16_t:257024:257041:251972:e*/l_872[0]) <= Tag454(/*int16_t:257024:257041:251972:e*/l_872[0])))
                    { /* block id: 401 */
                        uint16_t ****l_875 = &g_873;
                        int32_t **l_877 = &l_876;
                        (*l_875) = g_873;
                        l_878 = ((*l_877) = ((*g_121) = l_876));
                    }
                    else
                    { /* block id: 406 */
                        int32_t *l_880 = &l_829[2];
                        int32_t *l_881 = (void*)0;
                        int32_t *l_882 = (void*)0;
                        int32_t *l_884 = &l_667;
                        int32_t *l_885[6][9][4] = {{{&g_53,&l_667,&g_53,&g_53},{&g_53,(void*)0,(void*)0,&l_667},{&l_668,&l_829[4],&g_53,&l_667},{&l_411,&g_237,&l_411,&g_53},{&g_53,&l_883,&g_53,&l_667},{&l_879,&l_879,&l_667,&g_53},{&g_237,&l_667,&g_237,(void*)0},{&l_411,&l_883,&l_667,&l_668},{(void*)0,&g_53,&g_237,&l_883}},{{&l_883,(void*)0,&g_237,&l_883},{(void*)0,(void*)0,&l_667,&l_879},{&l_411,&l_667,&g_237,&l_411},{&g_237,&l_411,&l_667,&l_829[3]},{&l_879,&g_237,&g_53,(void*)0},{&g_53,&g_237,&l_411,(void*)0},{&l_411,&l_668,&g_53,&l_879},{&l_668,&g_237,(void*)0,&g_237},{&l_883,(void*)0,(void*)0,&g_53}},{{&g_237,&l_667,&g_237,&l_411},{&l_411,&l_829[4],&l_668,&l_829[4]},{(void*)0,(void*)0,&l_667,(void*)0},{(void*)0,&l_829[3],&l_411,&l_829[0]},{&l_411,(void*)0,&l_667,&l_883},{&l_411,(void*)0,(void*)0,&l_411},{&g_53,&g_53,&l_883,(void*)0},{&l_668,&g_237,&l_411,(void*)0},{(void*)0,&l_667,(void*)0,(void*)0}},{{&l_883,&g_237,&l_667,(void*)0},{&l_829[4],&g_53,&g_237,&l_411},{&g_53,(void*)0,(void*)0,&l_883},{&l_879,(void*)0,&l_829[1],&l_829[0]},{&g_53,&l_829[3],&l_667,(void*)0},{&l_829[4],(void*)0,&l_829[0],&l_829[4]},{&g_237,&l_829[4],&l_829[1],&l_411},{&g_237,&l_667,&l_829[4],&g_53},{&g_53,(void*)0,&l_883,&g_237}},{{&l_411,&l_411,&l_667,&g_237},{&l_829[4],&l_668,&l_879,&l_829[4]},{(void*)0,&l_829[0],&l_667,&g_53},{&l_829[0],&l_411,&l_883,&l_879},{&l_883,&g_53,&l_829[0],&g_53},{&l_411,&l_883,&g_237,&l_829[4]},{(void*)0,&l_829[4],&l_411,&l_883},{(void*)0,&l_667,&g_53,(void*)0},{(void*)0,&l_667,&l_411,&l_668}},{{(void*)0,(void*)0,&g_237,&g_53},{&l_411,(void*)0,&l_829[0],&l_411},{&l_883,&g_237,&l_883,&l_411},{&l_829[0],&g_237,&l_667,(void*)0},{(void*)0,&l_883,&l_879,(void*)0},{&l_829[4],&l_411,&l_667,&l_411},{&l_411,&g_53,&l_883,&g_237},{&g_53,(void*)0,&l_829[4],&l_883},{&g_237,&l_883,&l_829[1],&l_668}}};
                        int i, j, k;
                        ++g_893;
                    }
/*aft_stmt:251972*/
/*aft_stmt:251972*/
                    for (g_660 = 2; (g_660 >= 0); g_660 -= 1)
                    { /* block id: 411 */
                        int i;
                        (*g_121) = &l_889[(g_660 + 5)];
                    }
                    for (p_40 = 0; (p_40 <= 7); p_40 += 1)
                    { /* block id: 416 */
                        int8_t *l_919 = &g_512[0][0][2];
                        uint16_t *l_920 = &l_819;
                        int64_t ****l_922 = &l_921;
                        int64_t ****l_923[4];
                        uint8_t *l_925 = &g_128;
                        uint32_t l_931 = 0xD6406B4AL;
                        uint32_t *l_940 = (void*)0;
                        uint32_t *l_941 = (void*)0;
                        uint32_t *l_942[7][9] = {{&g_175,&g_77,&g_72[2][4][5],&g_77,&g_72[2][4][5],&g_77,&g_175,&g_175,&g_584},{&g_72[0][2][1],&g_584,&g_72[1][0][2],&g_584,&g_72[0][2][1],(void*)0,(void*)0,&g_72[0][2][1],&g_584},{&g_175,&g_77,&g_175,(void*)0,&g_584,&g_72[0][5][2],&g_584,&g_175,&g_72[2][4][5]},{&l_410,&l_410,(void*)0,&g_72[1][0][2],&g_72[1][0][2],(void*)0,&l_410,&l_410,&l_410},{&g_584,&g_77,&g_584,(void*)0,(void*)0,&g_175,&g_72[2][4][5],&g_175,&g_584},{&l_410,&g_72[0][2][1],&g_72[0][2][1],&l_410,&l_410,(void*)0,&l_410,&l_410,&g_72[0][2][1]},{&g_175,&g_77,&g_72[2][4][5],(void*)0,&g_584,(void*)0,&g_72[2][4][5],&g_77,&g_175}};
                        const int8_t **l_944[6];
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_923[i] = (void*)0;
                        for (i = 0; i < 6; i++)
                            l_944[i] = (void*)0;
                        /*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
/*bef_stmt:255034*/
l_883 = (safe_lshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s((((!(safe_sub_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(g_216[p_40], (safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((0x23D3CF9F3F59E911LL || (((*l_925) = (safe_sub_func_uint64_t_u_u(0xE1C77CFA0C43BF14LL, ((((((((safe_add_func_uint16_t_u_u(0xB8CBL, (safe_div_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(((*l_919) = (Tag455(/*uint8_t:0:0:255034:e*/g_193) & 253UL)), Tag456(/*int16_t:257024:257041:255034:e*/l_872[0]))) , ((((((*l_920) = ((*g_31) = (Tag457(/*uint16_t:0:0:255034:e*/**g_874)))) != ((g_924 = ((*l_922) = l_921)) == &g_405)) || 0x0050A538E902385DLL) , Tag458(/*const uint32_t:257066:257066:255034:e*/p_42)) , p_40)) != (Tag459(/*uint64_t:0:0:255034:e*/*g_485))), Tag460(/*uint8_t:257066:257066:255034:e*/p_43))))) < 0xDA54L) >= (-5L)) != Tag461(/*uint8_t:257066:257066:255034:e*/p_43)) < 250UL) & Tag462(/*uint16_t:257066:257066:255034:e*/p_41)) | Tag463(/*const uint32_t:257066:257066:255034:e*/p_42)) != 1UL)))) & Tag464(/*int8_t:0:0:255034:e*/g_691))), Tag465(/*int32_t:257041:257066:255034:e*/l_829[3]))), 9)) != (Tag466(/*const int16_t:0:0:255034:e*/*g_532))) < Tag467(/*int32_t:257041:257066:255034:e*/l_829[4])), Tag468(/*int32_t:257066:257066:255034:e*/l_411))))) && Tag469(/*const uint32_t:257066:257066:255034:e*/p_42)), Tag470(/*uint16_t:257066:257066:255034:e*/p_41)))) == p_40) , Tag471(/*uint16_t:257066:257066:255034:e*/l_926)), (Tag472(/*uint64_t:0:0:255034:e*/**g_484)))) ^ Tag473(/*uint8_t:257066:257066:255034:e*/p_43)), Tag474(/*uint8_t:257066:257066:255034:e*/p_43)));
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
/*aft_stmt:255034*/
                        /*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
/*bef_stmt:255721*/
(*g_433) = ((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((Tag475(/*uint32_t:255886:255912:255721:e*/l_931) ^ (Tag476(/*uint32_t:0:0:255721:e*/*g_207))), (safe_rshift_func_uint8_t_u_s(Tag477(/*int16_t:257024:257041:255721:e*/l_872[0]), 3)))) || ((void*)0 != &g_485)), (safe_mod_func_uint64_t_u_u((((*l_919) &= Tag478(/*uint32_t:0:0:255721:e*/g_72[5][3][3])) && ((*l_919) = ((((((((g_72[4][6][3] = (safe_div_func_uint32_t_u_u((((&g_53 != &l_889[4]) > ((safe_sub_func_int32_t_s_s(((-2L) ^ g_216[p_40]), Tag479(/*uint16_t:257066:257066:255721:e*/p_41))) >= 0L)) , 0x5B7A3E00L), p_40))) == Tag480(/*uint16_t:257041:257066:255721:e*/l_819)) == 1UL) && 0x1CL) <= Tag481(/*int32_t:257024:257041:255721:e*/l_883)) > (Tag482(/*uint16_t:0:0:255721:e*/*g_31))) , (Tag483(/*int32_t:0:0:255721:e*/*g_433))) | Tag484(/*uint8_t:257066:257066:255721:e*/p_43)))), (Tag485(/*uint64_t:0:0:255721:e*/**g_484)))))) <= p_40);
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
/*aft_stmt:255721*/
                        (*g_433) ^= ((l_947[5][0][0] = (g_945 = l_943)) != (void*)0);
                        (*g_121) = l_940;
                    }
                }
                for (p_41 = 0; (p_41 != 47); ++p_41)
                { /* block id: 436 */
                    uint64_t l_968 = 0x8426938C1BDFEEF5LL;
                    int32_t *l_969 = &l_886;
                    /*bef_stmt:256076*/
/*bef_stmt:256076*/
(*g_433) = (Tag486(/*int32_t:257041:257066:256076:e*/l_829[5]) == Tag487(/*uint8_t:257066:257066:256076:e*/p_43));
/*aft_stmt:256076*/
/*aft_stmt:256076*/
                    for (l_926 = 0; (l_926 < 37); ++l_926)
                    { /* block id: 440 */
                        int64_t l_955 = (-10L);
                        uint8_t *l_970 = (void*)0;
                        uint8_t *l_971[3];
                        uint8_t l_972 = 0x8AL;
                        int32_t *l_974 = &l_782;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_971[i] = &g_193;
                        /*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
/*bef_stmt:256929*/
(*l_969) ^= (((*l_974) = (((safe_rshift_func_int16_t_s_u((Tag488(/*const int16_t:0:0:256929:e*/*g_532)), 10)) < (Tag489(/*int64_t:256957:256975:256929:e*/l_955) >= ((safe_add_func_uint16_t_u_u((((*g_485) |= (Tag490(/*int64_t:256957:256975:256929:e*/l_955) | (safe_add_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((0L || (safe_add_func_uint16_t_u_u((--(***g_873)), 0x309EL))), (((((~(+(Tag491(/*uint8_t:257066:257066:256929:e*/p_43) >= (l_972 ^= (g_80 = (Tag492(/*uint64_t:256975:257000:256929:e*/l_968) & ((void*)0 != l_969))))))) >= (Tag493(/*const int16_t:0:0:256929:e*/*g_532))) , 0x721FL) , l_434) , p_41))) , Tag494(/*uint8_t:256957:256975:256929:e*/l_972)), (Tag495(/*const int16_t:0:0:256929:e*/*g_532)))))) , Tag496(/*uint32_t:257066:257066:256929:e*/p_40)), Tag497(/*uint32_t:257041:257066:256929:e*/l_973))) , 0x37L))) < Tag498(/*int64_t:256957:256975:256929:e*/l_955))) , Tag499(/*int64_t:256957:256975:256929:e*/l_955));
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
/*aft_stmt:256929*/
                        /*bef_stmt:256953*/
if ((Tag500(/*int32_t:0:0:256953:e*/*g_433)))
                            break;
/*aft_stmt:256953*/
                    }
                }
                /*bef_stmt:256996*/
if (Tag501(/*int64_t:257066:257066:256996:e*/l_665))
                    break;
/*aft_stmt:256996*/
            }
            return g_975;
        }
/*aft_stmt:257035*/
    }
/*aft_stmt:257051*/
    return g_977;
}


/* ------------------------------------------ */
/* 
 * reads : g_53 g_72 g_32 g_51 g_31 g_77 g_86 g_121 g_128 g_129 g_175 g_122 g_158 g_206 g_207 g_216 g_80 g_214 g_237 g_215 g_193 g_20 g_362 g_264 g_404 g_408
 * writes: g_53 g_72 g_80 g_86 g_32 g_77 g_51 g_128 g_129 g_175 g_193 g_216 g_237 g_215 g_264 g_122 g_158 g_362 g_366 g_404
 */
static uint16_t  func_45(const int8_t  p_46, int8_t  p_47, int64_t  p_48, uint8_t  p_49)
{ /* block id: 6 */
    int64_t l_75 = 0xB4AB19F88DD0BB26LL;
    uint16_t l_229[4] = {2UL,2UL,2UL,2UL};
    int32_t l_235[1];
    int32_t *l_273 = &l_235[0];
    int32_t l_321[10] = {0x8A9666FFL,0x8A9666FFL,0x8A9666FFL,0x8A9666FFL,0x8A9666FFL,0x8A9666FFL,0x8A9666FFL,0x8A9666FFL,0x8A9666FFL,0x8A9666FFL};
    int64_t *l_325 = &l_75;
    int64_t **l_324 = &l_325;
    int32_t *l_369 = (void*)0;
    int8_t l_370 = 1L;
    int i;
    for (i = 0; i < 1; i++)
        l_235[i] = 0x2FFC3B98L;
    for (g_53 = 11; (g_53 < (-6)); g_53 = safe_sub_func_uint32_t_u_u(g_53, 3))
    { /* block id: 9 */
        uint32_t *l_71 = &g_72[2][4][5];
        uint32_t *l_76[3];
        int8_t l_78 = 0xFAL;
        uint8_t *l_79 = &g_80;
        uint64_t *l_85 = &g_86[6][7][0];
        uint16_t l_87 = 0xFE8FL;
        int64_t *l_240 = &g_215;
        int64_t **l_239 = &l_240;
        int32_t l_255 = 0x82136C56L;
        int16_t *l_271 = (void*)0;
        int32_t l_296 = 0x4BA6F3B4L;
        uint64_t l_320 = 0xFAD78BCD14600C48LL;
        uint32_t *l_360 = (void*)0;
        uint32_t *l_361 = &g_362;
        uint32_t *l_365 = &g_366;
        int32_t *l_371 = &l_321[2];
        uint16_t l_386 = 0x1FF7L;
        int8_t *l_387 = &l_370;
        int i;
        for (i = 0; i < 3; i++)
            l_76[i] = &g_77;
        /*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
/*bef_stmt:263976*/
if (((safe_mul_func_int16_t_s_s(func_60((safe_rshift_func_int16_t_s_u(2L, ((*g_31) = ((((safe_add_func_uint8_t_u_u(((*l_79) = (safe_div_func_uint32_t_u_u(((*l_71)--), (l_78 = Tag502(/*int64_t:266484:266484:263976:e*/l_75))))), (((*l_85) = (safe_add_func_uint32_t_u_u(0UL, (Tag503(/*uint16_t:0:0:263976:e*/g_32) >= (Tag504(/*const int8_t:266484:266484:263976:e*/p_46) == (safe_rshift_func_uint16_t_u_s((0xDDL < Tag505(/*int64_t:0:0:263976:e*/g_51)), (Tag506(/*int64_t:0:0:263976:e*/g_51) & 0L)))))))) , Tag507(/*const int8_t:266484:266484:263976:e*/p_46)))) && Tag508(/*uint16_t:265533:266484:263976:e*/l_87)) , 0UL) , Tag509(/*int64_t:266484:266484:263976:e*/p_48))))), Tag510(/*int64_t:266484:266484:263976:e*/l_75), Tag511(/*int64_t:266484:266484:263976:e*/p_48), Tag512(/*uint16_t:265533:266484:263976:e*/l_87)), 0x132BL)) | 1UL))
        { /* block id: 89 */
            int32_t *l_236 = &g_237;
            int64_t **l_238 = (void*)0;
            /*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
/*bef_stmt:259998*/
(*l_236) = ((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((((((p_49 = ((*l_79) ^= Tag513(/*int64_t:266484:266484:259998:e*/l_75))) && ((((((*g_31) ^= ((void*)0 == l_71)) ^ Tag514(/*uint8_t:266484:266484:259998:e*/p_49)) != ((void*)0 != &g_128)) ^ (safe_unary_minus_func_int16_t_s((safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_u((~((Tag515(/*int8_t:265533:266484:259998:e*/l_78) != Tag516(/*uint16_t:266484:266484:259998:e*/l_229[0])) >= ((g_80 = ((safe_div_func_int16_t_s_s((((safe_unary_minus_func_int64_t_s((l_235[0] = ((((safe_add_func_uint16_t_u_u(((-4L) ^ (Tag517(/*uint32_t:0:0:259998:e*/**g_206))), Tag518(/*int8_t:266484:266484:259998:e*/p_47))) <= (-1L)) & 1UL) | Tag519(/*const int8_t:266484:266484:259998:e*/p_46))))) , Tag520(/*uint8_t:266484:266484:259998:e*/p_49)) , 0x20A0L), Tag521(/*int64_t:266484:266484:259998:e*/p_48))) , Tag522(/*uint8_t:266484:266484:259998:e*/p_49))) && Tag523(/*uint64_t:0:0:259998:e*/g_86[5][7][0])))), Tag524(/*int64_t:266484:266484:259998:e*/l_75))) && Tag525(/*int64_t:266484:266484:259998:e*/l_75)) , Tag526(/*int64_t:266484:266484:259998:e*/l_75)), 1L))))) || (-8L))) < Tag527(/*uint16_t:266484:266484:259998:e*/l_229[3])) , Tag528(/*int32_t:0:0:259998:e*/g_214[0][2][1])) >= Tag529(/*int8_t:265533:266484:259998:e*/l_78)) , 1UL), Tag530(/*int64_t:266484:266484:259998:e*/p_48))), 0)) > Tag531(/*const int8_t:266484:266484:259998:e*/p_46)) | 0x79E9L) == Tag532(/*const int8_t:266484:266484:259998:e*/p_46));
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
/*aft_stmt:259998*/
            l_239 = l_238;
            for (l_78 = (-29); (l_78 != (-21)); l_78 = safe_add_func_uint8_t_u_u(l_78, 8))
            { /* block id: 99 */
                int64_t *l_253 = &l_75;
                int16_t *l_254[8] = {&g_158,&g_158,&g_158,&g_158,&g_158,&g_158,&g_158,&g_158};
                int32_t *l_256 = &g_237;
                int8_t *l_263 = &g_264;
                int i;
                /*bef_stmt:260958*/
/*bef_stmt:260958*/
/*bef_stmt:260958*/
/*bef_stmt:260958*/
/*bef_stmt:260958*/
/*bef_stmt:260958*/
/*bef_stmt:260958*/
/*bef_stmt:260958*/
/*bef_stmt:260958*/
/*bef_stmt:260958*/
(*l_256) = ((((&g_80 == ((safe_rshift_func_uint16_t_u_u(Tag533(/*int8_t:266484:266484:260958:e*/p_47), 0)) , ((((Tag534(/*int32_t:261629:265533:260958:e*/*l_236)) <= (safe_rshift_func_uint16_t_u_u((((*l_240) &= 0x6EB511B20A924ABBLL) >= ((void*)0 != &g_207)), 10))) > (-9L)) , (void*)0))) == ((((safe_lshift_func_uint16_t_u_s((((*g_207) = (((l_255 ^= (((*l_253) |= (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((Tag535(/*int32_t:261629:265533:260958:e*/*l_236)), Tag536(/*uint8_t:0:0:260958:e*/g_193))), Tag537(/*uint64_t:0:0:260958:e*/g_86[6][5][0])))) == Tag538(/*uint16_t:0:0:260958:e*/g_32))) | Tag539(/*int64_t:266484:266484:260958:e*/p_48)) ^ Tag540(/*int64_t:266484:266484:260958:e*/p_48))) != Tag541(/*int64_t:266484:266484:260958:e*/p_48)), 8)) < 0x204AL) , l_256) == (*g_121))) > 0xBC039551F979E623LL) | Tag542(/*uint16_t:266484:266484:260958:e*/l_229[0]));
/*aft_stmt:260958*/
/*aft_stmt:260958*/
/*aft_stmt:260958*/
/*aft_stmt:260958*/
/*aft_stmt:260958*/
/*aft_stmt:260958*/
/*aft_stmt:260958*/
/*aft_stmt:260958*/
/*aft_stmt:260958*/
/*aft_stmt:260958*/
                /*bef_stmt:260993*/
(*l_236) ^= (Tag543(/*int32_t:0:0:260993:e*/*g_122));
/*aft_stmt:260993*/
                /*bef_stmt:261542*/
/*bef_stmt:261542*/
/*bef_stmt:261542*/
/*bef_stmt:261542*/
/*bef_stmt:261542*/
/*bef_stmt:261542*/
/*bef_stmt:261542*/
/*bef_stmt:261542*/
/*bef_stmt:261542*/
/*bef_stmt:261542*/
(*g_121) = ((safe_rshift_func_uint16_t_u_s(((((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((*l_263) = 0x58L) >= ((Tag544(/*uint8_t:266484:266484:261542:e*/p_49) <= 0xE9079731L) && (l_85 == (((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((*l_236) = ((void*)0 != &l_256)), 5)), (18446744073709551615UL && Tag545(/*uint32_t:0:0:261542:e*/g_77)))) || (l_255 |= Tag546(/*uint8_t:0:0:261542:e*/g_216[0]))) , &g_86[6][7][0])))), Tag547(/*int16_t:0:0:261542:e*/g_158))), Tag548(/*uint16_t:0:0:261542:e*/g_32))) , Tag549(/*int64_t:266484:266484:261542:e*/p_48)) && Tag550(/*int8_t:266484:266484:261542:e*/p_47)) | Tag551(/*const int64_t:0:0:261542:e*/g_20)) >= 0x791FE6ADB902ED9ALL) & Tag552(/*uint64_t:0:0:261542:e*/g_86[2][5][0])), Tag553(/*int64_t:266484:266484:261542:e*/p_48))) , (*g_121));
/*aft_stmt:261542*/
/*aft_stmt:261542*/
/*aft_stmt:261542*/
/*aft_stmt:261542*/
/*aft_stmt:261542*/
/*aft_stmt:261542*/
/*aft_stmt:261542*/
/*aft_stmt:261542*/
/*aft_stmt:261542*/
/*aft_stmt:261542*/
                (*l_256) &= l_78;
            }
            (*g_121) = (*g_121);
        }
        else
        { /* block id: 113 */
            int32_t *l_272 = &l_235[0];
            int8_t l_289 = (-8L);
            const int32_t l_319 = 3L;
            /*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
/*bef_stmt:263941*/
if ((((safe_div_func_int16_t_s_s((g_158 = (((((void*)0 == l_271) ^ ((((((*g_121) = l_272) != (l_273 = l_272)) , (safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((((void*)0 != &g_264) != (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(((*g_31) = ((Tag554(/*int32_t:263969:265533:263941:e*/*l_272)) , (Tag555(/*uint32_t:0:0:263941:e*/g_175) , (safe_lshift_func_uint8_t_u_s((Tag556(/*int8_t:266484:266484:263941:e*/p_47) != Tag557(/*int64_t:266484:266484:263941:e*/p_48)), Tag558(/*int8_t:263969:265533:263941:e*/l_289)))))), 0xBDC4L)) || Tag559(/*uint64_t:0:0:263941:e*/g_86[2][1][0])), 4)), 18446744073709551611UL))), 1L)) | (-4L)), 0xA5L)), (Tag560(/*int32_t:0:0:263941:e*/**g_121))))))) & Tag561(/*int32_t:0:0:263941:e*/g_237)) & Tag562(/*uint16_t:265533:266484:263941:e*/l_87))) , (-7L)) <= Tag563(/*const int8_t:266484:266484:263941:e*/p_46))), Tag564(/*int32_t:265533:266484:263941:e*/l_255))) || (Tag565(/*int32_t:263969:265533:263941:e*/*l_272))) & 0xA9L))
            { /* block id: 118 */
                int32_t l_299 = 0x2C9B0C5AL;
                int64_t ***l_326 = &l_239;
                /*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
/*bef_stmt:263210*/
l_321[2] = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((&l_273 != ((((safe_lshift_func_uint16_t_u_s(((Tag566(/*int32_t:265533:266484:263210:e*/l_296) <= (safe_rshift_func_uint16_t_u_s((Tag567(/*int64_t:266484:266484:263210:e*/p_48) & Tag568(/*int32_t:263764:263969:263210:e*/l_299)), ((safe_add_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(Tag569(/*int64_t:266484:266484:263210:e*/p_48), (safe_div_func_uint64_t_u_u(Tag570(/*int32_t:0:0:263210:e*/g_214[2][2][2]), Tag571(/*int32_t:263764:263969:263210:e*/l_299))))), 8)), 0)), (safe_rshift_func_int16_t_s_u(((((*l_273) ^= (-10L)) , (safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((Tag572(/*int8_t:266484:266484:263210:e*/p_47) | (Tag573(/*int32_t:0:0:263210:e*/**g_121))))) || Tag574(/*uint8_t:266484:266484:263210:e*/p_49)) < Tag575(/*int8_t:265533:266484:263210:e*/l_78)), 12))) & Tag576(/*uint32_t:0:0:263210:e*/g_77)), 5)))), Tag577(/*int32_t:263764:263969:263210:e*/l_299))) < Tag578(/*int64_t:0:0:263210:e*/g_215)), Tag579(/*const int32_t:263969:265533:263210:e*/l_319))) == Tag580(/*uint64_t:265533:266484:263210:e*/l_320))))) || Tag581(/*const int8_t:266484:266484:263210:e*/p_46)), 7)) | Tag582(/*int64_t:266484:266484:263210:e*/p_48)) || Tag583(/*int32_t:263764:263969:263210:e*/l_299)) , (void*)0)), Tag584(/*const int8_t:266484:266484:263210:e*/p_46))), 1));
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
/*aft_stmt:263210*/
                /*bef_stmt:263760*/
/*bef_stmt:263760*/
/*bef_stmt:263760*/
/*bef_stmt:263760*/
/*bef_stmt:263760*/
/*bef_stmt:263760*/
/*bef_stmt:263760*/
/*bef_stmt:263760*/
(*l_272) = ((((-1L) > (safe_lshift_func_int16_t_s_s(((65535UL >= (((((*l_326) = l_324) == (void*)0) & (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(Tag585(/*uint64_t:265533:266484:263760:e*/l_320), 1)), ((Tag586(/*int32_t:266484:266484:263760:e*/*l_273)) <= ((*l_85) = (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(Tag587(/*uint8_t:266484:266484:263760:e*/p_49), Tag588(/*int64_t:266484:266484:263760:e*/p_48))), 0)), (((*g_31) = Tag589(/*int64_t:266484:266484:263760:e*/p_48)) < (-1L)))) , (Tag590(/*int32_t:263969:265533:263760:e*/*l_272))), (Tag591(/*int32_t:263969:265533:263760:e*/*l_272))))))))) , 0xD7F6L)) || 0x72L), Tag592(/*int32_t:0:0:263760:e*/g_214[2][5][0])))) ^ 0x2539258CL) == 3UL);
/*aft_stmt:263760*/
/*aft_stmt:263760*/
/*aft_stmt:263760*/
/*aft_stmt:263760*/
/*aft_stmt:263760*/
/*aft_stmt:263760*/
/*aft_stmt:263760*/
/*aft_stmt:263760*/
            }
            else
            { /* block id: 125 */
                for (p_47 = 0; (p_47 <= 0); p_47 += 1)
                { /* block id: 128 */
                    for (l_87 = 0; (l_87 <= 0); l_87 += 1)
                    { /* block id: 131 */
                        int i;
                        return l_235[p_47];
                    }
                }
            }
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
/*aft_stmt:263941*/
            /*bef_stmt:263965*/
if ((Tag593(/*int32_t:0:0:263965:e*/*g_122)))
                continue;
/*aft_stmt:263965*/
        }
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
/*aft_stmt:263976*/
        /*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
/*bef_stmt:264843*/
(*l_371) ^= ((*l_273) = ((safe_add_func_int16_t_s_s(((void*)0 != (*g_206)), Tag594(/*uint32_t:0:0:264843:e*/g_175))) || (((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s(Tag595(/*uint32_t:0:0:264843:e*/g_175), (--(*l_85)))), 4)), ((((safe_lshift_func_uint8_t_u_s((((*g_207) = Tag596(/*const int8_t:266484:266484:264843:e*/p_46)) , ((safe_rshift_func_int16_t_s_u((8L && (((safe_unary_minus_func_int32_t_s((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s(Tag597(/*uint8_t:266484:266484:264843:e*/p_49), (Tag598(/*int32_t:266484:266484:264843:e*/*l_273)))), ((safe_div_func_int32_t_s_s(((((((*l_365) = (--(*l_361))) , (((((safe_add_func_int8_t_s_s(Tag599(/*int8_t:0:0:264843:e*/g_264), 0xDFL)) < Tag600(/*uint8_t:266484:266484:264843:e*/p_49)) < 1UL) , 0x58F5251EB5ED7D3DLL) , l_369)) == &l_321[9]) , 0xDA2DL) >= (Tag601(/*uint16_t:0:0:264843:e*/*g_31))), (Tag602(/*uint32_t:0:0:264843:e*/*g_207)))) && Tag603(/*uint8_t:266484:266484:264843:e*/p_49)))))) , Tag604(/*int8_t:266484:266484:264843:e*/l_370)) >= (Tag605(/*int32_t:0:0:264843:e*/*g_122)))), 11)) > Tag606(/*uint64_t:265533:266484:264843:e*/l_320))), 1)) > Tag607(/*const int8_t:266484:266484:264843:e*/p_46)) ^ Tag608(/*uint8_t:0:0:264843:e*/g_128)) ^ Tag609(/*uint32_t:0:0:264843:e*/g_72[4][1][4])))) | Tag610(/*int16_t:0:0:264843:e*/g_158)) , Tag611(/*uint8_t:266484:266484:264843:e*/p_49))));
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
/*aft_stmt:264843*/
        /*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
/*bef_stmt:265529*/
(*l_273) = (safe_lshift_func_int8_t_s_u(((*l_387) |= ((((((0xA1E4A67104AFCE30LL || ((*g_121) != (*g_121))) <= ((((safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((Tag612(/*uint32_t:0:0:265529:e*/**g_206)) , (Tag613(/*const int8_t:266484:266484:265529:e*/p_46) && ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0L, ((((g_158 = Tag614(/*int8_t:266484:266484:265529:e*/p_47)) < (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((void*)0 == (*g_121)), 10)), Tag615(/*uint64_t:0:0:265529:e*/g_86[6][7][0])))) && Tag616(/*int64_t:266484:266484:265529:e*/p_48)) ^ (Tag617(/*uint32_t:0:0:265529:e*/**g_206))))), 0x59L)) == (Tag618(/*int32_t:0:0:265529:e*/*g_122))))), Tag619(/*uint16_t:265533:266484:265529:e*/l_386))) != 0x999E4DED2253022FLL), (Tag620(/*uint32_t:0:0:265529:e*/*g_207)))) & 4UL) == Tag621(/*const int8_t:266484:266484:265529:e*/p_46)) , 0xA01E9A5BL)) < Tag622(/*int64_t:266484:266484:265529:e*/p_48)) && 0xEC0A1D04AF1C7367LL) >= (Tag623(/*int32_t:265533:266484:265529:e*/*l_371))) && (Tag624(/*int32_t:265533:266484:265529:e*/*l_371)))), Tag625(/*uint32_t:0:0:265529:e*/g_77)));
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
/*aft_stmt:265529*/
    }
    for (g_237 = 6; (g_237 >= 0); g_237 -= 1)
    { /* block id: 150 */
        int64_t ** const **l_407 = &g_404;
        int i;
        if (g_216[g_237])
            break;
        /*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
/*bef_stmt:266455*/
(*g_122) = ((g_216[g_237] , ((((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((((~(((*g_31) = (0x84BEL >= Tag626(/*uint8_t:0:0:266455:e*/g_128))) < (safe_unary_minus_func_uint64_t_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((Tag627(/*uint8_t:266484:266484:266455:e*/p_49) >= ((Tag628(/*uint8_t:0:0:266455:e*/g_193) , ((*l_407) = g_404)) != (void*)0)), Tag629(/*int32_t:0:0:266455:e*/g_53))), ((((((Tag630(/*int64_t:266484:266484:266455:e*/p_48) > Tag631(/*int64_t:266484:266484:266455:e*/p_48)) < (-1L)) >= 0x0A983652L) | Tag632(/*const int8_t:266484:266484:266455:e*/p_46)) ^ 0xF1C7L) || (Tag633(/*int32_t:266484:266484:266455:e*/*l_273))))), 1)), Tag634(/*uint32_t:0:0:266455:e*/g_77))) >= Tag635(/*uint32_t:0:0:266455:e*/g_72[3][1][5])))))) , &g_86[6][7][0]) != (void*)0), 1)) <= Tag636(/*uint8_t:0:0:266455:e*/g_80)), (Tag637(/*int32_t:266484:266484:266455:e*/*l_273)))) ^ Tag638(/*uint8_t:266484:266484:266455:e*/p_49)), Tag639(/*int64_t:266484:266484:266455:e*/p_48))) , g_216[g_237]) > 0x45C005599F8BF951LL) || Tag640(/*uint64_t:0:0:266455:e*/g_408))) == Tag641(/*int8_t:266484:266484:266455:e*/p_47));
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
/*aft_stmt:266455*/
    }
    /*bef_stmt:266482*/
return Tag642(/*uint8_t:266484:266484:266482:e*/p_49);
/*aft_stmt:266482*/
}


/* ------------------------------------------ */
/* 
 * reads : g_32 g_51 g_77 g_80 g_86 g_121 g_31 g_53 g_128 g_72 g_129 g_175 g_122 g_158 g_206 g_207 g_216
 * writes: g_80 g_77 g_51 g_86 g_32 g_128 g_129 g_175 g_193 g_216
 */
static int16_t  func_60(int32_t  p_61, int32_t  p_62, uint32_t  p_63, int32_t  p_64)
{ /* block id: 15 */
    const uint64_t l_88[3] = {0x1338462C7DCB2139LL,0x1338462C7DCB2139LL,0x1338462C7DCB2139LL};
    int64_t l_94[5];
    uint8_t *l_107 = &g_80;
    int32_t l_108[10][5][5] = {{{1L,(-5L),0x9FB7A8BFL,(-5L),(-3L)},{0xE236B79BL,7L,0x2EF76CAFL,6L,(-2L)},{0xB3CABD61L,0L,0x96F5F53EL,0xEDB7DE59L,0x771C7562L},{(-3L),0x1744B85CL,(-1L),7L,(-1L)},{0x26C4802AL,1L,1L,0x41A119B8L,1L}},{{(-1L),0x545B60A5L,0xC9A86FCAL,1L,0x96F5F53EL},{0x5587BB5BL,(-1L),0L,1L,0xADD72F77L},{0x4EC1833BL,(-1L),0L,(-6L),7L},{(-9L),0x545B60A5L,0x545B60A5L,(-9L),(-6L)},{(-6L),(-9L),7L,0xB3CABD61L,(-5L)}},{{(-3L),0x4FE02E22L,(-2L),1L,0x5FF26AE3L},{(-2L),0L,(-6L),0xB3CABD61L,0xDE5CCA7CL},{(-1L),0xD7879CFBL,0x58462BD5L,(-9L),(-6L)},{0L,(-4L),0x4FBAEB33L,(-6L),1L},{0xA75F9311L,(-1L),0x2EF76CAFL,1L,1L}},{{0xA2DC96F0L,(-1L),(-7L),1L,(-9L)},{0L,0x1744B85CL,0L,0x41A119B8L,(-2L)},{0L,0xAA2C9F03L,0L,7L,6L},{(-1L),0x5587BB5BL,0x642E063AL,0xEDB7DE59L,0x3631664AL},{(-3L),0x8F334EEAL,0x6CE2C691L,6L,0xADD72F77L}},{{0x1744B85CL,1L,6L,(-5L),0x4FBAEB33L},{0L,0x3631664AL,(-7L),(-9L),(-4L)},{0x4EC1833BL,1L,0xDE5CCA7CL,(-1L),(-4L)},{(-6L),0xE543FC1EL,(-2L),(-1L),0x4FBAEB33L},{(-2L),(-1L),0x58462BD5L,0xA75F9311L,0xADD72F77L}},{{0x26C4802AL,0xD7879CFBL,0x69E501E4L,0xC2835E52L,0x3631664AL},{9L,0x69E501E4L,(-1L),(-5L),6L},{0xA75F9311L,7L,7L,(-3L),(-2L)},{0xE236B79BL,(-2L),(-3L),0x771C7562L,0x545B60A5L},{0xC9A86FCAL,0x574D2646L,0xF630FE8BL,0xD4BBA09BL,(-8L)}},{{0L,(-3L),(-5L),1L,0x771C7562L},{0x8392DDE9L,0xC2835E52L,0xD33A1293L,0xD33A1293L,0xC2835E52L},{0xC2835E52L,7L,0x8392DDE9L,0x771C7562L,(-3L)},{(-3L),0xDE5CCA7CL,0xEDB7DE59L,0x1048D1DFL,(-1L)},{0xDD168C87L,1L,0xF29F9B9BL,0x85EFCBABL,0x4EC1833BL}},{{(-3L),(-7L),0x9FB7A8BFL,(-1L),0xC871CFEEL},{0xC2835E52L,(-3L),(-1L),0xF256DA86L,0x26C4802AL},{0x8392DDE9L,0x69E501E4L,0xCA122FC4L,0x8E951F22L,(-1L)},{0L,0x34F691D6L,0xC871CFEEL,0x6CE2C691L,0x16E0766BL},{0xC9A86FCAL,0x4EC1833BL,(-1L),0xE543FC1EL,0x771C7562L}},{{9L,0x30DEE2C5L,(-3L),0xF630FE8BL,(-6L)},{0x41A119B8L,0x58462BD5L,(-7L),0x96F5F53EL,0xD33A1293L},{0xAA2C9F03L,(-1L),0xEDB7DE59L,0x30DEE2C5L,0x69E501E4L},{(-1L),(-3L),0x58462BD5L,9L,0xC9A86FCAL},{0x69E501E4L,0xF29F9B9BL,(-7L),0x545B60A5L,0x16E0766BL}},{{0xC2835E52L,0L,(-5L),0xC9A86FCAL,(-2L)},{0x219839B2L,0L,0xB072BDA1L,0xC871CFEEL,(-1L)},{0x6CE2C691L,0xF29F9B9BL,0x16E0766BL,0x6CE2C691L,0xC871CFEEL},{0xE236B79BL,(-3L),7L,(-1L),0x1048D1DFL},{(-7L),(-1L),0xBDFF1065L,(-8L),0L}}};
    int32_t *l_109 = &g_53;
    int32_t **l_110 = &l_109;
    uint16_t l_210 = 0xA3F0L;
    int32_t *l_212 = &l_108[3][3][3];
    int32_t *l_213[6][7][1] = {{{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]}},{{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]}},{{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]}},{{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]}},{{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]}},{{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]},{&l_108[6][1][2]},{&l_108[8][4][3]}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_94[i] = (-1L);
/*bef_stmt:274814*/
/*bef_stmt:274814*/
/*bef_stmt:274814*/
/*bef_stmt:274814*/
/*bef_stmt:274814*/
/*bef_stmt:274814*/
/*bef_stmt:274814*/
/*bef_stmt:274814*/
/*bef_stmt:274814*/
/*bef_stmt:274814*/
lbl_113:
    (*l_110) = (((Tag643(/*const uint64_t:286085:286085:274814:e*/l_88[0]) | Tag644(/*uint16_t:0:0:274814:e*/g_32)) == (l_108[3][3][3] |= (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((Tag645(/*int64_t:286085:286085:274814:e*/l_94[0]) , ((safe_sub_func_int8_t_s_s(Tag646(/*int64_t:286085:286085:274814:e*/l_94[0]), Tag647(/*const uint64_t:286085:286085:274814:e*/l_88[0]))) , 0x340CFCE3L)))), 0)), (safe_mul_func_int16_t_s_s(0x417FL, ((safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(((l_107 != (void*)0) , Tag648(/*const uint64_t:286085:286085:274814:e*/l_88[2])), (-7L))) & Tag649(/*int32_t:286085:286085:274814:e*/p_61)), Tag650(/*int64_t:0:0:274814:e*/g_51))), Tag651(/*int64_t:0:0:274814:e*/g_51))), 65535UL)) , Tag652(/*uint32_t:0:0:274814:e*/g_77)))))))) , l_109);
/*aft_stmt:274814*/
/*aft_stmt:274814*/
/*aft_stmt:274814*/
/*aft_stmt:274814*/
/*aft_stmt:274814*/
/*aft_stmt:274814*/
/*aft_stmt:274814*/
/*aft_stmt:274814*/
/*aft_stmt:274814*/
/*aft_stmt:274814*/
    for (g_80 = 0; (g_80 >= 6); ++g_80)
    { /* block id: 20 */
        int64_t *l_141 = (void*)0;
        int32_t l_190 = 0x04E8CAA0L;
        int32_t l_195 = (-1L);
        uint8_t l_203 = 254UL;
        uint32_t l_208 = 0xB47AC941L;
        int32_t *l_211 = &l_190;
        for (p_63 = 0; (p_63 <= 4); p_63 += 1)
        { /* block id: 23 */
            int8_t l_126 = 0xB6L;
            int32_t l_157 = 0L;
            uint32_t *l_200 = (void*)0;
            uint32_t **l_199 = &l_200;
            uint8_t *l_209[2];
            int i;
            for (i = 0; i < 2; i++)
                l_209[i] = (void*)0;
            for (g_77 = 0; (g_77 <= 4); g_77 += 1)
            { /* block id: 26 */
                int32_t l_134 = 6L;
                int32_t *l_136[10][8][2] = {{{(void*)0,&l_108[7][1][2]},{&l_108[7][4][0],&l_108[3][3][3]},{&l_108[1][3][2],(void*)0},{(void*)0,&l_108[3][3][3]},{&g_53,&g_53},{&l_108[3][4][4],&g_53},{&l_108[3][3][3],&g_53},{(void*)0,&l_108[4][0][2]}},{{(void*)0,&l_108[3][3][3]},{(void*)0,(void*)0},{&g_53,&l_108[3][3][3]},{(void*)0,&l_108[9][4][2]},{(void*)0,&l_108[3][3][3]},{&l_108[3][3][3],&l_108[3][3][3]},{&l_108[3][3][3],&l_108[3][3][3]},{&g_53,(void*)0}},{{&l_108[3][3][3],(void*)0},{&g_53,(void*)0},{&l_108[3][3][3],&l_108[3][4][4]},{&l_108[3][0][3],(void*)0},{&g_53,&l_108[4][0][0]},{&g_53,&l_108[3][3][3]},{&l_108[3][3][3],&g_53},{(void*)0,&l_108[6][4][4]}},{{&l_108[3][3][3],&l_108[3][3][3]},{&l_108[3][4][4],&g_53},{&g_53,(void*)0},{&l_108[3][3][3],(void*)0},{&l_108[1][4][0],&l_108[3][3][3]},{&g_53,(void*)0},{&g_53,&l_108[3][3][3]},{&l_108[1][4][0],(void*)0}},{{&l_108[3][3][3],(void*)0},{&g_53,&g_53},{&l_108[3][4][4],&l_108[3][3][3]},{&l_108[3][3][3],&l_108[6][4][4]},{(void*)0,&g_53},{&l_108[3][3][3],&l_108[3][3][3]},{&g_53,&l_108[0][0][0]},{&g_53,&l_108[3][3][3]}},{{&l_108[2][3][2],&g_53},{(void*)0,&g_53},{(void*)0,(void*)0},{&l_108[3][3][3],(void*)0},{(void*)0,&g_53},{&g_53,&l_108[3][3][3]},{&g_53,&l_108[3][3][3]},{&l_108[3][3][3],&l_108[6][2][4]}},{{&l_108[3][3][3],&g_53},{(void*)0,&g_53},{&g_53,&l_108[3][3][3]},{&l_108[4][0][2],&l_108[7][1][3]},{&g_53,&l_108[3][3][3]},{(void*)0,&l_108[3][3][3]},{&g_53,(void*)0},{&l_108[1][3][2],&l_108[6][2][1]}},{{&g_53,&l_108[3][3][3]},{&l_108[3][3][3],(void*)0},{&l_108[3][3][3],&l_108[3][3][3]},{&g_53,&g_53},{&l_108[1][2][3],&l_108[1][3][2]},{&l_108[3][3][3],&l_108[1][4][0]},{&l_108[7][1][2],&l_108[4][0][2]},{(void*)0,&l_108[3][3][3]}},{{(void*)0,&l_108[3][3][3]},{(void*)0,&g_53},{(void*)0,&l_108[2][3][2]},{&g_53,&l_108[1][1][1]},{&l_108[3][3][3],&g_53},{&l_108[4][0][0],&g_53},{&l_108[3][3][3],&l_108[1][1][1]},{&g_53,&l_108[2][3][2]}},{{(void*)0,&g_53},{(void*)0,&l_108[3][3][3]},{(void*)0,&l_108[3][3][3]},{(void*)0,&l_108[4][0][2]},{&l_108[7][1][2],&l_108[1][4][0]},{&l_108[3][3][3],&l_108[1][3][2]},{&l_108[1][2][3],&g_53},{&g_53,&l_108[3][3][3]}}};
                int32_t l_191 = 0L;
                int i, j, k;
                for (g_51 = 4; (g_51 >= 1); g_51 -= 1)
                { /* block id: 29 */
                    for (p_64 = 4; (p_64 >= 1); p_64 -= 1)
                    { /* block id: 32 */
                        int i;
                        /*bef_stmt:282298*/
if (Tag653(/*int32_t:286085:286085:282298:e*/p_61))
                            goto lbl_113;
/*aft_stmt:282298*/
                        return l_94[g_51];
                    }
                }
                for (p_62 = 4; (p_62 >= 1); p_62 -= 1)
                { /* block id: 39 */
                    const uint8_t l_125 = 0x0FL;
                    uint32_t *l_135 = &g_72[2][4][5];
                    int16_t l_154 = 1L;
                    int32_t l_156[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_156[i] = (-2L);
                    for (p_64 = 3; (p_64 >= 0); p_64 -= 1)
                    { /* block id: 42 */
                        uint64_t *l_118 = &g_86[6][7][0];
                        uint8_t *l_127 = &g_128;
                        int i, j, k;
                        l_108[g_77][g_77][p_63] = l_94[p_64];
                        /*bef_stmt:283478*/
/*bef_stmt:283478*/
/*bef_stmt:283478*/
/*bef_stmt:283478*/
/*bef_stmt:283478*/
/*bef_stmt:283478*/
g_129 = ((safe_add_func_int16_t_s_s(((((*l_127) = (safe_rshift_func_uint8_t_u_s(((((((l_94[p_62] , l_108[(p_63 + 3)][p_63][p_62]) == (--(*l_118))) == ((((l_108[(p_63 + 3)][p_63][p_62] , 0UL) | ((g_121 != (void*)0) >= (((safe_lshift_func_uint8_t_u_u(g_77, Tag654(/*const uint8_t:283609:285276:283478:e*/l_125))) || ((*g_31) = 65531UL)) != p_62))) ^ Tag655(/*int8_t:285833:285879:283478:e*/l_126)) || Tag656(/*uint16_t:0:0:283478:e*/g_32))) & g_77) & 0x4D5CL) == 0x5BB3L), Tag657(/*int32_t:286085:286085:283478:e*/p_61)))) & Tag658(/*const uint8_t:283609:285276:283478:e*/l_125)) && (Tag659(/*uint16_t:0:0:283478:e*/*g_31))), (-10L))) != 0x37EAFC3DE15252ECLL);
/*aft_stmt:283478*/
/*aft_stmt:283478*/
/*aft_stmt:283478*/
/*aft_stmt:283478*/
/*aft_stmt:283478*/
/*aft_stmt:283478*/
                    }
                    /*bef_stmt:283605*/
p_64 = (((Tag660(/*int32_t:286085:286085:283605:e*/**l_110)) , &g_86[1][3][0]) != (void*)0);
/*aft_stmt:283605*/
                }
                for (l_134 = 4; (l_134 >= 0); l_134 -= 1)
                { /* block id: 65 */
                    int8_t l_181[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_181[i] = 0x41L;
                    for (g_128 = 0; (g_128 <= 4); g_128 += 1)
                    { /* block id: 68 */
                        uint32_t *l_174 = &g_175;
                        uint8_t *l_180 = &g_129;
                        uint8_t *l_192 = &g_193;
                        int64_t *l_194[5][2] = {{&l_94[l_134],&g_51},{&g_51,&l_94[l_134]},{&g_51,&g_51},{&l_94[l_134],&g_51},{&g_51,&l_94[l_134]}};
                        int i, j, k;
                        /*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
/*bef_stmt:285242*/
l_195 |= ((safe_sub_func_uint64_t_u_u(l_94[p_63], (g_51 = (safe_add_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(g_72[(g_77 + 1)][(l_134 + 2)][(l_134 + 1)], 3)), (!(((*l_174) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_72[g_128][(l_134 + 2)][(g_77 + 1)], (safe_lshift_func_uint16_t_u_u(Tag661(/*int8_t:285833:285879:285242:e*/l_126), 14)))), 1))) >= Tag662(/*int32_t:286085:286085:285242:e*/p_62))))) && (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((*l_180) |= 1UL) & ((*l_192) = (Tag663(/*int8_t:285263:285276:285242:e*/l_181[0]) , (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((l_190 |= ((1L ^ ((safe_lshift_func_int8_t_s_u((Tag664(/*uint32_t:0:0:285242:e*/g_175) <= Tag665(/*int32_t:286085:286085:285242:e*/p_64)), (Tag666(/*int32_t:286085:286085:285242:e*/**l_110)))) != 0x7B94L)) >= (Tag667(/*int32_t:0:0:285242:e*/*g_122)))), Tag668(/*int16_t:0:0:285242:e*/g_158))) & Tag669(/*int32_t:285833:285879:285242:e*/l_157)), Tag670(/*uint64_t:0:0:285242:e*/g_86[6][7][0]))), Tag671(/*int32_t:285276:285833:285242:e*/l_191)))))) == Tag672(/*int32_t:286085:286085:285242:e*/p_64)), Tag673(/*int32_t:0:0:285242:e*/g_53))), Tag674(/*int8_t:285833:285879:285242:e*/l_126)))), 0xC90CL))))) > (Tag675(/*int32_t:0:0:285242:e*/**g_121)));
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
/*aft_stmt:285242*/
                    }
                }
            }
            /*bef_stmt:285829*/
/*bef_stmt:285829*/
/*bef_stmt:285829*/
/*bef_stmt:285829*/
/*bef_stmt:285829*/
/*bef_stmt:285829*/
/*bef_stmt:285829*/
l_108[6][0][2] = ((((l_94[p_63] , &l_109) != &g_122) <= (~Tag676(/*uint32_t:0:0:285829:e*/g_72[2][5][5]))) == (((((((safe_div_func_int64_t_s_s((((*l_199) = &g_72[2][4][5]) != (Tag677(/*int32_t:285879:286085:285829:e*/l_195) , (((**g_206) &= (safe_mul_func_uint8_t_u_u(Tag678(/*uint8_t:285879:286085:285829:e*/l_203), (l_195 = (l_210 = (safe_div_func_int64_t_s_s(((void*)0 == g_206), Tag679(/*uint32_t:285879:286085:285829:e*/l_208)))))))) , (*g_206)))), 0x639E2500355CF6CDLL)) | Tag680(/*int32_t:286085:286085:285829:e*/p_61)) & Tag681(/*uint8_t:0:0:285829:e*/g_129)) | Tag682(/*int32_t:286085:286085:285829:e*/p_62)) || 0xEC6DD82FEA0A8481LL) == 18446744073709551610UL) , 0UL));
/*aft_stmt:285829*/
/*aft_stmt:285829*/
/*aft_stmt:285829*/
/*aft_stmt:285829*/
/*aft_stmt:285829*/
/*aft_stmt:285829*/
/*aft_stmt:285829*/
        }
        /*bef_stmt:285875*/
(*l_211) = Tag683(/*uint32_t:285879:286085:285875:e*/l_208);
/*aft_stmt:285875*/
    }
    g_216[6]++;
    /*bef_stmt:286036*/
(*l_212) = ((((void*)0 != l_213[3][4][0]) != 0xAB9C88E3L) >= Tag684(/*uint32_t:286085:286085:286036:e*/p_63));
/*aft_stmt:286036*/
    /*bef_stmt:286083*/
return Tag685(/*uint32_t:0:0:286083:e*/g_72[5][3][2]);
/*aft_stmt:286083*/
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
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_72[i][j][k], "g_72[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_86[i][j][k], "g_86[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_214[i][j][k], "g_214[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_215, "g_215", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_216[i], "g_216[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_512[i][j][k], "g_512[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_893, "g_893", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_979, "g_979", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1048, "g_1048", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1083[i], "g_1083[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1084, "g_1084", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1089, "g_1089", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1106[i][j], "g_1106[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1108, "g_1108", print_hash_value);
    transparent_crc(g_1142, "g_1142", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1345[i], "g_1345[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1349, "g_1349", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1355[i][j][k], "g_1355[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1356[i][j], "g_1356[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1483, "g_1483", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1528[i], "g_1528[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1529, "g_1529", print_hash_value);
    transparent_crc(g_1530, "g_1530", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1591[i], "g_1591[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1621, "g_1621", print_hash_value);
    transparent_crc(g_1652, "g_1652", print_hash_value);
    transparent_crc(g_1653, "g_1653", print_hash_value);
    transparent_crc(g_1716, "g_1716", print_hash_value);
    transparent_crc(g_1738, "g_1738", print_hash_value);
    transparent_crc(g_1767, "g_1767", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1824[i][j], "g_1824[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1971, "g_1971", print_hash_value);
    transparent_crc(g_1973, "g_1973", print_hash_value);
    transparent_crc(g_1983, "g_1983", print_hash_value);
    transparent_crc(g_2016, "g_2016", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_2111[i][j][k], "g_2111[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2112, "g_2112", print_hash_value);
    transparent_crc(g_2115, "g_2115", print_hash_value);
    transparent_crc(g_2116, "g_2116", print_hash_value);
    transparent_crc(g_2133, "g_2133", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2197[i], "g_2197[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2247, "g_2247", print_hash_value);
    transparent_crc(g_2248, "g_2248", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2256[i][j], "g_2256[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2296[i], "g_2296[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2297, "g_2297", print_hash_value);
    transparent_crc(g_2345, "g_2345", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2409[i], "g_2409[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2455, "g_2455", print_hash_value);
    transparent_crc(g_2463, "g_2463", print_hash_value);
    transparent_crc(g_2470, "g_2470", print_hash_value);
    transparent_crc(g_2523, "g_2523", print_hash_value);
    transparent_crc(g_2532, "g_2532", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2566[i][j][k], "g_2566[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2647[i], "g_2647[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2659[i][j][k], "g_2659[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2660, "g_2660", print_hash_value);
    transparent_crc(g_2987, "g_2987", print_hash_value);
    transparent_crc(g_3027, "g_3027", print_hash_value);
    transparent_crc(g_3356, "g_3356", print_hash_value);
    transparent_crc(g_3364, "g_3364", print_hash_value);
    transparent_crc(g_3381, "g_3381", print_hash_value);
    transparent_crc(g_3465, "g_3465", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3524[i], "g_3524[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3596, "g_3596", print_hash_value);
    transparent_crc(g_3639, "g_3639", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_3870[i][j], "g_3870[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3970, "g_3970", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_4015[i], "g_4015[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4017, "g_4017", print_hash_value);
    transparent_crc(g_4032, "g_4032", print_hash_value);
    transparent_crc(g_4033, "g_4033", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4075[i][j], "g_4075[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4076, "g_4076", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_4203[i][j], "g_4203[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4333, "g_4333", print_hash_value);
    transparent_crc(g_4347, "g_4347", print_hash_value);
    transparent_crc(g_4440, "g_4440", print_hash_value);
    transparent_crc(g_4636, "g_4636", print_hash_value);
    transparent_crc(g_4671, "g_4671", print_hash_value);
    transparent_crc(g_4707, "g_4707", print_hash_value);
    transparent_crc(g_4746, "g_4746", print_hash_value);
    transparent_crc(g_4783, "g_4783", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_4918[i][j], "g_4918[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4954, "g_4954", print_hash_value);
    transparent_crc(g_5147, "g_5147", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1176
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
   depth: 1, occurrence: 202
   depth: 2, occurrence: 67
   depth: 3, occurrence: 4
   depth: 4, occurrence: 3
   depth: 5, occurrence: 1
   depth: 6, occurrence: 1
   depth: 12, occurrence: 2
   depth: 14, occurrence: 1
   depth: 15, occurrence: 1
   depth: 16, occurrence: 2
   depth: 19, occurrence: 4
   depth: 20, occurrence: 4
   depth: 21, occurrence: 4
   depth: 22, occurrence: 2
   depth: 23, occurrence: 1
   depth: 24, occurrence: 3
   depth: 25, occurrence: 2
   depth: 26, occurrence: 2
   depth: 27, occurrence: 4
   depth: 28, occurrence: 3
   depth: 29, occurrence: 2
   depth: 30, occurrence: 2
   depth: 31, occurrence: 2
   depth: 33, occurrence: 1
   depth: 34, occurrence: 1
   depth: 36, occurrence: 1
   depth: 37, occurrence: 2
   depth: 38, occurrence: 3
   depth: 41, occurrence: 2
   depth: 43, occurrence: 1

XXX total number of pointers: 964

XXX times a variable address is taken: 2440
XXX times a pointer is dereferenced on RHS: 1208
breakdown:
   depth: 1, occurrence: 809
   depth: 2, occurrence: 251
   depth: 3, occurrence: 98
   depth: 4, occurrence: 23
   depth: 5, occurrence: 27
XXX times a pointer is dereferenced on LHS: 794
breakdown:
   depth: 1, occurrence: 591
   depth: 2, occurrence: 112
   depth: 3, occurrence: 58
   depth: 4, occurrence: 28
   depth: 5, occurrence: 5
XXX times a pointer is compared with null: 111
XXX times a pointer is compared with address of another variable: 22
XXX times a pointer is compared with another pointer: 36
XXX times a pointer is qualified to be dereferenced: 12202

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3878
   level: 2, occurrence: 1162
   level: 3, occurrence: 595
   level: 4, occurrence: 277
   level: 5, occurrence: 210
XXX number of pointers point to pointers: 497
XXX number of pointers point to scalars: 467
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 31.2
XXX average alias set size: 1.45

XXX times a non-volatile is read: 5616
XXX times a non-volatile is write: 2564
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 5
XXX backward jumps: 23

XXX stmts: 228
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 29
   depth: 1, occurrence: 40
   depth: 2, occurrence: 44
   depth: 3, occurrence: 42
   depth: 4, occurrence: 41
   depth: 5, occurrence: 32

XXX percentage a fresh-made variable is used: 17.3
XXX percentage an existing variable is used: 82.7
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: 86C9BB03 */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: 86C9BB03 */
