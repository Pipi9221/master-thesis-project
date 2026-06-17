
int INAT_LSTPFX_MAX_realsmith_baSr3 = 4;

int INAT_PFX_MASK_realsmith_baSr3 = 8;

__attribute__((used)) static inline int realsmith_baSr3(int attr)
{
 if ((attr & INAT_PFX_MASK_realsmith_baSr3) > INAT_LSTPFX_MAX_realsmith_baSr3)
  return 0;
 else
  return attr & INAT_PFX_MASK_realsmith_baSr3;
}

int A_GETKMASK_realsmith_a8OKL = 4;

int EINVAL_realsmith_a8OKL = 15;

int errno_realsmith_a8OKL = 12;

int
realsmith_a8OKL(int *kmask, unsigned long sz)
{
 if (sizeof(*kmask) != sz) {
  errno_realsmith_a8OKL = EINVAL_realsmith_a8OKL;
  return (-1);
 }
 return ((1));
}
int realsmith_proxy_fM6EN(int p_0_KWEFv, unsigned long p_1_YAdqn) {
int proxy_nz2CK[16] = { 39, p_0_KWEFv, 52, 13, p_0_KWEFv, p_0_KWEFv, p_0_KWEFv, 12, p_0_KWEFv, 40, p_0_KWEFv, 52, 3, p_0_KWEFv, 79, p_0_KWEFv };
int proxy_ret_CVvQA = realsmith_a8OKL(proxy_nz2CK, p_1_YAdqn);
return proxy_ret_CVvQA;
}


int cpu_tick_frequency_realsmith_KlPIt = 11;

long cpu_ticks_realsmith_KlPIt = 17;

long tc_cpu_ticks_realsmith_KlPIt = 6;

int
realsmith_KlPIt(void)
{
 if (cpu_ticks_realsmith_KlPIt == tc_cpu_ticks_realsmith_KlPIt)
  return ((1));
 return (cpu_tick_frequency_realsmith_KlPIt);
}

int BTM_NO_RESOURCES_realsmith_ejkz2 = 2;

int OSI_MUTEX_MAX_TIMEOUT_realsmith_ejkz2 = 14;

int OSI_SEM_MAX_TIMEOUT_realsmith_ejkz2 = 12;

int adv_data_lock_realsmith_ejkz2 = 6;

int adv_data_sem_realsmith_ejkz2 = 0;

int adv_data_status_realsmith_ejkz2 = 7;

int realsmith_ejkz2(int *p_raw_scan_rsp, long raw_scan_rsp_len)
{
    int ret;
    (1);
    if ((1)) {
        (1);
        ret = adv_data_status_realsmith_ejkz2;
    } else {
        ret = BTM_NO_RESOURCES_realsmith_ejkz2;
    }
    (1);
    return ret;
}
int realsmith_proxy_XKrT6(int p_0_v1jqe, long p_1_iCN7M) {
int proxy_ret_eebwx = realsmith_ejkz2(&(p_0_v1jqe), p_1_iCN7M);
return proxy_ret_eebwx;
}


int IRCONV_NUM_INT_realsmith_MIyA7 = -1;

int IRT_NUM_realsmith_MIyA7 = -2;

int IR_CONV_realsmith_MIyA7 = -3;

int IR_NEG_realsmith_MIyA7 = 14;

int IR_STRTO_realsmith_MIyA7 = 16;

int IR_SUBOV_realsmith_MIyA7 = 3;

int realsmith_MIyA7(int *J, int rc, int *vc)
{
  if ((1)) {
    rc = (1);
    (1);
  }
  if ((1)) {
    if ((int)(1) != 0x80000000u)
      return (1);
    rc = (1);
  }
  return (1);
}
int realsmith_proxy_s4a7X(int p_0_aTK7p, int p_1_gtrbv, int p_2_usCAq) {
int proxy_ret_5PwyJ = realsmith_MIyA7(&(p_0_aTK7p), p_1_gtrbv, &(p_2_usCAq));
return proxy_ret_5PwyJ;
}


__attribute__((used)) static int realsmith_BxKI6(int *L)
{
  if (!(1)) {
    if ((1) ||
 !(1) ||
 !(1))
      return 1;
    (1);
  }
  (1);
  return 1;
}
int realsmith_proxy_TiVer(int p_0_k7lgL) {
int proxy_WuMqn[12] = { p_0_k7lgL, p_0_k7lgL, 92, 40, 23, p_0_k7lgL, 50, 80, 33, 21, 85, p_0_k7lgL };
int proxy_ret_bGzZJ = realsmith_BxKI6(proxy_WuMqn);
return proxy_ret_bGzZJ;
}


long flag_tree_copy_prop_realsmith_H3Wvo = 4;

long flag_tree_store_copy_prop_realsmith_H3Wvo = -3;

__attribute__((used)) static int
realsmith_H3Wvo (void)
{
  return flag_tree_store_copy_prop_realsmith_H3Wvo != 0 || flag_tree_copy_prop_realsmith_H3Wvo != 0;
}

long EBADMSG_realsmith_MwQ2o = 9;

long EBUSY_realsmith_MwQ2o = -10;

long EEXIST_realsmith_MwQ2o = 10;

long EINVAL_realsmith_MwQ2o = 4;

long ENODEV_realsmith_MwQ2o = 20;

long ENOENT_realsmith_MwQ2o = 20;

long errno_realsmith_MwQ2o = -6;

char *realsmith_MwQ2o(void) {
    char *errmsg = "Wrong format";
    if (errno_realsmith_MwQ2o == ENOENT_realsmith_MwQ2o)
        errmsg = "Unknown command or category name in ACL";
    else if (errno_realsmith_MwQ2o == EINVAL_realsmith_MwQ2o)
        errmsg = "Syntax error";
    else if (errno_realsmith_MwQ2o == EBUSY_realsmith_MwQ2o)
        errmsg = "Adding a subcommand of a command already fully "
                 "added is not allowed. Remove the command to start. "
                 "Example: -DEBUG +DEBUG|DIGEST";
    else if (errno_realsmith_MwQ2o == EEXIST_realsmith_MwQ2o)
        errmsg = "Adding a pattern after the * pattern (or the "
                 "'allkeys' flag) is not valid and does not have any "
                 "effect. Try 'resetkeys' to start with an empty "
                 "list of patterns";
    else if (errno_realsmith_MwQ2o == ENODEV_realsmith_MwQ2o)
        errmsg = "The password you are trying to remove from the user does "
                 "not exist";
    else if (errno_realsmith_MwQ2o == EBADMSG_realsmith_MwQ2o)
        errmsg = "The password hash must be exactly 64 characters and contain "
                 "only lowercase hexadecimal characters";
    return errmsg;
}
char realsmith_proxy_Ty0O1() {
char * proxy_ret_Amxy9 = realsmith_MwQ2o();
return *proxy_ret_Amxy9;
}


int cmm_page_list_realsmith_auo97 = 16;

int cmm_pages_realsmith_auo97 = -2;

int cmm_suspended_realsmith_auo97 = 2;

int cmm_timed_page_list_realsmith_auo97 = 11;

int cmm_timed_pages_realsmith_auo97 = 10;

__attribute__((used)) static int realsmith_auo97(void)
{
 cmm_suspended_realsmith_auo97 = 1;
 (1);
 (1);
 return 0;
}

__attribute__((used)) static int realsmith_Pl82J(int *sptep)
{
 int pfn;
 int old_spte = *sptep;
 if (!(1))
  (1);
 else
  old_spte = (1);
 if (!(1))
  return 0;
 pfn = (1);
 (1);
 if ((1))
  (1);
 if ((1))
  (1);
 return 1;
}
int realsmith_proxy_cTrwi(int p_0_Kmr5N) {
int proxy_2CIRb[19] = { p_0_Kmr5N, 63, p_0_Kmr5N, p_0_Kmr5N, 52, p_0_Kmr5N, p_0_Kmr5N, p_0_Kmr5N, p_0_Kmr5N, 10, 16, 99, p_0_Kmr5N, 3, p_0_Kmr5N, 0, p_0_Kmr5N, p_0_Kmr5N, p_0_Kmr5N };
int proxy_ret_ag6CV = realsmith_Pl82J(proxy_2CIRb);
return proxy_ret_ag6CV;
}


int FALSE_realsmith_Mp1Ay = 17;

int TRUE_realsmith_Mp1Ay = -7;

__attribute__((used)) static int realsmith_Mp1Ay(int dir, int size, const char *version, int architecture)
{
    static const char dotnet_realsmith_Mp1Ay[] = {'\\','M','i','c','r','o','s','o','f','t','.','N','E','T','\\',0};
    static const char gac_realsmith_Mp1Ay[] = {'\\','a','s','s','e','m','b','l','y','\\','G','A','C',0};
    static const char msil_realsmith_Mp1Ay[] = {'_','M','S','I','L',0};
    static const char x86_realsmith_Mp1Ay[] = {'_','3','2',0};
    static const char amd64_realsmith_Mp1Ay[] = {'_','6','4',0};
    int len = (1);
    if (!(1))
    {
        (1);
        len += (1) - 1;
        (1);
        len += (1) - 2;
    }
    else
    {
        (1);
        len += (1) - 1;
    }
    switch (architecture)
    {
        case 128:
            break;
        case 129:
            (1);
            break;
        case 130:
            (1);
            break;
        case 131:
            (1);
            break;
        default:
            (1);
            return FALSE_realsmith_Mp1Ay;
    }
    return TRUE_realsmith_Mp1Ay;
}
int realsmith_proxy_OGg4Y(int p_0_c2g1t, int p_1_4Zjeg, char p_2_R6HwR, int p_3_qY9pt) {
int proxy_ret_9DRFk = realsmith_Mp1Ay(p_0_c2g1t, p_1_4Zjeg, &(p_2_R6HwR), p_3_qY9pt);
return proxy_ret_9DRFk;
}


__attribute__((used)) static unsigned int realsmith_26w2P(long *report, unsigned offset, int n)
{
 unsigned int idx = offset / 8;
 unsigned int bit_nr = 0;
 unsigned int bit_shift = offset % 8;
 int bits_to_copy = 8 - bit_shift;
 unsigned int value = 0;
 unsigned int mask = n < 32 ? (1U << n) - 1 : ~0U;
 while (n > 0) {
  value |= ((unsigned int)report[idx] >> bit_shift) << bit_nr;
  n -= bits_to_copy;
  bit_nr += bits_to_copy;
  bits_to_copy = 8;
  bit_shift = 0;
  idx++;
 }
 return value & mask;
}
unsigned int realsmith_proxy_Vb46U(long p_0_ufSr4, unsigned int p_1_4QT5L, int p_2_JUY0C) {
unsigned int proxy_ret_BGIT1 = realsmith_26w2P(&(p_0_ufSr4), p_1_4QT5L, p_2_JUY0C);
return proxy_ret_BGIT1;
}


int SQLITE_OK_realsmith_7YZ7D = 6;

__attribute__((used)) static int realsmith_7YZ7D(int *pVtab){
  int *pTab = (int*)pVtab;
  (1);
  return SQLITE_OK_realsmith_7YZ7D;
}
int realsmith_proxy_IphPi(int p_0_zaHCp) {
int proxy_ret_i88FY = realsmith_7YZ7D(&(p_0_zaHCp));
return proxy_ret_i88FY;
}


int DCBX_APP_SF_IEEE_TCP_PORT_realsmith_MPxAM = 11;

long ECORE_TCP_PORT_ISCSI_realsmith_MPxAM = -7;

__attribute__((used)) static int realsmith_MPxAM(int app_info_bitmap, long proto_id, int ieee)
{
 int port;
 if (ieee)
  port = (1);
 else
  port = (1);
 return !!(port && (proto_id == ECORE_TCP_PORT_ISCSI_realsmith_MPxAM));
}

__attribute__((used)) static inline unsigned int realsmith_yCp2y(const int *dat)
{
 return (dat[2] << 8) + (dat[1] << 0);
}
unsigned int realsmith_proxy_KDvBE(int p_0_UPMxR) {
int proxy_BsVCf[15] = { p_0_UPMxR, p_0_UPMxR, p_0_UPMxR, p_0_UPMxR, 56, 77, 86, 0, 69, p_0_UPMxR, 66, 84, 14, p_0_UPMxR, p_0_UPMxR };
unsigned int proxy_ret_F3bYA = realsmith_yCp2y(proxy_BsVCf);
return proxy_ret_F3bYA;
}


int BSR_VAR_MASK_realsmith_tHZCz = 8;

int CRONYX_400_realsmith_tHZCz = 0;

__attribute__((used)) static int realsmith_tHZCz (int port, int rev)
{
 int count;
 port = ((rev & BSR_VAR_MASK_realsmith_tHZCz) != CRONYX_400_realsmith_tHZCz) ? (1) : (1);
 for (count=0; (1)==0; ++count)
  if (count >= 20000)
   return (0);
 return (1);
}

__attribute__((used)) static int
realsmith_BYKVv (unsigned int *valp)
{
  unsigned imm8_0, uimm8x2_0;
  uimm8x2_0 = *valp;
  imm8_0 = ((uimm8x2_0 >> 1) & 0xff);
  *valp = imm8_0;
  return 0;
}
int realsmith_proxy_72Frh(unsigned int p_0_0padN) {
unsigned int proxy_PEYfe[17] = { 4, p_0_0padN, p_0_0padN, p_0_0padN, p_0_0padN, p_0_0padN, p_0_0padN, 81, 29, 37, p_0_0padN, 52, 94, 84, p_0_0padN, p_0_0padN, 46 };
int proxy_ret_66s5U = realsmith_BYKVv(proxy_PEYfe);
return proxy_ret_66s5U;
}


long H_AUTHORITY_realsmith_cyLFQ = -6;

long H_BUSY_realsmith_cyLFQ = 4;

int H_MEHEAPORT_CAT_realsmith_cyLFQ = 19;

unsigned long H_MODIFY_HEA_PORT_realsmith_cyLFQ = 19;

long H_PORT_CB4_realsmith_cyLFQ = 12;

unsigned long H_PORT_CB4_JUMBO_realsmith_cyLFQ = -4;

unsigned long H_PORT_CB4_SPEED_realsmith_cyLFQ = -6;

long H_PORT_CB7_realsmith_cyLFQ = 7;

unsigned long H_PORT_CB7_DUCQPN_realsmith_cyLFQ = 19;

long H_SUCCESS_realsmith_cyLFQ = 11;

__attribute__((used)) static long realsmith_cyLFQ(unsigned long opcode,
         unsigned long *outs,
         unsigned long arg1,
         unsigned long arg2,
         unsigned long arg3,
         unsigned long arg4,
         unsigned long arg5,
         unsigned long arg6,
         unsigned long arg7,
         unsigned long arg8,
         unsigned long arg9)
{
 long ret;
 int i, sleep_msecs;
 long cb_cat;
 for (i = 0; i < 5; i++) {
  ret = (1);
  if ((1)) {
   sleep_msecs = (1);
   (1);
   continue;
  }
  cb_cat = (1);
  if ((ret < H_SUCCESS_realsmith_cyLFQ) && !(((ret == H_AUTHORITY_realsmith_cyLFQ)
      && (opcode == H_MODIFY_HEA_PORT_realsmith_cyLFQ))
      && (((cb_cat == H_PORT_CB4_realsmith_cyLFQ) && ((arg3 == H_PORT_CB4_JUMBO_realsmith_cyLFQ)
      || (arg3 == H_PORT_CB4_SPEED_realsmith_cyLFQ))) || ((cb_cat == H_PORT_CB7_realsmith_cyLFQ)
      && (arg3 == H_PORT_CB7_DUCQPN_realsmith_cyLFQ)))))
   (1);
  return ret;
 }
 return H_BUSY_realsmith_cyLFQ;
}
long realsmith_proxy_mIfSs(unsigned long p_0_RcyLK, unsigned long p_1_PeWv0, unsigned long p_2_CJPm4, unsigned long p_3_dGqWu, unsigned long p_4_YailX, unsigned long p_5_zaURm, unsigned long p_6_wFAZ3, unsigned long p_7_dLnY1, unsigned long p_8_F7A6P, unsigned long p_9_oHFho, unsigned long p_10_5Sbvk) {
long proxy_ret_NuRtn = realsmith_cyLFQ(p_0_RcyLK, &(p_1_PeWv0), p_2_CJPm4, p_3_dGqWu, p_4_YailX, p_5_zaURm, p_6_wFAZ3, p_7_dLnY1, p_8_F7A6P, p_9_oHFho, p_10_5Sbvk);
return proxy_ret_NuRtn;
}


int CTL_KERN_realsmith_Dh5Ju = 2;

long ENAMETOOLONG_realsmith_Dh5Ju = 16;

long ENOMEM_realsmith_Dh5Ju = -5;

int KERN_HOSTNAME_realsmith_Dh5Ju = -2;

long errno_realsmith_Dh5Ju = -5;

int
realsmith_Dh5Ju(char *name, unsigned long namelen)
{
 int mib[2];
 mib[0] = CTL_KERN_realsmith_Dh5Ju;
 mib[1] = KERN_HOSTNAME_realsmith_Dh5Ju;
 if ((1) == -1) {
  if (errno_realsmith_Dh5Ju == ENOMEM_realsmith_Dh5Ju)
   errno_realsmith_Dh5Ju = ENAMETOOLONG_realsmith_Dh5Ju;
  return (-1);
 }
 return (0);
}
int realsmith_proxy_1BYdb(char p_0_y7M8d, unsigned long p_1_FWNi6) {
char proxy_htSDq[11] = { 85, 5, 12, p_0_y7M8d, 4, 63, 43, 83, p_0_y7M8d, p_0_y7M8d, p_0_y7M8d };
int proxy_ret_VNmew = realsmith_Dh5Ju(proxy_htSDq, p_1_FWNi6);
return proxy_ret_VNmew;
}


int NGX_OK_realsmith_26W9c = -3;

int ngx_http_addition_body_filter_realsmith_26W9c = 9;

int ngx_http_addition_header_filter_realsmith_26W9c = 2;

int ngx_http_next_body_filter_realsmith_26W9c = -9;

int ngx_http_next_header_filter_realsmith_26W9c = 18;

int ngx_http_top_body_filter_realsmith_26W9c = 10;

int ngx_http_top_header_filter_realsmith_26W9c = 2;

__attribute__((used)) static int
realsmith_26W9c(int *cf)
{
    ngx_http_next_header_filter_realsmith_26W9c = ngx_http_top_header_filter_realsmith_26W9c;
    ngx_http_top_header_filter_realsmith_26W9c = ngx_http_addition_header_filter_realsmith_26W9c;
    ngx_http_next_body_filter_realsmith_26W9c = ngx_http_top_body_filter_realsmith_26W9c;
    ngx_http_top_body_filter_realsmith_26W9c = ngx_http_addition_body_filter_realsmith_26W9c;
    return NGX_OK_realsmith_26W9c;
}
int realsmith_proxy_KIJA6(int p_0_DX7wa) {
int proxy_dsbGw[18] = { p_0_DX7wa, p_0_DX7wa, 93, 69, p_0_DX7wa, p_0_DX7wa, p_0_DX7wa, 1, p_0_DX7wa, 85, 97, 1, 73, p_0_DX7wa, 47, 38, p_0_DX7wa, p_0_DX7wa };
int proxy_ret_2K6nw = realsmith_26W9c(proxy_dsbGw);
return proxy_ret_2K6nw;
}


__attribute__((used)) static int realsmith_544Gr(char const* hexstr, int* out) {
 if ( !hexstr || hexstr[0] != '0'
  || !(hexstr[1] == 'x' || hexstr[1] == 'X')) {
  return 0;
 }
 *out = 0;
 char const*p;
 for (p = hexstr + 2; p < hexstr + 6 && *p ; p += 1) {
  *out <<= 4;
  if ( '0' <= *p && *p <= '9' ) {
   *out |= *p - '0';
  } else if ( 'a' <= *p && *p <= 'f' ) {
   *out |= *p - 'a' + 10;
  } else if ( 'A' <= *p && *p <= 'F' ) {
   *out |= *p - 'A' + 10;
  } else {
   return 0;
  }
 }
 return ! *p;
}
int realsmith_proxy_Ce1Mk(char p_0_WC4jh, int p_1_JdxGg) {
int proxy_ret_lfTTI = realsmith_544Gr(&(p_0_WC4jh), &(p_1_JdxGg));
return proxy_ret_lfTTI;
}


int ENOENT_realsmith_TtOuC = 15;

__attribute__((used)) static int
realsmith_TtOuC(int bus, int dev, int index, unsigned long* val)
{
 switch (index) {
 case 128:
  *val = (unsigned long)(1);
  break;
 default:
  return (ENOENT_realsmith_TtOuC);
 }
 return (0);
}
int realsmith_proxy_2D8xe(int p_0_rySvY, int p_1_NSP3l, int p_2_S98jw, unsigned long p_3_C8iLD) {
int proxy_ret_bQQhX = realsmith_TtOuC(p_0_rySvY, p_1_NSP3l, p_2_S98jw, &(p_3_C8iLD));
return proxy_ret_bQQhX;
}


int DPAA_GENALLOC_OFF_realsmith_Iunbu = 6;

int qm_cgralloc_realsmith_Iunbu = 13;

int realsmith_Iunbu(int cgrid)
{
 int ret;
 ret = (1);
 if (ret) {
  (1);
  return ret;
 }
 (1);
 return 0;
}

__attribute__((used)) static long realsmith_4XoVU(long n, long max, int *clamped)
{
 if (n <= max)
  return n;
 *clamped = 1;
 return max;
}
long realsmith_proxy_2QevX(long p_0_xOEMr, long p_1_XgMKv, int p_2_IGtM6) {
int proxy_qhphI[10] = { 53, p_2_IGtM6, p_2_IGtM6, p_2_IGtM6, p_2_IGtM6, p_2_IGtM6, p_2_IGtM6, 7, 47, p_2_IGtM6 };
long proxy_ret_gUTaU = realsmith_4XoVU(p_0_xOEMr, p_1_XgMKv, proxy_qhphI);
return proxy_ret_gUTaU;
}


__attribute__((used)) static inline int realsmith_Bgo4W(int val)
{
 return ((val & 0x00ff00ff) << 8) | ((val & 0xff00ff00) >> 8);
}

int pmc_realsmith_LMAEc = 1;

int realsmith_LMAEc(unsigned int cpuid)
{
 int id;
 id = (1);
 if (id < 0)
  return id;
 return (1);
}

int NGX_OK_realsmith_a2XqF = 19;

int ngx_http_addition_body_filter_realsmith_a2XqF = 7;

int ngx_http_addition_header_filter_realsmith_a2XqF = 14;

int ngx_http_next_body_filter_realsmith_a2XqF = 8;

int ngx_http_next_header_filter_realsmith_a2XqF = -7;

int ngx_http_top_body_filter_realsmith_a2XqF = -10;

int ngx_http_top_header_filter_realsmith_a2XqF = -8;

__attribute__((used)) static int
realsmith_a2XqF(int *cf)
{
    ngx_http_next_header_filter_realsmith_a2XqF = ngx_http_top_header_filter_realsmith_a2XqF;
    ngx_http_top_header_filter_realsmith_a2XqF = ngx_http_addition_header_filter_realsmith_a2XqF;
    ngx_http_next_body_filter_realsmith_a2XqF = ngx_http_top_body_filter_realsmith_a2XqF;
    ngx_http_top_body_filter_realsmith_a2XqF = ngx_http_addition_body_filter_realsmith_a2XqF;
    return NGX_OK_realsmith_a2XqF;
}
int realsmith_proxy_JaeET(int p_0_AbMtL) {
int proxy_ret_0MY9J = realsmith_a2XqF(&(p_0_AbMtL));
return proxy_ret_0MY9J;
}


int ENXIO_realsmith_e06rf = -9;

int SETTING_CLONE_NS_FLAGS_realsmith_e06rf = 17;

unsigned long arg_clone_ns_flags_realsmith_e06rf = -9;

int arg_settings_mask_realsmith_e06rf = -5;

__attribute__((used)) static int realsmith_e06rf(const char *name, unsigned long ns_flag) {
        int r;
        r = (1);
        if (r == -ENXIO_realsmith_e06rf)
                return 0;
        if (r < 0)
                return (1);
        arg_clone_ns_flags_realsmith_e06rf = (arg_clone_ns_flags_realsmith_e06rf & ~ns_flag) | (r > 0 ? 0 : ns_flag);
        arg_settings_mask_realsmith_e06rf |= SETTING_CLONE_NS_FLAGS_realsmith_e06rf;
        return 0;
}
int realsmith_proxy_E3S10(char p_0_9Jf2v, unsigned long p_1_W08Ne) {
char proxy_lQb1j[12] = { p_0_9Jf2v, p_0_9Jf2v, p_0_9Jf2v, 52, 48, 79, 19, 86, p_0_9Jf2v, p_0_9Jf2v, 40, p_0_9Jf2v };
int proxy_ret_wiDQp = realsmith_e06rf(proxy_lQb1j, p_1_W08Ne);
return proxy_ret_wiDQp;
}


__attribute__((used)) static inline unsigned int realsmith_vN5z7(unsigned int num,
       unsigned int multiple,
       int up)
{
 unsigned int remainder;
 if (multiple == 0)
  return num;
 remainder = num % multiple;
 if (remainder == 0)
  return num;
 if (up)
  return (num + multiple - remainder);
 else
  return (num - remainder);
}

__attribute__((used)) static int
realsmith_nWKJZ(int * buffer, int *offset)
{
 int value = buffer[(*offset)++];
 int two_byte = value & 0x80;
 if (value & 0x40)
  value |= ~0x3f;
 else
  value &= 0x3f;
 if (two_byte)
  value = (value << 8) | buffer[(*offset)++];
 return value;
}
int realsmith_proxy_Ayh4D(int p_0_hKZim, int p_1_duanu) {
int proxy_McfsM[20] = { p_0_hKZim, p_0_hKZim, p_0_hKZim, p_0_hKZim, 0, p_0_hKZim, p_0_hKZim, 38, 39, p_0_hKZim, 10, 91, 52, 82, 17, p_0_hKZim, 65, 74, 32, p_0_hKZim };
int proxy_ret_czXKO = realsmith_nWKJZ(proxy_McfsM, &(p_1_duanu));
return proxy_ret_czXKO;
}


int gdb_stdlog_realsmith_tghA6 = 12;

int immediate_quit_realsmith_tghA6 = 6;

long monitor_debug_p_realsmith_tghA6 = 13;

int timeout_realsmith_tghA6 = 20;

int
realsmith_tghA6 (char *string, char *buf, int buflen)
{
  char *p = string;
  int obuflen = buflen;
  int c;
  if (monitor_debug_p_realsmith_tghA6)
    {
      char *safe_string = (char *) (1);
      (1);
      (1);
    }
  immediate_quit_realsmith_tghA6++;
  while (1)
    {
      if (buf)
 {
   if (buflen < 2)
     {
       *buf = '\000';
       immediate_quit_realsmith_tghA6--;
       return -1;
     }
   c = (1);
   if (c == '\000')
     continue;
   *buf++ = c;
   buflen--;
 }
      else
 c = (1);
      if (*p == '\003' || c == *p)
 {
   p++;
   if (*p == '\0')
     {
       immediate_quit_realsmith_tghA6--;
       if (buf)
  {
    *buf++ = '\000';
    return obuflen - buflen;
  }
       else
  return 0;
     }
 }
      else
 {
   int i;
   for (i = (p - string) - 1; i >= 0; i--)
     if (string[i] == c)
       {
  if (! (1))
    {
      p = string + i + 1;
      break;
    }
       }
   if (i < 0)
     p = string;
 }
    }
}
int realsmith_proxy_oIT8V(char p_0_xFPM4, char p_1_eVWYq, int p_2_O1lUi) {
char proxy_A2mIK[16] = { 74, p_0_xFPM4, 43, 97, 85, 66, 71, 27, p_0_xFPM4, p_0_xFPM4, p_0_xFPM4, 25, 55, p_0_xFPM4, p_0_xFPM4, 66 };
int proxy_ret_gFmhW = realsmith_tghA6(proxy_A2mIK, &(p_1_eVWYq), p_2_O1lUi);
return proxy_ret_gFmhW;
}


int TAG_Empty_realsmith_5U8SH = -2;

int fpu_tag_word_realsmith_5U8SH = -3;

int top_realsmith_5U8SH = -8;

int realsmith_5U8SH(int stnr)
{
 int regnr = (top_realsmith_5U8SH + stnr) & 7;
 return ((fpu_tag_word_realsmith_5U8SH >> (regnr * 2)) & 3) == TAG_Empty_realsmith_5U8SH;
}

__attribute__((used)) static unsigned long realsmith_RKt8j(int* seed, int* frame, unsigned long contentSize,
                                  unsigned long literalsSize, int info)
{
    int seqStore;
    unsigned long numSequences;
    (1);
    numSequences = (1);
    (1);
    return numSequences;
}
unsigned long realsmith_proxy_NPdXN(int p_0_y2Rcx, int p_1_vlzca, unsigned long p_2_0giC8, unsigned long p_3_LvE81, int p_4_Rs0gL) {
int proxy_zuVJg[12] = { p_0_y2Rcx, p_0_y2Rcx, 16, 47, 49, 40, 46, p_0_y2Rcx, 90, p_0_y2Rcx, 54, 56 };
unsigned long proxy_ret_uJ9eT = realsmith_RKt8j(proxy_zuVJg, &(p_1_vlzca), p_2_0giC8, p_3_LvE81, p_4_Rs0gL);
return proxy_ret_uJ9eT;
}


int native_info_realsmith_ALsEf = 14;

__attribute__((used)) static int
realsmith_ALsEf (void)
{
  int obj = (1);
  (1);
  return obj;
}

int
realsmith_Ee9AN(int c)
{
 switch (c) {
 case 'n':
  return ('\n');
 case 'r':
  return ('\r');
 case 't':
  return ('\t');
 case 'f':
  return ('\f');
 case 'v':
  return ('\v');
 case 'b':
  return ('\b');
 case 'a':
  return ('\a');
 default:
  return (c);
 }
}

int
realsmith_dBK48(
 char *str,
 int *lfp
 )
{
 char *cp;
 char buf[30];
 unsigned long b;
 if (*str == '0' && (*(str+1) == 'x' || *(str+1) == 'X'))
  return (1);
 if (*str == '"') {
  cp = str + 1;
  b = 0;
  while ('"' != *cp && '\0' != *cp &&
         b < (1) - 1)
   buf[b++] = *cp++;
  buf[b] = '\0';
  return (1);
 }
 if ((*str >= 'A' && *str <= 'F') || (*str >= 'a' && *str <= 'f'))
  return (1);
 if ((1))
  return 1;
 return (1);
}
int realsmith_proxy_9leqZ(char p_0_AOojz, int p_1_pXaCW) {
int proxy_ret_eQGeZ = realsmith_dBK48(&(p_0_AOojz), &(p_1_pXaCW));
return proxy_ret_eQGeZ;
}


__attribute__((used)) static inline int
realsmith_zuQZ9(int blk_per_trk, int recid)
{
 if (recid < 3)
  return 1;
 if (recid < blk_per_trk)
  return 0;
 if (recid < 2 * blk_per_trk)
  return 1;
 return 0;
}

int EBADF_realsmith_RvVes = -7;

int UCONV_IN_ENDIAN_MASKS_realsmith_RvVes = 9;

int UCONV_IN_NAT_ENDIAN_realsmith_RvVes = 7;

int UCONV_OUT_ENDIAN_MASKS_realsmith_RvVes = -4;

int UCONV_OUT_NAT_ENDIAN_realsmith_RvVes = -3;

__attribute__((used)) static int
realsmith_RvVes(int flag, int *in, int *out)
{
 *in = flag & UCONV_IN_ENDIAN_MASKS_realsmith_RvVes;
 if (*in == UCONV_IN_ENDIAN_MASKS_realsmith_RvVes)
  return (EBADF_realsmith_RvVes);
 if (*in == 0)
  *in = UCONV_IN_NAT_ENDIAN_realsmith_RvVes;
 *out = flag & UCONV_OUT_ENDIAN_MASKS_realsmith_RvVes;
 if (*out == UCONV_OUT_ENDIAN_MASKS_realsmith_RvVes)
  return (EBADF_realsmith_RvVes);
 if (*out == 0)
  *out = UCONV_OUT_NAT_ENDIAN_realsmith_RvVes;
 return (0);
}
int realsmith_proxy_H3mBT(int p_0_zXUZ4, int p_1_xSoOp, int p_2_s9Hwu) {
int proxy_y7UPx[11] = { 64, p_1_xSoOp, 79, p_1_xSoOp, p_1_xSoOp, 21, 2, 96, p_1_xSoOp, 85, p_1_xSoOp };
int proxy_ret_kHuBm = realsmith_RvVes(p_0_zXUZ4, proxy_y7UPx, &(p_2_s9Hwu));
return proxy_ret_kHuBm;
}


__attribute__((used)) static inline char *realsmith_1aYIL(const char *str)
{
 return str ? ("0") : ((void*)0);
}
char realsmith_proxy_oNreR(char p_0_rWu9r) {
char * proxy_ret_elJE9 = realsmith_1aYIL(&(p_0_rWu9r));
return *proxy_ret_elJE9;
}


__attribute__((used)) static int realsmith_32egx (char *a, int la, char *b, int lb) {
  if (la < lb) {
    if (!la) { return -1; }
    return ((1) <= 0) ? -1 : 1;
  }
  if (la > lb) {
    if (!lb) { return 1; }
    return ((1) >= 0) ? 1 : -1;
  }
  if (!la) {
    return 0;
  }
  return (1);
}
int realsmith_proxy_oaaAB(char p_0_p8O8E, int p_1_iwu9a, char p_2_cspSu, int p_3_5uwzy) {
char proxy_eOLGn[12] = { p_0_p8O8E, 63, p_0_p8O8E, p_0_p8O8E, p_0_p8O8E, 29, p_0_p8O8E, 88, 49, 14, p_0_p8O8E, 42 };
int proxy_ret_nLjya = realsmith_32egx(proxy_eOLGn, p_1_iwu9a, &(p_2_cspSu), p_3_5uwzy);
return proxy_ret_nLjya;
}


int IOP13XX_ATUE_OCCAR_realsmith_eZ4EI = 13;

int IOP13XX_ATUE_OCCDR_realsmith_eZ4EI = -9;

__attribute__((used)) static int realsmith_eZ4EI(unsigned long addr)
{
 int val;
 (1);
 val = (1);
 (1);
 return val;
}

int SPEED_10000_realsmith_UyCs0 = -3;

int SPEED_14000_realsmith_UyCs0 = -4;

int SPEED_2500_realsmith_UyCs0 = 14;

int SPEED_25000_realsmith_UyCs0 = 15;

int SPEED_5000_realsmith_UyCs0 = 5;

int SPEED_UNKNOWN_realsmith_UyCs0 = 6;

__attribute__((used)) static inline int realsmith_UyCs0(int speed)
{
 switch (speed) {
 case 128:
  return SPEED_2500_realsmith_UyCs0;
 case 133:
  return SPEED_5000_realsmith_UyCs0;
 case 129:
 case 130:
  return SPEED_10000_realsmith_UyCs0;
 case 131:
  return SPEED_14000_realsmith_UyCs0;
 case 132:
  return SPEED_25000_realsmith_UyCs0;
 }
 return SPEED_UNKNOWN_realsmith_UyCs0;
}

__attribute__((used)) static inline int realsmith_y498S(const char *name, const char *b, int *hash) {
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
int realsmith_proxy_gmvVT(char p_0_MXKHj, char p_1_Gucof, int p_2_k5edP) {
char proxy_sM6vD[10] = { 21, 12, 28, p_1_Gucof, p_1_Gucof, 58, p_1_Gucof, 96, p_1_Gucof, p_1_Gucof };
int proxy_sIQ3O[17] = { 45, p_2_k5edP, 46, p_2_k5edP, p_2_k5edP, p_2_k5edP, 80, p_2_k5edP, p_2_k5edP, p_2_k5edP, 53, 23, 65, p_2_k5edP, p_2_k5edP, p_2_k5edP, 84 };
int proxy_ret_9vKGp = realsmith_y498S(&(p_0_MXKHj), proxy_sM6vD, proxy_sIQ3O);
return proxy_ret_9vKGp;
}


__attribute__((used)) static inline unsigned char realsmith_2C5k2(unsigned char *data) { return data[0] | data[1] << 8; }
unsigned char realsmith_proxy_vyNRP(unsigned char p_0_Q6u4B) {
unsigned char proxy_5kDMG[16] = { p_0_Q6u4B, p_0_Q6u4B, p_0_Q6u4B, p_0_Q6u4B, 14, 32, p_0_Q6u4B, 74, p_0_Q6u4B, p_0_Q6u4B, 59, p_0_Q6u4B, p_0_Q6u4B, p_0_Q6u4B, 39, 50 };
unsigned char proxy_ret_OLfdj = realsmith_2C5k2(proxy_5kDMG);
return proxy_ret_OLfdj;
}


long HCBUFSIZ_LARGE_realsmith_G4XI3 = 19;

long realsmith_G4XI3 (int *fp)
{
  long cnt = 0;
  char *buf = (char *) (1);
  char prev = '\n';
  while (!(1))
  {
    unsigned long nread = (1);
    if (nread < 1) continue;
    unsigned long i;
    for (i = 0; i < nread; i++)
    {
      if (prev == '\n') cnt++;
      prev = buf[i];
    }
  }
  (1);
  return cnt;
}
long realsmith_proxy_cUhrP(int p_0_tJLUi) {
long proxy_ret_8AAmH = realsmith_G4XI3(&(p_0_tJLUi));
return proxy_ret_8AAmH;
}


int FALSE_realsmith_dTRsB = 10;

long SB_DSP_READY_realsmith_dTRsB = -7;

int SB_GET_DSP_VERSION_realsmith_dTRsB = -1;

int SB_TIMEOUT_realsmith_dTRsB = 12;

int realsmith_dTRsB(int BasePort)
{
    int TimeOut;
    int Status;
    int DSP_Major, DSP_Minor;
    (1);
    (1);
    (1);
    for (TimeOut = 0; TimeOut < 30000; TimeOut ++);
    (1);
    (1);
    if ((1))
    {
        for (TimeOut = SB_TIMEOUT_realsmith_dTRsB;
             (Status = ((1) != SB_DSP_READY_realsmith_dTRsB) && (TimeOut > 0));
             TimeOut --);
    }
    (1);
    if (! (1))
        return FALSE_realsmith_dTRsB;
    (1);
    if (! (1))
        return FALSE_realsmith_dTRsB;
    DSP_Major = (1);
    DSP_Minor = (1);
    (1);
    if (DSP_Major == 0xFF && DSP_Minor == 0xFF)
        return FALSE_realsmith_dTRsB;
    (1);
    return (DSP_Major * 256) + DSP_Minor;
}

long SZ_OK_realsmith_7p4Ed = 9;

long realsmith_7p4Ed(int *p, int *inStream,
    int allocMain, int allocTemp)
{
  long res = (1);
  if (res != SZ_OK_realsmith_7p4Ed)
    (1);
  return res;
}
long realsmith_proxy_66R5J(int p_0_CynAF, int p_1_XQbls, int p_2_Qmj8j, int p_3_BVcrP) {
int proxy_cZhK4[20] = { 11, 65, p_0_CynAF, p_0_CynAF, 100, 5, p_0_CynAF, p_0_CynAF, p_0_CynAF, 17, 5, 13, 66, p_0_CynAF, 85, p_0_CynAF, 78, 83, 47, 89 };
long proxy_ret_x2unQ = realsmith_7p4Ed(proxy_cZhK4, &(p_1_XQbls), p_2_Qmj8j, p_3_BVcrP);
return proxy_ret_x2unQ;
}


long SIG_BLOCK__realsmith_LRZ4p = 13;

long SIG_SETMASK__realsmith_LRZ4p = 1;

long SIG_UNBLOCK__realsmith_LRZ4p = -10;

int _EINVAL_realsmith_LRZ4p = -1;

__attribute__((used)) static int realsmith_LRZ4p(long how, int set) {
    if (how == SIG_BLOCK__realsmith_LRZ4p)
        (1);
    else if (how == SIG_UNBLOCK__realsmith_LRZ4p)
        (1);
    else if (how == SIG_SETMASK__realsmith_LRZ4p)
        (1);
    else
        return _EINVAL_realsmith_LRZ4p;
    return 0;
}

int SCC_UHC_USBCEN_realsmith_ON3uR = -8;

__attribute__((used)) static inline int realsmith_ON3uR(int const val)
{
 const int const mask = SCC_UHC_USBCEN_realsmith_ON3uR | SCC_UHC_USBCEN_realsmith_ON3uR;
 return((val & mask) == mask);
}

int ENOMEM_realsmith_NDny2 = 8;

int nf_conntrack_htable_size_realsmith_NDny2 = 15;

int nf_ct_expect_cachep_realsmith_NDny2 = -3;

int nf_ct_expect_hash_realsmith_NDny2 = 2;

int nf_ct_expect_hsize_realsmith_NDny2 = 7;

int nf_ct_expect_max_realsmith_NDny2 = 18;

int realsmith_NDny2(void)
{
 if (!nf_ct_expect_hsize_realsmith_NDny2) {
  nf_ct_expect_hsize_realsmith_NDny2 = nf_conntrack_htable_size_realsmith_NDny2 / 256;
  if (!nf_ct_expect_hsize_realsmith_NDny2)
   nf_ct_expect_hsize_realsmith_NDny2 = 1;
 }
 nf_ct_expect_max_realsmith_NDny2 = nf_ct_expect_hsize_realsmith_NDny2 * 4;
 nf_ct_expect_cachep_realsmith_NDny2 = (1);
 if (!nf_ct_expect_cachep_realsmith_NDny2)
  return -ENOMEM_realsmith_NDny2;
 nf_ct_expect_hash_realsmith_NDny2 = (1);
 if (!nf_ct_expect_hash_realsmith_NDny2) {
  (1);
  return -ENOMEM_realsmith_NDny2;
 }
 return 0;
}

int TB0219_DIP_SWITCH_realsmith_oDlV6 = -2;

__attribute__((used)) static inline char realsmith_oDlV6(unsigned int pin)
{
 int values;
 values = (1);
 if (values & (1 << pin))
  return '1';
 return '0';
}

int realsmith_I67N3(const char *k, int def)
{
 const char *v = ("0");
 return v ? (1) : def;
}
int realsmith_proxy_KtW6I(char p_0_2uHjl, int p_1_kWk3U) {
char proxy_8GJrD[10] = { p_0_2uHjl, p_0_2uHjl, p_0_2uHjl, p_0_2uHjl, 84, 68, 87, 81, 62, p_0_2uHjl };
int proxy_ret_X0rvc = realsmith_I67N3(proxy_8GJrD, p_1_kWk3U);
return proxy_ret_X0rvc;
}


__attribute__((used)) static int realsmith_4FjP2(int a, int b, int c)
{
   int p = a + b - c;
   int pa = (1);
   int pb = (1);
   int pc = (1);
   if (pa <= pb && pa <= pc) return a;
   if (pb <= pc) return b;
   return c;
}

__attribute__((used)) static int realsmith_H3CDQ(int decnum)
{
 int fac, num = 0;
 for (fac = 1; decnum; fac *= 16) {
  num += (decnum % 10) * fac;
  decnum /= 10;
 }
 return num;
}

int TREE_HAS_DUPS_realsmith_srmb4 = -5;

int TREE_UNORDERED_realsmith_srmb4 = 8;

__attribute__((used)) static int realsmith_srmb4(unsigned mode1, const char *name1, unsigned mode2, const char *name2)
{
 int len1 = (1);
 int len2 = (1);
 int len = len1 < len2 ? len1 : len2;
 unsigned char c1, c2;
 int cmp;
 cmp = (1);
 if (cmp < 0)
  return 0;
 if (cmp > 0)
  return TREE_UNORDERED_realsmith_srmb4;
 c1 = name1[len];
 c2 = name2[len];
 if (!c1 && !c2)
  return TREE_HAS_DUPS_realsmith_srmb4;
 if (!c1 && (1))
  c1 = '/';
 if (!c2 && (1))
  c2 = '/';
 return c1 < c2 ? 0 : TREE_UNORDERED_realsmith_srmb4;
}
int realsmith_proxy_ZYxV8(unsigned int p_0_cd303, char p_1_ni46e, unsigned int p_2_GGVE2, char p_3_0d80F) {
int proxy_ret_Ngza7 = realsmith_srmb4(p_0_cd303, &(p_1_ni46e), p_2_GGVE2, &(p_3_0d80F));
return proxy_ret_Ngza7;
}


int U32_MAX_realsmith_1PxK1 = 4;

int XT_HASHLIMIT_BYTE_SHIFT_realsmith_1PxK1 = 12;

__attribute__((used)) static int realsmith_1PxK1(int user)
{
 int r;
 r = user ? U32_MAX_realsmith_1PxK1 / user : U32_MAX_realsmith_1PxK1;
 return (r - 1) << XT_HASHLIMIT_BYTE_SHIFT_realsmith_1PxK1;
}

long FUNCTION_DECL_realsmith_sLrH5 = 11;

long STRING_CST_realsmith_sLrH5 = -1;

long TARGET_NO_SDATA_realsmith_sLrH5 = 4;

long VAR_DECL_realsmith_sLrH5 = -9;

long ia64_section_threshold_realsmith_sLrH5 = 2;

__attribute__((used)) static int
realsmith_sLrH5 (int exp)
{
  if (TARGET_NO_SDATA_realsmith_sLrH5)
    return 0;
  if ((1) == STRING_CST_realsmith_sLrH5)
    return 0;
  if ((1) == FUNCTION_DECL_realsmith_sLrH5)
    return 0;
  if ((1) == VAR_DECL_realsmith_sLrH5 && (1))
    {
      const char *section = ("0");
      if ((1) == 0
   || (1) == 0
   || (1) == 0
   || (1) == 0
   || (1) == 0
   || (1) == 0)
 return 1;
    }
  else
    {
      long size = (1);
      if (size > 0 && size <= ia64_section_threshold_realsmith_sLrH5)
 return 1;
    }
  return 0;
}

int FALSE_realsmith_jtJKn = 8;

int PHYS_REFERENCED_realsmith_jtJKn = 11;

int TRUE_realsmith_jtJKn = 14;

int
realsmith_jtJKn(int pn)
{
        if ((1))
  return TRUE_realsmith_jtJKn;
 return FALSE_realsmith_jtJKn;
}

int INVALID_HANDLE_VALUE_realsmith_ajRhA = -10;

int realsmith_ajRhA(int DriveIndex, int bLockDrive, int bWriteAccess, int bWriteShare)
{
 int hPhysical = INVALID_HANDLE_VALUE_realsmith_ajRhA;
 char* PhysicalPath = ("0");
 hPhysical = (1);
 (1);
 return hPhysical;
}

long RSDT_OFFSET_realsmith_nSMhr = -4;

long XSDT_OFFSET_realsmith_nSMhr = -6;

long basl_acpi_base_realsmith_nSMhr = 11;

int errno_realsmith_nSMhr = -6;

__attribute__((used)) static int
realsmith_nSMhr(int *fp)
{
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
 (1);
 return (0);
err_exit:
 return (errno_realsmith_nSMhr);
}
int realsmith_proxy_AiPS0(int p_0_Nl5jy) {
int proxy_1JdaX[11] = { 64, p_0_Nl5jy, 34, 56, p_0_Nl5jy, p_0_Nl5jy, p_0_Nl5jy, 80, 97, p_0_Nl5jy, 50 };
int proxy_ret_vH8IF = realsmith_nSMhr(proxy_1JdaX);
return proxy_ret_vH8IF;
}


__attribute__((used)) static int realsmith_5OFdD(int *bp, const char *str)
{
    int n, ret;
    n = (1);
    ret = (1);
    return ret;
}
int realsmith_proxy_d3qhy(int p_0_R6g05, char p_1_9oicN) {
int proxy_ret_vTst0 = realsmith_5OFdD(&(p_0_R6g05), &(p_1_9oicN));
return proxy_ret_vTst0;
}


__attribute__((used)) static inline long realsmith_Yf2s8(long rp, long wp, long size)
{
 if (rp <= wp)
  return size - 1 + rp - wp;
 return rp - wp - 1;
}

__attribute__((used)) static inline unsigned long realsmith_O3erL(const unsigned long sample_rate,
      const unsigned long long const duration)
{
 return (unsigned long)(duration * (unsigned long long const)sample_rate / 1000000000ULL);
}

__attribute__((used)) static unsigned long realsmith_ukCTb(int* seed, int* frame, unsigned long contentSize,
                                  unsigned long literalsSize, int info)
{
    int seqStore;
    unsigned long numSequences;
    (1);
    numSequences = (1);
    (1);
    return numSequences;
}
unsigned long realsmith_proxy_sMRT4(int p_0_x8DJ6, int p_1_2MyHr, unsigned long p_2_Uogf2, unsigned long p_3_iYB1m, int p_4_1RP7H) {
int proxy_si9Vj[14] = { p_0_x8DJ6, p_0_x8DJ6, p_0_x8DJ6, p_0_x8DJ6, 63, 99, 10, 18, p_0_x8DJ6, 43, p_0_x8DJ6, p_0_x8DJ6, p_0_x8DJ6, p_0_x8DJ6 };
int proxy_5AC2F[20] = { 21, 50, p_1_2MyHr, 3, p_1_2MyHr, 43, 53, 68, 28, p_1_2MyHr, 71, p_1_2MyHr, 23, 37, 66, 98, p_1_2MyHr, p_1_2MyHr, p_1_2MyHr, p_1_2MyHr };
unsigned long proxy_ret_nwCha = realsmith_ukCTb(proxy_si9Vj, proxy_5AC2F, p_2_Uogf2, p_3_iYB1m, p_4_1RP7H);
return proxy_ret_nwCha;
}


long COMPLEX_CST_realsmith_ieMQ7 = -4;

long REAL_CST_realsmith_ieMQ7 = 14;

__attribute__((used)) static int
realsmith_ieMQ7 (int expr, const int *value)
{
  (1);
  return (((1) == REAL_CST_realsmith_ieMQ7
    && ! (1)
    && (1))
   || ((1) == COMPLEX_CST_realsmith_ieMQ7
       && (1)
       && (1)));
}
int realsmith_proxy_ybKBJ(int p_0_Ol0ui, int p_1_UQ4jF) {
int proxy_sd6Pc[10] = { 44, p_1_UQ4jF, 74, p_1_UQ4jF, p_1_UQ4jF, p_1_UQ4jF, p_1_UQ4jF, p_1_UQ4jF, p_1_UQ4jF, 60 };
int proxy_ret_rIi1j = realsmith_ieMQ7(p_0_Ol0ui, proxy_sd6Pc);
return proxy_ret_rIi1j;
}


int DMALPEND_realsmith_ah72w = 18;

int DMALPEND_NF_realsmith_ah72w = 13;

__attribute__((used)) static int
realsmith_ah72w(int *buf, int idx,
    int burst, int jump_addr_relative)
{
 buf[0] = DMALPEND_realsmith_ah72w;
 buf[0] |= DMALPEND_NF_realsmith_ah72w;
 buf[0] |= (idx << 2);
 if (burst)
  buf[0] |= (1 << 1) | (1 << 0);
 else
  buf[0] |= (0 << 1) | (1 << 0);
 buf[1] = jump_addr_relative;
 return (2);
}
int realsmith_proxy_xk3e3(int p_0_faTva, int p_1_wTrZQ, int p_2_ehCxS, int p_3_z3pTq) {
int proxy_Lh1jN[20] = { p_0_faTva, p_0_faTva, p_0_faTva, p_0_faTva, 18, 25, p_0_faTva, p_0_faTva, p_0_faTva, p_0_faTva, p_0_faTva, 82, p_0_faTva, 11, 77, p_0_faTva, 30, 54, 62, 99 };
int proxy_ret_3cC3c = realsmith_ah72w(proxy_Lh1jN, p_1_wTrZQ, p_2_ehCxS, p_3_z3pTq);
return proxy_ret_3cC3c;
}


int FALSE_realsmith_zgCSD = 17;

int FSC_RENAME_realsmith_zgCSD = 12;

int
realsmith_zgCSD(int pszFrom, int pszTo, int * pbErrorOnDest, int bSilent)
{
   int dwRet;
   *pbErrorOnDest = FALSE_realsmith_zgCSD;
   dwRet = (1);
   if (!dwRet)
      (1);
   return dwRet;
}
int realsmith_proxy_p4vsb(int p_0_uWhcF, int p_1_Pd4oG, int p_2_855x0, int p_3_xmmlO) {
int proxy_DW3JT[16] = { p_2_855x0, 88, p_2_855x0, 21, p_2_855x0, p_2_855x0, 37, p_2_855x0, 57, p_2_855x0, 62, p_2_855x0, p_2_855x0, 0, 49, 96 };
int proxy_ret_iqK1V = realsmith_zgCSD(p_0_uWhcF, p_1_Pd4oG, proxy_DW3JT, p_3_xmmlO);
return proxy_ret_iqK1V;
}


unsigned long S3C2443_CLKDIV0_HCLKDIV_MASK_realsmith_9vGpK = -10;

__attribute__((used)) static inline unsigned long realsmith_9vGpK(unsigned long clkcon0)
{
 clkcon0 &= S3C2443_CLKDIV0_HCLKDIV_MASK_realsmith_9vGpK;
 return clkcon0 + 1;
}

char* realsmith_tyzor(const char *path) {
        char *d, *dir, *dir2;
        (1);
        d = ("0");
        if (!d)
                return ((void*)0);
        dir = ("0");
        (1);
        if (dir == d)
                return d;
        dir2 = ("0");
        (1);
        return dir2;
}
char realsmith_proxy_TUAz2(char p_0_9892S) {
char * proxy_ret_sdmBA = realsmith_tyzor(&(p_0_9892S));
return *proxy_ret_sdmBA;
}


__attribute__((used)) static inline int realsmith_0CMuh(int addr)
{
 return (addr >> 8) & 0xfffffc00;
}

long bad_pfn_realsmith_vmaRr = 20;

long fault_pfn_realsmith_vmaRr = 14;

long hwpoison_pfn_realsmith_vmaRr = 12;

int realsmith_vmaRr(long pfn)
{
 return pfn == bad_pfn_realsmith_vmaRr || pfn == hwpoison_pfn_realsmith_vmaRr || pfn == fault_pfn_realsmith_vmaRr;
}

int S_IRGRP_realsmith_lF70v = 14;

int S_IROTH_realsmith_lF70v = -8;

int S_IRUSR_realsmith_lF70v = -8;

int S_IWGRP_realsmith_lF70v = 17;

int S_IWOTH_realsmith_lF70v = 10;

int S_IWUSR_realsmith_lF70v = 15;

int _O_BINARY_realsmith_lF70v = 8;

int _S_IREAD_realsmith_lF70v = 16;

int _S_IWRITE_realsmith_lF70v = 19;

int realsmith_lF70v(const char *filename, int flags)
{
 int ret;
 ret = (1);
 return ret;
}
int realsmith_proxy_OFAVh(char p_0_mJR8P, int p_1_0wOe3) {
char proxy_w4j26[20] = { 11, 57, p_0_mJR8P, p_0_mJR8P, 52, 89, p_0_mJR8P, 65, p_0_mJR8P, p_0_mJR8P, p_0_mJR8P, p_0_mJR8P, 57, 51, 6, 18, p_0_mJR8P, p_0_mJR8P, 12, p_0_mJR8P };
int proxy_ret_8BGYR = realsmith_lF70v(proxy_w4j26, p_1_0wOe3);
return proxy_ret_8BGYR;
}


long USE_realsmith_tX1a5 = 1;

long max_uid_cuid_realsmith_tX1a5 = 6;

__attribute__((used)) static int
realsmith_tX1a5 (long insn)
{
  while (insn != 0 && (1) > max_uid_cuid_realsmith_tX1a5
  && (1) && (1) == USE_realsmith_tX1a5)
    insn = (1);
  (1);
  return (1);
}

int VM_ALLOC_NOBUSY_realsmith_jAXux = 11;

int VM_ALLOC_WIRED_realsmith_jAXux = -3;

int VM_ALLOC_ZERO_realsmith_jAXux = -1;

int pti_obj_realsmith_jAXux = -8;

int pti_pg_idx_realsmith_jAXux = 0;

__attribute__((used)) static int
realsmith_jAXux(void)
{
 int m;
 (1);
 m = (1);
 return (m);
}

int nonlocal_goto_handler_labels_realsmith_BoTac = 10;

__attribute__((used)) static int realsmith_BoTac (int insn)
{
  switch ((1))
    {
    case 129:
    case 128:
      return 1;
    case 130:
      if (nonlocal_goto_handler_labels_realsmith_BoTac)
 return 1;
    default:
      return (1);
    }
}

int TM_LE_realsmith_4xVuS = -5;

int TM_LT_realsmith_4xVuS = -1;

__attribute__((used)) static int realsmith_4xVuS (int *L, const int *l, const int *r) {
  int res;
  if ((1) != (1))
    return (1);
  else if ((1))
    return (1);
  else if ((1))
    return (1) <= 0;
  else if ((res = (1)) != -1)
    return res;
  else if ((res = (1)) != -1)
    return !res;
  return (1);
}
int realsmith_proxy_6jY8I(int p_0_MwF7z, int p_1_e56yV, int p_2_HTRHy) {
int proxy_ftcm2[12] = { p_1_e56yV, p_1_e56yV, 33, 7, p_1_e56yV, 39, 4, p_1_e56yV, 79, 60, p_1_e56yV, p_1_e56yV };
int proxy_ret_AHfEX = realsmith_4xVuS(&(p_0_MwF7z), proxy_ftcm2, &(p_2_HTRHy));
return proxy_ret_AHfEX;
}


unsigned int const TPACPI_SAFE_LEDS_realsmith_aWTkW = 11;

__attribute__((used)) static inline int realsmith_aWTkW(const unsigned int led)
{
 return (1U & (TPACPI_SAFE_LEDS_realsmith_aWTkW >> led)) == 0;
}

unsigned long MATRIX_COLS_realsmith_m3jDN = -3;

unsigned long MATRIX_ROWS_realsmith_m3jDN = 13;

unsigned long _BASE_realsmith_m3jDN = -2;

int realsmith_m3jDN(long keycode, unsigned long *row, unsigned long *col){
  for(unsigned long i=0; i<MATRIX_ROWS_realsmith_m3jDN; i++){
    for(unsigned long j=0; j<MATRIX_COLS_realsmith_m3jDN; j++){
      if( (1)==keycode){
        *row = i;
        *col = j;
        return 1;
      }
    }
  }
  return 0;
}
int realsmith_proxy_1NTWB(long p_0_iMFAw, unsigned long p_1_K0iUT, unsigned long p_2_rHH4j) {
int proxy_ret_Ebbcx = realsmith_m3jDN(p_0_iMFAw, &(p_1_K0iUT), &(p_2_rHH4j));
return proxy_ret_Ebbcx;
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
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output /home/chuang/FramaCsliceNew/creal/batch_experiments/test_20251023_154828/test66/YUG0EW_seed.c
 * Seed:      114521193
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_12 = 0x8FL;
static int32_t g_13[3] = {(-1L),(-1L),(-1L)};
static uint8_t g_26 = 1UL;
static int32_t g_72[8][2][7] = {{{1L,0x7656207CL,1L,3L,1L,3L,1L},{3L,3L,0xB3DAD933L,3L,3L,0xB3DAD933L,3L}},{{1L,3L,1L,0x7656207CL,1L,3L,1L},{(-2L),3L,(-2L),(-2L),3L,(-2L),(-2L)}},{{1L,0x7656207CL,0xE46196C9L,0x7656207CL,1L,0xEA99669DL,1L},{3L,(-2L),(-2L),3L,(-2L),(-2L),3L}},{{1L,3L,0xE46196C9L,0xEA99669DL,1L,0xEA99669DL,0xE46196C9L},{(-2L),(-2L),3L,(-2L),(-2L),3L,(-2L)}},{{1L,0xEA99669DL,0xE46196C9L,3L,0xE46196C9L,0xEA99669DL,1L},{0xB3DAD933L,(-2L),0xB3DAD933L,0xB3DAD933L,(-2L),0xB3DAD933L,0xB3DAD933L}},{{1L,3L,1L,3L,1L,0x7656207CL,1L},{(-2L),0xB3DAD933L,0xB3DAD933L,(-2L),0xB3DAD933L,0xB3DAD933L,(-2L)}},{{0xE46196C9L,3L,0xE46196C9L,0xEA99669DL,1L,0xEA99669DL,0xE46196C9L},{(-2L),(-2L),3L,(-2L),(-2L),3L,(-2L)}},{{1L,0xEA99669DL,0xE46196C9L,3L,0xE46196C9L,0xEA99669DL,1L},{0xB3DAD933L,(-2L),0xB3DAD933L,0xB3DAD933L,(-2L),0xB3DAD933L,0xB3DAD933L}}};
static uint64_t g_78 = 0xDE0D780A8980DF3ALL;
static const int32_t ** const *g_83 = (void*)0;
static int32_t g_89 = 0x0C122BDAL;
static int64_t g_108 = 0x69E62AD52EBB0BE5LL;
static uint32_t g_111 = 0xCF28406AL;
static uint16_t g_114 = 4UL;
static int64_t g_115 = (-6L);
static int64_t *g_148 = &g_115;
static const uint32_t g_153[9] = {0x544D90D5L,0x544D90D5L,0x544D90D5L,0x544D90D5L,0x544D90D5L,0x544D90D5L,0x544D90D5L,0x544D90D5L,0x544D90D5L};
static int32_t g_169 = (-7L);
static uint8_t g_186 = 1UL;
static const int64_t g_248 = 0x6235A88E17929216LL;
static uint32_t *g_273 = &g_111;
static uint32_t **g_272 = &g_273;
static uint32_t **g_275 = (void*)0;
static uint8_t g_280 = 255UL;
static uint8_t *g_328 = (void*)0;
static uint8_t g_330 = 0x0BL;
static int64_t **g_346 = (void*)0;
static int64_t ***g_345[6] = {&g_346,&g_346,&g_346,&g_346,&g_346,&g_346};
static int64_t ****g_344 = &g_345[3];
static int64_t **** const * const g_343 = &g_344;
static int16_t g_361 = 0L;
static int64_t ***g_363 = &g_346;
static int64_t **g_393 = &g_148;
static int64_t *** const g_392 = &g_393;
static int64_t *** const *g_391 = &g_392;
static const int64_t *g_394 = &g_108;
static int32_t *g_398 = &g_169;
static int32_t **g_397 = &g_398;
static int32_t ***g_396 = &g_397;
static int16_t g_404[3] = {(-1L),(-1L),(-1L)};
static uint64_t g_418 = 0x49C35A51F451565ELL;
static uint8_t g_424[7] = {4UL,4UL,0xDBL,4UL,4UL,0xDBL,4UL};
static uint16_t g_495[4] = {0x8E36L,0x8E36L,0x8E36L,0x8E36L};
static uint8_t * const *g_512 = &g_328;
static uint8_t * const **g_511 = &g_512;
static int8_t g_542 = 0L;
static uint8_t g_578[1][6][5] = {{{5UL,5UL,5UL,5UL,5UL},{0UL,0UL,0UL,0UL,0UL},{5UL,5UL,5UL,5UL,5UL},{0UL,0UL,0UL,0UL,0UL},{5UL,5UL,5UL,5UL,5UL},{0UL,0UL,0UL,0UL,0UL}}};
static int64_t g_585 = 0x85B16D08ABF4DC79LL;
static int64_t *****g_645 = &g_344;
static int64_t *****g_647 = &g_344;
static int64_t *****g_648 = &g_344;
static int64_t *****g_649 = &g_344;
static int8_t *g_716 = &g_542;
static int8_t **g_715 = &g_716;
static uint16_t *g_794 = (void*)0;
static uint16_t **g_793 = &g_794;
static uint16_t ***g_792[2][4] = {{&g_793,&g_793,&g_793,&g_793},{&g_793,&g_793,&g_793,&g_793}};
static uint16_t ***g_796[7][3] = {{(void*)0,(void*)0,&g_793},{(void*)0,&g_793,(void*)0},{(void*)0,&g_793,&g_793},{&g_793,&g_793,&g_793},{(void*)0,(void*)0,&g_793},{(void*)0,&g_793,(void*)0},{(void*)0,&g_793,&g_793}};
static uint16_t g_919 = 5UL;
static int8_t g_979[2] = {0x43L,0x43L};
static uint16_t ****g_1016 = &g_796[0][1];
static uint16_t *****g_1015 = &g_1016;
static int16_t g_1017 = 0L;
static const int32_t *g_1056 = &g_169;
static const int32_t * const *g_1055 = &g_1056;
static const int32_t * const **g_1054 = &g_1055;
static const int32_t * const ***g_1053 = &g_1054;
static const int32_t * const ****g_1052[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t g_1200 = 6UL;
static int16_t g_1215 = (-1L);
static int64_t g_1219 = 0x2C7199EDB02DCC4DLL;
static int32_t ***g_1278 = (void*)0;
static int16_t g_1343 = (-8L);
static uint32_t g_1347[4] = {1UL,1UL,1UL,1UL};
static int32_t g_1502 = (-1L);
static int32_t *g_1501 = &g_1502;
static int16_t g_1520[10][10] = {{(-1L),(-7L),0L,(-7L),(-1L),0xF73FL,0L,0xF73FL,(-1L),(-7L)},{0xA4D5L,(-7L),0xA4D5L,0x804EL,0x38E1L,(-7L),0x38E1L,0x804EL,0xA4D5L,(-7L)},{(-1L),0x804EL,1L,0x8634L,(-1L),0x8634L,1L,0x804EL,(-1L),0x804EL},{0x38E1L,0x8634L,0xA4D5L,0xF73FL,0xA4D5L,0x8634L,0x38E1L,0xF73FL,0x38E1L,0x8634L},{(-1L),0xF73FL,0L,0xF73FL,(-1L),(-7L),0L,(-7L),(-1L),0xF73FL},{0xA4D5L,0xF73FL,0xA4D5L,0x8634L,0x38E1L,0xF73FL,0x38E1L,0x8634L,0xA4D5L,0xF73FL},{(-1L),0x8634L,1L,0x804EL,(-1L),0x804EL,1L,0x8634L,(-1L),0x8634L},{0x38E1L,0x804EL,0xA4D5L,(-7L),0xA4D5L,0x804EL,0x38E1L,(-7L),0x38E1L,0x804EL},{(-1L),(-7L),0L,(-7L),(-1L),0xF73FL,0L,0xF73FL,(-1L),(-7L)},{0xA4D5L,(-7L),0xA4D5L,0x804EL,0x38E1L,(-7L),0x38E1L,0x804EL,0xA4D5L,(-7L)}};
static uint32_t g_1578 = 1UL;
static uint8_t ****g_1697[3] = {(void*)0,(void*)0,(void*)0};
static int16_t g_1720[7] = {0x2A3EL,0x2A3EL,0x2A3EL,0x2A3EL,0x2A3EL,0x2A3EL,0x2A3EL};
static uint16_t * const *g_1791[8] = {&g_794,&g_794,&g_794,&g_794,&g_794,&g_794,&g_794,&g_794};
static uint16_t * const **g_1790 = &g_1791[0];
static uint64_t g_1825 = 18446744073709551608UL;
static uint8_t *g_1938[10] = {&g_578[0][1][0],&g_330,&g_578[0][1][0],&g_330,&g_578[0][1][0],&g_330,&g_578[0][1][0],&g_330,&g_578[0][1][0],&g_330};
static uint8_t ** const ***g_2016 = (void*)0;
static int32_t *g_2040 = &g_72[5][1][1];
static uint64_t g_2138 = 0x343A8CBE63047B7DLL;
static uint16_t g_2345 = 0x99E8L;
static int32_t g_2398 = 0x77138BF9L;
static uint8_t *g_2609 = &g_578[0][0][1];
static int32_t *g_2659 = &g_2398;
static int32_t ** const g_2658 = &g_2659;
static int32_t ** const *g_2657 = &g_2658;
static int32_t ** const **g_2656 = &g_2657;
static int32_t ** const ***g_2655 = &g_2656;
static int8_t g_2896 = 0x3CL;
static uint16_t g_3130 = 0x93FAL;
static uint32_t g_3203[7][8] = {{0UL,7UL,0xFA6A389DL,1UL,0UL,18446744073709551611UL,0UL,1UL},{0UL,18446744073709551611UL,0UL,1UL,0xFA6A389DL,7UL,0UL,0UL},{18446744073709551615UL,0xFA6A389DL,18446744073709551614UL,7UL,7UL,18446744073709551614UL,0xFA6A389DL,18446744073709551615UL},{18446744073709551615UL,1UL,0x9751EBDBL,0UL,0xFA6A389DL,0x9A3F4544L,18446744073709551614UL,0x9A3F4544L},{0UL,0UL,0UL,0UL,0UL,0x9A3F4544L,18446744073709551611UL,0xFA6A389DL},{0UL,1UL,0UL,1UL,18446744073709551614UL,18446744073709551614UL,1UL,0UL},{0xFA6A389DL,0xFA6A389DL,0UL,18446744073709551615UL,0x9751EBDBL,7UL,18446744073709551611UL,0UL}};
static int32_t **g_3224 = &g_2659;
static uint32_t g_3319 = 0x2621E809L;
static int16_t g_3344 = 0xB1DAL;
static int32_t g_3356 = (-1L);
static uint32_t g_3387[5][7] = {{0xACB17EF8L,4294967286UL,0xACB17EF8L,0x8EF28D51L,0x8EF28D51L,0xACB17EF8L,4294967286UL},{0x53BEE90DL,0x06F751D8L,0x0B5FD99FL,0x0B5FD99FL,0x06F751D8L,0x53BEE90DL,0x06F751D8L},{0xACB17EF8L,0x8EF28D51L,0x8EF28D51L,0xACB17EF8L,4294967286UL,0xACB17EF8L,0x8EF28D51L},{8UL,8UL,0x53BEE90DL,0x06F751D8L,0xA7DAAD5AL,0x53BEE90DL,0x53BEE90DL},{0x8EF28D51L,0xACB17EF8L,4294967286UL,0xACB17EF8L,0x8EF28D51L,0x8EF28D51L,0xACB17EF8L}};
static uint8_t g_3417[5] = {9UL,9UL,9UL,9UL,9UL};
static int8_t g_3560 = (-4L);
static const int32_t ***g_3563 = (void*)0;
static int32_t ** const *g_3689 = &g_397;
static int32_t ** const **g_3688 = &g_3689;
static int32_t *g_3698 = &g_89;
static int16_t g_3750 = 1L;
static int32_t g_4040 = 1L;
static uint16_t g_4043 = 0xBF09L;
static int16_t *g_4211 = &g_3344;
static int16_t **g_4210 = &g_4211;
static const uint64_t *g_4244 = &g_2138;
static const uint64_t **g_4243 = &g_4244;
static uint8_t g_4331 = 254UL;
static int8_t ***g_4361[2][10] = {{(void*)0,&g_715,(void*)0,&g_715,(void*)0,&g_715,(void*)0,&g_715,(void*)0,&g_715},{&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715}};
static int8_t ****g_4360[10][8] = {{(void*)0,&g_4361[1][1],(void*)0,(void*)0,&g_4361[1][2],&g_4361[1][2],(void*)0,(void*)0},{&g_4361[1][1],&g_4361[1][1],&g_4361[1][2],&g_4361[0][1],(void*)0,&g_4361[0][1],&g_4361[1][2],&g_4361[1][1]},{&g_4361[1][1],(void*)0,(void*)0,&g_4361[1][2],&g_4361[1][2],(void*)0,(void*)0,&g_4361[1][1]},{(void*)0,&g_4361[1][1],&g_4361[1][1],&g_4361[0][1],&g_4361[1][1],&g_4361[1][1],(void*)0,(void*)0},{&g_4361[1][1],&g_4361[0][1],(void*)0,(void*)0,&g_4361[0][1],&g_4361[1][1],&g_4361[1][2],&g_4361[1][1]},{&g_4361[0][1],&g_4361[1][1],&g_4361[1][2],&g_4361[1][1],&g_4361[0][1],(void*)0,(void*)0,&g_4361[0][1]},{&g_4361[1][1],(void*)0,(void*)0,&g_4361[1][1],&g_4361[1][1],&g_4361[0][1],&g_4361[1][1],&g_4361[1][1]},{(void*)0,&g_4361[1][1],(void*)0,(void*)0,&g_4361[1][2],&g_4361[1][2],(void*)0,(void*)0},{&g_4361[1][1],&g_4361[1][1],&g_4361[1][2],&g_4361[0][1],(void*)0,&g_4361[0][1],&g_4361[1][2],&g_4361[1][1]},{&g_4361[1][1],(void*)0,(void*)0,&g_4361[1][2],&g_4361[1][2],(void*)0,(void*)0,&g_4361[1][1]}};
static int64_t ***g_4362[3] = {&g_393,&g_393,&g_393};
static uint32_t g_4366 = 1UL;
static int32_t g_4392 = 9L;
static int8_t g_4482 = 0L;
static int32_t g_4655[8][10][2] = {{{0x0EFCA2EEL,1L},{0x74CC7DA5L,0L},{2L,0x0EFCA2EEL},{(-5L),2L},{9L,0xBBD2EF35L},{9L,2L},{(-5L),0x0EFCA2EEL},{2L,0L},{0x74CC7DA5L,1L},{0x0EFCA2EEL,(-5L)}},{{(-5L),(-5L)},{0x0EFCA2EEL,1L},{0x74CC7DA5L,0L},{2L,0x0EFCA2EEL},{(-5L),2L},{9L,0xBBD2EF35L},{9L,2L},{(-5L),0x0EFCA2EEL},{2L,0L},{0x74CC7DA5L,1L}},{{0x0EFCA2EEL,(-5L)},{(-5L),(-5L)},{0x0EFCA2EEL,1L},{0x74CC7DA5L,0L},{2L,0x0EFCA2EEL},{(-5L),2L},{9L,0xBBD2EF35L},{9L,2L},{(-5L),0x0EFCA2EEL},{2L,0L}},{{0x74CC7DA5L,1L},{0x0EFCA2EEL,(-5L)},{(-5L),(-5L)},{0x0EFCA2EEL,1L},{0x74CC7DA5L,0L},{2L,0x0EFCA2EEL},{0x74CC7DA5L,0xBBD2EF35L},{1L,0xD7328853L},{1L,0xBBD2EF35L},{0x74CC7DA5L,(-5L)}},{{0xBBD2EF35L,(-5L)},{9L,0x0EFCA2EEL},{(-5L),(-4L)},{(-4L),(-4L)},{(-5L),0x0EFCA2EEL},{9L,(-5L)},{0xBBD2EF35L,(-5L)},{0x74CC7DA5L,0xBBD2EF35L},{1L,0xD7328853L},{1L,0xBBD2EF35L}},{{0x74CC7DA5L,(-5L)},{0xBBD2EF35L,(-5L)},{9L,0x0EFCA2EEL},{(-5L),(-4L)},{(-4L),(-4L)},{(-5L),0x0EFCA2EEL},{9L,(-5L)},{0xBBD2EF35L,(-5L)},{0x74CC7DA5L,0xBBD2EF35L},{1L,0xD7328853L}},{{1L,0xBBD2EF35L},{0x74CC7DA5L,(-5L)},{0xBBD2EF35L,(-5L)},{9L,0x0EFCA2EEL},{(-5L),(-4L)},{(-4L),(-4L)},{(-5L),0x0EFCA2EEL},{9L,(-5L)},{0xBBD2EF35L,(-5L)},{0x74CC7DA5L,0xBBD2EF35L}},{{1L,0xD7328853L},{1L,0xBBD2EF35L},{0x74CC7DA5L,(-5L)},{0xBBD2EF35L,(-5L)},{9L,0x0EFCA2EEL},{(-5L),(-4L)},{(-4L),(-4L)},{(-5L),0x0EFCA2EEL},{9L,(-5L)},{0xBBD2EF35L,(-5L)}}};
static int32_t g_4658[1] = {0x3250D319L};
static int8_t **g_4679 = &g_716;
static int32_t g_4690 = (-7L);
static const uint32_t g_4738 = 1UL;
static uint32_t g_4826 = 0x04D31B1AL;
static uint32_t ** const *g_4844 = &g_272;
static uint32_t ** const ** const g_4843[8][8] = {{&g_4844,&g_4844,(void*)0,&g_4844,(void*)0,&g_4844,&g_4844,&g_4844},{&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844},{&g_4844,&g_4844,&g_4844,(void*)0,&g_4844,(void*)0,&g_4844,&g_4844},{&g_4844,&g_4844,&g_4844,&g_4844,(void*)0,(void*)0,&g_4844,&g_4844},{&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844},{&g_4844,&g_4844,&g_4844,(void*)0,&g_4844,&g_4844,&g_4844,&g_4844},{&g_4844,&g_4844,&g_4844,&g_4844,(void*)0,&g_4844,&g_4844,&g_4844},{&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844,&g_4844}};
static uint32_t g_4940 = 0x2D7F3A47L;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int64_t  func_8(int32_t  p_9);
static int64_t  func_21(int16_t  p_22, int8_t  p_23);
static uint16_t  func_27(uint8_t * p_28, uint8_t * p_29);
static uint8_t * func_30(uint8_t  p_31, int64_t  p_32);
static int32_t  func_43(uint8_t * p_44, uint8_t * p_45, uint64_t  p_46, uint8_t * p_47);
static uint8_t * func_48(int8_t  p_49, uint8_t * p_50, uint32_t  p_51, uint64_t  p_52);
static uint8_t * func_53(uint8_t * p_54, uint8_t * p_55, uint32_t  p_56, int32_t  p_57, uint64_t  p_58);
static uint8_t * func_59(uint8_t * const  p_60, uint8_t * p_61, int32_t  p_62, uint8_t * p_63);
static uint8_t * const  func_64(uint8_t * p_65, uint64_t  p_66, uint8_t * p_67, uint8_t * p_68);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_12 g_26 g_78 g_83 g_72 g_108 g_89 g_114 g_115 g_111 g_169 g_153 g_186 g_272 g_273 g_328 g_248 g_1502 g_1215 g_2040 g_1720 g_397 g_398 g_330 g_418 g_716 g_542 g_1520 g_404 g_396 g_715 g_979 g_1017 g_919 g_394 g_1055 g_1056 g_1790 g_495 g_280 g_1015 g_1053 g_1054 g_1016 g_1200 g_1938 g_1825 g_578 g_424 g_2609 g_649 g_344 g_2138 g_1219 g_2345 g_2896 g_1347 g_1278 g_585 g_648 g_2655 g_2656 g_645 g_1791 g_361 g_3130 g_1578 g_3387 g_3203 g_3417 g_3688 g_3698 g_3750 g_3319 g_1343 g_3560 g_3356 g_4655 g_4243 g_4244 g_4211 g_4679 g_4826 g_4843 g_4210 g_4844 g_3344 g_4940 g_4040 g_3224 g_2659
 * writes: g_13 g_26 g_72 g_78 g_83 g_89 g_111 g_115 g_108 g_148 g_169 g_186 g_114 g_275 g_280 g_418 g_1501 g_361 g_1720 g_542 g_398 g_979 g_1791 g_495 g_404 g_424 g_1016 g_2345 g_1347 g_2398 g_1200 g_1278 g_1056 g_1825 g_1215 g_919 g_345 g_2138 g_578 g_330 g_2657 g_3130 g_397 g_1520 g_1578 g_3387 g_2656 g_2896 g_3688 g_1219 g_3319 g_3344 g_3560 g_3698 g_4655 g_4360 g_4940 g_4040 g_585 g_4826
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    uint8_t *l_25[7][7][5] = {{{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,(void*)0,&g_26,(void*)0,&g_26},{&g_26,(void*)0,(void*)0,(void*)0,&g_26},{&g_26,(void*)0,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,(void*)0,&g_26,&g_26,&g_26}},{{&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26},{(void*)0,&g_26,&g_26,&g_26,(void*)0},{(void*)0,(void*)0,&g_26,(void*)0,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,(void*)0,(void*)0,(void*)0,&g_26}},{{(void*)0,(void*)0,&g_26,&g_26,(void*)0},{&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,&g_26,(void*)0,&g_26,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26}},{{&g_26,&g_26,&g_26,(void*)0,&g_26},{(void*)0,&g_26,&g_26,(void*)0,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26},{(void*)0,&g_26,&g_26,&g_26,&g_26},{(void*)0,&g_26,(void*)0,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26}},{{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26},{(void*)0,&g_26,(void*)0,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26},{(void*)0,(void*)0,&g_26,(void*)0,&g_26},{&g_26,(void*)0,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26}},{{&g_26,(void*)0,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26},{(void*)0,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,&g_26,(void*)0,&g_26,&g_26},{&g_26,(void*)0,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26}},{{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,&g_26,(void*)0,&g_26,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26},{&g_26,(void*)0,(void*)0,&g_26,(void*)0},{&g_26,&g_26,(void*)0,&g_26,&g_26},{&g_26,&g_26,(void*)0,&g_26,&g_26}}};
    int32_t l_33 = 0x88FF7673L;
    const int32_t **l_4943 = &g_1056;
    int32_t *l_4944 = (void*)0;
    int32_t *l_4945 = &g_169;
    int32_t *l_4946[10][3] = {{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]},{&g_4655[3][7][0],&g_4655[3][2][0],&g_4655[3][2][0]}};
    int16_t l_4947 = (-1L);
    uint8_t l_4948 = 251UL;
    uint16_t l_4984 = 0x2C93L;
    int8_t ***l_4993[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_4993[i] = &g_4679;
    /*bef_stmt:105129*/
/*bef_stmt:105129*/
/*bef_stmt:105129*/
/*bef_stmt:105129*/
/*bef_stmt:105129*/
/*bef_stmt:105129*/
/*bef_stmt:105129*/
/*bef_stmt:105129*/
(*g_2040) = (safe_rshift_func_uint16_t_u_s((1L < (safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s(func_8(((safe_div_func_uint8_t_u_u((g_13[0] = /*TAG1:STA*/((int8_t)(realsmith_proxy_fM6EN((int)(g_12)+(72), 71)+(int)(g_12)-(-114))+g_12)/*TAG1:END:g_12*/), (~((Tag2(/*int8_t:0:0:105129:e*/g_12) < (0L == (safe_div_func_int64_t_s_s(6L, (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(func_21((((safe_unary_minus_func_uint8_t_u((g_26 ^= Tag3(/*int8_t:0:0:105129:e*/g_12)))) ^ (9UL == func_27(l_25[5][5][0], func_30(/*TAG4:STA*/((int8_t)(realsmith_proxy_1BYdb((char)(g_12)+(122), 18)+(int)(g_12)-(-113))+g_12)/*TAG4:END:g_12*/, Tag5(/*int32_t:108110:108110:105129:e*/l_33))))) >= Tag6(/*int32_t:108110:108110:105129:e*/l_33)), /*TAG7:STA*/((int32_t)(realsmith_proxy_cUhrP((int)(g_3356)+(9))+(long)(g_3356)-(-1))+g_3356)/*TAG7:END:g_3356*/), /*TAG8:STA*/((uint32_t)(realsmith_proxy_NPdXN((int)(g_153[6])+(-1414369570), (int)(g_153[6])+(-1414369440), (unsigned long)(g_153[6])+(-1414369406), (unsigned long)(g_153[6])+(-1414369465), (int)(g_153[6])+(-1414369472))+(unsigned long)(g_153[6])-(1414369494))+g_153[6])/*TAG8:END:g_153[6]*/)), 0x312FL)))))) || 0x5BL)))) || 0x13999D3819087D57LL)), 3L)), (-1L)))), 1));
/*aft_stmt:105129*/
/*aft_stmt:105129*/
/*aft_stmt:105129*/
/*aft_stmt:105129*/
/*aft_stmt:105129*/
/*aft_stmt:105129*/
/*aft_stmt:105129*/
/*aft_stmt:105129*/
    (*l_4943) = (***g_1053);
    ++l_4948;
    for (g_4040 = (-11); (g_4040 <= 19); g_4040 = safe_add_func_int32_t_s_s(g_4040, 6))
    { /* block id: 2273 */
        int8_t **l_4957 = &g_716;
        uint32_t l_4960 = 0x8C2E1D3AL;
        uint8_t *l_4974 = (void*)0;
        int32_t l_5005 = (-7L);
        int32_t l_5007 = 0x52E4566DL;
        for (g_26 = 0; (g_26 <= 9); g_26 += 1)
        { /* block id: 2276 */
            int64_t *l_4963 = (void*)0;
            int64_t *l_4964 = &g_585;
            int32_t l_4965 = (-1L);
            /*bef_stmt:106122*/
/*bef_stmt:106122*/
/*bef_stmt:106122*/
/*bef_stmt:106122*/
/*bef_stmt:106122*/
/*bef_stmt:106122*/
/*bef_stmt:106122*/
/*bef_stmt:106122*/
/*bef_stmt:106122*/
l_4965 ^= ((safe_unary_minus_func_uint8_t_u(((Tag9(/*uint32_t:0:0:106122:e*/***g_4844)) > (((/*TAG10:STA*/((int16_t)(realsmith_5U8SH((int)(**g_4210)+(20088))+(int)(**g_4210)-(-20006))+**g_4210)/*TAG10:END:**g_4210*/) < (!(((*l_4964) = (safe_lshift_func_int16_t_s_s(((void*)0 != l_4957), ((((safe_add_func_int32_t_s_s(Tag11(/*uint32_t:108065:108110:106122:e*/l_4960), (((0xC3L ^ (Tag12(/*int8_t:0:0:106122:e*/**g_4679))) != (safe_mul_func_int16_t_s_s((((Tag13(/*uint32_t:108065:108110:106122:e*/l_4960) & ((void*)0 == (*g_3224))) != 0x3981DD31L) >= Tag14(/*uint32_t:108065:108110:106122:e*/l_4960)), (/*TAG15:STA*/((int16_t)(realsmith_H3Wvo()+(int)(**g_4210)-(-20005))+**g_4210)/*TAG15:END:**g_4210*/)))) | (-1L)))) != 0x681AB1B8B03CFD23LL) != 2UL) || 0xDA3F8B6E44D40593LL)))) & (Tag16(/*const uint64_t:0:0:106122:e*/**g_4243))))) <= (Tag17(/*int8_t:0:0:106122:e*/**g_4679)))))) || 1UL);
/*aft_stmt:106122*/
/*aft_stmt:106122*/
/*aft_stmt:106122*/
/*aft_stmt:106122*/
/*aft_stmt:106122*/
/*aft_stmt:106122*/
/*aft_stmt:106122*/
/*aft_stmt:106122*/
/*aft_stmt:106122*/
            /*bef_stmt:106136*/
if (Tag18(/*uint32_t:108065:108110:106136:e*/l_4960))
                break;
/*aft_stmt:106136*/
            (*g_2040) = 5L;
            /*bef_stmt:106175*/
return Tag19(/*uint32_t:108065:108110:106175:e*/l_4960);
/*aft_stmt:106175*/
        }
        /*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
/*bef_stmt:106812*/
(*g_2040) &= (((((safe_div_func_int8_t_s_s(((((-1L) < ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(Tag20(/*uint32_t:108065:108110:106812:e*/l_4960), ((*g_2609) = ((/*TAG21:STA*/((int8_t)(realsmith_proxy_oNreR((char)(**g_4679)+(-55))+(char)(**g_4679)-(48))+**g_4679)/*TAG21:END:**g_4679*/) ^ ((l_4974 == (void*)0) > (!(safe_rshift_func_int16_t_s_s((/*TAG22:STA*/((int16_t)(realsmith_eZ4EI(13)+(int)(**g_4210)-(-20005))+**g_4210)/*TAG22:END:**g_4210*/), (Tag23(/*uint32_t:108065:108110:106812:e*/l_4960) != ((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((Tag24(/*uint32_t:108065:108110:106812:e*/l_4960) | (((-4L) > (/*TAG25:STA*/((int16_t)(realsmith_proxy_gmvVT((char)(**g_4210)+(38), (char)(**g_4210)+(34), (int)(**g_4210)+(20004))+(int)(**g_4210)-(-20006))+**g_4210)/*TAG25:END:**g_4210*/)) < 0x8AA0L)) || Tag26(/*uint32_t:108065:108110:106812:e*/l_4960)), 1L)), Tag27(/*uint16_t:108110:108110:106812:e*/l_4984))), 12)) && /*TAG28:STA*/((uint32_t)(realsmith_proxy_72Frh((unsigned int)(l_4960)+(-2351832355))+(int)(l_4960)-(-1943134918))+l_4960)/*TAG28:END:l_4960*/)))))))))), Tag29(/*uint32_t:108065:108110:106812:e*/l_4960))) <= 0xB0E8L)) , 0x09257F5F185D8968LL) <= Tag30(/*uint32_t:108065:108110:106812:e*/l_4960)), (-1L))) != 0x96ABL) > (-1L)) || 0xFF47L) ^ (Tag31(/*const uint64_t:0:0:106812:e*/*g_4244)));
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
/*aft_stmt:106812*/
        /*bef_stmt:108059*/
/*bef_stmt:108059*/
/*bef_stmt:108059*/
/*bef_stmt:108059*/
/*bef_stmt:108059*/
/*bef_stmt:108059*/
if (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(Tag32(/*uint32_t:108065:108110:108059:e*/l_4960), (((1L >= ((l_25[0][5][3] != (*g_715)) <= (((Tag33(/*uint32_t:0:0:108059:e*/*g_273)) <= ((safe_rshift_func_int16_t_s_s(0x0DEDL, Tag34(/*uint32_t:108065:108110:108059:e*/l_4960))) && 0L)) >= Tag35(/*uint32_t:108065:108110:108059:e*/l_4960)))) , &l_4957) != l_4993[0]))) > (Tag36(/*int32_t:108110:108110:108059:e*/*l_4945))), 6)), 7)) , Tag37(/*uint32_t:108065:108110:108059:e*/l_4960)))
        { /* block id: 2285 */
            int32_t *l_4994 = &g_169;
            (*l_4943) = l_4994;
        }
        else
        { /* block id: 2287 */
            int32_t *l_4995 = &g_4655[2][3][1];
            int32_t l_5002[9] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
            int64_t l_5004 = 0xFCCB6846A6B78C25LL;
            int i;
            for (l_33 = 0; (l_33 <= 3); l_33 += 1)
            { /* block id: 2290 */
                (*l_4943) = (l_4945 = l_4995);
            }
            for (g_26 = 6; (g_26 < 57); g_26 = safe_add_func_uint32_t_u_u(g_26, 2))
            { /* block id: 2296 */
                int32_t l_5000 = 0xEC6AE309L;
                int32_t l_5003 = 0x7E2084CCL;
                int32_t l_5006 = 0xD795D75AL;
                for (l_4947 = 8; (l_4947 >= 4); l_4947--)
                { /* block id: 2299 */
                    /*bef_stmt:107860*/
return Tag38(/*uint32_t:108065:108110:107860:e*/l_4960);
/*aft_stmt:107860*/
                }
                for (g_4826 = 0; (g_4826 <= 0); g_4826 += 1)
                { /* block id: 2304 */
                    int16_t l_5001 = 0L;
                    int8_t l_5008 = 6L;
                    uint16_t l_5009 = 65535UL;
                    ++l_5009;
                }
                l_4995 = &l_5003;
            }
        }
/*aft_stmt:108059*/
/*aft_stmt:108059*/
/*aft_stmt:108059*/
/*aft_stmt:108059*/
/*aft_stmt:108059*/
/*aft_stmt:108059*/
    }
    /*bef_stmt:108108*/
return (/*TAG39:STA*/((int32_t)(realsmith_MPxAM((int)(**l_4943)+(2), (long)(**l_4943)+(30), (int)(**l_4943)+(10))+(int)(**l_4943)-(2))+**l_4943)/*TAG39:END:**l_4943*/);
/*aft_stmt:108108*/
}


/* ------------------------------------------ */
/* 
 * reads : g_169 g_4655 g_4243 g_4244 g_2138 g_4211 g_4679 g_716 g_2609 g_1200 g_4826 g_1825 g_2040 g_4843 g_578 g_4210 g_4844 g_272 g_273 g_111 g_1015 g_1016 g_3344 g_542 g_3698 g_4940
 * writes: g_1825 g_3344 g_542 g_578 g_1200 g_78 g_3698 g_72 g_4655 g_4360 g_89 g_4940
 */
static int64_t  func_8(int32_t  p_9)
{ /* block id: 2212 */
    int32_t *l_4788 = &g_169;
    int32_t *l_4789 = &g_169;
    int32_t *l_4790 = &g_4655[3][7][0];
    int32_t l_4791 = 1L;
    int32_t *l_4792[7][5][6] = {{{&g_4655[1][9][1],&g_4655[3][7][0],&g_72[3][0][0],&g_4655[4][6][1],&g_4690,&g_72[2][0][1]},{&g_169,&g_169,&g_89,&g_4690,&g_4655[1][9][0],&l_4791},{&l_4791,&g_72[7][0][5],&g_72[5][1][1],&g_4655[3][7][0],&g_72[0][1][3],&g_4655[1][9][0]},{&g_4655[6][6][0],&g_169,&g_89,&g_4690,&g_89,&g_4655[3][7][0]},{&g_4690,&g_72[5][1][1],&g_169,(void*)0,&g_169,&l_4791}},{{&g_72[7][1][6],(void*)0,&g_89,&g_89,(void*)0,&g_72[7][1][6]},{&g_72[5][1][1],&g_4655[1][9][0],&g_72[1][1][2],&g_4655[3][7][0],&g_89,(void*)0},{&g_72[5][1][1],&g_169,&l_4791,&g_4690,&l_4791,&g_4690},{&g_72[5][1][1],&g_4655[2][6][1],&g_4690,&g_4655[3][7][0],&g_4655[3][7][0],&g_4655[3][7][0]},{&g_72[5][1][1],&g_89,(void*)0,&g_89,&l_4791,&g_72[1][0][1]}},{{&g_72[7][1][6],(void*)0,&l_4791,(void*)0,&l_4791,&g_72[0][1][3]},{&g_4690,&g_72[1][1][2],&g_72[5][1][1],&g_4690,&g_4655[3][7][0],&g_4655[3][7][0]},{&g_4655[6][6][0],(void*)0,&g_89,&g_4655[3][7][0],&g_4690,(void*)0},{&l_4791,&g_72[5][1][1],&l_4791,&g_4690,&g_169,&l_4791},{&g_169,&g_169,&g_72[2][0][1],&g_4655[4][6][1],&g_89,(void*)0}},{{&g_4655[1][9][1],&g_72[2][0][1],&l_4791,&g_72[2][0][5],&g_169,&g_72[2][0][3]},{&g_4690,(void*)0,&l_4791,&g_89,&g_72[2][0][1],&g_4655[1][9][1]},{&g_89,&g_89,&g_169,&l_4791,(void*)0,&g_72[5][1][1]},{&g_72[5][1][1],&g_4655[4][6][0],&l_4791,&l_4791,&g_72[5][1][1],(void*)0},{&g_169,&g_4655[3][7][0],(void*)0,&g_4655[3][7][0],&g_4690,&g_72[3][0][0]}},{{(void*)0,&g_4690,&l_4791,&g_169,&g_4655[7][6][1],&g_72[5][1][1]},{&l_4791,&g_72[2][0][3],&l_4791,&g_89,&g_4655[6][6][0],&g_4655[3][7][0]},{&g_72[2][0][3],&g_72[5][1][1],&g_72[5][1][1],&l_4791,&g_89,&g_4655[3][7][0]},{&g_4655[2][6][1],&g_72[3][0][0],&l_4791,&g_72[5][1][1],&g_4690,&g_72[4][1][6]},{&g_89,&g_4655[4][6][1],&g_169,&g_89,&l_4791,(void*)0}},{{&g_72[5][1][1],&g_4655[4][6][1],&g_4655[4][6][0],&g_72[2][0][1],&g_4690,&g_4655[6][6][0]},{(void*)0,&g_72[3][0][0],&g_72[5][1][1],&l_4791,&g_89,&g_169},{&g_89,&g_4655[3][7][0],&g_72[2][0][1],&g_89,&l_4791,(void*)0},{&g_72[2][0][4],&l_4791,&g_72[5][1][1],&g_169,&g_4655[3][7][0],&g_4690},{&g_4655[3][7][0],&g_4690,&g_72[5][1][1],&g_169,(void*)0,&g_169}},{{&g_72[5][1][1],&g_72[5][1][1],&g_72[2][0][5],&g_4655[3][7][0],&g_72[1][1][2],&g_89},{&g_4655[3][7][0],&g_4655[2][6][1],&g_72[5][1][1],&g_72[3][0][0],&l_4791,&g_169},{&g_72[7][1][6],&g_4690,&g_4655[2][6][1],&g_4655[2][2][0],(void*)0,&g_4655[3][7][0]},{&g_4655[1][9][1],&g_72[4][1][6],&g_89,&g_72[5][1][1],(void*)0,&g_4655[4][6][0]},{&g_4655[3][7][0],&g_89,&g_4655[3][8][0],&g_169,&g_72[2][0][4],&g_4655[3][7][0]}}};
    uint32_t l_4793 = 18446744073709551608UL;
    const uint32_t ***l_4806 = (void*)0;
    uint32_t ***l_4808 = &g_275;
    uint32_t ****l_4807 = &l_4808;
    uint64_t *l_4816 = &g_1825;
    uint64_t *l_4817 = &g_1200;
    uint64_t *l_4818 = (void*)0;
    uint64_t *l_4819 = (void*)0;
    uint64_t *l_4820 = (void*)0;
    uint64_t *l_4821 = &g_78;
    uint16_t l_4837 = 65533UL;
    int8_t ****l_4883[5][7][2] = {{{(void*)0,&g_4361[1][1]},{&g_4361[0][1],(void*)0},{&g_4361[0][1],&g_4361[0][1]},{(void*)0,&g_4361[1][1]},{(void*)0,&g_4361[0][1]},{&g_4361[0][1],(void*)0},{&g_4361[0][1],&g_4361[1][1]}},{{(void*)0,(void*)0},{&g_4361[0][1],(void*)0},{(void*)0,&g_4361[1][1]},{&g_4361[0][1],(void*)0},{&g_4361[0][1],&g_4361[0][1]},{(void*)0,&g_4361[1][1]},{(void*)0,&g_4361[0][1]}},{{&g_4361[0][1],(void*)0},{&g_4361[0][1],&g_4361[1][1]},{(void*)0,(void*)0},{&g_4361[0][1],(void*)0},{(void*)0,&g_4361[1][1]},{&g_4361[0][1],(void*)0},{&g_4361[0][1],&g_4361[0][1]}},{{(void*)0,&g_4361[1][1]},{(void*)0,&g_4361[0][1]},{&g_4361[0][1],(void*)0},{&g_4361[0][1],&g_4361[1][1]},{(void*)0,(void*)0},{&g_4361[0][1],(void*)0},{(void*)0,&g_4361[1][1]}},{{&g_4361[0][1],(void*)0},{&g_4361[0][1],&g_4361[0][1]},{(void*)0,&g_4361[1][1]},{(void*)0,&g_4361[0][1]},{&g_4361[0][1],(void*)0},{&g_4361[0][1],&g_4361[1][1]},{(void*)0,(void*)0}}};
    int32_t l_4903 = 0xC1F20029L;
    int i, j, k;
    ++l_4793;
    /*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
/*bef_stmt:128511*/
if ((((*l_4821) = ((*l_4817) |= ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((((*g_2609) = (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((/*TAG40:STA*/((int32_t)(realsmith_proxy_1NTWB((long)(*l_4788)+(-1), (unsigned long)(*l_4788)+(-7), (unsigned long)(*l_4788)+(-6))+(int)(*l_4788)-(3))+*l_4788)/*TAG40:END:*l_4788*/) || ((0xC35CB488B7F67C41LL || (((((Tag41(/*int32_t:128539:128539:128511:e*/*l_4790)) , ((Tag42(/*int32_t:128539:128539:128511:e*/p_9) <= 0xB65FL) , l_4806)) == ((*l_4807) = &g_275)) , ((Tag43(/*int32_t:128539:128539:128511:e*/*l_4788)) & (safe_rshift_func_int8_t_s_u((~((((**g_4679) = (safe_lshift_func_int16_t_s_u(((*g_4211) = (safe_div_func_int16_t_s_s(((((*l_4816) = (Tag44(/*const uint64_t:0:0:128511:e*/**g_4243))) ^ 0UL) >= 0L), 1L))), 0))) >= (-7L)) , (/*TAG45:STA*/((uint64_t)(realsmith_proxy_TiVer((int)(**g_4243)+(-1661238106))+(int)(**g_4243)-(1661238142))+**g_4243)/*TAG45:END:**g_4243*/))), 6)))) > Tag46(/*int32_t:128539:128539:128511:e*/p_9))) && 0x786DFC639126B8FBLL)), Tag47(/*int32_t:128539:128539:128511:e*/p_9))), Tag48(/*int32_t:128539:128539:128511:e*/p_9))) != (/*TAG49:STA*/((int32_t)(realsmith_proxy_mIfSs((unsigned long)(*l_4788)+(26), (unsigned long)(*l_4788)+(84), (unsigned long)(*l_4788)+(87), (unsigned long)(*l_4788)+(54), (unsigned long)(*l_4788)+(53), (unsigned long)(*l_4788)+(87), (unsigned long)(*l_4788)+(84), (unsigned long)(*l_4788)+(72), (unsigned long)(*l_4788)+(93), (unsigned long)(*l_4788)+(66), (unsigned long)(*l_4788)+(12))+(long)(*l_4788)-(6))+*l_4788)/*TAG49:END:*l_4788*/)), (/*TAG50:STA*/((uint64_t)(realsmith_tX1a5((long)(**g_4243)+(-3763475187954383703))+(int)(**g_4243)-(1661238142))+**g_4243)/*TAG50:END:**g_4243*/)))) > (Tag51(/*int32_t:128539:128539:128511:e*/*l_4789))), (Tag52(/*int32_t:128539:128539:128511:e*/*l_4789)))) , 0x94ABL), (Tag53(/*int32_t:128539:128539:128511:e*/*l_4788)))) < 4L))) & (/*TAG54:STA*/((uint64_t)(realsmith_ON3uR((int)(**g_4243)+(-1661238111))+(int)(**g_4243)-(1661238141))+**g_4243)/*TAG54:END:**g_4243*/)))
    { /* block id: 2221 */
        int32_t **l_4822 = &g_3698;
        (*l_4822) = &l_4791;
        /*bef_stmt:118970*/
return /*TAG55:STA*/((int32_t)(realsmith_proxy_KIJA6((int)(p_9)+(-2))+(int)(p_9)-(-2))+p_9)/*TAG55:END:p_9*/;
/*aft_stmt:118970*/
    }
    else
    { /* block id: 2224 */
        uint8_t l_4823[2];
        int32_t l_4842 = 0xE97C8C40L;
        uint64_t l_4875 = 0x7E6B047B41D5E5CDLL;
        int8_t l_4926 = 0x4BL;
        int32_t l_4930 = 5L;
        int32_t l_4931 = 0xDB1FAE00L;
        int32_t l_4932 = 0xDAF23DB2L;
        int32_t l_4933 = 7L;
        int32_t l_4934 = 0x913DB25DL;
        int32_t l_4935 = 0xA1786AA2L;
        int32_t l_4936 = 2L;
        int32_t l_4937 = 0x3E183BDCL;
        int32_t l_4938[10] = {0x06B6E769L,1L,0xF1D6039DL,0xF1D6039DL,1L,0x06B6E769L,1L,0xF1D6039DL,0xF1D6039DL,1L};
        int16_t l_4939[6];
        int i;
        for (i = 0; i < 2; i++)
            l_4823[i] = 0x7BL;
        for (i = 0; i < 6; i++)
            l_4939[i] = 0x6186L;
        /*bef_stmt:128477*/
if (Tag56(/*int32_t:128539:128539:128477:e*/p_9))
        { /* block id: 2225 */
lbl_4902:
            l_4823[1]--;
            /*bef_stmt:119702*/
return Tag57(/*uint32_t:0:0:119702:e*/g_4826);
/*aft_stmt:119702*/
        }
        else
        { /* block id: 2228 */
            uint16_t l_4827[8] = {0UL,0UL,0xC46AL,0UL,0UL,0xC46AL,0UL,0UL};
            uint32_t l_4845 = 0xB5E47ECAL;
            int32_t l_4876 = 0x36AC3FF3L;
            int64_t l_4905 = (-1L);
            int i;
            l_4827[1]++;
            for (g_1825 = 0; (g_1825 > 46); g_1825 = safe_add_func_uint16_t_u_u(g_1825, 1))
            { /* block id: 2232 */
                int64_t l_4834 = 0x29665A2770395D43LL;
                uint8_t *****l_4863 = &g_1697[2];
                int32_t l_4877[7] = {0x9070D5EAL,0xA1BB2AE3L,0x9070D5EAL,0x9070D5EAL,0xA1BB2AE3L,0x9070D5EAL,0x9070D5EAL};
                int8_t ** const *l_4886 = (void*)0;
                int8_t ** const **l_4885 = &l_4886;
                int32_t *l_4911 = &l_4877[2];
                uint8_t *l_4927 = (void*)0;
                uint8_t *l_4928 = (void*)0;
                uint8_t *l_4929[8][6][5] = {{{&l_4823[0],&g_424[0],&g_330,&l_4823[1],&g_186},{&g_424[0],(void*)0,&l_4823[1],&g_280,&g_3417[4]},{&g_280,&l_4823[1],&g_26,(void*)0,&g_424[0]},{&g_4331,&g_330,&g_26,(void*)0,&l_4823[1]},{&g_330,&g_424[3],&g_3417[2],&g_424[0],&g_424[0]},{(void*)0,&g_3417[4],&g_3417[4],&g_26,&g_26}},{{&g_330,&l_4823[1],&g_26,&g_26,&l_4823[1]},{&g_26,&g_186,&g_424[0],&g_330,&g_186},{&g_330,&g_330,&g_26,&g_3417[4],&g_26},{&l_4823[1],(void*)0,&l_4823[1],&l_4823[1],(void*)0},{&g_26,&g_424[0],&g_424[0],&g_424[0],&g_3417[4]},{&l_4823[1],&g_424[1],&g_424[0],&g_424[0],&g_4331}},{{&g_4331,&g_280,&g_3417[4],&g_186,&g_3417[0]},{&l_4823[1],&g_186,&g_330,(void*)0,&g_424[3]},{&g_26,&g_186,&g_4331,&g_26,&g_26},{&l_4823[1],&g_26,&g_26,&g_330,&g_330},{&g_330,&g_330,&g_424[0],&g_26,(void*)0},{&g_26,&g_26,&g_26,&l_4823[0],&g_424[0]}},{{&g_330,&g_4331,&l_4823[1],&g_424[0],&g_4331},{(void*)0,&l_4823[1],&g_3417[4],&g_186,&g_26},{&g_424[0],&g_424[0],&g_26,&g_330,&g_186},{&g_280,&l_4823[1],&g_4331,&g_330,&l_4823[0]},{&l_4823[1],&g_4331,&g_330,&g_186,&g_26},{&g_280,(void*)0,&g_424[0],&g_424[0],&l_4823[1]}},{{&g_186,&g_424[0],&g_424[0],&l_4823[0],&g_4331},{&l_4823[1],&g_26,&g_4331,&g_26,&l_4823[0]},{(void*)0,&g_186,&g_3417[4],&g_330,&g_3417[0]},{&g_4331,&g_424[0],&g_3417[4],&g_26,&g_3417[4]},{&g_186,&g_186,&l_4823[0],(void*)0,(void*)0},{&g_330,&g_4331,&g_26,&g_186,&g_26}},{{&g_26,&g_3417[0],&g_26,&g_424[0],&l_4823[1]},{(void*)0,&g_4331,&l_4823[1],&g_424[0],&g_4331},{&g_330,&g_186,&g_4331,&l_4823[1],&l_4823[1]},{&l_4823[1],&g_424[0],&g_424[0],&g_3417[4],&g_26},{&g_186,&g_186,&g_186,&g_330,&g_26},{&g_186,&g_26,&l_4823[1],&g_26,&g_424[1]}},{{&g_280,&g_424[0],&g_26,&g_26,&g_330},{&g_424[0],(void*)0,&g_424[0],&g_424[0],&l_4823[1]},{&g_424[6],&g_4331,(void*)0,&g_424[0],&l_4823[0]},{&l_4823[1],&l_4823[1],&l_4823[1],&g_424[0],&l_4823[0]},{(void*)0,&g_424[0],&g_4331,&l_4823[1],&l_4823[1]},{&g_26,&l_4823[1],&g_424[3],(void*)0,&g_330}},{{&g_280,&g_4331,&g_186,&g_424[0],&g_186},{&g_330,(void*)0,&g_424[0],&l_4823[1],&g_424[0]},{&g_4331,&g_330,&g_4331,&l_4823[1],&g_424[0]},{&g_424[3],&g_3417[0],&g_424[0],&g_26,&g_26},{&g_26,&g_424[0],&g_26,(void*)0,&g_424[3]},{&g_424[0],&g_4331,&g_424[3],&g_424[0],&l_4823[1]}}};
                int i, j, k;
                /*bef_stmt:125771*/
/*bef_stmt:125771*/
/*bef_stmt:125771*/
/*bef_stmt:125771*/
/*bef_stmt:125771*/
/*bef_stmt:125771*/
/*bef_stmt:125771*/
/*bef_stmt:125771*/
(*l_4790) |= ((safe_div_func_uint8_t_u_u(((Tag58(/*int32_t:128539:128539:125771:e*/p_9) , Tag59(/*int64_t:128445:128468:125771:e*/l_4834)) & ((safe_add_func_int16_t_s_s((0xF3L >= 0x72L), (4L || ((((*g_2040) = (3L ^ (Tag60(/*uint16_t:128539:128539:125771:e*/l_4837) | (safe_sub_func_int64_t_s_s(((l_4842 = (safe_sub_func_int8_t_s_s(Tag61(/*int64_t:128445:128468:125771:e*/l_4834), Tag62(/*int32_t:128539:128539:125771:e*/p_9)))) , Tag63(/*int32_t:128539:128539:125771:e*/p_9)), Tag64(/*int32_t:128539:128539:125771:e*/p_9)))))) , (void*)0) != g_4843[5][0])))) | 1L)), 0x1AL)) != Tag65(/*uint32_t:128468:128490:125771:e*/l_4845));
/*aft_stmt:125771*/
/*aft_stmt:125771*/
/*aft_stmt:125771*/
/*aft_stmt:125771*/
/*aft_stmt:125771*/
/*aft_stmt:125771*/
/*aft_stmt:125771*/
/*aft_stmt:125771*/
                /*bef_stmt:125785*/
if (Tag66(/*int64_t:128445:128468:125785:e*/l_4834))
                    break;
/*aft_stmt:125785*/
                if ((+0x75BA0A04C0176B23LL))
                { /* block id: 2237 */
                    int16_t l_4878 = 0x8B03L;
                    int32_t l_4879 = 0L;
                    /*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
/*bef_stmt:127745*/
if ((safe_sub_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((Tag67(/*uint8_t:0:0:127745:e*/*g_2609)) <= (Tag68(/*uint16_t:128468:128490:127745:e*/l_4827[1]) != (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((((void*)0 == l_4863) , ((safe_unary_minus_func_uint16_t_u((l_4842 = (0xA7A4D05C96EBB3F5LL <= ((l_4877[2] = (safe_sub_func_int16_t_s_s(((l_4876 = (((**g_4210) = (safe_div_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(0x796D2158A77E300ELL, (l_4875 = (safe_div_func_int64_t_s_s(((0xB3C9L != 0UL) ^ Tag69(/*uint8_t:128490:128539:127745:e*/l_4823[1])), 8UL))))), Tag70(/*int32_t:128539:128539:127745:e*/p_9))) >= 0UL) & Tag71(/*int32_t:128539:128539:127745:e*/p_9)), 0x84C69644L))) < 0xC91DL)) ^ Tag72(/*int32_t:128539:128539:127745:e*/p_9)), Tag73(/*int32_t:128539:128539:127745:e*/p_9)))) || (-6L)))))) , Tag74(/*int32_t:128539:128539:127745:e*/p_9))) | Tag75(/*int32_t:128539:128539:127745:e*/p_9)) , 0UL), 5)) < Tag76(/*int32_t:128539:128539:127745:e*/p_9)), Tag77(/*int32_t:128539:128539:127745:e*/p_9))), 0x1A14CBB5440D2843LL)), Tag78(/*int32_t:128539:128539:127745:e*/p_9))), (Tag79(/*const uint64_t:0:0:127745:e*/**g_4243)))))), (Tag80(/*uint32_t:0:0:127745:e*/***g_4844)))) , Tag81(/*int16_t:127774:128445:127745:e*/l_4878)), Tag82(/*int32_t:128539:128539:127745:e*/p_9))) & 0xC528L) < Tag83(/*int32_t:128539:128539:127745:e*/p_9)), Tag84(/*int32_t:128539:128539:127745:e*/p_9))))
                    { /* block id: 2243 */
                        /*bef_stmt:126754*/
l_4879 = Tag85(/*uint64_t:128490:128539:126754:e*/l_4875);
/*aft_stmt:126754*/
                    }
                    else
                    { /* block id: 2245 */
                        uint16_t **** const l_4880 = &g_792[1][0];
                        int8_t *****l_4884 = &g_4360[5][3];
                        int32_t l_4904 = (-3L);
                        int32_t l_4906 = 0L;
                        int32_t l_4907 = 2L;
                        uint32_t l_4908 = 9UL;
                        (*l_4790) = 0x304AC09AL;
                        /*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
/*bef_stmt:127697*/
(*g_3698) = ((((*g_1015) == l_4880) != (((((safe_div_func_uint16_t_u_u(((((*l_4884) = l_4883[0][1][1]) != l_4885) < Tag86(/*int32_t:128468:128490:127697:e*/l_4876)), (~(safe_rshift_func_int8_t_s_u((+((Tag87(/*int32_t:128539:128539:127697:e*/*l_4789)) , (((*g_2609)++) || (safe_div_func_int16_t_s_s((Tag88(/*int16_t:0:0:127697:e*/*g_4211)), (Tag89(/*int32_t:128539:128539:127697:e*/p_9) && ((!(safe_div_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((Tag90(/*int16_t:0:0:127697:e*/*g_4211)) ^ Tag91(/*int32_t:128539:128539:127697:e*/p_9)), 5)) | Tag92(/*int32_t:128539:128539:127697:e*/p_9)) , 0x145CL), 0x34B8L)) , Tag93(/*int32_t:128445:128468:127697:e*/l_4877[2])), 0xEE818C087AE6E6CFLL))) , 0xD2BCL))))))), Tag94(/*int32_t:128445:128468:127697:e*/l_4877[2])))))) | Tag95(/*int32_t:128490:128539:127697:e*/l_4842)) <= 0x0936B5DF26AEDD95LL) != Tag96(/*int16_t:127774:128445:127697:e*/l_4878)) < (Tag97(/*int8_t:0:0:127697:e*/**g_4679)))) , Tag98(/*int32_t:128539:128539:127697:e*/p_9));
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
/*aft_stmt:127697*/
                        /*bef_stmt:127722*/
if (Tag99(/*uint32_t:0:0:127722:e*/g_4826))
                            goto lbl_4902;
/*aft_stmt:127722*/
                        l_4908++;
                    }
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
/*aft_stmt:127745*/
                    l_4911 = (void*)0;
                }
                else
                { /* block id: 2254 */
                    int8_t l_4912 = 0xDDL;
                    /*bef_stmt:127813*/
if (Tag100(/*int8_t:127829:128445:127813:e*/l_4912))
                        break;
/*aft_stmt:127813*/
                    /*bef_stmt:127827*/
return Tag101(/*int32_t:128539:128539:127827:e*/p_9);
/*aft_stmt:127827*/
                }
                /*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
/*bef_stmt:128441*/
(*l_4790) = (safe_div_func_uint16_t_u_u(65526UL, ((*g_4211) = ((((safe_mul_func_uint8_t_u_u(((Tag102(/*int16_t:0:0:128441:e*/*g_4211)) , 0xDCL), (safe_lshift_func_int16_t_s_s((Tag103(/*int32_t:128539:128539:128441:e*/*l_4790)), (safe_add_func_uint16_t_u_u(Tag104(/*int64_t:128445:128468:128441:e*/l_4834), (((((+(0x6E93L > ((safe_div_func_uint32_t_u_u(Tag105(/*int32_t:128490:128539:128441:e*/l_4842), Tag106(/*int32_t:128539:128539:128441:e*/p_9))) > (((l_4930 = ((l_4876 = (((safe_mod_func_int32_t_s_s((((*g_2609) |= (Tag107(/*int32_t:128539:128539:128441:e*/p_9) <= 0xD6L)) == Tag108(/*int32_t:128539:128539:128441:e*/p_9)), Tag109(/*uint8_t:128490:128539:128441:e*/l_4823[1]))) , Tag110(/*int8_t:128490:128539:128441:e*/l_4926)) == 0UL)) ^ Tag111(/*int64_t:128468:128490:128441:e*/l_4905))) <= (Tag112(/*const uint64_t:0:0:128441:e*/**g_4243))) && Tag113(/*int32_t:128539:128539:128441:e*/p_9))))) , 0x8DCCDBCE99A57191LL) & Tag114(/*int32_t:128539:128539:128441:e*/p_9)) || 0UL) == (-2L)))))))) & Tag115(/*int32_t:128539:128539:128441:e*/p_9)) , Tag116(/*int32_t:128539:128539:128441:e*/p_9)) , Tag117(/*int32_t:128490:128539:128441:e*/l_4842)))));
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
/*aft_stmt:128441*/
            }
        }
/*aft_stmt:128477*/
        g_4940--;
    }
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
/*aft_stmt:128511*/
    /*bef_stmt:128537*/
return (Tag118(/*int32_t:128539:128539:128537:e*/*l_4788));
/*aft_stmt:128537*/
}


/* ------------------------------------------ */
/* 
 * reads : g_1054 g_1055 g_1056
 * writes: g_1056 g_361
 */
static int64_t  func_21(int16_t  p_22, int8_t  p_23)
{ /* block id: 1718 */
    int32_t l_3832[3];
    int32_t l_3833[3][1][7] = {{{0x0EEAB3F3L,0x0EEAB3F3L,1L,0x0EEAB3F3L,0x0EEAB3F3L,1L,0x0EEAB3F3L}},{{0xB364AF93L,0xB5B4A6C2L,0xB5B4A6C2L,0xB364AF93L,0xB5B4A6C2L,0xB5B4A6C2L,0xB364AF93L}},{{0L,0x0EEAB3F3L,0L,0L,0x0EEAB3F3L,0L,0L}}};
    uint16_t *****l_3847 = &g_1016;
    uint64_t l_3854 = 18446744073709551614UL;
    int32_t *l_3872 = (void*)0;
    int16_t l_3996 = (-1L);
    const int32_t *l_4001 = &l_3833[0][0][4];
    int32_t l_4009[2];
    uint32_t *** const l_4050 = &g_272;
    int32_t l_4052[8] = {0x776D92EBL,0x776D92EBL,0x0212EEB4L,0x776D92EBL,0x776D92EBL,0x0212EEB4L,0x776D92EBL,0x776D92EBL};
    uint64_t l_4106 = 1UL;
    uint32_t l_4123 = 0x9225444EL;
    uint8_t l_4124[9][2] = {{0x38L,0xF8L},{0x38L,1UL},{0x2AL,0x2AL},{1UL,0x38L},{0xF8L,0x38L},{1UL,0x2AL},{0x2AL,1UL},{0x38L,0xF8L},{0x38L,1UL}};
    const int32_t *l_4178 = &l_3832[0];
    const int32_t **l_4177 = &l_4178;
    const int32_t ***l_4176[5];
    int32_t *l_4224 = &l_3833[0][0][4];
    uint32_t l_4260 = 0xA5AAA7A6L;
    int16_t l_4280 = 0L;
    int16_t l_4288[10][10] = {{0xF0D2L,(-6L),0xF0D2L,0x6736L,(-1L),0L,0xED76L,(-1L),0x357FL,0x92B5L},{0x92B5L,0L,0L,0L,(-1L),0x9292L,0x9292L,(-1L),0L,0L},{0x4E71L,0x4E71L,0xF0D2L,(-1L),0x357FL,(-6L),(-6L),(-1L),(-1L),0L},{0x9292L,0xED76L,0x4E71L,0xB69DL,(-6L),(-1L),(-6L),0xB69DL,0x4E71L,0xED76L},{(-1L),0x4E71L,0L,0x92B5L,0L,0x6736L,0x9292L,(-1L),(-1L),(-1L)},{(-1L),0L,(-6L),0xED76L,0x6736L,0x6736L,0xED76L,(-6L),0L,(-1L)},{(-1L),(-6L),0x6736L,(-6L),0x4E71L,(-1L),0L,0L,0xB69DL,(-1L)},{0x9292L,0L,(-1L),(-6L),0x4E71L,(-6L),(-1L),0L,0x9292L,(-1L)},{0x4E71L,0L,0x92B5L,0L,0x6736L,0x9292L,(-1L),(-1L),(-1L),(-1L)},{0x92B5L,0xF0D2L,0L,0L,0L,0L,0xF0D2L,0x92B5L,0x9292L,0xED76L}};
    int16_t l_4350 = (-1L);
    int64_t l_4364 = 0xC37D0FD6968F1895LL;
    int32_t l_4446 = 0xE57CEC44L;
    uint64_t *l_4474 = &g_1200;
    uint64_t * const *l_4473 = &l_4474;
    int32_t l_4511 = (-1L);
    const int64_t **l_4627 = &g_394;
    const int64_t ***l_4626[10][10] = {{&l_4627,&l_4627,(void*)0,&l_4627,&l_4627,(void*)0,&l_4627,&l_4627,(void*)0,(void*)0},{(void*)0,&l_4627,(void*)0,&l_4627,&l_4627,&l_4627,&l_4627,&l_4627,&l_4627,&l_4627},{&l_4627,&l_4627,(void*)0,&l_4627,(void*)0,(void*)0,&l_4627,&l_4627,(void*)0,(void*)0},{&l_4627,&l_4627,&l_4627,&l_4627,(void*)0,&l_4627,(void*)0,(void*)0,(void*)0,&l_4627},{(void*)0,&l_4627,&l_4627,&l_4627,&l_4627,(void*)0,&l_4627,(void*)0,&l_4627,&l_4627},{(void*)0,&l_4627,(void*)0,(void*)0,&l_4627,(void*)0,(void*)0,&l_4627,(void*)0,&l_4627},{&l_4627,(void*)0,(void*)0,&l_4627,&l_4627,(void*)0,(void*)0,&l_4627,&l_4627,&l_4627},{&l_4627,&l_4627,(void*)0,&l_4627,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_4627,&l_4627,&l_4627,&l_4627,(void*)0,&l_4627,(void*)0,(void*)0,&l_4627},{&l_4627,&l_4627,&l_4627,(void*)0,&l_4627,(void*)0,&l_4627,&l_4627,(void*)0,&l_4627}};
    const int64_t ****l_4625[5];
    int64_t l_4652 = 8L;
    uint32_t l_4667[2];
    uint8_t **l_4686 = &g_328;
    uint8_t ***l_4685 = &l_4686;
    uint8_t ****l_4684[7] = {&l_4685,&l_4685,&l_4685,&l_4685,&l_4685,&l_4685,&l_4685};
    uint8_t l_4689 = 0x24L;
    int32_t ****l_4695 = &g_396;
    int8_t l_4703 = 0L;
    uint16_t l_4706 = 0xE9B4L;
    uint16_t l_4743 = 0xBCCAL;
    int8_t **l_4765[2];
    int8_t **l_4766 = &g_716;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_3832[i] = 0x097705EBL;
    for (i = 0; i < 2; i++)
        l_4009[i] = 1L;
    for (i = 0; i < 5; i++)
        l_4176[i] = &l_4177;
    for (i = 0; i < 5; i++)
        l_4625[i] = &l_4626[4][2];
    for (i = 0; i < 2; i++)
        l_4667[i] = 0x00522191L;
    for (i = 0; i < 2; i++)
        l_4765[i] = &g_716;
    /*bef_stmt:137925*/
if (/*TAG119:STA*/((int16_t)(realsmith_LMAEc((unsigned int)(p_22)+(15))+(int)(p_22)-(2))+p_22)/*TAG119:END:p_22*/)
    { /* block id: 1719 */
        int32_t *l_3822 = &g_72[6][0][1];
        const int32_t **l_3823 = &g_1056;
        l_3822 = l_3822;
        (*l_3823) = (**g_1054);
    }
    else
    { /* block id: 1722 */
        uint32_t l_3834 = 0x7C6FAF55L;
        int32_t l_3911 = 0x8EB1A054L;
        const int32_t *l_3914[4];
        int32_t l_3943[1][7] = {{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}};
        int8_t l_4034[10][4] = {{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL},{1L,0xDEL,1L,0xDEL}};
        int32_t l_4054 = 3L;
        uint8_t *l_4072 = &g_424[3];
        int32_t *l_4079 = &l_4052[3];
        int16_t *l_4091 = &g_1017;
        int32_t ***l_4113 = &g_3224;
        int64_t l_4122 = (-8L);
        int32_t l_4125 = 0x4689443AL;
        int64_t *****l_4155 = &g_344;
        const int8_t l_4190[7] = {0x46L,0x46L,0x46L,0x46L,0x46L,0x46L,0x46L};
        int32_t l_4197 = 0L;
        int32_t l_4198[3][5];
        int32_t l_4242[1][8] = {{0x31A9E696L,0x31A9E696L,0x31A9E696L,0x31A9E696L,0x31A9E696L,0x31A9E696L,0x31A9E696L,0x31A9E696L}};
        uint32_t l_4304 = 0x56BF79B6L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_3914[i] = &l_3833[0][0][4];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
                l_4198[i][j] = 0L;
        }
        for (g_361 = 0; (g_361 == (-4)); g_361 = safe_sub_func_uint64_t_u_u(g_361, 7))
        { /* block id: 1725 */
            int32_t l_3826 = (-9L);
            int32_t *l_3827 = (void*)0;
            int32_t *l_3828 = &g_72[5][1][1];
            int32_t *l_3829 = &l_3826;
            int32_t *l_3830 = &g_72[5][1][1];
            int32_t *l_3831[6][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            uint8_t **** const *l_3842[5][7];
            int32_t **l_3894[9] = {&l_3827,(void*)0,(void*)0,&l_3827,(void*)0,(void*)0,&l_3827,(void*)0,(void*)0};
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 7; j++)
                    l_3842[i][j] = (void*)0;
            }
            l_3834--;
        }
    }
/*aft_stmt:137925*/
    /*bef_stmt:137941*/
return /*TAG120:STA*/((int8_t)(realsmith_proxy_H3mBT((int)(p_23)+(62), (int)(p_23)+(-50), (int)(p_23)+(-38))+(int)(p_23)-(-8))+p_23)/*TAG120:END:p_23*/;
/*aft_stmt:137941*/
}


/* ------------------------------------------ */
/* 
 * reads : g_3387 g_1825 g_404 g_186 g_3203 g_1520 g_1347 g_578 g_424 g_89 g_3417 g_1056 g_169 g_72 g_542 g_716 g_2609 g_248 g_418 g_2655 g_2656 g_2040 g_2896 g_1200 g_1054 g_1055 g_715 g_1015 g_3688 g_3698 g_1219 g_330 g_394 g_108 g_272 g_273 g_111 g_585 g_3750 g_3319 g_1017 g_1343 g_3560 g_280 g_1938 g_1215
 * writes: g_3387 g_1825 g_542 g_89 g_186 g_169 g_578 g_424 g_418 g_1056 g_114 g_2656 g_2896 g_72 g_1200 g_1016 g_3688 g_1520 g_1720 g_1219 g_111 g_3319 g_108 g_280 g_3344 g_3560
 */
static uint16_t  func_27(uint8_t * p_28, uint8_t * p_29)
{ /* block id: 1504 */
    int32_t *l_3383 = &g_89;
    int32_t *l_3384 = &g_72[5][1][1];
    int32_t *l_3385 = &g_169;
    int32_t *l_3386[9] = {&g_72[6][0][2],&g_89,&g_72[6][0][2],&g_89,&g_72[6][0][2],&g_89,&g_72[6][0][2],&g_89,&g_72[6][0][2]};
    uint64_t l_3426 = 0UL;
    int16_t *l_3485 = &g_1520[5][2];
    int16_t *l_3486 = &g_1720[3];
    uint32_t l_3499[9][8][3] = {{{18446744073709551615UL,0xAA989C09L,0x6B45F1E9L},{1UL,0UL,1UL},{0xE55CBED7L,18446744073709551615UL,0x045E73B2L},{18446744073709551615UL,0UL,18446744073709551608UL},{0UL,0xAA989C09L,18446744073709551615UL},{18446744073709551612UL,0UL,18446744073709551614UL},{18446744073709551615UL,18446744073709551615UL,0x6B45F1E9L},{5UL,0UL,0x04675EC2L}},{{0xE55CBED7L,0xAA989C09L,0x045E73B2L},{18446744073709551609UL,0UL,0xD2A4637DL},{0UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551610UL,0UL,18446744073709551610UL},{18446744073709551615UL,0xAA989C09L,0x6B45F1E9L},{1UL,0UL,1UL},{0xE55CBED7L,18446744073709551615UL,0x045E73B2L},{18446744073709551615UL,0UL,18446744073709551608UL}},{{0UL,0xAA989C09L,18446744073709551615UL},{18446744073709551612UL,0UL,18446744073709551614UL},{18446744073709551615UL,18446744073709551615UL,0x6B45F1E9L},{5UL,0UL,0x04675EC2L},{0xE55CBED7L,0xAA989C09L,0x045E73B2L},{18446744073709551609UL,0UL,0xD2A4637DL},{0UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551610UL,0UL,18446744073709551610UL}},{{18446744073709551615UL,0xAA989C09L,0x6B45F1E9L},{1UL,0UL,1UL},{0xE55CBED7L,18446744073709551615UL,0x045E73B2L},{18446744073709551615UL,0UL,18446744073709551608UL},{0UL,0xAA989C09L,18446744073709551615UL},{18446744073709551612UL,0UL,18446744073709551614UL},{18446744073709551615UL,18446744073709551615UL,0x6B45F1E9L},{5UL,0UL,0x04675EC2L}},{{0xE55CBED7L,0xAA989C09L,0x045E73B2L},{18446744073709551609UL,0UL,0xD2A4637DL},{0UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551610UL,0UL,18446744073709551610UL},{18446744073709551615UL,0xAA989C09L,0x6B45F1E9L},{1UL,0UL,1UL},{0xE55CBED7L,18446744073709551615UL,0x045E73B2L},{18446744073709551615UL,0UL,18446744073709551608UL}},{{0UL,0xAA989C09L,18446744073709551615UL},{18446744073709551612UL,0UL,18446744073709551614UL},{18446744073709551615UL,18446744073709551615UL,0x6B45F1E9L},{5UL,0UL,0x04675EC2L},{0xE55CBED7L,0xAA989C09L,0x045E73B2L},{18446744073709551609UL,0UL,0xD2A4637DL},{0UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551610UL,0UL,18446744073709551610UL}},{{18446744073709551615UL,0xAA989C09L,0x6B45F1E9L},{1UL,0UL,1UL},{0xE55CBED7L,18446744073709551615UL,0x045E73B2L},{18446744073709551615UL,0UL,18446744073709551608UL},{0UL,0xAA989C09L,18446744073709551615UL},{18446744073709551612UL,0UL,18446744073709551614UL},{18446744073709551615UL,18446744073709551615UL,0x6B45F1E9L},{5UL,0UL,0x04675EC2L}},{{0xE55CBED7L,0xAA989C09L,0x045E73B2L},{18446744073709551609UL,0UL,0xD2A4637DL},{0UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551610UL,0UL,18446744073709551610UL},{18446744073709551615UL,0xAA989C09L,0x6B45F1E9L},{1UL,0UL,1UL},{0xB0321E43L,0xDB295FDEL,0UL},{18446744073709551610UL,6UL,0x707D6960L}},{{0xAA989C09L,0x8D416197L,0xDB295FDEL},{0xD2A4637DL,6UL,0x8BF6FE96L},{0x9A5DD16BL,0xDB295FDEL,0x848197C2L},{0x04675EC2L,6UL,6UL},{0xB0321E43L,0x8D416197L,0UL},{18446744073709551614UL,6UL,0x9680643EL},{0xAA989C09L,0xDB295FDEL,0xDB295FDEL},{18446744073709551608UL,6UL,18446744073709551615UL}}};
    uint32_t l_3559[1][1];
    const int32_t *l_3638 = &g_169;
    int64_t *l_3649 = &g_108;
    uint16_t ****l_3687 = &g_796[0][1];
    uint16_t l_3729[3][10][3] = {{{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL}},{{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL}},{{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL},{0x58E9L,65530UL,3UL},{3UL,65530UL,65530UL},{0x3C8FL,65530UL,65535UL}}};
    int16_t l_3741 = 0x5B61L;
    int16_t l_3816 = 0xA906L;
    int64_t l_3817 = 0xCE12D785842FD83ELL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_3559[i][j] = 4294967295UL;
    }
lbl_3605:
    ++g_3387[2][4];
    for (g_1825 = 0; (g_1825 <= 2); g_1825 += 1)
    { /* block id: 1508 */
        const int32_t **l_3415 = &g_1056;
        uint64_t l_3423 = 1UL;
        int32_t * const ***l_3481 = (void*)0;
        int32_t * const ****l_3480[8][10] = {{&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481},{&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481},{&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481},{&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481},{&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481},{&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481},{&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481},{&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481,&l_3481}};
        uint8_t **** const *l_3483 = &g_1697[1];
        int8_t **l_3498 = &g_716;
        uint8_t l_3531 = 0x88L;
        int16_t l_3536 = 0xE51DL;
        int i, j;
        for (g_542 = 0; (g_542 <= 9); g_542 += 1)
        { /* block id: 1511 */
            int8_t *** const l_3390[9] = {&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715};
            int32_t l_3413 = 0xE1CE066AL;
            int32_t l_3416 = (-1L);
            uint64_t l_3445 = 0x6CFC238C28F2EA42LL;
            uint16_t * const *l_3491 = &g_794;
            int32_t l_3529 = 0x13F8A9C1L;
            int32_t l_3530 = 0x6E587BC3L;
            const uint16_t * const **l_3577 = (void*)0;
            int32_t l_3609 = 0xF4BD3792L;
            int i;
            if (((*l_3383) = (l_3390[8] != &g_715)))
            { /* block id: 1513 */
                int8_t ***l_3429 = &g_715;
                uint16_t *l_3430 = &g_919;
                uint64_t *l_3437 = &l_3423;
                uint64_t *l_3440[6][8][4] = {{{(void*)0,&g_1825,&g_1825,&g_418},{&g_1825,(void*)0,&l_3426,&g_78},{&l_3426,&l_3426,&g_1200,&g_418},{(void*)0,&g_418,&l_3426,&g_2138},{&g_418,&l_3426,&g_2138,&g_1825},{&g_78,&g_78,(void*)0,&g_1825},{&g_1825,&g_2138,&g_1825,&l_3426},{&g_418,&g_1825,&g_1200,(void*)0}},{{&g_1825,&g_418,&g_418,&g_1825},{&g_2138,&g_78,&g_418,&g_1200},{&g_1825,&l_3426,&g_1200,&l_3426},{&g_418,&g_418,&g_1825,&g_1200},{&g_1825,&g_1200,(void*)0,&g_2138},{&g_78,&l_3426,&g_2138,&l_3426},{&g_418,(void*)0,&l_3426,&g_1200},{(void*)0,&g_1200,&g_1200,(void*)0}},{{&l_3426,&g_418,&l_3426,&g_2138},{&g_1825,&g_2138,&g_1825,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_3426,&g_2138,&g_418,&g_2138},{&l_3426,&g_418,&l_3426,(void*)0},{&l_3426,&g_1200,&g_418,&g_1200},{(void*)0,(void*)0,&g_2138,&l_3426},{&g_418,&l_3426,&g_1200,&g_2138}},{{&g_418,&g_1200,(void*)0,&g_1200},{(void*)0,&g_418,&g_78,&l_3426},{(void*)0,&l_3426,&l_3426,&g_1200},{&g_1200,&g_78,&l_3426,&g_1825},{&g_1200,&g_418,&l_3426,(void*)0},{(void*)0,&g_1825,&g_78,&l_3426},{(void*)0,&g_2138,(void*)0,&g_1825},{&g_418,&g_78,&g_1200,&g_1825}},{{&g_418,&l_3426,&g_2138,&g_2138},{(void*)0,&g_418,&g_418,&g_418},{&l_3426,&l_3426,&l_3426,&g_78},{&l_3426,(void*)0,&g_418,&g_418},{&l_3426,&g_1825,(void*)0,&g_418},{(void*)0,&g_1825,&g_1825,&g_418},{&g_1825,(void*)0,&l_3426,&g_78},{&l_3426,&l_3426,&g_1200,&g_418}},{{(void*)0,&g_418,&l_3426,&g_2138},{&g_418,&l_3426,&g_2138,&g_1825},{&g_78,&g_78,(void*)0,&g_1825},{(void*)0,&g_78,(void*)0,&g_418},{(void*)0,(void*)0,(void*)0,&g_1825},{&l_3426,&l_3426,&g_1200,(void*)0},{&g_418,(void*)0,&g_1200,&g_78},{&l_3426,&l_3426,(void*)0,&g_2138}}};
                int32_t *l_3442[10][10][2];
                int32_t * const l_3479 = (void*)0;
                int32_t * const *l_3478 = &l_3479;
                int32_t * const **l_3477[6];
                int32_t * const ***l_3476 = &l_3477[2];
                int32_t * const ****l_3475 = &l_3476;
                int i, j, k;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_3442[i][j][k] = &g_72[5][1][1];
                    }
                }
                for (i = 0; i < 6; i++)
                    l_3477[i] = &l_3478;
                if (g_404[g_1825])
                { /* block id: 1514 */
                    uint32_t l_3414 = 0x4BE5D6FCL;
                    for (g_186 = 0; (g_186 <= 3); g_186 += 1)
                    { /* block id: 1517 */
                        int8_t ***l_3418 = &g_715;
                        int8_t ****l_3419 = (void*)0;
                        int8_t ****l_3420 = &l_3418;
                        int i, j;
                        /*bef_stmt:152217*/
/*bef_stmt:152217*/
/*bef_stmt:152217*/
/*bef_stmt:152217*/
/*bef_stmt:152217*/
/*bef_stmt:152217*/
/*bef_stmt:152217*/
/*bef_stmt:152217*/
/*bef_stmt:152217*/
l_3416 = (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((((safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_404[g_1825] < ((((*l_3383) = ((((((*p_29) = (safe_lshift_func_uint8_t_u_u(g_3203[(g_1825 + 1)][(g_186 + 4)], (((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(g_1520[(g_1825 + 1)][(g_186 + 1)], 4L)), 5)) >= (((((((*l_3385) = (+(l_3413 |= (safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(0xCFL, (!((0x80L != g_3387[(g_1825 + 2)][g_1825]) | ((0x797EC3FB7CB908EBLL != g_3387[(g_1825 + 1)][(g_1825 + 4)]) & g_1347[g_1825]))))) , g_404[g_1825]), g_404[g_1825]))))) | 0x146DFA6BL) != (Tag121(/*uint8_t:179137:179137:152217:e*/*p_29))) , (void*)0) != (void*)0) || Tag122(/*uint32_t:152261:153700:152217:e*/l_3414))) , (Tag123(/*uint8_t:179137:179137:152217:e*/*p_29)))))) , l_3415) != (void*)0) || (Tag124(/*int32_t:179137:179137:152217:e*/*l_3383))) & Tag125(/*int32_t:153954:154233:152217:e*/l_3416))) && Tag126(/*uint8_t:0:0:152217:e*/g_3417[4])) > 253UL)), (-1L))), Tag127(/*uint32_t:152261:153700:152217:e*/l_3414))) != g_404[g_1825]) , (Tag128(/*const int32_t:154233:179137:152217:e*/**l_3415))) ^ g_3203[(g_1825 + 1)][(g_186 + 4)]) , 65535UL), 9)), 0L)) < Tag129(/*int32_t:153954:154233:152217:e*/l_3416)), 0x67L));
/*aft_stmt:152217*/
/*aft_stmt:152217*/
/*aft_stmt:152217*/
/*aft_stmt:152217*/
/*aft_stmt:152217*/
/*aft_stmt:152217*/
/*aft_stmt:152217*/
/*aft_stmt:152217*/
/*aft_stmt:152217*/
                        (*l_3420) = l_3418;
                    }
                }
                else
                { /* block id: 1525 */
                    int i, j;
                    /*bef_stmt:152888*/
/*bef_stmt:152888*/
/*bef_stmt:152888*/
/*bef_stmt:152888*/
/*bef_stmt:152888*/
(*l_3383) = (safe_mul_func_uint8_t_u_u(0x57L, ((((l_3426 = (l_3423++)) & (safe_sub_func_uint32_t_u_u((((void*)0 == l_3429) < ((void*)0 == l_3430)), (safe_add_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((g_404[g_1825] ^ 0x837E12D9L), ((safe_add_func_int8_t_s_s(g_3203[(g_1825 + 2)][(g_1825 + 5)], (g_1520[(g_1825 + 5)][g_542] , (Tag130(/*int8_t:0:0:152888:e*/*g_716))))) > (Tag131(/*const int32_t:154233:179137:152888:e*/**l_3415))))) > g_404[g_1825]) | 0xA58BAB47L) | (Tag132(/*int32_t:179137:179137:152888:e*/*l_3384))), (Tag133(/*uint8_t:0:0:152888:e*/*g_2609))))))) != (-1L)) || Tag134(/*const int64_t:0:0:152888:e*/g_248))));
/*aft_stmt:152888*/
/*aft_stmt:152888*/
/*aft_stmt:152888*/
/*aft_stmt:152888*/
/*aft_stmt:152888*/
                }
                /*bef_stmt:153600*/
if (((Tag135(/*int32_t:153954:154233:153600:e*/l_3413) , (g_418 |= ((*l_3437)--))) | 0x9B1DCD0BDE7EB6B7LL))
                { /* block id: 1532 */
                    int16_t l_3441[9] = {(-1L),0x6B0FL,(-1L),0x6B0FL,(-1L),0x6B0FL,(-1L),0x6B0FL,(-1L)};
                    int32_t l_3443 = 0x287C17D9L;
                    int32_t l_3444 = 1L;
                    int i;
                    /*bef_stmt:153234*/
if (Tag136(/*int16_t:153306:153700:153234:e*/l_3441[6]))
                        break;
/*aft_stmt:153234*/
                    (*l_3415) = l_3442[6][8][1];
                    --l_3445;
                }
                else
                { /* block id: 1536 */
                    uint64_t l_3448 = 1UL;
                    uint16_t l_3472 = 65533UL;
                    uint64_t l_3473 = 0xAECBDEA16A106243LL;
                    l_3448--;
                    for (g_114 = 0; (g_114 <= 2); g_114 += 1)
                    { /* block id: 1540 */
                        (*g_2655) = (*g_2655);
                    }
                    /*bef_stmt:153498*/
if (Tag137(/*uint64_t:153954:154233:153498:e*/l_3445))
                        continue;
/*aft_stmt:153498*/
                    for (l_3413 = 0; (l_3413 <= 2); l_3413 += 1)
                    { /* block id: 1546 */
                        int32_t *l_3474 = (void*)0;
                    }
                }
/*aft_stmt:153600*/
                l_3480[7][9] = (l_3475 = (void*)0);
                /*bef_stmt:153696*/
if (Tag138(/*uint64_t:153954:154233:153696:e*/l_3445))
                    continue;
/*aft_stmt:153696*/
            }
            else
            { /* block id: 1554 */
                for (g_2896 = 0; (g_2896 <= 7); g_2896 += 1)
                { /* block id: 1557 */
                    int i, j;
                    (*g_2040) = (!(l_3483 == (void*)0));
                    return g_1520[(g_2896 + 1)][(g_2896 + 2)];
                }
            }
        }
        for (g_1200 = 0; (g_1200 <= 2); g_1200 += 1)
        { /* block id: 1629 */
            const int32_t **l_3637[1];
            int i;
            for (i = 0; i < 1; i++)
                l_3637[i] = &g_1056;
            l_3638 = (**g_1054);
            return g_404[g_1200];
        }
    }
    /*bef_stmt:179109*/
if ((Tag139(/*const int32_t:179137:179137:179109:e*/*l_3638)))
    { /* block id: 1634 */
        uint16_t **l_3639[1];
        int32_t l_3644 = 0xE35DF2F5L;
        int64_t *l_3654 = (void*)0;
        int32_t *** const *l_3695 = &g_396;
        int32_t l_3696 = 0L;
        int32_t **l_3745 = &g_1501;
        int32_t *l_3788 = &g_72[5][1][1];
        int16_t * const l_3803[3] = {&g_1520[8][0],&g_1520[8][0],&g_1520[8][0]};
        const int32_t **l_3810 = &g_1056;
        int i;
        for (i = 0; i < 1; i++)
            l_3639[i] = &g_794;
        /*bef_stmt:178474*/
/*bef_stmt:178474*/
/*bef_stmt:178474*/
/*bef_stmt:178474*/
/*bef_stmt:178474*/
/*bef_stmt:178474*/
/*bef_stmt:178474*/
if ((((void*)0 == l_3639[0]) , (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((Tag140(/*int32_t:179137:179137:178474:e*/*l_3384)), Tag141(/*int32_t:178515:179137:178474:e*/l_3644))), (safe_lshift_func_int8_t_s_u((Tag142(/*int32_t:178515:179137:178474:e*/l_3644) || (Tag143(/*int32_t:178515:179137:178474:e*/l_3644) > ((safe_mul_func_uint8_t_u_u(8UL, ((**g_715) = (l_3649 != (l_3654 = (((safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((Tag144(/*int32_t:179137:179137:178474:e*/*l_3384)) & 0xEF932E19C8292820LL), Tag145(/*int32_t:178515:179137:178474:e*/l_3644))), 0x88B00DFD811626C4LL)) >= 0xCFL) , (void*)0)))))) < (Tag146(/*const int32_t:0:0:178474:e*/***g_1054))))), 2))))))
        { /* block id: 1637 */
            uint16_t *l_3661 = (void*)0;
            const int32_t l_3667 = 0x33953E38L;
            uint64_t *l_3668 = &g_1825;
            uint8_t ***l_3677 = (void*)0;
            uint16_t ****l_3686[9][6] = {{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0},{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0},{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0},{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0},{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0},{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0},{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0},{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0},{&g_796[0][1],&g_796[0][1],(void*)0,&g_796[0][1],&g_796[0][1],(void*)0}};
            int32_t ** const **l_3691 = (void*)0;
            int32_t ****l_3694 = &g_396;
            int8_t l_3697 = 6L;
            int32_t l_3700 = 2L;
            int32_t l_3702[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint32_t l_3703 = 3UL;
            int8_t ***l_3715 = &g_715;
            int8_t ****l_3714 = &l_3715;
            int i, j;
            /*bef_stmt:176653*/
/*bef_stmt:176653*/
/*bef_stmt:176653*/
/*bef_stmt:176653*/
/*bef_stmt:176653*/
/*bef_stmt:176653*/
/*bef_stmt:176653*/
/*bef_stmt:176653*/
/*bef_stmt:176653*/
/*bef_stmt:176653*/
if (((0L != (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((void*)0 != l_3661) , (~(18446744073709551608UL == ((Tag147(/*int32_t:179137:179137:176653:e*/*l_3384)) <= ((*l_3668) = (((safe_add_func_int8_t_s_s(((Tag148(/*int32_t:178515:179137:176653:e*/l_3644) <= (9L == (Tag149(/*int32_t:179137:179137:176653:e*/*l_3384)))) <= 1L), (Tag150(/*uint8_t:179137:179137:176653:e*/*p_29)))) , Tag151(/*const int32_t:176659:178515:176653:e*/l_3667)) <= 65531UL)))))) ^ (Tag152(/*int32_t:179137:179137:176653:e*/*l_3385))), Tag153(/*int32_t:178515:179137:176653:e*/l_3644))), 1)) && Tag154(/*int32_t:178515:179137:176653:e*/l_3644)), Tag155(/*int32_t:178515:179137:176653:e*/l_3644)))) <= Tag156(/*const int32_t:176659:178515:176653:e*/l_3667)))
            { /* block id: 1639 */
                int8_t l_3669 = 0xF5L;
                uint32_t *l_3670 = (void*)0;
                uint32_t *l_3671[9][6][1] = {{{&g_3319},{(void*)0},{&g_3203[2][6]},{&g_3203[2][6]},{&l_3499[0][6][0]},{&g_3203[6][5]}},{{&l_3499[7][7][0]},{&g_3203[1][7]},{&g_3203[1][7]},{&l_3499[7][7][0]},{&g_3203[6][5]},{&l_3499[0][6][0]}},{{&g_3203[2][6]},{&g_3203[2][6]},{(void*)0},{&g_3319},{&g_1347[3]},{&g_3319}},{{(void*)0},{&g_3203[2][6]},{&g_3203[2][6]},{&l_3499[0][6][0]},{&g_3203[6][5]},{&l_3499[7][7][0]}},{{&g_3203[1][7]},{&g_3203[1][7]},{&l_3499[7][7][0]},{&g_3203[6][5]},{&l_3499[0][6][0]},{&g_3203[2][6]}},{{&g_3203[2][6]},{(void*)0},{&g_3319},{&g_1347[3]},{&g_3319},{(void*)0}},{{&g_3203[2][6]},{&g_3203[2][6]},{&l_3499[0][6][0]},{&g_3203[6][5]},{&l_3499[7][7][0]},{&g_3203[1][7]}},{{&g_3203[1][7]},{&l_3499[7][7][0]},{&g_3203[6][5]},{&l_3499[0][6][0]},{&g_3203[2][6]},{&g_3203[2][6]}},{{(void*)0},{&g_3319},{&g_1347[3]},{&g_3319},{(void*)0},{&g_3203[2][6]}}};
                uint16_t ****l_3685 = &g_796[1][0];
                int32_t ** const ***l_3690[8][6][5] = {{{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,(void*)0},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,(void*)0,&g_3688,&g_3688,&g_3688}},{{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,(void*)0,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,(void*)0},{&g_3688,&g_3688,(void*)0,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,(void*)0},{&g_3688,&g_3688,&g_3688,(void*)0,&g_3688}},{{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,(void*)0},{(void*)0,&g_3688,&g_3688,&g_3688,(void*)0},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,(void*)0,&g_3688,&g_3688}},{{&g_3688,&g_3688,&g_3688,(void*)0,(void*)0},{&g_3688,&g_3688,&g_3688,(void*)0,(void*)0},{(void*)0,(void*)0,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,(void*)0},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688}},{{&g_3688,&g_3688,&g_3688,(void*)0,(void*)0},{&g_3688,&g_3688,&g_3688,(void*)0,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,(void*)0,&g_3688,&g_3688},{&g_3688,(void*)0,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688}},{{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,(void*)0,&g_3688},{(void*)0,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688}},{{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,(void*)0,(void*)0,&g_3688,(void*)0},{(void*)0,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688}},{{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{(void*)0,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,(void*)0,&g_3688},{&g_3688,(void*)0,(void*)0,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688},{&g_3688,&g_3688,&g_3688,&g_3688,&g_3688}}};
                int i, j, k;
                /*bef_stmt:165559*/
/*bef_stmt:165559*/
/*bef_stmt:165559*/
/*bef_stmt:165559*/
/*bef_stmt:165559*/
l_3383 = ((l_3644 ^= Tag157(/*int8_t:165563:176659:165559:e*/l_3669)) , ((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((*g_716) = ((+((void*)0 == l_3677)) > (safe_rshift_func_uint16_t_u_u(0x8621L, 3)))), (+((((safe_mod_func_uint8_t_u_u(((((((*g_1015) = l_3685) != (l_3687 = l_3686[4][0])) > ((g_3688 = g_3688) == l_3691)) != (safe_rshift_func_uint8_t_u_s((((l_3644 ^= ((l_3694 = l_3694) != l_3695)) || 0xCA5FL) == (Tag158(/*int32_t:179137:179137:165559:e*/*l_3383))), 4))) <= 0x6C63L), Tag159(/*const int32_t:176659:178515:165559:e*/l_3667))) & 252UL) || 0L) & Tag160(/*int32_t:178515:179137:165559:e*/l_3696))))) <= Tag161(/*int8_t:176659:178515:165559:e*/l_3697)), (-5L))) , g_3698));
/*aft_stmt:165559*/
/*aft_stmt:165559*/
/*aft_stmt:165559*/
/*aft_stmt:165559*/
/*aft_stmt:165559*/
            }
            else
            { /* block id: 1648 */
                int32_t l_3699[3];
                int32_t l_3701 = (-5L);
                int32_t l_3728 = (-1L);
                int32_t l_3730 = 0xFBABB3AAL;
                int32_t l_3731 = 0x580AE79BL;
                int64_t *l_3739 = (void*)0;
                int64_t *l_3740 = &g_1219;
                int8_t *l_3744[5] = {&g_3560,&g_3560,&g_3560,&g_3560,&g_3560};
                uint32_t *l_3751[8][10][3] = {{{&g_3319,&g_3203[2][2],&g_1347[2]},{(void*)0,(void*)0,&g_3203[6][4]},{&g_3319,&g_3319,&g_3203[6][4]},{(void*)0,(void*)0,&g_1578},{&g_3203[2][2],&g_3319,&g_3203[2][2]},{&g_1578,(void*)0,&l_3499[5][0][0]},{&g_1347[0],&g_3203[2][2],&g_3203[2][2]},{&l_3499[5][0][0],&g_1578,&g_1578},{&g_3203[6][4],&g_1347[0],&g_3203[6][4]},{&l_3499[5][0][0],&l_3499[5][0][0],&g_3203[6][4]}},{{&g_1347[0],&g_3203[6][4],&g_1347[2]},{&g_1578,&l_3499[5][0][0],&g_1578},{&g_3203[2][2],&g_1347[0],&g_3319},{(void*)0,&g_1578,&g_1578},{&g_3319,&g_3203[2][2],&g_1347[2]},{(void*)0,(void*)0,&g_3203[6][4]},{&g_3319,&g_3319,&g_3203[6][4]},{(void*)0,(void*)0,&g_1578},{&g_3203[2][2],&g_3319,&g_3203[2][2]},{&g_1578,(void*)0,&l_3499[5][0][0]}},{{&g_1347[0],&g_3203[2][2],&g_3203[2][2]},{&l_3499[5][0][0],&g_1578,&g_1578},{&g_3203[6][4],&g_1347[0],&g_3203[6][4]},{&l_3499[5][0][0],&l_3499[5][0][0],&g_3203[6][4]},{&g_1347[0],&g_3203[6][4],&g_1347[2]},{&g_1578,&l_3499[5][0][0],&g_1578},{&g_3203[2][2],&g_1347[0],&g_3319},{(void*)0,&g_1578,&g_1578},{&g_3319,&g_3203[2][2],&g_1347[2]},{(void*)0,(void*)0,&g_3203[6][4]}},{{&g_3319,&g_3319,&g_3203[6][4]},{(void*)0,(void*)0,&g_1578},{&g_3203[2][2],&g_3319,&g_3203[2][2]},{&g_1578,(void*)0,&l_3499[5][0][0]},{&g_1347[0],&g_3203[2][2],&g_3203[2][2]},{&l_3499[5][0][0],&g_1578,&g_1578},{&g_3203[6][4],&g_1347[0],&g_3203[6][4]},{&l_3499[5][0][0],&l_3499[5][0][0],&g_3203[6][4]},{&g_1347[0],&g_3203[6][4],&g_1347[2]},{&g_1578,&l_3499[5][0][0],&g_1578}},{{&g_3203[2][2],&g_1347[0],&g_3319},{(void*)0,&g_1578,&g_1578},{&g_3319,&g_3203[2][2],&g_1347[2]},{(void*)0,(void*)0,&g_3203[6][4]},{&g_3319,&g_3319,&g_3203[6][4]},{(void*)0,(void*)0,&g_1578},{&g_3203[2][2],&g_3319,&g_3203[2][2]},{&g_1578,(void*)0,&l_3499[5][0][0]},{&g_1347[0],&g_3203[2][2],&g_3203[2][2]},{&l_3499[5][0][0],&g_1578,&g_1578}},{{&g_3203[6][4],&g_1347[0],&g_3203[6][4]},{&l_3499[5][0][0],&l_3499[5][0][0],&g_3203[6][4]},{&g_1347[0],&g_3203[6][4],&g_1347[2]},{&g_1578,&l_3499[5][0][0],&g_1578},{&g_3203[2][2],&g_1347[0],&g_3319},{(void*)0,&g_1578,&g_1578},{&g_3319,&g_3203[2][2],&g_1347[2]},{(void*)0,(void*)0,&g_3203[6][4]},{&g_3319,&g_3319,&g_3203[6][4]},{(void*)0,(void*)0,&g_1578}},{{&g_3203[2][2],&g_3319,&g_3203[6][4]},{(void*)0,&g_1578,&l_3499[6][1][1]},{&g_3203[2][2],&g_3203[6][4],&g_3203[6][4]},{&l_3499[6][1][1],(void*)0,&g_3203[6][4]},{&g_1347[2],&g_3203[2][2],&g_3319},{&l_3499[6][1][1],&l_3499[6][1][1],&l_3499[5][0][0]},{&g_3203[2][2],&g_1347[2],&g_3203[6][4]},{(void*)0,&l_3499[6][1][1],(void*)0},{&g_3203[6][4],&g_3203[2][2],(void*)0},{&g_1578,(void*)0,(void*)0}},{{(void*)0,&g_3203[6][4],&g_3203[6][4]},{&g_1578,&g_1578,&l_3499[5][0][0]},{(void*)0,(void*)0,&g_3319},{&g_1578,&g_1578,&g_3203[6][4]},{&g_3203[6][4],(void*)0,&g_3203[6][4]},{(void*)0,&g_1578,&l_3499[6][1][1]},{&g_3203[2][2],&g_3203[6][4],&g_3203[6][4]},{&l_3499[6][1][1],(void*)0,&g_3203[6][4]},{&g_1347[2],&g_3203[2][2],&g_3319},{&l_3499[6][1][1],&l_3499[6][1][1],&l_3499[5][0][0]}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_3699[i] = (-9L);
                --l_3703;
                /*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
/*bef_stmt:174465*/
l_3731 &= (((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(((l_3701 = Tag162(/*int32_t:176636:176659:174465:e*/l_3701)) < 0x8E5C8A10L), 4)) >= (safe_mod_func_uint32_t_u_u((((*l_3485) = (l_3714 == (void*)0)) <= (l_3730 = ((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((((*l_3486) = (safe_mod_func_uint16_t_u_u(Tag163(/*int32_t:176636:176659:174465:e*/l_3699[1]), (Tag164(/*int32_t:176636:176659:174465:e*/l_3699[1]) | (safe_div_func_uint16_t_u_u((l_3728 = (safe_div_func_int64_t_s_s((Tag165(/*int64_t:0:0:174465:e*/g_1219) <= (((*l_3668) = (((void*)0 == p_29) >= (Tag166(/*int32_t:179137:179137:174465:e*/*l_3383)))) < 0x327983D5DDE830ABLL)), (Tag167(/*int32_t:179137:179137:174465:e*/*l_3384))))), Tag168(/*uint8_t:0:0:174465:e*/g_330))))))) , Tag169(/*uint16_t:179137:179137:174465:e*/l_3729[1][8][2])), (Tag170(/*int8_t:0:0:174465:e*/**g_715)))), (Tag171(/*int8_t:0:0:174465:e*/**g_715)))) , 6UL) , 0x7488L), 13)) , 8UL))), 9UL))), Tag172(/*int32_t:176636:176659:174465:e*/l_3699[1]))), 1L)) <= (-1L)) ^ Tag173(/*int32_t:176636:176659:174465:e*/l_3699[1]));
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
/*aft_stmt:174465*/
                /*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
/*bef_stmt:175187*/
l_3696 |= ((((*g_716) = 0x41L) || ((Tag174(/*int32_t:176636:176659:175187:e*/l_3699[1]) && (((Tag175(/*const int64_t:0:0:175187:e*/*g_394)) > (safe_lshift_func_uint16_t_u_u((!((void*)0 == l_3686[6][2])), 3))) == (safe_rshift_func_uint16_t_u_u((4294967291UL & (((**g_715) = (-1L)) ^ (((*l_3384) = (((*l_3486) = ((((((((*l_3668) = (safe_mod_func_uint32_t_u_u((((((*l_3740) |= (Tag176(/*int32_t:179137:179137:175187:e*/*l_3383))) != 1UL) ^ Tag177(/*int16_t:179137:179137:175187:e*/l_3741)) >= Tag178(/*uint8_t:0:0:175187:e*/g_424[0])), Tag179(/*int32_t:176636:176659:175187:e*/l_3731)))) & 0UL) & Tag180(/*int32_t:176636:176659:175187:e*/l_3699[0])) > (Tag181(/*const int32_t:179137:179137:175187:e*/*l_3638))) & Tag182(/*int32_t:178515:179137:175187:e*/l_3644)) != Tag183(/*int32_t:176636:176659:175187:e*/l_3699[0])) || 0xDDL)) ^ Tag184(/*int32_t:176636:176659:175187:e*/l_3699[1]))) <= Tag185(/*int32_t:176636:176659:175187:e*/l_3699[1])))), Tag186(/*int32_t:176636:176659:175187:e*/l_3728))))) != (-8L))) != 0L);
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
/*aft_stmt:175187*/
                /*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
/*bef_stmt:176630*/
if (((Tag187(/*int32_t:179137:179137:176630:e*/*l_3384)) || (((l_3730 = (((((safe_mod_func_uint16_t_u_u(0x4AD0L, 0x2642L)) < ((((*l_3740) = ((0x95L <= ((((Tag188(/*uint8_t:179137:179137:176630:e*/*p_29)) >= ((*l_3385) ^= ((l_3701 &= (Tag189(/*int8_t:0:0:176630:e*/*g_716))) < (((**g_272) |= ((void*)0 != l_3745)) && (((--(*g_273)) < ((safe_add_func_int8_t_s_s((Tag190(/*int64_t:0:0:176630:e*/g_585) , (Tag191(/*int8_t:0:0:176630:e*/*g_716))), (Tag192(/*int8_t:0:0:176630:e*/**g_715)))) <= 0UL)) && Tag193(/*int32_t:176636:176659:176630:e*/l_3730)))))) , 0x1235B71CD50E152BLL) || (Tag194(/*const int32_t:179137:179137:176630:e*/*l_3638)))) , Tag195(/*int32_t:178515:179137:176630:e*/l_3696))) >= Tag196(/*int32_t:178515:179137:176630:e*/l_3644)) || Tag197(/*int32_t:176659:178515:176630:e*/l_3702[3]))) != 0x6BCDL) >= Tag198(/*int16_t:0:0:176630:e*/g_3750)) , 0x51026BDAL)) , 0x8909E98AL) && (Tag199(/*uint32_t:0:0:176630:e*/**g_272)))))
                { /* block id: 1670 */
                    int8_t l_3752 = (-1L);
                    /*bef_stmt:175840*/
return Tag200(/*int8_t:175842:176636:175840:e*/l_3752);
/*aft_stmt:175840*/
                }
                else
                { /* block id: 1672 */
                    uint16_t *l_3760 = &g_3130;
                    int32_t l_3772 = 0x00299BE2L;
                    for (g_3319 = (-8); (g_3319 == 4); g_3319 = safe_add_func_int32_t_s_s(g_3319, 7))
                    { /* block id: 1675 */
                        int32_t l_3757 = (-6L);
                        /*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
/*bef_stmt:176563*/
l_3644 ^= (((safe_rshift_func_uint8_t_u_s((Tag201(/*int32_t:176612:176625:176563:e*/l_3757) < 65535UL), Tag202(/*int32_t:176612:176625:176563:e*/l_3757))) == (safe_rshift_func_uint16_t_u_u((0xEAF9L == (l_3760 == (void*)0)), ((((Tag203(/*int8_t:0:0:176563:e*/*g_716)) , (((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((3L & (safe_div_func_int64_t_s_s(((+((0xFD02FEBFL > 1UL) < Tag204(/*int32_t:176612:176625:176563:e*/l_3757))) , 9L), Tag205(/*int32_t:176625:176636:176563:e*/l_3772)))) != (Tag206(/*int32_t:179137:179137:176563:e*/*l_3384))), 7)), (Tag207(/*int32_t:179137:179137:176563:e*/*l_3385)))) || 0L), Tag208(/*int32_t:176636:176659:176563:e*/l_3731))) , Tag209(/*int32_t:176636:176659:176563:e*/l_3731)), (Tag210(/*int32_t:0:0:176563:e*/*g_3698)))) & Tag211(/*int32_t:176612:176625:176563:e*/l_3757)) & (Tag212(/*int8_t:0:0:176563:e*/*g_716)))) >= Tag213(/*int32_t:176625:176636:176563:e*/l_3772)) <= Tag214(/*int32_t:176625:176636:176563:e*/l_3772))))) , (Tag215(/*int32_t:179137:179137:176563:e*/*l_3384)));
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
/*aft_stmt:176563*/
                        l_3638 = &l_3728;
                        /*bef_stmt:176608*/
(*l_3385) = Tag216(/*int32_t:176625:176636:176608:e*/l_3772);
/*aft_stmt:176608*/
                    }
                }
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
/*aft_stmt:176630*/
            }
/*aft_stmt:176653*/
/*aft_stmt:176653*/
/*aft_stmt:176653*/
/*aft_stmt:176653*/
/*aft_stmt:176653*/
/*aft_stmt:176653*/
/*aft_stmt:176653*/
/*aft_stmt:176653*/
/*aft_stmt:176653*/
/*aft_stmt:176653*/
        }
        else
        { /* block id: 1682 */
            int16_t l_3774 = 0xE804L;
            int16_t l_3783[3];
            int i;
            for (i = 0; i < 3; i++)
                l_3783[i] = (-1L);
            /*bef_stmt:178461*/
/*bef_stmt:178461*/
/*bef_stmt:178461*/
/*bef_stmt:178461*/
/*bef_stmt:178461*/
/*bef_stmt:178461*/
/*bef_stmt:178461*/
/*bef_stmt:178461*/
/*bef_stmt:178461*/
/*bef_stmt:178461*/
if (((((+(Tag217(/*int16_t:178467:178515:178461:e*/l_3774) < ((p_29 == (void*)0) ^ (safe_lshift_func_uint16_t_u_u((Tag218(/*int16_t:0:0:178461:e*/g_1017) , (Tag219(/*int16_t:178467:178515:178461:e*/l_3774) | (safe_mul_func_uint16_t_u_u((((**g_715) = (((Tag220(/*int16_t:178467:178515:178461:e*/l_3774) != ((safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(Tag221(/*int16_t:0:0:178461:e*/g_1343), (-1L))), (Tag222(/*int32_t:179137:179137:178461:e*/*l_3383)))) , Tag223(/*int8_t:0:0:178461:e*/g_3560))) & (Tag224(/*int32_t:179137:179137:178461:e*/*l_3385))) | 0x76L)) ^ 1UL), 0x0A39L)))), 11))))) == 3L) || Tag225(/*int16_t:178467:178515:178461:e*/l_3774)) , Tag226(/*int16_t:178467:178515:178461:e*/l_3783[2])))
            { /* block id: 1684 */
                int32_t l_3789 = 6L;
                for (l_3426 = (-3); (l_3426 == 15); l_3426 = safe_add_func_uint64_t_u_u(l_3426, 8))
                { /* block id: 1687 */
                    uint8_t l_3808 = 0x10L;
                    for (g_108 = 0; (g_108 > 26); ++g_108)
                    { /* block id: 1690 */
                        l_3788 = l_3383;
                        /*bef_stmt:177439*/
if (Tag227(/*int32_t:178440:178467:177439:e*/l_3789))
                            continue;
/*aft_stmt:177439*/
                    }
                    (*g_3698) ^= 0x67C5926BL;
                    for (g_280 = 0; (g_280 <= 9); g_280 += 1)
                    { /* block id: 1697 */
                        int16_t **l_3804 = (void*)0;
                        int16_t **l_3805 = (void*)0;
                        int16_t **l_3806 = &l_3485;
                        uint8_t *l_3807[1][5];
                        int32_t l_3809 = 0xF9D788B4L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_3807[i][j] = &g_330;
                        }
                        /*bef_stmt:178395*/
/*bef_stmt:178395*/
/*bef_stmt:178395*/
/*bef_stmt:178395*/
/*bef_stmt:178395*/
/*bef_stmt:178395*/
/*bef_stmt:178395*/
/*bef_stmt:178395*/
/*bef_stmt:178395*/
/*bef_stmt:178395*/
l_3809 = (safe_add_func_uint32_t_u_u((Tag228(/*uint64_t:0:0:178395:e*/g_1200) | ((((g_1938[g_280] != p_29) != ((safe_rshift_func_uint16_t_u_u((!(((g_3344 = (((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((Tag229(/*uint8_t:179137:179137:178395:e*/*p_29)), 4)), (Tag230(/*int32_t:179137:179137:178395:e*/*l_3385)))), ((l_3803[2] != ((*l_3806) = &g_1720[6])) | ((*l_3788) = (Tag231(/*const int32_t:179137:179137:178395:e*/*l_3638)))))) & Tag232(/*uint32_t:0:0:178395:e*/g_3203[6][4])) != (Tag233(/*uint8_t:179137:179137:178395:e*/*p_29)))) , Tag234(/*int16_t:0:0:178395:e*/g_1215)) , 0xC7L)), Tag235(/*uint8_t:178427:178440:178395:e*/l_3808))) > (Tag236(/*uint8_t:179137:179137:178395:e*/*p_29)))) ^ Tag237(/*int32_t:178410:178427:178395:e*/l_3809)) <= 0xF0C3L)), 0xE863A999L));
/*aft_stmt:178395*/
/*aft_stmt:178395*/
/*aft_stmt:178395*/
/*aft_stmt:178395*/
/*aft_stmt:178395*/
/*aft_stmt:178395*/
/*aft_stmt:178395*/
/*aft_stmt:178395*/
/*aft_stmt:178395*/
/*aft_stmt:178395*/
                    }
                }
            }
            else
            { /* block id: 1704 */
                /*bef_stmt:178454*/
if (Tag238(/*uint64_t:0:0:178454:e*/g_1825))
                    goto lbl_3605;
/*aft_stmt:178454*/
            }
/*aft_stmt:178461*/
/*aft_stmt:178461*/
/*aft_stmt:178461*/
/*aft_stmt:178461*/
/*aft_stmt:178461*/
/*aft_stmt:178461*/
/*aft_stmt:178461*/
/*aft_stmt:178461*/
/*aft_stmt:178461*/
/*aft_stmt:178461*/
        }
/*aft_stmt:178474*/
/*aft_stmt:178474*/
/*aft_stmt:178474*/
/*aft_stmt:178474*/
/*aft_stmt:178474*/
/*aft_stmt:178474*/
/*aft_stmt:178474*/
        (*l_3810) = (*g_1055);
    }
    else
    { /* block id: 1709 */
        uint16_t l_3813 = 0x1AF8L;
        int32_t l_3814 = (-3L);
        int32_t l_3815[1][4][1];
        int16_t l_3818 = 0x1D76L;
        uint64_t l_3819 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_3815[i][j][k] = 0xF49968D1L;
            }
        }
        for (g_3560 = (-5); (g_3560 >= (-24)); g_3560 = safe_sub_func_int64_t_s_s(g_3560, 4))
        { /* block id: 1712 */
            /*bef_stmt:179079*/
return Tag239(/*uint16_t:179098:179137:179079:e*/l_3813);
/*aft_stmt:179079*/
        }
        l_3819--;
    }
/*aft_stmt:179109*/
    /*bef_stmt:179135*/
return (Tag240(/*int32_t:179137:179137:179135:e*/*l_3383));
/*aft_stmt:179135*/
}


/* ------------------------------------------ */
/* 
 * reads : g_12 g_78 g_83 g_72 g_108 g_89 g_114 g_115 g_111 g_169 g_153 g_186 g_272 g_273 g_328 g_248 g_1502 g_1215 g_2040 g_1720 g_397 g_398 g_330 g_418 g_716 g_542 g_1520 g_404 g_396 g_715 g_979 g_1017 g_919 g_394 g_1055 g_1056 g_1790 g_495 g_280 g_1015 g_1053 g_1054 g_1016 g_1200 g_1938 g_1825 g_578 g_424 g_2609 g_649 g_344 g_2138 g_1219 g_2345 g_2896 g_1347 g_1278 g_585 g_648 g_2655 g_2656 g_645 g_1791 g_361 g_3130 g_1578
 * writes: g_72 g_78 g_83 g_89 g_111 g_115 g_108 g_148 g_169 g_186 g_114 g_275 g_280 g_418 g_1501 g_361 g_1720 g_542 g_398 g_979 g_1791 g_495 g_404 g_424 g_1016 g_2345 g_1347 g_2398 g_1200 g_1278 g_1056 g_1825 g_1215 g_919 g_345 g_2138 g_578 g_330 g_2657 g_3130 g_397 g_1520 g_1578
 */
static uint8_t * func_30(uint8_t  p_31, int64_t  p_32)
{ /* block id: 3 */
    uint32_t l_42 = 1UL;
    uint8_t *l_69 = (void*)0;
    uint8_t **l_327 = &l_69;
    uint8_t *l_329 = &g_330;
    int8_t *l_2239 = &g_979[1];
    int32_t l_3133 = 0x79757B04L;
    int32_t *l_3134 = (void*)0;
    int32_t *l_3135 = &g_89;
    int32_t *l_3136 = (void*)0;
    int32_t *l_3137 = &g_89;
    int32_t *l_3138 = &g_72[5][1][1];
    int32_t *l_3139 = &g_89;
    int32_t l_3140 = 1L;
    int32_t l_3141[9];
    int32_t *l_3142 = &g_72[5][0][1];
    int32_t *l_3143 = &g_89;
    int32_t *l_3144 = &g_72[5][1][1];
    int32_t *l_3145[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_3146 = 1L;
    uint8_t l_3147 = 0UL;
    uint32_t l_3179 = 4294967295UL;
    int64_t *** const *l_3199 = &g_345[2];
    int32_t l_3214 = 1L;
    uint32_t l_3217 = 9UL;
    int32_t ****l_3304 = &g_396;
    uint32_t **l_3311 = &g_273;
    int8_t l_3341 = 0x31L;
    int16_t l_3371 = 0x8CE3L;
    uint8_t *l_3382[3];
    int i;
    for (i = 0; i < 9; i++)
        l_3141[i] = (-4L);
    for (i = 0; i < 3; i++)
        l_3382[i] = &g_424[0];
    /*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
/*bef_stmt:181098*/
l_3133 |= (((safe_mod_func_int8_t_s_s(0x8BL, ((**g_715) = (safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(/*TAG241:STA*/((int8_t)(realsmith_ALsEf()+(int)(g_12)+(int)(g_3560)+(int)(g_1825)+(int)(g_1343)+(int)(g_3203[6][4])-(-1756239017))+g_12)/*TAG241:END:g_12*/, Tag242(/*uint8_t:187470:187470:181098:e*/p_31))), Tag243(/*uint32_t:187470:187470:181098:e*/l_42))) <= func_43(func_48(((*l_2239) ^= (((((*l_327) = func_53(func_59(((*l_327) = func_64(l_69, /*TAG244:STA*/((int8_t)(realsmith_proxy_d3qhy((int)(g_12)+(192), (char)(g_3203[6][4])+(6))+(int)(g_12)+(int)(g_1825)+(int)(g_3203[6][4])-(-1756239005))+g_12)/*TAG244:END:g_12*/, &p_31, l_69)), g_328, Tag245(/*const int64_t:0:0:181098:e*/g_248), l_329), l_329, /*TAG246:STA*/((int32_t)(realsmith_dTRsB((int)(g_3203[6][4])+(1756238933))+(int)(g_1502)+(int)(g_248)+(int)(g_1825)+(int)(g_3203[6][4])-(-1360757015))+g_1502)/*TAG246:END:g_1502*/, Tag247(/*int64_t:187470:187470:181098:e*/p_32), Tag248(/*int16_t:0:0:181098:e*/g_1215))) == (void*)0) == Tag249(/*uint32_t:187470:187470:181098:e*/l_42)) || Tag250(/*int64_t:187470:187470:181098:e*/p_32))), l_2239, Tag251(/*int16_t:0:0:181098:e*/g_1017), Tag252(/*uint32_t:187470:187470:181098:e*/l_42)), l_329, /*TAG253:STA*/((int64_t)(realsmith_proxy_Vb46U((long)(p_32)+(1996523919), (unsigned int)(p_32)+(-2298443378), (int)(p_32)+(1996523919))+(unsigned int)(p_32)-(2298443380))+p_32)/*TAG253:END:p_32*/, g_2609)), 9))))) != 7UL) , Tag254(/*uint32_t:187470:187470:181098:e*/l_42));
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
/*aft_stmt:181098*/
    --l_3147;
    /*bef_stmt:187444*/
if ((((/*TAG255:STA*/((int8_t)(realsmith_proxy_6jY8I((int)(**g_715)+(55), (int)(**g_715)+(-17), (int)(**g_715)+(6))+(int)(**g_715)-(1))+**g_715)/*TAG255:END:**g_715*/) & 2L) , (-1L)))
    { /* block id: 1412 */
        int32_t **l_3153 = (void*)0;
        int32_t ***l_3152 = &l_3153;
        uint8_t *****l_3154[1][2];
        uint8_t *****l_3155 = (void*)0;
        uint8_t *l_3166 = &g_578[0][4][0];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_3154[i][j] = &g_1697[1];
        }
        /*bef_stmt:185159*/
/*bef_stmt:185159*/
/*bef_stmt:185159*/
/*bef_stmt:185159*/
/*bef_stmt:185159*/
/*bef_stmt:185159*/
/*bef_stmt:185159*/
/*bef_stmt:185159*/
/*bef_stmt:185159*/
if (((safe_sub_func_int16_t_s_s((((*g_396) = (void*)0) != ((*l_3152) = (void*)0)), (l_3154[0][0] == (l_3155 = l_3154[0][0])))) & (((safe_div_func_int64_t_s_s((Tag256(/*uint8_t:187470:187470:185159:e*/p_31) , Tag257(/*int64_t:187470:187470:185159:e*/p_32)), (safe_mul_func_uint8_t_u_u((Tag258(/*int32_t:187470:187470:185159:e*/*l_3135)), (Tag259(/*int32_t:187470:187470:185159:e*/*l_3135)))))) < ((safe_add_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((((*g_2040) = (((-1L) >= 0UL) , 0x3A4FF7F2L)) < 4294967288UL), Tag260(/*int64_t:187470:187470:185159:e*/p_32))) , /*TAG261:STA*/((int16_t)(realsmith_proxy_TUAz2((char)(g_1520[3][9])+(-36))+(char)(g_1520[3][9])-(100))+g_1520[3][9])/*TAG261:END:g_1520[3][9]*/) | Tag262(/*int64_t:187470:187470:185159:e*/p_32)) >= (Tag263(/*int32_t:187470:187470:185159:e*/*l_3143))), 0x00L)) , 0x190DL)) >= /*TAG264:STA*/((uint8_t)(realsmith_proxy_OFAVh((char)(p_31)+(196), (int)(p_31)+(-84))+(int)(p_31)-(144))+p_31)/*TAG264:END:p_31*/)))
        { /* block id: 1417 */
            uint8_t *l_3164 = &g_578[0][2][0];
            return l_3164;
        }
        else
        { /* block id: 1419 */
            uint8_t *l_3165[7][5][3] = {{{&g_280,&l_3147,&g_280},{&l_3147,&g_424[0],&g_186},{&l_3147,&g_424[4],&g_280},{&l_3147,&g_280,&l_3147},{&g_280,&g_578[0][0][1],&g_280}},{{(void*)0,(void*)0,&g_186},{&g_578[0][0][1],&g_578[0][0][1],&l_3147},{&g_424[0],&g_280,&g_330},{&g_578[0][1][2],&g_424[4],&g_578[0][1][2]},{(void*)0,&g_424[0],&g_330}},{{&g_186,&l_3147,&l_3147},{&l_3147,&g_186,&g_186},{&g_280,&g_424[4],&g_280},{&l_3147,&g_578[0][2][0],&l_3147},{&g_186,&g_578[0][0][1],&g_280}},{{(void*)0,&g_424[5],&g_186},{&g_578[0][1][2],&g_578[0][0][1],&g_280},{&g_424[0],&g_578[0][2][0],&g_330},{&g_578[0][0][1],&g_424[4],&g_578[0][0][1]},{(void*)0,&g_186,&g_330}},{{&g_280,&l_3147,&g_280},{&l_3147,&g_424[0],&g_186},{&l_3147,&g_424[4],&g_280},{&l_3147,&g_280,&l_3147},{&g_280,&g_578[0][0][1],&g_280}},{{(void*)0,(void*)0,&g_186},{&g_578[0][0][1],&g_578[0][0][1],&l_3147},{&g_424[0],&g_280,&g_330},{&g_578[0][1][2],&g_424[4],&g_578[0][1][2]},{(void*)0,&g_424[0],&g_330}},{{&g_186,&l_3147,&l_3147},{&l_3147,&g_186,&g_186},{&g_280,&g_424[4],&g_280},{&l_3147,&g_578[0][2][0],&l_3147},{&g_186,&g_578[0][0][1],&g_280}}};
            int i, j, k;
            return l_3166;
        }
/*aft_stmt:185159*/
/*aft_stmt:185159*/
/*aft_stmt:185159*/
/*aft_stmt:185159*/
/*aft_stmt:185159*/
/*aft_stmt:185159*/
/*aft_stmt:185159*/
/*aft_stmt:185159*/
/*aft_stmt:185159*/
    }
    else
    { /* block id: 1422 */
        int32_t **l_3167 = &l_3137;
        int16_t *l_3175 = &g_361;
        int16_t *l_3178 = &g_1520[3][9];
        int32_t l_3180 = 9L;
        int32_t l_3185 = (-6L);
        int32_t **l_3222 = &g_2659;
        uint32_t *l_3225 = &l_42;
        int32_t l_3235 = (-4L);
        int32_t l_3242 = 0L;
        int32_t l_3249[5];
        uint64_t l_3299[7] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL};
        uint16_t l_3301 = 0x4624L;
        int64_t l_3350 = 0x8794213ADEC8EA79LL;
        int64_t l_3363 = 0xF77C2A001D80FD86LL;
        int i;
        for (i = 0; i < 5; i++)
            l_3249[i] = 0x2AD200AEL;
        (**g_396) = &l_3141[1];
        /*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
/*bef_stmt:186294*/
l_3180 &= ((((*g_396) = l_3167) != &l_3145[3]) ^ ((+(safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(253UL, ((*l_329) = (Tag265(/*int64_t:187470:187470:186294:e*/p_32) ^ Tag266(/*int64_t:187470:187470:186294:e*/p_32))))) > Tag267(/*int64_t:187470:187470:186294:e*/p_32)) && ((*l_3175) = 0L)), (((Tag268(/*uint32_t:0:0:186294:e*/**g_272)) ^ (~(((((!((*l_3178) = (Tag269(/*uint8_t:187470:187470:186294:e*/p_31) || 0xB4L))) > Tag270(/*uint32_t:187470:187470:186294:e*/l_3179)) > Tag271(/*uint8_t:0:0:186294:e*/g_578[0][4][1])) , Tag272(/*const int64_t:0:0:186294:e*/g_248)) , (Tag273(/*int32_t:187470:187470:186294:e*/*l_3144))))) , 1UL))), Tag274(/*int64_t:187470:187470:186294:e*/p_32)))) ^ (Tag275(/*int32_t:187423:187470:186294:e*/**l_3167))));
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
/*aft_stmt:186294*/
        for (g_1578 = 0; (g_1578 >= 47); ++g_1578)
        { /* block id: 1431 */
            const int32_t **l_3186 = &g_1056;
            int32_t ****l_3196 = &g_1278;
            int32_t *****l_3195 = &l_3196;
            uint16_t *l_3200 = &g_919;
            uint16_t *l_3201[3];
            int32_t l_3202 = 1L;
            int32_t ***l_3223[4];
            int32_t l_3230 = 0xAC87681BL;
            int32_t l_3233[4] = {0x0E265F0EL,0x0E265F0EL,0x0E265F0EL,0x0E265F0EL};
            const int64_t **l_3275 = &g_394;
            const int64_t ***l_3274 = &l_3275;
            const int64_t ****l_3273 = &l_3274;
            const int64_t *****l_3272 = &l_3273;
            uint8_t **l_3312[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t *****l_3336 = &g_1016;
            int32_t l_3358 = 0x3EE08FC7L;
            int32_t l_3359 = 0x00BD89C0L;
            uint16_t l_3360 = 0x511EL;
            int i;
            for (i = 0; i < 3; i++)
                l_3201[i] = &g_495[3];
            for (i = 0; i < 4; i++)
                l_3223[i] = &l_3222;
            /*bef_stmt:187369*/
(*l_3186) = ((safe_mul_func_uint8_t_u_u(((*g_2609) = Tag276(/*int32_t:187423:187470:187369:e*/l_3185)), (-1L))) , (*g_1055));
/*aft_stmt:187369*/
        }
    }
/*aft_stmt:187444*/
    return l_3382[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_330 g_394 g_108 g_716 g_542 g_1015 g_1016 g_1215 g_495 g_919 g_396 g_397 g_715 g_2040 g_72 g_649 g_344 g_272 g_273 g_1053 g_1054 g_1055 g_1056 g_169 g_111 g_186 g_2138 g_1219 g_2345 g_2896 g_1825 g_1347 g_1278 g_418 g_2609 g_578 g_1520 g_398 g_585 g_648 g_2655 g_2656 g_645 g_1720 g_1790 g_1791 g_361 g_1502 g_3130
 * writes: g_1215 g_919 g_398 g_72 g_2345 g_542 g_345 g_111 g_2138 g_404 g_418 g_1825 g_578 g_330 g_1720 g_1056 g_2657 g_3130
 */
static int32_t  func_43(uint8_t * p_44, uint8_t * p_45, uint64_t  p_46, uint8_t * p_47)
{ /* block id: 1166 */
    int32_t l_2616 = 0L;
    uint16_t ****l_2639 = &g_792[1][3];
    uint32_t l_2640 = 0xB6EE343DL;
    int64_t l_2641 = 1L;
    int16_t *l_2642[6] = {&g_1017,&g_404[2],&g_1017,&g_1017,&g_404[2],&g_1017};
    int32_t l_2643 = 0x385371FAL;
    int32_t l_2644[2];
    int32_t ****l_2664 = &g_1278;
    uint8_t ***l_2695 = (void*)0;
    uint8_t ****l_2694 = &l_2695;
    int32_t ****l_2696 = &g_396;
    uint8_t l_2720 = 0x88L;
    int64_t *****l_2769 = &g_344;
    uint16_t l_2788 = 0xC947L;
    uint8_t l_2800 = 3UL;
    uint32_t l_2815 = 0x849070BEL;
    int8_t l_2826 = 7L;
    int32_t l_2832 = 0x064A395DL;
    uint64_t l_2833 = 0x87023658091D9423LL;
    uint16_t l_2930 = 0UL;
    uint32_t l_2947 = 4294967295UL;
    uint8_t **l_2969 = &g_2609;
    uint8_t ** const *l_2968 = &l_2969;
    uint8_t ** const **l_2967[1][4] = {{&l_2968,&l_2968,&l_2968,&l_2968}};
    uint32_t l_2988 = 18446744073709551615UL;
    uint32_t l_2995 = 8UL;
    uint32_t l_3034 = 0xE845D0D2L;
    uint8_t l_3126 = 5UL;
    int32_t *l_3127 = &l_2644[0];
    int32_t *l_3128 = &l_2832;
    int32_t *l_3129[10][5][3] = {{{&l_2644[0],&l_2832,(void*)0},{&g_72[5][1][1],&g_72[5][1][1],(void*)0},{&l_2832,&l_2644[0],(void*)0},{&g_169,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_169,(void*)0},{&l_2644[0],&l_2832,(void*)0},{&g_72[5][1][1],&g_72[5][1][1],(void*)0},{&l_2832,&l_2644[0],(void*)0},{&g_169,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_169,(void*)0},{&l_2644[0],&l_2832,(void*)0},{&g_72[5][1][1],&g_72[5][1][1],(void*)0},{&l_2832,&l_2644[0],(void*)0}},{{&g_169,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_169,(void*)0},{&l_2644[0],&l_2832,(void*)0},{&g_72[5][1][1],&g_72[5][1][1],(void*)0}},{{&l_2832,&l_2644[0],(void*)0},{&g_169,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_169,(void*)0},{&l_2644[0],&l_2832,(void*)0}},{{&g_72[5][1][1],&g_72[5][1][1],(void*)0},{&l_2832,&l_2644[0],(void*)0},{&g_169,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_169,(void*)0}},{{&l_2644[0],&l_2832,(void*)0},{&g_72[5][1][1],&g_72[5][1][1],(void*)0},{&l_2832,&l_2644[0],(void*)0},{&g_169,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_169,(void*)0},{&l_2644[0],&l_2832,(void*)0},{&g_72[5][1][1],&g_72[5][1][1],(void*)0},{&l_2832,&l_2644[0],(void*)0},{&g_169,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_169,(void*)0},{&l_2644[0],&l_2832,(void*)0},{&g_72[5][1][1],&g_72[5][1][1],(void*)0},{&l_2832,&l_2644[0],(void*)0}},{{&g_169,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_169,(void*)0},{&l_2644[0],&l_2832,(void*)0},{&g_72[5][1][1],&g_72[5][1][1],(void*)0}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2644[i] = 1L;
    /*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
/*bef_stmt:227381*/
if ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((Tag277(/*uint8_t:227755:227755:227381:e*/*p_45)), Tag278(/*int32_t:227755:227755:227381:e*/l_2616))), 1)), (safe_mod_func_int8_t_s_s((/*TAG279:STA*/((uint64_t)(realsmith_jAXux()+(int)(p_46)-(-1996523916))+p_46)/*TAG279:END:p_46*/ , (safe_add_func_int8_t_s_s(1L, (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((l_2644[0] = (safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((Tag280(/*const int64_t:0:0:227381:e*/*g_394)), (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((/*TAG281:STA*/((int8_t)(realsmith_4FjP2((int)(*g_716)+(72), (int)(*g_716)+(83), (int)(*g_716)+(45))+(int)(*g_716)-(78))+*g_716)/*TAG281:END:*g_716*/), Tag282(/*int32_t:227755:227755:227381:e*/l_2616))), 0)))), (l_2643 = (safe_mul_func_uint16_t_u_u(((+((l_2640 ^= (((safe_lshift_func_int16_t_s_u((~(Tag283(/*uint8_t:227755:227755:227381:e*/*p_45))), 8)) , ((((/*TAG284:STA*/((int32_t)(realsmith_0CMuh((int)(l_2616)+(61))+(int)(l_2616)-(0))+l_2616)/*TAG284:END:l_2616*/ , l_2639) == (*g_1015)) , /*TAG285:STA*/((uint64_t)(realsmith_LRZ4p((long)(p_46)+(1996523961), (int)(p_46)+(1996523960))+(int)(p_46)-(-1996523918))+p_46)/*TAG285:END:p_46*/) , /*TAG286:STA*/((int32_t)(realsmith_zuQZ9((int)(l_2616)+(9), (int)(l_2616)+(11))+(int)(l_2616)-(1))+l_2616)/*TAG286:END:l_2616*/)) & 0x927ADF952F90A0EELL)) >= (-2L))) != Tag287(/*int64_t:227755:227755:227381:e*/l_2641)), 0x1DD0L)))))) ^ 1UL), 4)), Tag288(/*int64_t:227755:227755:227381:e*/l_2641)))))), 0xE4L)))))
    { /* block id: 1170 */
        int32_t *l_2648 = &g_72[5][1][1];
        int32_t ** const l_2654 = &g_1501;
        int32_t ** const *l_2653 = &l_2654;
        int32_t ** const **l_2652[7];
        int32_t ** const ***l_2651 = &l_2652[0];
        int8_t l_2697 = 1L;
        int64_t **** const l_2724 = (void*)0;
        int32_t l_2814 = 0x7889705BL;
        int32_t *l_2827 = &l_2814;
        int32_t *l_2828 = (void*)0;
        int32_t l_2829 = 0x51E3A4B9L;
        int32_t *l_2830 = &g_72[5][1][1];
        int32_t *l_2831[6][8] = {{&l_2643,&l_2644[0],&l_2644[1],&g_72[5][1][1],&g_72[5][1][1],&l_2644[1],&l_2644[0],&l_2643},{&l_2644[0],&g_72[5][1][1],&l_2814,(void*)0,&g_72[5][1][1],(void*)0,&l_2814,&g_72[5][1][1]},{&l_2643,&l_2814,&l_2644[0],&l_2643,(void*)0,(void*)0,&l_2643,&l_2644[0]},{&g_72[5][1][1],&g_72[5][1][1],&l_2644[1],&l_2644[0],&l_2643,&l_2644[1],&l_2643,&l_2644[0]},{&l_2644[0],&l_2644[0],&l_2644[0],(void*)0,&l_2644[0],&l_2644[1],&l_2644[1],&l_2814},{&l_2814,&l_2644[1],&l_2644[1],&l_2814,(void*)0,&g_72[1][0][1],&l_2814,&g_72[1][0][1]}};
        uint64_t l_2836 = 0UL;
        int i, j;
        for (i = 0; i < 7; i++)
            l_2652[i] = &l_2653;
        for (g_1215 = 3; (g_1215 >= 0); g_1215 -= 1)
        { /* block id: 1173 */
            uint32_t l_2691 = 1UL;
            uint32_t l_2692 = 0xF4A1E99CL;
            uint32_t l_2721 = 0xD400329AL;
            int32_t *l_2736 = &l_2643;
            int32_t l_2747 = 0x23F371B4L;
            int32_t l_2798[9];
            const uint32_t l_2819[8][9] = {{0xBA75F5F8L,4294967291UL,0x1DCD4565L,4294967293UL,0UL,4294967292UL,0UL,0xD62C3C34L,0UL},{0x1BD2DCFCL,0UL,0x30FF1B1CL,0x30FF1B1CL,0UL,0x1BD2DCFCL,0x72BC70C7L,4294967295UL,1UL},{4294967295UL,0UL,4294967293UL,6UL,0UL,0x86731C44L,0x1DCD4565L,0x7864B7A5L,7UL},{4294967295UL,3UL,0UL,0x2BF89AC3L,4294967292UL,0x20ED09C1L,0x72BC70C7L,4294967295UL,0x7864B7A5L},{0x72BC70C7L,0x7864B7A5L,4294967291UL,0UL,7UL,7UL,0UL,4294967291UL,0x7864B7A5L},{0UL,4294967295UL,0UL,1UL,0x1BD2DCFCL,2UL,4294967291UL,0x2BF89AC3L,7UL},{0x1DCD4565L,4294967292UL,4294967293UL,7UL,0x2BF89AC3L,4294967291UL,2UL,0x1BD2DCFCL,1UL},{0x86731C44L,4294967295UL,0x72BC70C7L,0x7864B7A5L,4294967291UL,0UL,7UL,7UL,0UL}};
            int i, j;
            for (i = 0; i < 9; i++)
                l_2798[i] = (-3L);
            if (g_495[g_1215])
                break;
        }
        ++l_2833;
        l_2836++;
    }
    else
    { /* block id: 1260 */
        int32_t *l_2841 = &l_2616;
        uint8_t **l_2845[2][5][6] = {{{&g_328,&g_2609,&g_2609,&g_328,(void*)0,&g_328},{&g_328,(void*)0,&g_328,&g_2609,&g_2609,&g_328},{&g_2609,&g_2609,&g_2609,&g_2609,&g_2609,&g_2609},{&g_2609,(void*)0,&g_2609,&g_2609,(void*)0,&g_2609},{&g_2609,&g_2609,&g_2609,&g_2609,&g_2609,&g_2609}},{{&g_328,&g_2609,&g_2609,&g_328,(void*)0,&g_328},{&g_328,(void*)0,&g_328,&g_2609,&g_2609,&g_328},{&g_2609,&g_2609,&g_2609,&g_2609,&g_2609,&g_2609},{&g_2609,(void*)0,&g_2609,&g_2609,(void*)0,&g_2609},{&g_2609,&g_2609,&g_2609,&g_2609,&g_2609,&g_2609}}};
        uint8_t ***l_2844[4][8] = {{&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4]},{&l_2845[1][3][1],&l_2845[0][0][4],&l_2845[1][3][1],&l_2845[1][3][1],&l_2845[0][0][4],&l_2845[1][3][1],&l_2845[1][3][1],&l_2845[0][0][4]},{&l_2845[0][0][4],&l_2845[1][3][1],&l_2845[1][3][1],&l_2845[0][0][4],&l_2845[1][3][1],&l_2845[1][3][1],&l_2845[0][0][4],&l_2845[1][3][1]},{&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4],&l_2845[0][0][4]}};
        int32_t l_2909[9][2][3] = {{{(-4L),0L,(-4L)},{0x38B6D8B6L,1L,0x38B6D8B6L}},{{(-4L),0L,(-4L)},{0x38B6D8B6L,1L,0x38B6D8B6L}},{{(-4L),0L,(-4L)},{(-1L),5L,(-1L)}},{{1L,(-4L),1L},{(-1L),5L,(-1L)}},{{1L,(-4L),1L},{(-1L),5L,(-1L)}},{{1L,(-4L),1L},{(-1L),5L,(-1L)}},{{1L,(-4L),1L},{(-1L),5L,(-1L)}},{{1L,(-4L),1L},{(-1L),5L,(-1L)}},{{1L,(-4L),1L},{(-1L),5L,(-1L)}}};
        uint64_t l_2935 = 1UL;
        int32_t **l_2952 = &g_398;
        int16_t *l_2986 = &g_1720[1];
        uint32_t l_3014 = 18446744073709551614UL;
        int8_t l_3037[5][4][3] = {{{0L,8L,0L},{0L,0x68L,0x99L},{0L,0L,0x68L},{0L,0x68L,0x68L}},{{0x68L,8L,0x99L},{0L,8L,0L},{0L,0x68L,0x99L},{0L,0L,0x68L}},{{0L,0x68L,0x68L},{0x68L,8L,0x99L},{0L,8L,0L},{0L,0x68L,0x99L}},{{0L,0L,0x68L},{0L,0x68L,0x68L},{0x68L,8L,0x99L},{0L,8L,0L}},{{0L,0x68L,0x99L},{0L,0L,0x68L},{0L,0x68L,0x68L},{0x68L,8L,0x99L}}};
        uint16_t **l_3049 = (void*)0;
        uint64_t *l_3050 = (void*)0;
        uint64_t *l_3051 = &l_2935;
        const int64_t **l_3102 = &g_394;
        int64_t l_3103[2];
        int32_t **l_3106[9][2];
        int32_t ***l_3105 = &l_3106[2][0];
        int16_t l_3114 = 0x4F90L;
        uint8_t l_3115 = 255UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_3103[i] = 0x0C75282DC6C25B8ELL;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 2; j++)
                l_3106[i][j] = &g_1501;
        }
        for (g_919 = 0; (g_919 < 52); g_919 = safe_add_func_uint8_t_u_u(g_919, 4))
        { /* block id: 1263 */
            (**g_396) = l_2841;
        }
        /*bef_stmt:207393*/
if (((*g_2040) = (255UL < (safe_sub_func_int8_t_s_s((Tag289(/*int8_t:0:0:207393:e*/**g_715)), ((*l_2694) == l_2844[1][4]))))))
        { /* block id: 1267 */
            uint8_t ***l_2850 = &l_2845[0][0][4];
            int32_t l_2851 = (-1L);
            int32_t l_2862 = 0L;
            uint16_t *l_2893 = &g_919;
            uint64_t *l_2908 = &g_418;
            const int32_t ****l_2914[3];
            uint64_t l_2925[9] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int i;
            for (i = 0; i < 3; i++)
                l_2914[i] = (void*)0;
            for (l_2720 = 0; (l_2720 < 60); ++l_2720)
            { /* block id: 1270 */
                uint32_t * const *l_2856[7] = {&g_273,&g_273,&g_273,&g_273,&g_273,&g_273,&g_273};
                int64_t ***l_2860 = &g_393;
                int64_t l_2863 = 0x019478C26967FC6DLL;
                int i;
                /*bef_stmt:203689*/
/*bef_stmt:203689*/
(*g_2040) ^= (safe_add_func_int8_t_s_s((Tag290(/*int8_t:0:0:203689:e*/**g_715)), ((Tag291(/*int32_t:227354:227755:203689:e*/*l_2841)) && 0x303163E4025F25FBLL)));
/*aft_stmt:203689*/
/*aft_stmt:203689*/
                for (g_2345 = 2; (g_2345 <= 9); g_2345 += 1)
                { /* block id: 1274 */
                    uint32_t * const **l_2857 = &l_2856[3];
                    uint32_t *l_2861 = &l_2640;
                    int32_t *l_2897 = &l_2832;
                    int i;
                    /*bef_stmt:205730*/
/*bef_stmt:205730*/
/*bef_stmt:205730*/
/*bef_stmt:205730*/
/*bef_stmt:205730*/
/*bef_stmt:205730*/
/*bef_stmt:205730*/
/*bef_stmt:205730*/
if ((((((Tag292(/*uint64_t:227755:227755:205730:e*/p_46) | (((*g_716) = ((void*)0 == l_2850)) > (0xBDC8L && Tag293(/*int32_t:207239:227354:205730:e*/l_2851)))) , (((safe_lshift_func_int16_t_s_u(((*l_2841) ^= (safe_rshift_func_uint16_t_u_s((&g_273 != ((*l_2857) = l_2856[3])), 8))), 5)) | (l_2851 = (((*l_2861) = ((**g_272) = (Tag294(/*uint64_t:227755:227755:205730:e*/p_46) ^ ((safe_mul_func_int8_t_s_s((((**g_649) = l_2860) == (void*)0), 0xBDL)) && Tag295(/*uint64_t:227755:227755:205730:e*/p_46))))) | (Tag296(/*const int32_t:0:0:205730:e*/****g_1053))))) > Tag297(/*int32_t:207239:227354:205730:e*/l_2862))) , Tag298(/*int64_t:206048:207239:205730:e*/l_2863)) , (Tag299(/*uint32_t:0:0:205730:e*/*g_273))) < 0xA9F1A553L))
                    { /* block id: 1282 */
                        int16_t l_2866[8] = {0x6A72L,0x6A72L,0x6A72L,0x6A72L,0x6A72L,0x6A72L,0x6A72L,0x6A72L};
                        uint64_t *l_2876 = &l_2833;
                        int i;
                        /*bef_stmt:204973*/
/*bef_stmt:204973*/
/*bef_stmt:204973*/
/*bef_stmt:204973*/
/*bef_stmt:204973*/
/*bef_stmt:204973*/
/*bef_stmt:204973*/
(*l_2841) = (safe_div_func_uint64_t_u_u(((Tag300(/*int64_t:206048:207239:204973:e*/l_2863) | 18446744073709551610UL) == ((0UL < 255UL) > (l_2866[3] = 0x228CE52C00E9E41FLL))), ((*l_2876) = ((safe_sub_func_uint32_t_u_u((~((void*)0 == &g_273)), (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((Tag301(/*uint8_t:227755:227755:204973:e*/*p_45)), (((safe_sub_func_int64_t_s_s(Tag302(/*uint64_t:227755:227755:204973:e*/p_46), (-3L))) > Tag303(/*int64_t:206048:207239:204973:e*/l_2863)) != Tag304(/*uint8_t:0:0:204973:e*/g_186)))), Tag305(/*int64_t:206048:207239:204973:e*/l_2863))))) || Tag306(/*uint64_t:227755:227755:204973:e*/p_46)))));
/*aft_stmt:204973*/
/*aft_stmt:204973*/
/*aft_stmt:204973*/
/*aft_stmt:204973*/
/*aft_stmt:204973*/
/*aft_stmt:204973*/
/*aft_stmt:204973*/
                        /*bef_stmt:205017*/
(*l_2841) |= (Tag307(/*uint64_t:227755:227755:205017:e*/p_46) <= (--g_2138));
/*aft_stmt:205017*/
                    }
                    else
                    { /* block id: 1288 */
                        const int16_t l_2885 = 0xA0ECL;
                        uint64_t *l_2894 = (void*)0;
                        uint64_t *l_2895 = &g_418;
                        /*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
/*bef_stmt:205696*/
(*g_2040) = (safe_mul_func_uint8_t_u_u((Tag308(/*uint64_t:227755:227755:205696:e*/p_46) , (((safe_sub_func_uint64_t_u_u(Tag309(/*uint64_t:227755:227755:205696:e*/p_46), (safe_lshift_func_int16_t_s_s((l_2862 = ((((g_404[1] = Tag310(/*int64_t:0:0:205696:e*/g_1219)) != (Tag311(/*int64_t:206048:207239:205696:e*/l_2863) < Tag312(/*const int16_t:205723:206018:205696:e*/l_2885))) >= ((((safe_sub_func_uint64_t_u_u((((safe_unary_minus_func_int8_t_s((Tag313(/*int8_t:0:0:205696:e*/**g_715)))) < (Tag314(/*int32_t:227354:227755:205696:e*/*l_2841))) > (0xBDB11BAC8F741A4ALL > ((*l_2895) = (safe_unary_minus_func_int8_t_s((safe_div_func_uint64_t_u_u((~((***l_2857) = ((void*)0 != l_2893))), Tag315(/*uint64_t:227755:227755:205696:e*/p_46)))))))), Tag316(/*int64_t:206048:207239:205696:e*/l_2863))) | Tag317(/*int64_t:206048:207239:205696:e*/l_2863)) == 0x63780ED2A0CB5DB2LL) > 0x58F7L)) ^ Tag318(/*int32_t:207239:227354:205696:e*/l_2862))), Tag319(/*uint64_t:227755:227755:205696:e*/p_46))))) | 0x5CA2L) != Tag320(/*uint64_t:227755:227755:205696:e*/p_46))), Tag321(/*uint64_t:227755:227755:205696:e*/p_46)));
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
/*aft_stmt:205696*/
                        /*bef_stmt:205719*/
if (Tag322(/*int8_t:0:0:205719:e*/g_2896))
                            continue;
/*aft_stmt:205719*/
                    }
/*aft_stmt:205730*/
/*aft_stmt:205730*/
/*aft_stmt:205730*/
/*aft_stmt:205730*/
/*aft_stmt:205730*/
/*aft_stmt:205730*/
/*aft_stmt:205730*/
/*aft_stmt:205730*/
                    for (g_1825 = 0; (g_1825 <= 3); g_1825 += 1)
                    { /* block id: 1298 */
                        int32_t l_2898 = 0xD3592A18L;
                        int i;
                        l_2897 = &l_2851;
                        (*g_2040) = g_1347[g_1825];
                        (*l_2897) &= (l_2898 = 1L);
                        /*bef_stmt:205997*/
(*l_2897) |= (safe_div_func_uint8_t_u_u(0xD3L, (Tag323(/*int8_t:0:0:205997:e*/**g_715))));
/*aft_stmt:205997*/
                    }
                }
                l_2841 = l_2841;
            }
            /*bef_stmt:206534*/
/*bef_stmt:206534*/
/*bef_stmt:206534*/
/*bef_stmt:206534*/
/*bef_stmt:206534*/
/*bef_stmt:206534*/
/*bef_stmt:206534*/
/*bef_stmt:206534*/
(*g_2040) ^= ((*l_2841) = (6UL <= (((Tag324(/*int32_t:227354:227755:206534:e*/*l_2841)) <= (Tag325(/*uint32_t:0:0:206534:e*/**g_272))) | (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((Tag326(/*int64_t:227755:227755:206534:e*/l_2641) , (((((*l_2664) != (*l_2664)) , ((*l_2908) = (Tag327(/*int32_t:207239:227354:206534:e*/l_2851) & ((~(Tag328(/*int32_t:227354:227755:206534:e*/*l_2841))) & (safe_add_func_int8_t_s_s((Tag329(/*int8_t:0:0:206534:e*/**g_715)), (Tag330(/*uint8_t:227755:227755:206534:e*/*p_45)))))))) , (*l_2696)) == (void*)0)), 0x94A6L)), Tag331(/*int32_t:227354:227755:206534:e*/l_2909[8][1][1]))))));
/*aft_stmt:206534*/
/*aft_stmt:206534*/
/*aft_stmt:206534*/
/*aft_stmt:206534*/
/*aft_stmt:206534*/
/*aft_stmt:206534*/
/*aft_stmt:206534*/
/*aft_stmt:206534*/
            /*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
/*bef_stmt:207180*/
(*g_2040) = ((safe_mod_func_int8_t_s_s(((-5L) <= (((((Tag332(/*uint32_t:0:0:207180:e*/*g_273)) > ((((Tag333(/*int32_t:227354:227755:207180:e*/*l_2841)) , (safe_sub_func_uint32_t_u_u((l_2696 == l_2914[2]), (0xD7767AB2DEBEFDACLL >= (++(*l_2908)))))) == (safe_mod_func_int8_t_s_s((((*p_47) = (l_2862 = (Tag334(/*uint8_t:0:0:207180:e*/*g_2609)))) ^ 3L), ((((l_2925[5] = (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(Tag335(/*uint64_t:227755:227755:207180:e*/p_46), Tag336(/*uint64_t:227755:227755:207180:e*/p_46))), 3)), (-1L))) && (Tag337(/*int32_t:227354:227755:207180:e*/*l_2841))) ^ 0xFEF1L)) , Tag338(/*uint64_t:227755:227755:207180:e*/p_46)) ^ 0x290A2F5CL) | 0L)))) & Tag339(/*uint64_t:227755:227755:207180:e*/p_46))) | Tag340(/*int16_t:0:0:207180:e*/g_1520[3][9])) && Tag341(/*uint16_t:0:0:207180:e*/g_919)) > 1UL)), 0x50L)) , Tag342(/*uint64_t:227755:227755:207180:e*/p_46));
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
/*aft_stmt:207180*/
            /*bef_stmt:207235*/
(*g_397) = ((0xE5B3L & Tag343(/*uint64_t:227755:227755:207235:e*/p_46)) , &l_2832);
/*aft_stmt:207235*/
        }
        else
        { /* block id: 1317 */
            /*bef_stmt:207360*/
/*bef_stmt:207360*/
(*g_2040) = ((((Tag344(/*int32_t:227354:227755:207360:e*/*l_2841)) , 18446744073709551614UL) && Tag345(/*uint64_t:227755:227755:207360:e*/p_46)) , ((*g_1053) == (void*)0));
/*aft_stmt:207360*/
/*aft_stmt:207360*/
            (*g_397) = &l_2616;
        }
/*aft_stmt:207393*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
/*bef_stmt:225325*/
lbl_3052:
        if (((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((Tag346(/*uint16_t:227755:227755:225325:e*/l_2930) || (safe_mul_func_int16_t_s_s(((Tag347(/*int32_t:227755:227755:225325:e*/****l_2696)) < (((*g_716) = Tag348(/*uint64_t:227755:227755:225325:e*/p_46)) == (((Tag349(/*int32_t:227354:227755:225325:e*/*l_2841)) >= (Tag350(/*int16_t:0:0:225325:e*/g_1520[6][2]) , (Tag351(/*int32_t:227354:227755:225325:e*/*l_2841)))) == (0xF9B55FB412FFA432LL == (((0x1401L ^ (((*p_45) = (((*g_2040) = (safe_div_func_int16_t_s_s(((((*p_47) = Tag352(/*uint64_t:227354:227755:225325:e*/l_2935)) & (Tag353(/*int32_t:227755:227755:225325:e*/****l_2696))) , Tag354(/*int64_t:0:0:225325:e*/g_585)), Tag355(/*uint64_t:227755:227755:225325:e*/p_46)))) > 0xF27FB51DL)) , (Tag356(/*int32_t:227354:227755:225325:e*/*l_2841)))) <= (Tag357(/*uint32_t:0:0:225325:e*/*g_273))) == (Tag358(/*int32_t:227755:227755:225325:e*/****l_2696))))))), Tag359(/*uint64_t:227755:227755:225325:e*/p_46)))), (Tag360(/*int32_t:227354:227755:225325:e*/*l_2841)))), (Tag361(/*int32_t:227354:227755:225325:e*/*l_2841)))) , Tag362(/*uint64_t:227755:227755:225325:e*/p_46)))
        { /* block id: 1325 */
            int32_t l_2942[3][2];
            int32_t l_2964 = (-4L);
            int64_t ***l_2972 = &g_393;
            int16_t *l_2987 = &g_1720[3];
            int32_t *****l_3002 = (void*)0;
            int32_t *l_3038 = &l_2643;
            int32_t *l_3039 = &g_72[3][0][0];
            int32_t *l_3040[9][5][5] = {{{&l_2643,&l_2832,&l_2832,&l_2643,&l_2644[0]},{&l_2644[0],&g_72[5][1][4],&l_2909[8][1][1],(void*)0,(void*)0},{&l_2643,(void*)0,&l_2832,(void*)0,&l_2644[0]},{(void*)0,&g_72[5][1][4],&l_2643,(void*)0,&l_2942[1][0]},{&l_2643,&l_2832,&l_2832,&l_2643,&l_2644[0]}},{{&l_2644[0],&g_72[5][1][4],&l_2909[8][1][1],(void*)0,(void*)0},{&l_2643,(void*)0,&l_2832,(void*)0,&l_2644[0]},{(void*)0,&g_72[5][1][4],&l_2643,(void*)0,&l_2942[1][0]},{&l_2643,&l_2832,&l_2832,&l_2643,&l_2644[0]},{&l_2644[0],&g_72[5][1][4],&l_2909[8][1][1],(void*)0,(void*)0}},{{&l_2643,(void*)0,&l_2832,(void*)0,&l_2644[0]},{(void*)0,&g_72[5][1][4],&l_2643,(void*)0,&l_2942[1][0]},{&l_2643,&l_2832,&l_2832,&l_2643,&l_2644[0]},{&l_2644[0],&g_72[5][1][4],&l_2909[8][1][1],&l_2942[2][0],&l_2644[1]},{(void*)0,&l_2643,(void*)0,&l_2942[2][1],&g_169}},{{&l_2644[0],(void*)0,(void*)0,&l_2942[2][0],&l_2644[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_169},{&l_2909[8][1][1],(void*)0,&l_2644[0],&l_2942[2][0],&l_2644[1]},{(void*)0,&l_2643,(void*)0,&l_2942[2][1],&g_169},{&l_2644[0],(void*)0,(void*)0,&l_2942[2][0],&l_2644[0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_169},{&l_2909[8][1][1],(void*)0,&l_2644[0],&l_2942[2][0],&l_2644[1]},{(void*)0,&l_2643,(void*)0,&l_2942[2][1],&g_169},{&l_2644[0],(void*)0,(void*)0,&l_2942[2][0],&l_2644[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_169}},{{&l_2909[8][1][1],(void*)0,&l_2644[0],&l_2942[2][0],&l_2644[1]},{(void*)0,&l_2643,(void*)0,&l_2942[2][1],&g_169},{&l_2644[0],(void*)0,(void*)0,&l_2942[2][0],&l_2644[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_169},{&l_2909[8][1][1],(void*)0,&l_2644[0],&l_2942[2][0],&l_2644[1]}},{{(void*)0,&l_2643,(void*)0,&l_2942[2][1],&g_169},{&l_2644[0],(void*)0,(void*)0,&l_2942[2][0],&l_2644[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_169},{&l_2909[8][1][1],(void*)0,&l_2644[0],&l_2942[2][0],&l_2644[1]},{(void*)0,&l_2643,(void*)0,&l_2942[2][1],&g_169}},{{&l_2644[0],(void*)0,(void*)0,&l_2942[2][0],&l_2644[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_169},{&l_2909[8][1][1],(void*)0,&l_2644[0],&l_2942[2][0],&l_2644[1]},{(void*)0,&l_2643,(void*)0,&l_2942[2][1],&g_169},{&l_2644[0],(void*)0,(void*)0,&l_2942[2][0],&l_2644[0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_169},{&l_2909[8][1][1],(void*)0,&l_2644[0],&l_2942[2][0],&l_2644[1]},{(void*)0,&l_2643,(void*)0,&l_2942[2][1],&g_169},{&l_2644[0],(void*)0,(void*)0,&l_2942[2][0],&l_2644[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_169}}};
            uint32_t l_3041 = 8UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2942[i][j] = 0L;
            }
            /*bef_stmt:220964*/
/*bef_stmt:220964*/
/*bef_stmt:220964*/
/*bef_stmt:220964*/
/*bef_stmt:220964*/
/*bef_stmt:220964*/
/*bef_stmt:220964*/
/*bef_stmt:220964*/
/*bef_stmt:220964*/
if (((***g_396) = (((18446744073709551612UL != (safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((((((*g_2609)--) , 0x1A89L) == ((void*)0 == (*g_648))) | (-6L)), Tag363(/*int32_t:220977:227354:220964:e*/l_2942[2][0]))), (safe_add_func_uint16_t_u_u((Tag364(/*uint64_t:227755:227755:220964:e*/p_46) != ((((Tag365(/*uint64_t:227755:227755:220964:e*/p_46) == (safe_div_func_int64_t_s_s(0x5ED0CD5047B8A787LL, 0xFB26F7878195A593LL))) >= (Tag366(/*int32_t:227354:227755:220964:e*/*l_2841))) <= Tag367(/*uint64_t:227755:227755:220964:e*/p_46)) , (Tag368(/*int8_t:0:0:220964:e*/**g_715)))), Tag369(/*uint64_t:227755:227755:220964:e*/p_46)))))) & (Tag370(/*int32_t:227354:227755:220964:e*/*l_2841))) ^ Tag371(/*uint32_t:227755:227755:220964:e*/l_2947))))
            { /* block id: 1328 */
                uint16_t **l_2960 = &g_794;
                uint16_t *** const l_2959 = &l_2960;
                uint16_t *** const *l_2958 = &l_2959;
                uint16_t *** const **l_2957 = &l_2958;
                uint32_t *l_2963 = &l_2640;
                int32_t l_2985[4][8][7] = {{{0x0892A1AFL,0x3F2EA6DFL,0x49CCB45FL,0x3F2EA6DFL,0x0892A1AFL,(-5L),0xFCA100BDL},{0L,0xF417EDD1L,0x9EF7A292L,(-1L),(-1L),(-5L),1L},{0x20C26333L,0x6D211B0DL,0x611C89E5L,(-7L),0x2C898304L,0x5B79F0B8L,9L},{0L,(-1L),0x611C89E5L,0xF1D7E0A2L,0x758DC1BDL,9L,0x4A8DEC3EL},{0x0892A1AFL,0xF1D7E0A2L,0x9EF7A292L,0x5A37D192L,0x2C898304L,7L,(-8L)},{(-5L),0xCCA43879L,0xF2253683L,(-1L),7L,(-3L),0x49CCB45FL},{5L,0x321826C5L,(-1L),(-1L),9L,0x5AA96D2EL,0xD69FDDECL},{0xFCA100BDL,0xB71C1F96L,8L,1L,0x5B79F0B8L,(-3L),0xDC926185L}},{{0xFCA100BDL,0x517F05DFL,0x526E0E5AL,0x321826C5L,(-5L),0xB291599EL,0x9EF7A292L},{5L,0xB50D3C70L,8L,8L,(-5L),0x49CCB45FL,0xB291599EL},{(-5L),0x1E793531L,(-1L),0xB71C1F96L,0x5B79F0B8L,0x9EF7A292L,0x9EF7A292L},{9L,0x1E793531L,0xF2253683L,0x1E793531L,9L,0x611C89E5L,0xDC926185L},{0L,0xB50D3C70L,0xA8A22D44L,0xB71C1F96L,7L,0x611C89E5L,0xD69FDDECL},{0x5B79F0B8L,0x517F05DFL,0xF4CB1F95L,8L,0x57D373CDL,0x9EF7A292L,0x49CCB45FL},{0L,0xB71C1F96L,0xF4CB1F95L,0x321826C5L,0x61392C0FL,0x49CCB45FL,(-8L)},{9L,0x321826C5L,0xA8A22D44L,1L,0x57D373CDL,0xB291599EL,(-8L)}},{{(-5L),0xCCA43879L,0xF2253683L,(-1L),7L,(-3L),0x49CCB45FL},{5L,0x321826C5L,(-1L),(-1L),9L,0x5AA96D2EL,0xD69FDDECL},{0xFCA100BDL,0xB71C1F96L,8L,1L,0x5B79F0B8L,(-3L),0xDC926185L},{0xFCA100BDL,0x517F05DFL,0x526E0E5AL,0x321826C5L,(-5L),0xB291599EL,0x9EF7A292L},{5L,0xB50D3C70L,8L,8L,(-5L),0x49CCB45FL,0xB291599EL},{(-5L),0x1E793531L,(-1L),0xB71C1F96L,0x5B79F0B8L,0x9EF7A292L,0x9EF7A292L},{9L,0x1E793531L,0xF2253683L,0x1E793531L,9L,0x611C89E5L,0xDC926185L},{0L,0xB50D3C70L,0xA8A22D44L,0xB71C1F96L,7L,0x611C89E5L,0xD69FDDECL}},{{0x5B79F0B8L,0x517F05DFL,0xF4CB1F95L,8L,0x57D373CDL,0x9EF7A292L,0x49CCB45FL},{0L,0xB71C1F96L,0xF4CB1F95L,0x321826C5L,0x61392C0FL,0x49CCB45FL,(-8L)},{9L,0x321826C5L,0xA8A22D44L,1L,0x57D373CDL,0xB291599EL,(-8L)},{(-5L),0xCCA43879L,0xF2253683L,(-1L),7L,(-3L),0x49CCB45FL},{5L,0x321826C5L,(-1L),(-1L),9L,0x5AA96D2EL,0xD69FDDECL},{0xFCA100BDL,0xB71C1F96L,8L,1L,0x5B79F0B8L,(-3L),0xDC926185L},{0xFCA100BDL,0x517F05DFL,0x526E0E5AL,0x321826C5L,(-5L),0xB291599EL,0x9EF7A292L},{5L,0xB50D3C70L,8L,8L,(-5L),0x49CCB45FL,0xB291599EL}}};
                uint16_t *l_2998 = (void*)0;
                int32_t l_2999 = 5L;
                uint32_t l_3011 = 0x424BB3C4L;
                int i, j, k;
                /*bef_stmt:218786*/
/*bef_stmt:218786*/
/*bef_stmt:218786*/
/*bef_stmt:218786*/
/*bef_stmt:218786*/
/*bef_stmt:218786*/
/*bef_stmt:218786*/
(**g_397) = (((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(Tag372(/*int32_t:220977:227354:218786:e*/l_2942[2][0]), 5)), ((**l_2696) != l_2952))) | (((((safe_sub_func_uint16_t_u_u((Tag373(/*int32_t:227755:227755:218786:e*/****l_2696)), (((*l_2963) = (safe_div_func_uint8_t_u_u((((*l_2957) = (void*)0) != (((--(**g_272)) && (Tag374(/*uint32_t:0:0:218786:e*/*g_273))) , l_2639)), 0xCEL))) && (((*g_2655) != (*g_2655)) >= Tag375(/*int32_t:220977:227354:218786:e*/l_2964))))) , 0x7B6AL) ^ Tag376(/*uint64_t:227755:227755:218786:e*/p_46)) , 0xD6L) , (Tag377(/*int32_t:227354:227755:218786:e*/*l_2841)))) ^ Tag378(/*int32_t:220977:227354:218786:e*/l_2942[1][1]));
/*aft_stmt:218786*/
/*aft_stmt:218786*/
/*aft_stmt:218786*/
/*aft_stmt:218786*/
/*aft_stmt:218786*/
/*aft_stmt:218786*/
/*aft_stmt:218786*/
                /*bef_stmt:219645*/
/*bef_stmt:219645*/
/*bef_stmt:219645*/
/*bef_stmt:219645*/
/*bef_stmt:219645*/
/*bef_stmt:219645*/
/*bef_stmt:219645*/
/*bef_stmt:219645*/
/*bef_stmt:219645*/
l_2985[3][5][5] = ((****l_2696) = (safe_lshift_func_int8_t_s_u(((l_2967[0][1] != (void*)0) > (l_2988 = ((0x7826L != (Tag379(/*int32_t:227755:227755:219645:e*/****l_2696))) && ((*l_2986) |= (safe_div_func_uint8_t_u_u((((**g_645) = l_2972) == (void*)0), (safe_mod_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_u(((*p_47) = (((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((Tag380(/*int8_t:0:0:219645:e*/*g_716)) || (l_2942[0][1] ^= (Tag381(/*uint64_t:227755:227755:219645:e*/p_46) != ((~0x07L) , Tag382(/*int32_t:220351:220977:219645:e*/l_2985[3][5][5]))))), (Tag383(/*int8_t:0:0:219645:e*/**g_715)))), Tag384(/*int32_t:220351:220977:219645:e*/l_2985[2][5][3]))), 3)))) <= Tag385(/*uint64_t:227755:227755:219645:e*/p_46)) || Tag386(/*uint64_t:227755:227755:219645:e*/p_46))), (Tag387(/*uint8_t:227755:227755:219645:e*/*p_45)))) , l_2986) != l_2987) | 0xAB08EEBCC810406FLL), 4294967287UL)))))))), 0)));
/*aft_stmt:219645*/
/*aft_stmt:219645*/
/*aft_stmt:219645*/
/*aft_stmt:219645*/
/*aft_stmt:219645*/
/*aft_stmt:219645*/
/*aft_stmt:219645*/
/*aft_stmt:219645*/
/*aft_stmt:219645*/
                /*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
/*bef_stmt:220347*/
(***g_396) = (safe_unary_minus_func_uint8_t_u(((((safe_div_func_uint64_t_u_u(((+(safe_mod_func_uint16_t_u_u(Tag388(/*uint32_t:227755:227755:220347:e*/l_2995), (((l_2999 = (l_2985[3][5][5] = (safe_rshift_func_int16_t_s_u(Tag389(/*uint64_t:227755:227755:220347:e*/p_46), 4)))) && ((0x3FF5D8E9L != (safe_mod_func_uint32_t_u_u(((Tag390(/*uint32_t:0:0:220347:e*/**g_272)) && (0x0D2A2A694B181136LL < ((void*)0 != l_3002))), (safe_div_func_uint64_t_u_u((l_3011 = ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((Tag391(/*int32_t:227354:227755:220347:e*/**l_2952)), (((l_2985[0][2][6] = (safe_lshift_func_uint8_t_u_s((Tag392(/*int32_t:227354:227755:220347:e*/**l_2952)), 3))) && Tag393(/*uint64_t:227755:227755:220347:e*/p_46)) < Tag394(/*int32_t:220351:220977:220347:e*/l_2999)))) < 0x4CA7D7FEL), Tag395(/*int32_t:220351:220977:220347:e*/l_2999))) < 0x782DL)), Tag396(/*uint64_t:227755:227755:220347:e*/p_46)))))) <= Tag397(/*uint64_t:227755:227755:220347:e*/p_46))) & 1UL)))) != 0L), Tag398(/*uint64_t:227755:227755:220347:e*/p_46))) || 0x70L) >= 9L) < (-1L))));
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
/*aft_stmt:220347*/
            }
            else
            { /* block id: 1345 */
                int16_t l_3035 = 0x000AL;
                int32_t l_3036 = 0xF2A69205L;
                /*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
/*bef_stmt:220955*/
(*g_2040) = (safe_mod_func_int32_t_s_s(((Tag399(/*uint32_t:227354:227755:220955:e*/l_3014) , (safe_lshift_func_uint8_t_u_u(((Tag400(/*const int32_t:0:0:220955:e*/*g_1056)) | ((safe_mod_func_uint64_t_u_u(0UL, (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_2832 |= ((!(0UL < (((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s(2L, 5)) && (0xF9002E4D6FE1EA73LL | (safe_div_func_int8_t_s_s(0x50L, (Tag401(/*int8_t:0:0:220955:e*/*g_716)))))), 12)) | (l_3035 |= ((safe_mul_func_int8_t_s_s((Tag402(/*uint64_t:227755:227755:220955:e*/p_46) < 0xB0L), (Tag403(/*int32_t:227354:227755:220955:e*/*l_2841)))) == Tag404(/*uint32_t:227755:227755:220955:e*/l_3034)))) != Tag405(/*int32_t:220959:220977:220955:e*/l_3036)))) > 4294967288UL)) >= Tag406(/*uint64_t:227755:227755:220955:e*/p_46)), Tag407(/*uint64_t:227755:227755:220955:e*/p_46))), Tag408(/*int32_t:220977:227354:220955:e*/l_2964))))) > Tag409(/*uint64_t:227755:227755:220955:e*/p_46))), 1))) & 0x8C768773L), Tag410(/*uint64_t:227755:227755:220955:e*/p_46)));
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
/*aft_stmt:220955*/
            }
/*aft_stmt:220964*/
/*aft_stmt:220964*/
/*aft_stmt:220964*/
/*aft_stmt:220964*/
/*aft_stmt:220964*/
/*aft_stmt:220964*/
/*aft_stmt:220964*/
/*aft_stmt:220964*/
/*aft_stmt:220964*/
            l_3041++;
        }
        else
        { /* block id: 1351 */
            const int32_t **l_3044 = (void*)0;
            const int32_t **l_3045[5][8][6] = {{{&g_1056,(void*)0,&g_1056,&g_1056,(void*)0,(void*)0},{&g_1056,(void*)0,&g_1056,(void*)0,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056},{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0},{(void*)0,&g_1056,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,(void*)0,&g_1056,&g_1056},{&g_1056,&g_1056,(void*)0,&g_1056,&g_1056,&g_1056}},{{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,&g_1056,(void*)0,(void*)0},{&g_1056,(void*)0,&g_1056,(void*)0,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056},{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0},{(void*)0,&g_1056,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0}},{{&g_1056,(void*)0,&g_1056,(void*)0,&g_1056,&g_1056},{&g_1056,&g_1056,(void*)0,&g_1056,&g_1056,&g_1056},{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,&g_1056,(void*)0,(void*)0},{&g_1056,(void*)0,&g_1056,(void*)0,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056},{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0}},{{(void*)0,&g_1056,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,(void*)0,&g_1056,&g_1056},{&g_1056,&g_1056,(void*)0,&g_1056,&g_1056,&g_1056},{&g_1056,(void*)0,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,&g_1056,(void*)0,(void*)0},{&g_1056,(void*)0,&g_1056,(void*)0,&g_1056,&g_1056}},{{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056},{&g_1056,&g_1056,(void*)0,&g_1056,(void*)0,&g_1056},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,(void*)0},{&g_1056,(void*)0,&g_1056,&g_1056,(void*)0,&g_1056},{&g_1056,(void*)0,&g_1056,(void*)0,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056,&g_1056,(void*)0,&g_1056},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056},{(void*)0,&g_1056,&g_1056,&g_1056,&g_1056,(void*)0}}};
            const int32_t **l_3046 = (void*)0;
            const int32_t **l_3047[2][7] = {{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056,&g_1056}};
            const int32_t **l_3048 = &g_1056;
            int i, j, k;
            (*l_3048) = (**g_1054);
        }
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
/*aft_stmt:225325*/
        /*bef_stmt:227348*/
/*bef_stmt:227348*/
/*bef_stmt:227348*/
/*bef_stmt:227348*/
if ((((*l_3051) |= ((((**g_397) = ((*g_1790) != ((Tag411(/*int32_t:227755:227755:227348:e*/****l_2696)) , l_3049))) ^ (&g_78 == &l_2935)) != ((Tag412(/*const int64_t:0:0:227348:e*/*g_394)) ^ Tag413(/*uint64_t:227755:227755:227348:e*/p_46)))) != Tag414(/*int16_t:0:0:227348:e*/g_361)))
        { /* block id: 1356 */
            int8_t l_3076 = 6L;
            int32_t *l_3088 = (void*)0;
            /*bef_stmt:225625*/
if (Tag415(/*int16_t:0:0:225625:e*/g_361))
                goto lbl_3052;
/*aft_stmt:225625*/
            /*bef_stmt:225700*/
(*g_2040) = ((Tag416(/*int32_t:227755:227755:225700:e*/****l_2696)) , (-2L));
/*aft_stmt:225700*/
            for (l_2643 = 0; (l_2643 <= (-12)); l_2643--)
            { /* block id: 1361 */
                uint64_t l_3059 = 1UL;
                int32_t * const l_3087[7] = {&g_2398,&g_2398,&g_2398,&g_2398,&g_2398,&g_2398,&g_2398};
                uint32_t l_3091 = 0xA25163A0L;
                int i;
                for (l_3014 = 1; (l_3014 <= 5); l_3014 += 1)
                { /* block id: 1364 */
                    int64_t l_3058 = 0x739112BDC521A06ELL;
                    uint16_t **l_3089[8] = {&g_794,&g_794,&g_794,&g_794,&g_794,&g_794,&g_794,&g_794};
                    const uint32_t l_3093 = 0x3CCFB8D6L;
                    int i;
                }
            }
        }
        else
        { /* block id: 1391 */
            uint8_t *** const *l_3104 = &l_2844[1][4];
            int32_t l_3113[4] = {0xFD0475A9L,0xFD0475A9L,0xFD0475A9L,0xFD0475A9L};
            int i;
            /*bef_stmt:226905*/
/*bef_stmt:226905*/
/*bef_stmt:226905*/
/*bef_stmt:226905*/
/*bef_stmt:226905*/
/*bef_stmt:226905*/
(*g_2040) |= (safe_lshift_func_uint8_t_u_u(((Tag417(/*uint8_t:227755:227755:226905:e*/*p_45)) & ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((&l_2696 != &l_2696), 6)) && (l_3103[0] = ((*g_273) = (safe_sub_func_uint16_t_u_u(0UL, (l_3102 == (void*)0)))))), (&l_2844[1][4] != l_3104))) , (((**g_715) = (((Tag418(/*uint64_t:227755:227755:226905:e*/p_46) <= (Tag419(/*int32_t:227755:227755:226905:e*/****l_2696))) <= (Tag420(/*const int32_t:0:0:226905:e*/*g_1056))) ^ (Tag421(/*int32_t:227755:227755:226905:e*/****l_2696)))) , (Tag422(/*int8_t:0:0:226905:e*/**g_715))))), 5));
/*aft_stmt:226905*/
/*aft_stmt:226905*/
/*aft_stmt:226905*/
/*aft_stmt:226905*/
/*aft_stmt:226905*/
/*aft_stmt:226905*/
            (**g_2655) = l_3105;
            for (g_111 = 0; (g_111 >= 37); ++g_111)
            { /* block id: 1399 */
                int32_t *l_3109 = &l_2616;
                int32_t *l_3110 = &l_2909[8][1][1];
                int32_t *l_3111 = &l_2644[0];
                int32_t *l_3112[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_3112[i] = &g_72[1][0][0];
                l_3115--;
            }
            /*bef_stmt:227335*/
(*g_398) = (Tag423(/*const int32_t:0:0:227335:e*/****g_1053));
/*aft_stmt:227335*/
        }
/*aft_stmt:227348*/
/*aft_stmt:227348*/
/*aft_stmt:227348*/
/*aft_stmt:227348*/
    }
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
/*aft_stmt:227381*/
    /*bef_stmt:227732*/
/*bef_stmt:227732*/
/*bef_stmt:227732*/
/*bef_stmt:227732*/
/*bef_stmt:227732*/
/*bef_stmt:227732*/
/*bef_stmt:227732*/
/*bef_stmt:227732*/
l_3126 = (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(/*TAG424:STA*/((int32_t)(realsmith_proxy_oIT8V((char)(g_1502)+(2), (char)(g_1502)+(4), (int)(g_1502)+(2))+(int)(g_1502)-(-2))+g_1502)/*TAG424:END:g_1502*/, (l_2644[0] ^= (((l_2642[2] != (void*)0) < Tag425(/*uint64_t:227755:227755:227732:e*/p_46)) | Tag426(/*uint64_t:227755:227755:227732:e*/p_46))))) , (((safe_div_func_int32_t_s_s((((&p_45 == &p_44) , (/*TAG427:STA*/((uint8_t)(realsmith_BoTac((int)(*g_2609)+(50))+(int)(*g_2609)-(6))+*g_2609)/*TAG427:END:*g_2609*/)) < ((void*)0 != l_2696)), (/*TAG428:STA*/((int32_t)(realsmith_proxy_2D8xe((int)(*g_2040)+(-3), (int)(*g_2040)+(89), (int)(*g_2040)+(86), (unsigned long)(*g_2040)+(-98))+(int)(*g_2040)-(22))+*g_2040)/*TAG428:END:*g_2040*/))) | (/*TAG429:STA*/((uint32_t)(realsmith_sLrH5((int)(*g_273)+(8))+(int)(*g_273)-(1))+*g_273)/*TAG429:END:*g_273*/)) >= /*TAG430:STA*/((uint64_t)(realsmith_proxy_KtW6I((char)(p_46)+(-181), (int)(p_46)+(1996523998))+(int)(p_46)-(-1996523916))+p_46)/*TAG430:END:p_46*/)), Tag431(/*uint64_t:227755:227755:227732:e*/p_46)));
/*aft_stmt:227732*/
/*aft_stmt:227732*/
/*aft_stmt:227732*/
/*aft_stmt:227732*/
/*aft_stmt:227732*/
/*aft_stmt:227732*/
/*aft_stmt:227732*/
/*aft_stmt:227732*/
    --g_3130;
    /*bef_stmt:227753*/
return Tag432(/*uint64_t:227755:227755:227753:e*/p_46);
/*aft_stmt:227753*/
}


/* ------------------------------------------ */
/* 
 * reads : g_272 g_273 g_111 g_979 g_919 g_394 g_108 g_2040 g_1055 g_1056 g_169 g_1790 g_72 g_1720 g_396 g_397 g_495 g_715 g_716 g_542 g_280 g_1015 g_115 g_1053 g_1054 g_89 g_1016 g_1520 g_404 g_114 g_248 g_1200 g_1938 g_1825 g_578 g_424 g_78 g_153 g_398 g_186
 * writes: g_979 g_72 g_1791 g_108 g_495 g_398 g_115 g_404 g_424 g_169 g_1016 g_2345 g_542 g_1347 g_2398 g_111 g_89 g_1200 g_186 g_1278 g_1056 g_280 g_114 g_1825
 */
static uint8_t * func_48(int8_t  p_49, uint8_t * p_50, uint32_t  p_51, uint64_t  p_52)
{ /* block id: 986 */
    int32_t **** const l_2240 = &g_396;
    int32_t l_2256 = 1L;
    uint16_t **l_2261 = &g_794;
    int32_t l_2288 = 8L;
    int64_t l_2349 = 0x17013013039548D2LL;
    int32_t l_2377[4];
    int32_t l_2381[1][9][6] = {{{6L,0xF8321CF0L,0x67F6BECAL,6L,0x67F6BECAL,0xF8321CF0L},{0x7189F37FL,0xF8321CF0L,9L,0x7189F37FL,0x67F6BECAL,0x67F6BECAL},{0xCB29E188L,0xF8321CF0L,0xF8321CF0L,0xCB29E188L,0x67F6BECAL,9L},{6L,0xF8321CF0L,0x67F6BECAL,6L,0x67F6BECAL,0xF8321CF0L},{0x7189F37FL,0xF8321CF0L,9L,0x7189F37FL,0x67F6BECAL,0x67F6BECAL},{0xCB29E188L,0xF8321CF0L,0xF8321CF0L,0xCB29E188L,0x67F6BECAL,9L},{6L,0xF8321CF0L,0x67F6BECAL,6L,0x67F6BECAL,0xF8321CF0L},{0x7189F37FL,0xF8321CF0L,9L,0x7189F37FL,0x67F6BECAL,0x67F6BECAL},{0xCB29E188L,0xF8321CF0L,0xF8321CF0L,0xCB29E188L,0x67F6BECAL,9L}}};
    uint8_t l_2383 = 0x9EL;
    uint8_t l_2397 = 0xA9L;
    int8_t l_2413[9] = {4L,4L,4L,4L,4L,4L,4L,4L,4L};
    uint8_t l_2415 = 0UL;
    int32_t l_2418 = 0x1AFC50B8L;
    int64_t ***** const l_2499 = &g_344;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2377[i] = 0x75B1BE42L;
    /*bef_stmt:229792*/
/*bef_stmt:229792*/
/*bef_stmt:229792*/
/*bef_stmt:229792*/
/*bef_stmt:229792*/
/*bef_stmt:229792*/
/*bef_stmt:229792*/
/*bef_stmt:229792*/
/*bef_stmt:229792*/
/*bef_stmt:229792*/
(*g_2040) = (0L <= ((((void*)0 == l_2240) < ((0x655097FF9DDC945FLL < ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((Tag433(/*uint32_t:0:0:229792:e*/**g_272)) & (safe_rshift_func_uint16_t_u_s((+((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*p_50)++), Tag434(/*int8_t:262118:262118:229792:e*/p_49))), (Tag435(/*uint64_t:262118:262118:229792:e*/p_52) , /*TAG436:STA*/((int32_t)(realsmith_proxy_sMRT4((int)(l_2256)+(-54), (int)(l_2256)+(-1), (unsigned long)(l_2256)+(43), (unsigned long)(l_2256)+(91), (int)(l_2256)+(40))+(unsigned long)(l_2256)-(2))+l_2256)/*TAG436:END:l_2256*/))) > (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(Tag437(/*uint16_t:0:0:229792:e*/g_919), /*TAG438:STA*/((int32_t)(realsmith_proxy_XKrT6((int)(l_2256)+(26), (long)(l_2256)+(90))+(int)(l_2256)-(8))+l_2256)/*TAG438:END:l_2256*/)), 0x307E27B4L)))), 1))) && Tag439(/*int32_t:262118:262118:229792:e*/l_2256)), 1UL)) <= 0xF302A563AE75BD32LL), Tag440(/*uint32_t:262118:262118:229792:e*/p_51))) <= (Tag441(/*const int64_t:0:0:229792:e*/*g_394)))) < 0xA7B27017L)) || Tag442(/*uint64_t:262118:262118:229792:e*/p_52)));
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*aft_stmt:229792*/
/*bef_stmt:229898*/
lbl_2604:
    (*g_1790) = (((*g_2040) = (Tag443(/*const int32_t:0:0:229898:e*/**g_1055))) , l_2261);
/*aft_stmt:229898*/
    /*bef_stmt:262050*/
if (Tag444(/*int32_t:262118:262118:262050:e*/l_2256))
    { /* block id: 991 */
        int32_t l_2273 = 7L;
        int16_t l_2350 = 4L;
        const uint16_t *l_2369 = &g_919;
        const uint16_t **l_2368[4] = {&l_2369,&l_2369,&l_2369,&l_2369};
        const uint16_t ***l_2367 = &l_2368[1];
        const uint16_t ****l_2366 = &l_2367;
        int32_t l_2373 = 9L;
        int16_t l_2374[9];
        int32_t l_2375 = 0xE43DFF40L;
        int32_t l_2376 = 0x6ECF455BL;
        int32_t l_2378 = 1L;
        int32_t l_2379[6];
        int8_t l_2382 = (-1L);
        int8_t **l_2514[3];
        uint8_t *l_2515 = &g_186;
        int32_t ***l_2563 = (void*)0;
        int i;
        for (i = 0; i < 9; i++)
            l_2374[i] = 0x71F9L;
        for (i = 0; i < 6; i++)
            l_2379[i] = 0xD4AAEB48L;
        for (i = 0; i < 3; i++)
            l_2514[i] = &g_716;
        for (g_108 = 3; (g_108 <= 9); g_108 += 1)
        { /* block id: 994 */
            int32_t l_2278 = (-1L);
            uint16_t *l_2287 = &g_495[3];
            int32_t l_2289 = (-3L);
            int32_t l_2290 = 0x7FEAFE4FL;
            int32_t l_2291 = 0x6B55AC00L;
            int32_t *l_2300[4];
            int64_t *****l_2311 = &g_344;
            int16_t l_2396 = 0L;
            int16_t l_2414[10] = {0xC725L,0xC725L,0xC725L,0xC725L,0xC725L,0xC725L,0xC725L,0xC725L,0xC725L,0xC725L};
            uint8_t **l_2430 = &g_1938[2];
            int16_t l_2496 = 0xC93EL;
            int32_t **l_2565 = &g_1501;
            int32_t ***l_2564 = &l_2565;
            int i;
            for (i = 0; i < 4; i++)
                l_2300[i] = &l_2288;
            /*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
/*bef_stmt:244374*/
if ((((((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((l_2291 = ((*p_50) |= ((safe_mul_func_uint16_t_u_u(/*TAG445:STA*/((uint64_t)(realsmith_UyCs0((int)(p_52)+(33))+(int)(p_52)+(int)(*g_394)+(int)(p_51)+(int)(*g_273)-(11))+p_52)/*TAG445:END:p_52*/, ((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((1UL > (l_2290 = (l_2278 = ((safe_add_func_uint32_t_u_u((18446744073709551609UL & Tag446(/*int8_t:262118:262118:244374:e*/p_49)), (/*TAG447:STA*/((int8_t)(realsmith_proxy_KDvBE((int)(l_2256)+(65))+(unsigned int)(p_49)+(unsigned int)(*g_394)+(unsigned int)(*g_273)+(unsigned int)(l_2256)+(unsigned int)(*g_2609)-(17038))+p_49)/*TAG447:END:p_49*/ , ((*g_2040) ^= Tag448(/*int32_t:260859:262118:244374:e*/l_2273))))) || ((safe_mul_func_int8_t_s_s(((((safe_mod_func_int32_t_s_s(Tag449(/*int32_t:260823:260859:244374:e*/l_2278), ((safe_rshift_func_uint16_t_u_s((l_2289 = ((safe_mod_func_uint16_t_u_u((((*g_272) != ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((*l_2287) = (Tag450(/*uint32_t:262118:262118:244374:e*/p_51) && Tag451(/*int32_t:260823:260859:244374:e*/l_2278))), Tag452(/*uint64_t:262118:262118:244374:e*/p_52))), Tag453(/*int32_t:260823:260859:244374:e*/l_2278))) , (void*)0)) < 0xB5L), /*TAG454:STA*/((uint64_t)(realsmith_oDlV6((unsigned int)(l_2256)+(4))+(char)(p_52)+(char)(l_2256)+(char)(*g_394)+(char)(p_49)+(char)(p_51)-(119))+p_52)/*TAG454:END:p_52*/)) , /*TAG455:STA*/((int32_t)(realsmith_vN5z7((unsigned int)(p_49)+(-9), (unsigned int)(p_49)+(33), (int)(p_52)+(24))+(unsigned int)(l_2288)+(unsigned int)(g_919)+(unsigned int)(p_52)+(unsigned int)(l_2256)+(unsigned int)(p_49)-(180))+l_2288)/*TAG455:END:l_2288*/)), Tag456(/*uint64_t:262118:262118:244374:e*/p_52))) | 0x91L))) && Tag457(/*int32_t:260823:260859:244374:e*/l_2278)) != 0x02E54518D5A54E6FLL) || Tag458(/*uint64_t:262118:262118:244374:e*/p_52)), (-1L))) ^ 1L))))), /*TAG459:STA*/((uint32_t)(realsmith_jtJKn((int)(*g_394)+(24))+(int)(p_51)+(int)(p_49)+(int)(l_2256)+(int)(p_52)+(int)(*g_394)-(85))+p_51)/*TAG459:END:p_51*/)), Tag460(/*int32_t:260823:260859:244374:e*/l_2291))) && 1UL))) , Tag461(/*int32_t:260823:260859:244374:e*/l_2290)))))), /*TAG462:STA*/((uint32_t)(realsmith_Ee9AN((int)(p_49)+(-19))+(int)(p_51)+(int)(p_49)+(int)(p_52)+(int)(l_2256)+(int)(l_2288)-(123))+p_51)/*TAG462:END:p_51*/)) > 7L) <= (-9L)) >= Tag463(/*int16_t:0:0:244374:e*/g_1720[0])) >= 0xF69897A8L))
            { /* block id: 1002 */
                int32_t *l_2292 = &l_2288;
                int32_t *l_2293 = &l_2288;
                int32_t *l_2294 = &g_72[5][1][1];
                int32_t l_2295 = 0x9966DD7EL;
                int32_t *l_2296[1];
                uint64_t l_2297 = 0xE0D844F789C9C277LL;
                int i;
                for (i = 0; i < 1; i++)
                    l_2296[i] = &l_2289;
                --l_2297;
                l_2292 = ((***l_2240) = &l_2273);
                l_2300[3] = ((*g_397) = &l_2295);
            }
            else
            { /* block id: 1008 */
                int32_t l_2314 = 0xAA5354DDL;
                int32_t *l_2370[5][7] = {{(void*)0,(void*)0,&l_2288,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2291,(void*)0,&l_2291,(void*)0,(void*)0,&l_2291,(void*)0},{(void*)0,(void*)0,&l_2288,&l_2288,(void*)0,(void*)0,(void*)0},{&l_2291,(void*)0,(void*)0,&l_2291,(void*)0,&l_2291,(void*)0},{(void*)0,(void*)0,(void*)0,&l_2288,&g_72[5][1][1],(void*)0,(void*)0}};
                int8_t l_2380 = 0x72L;
                int32_t l_2390 = (-5L);
                int i, j;
                for (g_115 = 0; (g_115 <= 1); g_115 += 1)
                { /* block id: 1011 */
                    int16_t *l_2315 = &g_404[1];
                    int32_t l_2316[10][3] = {{0L,(-8L),0x430D1D2DL},{0L,0L,(-8L)},{0xA0FAA347L,(-8L),(-8L)},{(-8L),0x6C1195B3L,0x430D1D2DL},{0xA0FAA347L,0x6C1195B3L,0xA0FAA347L},{0L,(-8L),0x430D1D2DL},{0L,0L,(-8L)},{0xA0FAA347L,(-8L),(-8L)},{(-8L),0x6C1195B3L,0x430D1D2DL},{0xA0FAA347L,0x6C1195B3L,0xA0FAA347L}};
                    uint8_t *l_2317 = (void*)0;
                    uint8_t *l_2318 = &g_424[0];
                    uint16_t ****l_2337[10][4][3] = {{{&g_792[1][0],&g_796[0][1],&g_796[3][2]},{&g_792[1][0],&g_792[1][0],&g_792[1][0]},{&g_796[0][1],&g_792[1][0],&g_792[1][0]},{&g_796[0][1],&g_792[1][0],&g_796[3][2]}},{{&g_796[0][1],&g_792[0][0],&g_796[0][1]},{&g_796[0][1],&g_792[1][0],&g_792[1][2]},{&g_796[0][1],&g_792[1][0],&g_796[0][1]},{&g_792[0][1],&g_792[1][0],&g_796[1][2]}},{{&g_796[0][1],&g_792[0][0],&g_796[0][1]},{&g_796[4][1],&g_792[1][0],&g_796[0][1]},{&g_792[1][0],&g_792[1][0],(void*)0},{&g_792[1][0],&g_792[1][0],&g_796[0][1]}},{{&g_796[4][1],&g_796[0][1],&g_792[1][0]},{&g_796[0][1],&g_796[0][1],&g_792[1][0]},{&g_792[0][1],&g_796[0][1],&g_796[0][1]},{&g_796[0][1],&g_796[0][1],&g_792[1][0]}},{{&g_796[0][1],&g_792[1][0],&g_792[1][0]},{&g_796[0][1],&g_796[1][2],&g_796[0][1]},{&g_796[0][1],&g_796[0][2],(void*)0},{&g_796[0][1],&g_796[0][2],&g_796[0][1]}},{{&g_792[1][0],&g_796[1][2],&g_796[0][1]},{&g_792[1][0],&g_792[1][0],&g_796[1][2]},{&g_796[0][1],&g_796[0][1],&g_796[0][1]},{&g_796[0][1],&g_796[0][1],&g_792[1][2]}},{{&g_796[0][1],&g_796[0][1],&g_796[0][1]},{&g_792[1][0],&g_796[0][1],&g_796[3][2]},{&g_792[1][0],&g_792[1][0],&g_792[1][0]},{&g_796[0][1],&g_792[1][0],&g_792[1][0]}},{{&g_796[0][1],&g_792[1][0],&g_796[3][2]},{&g_796[0][1],&g_792[0][0],&g_796[0][1]},{&g_796[0][1],&g_792[1][0],&g_792[1][2]},{&g_796[0][1],&g_792[1][0],&g_796[0][1]}},{{&g_792[0][1],&g_792[1][0],&g_796[1][2]},{&g_796[0][1],&g_792[0][0],&g_796[0][1]},{&g_796[4][1],&g_792[1][0],&g_796[0][1]},{&g_792[1][0],&g_792[1][0],(void*)0}},{{&g_792[1][0],&g_792[1][0],&g_796[0][1]},{&g_796[4][1],&g_796[0][1],&g_792[1][0]},{&g_796[0][1],&g_796[0][1],&g_792[1][0]},{&g_792[0][1],&g_796[0][1],&g_796[0][1]}}};
                    uint64_t l_2346 = 1UL;
                    int32_t ***l_2348[3];
                    int8_t *l_2395[10];
                    int64_t l_2412[5];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_2348[i] = &g_397;
                    for (i = 0; i < 10; i++)
                        l_2395[i] = &l_2380;
                    for (i = 0; i < 5; i++)
                        l_2412[i] = 9L;
                    /*bef_stmt:240079*/
/*bef_stmt:240079*/
/*bef_stmt:240079*/
/*bef_stmt:240079*/
/*bef_stmt:240079*/
/*bef_stmt:240079*/
/*bef_stmt:240079*/
/*bef_stmt:240079*/
/*bef_stmt:240079*/
(*g_2040) &= (((safe_sub_func_uint8_t_u_u(((*p_50) &= 0x39L), 0x2EL)) <= (((*l_2318) = (l_2273 = (((*l_2315) = (((safe_sub_func_int8_t_s_s(0x6BL, Tag464(/*int32_t:260859:262118:240079:e*/l_2273))) ^ (Tag465(/*int32_t:260859:262118:240079:e*/l_2273) & (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((*l_2287) |= (&g_344 != l_2311)), (safe_mul_func_uint16_t_u_u(((Tag466(/*uint64_t:262118:262118:240079:e*/p_52) || 1UL) && Tag467(/*int32_t:244366:260823:240079:e*/l_2314)), (-9L))))), (Tag468(/*int8_t:0:0:240079:e*/**g_715)))) | Tag469(/*int32_t:260859:262118:240079:e*/l_2273)), 2UL)))) >= /*TAG470:STA*/((int32_t)(realsmith_proxy_9leqZ((char)(l_2291)+(-134), (int)(g_1720[0])+(-10803))+(int)(l_2314)+(int)(l_2291)+(int)(p_52)+(int)(g_1720[0])+(int)(l_2288)-(-1437368472))+l_2314)/*TAG470:END:l_2314*/)) & Tag471(/*int32_t:244340:244366:240079:e*/l_2316[1][0])))) | 255UL)) , Tag472(/*uint32_t:262118:262118:240079:e*/p_51));
/*aft_stmt:240079*/
/*aft_stmt:240079*/
/*aft_stmt:240079*/
/*aft_stmt:240079*/
/*aft_stmt:240079*/
/*aft_stmt:240079*/
/*aft_stmt:240079*/
/*aft_stmt:240079*/
/*aft_stmt:240079*/
                    for (g_169 = 0; (g_169 <= 1); g_169 += 1)
                    { /* block id: 1020 */
                        uint64_t l_2344[9] = {18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL};
                        uint32_t **l_2347 = (void*)0;
                        uint64_t l_2357 = 3UL;
                        int32_t l_2371[2];
                        uint32_t *l_2372 = &g_1347[0];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2371[i] = 0xE15A3B1FL;
                        /*bef_stmt:240448*/
if (Tag473(/*uint32_t:262118:262118:240448:e*/p_51))
                            break;
/*aft_stmt:240448*/
                        /*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
/*bef_stmt:241390*/
l_2350 = (safe_mod_func_int8_t_s_s((0x702E1177E958190FLL <= (safe_mod_func_uint32_t_u_u((Tag474(/*uint32_t:0:0:241390:e*/*g_273)), ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((*g_716) ^= (((((((((safe_mul_func_uint16_t_u_u(65533UL, (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((Tag475(/*uint8_t:262118:262118:241390:e*/*p_50)), (0x500FL != /*TAG476:STA*/((uint8_t)(realsmith_proxy_E3S10((char)(*g_273)+(-38), (unsigned long)(*g_273)+(55))+(int)(g_280)+(int)(*g_273)+(int)(g_1720[0])-(11070))+g_280)/*TAG476:END:g_280*/))), (((safe_lshift_func_uint8_t_u_s(((((*g_1015) = l_2337[5][3][0]) == ((g_2345 = (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((*l_2318) = (((safe_sub_func_int16_t_s_s(0x2541L, /*TAG477:STA*/((uint64_t)(realsmith_proxy_oaaAB((char)(l_2344[1])+(-14), (int)(l_2344[1])+(44), (char)(l_2344[1])+(19), (int)(l_2344[1])+(69))+(int)(l_2344[1])-(2))+l_2344[1])/*TAG477:END:l_2344[1]*/)) == g_979[g_115]) > (Tag478(/*const int32_t:0:0:241390:e*/**g_1055)))), (/*TAG479:STA*/((uint8_t)(realsmith_proxy_ZYxV8((unsigned int)(g_1720[0])+(-10787), (char)(p_51)+(68), (unsigned int)(g_1720[0])+(-10766), (char)(*p_50)+(-2))+(int)(*p_50)+(int)(p_51)+(int)(*g_273)+(int)(g_1720[0])-(10824))+*p_50)/*TAG479:END:*p_50*/))), (Tag480(/*uint8_t:262118:262118:241390:e*/*p_50))))) , &g_792[1][0])) >= Tag481(/*uint64_t:244340:244366:241390:e*/l_2346)), 3)) <= /*TAG482:STA*/((int32_t)(realsmith_proxy_s4a7X((int)(p_52)+(51), (int)(l_2288)+(66), (int)(g_1720[0])+(-10760))+(int)(l_2288)+(int)(p_52)+(int)(g_1720[0])+(int)(p_51)-(10824))+l_2288)/*TAG482:END:l_2288*/) , 0L))))) , l_2347) != (void*)0) >= /*TAG483:STA*/((int32_t)(realsmith_proxy_ybKBJ((int)(g_72[2][0][3])+(-1985355848), (int)(g_72[2][0][3])+(-1985355943))+(int)(g_72[2][0][3])+(int)(g_1720[0])+(int)(*g_273)+(int)(g_280)-(1985366970))+g_72[2][0][3])/*TAG483:END:g_72[2][0][3]*/) , (*g_1053)) != l_2348[2]) , Tag484(/*uint64_t:262118:262118:241390:e*/p_52)) , (-3L)) > 0xDFL)), Tag485(/*int32_t:0:0:241390:e*/g_89))), /*TAG486:STA*/((int64_t)(realsmith_proxy_Ayh4D((int)(l_2349)+(-60115156), (int)(l_2349)+(-60115146))+(int)(l_2349)-(60115193))+l_2349)/*TAG486:END:l_2349*/)), (-1L))) && Tag487(/*int8_t:262118:262118:241390:e*/p_49))))), 6L));
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
/*aft_stmt:241390*/
                        /*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
/*bef_stmt:242073*/
(*g_2040) = ((safe_mod_func_uint16_t_u_u(/*TAG488:STA*/((int8_t)(realsmith_proxy_66R5J((int)(p_51)+(92), (int)(*p_50)+(-17), (int)(*p_50)+(23), (int)(*p_50)+(57))+(long)(p_49)+(long)(*p_50)+(long)(g_72[2][0][3])+(long)(*g_273)+(long)(p_51)-(1985355969))+p_49)/*TAG488:END:p_49*/, ((*l_2315) |= (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((*g_716) = Tag489(/*uint64_t:242114:244340:242073:e*/l_2357)) == (safe_mul_func_uint8_t_u_u(/*TAG490:STA*/((int32_t)(realsmith_auo97()+(int)(l_2314)-(-1437379363))+l_2314)/*TAG490:END:l_2314*/, (((*l_2287) = /*TAG491:STA*/((int8_t)(realsmith_proxy_cTrwi((int)(p_49)+(21))+(int)(p_49)+(int)(g_280)+(int)(g_72[2][0][3])+(int)(l_2349)+(int)(*g_273)-(2045471377))+p_49)/*TAG491:END:p_49*/) == ((((safe_mod_func_int32_t_s_s(((l_2273 = Tag492(/*int8_t:262118:262118:242073:e*/p_49)) || (((*l_2372) = (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((((*g_1015) = (*g_1015)) == l_2366), 9)) , (l_2371[1] = (l_2370[4][2] == l_2370[4][2]))), Tag493(/*int8_t:262118:262118:242073:e*/p_49)))) , Tag494(/*int32_t:260859:262118:242073:e*/l_2273))), Tag495(/*int8_t:262118:262118:242073:e*/p_49))) != Tag496(/*int16_t:0:0:242073:e*/g_1520[3][9])) , 1L) > /*TAG497:STA*/((uint32_t)(realsmith_vmaRr((long)(l_2288)+(58))+(int)(p_51)+(int)(g_1520[3][9])+(int)(p_49)+(int)(l_2288)+(int)(p_52)-(-31105))+p_51)/*TAG497:END:p_51*/))))), (Tag498(/*uint8_t:262118:262118:242073:e*/*p_50)))), Tag499(/*uint64_t:242114:244340:242073:e*/l_2344[1])))))) == /*TAG500:STA*/((int16_t)(realsmith_Bgo4W((int)(l_2350)+(11))+(int)(l_2350)-(2816))+l_2350)/*TAG500:END:l_2350*/);
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
/*aft_stmt:242073*/
                        (***l_2240) = &l_2291;
                    }
                    ++l_2383;
                    /*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
/*bef_stmt:244334*/
if ((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((((/*TAG501:STA*/((int32_t)(realsmith_O3erL(22, (int)(l_2390)+(19))-(0))+l_2390)/*TAG501:END:l_2390*/ , ((((l_2379[3] |= ((safe_mul_func_uint8_t_u_u(((((l_2287 != ((Tag502(/*uint8_t:262118:262118:244334:e*/*p_50)) , (***l_2366))) , /*TAG503:STA*/((uint64_t)(realsmith_9vGpK((unsigned long)(p_52)+(46))+(unsigned long)(p_52)-(40))+p_52)/*TAG503:END:p_52*/) ^ (((safe_rshift_func_int16_t_s_u((((/*TAG504:STA*/((uint64_t)(realsmith_proxy_IphPi((int)(p_52)+(78))+(int)(p_52)-(7))+p_52)/*TAG504:END:p_52*/ , (/*TAG505:STA*/((int8_t)(realsmith_KlPIt()+(int)(**g_715)-(14))+**g_715)/*TAG505:END:**g_715*/)) >= (((l_2378 = (/*TAG506:STA*/((int8_t)(realsmith_proxy_xk3e3((int)(*g_716)+(4), (int)(*g_716)+(5), (int)(*g_716)+(33), (int)(*g_716)+(41))+(int)(*g_716)-(5))+*g_716)/*TAG506:END:*g_716*/)) , Tag507(/*int32_t:262118:262118:244334:e*/l_2256)) | (/*TAG508:STA*/((int64_t)(realsmith_proxy_Ty0O1()+(char)(*g_394)-(90))+*g_394)/*TAG508:END:*g_394*/))) <= (Tag509(/*int8_t:0:0:244334:e*/*g_716))), 1)) ^ Tag510(/*uint32_t:262118:262118:244334:e*/p_51)) >= 1L)) ^ Tag511(/*int16_t:260823:260859:244334:e*/l_2396)), Tag512(/*int8_t:262118:262118:244334:e*/p_49))) >= 0x00B46F9F1111919BLL)) != Tag513(/*uint8_t:262118:262118:244334:e*/l_2397)) , (-1L)) , 0x77D98A9AL)) < 0x8A97D63FL) , Tag514(/*uint32_t:262118:262118:244334:e*/p_51)) || /*TAG515:STA*/((uint32_t)(realsmith_H3CDQ((int)(p_51)+(3))+(int)(p_51)-(3))+p_51)/*TAG515:END:p_51*/), 0x5217L)), (Tag516(/*uint8_t:262118:262118:244334:e*/*p_50)))))
                    { /* block id: 1040 */
                        (*g_2040) |= 6L;
                    }
                    else
                    { /* block id: 1042 */
                        int64_t *l_2411[4][2][7] = {{{&g_115,&l_2349,&g_115,&g_1219,&g_115,&g_115,&g_115},{&g_115,(void*)0,(void*)0,&g_115,&g_108,&g_115,(void*)0}},{{&g_1219,&g_1219,&g_115,&g_1219,&g_115,&g_1219,&g_1219},{(void*)0,(void*)0,&g_115,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_115,&g_1219,&g_115,&g_115,&g_1219,&g_1219,&g_1219},{&g_115,(void*)0,&g_108,&g_108,(void*)0,&g_115,(void*)0}},{{&g_115,&g_115,&g_1219,&g_1219,&g_1219,&g_1219,&g_1219},{(void*)0,(void*)0,&g_115,&g_108,&g_115,(void*)0,(void*)0}}};
                        int i, j, k;
                        /*bef_stmt:243820*/
g_2398 = Tag517(/*uint64_t:262118:262118:243820:e*/p_52);
/*aft_stmt:243820*/
                        /*bef_stmt:244322*/
/*bef_stmt:244322*/
/*bef_stmt:244322*/
/*bef_stmt:244322*/
/*bef_stmt:244322*/
/*bef_stmt:244322*/
/*bef_stmt:244322*/
/*bef_stmt:244322*/
/*bef_stmt:244322*/
l_2373 &= ((safe_rshift_func_uint16_t_u_s((Tag518(/*uint64_t:262118:262118:244322:e*/p_52) > (safe_add_func_uint32_t_u_u((!(safe_div_func_int8_t_s_s(((((*g_273) = (!(+0xE57B790EL))) && ((~(safe_rshift_func_int8_t_s_s((l_2411[0][0][4] != (Tag519(/*int8_t:0:0:244322:e*/g_542) , (void*)0)), (l_2412[1] |= (Tag520(/*int8_t:262118:262118:244322:e*/p_49) , Tag521(/*int32_t:262118:262118:244322:e*/l_2381[0][0][1])))))) | ((Tag522(/*uint16_t:0:0:244322:e*/g_114) || Tag523(/*const int64_t:0:0:244322:e*/g_248)) | Tag524(/*uint64_t:262118:262118:244322:e*/p_52)))) == Tag525(/*int16_t:260859:262118:244322:e*/l_2374[2])), Tag526(/*int8_t:262118:262118:244322:e*/p_49)))), 1L))), 10)) , 1L);
/*aft_stmt:244322*/
/*aft_stmt:244322*/
/*aft_stmt:244322*/
/*aft_stmt:244322*/
/*aft_stmt:244322*/
/*aft_stmt:244322*/
/*aft_stmt:244322*/
/*aft_stmt:244322*/
/*aft_stmt:244322*/
                    }
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
/*aft_stmt:244334*/
                }
            }
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
/*aft_stmt:244374*/
            ++l_2415;
            if ((l_2418 = 0xEA7EABB8L))
            { /* block id: 1052 */
                uint8_t ***l_2422 = (void*)0;
                uint8_t ****l_2421 = &l_2422;
                int32_t l_2461 = 0x8F96C68BL;
                int32_t *l_2487 = (void*)0;
                int64_t *****l_2500 = &g_344;
                int32_t l_2546 = 0L;
                int32_t l_2547[4][3][2] = {{{(-1L),0x6D5CC336L},{0x22BD1D17L,5L},{0x6D5CC336L,5L}},{{0x22BD1D17L,0x6D5CC336L},{(-1L),(-1L)},{(-1L),0x6D5CC336L}},{{0x22BD1D17L,5L},{0x6D5CC336L,5L},{0x22BD1D17L,0x6D5CC336L}},{{(-1L),(-1L)},{(-1L),0x6D5CC336L},{0x22BD1D17L,5L}}};
                uint64_t l_2549[8][1][1] = {{{5UL}},{{18446744073709551615UL}},{{5UL}},{{18446744073709551615UL}},{{5UL}},{{18446744073709551615UL}},{{5UL}},{{18446744073709551615UL}}};
                int32_t ****l_2554 = &g_1278;
                int32_t l_2566 = 0x0691BFD6L;
                int i, j, k;
                for (g_89 = 9; (g_89 >= 0); g_89 -= 1)
                { /* block id: 1055 */
                    for (g_1200 = 0; (g_1200 <= 9); g_1200 += 1)
                    { /* block id: 1058 */
                        int i;
                        return g_1938[g_1200];
                    }
                    (*g_2040) = 1L;
                }
                for (l_2378 = 0; (l_2378 <= 1); l_2378 += 1)
                { /* block id: 1065 */
                    int32_t l_2464 = 0xFFEC589AL;
                    int32_t l_2488 = 0x6E86D866L;
                    for (l_2256 = 0; (l_2256 <= 1); l_2256 += 1)
                    { /* block id: 1068 */
                        uint8_t ***l_2429[2];
                        int8_t *l_2433 = (void*)0;
                        int8_t *l_2434 = &l_2413[4];
                        int32_t l_2435 = 0L;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_2429[i] = (void*)0;
                        /*bef_stmt:247185*/
/*bef_stmt:247185*/
/*bef_stmt:247185*/
/*bef_stmt:247185*/
/*bef_stmt:247185*/
/*bef_stmt:247185*/
/*bef_stmt:247185*/
/*bef_stmt:247185*/
/*bef_stmt:247185*/
/*bef_stmt:247185*/
g_89 ^= ((((safe_lshift_func_int8_t_s_s((((void*)0 != l_2421) < (((*l_2287) = (((g_72[(l_2256 + 1)][l_2256][(l_2378 + 3)] , (safe_sub_func_uint64_t_u_u(((Tag527(/*uint64_t:0:0:247185:e*/g_1825) | (safe_sub_func_uint8_t_u_u(((g_72[l_2378][l_2256][l_2256] = Tag528(/*int32_t:260859:262118:247185:e*/l_2373)) , ((*p_50)--)), ((((l_2430 = &p_50) != (void*)0) , (p_49 = (Tag529(/*int8_t:0:0:247185:e*/*g_716)))) & ((*l_2434) = (safe_lshift_func_int16_t_s_s((Tag530(/*uint8_t:0:0:247185:e*/g_578[0][4][0]) | Tag531(/*uint64_t:262118:262118:247185:e*/p_52)), Tag532(/*uint64_t:262118:262118:247185:e*/p_52)))))))) ^ 1L), 1L))) <= Tag533(/*int32_t:247191:256045:247185:e*/l_2435)) != (Tag534(/*uint32_t:0:0:247185:e*/**g_272)))) >= (-1L))), Tag535(/*uint32_t:262118:262118:247185:e*/p_51))) & 0x4BL) , Tag536(/*int16_t:0:0:247185:e*/g_1520[3][9])) != 0xF9BEL);
/*aft_stmt:247185*/
/*aft_stmt:247185*/
/*aft_stmt:247185*/
/*aft_stmt:247185*/
/*aft_stmt:247185*/
/*aft_stmt:247185*/
/*aft_stmt:247185*/
/*aft_stmt:247185*/
/*aft_stmt:247185*/
/*aft_stmt:247185*/
                    }
                    (*g_2040) = (-1L);
                    for (l_2375 = 1; (l_2375 >= 0); l_2375 -= 1)
                    { /* block id: 1080 */
                        const int8_t l_2462 = 2L;
                        int8_t *l_2463 = &g_979[0];
                        const int16_t l_2465[2][8] = {{0xA766L,0x5B8CL,0xA766L,0x5B8CL,0xA766L,0x5B8CL,0xA766L,0x5B8CL},{0xA766L,0x5B8CL,0xA766L,0x5B8CL,0xA766L,0x5B8CL,0xA766L,0x5B8CL}};
                        int16_t *l_2497 = (void*)0;
                        int16_t *l_2498[8][6][5] = {{{&g_1017,&g_1017,&l_2414[2],&l_2374[6],&g_1017},{&l_2374[6],&g_1520[7][5],&l_2414[2],&g_1520[1][3],&g_1520[1][3]},{&l_2374[6],&l_2350,&l_2374[6],(void*)0,&g_1720[3]},{&l_2414[2],&g_1520[7][5],&l_2374[6],(void*)0,&l_2374[1]},{&l_2414[2],&g_1017,&g_1017,&l_2414[2],&l_2374[6]},{&l_2396,&g_1720[1],&l_2374[6],&l_2374[1],&g_1520[7][5]}},{{&g_404[1],&l_2350,&l_2374[6],&l_2350,&g_404[1]},{&g_1720[1],(void*)0,&l_2414[2],&l_2374[1],&g_404[2]},{&l_2414[6],&g_1720[2],&l_2414[2],&l_2414[2],&g_1720[2]},{&g_1520[1][3],&l_2374[6],&l_2396,(void*)0,&g_404[2]},{&l_2350,&l_2414[2],&g_404[1],(void*)0,&g_404[1]},{&g_404[2],&g_404[2],&g_1720[1],&g_1520[1][3],&g_1520[7][5]}},{{&l_2350,&g_1017,&l_2414[6],&l_2374[6],&l_2374[6]},{&g_1520[1][3],&g_1720[3],&g_1520[1][3],&g_1215,&l_2374[1]},{&l_2414[6],&g_1017,&l_2350,&g_1720[2],&g_1720[3]},{&g_1720[1],&g_404[2],&g_404[2],&g_1720[1],&g_1520[1][3]},{&g_404[1],&l_2414[2],&l_2350,&g_1720[3],&g_1017},{&l_2396,&l_2374[6],&g_1520[1][3],&l_2374[6],&l_2396}},{{&l_2414[2],&g_1720[2],&l_2414[6],&g_1720[3],&g_1017},{&l_2414[2],(void*)0,&g_1720[1],&g_1720[1],(void*)0},{&l_2374[6],&l_2350,&g_404[1],&g_1720[2],&g_1017},{&l_2374[6],&g_1720[1],&l_2396,&g_1215,&l_2396},{&g_1017,&g_1017,&l_2414[2],&l_2374[6],&g_1017},{&g_1720[3],&l_2396,&g_1520[1][3],(void*)0,(void*)0}},{{&g_1720[2],&g_1720[3],&g_1720[2],&l_2350,&g_1017},{&g_1520[1][3],&l_2396,&g_1720[3],&g_1720[1],&g_1520[7][5]},{&g_1017,(void*)0,(void*)0,&g_1017,&g_1720[2]},{&l_2414[2],&g_404[2],&g_1720[3],&g_1520[7][5],&l_2396},{&l_2414[6],&l_2350,&g_1720[2],&l_2350,&l_2414[6]},{&g_404[2],&g_1720[1],&g_1520[1][3],&g_1520[7][5],&g_1215}},{{&l_2374[6],&l_2414[2],&g_1017,&g_1017,&l_2414[2]},{(void*)0,&g_1720[3],&l_2414[2],&g_1720[1],&g_1215},{&l_2350,&g_1017,&l_2414[6],&l_2350,&l_2414[6]},{&g_1215,&g_1215,&g_404[2],(void*)0,&l_2396},{&l_2350,&g_404[1],&l_2374[6],&g_1720[2],&g_1720[2]},{(void*)0,&l_2374[1],(void*)0,&l_2374[6],&g_1520[7][5]}},{{&l_2374[6],&g_404[1],&l_2350,&l_2414[2],&g_1017},{&g_404[2],&g_1215,&g_1215,&g_404[2],(void*)0},{&l_2414[6],&g_1017,&l_2350,&g_1017,&g_404[1]},{&l_2414[2],&g_1720[3],(void*)0,&g_1720[3],&l_2414[2]},{&g_1017,&l_2414[2],&l_2374[6],&g_1017,(void*)0},{&g_1520[1][3],&g_1720[1],&g_404[2],&g_404[2],&g_1720[1]}},{{&g_1720[2],&l_2350,&l_2414[6],&l_2414[2],(void*)0},{&g_1720[3],&g_404[2],&l_2414[2],&l_2374[6],&l_2414[2]},{(void*)0,(void*)0,&g_1017,&g_1720[2],&g_404[1]},{&g_1720[3],&l_2396,&g_1520[1][3],(void*)0,(void*)0},{&g_1720[2],&g_1720[3],&g_1720[2],&l_2350,&g_1017},{&g_1520[1][3],&l_2396,&g_1720[3],&g_1720[1],&g_1520[7][5]}}};
                        uint64_t *l_2510 = &g_1200;
                        int8_t ***l_2513[2][5] = {{&g_715,&g_715,&g_715,&g_715,&g_715},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j, k;
                        /*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
/*bef_stmt:254774*/
g_72[(l_2375 + 1)][l_2378][(l_2375 + 3)] = (!(((((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((((((((*l_2463) = ((((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(65535UL, g_72[l_2375][l_2378][(l_2375 + 4)])) != (5UL <= (((safe_div_func_int8_t_s_s(((**g_715) = (safe_sub_func_uint8_t_u_u((g_72[(l_2378 + 1)][l_2375][(l_2375 + 5)] < (safe_lshift_func_int16_t_s_u(0L, 3))), g_72[(l_2378 + 4)][l_2375][(l_2375 + 5)]))), ((safe_lshift_func_int8_t_s_s(Tag537(/*uint8_t:0:0:254774:e*/g_424[1]), 3)) , ((safe_sub_func_int32_t_s_s((Tag538(/*const int32_t:0:0:254774:e*/**g_1055)), (safe_lshift_func_int8_t_s_u(Tag539(/*uint32_t:262118:262118:254774:e*/p_51), (Tag540(/*uint8_t:262118:262118:254774:e*/*p_50)))))) & Tag541(/*int32_t:260152:260823:254774:e*/l_2461))))) || Tag542(/*int32_t:260152:260823:254774:e*/l_2461)) != Tag543(/*uint16_t:0:0:254774:e*/g_495[3])))), Tag544(/*int16_t:260859:262118:254774:e*/l_2374[1]))) < Tag545(/*const int8_t:256025:256045:254774:e*/l_2462)) & 0xA6FBL) > Tag546(/*uint32_t:262118:262118:254774:e*/p_51))) >= Tag547(/*uint64_t:262118:262118:254774:e*/p_52)) || 0x060EL) , Tag548(/*int32_t:256045:260152:254774:e*/l_2464)) <= Tag549(/*const int16_t:256025:256045:254774:e*/l_2465[0][2])) >= Tag550(/*uint32_t:262118:262118:254774:e*/p_51)) || (Tag551(/*uint32_t:0:0:254774:e*/**g_272))), 4)), Tag552(/*int8_t:262118:262118:254774:e*/p_49))), Tag553(/*uint64_t:262118:262118:254774:e*/p_52))) != 1L) >= 1UL) || 1L) >= Tag554(/*uint32_t:262118:262118:254774:e*/p_51)));
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
/*aft_stmt:254774*/
                        /*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
/*bef_stmt:255562*/
l_2379[3] = (safe_div_func_int16_t_s_s(((((safe_div_func_int64_t_s_s(((safe_div_func_int64_t_s_s((((safe_div_func_uint32_t_u_u(((**g_272) = ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0L, (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((l_2373 = ((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(Tag555(/*int8_t:262118:262118:255562:e*/p_49), (((void*)0 != &g_1278) != (((!(l_2487 != &l_2464)) != (l_2488 ^= ((*l_2287) = Tag556(/*int32_t:260152:260823:255562:e*/l_2461)))) , (~(safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(Tag557(/*const int16_t:256025:256045:255562:e*/l_2465[1][6]), (Tag558(/*uint32_t:0:0:255562:e*/*g_273)))), 255UL)), Tag559(/*int16_t:260823:260859:255562:e*/l_2496)))))))) , 0x97L), 3)) || 0x3751L)), Tag560(/*int8_t:262118:262118:255562:e*/p_49))), Tag561(/*uint64_t:262118:262118:255562:e*/p_52))))), Tag562(/*int32_t:260152:260823:255562:e*/l_2461))) < 0x54L)), 4UL)) < Tag563(/*uint64_t:262118:262118:255562:e*/p_52)) || (Tag564(/*uint32_t:0:0:255562:e*/**g_272))), Tag565(/*int32_t:256045:260152:255562:e*/l_2464))) != Tag566(/*uint64_t:0:0:255562:e*/g_78)), Tag567(/*int8_t:260859:262118:255562:e*/l_2382))) , Tag568(/*uint32_t:262118:262118:255562:e*/p_51)) , l_2499) == l_2500), 0x615FL));
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
/*aft_stmt:255562*/
                        /*bef_stmt:256019*/
/*bef_stmt:256019*/
/*bef_stmt:256019*/
/*bef_stmt:256019*/
/*bef_stmt:256019*/
/*bef_stmt:256019*/
/*bef_stmt:256019*/
/*bef_stmt:256019*/
(*g_2040) ^= (((l_2488 = 0x4239L) || ((((((safe_mod_func_uint8_t_u_u((!(safe_add_func_int32_t_s_s(Tag569(/*const int16_t:256025:256045:256019:e*/l_2465[0][2]), ((((safe_div_func_int64_t_s_s(0L, (safe_lshift_func_uint16_t_u_u(65535UL, Tag570(/*uint32_t:262118:262118:256019:e*/p_51))))) , 18446744073709551615UL) , Tag571(/*uint64_t:262118:262118:256019:e*/p_52)) <= (&g_716 == (l_2514[1] = (((--(*l_2510)) < (0x2DD3FA25L < 0UL)) , &g_716))))))), Tag572(/*int16_t:260859:262118:256019:e*/l_2350))) , Tag573(/*uint32_t:262118:262118:256019:e*/p_51)) , Tag574(/*int8_t:262118:262118:256019:e*/p_49)) < Tag575(/*const uint32_t:0:0:256019:e*/g_153[6])) && 0xDCBB3C64L) || (Tag576(/*uint32_t:0:0:256019:e*/**g_272)))) < 0x0C0423AC88D01BA1LL);
/*aft_stmt:256019*/
/*aft_stmt:256019*/
/*aft_stmt:256019*/
/*aft_stmt:256019*/
/*aft_stmt:256019*/
/*aft_stmt:256019*/
/*aft_stmt:256019*/
/*aft_stmt:256019*/
                    }
                }
                for (l_2288 = 0; (l_2288 <= 1); l_2288 += 1)
                { /* block id: 1097 */
                    return l_2515;
                }
                for (g_89 = 0; (g_89 < 5); g_89 = safe_add_func_int8_t_s_s(g_89, 3))
                { /* block id: 1102 */
                    int16_t *l_2528 = &l_2414[2];
                    int8_t l_2529 = (-1L);
                    uint8_t **l_2542 = &l_2515;
                    int32_t l_2568 = (-1L);
                    int32_t l_2569 = 0xB0FEA9B3L;
                    int32_t l_2570 = (-7L);
                    int32_t l_2571 = 0xC6A1E28AL;
                    int32_t l_2572 = 0L;
                    int32_t l_2573 = (-9L);
                    int32_t l_2574 = 0x7D3C9431L;
                    int32_t l_2576[6][9] = {{0L,(-1L),(-1L),(-5L),0x71727574L,0xDCD15B84L,0xDCD15B84L,0x71727574L,(-5L)},{0L,0x71727574L,0L,(-5L),0xB1DD0539L,0x857B4A2EL,0xDCD15B84L,0xB1DD0539L,0x45B850C9L},{0L,0xB1DD0539L,0xEABFC5C2L,(-5L),(-1L),(-6L),0xDCD15B84L,(-1L),0x0D0BD520L},{0L,(-1L),(-1L),(-5L),0x71727574L,0xDCD15B84L,0xDCD15B84L,0x71727574L,(-5L)},{0L,0x71727574L,0L,(-5L),0xB1DD0539L,0x857B4A2EL,0xDCD15B84L,0xB1DD0539L,0x45B850C9L},{0L,0xB1DD0539L,0xEABFC5C2L,(-5L),(-1L),(-6L),0xDCD15B84L,(-1L),0x0D0BD520L}};
                    uint32_t l_2577 = 18446744073709551615UL;
                    int i, j;
                    /*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
/*bef_stmt:260123*/
if (((Tag577(/*uint32_t:262118:262118:260123:e*/p_51) , ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u(0x0DL, (safe_div_func_uint8_t_u_u(0x6EL, ((0x91L & (Tag578(/*uint8_t:262118:262118:260123:e*/*p_50))) ^ ((safe_mul_func_int16_t_s_s(((*l_2528) &= Tag579(/*uint64_t:262118:262118:260123:e*/p_52)), (--(*l_2287)))) ^ (safe_unary_minus_func_uint64_t_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_2515) = (((+(safe_lshift_func_int8_t_s_s((Tag580(/*int8_t:0:0:260123:e*/*g_716)), (((l_2542 = l_2430) != &l_2515) || 0x41DB001EL)))) <= Tag581(/*int8_t:260129:260152:260123:e*/l_2529)) <= Tag582(/*int32_t:260152:260823:260123:e*/l_2461))), (Tag583(/*int8_t:0:0:260123:e*/**g_715)))) < (Tag584(/*uint8_t:262118:262118:260123:e*/*p_50))), Tag585(/*int8_t:260129:260152:260123:e*/l_2529))) | Tag586(/*uint64_t:262118:262118:260123:e*/p_52)), Tag587(/*uint64_t:262118:262118:260123:e*/p_52))))))))))) < Tag588(/*int32_t:260152:260823:260123:e*/l_2461)) , (Tag589(/*int8_t:0:0:260123:e*/**g_715))) < 0x65L), 0)), Tag590(/*int32_t:260859:262118:260123:e*/l_2376))) ^ Tag591(/*int16_t:260859:262118:260123:e*/l_2374[6]))) != Tag592(/*int8_t:262118:262118:260123:e*/p_49)))
                    { /* block id: 1107 */
                        uint8_t *l_2543[5][4][1] = {{{&g_424[5]},{&g_424[5]},{&g_330},{&g_330}},{{&g_330},{&g_424[5]},{&g_330},{(void*)0}},{{(void*)0},{&g_330},{&g_424[5]},{&g_330}},{{&g_330},{&g_330},{&g_424[5]},{&g_330}},{{(void*)0},{(void*)0},{&g_330},{&g_424[5]}}};
                        int i, j, k;
                        return l_2543[3][3][0];
                    }
                    else
                    { /* block id: 1109 */
                        int32_t l_2544 = 0x4FD8FAC6L;
                        int32_t l_2545 = (-6L);
                        int32_t l_2548 = 0x4AF3C820L;
                        int32_t *****l_2555 = (void*)0;
                        int32_t *****l_2556 = &l_2554;
                        uint64_t l_2567 = 0UL;
                        int32_t l_2575[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2575[i] = 0x1A94851BL;
                        --l_2549[0][0][0];
                        /*bef_stmt:260096*/
/*bef_stmt:260096*/
/*bef_stmt:260096*/
/*bef_stmt:260096*/
/*bef_stmt:260096*/
/*bef_stmt:260096*/
/*bef_stmt:260096*/
l_2377[3] ^= (safe_mul_func_uint8_t_u_u(((((&g_1278 == ((*l_2556) = l_2554)) && (safe_mod_func_int16_t_s_s(((l_2567 = (((l_2547[2][1][1] = ((*l_2528) = (safe_lshift_func_int16_t_s_u((Tag593(/*uint8_t:0:0:260096:e*/g_578[0][0][1]) , ((Tag594(/*int32_t:260109:260129:260096:e*/l_2544) ^ (1L <= ((safe_add_func_int16_t_s_s(1L, (((**l_2556) = l_2563) == l_2564))) ^ (((*p_50) = (l_2548 = (Tag595(/*uint8_t:262118:262118:260096:e*/*p_50)))) & Tag596(/*int32_t:260152:260823:260096:e*/l_2566))))) == 9UL)), 3)))) < 0x46C8L) <= 0x3D07L)) > Tag597(/*int8_t:262118:262118:260096:e*/p_49)), Tag598(/*int16_t:260859:262118:260096:e*/l_2374[8])))) , 1UL) == Tag599(/*int8_t:262118:262118:260096:e*/p_49)), 255UL));
/*aft_stmt:260096*/
/*aft_stmt:260096*/
/*aft_stmt:260096*/
/*aft_stmt:260096*/
/*aft_stmt:260096*/
/*aft_stmt:260096*/
/*aft_stmt:260096*/
                        l_2577++;
                    }
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
/*aft_stmt:260123*/
                }
            }
            else
            { /* block id: 1122 */
                const int32_t **l_2580 = (void*)0;
                const int32_t **l_2581 = (void*)0;
                const int32_t **l_2582[2][3][3] = {{{&g_1056,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056}},{{&g_1056,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056},{&g_1056,&g_1056,&g_1056}}};
                const int32_t **l_2583 = &g_1056;
                int i, j, k;
                (*l_2583) = (*g_1055);
            }
        }
        return p_50;
    }
    else
    { /* block id: 1127 */
        int8_t l_2593 = 0xC4L;
        int32_t l_2595[5];
        int i;
        for (i = 0; i < 5; i++)
            l_2595[i] = 0xF7DCB865L;
lbl_2601:
        for (g_169 = 0; (g_169 < 24); ++g_169)
        { /* block id: 1130 */
            uint8_t *l_2588 = &l_2415;
            int32_t l_2594 = 0xEAB52121L;
            /*bef_stmt:261138*/
(*g_2040) = Tag600(/*uint32_t:262118:262118:261138:e*/p_51);
/*aft_stmt:261138*/
            for (g_280 = 0; (g_280 <= 1); g_280 += 1)
            { /* block id: 1134 */
                /*bef_stmt:261461*/
/*bef_stmt:261461*/
/*bef_stmt:261461*/
/*bef_stmt:261461*/
/*bef_stmt:261461*/
/*bef_stmt:261461*/
/*bef_stmt:261461*/
(*g_2040) = (((safe_sub_func_uint64_t_u_u((l_2588 != (Tag601(/*uint64_t:262118:262118:261461:e*/p_52) , &l_2397)), (safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((Tag602(/*int8_t:262041:262118:261461:e*/l_2593) == Tag603(/*int8_t:262118:262118:261461:e*/p_49)), Tag604(/*int8_t:262041:262118:261461:e*/l_2593))), 3)))) == (((*g_1015) == ((Tag605(/*uint32_t:0:0:261461:e*/*g_273)) , (void*)0)) == Tag606(/*int8_t:262118:262118:261461:e*/p_49))) > Tag607(/*int32_t:261521:262041:261461:e*/l_2594));
/*aft_stmt:261461*/
/*aft_stmt:261461*/
/*aft_stmt:261461*/
/*aft_stmt:261461*/
/*aft_stmt:261461*/
/*aft_stmt:261461*/
/*aft_stmt:261461*/
            }
            /*bef_stmt:261515*/
/*bef_stmt:261515*/
l_2595[1] ^= (Tag608(/*int8_t:262118:262118:261515:e*/p_49) <= Tag609(/*int32_t:261521:262041:261515:e*/l_2594));
/*aft_stmt:261515*/
/*aft_stmt:261515*/
        }
        for (g_114 = 25; (g_114 != 36); ++g_114)
        { /* block id: 1141 */
            uint8_t *l_2608 = &l_2397;
            for (g_186 = 0; (g_186 != 36); ++g_186)
            { /* block id: 1144 */
                const int32_t **l_2600 = &g_1056;
                (*l_2600) = (***g_1053);
                /*bef_stmt:261746*/
if (Tag610(/*uint64_t:0:0:261746:e*/g_1825))
                    goto lbl_2601;
/*aft_stmt:261746*/
                for (g_1825 = 0; (g_1825 <= 59); ++g_1825)
                { /* block id: 1149 */
                    int32_t *l_2605 = &l_2595[1];
                    /*bef_stmt:261841*/
if (Tag611(/*int8_t:0:0:261841:e*/g_542))
                        goto lbl_2604;
/*aft_stmt:261841*/
                    (***l_2240) = l_2605;
                }
                /*bef_stmt:261902*/
if (Tag612(/*int8_t:262118:262118:261902:e*/p_49))
                    break;
/*aft_stmt:261902*/
            }
            /*bef_stmt:261928*/
if (Tag613(/*uint64_t:262118:262118:261928:e*/p_52))
                continue;
/*aft_stmt:261928*/
            for (g_280 = 28; (g_280 < 60); g_280++)
            { /* block id: 1158 */
                return p_50;
            }
        }
        (*g_397) = (void*)0;
    }
/*aft_stmt:262050*/
    (**g_396) = (***l_2240);
    return p_50;
}


/* ------------------------------------------ */
/* 
 * reads : g_272 g_273 g_2040 g_72 g_1720 g_397 g_398 g_169 g_330 g_418 g_716 g_542 g_111 g_1520 g_404 g_396 g_715
 * writes: g_111 g_418 g_1501 g_361 g_169 g_1720 g_542 g_398
 */
static uint8_t * func_53(uint8_t * p_54, uint8_t * p_55, uint32_t  p_56, int32_t  p_57, uint64_t  p_58)
{ /* block id: 904 */
    const int8_t *l_2094[4];
    const int8_t **l_2093[7] = {&l_2094[3],&l_2094[3],&l_2094[3],&l_2094[3],&l_2094[3],&l_2094[3],&l_2094[3]};
    const int8_t ***l_2092 = &l_2093[0];
    int32_t l_2096[3];
    int32_t ****l_2105 = (void*)0;
    int32_t ** const *l_2107 = &g_397;
    int32_t ** const **l_2106 = &l_2107;
    int32_t l_2108 = (-7L);
    int32_t l_2121 = 1L;
    int64_t l_2203[10][8][3] = {{{0xB39D824895FAA529LL,(-7L),1L},{0xE043A03D0DB11AFFLL,1L,0L},{0x7DFEE739E439525DLL,(-1L),9L},{(-1L),3L,(-6L)},{0xF8FEFD8503AB079DLL,(-1L),0x51A8B65B0EA6A6D6LL},{0xE4A92B6815200218LL,(-10L),0xB39D824895FAA529LL},{(-2L),0xB6B363A11813249CLL,0xB39D824895FAA529LL},{9L,(-8L),0x51A8B65B0EA6A6D6LL}},{{0x8FD61D09B009B6AALL,(-1L),(-6L)},{0L,0x6BC4491951F5C195LL,9L},{0xA794073FD4E88C07LL,0xA766C30F3A758F22LL,0L},{0x1E578A1C86B5D656LL,(-5L),1L},{0xC04CCCCE01F24F59LL,0x93B8D9C2562F3E0DLL,5L},{0xFA09FEAB3C3A4B6CLL,(-5L),0x0010730065233D0DLL},{0x9ED879414002FEA1LL,0xA766C30F3A758F22LL,0x0118915505425F9CLL},{(-1L),0x6BC4491951F5C195LL,0xF8FEFD8503AB079DLL}},{{0L,(-1L),(-2L)},{1L,(-8L),0xFA09FEAB3C3A4B6CLL},{0xE71BB082C82DDF2ALL,0xB6B363A11813249CLL,0L},{0xE71BB082C82DDF2ALL,(-10L),0L},{1L,(-1L),0xE4A92B6815200218LL},{0L,3L,0x9002E126027C7009LL},{(-1L),(-1L),(-8L)},{0x9ED879414002FEA1LL,1L,0x1E578A1C86B5D656LL}},{{0xFA09FEAB3C3A4B6CLL,(-7L),(-1L)},{0xC04CCCCE01F24F59LL,(-2L),0x1E578A1C86B5D656LL},{0x1E578A1C86B5D656LL,8L,(-8L)},{0xA794073FD4E88C07LL,0xC8B75DDAC177F83FLL,0x9002E126027C7009LL},{0L,0x2501AE1AEE536E7ALL,0xE4A92B6815200218LL},{0x8FD61D09B009B6AALL,1L,0L},{9L,0x0DE6286202BEAA59LL,0L},{(-2L),0x0DE6286202BEAA59LL,0xFA09FEAB3C3A4B6CLL}},{{0xE4A92B6815200218LL,1L,(-2L)},{0xF8FEFD8503AB079DLL,0x2501AE1AEE536E7ALL,0xF8FEFD8503AB079DLL},{(-1L),0xC8B75DDAC177F83FLL,0x0118915505425F9CLL},{0x7DFEE739E439525DLL,8L,0x0010730065233D0DLL},{0xE043A03D0DB11AFFLL,(-2L),5L},{0xB39D824895FAA529LL,(-7L),1L},{0xE043A03D0DB11AFFLL,1L,0L},{0x7DFEE739E439525DLL,(-1L),9L}},{{(-1L),3L,(-6L)},{0xF8FEFD8503AB079DLL,(-1L),0x51A8B65B0EA6A6D6LL},{0xE4A92B6815200218LL,(-10L),0xB39D824895FAA529LL},{(-2L),0xB6B363A11813249CLL,0xB39D824895FAA529LL},{9L,(-8L),0x51A8B65B0EA6A6D6LL},{0x8FD61D09B009B6AALL,(-1L),(-6L)},{0L,0x6BC4491951F5C195LL,9L},{0xA794073FD4E88C07LL,0xA766C30F3A758F22LL,0L}},{{0x1E578A1C86B5D656LL,(-5L),1L},{0x3E4CBA920AB739B1LL,0x9002E126027C7009LL,1L},{0x55F14DA060FE0B6DLL,0x0010730065233D0DLL,(-9L)},{0L,0xC9ED437DC66FBD9DLL,0L},{(-1L),0x8FD61D09B009B6AALL,0xED831818D515D44FLL},{0xF745120AB4FF8B65LL,0L,0xABB5865601A300FELL},{0x8E3AE24E64488688LL,(-6L),0x55F14DA060FE0B6DLL},{0x3599400832F87C92LL,(-1L),7L}},{{0x3599400832F87C92LL,1L,0xF745120AB4FF8B65LL},{0x8E3AE24E64488688LL,0L,0xFCBFA594D5C836E4LL},{0xF745120AB4FF8B65LL,0xE4A92B6815200218LL,(-1L)},{(-1L),0L,0xAC965D477E2DFD9FLL},{0L,0xE71BB082C82DDF2ALL,0x06543A8D810EE258LL},{0x55F14DA060FE0B6DLL,1L,1L},{0x3E4CBA920AB739B1LL,0x51A8B65B0EA6A6D6LL,0x06543A8D810EE258LL},{0x06543A8D810EE258LL,0x72127ADA49BAFB89LL,0xAC965D477E2DFD9FLL}},{{0xD70ACD01A97E149BLL,0xFA09FEAB3C3A4B6CLL,(-1L)},{(-7L),(-6L),0xFCBFA594D5C836E4LL},{(-1L),0x9ED879414002FEA1LL,0xF745120AB4FF8B65LL},{(-7L),(-1L),7L},{0xABB5865601A300FELL,(-1L),0x55F14DA060FE0B6DLL},{0xFCBFA594D5C836E4LL,0x9ED879414002FEA1LL,0xABB5865601A300FELL},{0xED831818D515D44FLL,(-6L),0xED831818D515D44FLL},{1L,0xFA09FEAB3C3A4B6CLL,0L}},{{0L,0x72127ADA49BAFB89LL,(-9L)},{0x29C465457F24E96ELL,0x51A8B65B0EA6A6D6LL,1L},{0x42E1264E8A3A3C90LL,1L,0x8E3AE24E64488688LL},{0x29C465457F24E96ELL,0xE71BB082C82DDF2ALL,0x4691B1E478136199LL},{0L,0L,(-7L)},{1L,0xE4A92B6815200218LL,0x0DF69B473113D899LL},{0xED831818D515D44FLL,0L,0xCC3FFA8F820FE8DFLL},{0xFCBFA594D5C836E4LL,1L,0x42E1264E8A3A3C90LL}}};
    int32_t ****l_2232 = &g_396;
    int32_t l_2233 = 0x1B8CFE62L;
    uint32_t l_2235[3][1];
    uint8_t *l_2238 = &g_330;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2094[i] = &g_979[0];
    for (i = 0; i < 3; i++)
        l_2096[i] = 0x3D33F674L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2235[i][j] = 0xC626AF92L;
    }
    /*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
/*bef_stmt:277155*/
if ((((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(9L, (safe_mul_func_uint16_t_u_u(((l_2092 == &l_2093[0]) , (!/*TAG614:STA*/((int32_t)(realsmith_baSr3((int)(g_1825)+(95))+(int)(l_2096[2])+(int)(g_1825)+(int)(g_542)-(1026815596))+l_2096[2])/*TAG614:END:l_2096[2]*/)), ((safe_rshift_func_uint16_t_u_s(((Tag615(/*int32_t:277229:277229:277155:e*/l_2096[2]) <= (((safe_div_func_int8_t_s_s(((((/*TAG616:STA*/((int32_t)(realsmith_Iunbu((int)(l_2096[1])+(-1026815526))+(int)(l_2096[1])+(int)(g_542)+(int)(l_2096[2])+(int)(g_1825)-(2053631201))+l_2096[1])/*TAG616:END:l_2096[1]*/ | 0xA3626BC892394D18LL) | ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((((**g_272) = ((l_2105 = &g_396) != l_2106)) > 0x11BDAEC1L) != (/*TAG617:STA*/((int32_t)(realsmith_proxy_p4vsb((int)(g_1825)+(94), (int)(g_542)+(19), (int)(g_1825)+(-23), (int)(g_542)+(62))+(int)(*g_2040)+(int)(g_542)+(int)(g_1825)-(-6))+*g_2040)/*TAG617:END:*g_2040*/)) ^ /*TAG618:STA*/((int32_t)(realsmith_aWTkW((unsigned int)(p_57)+(-2298443375))+(int)(p_57)+(int)(*g_2040)+(int)(l_2096[2])+(int)(g_542)+(int)(g_1825)-(-969708319))+p_57)/*TAG618:END:p_57*/), Tag619(/*int16_t:0:0:277155:e*/g_1720[3]))), (Tag620(/*int32_t:277229:277229:277155:e*/***l_2107)))) == 0x6CL)) , (/*TAG621:STA*/((int32_t)(realsmith_proxy_AiPS0((int)(*g_2040)+(-61))+(int)(***l_2107)+(int)(*g_2040)+(int)(l_2096[1])+(int)(g_1720[3])+(int)(p_57)-(-969697505))+***l_2107)/*TAG621:END:***l_2107*/)) | (/*TAG622:STA*/((uint8_t)(realsmith_proxy_JaeET((int)(*p_55)+(20))+(int)(*p_55)-(30))+*p_55)/*TAG622:END:*p_55*/)), (Tag623(/*int32_t:277229:277229:277155:e*/***l_2107)))) != (Tag624(/*int32_t:277229:277229:277155:e*/****l_2106))) == (Tag625(/*int32_t:277229:277229:277155:e*/****l_2106)))) != 0x3CL), Tag626(/*int16_t:0:0:277155:e*/g_1720[4]))) <= (/*TAG627:STA*/((int32_t)(realsmith_Yf2s8((long)(****l_2106)+(83), (long)(****l_2106)+(9), (long)(****l_2106)+(33))+(long)(****l_2106)-(66))+****l_2106)/*TAG627:END:****l_2106*/)))))), Tag628(/*int32_t:277229:277229:277155:e*/l_2108))) && (-1L)) | Tag629(/*uint64_t:277229:277229:277155:e*/p_58)))
    { /* block id: 907 */
        int32_t l_2126[4];
        int32_t *l_2131 = &l_2121;
        int32_t l_2133 = 0xBA809714L;
        int32_t l_2158[8][10][1] = {{{0x5B86FC02L},{6L},{9L},{(-1L)},{(-4L)},{0x2A1AAA08L},{0x5B86FC02L},{0x2A1AAA08L},{(-4L)},{(-1L)}},{{9L},{6L},{0x5B86FC02L},{(-1L)},{0xE85AD018L},{(-1L)},{0xE85AD018L},{(-1L)},{0x5B86FC02L},{6L}},{{9L},{(-1L)},{(-4L)},{0x2A1AAA08L},{0x5B86FC02L},{0x2A1AAA08L},{(-4L)},{(-1L)},{9L},{6L}},{{0x5B86FC02L},{(-1L)},{0xE85AD018L},{(-1L)},{0xE85AD018L},{(-1L)},{0x5B86FC02L},{6L},{9L},{(-1L)}},{{(-4L)},{0x2A1AAA08L},{0x5B86FC02L},{0x2A1AAA08L},{(-4L)},{(-1L)},{9L},{6L},{0x5B86FC02L},{(-1L)}},{{0xE85AD018L},{(-1L)},{0xE85AD018L},{(-1L)},{0x5B86FC02L},{6L},{9L},{(-1L)},{(-4L)},{0x2A1AAA08L}},{{0x5B86FC02L},{0x2A1AAA08L},{(-4L)},{(-1L)},{9L},{6L},{0x5B86FC02L},{(-1L)},{0xE85AD018L},{(-1L)}},{{0xE85AD018L},{(-1L)},{0x5B86FC02L},{6L},{9L},{(-1L)},{(-4L)},{0x2A1AAA08L},{0x5B86FC02L},{0x2A1AAA08L}}};
        uint32_t l_2184 = 1UL;
        uint32_t l_2185 = 4UL;
        uint32_t l_2205 = 0x0A2C743FL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2126[i] = 0xC1B2880EL;
        for (g_418 = (-27); (g_418 == 58); g_418 = safe_add_func_uint64_t_u_u(g_418, 9))
        { /* block id: 910 */
            uint32_t l_2129 = 6UL;
            int32_t *l_2130[4][2][10] = {{{&g_169,(void*)0,&g_72[1][1][4],&l_2096[0],&g_89,&g_169,&g_72[3][0][0],&g_72[1][1][4],&g_89,&g_89},{&g_169,&g_72[3][0][0],&g_72[1][1][4],&g_89,&g_89,&g_72[1][1][4],&g_72[3][0][0],&g_169,&g_169,&g_72[1][1][4]}},{{&l_2096[2],&g_72[5][1][1],&g_72[5][0][2],&g_72[1][1][4],&g_169,&l_2096[2],(void*)0,&g_72[5][0][2],&g_169,&g_169},{&l_2096[2],(void*)0,&g_72[5][0][2],&g_169,&g_169,&g_72[5][0][2],(void*)0,&l_2096[2],&g_169,&g_72[1][1][4]}},{{&l_2096[2],&g_72[5][1][1],&g_72[5][0][2],&g_72[1][1][4],&g_169,&l_2096[2],(void*)0,&g_72[5][0][2],&g_169,&g_169},{&l_2096[2],(void*)0,&g_72[5][0][2],&g_169,&g_169,&g_72[5][0][2],(void*)0,&l_2096[2],&g_169,&g_72[1][1][4]}},{{&l_2096[2],&g_72[5][1][1],&g_72[5][0][2],&g_72[1][1][4],&g_169,&l_2096[2],(void*)0,&g_72[5][0][2],&g_169,&g_169},{&l_2096[2],(void*)0,&g_72[5][0][2],&g_169,&g_169,&g_72[5][0][2],(void*)0,&l_2096[2],&g_169,&g_72[1][1][4]}}};
            uint32_t l_2135 = 6UL;
            int32_t l_2172 = 0xDD4A1996L;
            int64_t *l_2176 = (void*)0;
            int32_t ***l_2186 = &g_397;
            int i, j, k;
            for (p_58 = 0; (p_58 <= 3); p_58 += 1)
            { /* block id: 913 */
                int16_t l_2112 = 0xC030L;
                uint16_t *l_2117[9][4] = {{&g_495[1],&g_114,&g_495[3],&g_919},{&g_919,&g_114,&g_919,&g_919},{&g_114,&g_114,&g_114,&g_114},{&g_495[0],&g_919,&g_114,&g_495[1]},{&g_495[3],&g_495[0],&g_114,&g_919},{&g_919,&g_495[3],&g_114,&g_919},{&g_495[3],&g_114,&g_114,&g_495[3]},{&g_495[0],&g_919,&g_114,(void*)0},{&g_114,(void*)0,&g_919,&g_495[3]}};
                int32_t l_2118 = 0xB130E85CL;
                int64_t *** const l_2128 = &g_393;
                int32_t l_2157 = 0xC92653E4L;
                int32_t l_2162 = 1L;
                int64_t *l_2178 = &g_108;
                int i, j;
            }
            /*bef_stmt:275455*/
if (Tag630(/*int32_t:277229:277229:275455:e*/p_57))
                continue;
/*aft_stmt:275455*/
            l_2205--;
        }
    }
    else
    { /* block id: 967 */
        int32_t **l_2210 = &g_1501;
        int16_t *l_2221 = &g_361;
        int64_t l_2230[9];
        int32_t l_2231 = 0x564603E7L;
        int16_t *l_2234 = &g_1720[1];
        const uint8_t *l_2237 = (void*)0;
        const uint8_t **l_2236 = &l_2237;
        int i;
        for (i = 0; i < 9; i++)
            l_2230[i] = 0L;
        /*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
/*bef_stmt:277127*/
if (((safe_mod_func_int8_t_s_s((&p_57 != ((*l_2210) = (void*)0)), 0x63L)) && (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((((*g_716) = (((*l_2234) = (safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((((((*l_2221) = Tag631(/*uint32_t:277229:277229:277127:e*/p_56)) == (((safe_lshift_func_uint8_t_u_s((((((safe_mul_func_int16_t_s_s(0xF0ADL, Tag632(/*uint64_t:277229:277229:277127:e*/p_58))) == (((l_2231 ^= (((**g_272) &= ((Tag633(/*int8_t:0:0:277127:e*/*g_716)) > ((((Tag634(/*uint8_t:277229:277229:277127:e*/*p_55)) & (safe_mod_func_int32_t_s_s(((((safe_add_func_int64_t_s_s(((((**g_397) &= 0L) == Tag635(/*int64_t:277142:277229:277127:e*/l_2230[6])) && Tag636(/*uint32_t:277229:277229:277127:e*/p_56)), Tag637(/*uint64_t:277229:277229:277127:e*/p_58))) , Tag638(/*uint64_t:277229:277229:277127:e*/p_58)) & Tag639(/*int64_t:277142:277229:277127:e*/l_2230[3])) ^ Tag640(/*int64_t:277142:277229:277127:e*/l_2230[1])), Tag641(/*uint32_t:277229:277229:277127:e*/p_56)))) | 9L) , (Tag642(/*uint8_t:277229:277229:277127:e*/*p_55))))) , Tag643(/*int16_t:0:0:277127:e*/g_1520[3][9]))) , Tag644(/*int16_t:0:0:277127:e*/g_404[0])) , (Tag645(/*int32_t:277229:277229:277127:e*/***l_2107)))) < 4UL) , (void*)0) == l_2232), 5)) != 0x11L) , (Tag646(/*int32_t:277229:277229:277127:e*/****l_2105)))) < Tag647(/*int32_t:277229:277229:277127:e*/l_2233)) == Tag648(/*uint32_t:277229:277229:277127:e*/p_56)) | Tag649(/*int64_t:277142:277229:277127:e*/l_2230[6])), Tag650(/*int64_t:277142:277229:277127:e*/l_2230[6]))) || 0L), Tag651(/*int64_t:277142:277229:277127:e*/l_2230[6]))), 0x6BD7621FL))) , (Tag652(/*int8_t:0:0:277127:e*/**g_715)))) < Tag653(/*int32_t:277229:277229:277127:e*/p_57)) , Tag654(/*int32_t:277229:277229:277127:e*/p_57)) , Tag655(/*uint32_t:277229:277229:277127:e*/p_56)), Tag656(/*uint32_t:277229:277229:277127:e*/l_2235[0][0]))), 6))))
        { /* block id: 975 */
            (***l_2105) = &l_2231;
        }
        else
        { /* block id: 977 */
            /*bef_stmt:277120*/
(****l_2106) = ((&p_55 == l_2236) != Tag657(/*int64_t:277142:277229:277120:e*/l_2230[2]));
/*aft_stmt:277120*/
        }
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
/*aft_stmt:277127*/
        return l_2238;
    }
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
/*aft_stmt:277155*/
    (***l_2105) = (***l_2106);
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint8_t * func_59(uint8_t * const  p_60, uint8_t * p_61, int32_t  p_62, uint8_t * p_63)
{ /* block id: 120 */
    uint32_t l_340 = 4294967290UL;
    int32_t l_349[9] = {0x31395899L,0x31395899L,0x5CA595E6L,0x31395899L,0x31395899L,0x5CA595E6L,0x31395899L,0x31395899L,0x5CA595E6L};
    int32_t l_350 = 0L;
    int64_t *l_364[8][10] = {{(void*)0,(void*)0,&g_115,(void*)0,(void*)0,&g_115,(void*)0,(void*)0,&g_115,(void*)0},{(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108,(void*)0},{&g_108,(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108},{(void*)0,(void*)0,&g_115,(void*)0,(void*)0,&g_115,(void*)0,(void*)0,&g_115,(void*)0},{(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108,(void*)0},{&g_108,(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108},{(void*)0,(void*)0,&g_115,(void*)0,(void*)0,&g_115,(void*)0,(void*)0,&g_115,(void*)0},{(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108,(void*)0,&g_108,&g_108,(void*)0}};
    int64_t *l_365 = &g_115;
    int32_t l_370 = 0xF7745F72L;
    int64_t **l_372[2];
    int64_t *** const *l_389[6][7] = {{&g_363,&g_345[2],&g_363,&g_363,&g_363,&g_363,&g_345[3]},{&g_363,&g_345[3],&g_345[2],&g_345[2],&g_345[3],&g_363,&g_345[3]},{&g_363,&g_363,&g_363,&g_363,&g_345[3],&g_363,&g_363},{&g_345[3],&g_345[3],&g_363,&g_345[2],&g_363,&g_345[3],&g_345[3]},{&g_345[3],&g_363,&g_345[2],&g_363,&g_345[3],&g_345[3],&g_363},{&g_363,&g_345[3],&g_363,&g_363,&g_363,&g_363,&g_345[3]}};
    int64_t *l_395 = (void*)0;
    uint32_t l_399 = 1UL;
    uint32_t l_420 = 0xE24AB9EEL;
    int32_t l_504 = 0x6114BF56L;
    int32_t l_505 = 0x1DEDEB45L;
    uint8_t *l_509 = &g_424[1];
    uint8_t * const **l_510[1];
    const uint32_t l_592 = 0x0CD80623L;
    uint32_t **l_597 = (void*)0;
    int32_t l_620 = (-1L);
    int32_t l_621 = 0x20AB1FE2L;
    int32_t l_622 = 0L;
    int32_t l_623[3][1][1];
    int32_t l_672 = (-5L);
    int16_t *l_674 = &g_361;
    int64_t *****l_732[10] = {(void*)0,&g_344,&g_344,&g_344,&g_344,(void*)0,&g_344,&g_344,&g_344,&g_344};
    uint32_t l_741 = 0x29465141L;
    int8_t **l_821 = (void*)0;
    uint32_t l_855 = 4294967295UL;
    int16_t l_963[7] = {0xBD8CL,0xBD8CL,0xBD8CL,0xBD8CL,0xBD8CL,0xBD8CL,0xBD8CL};
    int32_t ****l_972 = (void*)0;
    uint32_t l_975 = 0x0DAD47C1L;
    uint16_t *l_978 = &g_919;
    uint32_t l_980 = 6UL;
    const uint32_t l_981 = 0x3DDB5382L;
    int32_t *l_982[9][5] = {{&g_72[5][1][1],&g_72[3][1][3],&g_72[3][1][3],&g_72[5][1][1],&l_370},{(void*)0,&g_72[5][1][1],&l_505,&l_622,(void*)0},{(void*)0,&l_505,&l_370,&l_505,(void*)0},{&g_72[5][1][1],&l_370,&l_622,&l_622,&g_72[3][1][3]},{&l_622,&l_370,&g_72[5][1][1],&g_72[5][1][1],&l_370},{&l_370,&l_505,(void*)0,&l_370,&g_72[3][1][3]},{&l_505,&g_72[5][1][1],(void*)0,&l_623[0][0][0],(void*)0},{&g_72[3][1][3],&g_72[3][1][3],&g_72[5][1][1],&l_370,(void*)0},{&l_505,(void*)0,&l_622,&l_370,&l_370}};
    uint16_t ** const ** const *l_1014 = (void*)0;
    const uint8_t l_1051 = 0xB1L;
    const int32_t *l_1209 = &l_672;
    const int32_t **l_1208 = &l_1209;
    int32_t ***l_1277 = (void*)0;
    uint16_t l_1390 = 0x2FC9L;
    int32_t *l_1407[7] = {&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504};
    uint8_t ****l_1593 = (void*)0;
    uint8_t *****l_1592 = &l_1593;
    int32_t *** const l_1693 = (void*)0;
    uint64_t l_1856[6][10][4] = {{{0xAA99FAF870710ECALL,9UL,0x3BD748DDBEDDB7F4LL,0x97D51F9142FD917CLL},{0xA7D5C00FCBB0258BLL,0UL,18446744073709551609UL,0x97D51F9142FD917CLL},{0x7C784A6C5658429FLL,9UL,0xA7D5C00FCBB0258BLL,9UL},{18446744073709551610UL,0x5F17D437994A878CLL,5UL,0xB2992E01294C81ADLL},{0x3BD748DDBEDDB7F4LL,18446744073709551613UL,0x7C784A6C5658429FLL,0xBFEA331D38411673LL},{0UL,0x97D51F9142FD917CLL,0xBFEA331D38411673LL,0x3BD748DDBEDDB7F4LL},{0UL,0xC7F631BA09DFEB47LL,0x7C784A6C5658429FLL,0x7C784A6C5658429FLL},{0x3BD748DDBEDDB7F4LL,0x3BD748DDBEDDB7F4LL,5UL,5UL},{18446744073709551610UL,5UL,0xA7D5C00FCBB0258BLL,0x5F17D437994A878CLL},{0x7C784A6C5658429FLL,0xAA99FAF870710ECALL,18446744073709551609UL,0xA7D5C00FCBB0258BLL}},{{0xA7D5C00FCBB0258BLL,0xAA99FAF870710ECALL,0x3BD748DDBEDDB7F4LL,0x5F17D437994A878CLL},{0xAA99FAF870710ECALL,5UL,0xAA99FAF870710ECALL,5UL},{0xC7F631BA09DFEB47LL,0x3BD748DDBEDDB7F4LL,18446744073709551613UL,0x7C784A6C5658429FLL},{0xB2992E01294C81ADLL,0xC7F631BA09DFEB47LL,5UL,0x3BD748DDBEDDB7F4LL},{0x5F17D437994A878CLL,0x97D51F9142FD917CLL,5UL,0xBFEA331D38411673LL},{0xB2992E01294C81ADLL,18446744073709551613UL,18446744073709551613UL,0xB2992E01294C81ADLL},{0xC7F631BA09DFEB47LL,0x5F17D437994A878CLL,0xAA99FAF870710ECALL,9UL},{0xAA99FAF870710ECALL,9UL,0x3BD748DDBEDDB7F4LL,0x97D51F9142FD917CLL},{0xA7D5C00FCBB0258BLL,0UL,18446744073709551609UL,0x97D51F9142FD917CLL},{0x7C784A6C5658429FLL,9UL,0xA7D5C00FCBB0258BLL,9UL}},{{18446744073709551610UL,0x5F17D437994A878CLL,5UL,18446744073709551610UL},{0xA7D5C00FCBB0258BLL,18446744073709551609UL,0xAA99FAF870710ECALL,0x7C784A6C5658429FLL},{9UL,0UL,0x7C784A6C5658429FLL,0xA7D5C00FCBB0258BLL},{9UL,18446744073709551613UL,0xAA99FAF870710ECALL,0xAA99FAF870710ECALL},{0xA7D5C00FCBB0258BLL,0xA7D5C00FCBB0258BLL,0x97D51F9142FD917CLL,0xC7F631BA09DFEB47LL},{5UL,0x97D51F9142FD917CLL,0x5F17D437994A878CLL,0xB2992E01294C81ADLL},{0xAA99FAF870710ECALL,1UL,0xBFEA331D38411673LL,0x5F17D437994A878CLL},{0x5F17D437994A878CLL,1UL,0xA7D5C00FCBB0258BLL,0xB2992E01294C81ADLL},{1UL,0x97D51F9142FD917CLL,1UL,0xC7F631BA09DFEB47LL},{18446744073709551613UL,0xA7D5C00FCBB0258BLL,18446744073709551609UL,0xAA99FAF870710ECALL}},{{18446744073709551610UL,18446744073709551613UL,0xC7F631BA09DFEB47LL,0xA7D5C00FCBB0258BLL},{0xB2992E01294C81ADLL,0UL,0xC7F631BA09DFEB47LL,0x7C784A6C5658429FLL},{18446744073709551610UL,18446744073709551609UL,18446744073709551609UL,18446744073709551610UL},{18446744073709551613UL,0xB2992E01294C81ADLL,1UL,0x3BD748DDBEDDB7F4LL},{1UL,0x3BD748DDBEDDB7F4LL,0xA7D5C00FCBB0258BLL,0UL},{0x5F17D437994A878CLL,9UL,0xBFEA331D38411673LL,0UL},{0xAA99FAF870710ECALL,0x3BD748DDBEDDB7F4LL,0x5F17D437994A878CLL,0x3BD748DDBEDDB7F4LL},{5UL,0xB2992E01294C81ADLL,0x97D51F9142FD917CLL,18446744073709551610UL},{0xA7D5C00FCBB0258BLL,18446744073709551609UL,0xAA99FAF870710ECALL,0x7C784A6C5658429FLL},{9UL,0UL,0x7C784A6C5658429FLL,0xA7D5C00FCBB0258BLL}},{{9UL,18446744073709551613UL,0xAA99FAF870710ECALL,0xAA99FAF870710ECALL},{0xA7D5C00FCBB0258BLL,0xA7D5C00FCBB0258BLL,0x97D51F9142FD917CLL,0xC7F631BA09DFEB47LL},{5UL,0x97D51F9142FD917CLL,0x5F17D437994A878CLL,0xB2992E01294C81ADLL},{0xAA99FAF870710ECALL,1UL,0xBFEA331D38411673LL,0x5F17D437994A878CLL},{0x5F17D437994A878CLL,1UL,0xA7D5C00FCBB0258BLL,0xB2992E01294C81ADLL},{1UL,0x97D51F9142FD917CLL,1UL,0xC7F631BA09DFEB47LL},{18446744073709551613UL,0xA7D5C00FCBB0258BLL,18446744073709551609UL,0xAA99FAF870710ECALL},{18446744073709551610UL,18446744073709551613UL,0xC7F631BA09DFEB47LL,0xA7D5C00FCBB0258BLL},{0xB2992E01294C81ADLL,0UL,0xC7F631BA09DFEB47LL,0x7C784A6C5658429FLL},{18446744073709551610UL,18446744073709551609UL,18446744073709551609UL,18446744073709551610UL}},{{18446744073709551613UL,0xB2992E01294C81ADLL,1UL,0x3BD748DDBEDDB7F4LL},{1UL,0x3BD748DDBEDDB7F4LL,0xA7D5C00FCBB0258BLL,0UL},{0x5F17D437994A878CLL,9UL,0xBFEA331D38411673LL,0UL},{0xAA99FAF870710ECALL,0x3BD748DDBEDDB7F4LL,0x5F17D437994A878CLL,0x3BD748DDBEDDB7F4LL},{5UL,0xB2992E01294C81ADLL,0x97D51F9142FD917CLL,18446744073709551610UL},{0xA7D5C00FCBB0258BLL,18446744073709551609UL,0xAA99FAF870710ECALL,0x7C784A6C5658429FLL},{9UL,0UL,0x7C784A6C5658429FLL,0xA7D5C00FCBB0258BLL},{9UL,18446744073709551613UL,0xAA99FAF870710ECALL,0xAA99FAF870710ECALL},{0xA7D5C00FCBB0258BLL,0xA7D5C00FCBB0258BLL,0x97D51F9142FD917CLL,0xC7F631BA09DFEB47LL},{5UL,0x97D51F9142FD917CLL,0x5F17D437994A878CLL,0xB2992E01294C81ADLL}}};
    uint64_t l_1913 = 0UL;
    const int32_t *l_1956[10] = {&g_72[7][0][4],&l_623[0][0][0],&g_72[7][0][4],&g_72[7][0][4],&l_623[0][0][0],&g_72[7][0][4],&g_72[7][0][4],&l_623[0][0][0],&g_72[7][0][4],&g_72[7][0][4]};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_372[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_510[i] = (void*)0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_623[i][j][k] = (-7L);
        }
    }
    return p_61;
}


/* ------------------------------------------ */
/* 
 * reads : g_78 g_83 g_72 g_108 g_89 g_114 g_115 g_111 g_12 g_153 g_186 g_272 g_273 g_169
 * writes: g_72 g_78 g_83 g_89 g_111 g_115 g_108 g_148 g_169 g_186 g_114 g_275 g_280
 */
static uint8_t * const  func_64(uint8_t * p_65, uint64_t  p_66, uint8_t * p_67, uint8_t * p_68)
{ /* block id: 4 */
    int32_t l_70[9][2][6] = {{{0x5737FB64L,6L,0xC8520716L,0xE2B1956AL,(-2L),0L},{(-2L),(-10L),0x9E77F559L,1L,(-1L),0xC8520716L}},{{6L,(-5L),0x9E77F559L,(-5L),6L,0L},{0xDABEE07FL,(-1L),0xC8520716L,0x5F634C5DL,(-10L),0x8CC907F7L}},{{(-1L),8L,0xE2B1956AL,0x4A98A1BDL,(-1L),0xE2B1956AL},{0x36FDE002L,0x0146BFE2L,0x5F634C5DL,(-8L),0x4A98A1BDL,(-2L)}},{{(-1L),0x72231B3DL,(-10L),0xBF646D91L,8L,0x5F634C5DL},{0x993C4D98L,0L,(-10L),0x4A98A1BDL,0x0146BFE2L,(-2L)}},{{0x796FB6C7L,(-1L),0x5F634C5DL,0xB3A04BB8L,0x72231B3DL,0xE2B1956AL},{0xB3A04BB8L,0x72231B3DL,0xE2B1956AL,0L,0L,0xE2B1956AL}},{{0x993C4D98L,0x993C4D98L,0x5F634C5DL,8L,(-1L),(-2L)},{0x4A98A1BDL,(-4L),(-10L),(-8L),0x72231B3DL,0x5F634C5DL}},{{0x0146BFE2L,0x4A98A1BDL,(-10L),0L,0x993C4D98L,(-2L)},{(-1L),0L,0x5F634C5DL,0x796FB6C7L,(-4L),0xE2B1956AL}},{{0x796FB6C7L,(-4L),0xE2B1956AL,(-1L),0x4A98A1BDL,0xE2B1956AL},{0x0146BFE2L,0x36FDE002L,0x5F634C5DL,0xBF646D91L,0L,(-2L)}},{{0L,8L,(-10L),8L,(-4L),0x5F634C5DL},{0x36FDE002L,(-1L),(-10L),(-1L),0x36FDE002L,(-2L)}}};
    int32_t *l_77[5][10] = {{&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[0][1][4],&g_72[5][1][1],&g_72[0][1][4],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1]},{&g_72[5][1][1],&g_72[0][1][4],&g_72[5][1][1],&g_72[5][1][1],&g_72[0][1][4],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[0][1][4],&g_72[5][1][1]},{&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1]},{&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[0][1][4],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1]},{&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[0][1][4],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1],&g_72[5][1][1]}};
    const int32_t *l_86 = (void*)0;
    const int32_t **l_85 = &l_86;
    const int32_t ** const *l_84 = &l_85;
    int64_t l_132 = 0L;
    uint32_t l_134 = 0xDDF3CDB0L;
    int64_t *l_135 = &g_115;
    int64_t *l_145[7] = {&l_132,&g_115,&l_132,&l_132,&g_115,&l_132,&l_132};
    int64_t **l_146 = (void*)0;
    int64_t **l_147 = &l_135;
    const uint32_t *l_152 = &g_153[6];
    const uint32_t **l_151 = &l_152;
    uint32_t *l_155 = &l_134;
    uint32_t **l_154 = &l_155;
    int64_t *l_156 = (void*)0;
    int64_t *l_157 = (void*)0;
    int64_t *l_158 = &g_115;
    const uint16_t l_191[6] = {9UL,9UL,9UL,9UL,9UL,9UL};
    int64_t l_288[10][3] = {{0L,(-1L),0x215B97896ADE0BD5LL},{9L,0L,9L},{1L,0L,0x215B97896ADE0BD5LL},{(-7L),(-7L),4L},{0xB53A35A2B23383EBLL,0L,0L},{4L,0L,(-1L)},{0xB53A35A2B23383EBLL,(-1L),0xB53A35A2B23383EBLL},{(-7L),4L,(-1L)},{1L,1L,0L},{9L,4L,4L}};
    uint8_t * const l_326 = &g_186;
    int i, j, k;
lbl_224:
    for (p_66 = 0; (p_66 <= 1); p_66 += 1)
    { /* block id: 7 */
        int32_t *l_71[7][3][1];
        uint8_t l_73 = 0x46L;
        int32_t **l_76[10];
        int32_t ***l_87 = &l_76[8];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_71[i][j][k] = &g_72[5][1][1];
            }
        }
        for (i = 0; i < 10; i++)
            l_76[i] = &l_71[3][1][0];
        l_73++;
        l_77[0][2] = &g_72[6][1][0];
        g_78 |= (g_72[5][1][1] = p_66);
        l_77[0][2] = l_77[0][7];
        for (l_73 = 0; (l_73 <= 1); l_73 += 1)
        { /* block id: 15 */
            const int32_t *l_81 = (void*)0;
            const int32_t **l_80 = &l_81;
            const int32_t ** const *l_79 = &l_80;
            const int32_t ** const **l_82[6] = {&l_79,&l_79,(void*)0,&l_79,&l_79,(void*)0};
            int32_t l_88 = 0x825FA2FCL;
            int32_t l_109 = (-4L);
            uint32_t l_112 = 0UL;
            int64_t *l_133 = &g_108;
            int i;
            l_84 = (g_83 = l_79);
            l_88 ^= (0xB54DL | (g_83 != l_87));
            /*bef_stmt:294093*/
if (Tag658(/*int32_t:0:0:294093:e*/g_72[5][1][1]))
                continue;
/*aft_stmt:294093*/
            for (l_88 = 1; (l_88 >= 0); l_88 -= 1)
            { /* block id: 22 */
                uint8_t l_119 = 0x0BL;
                uint32_t l_136[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_136[i] = 5UL;
                for (g_78 = 0; (g_78 <= 1); g_78 += 1)
                { /* block id: 25 */
                    int32_t l_113 = 0xEC932497L;
                    int i, j, k;
                    (***l_87) = l_70[(g_78 + 7)][l_73][(p_66 + 3)];
                    for (g_89 = 0; (g_89 <= 1); g_89 += 1)
                    { /* block id: 29 */
                        int32_t *l_98[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int64_t *l_107[2][4];
                        uint32_t *l_110 = &g_111;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_107[i][j] = &g_108;
                        }
                        (**g_83) = (void*)0;
                        /*bef_stmt:296160*/
/*bef_stmt:296160*/
/*bef_stmt:296160*/
/*bef_stmt:296160*/
/*bef_stmt:296160*/
/*bef_stmt:296160*/
g_115 = ((((safe_div_func_int8_t_s_s(((((p_66 , (l_113 = (safe_sub_func_uint64_t_u_u(((g_72[5][1][1] = (safe_mul_func_int8_t_s_s((p_66 != ((l_98[2] != (**g_83)) , ((4L < ((-2L) > (safe_lshift_func_int8_t_s_s(0xE8L, ((safe_sub_func_int64_t_s_s(((((((((((*l_110) = (((0xBCF5L && ((l_109 ^= (safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s((p_66 & l_70[(g_78 + 7)][l_73][(p_66 + 3)]), p_66)), 0xE6A4CB4AB4704B52LL))) == p_66)) , 0x137EFE7BL) , Tag659(/*int32_t:0:0:296160:e*/g_72[3][1][0]))) < 0x5A479C51L) , 3UL) && l_70[(g_78 + 7)][l_73][(p_66 + 3)]) , 0xB5L) == l_70[(g_78 + 7)][l_73][(p_66 + 3)]) >= 1L) < /*TAG660:STA*/((int64_t)(realsmith_1PxK1((int)(g_404[0])+(5))+(int)(g_108)+(int)(g_1520[3][9])+(int)(g_72[3][1][0])+(int)(**g_715)+(int)(g_404[0])-(783979030))+g_108)/*TAG660:END:g_108*/) & g_78), 0L)) >= p_66))))) , 0UL))), Tag661(/*uint32_t:296842:296864:296160:e*/l_112)))) || g_89), Tag662(/*int64_t:0:0:296160:e*/g_108))))) <= 2L) <= p_66) >= 0xEEL), (/*TAG663:STA*/((uint8_t)(realsmith_proxy_OGg4Y((int)(g_1520[3][9])+(31187), (int)(**g_715)+(54), (char)(*p_67)+(26), (int)(g_108)+(-784010143))+(int)(*p_67)+(int)(**g_715)+(int)(g_1520[3][9])+(int)(g_72[3][1][0])+(int)(g_108)-(783979191))+*p_67)/*TAG663:END:*p_67*/))) , 0xAF35L) | g_89) , Tag664(/*uint16_t:0:0:296160:e*/g_114));
/*aft_stmt:296160*/
/*aft_stmt:296160*/
/*aft_stmt:296160*/
/*aft_stmt:296160*/
/*aft_stmt:296160*/
/*aft_stmt:296160*/
                        /*bef_stmt:296286*/
(*l_80) = (p_66 , ((+(safe_rshift_func_uint8_t_u_u((p_66 >= Tag665(/*uint8_t:296828:296842:296286:e*/l_119)), 1))) , (**g_83)));
/*aft_stmt:296286*/
                        /*bef_stmt:296793*/
/*bef_stmt:296793*/
/*bef_stmt:296793*/
/*bef_stmt:296793*/
/*bef_stmt:296793*/
/*bef_stmt:296793*/
/*bef_stmt:296793*/
/*bef_stmt:296793*/
/*bef_stmt:296793*/
g_72[2][1][1] = ((Tag666(/*int64_t:0:0:296793:e*/g_115) , (safe_sub_func_uint64_t_u_u((/*TAG667:STA*/((uint32_t)(realsmith_proxy_vyNRP((unsigned char)(g_111)+(-201))+((unsigned char)(g_111)-(254))-(53))+g_111)/*TAG667:END:g_111*/ || (((*l_133) = ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(0xFCL, (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(Tag668(/*uint32_t:0:0:296793:e*/g_111), 7)) <= Tag669(/*int64_t:310196:310196:296793:e*/l_132)), ((/*TAG670:STA*/((uint8_t)(realsmith_NDny2()+(int)(l_119)-(11))+l_119)/*TAG670:END:l_119*/ & (l_133 == (l_135 = ((&g_83 == ((p_66 || /*TAG671:STA*/((uint32_t)(realsmith_proxy_2QevX((long)(l_134)+(-3723742568), (long)(l_134)+(-3723742634), (int)(l_134)+(571224571))+(long)(l_134)-(3723742646))+l_134)/*TAG671:END:l_134*/) , &g_83)) , (void*)0)))) ^ Tag672(/*int64_t:0:0:296793:e*/g_108)))))), p_66)) , 0x70L), Tag673(/*int64_t:0:0:296793:e*/g_108))) > p_66)) <= Tag674(/*uint32_t:296828:296842:296793:e*/l_136[0]))), (-6L)))) , p_66);
/*aft_stmt:296793*/
/*aft_stmt:296793*/
/*aft_stmt:296793*/
/*aft_stmt:296793*/
/*aft_stmt:296793*/
/*aft_stmt:296793*/
/*aft_stmt:296793*/
/*aft_stmt:296793*/
/*aft_stmt:296793*/
                    }
                }
            }
        }
    }
    /*bef_stmt:310181*/
/*bef_stmt:310181*/
/*bef_stmt:310181*/
/*bef_stmt:310181*/
/*bef_stmt:310181*/
/*bef_stmt:310181*/
/*bef_stmt:310181*/
/*bef_stmt:310181*/
if ((safe_add_func_int16_t_s_s(4L, (safe_add_func_uint32_t_u_u(0x1FB71B89L, (safe_lshift_func_int16_t_s_s(((((((((/*TAG675:STA*/((int32_t)(realsmith_ajRhA((int)(g_72[5][1][3])+(51), (int)(g_114)+(72), (int)(g_72[5][1][3])+(73), (int)(g_108)+(-784010165))+(int)(g_72[5][1][3])+(int)(g_111)+(int)(g_114)+(int)(g_108)+(int)(g_72[5][1][1])-(784010215))+g_72[5][1][3])/*TAG675:END:g_72[5][1][3]*/ , (&l_85 != (((safe_div_func_uint64_t_u_u((&l_132 == (g_148 = ((*l_147) = (l_145[4] = l_145[3])))), ((*l_158) &= ((safe_add_func_uint8_t_u_u(0xA6L, (((*l_151) = &g_111) != ((*l_154) = &l_134)))) || 0x3165A292L)))) && Tag676(/*int64_t:0:0:310181:e*/g_108)) , (void*)0))) != /*TAG677:STA*/((uint16_t)(realsmith_proxy_Ce1Mk((char)(g_114)+(-54), (int)(g_114)+(-2))+(int)(g_114)-(4))+g_114)/*TAG677:END:g_114*/) && 0L) | Tag678(/*uint64_t:310196:310196:310181:e*/p_66)) , Tag679(/*uint32_t:0:0:310181:e*/g_111)) , Tag680(/*int8_t:0:0:310181:e*/g_12)) <= /*TAG681:STA*/((int32_t)(realsmith_tHZCz((int)(g_114)+(-1), (int)(g_72[6][1][4])+(35))+(int)(g_72[6][1][4])+(int)(g_72[5][1][3])+(int)(g_108)+(int)(g_111)+(int)(g_114)-(784010212))+g_72[6][1][4])/*TAG681:END:g_72[6][1][4]*/) < 0x5B31AE2FL), Tag682(/*uint64_t:310196:310196:310181:e*/p_66))))))))
    { /* block id: 51 */
        uint64_t l_159 = 0x48E8C81394635291LL;
        /*bef_stmt:297518*/
l_159 = Tag683(/*uint64_t:310196:310196:297518:e*/p_66);
/*aft_stmt:297518*/
    }
    else
    { /* block id: 53 */
        int8_t l_176 = 1L;
        uint64_t *l_177 = (void*)0;
        uint64_t *l_178 = &g_78;
        uint32_t *l_181 = &g_111;
        uint8_t *l_185 = &g_186;
        int32_t l_195[10][8] = {{0L,1L,0L,1L,0L,0x4AA7906BL,0L,0xF6B6E5B2L},{0L,0x4AA7906BL,0L,0xF6B6E5B2L,0L,0x4AA7906BL,0L,1L},{0L,1L,0L,0x27FE7776L,(-6L),0x27FE7776L,0L,1L},{0L,0x574A8081L,0L,0xF6B6E5B2L,(-6L),1L,(-6L),0xF6B6E5B2L},{0L,0x574A8081L,0L,1L,0L,0x27FE7776L,(-6L),0x27FE7776L},{0L,1L,0L,1L,0L,0x4AA7906BL,0L,0xF6B6E5B2L},{0L,0x4AA7906BL,0L,0xF6B6E5B2L,0L,0x4AA7906BL,0L,1L},{0L,1L,0L,0x27FE7776L,(-6L),0x27FE7776L,0L,1L},{0L,0x574A8081L,0L,0xF6B6E5B2L,(-6L),1L,(-6L),0xF6B6E5B2L},{0L,0x574A8081L,0L,1L,0L,0x27FE7776L,(-6L),0x27FE7776L}};
        int64_t **l_209 = &l_156;
        int32_t l_278[6][4][4] = {{{0L,0xE14D613FL,0x8FD47A40L,0x728DE720L},{0L,0x0C041A95L,0x604F5D17L,0x604F5D17L},{0x728DE720L,0x728DE720L,(-1L),9L},{0x6F5BC020L,(-1L),6L,0xA48ED956L}},{{0x604F5D17L,0L,(-1L),6L},{6L,0L,0x728DE720L,0xA48ED956L},{0L,(-1L),0L,9L},{0x0C041A95L,0x728DE720L,1L,0x604F5D17L}},{{(-8L),0x0C041A95L,9L,0x728DE720L},{0xA48ED956L,0xE14D613FL,9L,0x8FD47A40L},{(-8L),1L,1L,(-8L)},{0x0C041A95L,0xA48ED956L,0L,(-1L)}},{{0L,(-1L),0x728DE720L,0xE14D613FL},{6L,0L,(-1L),0xE14D613FL},{0x604F5D17L,(-1L),6L,(-1L)},{0x6F5BC020L,0xA48ED956L,(-1L),(-8L)}},{{0x728DE720L,1L,0x604F5D17L,0x8FD47A40L},{0L,0xE14D613FL,0x8FD47A40L,0x728DE720L},{0L,0x0C041A95L,0x604F5D17L,0x604F5D17L},{0x728DE720L,0x728DE720L,(-1L),9L}},{{0x6F5BC020L,(-1L),6L,0xA48ED956L},{0x604F5D17L,0L,(-1L),6L},{6L,0L,0x728DE720L,0xA48ED956L},{0L,(-1L),0L,9L}}};
        int64_t ****l_294[1][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_294[i][j] = (void*)0;
        }
        /*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
/*bef_stmt:301443*/
g_89 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((Tag684(/*int8_t:0:0:301443:e*/g_12) & ((safe_unary_minus_func_uint8_t_u((((safe_mul_func_uint8_t_u_u((((((g_169 = (0L | ((Tag685(/*uint64_t:310196:310196:301443:e*/p_66) ^ 4294967294UL) || 0x80CA6B36A0D05BA9LL))) && (safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(Tag686(/*uint64_t:310196:310196:301443:e*/p_66), 0x0E96879FL)) <= ((*l_178) = ((Tag687(/*uint16_t:0:0:301443:e*/g_114) <= (((safe_div_func_int8_t_s_s(Tag688(/*int8_t:0:0:301443:e*/g_12), Tag689(/*uint64_t:310196:310196:301443:e*/p_66))) && Tag690(/*int32_t:0:0:301443:e*/g_72[5][1][1])) > Tag691(/*int8_t:310165:310196:301443:e*/l_176))) | 0x324C0507L))), 0x2671L))) & Tag692(/*uint16_t:0:0:301443:e*/g_114)) || (Tag693(/*uint8_t:310196:310196:301443:e*/*p_67))) == 0xFBL), 4UL)) > Tag694(/*int8_t:310165:310196:301443:e*/l_176)) < Tag695(/*int32_t:0:0:301443:e*/g_72[7][1][5])))) >= Tag696(/*int32_t:0:0:301443:e*/g_72[4][0][2]))), Tag697(/*uint64_t:310196:310196:301443:e*/p_66))), 7)), Tag698(/*int32_t:0:0:301443:e*/g_89)));
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
/*aft_stmt:301443*/
        /*bef_stmt:301969*/
/*bef_stmt:301969*/
/*bef_stmt:301969*/
/*bef_stmt:301969*/
/*bef_stmt:301969*/
/*bef_stmt:301969*/
/*bef_stmt:301969*/
/*bef_stmt:301969*/
l_195[8][2] = ((((((*l_154) = &g_111) == l_181) | 1L) == (safe_rshift_func_uint16_t_u_s((((~((*l_185) = ((-10L) != ((*l_158) = 0xDE5FC087B67C1614LL)))) , ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((Tag699(/*const uint16_t:310196:310196:301969:e*/l_191[1]) <= ((((+(&l_181 == &l_152)) , (safe_rshift_func_uint8_t_u_u(Tag700(/*int8_t:310165:310196:301969:e*/l_176), Tag701(/*int32_t:0:0:301969:e*/g_72[5][1][1])))) && Tag702(/*int64_t:0:0:301969:e*/g_108)) & Tag703(/*int64_t:0:0:301969:e*/g_115))), Tag704(/*int8_t:310165:310196:301969:e*/l_176))) <= 0x55L), 1L)) && Tag705(/*int8_t:310165:310196:301969:e*/l_176))) & 0xA2L), 8))) , Tag706(/*int32_t:0:0:301969:e*/g_89));
/*aft_stmt:301969*/
/*aft_stmt:301969*/
/*aft_stmt:301969*/
/*aft_stmt:301969*/
/*aft_stmt:301969*/
/*aft_stmt:301969*/
/*aft_stmt:301969*/
/*aft_stmt:301969*/
        for (g_169 = 0; (g_169 == (-17)); g_169--)
        { /* block id: 63 */
            uint64_t l_206 = 4UL;
            int32_t l_223 = 9L;
            int32_t l_231 = 0x39DAEFF7L;
            int32_t l_232 = (-1L);
            int32_t l_234 = 2L;
            int32_t l_235[7][8] = {{0x667A19EBL,(-10L),(-10L),0x667A19EBL,0x7A836CB3L,0x667A19EBL,(-10L),(-10L)},{(-10L),0x7A836CB3L,0x6BBA22A9L,0x6BBA22A9L,(-7L),0x667A19EBL,(-7L),0x7A836CB3L},{0x6BBA22A9L,(-7L),0x6BBA22A9L,0x667A19EBL,0x667A19EBL,0x6BBA22A9L,(-7L),0x6BBA22A9L},{(-10L),0x667A19EBL,0x7A836CB3L,0x667A19EBL,(-10L),(-10L),0x667A19EBL,0x7A836CB3L},{(-10L),(-10L),0x667A19EBL,0x7A836CB3L,0x667A19EBL,(-10L),(-10L),0x667A19EBL},{0x6BBA22A9L,0x667A19EBL,0x667A19EBL,0x6BBA22A9L,(-7L),0x6BBA22A9L,0x667A19EBL,0x667A19EBL},{0x667A19EBL,(-7L),0x7A836CB3L,0x7A836CB3L,(-7L),0x667A19EBL,(-7L),0x7A836CB3L}};
            uint8_t * const l_325 = &g_280;
            int i, j;
            for (g_89 = 0; (g_89 <= 4); g_89 += 1)
            { /* block id: 66 */
                uint32_t l_222 = 0x08E814CFL;
                uint16_t l_226 = 0x96BCL;
                int32_t l_230 = 0x3CD1C296L;
                int32_t l_233[2];
                uint16_t l_236 = 0xE437L;
                uint32_t *l_239 = &l_134;
                const int64_t *l_247 = &g_248;
                const int64_t **l_246 = &l_247;
                int i;
                for (i = 0; i < 2; i++)
                    l_233[i] = 0x97399BADL;
                for (g_114 = 0; (g_114 <= 4); g_114 += 1)
                { /* block id: 69 */
                    int64_t ***l_210 = &l_146;
                    uint32_t l_221[5][4][7] = {{{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL},{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL}},{{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL},{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL}},{{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL},{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL}},{{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL},{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL}},{{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL},{0xDBB1F5C7L,0x9C0DAB6FL,0x35543D63L,0x037CD143L,18446744073709551614UL,0x93810D71L,18446744073709551614UL},{0xB3F4353AL,1UL,1UL,0xB3F4353AL,18446744073709551606UL,0x8FC7E913L,18446744073709551606UL}}};
                    int16_t l_225 = 4L;
                    int32_t l_229[10][5] = {{0x17145919L,1L,0xED7DA01EL,(-7L),0xED7DA01EL},{0xD9C4CFDCL,0x83E64B60L,0x4E187949L,0L,0x83E64B60L},{0x34BDB752L,1L,0x34BDB752L,0xE669EC0AL,2L},{0x83E64B60L,0x628BC173L,0x628BC173L,0x83E64B60L,0x834AAA41L},{0xED7DA01EL,1L,0x17145919L,1L,0xED7DA01EL},{0x834AAA41L,0x83E64B60L,0x628BC173L,0x628BC173L,0x83E64B60L},{2L,0xE669EC0AL,0x34BDB752L,1L,0x34BDB752L},{0x83E64B60L,0L,0x4E187949L,0x83E64B60L,0x83E64B60L},{8L,1L,8L,0xE669EC0AL,0xED7DA01EL},{0x83E64B60L,0x834AAA41L,0x628BC173L,0L,0x834AAA41L}};
                    int8_t l_283 = 0x69L;
                    int i, j, k;
                    /*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
/*bef_stmt:306943*/
if ((safe_sub_func_int64_t_s_s((!(!(0xBD2C5A230DB6F473LL > (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(Tag707(/*uint64_t:310145:310165:306943:e*/l_206), ((((safe_mod_func_uint8_t_u_u((((*l_210) = l_209) == &l_157), (Tag708(/*const uint32_t:0:0:306943:e*/g_153[4]) , Tag709(/*int32_t:0:0:306943:e*/g_72[2][1][5])))) , Tag710(/*uint64_t:310145:310165:306943:e*/l_206)) & (safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(Tag711(/*uint64_t:310196:310196:306943:e*/p_66), (((safe_sub_func_uint32_t_u_u(0xC9A26349L, Tag712(/*int32_t:310165:310196:306943:e*/l_195[8][2]))) > Tag713(/*uint32_t:308756:310069:306943:e*/l_221[0][3][6])) & Tag714(/*uint32_t:310069:310145:306943:e*/l_222)))), 0x70L)) >= Tag715(/*uint64_t:310196:310196:306943:e*/p_66)) | Tag716(/*uint32_t:0:0:306943:e*/g_111)) , 1L), Tag717(/*uint32_t:0:0:306943:e*/g_111))) == 0x571CL), 255UL))) != 18446744073709551614UL))), Tag718(/*int32_t:310165:310196:306943:e*/l_195[8][2])))))), Tag719(/*int32_t:310145:310165:306943:e*/l_223))))
                    { /* block id: 71 */
                        /*bef_stmt:306916*/
if (Tag720(/*uint32_t:310069:310145:306916:e*/l_222))
                            goto lbl_224;
/*aft_stmt:306916*/
                    }
                    else
                    { /* block id: 73 */
                        ++l_226;
                        return &g_186;
                    }
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
/*aft_stmt:306943*/
                    l_236--;
                    for (g_186 = 0; (g_186 <= 1); g_186 += 1)
                    { /* block id: 80 */
                        int8_t *l_240 = &l_176;
                        const int64_t *l_244 = &l_132;
                        const int64_t **l_243 = &l_244;
                        const int64_t ***l_245[5] = {&l_243,&l_243,&l_243,&l_243,&l_243};
                        uint32_t **l_274 = (void*)0;
                        uint8_t *l_279 = &g_280;
                        int16_t *l_281 = &l_225;
                        int32_t l_282 = 0x879E4AB8L;
                        int32_t l_284 = (-1L);
                        int32_t l_285 = 0xE3F2ED9BL;
                        int32_t l_286 = 0xC8C10D49L;
                        int8_t l_287 = 0x8EL;
                        int32_t l_289 = 6L;
                        int32_t l_290 = (-1L);
                        uint16_t l_291 = 1UL;
                        int i, j, k;
                        l_195[8][2] ^= 0x7376010CL;
                        /*bef_stmt:308010*/
l_233[1] ^= (((*l_240) = (l_70[(g_89 + 3)][g_186][g_186] && (l_239 == (void*)0))) , (safe_add_func_int8_t_s_s((&g_148 == (l_246 = l_243)), (safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((0x0DCA21D1L && (((*l_209) = &g_115) != &g_248)), 2)), 12)) ^ (g_72[5][1][1] = (Tag721(/*uint64_t:0:0:308010:e*/g_78) < 0xBEL))), 1L)))));
/*aft_stmt:308010*/
                        /*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
/*bef_stmt:308714*/
l_229[3][4] |= ((safe_mul_func_uint8_t_u_u(((((Tag722(/*int8_t:310165:310196:308714:e*/l_176) & (safe_sub_func_uint32_t_u_u((Tag723(/*uint64_t:310196:310196:308714:e*/p_66) & (safe_mod_func_int32_t_s_s((0x19F2878EL > Tag724(/*int32_t:310145:310165:308714:e*/l_231)), ((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((*l_281) = (safe_mod_func_int8_t_s_s((65535UL ^ (+(safe_lshift_func_uint8_t_u_u(((*l_279) = (safe_add_func_uint16_t_u_u(((g_272 != (g_275 = l_274)) || 247UL), (((safe_mul_func_uint8_t_u_u(Tag725(/*int32_t:310165:310196:308714:e*/l_278[5][1][0]), Tag726(/*int32_t:310165:310196:308714:e*/l_195[9][5]))) <= Tag727(/*int32_t:310145:310165:308714:e*/l_231)) || 1UL)))), Tag728(/*const uint32_t:0:0:308714:e*/g_153[7]))))), Tag729(/*int32_t:0:0:308714:e*/g_72[5][1][1])))), Tag730(/*int32_t:310069:310145:308714:e*/l_233[1]))), 0x2DBF15BDL)) , 0x5F200AAEL)))), 1UL))) , Tag731(/*int64_t:0:0:308714:e*/g_115)) , Tag732(/*uint64_t:310196:310196:308714:e*/p_66)) , 0xDBL), Tag733(/*uint64_t:310196:310196:308714:e*/p_66))) == Tag734(/*const uint32_t:0:0:308714:e*/g_153[7]));
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
/*aft_stmt:308714*/
                        ++l_291;
                    }
                }
                (*l_85) = &l_235[1][4];
                for (l_236 = 0; (l_236 <= 1); l_236 += 1)
                { /* block id: 97 */
                    int64_t *****l_295 = &l_294[0][1];
                    int64_t ***l_298 = &l_209;
                    int64_t ****l_297 = &l_298;
                    int64_t *****l_296 = &l_297;
                    (*l_296) = ((*l_295) = l_294[0][0]);
                    /*bef_stmt:310048*/
if (Tag735(/*uint64_t:310196:310196:310048:e*/p_66))
                    { /* block id: 100 */
                        uint8_t * const l_299 = &g_186;
                        (*l_85) = &l_235[1][4];
                        (*l_85) = &l_235[5][5];
                        return l_299;
                    }
                    else
                    { /* block id: 104 */
                        int8_t *l_308 = &g_12;
                        int8_t **l_307 = &l_308;
                        int32_t l_323 = 0x7D1B0B39L;
                        int32_t l_324 = 0x39D33BB9L;
                        /*bef_stmt:310035*/
/*bef_stmt:310035*/
/*bef_stmt:310035*/
/*bef_stmt:310035*/
/*bef_stmt:310035*/
/*bef_stmt:310035*/
/*bef_stmt:310035*/
/*bef_stmt:310035*/
/*bef_stmt:310035*/
/*bef_stmt:310035*/
l_278[3][0][0] ^= (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((!(((((**g_272) |= ((Tag736(/*uint64_t:310196:310196:310035:e*/p_66) , ((*l_307) = &g_12)) == (void*)0)) >= (safe_lshift_func_uint16_t_u_u((((Tag737(/*uint64_t:310196:310196:310035:e*/p_66) >= (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0xFD6FL, (((safe_sub_func_int16_t_s_s(((((*l_239)++) < ((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0UL, 0x0A77F8E5L)), ((l_323 = Tag738(/*uint64_t:310196:310196:310035:e*/p_66)) && (((l_233[0] = Tag739(/*uint8_t:0:0:310035:e*/g_186)) | 0x0EAA1C20L) < (-1L))))) >= Tag740(/*uint64_t:310196:310196:310035:e*/p_66))) , Tag741(/*int32_t:0:0:310035:e*/g_72[5][1][1])), 65534UL)) , (void*)0) != (void*)0))), 10))) != Tag742(/*uint64_t:310196:310196:310035:e*/p_66)) | 0xB6L), 3))) < 4L) && Tag743(/*uint64_t:310196:310196:310035:e*/p_66))), 5)), Tag744(/*int32_t:310041:310054:310035:e*/l_324))), Tag745(/*uint64_t:310196:310196:310035:e*/p_66)));
/*aft_stmt:310035*/
/*aft_stmt:310035*/
/*aft_stmt:310035*/
/*aft_stmt:310035*/
/*aft_stmt:310035*/
/*aft_stmt:310035*/
/*aft_stmt:310035*/
/*aft_stmt:310035*/
/*aft_stmt:310035*/
/*aft_stmt:310035*/
                    }
/*aft_stmt:310048*/
                }
            }
            /*bef_stmt:310132*/
if (Tag746(/*int32_t:310165:310196:310132:e*/l_278[5][1][0]))
                continue;
/*aft_stmt:310132*/
            return l_325;
        }
    }
/*aft_stmt:310181*/
/*aft_stmt:310181*/
/*aft_stmt:310181*/
/*aft_stmt:310181*/
/*aft_stmt:310181*/
/*aft_stmt:310181*/
/*aft_stmt:310181*/
/*aft_stmt:310181*/
    return l_326;
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
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_72[i][j][k], "g_72[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_404[i], "g_404[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_418, "g_418", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_424[i], "g_424[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_495[i], "g_495[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_542, "g_542", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_578[i][j][k], "g_578[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_919, "g_919", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_979[i], "g_979[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    transparent_crc(g_1343, "g_1343", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1347[i], "g_1347[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1502, "g_1502", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1520[i][j], "g_1520[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1578, "g_1578", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1720[i], "g_1720[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1825, "g_1825", print_hash_value);
    transparent_crc(g_2138, "g_2138", print_hash_value);
    transparent_crc(g_2345, "g_2345", print_hash_value);
    transparent_crc(g_2398, "g_2398", print_hash_value);
    transparent_crc(g_2896, "g_2896", print_hash_value);
    transparent_crc(g_3130, "g_3130", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_3203[i][j], "g_3203[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3319, "g_3319", print_hash_value);
    transparent_crc(g_3344, "g_3344", print_hash_value);
    transparent_crc(g_3356, "g_3356", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_3387[i][j], "g_3387[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3417[i], "g_3417[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3560, "g_3560", print_hash_value);
    transparent_crc(g_3750, "g_3750", print_hash_value);
    transparent_crc(g_4040, "g_4040", print_hash_value);
    transparent_crc(g_4043, "g_4043", print_hash_value);
    transparent_crc(g_4331, "g_4331", print_hash_value);
    transparent_crc(g_4366, "g_4366", print_hash_value);
    transparent_crc(g_4392, "g_4392", print_hash_value);
    transparent_crc(g_4482, "g_4482", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_4655[i][j][k], "g_4655[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_4658[i], "g_4658[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4690, "g_4690", print_hash_value);
    transparent_crc(g_4738, "g_4738", print_hash_value);
    transparent_crc(g_4826, "g_4826", print_hash_value);
    transparent_crc(g_4940, "g_4940", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1266
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

XXX max expression depth: 47
breakdown:
   depth: 1, occurrence: 280
   depth: 2, occurrence: 70
   depth: 3, occurrence: 8
   depth: 4, occurrence: 1
   depth: 5, occurrence: 4
   depth: 10, occurrence: 1
   depth: 12, occurrence: 1
   depth: 15, occurrence: 2
   depth: 16, occurrence: 2
   depth: 17, occurrence: 2
   depth: 18, occurrence: 3
   depth: 19, occurrence: 3
   depth: 20, occurrence: 1
   depth: 21, occurrence: 5
   depth: 22, occurrence: 2
   depth: 23, occurrence: 4
   depth: 24, occurrence: 2
   depth: 25, occurrence: 3
   depth: 26, occurrence: 8
   depth: 27, occurrence: 4
   depth: 28, occurrence: 4
   depth: 29, occurrence: 2
   depth: 30, occurrence: 2
   depth: 31, occurrence: 1
   depth: 32, occurrence: 2
   depth: 34, occurrence: 1
   depth: 35, occurrence: 2
   depth: 36, occurrence: 1
   depth: 38, occurrence: 1
   depth: 39, occurrence: 2
   depth: 40, occurrence: 1
   depth: 47, occurrence: 1

XXX total number of pointers: 911

XXX times a variable address is taken: 2544
XXX times a pointer is dereferenced on RHS: 721
breakdown:
   depth: 1, occurrence: 455
   depth: 2, occurrence: 193
   depth: 3, occurrence: 40
   depth: 4, occurrence: 33
XXX times a pointer is dereferenced on LHS: 651
breakdown:
   depth: 1, occurrence: 552
   depth: 2, occurrence: 73
   depth: 3, occurrence: 23
   depth: 4, occurrence: 3
XXX times a pointer is compared with null: 98
XXX times a pointer is compared with address of another variable: 29
XXX times a pointer is compared with another pointer: 36
XXX times a pointer is qualified to be dereferenced: 17957

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2042
   level: 2, occurrence: 832
   level: 3, occurrence: 520
   level: 4, occurrence: 342
   level: 5, occurrence: 253
XXX number of pointers point to pointers: 456
XXX number of pointers point to scalars: 455
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 29.2
XXX average alias set size: 1.6

XXX times a non-volatile is read: 4543
XXX times a non-volatile is write: 2099
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 1
XXX backward jumps: 19

XXX stmts: 283
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 34
   depth: 1, occurrence: 44
   depth: 2, occurrence: 60
   depth: 3, occurrence: 48
   depth: 4, occurrence: 44
   depth: 5, occurrence: 53

XXX percentage a fresh-made variable is used: 15.7
XXX percentage an existing variable is used: 84.3
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: 4386A588 */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: 4386A588 */
