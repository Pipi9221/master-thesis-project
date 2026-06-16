
__attribute__((used)) static inline unsigned short int realsmith_FyAuh(short int addr)
{
 addr &= 0x1f;
 if (addr > 0xf) addr += 0x3ff0;
 return addr + 0x4000;
}

__attribute__((used)) static unsigned long
realsmith_5SPQk(const unsigned long name_len) {
 return 96 +
  name_len + 2 +
  4;
}

__attribute__((used)) static int realsmith_BmD3g(long index)
{
 int val = 0;
 int i;
 for (i = 3; i >= 0; i--)
  val = (val << 8) + (1);
 return val;
}

int
realsmith_Lbf4J(char *a, int lena, char *b, int lenb, int prefix)
{
 int cmp;
 if (lena == 0)
 {
  if (prefix)
   cmp = 0;
  else
   cmp = (lenb > 0) ? -1 : 0;
 }
 else if (lenb == 0)
 {
  cmp = (lena > 0) ? 1 : 0;
 }
 else
 {
  cmp = (1);
  if (prefix)
  {
   if (cmp == 0 && lena > lenb)
    cmp = 1;
  }
  else if (cmp == 0 && lena != lenb)
  {
   cmp = (lena < lenb) ? -1 : 1;
  }
 }
 return cmp;
}
int realsmith_proxy_OJeUJ(char p_0_4NHF0, int p_1_rUbiL, char p_2_7S3OQ, int p_3_tTY2Q, int p_4_tX76s) {
int proxy_ret_PDtjM = realsmith_Lbf4J(&(p_0_4NHF0), p_1_rUbiL, &(p_2_7S3OQ), p_3_tTY2Q, p_4_tX76s);
return proxy_ret_PDtjM;
}


int CLOS_PQR_ASSOC_realsmith_B8Jln = 16;

int CONFIG_CLOS_realsmith_B8Jln = 11;

int MBOX_CMD_WRITE_BIT_realsmith_B8Jln = -8;

int realsmith_B8Jln(int cpu, int clos_id)
{
 unsigned int req, resp;
 unsigned int param;
 int core_id, ret;
 req = (clos_id & 0x03) << 16;
 core_id = (1);
 param = (1) | core_id;
 ret = (1);
 if (ret)
  return ret;
 (1);
 return 0;
}

int CP_DISPATCH_COMPUTE_1_X__MASK_realsmith_iPome = 4;

int CP_DISPATCH_COMPUTE_1_X__SHIFT_realsmith_iPome = 2;

__attribute__((used)) static inline int realsmith_iPome(int val)
{
 return ((val) << CP_DISPATCH_COMPUTE_1_X__SHIFT_realsmith_iPome) & CP_DISPATCH_COMPUTE_1_X__MASK_realsmith_iPome;
}

__attribute__((used)) static int realsmith_frL2S(const int *buf)
{
    return (buf[0] == 0x00) && (buf[1] == 0x00) &&
           (buf[2] == 0x01) && (buf[3] == 0xba);
}
int realsmith_proxy_mIMgU(int p_0_Ngjv5) {
int proxy_14YHt[11] = { 47, p_0_Ngjv5, p_0_Ngjv5, 69, 80, 44, 33, p_0_Ngjv5, p_0_Ngjv5, 22, 49 };
int proxy_ret_R2376 = realsmith_frL2S(proxy_14YHt);
return proxy_ret_R2376;
}


long MP_OK_realsmith_Om63u = -9;

int
realsmith_Om63u(int a, long v)
{
 long rem = 0;
 if ((1) != MP_OK_realsmith_Om63u)
 {
  return 0;
 }
 return rem == 0;
}

int realsmith_LZWL1( int c ) {
    return ( (1) &&
             !(1) &&
             !(1) );
}

int EINVAL_realsmith_VsgjL = 10;

int EOPNOTSUPP_realsmith_VsgjL = 13;

int F_OK_realsmith_VsgjL = 13;

int SYSTEMD_CGROUP_CONTROLLER_realsmith_VsgjL = -9;

int errno_realsmith_VsgjL = -7;

__attribute__((used)) static int realsmith_VsgjL(const char *controller) {
        int r;
        (1);
        if (!(1))
                return -EINVAL_realsmith_VsgjL;
        r = (1);
        if (r < 0)
                return r;
        if (r > 0) {
                if ((1))
                        return 0;
                if ((1))
                        return -EOPNOTSUPP_realsmith_VsgjL;
        } else {
                const char *cc, *dn;
                dn = ("0");
                cc = ("0");
                if ((1) < 0)
                        return -errno_realsmith_VsgjL;
        }
        return 0;
}
int realsmith_proxy_dn85H(char p_0_gNNGs) {
char proxy_TIT7b[11] = { 81, 60, 8, p_0_gNNGs, 17, p_0_gNNGs, 3, 37, p_0_gNNGs, 27, p_0_gNNGs };
int proxy_ret_6ikvi = realsmith_VsgjL(proxy_TIT7b);
return proxy_ret_6ikvi;
}


int MP_OK_realsmith_pqPXZ = 3;

int
realsmith_pqPXZ(int a, int value, int q, int *r)
{
 int vtmp;
 int vbuf[(1)];
 (1);
 (1);
 (1);
 if (r)
  (void) (1);
 (1);
 return MP_OK_realsmith_pqPXZ;
}
int realsmith_proxy_EmDKU(int p_0_lQYNi, int p_1_iHf30, int p_2_1SwHq, int p_3_6IPsP) {
int proxy_0W7c7[13] = { 22, 5, p_3_6IPsP, 47, p_3_6IPsP, 30, 41, p_3_6IPsP, 29, p_3_6IPsP, p_3_6IPsP, 36, p_3_6IPsP };
int proxy_ret_ESOtq = realsmith_pqPXZ(p_0_lQYNi, p_1_iHf30, p_2_1SwHq, proxy_0W7c7);
return proxy_ret_ESOtq;
}


__attribute__((used)) static inline int realsmith_j4G2y(int channel)
{
 return (1) <= channel && channel <= (1);
}

unsigned long PAGE_SIZE_realsmith_KxBe6 = 7;

int
realsmith_KxBe6(int *m, unsigned long pgoff, unsigned long len)
{
 long lastaddr, paddr;
 int i, nsegs;
 if (len == 0)
  return (0);
 len += pgoff;
 nsegs = 1;
 lastaddr = (1);
 for (i = 1; len > PAGE_SIZE_realsmith_KxBe6; len -= PAGE_SIZE_realsmith_KxBe6, i++) {
  paddr = (1);
  if (lastaddr + PAGE_SIZE_realsmith_KxBe6 != paddr)
   nsegs++;
  lastaddr = paddr;
 }
 return (nsegs);
}
int realsmith_proxy_QbYkH(int p_0_Y60na, unsigned long p_1_pkmhj, unsigned long p_2_Ldjde) {
int proxy_ret_W1Req = realsmith_KxBe6(&(p_0_Y60na), p_1_pkmhj, p_2_Ldjde);
return proxy_ret_W1Req;
}


int errno_realsmith_ffHjV = -9;

int realsmith_ffHjV(unsigned int initval, int flags)
{
 int fd = (1);
 if (fd < 0)
  return -errno_realsmith_ffHjV;
 return fd;
}

int kperf_lazy_wait_action_realsmith_nXXIa = -2;

int
realsmith_nXXIa(int action_id)
{
 if (action_id < 0 || (unsigned int)action_id > (1)) {
  return 1;
 }
 kperf_lazy_wait_action_realsmith_nXXIa = action_id;
 (1);
 return 0;
}

int ctx_realsmith_jXnvF = 20;

__attribute__((used)) static int realsmith_jXnvF(void)
{
    int *a = ((void*)0), *b = ((void*)0), *zero = ((void*)0);
    int *mont = ((void*)0);
    int st = 0;
    if (!(1)
            || !(1)
            || !(1)
            || !(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    if (!(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    (1);
    if (!(1))
        goto err;
    (1);
    st = 1;
 err:
    (1);
    (1);
    (1);
    (1);
    return st;
}

__attribute__((used)) static int realsmith_cHfQx(int ulBits, int ulPattern)
{
 int ulCount = 0;
 while (ulBits) {
  if (!(ulPattern & 1))
   ulCount++;
  ulBits--;
  ulPattern = ulPattern >> 1;
 }
 return ulCount;
}

__attribute__((used)) static int
realsmith_hRuh1 (int *valp)
{
  *valp = *valp << 4;
  return 0;
}
int realsmith_proxy_dwUr2(int p_0_rjOk6) {
int proxy_ret_rnwcP = realsmith_hRuh1(&(p_0_rjOk6));
return proxy_ret_rnwcP;
}


__attribute__((used)) static int realsmith_ZZ9zp(int zSign, long zExp, int zSig)
{
 int shiftCount;
 shiftCount = (1) - 1;
 return (1);
}

int EPERM_realsmith_hFso8 = -9;

int XLOG_INFO_realsmith_hFso8 = 16;

__attribute__((used)) static int
realsmith_hFso8(int *mf)
{
  int error = 0;
  (1);
  error = EPERM_realsmith_hFso8;
  return error;
}
int realsmith_proxy_zcjwh(int p_0_Gljnv) {
int proxy_ret_S8Eqx = realsmith_hFso8(&(p_0_Gljnv));
return proxy_ret_S8Eqx;
}


__attribute__((used)) static int realsmith_bFdI5(unsigned char *bmap,
          int ich, int och, int num_outs)
{
 int idx = ich * num_outs + och;
 return bmap[idx >> 3] & (0x80 >> (idx & 7));
}
int realsmith_proxy_xrI9J(unsigned char p_0_NJGbk, int p_1_psrAz, int p_2_YFRFo, int p_3_ManqS) {
unsigned char proxy_4Jyqm[10] = { 24, 44, 56, p_0_NJGbk, 47, p_0_NJGbk, p_0_NJGbk, p_0_NJGbk, p_0_NJGbk, p_0_NJGbk };
int proxy_ret_VhmRz = realsmith_bFdI5(proxy_4Jyqm, p_1_psrAz, p_2_YFRFo, p_3_ManqS);
return proxy_ret_VhmRz;
}


int EDGE_HASH_SIZE_realsmith_lGuvE = -10;

unsigned realsmith_lGuvE(int v1, int v2)
{
 int vnum1, vnum2;
 if (v1 < v2)
 {
  vnum1 = v1;
  vnum2 = v2;
 }
 else
 {
  vnum1 = v2;
  vnum2 = v1;
 }
 return (vnum1 + vnum2) & (EDGE_HASH_SIZE_realsmith_lGuvE-1);
}

int EINVAL_realsmith_s22r6 = 18;

int ENOBUFS_realsmith_s22r6 = 1;

int realsmith_s22r6(const char *n, char *buffer, unsigned long buffer_max) {
        unsigned long c = 0;
        int r;
        if (buffer_max < 2)
                return -ENOBUFS_realsmith_s22r6;
        for (;;) {
                r = (1);
                if (r < 0)
                        return r;
                if (r == 0)
                        break;
                if (buffer_max < (unsigned long) r + 2)
                        return -ENOBUFS_realsmith_s22r6;
                if ((1))
                        return -EINVAL_realsmith_s22r6;
                (1);
                buffer[r] = '.';
                buffer += r + 1;
                c += r + 1;
                buffer_max -= r + 1;
        }
        if (c <= 0) {
                (1);
                buffer[0] = '.';
                buffer[1] = 0;
                return 1;
        }
        return (int) c;
}
int realsmith_proxy_uzHJP(char p_0_lpjbJ, char p_1_eVDBM, unsigned long p_2_o3puZ) {
char proxy_6xZQN[19] = { 35, 46, p_0_lpjbJ, 45, p_0_lpjbJ, 50, 53, 75, 71, p_0_lpjbJ, p_0_lpjbJ, p_0_lpjbJ, p_0_lpjbJ, 89, p_0_lpjbJ, p_0_lpjbJ, p_0_lpjbJ, 19, p_0_lpjbJ };
char proxy_mtsfE[19] = { p_1_eVDBM, 84, 61, 46, p_1_eVDBM, p_1_eVDBM, 97, 70, 38, p_1_eVDBM, p_1_eVDBM, 10, 95, p_1_eVDBM, p_1_eVDBM, p_1_eVDBM, 15, 7, 16 };
int proxy_ret_YSb4p = realsmith_s22r6(proxy_6xZQN, proxy_mtsfE, p_2_o3puZ);
return proxy_ret_YSb4p;
}


int BUS_PROBE_DEFAULT_realsmith_fZj1Z = -3;

int ENXIO_realsmith_fZj1Z = 10;

__attribute__((used)) static int
realsmith_fZj1Z(int dev)
{
 if (!(1))
  return (ENXIO_realsmith_fZj1Z);
 if (!(1))
  return (ENXIO_realsmith_fZj1Z);
 (1);
 return (BUS_PROBE_DEFAULT_realsmith_fZj1Z);
}

unsigned int UINT_MAX_realsmith_2cDlx = 4;

__attribute__((used)) static inline unsigned int realsmith_2cDlx(unsigned int a, unsigned int b,
        unsigned int c, unsigned int *r)
{
 unsigned int n = (unsigned int) a * b;
 if (c == 0) {
  (1);
  *r = 0;
  return UINT_MAX_realsmith_2cDlx;
 }
 n = (1);
 if (n >= UINT_MAX_realsmith_2cDlx) {
  *r = 0;
  return UINT_MAX_realsmith_2cDlx;
 }
 return n;
}
unsigned int realsmith_proxy_nsLw0(unsigned int p_0_t4W33, unsigned int p_1_M3ya4, unsigned int p_2_hdoDs, unsigned int p_3_Ef67G) {
unsigned int proxy_ret_7zPQm = realsmith_2cDlx(p_0_t4W33, p_1_M3ya4, p_2_hdoDs, &(p_3_Ef67G));
return proxy_ret_7zPQm;
}


int LUA_MASKCALL_realsmith_B38jn = 8;

int LUA_MASKCOUNT_realsmith_B38jn = -4;

int LUA_MASKLINE_realsmith_B38jn = -3;

int LUA_MASKRET_realsmith_B38jn = 3;

__attribute__((used)) static int realsmith_B38jn (const char *smask, int count) {
  int mask = 0;
  if ((1)) mask |= LUA_MASKCALL_realsmith_B38jn;
  if ((1)) mask |= LUA_MASKRET_realsmith_B38jn;
  if ((1)) mask |= LUA_MASKLINE_realsmith_B38jn;
  if (count > 0) mask |= LUA_MASKCOUNT_realsmith_B38jn;
  return mask;
}
int realsmith_proxy_U8N1c(char p_0_mukZY, int p_1_MtZhb) {
char proxy_1L0s5[16] = { p_0_mukZY, 25, 99, p_0_mukZY, p_0_mukZY, p_0_mukZY, 10, 70, 35, p_0_mukZY, 37, p_0_mukZY, 27, p_0_mukZY, 16, p_0_mukZY };
int proxy_ret_D98KH = realsmith_B38jn(proxy_1L0s5, p_1_MtZhb);
return proxy_ret_D98KH;
}


int realsmith_QNgtI (const char c)
{
  if ((c >= '0') && (c <= '9')) return 1;
  if (c == '.') return 1;
  return 0;
}

long EAP_EKE_PRF_HMAC_SHA1_realsmith_XiUdN = 4;

long EAP_EKE_PRF_HMAC_SHA2_256_realsmith_XiUdN = -6;

__attribute__((used)) static int realsmith_XiUdN(long prf)
{
 if (prf == EAP_EKE_PRF_HMAC_SHA1_realsmith_XiUdN)
  return 20;
 if (prf == EAP_EKE_PRF_HMAC_SHA2_256_realsmith_XiUdN)
  return 32;
 return -1;
}

long TYPE_IPV4_realsmith_QF1gr = 7;

long TYPE_IPV6_realsmith_QF1gr = 10;

int geo_location_data_realsmith_QF1gr = 17;

__attribute__((used)) static int
realsmith_QF1gr (const char *addr, long type_ip)
{
  int geoid = 0;
  if (TYPE_IPV4_realsmith_QF1gr == type_ip)
    geoid = (1);
  else if (TYPE_IPV6_realsmith_QF1gr == type_ip)
    geoid = (1);
  return geoid;
}
int realsmith_proxy_wh50t(char p_0_XmOTf, long p_1_ZdT74) {
char proxy_kwStr[18] = { p_0_XmOTf, p_0_XmOTf, 45, 13, 21, 85, p_0_XmOTf, 92, p_0_XmOTf, p_0_XmOTf, 20, p_0_XmOTf, p_0_XmOTf, 95, 42, p_0_XmOTf, p_0_XmOTf, 65 };
int proxy_ret_6UMfI = realsmith_QF1gr(proxy_kwStr, p_1_ZdT74);
return proxy_ret_6UMfI;
}


__attribute__((used)) static inline int realsmith_gXHvS(const char *filename, const char *ext)
{
 unsigned long len = (1);
 unsigned long extlen = (1);
 return len > extlen && !(1);
}
int realsmith_proxy_lvpFz(char p_0_3kbE8, char p_1_xKuuw) {
int proxy_ret_hliqV = realsmith_gXHvS(&(p_0_3kbE8), &(p_1_xKuuw));
return proxy_ret_hliqV;
}


int SQLITE_BUSY_realsmith_p9ARG = 9;

int SQLITE_LOCKED_realsmith_p9ARG = -5;

int SQLITE_OK_realsmith_p9ARG = 9;

__attribute__((used)) static int realsmith_p9ARG(int rc){
  return (rc!=SQLITE_OK_realsmith_p9ARG && rc!=SQLITE_BUSY_realsmith_p9ARG && (1));
}

int ba_quiet_realsmith_JBOii = 16;

int ba_unique_realsmith_JBOii = 3;

long cur_block_realsmith_JBOii = -2;

long current_class_ref_realsmith_JBOii = 10;

long current_class_type_realsmith_JBOii = 14;

int this_identifier_realsmith_JBOii = 3;

long
realsmith_JBOii (long type, long* binfop)
{
  long decl, context;
  long binfo;
  if (current_class_type_realsmith_JBOii
      && (binfo = (1)))
    context = current_class_type_realsmith_JBOii;
  else
    {
      context = type;
      binfo = (1);
    }
  if (binfop)
    *binfop = binfo;
  if (current_class_ref_realsmith_JBOii && context == current_class_type_realsmith_JBOii
      && (1))
    decl = current_class_ref_realsmith_JBOii;
    else if (cur_block_realsmith_JBOii)
    {
      long this_copiedin_var = (1);
      (1);
      (1);
      decl = (1);
    }
  else
    decl = (1);
  return decl;
}
long realsmith_proxy_8rOBo(long p_0_w456n, long p_1_8oWP4) {
long proxy_ret_4ILW6 = realsmith_JBOii(p_0_w456n, &(p_1_8oWP4));
return proxy_ret_4ILW6;
}


__attribute__((used)) static unsigned realsmith_sq6WK(void)
{
    const union { int i; int c[4]; } one = { 1 };
    return one.c[0];
}

long IO_OBJECT_NULL_realsmith_MHZBS = 19;

long KERN_SUCCESS_realsmith_MHZBS = 19;

int MACH_PORT_NULL_realsmith_MHZBS = 11;

int conn_realsmith_MHZBS = 20;

int kIOMasterPortDefault_realsmith_MHZBS = 5;

int realsmith_MHZBS(char *IoServiceName)
{
    int type;
    long service;
    int matching;
    int iterator;
    (1);
    matching = (1);
    if( !matching)
    {
        (1);
        return -1;
    }
    if ((1) != KERN_SUCCESS_realsmith_MHZBS)
    {
        (1);
        return -1;
    }
    service = (1);
    if (service == IO_OBJECT_NULL_realsmith_MHZBS)
    {
        (1);
        return -1;
    }
    type = 0;
    conn_realsmith_MHZBS = MACH_PORT_NULL_realsmith_MHZBS;
    if ((1) != KERN_SUCCESS_realsmith_MHZBS)
    {
        (1);
        return -1;
    }
    (1);
    return 1;
}
int realsmith_proxy_mPMiq(char p_0_hGwtI) {
int proxy_ret_filvM = realsmith_MHZBS(&(p_0_hGwtI));
return proxy_ret_filvM;
}


int stderr_realsmith_xjQVI = 6;

int
realsmith_xjQVI(void)
{
    unsigned i;
    int is_success = 0;
    int m, a, c;
    m = 3015 * 3;
    for (i=0; i<5; i++) {
        a = 0;
        c = 0;
        m += 10 + i;
        (1);
        is_success = (1);
        if (!is_success) {
            (1);
            return 1;
        }
    }
    return 0;
}

__attribute__((used)) static int realsmith_6Op8r(const char *alpha2_x, const char *alpha2_y)
{
 if (!alpha2_x || !alpha2_y)
  return 0;
 return alpha2_x[0] == alpha2_y[0] && alpha2_x[1] == alpha2_y[1];
}
int realsmith_proxy_24Gqt(char p_0_yVhXG, char p_1_9oBl0) {
int proxy_ret_a9Rfc = realsmith_6Op8r(&(p_0_yVhXG), &(p_1_9oBl0));
return proxy_ret_a9Rfc;
}


int ENOMEM_realsmith_hPqXS = -5;

int NES_DBG_CM_realsmith_hPqXS = 18;

long g_cm_core_realsmith_hPqXS = 15;

int realsmith_hPqXS(void)
{
 (1);
 g_cm_core_realsmith_hPqXS = (1);
 if (g_cm_core_realsmith_hPqXS)
  return 0;
 else
  return -ENOMEM_realsmith_hPqXS;
}

int realsmith_mj5x5(char *str)
{
 int mask;
 if (str == ((void*)0))
 {
  return 0;
 }
 return (1);
}
int realsmith_proxy_SS7p9(char p_0_7P5wu) {
int proxy_ret_aoLYP = realsmith_mj5x5(&(p_0_7P5wu));
return proxy_ret_aoLYP;
}


int PenTypeHatchFill_realsmith_QARBI = -7;

int PenTypeLinearGradient_realsmith_QARBI = -3;

int PenTypePathGradient_realsmith_QARBI = 20;

int PenTypeSolidColor_realsmith_QARBI = 1;

int PenTypeTextureFill_realsmith_QARBI = 15;

int PenTypeUnknown_realsmith_QARBI = -4;

__attribute__((used)) static int realsmith_QARBI(int bt)
{
    switch(bt){
        case 129:
            return PenTypeSolidColor_realsmith_QARBI;
        case 132:
            return PenTypeHatchFill_realsmith_QARBI;
        case 128:
            return PenTypeTextureFill_realsmith_QARBI;
        case 130:
            return PenTypePathGradient_realsmith_QARBI;
        case 131:
            return PenTypeLinearGradient_realsmith_QARBI;
        default:
            return PenTypeUnknown_realsmith_QARBI;
    }
}

__attribute__((used)) static inline char *realsmith_X2emH(const char *str)
{
 if (!str)
  return ((void*)0);
 return ("0");
}
char realsmith_proxy_blIli(char p_0_809Wv) {
char proxy_uR400[13] = { 52, 100, 14, p_0_809Wv, p_0_809Wv, p_0_809Wv, p_0_809Wv, 23, 22, 2, 21, p_0_809Wv, p_0_809Wv };
char * proxy_ret_T44Oc = realsmith_X2emH(proxy_uR400);
return *proxy_ret_T44Oc;
}


int KU_KEY_ENCIPHERMENT_realsmith_ADyFm = 1;

__attribute__((used)) static int realsmith_ADyFm(const int *xp, const int *x,
                                       int ca)
{
    int ret;
    ret = (1);
    if (!ret || ca)
        return ret;
    if ((1))
        return 0;
    return ret;
}
int realsmith_proxy_qYDCL(int p_0_ibHAA, int p_1_hAwP9, int p_2_ofyj6) {
int proxy_ret_316wq = realsmith_ADyFm(&(p_0_ibHAA), &(p_1_hAwP9), p_2_ofyj6);
return proxy_ret_316wq;
}


__attribute__((used)) static int realsmith_QMdd3(int *s)
{
   int z = (1);
   return (z << 16) + (1);
}
int realsmith_proxy_WrwiQ(int p_0_Gsb5N) {
int proxy_ret_fNDWX = realsmith_QMdd3(&(p_0_Gsb5N));
return proxy_ret_fNDWX;
}


int MACHO_SYMBOL_FLAG_DEFINED_realsmith_XqxGA = 11;

int MACHO_SYMBOL_FLAG_VARIABLE_realsmith_XqxGA = 0;

__attribute__((used)) static int
realsmith_XqxGA (int sym_ref)
{
  if ((1) & MACHO_SYMBOL_FLAG_DEFINED_realsmith_XqxGA)
    return 1;
  if ((1) && ! (1))
    {
      if ((1) & MACHO_SYMBOL_FLAG_VARIABLE_realsmith_XqxGA)
 {
   int decl = (1);
   if (!decl)
     return 1;
   if ((1))
     return 0;
 }
      return 1;
    }
  return 0;
}

__attribute__((used)) static int realsmith_hH8Fe (int *L) {
  int i, n = (1);
  int r = 0;
  for (i = 1; i <= n; i++)
    r |= (1);
  (1);
  return 1;
}
int realsmith_proxy_IDsH8(int p_0_BaSLf) {
int proxy_JQRaW[19] = { p_0_BaSLf, 37, 25, p_0_BaSLf, 40, 43, 61, p_0_BaSLf, 75, p_0_BaSLf, p_0_BaSLf, p_0_BaSLf, 75, p_0_BaSLf, 35, 69, 95, p_0_BaSLf, p_0_BaSLf };
int proxy_ret_YEDse = realsmith_hH8Fe(proxy_JQRaW);
return proxy_ret_YEDse;
}


int ENODEV_realsmith_AQDDQ = 1;

long MACH_IS_BVME6000_realsmith_AQDDQ = 13;

long MACH_IS_MVME147_realsmith_AQDDQ = 17;

long MACH_IS_MVME16x_realsmith_AQDDQ = 6;

__attribute__((used)) static int realsmith_AQDDQ(void)
{
 int res = -ENODEV_realsmith_AQDDQ;
 return res;
}

__attribute__((used)) static int
realsmith_dvHZd(unsigned long long opslimit, const unsigned long memlimit,
           int *const N_log2, int *const p, int *const r)
{
    unsigned long long maxN;
    unsigned long long maxrp;
    if (opslimit < 32768) {
        opslimit = 32768;
    }
    *r = 8;
    if (opslimit < memlimit / 32) {
        *p = 1;
        maxN = opslimit / (*r * 4);
        for (*N_log2 = 1; *N_log2 < 63; *N_log2 += 1) {
            if ((int)(1) << *N_log2 > maxN / 2) {
                break;
            }
        }
    } else {
        maxN = memlimit / ((unsigned long) *r * 128);
        for (*N_log2 = 1; *N_log2 < 63; *N_log2 += 1) {
            if ((int)(1) << *N_log2 > maxN / 2) {
                break;
            }
        }
        maxrp = (opslimit / 4) / ((int)(1) << *N_log2);
        if (maxrp > 0x3fffffff) {
            maxrp = 0x3fffffff;
        }
        *p = (int)(maxrp) / *r;
    }
    return 0;
}
int realsmith_proxy_3wOrz(int p_0_OAwq8, unsigned long p_1_QPQir, int p_2_Hj34F, int p_3_op26L, int p_4_idk1N) {
int proxy_ret_XWooA = realsmith_dvHZd(p_0_OAwq8, p_1_QPQir, &(p_2_Hj34F), &(p_3_op26L), &(p_4_idk1N));
return proxy_ret_XWooA;
}


__attribute__((used)) static inline int realsmith_SePqT(char ch)
{
    if ((ch >= 'a') && (ch <= 'f'))
        return(ch - 'a' + 10);
    if ((ch >= '0') && (ch <= '9'))
        return(ch - '0');
    if ((ch >= 'A') && (ch <= 'F'))
        return(ch - 'A' + 10);
    return(-1);
}

__attribute__((used)) static inline unsigned long realsmith_2C2qV(const char *s) {
    unsigned long n = 0;
    char c;
    for(c = *s; c >= '0' && c <= '9' ; c = *(++s)) {
        n *= 10;
        n += c - '0';
    }
    return n;
}
unsigned long realsmith_proxy_4fxrV(char p_0_nfYHd) {
unsigned long proxy_ret_xo3An = realsmith_2C2qV(&(p_0_nfYHd));
return proxy_ret_xo3An;
}


int realsmith_025OB(int a, int b)
{
  if (b == 0) return (1);
  return a % b;
}

unsigned char realsmith_NwFBp(const unsigned char* chunk)
{
  return((chunk[7] & 32) != 0);
}
unsigned char realsmith_proxy_rdeZ7(unsigned char p_0_kw2Wm) {
unsigned char proxy_BKeEi[13] = { 100, p_0_kw2Wm, p_0_kw2Wm, 72, p_0_kw2Wm, 80, 4, p_0_kw2Wm, 19, p_0_kw2Wm, 39, p_0_kw2Wm, 95 };
unsigned char proxy_ret_SL8hX = realsmith_NwFBp(proxy_BKeEi);
return proxy_ret_SL8hX;
}


__attribute__((used)) static int realsmith_n6c9K(const char *str, unsigned long str_len, long *ret) {
 int ctx_value = 0;
 const char *end = str + str_len;
 int n;
 while (str < end) {
  if (*str >= '0' && *str <= '9') {
   n = ((*(str++)) - '0');
  } else if (*str >= 'a' && *str <= 'f') {
   n = ((*(str++)) - ('a' - 10));
  } else if (*str >= 'A' && *str <= 'F') {
   n = ((*(str++)) - ('A' - 10));
  } else {
   return -1;
  }
  if ((ctx_value > ((int)(~(long)0)) / 16) ||
   ((ctx_value = ctx_value * 16) > ((int)(~(long)0)) - n)) {
   return -1;
  }
  ctx_value += n;
 }
 *ret = (long)ctx_value;
 return 1;
}
int realsmith_proxy_47Exw(char p_0_pQDUL, unsigned long p_1_cnW5Q, long p_2_y202M) {
char proxy_5xaKU[17] = { 64, 15, 82, 87, 18, p_0_pQDUL, 48, 47, p_0_pQDUL, 23, 38, p_0_pQDUL, p_0_pQDUL, 83, p_0_pQDUL, p_0_pQDUL, 34 };
int proxy_ret_bZW8a = realsmith_n6c9K(proxy_5xaKU, p_1_cnW5Q, &(p_2_y202M));
return proxy_ret_bZW8a;
}


int ENXIO_realsmith_QAo7d = 8;

__attribute__((used)) static int
realsmith_QAo7d(int dev)
{
 const char *name;
 name = ("0");
 if ((1) == 0 || (1) == 0 ||
     (1) == 0) {
  (1);
  return (0);
 }
 return (ENXIO_realsmith_QAo7d);
}

long overlay_debugging_realsmith_qP1Ke = 17;

int
realsmith_qP1Ke (int address, int *section)
{
  if (overlay_debugging_realsmith_qP1Ke)
    {
      if (section == 0)
 return address;
      if (!(1))
 return address;
      if ((1))
 return address;
      return (1);
    }
  return address;
}
int realsmith_proxy_D2KaD(int p_0_dGmvf, int p_1_kzHMl) {
int proxy_ret_XiOln = realsmith_qP1Ke(p_0_dGmvf, &(p_1_kzHMl));
return proxy_ret_XiOln;
}


long MODIFY_EXPR_realsmith_hHJP4 = -1;

__attribute__((used)) static int
realsmith_hHJP4 (int var)
{
  int def = (1);
  if ((1) == MODIFY_EXPR_realsmith_hHJP4)
    {
      int rhs = (1);
      return (1);
    }
  return 0;
}

int PAGE_MASK_realsmith_L92eV = -1;

int PAGE_SHIFT_realsmith_L92eV = 5;

int kernel_pmap_realsmith_L92eV = -6;

int
realsmith_L92eV(
 int va)
{
 int pa;
 pa = (1);
 if (pa) return pa;
 pa = ((int)(1)) << PAGE_SHIFT_realsmith_L92eV;
 if (pa)
  pa |= (va & PAGE_MASK_realsmith_L92eV);
 return ((int)pa);
}

__attribute__((used)) static int realsmith_A4dzh(int near, int size, int maxlen)
{
 int bestlen = size;
 int besterr = (1);
 int len;
 for(len = size+1;len < maxlen;len++)
 {
  int err;
  if ( ((64*size) %len) != 0)
   continue;
  err = (1);
  if (err > besterr)
   break;
  besterr = err;
  bestlen = len;
 }
 return bestlen;
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
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output $EXPERIMENTAL_CREAL/batch_experiments/test_20251112_222033/test87/7EKEYX_seed.c
 * Seed:      1206667970
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[1][2][10] = {{{0x89B54615L,1L,1L,0x89B54615L,0x89B54615L,1L,1L,0x89B54615L,0x89B54615L,1L},{0x89B54615L,0x89B54615L,1L,1L,0x89B54615L,0x89B54615L,1L,1L,0x89B54615L,0x89B54615L}}};
static int32_t g_7 = 0xE0369BD6L;
static int64_t g_61[1] = {5L};
static uint8_t g_73 = 251UL;
static int32_t g_75[8][2][9] = {{{0x032B8146L,0L,0x456A9E5FL,0xA1BF3346L,1L,1L,9L,0xEE42AC96L,(-1L)},{(-1L),(-6L),0xEE42AC96L,0x2D95C788L,0xF0427242L,0x2D95C788L,0xEE42AC96L,(-6L),(-1L)}},{{1L,0L,0xF1BECDE8L,0xF0427242L,9L,0x2D95C788L,0xF1D97938L,0x2D95C788L,0xF0427242L},{0xA1BF3346L,(-6L),1L,8L,8L,1L,(-6L),0xA1BF3346L,0x032B8146L}},{{0xF1D97938L,(-1L),0xEE42AC96L,0xF1BECDE8L,8L,1L,0x456A9E5FL,9L,9L},{0L,(-1L),(-1L),0xA1BF3346L,(-1L),(-1L),0L,1L,0x032B8146L}},{{1L,0x2D95C788L,0L,0xA1BF3346L,9L,8L,0xF0427242L,(-1L),0xF0427242L},{0xF0427242L,0xF1D97938L,0xF1BECDE8L,0xF1BECDE8L,0xF1D97938L,0xF0427242L,0x032B8146L,1L,0L}},{{(-1L),0xEE42AC96L,0xF1BECDE8L,8L,1L,0x456A9E5FL,9L,9L,0x456A9E5FL},{0xF1BECDE8L,9L,0L,9L,0xF1BECDE8L,(-1L),0x032B8146L,0xA1BF3346L,(-6L)}},{{(-1L),9L,(-1L),(-6L),0xEE42AC96L,0x2D95C788L,0xF0427242L,0x2D95C788L,0xEE42AC96L},{0x032B8146L,0xEE42AC96L,0xEE42AC96L,0x032B8146L,0x456A9E5FL,(-1L),0L,0xF0427242L,0x198B9DB5L}},{{0x032B8146L,0xF1D97938L,1L,(-1L),0x198B9DB5L,0x456A9E5FL,0x456A9E5FL,0x198B9DB5L,(-1L)},{(-1L),0x2D95C788L,(-1L),1L,0x456A9E5FL,0xF0427242L,(-6L),8L,(-1L)}},{{0xF1BECDE8L,(-1L),0x198B9DB5L,0L,0xEE42AC96L,8L,0xEE42AC96L,0L,0x198B9DB5L},{(-1L),(-1L),0x2D95C788L,1L,0xF1BECDE8L,(-1L),0x198B9DB5L,0L,0xEE42AC96L}}};
static uint16_t g_85[6][7] = {{0UL,0x336FL,0UL,0UL,0x336FL,0UL,0UL},{0x336FL,0x336FL,65535UL,0x336FL,0x336FL,65535UL,0x336FL},{0x336FL,0UL,0UL,0x336FL,0UL,0UL,0x336FL},{0UL,0x336FL,0UL,0UL,0x336FL,0UL,0UL},{0x336FL,0x336FL,65535UL,0x336FL,0x336FL,65535UL,0x336FL},{0x336FL,0UL,0UL,0x336FL,0UL,0UL,0x336FL}};
static const int32_t g_95 = 0xDBC71B59L;
static uint16_t g_115 = 65535UL;
static int32_t *g_129 = (void*)0;
static int32_t **g_128 = &g_129;
static uint64_t g_153 = 0x809F826083B57DFALL;
static int32_t g_163 = (-2L);
static int32_t *g_162 = &g_163;
static uint32_t g_166[7] = {1UL,0xD5B94001L,1UL,1UL,0xD5B94001L,1UL,1UL};
static uint8_t g_168[5][7][3] = {{{254UL,254UL,0x2EL},{0xEEL,0x8AL,252UL},{0x16L,0x2EL,0x57L},{255UL,0x81L,1UL},{0x7FL,0x16L,0x57L},{1UL,247UL,252UL},{0x10L,0UL,0x2EL}},{{0xB9L,0x89L,0x5EL},{254UL,0x2EL,0x7FL},{249UL,0x74L,0xB9L},{0x10L,0xC4L,0UL},{0x84L,0x60L,1UL},{0x10L,254UL,0xC4L},{249UL,0x81L,1UL}},{{254UL,1UL,1UL},{0x5EL,0x89L,1UL},{0x7FL,0x57L,0xC4L},{0xB9L,0x8AL,1UL},{0UL,0xB8L,0UL},{1UL,0x8AL,0xB9L},{0xC4L,0x57L,0x7FL}},{{1UL,0x89L,0x5EL},{1UL,1UL,254UL},{1UL,0x81L,249UL},{0xC4L,254UL,0x10L},{1UL,0x60L,0x84L},{0UL,0xC4L,0x10L},{0xB9L,0x74L,249UL}},{{0x7FL,0x2EL,254UL},{0x5EL,246UL,0x5EL},{254UL,0x2EL,0x7FL},{249UL,0x74L,0xB9L},{0x10L,0xC4L,0UL},{0x84L,0x60L,1UL},{0x10L,254UL,0xC4L}}};
static int8_t g_170[1][1][1] = {{{0x06L}}};
static int32_t g_182[1] = {(-8L)};
static int32_t g_183 = 0x1D961218L;
static int64_t g_258 = 1L;
static int16_t g_283 = 0x56E4L;
static int16_t *g_282[5] = {&g_283,&g_283,&g_283,&g_283,&g_283};
static uint32_t g_299 = 0x397BF920L;
static uint16_t g_384[6] = {0xA006L,0xA006L,0xA006L,0xA006L,0xA006L,0xA006L};
static const int32_t *g_457 = (void*)0;
static const int32_t **g_456[2] = {&g_457,&g_457};
static const int32_t ***g_455 = &g_456[1];
static uint64_t *g_501 = &g_153;
static uint64_t ** const g_500[9] = {&g_501,&g_501,&g_501,&g_501,&g_501,&g_501,&g_501,&g_501,&g_501};
static uint16_t g_583 = 65535UL;
static uint32_t *g_595 = &g_299;
static int32_t ***g_665 = &g_128;
static int32_t ****g_664 = &g_665;
static const uint16_t g_684 = 4UL;
static uint16_t *g_733 = (void*)0;
static uint16_t **g_732 = &g_733;
static uint16_t ***g_731 = &g_732;
static uint32_t g_765[5][10] = {{0xC2DFBFC5L,0UL,0x9082C75AL,0UL,0xC2DFBFC5L,0UL,0xC74E5FCFL,0xBD7B895CL,0xBD7B895CL,0xC74E5FCFL},{2UL,0UL,0xE6D90466L,0xE6D90466L,0UL,2UL,0x6F74F492L,0xC74E5FCFL,0xC2DFBFC5L,0xC74E5FCFL},{0UL,0xE6D90466L,0xC2DFBFC5L,0xBD7B895CL,0xC2DFBFC5L,0xE6D90466L,0UL,0x6F74F492L,4294967295UL,4294967295UL},{0UL,4294967295UL,2UL,0x9082C75AL,0x9082C75AL,2UL,4294967295UL,0UL,0UL,0x6F74F492L},{2UL,4294967295UL,0UL,0UL,0x6F74F492L,0UL,0UL,4294967295UL,2UL,0x9082C75AL}};
static uint32_t g_804 = 18446744073709551615UL;
static uint32_t * const *g_814 = &g_595;
static uint16_t g_883[10][7][1] = {{{1UL},{0xA581L},{65535UL},{65535UL},{0xA581L},{1UL},{0x09E8L}},{{0xEE2EL},{0UL},{1UL},{1UL},{1UL},{65529UL},{1UL}},{{1UL},{1UL},{0UL},{0xEE2EL},{0x09E8L},{1UL},{0xA581L}},{{65535UL},{65535UL},{0xA581L},{1UL},{0x09E8L},{0xEE2EL},{0UL}},{{1UL},{1UL},{1UL},{65529UL},{1UL},{1UL},{65535UL}},{{65535UL},{65529UL},{1UL},{65535UL},{1UL},{0x8E4BL},{0x8E4BL}},{{1UL},{65535UL},{1UL},{65529UL},{65535UL},{65535UL},{0x09E8L}},{{65533UL},{0UL},{65533UL},{0x09E8L},{65535UL},{65535UL},{65529UL}},{{1UL},{65535UL},{1UL},{0x8E4BL},{0x8E4BL},{1UL},{65535UL}},{{1UL},{65529UL},{65535UL},{65535UL},{0x09E8L},{65533UL},{0UL}}};
static int64_t g_899 = 1L;
static uint8_t g_933 = 0x50L;
static int32_t g_1019 = (-1L);
static uint32_t g_1064 = 0xE79C32C5L;
static int16_t g_1141 = 2L;
static int32_t g_1274[9][10][2] = {{{0xB891D647L,1L},{0x5AB6B316L,0x940A77AFL},{1L,0xE6E0EC84L},{(-1L),0x30A11F86L},{0x2396DAC0L,0xD7A1E541L},{0xD7A1E541L,0xE6E0EC84L},{0x9811BCACL,0xB891D647L},{0x5AB6B316L,0x9811BCACL},{4L,0x844B3A4AL},{0x940A77AFL,0x6D1D9CA2L}},{{0x5AB6B316L,4L},{0x6D1D9CA2L,0xE6E0EC84L},{0x30A11F86L,(-1L)},{0x2396DAC0L,(-1L)},{0x30A11F86L,0xE6E0EC84L},{0x6D1D9CA2L,4L},{0x5AB6B316L,0x6D1D9CA2L},{0x940A77AFL,0x844B3A4AL},{4L,0x9811BCACL},{0x5AB6B316L,0xB891D647L}},{{0x9811BCACL,0xE6E0EC84L},{0xD7A1E541L,0xD7A1E541L},{0x2396DAC0L,0x30A11F86L},{(-1L),0xE6E0EC84L},{1L,0x940A77AFL},{0x5AB6B316L,1L},{0xB891D647L,0x844B3A4AL},{0xB891D647L,1L},{0x5AB6B316L,0x940A77AFL},{1L,0xE6E0EC84L}},{{(-1L),0x30A11F86L},{0x2396DAC0L,0xD7A1E541L},{0xD7A1E541L,0xE6E0EC84L},{0x9811BCACL,0xB891D647L},{0x5AB6B316L,0x9811BCACL},{4L,0x844B3A4AL},{0x940A77AFL,0x6D1D9CA2L},{0x5AB6B316L,4L},{0x6D1D9CA2L,0xE6E0EC84L},{0x30A11F86L,(-1L)}},{{0x2396DAC0L,(-1L)},{0x30A11F86L,0xE6E0EC84L},{0x6D1D9CA2L,4L},{0x5AB6B316L,0x6D1D9CA2L},{0x940A77AFL,0x844B3A4AL},{4L,0x9811BCACL},{0x5AB6B316L,0xB891D647L},{0x9811BCACL,0xE6E0EC84L},{0xD7A1E541L,0xD7A1E541L},{0x2396DAC0L,0x30A11F86L}},{{(-1L),0xE6E0EC84L},{1L,0x940A77AFL},{0x5AB6B316L,1L},{0xB891D647L,0x844B3A4AL},{0xB891D647L,1L},{0x5AB6B316L,0x940A77AFL},{1L,0xE6E0EC84L},{(-1L),0x30A11F86L},{0x2396DAC0L,0xD7A1E541L},{0xD7A1E541L,0xE6E0EC84L}},{{0x9811BCACL,0xB891D647L},{0x5AB6B316L,0x9811BCACL},{4L,0x844B3A4AL},{0x940A77AFL,0x6D1D9CA2L},{0x5AB6B316L,4L},{0x6D1D9CA2L,0xE6E0EC84L},{0x30A11F86L,(-1L)},{0x2396DAC0L,(-1L)},{0x30A11F86L,0xE6E0EC84L},{0x6D1D9CA2L,4L}},{{0x5AB6B316L,0x6D1D9CA2L},{0x940A77AFL,0x844B3A4AL},{4L,0x9811BCACL},{0x5AB6B316L,0xB891D647L},{0x9811BCACL,0xE6E0EC84L},{0xD7A1E541L,0xD7A1E541L},{0x2396DAC0L,0x30A11F86L},{(-1L),0x59DE1E65L},{0xE6E0EC84L,0xD9565975L},{(-1L),0xE6E0EC84L}},{{1L,1L},{1L,0xE6E0EC84L},{(-1L),0xD9565975L},{0xE6E0EC84L,0x59DE1E65L},{0x2396DAC0L,0x5AB6B316L},{0x11D4D8BFL,0xA9249808L},{0xA9249808L,0x59DE1E65L},{(-2L),1L},{(-1L),(-2L)},{0x1703C8B5L,1L}}};
static const uint16_t *g_1309 = &g_583;
static const uint16_t **g_1308 = &g_1309;
static const uint16_t ***g_1307 = &g_1308;
static const uint16_t ****g_1306 = &g_1307;
static uint32_t g_1420 = 0xF5881315L;
static uint32_t *g_1479 = &g_166[6];
static uint32_t **g_1478 = &g_1479;
static uint32_t g_1493[8] = {0x51B8CAF0L,0x51B8CAF0L,0x559212E0L,0x51B8CAF0L,0x51B8CAF0L,0x559212E0L,0x51B8CAF0L,0x51B8CAF0L};
static int32_t *****g_1545 = &g_664;
static uint8_t *g_1578 = &g_933;
static uint8_t **g_1577 = &g_1578;
static int8_t g_1680 = 0L;
static uint16_t g_1708 = 1UL;
static int8_t g_1745 = 0x54L;
static const uint32_t g_1749 = 0x0860D227L;
static uint8_t g_1752 = 5UL;
static int8_t *g_1839[4] = {&g_1680,&g_1680,&g_1680,&g_1680};
static int32_t g_1853 = 0x8D24B285L;


/* --- FORWARD DECLARATIONS --- */
static const uint32_t  func_1(void);
static int16_t  func_8(int32_t * p_9, int64_t  p_10, uint16_t  p_11, int32_t * const  p_12, int32_t  p_13);
static int32_t * func_14(int32_t * p_15, int32_t * p_16, int32_t * p_17, int16_t  p_18, uint8_t  p_19);
static int32_t * func_20(int32_t * p_21, int32_t * p_22, uint32_t  p_23, uint32_t  p_24, int32_t  p_25);
static int32_t * func_26(int8_t  p_27, int32_t  p_28, uint32_t  p_29, int32_t * p_30, int32_t * p_31);
static uint16_t  func_35(const int32_t  p_36, int32_t  p_37);
static int8_t  func_42(uint8_t * p_43);
static uint8_t * func_44(int32_t * p_45, int32_t  p_46, uint64_t  p_47, uint8_t * p_48, const int32_t  p_49);
static int32_t * func_50(const uint8_t  p_51, int32_t  p_52, uint8_t * p_53, int32_t  p_54, int32_t * p_55);
static uint8_t * func_56(uint8_t  p_57, uint32_t  p_58, uint64_t  p_59, const int64_t  p_60);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_61 g_75 g_95 g_73 g_128 g_85 g_115 g_129 g_153 g_166 g_162 g_163 g_182 g_168 g_299 g_283 g_170 g_258 g_384 g_455 g_456 g_500 g_183 g_883 g_665 g_501 g_899 g_664 g_933 g_765 g_583 g_1019 g_7 g_1306 g_1309 g_1308 g_1274 g_457 g_1478 g_1479 g_1307 g_1578 g_1545 g_814 g_595 g_1493 g_1708 g_1745 g_1752 g_1420 g_731 g_732 g_1141 g_1680
 * writes: g_2 g_7 g_61 g_73 g_75 g_85 g_115 g_166 g_163 g_129 g_182 g_282 g_299 g_168 g_170 g_384 g_153 g_183 g_283 g_258 g_457 g_804 g_933 g_1064 g_1019 g_1306 g_583 g_899 g_1141 g_1479 g_1545 g_1577 g_1708 g_765 g_732 g_1680 g_1839
 */
static const uint32_t  func_1(void)
{ /* block id: 0 */
    int64_t l_5 = 0x835A23E86F8C7B5CLL;
    int32_t l_387 = 0x476571A6L;
    const int32_t l_389 = 7L;
    int32_t *l_850 = &g_2[0][1][9];
    int32_t l_1864 = 1L;
    for (g_2[0][1][5] = 0; (g_2[0][1][5] >= (-26)); --g_2[0][1][5])
    { /* block id: 3 */
        int32_t *l_6 = &g_7;
        uint8_t l_33[5][7] = {{0xA3L,0x4CL,0x19L,0x19L,0x4CL,0xA3L,0x4CL},{0xF0L,0xA3L,0xA3L,0xF0L,0x4CL,0xF0L,0xA3L},{2UL,2UL,0xA3L,0x19L,0xA3L,2UL,2UL},{2UL,0xA3L,0x19L,0xA3L,2UL,2UL,0xA3L},{0xF0L,0x4CL,0xF0L,0xA3L,0xA3L,0xF0L,0x4CL}};
        uint8_t *l_34[3][2][6] = {{{(void*)0,(void*)0,&l_33[1][1],&l_33[1][1],(void*)0,(void*)0},{&l_33[4][0],(void*)0,&l_33[1][1],(void*)0,&l_33[4][0],&l_33[4][0]}},{{&l_33[2][4],(void*)0,(void*)0,&l_33[2][4],(void*)0,&l_33[2][4]},{&l_33[2][4],(void*)0,&l_33[2][4],(void*)0,(void*)0,&l_33[2][4]}},{{&l_33[4][0],&l_33[4][0],(void*)0,&l_33[1][1],(void*)0,&l_33[4][0]},{(void*)0,(void*)0,&l_33[1][1],&l_33[1][1],(void*)0,(void*)0}}};
        uint8_t *l_388 = (void*)0;
        int i, j, k;
        /*bef_stmt:97118*/
(*l_6) = /*TAG1:STA*/((int64_t)(realsmith_proxy_8rOBo(67, -43)-(10))+l_5)/*TAG1:END:l_5*/;
/*aft_stmt:97118*/
        /*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
/*bef_stmt:98584*/
(***g_664) = (((((*l_6) = (func_8(func_14(func_20(func_26((((+g_2[0][1][3]) ^ ((*l_6) = /*TAG2:STA*/((uint8_t)(realsmith_proxy_D2KaD((int)(l_33[4][0])+(-145), (int)(l_33[4][0])+(-327))+(int)(l_33[4][0])-(335))+l_33[4][0])/*TAG2:END:l_33[4][0]*/)) <= func_35(/*TAG3:STA*/((int64_t)(realsmith_hPqXS()+(int)(l_5)-(1871477596))+l_5)/*TAG3:END:l_5*/, (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_2[0][1][5], func_42(func_44((/*TAG4:STA*/((int64_t)(realsmith_ZZ9zp((int)(l_5)+(-1871477520), 99, (int)(l_5)+(-1871477560))+(int)(l_5)-(1871477597))+l_5)/*TAG4:END:l_5*/ , func_50(g_2[0][1][5], g_2[0][0][2], func_56((g_61[0] = g_2[0][1][7]), ((((0x6DE2L >= g_2[0][0][5]) || /*TAG5:STA*/((int64_t)(realsmith_ffHjV((unsigned int)(l_5)+(-1871477546), (int)(l_5)+(-1871477596))+(int)(l_5)-(1871477597))+l_5)/*TAG5:END:l_5*/) > 0UL) , g_2[0][1][5]), g_2[0][1][5], /*TAG6:STA*/((uint8_t)(realsmith_proxy_4fxrV((char)(l_33[4][0])+(7))+(unsigned long)(l_33[4][0])-(240))+l_33[4][0])/*TAG6:END:l_33[4][0]*/), g_2[0][1][5], &g_2[0][0][4])), /*TAG7:STA*/((int32_t)(realsmith_proxy_OJeUJ((char)(l_387)+(36), (int)(l_387)+(-1197830535), (char)(l_387)+(54), (int)(l_387)+(-1197830530), (int)(l_387)+(-1197830496))+(int)(l_387)-(1197830567))+l_387)/*TAG7:END:l_387*/, g_2[0][1][5], l_388, /*TAG8:STA*/((int32_t)(realsmith_A4dzh((int)(l_389)+(73), (int)(l_389)+(76), (int)(l_389)+(71))+(int)(l_389)-(90))+l_389)/*TAG8:END:l_389*/)))), /*TAG9:STA*/((int32_t)(realsmith_proxy_dn85H((char)(l_389)+(10))+(int)(l_389)-(7))+l_389)/*TAG9:END:l_389*/)))), /*TAG10:STA*/((int32_t)(realsmith_proxy_lvpFz((char)(l_389)+(73), (char)(l_389)+(40))+(int)(l_389)-(7))+l_389)/*TAG10:END:l_389*/, /*TAG11:STA*/((int64_t)(realsmith_proxy_rdeZ7((unsigned char)(l_5)+(-177))+(unsigned char)(l_5)-(93))+l_5)/*TAG11:END:l_5*/, l_850, l_850), l_6, g_2[0][1][5], Tag12(/*int64_t:0:0:98584:e*/g_899), Tag13(/*int64_t:0:0:98584:e*/g_899)), l_6, l_850, (/*TAG14:STA*/((int32_t)(realsmith_jXnvF()+(int)(*l_850)+(int)(l_5)+(int)(l_389)+(int)(l_387)-(1084699423))+*l_850)/*TAG14:END:*l_850*/), (/*TAG15:STA*/((int32_t)(realsmith_proxy_24Gqt((char)(l_387)+(114), (char)(l_387)+(15))+(int)(*l_850)+(int)(l_5)+(int)(l_389)+(int)(l_387)-(1084699422))+*l_850)/*TAG15:END:*l_850*/)), /*TAG16:STA*/((int32_t)(realsmith_proxy_U8N1c((char)(l_1864)+(-55), (int)(l_389)+(39))+(int)(l_1864)+(int)(l_5)+(int)(l_389)+((int)(l_387)-(1197830566))+(int)(*l_850)-(-113131144))+l_1864)/*TAG16:END:l_1864*/, /*TAG17:STA*/((uint8_t)(realsmith_SePqT((char)(l_33[4][0])+(109))+(int)(l_33[4][0])+(int)(l_387)+(int)(l_1864)+(int)(*l_850)+(int)(l_5)-(1084699655))+l_33[4][0])/*TAG17:END:l_33[4][0]*/, &g_2[0][1][2], (/*TAG18:STA*/((int32_t)(realsmith_5SPQk((unsigned long)(l_387)+(-1197830506))+(unsigned long)(l_1864)+(unsigned long)(l_387)+(unsigned long)(l_389)-(1197830736))+*l_850)/*TAG18:END:*l_850*/)) | 1L)) || (Tag19(/*int32_t:98599:98640:98584:e*/*l_6))) == /*TAG20:STA*/((int32_t)(realsmith_proxy_uzHJP((char)(g_1274[0][2][0])+(-77), (char)(g_1274[0][2][0])+(28), (unsigned long)(g_1274[0][2][0])+(55))+(int)(g_1274[0][2][0])-(-17))+g_1274[0][2][0])/*TAG20:END:g_1274[0][2][0]*/) , (void*)0);
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
/*aft_stmt:98584*/
    }
    /*bef_stmt:98638*/
return (/*TAG21:STA*/((uint32_t)(realsmith_nXXIa((int)(**g_814)+(-964425965))+(int)(**g_814)-(964426017))+**g_814)/*TAG21:END:**g_814*/);
/*aft_stmt:98638*/
}


/* ------------------------------------------ */
/* 
 * reads : g_162
 * writes: g_163
 */
static int16_t  func_8(int32_t * p_9, int64_t  p_10, uint16_t  p_11, int32_t * const  p_12, int32_t  p_13)
{ /* block id: 802 */
    (*g_162) = (-3L);
    /*bef_stmt:98812*/
return /*TAG22:STA*/((int32_t)(realsmith_L92eV((int)(p_13)+(1984608824))+(int)(p_13)-(-1984608746))+p_13)/*TAG22:END:p_13*/;
/*aft_stmt:98812*/
}


/* ------------------------------------------ */
/* 
 * reads : g_1019 g_258 g_883 g_1478 g_1479 g_583 g_183 g_299 g_1307 g_1308 g_1309 g_166 g_384 g_162 g_75 g_7 g_163 g_501 g_2 g_664 g_665 g_128 g_1578 g_933 g_283 g_1545 g_153 g_814 g_595 g_168 g_170 g_455 g_456 g_457 g_129 g_1493 g_1708 g_1274 g_1745 g_765 g_1752 g_1420 g_731 g_732 g_1141 g_1680 g_61 g_115
 * writes: g_1019 g_258 g_1479 g_163 g_7 g_153 g_1545 g_129 g_1577 g_1141 g_183 g_166 g_283 g_170 g_933 g_457 g_1708 g_168 g_765 g_732 g_1680 g_61 g_115 g_73 g_75 g_85 g_1839
 */
static int32_t * func_14(int32_t * p_15, int32_t * p_16, int32_t * p_17, int16_t  p_18, uint8_t  p_19)
{ /* block id: 643 */
    int32_t l_1488 = (-1L);
    uint8_t *l_1494[1];
    int32_t *l_1537 = &g_7;
    const int32_t ****l_1542 = &g_455;
    const int32_t *****l_1541 = &l_1542;
    int32_t *****l_1544 = &g_664;
    uint16_t *** const *l_1550 = &g_731;
    uint16_t *** const **l_1549[6] = {&l_1550,&l_1550,&l_1550,&l_1550,&l_1550,&l_1550};
    int32_t l_1684 = (-1L);
    int32_t l_1686 = 1L;
    int32_t l_1687 = 0xD502083FL;
    int32_t l_1688 = 0x919A5325L;
    int32_t l_1689 = 0x0474C9A8L;
    int32_t l_1690 = 0x4CCC3924L;
    int32_t l_1693 = 0x1FAFD37DL;
    int32_t l_1694 = 8L;
    int32_t l_1695 = (-1L);
    int16_t *l_1742[9][10][2] = {{{(void*)0,&g_283},{&g_283,&g_283},{&g_283,&g_283},{&g_1141,&g_283},{&g_283,&g_1141},{&g_283,&g_283},{&g_1141,(void*)0},{&g_283,&g_283},{&g_283,&g_283},{(void*)0,&g_283}},{{&g_283,&g_283},{&g_283,&g_283},{&g_1141,&g_283},{(void*)0,&g_1141},{(void*)0,&g_283},{&g_1141,&g_283},{&g_283,&g_283},{&g_283,&g_283},{(void*)0,&g_283},{&g_283,&g_283}},{{&g_283,(void*)0},{&g_1141,&g_283},{&g_283,&g_1141},{&g_283,&g_283},{&g_1141,&g_283},{&g_283,&g_283},{&g_283,&g_283},{(void*)0,&g_283},{&g_283,&g_283},{&g_283,&g_283}},{{&g_1141,&g_283},{&g_283,&g_1141},{&g_283,&g_283},{&g_1141,(void*)0},{&g_283,&g_283},{&g_283,&g_283},{(void*)0,&g_283},{&g_283,&g_283},{&g_283,&g_1141},{&g_283,&g_283}},{{&g_283,(void*)0},{&g_283,&g_283},{&g_283,&g_1141},{&g_283,&g_283},{(void*)0,&g_1141},{&g_1141,&g_283},{&g_283,&g_283},{&g_283,&g_283},{&g_283,&g_283},{(void*)0,(void*)0}},{{&g_1141,&g_1141},{&g_283,(void*)0},{&g_1141,&g_283},{&g_1141,(void*)0},{&g_1141,(void*)0},{&g_1141,&g_283},{&g_1141,(void*)0},{&g_283,&g_1141},{&g_1141,(void*)0},{(void*)0,&g_283}},{{&g_283,&g_283},{&g_283,&g_283},{&g_283,&g_283},{&g_1141,&g_1141},{(void*)0,&g_283},{&g_283,&g_1141},{&g_283,&g_283},{&g_283,(void*)0},{&g_283,&g_283},{&g_283,&g_1141}},{{&g_283,&g_283},{(void*)0,&g_1141},{&g_1141,&g_283},{&g_283,&g_283},{&g_283,&g_283},{&g_283,&g_283},{(void*)0,(void*)0},{&g_1141,&g_1141},{&g_283,(void*)0},{&g_1141,&g_283}},{{&g_1141,(void*)0},{&g_1141,(void*)0},{&g_1141,&g_283},{&g_1141,(void*)0},{&g_283,&g_1141},{&g_1141,(void*)0},{(void*)0,&g_283},{&g_283,&g_283},{&g_283,&g_283},{&g_283,&g_283}}};
    int32_t *****l_1792 = (void*)0;
    int64_t l_1823 = (-1L);
    int64_t l_1840 = 0xCAD0D9A7E101DB43LL;
    int64_t l_1857 = 0x5686BD6B5DDB0036LL;
    int32_t l_1859 = 1L;
    int32_t l_1860[4];
    uint16_t l_1861 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1494[i] = &g_933;
    for (i = 0; i < 4; i++)
        l_1860[i] = 0xAC158F20L;
    for (g_1019 = 0; (g_1019 == (-2)); g_1019 = safe_sub_func_uint32_t_u_u(g_1019, 8))
    { /* block id: 646 */
        int32_t *l_1473 = &g_7;
        uint32_t l_1482 = 1UL;
        int32_t l_1521 = (-5L);
        int32_t l_1523 = 1L;
        int32_t l_1528 = 0x37C1DADFL;
        uint8_t *l_1575 = &g_168[0][4][1];
        int64_t l_1608 = 0xBBD3FC738C685E36LL;
        int8_t l_1660 = (-2L);
        int8_t l_1672 = (-6L);
        int32_t l_1685 = (-1L);
        int32_t l_1692 = 0L;
        uint32_t l_1696 = 0xF8C48408L;
        uint16_t ****l_1735 = &g_731;
        uint16_t *****l_1734 = &l_1735;
        int16_t *l_1743 = &g_1141;
        int64_t l_1753 = 0xFF29810673BA1130LL;
        uint32_t **l_1758 = &g_595;
        uint32_t ***l_1757 = &l_1758;
        uint32_t ****l_1756[2][3][1];
        uint16_t **l_1767 = &g_733;
        int16_t l_1772[6][7] = {{(-2L),0x30AAL,0x30AAL,(-2L),0x7844L,(-2L),0x30AAL},{0x1B17L,0xB609L,(-5L),0x0A5FL,(-5L),0xB609L,0x1B17L},{1L,0x30AAL,(-8L),0x30AAL,1L,1L,0x30AAL},{(-5L),0x895FL,(-5L),0x59D0L,(-5L),(-4L),8L},{0x30AAL,0x7844L,(-8L),(-8L),0x7844L,0x30AAL,0x7844L},{(-5L),0x59D0L,(-5L),(-4L),8L,(-4L),(-5L)}};
        int32_t l_1852 = 0xB629F396L;
        int32_t l_1854 = 0xE0618730L;
        int32_t l_1855 = 1L;
        int32_t l_1856 = (-1L);
        int32_t l_1858 = 4L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1756[i][j][k] = &l_1757;
            }
        }
        for (g_258 = 0; (g_258 <= 0); g_258 += 1)
        { /* block id: 649 */
            int32_t * const l_1472 = &g_183;
            uint8_t l_1491 = 255UL;
            int32_t *l_1495 = (void*)0;
            int8_t l_1497 = 0L;
            int64_t l_1498 = 0x15EFBDF017940A78LL;
            const uint8_t *l_1530 = &l_1491;
            const uint8_t **l_1529[9] = {&l_1530,&l_1530,&l_1530,&l_1530,&l_1530,&l_1530,&l_1530,&l_1530,&l_1530};
            const uint16_t ***** const l_1548 = &g_1306;
            int32_t l_1553 = (-1L);
            uint32_t l_1573[7][7][2] = {{{0x46EC8DCCL,4294967295UL},{0xC85D3705L,4294967295UL},{0x46EC8DCCL,4294967291UL},{0x3284252FL,0xD02561BCL},{0UL,0xC85D3705L},{4294967291UL,1UL},{4294967291UL,0x458585BAL}},{{0x46EC8DCCL,0x4769176BL},{0x84DEB59CL,0UL},{0xD02561BCL,4294967291UL},{0x5723F03EL,1UL},{0x4769176BL,0x54452893L},{4294967291UL,1UL},{0x3284252FL,0x3284252FL}},{{0xD02561BCL,0x4769176BL},{0xBF8702BAL,4294967295UL},{1UL,0x458585BAL},{0x5723F03EL,1UL},{0UL,4294967295UL},{1UL,0xBF8702BAL},{0x6637FB1BL,0xABA06C67L}},{{0xBF8702BAL,0xD02561BCL},{2UL,0x46EC8DCCL},{0xC85D3705L,1UL},{1UL,0xBF8702BAL},{0xD3BF2318L,0UL},{0x46EC8DCCL,0x84DEB59CL},{0x6637FB1BL,0x5D6ACD7DL}},{{0xC85D3705L,1UL},{4294967295UL,0x46EC8DCCL},{0xCC3B1D86L,0xABA06C67L},{0x5D6ACD7DL,0x84DEB59CL},{0xD3BF2318L,1UL},{1UL,0xC85D3705L},{1UL,0x5D6ACD7DL}},{{0xCC3B1D86L,0xD02561BCL},{1UL,0xD02561BCL},{0xCC3B1D86L,0x5D6ACD7DL},{1UL,0xC85D3705L},{1UL,1UL},{0xD3BF2318L,0x84DEB59CL},{0x5D6ACD7DL,0xABA06C67L}},{{0xCC3B1D86L,0x46EC8DCCL},{4294967295UL,1UL},{0xC85D3705L,0x5D6ACD7DL},{0x6637FB1BL,0x84DEB59CL},{0x46EC8DCCL,0UL},{0xD3BF2318L,0xBF8702BAL},{1UL,1UL}}};
            int32_t *l_1576 = &g_163;
            int i, j, k;
            l_1473 = l_1472;
            for (p_19 = 0; (p_19 <= 0); p_19 += 1)
            { /* block id: 653 */
                uint32_t **l_1480 = &g_1479;
                uint32_t ***l_1481 = &l_1480;
                uint16_t *l_1485 = (void*)0;
                uint16_t *l_1486 = (void*)0;
                uint16_t *l_1487 = &g_384[3];
                int8_t l_1492 = (-8L);
                int32_t l_1496 = 0xCF7AF47CL;
                const int8_t l_1514 = 0x26L;
                int i, j, k;
                /*bef_stmt:111694*/
/*bef_stmt:111694*/
/*bef_stmt:111694*/
/*bef_stmt:111694*/
/*bef_stmt:111694*/
/*bef_stmt:111694*/
if (((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_883[g_258][(g_258 + 5)][p_19] , g_1478) != ((*l_1481) = l_1480)), (Tag23(/*uint32_t:126672:126721:111694:e*/l_1482) < ((((((((l_1496 = (((*g_1478) = (*g_1478)) != (void*)0)) < 0xB9L) || Tag24(/*int32_t:126721:126721:111694:e*/l_1488)) ^ Tag25(/*uint16_t:0:0:111694:e*/g_583)) || 5UL) , Tag26(/*int8_t:113308:126672:111694:e*/l_1497)) ^ p_19) && Tag27(/*int16_t:126721:126721:111694:e*/p_18))))), Tag28(/*int64_t:113308:126672:111694:e*/l_1498))) & 0xA2L))
                { /* block id: 658 */
                    int16_t *l_1508[8];
                    int32_t l_1509 = 1L;
                    uint8_t *l_1522 = &l_1491;
                    const uint8_t ***l_1531 = (void*)0;
                    const uint8_t ***l_1532 = &l_1529[1];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1508[i] = &g_1141;
                    /*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
/*bef_stmt:110949*/
(*p_16) |= (safe_mul_func_uint8_t_u_u(((+(safe_sub_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(Tag29(/*int32_t:126721:126721:110949:e*/l_1488), (l_1509 = 0xE6F7L))) == ((*g_162) = (((((l_1521 ^= ((Tag30(/*int32_t:126672:126721:110949:e*/*l_1473)) < ((safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((p_18 = 6L), (Tag31(/*const int8_t:113288:113308:110949:e*/l_1514) , (safe_mul_func_uint8_t_u_u(((p_19 , p_19) >= (Tag32(/*uint16_t:0:0:110949:e*/g_883[8][1][0]) , (safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((p_19 == p_19), p_19)), Tag33(/*int32_t:113288:113308:110949:e*/l_1496))))), Tag34(/*uint32_t:0:0:110949:e*/g_299)))))) || (Tag35(/*const uint16_t:0:0:110949:e*/***g_1307))), (Tag36(/*uint32_t:0:0:110949:e*/**g_1478)))) && 65535UL))) && Tag37(/*uint16_t:0:0:110949:e*/g_384[1])) , l_1522) != (void*)0) , 0L))), Tag38(/*int32_t:126721:126721:110949:e*/l_1488))) ^ Tag39(/*int32_t:126672:126721:110949:e*/l_1523)), Tag40(/*int32_t:0:0:110949:e*/g_75[0][0][5])))) > p_19), 0xE0L));
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
/*aft_stmt:110949*/
                    /*bef_stmt:111427*/
/*bef_stmt:111427*/
/*bef_stmt:111427*/
/*bef_stmt:111427*/
/*bef_stmt:111427*/
/*bef_stmt:111427*/
if (((safe_div_func_uint32_t_u_u(((Tag41(/*int32_t:126672:126721:111427:e*/*l_1473)) , ((&g_61[0] != &g_61[0]) && ((safe_lshift_func_int8_t_s_u(((0x08859C2EBE5C393ELL == Tag42(/*int32_t:126672:126721:111427:e*/l_1528)) | (((*l_1532) = l_1529[1]) != (void*)0)), 4)) | ((safe_sub_func_uint64_t_u_u(((*g_501) = ((safe_lshift_func_uint8_t_u_u(Tag43(/*int32_t:0:0:111427:e*/g_163), 1)) < (Tag44(/*int16_t:126721:126721:111427:e*/p_18) , 0UL))), (-7L))) & Tag45(/*int32_t:113288:113308:111427:e*/l_1496))))), (Tag46(/*int32_t:126721:126721:111427:e*/*p_16)))) || (-6L)))
                    { /* block id: 666 */
                        p_16 = l_1537;
                    }
                    else
                    { /* block id: 668 */
                        /*bef_stmt:111420*/
if ((Tag47(/*int32_t:126721:126721:111420:e*/*p_17)))
                            break;
/*aft_stmt:111420*/
                    }
/*aft_stmt:111427*/
/*aft_stmt:111427*/
/*aft_stmt:111427*/
/*aft_stmt:111427*/
/*aft_stmt:111427*/
/*aft_stmt:111427*/
                    return p_17;
                }
                else
                { /* block id: 672 */
                    uint16_t l_1538[6];
                    int32_t *****l_1543 = &g_664;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1538[i] = 0x1DB2L;
                    l_1538[2]++;
                    (*l_1537) = (l_1541 == (g_1545 = (l_1544 = l_1543)));
                }
/*aft_stmt:111694*/
/*aft_stmt:111694*/
/*aft_stmt:111694*/
/*aft_stmt:111694*/
/*aft_stmt:111694*/
/*aft_stmt:111694*/
                /*bef_stmt:113282*/
/*bef_stmt:113282*/
if ((safe_add_func_uint32_t_u_u(((l_1494[0] != (Tag48(/*int16_t:126721:126721:113282:e*/p_18) , (void*)0)) & Tag49(/*uint16_t:0:0:113282:e*/g_384[3])), (4294967295UL ^ ((l_1548 != l_1549[2]) < 1UL)))))
                { /* block id: 678 */
                    (****l_1544) = p_16;
                    return l_1495;
                }
                else
                { /* block id: 681 */
                    uint64_t l_1555 = 0x422CA7EDDD12C081LL;
                    for (l_1523 = 16; (l_1523 == (-26)); l_1523--)
                    { /* block id: 684 */
                        int32_t *l_1554[1];
                        int32_t *** const *l_1562 = &g_665;
                        int64_t *l_1574 = &g_61[0];
                        int16_t *l_1583 = (void*)0;
                        int16_t *l_1584 = (void*)0;
                        int16_t *l_1585 = &g_1141;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1554[i] = &g_182[0];
                        --l_1555;
                        /*bef_stmt:112729*/
/*bef_stmt:112729*/
/*bef_stmt:112729*/
/*bef_stmt:112729*/
/*bef_stmt:112729*/
/*bef_stmt:112729*/
(*p_15) = ((safe_mul_func_uint16_t_u_u((((void*)0 == l_1562) & (!((safe_mod_func_uint32_t_u_u(((((((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(Tag50(/*uint16_t:0:0:112729:e*/g_883[1][2][0]), 2)), Tag51(/*int16_t:126721:126721:112729:e*/p_18))) , p_16) != (void*)0) , p_16) == (void*)0) ^ (Tag52(/*uint32_t:0:0:112729:e*/*g_1479))), Tag53(/*int8_t:113288:113308:112729:e*/l_1492))) < 0xCAL))), Tag54(/*uint64_t:113278:113288:112729:e*/l_1555))) , (Tag55(/*int32_t:126721:126721:112729:e*/*p_15)));
/*aft_stmt:112729*/
/*aft_stmt:112729*/
/*aft_stmt:112729*/
/*aft_stmt:112729*/
/*aft_stmt:112729*/
/*aft_stmt:112729*/
                        /*bef_stmt:113243*/
/*bef_stmt:113243*/
/*bef_stmt:113243*/
/*bef_stmt:113243*/
/*bef_stmt:113243*/
/*bef_stmt:113243*/
/*bef_stmt:113243*/
/*bef_stmt:113243*/
(*l_1576) = ((g_1577 = (void*)0) == (((&g_1478 != (void*)0) < (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((Tag56(/*int16_t:126721:126721:113243:e*/p_18) , ((*l_1585) = p_19)), ((safe_mul_func_uint8_t_u_u(Tag57(/*const int8_t:113288:113308:113243:e*/l_1514), (((Tag58(/*uint32_t:0:0:113243:e*/*g_1479)) | (Tag59(/*int32_t:113308:126672:113243:e*/*l_1472))) | ((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((!Tag60(/*int16_t:126721:126721:113243:e*/p_18)), (Tag61(/*int32_t:126721:126721:113243:e*/*l_1537)))) && (Tag62(/*uint32_t:0:0:113243:e*/**g_1478))), g_883[g_258][(g_258 + 5)][p_19])) <= 0L)))) > Tag63(/*int16_t:126721:126721:113243:e*/p_18)))), p_19))) , (void*)0));
/*aft_stmt:113243*/
/*aft_stmt:113243*/
/*aft_stmt:113243*/
/*aft_stmt:113243*/
/*aft_stmt:113243*/
/*aft_stmt:113243*/
/*aft_stmt:113243*/
/*aft_stmt:113243*/
                    }
                }
/*aft_stmt:113282*/
/*aft_stmt:113282*/
            }
        }
        /*bef_stmt:126657*/
/*bef_stmt:126657*/
/*bef_stmt:126657*/
/*bef_stmt:126657*/
/*bef_stmt:126657*/
/*bef_stmt:126657*/
/*bef_stmt:126657*/
/*bef_stmt:126657*/
/*bef_stmt:126657*/
if (((((*l_1473) = ((void*)0 == &g_814)) > (~(((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(1L, (safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((0x2264L ^ (safe_add_func_uint8_t_u_u((((*g_1479) = (Tag64(/*uint32_t:0:0:126657:e*/*g_1479))) || (((safe_sub_func_int32_t_s_s((Tag65(/*int32_t:0:0:126657:e*/*g_162)), (-1L))) , 0xB6L) || (safe_add_func_int64_t_s_s(((Tag66(/*int64_t:126672:126721:126657:e*/l_1608) || Tag67(/*uint8_t:126721:126721:126657:e*/p_19)) & (Tag68(/*uint8_t:0:0:126657:e*/*g_1578))), 9UL)))), 254UL))), Tag69(/*int16_t:126721:126721:126657:e*/p_18))), 0)))), Tag70(/*int16_t:126721:126721:126657:e*/p_18))) >= Tag71(/*uint8_t:126721:126721:126657:e*/p_19)) | Tag72(/*uint8_t:126721:126721:126657:e*/p_19)))) || 0xA16BL))
        { /* block id: 699 */
            int32_t *l_1609 = &g_182[0];
            /*bef_stmt:113892*/
if ((Tag73(/*int32_t:126721:126721:113892:e*/*p_15)))
                break;
/*aft_stmt:113892*/
            return l_1609;
        }
        else
        { /* block id: 702 */
            uint8_t l_1612 = 0x38L;
            int32_t l_1616 = (-6L);
            uint16_t ***** const l_1632 = (void*)0;
            const int16_t l_1678 = (-1L);
            int32_t l_1681[6];
            uint32_t l_1701 = 0x1C42F0EBL;
            uint64_t **l_1704 = (void*)0;
            uint16_t *****l_1736 = &l_1735;
            uint16_t *****l_1737 = &l_1735;
            int32_t l_1744 = 0L;
            uint32_t ***l_1755 = (void*)0;
            uint32_t ****l_1754 = &l_1755;
            uint16_t l_1759 = 7UL;
            uint32_t l_1771 = 0x20DCF62DL;
            int i;
            for (i = 0; i < 6; i++)
                l_1681[i] = 0x75B4F788L;
            (***g_664) = &l_1521;
            for (l_1482 = (-16); (l_1482 != 60); l_1482 = safe_add_func_int8_t_s_s(l_1482, 1))
            { /* block id: 706 */
                int16_t l_1615 = 0x5909L;
                /*bef_stmt:114576*/
if (Tag74(/*uint8_t:126635:126672:114576:e*/l_1612))
                    break;
/*aft_stmt:114576*/
                for (g_7 = (-24); (g_7 > 9); g_7 = safe_add_func_int64_t_s_s(g_7, 6))
                { /* block id: 710 */
                    /*bef_stmt:114673*/
l_1616 = Tag75(/*int16_t:114710:126635:114673:e*/l_1615);
/*aft_stmt:114673*/
                }
                /*bef_stmt:114706*/
if ((Tag76(/*int32_t:126721:126721:114706:e*/*p_16)))
                    continue;
/*aft_stmt:114706*/
            }
            /*bef_stmt:114741*/
if ((Tag77(/*int32_t:126721:126721:114741:e*/*p_15)))
                continue;
/*aft_stmt:114741*/
            for (g_283 = (-3); (g_283 < (-2)); g_283 = safe_add_func_int32_t_s_s(g_283, 3))
            { /* block id: 718 */
                uint64_t l_1637 = 0x060DC2A9F82EEB4FLL;
                int32_t l_1644 = (-1L);
                int32_t l_1691[2][6][7] = {{{0x3D7C3338L,0x3A8A0B02L,4L,0x6B12050CL,0x1141B0BCL,0x7F7189EBL,0xAE360E40L},{0x46A8FAEFL,0x1FAE57BDL,0xA60A67CDL,0xAE360E40L,0x3D7C3338L,(-1L),(-1L)},{0xA60A67CDL,0xBD1E94FCL,4L,0xBD1E94FCL,0xA60A67CDL,0x21585E52L,(-8L)},{(-8L),0xBD1E94FCL,0x1DC76D47L,0x3A8A0B02L,0x6B12050CL,0L,0x3D7C3338L},{0xBD1E94FCL,0x1FAE57BDL,0x6B12050CL,(-1L),4L,4L,(-1L)},{(-8L),0x3A8A0B02L,(-8L),4L,0x7F7189EBL,0x1FAE57BDL,(-1L)}},{{0xA60A67CDL,0x456E0F9DL,0L,0x21585E52L,(-1L),(-8L),0x3D7C3338L},{0x46A8FAEFL,(-8L),0x1FAE57BDL,0x456E0F9DL,0x456E0F9DL,0x1FAE57BDL,(-8L)},{0x3D7C3338L,0x1141B0BCL,0xAE360E40L,0x46A8FAEFL,0x456E0F9DL,4L,(-1L)},{0x3A8A0B02L,0xA60A67CDL,0x1141B0BCL,0x1DC76D47L,(-1L),0L,0xAE360E40L},{0x21585E52L,0x7F7189EBL,0x46A8FAEFL,0x46A8FAEFL,0x7F7189EBL,0x21585E52L,0x3A8A0B02L},{0x1141B0BCL,0xAE360E40L,0x46A8FAEFL,0x456E0F9DL,4L,(-1L),0x7F7189EBL}}};
                int32_t *l_1707 = &l_1684;
                const uint32_t **l_1746 = (void*)0;
                const uint32_t *l_1748 = &g_1749;
                const uint32_t **l_1747 = &l_1748;
                uint32_t *l_1750 = (void*)0;
                uint32_t *l_1751 = &g_765[1][0];
                int16_t l_1808[3][8] = {{0x1DDDL,0xA97EL,(-1L),(-1L),0xA97EL,0x1DDDL,6L,0xE9FDL},{0x1DDDL,0x5BD6L,1L,0xA97EL,6L,0xA97EL,1L,0x5BD6L},{0x5B32L,1L,0xB7BFL,0xA97EL,0xE9FDL,0xB11DL,0xB11DL,0xE9FDL}};
                int i, j, k;
                for (l_1616 = (-7); (l_1616 < 17); l_1616 = safe_add_func_uint8_t_u_u(l_1616, 5))
                { /* block id: 721 */
                    uint8_t ***l_1621 = &g_1577;
                    int8_t *l_1642 = &g_170[0][0][0];
                    int32_t l_1643 = 0x33E31572L;
                    int32_t l_1645 = (-9L);
                    int64_t l_1646 = 0x4B965F4F4B1D5394LL;
                    int32_t *l_1682 = &g_75[3][1][2];
                    int32_t *l_1683[8] = {&g_2[0][0][6],&g_2[0][0][6],&g_2[0][0][6],&g_2[0][0][6],&g_2[0][0][6],&g_2[0][0][6],&g_2[0][0][6],&g_2[0][0][6]};
                    int i;
                    l_1621 = &g_1577;
                    (****g_1545) = (void*)0;
                    /*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
/*bef_stmt:119294*/
if ((((~(safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((l_1645 = ((Tag78(/*uint64_t:0:0:119294:e*/*g_501)) || (0xA4L < ((*g_1578) &= ((0xE6L & (~((safe_lshift_func_uint8_t_u_u((0x5A01L && ((safe_mul_func_int16_t_s_s(((((l_1643 = (((void*)0 == l_1632) , (((safe_add_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u(Tag79(/*uint64_t:126611:126635:119294:e*/l_1637), (safe_div_func_int8_t_s_s(((*l_1642) = (safe_mod_func_uint32_t_u_u((0x1A84L & Tag80(/*uint8_t:126721:126721:119294:e*/p_19)), (Tag81(/*uint32_t:0:0:119294:e*/**g_1478))))), Tag82(/*uint8_t:126721:126721:119294:e*/p_19))))) != Tag83(/*int32_t:119307:126611:119294:e*/l_1643)) || Tag84(/*int32_t:126611:126635:119294:e*/l_1644)) || 5L), 0xB6L)) >= 0x36L) | 0xCA035561E93200BDLL))) && (Tag85(/*int32_t:126672:126721:119294:e*/*l_1473))) , (*g_1478)) != (*g_1478)), Tag86(/*int16_t:126721:126721:119294:e*/p_18))) , 65535UL)), (Tag87(/*int32_t:126672:126721:119294:e*/*l_1473)))) <= 0x5B6CDCA2L))) ^ (-1L)))))), Tag88(/*int64_t:119307:126611:119294:e*/l_1646))) , 0x114CL), (-1L)))) >= Tag89(/*int32_t:0:0:119294:e*/g_75[1][1][6])) < (Tag90(/*uint64_t:0:0:119294:e*/*g_501))))
                    { /* block id: 728 */
                        const uint64_t l_1659 = 18446744073709551611UL;
                        uint64_t *l_1663 = &l_1637;
                        int8_t *l_1679 = &g_1680;
                        /*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
/*bef_stmt:119139*/
(*p_15) = (Tag91(/*uint8_t:126721:126721:119139:e*/p_19) || ((Tag92(/*uint32_t:0:0:119139:e*/**g_814)) , ((safe_sub_func_int32_t_s_s((Tag93(/*int32_t:126721:126721:119139:e*/*p_16)), ((((safe_lshift_func_uint8_t_u_s((Tag94(/*uint8_t:0:0:119139:e*/*g_1578)), 4)) , ((Tag95(/*int32_t:119307:126611:119139:e*/l_1643) >= ((*l_1642) ^= (((safe_mul_func_uint8_t_u_u(((Tag96(/*int32_t:126721:126721:119139:e*/*p_17)) < (safe_mod_func_int32_t_s_s((!(((+1UL) && ((safe_rshift_func_int16_t_s_s((((Tag97(/*int16_t:126721:126721:119139:e*/p_18) , (Tag98(/*uint64_t:0:0:119139:e*/*g_501))) <= 7L) <= Tag99(/*uint8_t:0:0:119139:e*/g_168[0][4][1])), 10)) > Tag100(/*uint16_t:0:0:119139:e*/g_384[5]))) , Tag101(/*int16_t:126721:126721:119139:e*/p_18))), (-10L)))), 0x58L)) <= (Tag102(/*int32_t:126672:126721:119139:e*/*l_1473))) , 0L))) <= Tag103(/*int64_t:119307:126611:119139:e*/l_1646))) == Tag104(/*const uint64_t:119223:119307:119139:e*/l_1659)) > Tag105(/*int32_t:119307:126611:119139:e*/l_1645)))) , 0xE3EA97EAL)));
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
/*aft_stmt:119139*/
                        /*bef_stmt:119172*/
if ((Tag106(/*int32_t:126721:126721:119172:e*/*p_17)))
                            break;
/*aft_stmt:119172*/
                        (**g_455) = (**g_455);
                    }
                    else
                    { /* block id: 737 */
                        /*bef_stmt:119249*/
if ((Tag107(/*int32_t:126721:126721:119249:e*/*p_15)))
                            break;
/*aft_stmt:119249*/
                        return (****g_1545);
                    }
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
/*aft_stmt:119294*/
                    ++l_1696;
                }
                /*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
/*bef_stmt:119784*/
(*g_162) &= ((((Tag108(/*uint8_t:0:0:119784:e*/*g_1578)) , (Tag109(/*const uint16_t:0:0:119784:e*/***g_1307))) ^ (((safe_mod_func_uint16_t_u_u(((((Tag110(/*uint32_t:126635:126672:119784:e*/l_1701) , &g_664) == (void*)0) , ((((Tag111(/*const int16_t:126635:126672:119784:e*/l_1678) ^ ((Tag112(/*uint32_t:0:0:119784:e*/*g_1479)) != (Tag113(/*uint8_t:126721:126721:119784:e*/p_19) != (safe_mul_func_int8_t_s_s(((l_1704 == &g_501) , (-1L)), Tag114(/*int16_t:126721:126721:119784:e*/p_18)))))) , 1UL) , Tag115(/*uint8_t:126721:126721:119784:e*/p_19)) & Tag116(/*uint32_t:0:0:119784:e*/g_1493[5]))) , 1UL), 0x0A0AL)) , Tag117(/*const int16_t:126635:126672:119784:e*/l_1678)) || (Tag118(/*int32_t:126721:126721:119784:e*/*l_1537)))) >= Tag119(/*int32_t:0:0:119784:e*/g_2[0][0][8]));
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
/*aft_stmt:119784*/
                for (l_1687 = 0; (l_1687 == (-6)); --l_1687)
                { /* block id: 746 */
                    l_1707 = ((***g_664) = (****g_1545));
                    --g_1708;
                }
                /*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
/*bef_stmt:126605*/
if (((~4294967293UL) < ((((((((((((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((0xF1L < (0UL | Tag120(/*uint32_t:126635:126672:126605:e*/l_1701))), (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((((*l_1751) |= (safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u(((*g_501) |= (((*l_1747) = ((((((((*l_1575) ^= (Tag121(/*int32_t:126672:126721:126605:e*/*l_1473))) <= ((((Tag122(/*uint8_t:126721:126721:126605:e*/p_19) && (((((safe_lshift_func_uint16_t_u_u((l_1734 != (l_1737 = (l_1736 = l_1736))), (safe_div_func_uint64_t_u_u(((((safe_sub_func_uint16_t_u_u((l_1742[4][2][1] != l_1743), Tag123(/*int16_t:126721:126721:126605:e*/p_18))) >= Tag124(/*int32_t:0:0:126605:e*/g_1274[4][6][0])) , (Tag125(/*uint32_t:0:0:126605:e*/**g_1478))) > (Tag126(/*int32_t:126721:126721:126605:e*/*p_16))), 18446744073709551608UL)))) || Tag127(/*uint8_t:126721:126721:126605:e*/p_19)) , Tag128(/*uint8_t:126721:126721:126605:e*/p_19)) , 0xBDAB2E127CF55DCDLL) || 0xFF25061FD6EC63E7LL)) >= Tag129(/*int32_t:126635:126672:126605:e*/l_1744)) > (Tag130(/*const uint16_t:0:0:126605:e*/*g_1309))) <= (Tag131(/*int32_t:126721:126721:126605:e*/*p_17)))) >= Tag132(/*int32_t:126635:126672:126605:e*/l_1681[4])) ^ (Tag133(/*int32_t:126672:126721:126605:e*/*l_1473))) , Tag134(/*int16_t:126721:126721:126605:e*/p_18)) & Tag135(/*int8_t:0:0:126605:e*/g_1745)) , (void*)0)) != &l_1696)), Tag136(/*int16_t:126721:126721:126605:e*/p_18))) > 0xBECDL) <= Tag137(/*int32_t:0:0:126605:e*/g_183)), 4294967289UL)) && 0xDBL), (-4L))), 9))) || Tag138(/*uint8_t:126721:126721:126605:e*/p_19)) < Tag139(/*uint8_t:126721:126721:126605:e*/p_19)), Tag140(/*uint8_t:0:0:126605:e*/g_1752))), 0)), Tag141(/*int64_t:126672:126721:126605:e*/l_1753))))), 3)), Tag142(/*const int16_t:126635:126672:126605:e*/l_1678))) && Tag143(/*uint32_t:0:0:126605:e*/g_1420)) , l_1754) == l_1756[1][2][0]) != 0UL) != 0x3B9CL) >= Tag144(/*int16_t:126721:126721:126605:e*/p_18)) | Tag145(/*uint16_t:126635:126672:126605:e*/l_1759)) | (Tag146(/*uint32_t:0:0:126605:e*/**g_1478))) , 5L) != 0L) == Tag147(/*int16_t:126721:126721:126605:e*/p_18))))
                { /* block id: 757 */
                    uint16_t l_1773 = 65530UL;
                    int64_t *l_1774 = &l_1608;
                    uint64_t *l_1775 = &l_1637;
                    int32_t *****l_1791 = &g_664;
                    uint8_t l_1801 = 0x8FL;
                    /*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
/*bef_stmt:123130*/
if ((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_uint16_t_u_s((Tag148(/*uint8_t:126721:126721:123130:e*/p_19) == (Tag149(/*int32_t:126635:126672:123130:e*/l_1681[4]) , ((((*l_1775) &= (Tag150(/*int16_t:126721:126721:123130:e*/p_18) & ((1UL || (safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(((l_1767 = ((***l_1737) = (*g_731))) == (*g_1307)), 6)) , (Tag151(/*int16_t:126721:126721:123130:e*/p_18) >= ((Tag152(/*int32_t:126672:126721:123130:e*/*l_1473)) , ((((((*l_1774) &= ((((+((*l_1743) = (((safe_sub_func_uint16_t_u_u(0x6093L, 0x9765L)) > (Tag153(/*int32_t:126721:126721:123130:e*/*l_1537))) & Tag154(/*uint32_t:126635:126672:123130:e*/l_1771)))) , 65527UL) , Tag155(/*int16_t:126672:126721:123130:e*/l_1772[0][0])) , Tag156(/*uint16_t:123498:126611:123130:e*/l_1773))) || (Tag157(/*uint64_t:0:0:123130:e*/*g_501))) | Tag158(/*uint8_t:126721:126721:123130:e*/p_19)) >= 0xE6L) >= 3UL)))) <= Tag159(/*int16_t:126721:126721:123130:e*/p_18)), 0x08AA0672L))) ^ Tag160(/*int16_t:126721:126721:123130:e*/p_18)))) > Tag161(/*uint8_t:126721:126721:123130:e*/p_19)) == 18446744073709551612UL))), Tag162(/*int16_t:126721:126721:123130:e*/p_18))) | Tag163(/*int16_t:126721:126721:123130:e*/p_18)))))
                    { /* block id: 763 */
                        /*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
/*bef_stmt:122893*/
(*l_1473) = (safe_add_func_uint32_t_u_u((Tag164(/*uint8_t:126721:126721:122893:e*/p_19) && (safe_rshift_func_uint16_t_u_s(((Tag165(/*int16_t:126721:126721:122893:e*/p_18) == ((*l_1743) |= (((safe_div_func_int64_t_s_s(((-1L) ^ (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u(Tag166(/*int16_t:126721:126721:122893:e*/p_18), (((safe_add_func_uint64_t_u_u((Tag167(/*int32_t:126721:126721:122893:e*/*l_1537)), ((((Tag168(/*const int16_t:126635:126672:122893:e*/l_1678) > (safe_lshift_func_uint16_t_u_s(((l_1792 = l_1791) == ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(Tag169(/*int16_t:126721:126721:122893:e*/p_18), 0x07ECL)), (Tag170(/*int32_t:126721:126721:122893:e*/*p_17)))), 4)) , l_1791)), 15))) < 0x5024CF3EL) <= Tag171(/*int16_t:126721:126721:122893:e*/p_18)) == 0xE100CD216DC8ACA9LL))) >= Tag172(/*uint8_t:126721:126721:122893:e*/p_19)) == Tag173(/*int16_t:126721:126721:122893:e*/p_18)))))) != (Tag174(/*int32_t:126721:126721:122893:e*/*p_17))), 4294967295UL))), Tag175(/*uint8_t:0:0:122893:e*/g_168[0][4][1]))) <= (Tag176(/*const uint16_t:0:0:122893:e*/***g_1307))) , Tag177(/*int16_t:126721:126721:122893:e*/p_18)))) ^ (Tag178(/*int32_t:126721:126721:122893:e*/*p_16))), 10))), (Tag179(/*int32_t:0:0:122893:e*/*g_162))));
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
/*aft_stmt:122893*/
                        return p_15;
                    }
                    else
                    { /* block id: 768 */
                        /*bef_stmt:122941*/
(*p_15) = (Tag180(/*int32_t:126721:126721:122941:e*/*p_16));
/*aft_stmt:122941*/
                        /*bef_stmt:123046*/
/*bef_stmt:123046*/
/*bef_stmt:123046*/
(*g_162) ^= ((safe_mod_func_int16_t_s_s((Tag181(/*uint8_t:123498:126611:123046:e*/l_1801) , 1L), (Tag182(/*const uint16_t:0:0:123046:e*/*g_1309)))) <= (Tag183(/*int32_t:126672:126721:123046:e*/*l_1473)));
/*aft_stmt:123046*/
/*aft_stmt:123046*/
/*aft_stmt:123046*/
                        /*bef_stmt:123098*/
(*p_16) = ((*g_162) = Tag184(/*uint8_t:126635:126672:123098:e*/l_1612));
/*aft_stmt:123098*/
                        /*bef_stmt:123120*/
if ((Tag185(/*int32_t:0:0:123120:e*/*g_162)))
                            continue;
/*aft_stmt:123120*/
                    }
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
/*aft_stmt:123130*/
                    for (l_1771 = 0; (l_1771 <= 45); l_1771++)
                    { /* block id: 777 */
                        /*bef_stmt:123402*/
/*bef_stmt:123402*/
/*bef_stmt:123402*/
/*bef_stmt:123402*/
(*l_1473) &= ((safe_mul_func_int16_t_s_s(Tag186(/*int16_t:126721:126721:123402:e*/p_18), (safe_div_func_uint32_t_u_u(((Tag187(/*int32_t:126635:126672:123402:e*/l_1681[2]) && Tag188(/*int16_t:126611:126635:123402:e*/l_1808[0][5])) , (+((void*)0 != (**g_665)))), Tag189(/*uint8_t:126721:126721:123402:e*/p_19))))) , (-1L));
/*aft_stmt:123402*/
/*aft_stmt:123402*/
/*aft_stmt:123402*/
/*aft_stmt:123402*/
                        (*p_16) = 0x4570C499L;
                        /*bef_stmt:123452*/
if (Tag190(/*int32_t:126635:126672:123452:e*/l_1681[2]))
                            continue;
/*aft_stmt:123452*/
                    }
                    /*bef_stmt:123492*/
(*g_162) &= Tag191(/*uint16_t:126635:126672:123492:e*/l_1759);
/*aft_stmt:123492*/
                }
                else
                { /* block id: 783 */
                    int8_t *l_1816 = &g_1680;
                    int16_t l_1824[6];
                    int64_t *l_1825 = &g_61[0];
                    int32_t l_1845[9];
                    int32_t l_1851[9];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1824[i] = 0xC309L;
                    for (i = 0; i < 9; i++)
                        l_1845[i] = 0L;
                    for (i = 0; i < 9; i++)
                        l_1851[i] = 1L;
                    /*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
/*bef_stmt:126587*/
if (((-1L) & ((((*l_1825) ^= ((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(0xEEL, (safe_mod_func_uint16_t_u_u((Tag192(/*int32_t:126672:126721:126587:e*/*l_1473)), ((((*l_1816) ^= Tag193(/*int8_t:0:0:126587:e*/g_170[0][0][0])) || Tag194(/*int64_t:0:0:126587:e*/g_258)) , Tag195(/*int16_t:126721:126721:126587:e*/p_18)))))) >= ((Tag196(/*int32_t:126672:126721:126587:e*/*l_1473)) & (0xAE27L < ((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u(Tag197(/*uint8_t:126721:126721:126587:e*/p_19), Tag198(/*int64_t:126721:126721:126587:e*/l_1823))) , Tag199(/*int32_t:126635:126672:126587:e*/l_1744)) && 65534UL), Tag200(/*int16_t:126593:126611:126587:e*/l_1824[2]))), Tag201(/*int16_t:126721:126721:126587:e*/p_18))) ^ Tag202(/*int16_t:126593:126611:126587:e*/l_1824[2]))))), (Tag203(/*int32_t:0:0:126587:e*/*g_162)))) , Tag204(/*int32_t:0:0:126587:e*/g_2[0][1][4]))) , Tag205(/*uint8_t:126721:126721:126587:e*/p_19)) ^ 0x7758L)))
                    { /* block id: 786 */
                        int64_t l_1830 = (-1L);
                        int8_t **l_1838[9][9] = {{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,(void*)0,(void*)0,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,(void*)0,(void*)0,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816}};
                        int i, j;
                        /*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
/*bef_stmt:126110*/
(*g_162) = ((safe_sub_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_s((p_19 = (((g_1839[2] = func_56(Tag206(/*int64_t:126114:126593:126110:e*/l_1830), (safe_add_func_uint16_t_u_u((g_115 |= Tag207(/*int16_t:126721:126721:126110:e*/p_18)), Tag208(/*uint8_t:126721:126721:126110:e*/p_19))), Tag209(/*uint8_t:126721:126721:126110:e*/p_19), ((safe_mul_func_int64_t_s_s(Tag210(/*int16_t:126721:126721:126110:e*/p_18), (((safe_lshift_func_int16_t_s_s((0x8C0C93E1D41D67B4LL | (!Tag211(/*uint8_t:126721:126721:126110:e*/p_19))), 10)) && Tag212(/*int16_t:126721:126721:126110:e*/p_18)) > ((Tag213(/*uint8_t:0:0:126110:e*/g_933) , (Tag214(/*uint32_t:0:0:126110:e*/*g_1479))) & (Tag215(/*int32_t:126721:126721:126110:e*/*p_15)))))) || Tag216(/*int16_t:126593:126611:126110:e*/l_1824[0])))) == l_1816) > 0x61L)), Tag217(/*int16_t:126721:126721:126110:e*/p_18))) == Tag218(/*const int16_t:126635:126672:126110:e*/l_1678)) <= 0x1D95C15296A049D8LL), 18446744073709551611UL)) , Tag219(/*int64_t:126721:126721:126110:e*/l_1840));
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
/*aft_stmt:126110*/
                    }
                    else
                    { /* block id: 791 */
                        uint32_t * const **l_1842 = &g_814;
                        uint32_t * const ***l_1841 = &l_1842;
                        int32_t l_1846 = 0x37EDD473L;
                        int32_t *l_1847 = (void*)0;
                        int32_t *l_1848 = &g_183;
                        int32_t *l_1849 = &l_1691[0][5][2];
                        int32_t *l_1850[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1850[i] = (void*)0;
                        (*l_1841) = &g_814;
                        /*bef_stmt:126562*/
(*l_1473) = (safe_lshift_func_uint8_t_u_s((Tag220(/*uint8_t:0:0:126562:e*/*g_1578)), 7));
/*aft_stmt:126562*/
                        l_1861++;
                    }
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
/*aft_stmt:126587*/
                }
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
/*aft_stmt:126605*/
            }
        }
/*aft_stmt:126657*/
/*aft_stmt:126657*/
/*aft_stmt:126657*/
/*aft_stmt:126657*/
/*aft_stmt:126657*/
/*aft_stmt:126657*/
/*aft_stmt:126657*/
/*aft_stmt:126657*/
/*aft_stmt:126657*/
        return p_16;
    }
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : g_1019 g_1306 g_664 g_665 g_128 g_455 g_456 g_7 g_1309 g_583 g_883 g_1308 g_1274 g_95 g_2 g_73 g_75 g_85 g_115 g_129 g_153 g_166 g_162 g_163 g_61 g_182 g_168 g_299 g_283 g_170 g_258 g_384 g_501 g_457
 * writes: g_1019 g_1306 g_7 g_583 g_899 g_129 g_457 g_85 g_115 g_75 g_73 g_166 g_163 g_182 g_61 g_282 g_299 g_168 g_170 g_384 g_1141
 */
static int32_t * func_20(int32_t * p_21, int32_t * p_22, uint32_t  p_23, uint32_t  p_24, int32_t  p_25)
{ /* block id: 574 */
    int32_t l_1322 = 0x86C735D7L;
    int32_t l_1356 = 0x78031C89L;
    uint32_t *l_1377 = (void*)0;
    uint32_t **l_1376 = &l_1377;
    int32_t ****l_1393 = &g_665;
    uint8_t l_1439 = 0UL;
    int32_t *l_1468 = &l_1322;
    int32_t *l_1469[2];
    int i;
    for (i = 0; i < 2; i++)
        l_1469[i] = &l_1322;
    for (g_1019 = 0; (g_1019 >= 0); g_1019 -= 1)
    { /* block id: 577 */
        uint16_t * const *l_1303 = (void*)0;
        uint16_t * const **l_1302[10] = {&l_1303,(void*)0,&l_1303,&l_1303,&l_1303,&l_1303,(void*)0,&l_1303,&l_1303,&l_1303};
        uint16_t * const ***l_1301 = &l_1302[8];
        uint16_t * const ****l_1304 = (void*)0;
        uint16_t * const ****l_1305 = &l_1301;
        const uint16_t *****l_1310 = &g_1306;
        int32_t l_1315 = 8L;
        int32_t ***l_1340 = &g_128;
        int32_t l_1432 = (-5L);
        int16_t l_1452 = 0xAF94L;
        int i;
        (*p_22) = (((*l_1305) = l_1301) == ((*l_1310) = g_1306));
        for (g_583 = 0; (g_583 <= 0); g_583 += 1)
        { /* block id: 583 */
            int8_t l_1343 = 0x99L;
            uint32_t l_1358 = 0x7D4AF94BL;
            int32_t l_1359[9][7][4] = {{{0x863C1AF6L,(-1L),0x246C836FL,5L},{(-1L),0x6A559345L,0x639E5780L,0xFC26AC48L},{(-6L),0L,0xD0D7C623L,0L},{0x246C836FL,0x53D27913L,1L,0x639E5780L},{0x6A559345L,3L,0x6A559345L,0L},{0x639E5780L,0x9227EB75L,0x17E6D536L,1L},{0xA39EEB01L,0x863C1AF6L,0x0234978AL,0x9227EB75L}},{{0xB239EDEBL,0x17E6D536L,0x0234978AL,0xD0D7C623L},{0xA39EEB01L,0xFC26AC48L,0x17E6D536L,1L},{0x639E5780L,0x166709BFL,0x6A559345L,0xA39EEB01L},{0x6A559345L,0xA39EEB01L,1L,0x9D281496L},{0x246C836FL,0xD0D7C623L,0xD0D7C623L,0x246C836FL},{(-6L),5L,0x639E5780L,0x495F6DBDL},{(-1L),1L,0x246C836FL,0x166709BFL}},{{0x863C1AF6L,0x160FA228L,0xA39EEB01L,0x166709BFL},{(-4L),1L,0xA7FD696AL,0x495F6DBDL},{0xD0D7C623L,5L,(-4L),0x246C836FL},{0L,0xD0D7C623L,0L,0x9D281496L},{0x17E6D536L,0xA39EEB01L,0x53D27913L,0xA39EEB01L},{(-1L),0x166709BFL,0x160FA228L,1L},{1L,0xFC26AC48L,1L,0xD0D7C623L}},{{0x9D281496L,0x17E6D536L,0x166709BFL,0x9227EB75L},{0x9D281496L,0x863C1AF6L,1L,1L},{1L,0x9227EB75L,0x160FA228L,0L},{(-1L),3L,0x53D27913L,0x639E5780L},{0x17E6D536L,0x53D27913L,0L,0L},{0L,0L,(-4L),0xFC26AC48L},{0xD0D7C623L,0x6A559345L,0xA7FD696AL,5L}},{{(-4L),(-4L),0xB239EDEBL,0x246C836FL},{0x53D27913L,(-4L),1L,0xA7FD696AL},{(-4L),0x9227EB75L,0x0234978AL,0x863C1AF6L},{1L,0x495F6DBDL,0x9D281496L,(-6L)},{1L,5L,0x160FA228L,0x0234978AL},{0x9227EB75L,0L,0x9227EB75L,0x495F6DBDL},{0x0234978AL,(-1L),0x639E5780L,0xD0D7C623L}},{{0xB239EDEBL,0x53D27913L,0x1CF410CBL,(-1L)},{(-1L),0x639E5780L,0x1CF410CBL,0x9D281496L},{0xB239EDEBL,0x863C1AF6L,0x639E5780L,0x166709BFL},{0x0234978AL,0x6A559345L,0x9227EB75L,0xB239EDEBL},{0x9227EB75L,0xB239EDEBL,0x160FA228L,0xFC26AC48L},{1L,0x9D281496L,0x9D281496L,1L},{1L,0xA7FD696AL,0x0234978AL,1L}},{{(-4L),0x160FA228L,1L,0x6A559345L},{0x53D27913L,0L,0xB239EDEBL,0x6A559345L},{0x17E6D536L,0x160FA228L,0x246C836FL,1L},{0x9D281496L,0xA7FD696AL,0x17E6D536L,1L},{0x495F6DBDL,0x9D281496L,(-6L),0xFC26AC48L},{0x639E5780L,0xB239EDEBL,5L,0xB239EDEBL},{3L,0x6A559345L,0L,0x166709BFL}},{{0xD0D7C623L,0x863C1AF6L,0x166709BFL,0x9D281496L},{0xFC26AC48L,0x639E5780L,0x6A559345L,(-1L)},{0xFC26AC48L,0x53D27913L,0x166709BFL,0xD0D7C623L},{0xD0D7C623L,(-1L),0L,0x495F6DBDL},{3L,0L,5L,0x0234978AL},{0x639E5780L,5L,(-6L),(-6L)},{0x495F6DBDL,0x495F6DBDL,0x17E6D536L,0x863C1AF6L}},{{0x9D281496L,0x9227EB75L,0x246C836FL,0xA7FD696AL},{0x17E6D536L,(-4L),0xB239EDEBL,0x246C836FL},{0x53D27913L,(-4L),1L,0xA7FD696AL},{(-4L),0x9227EB75L,0x0234978AL,0x863C1AF6L},{1L,0x495F6DBDL,0x9D281496L,(-6L)},{1L,5L,0x160FA228L,0x0234978AL},{0x9227EB75L,0L,0x9227EB75L,0x495F6DBDL}}};
            int i, j, k;
            for (g_899 = 0; (g_899 >= 0); g_899 -= 1)
            { /* block id: 586 */
                uint8_t *l_1332[10][7] = {{&g_168[0][4][1],&g_168[0][4][1],&g_73,&g_168[3][0][2],&g_168[3][0][2],&g_73,&g_168[0][4][1]},{&g_73,&g_168[0][4][1],&g_168[0][4][1],&g_73,&g_933,(void*)0,&g_168[0][4][1]},{&g_73,&g_933,(void*)0,&g_168[0][4][1],(void*)0,&g_933,&g_73},{&g_168[0][4][1],(void*)0,&g_933,&g_73,&g_168[0][4][1],&g_168[0][4][1],&g_73},{&g_168[0][4][1],&g_73,&g_168[3][0][2],&g_168[3][0][2],&g_73,&g_168[0][4][1],&g_168[0][4][1]},{&g_933,&g_168[3][0][2],&g_933,&g_168[0][4][1],&g_168[2][0][2],&g_168[0][4][1],&g_168[0][4][1]},{&g_73,&g_168[2][0][2],(void*)0,&g_168[2][0][2],&g_73,&g_168[0][4][1],&g_933},{&g_73,&g_168[3][0][2],&g_168[0][4][1],&g_168[0][4][1],&g_168[3][0][2],&g_168[0][4][1],&g_168[3][0][2]},{&g_168[0][4][1],(void*)0,(void*)0,&g_168[0][4][1],&g_933,&g_168[0][4][1],&g_73},{&g_73,&g_168[0][4][1],&g_933,&g_168[0][4][1],(void*)0,(void*)0,&g_168[0][4][1]}};
                int32_t l_1333[6] = {0xDBBE9CACL,0xDBBE9CACL,0xDBBE9CACL,0xDBBE9CACL,0xDBBE9CACL,0xDBBE9CACL};
                int i, j;
                (*p_22) = 0x8F00C220L;
                (**g_455) = ((***g_664) = p_21);
                /*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
/*bef_stmt:135484*/
(*g_128) = func_50((safe_lshift_func_int8_t_s_s((8L > (safe_sub_func_uint32_t_u_u((/*TAG221:STA*/((int32_t)(realsmith_proxy_mIMgU((int)(g_933)+(-15))+(int)(l_1315)+(int)(*g_1578)+(int)(g_933)+(int)(*g_1479)+(int)(g_2[0][1][4])-(-1984608578))+l_1315)/*TAG221:END:l_1315*/ == ((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(/*TAG222:STA*/((int32_t)(realsmith_proxy_wh50t((char)(*g_1479)+(-85), (long)(*g_1578)+(-75))+(int)(l_1322)+(int)(*g_1479)+(int)(*g_1578)+((int)(g_2[0][1][4])-(-1984608747))+(int)(g_933)-(-2033764744))+l_1322)/*TAG222:END:l_1322*/, (((~(safe_sub_func_int64_t_s_s(((/*TAG223:STA*/((int32_t)(realsmith_BmD3g((long)(*p_22)+(1895775797))+(int)(*p_22)-(-1878932703))+*p_22)/*TAG223:END:*p_22*/) & ((safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(((/*TAG224:STA*/((uint16_t)(realsmith_cHfQx((int)(*g_1309)+(53), (int)(*g_1309)+(7))+(int)(*g_1309)-(50))+*g_1309)/*TAG224:END:*g_1309*/) != ((safe_lshift_func_uint8_t_u_s(255UL, (0xFAFDFB27E1D4FF8CLL >= (/*TAG225:STA*/((int32_t)(realsmith_xjQVI()+(int)(l_1322)-(-2033764905))+l_1322)/*TAG225:END:l_1322*/ & /*TAG226:STA*/((uint16_t)(realsmith_proxy_QbYkH((int)(g_883[2][1][0])+(32), (unsigned long)(g_883[2][1][0])+(69), (unsigned long)(g_883[2][1][0])+(70))+(int)(g_883[2][1][0])-(22))+g_883[2][1][0])/*TAG226:END:g_883[2][1][0]*/)))) <= Tag227(/*uint32_t:139455:139455:135484:e*/p_23))), Tag228(/*uint32_t:139455:139455:135484:e*/p_24))) != 0L), 8L)) > 0x2C7D2B76L)), 0x112FAB035010E6F0LL))) && 0xEA89L) == 251UL))) >= Tag229(/*int32_t:139455:139455:135484:e*/p_25)), Tag230(/*uint32_t:139455:139455:135484:e*/p_24))) || 0xF2E2FB86L), /*TAG231:STA*/((int32_t)(realsmith_QARBI((int)(g_883[2][1][0])+(47))+(int)(l_1322)+(int)(g_933)+(int)(g_883[2][1][0])+(int)(*g_1309)-(-2033764828))+l_1322)/*TAG231:END:l_1322*/)) ^ (/*TAG232:STA*/((uint16_t)(realsmith_sq6WK()+(unsigned int)(**g_1308)-(1))+**g_1308)/*TAG232:END:**g_1308*/))), 0xA8798C7FL))), 0)), /*TAG233:STA*/((int32_t)(realsmith_proxy_3wOrz((int)(g_1274[4][3][1])+(-1830657140), (unsigned long)(g_1274[4][3][1])+(-1830657117), (int)(g_1274[4][3][1])+(-1830657263), (int)(g_1274[4][3][1])+(-1830657181), (int)(g_1274[4][3][1])+(-1830657256))+(int)(g_1274[4][3][1])-(1830657186))+g_1274[4][3][1])/*TAG233:END:g_1274[4][3][1]*/, l_1332[9][4], Tag234(/*uint32_t:139455:139455:135484:e*/p_23), &l_1315);
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
/*aft_stmt:135484*/
                l_1333[0] = 0L;
            }
            for (p_23 = 0; (p_23 <= 0); p_23 += 1)
            { /* block id: 595 */
                uint16_t l_1334 = 0xA497L;
                uint32_t **l_1335 = (void*)0;
                uint32_t ***l_1336 = &l_1335;
                uint32_t *l_1339 = &g_166[6];
                uint32_t **l_1338 = &l_1339;
                uint32_t ***l_1337 = &l_1338;
                int16_t *l_1344 = &g_1141;
                int64_t *l_1357 = &g_61[0];
                uint16_t l_1419 = 0xD13BL;
                int32_t l_1421 = 0x9D0E1363L;
                uint16_t l_1451 = 65532UL;
                int i, j, k;
                /*bef_stmt:135977*/
(*p_22) &= /*TAG235:STA*/((uint16_t)(realsmith_LZWL1((int)(p_23)+(31))+(int)(l_1334)+(int)(l_1315)+(int)(g_1274[4][3][1])+(int)(p_23)+(int)(l_1322)-(-203065576))+l_1334)/*TAG235:END:l_1334*/;
/*aft_stmt:135977*/
                (*l_1337) = ((*l_1336) = l_1335);
                /*bef_stmt:136048*/
if ((/*TAG236:STA*/((int32_t)(realsmith_AQDDQ()+(int)(*p_22)+(int)(**g_1308)+(int)(l_1322)+(int)(*g_1309)+(int)(*g_1578)-(-2033732058))+*p_22)/*TAG236:END:*p_22*/))
                    break;
/*aft_stmt:136048*/
                /*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
/*bef_stmt:139378*/
if ((((Tag237(/*int32_t:139424:139455:139378:e*/l_1315) , l_1340) == (((safe_mod_func_int64_t_s_s(((*l_1357) |= ((((*l_1344) = Tag238(/*int8_t:139409:139424:139378:e*/l_1343)) , (safe_rshift_func_int16_t_s_u((l_1356 |= (((((*l_1339)--) , ((((((g_170[g_583][g_583][g_583] = ((Tag239(/*int32_t:0:0:139378:e*/g_163) & (Tag240(/*uint64_t:0:0:139378:e*/*g_501))) & (safe_mul_func_int8_t_s_s(((((*l_1344) = ((Tag241(/*int32_t:139455:139455:139378:e*/l_1322) , (~(safe_mod_func_uint64_t_u_u((((0x32L >= Tag242(/*uint16_t:0:0:139378:e*/g_115)) < (safe_mod_func_uint64_t_u_u((0xE293221905C746BELL < 5UL), g_583))) > 9UL), 0x0C6363C915E56C7BLL)))) || 0x92D3CCAC2C6AB944LL)) && Tag243(/*int8_t:139409:139424:139378:e*/l_1343)) , 0x2CL), g_583)))) < p_23) , 0L) , (Tag244(/*int32_t:139455:139455:139378:e*/*p_22))) < Tag245(/*uint16_t:139384:139409:139378:e*/l_1334)) >= p_23)) < 0UL) ^ Tag246(/*int8_t:139409:139424:139378:e*/l_1343))), 11))) > Tag247(/*int32_t:139455:139455:139378:e*/p_25))), p_23)) ^ p_23) , (void*)0)) , Tag248(/*int8_t:139409:139424:139378:e*/l_1343)))
                { /* block id: 606 */
                    int32_t l_1360 = 0x930C42D4L;
                    uint16_t l_1365 = 65535UL;
                    uint8_t *l_1381 = &g_73;
                    uint16_t * const * const *l_1390 = &l_1303;
                    uint16_t * const * const **l_1389 = &l_1390;
                    int32_t *l_1423 = &g_75[1][1][7];
                    int32_t *l_1424 = (void*)0;
                    int32_t *l_1425 = &g_183;
                    int32_t *l_1426 = (void*)0;
                    int32_t *l_1427 = &l_1359[6][3][0];
                    int32_t *l_1428 = &g_182[0];
                    int32_t *l_1429 = &l_1356;
                    int32_t *l_1430 = &g_7;
                    int32_t *l_1431 = &l_1315;
                    int32_t *l_1433 = (void*)0;
                    int32_t *l_1434 = &g_75[1][1][6];
                    int32_t *l_1435 = (void*)0;
                    int32_t *l_1436 = &g_182[0];
                    int32_t *l_1437 = &l_1360;
                    int32_t *l_1438[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1438[i] = &l_1322;
                    /*bef_stmt:138558*/
if (Tag249(/*uint32_t:139409:139424:138558:e*/l_1358))
                    { /* block id: 607 */
                        int32_t *l_1361 = (void*)0;
                        int32_t l_1362 = 0x7A613AACL;
                        int32_t *l_1363 = &g_75[1][1][6];
                        int32_t *l_1364[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1364[i] = &l_1356;
                        l_1365++;
                        return p_22;
                    }
                    else
                    { /* block id: 610 */
                        uint16_t ****l_1379[10] = {&g_731,&g_731,&g_731,&g_731,&g_731,&g_731,&g_731,&g_731,&g_731,&g_731};
                        uint16_t *****l_1378 = &l_1379[1];
                        int32_t l_1380 = (-4L);
                        const int32_t **l_1382 = (void*)0;
                        const int32_t *l_1384 = (void*)0;
                        const int32_t **l_1383 = &l_1384;
                        int32_t *****l_1394 = &l_1393;
                        int32_t l_1403 = 0xFE9CE03DL;
                        uint8_t *l_1422[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1422[i] = (void*)0;
                        (*l_1383) = ((**g_455) = (**g_455));
                        /*bef_stmt:138474*/
if (Tag250(/*int8_t:139409:139424:138474:e*/l_1343))
                            break;
/*aft_stmt:138474*/
                        (**g_665) = &l_1359[4][5][2];
                    }
/*aft_stmt:138558*/
                    (*g_128) = &l_1360;
                    (****l_1393) |= (&g_665 != &l_1340);
                    l_1439++;
                }
                else
                { /* block id: 625 */
                    int32_t l_1450 = 1L;
                    for (p_25 = 0; (p_25 <= 5); p_25 += 1)
                    { /* block id: 628 */
                        int i, j;
                        (*g_162) ^= ((*p_22) |= (safe_add_func_int8_t_s_s(g_166[(p_23 + 5)], g_384[(g_1019 + 3)])));
                        /*bef_stmt:139287*/
/*bef_stmt:139287*/
/*bef_stmt:139287*/
/*bef_stmt:139287*/
/*bef_stmt:139287*/
l_1452 ^= ((((((g_85[(g_1019 + 5)][(p_23 + 1)] = 1UL) & (~0x3FL)) ^ ((0x23C64C0D03725104LL <= (p_23 <= (p_25 , (safe_mul_func_uint8_t_u_u((+(p_23 , (l_1421 = (4L >= (safe_div_func_int32_t_s_s(Tag251(/*uint32_t:139409:139424:139287:e*/l_1358), Tag252(/*int32_t:139373:139384:139287:e*/l_1450))))))), (-2L)))))) ^ Tag253(/*int32_t:139373:139384:139287:e*/l_1450))) > Tag254(/*uint16_t:139384:139409:139287:e*/l_1451)) & Tag255(/*uint32_t:139455:139455:139287:e*/p_24)) != 247UL);
/*aft_stmt:139287*/
/*aft_stmt:139287*/
/*aft_stmt:139287*/
/*aft_stmt:139287*/
/*aft_stmt:139287*/
                    }
                    (**g_455) = ((***l_1393) = p_21);
                }
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
/*aft_stmt:139378*/
            }
        }
    }
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : g_804 g_183 g_384 g_163 g_883 g_128 g_665 g_129 g_2 g_501 g_153 g_162 g_899 g_61 g_115 g_258 g_664 g_75 g_933 g_765 g_170 g_583 g_166 g_283 g_168 g_1019 g_182 g_95 g_7
 * writes: g_804 g_183 g_163 g_129 g_153 g_75 g_73 g_258 g_283 g_170 g_85 g_115 g_299 g_933 g_1064 g_7
 */
static int32_t * func_26(int8_t  p_27, int32_t  p_28, uint32_t  p_29, int32_t * p_30, int32_t * p_31)
{ /* block id: 359 */
    int64_t l_860 = 7L;
    int32_t l_861 = (-1L);
    int32_t l_862 = (-1L);
    int32_t l_863 = (-7L);
    int32_t l_866[6][3] = {{3L,3L,0L},{0x396E2A33L,1L,0x396E2A33L},{3L,0L,0L},{5L,1L,5L},{3L,3L,0L},{0x396E2A33L,1L,0x396E2A33L}};
    int32_t ***l_900 = &g_128;
    int16_t * const l_934 = (void*)0;
    const int32_t ****l_973 = &g_455;
    uint8_t l_1024[4];
    const uint16_t *l_1167 = &g_384[0];
    const uint16_t **l_1166 = &l_1167;
    const uint16_t ***l_1165 = &l_1166;
    const uint16_t ****l_1164 = &l_1165;
    uint32_t l_1170 = 4294967292UL;
    int32_t * const ****l_1192 = (void*)0;
    int64_t l_1225[2];
    uint32_t l_1238 = 0x02B6F515L;
    uint16_t ***l_1271 = &g_732;
    int32_t l_1273 = 0x3EE78054L;
    uint8_t l_1293 = 255UL;
    int8_t l_1298[3];
    uint16_t l_1299 = 65533UL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_1024[i] = 0xB7L;
    for (i = 0; i < 2; i++)
        l_1225[i] = 1L;
    for (i = 0; i < 3; i++)
        l_1298[i] = 0L;
    for (g_804 = 0; (g_804 >= 41); g_804 = safe_add_func_uint8_t_u_u(g_804, 1))
    { /* block id: 362 */
        int32_t l_853[4];
        uint64_t *l_891 = &g_153;
        int32_t ***l_901 = &g_128;
        uint8_t *l_951 = &g_933;
        const uint32_t ***l_958 = (void*)0;
        int32_t *l_1033 = (void*)0;
        uint16_t **l_1057 = (void*)0;
        int64_t l_1108 = 0x9A28478EB03E02DDLL;
        int32_t *l_1125 = &l_861;
        uint16_t l_1226[1][9] = {{0x1083L,0x1083L,65534UL,0x1083L,0x1083L,65534UL,0x1083L,0x1083L,65534UL}};
        uint16_t ****l_1272[5][2];
        uint64_t l_1277 = 18446744073709551613UL;
        int32_t *l_1300 = &g_7;
        int i, j;
        for (i = 0; i < 4; i++)
            l_853[i] = (-2L);
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_1272[i][j] = &l_1271;
        }
        /*bef_stmt:156087*/
if (Tag256(/*int32_t:157071:157108:156087:e*/l_853[2]))
        { /* block id: 363 */
            uint32_t l_857[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
            int32_t l_865 = 0L;
            int32_t l_871 = 0x28386333L;
            int32_t l_872 = 0xE6D295F4L;
            int32_t l_873 = 0L;
            int32_t l_874 = 1L;
            int32_t l_875 = 0xEC1144ECL;
            int16_t l_876 = 3L;
            int32_t l_877 = 1L;
            int32_t l_878 = 0xC5BB7308L;
            int32_t l_879[2][5][4] = {{{(-1L),0x75789A94L,0x13103D10L,0x13103D10L},{(-1L),(-1L),(-1L),(-1L)},{(-6L),0x13103D10L,(-1L),0xCCAB5A3AL},{0x75789A94L,1L,0x95DDC8B9L,(-1L)},{0x02E03C1DL,1L,0x02E03C1DL,0xCCAB5A3AL}},{{1L,0x13103D10L,(-1L),(-1L)},{(-1L),(-1L),0x75789A94L,0x13103D10L},{0x983A0565L,0x75789A94L,0x75789A94L,0x983A0565L},{(-1L),0xCCAB5A3AL,(-1L),0x02E03C1DL},{1L,0L,0x02E03C1DL,(-1L)}}};
            uint8_t *l_918 = &g_73;
            int i, j, k;
            for (g_183 = 4; (g_183 >= 0); g_183 -= 1)
            { /* block id: 366 */
                int32_t l_864 = 0x70C81A8AL;
                int32_t l_867 = 1L;
                int32_t l_868 = (-5L);
                int32_t l_869 = 0x83953604L;
                int32_t l_870[6][7] = {{0x439B5AE4L,0xA6E68BD3L,0xAC6EAF2FL,0xA6E68BD3L,0x439B5AE4L,0L,0L},{1L,(-5L),0x481233A2L,(-5L),1L,0x2592C72EL,0x2592C72EL},{0x439B5AE4L,0xA6E68BD3L,0xAC6EAF2FL,0xA6E68BD3L,0x439B5AE4L,0L,0L},{1L,(-5L),0x481233A2L,(-5L),1L,0x2592C72EL,0x2592C72EL},{0x439B5AE4L,0xA6E68BD3L,0xAC6EAF2FL,0xA6E68BD3L,0x439B5AE4L,0L,0L},{1L,(-5L),0x481233A2L,(-5L),1L,0x2592C72EL,0x2592C72EL}};
                int i, j;
                if (g_384[(g_183 + 1)])
                { /* block id: 367 */
                    int32_t l_854 = 0L;
                    int32_t *l_855 = &g_163;
                    int32_t *l_856[5] = {&g_183,&g_183,&g_183,&g_183,&g_183};
                    uint8_t l_880 = 0x97L;
                    int i;
                    l_857[1]--;
                    ++l_880;
                    /*bef_stmt:144235*/
(*l_855) &= Tag257(/*int32_t:157071:157108:144235:e*/l_853[2]);
/*aft_stmt:144235*/
                }
                else
                { /* block id: 371 */
                    /*bef_stmt:144324*/
/*bef_stmt:144324*/
l_867 = (Tag258(/*uint16_t:0:0:144324:e*/g_883[8][1][0]) == Tag259(/*uint32_t:149380:157071:144324:e*/l_857[3]));
/*aft_stmt:144324*/
/*aft_stmt:144324*/
                    (*g_128) = p_30;
                    /*bef_stmt:144384*/
if ((Tag260(/*int32_t:0:0:144384:e*/***g_665)))
                        continue;
/*aft_stmt:144384*/
                }
                /*bef_stmt:144497*/
/*bef_stmt:144497*/
(*g_162) = ((safe_add_func_uint64_t_u_u(((*g_501)++), Tag261(/*int8_t:157108:157108:144497:e*/p_27))) | (0xFDEC57A34196CE64LL < Tag262(/*int32_t:149380:157071:144497:e*/l_871)));
/*aft_stmt:144497*/
/*aft_stmt:144497*/
                for (l_873 = 0; (l_873 <= 5); l_873 += 1)
                { /* block id: 380 */
                    const uint32_t l_896 = 0xBEB5714FL;
                    for (p_27 = 5; (p_27 >= 0); p_27 -= 1)
                    { /* block id: 383 */
                        uint64_t l_888 = 0UL;
                        int16_t *l_898[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_898[i] = &g_283;
                        (**g_665) = (*g_128);
                        /*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
/*bef_stmt:145350*/
g_75[1][1][6] = ((Tag263(/*uint64_t:145365:145430:145350:e*/l_888) , (((((Tag264(/*int32_t:157108:157108:145350:e*/p_28) , (safe_mod_func_uint64_t_u_u(((l_891 == (void*)0) | ((Tag265(/*int32_t:149380:157071:145350:e*/l_879[0][4][0]) >= 0x0BD7C81CC004EFD1LL) < (((*g_162) = (safe_div_func_uint16_t_u_u((Tag266(/*int32_t:145522:149380:145350:e*/l_869) ^ (safe_mod_func_int64_t_s_s((Tag267(/*const uint32_t:145430:145522:145350:e*/l_896) , (~(l_853[3] = Tag268(/*const uint32_t:145430:145522:145350:e*/l_896)))), Tag269(/*int32_t:0:0:145350:e*/g_2[0][1][2])))), 65528UL))) == (Tag270(/*int32_t:157108:157108:145350:e*/*p_30))))), Tag271(/*uint32_t:157108:157108:145350:e*/p_29)))) <= 0x3128344D0F8756B9LL) != Tag272(/*int32_t:157108:157108:145350:e*/p_28)) ^ Tag273(/*uint16_t:0:0:145350:e*/g_883[1][5][0])) , p_27)) , (Tag274(/*int32_t:157108:157108:145350:e*/*p_31)));
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
/*aft_stmt:145350*/
                    }
                    l_879[1][1][3] = 1L;
                }
                /*bef_stmt:145518*/
(*g_162) = ((((*g_501) = Tag275(/*int64_t:0:0:145518:e*/g_899)) , l_900) != l_901);
/*aft_stmt:145518*/
            }
            /*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
/*bef_stmt:146074*/
l_879[0][4][0] ^= (((Tag276(/*int32_t:157108:157108:146074:e*/p_28) < Tag277(/*uint32_t:157108:157108:146074:e*/p_29)) , ((Tag278(/*int8_t:157108:157108:146074:e*/p_27) <= Tag279(/*int64_t:0:0:146074:e*/g_899)) >= Tag280(/*int64_t:0:0:146074:e*/g_61[0]))) || (safe_lshift_func_int8_t_s_s(0xCFL, (safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((Tag281(/*int8_t:157108:157108:146074:e*/p_27) && ((((*l_918) = ((safe_mul_func_uint8_t_u_u(255UL, (((safe_mul_func_uint8_t_u_u(Tag282(/*uint16_t:0:0:146074:e*/g_115), Tag283(/*uint32_t:149380:157071:146074:e*/l_857[1]))) , Tag284(/*int32_t:149380:157071:146074:e*/l_878)) > (Tag285(/*uint64_t:0:0:146074:e*/*g_501))))) , Tag286(/*int32_t:157108:157108:146074:e*/p_28))) , (*g_128)) == (void*)0)), Tag287(/*int32_t:149380:157071:146074:e*/l_874))) & 0xE830L), 0L)) && Tag288(/*int32_t:157108:157108:146074:e*/p_28)), 255UL)), Tag289(/*int8_t:157108:157108:146074:e*/p_27))))));
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
/*aft_stmt:146074*/
            for (l_875 = 5; (l_875 >= 0); l_875 -= 1)
            { /* block id: 398 */
                int32_t *l_936 = (void*)0;
                uint32_t l_965[5][1][10] = {{{18446744073709551615UL,18446744073709551615UL,0x9FD98BE8L,1UL,18446744073709551615UL,0x71B1F1ECL,1UL,1UL,0x71B1F1ECL,18446744073709551615UL}},{{18446744073709551615UL,0x1549BDB8L,0x1549BDB8L,18446744073709551615UL,6UL,0x1549BDB8L,1UL,6UL,6UL,1UL}},{{6UL,18446744073709551615UL,0x1549BDB8L,0x1549BDB8L,18446744073709551615UL,6UL,0x1549BDB8L,1UL,6UL,6UL}},{{18446744073709551615UL,1UL,0x9FD98BE8L,18446744073709551615UL,18446744073709551615UL,0x9FD98BE8L,0x1549BDB8L,6UL,18446744073709551615UL,0x1549BDB8L}},{{6UL,0x71B1F1ECL,0x9FD98BE8L,0x1549BDB8L,0x71B1F1ECL,0x71B1F1ECL,0x1549BDB8L,0x9FD98BE8L,0x71B1F1ECL,6UL}}};
                int i, j, k;
                for (g_258 = 1; (g_258 <= 5); g_258 += 1)
                { /* block id: 401 */
                    int32_t *l_937 = &g_75[1][1][6];
                    for (l_863 = 5; (l_863 >= 0); l_863 -= 1)
                    { /* block id: 404 */
                        int i;
                        if (g_384[g_258])
                            break;
                    }
                    for (g_283 = 0; (g_283 <= 5); g_283 += 1)
                    { /* block id: 409 */
                        uint8_t *l_919 = &g_168[1][0][1];
                        uint8_t * const l_932 = &g_933;
                        uint8_t * const *l_931 = &l_932;
                        uint8_t * const **l_930 = &l_931;
                        int16_t *l_935[2][2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_935[i][j] = &l_876;
                        }
                        (***g_664) = p_31;
                        (**l_901) = p_31;
                    }
                    (***g_664) = l_937;
                }
                for (g_163 = 14; (g_163 == (-29)); --g_163)
                { /* block id: 420 */
                    uint32_t l_940 = 0x0A35FB0FL;
                    int8_t *l_948 = (void*)0;
                    int8_t *l_949 = &g_170[0][0][0];
                    uint8_t **l_950 = &l_918;
                    int32_t l_952 = 0xEF59F953L;
                    l_940++;
                    /*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
/*bef_stmt:148574*/
l_952 = (safe_mul_func_uint8_t_u_u((((((*l_950) = func_56((g_73 = ((Tag290(/*int32_t:0:0:148574:e*/g_75[1][1][6]) > ((255UL >= (Tag291(/*int32_t:157108:157108:148574:e*/p_28) , ((((!(((*l_949) &= (0x09L | ((safe_add_func_uint8_t_u_u(((*l_900) != ((Tag292(/*uint8_t:0:0:148574:e*/g_933) != (Tag293(/*uint32_t:148600:149352:148574:e*/l_940) >= Tag294(/*int8_t:157108:157108:148574:e*/p_27))) , &p_30)), Tag295(/*int8_t:157108:157108:148574:e*/p_27))) < Tag296(/*uint32_t:0:0:148574:e*/g_765[2][8])))) && Tag297(/*uint16_t:0:0:148574:e*/g_583))) == Tag298(/*uint32_t:0:0:148574:e*/g_166[6])) & 0xAAL) ^ 18446744073709551610UL))) > Tag299(/*int32_t:0:0:148574:e*/g_75[1][1][6]))) , 0xADL)), Tag300(/*uint32_t:0:0:148574:e*/g_166[6]), Tag301(/*uint32_t:157108:157108:148574:e*/p_29), Tag302(/*int8_t:157108:157108:148574:e*/p_27))) != l_951) > Tag303(/*uint32_t:157108:157108:148574:e*/p_29)) >= Tag304(/*uint32_t:148600:149352:148574:e*/l_940)), Tag305(/*int32_t:157108:157108:148574:e*/p_28)));
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
/*aft_stmt:148574*/
                    /*bef_stmt:148596*/
if ((Tag306(/*int32_t:157108:157108:148596:e*/*p_31)))
                        continue;
/*aft_stmt:148596*/
                }
                /*bef_stmt:148636*/
if (Tag307(/*uint32_t:149380:157071:148636:e*/l_857[1]))
                    break;
/*aft_stmt:148636*/
                for (g_283 = 21; (g_283 > (-4)); g_283 = safe_sub_func_int32_t_s_s(g_283, 3))
                { /* block id: 431 */
                    uint32_t l_955 = 4294967290UL;
                    const uint32_t ****l_959 = &l_958;
                    ++l_955;
                    (*l_959) = l_958;
                    for (g_163 = 3; (g_163 >= 0); g_163 -= 1)
                    { /* block id: 436 */
                        int32_t *l_960 = &g_183;
                        int32_t *l_961 = (void*)0;
                        int32_t *l_962 = &g_182[0];
                        int32_t *l_963 = &l_866[1][1];
                        int32_t *l_964[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_964[i] = &g_75[3][1][6];
                        l_853[0] = l_853[g_163];
                        (**l_901) = p_31;
                        --l_965[0][0][2];
                    }
                    /*bef_stmt:149333*/
if ((Tag308(/*int32_t:157108:157108:149333:e*/*p_30)))
                        break;
/*aft_stmt:149333*/
                }
            }
            /*bef_stmt:149376*/
if (Tag309(/*int32_t:157108:157108:149376:e*/l_862))
                break;
/*aft_stmt:149376*/
        }
        else
        { /* block id: 445 */
            int32_t l_991[3];
            uint8_t **l_1026 = &l_951;
            uint8_t ***l_1025[8];
            int32_t l_1065[2][7][3] = {{{(-10L),9L,(-10L)},{0x49B2F903L,(-1L),0x49B2F903L},{(-10L),9L,(-10L)},{0x49B2F903L,(-1L),0x49B2F903L},{(-10L),9L,(-10L)},{0x49B2F903L,(-1L),0x49B2F903L},{(-10L),9L,(-10L)}},{{0x49B2F903L,(-1L),0x49B2F903L},{(-10L),9L,(-10L)},{0x49B2F903L,(-1L),0x49B2F903L},{(-10L),9L,(-10L)},{0x49B2F903L,(-1L),0x49B2F903L},{(-10L),9L,(-10L)},{0x49B2F903L,(-1L),0x49B2F903L}}};
            int64_t l_1110 = 0x024AAE7895879FC4LL;
            uint32_t l_1120[3][2][6] = {{{1UL,0x2F522477L,0xF23F5DF3L,1UL,0x930AACADL,1UL},{0xF23F5DF3L,1UL,0xF23F5DF3L,18446744073709551606UL,3UL,0x7D43E3B4L}},{{1UL,18446744073709551606UL,1UL,18446744073709551611UL,0x33DC2644L,0x33DC2644L},{18446744073709551611UL,0x33DC2644L,0x33DC2644L,18446744073709551611UL,1UL,18446744073709551606UL}},{{1UL,0x7D43E3B4L,3UL,18446744073709551606UL,0xF23F5DF3L,1UL},{0xF23F5DF3L,1UL,0x930AACADL,1UL,0xF23F5DF3L,0x2F522477L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_991[i] = 0x8FC20E24L;
            for (i = 0; i < 8; i++)
                l_1025[i] = &l_1026;
            /*bef_stmt:152802*/
/*bef_stmt:152802*/
if ((Tag310(/*int32_t:157071:157108:152802:e*/l_853[2]) ^ Tag311(/*int64_t:157108:157108:152802:e*/l_860)))
            { /* block id: 446 */
                uint32_t l_972 = 0xCA7E0DE6L;
                int32_t l_998 = 0x1BD6F7AFL;
                /*bef_stmt:151450*/
if ((Tag312(/*int32_t:157108:157108:151450:e*/*p_31)))
                    break;
/*aft_stmt:151450*/
                /*bef_stmt:152662*/
/*bef_stmt:152662*/
/*bef_stmt:152662*/
/*bef_stmt:152662*/
if ((Tag313(/*int32_t:157108:157108:152662:e*/l_866[5][2]) , (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(Tag314(/*uint32_t:152687:156072:152662:e*/l_972), Tag315(/*int8_t:157108:157108:152662:e*/p_27))) , Tag316(/*int64_t:0:0:152662:e*/g_61[0])), 7))))
                { /* block id: 448 */
                    l_853[3] = (&g_933 != (void*)0);
                }
                else
                { /* block id: 450 */
                    l_973 = &g_455;
                    /*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
/*bef_stmt:152652*/
(*g_162) &= (safe_add_func_uint64_t_u_u(0UL, (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_170[0][0][0] = (((((((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((!((safe_div_func_int16_t_s_s((Tag317(/*int32_t:156072:157071:152652:e*/l_991[1]) > ((*l_891)++)), (l_998 &= (safe_mul_func_uint16_t_u_u(Tag318(/*int32_t:157071:157108:152652:e*/l_853[3]), (safe_mod_func_int8_t_s_s(Tag319(/*uint32_t:157108:157108:152652:e*/p_29), 252UL))))))) == ((Tag320(/*uint16_t:0:0:152652:e*/g_883[8][1][0]) <= (-4L)) ^ ((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(1L)) ^ ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((Tag321(/*int8_t:157108:157108:152652:e*/p_27) == Tag322(/*uint32_t:0:0:152652:e*/g_765[1][6])), Tag323(/*int8_t:157108:157108:152652:e*/p_27))), Tag324(/*int8_t:157108:157108:152652:e*/p_27))) != Tag325(/*uint8_t:0:0:152652:e*/g_168[0][6][0]))), Tag326(/*int32_t:157108:157108:152652:e*/p_28))), Tag327(/*uint32_t:157108:157108:152652:e*/p_29))) , Tag328(/*uint32_t:0:0:152652:e*/g_166[6]))))), Tag329(/*uint32_t:157108:157108:152652:e*/p_29))) , Tag330(/*int32_t:0:0:152652:e*/g_75[7][1][3])), 3)), 1)), Tag331(/*int64_t:0:0:152652:e*/g_61[0]))) & 0xC48E79E0L) >= Tag332(/*int32_t:157108:157108:152652:e*/p_28)) ^ Tag333(/*int32_t:156072:157071:152652:e*/l_991[2])) , (Tag334(/*int32_t:157108:157108:152652:e*/*p_30))) | 1L) , Tag335(/*uint32_t:152687:156072:152652:e*/l_972))), Tag336(/*int32_t:0:0:152652:e*/g_75[2][1][5]))), 0x6EE5L))));
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
/*aft_stmt:152652*/
                }
/*aft_stmt:152662*/
/*aft_stmt:152662*/
/*aft_stmt:152662*/
/*aft_stmt:152662*/
                return (*g_128);
            }
            else
            { /* block id: 458 */
                for (p_28 = 0; (p_28 <= (-27)); p_28 = safe_sub_func_int32_t_s_s(p_28, 1))
                { /* block id: 461 */
                    return (**g_665);
                }
            }
/*aft_stmt:152802*/
/*aft_stmt:152802*/
            /*bef_stmt:153826*/
if ((Tag337(/*int32_t:157108:157108:153826:e*/*p_30)))
            { /* block id: 465 */
                return (***g_664);
            }
            else
            { /* block id: 467 */
                int32_t *l_1010[8] = {&l_866[4][2],&l_853[1],&l_866[4][2],&l_866[4][2],&l_853[1],&l_866[4][2],&l_866[4][2],&l_853[1]};
                int16_t *l_1027 = &g_283;
                int16_t l_1028 = 1L;
                int i;
                (**g_665) = (void*)0;
                (***g_664) = l_1010[2];
                /*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
/*bef_stmt:153813*/
(*g_162) = ((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(Tag338(/*int8_t:157108:157108:153813:e*/p_27), 7)), (((safe_div_func_int8_t_s_s((Tag339(/*int32_t:157108:157108:153813:e*/p_28) || (safe_add_func_int16_t_s_s(0x4AF7L, Tag340(/*int32_t:156072:157071:153813:e*/l_991[1])))), ((Tag341(/*int32_t:0:0:153813:e*/g_1019) , Tag342(/*int32_t:0:0:153813:e*/g_182[0])) & (2UL || ((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((*l_1027) = ((((((Tag343(/*uint8_t:157108:157108:153813:e*/l_1024[1]) != ((void*)0 == l_1025[1])) || 1UL) & 0x5AL) , Tag344(/*int32_t:156072:157071:153813:e*/l_991[1])) == Tag345(/*int8_t:157108:157108:153813:e*/p_27)) > Tag346(/*int32_t:156072:157071:153813:e*/l_991[1]))), 0xC2F5L)), Tag347(/*uint32_t:157108:157108:153813:e*/p_29))) , Tag348(/*int16_t:153817:156072:153813:e*/l_1028)))))) || Tag349(/*uint32_t:157108:157108:153813:e*/p_29)) | Tag350(/*uint32_t:157108:157108:153813:e*/p_29)))) && Tag351(/*int32_t:157071:157108:153813:e*/l_853[2]));
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
/*aft_stmt:153813*/
            }
/*aft_stmt:153826*/
            for (g_115 = 1; (g_115 == 30); g_115++)
            { /* block id: 475 */
                int32_t *** const *l_1068 = &l_900;
                int32_t ****l_1070 = &l_901;
                int16_t *l_1081 = &g_283;
                int32_t l_1113 = (-1L);
                int32_t l_1114 = 0x700DE610L;
                int32_t l_1115 = 0xA6079DC0L;
                int32_t l_1116 = 0x5D10FC07L;
                int32_t l_1118 = (-1L);
                uint16_t *** const *l_1162 = &g_731;
                uint8_t **l_1186 = &l_951;
                uint32_t l_1189 = 0x98669A50L;
                int32_t l_1244 = 0x17271F18L;
                int32_t l_1246 = 1L;
                int32_t l_1247[8][4] = {{0xD15423C0L,0x21CE2EB8L,0x21CE2EB8L,0xD15423C0L},{(-10L),0x21CE2EB8L,(-10L),0x21CE2EB8L},{0x21CE2EB8L,1L,(-10L),(-10L)},{(-10L),(-10L),0x21CE2EB8L,(-10L)},{0xD15423C0L,1L,0xD15423C0L,0x21CE2EB8L},{0xD15423C0L,0x21CE2EB8L,0x21CE2EB8L,0xD15423C0L},{(-10L),0x21CE2EB8L,(-10L),0x21CE2EB8L},{0x21CE2EB8L,1L,(-10L),(-10L)}};
                uint64_t l_1251 = 0xE4C0945B5DACDF07LL;
                int i, j;
                for (g_299 = 0; (g_299 <= 51); g_299 = safe_add_func_uint16_t_u_u(g_299, 9))
                { /* block id: 478 */
                    int64_t l_1061 = 0xC8B1582DBC3FD37BLL;
                    uint32_t *l_1062 = (void*)0;
                    uint32_t *l_1063 = &g_1064;
                    (***g_664) = l_1033;
                    for (g_163 = 14; (g_163 > 3); --g_163)
                    { /* block id: 482 */
                        return (***g_664);
                    }
                    /*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
/*bef_stmt:155992*/
(*g_162) ^= (safe_add_func_uint16_t_u_u(((((*l_1063) = (safe_rshift_func_uint16_t_u_s((((safe_div_func_uint8_t_u_u(Tag352(/*uint32_t:0:0:155992:e*/g_166[4]), (++(**l_1026)))) != 0xCF14E8B199603866LL) > Tag353(/*const int32_t:0:0:155992:e*/g_95)), (safe_unary_minus_func_int64_t_s((((l_991[0] = (safe_sub_func_uint16_t_u_u((((((((0xE82ED8E037AA64FFLL <= 8L) , (safe_sub_func_int8_t_s_s(Tag354(/*int32_t:156072:157071:155992:e*/l_991[2]), (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((((((void*)0 != l_1057) | ((safe_lshift_func_int8_t_s_u((!0xFF07L), Tag355(/*int64_t:156009:156024:155992:e*/l_1061))) <= 4UL)) != Tag356(/*int32_t:157108:157108:155992:e*/p_28)) != Tag357(/*int32_t:157108:157108:155992:e*/p_28)), 9)) < Tag358(/*int8_t:157108:157108:155992:e*/p_27)) | (-7L)), 8)), Tag359(/*int8_t:157108:157108:155992:e*/p_27)))))) ^ 8UL) , Tag360(/*int32_t:156072:157071:155992:e*/l_991[2])) , (void*)0) != (void*)0) , Tag361(/*uint32_t:157108:157108:155992:e*/p_29)), Tag362(/*int8_t:157108:157108:155992:e*/p_27)))) && Tag363(/*int32_t:157108:157108:155992:e*/p_28)) && 4294967294UL)))))) , (void*)0) != (void*)0), Tag364(/*int32_t:156072:157071:155992:e*/l_1065[1][0][0])));
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
/*aft_stmt:155992*/
                }
            }
            /*bef_stmt:156068*/
if ((Tag365(/*int32_t:157108:157108:156068:e*/*p_31)))
                break;
/*aft_stmt:156068*/
        }
/*aft_stmt:156087*/
        p_31 = ((***g_664) = p_30);
        /*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
/*bef_stmt:157065*/
(*l_1300) ^= ((*g_162) ^= (safe_rshift_func_int16_t_s_u(Tag366(/*uint64_t:157071:157108:157065:e*/l_1277), ((((((safe_add_func_int8_t_s_s((0L == (!((((Tag367(/*int8_t:157108:157108:157065:e*/p_27) || ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((Tag368(/*int32_t:157108:157108:157065:e*/p_28) , (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((Tag369(/*uint16_t:0:0:157065:e*/g_115) <= (safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(Tag370(/*uint8_t:157108:157108:157065:e*/l_1293), ((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((((*l_891) = (((void*)0 != &p_27) || (((((*l_951) |= 255UL) <= (Tag371(/*int32_t:157071:157108:157065:e*/*l_1125))) , Tag372(/*int32_t:157108:157108:157065:e*/p_28)) | (-4L)))) < Tag373(/*int32_t:157108:157108:157065:e*/p_28)) >= Tag374(/*uint32_t:157108:157108:157065:e*/p_29)), 5UL)), 0xCA218174L)) && (Tag375(/*int32_t:157108:157108:157065:e*/***l_900))))) , &g_814) != l_958), 7))), Tag376(/*int8_t:157108:157108:157065:e*/l_1298[0]))) || 0x1FDFL), 2))), 4L)), Tag377(/*uint16_t:0:0:157065:e*/g_883[6][5][0]))) && 0UL)) && (Tag378(/*int32_t:157108:157108:157065:e*/*p_31))) && (Tag379(/*int32_t:157071:157108:157065:e*/***l_901))) , 0x1D692E3DL))), (Tag380(/*int32_t:157071:157108:157065:e*/***l_901)))) >= Tag381(/*uint16_t:0:0:157065:e*/g_583)) , (void*)0) != &l_973) , Tag382(/*int8_t:157108:157108:157065:e*/p_27)) != Tag383(/*uint16_t:157108:157108:157065:e*/l_1299)))));
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
/*aft_stmt:157065*/
    }
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : g_500 g_168 g_85 g_162 g_163 g_95 g_2 g_73 g_75 g_128 g_115 g_129 g_153 g_166 g_61 g_182 g_299 g_283 g_170 g_258 g_384 g_183
 * writes: g_183 g_163 g_85 g_115 g_75 g_73 g_166 g_129 g_182 g_61 g_282 g_299 g_168 g_170 g_384
 */
static uint16_t  func_35(const int32_t  p_36, int32_t  p_37)
{ /* block id: 221 */
    uint16_t l_506 = 1UL;
    uint64_t *l_510 = &g_153;
    uint8_t l_537[7];
    uint16_t l_557 = 0x9745L;
    int64_t l_559 = 0x15079872058FC540LL;
    int16_t *l_586 = &g_283;
    int32_t *l_600 = &g_183;
    int32_t l_607[6] = {0L,0L,0L,0L,0L,0L};
    uint16_t *l_655 = &l_557;
    int16_t l_723 = 0x0F2FL;
    uint8_t *l_826 = (void*)0;
    uint8_t **l_825[1];
    int i;
    for (i = 0; i < 7; i++)
        l_537[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_825[i] = &l_826;
    for (p_37 = 0; (p_37 >= (-29)); p_37 = safe_sub_func_uint16_t_u_u(p_37, 1))
    { /* block id: 224 */
        int8_t l_508 = 1L;
        int32_t l_512 = 0x235DECE6L;
        uint32_t *l_526 = &g_166[6];
        uint16_t *l_531 = &g_85[0][2];
        int32_t * const *l_578 = &g_129;
        int32_t * const **l_577 = &l_578;
        int32_t * const ***l_576[6];
        uint8_t *l_582 = (void*)0;
        uint32_t l_611 = 4294967294UL;
        int32_t *l_652 = &g_182[0];
        const uint32_t l_676 = 2UL;
        int64_t *l_690[5][5][6] = {{{&g_61[0],(void*)0,&g_61[0],&l_559,(void*)0,&g_61[0]},{&l_559,(void*)0,&g_61[0],&g_258,&l_559,&l_559},{(void*)0,&g_258,&g_61[0],&g_61[0],&g_61[0],&g_61[0]},{&g_61[0],&g_61[0],&g_61[0],&g_258,(void*)0,&l_559},{&l_559,&g_258,&g_61[0],(void*)0,&l_559,&g_61[0]}},{{(void*)0,&l_559,&g_61[0],(void*)0,&g_61[0],&l_559},{&g_61[0],(void*)0,&g_61[0],&l_559,(void*)0,&g_61[0]},{&l_559,(void*)0,&g_61[0],&g_258,&l_559,&l_559},{(void*)0,&g_258,&g_61[0],&g_61[0],&g_61[0],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_258,&g_61[0]}},{{&g_61[0],&g_61[0],(void*)0,&g_258,&g_61[0],(void*)0},{&g_258,&g_61[0],(void*)0,&g_258,(void*)0,&g_61[0]},{(void*)0,&g_258,(void*)0,&g_61[0],&g_258,(void*)0},{&g_61[0],&g_258,(void*)0,&g_61[0],&g_61[0],&g_61[0]},{&g_258,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_258,&g_61[0]},{&g_61[0],&g_61[0],(void*)0,&g_258,&g_61[0],(void*)0},{&g_258,&g_61[0],(void*)0,&g_258,(void*)0,&g_61[0]},{(void*)0,&g_258,(void*)0,&g_61[0],&g_258,(void*)0},{&g_61[0],&g_258,(void*)0,&g_61[0],&g_61[0],&g_61[0]}},{{&g_258,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_258,&g_61[0]},{&g_61[0],&g_61[0],(void*)0,&g_258,&g_61[0],(void*)0},{&g_258,&g_61[0],(void*)0,&g_258,(void*)0,&g_61[0]},{(void*)0,&g_258,(void*)0,&g_61[0],&g_258,(void*)0}}};
        uint32_t l_737[1];
        const uint16_t l_748[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
        int16_t * const *l_761 = &l_586;
        int32_t l_844 = 0x40804E56L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_576[i] = &l_577;
        for (i = 0; i < 1; i++)
            l_737[i] = 0xC6F13C67L;
        /*bef_stmt:161892*/
if (/*TAG384:STA*/((int32_t)(realsmith_proxy_mPMiq((char)(p_36)+(-70))+(int)(p_36)+(int)(g_883[6][5][0])+(int)(g_115)-(1871543131))+p_36)/*TAG384:END:p_36*/)
            break;
/*aft_stmt:161892*/
        for (g_183 = (-16); (g_183 < (-2)); g_183 = safe_add_func_int8_t_s_s(g_183, 8))
        { /* block id: 228 */
            const int8_t l_502 = 0xBEL;
            int16_t *l_503 = &g_283;
            int16_t l_507 = 0L;
            uint64_t *l_509 = &g_153;
            int64_t *l_511[2][6] = {{&g_61[0],&g_61[0],&g_61[0],&g_258,&g_61[0],&g_61[0]},{&g_61[0],&g_61[0],&g_258,&g_258,&g_61[0],&g_61[0]}};
            int32_t l_513 = 1L;
            uint8_t *l_514[3][4] = {{&g_168[4][1][0],&g_168[0][4][1],&g_168[4][1][0],&g_168[0][4][1]},{&g_168[4][1][0],&g_168[0][4][1],&g_168[4][1][0],&g_168[0][4][1]},{&g_168[4][1][0],&g_168[0][4][1],&g_168[4][1][0],&g_168[0][4][1]}};
            int32_t *l_515 = &l_512;
            int i, j;
            /*bef_stmt:163548*/
/*bef_stmt:163548*/
/*bef_stmt:163548*/
/*bef_stmt:163548*/
/*bef_stmt:163548*/
/*bef_stmt:163548*/
/*bef_stmt:163548*/
(*g_162) = ((((((void*)0 != g_500[8]) < Tag385(/*const int8_t:163821:163847:163548:e*/l_502)) , (((void*)0 == l_503) , 1UL)) , (safe_div_func_int8_t_s_s(Tag386(/*uint8_t:0:0:163548:e*/g_168[0][4][1]), ((((Tag387(/*uint16_t:0:0:163548:e*/g_85[5][0]) != (((((-5L) | Tag388(/*uint16_t:163899:163899:163548:e*/l_506)) , 0L) | p_37) == Tag389(/*int16_t:163821:163847:163548:e*/l_507))) ^ Tag390(/*int8_t:163847:163899:163548:e*/l_508)) == 0x05F1L) & Tag391(/*uint16_t:163899:163899:163548:e*/l_506))))) & 0x3DL);
/*aft_stmt:163548*/
/*aft_stmt:163548*/
/*aft_stmt:163548*/
/*aft_stmt:163548*/
/*aft_stmt:163548*/
/*aft_stmt:163548*/
/*aft_stmt:163548*/
            /*bef_stmt:163598*/
(*g_162) &= Tag392(/*uint16_t:163899:163899:163598:e*/l_506);
/*aft_stmt:163598*/
            /*bef_stmt:163817*/
/*bef_stmt:163817*/
/*bef_stmt:163817*/
/*bef_stmt:163817*/
l_515 = func_50((((l_509 == l_510) != (l_512 = Tag393(/*int16_t:163821:163847:163817:e*/l_507))) & (l_513 = (Tag394(/*int32_t:0:0:163817:e*/*g_162)))), Tag395(/*uint8_t:0:0:163817:e*/g_168[1][6][2]), l_514[2][3], Tag396(/*uint16_t:163899:163899:163817:e*/l_506), &p_37);
/*aft_stmt:163817*/
/*aft_stmt:163817*/
/*aft_stmt:163817*/
/*aft_stmt:163817*/
        }
    }
    /*bef_stmt:163897*/
return (Tag397(/*int32_t:163899:163899:163897:e*/*l_600));
/*aft_stmt:163897*/
}


/* ------------------------------------------ */
/* 
 * reads : g_283 g_153 g_258 g_183 g_61 g_162 g_455 g_456
 * writes: g_283 g_153 g_258 g_183 g_163 g_457
 */
static int8_t  func_42(uint8_t * p_43)
{ /* block id: 184 */
    const int64_t l_459 = 1L;
    int32_t l_488 = 1L;
    int32_t l_490 = (-4L);
    int32_t l_491 = 0x39D1DE24L;
    int32_t l_492[7] = {0x363FEBE1L,0x363FEBE1L,0x363FEBE1L,0x363FEBE1L,0x363FEBE1L,0x363FEBE1L,0x363FEBE1L};
    int i;
    for (g_283 = 0; (g_283 > (-25)); g_283--)
    { /* block id: 187 */
        uint16_t l_473 = 65535UL;
        int32_t l_484 = (-6L);
        int32_t l_489[3][7];
        uint32_t l_493[3];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_489[i][j] = (-1L);
        }
        for (i = 0; i < 3; i++)
            l_493[i] = 4294967295UL;
        for (g_153 = 9; (g_153 >= 23); g_153 = safe_add_func_int32_t_s_s(g_153, 8))
        { /* block id: 190 */
            uint32_t l_444 = 7UL;
            /*bef_stmt:164767*/
return Tag398(/*uint32_t:164769:165673:164767:e*/l_444);
/*aft_stmt:164767*/
        }
        for (g_258 = (-18); (g_258 > 5); g_258 = safe_add_func_int8_t_s_s(g_258, 6))
        { /* block id: 195 */
            int32_t ***l_453 = &g_128;
            const int32_t *l_469 = (void*)0;
            int32_t *l_472 = &g_2[0][1][7];
            int32_t l_476[3];
            int32_t *l_485 = &g_183;
            int32_t *l_486 = &g_163;
            int32_t *l_487[3];
            int i;
            for (i = 0; i < 3; i++)
                l_476[i] = (-8L);
            for (i = 0; i < 3; i++)
                l_487[i] = &l_484;
            for (g_183 = (-10); (g_183 != (-10)); g_183 = safe_add_func_uint8_t_u_u(g_183, 4))
            { /* block id: 198 */
                int32_t ****l_454 = &l_453;
                int32_t *l_458 = &g_182[0];
                uint32_t *l_471 = &g_299;
                uint64_t *l_474 = &g_153;
                int32_t *l_475 = &g_75[4][1][4];
            }
            /*bef_stmt:165589*/
(*g_162) = ((!0xB3F1L) || Tag399(/*int64_t:0:0:165589:e*/g_61[0]));
/*aft_stmt:165589*/
            (**g_455) = (void*)0;
            l_493[2]--;
        }
    }
    /*bef_stmt:165701*/
return /*TAG400:STA*/((int32_t)(realsmith_proxy_IDsH8((int)(g_168[0][4][1])+(-20))+(int)(l_488)+(int)(g_168[1][6][2])+(int)(g_168[0][4][1])+(int)(g_85[5][0])+(int)(g_61[0])-(27))+l_488)/*TAG400:END:l_488*/;
/*aft_stmt:165701*/
}


/* ------------------------------------------ */
/* 
 * reads : g_2 g_162 g_163 g_153 g_61 g_170 g_183 g_283 g_182 g_128 g_129
 * writes: g_153 g_163 g_183 g_283 g_129
 */
static uint8_t * func_44(int32_t * p_45, int32_t  p_46, uint64_t  p_47, uint8_t * p_48, const int32_t  p_49)
{ /* block id: 167 */
    int32_t ***l_393 = &g_128;
    int32_t ****l_392 = &l_393;
    uint32_t l_398 = 0x78D0693FL;
    uint64_t *l_399 = &g_153;
    const uint64_t l_405 = 1UL;
    int32_t l_406 = (-1L);
    int32_t l_411 = 0x4B2C0DC7L;
    int32_t l_419[3][7][6] = {{{0L,(-1L),0x5D8BC06AL,(-5L),0x1B483CCCL,0x61AAD270L},{0xF1F6D6D7L,4L,0x82FCC29AL,(-1L),0xD3411EFAL,0xBDA1194DL},{3L,0xEF6DBF57L,(-1L),0x014387A0L,(-1L),0xEF6DBF57L},{(-5L),0xD3411EFAL,(-8L),0x73E6FE5EL,0x014387A0L,3L},{(-6L),0x875B53FBL,0x509365B0L,0x2D98B7E4L,0xBDA1194DL,0x82FCC29AL},{0xEFF4B9BCL,0x875B53FBL,0xF1F6D6D7L,0x64D22286L,0x014387A0L,0xC92716D8L},{0x9DF9C07CL,0xD3411EFAL,4L,0x5D8BC06AL,(-1L),0L}},{{0x360130F0L,0xEF6DBF57L,0xBC6D5916L,(-1L),0xD3411EFAL,0L},{0L,4L,(-7L),0xC92716D8L,0x1B483CCCL,(-1L)},{(-7L),0x2E189DCDL,3L,0x82FCC29AL,0xFED35E99L,0x360130F0L},{(-1L),(-1L),(-6L),0x9F545B23L,0x9AE99722L,0x894E31E6L},{1L,(-6L),0x73E6FE5EL,0x73E6FE5EL,(-6L),1L},{(-9L),0xBDA1194DL,(-7L),(-7L),0x014387A0L,0xAEE74936L},{0x82FCC29AL,0x1B483CCCL,(-7L),0xD899956FL,(-8L),0xEF6DBF57L}},{{0x82FCC29AL,0x509365B0L,0xD899956FL,(-7L),(-5L),0x64D22286L},{(-9L),0x014387A0L,0x2D98B7E4L,0x73E6FE5EL,0x9DF9C07CL,1L},{1L,0xAE7ECF55L,0x014387A0L,0x9F545B23L,3L,(-1L)},{(-1L),(-9L),(-9L),0x82FCC29AL,0xBDA1194DL,0x2D98B7E4L},{(-7L),0x894E31E6L,0x509365B0L,0x014387A0L,(-1L),(-5L)},{(-1L),0L,(-1L),(-7L),(-6L),0xBDA1194DL},{0x509365B0L,0L,(-1L),0L,0x509365B0L,(-5L)}}};
    uint32_t l_434 = 0xE3621BBAL;
    int i, j, k;
    /*bef_stmt:168571*/
/*bef_stmt:168571*/
/*bef_stmt:168571*/
/*bef_stmt:168571*/
/*bef_stmt:168571*/
/*bef_stmt:168571*/
/*bef_stmt:168571*/
/*bef_stmt:168571*/
(*g_162) = (safe_lshift_func_uint16_t_u_u((((void*)0 == l_392) | (Tag401(/*int32_t:0:0:168571:e*/g_2[0][1][5]) & (((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((0L & /*TAG402:STA*/((uint32_t)(realsmith_hHJP4((int)(g_85[5][0])+(90))+(int)(l_398)+(int)(g_61[0])+(int)(g_168[1][6][2])+(int)(g_85[5][0])-(2026924354))+l_398)/*TAG402:END:l_398*/), (((Tag403(/*int32_t:0:0:168571:e*/*g_162)) ^ (/*TAG404:STA*/((int32_t)(realsmith_QAo7d((int)(g_168[1][6][2])+(29))+(int)(p_49)+(int)(g_168[1][6][2])+(int)(g_61[0])+(int)(g_85[5][0])-(18))+p_49)/*TAG404:END:p_49*/ < (++(*l_399)))) | (safe_add_func_uint64_t_u_u((~/*TAG405:STA*/((uint64_t)(realsmith_lGuvE((int)(p_49)+(2), (int)(p_49)+(46))+(unsigned int)(l_405)+(unsigned int)(g_85[5][0])+(unsigned int)(g_168[1][6][2])+(unsigned int)(g_61[0])+(unsigned int)(p_49)-(63))+l_405)/*TAG405:END:l_405*/), (/*TAG406:STA*/((int32_t)(realsmith_proxy_47Exw((char)(p_49)+(-3), (unsigned long)(g_61[0])+(2), (long)(p_49)+(-3))+(int)(l_406)+(int)(p_49)+(int)(g_168[0][4][1])+(int)(g_61[0])+(int)(l_405)-(29))+l_406)/*TAG406:END:l_406*/ , 1L)))))), /*TAG407:STA*/((int64_t)(realsmith_B8Jln((int)(g_85[5][0])+(44), (int)(g_61[0])+(90))+(int)(g_61[0])+(int)(g_168[1][6][2])+(int)(g_85[5][0])-(4))+g_61[0])/*TAG407:END:g_61[0]*/)) , /*TAG408:STA*/((int8_t)(realsmith_proxy_nsLw0((unsigned int)(g_168[1][6][2])+(40), (unsigned int)(g_170[0][0][0])+(74), (unsigned int)(g_61[0])+(65), (unsigned int)(g_61[0])+(-28))+(unsigned int)(g_170[0][0][0])+(unsigned int)(g_61[0])+(unsigned int)(g_168[1][6][2])-(9))+g_170[0][0][0])/*TAG408:END:g_170[0][0][0]*/) || 0x206B51639882173ALL))), 3));
/*aft_stmt:168571*/
/*aft_stmt:168571*/
/*aft_stmt:168571*/
/*aft_stmt:168571*/
/*aft_stmt:168571*/
/*aft_stmt:168571*/
/*aft_stmt:168571*/
/*aft_stmt:168571*/
    for (g_183 = 0; (g_183 <= (-17)); g_183 = safe_sub_func_uint32_t_u_u(g_183, 7))
    { /* block id: 172 */
        int16_t l_426 = 0x71B0L;
        int8_t l_427 = 0xB5L;
        int32_t l_428 = 3L;
        int32_t l_429 = 0L;
        int32_t l_431 = 1L;
        int32_t l_432 = 1L;
        int32_t l_433[10][10] = {{0L,4L,0xA9ECE526L,0x3E9F32EDL,0x3E9F32EDL,0xA9ECE526L,4L,0L,0L,4L},{0L,0x3E9F32EDL,4L,4L,0x3E9F32EDL,0L,0xA9ECE526L,0xA9ECE526L,0L,0x3E9F32EDL},{0x3E9F32EDL,4L,4L,0x3E9F32EDL,0L,0xA9ECE526L,0xA9ECE526L,0L,0x3E9F32EDL,4L},{0x3E9F32EDL,0x3E9F32EDL,0xA9ECE526L,4L,0L,0L,4L,0xA9ECE526L,0x3E9F32EDL,0x3E9F32EDL},{0L,4L,0xA9ECE526L,0x3E9F32EDL,0x3E9F32EDL,0xA9ECE526L,4L,0L,0L,4L},{0L,0x3E9F32EDL,4L,4L,0x3E9F32EDL,0L,0xA9ECE526L,0xA9ECE526L,0L,0x3E9F32EDL},{0x3E9F32EDL,4L,4L,0x3E9F32EDL,0L,0xA9ECE526L,0xA9ECE526L,0L,0x3E9F32EDL,4L},{0x3E9F32EDL,0x3E9F32EDL,0xA9ECE526L,4L,0L,0L,4L,0xA9ECE526L,0x3E9F32EDL,0x3E9F32EDL},{0L,4L,0xA9ECE526L,0x3E9F32EDL,0x3E9F32EDL,0xA9ECE526L,4L,0L,0L,4L},{0L,0x3E9F32EDL,4L,4L,0x3E9F32EDL,0L,0xA9ECE526L,0xA9ECE526L,0L,0x3E9F32EDL}};
        uint16_t l_437 = 65535UL;
        int i, j;
        for (g_283 = 0; (g_283 >= (-26)); g_283 = safe_sub_func_uint8_t_u_u(g_283, 9))
        { /* block id: 175 */
            int32_t *l_412 = &g_182[0];
            int32_t *l_413 = &g_182[0];
            int32_t l_414 = 0x7600F694L;
            int32_t *l_415 = &g_163;
            int32_t *l_416 = &l_411;
            int32_t *l_417 = &l_414;
            int32_t *l_418 = &g_163;
            int32_t *l_420 = &g_75[1][1][6];
            int32_t *l_421 = &g_163;
            int32_t *l_422 = &g_163;
            int32_t *l_423 = &l_411;
            int32_t *l_424 = &g_163;
            int32_t *l_425[3];
            int32_t l_430 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_425[i] = &l_419[0][4][2];
            --l_434;
            /*bef_stmt:170836*/
(*l_415) &= ((l_433[9][4] = (Tag409(/*int32_t:170849:170912:170836:e*/*l_412))) != (&p_47 == &p_47));
/*aft_stmt:170836*/
            --l_437;
        }
        (*g_128) = (*g_128);
    }
    return &g_73;
}


/* ------------------------------------------ */
/* 
 * reads : g_95 g_2 g_73 g_75 g_128 g_85 g_115 g_129 g_153 g_166 g_162 g_163 g_61 g_182 g_168 g_299 g_283 g_170 g_258 g_384
 * writes: g_85 g_115 g_75 g_73 g_166 g_163 g_129 g_182 g_61 g_282 g_299 g_168 g_170 g_384
 */
static int32_t * func_50(const uint8_t  p_51, int32_t  p_52, uint8_t * p_53, int32_t  p_54, int32_t * p_55)
{ /* block id: 42 */
    uint16_t *l_113 = &g_85[0][0];
    uint16_t *l_114 = &g_115;
    int32_t *l_120 = &g_75[1][0][1];
    int32_t l_121 = 3L;
    int32_t *l_122[6];
    int16_t l_123 = 0x6F1EL;
    uint32_t l_206 = 1UL;
    int64_t *l_233 = &g_61[0];
    const uint8_t *l_247 = &g_73;
    uint32_t l_274[7] = {18446744073709551606UL,0x8000DD47L,18446744073709551606UL,18446744073709551606UL,0x8000DD47L,18446744073709551606UL,18446744073709551606UL};
    int16_t l_304 = 0L;
    int32_t ***l_328 = &g_128;
    uint32_t l_344 = 4294967291UL;
    int i;
    for (i = 0; i < 6; i++)
        l_122[i] = &l_121;
    /*bef_stmt:172088*/
/*bef_stmt:172088*/
/*bef_stmt:172088*/
/*bef_stmt:172088*/
/*bef_stmt:172088*/
/*bef_stmt:172088*/
/*bef_stmt:172088*/
l_123 = (safe_mod_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s((0x7BL != /*TAG410:STA*/((int32_t)(realsmith_025OB((int)(g_95)+(607708335), (int)(g_170[0][0][0])+(28))+(int)(g_95)+(int)(g_61[0])+(int)(g_168[1][6][2])+(int)(g_170[0][0][0])-(-607708311))+g_95)/*TAG410:END:g_95*/), 1)) && (safe_rshift_func_int16_t_s_u(/*TAG411:STA*/((int32_t)(realsmith_Om63u((int)(g_61[0])+(42), (long)(g_2[0][0][8])+(1984608757))+(int)(g_2[0][0][8])+(int)(g_170[0][0][0])+(int)(g_168[1][6][2])+(int)(g_61[0])+((int)(g_95)-(-607708327))-(-1984608739))+g_2[0][0][8])/*TAG411:END:g_2[0][0][8]*/, ((*l_114) = ((*l_113) = Tag412(/*uint8_t:0:0:172088:e*/g_73)))))) >= (safe_mod_func_uint64_t_u_u(0x84420CA5725C8E5CLL, ((safe_mod_func_uint8_t_u_u((((*l_120) &= (/*TAG413:STA*/((int32_t)(realsmith_fZj1Z((int)(g_61[0])+(90))+(int)(g_2[0][1][2])+(int)(g_61[0])+(int)(g_95)+(int)(g_168[1][6][2])-(-607708327))+g_2[0][1][2])/*TAG413:END:g_2[0][1][2]*/ , 0xC4CB544DL)) <= (-1L)), /*TAG414:STA*/((int32_t)(realsmith_XiUdN((long)(g_168[1][6][2])+(69))+(int)(l_121)+(int)(g_168[1][6][2])+(int)(g_2[0][1][2])+(int)(g_2[0][0][8])+(int)(g_170[0][0][0])-(-1984608737))+l_121)/*TAG414:END:l_121*/)) , (/*TAG415:STA*/((int32_t)(realsmith_XqxGA((int)(*l_120)+(3))+(int)(*l_120)+(int)(g_168[1][6][2])+(int)(g_170[0][0][0])+(int)(g_95)+(int)(l_121)-(-607708316))+*l_120)/*TAG415:END:*l_120*/))))), Tag416(/*int32_t:190137:190137:172088:e*/p_54)));
/*aft_stmt:172088*/
/*aft_stmt:172088*/
/*aft_stmt:172088*/
/*aft_stmt:172088*/
/*aft_stmt:172088*/
/*aft_stmt:172088*/
/*aft_stmt:172088*/
/*bef_stmt:172159*/
lbl_203:
    (*l_120) &= ((0x0C381FEC7F1FF5BALL > Tag417(/*const uint8_t:190137:190137:172159:e*/p_51)) == 0xD0925A64L);
/*aft_stmt:172159*/
    for (g_73 = 0; (g_73 >= 33); g_73++)
    { /* block id: 50 */
        int32_t **l_130 = (void*)0;
        int32_t **l_131[1][6][10] = {{{&l_122[2],&l_120,&l_122[2],&g_129,&l_120,(void*)0,&l_120,&g_129,&l_122[2],&l_120},{(void*)0,&g_129,&l_120,&l_120,(void*)0,(void*)0,&g_129,&g_129,(void*)0,(void*)0},{&l_122[2],&l_120,&l_120,&l_122[2],(void*)0,(void*)0,&l_120,&l_120,(void*)0,&l_120},{&l_120,&l_122[3],&l_122[2],&l_120,&l_122[2],&l_122[3],&l_120,&l_120,(void*)0,&g_129},{&l_120,(void*)0,(void*)0,&l_122[2],&l_120,&l_120,&l_122[2],(void*)0,(void*)0,&l_120},{&g_129,(void*)0,(void*)0,&l_120,&l_120,&g_129,&l_120,&g_129,&l_120,&l_120}}};
        int16_t l_174 = 0x423CL;
        uint32_t l_175 = 0xE38CD69FL;
        int32_t * const l_181[5] = {&g_183,&g_183,&g_183,&g_183,&g_183};
        int32_t * const *l_180 = &l_181[1];
        int64_t *l_225 = (void*)0;
        uint64_t l_259 = 1UL;
        int8_t l_264 = (-1L);
        uint64_t l_373 = 18446744073709551613UL;
        int i, j, k;
        for (l_123 = 5; (l_123 >= 0); l_123 -= 1)
        { /* block id: 53 */
            uint32_t l_135[6][2] = {{0xCE46079FL,0xCE46079FL},{0xCE46079FL,0xCE46079FL},{0xCE46079FL,0xCE46079FL},{0xCE46079FL,0xCE46079FL},{0xCE46079FL,0xCE46079FL},{0xCE46079FL,0xCE46079FL}};
            int32_t l_191 = 0x5F7CE25DL;
            int32_t l_192 = 8L;
            int32_t l_193[8][7];
            int64_t l_270 = 0x681670B57E433B84LL;
            uint32_t l_305 = 18446744073709551615UL;
            uint32_t l_363[4] = {0x2CD6996FL,0x2CD6996FL,0x2CD6996FL,0x2CD6996FL};
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 7; j++)
                    l_193[i][j] = 0xF1CB64C1L;
            }
            /*bef_stmt:175408*/
/*bef_stmt:175408*/
/*bef_stmt:175408*/
if ((safe_lshift_func_uint16_t_u_u(((*l_114) ^= ((Tag418(/*int32_t:190137:190137:175408:e*/*p_55)) | ((((l_130 = g_128) == l_131[0][1][1]) < (Tag419(/*int32_t:190137:190137:175408:e*/*p_55))) != Tag420(/*uint16_t:0:0:175408:e*/g_85[2][2])))), 14)))
            { /* block id: 56 */
                int i;
                l_122[l_123] = (*g_128);
            }
            else
            { /* block id: 58 */
                uint8_t l_167 = 0x2BL;
                int32_t l_173 = 0xF1BBE70EL;
                for (g_115 = 0; (g_115 <= 5); g_115 += 1)
                { /* block id: 61 */
                    int32_t *l_132 = &g_2[0][1][5];
                    uint32_t l_171[1][5][1] = {{{0xE5EEE56FL},{0xF5B1C491L},{0xE5EEE56FL},{0xF5B1C491L},{0xE5EEE56FL}}};
                    int i, j, k;
                    l_122[g_115] = l_132;
                    l_135[2][1] = (safe_sub_func_int64_t_s_s(1L, 0x69A816771FCFF4A0LL));
                    /*bef_stmt:175374*/
if (Tag421(/*int32_t:0:0:175374:e*/g_75[7][0][8]))
                        break;
/*aft_stmt:175374*/
                }
                return p_55;
            }
/*aft_stmt:175408*/
/*aft_stmt:175408*/
/*aft_stmt:175408*/
            /*bef_stmt:175457*/
(*l_120) = (safe_unary_minus_func_uint16_t_u(Tag422(/*uint64_t:0:0:175457:e*/g_153)));
/*aft_stmt:175457*/
            for (p_52 = 0; (p_52 < 23); p_52 = safe_add_func_int64_t_s_s(p_52, 8))
            { /* block id: 87 */
                uint32_t *l_188 = &g_166[1];
                uint8_t l_200 = 0UL;
                int64_t *l_220 = &g_61[0];
                int32_t l_228 = 0xC7899EEEL;
                int32_t l_255 = 0x4900867EL;
                int32_t l_256[7] = {0x4F196435L,0x4F196435L,0x4F196435L,0x4F196435L,0x4F196435L,0x4F196435L,0x4F196435L};
                int64_t l_257 = (-4L);
                int16_t l_294 = 0xE839L;
                int64_t l_302 = (-1L);
                uint32_t l_317 = 0xBA7C9AF6L;
                int16_t *l_329 = &l_304;
                int i;
                /*bef_stmt:176381*/
/*bef_stmt:176381*/
/*bef_stmt:176381*/
/*bef_stmt:176381*/
(*l_120) = ((((0xE2246E6AL > 0xEE15430FL) != (+(((*g_162) = ((((l_180 = &l_122[l_123]) == (void*)0) , 0xD6090396A4FF77B4LL) , (safe_sub_func_int16_t_s_s(Tag423(/*int32_t:0:0:176381:e*/g_2[0][0][8]), ((((safe_add_func_int32_t_s_s(0L, (((*l_188) ^= ((void*)0 != l_188)) == 0x5CCC3D47L))) || (-1L)) >= (Tag424(/*int32_t:190137:190137:176381:e*/*l_120))) == (Tag425(/*int32_t:0:0:176381:e*/*g_162))))))) ^ 0x8780BAFCL))) > p_52) == (Tag426(/*int32_t:190137:190137:176381:e*/*l_120)));
/*aft_stmt:176381*/
/*aft_stmt:176381*/
/*aft_stmt:176381*/
/*aft_stmt:176381*/
                /*bef_stmt:182586*/
if ((Tag427(/*int32_t:190137:190137:182586:e*/*p_55)))
                { /* block id: 92 */
                    int64_t l_194 = 0xFAE57F404867E0CCLL;
                    int32_t l_196 = 4L;
                    int32_t l_198 = 0L;
                    int32_t l_199 = 5L;
                    int64_t *l_212[8][1][3] = {{{&g_61[0],&g_61[0],&g_61[0]}},{{&g_61[0],&l_194,&g_61[0]}},{{&l_194,&g_61[0],&g_61[0]}},{{&g_61[0],&g_61[0],(void*)0}},{{&l_194,&l_194,&l_194}},{{&g_61[0],&g_61[0],&l_194}},{{&l_194,&l_194,(void*)0}},{{&g_61[0],&g_61[0],&g_61[0]}}};
                    int32_t ***l_213 = &l_130;
                    int16_t l_254 = 6L;
                    int i, j, k;
                    for (g_115 = (-24); (g_115 == 19); g_115 = safe_add_func_int8_t_s_s(g_115, 5))
                    { /* block id: 95 */
                        int8_t l_195 = 0x43L;
                        int32_t l_197[2][1][7];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 7; k++)
                                    l_197[i][j][k] = (-2L);
                            }
                        }
                        ++l_200;
                        (*g_128) = (*g_128);
                        /*bef_stmt:177951*/
if (Tag428(/*uint64_t:0:0:177951:e*/g_153))
                            goto lbl_203;
/*aft_stmt:177951*/
                        (*g_128) = (*g_128);
                    }
                    /*bef_stmt:179520*/
/*bef_stmt:179520*/
/*bef_stmt:179520*/
/*bef_stmt:179520*/
/*bef_stmt:179520*/
if (((Tag429(/*uint64_t:0:0:179520:e*/g_153) & ((safe_mul_func_int16_t_s_s(Tag430(/*uint32_t:190137:190137:179520:e*/l_206), (safe_rshift_func_int8_t_s_s(((Tag431(/*int32_t:190137:190137:179520:e*/*p_55)) | Tag432(/*int32_t:190137:190137:179520:e*/p_54)), (!(Tag433(/*int32_t:190137:190137:179520:e*/*p_55))))))) > p_52)) ^ (safe_rshift_func_int16_t_s_s(((l_199 = 0x344C0717A8018BE0LL) >= (l_213 != (void*)0)), 9))))
                    { /* block id: 102 */
                        return p_55;
                    }
                    else
                    { /* block id: 104 */
                        int16_t *l_229 = &l_174;
                        int32_t *** const l_246 = &l_131[0][2][9];
                        /*bef_stmt:178621*/
/*bef_stmt:178621*/
/*bef_stmt:178621*/
(*g_162) = ((0xF9F2E5B4L && (p_55 == &l_121)) , (safe_rshift_func_uint8_t_u_u(((((g_73 ^ (-5L)) | (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0xF76BL, (&g_61[0] != l_220))), ((Tag434(/*int32_t:190137:190137:178621:e*/*l_120)) , Tag435(/*const uint8_t:190137:190137:178621:e*/p_51))))) != Tag436(/*int64_t:0:0:178621:e*/g_61[0])) != p_52), 7)));
/*aft_stmt:178621*/
/*aft_stmt:178621*/
/*aft_stmt:178621*/
                        /*bef_stmt:178946*/
/*bef_stmt:178946*/
/*bef_stmt:178946*/
/*bef_stmt:178946*/
/*bef_stmt:178946*/
g_182[0] &= ((*g_162) = (safe_sub_func_uint16_t_u_u((0x68E370C6443E69B7LL < (((*l_229) |= ((safe_add_func_uint32_t_u_u((Tag437(/*uint64_t:0:0:178946:e*/g_153) && Tag438(/*uint64_t:0:0:178946:e*/g_153)), (0L >= (&l_194 != l_225)))) > (((safe_div_func_int64_t_s_s(Tag439(/*int32_t:183429:190056:178946:e*/l_228), Tag440(/*int32_t:0:0:178946:e*/g_75[1][1][6]))) , 18446744073709551615UL) , (Tag441(/*int32_t:190137:190137:178946:e*/*p_55))))) && 0x2885L)), 0x5876L)));
/*aft_stmt:178946*/
/*aft_stmt:178946*/
/*aft_stmt:178946*/
/*aft_stmt:178946*/
/*aft_stmt:178946*/
                        /*bef_stmt:179475*/
/*bef_stmt:179475*/
/*bef_stmt:179475*/
/*bef_stmt:179475*/
/*bef_stmt:179475*/
(*g_162) = ((~0xB57D1AC8189C3A6CLL) < (((((*l_220) = ((1L == (((void*)0 == l_233) <= (((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((void*)0 == l_114) | ((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0L, (safe_add_func_uint8_t_u_u(((l_246 == &l_180) && 4UL), Tag442(/*int32_t:190137:190137:179475:e*/p_54))))), Tag443(/*const uint8_t:190137:190137:179475:e*/p_51))) , Tag444(/*uint8_t:0:0:179475:e*/g_168[0][4][1]))), Tag445(/*int32_t:0:0:179475:e*/g_163))), 5L)), 3)) , (void*)0) != l_247))) < 7L)) <= p_52) || (Tag446(/*int32_t:190137:190137:179475:e*/*p_55))) != p_52));
/*aft_stmt:179475*/
/*aft_stmt:179475*/
/*aft_stmt:179475*/
/*aft_stmt:179475*/
/*aft_stmt:179475*/
                        /*bef_stmt:179508*/
if ((Tag447(/*int32_t:190137:190137:179508:e*/*p_55)))
                            break;
/*aft_stmt:179508*/
                    }
/*aft_stmt:179520*/
/*aft_stmt:179520*/
/*aft_stmt:179520*/
/*aft_stmt:179520*/
/*aft_stmt:179520*/
                    for (g_163 = (-5); (g_163 < (-17)); g_163--)
                    { /* block id: 115 */
                        int32_t l_252 = 0x59E726B2L;
                        int32_t l_253[3][10] = {{0x15D8F7BEL,0x15D8F7BEL,(-1L),(-1L),0L,(-1L),0L,(-1L),(-1L),0x15D8F7BEL},{0L,0xC93C72FFL,1L,0L,(-1L),(-1L),0L,1L,0xC93C72FFL,0L},{1L,0x15D8F7BEL,0xC93C72FFL,(-1L),0x15D8F7BEL,(-1L),0xC93C72FFL,0x15D8F7BEL,1L,1L}};
                        int i, j;
                        /*bef_stmt:180187*/
(*l_120) ^= (safe_add_func_int16_t_s_s(Tag448(/*uint16_t:0:0:180187:e*/g_85[5][0]), g_73));
/*aft_stmt:180187*/
                        ++l_259;
                    }
                }
                else
                { /* block id: 119 */
                    int32_t l_263 = 0x419DCD39L;
                    int32_t l_268 = 0x9B4452C0L;
                    int16_t ** const l_290 = (void*)0;
                    int64_t l_295 = 6L;
                    int32_t l_296 = 1L;
                    int32_t l_298[7] = {0xF2EFBFA4L,0xF2EFBFA4L,0xF2EFBFA4L,0xF2EFBFA4L,0xF2EFBFA4L,0xF2EFBFA4L,0xF2EFBFA4L};
                    int i;
                    /*bef_stmt:182570*/
if ((Tag449(/*int32_t:190137:190137:182570:e*/*l_120)))
                    { /* block id: 120 */
                        int16_t l_262 = 1L;
                        int64_t l_265 = (-5L);
                        int32_t l_266 = 0L;
                        int32_t l_267 = 0x5019F29CL;
                        int32_t l_269 = 0xE81C6B58L;
                        int32_t l_271 = 0x5529E1FAL;
                        int32_t l_272 = 1L;
                        int32_t l_273[10][8] = {{0x32117528L,1L,1L,0x32117528L,0xE247A6F8L,0x32117528L,1L,1L},{1L,0xE247A6F8L,0x913A047BL,0x913A047BL,0xE247A6F8L,1L,0xE247A6F8L,0x913A047BL},{0x32117528L,0xE247A6F8L,0x32117528L,1L,1L,0x32117528L,0xE247A6F8L,0x32117528L},{0xFC0D2F5FL,1L,0x913A047BL,1L,0xFC0D2F5FL,0xFC0D2F5FL,1L,0x913A047BL},{0xFC0D2F5FL,0xFC0D2F5FL,1L,0x913A047BL,1L,0xFC0D2F5FL,0xFC0D2F5FL,1L},{0x32117528L,1L,1L,0x32117528L,0xE247A6F8L,0x32117528L,1L,1L},{0x32117528L,0xFC0D2F5FL,0xE247A6F8L,0xE247A6F8L,0xFC0D2F5FL,0x32117528L,0xFC0D2F5FL,0xE247A6F8L},{0x913A047BL,0xFC0D2F5FL,0x913A047BL,0x32117528L,0x32117528L,0x913A047BL,0xFC0D2F5FL,0x913A047BL},{1L,0x32117528L,0xE247A6F8L,0x32117528L,1L,1L,0x32117528L,0xE247A6F8L},{1L,1L,0x32117528L,0xE247A6F8L,0x32117528L,1L,1L,0x32117528L}};
                        int16_t *l_281 = &l_262;
                        int16_t **l_280 = &l_281;
                        int i, j;
                        l_274[1]++;
                        /*bef_stmt:181858*/
(*l_120) &= (Tag450(/*int32_t:190137:190137:181858:e*/*p_55));
/*aft_stmt:181858*/
                        /*bef_stmt:182337*/
/*bef_stmt:182337*/
/*bef_stmt:182337*/
/*bef_stmt:182337*/
/*bef_stmt:182337*/
/*bef_stmt:182337*/
/*bef_stmt:182337*/
/*bef_stmt:182337*/
/*bef_stmt:182337*/
(*g_162) = (((~((safe_mod_func_int64_t_s_s(((g_282[0] = ((*l_280) = &l_174)) == &l_123), Tag451(/*uint16_t:0:0:182337:e*/g_115))) | (p_52 ^ (Tag452(/*int32_t:0:0:182337:e*/g_163) != (((*l_113) &= ((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(1L, (l_290 == (void*)0))), ((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(0UL)), Tag453(/*const uint8_t:190137:190137:182337:e*/p_51))) < Tag454(/*int32_t:190137:190137:182337:e*/p_54)))) , Tag455(/*int32_t:0:0:182337:e*/g_75[1][1][6])) , Tag456(/*int16_t:183429:190056:182337:e*/l_294)) , Tag457(/*int32_t:182352:182576:182337:e*/l_266))) || (-4L)))))) | Tag458(/*uint64_t:0:0:182337:e*/g_153)) ^ Tag459(/*int32_t:182576:183429:182337:e*/l_263));
/*aft_stmt:182337*/
/*aft_stmt:182337*/
/*aft_stmt:182337*/
/*aft_stmt:182337*/
/*aft_stmt:182337*/
/*aft_stmt:182337*/
/*aft_stmt:182337*/
/*aft_stmt:182337*/
/*aft_stmt:182337*/
                    }
                    else
                    { /* block id: 127 */
                        int8_t l_297 = (-1L);
                        int32_t l_303[5] = {0xC978684FL,0xC978684FL,0xC978684FL,0xC978684FL,0xC978684FL};
                        int i;
                        /*bef_stmt:182544*/
if ((Tag460(/*int32_t:0:0:182544:e*/*g_162)))
                            break;
/*aft_stmt:182544*/
                        g_299--;
                        l_305--;
                    }
/*aft_stmt:182570*/
                }
/*aft_stmt:182586*/
                /*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
/*bef_stmt:183332*/
(*l_120) = ((*g_162) &= (safe_rshift_func_int16_t_s_u(((*l_329) ^= (0xCDL == ((safe_rshift_func_uint8_t_u_u((!(safe_add_func_uint32_t_u_u(8UL, ((safe_mul_func_int8_t_s_s((Tag461(/*uint32_t:183429:190056:183332:e*/l_317) >= (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((Tag462(/*int32_t:190137:190137:183332:e*/p_54) == (((p_52 <= (safe_lshift_func_uint8_t_u_s((Tag463(/*int16_t:0:0:183332:e*/g_283) >= (((l_328 == (void*)0) , (((Tag464(/*int8_t:0:0:183332:e*/g_170[0][0][0]) ^ 3L) & 0x66A6466EL) ^ (Tag465(/*int32_t:190137:190137:183332:e*/*p_55)))) ^ Tag466(/*const uint8_t:190137:190137:183332:e*/p_51))), 5))) != 0x379B794BL) & (-9L))) && 1UL), Tag467(/*const uint8_t:190137:190137:183332:e*/p_51))), 0x9CF6L)), Tag468(/*int32_t:190137:190137:183332:e*/p_54))), Tag469(/*const uint8_t:190137:190137:183332:e*/p_51)))), Tag470(/*int64_t:0:0:183332:e*/g_258))) , Tag471(/*int32_t:0:0:183332:e*/g_75[4][1][3]))))), Tag472(/*uint16_t:0:0:183332:e*/g_85[5][2]))) ^ (Tag473(/*int32_t:190137:190137:183332:e*/*l_120))))), Tag474(/*uint8_t:0:0:183332:e*/g_168[1][2][0]))));
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
/*aft_stmt:183332*/
                l_256[3] = ((&l_174 == (void*)0) , ((*g_162) = (~1L)));
            }
            for (l_305 = 0; (l_305 <= 0); l_305 += 1)
            { /* block id: 141 */
                int16_t *l_340 = (void*)0;
                int16_t *l_341 = (void*)0;
                int16_t *l_342 = &l_304;
                int32_t l_343[8][7][4] = {{{(-8L),(-4L),(-4L),(-8L)},{0x57D69558L,0x24DAA721L,0x7FDE84D4L,0x223FD998L},{0x51F4B9C9L,(-6L),0x416BEE28L,0xF3D1165FL},{0x1D1E1F2AL,0xA60F1C10L,0L,0xF3D1165FL},{0xA61D4161L,(-6L),(-8L),0x223FD998L},{0x2273EAB0L,0x24DAA721L,0x51F4B9C9L,(-8L)},{0xA60F1C10L,(-4L),0x1D4B38F4L,(-4L)}},{{0x51F4B9C9L,1L,0xE59346FBL,0x7FDE84D4L},{0x4B4F2838L,0xA60F1C10L,0x24DAA721L,0x416BEE28L},{0x59F86BD7L,0L,(-8L),0L},{0x59F86BD7L,0x223FD998L,0x24DAA721L,(-8L)},{0x4B4F2838L,0L,0xE59346FBL,0x51F4B9C9L},{0x51F4B9C9L,0xA4B17691L,0x1D4B38F4L,0x1D4B38F4L},{0xA60F1C10L,0xA60F1C10L,0x51F4B9C9L,0xE59346FBL}},{{0x2273EAB0L,0xEEDC3504L,(-8L),0x24DAA721L},{0xA61D4161L,0x51F4B9C9L,0L,(-8L)},{0x1D1E1F2AL,0x51F4B9C9L,0x416BEE28L,0x24DAA721L},{0x51F4B9C9L,0xEEDC3504L,0x7FDE84D4L,0xE59346FBL},{0x57D69558L,0xA60F1C10L,(-4L),0x1D4B38F4L},{(-8L),0xA4B17691L,(-8L),0x51F4B9C9L},{(-1L),0L,0x223FD998L,(-8L)}},{{0x90EBF486L,0x223FD998L,0xF3D1165FL,0L},{0x51F4B9C9L,0L,0xF3D1165FL,0x416BEE28L},{0x90EBF486L,0xA60F1C10L,0x223FD998L,0x7FDE84D4L},{(-1L),1L,(-8L),(-4L)},{(-8L),(-4L),(-4L),(-8L)},{0x57D69558L,0x24DAA721L,0x7FDE84D4L,0x223FD998L},{0x51F4B9C9L,(-6L),0x416BEE28L,0xF3D1165FL}},{{0x1D1E1F2AL,0xA60F1C10L,0L,0xF3D1165FL},{0xA61D4161L,(-6L),(-8L),0x223FD998L},{0x2273EAB0L,0x24DAA721L,0x51F4B9C9L,(-8L)},{0xA60F1C10L,(-4L),0x1D4B38F4L,(-4L)},{0x51F4B9C9L,1L,0xE59346FBL,0x7FDE84D4L},{0x4B4F2838L,0xA60F1C10L,0x24DAA721L,0x416BEE28L},{0x59F86BD7L,0L,(-8L),0L}},{{0x59F86BD7L,0x223FD998L,0x24DAA721L,(-8L)},{0x4B4F2838L,0L,0xE59346FBL,0x51F4B9C9L},{0x51F4B9C9L,0xA4B17691L,0x1D4B38F4L,0x1D4B38F4L},{0xA60F1C10L,0xA60F1C10L,0x59F86BD7L,(-6L)},{0x416BEE28L,0x4B4F2838L,0xF3D1165FL,(-1L)},{0x1D4B38F4L,0x59F86BD7L,0x2273EAB0L,0xF3D1165FL},{0x223FD998L,0x59F86BD7L,0xEEDC3504L,(-1L)}},{{0x59F86BD7L,0x4B4F2838L,0L,(-6L)},{0x24DAA721L,0x51F4B9C9L,(-8L),0xA4B17691L},{0xF3D1165FL,0xA60F1C10L,0xF3D1165FL,0x59F86BD7L},{0x7FDE84D4L,0x2273EAB0L,0xA61D4161L,0xF3D1165FL},{0L,0xA61D4161L,1L,0x2273EAB0L},{0x59F86BD7L,0x1D1E1F2AL,1L,0xEEDC3504L},{0L,0x51F4B9C9L,0xA61D4161L,0L}},{{0x7FDE84D4L,0x57D69558L,0xF3D1165FL,(-8L)},{0xF3D1165FL,(-8L),(-8L),0xF3D1165FL},{0x24DAA721L,(-1L),0L,0xA61D4161L},{0x59F86BD7L,0x90EBF486L,0xEEDC3504L,1L},{0x223FD998L,0x51F4B9C9L,0x2273EAB0L,1L},{0x1D4B38F4L,0x90EBF486L,0xF3D1165FL,0xA61D4161L},{0x416BEE28L,(-1L),0x59F86BD7L,0xF3D1165FL}}};
                uint64_t *l_381 = &g_153;
                int i, j, k;
                /*bef_stmt:190034*/
/*bef_stmt:190034*/
/*bef_stmt:190034*/
/*bef_stmt:190034*/
/*bef_stmt:190034*/
/*bef_stmt:190034*/
/*bef_stmt:190034*/
/*bef_stmt:190034*/
/*bef_stmt:190034*/
/*bef_stmt:190034*/
if ((g_182[l_305] <= (safe_lshift_func_int8_t_s_s((g_182[l_305] && (((((safe_lshift_func_int16_t_s_u(0xF20EL, 15)) , (0x7376442708E6182CLL == (l_343[0][4][0] = ((safe_mul_func_uint16_t_u_u((((*l_342) = (safe_sub_func_uint16_t_u_u((0xEE8EL & Tag475(/*const uint8_t:190137:190137:190034:e*/p_51)), (!Tag476(/*int64_t:0:0:190034:e*/g_61[0]))))) == (Tag477(/*int64_t:0:0:190034:e*/g_61[0]) , (Tag478(/*const uint8_t:190137:190137:190034:e*/p_51) > Tag479(/*int32_t:190137:190137:190034:e*/p_54)))), Tag480(/*int32_t:190137:190137:190034:e*/p_54))) && 8UL)))) , Tag481(/*const uint8_t:190137:190137:190034:e*/p_51)) != Tag482(/*uint32_t:190137:190137:190034:e*/l_344)) ^ Tag483(/*int32_t:190137:190137:190034:e*/p_52))), Tag484(/*int8_t:0:0:190034:e*/g_170[0][0][0])))))
                { /* block id: 144 */
                    uint32_t *l_346[9] = {&g_166[6],&g_166[6],&g_166[6],&g_166[6],&g_166[6],&g_166[6],&g_166[6],&g_166[6],&g_166[6]};
                    int32_t l_349 = 7L;
                    int i;
                    /*bef_stmt:188996*/
/*bef_stmt:188996*/
/*bef_stmt:188996*/
/*bef_stmt:188996*/
/*bef_stmt:188996*/
/*bef_stmt:188996*/
/*bef_stmt:188996*/
/*bef_stmt:188996*/
/*bef_stmt:188996*/
/*bef_stmt:188996*/
g_182[l_305] = ((~(g_166[6]++)) | ((((*l_233) |= ((void*)0 != l_342)) , Tag485(/*int32_t:189018:190040:188996:e*/l_349)) > (g_168[0][4][1] = (1UL < (~(safe_add_func_int16_t_s_s(((*l_342) = (safe_div_func_int64_t_s_s(((safe_add_func_int16_t_s_s(9L, 0x503CL)) < (safe_mul_func_int16_t_s_s((Tag486(/*int32_t:190137:190137:188996:e*/p_52) >= (safe_sub_func_int32_t_s_s(((((((safe_rshift_func_uint16_t_u_s(Tag487(/*int32_t:0:0:188996:e*/g_75[4][1][4]), Tag488(/*int32_t:190040:190056:188996:e*/l_343[0][1][0]))) , Tag489(/*uint16_t:0:0:188996:e*/g_85[5][0])) ^ Tag490(/*const uint8_t:190137:190137:188996:e*/p_51)) >= 0x6A52L) > Tag491(/*int32_t:189018:190040:188996:e*/l_349)) != Tag492(/*int32_t:190040:190056:188996:e*/l_343[1][4][2])), (Tag493(/*int32_t:0:0:188996:e*/*g_162))))), 1UL))), 0xEE927DC04DE5CFD5LL))), Tag494(/*int32_t:190137:190137:188996:e*/p_52))))))));
/*aft_stmt:188996*/
/*aft_stmt:188996*/
/*aft_stmt:188996*/
/*aft_stmt:188996*/
/*aft_stmt:188996*/
/*aft_stmt:188996*/
/*aft_stmt:188996*/
/*aft_stmt:188996*/
/*aft_stmt:188996*/
/*aft_stmt:188996*/
                    l_363[3]++;
                }
                else
                { /* block id: 151 */
                    for (l_175 = 0; (l_175 < 51); ++l_175)
                    { /* block id: 154 */
                        uint16_t *l_370 = (void*)0;
                        int8_t *l_374 = (void*)0;
                        int8_t *l_375 = &g_170[0][0][0];
                        int32_t l_380[10] = {0xE814A8E7L,0xE814A8E7L,0xE814A8E7L,0xE814A8E7L,0xE814A8E7L,0xE814A8E7L,0xE814A8E7L,0xE814A8E7L,0xE814A8E7L,0xE814A8E7L};
                        uint64_t **l_382 = &l_381;
                        const int32_t l_383 = (-4L);
                        int i;
                        /*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
/*bef_stmt:189977*/
(*l_120) ^= (safe_mul_func_uint8_t_u_u(((l_370 == &g_85[5][0]) || (safe_lshift_func_int8_t_s_s(((*l_375) = Tag495(/*uint64_t:190096:190137:189977:e*/l_373)), 1))), ((safe_sub_func_int64_t_s_s(Tag496(/*int32_t:0:0:189977:e*/g_182[0]), (((safe_mul_func_int8_t_s_s((Tag497(/*int32_t:189994:190030:189977:e*/l_380[9]) > ((((*l_382) = l_381) == &g_153) , ((*g_162) = ((((Tag498(/*int32_t:190137:190137:189977:e*/*p_55)) >= Tag499(/*int32_t:0:0:189977:e*/g_2[0][1][2])) == Tag500(/*int32_t:190040:190056:189977:e*/l_343[0][4][0])) & Tag501(/*const int32_t:189994:190030:189977:e*/l_383))))), Tag502(/*int32_t:190137:190137:189977:e*/p_52))) | Tag503(/*uint8_t:0:0:189977:e*/g_168[1][5][0])) != Tag504(/*const uint8_t:190137:190137:189977:e*/p_51)))) || Tag505(/*int32_t:0:0:189977:e*/g_2[0][0][9]))));
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
/*aft_stmt:189977*/
                    }
                    return (*g_128);
                }
/*aft_stmt:190034*/
/*aft_stmt:190034*/
/*aft_stmt:190034*/
/*aft_stmt:190034*/
/*aft_stmt:190034*/
/*aft_stmt:190034*/
/*aft_stmt:190034*/
/*aft_stmt:190034*/
/*aft_stmt:190034*/
/*aft_stmt:190034*/
            }
        }
        --g_384[3];
    }
    return (*g_128);
}


/* ------------------------------------------ */
/* 
 * reads : g_2 g_61 g_75 g_73
 * writes: g_73 g_75 g_85
 */
static uint8_t * func_56(uint8_t  p_57, uint32_t  p_58, uint64_t  p_59, const int64_t  p_60)
{ /* block id: 7 */
    const int64_t l_67 = 9L;
    uint8_t *l_72 = &g_73;
    int32_t *l_74 = &g_75[1][1][6];
    uint16_t *l_84 = &g_85[5][0];
    int32_t l_86 = 0x20CD53B1L;
    /*bef_stmt:190966*/
/*bef_stmt:190966*/
/*bef_stmt:190966*/
/*bef_stmt:190966*/
/*bef_stmt:190966*/
/*bef_stmt:190966*/
/*bef_stmt:190966*/
/*bef_stmt:190966*/
/*bef_stmt:190966*/
(*l_74) &= (safe_sub_func_uint16_t_u_u(((0L & ((safe_unary_minus_func_int32_t_s((&p_57 == ((safe_lshift_func_uint8_t_u_s(((*l_72) = (Tag506(/*int32_t:0:0:190966:e*/g_2[0][1][5]) < ((/*TAG507:STA*/((int64_t)(realsmith_proxy_blIli((char)(g_2[0][0][9])+(-3))+(char)(l_67)+(char)(g_182[0])+(char)(g_2[0][0][9])-(50))+l_67)/*TAG507:END:l_67*/ | /*TAG508:STA*/((int64_t)(realsmith_j4G2y((int)(g_168[1][5][0])+(-6))+(int)(l_67)+(int)(g_168[1][5][0])+(int)(g_182[0])+(int)(g_2[0][1][2])-(18))+l_67)/*TAG508:END:l_67*/) != (0xD7FCCEA59F7C1AE2LL > ((safe_mul_func_int16_t_s_s(/*TAG509:STA*/((int64_t)(realsmith_proxy_zcjwh((int)(g_168[1][5][0])+(-51))+(int)(g_61[0])+(int)(g_2[0][0][9])+(int)(g_182[0])+(int)(g_168[1][5][0])-(1))+g_61[0])/*TAG509:END:g_61[0]*/, (safe_lshift_func_uint16_t_u_s((0x57CFL != ((/*TAG510:STA*/((int64_t)(realsmith_p9ARG((int)(g_61[0])+(41))+(int)(p_60)+(int)(g_168[1][5][0])+(int)(g_61[0])+(int)(l_67)-(267))+p_60)/*TAG510:END:p_60*/ , 1UL) != Tag511(/*const int64_t:193147:193147:190966:e*/l_67))), /*TAG512:STA*/((int32_t)(realsmith_proxy_dwUr2((int)(g_2[0][0][9])+(31))+(int)(g_2[0][1][9])+(int)(g_2[0][1][2])+(int)(g_168[1][5][0])+(int)(g_61[0])+(int)(g_2[0][0][9])-(-1984608728))+g_2[0][1][9])/*TAG512:END:g_2[0][1][9]*/)))) <= (-9L)))))), 7)) , (void*)0)))) || /*TAG513:STA*/((int64_t)(realsmith_iPome((int)(l_67)+(58))+(int)(l_67)-(13))+l_67)/*TAG513:END:l_67*/)) == 8L), /*TAG514:STA*/((int64_t)(realsmith_proxy_SS7p9((char)(g_168[1][5][0])+(-41))+(int)(p_60)+(int)(g_168[1][5][0])+(int)(g_2[0][1][2])+(int)(g_61[0])+(int)(l_67)-(268))+p_60)/*TAG514:END:p_60*/));
/*aft_stmt:190966*/
/*aft_stmt:190966*/
/*aft_stmt:190966*/
/*aft_stmt:190966*/
/*aft_stmt:190966*/
/*aft_stmt:190966*/
/*aft_stmt:190966*/
/*aft_stmt:190966*/
/*aft_stmt:190966*/
    /*bef_stmt:191398*/
/*bef_stmt:191398*/
/*bef_stmt:191398*/
/*bef_stmt:191398*/
/*bef_stmt:191398*/
/*bef_stmt:191398*/
l_86 = (((((*l_74) = /*TAG515:STA*/((int64_t)(realsmith_proxy_xrI9J((unsigned char)(g_2[0][0][9])+(-6), (int)(g_182[0])+(8), (int)(g_182[0])+(9), (int)(g_2[0][0][9])+(0))+(int)(g_61[0])+(int)(g_182[0])+(int)(g_168[1][5][0])+(int)(g_2[0][0][9])+(int)(g_2[0][1][9])-(-1984608737))+g_61[0])/*TAG515:END:g_61[0]*/) != ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(0xDC67L, (/*TAG516:STA*/((int64_t)(realsmith_QNgtI((char)(g_2[0][0][9])+(3))+(int)(g_61[0])+(int)(g_2[0][1][9])+(int)(g_2[0][0][9])+(int)(g_2[0][1][2])+(int)(g_182[0])-(-1984608752))+g_61[0])/*TAG516:END:g_61[0]*/ , (safe_lshift_func_int16_t_s_u(/*TAG517:STA*/((int64_t)(realsmith_proxy_qYDCL((int)(g_168[1][5][0])+(13), (int)(g_2[0][1][2])+(13), (int)(g_2[0][1][2])+(83))+(int)(g_61[0])+(int)(g_2[0][0][9])+(int)(g_2[0][1][2])+(int)(g_168[1][5][0])+(int)(g_2[0][1][9])-(-1984608727))+g_61[0])/*TAG517:END:g_61[0]*/, 8))))) , (safe_lshift_func_uint16_t_u_u((/*TAG518:STA*/((int64_t)(realsmith_proxy_EmDKU((int)(g_61[0])+(80), (int)(g_2[0][0][9])+(90), (int)(g_2[0][1][9])+(1984608768), (int)(g_168[1][5][0])+(-104))+(int)(g_61[0])+(int)(g_2[0][0][9])+(int)(g_2[0][1][2])+(int)(g_168[1][5][0])+(int)(g_2[0][1][9])-(-1984608725))+g_61[0])/*TAG518:END:g_61[0]*/ , /*TAG519:STA*/((int64_t)(realsmith_FyAuh((int)(g_2[0][0][9])+(65))+(int)(g_61[0])+(int)(g_2[0][0][9])+(int)(g_2[0][1][2])+(int)(g_168[1][5][0])+(int)(g_2[0][1][9])-(-1984592342))+g_61[0])/*TAG519:END:g_61[0]*/), 13))), (&g_2[0][0][3] != &g_2[0][1][5]))) == ((*l_84) = 1UL))) | /*TAG520:STA*/((int64_t)(realsmith_proxy_WrwiQ((int)(g_2[0][1][9])+(1984608772))+(int)(l_67)+(int)(g_2[0][1][9])+(int)(p_60)+(int)(g_168[1][5][0])+(int)(g_61[0])-(-1984542944))+l_67)/*TAG520:END:l_67*/) , (-5L));
/*aft_stmt:191398*/
/*aft_stmt:191398*/
/*aft_stmt:191398*/
/*aft_stmt:191398*/
/*aft_stmt:191398*/
/*aft_stmt:191398*/
    for (p_58 = (-14); (p_58 > 12); ++p_58)
    { /* block id: 15 */
        int32_t *l_89 = &g_2[0][1][0];
        int32_t **l_90 = &l_89;
        (*l_90) = l_89;
    }
    for (p_57 = (-5); (p_57 == 48); ++p_57)
    { /* block id: 20 */
        const int32_t *l_94 = &g_95;
        const int32_t **l_93 = &l_94;
        const int32_t *l_97 = (void*)0;
        const int32_t **l_96 = &l_97;
        /*bef_stmt:191756*/
if ((Tag521(/*int32_t:193147:193147:191756:e*/*l_74)))
            break;
/*aft_stmt:191756*/
        (*l_96) = ((*l_93) = &g_75[1][1][6]);
        for (p_59 = (-13); (p_59 > 49); p_59 = safe_add_func_uint64_t_u_u(p_59, 1))
        { /* block id: 26 */
            (*l_74) ^= 1L;
        }
        for (l_86 = 0; (l_86 >= (-1)); l_86--)
        { /* block id: 31 */
            int32_t ***l_104 = (void*)0;
            uint8_t *l_106[6][10] = {{(void*)0,&g_73,(void*)0,&g_73,&g_73,&g_73,(void*)0,&g_73,(void*)0,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,(void*)0,&g_73,(void*)0,&g_73,&g_73,&g_73,(void*)0,&g_73},{(void*)0,&g_73,(void*)0,&g_73,&g_73,&g_73,(void*)0,&g_73,(void*)0,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,(void*)0,&g_73,(void*)0,&g_73,&g_73,&g_73,(void*)0,&g_73}};
            int i, j;
            for (g_73 = 0; (g_73 != 17); g_73++)
            { /* block id: 34 */
                int32_t ****l_105 = &l_104;
                (*l_105) = l_104;
                return l_72;
            }
            return l_106[3][2];
        }
    }
    return l_72;
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
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_75[i][j][k], "g_75[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_85[i][j], "g_85[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_168[i][j][k], "g_168[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_170[i][j][k], "g_170[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_182[i], "g_182[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_384[i], "g_384[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_765[i][j], "g_765[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_804, "g_804", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_883[i][j][k], "g_883[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    transparent_crc(g_1064, "g_1064", print_hash_value);
    transparent_crc(g_1141, "g_1141", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1274[i][j][k], "g_1274[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1420, "g_1420", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1493[i], "g_1493[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1680, "g_1680", print_hash_value);
    transparent_crc(g_1708, "g_1708", print_hash_value);
    transparent_crc(g_1745, "g_1745", print_hash_value);
    transparent_crc(g_1749, "g_1749", print_hash_value);
    transparent_crc(g_1752, "g_1752", print_hash_value);
    transparent_crc(g_1853, "g_1853", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 480
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

XXX max expression depth: 59
breakdown:
   depth: 1, occurrence: 248
   depth: 2, occurrence: 68
   depth: 3, occurrence: 2
   depth: 4, occurrence: 6
   depth: 5, occurrence: 2
   depth: 7, occurrence: 1
   depth: 8, occurrence: 2
   depth: 11, occurrence: 2
   depth: 13, occurrence: 1
   depth: 14, occurrence: 2
   depth: 15, occurrence: 2
   depth: 16, occurrence: 2
   depth: 17, occurrence: 1
   depth: 18, occurrence: 3
   depth: 19, occurrence: 4
   depth: 20, occurrence: 3
   depth: 21, occurrence: 2
   depth: 22, occurrence: 1
   depth: 23, occurrence: 3
   depth: 24, occurrence: 2
   depth: 28, occurrence: 3
   depth: 29, occurrence: 2
   depth: 32, occurrence: 1
   depth: 33, occurrence: 2
   depth: 34, occurrence: 1
   depth: 37, occurrence: 1
   depth: 38, occurrence: 1
   depth: 54, occurrence: 1
   depth: 59, occurrence: 1

XXX total number of pointers: 391

XXX times a variable address is taken: 723
XXX times a pointer is dereferenced on RHS: 211
breakdown:
   depth: 1, occurrence: 172
   depth: 2, occurrence: 20
   depth: 3, occurrence: 12
   depth: 4, occurrence: 7
XXX times a pointer is dereferenced on LHS: 251
breakdown:
   depth: 1, occurrence: 216
   depth: 2, occurrence: 20
   depth: 3, occurrence: 12
   depth: 4, occurrence: 3
XXX times a pointer is compared with null: 29
XXX times a pointer is compared with address of another variable: 10
XXX times a pointer is compared with another pointer: 10
XXX times a pointer is qualified to be dereferenced: 6618

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2140
   level: 2, occurrence: 189
   level: 3, occurrence: 223
   level: 4, occurrence: 101
   level: 5, occurrence: 44
XXX number of pointers point to pointers: 144
XXX number of pointers point to scalars: 247
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25.8
XXX average alias set size: 1.33

XXX times a non-volatile is read: 1581
XXX times a non-volatile is write: 755
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 247
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 26
   depth: 1, occurrence: 23
   depth: 2, occurrence: 36
   depth: 3, occurrence: 44
   depth: 4, occurrence: 61
   depth: 5, occurrence: 57

XXX percentage a fresh-made variable is used: 16
XXX percentage an existing variable is used: 84
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: 5CDCF74A */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: 5CDCF74A */
