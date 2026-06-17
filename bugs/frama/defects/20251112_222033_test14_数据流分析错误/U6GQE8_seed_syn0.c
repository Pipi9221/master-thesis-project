
int EINVAL_realsmith_r3Tet = 17;

int F_EGRESS_realsmith_r3Tet = 14;

int realsmith_r3Tet(int *adapter, unsigned int id, int data[4])
{
 if (id >= 65536)
  return -EINVAL_realsmith_r3Tet;
 return (1);
}
int realsmith_proxy_LFiKC(int p_0_153y1, unsigned int p_1_NhJCN, int p_2_Z8Wur) {
int proxy_F576n[18] = { p_0_153y1, p_0_153y1, 82, p_0_153y1, 3, p_0_153y1, p_0_153y1, 55, 8, 52, p_0_153y1, 97, 36, p_0_153y1, p_0_153y1, p_0_153y1, 72, p_0_153y1 };
int proxy_cTPaW[17] = { 1, p_2_Z8Wur, 86, 20, p_2_Z8Wur, p_2_Z8Wur, 52, p_2_Z8Wur, p_2_Z8Wur, 40, p_2_Z8Wur, 2, p_2_Z8Wur, p_2_Z8Wur, 96, p_2_Z8Wur, 11 };
int proxy_ret_5ZO3M = realsmith_r3Tet(proxy_F576n, p_1_NhJCN, proxy_cTPaW);
return proxy_ret_5ZO3M;
}


int FALSE_realsmith_OLlJA = -6;

long S_OK_realsmith_OLlJA = 19;

int TRUE_realsmith_OLlJA = -10;

int realsmith_OLlJA()
{
 long hResult;
 int hPort;
 hResult = (1);
 if (hResult != S_OK_realsmith_OLlJA)
 {
  return FALSE_realsmith_OLlJA;
 }
 (1);
 return TRUE_realsmith_OLlJA;
}

int realsmith_fYc4G(int *env, int weakThiz, int what, int args)
{
    int ret_value = (1);
    if ((1)) {
        return 0;
    }
    return ret_value;
}
int realsmith_proxy_u27WU(int p_0_bGmYl, int p_1_txiqy, int p_2_xUT9e, int p_3_Q42rc) {
int proxy_ret_9jUl6 = realsmith_fYc4G(&(p_0_bGmYl), p_1_txiqy, p_2_xUT9e, p_3_Q42rc);
return proxy_ret_9jUl6;
}


int A4XX_SP_VS_VPC_DST_REG_OUTLOC3__MASK_realsmith_kg93k = 7;

int A4XX_SP_VS_VPC_DST_REG_OUTLOC3__SHIFT_realsmith_kg93k = 1;

__attribute__((used)) static inline int realsmith_kg93k(int val)
{
 return ((val) << A4XX_SP_VS_VPC_DST_REG_OUTLOC3__SHIFT_realsmith_kg93k) & A4XX_SP_VS_VPC_DST_REG_OUTLOC3__MASK_realsmith_kg93k;
}

long HHA_CNT0_LOWER_realsmith_EUAS7 = -10;

__attribute__((used)) static long realsmith_EUAS7(int cntr_idx)
{
 return (HHA_CNT0_LOWER_realsmith_EUAS7 + (cntr_idx * 8));
}

__attribute__((used)) static inline unsigned short realsmith_QEMFK(unsigned long x)
{
 union {
  unsigned long ul;
  unsigned int ui[2];
  unsigned short us[4];
 } in_v, tmp_v, out_v;
 in_v.ul = x;
 tmp_v.ul = (unsigned long) in_v.ui[0] + (unsigned long) in_v.ui[1];
 out_v.ul = (unsigned long) tmp_v.us[0] + (unsigned long) tmp_v.us[1]
   + (unsigned long) tmp_v.us[2];
 return out_v.us[0] + out_v.us[1];
}

 int realsmith_U6mDW(int byte)
{
 return
  ((0x80 & byte) >> 7) |
  ((0x40 & byte) >> 5) |
  ((0x20 & byte) >> 3) |
  ((0x10 & byte) >> 1) |
  ((0x08 & byte) << 1) |
  ((0x04 & byte) << 3) |
  ((0x02 & byte) << 5) |
  ((0x01 & byte) << 7);
}

int LDNS_WIREPARSE_ERR_BUFFER_TOO_SMALL_realsmith_v5JL3 = -2;

int LDNS_WIREPARSE_ERR_OK_realsmith_v5JL3 = 1;

int LDNS_WIREPARSE_ERR_SYNTAX_realsmith_v5JL3 = 11;

__attribute__((used)) static int
realsmith_v5JL3(int* strbuf, int* rr, unsigned long* len,
 unsigned long* dname_len, int* origin, unsigned long origin_len, int* prev,
 unsigned long prev_len, char* token, unsigned long token_len)
{
 if((1) == -1) {
  return (1);
 }
 if((1) == 0) {
  int* tocopy;
  if (origin) {
   *dname_len = origin_len;
   tocopy = origin;
  } else if (prev) {
   *dname_len = prev_len;
   tocopy = prev;
  } else {
   *dname_len = 1;
   tocopy = (int*)"\0";
  }
  if(*len < *dname_len)
   return (1);
  (1);
 } else if(*token == '\0') {
  int* tocopy;
  if(prev) {
   *dname_len = prev_len;
   tocopy = prev;
  } else if(origin) {
   *dname_len = origin_len;
   tocopy = origin;
  } else {
   *dname_len = 1;
   tocopy = (int*)"\0";
  }
  if(*len < *dname_len)
   return (1);
  (1);
 } else {
  unsigned long dlen = *len;
  int s = (1);
  if(s) return (1);
  *dname_len = dlen;
 }
 return LDNS_WIREPARSE_ERR_OK_realsmith_v5JL3;
}
int realsmith_proxy_p5lvQ(int p_0_Z6TUY, int p_1_fRHfv, unsigned long p_2_2p0Pt, unsigned long p_3_pus1I, int p_4_2tecy, unsigned long p_5_b8uqX, int p_6_oQ7JD, unsigned long p_7_bnZ7O, char p_8_WoLnF, unsigned long p_9_62A5q) {
int proxy_ftPLJ[17] = { 43, p_0_Z6TUY, 32, 24, p_0_Z6TUY, p_0_Z6TUY, 1, 49, p_0_Z6TUY, p_0_Z6TUY, 21, p_0_Z6TUY, 16, p_0_Z6TUY, 11, p_0_Z6TUY, 76 };
unsigned long proxy_i1LbZ[10] = { p_3_pus1I, 15, p_3_pus1I, 35, p_3_pus1I, p_3_pus1I, p_3_pus1I, 27, p_3_pus1I, 53 };
int proxy_5NG5S[13] = { 35, 7, 55, 9, p_6_oQ7JD, p_6_oQ7JD, p_6_oQ7JD, p_6_oQ7JD, p_6_oQ7JD, 10, 1, 43, 54 };
char proxy_3Rxp5[17] = { 33, 69, 88, p_8_WoLnF, p_8_WoLnF, 72, p_8_WoLnF, 12, p_8_WoLnF, p_8_WoLnF, 100, p_8_WoLnF, 21, 95, p_8_WoLnF, p_8_WoLnF, p_8_WoLnF };
int proxy_ret_JLSJn = realsmith_v5JL3(proxy_ftPLJ, &(p_1_fRHfv), &(p_2_2p0Pt), proxy_i1LbZ, &(p_4_2tecy), p_5_b8uqX, proxy_5NG5S, p_7_bnZ7O, proxy_3Rxp5, p_9_62A5q);
return proxy_ret_JLSJn;
}


const char *realsmith_TMxQf(const char *str, unsigned long chars)
{
   const int *strb = (const int*)str;
   if (!chars)
      return str;
   do
   {
      strb++;
      while ((*strb & 0xC0)==0x80) strb++;
      chars--;
   } while(chars);
   return (const char*)strb;
}
char realsmith_proxy_imjr2(char p_0_YYzIY, unsigned long p_1_VTcIY) {
char proxy_pNXue[19] = { p_0_YYzIY, 52, p_0_YYzIY, 59, p_0_YYzIY, p_0_YYzIY, p_0_YYzIY, 41, p_0_YYzIY, 89, 26, 98, 72, 22, p_0_YYzIY, p_0_YYzIY, p_0_YYzIY, 21, p_0_YYzIY };
char * proxy_ret_R1BTn = realsmith_TMxQf(proxy_pNXue, p_1_VTcIY);
return *proxy_ret_R1BTn;
}


long ERROR_NO_MORE_ITEMS_realsmith_u31ok = -1;

long ERROR_SUCCESS_realsmith_u31ok = 16;

__attribute__((used)) static int realsmith_u31ok( int hdb, long field, const char *query)
{
    long r;
    int ret = -1;
    int hview, hrec;
    r = (1);
    (1);
    r = (1);
    (1);
    r = (1);
    (1);
    if (r == ERROR_SUCCESS_realsmith_u31ok)
    {
        long r_tmp;
        ret = (1);
        (1);
        r_tmp = (1);
        (1);
    }
    (1);
    (1);
    return ret;
}
int realsmith_proxy_kl0Lf(int p_0_Ls8nF, long p_1_p1uTH, char p_2_bHybI) {
int proxy_ret_oBihV = realsmith_u31ok(p_0_Ls8nF, p_1_p1uTH, &(p_2_bHybI));
return proxy_ret_oBihV;
}


__attribute__((used)) static const char *realsmith_KYVND(int err)
{
 switch (err) {
 case 129:
  return "No error";
 case 131:
  return "Invalid handle";
 case 130:
  return "Memory allocation error";
 case 128:
  return "Unsupported parameter";
 case 132:
  return "Invalid config";
 case 136:
  return "Initialization error";
 case 137:
  return "AAC library initialization error";
 case 134:
  return "SBR library initialization error";
 case 133:
  return "Transport library initialization error";
 case 135:
  return "Metadata library initialization error";
 case 138:
  return "Encoding error";
 case 139:
  return "End of file";
 default:
  return "Unknown error";
 }
}
char realsmith_proxy_CjNN0(int p_0_PQQml) {
char * proxy_ret_p2TBr = realsmith_KYVND(p_0_PQQml);
return *proxy_ret_p2TBr;
}


__attribute__((used)) static inline int realsmith_F21CS(unsigned offset, unsigned mask)
{
 return (3 << 28) | (offset << 16) | mask;
}

__attribute__((used)) static inline int realsmith_kypE9(int bitno)
{
 return 1 << (bitno & 31);
}

int disc_strings_realsmith_hMBy7 = -1;

int disc_strings_length_realsmith_hMBy7 = 17;

int region_strings_realsmith_hMBy7 = 5;

int region_strings_length_realsmith_hMBy7 = 1;

__attribute__((used)) static int realsmith_hMBy7(char *left)
{
   return (1)
      && !(1)
      && !(1);
}
int realsmith_proxy_rsslU(char p_0_l75ia) {
int proxy_ret_Jyf8y = realsmith_hMBy7(&(p_0_l75ia));
return proxy_ret_Jyf8y;
}


__attribute__((used)) static inline int realsmith_SJj4o(const char *path, unsigned long *len,
         const char *component)
{
 unsigned long component_len = (1);
 if (*len < component_len + 1 ||
     !(1) ||
     (1))
  return 0;
 *len -= component_len + 1;
 while (*len > 0 && (1))
  (*len)--;
 return 1;
}
int realsmith_proxy_UpZt8(char p_0_LZ4vw, unsigned long p_1_fJecO, char p_2_VYIqC) {
char proxy_ZbTqS[15] = { p_2_VYIqC, p_2_VYIqC, 73, 69, p_2_VYIqC, p_2_VYIqC, p_2_VYIqC, p_2_VYIqC, p_2_VYIqC, p_2_VYIqC, 67, 89, p_2_VYIqC, 86, 4 };
int proxy_ret_HyhYZ = realsmith_SJj4o(&(p_0_LZ4vw), &(p_1_fJecO), proxy_ZbTqS);
return proxy_ret_HyhYZ;
}


__attribute__((used)) static unsigned
realsmith_OU6sy(const unsigned char *src, unsigned long src_len, unsigned char *dst, unsigned long dst_len)
{
    unsigned key;
    unsigned long i;
    key = 'f'<<24 | 't'<<16 | 'p'<<8 | '2'<<0;
    for (i=0; i<dst_len && i<src_len; i+=4) {
        dst[i+0] = src[i+0] ^ (unsigned char)(key>> 0);
        dst[i+1] = src[i+1] ^ (unsigned char)(key>> 8);
        dst[i+2] = src[i+2] ^ (unsigned char)(key>>16);
        dst[i+3] = src[i+3] ^ (unsigned char)(key>>24);
        key = key<<1 | key>>31;
    }
    return (unsigned)src_len;
}
unsigned int realsmith_proxy_8SQsm(unsigned char p_0_hHd5W, unsigned long p_1_LY4iF, unsigned char p_2_hXGBk, unsigned long p_3_PdpSc) {
unsigned int proxy_ret_JtL0f = realsmith_OU6sy(&(p_0_hHd5W), p_1_LY4iF, &(p_2_hXGBk), p_3_PdpSc);
return proxy_ret_JtL0f;
}


int TK_FILTER_realsmith_1A1wC = 1;

int TK_ID_realsmith_1A1wC = -7;

long TK_LP_realsmith_1A1wC = 13;

int TK_RP_realsmith_1A1wC = 10;

__attribute__((used)) static int realsmith_1A1wC(const unsigned char *z, int lastToken){
  if( lastToken==TK_RP_realsmith_1A1wC && (1)==TK_LP_realsmith_1A1wC ){
    return TK_FILTER_realsmith_1A1wC;
  }
  return TK_ID_realsmith_1A1wC;
}
int realsmith_proxy_2gANh(unsigned char p_0_HJEnd, int p_1_jqJxs) {
int proxy_ret_vssjF = realsmith_1A1wC(&(p_0_HJEnd), p_1_jqJxs);
return proxy_ret_vssjF;
}


int stderr_realsmith_xqMVb = 18;

unsigned int realsmith_xqMVb(const char* const v, int base, int* const error) {
  char* end = ((void*)0);
  const unsigned int n = (v != ((void*)0)) ? (unsigned int)(1) : 0u;
  if (end == v && error != ((void*)0) && !*error) {
    *error = 1;
    (1);
  }
  return n;
}
unsigned int realsmith_proxy_mIMvr(char p_0_K6ucy, int p_1_cKmE1, int p_2_KLkR4) {
int proxy_Ab6i5[11] = { p_2_KLkR4, 92, 82, p_2_KLkR4, p_2_KLkR4, p_2_KLkR4, p_2_KLkR4, 41, p_2_KLkR4, 0, 11 };
unsigned int proxy_ret_sC642 = realsmith_xqMVb(&(p_0_K6ucy), p_1_cKmE1, proxy_Ab6i5);
return proxy_ret_sC642;
}


unsigned long realsmith_PWUfe(unsigned long *map, unsigned long size,
          unsigned long start, unsigned int nr,
          unsigned long shift, unsigned long boundary_size,
          unsigned long align_mask)
{
 unsigned long index;
 size -= 1;
again:
 index = (1);
 if (index < size) {
  if ((1)) {
   start = (1) - shift;
   goto again;
  }
  (1);
  return index;
 }
 return -1;
}
unsigned long realsmith_proxy_C3BtI(unsigned long p_0_GwbCQ, unsigned long p_1_OKKqt, unsigned long p_2_D5p79, unsigned int p_3_Zg1ZW, unsigned long p_4_vgUkU, unsigned long p_5_rXdNG, unsigned long p_6_8guko) {
unsigned long proxy_ret_scEEQ = realsmith_PWUfe(&(p_0_GwbCQ), p_1_OKKqt, p_2_D5p79, p_3_Zg1ZW, p_4_vgUkU, p_5_rXdNG, p_6_8guko);
return proxy_ret_scEEQ;
}


int PAGE_SIZE_realsmith_5LAEY = 8;

__attribute__((used)) static int
realsmith_5LAEY(char *page, unsigned long nasid)
{
 unsigned long fentry[2];
 int index;
 char *p;
 p = page;
 for (index=0;;index++) {
  (1);
  if ((1))
   break;
  p += (1);
 }
 return p - page;
}
int realsmith_proxy_8dpJJ(char p_0_RJlZZ, unsigned long p_1_LeK9p) {
int proxy_ret_5nh6I = realsmith_5LAEY(&(p_0_RJlZZ), p_1_LeK9p);
return proxy_ret_5nh6I;
}


int realsmith_rqNdj (int *p0, int *p1, int *p2)
{
 int t1, t2, normal;
 int dist;
 (1);
 (1);
 (1);
 (1);
 dist = (1);
 return (1);
}
int realsmith_proxy_M9dfD(int p_0_Yo4w1, int p_1_gGWnt, int p_2_sCEpe) {
int proxy_Nanc5[12] = { 68, p_1_gGWnt, 29, p_1_gGWnt, p_1_gGWnt, p_1_gGWnt, 26, p_1_gGWnt, 90, 86, p_1_gGWnt, 73 };
int proxy_n1JpJ[17] = { p_2_sCEpe, p_2_sCEpe, p_2_sCEpe, 89, 45, p_2_sCEpe, 22, p_2_sCEpe, p_2_sCEpe, 50, 87, 34, 76, 36, p_2_sCEpe, 20, p_2_sCEpe };
int proxy_ret_W3DcO = realsmith_rqNdj(&(p_0_Yo4w1), proxy_Nanc5, proxy_n1JpJ);
return proxy_ret_W3DcO;
}


int O_CLOEXEC_realsmith_Z2JEN = 19;

int O_DIRECTORY_realsmith_Z2JEN = 2;

int SIGUSR1_realsmith_Z2JEN = 13;

int set_signal_received_on_sigusr1_realsmith_Z2JEN = 8;

int signal_received_realsmith_Z2JEN = -10;

__attribute__((used)) static int realsmith_Z2JEN(void)
{
 int pidfd, ret;
 const char *test_name = "pidfd_send_signal send SIGUSR1";
 pidfd = (1);
 if (pidfd < 0)
  (1);
 (1);
 ret = (1);
 (1);
 if (ret < 0)
  (1);
 if (signal_received_realsmith_Z2JEN != 1)
  (1);
 signal_received_realsmith_Z2JEN = 0;
 (1);
 return 0;
}

__attribute__((used)) static int
realsmith_a0qEJ(int *pwc, const char *s, unsigned long n)
{
 int cnt;
 cnt = (1);
 if (cnt == 3 && (1))
  return (-3);
 return (cnt);
}
int realsmith_proxy_OLHuV(int p_0_nDaGu, char p_1_Jz8t2, unsigned long p_2_7WZ4j) {
char proxy_PI9hN[12] = { 67, p_1_Jz8t2, p_1_Jz8t2, 96, 40, 12, 28, p_1_Jz8t2, p_1_Jz8t2, 13, 26, 32 };
int proxy_ret_HSFcF = realsmith_a0qEJ(&(p_0_nDaGu), proxy_PI9hN, p_2_7WZ4j);
return proxy_ret_HSFcF;
}


unsigned long realsmith_Pelqp(char *out_path, const char *dir,
      const char *path, const char delim, unsigned long size)
{
   unsigned long copied;
   if (out_path == dir)
      copied = (1);
   else
      copied = (1);
   out_path[copied] = delim;
   out_path[copied+1] = '\0';
   if (path)
      copied = (1);
   return copied;
}
unsigned long realsmith_proxy_Phzs6(char p_0_kPDJi, char p_1_wV2FV, char p_2_oT3yD, char p_3_UsSYH, unsigned long p_4_64z0Q) {
char proxy_xuYyH[15] = { p_0_kPDJi, p_0_kPDJi, p_0_kPDJi, 42, p_0_kPDJi, 11, 54, p_0_kPDJi, 47, p_0_kPDJi, p_0_kPDJi, p_0_kPDJi, p_0_kPDJi, p_0_kPDJi, p_0_kPDJi };
char proxy_UDACw[11] = { 46, p_2_oT3yD, p_2_oT3yD, 40, 6, p_2_oT3yD, p_2_oT3yD, p_2_oT3yD, p_2_oT3yD, p_2_oT3yD, 82 };
unsigned long proxy_ret_UzbuF = realsmith_Pelqp(proxy_xuYyH, &(p_1_wV2FV), proxy_UDACw, p_3_UsSYH, p_4_64z0Q);
return proxy_ret_UzbuF;
}


int LOG_INFO_realsmith_FE52K = 12;

int aac_encoder_info_realsmith_FE52K = 3;

int ffmpeg_muxer_realsmith_FE52K = -6;

int ffmpeg_output_realsmith_FE52K = 12;

int ffmpeg_source_realsmith_FE52K = 8;

int nvenc_encoder_info_realsmith_FE52K = -1;

int opus_encoder_info_realsmith_FE52K = 15;

int replay_buffer_realsmith_FE52K = 19;

int vaapi_encoder_info_realsmith_FE52K = 11;

int realsmith_FE52K(void)
{
 (1);
 (1);
 (1);
 (1);
 (1);
 (1);
 if ((1)) {
  (1);
  (1);
 }
 return 1;
}

long _funcptr_glBindTransformFeedbackNV_realsmith_58GvK = -3;

long _funcptr_glDeleteTransformFeedbacksNV_realsmith_58GvK = -3;

long _funcptr_glDrawTransformFeedbackNV_realsmith_58GvK = 2;

long _funcptr_glGenTransformFeedbacksNV_realsmith_58GvK = 12;

long _funcptr_glIsTransformFeedbackNV_realsmith_58GvK = 11;

long _funcptr_glPauseTransformFeedbackNV_realsmith_58GvK = 17;

long _funcptr_glResumeTransformFeedbackNV_realsmith_58GvK = -9;

__attribute__((used)) static int realsmith_58GvK()
{
 int numFailed = 0;
 _funcptr_glBindTransformFeedbackNV_realsmith_58GvK = (long)(1);
 if(!_funcptr_glBindTransformFeedbackNV_realsmith_58GvK) ++numFailed;
 _funcptr_glDeleteTransformFeedbacksNV_realsmith_58GvK = (long)(1);
 if(!_funcptr_glDeleteTransformFeedbacksNV_realsmith_58GvK) ++numFailed;
 _funcptr_glDrawTransformFeedbackNV_realsmith_58GvK = (long)(1);
 if(!_funcptr_glDrawTransformFeedbackNV_realsmith_58GvK) ++numFailed;
 _funcptr_glGenTransformFeedbacksNV_realsmith_58GvK = (long)(1);
 if(!_funcptr_glGenTransformFeedbacksNV_realsmith_58GvK) ++numFailed;
 _funcptr_glIsTransformFeedbackNV_realsmith_58GvK = (long)(1);
 if(!_funcptr_glIsTransformFeedbackNV_realsmith_58GvK) ++numFailed;
 _funcptr_glPauseTransformFeedbackNV_realsmith_58GvK = (long)(1);
 if(!_funcptr_glPauseTransformFeedbackNV_realsmith_58GvK) ++numFailed;
 _funcptr_glResumeTransformFeedbackNV_realsmith_58GvK = (long)(1);
 if(!_funcptr_glResumeTransformFeedbackNV_realsmith_58GvK) ++numFailed;
 return numFailed;
}

__attribute__((used)) static int realsmith_JoC8V(int colorspace,
                    const int* row_in, int in_stride,
                    int mb_w, int mb_h,
                    int* const out, int out_stride) {
  int lines = mb_h;
  int* row_out = out;
  while (lines-- > 0) {
    (1);
    row_in += in_stride;
    row_out += out_stride;
  }
  return mb_h;
}
int realsmith_proxy_e0g4Z(int p_0_TVq0d, int p_1_Ap6q7, int p_2_4n3e6, int p_3_xlEpB, int p_4_DlvnT, int p_5_unpy6, int p_6_habD3) {
int proxy_zgVwc[19] = { 2, 75, 66, p_1_Ap6q7, 50, p_1_Ap6q7, p_1_Ap6q7, 85, p_1_Ap6q7, 53, 90, p_1_Ap6q7, p_1_Ap6q7, 70, 85, 23, p_1_Ap6q7, p_1_Ap6q7, p_1_Ap6q7 };
int proxy_ret_ECM2F = realsmith_JoC8V(p_0_TVq0d, proxy_zgVwc, p_2_4n3e6, p_3_xlEpB, p_4_DlvnT, &(p_5_unpy6), p_6_habD3);
return proxy_ret_ECM2F;
}


int STRM_OK_realsmith_FDa74 = 11;

__attribute__((used)) static int
realsmith_FDa74(int* strm, int argc, int* args, int* ret)
{
  double f;
  (1);
  *ret = (1);
  return STRM_OK_realsmith_FDa74;
}
int realsmith_proxy_3wpLw(int p_0_WlM5g, int p_1_RCQYc, int p_2_GviFY, int p_3_STLvf) {
int proxy_i4OSQ[19] = { 65, 48, p_0_WlM5g, 10, p_0_WlM5g, 6, 96, p_0_WlM5g, 17, 99, 22, 19, 9, p_0_WlM5g, 32, p_0_WlM5g, 42, p_0_WlM5g, p_0_WlM5g };
int proxy_BxrBu[10] = { 63, 34, 83, 27, p_3_STLvf, 38, 96, 58, p_3_STLvf, p_3_STLvf };
int proxy_ret_eZd8S = realsmith_FDa74(proxy_i4OSQ, p_1_RCQYc, &(p_2_GviFY), proxy_BxrBu);
return proxy_ret_eZd8S;
}


int realsmith_30VOE(int *st, int n)
{
    if (st == ((void*)0))
        return 0;
    if (n < 0)
        return 1;
    return (1);
}
int realsmith_proxy_J9PcL(int p_0_3BPMU, int p_1_CMMji) {
int proxy_ret_UJWjW = realsmith_30VOE(&(p_0_3BPMU), p_1_CMMji);
return proxy_ret_UJWjW;
}


long Ctrl_V_realsmith_Y5GmZ = 19;

int INSERT_realsmith_Y5GmZ = 2;

long MAYBE_realsmith_Y5GmZ = 11;

int State_realsmith_Y5GmZ = -1;

int VE_ALL_realsmith_Y5GmZ = 19;

int VE_BLOCK_realsmith_Y5GmZ = 16;

int VE_INSERT_realsmith_Y5GmZ = -2;

long VIsual_active_realsmith_Y5GmZ = 20;

long VIsual_mode_realsmith_Y5GmZ = 3;

int ve_flags_realsmith_Y5GmZ = -4;

long virtual_op_realsmith_Y5GmZ = -2;

int
realsmith_Y5GmZ()
{
    if (virtual_op_realsmith_Y5GmZ != MAYBE_realsmith_Y5GmZ)
 return virtual_op_realsmith_Y5GmZ;
    return (ve_flags_realsmith_Y5GmZ == VE_ALL_realsmith_Y5GmZ
     || ((ve_flags_realsmith_Y5GmZ & VE_INSERT_realsmith_Y5GmZ) && (State_realsmith_Y5GmZ & INSERT_realsmith_Y5GmZ)));
}

int HGA_INDEX_PORT_realsmith_Gd01v = -4;

int HGA_VALUE_PORT_realsmith_Gd01v = 19;

__attribute__((used)) static int realsmith_Gd01v(unsigned char val, unsigned char reg)
{
 (1);
 (1);
 (1); val = ((1) == val);
 return val;
}

int CHARGE_MODE_AC_realsmith_lm0Wo = -1;

int CHARGE_MODE_AUTO_realsmith_lm0Wo = -8;

int CHARGE_MODE_CUSTOM_realsmith_lm0Wo = 16;

int CHARGE_MODE_EXP_realsmith_lm0Wo = 16;

int CHARGE_MODE_STD_realsmith_lm0Wo = 17;

int EINVAL_realsmith_lm0Wo = 3;

__attribute__((used)) static int realsmith_lm0Wo(int psp_val)
{
 switch (psp_val) {
 case 128:
  return CHARGE_MODE_AC_realsmith_lm0Wo;
 case 130:
  return CHARGE_MODE_EXP_realsmith_lm0Wo;
 case 129:
  return CHARGE_MODE_STD_realsmith_lm0Wo;
 case 132:
  return CHARGE_MODE_AUTO_realsmith_lm0Wo;
 case 131:
  return CHARGE_MODE_CUSTOM_realsmith_lm0Wo;
 default:
  return -EINVAL_realsmith_lm0Wo;
 }
}

int qfalse_realsmith_1w9IH = 13;

int qtrue_realsmith_1w9IH = 5;

int realsmith_1w9IH( int realTime ) {
 char *cmd;
 cmd = ("0");
 (1);
 if ( (1) == 0 ) {
  (1);
  return qtrue_realsmith_1w9IH;
 }
 if ( (1) == 0 ) {
  (1);
  return qtrue_realsmith_1w9IH;
 }
 if ( (1) == 0 ) {
  (1);
  return qtrue_realsmith_1w9IH;
 }
 if ( (1) == 0 ) {
  (1);
  return qtrue_realsmith_1w9IH;
 }
 if ( (1) == 0 ) {
  (1);
  return qtrue_realsmith_1w9IH;
 }
 if ( (1) == 0 ) {
  (1);
  return qtrue_realsmith_1w9IH;
 }
 if ( (1) == 0 ) {
  (1);
  return qtrue_realsmith_1w9IH;
 }
 if ( (1) == 0 ) {
  (1);
  return qtrue_realsmith_1w9IH;
 }
 return qfalse_realsmith_1w9IH;
}

__attribute__((used)) static int realsmith_VkCfK(const int *addr, const int *broadcast)
{
 if ((1))
  return 0;
 if ((1))
  return 0;
 return 1;
}
int realsmith_proxy_SaCQ0(int p_0_sThOj, int p_1_9kJiG) {
int proxy_uZxR4[19] = { p_0_sThOj, 62, p_0_sThOj, p_0_sThOj, 55, 46, 47, p_0_sThOj, 39, 82, p_0_sThOj, p_0_sThOj, 21, p_0_sThOj, p_0_sThOj, 0, 10, 21, 13 };
int proxy_ret_eYfHc = realsmith_VkCfK(proxy_uZxR4, &(p_1_9kJiG));
return proxy_ret_eYfHc;
}


__attribute__((used)) static unsigned long
realsmith_YcVbk(int c, int *dst)
{
 if (c > 0x7f) {
  dst[0] = (c >> 6) | 0xc0;
  dst[1] = (c & 0x3f) | 0x80;
  return (2);
 }
 dst[0] = c;
 return (1);
}
unsigned long realsmith_proxy_IkDMm(int p_0_KyX2q, int p_1_zFUJS) {
int proxy_96g1Q[10] = { p_1_zFUJS, p_1_zFUJS, 32, 97, p_1_zFUJS, p_1_zFUJS, p_1_zFUJS, 29, 77, 22 };
unsigned long proxy_ret_dEUsH = realsmith_YcVbk(p_0_KyX2q, proxy_96g1Q);
return proxy_ret_dEUsH;
}


__attribute__((used)) static int
realsmith_mgwBc(int hook)
{
 const int node = (1);
 (1);
 if (((1) == 0) && (1))
  (1);
 return (0);
}

int EHEA_BUSMAP_REM_SECT_realsmith_tZdUB = -1;

int ehea_busmap_mutex_realsmith_tZdUB = 17;

int realsmith_tZdUB(unsigned long pfn, unsigned long nr_pages)
{
 int ret;
 (1);
 ret = (1);
 (1);
 return ret;
}

int S_OK_realsmith_trHHt = 18;

int TRUE_realsmith_trHHt = 6;

__attribute__((used)) static int realsmith_trHHt( int *stg, const int *clsid )
{
    static const char szTables_realsmith_trHHt[] = { '_','T','a','b','l','e','s',0 };
    int hr;
    hr = (1);
    if ((1))
    {
        (1);
        return hr;
    }
    hr = (1);
    if ((1))
    {
        (1);
        return hr;
    }
    hr = (1);
    if ((1))
    {
        (1);
        return hr;
    }
    hr = (1);
    if ((1))
    {
        (1);
        return hr;
    }
    return S_OK_realsmith_trHHt;
}
int realsmith_proxy_8j0yF(int p_0_ZkU0E, int p_1_8srZu) {
int proxy_0r91O[11] = { p_0_ZkU0E, 71, 91, p_0_ZkU0E, p_0_ZkU0E, p_0_ZkU0E, p_0_ZkU0E, 6, 25, p_0_ZkU0E, 42 };
int proxy_ZGqae[16] = { 38, p_1_8srZu, p_1_8srZu, p_1_8srZu, 12, p_1_8srZu, p_1_8srZu, p_1_8srZu, 53, p_1_8srZu, p_1_8srZu, 11, 81, 96, 86, p_1_8srZu };
int proxy_ret_0FMwx = realsmith_trHHt(proxy_0r91O, proxy_ZGqae);
return proxy_ret_0FMwx;
}


__attribute__((used)) static int realsmith_ffFwv(int addr)
{
 switch (addr) {
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  return 1;
 default:
  return 0;
 }
}

int AVERROR_INVALIDDATA_realsmith_odDie = 7;

__attribute__((used)) static int realsmith_odDie(int *ppcr_high, int *ppcr_low, const int *packet)
{
    int afc, len, flags;
    const int *p;
    unsigned int v;
    afc = (packet[3] >> 4) & 3;
    if (afc <= 1)
        return AVERROR_INVALIDDATA_realsmith_odDie;
    p = packet + 4;
    len = p[0];
    p++;
    if (len == 0)
        return AVERROR_INVALIDDATA_realsmith_odDie;
    flags = *p++;
    len--;
    if (!(flags & 0x10))
        return AVERROR_INVALIDDATA_realsmith_odDie;
    if (len < 6)
        return AVERROR_INVALIDDATA_realsmith_odDie;
    v = (1);
    *ppcr_high = ((int) v << 1) | (p[4] >> 7);
    *ppcr_low = ((p[4] & 1) << 8) | p[5];
    return 0;
}
int realsmith_proxy_MaZAi(int p_0_J5XAS, int p_1_ByDop, int p_2_v8b9r) {
int proxy_fnMov[11] = { p_0_J5XAS, 48, 82, p_0_J5XAS, p_0_J5XAS, p_0_J5XAS, p_0_J5XAS, p_0_J5XAS, 69, p_0_J5XAS, p_0_J5XAS };
int proxy_CtZeL[17] = { p_2_v8b9r, 83, 59, p_2_v8b9r, 87, p_2_v8b9r, 42, 4, 57, p_2_v8b9r, p_2_v8b9r, p_2_v8b9r, 61, 52, 39, p_2_v8b9r, 23 };
int proxy_ret_lLJWn = realsmith_odDie(proxy_fnMov, &(p_1_ByDop), proxy_CtZeL);
return proxy_ret_lLJWn;
}


int realsmith_LqYcU (int x) {
  return (x < 8) ? x : ((x & 7) + 8) << ((x >> 3) - 1);
}

__attribute__((used)) static int
realsmith_nJzjq(const unsigned char *s, int len)
{
 int l,
    mbl;
 unsigned char c1,
    c2;
 l = mbl = (1);
 if (len < l)
  return -1;
 if (l == 1)
  return mbl;
 c1 = *s++;
 c2 = *s;
 if (!(1) || !(1))
  return -1;
 return mbl;
}
int realsmith_proxy_ZA9kf(unsigned char p_0_BKBlH, int p_1_eDmvI) {
unsigned char proxy_g1Hcc[15] = { p_0_BKBlH, 63, 58, p_0_BKBlH, 54, p_0_BKBlH, p_0_BKBlH, p_0_BKBlH, p_0_BKBlH, p_0_BKBlH, p_0_BKBlH, p_0_BKBlH, p_0_BKBlH, 12, p_0_BKBlH };
int proxy_ret_lYtKx = realsmith_nJzjq(proxy_g1Hcc, p_1_eDmvI);
return proxy_ret_lYtKx;
}


long EWOULDBLOCK_realsmith_lMKNi = -7;

int FUTEX_WAIT_realsmith_lMKNi = -6;

int O_CLOEXEC_realsmith_lMKNi = 20;

int O_RDWR_realsmith_lMKNi = -10;

int SYS_futex_realsmith_lMKNi = -8;

long errno_realsmith_lMKNi = -6;

int ftx_realsmith_lMKNi = -3;

long parent_realsmith_lMKNi = 15;

int realsmith_lMKNi()
{
  int fd;
  char buf[128];
  if ((1) == -1 &&
      errno_realsmith_lMKNi != EWOULDBLOCK_realsmith_lMKNi)
    (1);
  (1);
  fd = (1);
  if (fd == -1)
    (1);
  if ((1) != 1)
    (1);
  (1);
  return 0;
}

int PCI_HEADER_TYPE_realsmith_BSlR4 = 16;

int PCI_STATUS_realsmith_BSlR4 = -8;

__attribute__((used)) static int realsmith_BSlR4(unsigned int bus, unsigned int devfn, int reg)
{
 if (reg >= 0x100 || reg == PCI_STATUS_realsmith_BSlR4 || reg == PCI_HEADER_TYPE_realsmith_BSlR4)
  return 0;
 if (bus == 0 && (devfn == (1)
    || devfn == (1)
    || devfn == (1)))
  return 1;
 return 0;
}

int IB_OPCODE_TID_RDMA_realsmith_UmNsp = -8;

long PBC_IHCRC_LKDETH_realsmith_UmNsp = 7;

int PBC_INSERT_HCRC_SHIFT_realsmith_UmNsp = 17;

int PBC_INSERT_HCRC_SMASK_realsmith_UmNsp = -3;

__attribute__((used)) static int realsmith_UmNsp(int opcode, int pbc)
{
 if ((opcode & IB_OPCODE_TID_RDMA_realsmith_UmNsp) == IB_OPCODE_TID_RDMA_realsmith_UmNsp) {
  pbc &= ~PBC_INSERT_HCRC_SMASK_realsmith_UmNsp;
  pbc |= (int)PBC_IHCRC_LKDETH_realsmith_UmNsp << PBC_INSERT_HCRC_SHIFT_realsmith_UmNsp;
 }
 return pbc;
}

int EINVAL_realsmith_VM44Y = -2;

__attribute__((used)) static int realsmith_VM44Y(int dir)
{
 switch (dir) {
 case 129:
 case 128:
 case 130:
  break;
 default:
  return -EINVAL_realsmith_VM44Y;
 }
 return 0;
}

int MAX_COLS_realsmith_pjAH2 = 3;

int realsmith_pjAH2(int offset) { return offset / (2 * MAX_COLS_realsmith_pjAH2); }

int BAUD_RATE_realsmith_nVQ7B = 12;

int CLK_FREQ_MHZ_realsmith_nVQ7B = -2;

unsigned int realsmith_nVQ7B( void )
{
    return (CLK_FREQ_MHZ_realsmith_nVQ7B * 125000) / BAUD_RATE_realsmith_nVQ7B - 1;
}

int cnt_all_copy_realsmith_6YH8X = 18;

int prof_dump_header_intercepted_realsmith_6YH8X = -9;

__attribute__((used)) static int
realsmith_6YH8X(int propagate_err, const int *cnt_all)
{
 prof_dump_header_intercepted_realsmith_6YH8X = 1;
 (1);
 return (0);
}
int realsmith_proxy_JzT3Y(int p_0_62HVl, int p_1_KMa1W) {
int proxy_ret_dNLYT = realsmith_6YH8X(p_0_62HVl, &(p_1_KMa1W));
return proxy_ret_dNLYT;
}


__attribute__((used)) static inline int realsmith_PwjUx(const int *data, unsigned long index)
{
 return !!(data[index / 8] & (1 << (7 - (index % 8))));
}
int realsmith_proxy_uzIp8(int p_0_C1aQ0, unsigned long p_1_kDXsd) {
int proxy_RGslo[14] = { p_0_C1aQ0, p_0_C1aQ0, p_0_C1aQ0, p_0_C1aQ0, 55, 98, 8, 40, 18, 24, p_0_C1aQ0, 87, p_0_C1aQ0, 31 };
int proxy_ret_NI0MU = realsmith_PwjUx(proxy_RGslo, p_1_kDXsd);
return proxy_ret_NI0MU;
}


int FASTTRAP_T_COMMON_realsmith_SIGro = 2;

int FASTTRAP_T_INV_realsmith_SIGro = -10;

int FASTTRAP_T_LDR_PC_IMMED_realsmith_SIGro = 18;

long REG_PC_realsmith_SIGro = -7;

__attribute__((used)) static
int realsmith_SIGro(int instr)
{
 int R = (1), L = (1);
 if (R == 1) {
  if ((1) != REG_PC_realsmith_SIGro && (1) != REG_PC_realsmith_SIGro && (1) != REG_PC_realsmith_SIGro)
   return FASTTRAP_T_COMMON_realsmith_SIGro;
 } else {
  if (L == 1 && (1) == REG_PC_realsmith_SIGro && (1) != REG_PC_realsmith_SIGro)
   return FASTTRAP_T_LDR_PC_IMMED_realsmith_SIGro;
  if ((1) != REG_PC_realsmith_SIGro && (1) != REG_PC_realsmith_SIGro)
   return FASTTRAP_T_COMMON_realsmith_SIGro;
 }
 return FASTTRAP_T_INV_realsmith_SIGro;
}

int TX_SDMA0_DISALLOWED_PACKET_realsmith_DlTrX = -8;

int TX_SDMA15_DISALLOWED_PACKET_realsmith_DlTrX = -7;

__attribute__((used)) static inline int realsmith_DlTrX(int posn)
{
 return (posn >= (1) &&
  posn <= (1));
}

__attribute__((used)) static int realsmith_yyNAr(int cur, int prev, int abits)
{
    const int dbits = (abits == 8) ? 4 : 7;
    const int dsize = 1 << dbits - 1;
    int diff = cur - prev;
    diff = (1);
    if (diff >= (1 << abits) - dsize)
        diff -= 1 << abits;
    if (diff < -dsize || diff > dsize || !diff)
        return abits + 1;
    else
        return dbits + 1;
}

int NGX_OK_realsmith_qvLDl = -1;

int ngx_http_top_body_filter_realsmith_qvLDl = 20;

int ngx_http_write_filter_realsmith_qvLDl = 13;

__attribute__((used)) static int
realsmith_qvLDl(int *cf)
{
    ngx_http_top_body_filter_realsmith_qvLDl = ngx_http_write_filter_realsmith_qvLDl;
    return NGX_OK_realsmith_qvLDl;
}
int realsmith_proxy_UfcuG(int p_0_HGUjb) {
int proxy_ret_r1JxF = realsmith_qvLDl(&(p_0_HGUjb));
return proxy_ret_r1JxF;
}


int DRIVER_NAME_realsmith_Qy9wa = 8;

int FALSE_realsmith_Qy9wa = 7;

int TRUE_realsmith_Qy9wa = 13;

__attribute__((used)) static int
realsmith_Qy9wa(int lpDriverPath)
{
    if (!(1))
    {
        (1);
        return FALSE_realsmith_Qy9wa;
    }
    return TRUE_realsmith_Qy9wa;
}

int PSR_CF_realsmith_LGQA3 = 19;

int PSR_NF_realsmith_LGQA3 = 0;

int PSR_VF_realsmith_LGQA3 = -7;

int PSR_ZF_realsmith_LGQA3 = 17;

__attribute__((used)) static int realsmith_LGQA3(int cond, int cpsr)
{
 int taken = 0;
 int zf = (cpsr & PSR_ZF_realsmith_LGQA3) ? 1 : 0,
     nf = (cpsr & PSR_NF_realsmith_LGQA3) ? 1 : 0,
     cf = (cpsr & PSR_CF_realsmith_LGQA3) ? 1 : 0,
     vf = (cpsr & PSR_VF_realsmith_LGQA3) ? 1 : 0;
 switch(cond) {
  case 0: taken = zf; break;
  case 1: taken = !zf; break;
  case 2: taken = cf; break;
  case 3: taken = !cf; break;
  case 4: taken = nf; break;
  case 5: taken = !nf; break;
  case 6: taken = vf; break;
  case 7: taken = !vf; break;
  case 8: taken = (cf && !zf); break;
  case 9: taken = (!cf || zf); break;
  case 10: taken = (nf == vf); break;
  case 11: taken = (nf != vf); break;
  case 12: taken = (!zf && (nf == vf)); break;
  case 13: taken = (zf || (nf != vf)); break;
  case 14: taken = 1; break;
  case 15: taken = 1; break;
 }
 return taken;
}

const char *
realsmith_6wd3z(const char *p)
{
 while (*p && (1))
  p++;
 return (p);
}
char realsmith_proxy_FKN7Z(char p_0_A33Jf) {
char * proxy_ret_pLBOj = realsmith_6wd3z(&(p_0_A33Jf));
return *proxy_ret_pLBOj;
}


int DIOCGETSTATUS_realsmith_NpCyp = 12;

int LOG_ERR_realsmith_NpCyp = 8;

int dev_realsmith_NpCyp = 17;

int errno_realsmith_NpCyp = -9;

long pf_tick_realsmith_NpCyp = -10;

int pfs_realsmith_NpCyp = 16;

long started_realsmith_NpCyp = 18;

long this_tick_realsmith_NpCyp = 19;

__attribute__((used)) static int
realsmith_NpCyp(void)
{
 if (started_realsmith_NpCyp && this_tick_realsmith_NpCyp <= pf_tick_realsmith_NpCyp)
  return (0);
 (1);
 if ((1)) {
  (1);
  return (-1);
 }
 pf_tick_realsmith_NpCyp = this_tick_realsmith_NpCyp;
 return (0);
}

__attribute__((used)) static int
realsmith_R7NDB(
 register const char *s
 )
{
 register int c;
 c = 0;
 if (s)
 {
  while (*s++)
  {
   c++;
  }
 }
 return c;
}
int realsmith_proxy_dgg2q(char p_0_cOPx6) {
char proxy_cH3oD[17] = { 0, 17, 19, 95, p_0_cOPx6, 82, p_0_cOPx6, 69, p_0_cOPx6, 76, 72, p_0_cOPx6, p_0_cOPx6, p_0_cOPx6, 38, p_0_cOPx6, 4 };
int proxy_ret_cyB6U = realsmith_R7NDB(proxy_cH3oD);
return proxy_ret_cyB6U;
}


int error_msg_realsmith_a86Kp = 10;

__attribute__((used)) static int *realsmith_a86Kp(int *obj, int *retval)
{
 if ((1)) {
  (1);
 } else {
  (1);
 }
 return retval;
}
int realsmith_proxy_Tnz9E(int p_0_G2pNA, int p_1_0PkVU) {
int * proxy_ret_G3L5I = realsmith_a86Kp(&(p_0_G2pNA), &(p_1_0PkVU));
return *proxy_ret_G3L5I;
}


int realsmith_RUQMl(int f)
{
    int f_exp, f_sig;
    int h_sgn, h_exp, h_sig;
    h_sgn = (int) ((f&0x80000000u) >> 16);
    f_exp = (f&0x7f800000u);
    if (f_exp >= 0x47800000u) {
        if (f_exp == 0x7f800000u) {
            f_sig = (f&0x007fffffu);
            if (f_sig != 0) {
                int ret = (int) (0x7c00u + (f_sig >> 13));
                if (ret == 0x7c00u) {
                    ret++;
                }
                return h_sgn + ret;
            } else {
                return (int) (h_sgn + 0x7c00u);
            }
        } else {
            return (int) (h_sgn + 0x7c00u);
        }
    }
    if (f_exp <= 0x38000000u) {
        if (f_exp < 0x33000000u) {
            return h_sgn;
        }
        f_exp >>= 23;
        f_sig = (0x00800000u + (f&0x007fffffu));
        f_sig >>= (113 - f_exp);
        f_sig += 0x00001000u;
        h_sig = (int) (f_sig >> 13);
        return (int) (h_sgn + h_sig);
    }
    h_exp = (int) ((f_exp - 0x38000000u) >> 13);
    f_sig = (f&0x007fffffu);
    f_sig += 0x00001000u;
    h_sig = (int) (f_sig >> 13);
    return h_sgn + h_exp + h_sig;
}

long dict_hash_function_seed_realsmith_ufjdf = -8;

unsigned int realsmith_ufjdf(const unsigned char *buf, int len) {
    unsigned int hash = (unsigned int)dict_hash_function_seed_realsmith_ufjdf;
    while (len--)
        hash = ((hash << 5) + hash) + ((1));
    return hash;
}
unsigned int realsmith_proxy_M6orU(unsigned char p_0_fsvkR, int p_1_Vkag1) {
unsigned char proxy_d6eIJ[12] = { p_0_fsvkR, 47, 73, 17, 31, 66, 42, p_0_fsvkR, 96, p_0_fsvkR, 72, 58 };
unsigned int proxy_ret_RbDN6 = realsmith_ufjdf(proxy_d6eIJ, p_1_Vkag1);
return proxy_ret_RbDN6;
}


int LI_INTR_MASK_realsmith_Q7sfm = 10;

int LI_INTR_STATUS_realsmith_Q7sfm = -7;

__attribute__((used)) static unsigned int realsmith_Q7sfm(int *lith)
{
 unsigned int status;
 status = (1);
 (1);
 return status & (1);
}
unsigned int realsmith_proxy_uQDSI(int p_0_jAlA4) {
unsigned int proxy_ret_Eh4F5 = realsmith_Q7sfm(&(p_0_jAlA4));
return proxy_ret_Eh4F5;
}


char * realsmith_6UU1O(const char *s)
{
 char *res;
 unsigned long len;
 if (s == ((void*)0))
  return ((void*)0);
 len = (1);
 res = ("0");
 if (res)
  (1);
 return res;
}
char realsmith_proxy_KVylQ(char p_0_hI3zi) {
char * proxy_ret_wQQlI = realsmith_6UU1O(&(p_0_hI3zi));
return *proxy_ret_wQQlI;
}


long KERN_SUCCESS_realsmith_FJEjl = -3;

long MACH_PORT_NULL_realsmith_FJEjl = -4;

long
realsmith_FJEjl(int thread,
                        long port_name)
{
 struct work_interval *work_interval = ((void*)0);
 long kr;
 if (port_name == MACH_PORT_NULL_realsmith_FJEjl) {
  (1);
  return KERN_SUCCESS_realsmith_FJEjl;
 }
 kr = (1);
 if (kr != KERN_SUCCESS_realsmith_FJEjl)
  return kr;
 (1);
 (1);
 return KERN_SUCCESS_realsmith_FJEjl;
}

int NGX_ERROR_realsmith_R56MS = 12;

int NGX_LOG_EMERG_realsmith_R56MS = 17;

int NGX_OK_realsmith_R56MS = -6;

int ngx_errno_realsmith_R56MS = 0;

int st_realsmith_R56MS = -7;

int
realsmith_R56MS(int *log)
{
    if ((1) == 0) {
        (1);
        return NGX_ERROR_realsmith_R56MS;
    }
    return NGX_OK_realsmith_R56MS;
}
int realsmith_proxy_O9WcM(int p_0_vtZuN) {
int proxy_ret_7lnkm = realsmith_R56MS(&(p_0_vtZuN));
return proxy_ret_7lnkm;
}


__attribute__((used)) static int
realsmith_WIbZP (int stmt)
{
  int i;
  if ((1))
    return 1;
  i = (1);
  switch ((1))
    {
    case 129:
      for (; !(1); (1))
 {
   if ((1))
     return 1;
 }
      return 0;
    case 128:
      return (1);
    default:
      return 0;
    }
}

int EINVAL_realsmith_Qy7Hd = 0;

__attribute__((used)) static int realsmith_Qy7Hd(int dir)
{
 switch (dir) {
 case 129:
 case 128:
 case 130:
  break;
 default:
  return -EINVAL_realsmith_Qy7Hd;
 }
 return 0;
}

int BUS_PROBE_DEFAULT_realsmith_d8YzX = 8;

int ENXIO_realsmith_d8YzX = 16;

__attribute__((used)) static int
realsmith_d8YzX(int dev)
{
 if (!(1))
  return (ENXIO_realsmith_d8YzX);
 if (!(1))
  return (ENXIO_realsmith_d8YzX);
 (1);
 return (BUS_PROBE_DEFAULT_realsmith_d8YzX);
}

int TWCR_realsmith_oNKmy = 12;

unsigned char TWDR_realsmith_oNKmy = 8;

int TWEN_realsmith_oNKmy = 20;

int TWINT_realsmith_oNKmy = 18;

int TW_MT_DATA_ACK_realsmith_oNKmy = 7;

int TW_STATUS_realsmith_oNKmy = -2;

unsigned char realsmith_oNKmy( unsigned char data )
{
    int twst;
  TWDR_realsmith_oNKmy = data;
  TWCR_realsmith_oNKmy = (1<<TWINT_realsmith_oNKmy) | (1<<TWEN_realsmith_oNKmy);
  while(!(TWCR_realsmith_oNKmy & (1<<TWINT_realsmith_oNKmy)));
  twst = TW_STATUS_realsmith_oNKmy & 0xF8;
  if( twst != TW_MT_DATA_ACK_realsmith_oNKmy) return 1;
  return 0;
}

__attribute__((used)) static int realsmith_D0abV(int namelen, char* name) {
    int i;
    if (namelen != 36 * sizeof(char))
        return 0;
    for (i = 0; i < 36; i++) {
        if (i == 8 || i == 13 || i == 18 || i == 23) {
            if (name[i] != '-')
                return 0;
        } else if (!(1))
            return 0;
    }
    return 1;
}
int realsmith_proxy_mdLbk(int p_0_RopRy, char p_1_bcSR4) {
int proxy_ret_982MS = realsmith_D0abV(p_0_RopRy, &(p_1_bcSR4));
return proxy_ret_982MS;
}


long CURLE_OK_realsmith_FtDPr = 15;

int CURL_GLOBAL_ALL_realsmith_FtDPr = 2;

int FALSE_realsmith_FtDPr = 16;

int TEST_ERR_MAJOR_BAD_realsmith_FtDPr = 12;

int TRUE_realsmith_FtDPr = 2;

int stderr_realsmith_FtDPr = -4;

int realsmith_FtDPr(char *URL)
{
  int res;
  if((1) != CURLE_OK_realsmith_FtDPr) {
    (1);
    return TEST_ERR_MAJOR_BAD_realsmith_FtDPr;
  }
  res = (1);
  if(!res)
    res = (1);
  (1);
  return res;
}
int realsmith_proxy_ROOFK(char p_0_2pUh1) {
char proxy_nLFlV[13] = { p_0_2pUh1, p_0_2pUh1, 73, 96, 93, 14, p_0_2pUh1, 41, 47, 73, 85, p_0_2pUh1, 86 };
int proxy_ret_lB5Up = realsmith_FtDPr(proxy_nLFlV);
return proxy_ret_lB5Up;
}


int RSPEC_MIMORATE_realsmith_v2z7O = 7;

int RSPEC_RATE_MASK_realsmith_v2z7O = 1;

__attribute__((used)) static inline int realsmith_v2z7O(int rspec)
{
 if (rspec & RSPEC_MIMORATE_realsmith_v2z7O)
  return (1);
 return rspec & RSPEC_RATE_MASK_realsmith_v2z7O;
}

__attribute__((used)) static int
realsmith_ML0qT(char *data, unsigned long size)
{
 unsigned long i = 0, n = 0;
 char c;
 if (size < 3) return 0;
 if (data[0] == ' ') { i++;
 if (data[1] == ' ') { i++;
 if (data[2] == ' ') { i++; } } }
 if (i + 2 >= size
 || (data[i] != '*' && data[i] != '-' && data[i] != '_'))
  return 0;
 c = data[i];
 while (i < size && data[i] != '\n') {
  if (data[i] == c) n++;
  else if (data[i] != ' ')
   return 0;
  i++;
 }
 return n >= 3;
}
int realsmith_proxy_zqrNB(char p_0_dRX2z, unsigned long p_1_RwQe6) {
int proxy_ret_XuHLq = realsmith_ML0qT(&(p_0_dRX2z), p_1_RwQe6);
return proxy_ret_XuHLq;
}


__attribute__((used)) static int
realsmith_ri5Yf(int dividend, int divisor, int precision)
{
 int quotient, remainder, roundup, rbit;
 quotient = dividend / divisor;
 remainder = dividend % divisor;
 rbit = divisor & 1;
 roundup = (divisor >> 1) + rbit;
 while (precision--) {
  quotient <<= 1;
  if (remainder >= roundup) {
   quotient++;
   remainder = ((remainder - roundup) << 1) + rbit;
  } else {
   remainder <<= 1;
  }
 }
 if (remainder >= roundup)
  quotient++;
 return quotient;
}

__attribute__((used)) static char* realsmith_kF3uP(char* ptr)
{
 static const char comW_realsmith_kF3uP[] = {'C','O','M',0};
 if(!(1))
 {
  ptr += 3;
  if(*ptr < '1' || *ptr > '9')
   return ((void*)0);
  while(*ptr >= '0' && *ptr <= '9') ptr++;
  if(*ptr != ':' && *ptr != ' ')
   return ((void*)0);
  while(*ptr == ' ') ptr++;
  if(*ptr == ':')
  {
   ptr++;
   while(*ptr == ' ') ptr++;
  }
 }
 else if(*ptr == ' ')
  return ((void*)0);
 return ptr;
}
char realsmith_proxy_2sxje(char p_0_Fym3i) {
char * proxy_ret_1Fuj6 = realsmith_kF3uP(&(p_0_Fym3i));
return *proxy_ret_1Fuj6;
}


__attribute__((used)) static inline int realsmith_Jzc82(int len1, const unsigned char *name1, int len2,
       const unsigned char *name2)
{
 if (len1 != len2)
  return 0;
 return !(1);
}
int realsmith_proxy_aZGF3(int p_0_qj6kn, unsigned char p_1_IftkB, int p_2_7pTIb, unsigned char p_3_LPHZ2) {
unsigned char proxy_WrzHv[20] = { p_1_IftkB, p_1_IftkB, 61, p_1_IftkB, p_1_IftkB, 4, p_1_IftkB, p_1_IftkB, p_1_IftkB, 79, p_1_IftkB, 98, 82, p_1_IftkB, 66, p_1_IftkB, p_1_IftkB, p_1_IftkB, p_1_IftkB, 42 };
unsigned char proxy_GyJqU[13] = { 0, 23, 94, p_3_LPHZ2, 14, 43, p_3_LPHZ2, 60, p_3_LPHZ2, p_3_LPHZ2, 70, 28, p_3_LPHZ2 };
int proxy_ret_7GoOW = realsmith_Jzc82(p_0_qj6kn, proxy_WrzHv, p_2_7pTIb, proxy_GyJqU);
return proxy_ret_7GoOW;
}


int RTM_BASE_realsmith_tYB1b = 11;

int RTM_NR_MSGTYPES_realsmith_tYB1b = 12;

__attribute__((used)) static inline int realsmith_tYB1b(int msgtype)
{
 int msgindex = msgtype - RTM_BASE_realsmith_tYB1b;
 (1);
 return msgindex;
}

int IB_ACCESS_LOCAL_WRITE_realsmith_irYXV = 16;

int IB_ACCESS_REMOTE_ATOMIC_realsmith_irYXV = -7;

int IB_ACCESS_REMOTE_READ_realsmith_irYXV = 17;

int IB_ACCESS_REMOTE_WRITE_realsmith_irYXV = 2;

int MTHCA_MPT_FLAG_ATOMIC_realsmith_irYXV = -8;

int MTHCA_MPT_FLAG_LOCAL_READ_realsmith_irYXV = 0;

int MTHCA_MPT_FLAG_LOCAL_WRITE_realsmith_irYXV = 11;

int MTHCA_MPT_FLAG_REMOTE_READ_realsmith_irYXV = -2;

int MTHCA_MPT_FLAG_REMOTE_WRITE_realsmith_irYXV = -5;

__attribute__((used)) static inline int realsmith_irYXV(int acc)
{
 return (acc & IB_ACCESS_REMOTE_ATOMIC_realsmith_irYXV ? MTHCA_MPT_FLAG_ATOMIC_realsmith_irYXV : 0) |
        (acc & IB_ACCESS_REMOTE_WRITE_realsmith_irYXV ? MTHCA_MPT_FLAG_REMOTE_WRITE_realsmith_irYXV : 0) |
        (acc & IB_ACCESS_REMOTE_READ_realsmith_irYXV ? MTHCA_MPT_FLAG_REMOTE_READ_realsmith_irYXV : 0) |
        (acc & IB_ACCESS_LOCAL_WRITE_realsmith_irYXV ? MTHCA_MPT_FLAG_LOCAL_WRITE_realsmith_irYXV : 0) |
        MTHCA_MPT_FLAG_LOCAL_READ_realsmith_irYXV;
}

__attribute__((used)) static inline int realsmith_H8NeZ(const char *s) {
    int n = 0;
    char c;
    for(c = *s; c >= '0' && c <= '9' ; c = *(++s)) {
        n *= 10;
        n += c - '0';
    }
    return n;
}
int realsmith_proxy_lntaO(char p_0_3EIRF) {
char proxy_xp5Yd[14] = { 9, p_0_3EIRF, p_0_3EIRF, 96, p_0_3EIRF, 22, 61, 49, 62, p_0_3EIRF, 45, 14, p_0_3EIRF, 85 };
int proxy_ret_iVrfX = realsmith_H8NeZ(proxy_xp5Yd);
return proxy_ret_iVrfX;
}


int realsmith_8bRxM(int *small, int *large)
{
    if ((1) > 2e3) {
 *small = (1);
 *large = (1);
    }
    return 0;
}
int realsmith_proxy_Wu5GM(int p_0_mGklq, int p_1_qczXQ) {
int proxy_ujlwu[18] = { p_1_qczXQ, 86, 32, p_1_qczXQ, p_1_qczXQ, p_1_qczXQ, 20, 44, 84, 5, p_1_qczXQ, p_1_qczXQ, p_1_qczXQ, 12, 39, 64, 62, 100 };
int proxy_ret_vlwlX = realsmith_8bRxM(&(p_0_mGklq), proxy_ujlwu);
return proxy_ret_vlwlX;
}


int INT_MAX_realsmith_1fJ4Y = 16;

__attribute__((used)) static inline int realsmith_1fJ4Y(int *s, const int *buffer,
                                 int byte_size)
{
    if (byte_size > INT_MAX_realsmith_1fJ4Y / 8 || byte_size < 0)
        byte_size = -1;
    return (1);
}
int realsmith_proxy_4TkvY(int p_0_PS1RM, int p_1_37A31, int p_2_XrZNT) {
int proxy_A5rur[15] = { p_0_PS1RM, p_0_PS1RM, p_0_PS1RM, 84, p_0_PS1RM, 75, 90, 11, 86, p_0_PS1RM, p_0_PS1RM, p_0_PS1RM, 100, 22, 91 };
int proxy_ret_M2vTj = realsmith_1fJ4Y(proxy_A5rur, &(p_1_37A31), p_2_XrZNT);
return proxy_ret_M2vTj;
}


__attribute__((used)) static inline int realsmith_g90q9(const char *s) {
    int n = 0;
    char c;
    for(c = *s; c >= '0' && c <= '9' ; c = *(++s)) {
        n *= 10;
        n += c - '0';
    }
    return n;
}
int realsmith_proxy_KFTE5(char p_0_8z8dP) {
int proxy_ret_SDfZ9 = realsmith_g90q9(&(p_0_8z8dP));
return proxy_ret_SDfZ9;
}


__attribute__((used)) static long
realsmith_LZw2V(int fd, unsigned char *buf, unsigned long count)
{
 unsigned long numread = 0;
 long result;
 while (numread < count) {
  result = (1);
  if (result<0)
   return -1;
  else if (result == 0)
   break;
  numread += result;
 }
 return (long)numread;
}
long realsmith_proxy_bumbz(int p_0_QpKHR, unsigned char p_1_Jbb73, unsigned long p_2_oKm9x) {
unsigned char proxy_H4WS9[16] = { 20, p_1_Jbb73, 63, p_1_Jbb73, 72, p_1_Jbb73, p_1_Jbb73, p_1_Jbb73, p_1_Jbb73, 25, p_1_Jbb73, 99, 20, 73, p_1_Jbb73, 99 };
long proxy_ret_Cm77T = realsmith_LZw2V(p_0_QpKHR, proxy_H4WS9, p_2_oKm9x);
return proxy_ret_Cm77T;
}


int FALSE_realsmith_0je0c = -6;

int TRUE_realsmith_0je0c = 11;

int realsmith_0je0c(int *stream, int *buf)
{
    if(!(1))
        return FALSE_realsmith_0je0c;
    return TRUE_realsmith_0je0c;
}
int realsmith_proxy_BrpeS(int p_0_9GO32, int p_1_4jC5s) {
int proxy_z0ieC[18] = { p_0_9GO32, p_0_9GO32, 55, 37, 24, p_0_9GO32, 40, 33, p_0_9GO32, 5, p_0_9GO32, p_0_9GO32, p_0_9GO32, p_0_9GO32, 27, 91, 90, 47 };
int proxy_ret_lWi4f = realsmith_0je0c(proxy_z0ieC, &(p_1_4jC5s));
return proxy_ret_lWi4f;
}


int TFF_PLAIN_IDENTIFIER_realsmith_qc6Ll = -9;

long base_dtor_identifier_realsmith_qc6Ll = 5;

long complete_dtor_identifier_realsmith_qc6Ll = -4;

long deleting_dtor_identifier_realsmith_qc6Ll = 1;

__attribute__((used)) static char *
realsmith_qc6Ll (long name, long type, int *free_p)
{
  char *pretty_name;
  *free_p = 0;
  if ((1))
    {
      pretty_name
 = (char *) (1);
      if (name == complete_dtor_identifier_realsmith_qc6Ll
   || name == base_dtor_identifier_realsmith_qc6Ll
   || name == deleting_dtor_identifier_realsmith_qc6Ll)
 {
   pretty_name = ("0");
   *free_p = 1;
 }
    }
  else if ((1))
    {
      pretty_name = ("0");
      *free_p = 1;
    }
  else
    pretty_name = (char *) (1);
  return pretty_name;
}
char realsmith_proxy_HBSNp(long p_0_J9U2G, long p_1_f4VID, int p_2_tePvM) {
int proxy_rl3AR[15] = { 90, p_2_tePvM, 48, 45, p_2_tePvM, p_2_tePvM, p_2_tePvM, 18, p_2_tePvM, p_2_tePvM, 85, p_2_tePvM, p_2_tePvM, p_2_tePvM, p_2_tePvM };
char * proxy_ret_fnNI2 = realsmith_qc6Ll(p_0_J9U2G, p_1_f4VID, proxy_rl3AR);
return *proxy_ret_fnNI2;
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

__attribute__((used)) static int realsmith_bdrcD(const int *str, unsigned int index, unsigned int end)
{
    if (index < end-1 && (1))
    {
        int ch = 0x10000 + ((str[index] - 0xd800) << 10) + (str[index+1] - 0xdc00);
        (1);
        return ch;
    }
    return 0;
}
int realsmith_proxy_Wj00e(int p_0_x96U5, unsigned int p_1_KSsfS, unsigned int p_2_Hm7H1) {
int proxy_xrLZ5[20] = { p_0_x96U5, p_0_x96U5, p_0_x96U5, p_0_x96U5, 13, 83, p_0_x96U5, p_0_x96U5, 55, 54, p_0_x96U5, p_0_x96U5, p_0_x96U5, 8, p_0_x96U5, 89, p_0_x96U5, 45, p_0_x96U5, p_0_x96U5 };
int proxy_ret_QMALO = realsmith_bdrcD(proxy_xrLZ5, p_1_KSsfS, p_2_Hm7H1);
return proxy_ret_QMALO;
}


int TARGET_PTR_BIT_realsmith_tZLgh = 5;

__attribute__((used)) static int
realsmith_tZLgh (int addr)
{
  if (TARGET_PTR_BIT_realsmith_tZLgh == sizeof (int) * 8)
    return addr;
  else
    return addr & (((int) 1 << TARGET_PTR_BIT_realsmith_tZLgh) - 1);
}

int HEADER_TSTAMP_MASK_realsmith_S3P5B = 1;

__attribute__((used)) static inline int realsmith_S3P5B(int ctx_header_tstamp)
{
 int tstamp = (1) & HEADER_TSTAMP_MASK_realsmith_S3P5B;
 return (((tstamp >> 13) & 0x07) * 8000) + (tstamp & 0x1fff);
}

__attribute__((used)) static int realsmith_IbxDG(int i, char *buf)
{
 while (i && buf[i] == ' ')
  i--;
 buf[i+1] = ' ';
 buf[i+2] = '\0';
 return i + 2;
}
int realsmith_proxy_CRupD(int p_0_D6gGQ, char p_1_UQVMW) {
char proxy_03Yz4[10] = { p_1_UQVMW, 95, 53, p_1_UQVMW, p_1_UQVMW, 14, p_1_UQVMW, 76, p_1_UQVMW, p_1_UQVMW };
int proxy_ret_Vi3nP = realsmith_IbxDG(p_0_D6gGQ, proxy_03Yz4);
return proxy_ret_Vi3nP;
}


long YRMCDS_BAD_ARGUMENT_realsmith_RhpsW = 20;

long YRMCDS_OK_realsmith_RhpsW = 2;

long realsmith_RhpsW(int* c, const char* key, unsigned long key_len,
                                int quiet, int* serial) {
    if( key == ((void*)0) || key_len == 0 || quiet )
        return YRMCDS_BAD_ARGUMENT_realsmith_RhpsW;
    long ret;
    ret = (1);
    if( ret != YRMCDS_OK_realsmith_RhpsW ) return ret;
    int buf[1];
    (1);
    (1);
    (1);
    return (1);
}
long realsmith_proxy_nmsXe(int p_0_yvx1Q, char p_1_UCg7O, unsigned long p_2_c6iOX, int p_3_DsPH0, int p_4_lGDzq) {
int proxy_zqjGz[13] = { 61, p_0_yvx1Q, p_0_yvx1Q, 41, 70, p_0_yvx1Q, p_0_yvx1Q, 83, p_0_yvx1Q, 0, 54, p_0_yvx1Q, p_0_yvx1Q };
char proxy_hwanj[15] = { p_1_UCg7O, 22, p_1_UCg7O, p_1_UCg7O, 90, 76, 41, 36, p_1_UCg7O, p_1_UCg7O, 43, p_1_UCg7O, p_1_UCg7O, 98, p_1_UCg7O };
int proxy_ChkM5[20] = { p_4_lGDzq, 28, p_4_lGDzq, p_4_lGDzq, p_4_lGDzq, p_4_lGDzq, p_4_lGDzq, 33, p_4_lGDzq, p_4_lGDzq, p_4_lGDzq, p_4_lGDzq, p_4_lGDzq, p_4_lGDzq, 73, p_4_lGDzq, 46, p_4_lGDzq, p_4_lGDzq, p_4_lGDzq };
long proxy_ret_2WcoQ = realsmith_RhpsW(proxy_zqjGz, proxy_hwanj, p_2_c6iOX, p_3_DsPH0, proxy_ChkM5);
return proxy_ret_2WcoQ;
}


int _EINVAL_realsmith_5F5el = 12;

int realsmith_5F5el(int addr, long len) {
    (1);
    if ((1) != 0)
        return _EINVAL_realsmith_5F5el;
    if (len == 0)
        return _EINVAL_realsmith_5F5el;
    (1);
    int err = (1);
    (1);
    if (err < 0)
        return _EINVAL_realsmith_5F5el;
    return 0;
}

__attribute__((used)) static
const char *realsmith_26fi7(unsigned long vec)
{
 char *ret;
 switch (vec) {
 case 0x100: ret = "(System Reset)"; break;
 case 0x200: ret = "(Machine Check)"; break;
 case 0x300: ret = "(Data Access)"; break;
 case 0x380: ret = "(Data SLB Access)"; break;
 case 0x400: ret = "(Instruction Access)"; break;
 case 0x480: ret = "(Instruction SLB Access)"; break;
 case 0x500: ret = "(Hardware Interrupt)"; break;
 case 0x600: ret = "(Alignment)"; break;
 case 0x700: ret = "(Program Check)"; break;
 case 0x800: ret = "(FPU Unavailable)"; break;
 case 0x900: ret = "(Decrementer)"; break;
 case 0xc00: ret = "(System Call)"; break;
 case 0xd00: ret = "(Single Step)"; break;
 case 0xf00: ret = "(Performance Monitor)"; break;
 case 0xf20: ret = "(Altivec Unavailable)"; break;
 case 0x1300: ret = "(Instruction Breakpoint)"; break;
 default: ret = "";
 }
 return ret;
}
char realsmith_proxy_fXPj2(unsigned long p_0_6XM3T) {
char * proxy_ret_ejhel = realsmith_26fi7(p_0_6XM3T);
return *proxy_ret_ejhel;
}


int KEY_ALL_ACCESS_realsmith_N6v4b = -5;

int REG_BINARY_realsmith_N6v4b = 17;

int REG_OPTION_NON_VOLATILE_realsmith_N6v4b = 9;

int TRUE_realsmith_N6v4b = 5;

__attribute__((used)) static int
realsmith_N6v4b(int hDomainKey,
                          char* AliasId,
                          long MemberSid)
{
    int dwDisposition;
    char* MemberSidString = ((void*)0);
    char szKeyName[256];
    int hMembersKey;
    (1);
    (1);
    if (!(1))
    {
        (1);
        (1);
    }
    (1);
    if (!(1))
    {
        (1);
        (1);
        (1);
    }
    if (MemberSidString != ((void*)0))
        (1);
    return TRUE_realsmith_N6v4b;
}
int realsmith_proxy_ORdgl(int p_0_lMit6, char p_1_0E35S, long p_2_oiV18) {
int proxy_ret_AREVY = realsmith_N6v4b(p_0_lMit6, &(p_1_0E35S), p_2_oiV18);
return proxy_ret_AREVY;
}


int
realsmith_DvI46(int vp)
{
        int retval;
 (1);
 retval = (1);
 (1);
 return(retval);
}

__attribute__((used)) static inline unsigned long long realsmith_QB76L(int pos, int len, unsigned long long val)
{
 return (val & ((1ULL << len) - 1)) << pos;
}

const char *
realsmith_lNdJV(int backendType)
{
 const char *backendDesc = "unknown process type";
 switch (backendType)
 {
  case 137:
   backendDesc = "autovacuum launcher";
   break;
  case 136:
   backendDesc = "autovacuum worker";
   break;
  case 135:
   backendDesc = "client backend";
   break;
  case 134:
   backendDesc = "background worker";
   break;
  case 133:
   backendDesc = "background writer";
   break;
  case 132:
   backendDesc = "checkpointer";
   break;
  case 131:
   backendDesc = "startup";
   break;
  case 130:
   backendDesc = "walreceiver";
   break;
  case 129:
   backendDesc = "walsender";
   break;
  case 128:
   backendDesc = "walwriter";
   break;
 }
 return backendDesc;
}
char realsmith_proxy_VOpzg(int p_0_tVCP5) {
char * proxy_ret_63jJX = realsmith_lNdJV(p_0_tVCP5);
return *proxy_ret_63jJX;
}


__attribute__((used)) static inline unsigned long long realsmith_BGAZy(const char *s) {
    unsigned long long n = 0;
    char c;
    for(c = *s; c >= '0' && c <= '9' ; c = *(++s)) {
        n *= 10;
        n += c - '0';
    }
    return n;
}
int realsmith_proxy_wY2az(char p_0_MrdmV) {
int proxy_ret_RuYYV = realsmith_BGAZy(&(p_0_MrdmV));
return proxy_ret_RuYYV;
}


__attribute__((used)) static int
realsmith_TRJdS(int *a, int b)
{
 int mod;
 mod = *a % b;
 *a /= b;
 return mod;
}
int realsmith_proxy_uGXiN(int p_0_mgpMg, int p_1_V4frX) {
int proxy_ret_iIO5k = realsmith_TRJdS(&(p_0_mgpMg), p_1_V4frX);
return proxy_ret_iIO5k;
}


int hwpoison_forget_fd_realsmith_nHJVR = 18;

__attribute__((used)) static int realsmith_nHJVR(unsigned long offset)
{
 char buf[100];
 int len;
 len = (1);
 len = (1);
 if (len < 0) {
  (1);
  return len;
 }
 return 0;
}

int EINVAL_realsmith_NeQfW = 15;

int WDT_MAX_TIME_realsmith_NeQfW = -4;

int wdt_time_realsmith_NeQfW = 1;

__attribute__((used)) static int realsmith_NeQfW(int new_time)
{
 if ((new_time <= 0) || (new_time > WDT_MAX_TIME_realsmith_NeQfW))
  return -EINVAL_realsmith_NeQfW;
 wdt_time_realsmith_NeQfW = new_time;
 return 0;
}

unsigned long realsmith_D6RjK(const char *src, char *dest, unsigned long size) {
        unsigned long i, j;
        (1);
        (1);
        for (i = 0, j = 0; src[i] != '\0'; i++) {
                if (src[i] == '/') {
                        if (j+4 >= size) {
                                j = 0;
                                break;
                        }
                        (1);
                        j += 4;
                } else if (src[i] == '\\') {
                        if (j+4 >= size) {
                                j = 0;
                                break;
                        }
                        (1);
                        j += 4;
                } else {
                        if (j+1 >= size) {
                                j = 0;
                                break;
                        }
                        dest[j] = src[i];
                        j++;
                }
        }
        dest[j] = '\0';
        return j;
}
unsigned long realsmith_proxy_1y8cF(char p_0_UatuO, char p_1_ncdUI, unsigned long p_2_U1yiV) {
unsigned long proxy_ret_ihLfi = realsmith_D6RjK(&(p_0_UatuO), &(p_1_ncdUI), p_2_U1yiV);
return proxy_ret_ihLfi;
}


__attribute__((used)) static int realsmith_C3Pus(char *data) {
    unsigned long i;
    int result = 0;
    for (i = 0; i < sizeof(int); i++)
        result = (result << 8) | (unsigned char)data[i];
    return result;
}
int realsmith_proxy_xqBCa(char p_0_4FFVg) {
char proxy_O6Ysd[12] = { 24, p_0_4FFVg, p_0_4FFVg, p_0_4FFVg, p_0_4FFVg, 28, p_0_4FFVg, p_0_4FFVg, p_0_4FFVg, 21, p_0_4FFVg, 95 };
int proxy_ret_f4z8p = realsmith_C3Pus(proxy_O6Ysd);
return proxy_ret_f4z8p;
}


int EINVAL_realsmith_KBzdU = -5;

int heartbeat_realsmith_KBzdU = -4;

int wd_heartbeat_realsmith_KBzdU = 12;

__attribute__((used)) static int realsmith_KBzdU(int t)
{
 if (t < 1 || t > 65535)
  return -EINVAL_realsmith_KBzdU;
 heartbeat_realsmith_KBzdU = t;
 wd_heartbeat_realsmith_KBzdU = t * 100;
 return 0;
}

long
realsmith_8dxah(int CodePageTable)
{
    int UnicodeChar;
    long Count = 0;
    for (UnicodeChar = 0; UnicodeChar <= 0xFFFF; UnicodeChar++)
    {
        if (!(1))
            Count++;
    }
    return Count;
}

__attribute__((used)) static int realsmith_LEZYz(long upper, long lower)
{
 if ((upper<<16L) < upper)
  upper = 0xffff0000L ;
 else
  upper <<= 16L ;
 if (!lower)
  return 0;
 return (int)(upper/lower) ;
}

__attribute__((used)) static unsigned
realsmith_2iZip (const int* insn)
{
  unsigned tie_t = 0;
  tie_t = (tie_t << 4) | ((insn[0] << 28) >> 28);
  return tie_t;
}
unsigned int realsmith_proxy_DrRT6(int p_0_MSB0G) {
unsigned int proxy_ret_mfUzu = realsmith_2iZip(&(p_0_MSB0G));
return proxy_ret_mfUzu;
}


unsigned int S_IFDIR_realsmith_AvC0K = 18;

unsigned int S_IFLNK_realsmith_AvC0K = 18;

unsigned int S_IFMT_realsmith_AvC0K = 10;

unsigned int S_IFREG_realsmith_AvC0K = 9;

unsigned int realsmith_AvC0K(unsigned int mode)
{
 if ((1))
  return S_IFLNK_realsmith_AvC0K;
 if ((1) || (mode & S_IFMT_realsmith_AvC0K) == (S_IFLNK_realsmith_AvC0K | S_IFDIR_realsmith_AvC0K))
  return (S_IFLNK_realsmith_AvC0K | S_IFDIR_realsmith_AvC0K);
 return S_IFREG_realsmith_AvC0K | (1);
}

__attribute__((used)) static inline int realsmith_YC6gU(long seq1, long seq2)
{
        return (long)(seq1 - seq2) < 0;
}

int PAD_DELAY_MAX_realsmith_OualO = 19;

__attribute__((used)) static int realsmith_OualO(int delay, int start_bit)
{
 int i;
 for (i = 0; i < (PAD_DELAY_MAX_realsmith_OualO - start_bit); i++) {
  if ((1) == 0)
   return i;
 }
 return PAD_DELAY_MAX_realsmith_OualO - start_bit;
}

int NLM_MSIX_VEC_BASE_realsmith_VmgZh = -7;

int XLP_MSIXVEC_TOTAL_realsmith_VmgZh = 1;

__attribute__((used)) static inline int realsmith_VmgZh(int irq)
{
 return (irq - NLM_MSIX_VEC_BASE_realsmith_VmgZh) % XLP_MSIXVEC_TOTAL_realsmith_VmgZh;
}

__attribute__((used)) static int realsmith_opJb7(const int cos, const int pri_set)
{
 const int pbf_cos_offset = 0;
 const int pbf_pri_offset = 0;
 return (1);
}

int GIT_ENOTFOUND_realsmith_VvEXg = -9;

int realsmith_VvEXg(int *repo, const int const *commit, const int const *ancestor)
{
 int const merge_base;
 int error;
 if ((1))
  return 0;
 error = (1);
 if (error == GIT_ENOTFOUND_realsmith_VvEXg)
  return 0;
 if (error < 0)
  return error;
 return (1);
}
int realsmith_proxy_fmHGv(int p_0_65ijI, int p_1_HU1Lp, int p_2_vYnPc) {
int proxy_nS4RU[19] = { p_0_65ijI, 24, 98, p_0_65ijI, p_0_65ijI, 80, 25, p_0_65ijI, 80, p_0_65ijI, 46, 57, p_0_65ijI, p_0_65ijI, p_0_65ijI, p_0_65ijI, p_0_65ijI, p_0_65ijI, p_0_65ijI };
int proxy_ret_SYkYV = realsmith_VvEXg(proxy_nS4RU, &(p_1_HU1Lp), &(p_2_vYnPc));
return proxy_ret_SYkYV;
}


__attribute__((used)) static inline long
realsmith_k00ZS(const int *const probs,
  long bit_levels, long symbol)
{
 long price = 0;
 long model_index = 1;
 do {
  const long bit = symbol & 1;
  symbol >>= 1;
  price += (1);
  model_index = (model_index << 1) + bit;
 } while (--bit_levels != 0);
 return price;
}
long realsmith_proxy_9IOUg(int p_0_weY6H, long p_1_1Bxir, long p_2_Qvbd9) {
int proxy_PfKQI[13] = { 97, 95, 91, 84, p_0_weY6H, p_0_weY6H, p_0_weY6H, p_0_weY6H, 49, 64, p_0_weY6H, p_0_weY6H, 10 };
long proxy_ret_V754i = realsmith_k00ZS(proxy_PfKQI, p_1_1Bxir, p_2_Qvbd9);
return proxy_ret_V754i;
}


int NLM_MSI_VEC_BASE_realsmith_ltBfq = 10;

int XLP_MSIVEC_PER_LINK_realsmith_ltBfq = 18;

__attribute__((used)) static inline int realsmith_ltBfq(int link, int msivec)
{
 return NLM_MSI_VEC_BASE_realsmith_ltBfq + link * XLP_MSIVEC_PER_LINK_realsmith_ltBfq + msivec;
}

int EL_ANOMALY_realsmith_zXuMO = -6;

int EL_SVP_realsmith_zXuMO = 3;

long rPM1_realsmith_zXuMO = 0;

__attribute__((used)) static long realsmith_zXuMO(void)
{
 long d = (1);
 if (d != (long)-1) return d;
 (1);
 return rPM1_realsmith_zXuMO;
}

int realsmith_Kr7kP(void) {
    while (!(1)) {
        (1);
    }
    return (1);
}

__attribute__((used)) static char *realsmith_3XdHv(int power_mode)
{
 switch (power_mode) {
 case 130: return "off";
 case 128: return "up";
 case 129: return "on";
 }
 return "?";
}
char realsmith_proxy_5VZLX(int p_0_IjPof) {
char * proxy_ret_anBYc = realsmith_3XdHv(p_0_IjPof);
return *proxy_ret_anBYc;
}


int realsmith_RM2cl(int *obj, char* idx)
{
    static const char formatW_realsmith_RM2cl[] = {'%','d',0};
    char buf[12];
    int *prop;
    int b;
    int hres;
    (1);
    hres = (1);
    if((1) || !prop)
        return hres;
    return (1);
}
int realsmith_proxy_gl3ym(int p_0_U3hUZ, char p_1_gdWil) {
int proxy_ret_zoMKC = realsmith_RM2cl(&(p_0_U3hUZ), &(p_1_gdWil));
return proxy_ret_zoMKC;
}


int SUPERPAGE_SIZE_realsmith_B2RHy = -5;

int TRUE_realsmith_B2RHy = 14;

int VM_FLAGS_ANYWHERE_realsmith_B2RHy = 15;

int VM_FLAGS_SUPERPAGE_SIZE_2MB_realsmith_B2RHy = 5;

int VM_PROT_READ_realsmith_B2RHy = 20;

int
realsmith_B2RHy() {
 int kr;
 int ret;
 int addr = 0;
 int size = SUPERPAGE_SIZE_realsmith_B2RHy;
 kr = (1);
 if (!(ret = (1))) return ret;
 (1);
 if (!(ret = (1))) return ret;
 if (!(ret = (1))) return ret;
 if (!(ret = (1))) return ret;
 kr = (1);
 if (!(ret = (1))) return ret;
 return TRUE_realsmith_B2RHy;
}

__attribute__((used)) static int
realsmith_PF5lT(int opcode, const int opcodes[], unsigned long nops)
{
 int i;
 for (i = 0; i < nops; i++)
  if (opcode == opcodes[i])
   return (1);
 return (0);
}
int realsmith_proxy_h1RoO(int p_0_FhoYX, int p_1_jUjmq, unsigned long p_2_j3OOC) {
int proxy_aSCjK[10] = { p_1_jUjmq, 87, p_1_jUjmq, p_1_jUjmq, p_1_jUjmq, 11, p_1_jUjmq, 34, 9, 61 };
int proxy_ret_Dbu4o = realsmith_PF5lT(p_0_FhoYX, proxy_aSCjK, p_2_j3OOC);
return proxy_ret_Dbu4o;
}


int GDI_ERROR_realsmith_7NV9j = 1;

int META_SETTEXTALIGN_realsmith_7NV9j = 17;

int realsmith_7NV9j( int dev, int align )
{
    return (1) ? align : GDI_ERROR_realsmith_7NV9j;
}

int tstamp_extend_realsmith_sZlBD = 12;

int realsmith_sZlBD(void)
{
 int ret;
 ret = (1);
 if (ret < 0)
  (1);
 return ret;
}

int TB0219_GPIO_OUTPUT_realsmith_Q0KIC = 12;

__attribute__((used)) static inline char realsmith_Q0KIC(unsigned int pin)
{
 int values;
 values = (1);
 if (values & (1 << pin))
  return '1';
 return '0';
}

int HSWEP_CB0_MSR_PMON_BOX_FILTER_C6_realsmith_cDcNi = -5;

int HSWEP_CB0_MSR_PMON_BOX_FILTER_ISOC_realsmith_cDcNi = 5;

int HSWEP_CB0_MSR_PMON_BOX_FILTER_LINK_realsmith_cDcNi = -8;

int HSWEP_CB0_MSR_PMON_BOX_FILTER_NC_realsmith_cDcNi = -2;

int HSWEP_CB0_MSR_PMON_BOX_FILTER_NID_realsmith_cDcNi = -4;

int HSWEP_CB0_MSR_PMON_BOX_FILTER_OPC_realsmith_cDcNi = -8;

int HSWEP_CB0_MSR_PMON_BOX_FILTER_STATE_realsmith_cDcNi = -5;

int HSWEP_CB0_MSR_PMON_BOX_FILTER_TID_realsmith_cDcNi = 6;

__attribute__((used)) static int realsmith_cDcNi(int fields)
{
 int mask = 0;
 if (fields & 0x1)
  mask |= HSWEP_CB0_MSR_PMON_BOX_FILTER_TID_realsmith_cDcNi;
 if (fields & 0x2)
  mask |= HSWEP_CB0_MSR_PMON_BOX_FILTER_LINK_realsmith_cDcNi;
 if (fields & 0x4)
  mask |= HSWEP_CB0_MSR_PMON_BOX_FILTER_STATE_realsmith_cDcNi;
 if (fields & 0x8)
  mask |= HSWEP_CB0_MSR_PMON_BOX_FILTER_NID_realsmith_cDcNi;
 if (fields & 0x10) {
  mask |= HSWEP_CB0_MSR_PMON_BOX_FILTER_OPC_realsmith_cDcNi;
  mask |= HSWEP_CB0_MSR_PMON_BOX_FILTER_NC_realsmith_cDcNi;
  mask |= HSWEP_CB0_MSR_PMON_BOX_FILTER_C6_realsmith_cDcNi;
  mask |= HSWEP_CB0_MSR_PMON_BOX_FILTER_ISOC_realsmith_cDcNi;
 }
 return mask;
}

int EINVAL_realsmith_lWQB4 = 7;

int stderr_realsmith_lWQB4 = 10;

__attribute__((used)) static int realsmith_lWQB4(char *str, unsigned int *val)
{
 int err;
 err = (1);
 if (*val & 3) {
  (1);
  return -EINVAL_realsmith_lWQB4;
 }
 return err;
}
int realsmith_proxy_G9YbQ(char p_0_5CnC4, unsigned int p_1_I951t) {
unsigned int proxy_qAXQP[17] = { p_1_I951t, p_1_I951t, p_1_I951t, p_1_I951t, 1, 9, 82, 37, p_1_I951t, 22, 60, 51, 69, 78, p_1_I951t, p_1_I951t, p_1_I951t };
int proxy_ret_Z8nyX = realsmith_lWQB4(&(p_0_5CnC4), proxy_qAXQP);
return proxy_ret_Z8nyX;
}


unsigned long FSE_NCOUNTBOUND_realsmith_KP7n8 = -2;

unsigned long realsmith_KP7n8(unsigned maxSymbolValue, unsigned tableLog)
{
 unsigned long const maxHeaderSize = (((maxSymbolValue + 1) * tableLog) >> 3) + 3;
 return maxSymbolValue ? maxHeaderSize : FSE_NCOUNTBOUND_realsmith_KP7n8;
}

__attribute__((used)) static int realsmith_vgOjQ(void)
{
    int *store;
    int *red, *blue;
    int r = 0;
    if ((1)
        && (1)
        && (1)
        && (1)
        && (1)
        && (1)
        && (1)
        && (1)
        && (1))
        r = 1;
    (1);
    return r;
}

__attribute__((used)) static int realsmith_C0yj0(unsigned long* pkeys, const int* pcrc_32_tab)
{
    unsigned temp;
    temp = ((unsigned)(*(pkeys+2)) & 0xffff) | 2;
    return (int)(((temp * (temp ^ 1)) >> 8) & 0xff);
}
int realsmith_proxy_UUXhB(unsigned long p_0_hOQW3, int p_1_q79cr) {
unsigned long proxy_x0XQA[12] = { 38, p_0_hOQW3, p_0_hOQW3, p_0_hOQW3, 60, p_0_hOQW3, p_0_hOQW3, p_0_hOQW3, 90, p_0_hOQW3, 7, p_0_hOQW3 };
int proxy_gBowM[13] = { p_1_q79cr, p_1_q79cr, 61, 86, 39, p_1_q79cr, 48, 82, 15, 75, p_1_q79cr, p_1_q79cr, 93 };
int proxy_ret_mS3LJ = realsmith_C0yj0(proxy_x0XQA, proxy_gBowM);
return proxy_ret_mS3LJ;
}


int intDI_type_node_realsmith_f8K63 = 15;

int intHI_type_node_realsmith_f8K63 = 6;

int intQI_type_node_realsmith_f8K63 = 13;

int intSI_type_node_realsmith_f8K63 = 14;

int integer_type_node_realsmith_f8K63 = 1;

int long_integer_type_node_realsmith_f8K63 = 15;

int long_long_integer_type_node_realsmith_f8K63 = 11;

int long_long_unsigned_type_node_realsmith_f8K63 = 15;

int long_unsigned_type_node_realsmith_f8K63 = -8;

int short_integer_type_node_realsmith_f8K63 = 8;

int short_unsigned_type_node_realsmith_f8K63 = -3;

int signed_char_type_node_realsmith_f8K63 = 6;

int unsigned_char_type_node_realsmith_f8K63 = -1;

int unsigned_intDI_type_node_realsmith_f8K63 = 11;

int unsigned_intHI_type_node_realsmith_f8K63 = 18;

int unsigned_intQI_type_node_realsmith_f8K63 = 2;

int unsigned_intSI_type_node_realsmith_f8K63 = 6;

int unsigned_type_node_realsmith_f8K63 = -6;

int widest_integer_literal_type_node_realsmith_f8K63 = -9;

int widest_unsigned_literal_type_node_realsmith_f8K63 = 7;

int
realsmith_f8K63 (unsigned int bits, int unsignedp)
{
  if (bits == (1))
    return unsignedp ? unsigned_type_node_realsmith_f8K63 : integer_type_node_realsmith_f8K63;
  if (bits == (1))
    return unsignedp ? unsigned_char_type_node_realsmith_f8K63 : signed_char_type_node_realsmith_f8K63;
  if (bits == (1))
    return unsignedp ? short_unsigned_type_node_realsmith_f8K63 : short_integer_type_node_realsmith_f8K63;
  if (bits == (1))
    return unsignedp ? long_unsigned_type_node_realsmith_f8K63 : long_integer_type_node_realsmith_f8K63;
  if (bits == (1))
    return (unsignedp ? long_long_unsigned_type_node_realsmith_f8K63
     : long_long_integer_type_node_realsmith_f8K63);
  if (bits == (1))
    return (unsignedp ? widest_unsigned_literal_type_node_realsmith_f8K63
     : widest_integer_literal_type_node_realsmith_f8K63);
  if (bits <= (1))
    return unsignedp ? unsigned_intQI_type_node_realsmith_f8K63 : intQI_type_node_realsmith_f8K63;
  if (bits <= (1))
    return unsignedp ? unsigned_intHI_type_node_realsmith_f8K63 : intHI_type_node_realsmith_f8K63;
  if (bits <= (1))
    return unsignedp ? unsigned_intSI_type_node_realsmith_f8K63 : intSI_type_node_realsmith_f8K63;
  if (bits <= (1))
    return unsignedp ? unsigned_intDI_type_node_realsmith_f8K63 : intDI_type_node_realsmith_f8K63;
  return 0;
}

int RET_TOOSMALL_realsmith_I1tUL = 5;

__attribute__((used)) static int
realsmith_I1tUL (int conv, unsigned char *r, int wc, int n)
{
  if (wc < 0xa0) {
    *r = wc;
    return 1;
  } else {
    int result;
    unsigned char u;
    if (wc < 0x10000) {
      result = 6;
      u = 'u';
    } else {
      result = 10;
      u = 'U';
    }
    if (n >= result) {
      int count;
      r[0] = '\\';
      r[1] = u;
      r += 2;
      for (count = result-3; count >= 0; count--) {
        unsigned int i = (wc >> (4*count)) & 0x0f;
        *r++ = (i < 10 ? '0'+i : 'a'-10+i);
      }
      return result;
    } else
      return RET_TOOSMALL_realsmith_I1tUL;
  }
}
int realsmith_proxy_ft9v4(int p_0_Xzw5q, unsigned char p_1_AJuMY, int p_2_WQdKv, int p_3_zHvOv) {
unsigned char proxy_28gV3[17] = { 2, p_1_AJuMY, p_1_AJuMY, p_1_AJuMY, 27, p_1_AJuMY, p_1_AJuMY, p_1_AJuMY, p_1_AJuMY, 76, p_1_AJuMY, p_1_AJuMY, p_1_AJuMY, 9, 17, p_1_AJuMY, 22 };
int proxy_ret_Hs7zc = realsmith_I1tUL(p_0_Xzw5q, proxy_28gV3, p_2_WQdKv, p_3_zHvOv);
return proxy_ret_Hs7zc;
}


__attribute__((used)) static inline int realsmith_SWISg(int left, int right)
{
 return (1) ? left : right;
}

__attribute__((used)) static
unsigned long realsmith_iAdrq(int dwFormat)
{
    return (1) * ((1) + (1));
}

int MT7620_CPLL_SW_CFG_realsmith_Fahhh = 4;

int MT7620_CPU_CLK_AUX0_realsmith_Fahhh = 7;

long MT7620_PLL_DIV_RATIO_BASE_realsmith_Fahhh = 0;

int MT7620_PLL_DIV_RATIO_MAX_realsmith_Fahhh = 4;

int MT7620_PLL_DIV_RATIO_MSK_realsmith_Fahhh = -8;

int MT7620_PLL_DIV_RATIO_OFF_realsmith_Fahhh = 2;

int MT7620_PLL_MULT_RATIO_BASE_realsmith_Fahhh = 8;

int MT7620_PLL_MULT_RATIO_MSK_realsmith_Fahhh = -9;

int MT7620_PLL_MULT_RATIO_OFF_realsmith_Fahhh = -3;

int MT7620_XTAL_40_realsmith_Fahhh = 0;

int MTK_CPU_CLK_480MHZ_realsmith_Fahhh = 4;

int MTK_CPU_CLK_600MHZ_realsmith_Fahhh = 6;

int SYSCTL_MT7620_CPLL_CFG0_realsmith_Fahhh = 20;

int SYSCTL_MT7620_CPLL_CFG1_realsmith_Fahhh = -3;

__attribute__((used)) static int
realsmith_Fahhh(int bst, int bsh)
{
 int val, mul, div, res;
 val = (1);
 if (val & MT7620_CPU_CLK_AUX0_realsmith_Fahhh)
  return (MTK_CPU_CLK_480MHZ_realsmith_Fahhh);
 val = (1);
 if (!(val & MT7620_CPLL_SW_CFG_realsmith_Fahhh))
  return (MTK_CPU_CLK_600MHZ_realsmith_Fahhh);
 mul = MT7620_PLL_MULT_RATIO_BASE_realsmith_Fahhh + ((val >> MT7620_PLL_MULT_RATIO_OFF_realsmith_Fahhh) &
     MT7620_PLL_MULT_RATIO_MSK_realsmith_Fahhh);
 div = (val >> MT7620_PLL_DIV_RATIO_OFF_realsmith_Fahhh) & MT7620_PLL_DIV_RATIO_MSK_realsmith_Fahhh;
 if (div != MT7620_PLL_DIV_RATIO_MSK_realsmith_Fahhh)
  div += MT7620_PLL_DIV_RATIO_BASE_realsmith_Fahhh;
 else
  div = MT7620_PLL_DIV_RATIO_MAX_realsmith_Fahhh;
 res = (MT7620_XTAL_40_realsmith_Fahhh * mul) / div;
 return ((1));
}

int CARD_CONTROLLER_DATA_realsmith_i8SFb = 20;

int CARD_CONTROLLER_INDEX_realsmith_i8SFb = -6;

int CARD_SLOTB_realsmith_i8SFb = 5;

long CARD_SLOTB_OFFSET_realsmith_i8SFb = 5;

__attribute__((used)) static inline int realsmith_i8SFb(int slot, int index, int data)
{
 if (slot == CARD_SLOTB_realsmith_i8SFb)
  index += CARD_SLOTB_OFFSET_realsmith_i8SFb;
 (1);
 (1);
 return data;
}

unsigned int IORESOURCE_IO_realsmith_OOo5b = -10;

unsigned int IORESOURCE_MEM_realsmith_OOo5b = -9;

unsigned int IORESOURCE_PREFETCH_realsmith_OOo5b = -3;

unsigned int IORESOURCE_READONLY_realsmith_OOo5b = 3;

unsigned int IORESOURCE_SIZEALIGN_realsmith_OOo5b = 3;

unsigned int PCI_BASE_ADDRESS_MEM_PREFETCH_realsmith_OOo5b = -4;

int PCI_BASE_ADDRESS_MEM_TYPE_1M_realsmith_OOo5b = -5;

int PCI_BASE_ADDRESS_MEM_TYPE_64_realsmith_OOo5b = 8;

unsigned int PCI_BASE_ADDRESS_SPACE_IO_realsmith_OOo5b = 19;

unsigned int PCI_BASE_ADDRESS_SPACE_MEMORY_realsmith_OOo5b = 18;

unsigned int realsmith_OOo5b(int addr0, int bridge)
{
 unsigned int flags = 0;
 if (addr0 & 0x02000000) {
  flags = IORESOURCE_MEM_realsmith_OOo5b | PCI_BASE_ADDRESS_SPACE_MEMORY_realsmith_OOo5b;
  flags |= (addr0 >> 22) & PCI_BASE_ADDRESS_MEM_TYPE_64_realsmith_OOo5b;
  flags |= (addr0 >> 28) & PCI_BASE_ADDRESS_MEM_TYPE_1M_realsmith_OOo5b;
  if (addr0 & 0x40000000)
   flags |= IORESOURCE_PREFETCH_realsmith_OOo5b
     | PCI_BASE_ADDRESS_MEM_PREFETCH_realsmith_OOo5b;
  if (!bridge && (addr0 & 0xff) == 0x30)
   flags |= IORESOURCE_READONLY_realsmith_OOo5b;
 } else if (addr0 & 0x01000000)
  flags = IORESOURCE_IO_realsmith_OOo5b | PCI_BASE_ADDRESS_SPACE_IO_realsmith_OOo5b;
 if (flags)
  flags |= IORESOURCE_SIZEALIGN_realsmith_OOo5b;
 return flags;
}

int realsmith_un4yr(const int *addr) {
    const int *p = (const int *)addr;
    return (1) | ((1) << 8);
}
int realsmith_proxy_ayU1y(int p_0_jLlRr) {
int proxy_ret_rH9x2 = realsmith_un4yr(&(p_0_jLlRr));
return proxy_ret_rH9x2;
}


int GIT_BUF_INIT_realsmith_ApAUh = 14;

int GIT_REFS_HEADS_DIR_realsmith_ApAUh = 16;

__attribute__((used)) static int realsmith_ApAUh(
 int *out,
 const int *config,
 const char *canonical_branch_name,
 const char *format)
{
 int buf = GIT_BUF_INIT_realsmith_ApAUh;
 int error;
 if ((1) < 0)
   return -1;
 error = (1);
 (1);
 return error;
}
int realsmith_proxy_Z1it3(int p_0_OdSyq, int p_1_uxDkD, char p_2_L1obg, char p_3_h0x3p) {
int proxy_ret_Nx4x3 = realsmith_ApAUh(&(p_0_OdSyq), &(p_1_uxDkD), &(p_2_L1obg), &(p_3_h0x3p));
return proxy_ret_Nx4x3;
}


int QCOM_SCM_CMD_HDCP_realsmith_udNMJ = 11;

int QCOM_SCM_SVC_HDCP_realsmith_udNMJ = 1;

int realsmith_udNMJ(void)
{
 int ret = (1);
 if (ret)
  return ret;
 ret = (1);
 (1);
 return ret > 0 ? 1 : 0;
}

int realsmith_uX5Fl(char * p, int flag)
{
 int year, month, day, hour, minute, second, tz;
 int crtime, days, i;
 year = p[0] - 70;
 month = p[1];
 day = p[2];
 hour = p[3];
 minute = p[4];
 second = p[5];
 if (flag == 0) tz = p[6];
 else tz = 0;
 if (year < 0) {
  crtime = 0;
 } else {
  int monlen[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  days = year * 365;
  if (year > 2)
   days += (year+1) / 4;
  for (i = 1; i < month; i++)
   days += monlen[i-1];
  if (((year+2) % 4) == 0 && month > 2)
   days++;
  days += day - 1;
  crtime = ((((days * 24) + hour) * 60 + minute) * 60)
   + second;
  if (tz & 0x80)
   tz |= (-1 << 8);
  if (-52 <= tz && tz <= 52)
   crtime -= tz * 15 * 60;
 }
 return crtime;
}
int realsmith_proxy_hAxoh(char p_0_BThup, int p_1_jwGp2) {
char proxy_bxOPJ[10] = { 90, p_0_BThup, 80, 79, 80, 14, 3, p_0_BThup, p_0_BThup, 7 };
int proxy_ret_BSFOr = realsmith_uX5Fl(proxy_bxOPJ, p_1_jwGp2);
return proxy_ret_BSFOr;
}


int realsmith_pEu1P(int data, int mask)
{
 int vbit = 1, value = 0;
 do {
     if (mask&1) {
  if (data&1)
   value |= vbit;
  vbit<<=1;
     }
     data>>=1;
 } while (mask>>=1);
 return value;
}

int
realsmith_Jx2o6(const char *opt1, const char *opt2)
{
 char *p;
 if ((1) == 0)
  return (1);
 if ((1) == 0 && (1) == 0)
  return (1);
 if ((1) == 0 && (1) == 0)
  return (1);
 while ((p = ("0")) != ((void*)0) &&
     !(1)) {
  opt2 += p - opt1;
  opt1 = p;
  if ((1) == 0 && (1) == 0)
   return (1);
  if ((1) == 0 && (1) == 0)
   return (1);
 }
 return (0);
}
int realsmith_proxy_w0oHO(char p_0_jScxf, char p_1_BtxqC) {
int proxy_ret_SIGvo = realsmith_Jx2o6(&(p_0_jScxf), &(p_1_BtxqC));
return proxy_ret_SIGvo;
}


unsigned long OMAP_VRFB_LINE_LEN_realsmith_zsWIN = 5;

long realsmith_zsWIN(int width, int height, int bytespp)
{
 unsigned long image_width_roundup = (1);
 if (image_width_roundup > OMAP_VRFB_LINE_LEN_realsmith_zsWIN)
  return 0;
 return (width * height * bytespp) + (1);
}

__attribute__((used)) static long *
realsmith_i426S(long *sl)
{
    while (*sl && *sl++ != ':')
 continue;
    return (sl);
}
long realsmith_proxy_cEGCU(long p_0_RbEHt) {
long proxy_1vfoZ[13] = { 8, 75, p_0_RbEHt, 32, 58, 28, 34, p_0_RbEHt, p_0_RbEHt, 96, 50, p_0_RbEHt, p_0_RbEHt };
long * proxy_ret_kz7Fl = realsmith_i426S(proxy_1vfoZ);
return *proxy_ret_kz7Fl;
}


int EBUSY_realsmith_w7B22 = 17;

int ENOENT_realsmith_w7B22 = 18;

int KBUILD_MODNAME_realsmith_w7B22 = 20;

long ag71xx_debugfs_root_realsmith_w7B22 = 14;

int realsmith_w7B22(void)
{
 if (ag71xx_debugfs_root_realsmith_w7B22)
  return -EBUSY_realsmith_w7B22;
 ag71xx_debugfs_root_realsmith_w7B22 = (1);
 if (!ag71xx_debugfs_root_realsmith_w7B22)
  return -ENOENT_realsmith_w7B22;
 return 0;
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


__attribute__((used)) static int realsmith_WzL6z(int *freqs, int freq)
{
 int i;
 if (freqs == ((void*)0))
  return 1;
 for (i = 0; freqs[i]; i++)
  if (freqs[i] == freq)
   return 1;
 return 0;
}
int realsmith_proxy_3UVkM(int p_0_1wjrf, int p_1_nVfHi) {
int proxy_8b8Xf[17] = { p_0_1wjrf, p_0_1wjrf, 6, 62, 14, 56, 92, p_0_1wjrf, p_0_1wjrf, 69, p_0_1wjrf, 61, p_0_1wjrf, 99, 96, p_0_1wjrf, p_0_1wjrf };
int proxy_ret_XHG4Q = realsmith_WzL6z(proxy_8b8Xf, p_1_nVfHi);
return proxy_ret_XHG4Q;
}


int OCFS2_BACKUP_SB_START_realsmith_RHvVe = -2;

int OCFS2_MAX_BACKUP_SUPERBLOCKS_realsmith_RHvVe = -9;

__attribute__((used)) static inline int realsmith_RHvVe(int blocksize, int index)
{
 int offset = OCFS2_BACKUP_SB_START_realsmith_RHvVe;
 if (index >= 0 && index < OCFS2_MAX_BACKUP_SUPERBLOCKS_realsmith_RHvVe) {
  offset <<= (2 * index);
  offset /= blocksize;
  return offset;
 }
 return 0;
}

int RMAP_NESTED_GPA_MASK_realsmith_vf13g = 20;

int RMAP_NESTED_LPID_MASK_realsmith_vf13g = 17;

__attribute__((used)) static inline int realsmith_vf13g(int rmap_1, int rmap_2)
{
 return !((rmap_1 ^ rmap_2) & (RMAP_NESTED_LPID_MASK_realsmith_vf13g |
           RMAP_NESTED_GPA_MASK_realsmith_vf13g));
}

int TVEurgb60Hz480IntDf_realsmith_6PNo5 = -9;

int TVEurgb60Hz480Prog_realsmith_6PNo5 = -8;

int TVMpal480IntDf_realsmith_6PNo5 = 16;

int TVMpal480Prog_realsmith_6PNo5 = -8;

int TVNtsc480IntDf_realsmith_6PNo5 = -5;

int TVNtsc480Prog_realsmith_6PNo5 = 16;

int TVPal576IntDfScale_realsmith_6PNo5 = -5;

int TVPal576ProgScale_realsmith_6PNo5 = 20;

int * realsmith_6PNo5(int *mode)
{
int *rmode = ((void*)0);
 int tvmode = (1);
 if ((1)) {
  switch (tvmode) {
   case 129:
    rmode = &TVNtsc480Prog_realsmith_6PNo5;
    break;
   case 128:
    rmode = &TVPal576ProgScale_realsmith_6PNo5;
    break;
   case 130:
    rmode = &TVMpal480Prog_realsmith_6PNo5;
    break;
   case 131:
    rmode = &TVEurgb60Hz480Prog_realsmith_6PNo5;
    break;
  }
 } else {
  switch (tvmode) {
   case 129:
    rmode = &TVNtsc480IntDf_realsmith_6PNo5;
    break;
   case 128:
    rmode = &TVPal576IntDfScale_realsmith_6PNo5;
    break;
   case 130:
    rmode = &TVMpal480IntDf_realsmith_6PNo5;
    break;
   case 131:
    rmode = &TVEurgb60Hz480IntDf_realsmith_6PNo5;
    break;
  }
 }
 if ( ((void*)0) != mode ) {
  (1);
 } else {
  mode = rmode;
 }
 return mode;
}
int realsmith_proxy_MF1VY(int p_0_BKgWf) {
int proxy_17cUD[20] = { p_0_BKgWf, 42, 29, p_0_BKgWf, 1, p_0_BKgWf, 73, p_0_BKgWf, p_0_BKgWf, 90, 35, p_0_BKgWf, p_0_BKgWf, 95, 43, 45, p_0_BKgWf, 25, 18, 65 };
int * proxy_ret_ikkOS = realsmith_6PNo5(proxy_17cUD);
return *proxy_ret_ikkOS;
}


int LUA_TNIL_realsmith_xipNg = 8;

int LUA_TTABLE_realsmith_xipNg = -2;

__attribute__((used)) static int realsmith_xipNg (int *L) {
  int t = (1);
  (1);
  (1);
  if ((1))
    (1);
  (1);
  (1);
  return 1;
}
int realsmith_proxy_rbhtG(int p_0_knKeY) {
int proxy_QnFLD[15] = { p_0_knKeY, 7, p_0_knKeY, 44, 2, 19, p_0_knKeY, 89, 96, p_0_knKeY, p_0_knKeY, p_0_knKeY, 65, p_0_knKeY, 7 };
int proxy_ret_TaTtb = realsmith_xipNg(proxy_QnFLD);
return proxy_ret_TaTtb;
}


__attribute__((used)) static int realsmith_qeGi9(int rpm)
{
 int bits;
 if (rpm < 500)
  bits = 0x0;
 else if (rpm < 1000)
  bits = 0x1;
 else if (rpm < 2000)
  bits = 0x2;
 else if (rpm < 4000)
  bits = 0x3;
 else if (rpm < 8000)
  bits = 0x4;
 else
  bits = 0x5;
 return bits;
}

int numachip_system_realsmith_Lo4CQ = 15;

__attribute__((used)) static int realsmith_Lo4CQ(char *oem_id, char *oem_table_id)
{
 if (((1) != 0) ||
     ((1) != 0))
  return 0;
 numachip_system_realsmith_Lo4CQ = 2;
 return 1;
}
int realsmith_proxy_zDF3s(char p_0_OzKUp, char p_1_vkBNz) {
char proxy_S9usS[20] = { 93, 51, p_0_OzKUp, p_0_OzKUp, 44, 90, 8, 43, p_0_OzKUp, 59, p_0_OzKUp, 42, p_0_OzKUp, p_0_OzKUp, 7, 52, p_0_OzKUp, p_0_OzKUp, 89, 10 };
int proxy_ret_Ga8oe = realsmith_Lo4CQ(proxy_S9usS, &(p_1_vkBNz));
return proxy_ret_Ga8oe;
}


unsigned long const BLAKE2B_KEYBYTES_realsmith_XTlXM = 10;

unsigned long const BLAKE2B_OUTBYTES_realsmith_XTlXM = 7;

unsigned long const UINT8_MAX_realsmith_XTlXM = 1;

int
realsmith_XTlXM(
    int *state, const unsigned char *key,
    const unsigned long keylen, const unsigned long outlen, const unsigned char *salt,
    const unsigned char *personal)
{
    if (outlen <= 0U || outlen > BLAKE2B_OUTBYTES_realsmith_XTlXM ||
        keylen > BLAKE2B_KEYBYTES_realsmith_XTlXM) {
        return -1;
    }
    (1);
    (1);
    if (key == ((void*)0) || keylen <= 0U) {
        if ((1) != 0) {
            return -1;
        }
    } else if ((1) != 0) {
        return -1;
    }
    return 0;
}
int realsmith_proxy_AvWAx(int p_0_iwFU0, unsigned char p_1_0aAY9, unsigned long p_2_waz79, unsigned long p_3_wdyb9, unsigned char p_4_mHtfu, unsigned char p_5_57DVX) {
unsigned char proxy_ARc8y[11] = { p_1_0aAY9, 90, 96, p_1_0aAY9, p_1_0aAY9, 34, p_1_0aAY9, p_1_0aAY9, 66, 31, 30 };
int proxy_ret_mXliU = realsmith_XTlXM(&(p_0_iwFU0), proxy_ARc8y, p_2_waz79, p_3_wdyb9, &(p_4_mHtfu), &(p_5_57DVX));
return proxy_ret_mXliU;
}


__attribute__((used)) static inline unsigned int realsmith_4Ndlz(unsigned int f1, unsigned int f2) {
 if (f2 < f1) {
      f2 = f1 - f2;
 } else {
  f2 = f2 - f1;
 }
 return f2;
}

__attribute__((used)) static inline int realsmith_soihi(int reg)
{
 return (reg << 1) & 0x1e;
}

int ipmi_watchdog_mutex_realsmith_NFgB8 = -8;

__attribute__((used)) static int realsmith_NFgB8(void)
{
 int rv;
 (1);
 rv = (1);
 (1);
 return rv;
}

__attribute__((used)) static int
realsmith_pdJqn(const char *var)
{
    char ch, var_start, var_end;
    int depth;
    int len;
    var_start = *var;
    if (var_start == 0)
 return 0;
    if (var_start == '(')
 var_end = ')';
    else if (var_start == '{')
 var_end = '}';
    else
 return 1;
    depth = 1;
    for (len = 1; (ch = var[len++]) != 0;) {
 if (ch == var_start)
     depth++;
 else if (ch == var_end && --depth == 0)
     return len;
    }
    return 0;
}
int realsmith_proxy_WdnwE(char p_0_LNNNl) {
char proxy_N6YT7[11] = { 68, p_0_LNNNl, 18, 69, p_0_LNNNl, p_0_LNNNl, 29, 94, 62, 13, 43 };
int proxy_ret_RHgjz = realsmith_pdJqn(proxy_N6YT7);
return proxy_ret_RHgjz;
}


__attribute__((used)) static const char *
realsmith_sblbU (const char *path)
{
  char *end;
  char *hsz;
  if (! path || *path == 0)
    return "./";
  hsz = ("0");
  (1);
  end = hsz + (1);
  if (hsz[-1] != '/' && hsz[-1] != '\\')
    (1);
  while ((end = ("0")) != ((void*)0))
    *end = '/';
  return hsz;
}
char realsmith_proxy_n8roL(char p_0_JdqNi) {
char proxy_iS6e4[11] = { p_0_JdqNi, p_0_JdqNi, 61, p_0_JdqNi, 22, 16, 16, p_0_JdqNi, 19, p_0_JdqNi, p_0_JdqNi };
char * proxy_ret_aFbkT = realsmith_sblbU(proxy_iS6e4);
return *proxy_ret_aFbkT;
}


__attribute__((used)) static int realsmith_Nk7oR(int val_h, int val_l)
{
 if (val_h & 0x80)
  return (val_h - 0x100) * 1000;
 return (1);
}

__attribute__((used)) static inline int realsmith_1gHzJ( const int *p_buf )
{
    return ((p_buf[0] & 0x7E) >> 1);
}
int realsmith_proxy_PrtZZ(int p_0_3InAM) {
int proxy_ret_YZBwF = realsmith_1gHzJ(&(p_0_3InAM));
return proxy_ret_YZBwF;
}


int realsmith_M9C6k(int nSamplesPerSec, int nBlockAlign)
{
    if (nSamplesPerSec <= 12800)
        return 128 * nBlockAlign;
    if (nSamplesPerSec <= 25600)
        return 256 * nBlockAlign;
    if (nSamplesPerSec <= 51200)
        return 512 * nBlockAlign;
    return 1024 * nBlockAlign;
}

__attribute__((used)) static
int* realsmith_ZsbDZ(int ContextID, register int* info,
                               register int wOut[],
                               register int* output,
                               register int * Stride)
{
    *(int*) output = wOut[2];
    output+= 2;
    *(int*) output = wOut[1];
    output+= 2;
    *(int*) output = wOut[0];
    output+= 2;
    return output;
    (1);
    (1);
}
int realsmith_proxy_Uxiok(int p_0_QcK4H, int p_1_wnXEs, int p_2_Irpf7, int p_3_mu6ti, int p_4_MnrDI) {
int proxy_qLTEi[19] = { 71, 59, 28, p_1_wnXEs, p_1_wnXEs, p_1_wnXEs, 92, p_1_wnXEs, 98, p_1_wnXEs, 69, p_1_wnXEs, 32, p_1_wnXEs, 42, 89, 97, 59, 64 };
int proxy_SwZT0[15] = { 97, p_2_Irpf7, p_2_Irpf7, p_2_Irpf7, p_2_Irpf7, p_2_Irpf7, p_2_Irpf7, p_2_Irpf7, 57, 97, 32, 22, 23, p_2_Irpf7, 76 };
int proxy_KDJFR[13] = { 70, 39, 9, p_3_mu6ti, p_3_mu6ti, p_3_mu6ti, p_3_mu6ti, 48, p_3_mu6ti, p_3_mu6ti, p_3_mu6ti, 91, p_3_mu6ti };
int proxy_uYvTw[15] = { p_4_MnrDI, 54, 95, p_4_MnrDI, 39, 73, p_4_MnrDI, p_4_MnrDI, p_4_MnrDI, 55, 18, 61, 85, 6, 23 };
int * proxy_ret_Hvje9 = realsmith_ZsbDZ(p_0_QcK4H, proxy_qLTEi, proxy_SwZT0, proxy_KDJFR, proxy_uYvTw);
return *proxy_ret_Hvje9;
}


int CAP_SYS_ADMIN_realsmith_31VC0 = -8;

int KEY_FLAG_ROOT_CAN_CLEAR_realsmith_31VC0 = 7;

int KEY_LOOKUP_CREATE_realsmith_31VC0 = 11;

int KEY_WRITE_realsmith_31VC0 = -5;

long realsmith_31VC0(int ringid)
{
 int keyring_ref;
 long ret;
 keyring_ref = (1);
 if ((1)) {
  ret = (1);
  if ((1)) {
   keyring_ref = (1);
   if ((1))
    goto error;
   if ((1))
    goto clear;
   goto error_put;
  }
  goto error;
 }
clear:
 ret = (1);
error_put:
 (1);
error:
 return ret;
}

int realsmith_mALGP(int sn) {
    int val = 0, val1 = 0;
    do {
        val1 = ((1) << 8) | (1);
        if (val1 != 0) {
            val = ((1) << 8) | (1);
        }
    } while (val != val1);
    return val;
}

int AF_INET_realsmith_M3ax7 = 9;

int SOCK_STREAM_realsmith_M3ax7 = -6;

int realsmith_M3ax7()
{
int sockfd;
sockfd=(1);
if(sockfd<0)
{
(1);
return(0);
}
return(sockfd);
}

int O_RDONLY_realsmith_Pb1Q7 = 0;

__attribute__((used)) static int
realsmith_Pb1Q7(char *buf, unsigned long bytes)
{
 int rand;
 unsigned long bytes_read = 0;
 rand = (1);
 if (rand < 0)
  return (rand);
 while (bytes_read < bytes) {
  unsigned long rc = (1);
  if (rc < 0)
   break;
  bytes_read += rc;
 }
 (void) (1);
 return (bytes_read);
}
int realsmith_proxy_FoRpj(char p_0_kXgS5, unsigned long p_1_zHggV) {
char proxy_LQtTZ[15] = { 0, p_0_kXgS5, 11, 30, p_0_kXgS5, p_0_kXgS5, p_0_kXgS5, 49, 11, p_0_kXgS5, p_0_kXgS5, 96, 52, p_0_kXgS5, 39 };
int proxy_ret_eG39l = realsmith_Pb1Q7(proxy_LQtTZ, p_1_zHggV);
return proxy_ret_eG39l;
}


int PROCESS__SIGCHLD_realsmith_hYRIg = -10;

int PROCESS__SIGKILL_realsmith_hYRIg = 14;

int PROCESS__SIGNAL_realsmith_hYRIg = 17;

int PROCESS__SIGSTOP_realsmith_hYRIg = 16;

__attribute__((used)) static inline int realsmith_hYRIg(int sig)
{
 int perm = 0;
 switch (sig) {
 case 130:
  perm = PROCESS__SIGCHLD_realsmith_hYRIg;
  break;
 case 129:
  perm = PROCESS__SIGKILL_realsmith_hYRIg;
  break;
 case 128:
  perm = PROCESS__SIGSTOP_realsmith_hYRIg;
  break;
 default:
  perm = PROCESS__SIGNAL_realsmith_hYRIg;
  break;
 }
 return perm;
}

char *
realsmith_cfSbD(const char *s)
{
 char *p;
 unsigned long len;
 len = (1);
 p = ("0");
 (1);
 return p;
}
char realsmith_proxy_fXOSZ(char p_0_7NS4e) {
char proxy_GOz5j[20] = { p_0_7NS4e, p_0_7NS4e, p_0_7NS4e, p_0_7NS4e, 15, 25, 37, p_0_7NS4e, 11, 35, 54, 74, p_0_7NS4e, p_0_7NS4e, p_0_7NS4e, 77, p_0_7NS4e, p_0_7NS4e, 56, 67 };
char * proxy_ret_MUbl2 = realsmith_cfSbD(proxy_GOz5j);
return *proxy_ret_MUbl2;
}


__attribute__((used)) static int realsmith_txl4M( int* L ){
 int us = (1);
 if(us <= 0)
  return (1);
 while(us >= 1000000){
  us -= 1000000;
  (1);
  (1);
 }
 if(us>0){
  (1);
  (1);
 }
 return 0;
}
int realsmith_proxy_NcRts(int p_0_Q0T4f) {
int proxy_5Ymgf[18] = { p_0_Q0T4f, p_0_Q0T4f, p_0_Q0T4f, p_0_Q0T4f, p_0_Q0T4f, p_0_Q0T4f, 55, p_0_Q0T4f, 51, 78, p_0_Q0T4f, 89, 93, p_0_Q0T4f, p_0_Q0T4f, p_0_Q0T4f, p_0_Q0T4f, 18 };
int proxy_ret_e8UhE = realsmith_txl4M(proxy_5Ymgf);
return proxy_ret_e8UhE;
}


__attribute__((used)) static inline int realsmith_g75Vd(unsigned offset, unsigned count)
{
 return (6 << 28) | (offset << 16) | (1) | count;
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
#define Tag768(x) (x)
#define Tag769(x) (x)
#define Tag770(x) (x)
#define Tag771(x) (x)
#define Tag772(x) (x)
#define Tag773(x) (x)
#define Tag774(x) (x)
#define Tag775(x) (x)
#define Tag776(x) (x)
#define Tag777(x) (x)
#define Tag778(x) (x)
#define Tag779(x) (x)
#define Tag780(x) (x)
#define Tag781(x) (x)
#define Tag782(x) (x)
#define Tag783(x) (x)
#define Tag784(x) (x)
#define Tag785(x) (x)
#define Tag786(x) (x)
#define Tag787(x) (x)
#define Tag788(x) (x)
#define Tag789(x) (x)
#define Tag790(x) (x)
#define Tag791(x) (x)
#define Tag792(x) (x)
#define Tag793(x) (x)
#define Tag794(x) (x)
#define Tag795(x) (x)
#define Tag796(x) (x)
#define Tag797(x) (x)
#define Tag798(x) (x)
#define Tag799(x) (x)
#define Tag800(x) (x)
#define Tag801(x) (x)
#define Tag802(x) (x)
#define Tag803(x) (x)
#define Tag804(x) (x)
#define Tag805(x) (x)
#define Tag806(x) (x)
#define Tag807(x) (x)
#define Tag808(x) (x)
#define Tag809(x) (x)
#define Tag810(x) (x)
#define Tag811(x) (x)
#define Tag812(x) (x)
#define Tag813(x) (x)
#define Tag814(x) (x)
#define Tag815(x) (x)
#define Tag816(x) (x)
#define Tag817(x) (x)
#define Tag818(x) (x)
#define Tag819(x) (x)
#define Tag820(x) (x)
#define Tag821(x) (x)
#define Tag822(x) (x)
#define Tag823(x) (x)
#define Tag824(x) (x)
#define Tag825(x) (x)
#define Tag826(x) (x)
#define Tag827(x) (x)
#define Tag828(x) (x)
#define Tag829(x) (x)
#define Tag830(x) (x)
#define Tag831(x) (x)
#define Tag832(x) (x)
#define Tag833(x) (x)
#define Tag834(x) (x)
#define Tag835(x) (x)
#define Tag836(x) (x)
#define Tag837(x) (x)
#define Tag838(x) (x)
#define Tag839(x) (x)
#define Tag840(x) (x)
#define Tag841(x) (x)
#define Tag842(x) (x)
#define Tag843(x) (x)
#define Tag844(x) (x)
#define Tag845(x) (x)
#define Tag846(x) (x)
#define Tag847(x) (x)
#define Tag848(x) (x)
#define Tag849(x) (x)
#define Tag850(x) (x)
#define Tag851(x) (x)
#define Tag852(x) (x)
#define Tag853(x) (x)
#define Tag854(x) (x)
#define Tag855(x) (x)
#define Tag856(x) (x)
#define Tag857(x) (x)
#define Tag858(x) (x)
#define Tag859(x) (x)
#define Tag860(x) (x)
#define Tag861(x) (x)
#define Tag862(x) (x)
#define Tag863(x) (x)
#define Tag864(x) (x)
#define Tag865(x) (x)
#define Tag866(x) (x)
#define Tag867(x) (x)
#define Tag868(x) (x)
#define Tag869(x) (x)
#define Tag870(x) (x)
#define Tag871(x) (x)
#define Tag872(x) (x)
#define Tag873(x) (x)
#define Tag874(x) (x)
#define Tag875(x) (x)
#define Tag876(x) (x)
#define Tag877(x) (x)
#define Tag878(x) (x)
#define Tag879(x) (x)
#define Tag880(x) (x)
#define Tag881(x) (x)
#define Tag882(x) (x)
#define Tag883(x) (x)
#define Tag884(x) (x)
#define Tag885(x) (x)
#define Tag886(x) (x)
#define Tag887(x) (x)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output /home/chuang/FramaCsliceNew/creal/batch_experiments/test_20251112_222033/test14/U6GQE8_seed.c
 * Seed:      101978341
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_3 = 1UL;
static const int64_t g_13 = (-1L);
static uint32_t g_37 = 0x6BB2F144L;
static uint32_t *g_36[2][10][7] = {{{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,(void*)0,&g_37},{&g_37,&g_37,(void*)0,&g_37,(void*)0,&g_37,(void*)0},{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,(void*)0},{(void*)0,&g_37,&g_37,&g_37,&g_37,(void*)0,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,(void*)0,(void*)0},{&g_37,&g_37,&g_37,&g_37,&g_37,(void*)0,&g_37}},{{&g_37,(void*)0,&g_37,&g_37,&g_37,&g_37,(void*)0},{(void*)0,&g_37,&g_37,&g_37,&g_37,(void*)0,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,(void*)0,(void*)0},{&g_37,&g_37,&g_37,&g_37,&g_37,(void*)0,&g_37},{&g_37,(void*)0,&g_37,&g_37,&g_37,&g_37,(void*)0},{(void*)0,&g_37,&g_37,&g_37,&g_37,(void*)0,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,(void*)0,(void*)0},{&g_37,&g_37,&g_37,&g_37,&g_37,(void*)0,&g_37},{&g_37,(void*)0,&g_37,&g_37,&g_37,&g_37,(void*)0},{(void*)0,&g_37,&g_37,&g_37,&g_37,(void*)0,&g_37}}};
static int32_t g_69[6][8][5] = {{{0x04811E35L,0x15BB970EL,0x691D145CL,0x04811E35L,(-1L)},{0x04811E35L,0L,(-6L),0x3AEBC018L,(-8L)},{0x07C152A3L,0x233FFCD5L,0xF089E30CL,(-1L),0L},{0x233FFCD5L,1L,0x86219E20L,0x99B58ECEL,(-1L)},{0x48F7C4FBL,0x5DC1C47FL,0L,0x5DC1C47FL,0x48F7C4FBL},{0x86219E20L,0x04811E35L,1L,(-5L),0L},{0x39AA88D1L,1L,1L,0x48F7C4FBL,(-1L)},{0x5DC1C47FL,0L,0x14A140C5L,0x04811E35L,0L}},{{0x6D0B4E55L,0x48F7C4FBL,(-7L),0xF089E30CL,0x48F7C4FBL},{0L,0x15BB970EL,0xF089E30CL,0x9F7A6BAEL,(-1L)},{0xCFEAA3CEL,0L,0x14A140C5L,0x3AEBC018L,0L},{0xFF541EDFL,0x5DC1C47FL,(-1L),0x763CD51DL,(-8L)},{0x233FFCD5L,1L,0x07C152A3L,(-8L),(-1L)},{0x39AA88D1L,0L,0L,(-8L),0x1FF3C8D2L},{0x6D0B4E55L,0xCFEAA3CEL,0x15BB970EL,0x763CD51DL,0L},{5L,0x9B762B02L,0xA7F359A1L,0x3AEBC018L,(-5L)}},{{0L,0L,(-6L),0x9F7A6BAEL,0x9F7A6BAEL},{0x86219E20L,0x39AA88D1L,0x86219E20L,0xF089E30CL,(-3L)},{0L,1L,(-1L),0x04811E35L,(-5L)},{0xCFEAA3CEL,0x04811E35L,0x501D2D5FL,0xA7F359A1L,(-1L)},{0xABEFA6B6L,(-1L),(-9L),9L,0x763CD51DL},{0x691D145CL,0x48EDA297L,0xE61979B9L,0x691D145CL,(-2L)},{0x15BB970EL,0xF089E30CL,0x9F7A6BAEL,(-1L),0xA7F359A1L},{0xABEFA6B6L,0xFF541EDFL,0L,(-9L),0x07C152A3L}},{{0x9B762B02L,1L,0x48EDA297L,1L,(-9L)},{0xF089E30CL,0x15BB970EL,0L,0x86219E20L,(-7L)},{0xE61979B9L,0x15BB970EL,0xABEFA6B6L,9L,9L},{0x8AD7B590L,1L,(-9L),(-7L),0L},{0x86219E20L,0xFF541EDFL,0L,0x15BB970EL,(-1L)},{0x64A3C805L,0xF089E30CL,0x043A44ADL,0x043A44ADL,0xF089E30CL},{(-1L),0x48EDA297L,(-5L),(-1L),(-9L)},{0x9B762B02L,(-1L),0L,(-1L),1L}},{{0x88CB35B2L,0x86219E20L,8L,1L,(-7L)},{0x9B762B02L,0x14A140C5L,1L,0xA7F359A1L,(-2L)},{(-1L),9L,0L,(-7L),0x6D0B4E55L},{0x64A3C805L,0x9B762B02L,0xE61979B9L,1L,9L},{0x86219E20L,(-6L),0x043A44ADL,0x6B242CFFL,9L},{0x8AD7B590L,0xFF541EDFL,0x9F7A6BAEL,1L,(-1L)},{0xE61979B9L,(-1L),0x02A6F411L,0x043A44ADL,(-1L)},{0xF089E30CL,0x14A140C5L,0x0BF19973L,0x691D145CL,9L}},{{0x9B762B02L,0x691D145CL,0x501D2D5FL,0xF089E30CL,9L},{0xABEFA6B6L,0x8AD7B590L,8L,9L,0x6D0B4E55L},{0x15BB970EL,0x48EDA297L,0x48EDA297L,0x15BB970EL,(-2L)},{0x691D145CL,0xA7F359A1L,0x9F7A6BAEL,0x6B242CFFL,(-7L)},{0xABEFA6B6L,0x9B762B02L,(-5L),(-9L),1L},{0xFF541EDFL,1L,0x02A6F411L,0x6B242CFFL,(-9L)},{(-7L),0x86219E20L,0L,0x15BB970EL,0xF089E30CL},{0xE61979B9L,0x691D145CL,(-2L),9L,(-1L)}}};
static int32_t *g_71 = &g_69[1][7][3];
static int32_t **g_70 = &g_71;
static int32_t g_79 = 0L;
static uint8_t g_89[9][6][4] = {{{1UL,255UL,247UL,0x3CL},{1UL,1UL,0x65L,1UL},{247UL,0UL,0xC7L,0x11L},{247UL,0UL,0x65L,0xE5L},{1UL,0x11L,247UL,0UL},{1UL,247UL,247UL,1UL}},{{0UL,247UL,0x11L,1UL},{0xE5L,0x65L,0UL,247UL},{0x11L,0xC7L,0UL,247UL},{1UL,0x65L,1UL,1UL},{0x3CL,247UL,255UL,1UL},{246UL,247UL,246UL,1UL}},{{246UL,0UL,0UL,1UL},{247UL,0UL,1UL,0UL},{0x39L,255UL,1UL,7UL},{247UL,0x39L,0UL,0x65L},{246UL,0xC7L,0xFFL,0xFFL},{0xFFL,0xFFL,0xC7L,246UL}},{{0x65L,0UL,0x39L,247UL},{7UL,1UL,255UL,0x39L},{0UL,1UL,0UL,247UL},{1UL,0UL,0UL,246UL},{1UL,0xFFL,252UL,0xFFL},{4UL,0xC7L,247UL,0x65L}},{{0x11L,0x39L,0xE5L,7UL},{252UL,255UL,1UL,0UL},{252UL,0UL,0xE5L,1UL},{0x11L,0UL,247UL,1UL},{4UL,252UL,252UL,4UL},{1UL,247UL,0UL,0x11L}},{{1UL,0xE5L,0UL,252UL},{0UL,1UL,255UL,252UL},{7UL,0xE5L,0x39L,0x11L},{0x65L,247UL,0xC7L,4UL},{0xFFL,252UL,0xFFL,1UL},{246UL,0UL,0UL,1UL}},{{247UL,0UL,1UL,0UL},{0x39L,255UL,1UL,7UL},{247UL,0x39L,0UL,0x65L},{246UL,0xC7L,0xFFL,0xFFL},{0xFFL,0xFFL,0xC7L,246UL},{0x65L,0UL,0x39L,247UL}},{{7UL,1UL,255UL,0x39L},{0UL,1UL,0UL,247UL},{1UL,0UL,0UL,246UL},{1UL,0xFFL,252UL,0xFFL},{4UL,0xC7L,247UL,0x65L},{0x11L,0x39L,0xE5L,7UL}},{{252UL,255UL,1UL,0UL},{252UL,0UL,0xE5L,1UL},{0x11L,0UL,247UL,1UL},{4UL,252UL,252UL,4UL},{1UL,247UL,0UL,0x11L},{1UL,0xE5L,0UL,252UL}}};
static uint64_t g_92 = 2UL;
static uint32_t g_94 = 4294967295UL;
static const int32_t g_99 = 0x1181933AL;
static int64_t g_101 = (-1L);
static uint16_t g_105 = 0xF969L;
static uint16_t g_131 = 0xE95AL;
static uint16_t g_135 = 65535UL;
static int16_t g_141 = 0x9807L;
static int16_t g_143 = 0xE80CL;
static uint32_t g_169 = 3UL;
static uint32_t **g_175[1][3] = {{&g_36[1][1][4],&g_36[1][1][4],&g_36[1][1][4]}};
static uint32_t ***g_174 = &g_175[0][1];
static int8_t g_208 = 0xFCL;
static int16_t g_239 = 0x08B9L;
static uint64_t g_300 = 0xA7D234CDEC322C72LL;
static uint64_t *g_315 = &g_92;
static uint64_t **g_314 = &g_315;
static uint32_t ****g_349 = &g_174;
static uint16_t *g_369 = &g_135;
static uint16_t **g_368[3] = {&g_369,&g_369,&g_369};
static uint16_t g_394 = 1UL;
static const int8_t g_416 = (-6L);
static const int8_t *g_415 = &g_416;
static int8_t g_457 = 6L;
static uint32_t g_493 = 4UL;
static int32_t g_522 = (-1L);
static uint64_t g_571[1] = {0x8DC54B8A9A32511DLL};
static uint16_t ***g_618 = (void*)0;
static uint8_t g_637 = 0UL;
static uint16_t g_639 = 1UL;
static int8_t g_665 = 0x6EL;
static int8_t g_694[2] = {1L,1L};
static int32_t g_705 = 9L;
static uint8_t g_767 = 0x44L;
static int64_t *g_847 = (void*)0;
static int64_t **g_846[10] = {&g_847,&g_847,&g_847,&g_847,&g_847,&g_847,&g_847,&g_847,&g_847,&g_847};
static int8_t *g_886 = &g_208;
static int8_t **g_885 = &g_886;
static int32_t *g_891[9][10] = {{(void*)0,&g_522,&g_79,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705},{&g_79,&g_705,&g_522,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705},{&g_79,&g_705,&g_522,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705},{&g_79,&g_705,&g_522,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705},{&g_79,&g_705,&g_522,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705},{&g_79,&g_705,&g_522,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705},{&g_79,&g_705,&g_522,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705},{&g_79,&g_705,&g_522,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705},{&g_79,&g_705,&g_522,&g_522,&g_705,&g_79,&g_705,&g_522,&g_522,&g_705}};
static const int16_t *g_952 = &g_239;
static const int16_t **g_951 = &g_952;
static int64_t g_953 = 2L;
static uint16_t g_996 = 1UL;
static uint32_t g_1031 = 4294967292UL;
static uint32_t g_1037 = 0x2DBB3649L;
static int8_t ***g_1053 = (void*)0;
static int8_t ****g_1052 = &g_1053;
static int32_t g_1060 = 1L;
static uint8_t *g_1114[6][4][1] = {{{&g_89[4][4][3]},{(void*)0},{&g_637},{(void*)0}},{{&g_89[4][4][3]},{(void*)0},{&g_637},{(void*)0}},{{&g_89[4][4][3]},{(void*)0},{&g_637},{(void*)0}},{{&g_89[4][4][3]},{(void*)0},{&g_637},{(void*)0}},{{&g_89[4][4][3]},{(void*)0},{&g_637},{(void*)0}},{{&g_89[4][4][3]},{(void*)0},{&g_637},{(void*)0}}};
static uint8_t **g_1113 = &g_1114[1][2][0];
static uint32_t g_1128 = 0x527A2B41L;
static int32_t g_1262 = (-1L);
static uint16_t * const *g_1346 = (void*)0;
static int8_t g_1368 = (-2L);
static int32_t **g_1583 = &g_71;
static int64_t g_1729[3] = {0xD35344F1B5F7C799LL,0xD35344F1B5F7C799LL,0xD35344F1B5F7C799LL};
static uint32_t g_1890 = 0xBF49A2BCL;
static uint16_t g_1963 = 0xDA87L;
static uint32_t g_1976 = 0x71DD784FL;
static const uint64_t *g_2003 = (void*)0;
static const uint64_t **g_2002[5] = {&g_2003,&g_2003,&g_2003,&g_2003,&g_2003};
static int8_t *****g_2015 = &g_1052;
static const int64_t g_2039 = 0xD2589430F301D06DLL;
static uint32_t ** const *g_2078[5][7] = {{&g_175[0][1],&g_175[0][1],&g_175[0][1],&g_175[0][1],&g_175[0][2],&g_175[0][1],&g_175[0][1]},{&g_175[0][1],&g_175[0][1],&g_175[0][2],&g_175[0][0],&g_175[0][2],&g_175[0][1],&g_175[0][1]},{&g_175[0][1],&g_175[0][1],&g_175[0][1],&g_175[0][1],&g_175[0][1],&g_175[0][1],&g_175[0][1]},{&g_175[0][1],&g_175[0][0],&g_175[0][1],&g_175[0][2],&g_175[0][2],&g_175[0][1],&g_175[0][0]},{&g_175[0][1],&g_175[0][2],&g_175[0][1],&g_175[0][1],&g_175[0][2],&g_175[0][1],&g_175[0][2]}};
static uint32_t ** const **g_2077 = &g_2078[2][1];
static int64_t ***g_2143 = &g_846[0];
static int64_t ****g_2142 = &g_2143;
static int8_t g_2180 = 5L;
static const uint16_t g_2214 = 0x90FCL;
static const uint16_t *g_2213 = &g_2214;
static uint32_t *****g_2239[1] = {&g_349};
static uint64_t g_2279 = 0x3595F421F5B378F2LL;
static uint32_t g_2356 = 0xBB6BC3ECL;
static const int32_t g_2372 = 1L;
static int64_t g_2377 = 0xC6E12CDFD7F7FFFFLL;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);
static uint8_t  func_8(const int16_t  p_9, uint32_t  p_10, uint32_t * p_11, uint32_t * p_12);
static uint32_t * func_14(uint32_t * p_15, uint32_t * p_16, int32_t  p_17, uint32_t * const  p_18, int32_t  p_19);
static uint16_t  func_20(uint32_t  p_21, const uint32_t  p_22);
static const int32_t  func_25(uint32_t * const  p_26);
static uint32_t * func_27(uint32_t * p_28);
static uint32_t * func_29(int32_t  p_30, uint32_t * p_31, int32_t  p_32);
static uint32_t * func_38(uint32_t  p_39, int32_t  p_40);
static int8_t  func_41(uint64_t  p_42, uint32_t * p_43, uint32_t  p_44);
static const int64_t  func_45(uint32_t * p_46, int64_t  p_47, uint32_t * p_48, uint8_t  p_49);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_13 g_36 g_70 g_79 g_37 g_71 g_89 g_94 g_99 g_69 g_105 g_131 g_135 g_143 g_141 g_92 g_174 g_101 g_169 g_208 g_239 g_314 g_315 g_368 g_175 g_369 g_300 g_394 g_637 g_415 g_416 g_767 g_522 g_493 g_665 g_571 g_846 g_885 g_694 g_886 g_349 g_951 g_953 g_639 g_952 g_1031 g_1052 g_1060 g_1113 g_1128 g_1037 g_996 g_1262 g_1114 g_1583 g_1729 g_457 g_1890 g_2356 g_2372 g_2377
 * writes: g_3 g_79 g_37 g_69 g_89 g_92 g_94 g_105 g_71 g_131 g_135 g_141 g_143 g_169 g_101 g_300 g_349 g_368 g_394 g_415 g_208 g_239 g_637 g_694 g_767 g_493 g_891 g_175 g_847 g_996 g_1031 g_571 g_639 g_1037 g_1128 g_70 g_953 g_1060 g_1262 g_1346 g_315 g_705 g_1114 g_369 g_457 g_665 g_1729 g_2356
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint32_t *l_2 = &g_3;
    int32_t l_35[2];
    uint64_t l_1035 = 0UL;
    uint32_t *l_1036 = &g_1037;
    int32_t l_1919[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
    uint32_t *l_1920 = &g_1890;
    int64_t **l_1995[1][9] = {{&g_847,&g_847,&g_847,&g_847,&g_847,&g_847,&g_847,&g_847,&g_847}};
    int32_t l_1997 = 0L;
    uint8_t l_2032 = 255UL;
    uint16_t l_2038 = 1UL;
    int32_t l_2062 = 0xC05055E8L;
    uint8_t l_2095[4] = {255UL,255UL,255UL,255UL};
    int8_t **l_2124[2][9][5] = {{{&g_886,&g_886,&g_886,(void*)0,&g_886},{&g_886,&g_886,&g_886,(void*)0,&g_886},{(void*)0,(void*)0,(void*)0,(void*)0,&g_886},{&g_886,&g_886,(void*)0,&g_886,&g_886},{&g_886,&g_886,&g_886,&g_886,&g_886},{&g_886,(void*)0,&g_886,(void*)0,&g_886},{(void*)0,(void*)0,&g_886,&g_886,&g_886},{&g_886,&g_886,(void*)0,(void*)0,&g_886},{(void*)0,&g_886,(void*)0,&g_886,&g_886}},{{&g_886,&g_886,&g_886,&g_886,&g_886},{&g_886,(void*)0,&g_886,(void*)0,(void*)0},{&g_886,&g_886,(void*)0,&g_886,&g_886},{(void*)0,&g_886,&g_886,(void*)0,(void*)0},{&g_886,(void*)0,&g_886,&g_886,(void*)0},{&g_886,(void*)0,(void*)0,&g_886,&g_886},{&g_886,&g_886,(void*)0,&g_886,&g_886},{&g_886,&g_886,&g_886,(void*)0,&g_886},{&g_886,(void*)0,&g_886,&g_886,(void*)0}}};
    uint8_t l_2138 = 0x34L;
    uint8_t **l_2139 = &g_1114[1][2][0];
    uint64_t l_2140 = 0x866A14AE2AC6E429LL;
    uint16_t ** const *l_2150[10][4][6] = {{{&g_368[2],&g_368[2],&g_368[2],&g_368[1],&g_368[2],(void*)0},{&g_368[2],&g_368[2],&g_368[1],&g_368[0],&g_368[2],&g_368[2]},{&g_368[2],&g_368[2],&g_368[1],&g_368[2],&g_368[2],(void*)0},{(void*)0,&g_368[2],&g_368[2],&g_368[2],&g_368[2],(void*)0}},{{&g_368[2],&g_368[2],(void*)0,&g_368[1],(void*)0,&g_368[2]},{&g_368[2],&g_368[1],&g_368[0],&g_368[2],(void*)0,&g_368[2]},{(void*)0,(void*)0,&g_368[2],&g_368[1],&g_368[2],&g_368[2]},{&g_368[2],&g_368[2],(void*)0,&g_368[2],&g_368[2],&g_368[2]}},{{&g_368[1],(void*)0,&g_368[2],&g_368[1],&g_368[2],&g_368[0]},{&g_368[2],(void*)0,&g_368[1],&g_368[2],&g_368[1],&g_368[2]},{&g_368[2],(void*)0,&g_368[2],&g_368[2],&g_368[1],&g_368[1]},{&g_368[2],&g_368[2],&g_368[2],&g_368[2],&g_368[1],&g_368[0]}},{{&g_368[2],&g_368[1],(void*)0,&g_368[2],&g_368[2],&g_368[2]},{&g_368[2],&g_368[2],&g_368[2],&g_368[2],&g_368[0],&g_368[2]},{(void*)0,&g_368[2],&g_368[2],&g_368[1],(void*)0,&g_368[1]},{&g_368[2],&g_368[0],&g_368[2],&g_368[2],&g_368[2],&g_368[2]}},{{&g_368[2],&g_368[2],&g_368[2],&g_368[2],&g_368[2],&g_368[2]},{&g_368[1],&g_368[1],&g_368[1],(void*)0,&g_368[0],&g_368[0]},{&g_368[1],&g_368[1],&g_368[2],&g_368[1],&g_368[2],(void*)0},{(void*)0,&g_368[2],&g_368[1],&g_368[2],(void*)0,&g_368[1]}},{{(void*)0,(void*)0,&g_368[2],&g_368[1],&g_368[1],(void*)0},{&g_368[0],&g_368[2],&g_368[2],&g_368[2],&g_368[2],&g_368[2]},{&g_368[2],&g_368[2],&g_368[2],&g_368[0],&g_368[1],(void*)0},{&g_368[0],&g_368[2],&g_368[1],(void*)0,&g_368[0],(void*)0}},{{&g_368[2],&g_368[2],&g_368[1],&g_368[1],&g_368[2],(void*)0},{&g_368[2],&g_368[1],&g_368[2],&g_368[2],&g_368[2],&g_368[2]},{&g_368[1],&g_368[2],(void*)0,&g_368[2],&g_368[2],&g_368[2]},{&g_368[1],&g_368[0],&g_368[1],&g_368[2],&g_368[2],&g_368[0]}},{{&g_368[2],(void*)0,&g_368[1],&g_368[2],&g_368[0],&g_368[1]},{&g_368[0],&g_368[2],(void*)0,&g_368[2],&g_368[1],&g_368[0]},{&g_368[2],&g_368[2],&g_368[0],&g_368[1],&g_368[2],&g_368[2]},{&g_368[2],&g_368[2],&g_368[0],&g_368[2],&g_368[1],&g_368[0]}},{{(void*)0,&g_368[2],&g_368[2],&g_368[1],&g_368[2],&g_368[2]},{&g_368[2],(void*)0,&g_368[0],&g_368[2],&g_368[2],&g_368[2]},{(void*)0,&g_368[2],&g_368[2],(void*)0,&g_368[2],(void*)0},{&g_368[2],&g_368[2],&g_368[2],&g_368[2],&g_368[2],&g_368[2]}},{{&g_368[1],&g_368[2],&g_368[2],&g_368[2],&g_368[2],&g_368[1]},{&g_368[1],&g_368[2],&g_368[1],&g_368[2],&g_368[2],&g_368[2]},{(void*)0,&g_368[2],(void*)0,(void*)0,&g_368[2],&g_368[1]},{&g_368[2],(void*)0,(void*)0,&g_368[2],&g_368[2],&g_368[2]}}};
    uint16_t ** const **l_2149 = &l_2150[4][0][3];
    uint16_t ** const ***l_2148 = &l_2149;
    int16_t l_2159[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
    uint64_t ***l_2200 = &g_314;
    const int64_t l_2212 = 1L;
    uint32_t *****l_2238 = &g_349;
    uint64_t *l_2241 = (void*)0;
    const uint16_t l_2281[1] = {0UL};
    uint64_t l_2303 = 0UL;
    uint32_t l_2371 = 7UL;
    uint32_t l_2376 = 0xA5019003L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_35[i] = 0xB288586FL;
    /*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
/*bef_stmt:126330*/
if ((((*l_2)--) < (safe_lshift_func_uint8_t_u_u(func_8(/*TAG1:STA*/((int64_t)(realsmith_proxy_5VZLX((int)(g_13)+(70))+(char)(g_13)-(62))+g_13)/*TAG1:END:g_13*/, /*TAG2:STA*/((int64_t)(realsmith_proxy_ZA9kf((unsigned char)(g_13)+(-194), (int)(g_13)+(10))+(int)(g_13)-(0))+g_13)/*TAG2:END:g_13*/, func_14(((l_1919[0] ^= ((func_20((safe_mod_func_int32_t_s_s(func_25(func_27((/*TAG3:STA*/((int64_t)(realsmith_proxy_dgg2q((char)(g_13)+(-4))+(int)(g_13)-(-1))+g_13)/*TAG3:END:g_13*/ , func_29((/*TAG4:STA*/((int32_t)(realsmith_Fahhh((int)(l_35[1])+(1299687324), (int)(l_35[1])+(1299687401))+(int)(l_35[1])-(-1299687309))+l_35[1])/*TAG4:END:l_35[1]*/ && ((void*)0 == g_36[1][1][4])), func_38(((65529UL > (func_41(((((/*TAG5:STA*/((int32_t)(realsmith_proxy_FKN7Z((char)(l_35[1])+(-111))+(char)(l_35[1])-(111))+l_35[1])/*TAG5:END:l_35[1]*/ == (func_45(&g_37, /*TAG6:STA*/((int64_t)(realsmith_proxy_KVylQ((char)(g_13)+(-10))+(char)(g_13)-(47))+g_13)/*TAG6:END:g_13*/, l_2, /*TAG7:STA*/((int64_t)(realsmith_proxy_h1RoO((int)(g_13)+(1), (int)(g_13)+(0), 4)+(int)(g_13)-(-1))+g_13)/*TAG7:END:g_13*/) && /*TAG8:STA*/((uint64_t)(realsmith_ri5Yf((int)(l_1035)+(92), (int)(l_1035)+(82), (int)(l_1035)+(25))+(int)(l_1035)-(37646436))+l_1035)/*TAG8:END:l_1035*/)) >= /*TAG9:STA*/((int32_t)(realsmith_lMKNi()+(int)(l_35[1])-(-1299687313))+l_35[1])/*TAG9:END:l_35[1]*/) || (Tag10(/*uint16_t:0:0:126330:e*/*g_369))) || /*TAG11:STA*/((uint64_t)(realsmith_tZLgh((int)(l_1035)+(68))+(int)(l_1035)+(int)(l_35[1])+(int)(g_13)-(-1299687310))+l_1035)/*TAG11:END:l_1035*/), l_1036, /*TAG12:STA*/((int32_t)(realsmith_OLlJA()+(int)(l_35[1])+(int)(g_13)+(int)(l_1035)-(-1299687320))+l_35[1])/*TAG12:END:l_35[1]*/) , (Tag13(/*const int16_t:0:0:126330:e*/*g_952)))) && 0xB414L), Tag14(/*const int32_t:0:0:126330:e*/g_99)), /*TAG15:STA*/((uint64_t)(realsmith_vf13g((int)(l_35[1])+(1299687400), (int)(l_35[1])+(1299687393))+(int)(l_1035)+(int)(g_13)+(int)(g_99)+(int)(l_35[1])-(-1005982808))+l_1035)/*TAG15:END:l_1035*/)))), /*TAG16:STA*/((uint64_t)(realsmith_NpCyp()+(int)(l_1035)+(int)(g_13)+(int)(g_99)+(int)(l_35[1])-(-1005982809))+l_1035)/*TAG16:END:l_1035*/)), /*TAG17:STA*/((int32_t)(realsmith_proxy_ROOFK((char)(l_35[1])+(-36))+(int)(l_35[1])+(int)(g_99)+(int)(g_13)+(int)(l_1035)-(-1005982796))+l_35[1])/*TAG17:END:l_35[1]*/) <= 0L) | 0x9E9FL)) , l_1036), l_1920, /*TAG18:STA*/((uint64_t)(realsmith_proxy_JzT3Y((int)(g_99)+(-293704437), (int)(g_13)+(-33))+(int)(l_1035)+(int)(g_13)+(int)(l_35[1])+(int)(g_99)-(-1005982808))+l_1035)/*TAG18:END:l_1035*/, &g_1890, /*TAG19:STA*/((int32_t)(realsmith_vgOjQ()+(int)(l_35[1])+(int)(g_13)+(int)(g_99)+(int)(l_1035)-(-1005982807))+l_35[1])/*TAG19:END:l_35[1]*/), l_2), 2))))
    { /* block id: 789 */
        const uint32_t l_1959 = 0x6857C5DDL;
        const int8_t **l_2006[10][8][3] = {{{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{(void*)0,(void*)0,&g_415},{(void*)0,&g_415,&g_415},{(void*)0,&g_415,(void*)0},{&g_415,(void*)0,(void*)0},{&g_415,(void*)0,&g_415},{&g_415,&g_415,&g_415}},{{&g_415,&g_415,&g_415},{&g_415,(void*)0,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,(void*)0,&g_415},{&g_415,&g_415,(void*)0},{&g_415,&g_415,(void*)0},{&g_415,(void*)0,(void*)0}},{{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,(void*)0,&g_415},{&g_415,&g_415,(void*)0},{(void*)0,&g_415,(void*)0},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415}},{{&g_415,(void*)0,&g_415},{(void*)0,&g_415,&g_415},{(void*)0,&g_415,(void*)0},{&g_415,&g_415,(void*)0},{&g_415,&g_415,(void*)0},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415}},{{&g_415,(void*)0,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{(void*)0,&g_415,&g_415},{(void*)0,(void*)0,&g_415},{&g_415,(void*)0,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415}},{{&g_415,&g_415,&g_415},{(void*)0,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{(void*)0,&g_415,(void*)0},{&g_415,&g_415,(void*)0},{(void*)0,&g_415,(void*)0},{&g_415,&g_415,&g_415}},{{&g_415,(void*)0,&g_415},{&g_415,(void*)0,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{(void*)0,&g_415,(void*)0},{&g_415,(void*)0,(void*)0},{(void*)0,&g_415,&g_415},{&g_415,&g_415,&g_415}},{{&g_415,&g_415,(void*)0},{(void*)0,&g_415,(void*)0},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,(void*)0,&g_415},{(void*)0,&g_415,&g_415},{(void*)0,&g_415,(void*)0}},{{&g_415,&g_415,(void*)0},{&g_415,&g_415,(void*)0},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,(void*)0,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415}},{{(void*)0,&g_415,&g_415},{(void*)0,(void*)0,&g_415},{&g_415,(void*)0,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415},{(void*)0,&g_415,&g_415},{&g_415,&g_415,&g_415}}};
        const int8_t ***l_2005 = &l_2006[0][2][2];
        uint32_t ***l_2014 = &g_175[0][1];
        int32_t l_2033 = 0L;
        int64_t **l_2049 = &g_847;
        uint32_t l_2100[4][1] = {{0xAAFD133DL},{0xEBA766F0L},{0xAAFD133DL},{0xEBA766F0L}};
        uint64_t * const l_2145[6][8][5] = {{{&g_571[0],&l_2140,&g_571[0],&l_1035,&l_1035},{&l_2140,&g_571[0],&l_2140,&l_2140,&g_300},{&l_2140,&g_300,&l_2140,&g_571[0],&g_571[0]},{&g_571[0],&g_571[0],&g_300,&l_1035,&l_1035},{&g_571[0],(void*)0,&l_2140,&g_571[0],&l_2140},{&g_571[0],&g_571[0],&l_2140,&g_300,&l_2140},{&l_2140,&g_300,&g_571[0],&l_1035,&l_1035},{&g_571[0],&l_1035,&g_571[0],&g_571[0],&g_571[0]}},{{&g_571[0],&g_300,&g_571[0],&g_571[0],&g_300},{&l_1035,&g_571[0],&l_1035,&g_571[0],(void*)0},{&g_300,(void*)0,(void*)0,&g_571[0],&l_1035},{&g_300,&g_571[0],&g_571[0],&l_1035,&l_2140},{&g_300,&g_300,&l_2140,&g_300,&g_300},{&l_1035,&g_571[0],&l_2140,&g_571[0],&g_571[0]},{&g_571[0],&l_2140,&g_571[0],&l_1035,&g_571[0]},{&g_571[0],&g_300,(void*)0,&g_571[0],&g_571[0]}},{{&l_2140,&l_1035,&l_1035,&l_2140,&g_300},{&g_571[0],&l_1035,&g_571[0],(void*)0,&l_2140},{&g_571[0],&g_300,&g_571[0],&l_2140,&l_1035},{&g_571[0],&l_2140,&g_571[0],(void*)0,(void*)0},{&l_2140,&g_571[0],&l_2140,&l_2140,&g_300},{&l_2140,&g_300,&l_2140,&g_571[0],&g_571[0]},{&g_571[0],&g_571[0],&g_300,&l_1035,&l_1035},{&g_571[0],(void*)0,&l_2140,&g_571[0],&l_2140}},{{&g_571[0],&g_571[0],&l_2140,&g_300,&l_2140},{&l_2140,&g_300,&g_571[0],&l_1035,&l_1035},{&g_571[0],&l_1035,&g_571[0],&g_571[0],&g_571[0]},{&g_571[0],&g_300,&g_571[0],&g_571[0],&g_300},{&l_1035,&g_571[0],&l_1035,&g_571[0],(void*)0},{&g_300,(void*)0,(void*)0,&g_571[0],&l_1035},{&g_300,&g_571[0],&g_571[0],&l_1035,&l_2140},{&g_300,&g_300,&l_2140,&g_300,&g_300}},{{&l_1035,&g_571[0],&l_2140,&g_571[0],&g_571[0]},{&g_571[0],&l_2140,&g_571[0],&l_1035,&g_571[0]},{&g_571[0],&g_300,(void*)0,&g_571[0],&g_571[0]},{&l_2140,&l_1035,&l_1035,&l_2140,&g_300},{&g_571[0],&l_1035,&g_571[0],(void*)0,&l_2140},{&g_571[0],&g_300,&g_571[0],&l_2140,&l_1035},{&g_571[0],&l_2140,&g_571[0],(void*)0,(void*)0},{&l_2140,&g_571[0],&l_1035,&l_2140,&l_1035}},{{&l_1035,&l_1035,&g_300,&g_571[0],&g_571[0]},{&l_2140,&g_571[0],&g_300,&g_571[0],(void*)0},{&g_571[0],&l_2140,&g_300,&g_571[0],&g_300},{&g_571[0],&g_571[0],&l_1035,&l_1035,&g_300},{&l_2140,&l_1035,&g_571[0],(void*)0,(void*)0},{&l_2140,(void*)0,&g_571[0],&g_571[0],&g_571[0]},{&g_571[0],&l_1035,&l_2140,&l_2140,&l_1035},{(void*)0,&g_571[0],&g_571[0],&l_2140,&l_2140}}};
        int32_t l_2183 = (-1L);
        int32_t *l_2242 = &g_1060;
        int32_t *l_2243[8][8] = {{&g_69[0][1][4],&g_1060,(void*)0,&l_2033,&l_2033,(void*)0,&g_1060,&g_69[0][1][4]},{&g_69[2][4][2],&l_1919[1],(void*)0,(void*)0,(void*)0,&g_69[3][5][0],(void*)0,(void*)0},{&l_2033,&l_1919[0],&l_2033,&l_2033,(void*)0,&g_69[3][5][0],(void*)0,(void*)0},{(void*)0,&l_1919[1],&g_69[2][4][2],&g_69[2][4][2],&l_1919[1],(void*)0,(void*)0,(void*)0},{(void*)0,&g_1060,&g_69[0][1][4],&l_1919[1],(void*)0,&l_1919[1],&g_69[0][1][4],&g_1060},{&l_2033,&g_69[0][1][4],&g_69[3][5][0],&l_1919[1],(void*)0,&l_2033,&l_2033,(void*)0},{&g_69[2][4][2],(void*)0,(void*)0,&g_69[2][4][2],&l_2033,&g_1060,&l_2033,(void*)0},{&g_69[0][1][4],&g_69[2][4][2],&g_69[3][5][0],&l_2033,&g_69[3][5][0],&g_69[2][4][2],&g_69[0][1][4],(void*)0}};
        uint16_t l_2244[8];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_2244[i] = 0x9E66L;
        (*g_1583) = &l_35[1];
        for (g_767 = 0; (g_767 <= 0); g_767 += 1)
        { /* block id: 793 */
            int32_t l_1952[6] = {0x19A42BAFL,(-5L),0x19A42BAFL,0x19A42BAFL,(-5L),0x19A42BAFL};
            const uint32_t l_1994 = 18446744073709551611UL;
            int8_t *****l_2016 = (void*)0;
            int32_t l_2080 = 1L;
            uint16_t *l_2158[9] = {&g_639,&g_131,&g_639,&g_639,&g_131,&g_639,&g_639,&g_131,&g_639};
            int16_t l_2184 = 0xE639L;
            uint16_t l_2185 = 0UL;
            uint64_t l_2188[5][6] = {{18446744073709551615UL,0x3F110D80B33C3C2CLL,0x80704FF81D65F287LL,0x80704FF81D65F287LL,0x3F110D80B33C3C2CLL,18446744073709551615UL},{0x1E545AFC6F3041FCLL,0xBC3DDC0B407E56E5LL,0x80704FF81D65F287LL,18446744073709551615UL,0xAC6783E5DB20D5FCLL,0x1E545AFC6F3041FCLL},{0x8ADEF2201AD76CACLL,0xBC3DDC0B407E56E5LL,18446744073709551615UL,0x8ADEF2201AD76CACLL,0x3F110D80B33C3C2CLL,0x8ADEF2201AD76CACLL},{0x8ADEF2201AD76CACLL,0x3F110D80B33C3C2CLL,0x8ADEF2201AD76CACLL,18446744073709551615UL,0xBC3DDC0B407E56E5LL,0x8ADEF2201AD76CACLL},{0x1E545AFC6F3041FCLL,0xAC6783E5DB20D5FCLL,18446744073709551615UL,0x80704FF81D65F287LL,0xBC3DDC0B407E56E5LL,0x1E545AFC6F3041FCLL}};
            const uint32_t l_2204[8][8] = {{18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL,7UL,18446744073709551615UL,18446744073709551615UL,18446744073709551609UL},{7UL,18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL,7UL,18446744073709551615UL},{7UL,18446744073709551609UL,1UL,18446744073709551609UL,7UL,0x39F05F60L,7UL,18446744073709551609UL},{18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL,7UL,18446744073709551615UL,18446744073709551615UL,18446744073709551609UL},{7UL,18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,0x39F05F60L,18446744073709551615UL,0x39F05F60L},{18446744073709551615UL,18446744073709551615UL,7UL,18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL},{1UL,18446744073709551615UL,1UL,0x39F05F60L,18446744073709551615UL,0x39F05F60L,1UL,18446744073709551615UL},{18446744073709551615UL,0x39F05F60L,1UL,18446744073709551615UL,1UL,0x39F05F60L,18446744073709551615UL,0x39F05F60L}};
            int32_t *l_2209 = (void*)0;
            int32_t *l_2210 = (void*)0;
            int32_t *l_2211 = &l_35[1];
            uint32_t l_2240 = 3UL;
            int i, j;
        }
        l_2244[2]++;
    }
    else
    { /* block id: 942 */
        int32_t l_2280 = 0L;
        int32_t l_2287 = 1L;
        uint16_t *l_2305[7][2][5] = {{{&g_135,&g_394,&g_394,&g_996,&g_394},{&g_1963,&g_394,&g_1963,(void*)0,&g_105}},{{&g_394,(void*)0,&g_1963,&g_996,&g_996},{&g_1963,&g_131,&g_1963,&g_131,&g_639}},{{&g_135,&g_394,&g_131,&g_394,&g_639},{&g_135,(void*)0,&g_639,&g_1963,&g_135}},{{&g_131,&g_639,&g_131,&g_639,&g_131},{&l_2038,&l_2038,&g_1963,&g_394,&g_1963}},{{&g_996,&g_394,&g_1963,&g_135,&g_394},{(void*)0,&g_1963,&g_1963,&l_2038,&g_1963}},{{&g_135,&g_135,&g_394,&g_1963,&g_131},{&g_1963,&g_105,(void*)0,&g_639,&g_135}},{{&g_131,&g_105,&g_394,(void*)0,&g_639},{(void*)0,&g_105,&g_105,(void*)0,&g_639}}};
        const uint16_t l_2321 = 0x44D3L;
        int32_t ****l_2340 = (void*)0;
        int32_t l_2353 = (-9L);
        int32_t l_2355 = 0x1DFE0091L;
        int i, j, k;
        for (g_3 = 0; (g_3 != 40); g_3 = safe_add_func_int64_t_s_s(g_3, 8))
        { /* block id: 945 */
            uint8_t l_2259 = 0xDFL;
            uint32_t l_2283[1];
            const int64_t l_2285 = 0x29A0FBF13756F9E7LL;
            int16_t l_2289 = 0x2B19L;
            uint16_t *l_2304 = &g_135;
            uint8_t l_2323 = 0xB6L;
            int32_t l_2328 = 0x92023871L;
            uint8_t *l_2349[10] = {&g_89[0][3][2],&g_89[0][3][2],&g_89[0][3][2],&g_89[0][3][2],&g_89[0][3][2],&g_89[0][3][2],&g_89[0][3][2],&g_89[0][3][2],&g_89[0][3][2],&g_89[0][3][2]};
            int32_t l_2350 = 0x574F514AL;
            int32_t l_2351 = 0x184B34FEL;
            int32_t l_2352 = 0xF4E3612EL;
            int32_t l_2354[10][9] = {{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}};
            uint32_t l_2373 = 18446744073709551615UL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_2283[i] = 1UL;
            for (g_953 = (-11); (g_953 < 10); g_953 = safe_add_func_int64_t_s_s(g_953, 5))
            { /* block id: 948 */
                uint64_t l_2253 = 9UL;
                int16_t *l_2254 = &l_2159[6];
                int16_t *l_2282 = &g_143;
                int32_t l_2284 = (-7L);
                int32_t l_2290 = (-1L);
                int32_t l_2324[6] = {1L,(-8L),1L,1L,(-8L),1L};
                int32_t l_2327 = 0L;
                int i;
            }
            /*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
/*bef_stmt:126165*/
(*g_71) |= ((safe_div_func_uint32_t_u_u(((l_1919[3] = (0x30A3L & (safe_rshift_func_uint16_t_u_u((((*g_886) |= (safe_mul_func_int16_t_s_s(Tag20(/*int32_t:126348:126348:126165:e*/l_1919[0]), ((safe_lshift_func_uint8_t_u_u((g_2356--), 6)) != Tag21(/*const int64_t:126348:126348:126165:e*/l_2212))))) == (safe_div_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((void*)0 != l_2304), (safe_sub_func_uint8_t_u_u(0xC3L, ((*g_314) != (void*)0))))) & ((l_35[1] = (safe_mod_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((((Tag22(/*int16_t:126348:126348:126165:e*/l_2159[2]) , Tag23(/*int32_t:126348:126348:126165:e*/l_35[1])) >= Tag24(/*int32_t:126348:126348:126165:e*/l_1919[0])) < Tag25(/*const int64_t:126292:126319:126165:e*/l_2285)), Tag26(/*uint32_t:126348:126348:126165:e*/l_2371))) >= Tag27(/*uint32_t:126292:126319:126165:e*/l_2283[0])) , Tag28(/*int32_t:126348:126348:126165:e*/l_35[1])), Tag29(/*const int32_t:0:0:126165:e*/g_2372))) != Tag30(/*uint32_t:126292:126319:126165:e*/l_2373)), 65528UL))) != 0xAEL)), 18446744073709551615UL))), Tag31(/*int32_t:126348:126348:126165:e*/l_1919[6]))))) | (-3L)), 0x3EE49CE5L)) || Tag32(/*uint8_t:126292:126319:126165:e*/l_2259));
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
/*aft_stmt:126165*/
            for (l_2287 = 19; (l_2287 <= (-18)); l_2287--)
            { /* block id: 983 */
                /*bef_stmt:126276*/
(**g_1583) &= Tag33(/*uint32_t:126348:126348:126276:e*/l_2376);
/*aft_stmt:126276*/
            }
        }
    }
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
/*aft_stmt:126330*/
    /*bef_stmt:126346*/
return /*TAG34:STA*/((int64_t)(realsmith_cDcNi((int)(g_2377)+(671612973))+(int)(g_2377)-(-671612930))+g_2377)/*TAG34:END:g_2377*/;
/*aft_stmt:126346*/
}


/* ------------------------------------------ */
/* 
 * reads : g_952 g_239 g_951 g_349 g_174 g_886 g_208 g_369 g_639 g_457 g_694 g_1060
 * writes: g_37 g_69 g_457 g_694 g_1060
 */
static uint8_t  func_8(const int16_t  p_9, uint32_t  p_10, uint32_t * p_11, uint32_t * p_12)
{ /* block id: 780 */
    int32_t l_1935[2];
    int32_t l_1940 = 0x3B8EC25FL;
    int32_t l_1943[6][4][10] = {{{0L,(-1L),0x6E30299CL,0x6E30299CL,(-1L),0L,0x47DE961BL,7L,0L,0xD992B462L},{0x182A1C43L,0x1118CB7AL,0xA86C274BL,0x6E30299CL,0x47DE961BL,0x2CFDD7A0L,0xD992B462L,0xA86C274BL,0x11569B01L,0L},{0x182A1C43L,0x0E14B15CL,0x11569B01L,0L,0x1118CB7AL,0L,0L,0xA86C274BL,7L,0x1118CB7AL},{0L,0L,0xA86C274BL,7L,0x1118CB7AL,0x2812F0B7L,0x1118CB7AL,7L,0xA86C274BL,0L}},{{2L,0L,0x6E30299CL,1L,0x47DE961BL,0L,0L,0x11569B01L,0xA86C274BL,0xD992B462L},{0x2812F0B7L,0x0E14B15CL,1L,7L,(-1L),0L,0xD992B462L,0L,7L,0x47DE961BL},{2L,0x1118CB7AL,1L,0L,0L,0x2812F0B7L,0x47DE961BL,0x11569B01L,0x11569B01L,0x47DE961BL},{0L,(-1L),0x6E30299CL,0x6E30299CL,(-1L),0L,0x47DE961BL,7L,0L,0xD992B462L}},{{0x182A1C43L,0x1118CB7AL,0xA86C274BL,0x6E30299CL,0x47DE961BL,0x2CFDD7A0L,0xD992B462L,0xA86C274BL,0x11569B01L,0L},{0x182A1C43L,0x0E14B15CL,0x11569B01L,0L,0x1118CB7AL,0L,0L,0xA86C274BL,7L,0x1118CB7AL},{0L,0L,0xA86C274BL,7L,0x1118CB7AL,0x2812F0B7L,0x1118CB7AL,7L,0xA86C274BL,0L},{2L,0L,0x6E30299CL,1L,0x47DE961BL,0L,0L,0x11569B01L,0xA86C274BL,0xD992B462L}},{{0x2812F0B7L,0x0E14B15CL,1L,7L,(-1L),0L,0xD992B462L,0L,7L,0x47DE961BL},{2L,0x1118CB7AL,1L,0L,0L,0x2812F0B7L,0x47DE961BL,0x11569B01L,0x11569B01L,0x47DE961BL},{0L,(-1L),0x6E30299CL,0x6E30299CL,(-1L),0L,0x47DE961BL,7L,0L,0xD992B462L},{0x182A1C43L,0x1118CB7AL,0xA86C274BL,0x6E30299CL,0x47DE961BL,0x2CFDD7A0L,0xD992B462L,0xA86C274BL,0x11569B01L,0L}},{{0x182A1C43L,0x0E14B15CL,0x11569B01L,0L,0x1118CB7AL,0L,0L,0xA86C274BL,7L,0x1118CB7AL},{0L,0L,0xA86C274BL,7L,0x1118CB7AL,0x2812F0B7L,0x1118CB7AL,7L,0xA86C274BL,(-10L)},{0xE04CE3D2L,(-10L),0x47DE961BL,0x1118CB7AL,0xB1612D34L,7L,(-10L),0L,(-1L),1L},{0xE1219837L,(-6L),0x1118CB7AL,0L,(-10L),7L,1L,0xD992B462L,0L,0xB1612D34L}},{{0xE04CE3D2L,1L,0x1118CB7AL,0xD992B462L,0x60975FF2L,0xE1219837L,0xB1612D34L,0L,0L,0xB1612D34L},{(-1L),(-10L),0x47DE961BL,0x47DE961BL,(-10L),(-1L),0xB1612D34L,0L,0xD992B462L,1L},{0xB806E045L,1L,(-1L),0x47DE961BL,0xB1612D34L,1L,1L,(-1L),0L,(-10L)},{0xB806E045L,(-6L),0L,0xD992B462L,1L,(-1L),(-10L),(-1L),0L,1L}}};
    int8_t *l_1944 = &g_457;
    int8_t *l_1945 = &g_694[0];
    int32_t *l_1946 = &g_1060;
    uint32_t l_1947 = 18446744073709551613UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1935[i] = 0xD9F01A30L;
    /*bef_stmt:130572*/
/*bef_stmt:130572*/
/*bef_stmt:130572*/
/*bef_stmt:130572*/
/*bef_stmt:130572*/
/*bef_stmt:130572*/
/*bef_stmt:130572*/
/*bef_stmt:130572*/
(*l_1946) |= ((-8L) & ((l_1935[1] = ((*l_1945) |= ((*l_1944) &= ((((safe_sub_func_uint8_t_u_u((((*p_11) = Tag35(/*int32_t:130590:130590:130572:e*/l_1935[1])) < Tag36(/*int32_t:130590:130590:130572:e*/l_1935[1])), (safe_sub_func_int16_t_s_s((l_1943[3][2][6] = (safe_lshift_func_int8_t_s_s(((((Tag37(/*int32_t:130590:130590:130572:e*/l_1935[1]) & 0x007F787CL) , (l_1940 &= 0xCBFF5F47L)) <= ((safe_sub_func_int16_t_s_s((/*TAG38:STA*/((int16_t)(realsmith_proxy_Wu5GM((int)(*g_952)+(20), (int)(*g_952)+(-73))+(int)(*g_952)-(14))+*g_952)/*TAG38:END:*g_952*/), (/*TAG39:STA*/((int16_t)(realsmith_proxy_2gANh((unsigned char)(**g_951)+(78), (int)(**g_951)+(-3))+(int)(**g_951)-(7))+**g_951)/*TAG39:END:**g_951*/))) == ((void*)0 == (*g_349)))) , (/*TAG40:STA*/((int8_t)(realsmith_58GvK()+(int)(*g_886)-(1))+*g_886)/*TAG40:END:*g_886*/)), 6))), (/*TAG41:STA*/((uint16_t)(realsmith_U6mDW((int)(*g_369)+(36))+(int)(*g_369)-(165))+*g_369)/*TAG41:END:*g_369*/))))) == /*TAG42:STA*/((int16_t)(realsmith_f8K63((unsigned int)(*g_886)+(5), (int)(**g_951)+(30))+(int)(p_9)+(int)(**g_951)+(int)(g_2372)+(int)(*g_886)+(int)(*g_952)-(29))+p_9)/*TAG42:END:p_9*/) != 0x3E34D592L) == (-3L))))) && 0xBBL));
/*aft_stmt:130572*/
/*aft_stmt:130572*/
/*aft_stmt:130572*/
/*aft_stmt:130572*/
/*aft_stmt:130572*/
/*aft_stmt:130572*/
/*aft_stmt:130572*/
/*aft_stmt:130572*/
    /*bef_stmt:130588*/
return /*TAG43:STA*/((uint32_t)(realsmith_proxy_Z1it3((int)(l_1947)+(70), (int)(l_1947)+(-33), (char)(l_1947)+(64), (char)(l_1947)+(-60))+(int)(l_1947)-(-2))+l_1947)/*TAG43:END:l_1947*/;
/*aft_stmt:130588*/
}


/* ------------------------------------------ */
/* 
 * reads : g_70 g_953 g_69 g_314 g_315 g_571 g_92 g_951 g_952 g_239 g_71
 * writes: g_71 g_953 g_69
 */
static uint32_t * func_14(uint32_t * p_15, uint32_t * p_16, int32_t  p_17, uint32_t * const  p_18, int32_t  p_19)
{ /* block id: 770 */
    int32_t *l_1921 = &g_69[3][2][0];
    uint64_t **l_1929 = &g_315;
    (*g_70) = l_1921;
    for (g_953 = (-4); (g_953 < (-1)); g_953 = safe_add_func_int32_t_s_s(g_953, 6))
    { /* block id: 774 */
        uint64_t ***l_1930 = &l_1929;
        int64_t *l_1931[2];
        uint32_t *l_1932 = &g_37;
        int i;
        for (i = 0; i < 2; i++)
            l_1931[i] = &g_953;
        /*bef_stmt:131526*/
/*bef_stmt:131526*/
/*bef_stmt:131526*/
/*bef_stmt:131526*/
/*bef_stmt:131526*/
/*bef_stmt:131526*/
/*bef_stmt:131526*/
(*g_71) = (((!(((safe_mul_func_uint16_t_u_u(((3UL == 0x5FE3L) & ((safe_mod_func_int16_t_s_s((((&l_1921 == (void*)0) || (((/*TAG44:STA*/((int32_t)(realsmith_proxy_O9WcM((int)(p_19)+(1299687265))+(int)(p_19)-(-1299687319))+p_19)/*TAG44:END:p_19*/ , &g_315) == ((*l_1930) = l_1929)) || (/*TAG45:STA*/((int32_t)(realsmith_FE52K()+(int)(p_19)-(-1299687312))+p_19)/*TAG45:END:p_19*/ | 0UL))) ^ (Tag46(/*int32_t:131567:131567:131526:e*/*l_1921))), /*TAG47:STA*/((int32_t)(realsmith_proxy_gl3ym((int)(**g_951)+(-6), (char)(g_2372)+(81))+(int)(p_19)+(int)(**g_951)+(int)(g_2372)+(int)(*g_369)+(int)(*g_886)-(-1299687295))+p_19)/*TAG47:END:p_19*/)) , (/*TAG48:STA*/((uint64_t)(realsmith_M3ax7()+(int)(**g_314)-(-2))+**g_314)/*TAG48:END:**g_314*/))), (/*TAG49:STA*/((int16_t)(realsmith_LqYcU((int)(**g_951)+(11))+(int)(**g_951)-(50))+**g_951)/*TAG49:END:**g_951*/))) , l_1931[0]) == l_1931[1])) < (/*TAG50:STA*/((int16_t)(realsmith_proxy_uGXiN((int)(**g_951)+(0), (int)(**g_951)+(-10))+(int)(**g_951)-(16))+**g_951)/*TAG50:END:**g_951*/)) >= 0x4D03L);
/*aft_stmt:131526*/
/*aft_stmt:131526*/
/*aft_stmt:131526*/
/*aft_stmt:131526*/
/*aft_stmt:131526*/
/*aft_stmt:131526*/
/*aft_stmt:131526*/
        return l_1932;
    }
    return l_1921;
}


/* ------------------------------------------ */
/* 
 * reads : g_69 g_952 g_239 g_105 g_369 g_639
 * writes: g_143 g_69 g_1060 g_105
 */
static uint16_t  func_20(uint32_t  p_21, const uint32_t  p_22)
{ /* block id: 750 */
    int32_t l_1899 = 0xAFF86F20L;
    int64_t **l_1904[9][3][6] = {{{&g_847,&g_847,&g_847,&g_847,(void*)0,&g_847},{(void*)0,&g_847,&g_847,&g_847,(void*)0,&g_847},{&g_847,(void*)0,&g_847,(void*)0,&g_847,&g_847}},{{(void*)0,&g_847,&g_847,&g_847,(void*)0,&g_847},{&g_847,&g_847,&g_847,&g_847,&g_847,(void*)0},{(void*)0,&g_847,&g_847,(void*)0,&g_847,(void*)0}},{{&g_847,&g_847,&g_847,&g_847,&g_847,&g_847},{(void*)0,(void*)0,&g_847,&g_847,&g_847,&g_847},{&g_847,&g_847,(void*)0,&g_847,&g_847,&g_847}},{{&g_847,&g_847,&g_847,(void*)0,&g_847,(void*)0},{&g_847,&g_847,&g_847,&g_847,(void*)0,(void*)0},{&g_847,&g_847,&g_847,&g_847,&g_847,&g_847}},{{&g_847,(void*)0,(void*)0,&g_847,(void*)0,&g_847},{&g_847,&g_847,&g_847,&g_847,(void*)0,&g_847},{&g_847,&g_847,&g_847,&g_847,&g_847,(void*)0}},{{&g_847,(void*)0,&g_847,&g_847,&g_847,(void*)0},{&g_847,&g_847,&g_847,&g_847,&g_847,&g_847},{&g_847,&g_847,&g_847,(void*)0,&g_847,&g_847}},{{&g_847,(void*)0,&g_847,&g_847,&g_847,&g_847},{&g_847,&g_847,&g_847,&g_847,(void*)0,&g_847},{(void*)0,&g_847,&g_847,&g_847,(void*)0,&g_847}},{{&g_847,(void*)0,&g_847,&g_847,&g_847,&g_847},{&g_847,&g_847,&g_847,&g_847,(void*)0,&g_847},{&g_847,&g_847,&g_847,&g_847,&g_847,&g_847}},{{&g_847,&g_847,(void*)0,&g_847,&g_847,&g_847},{&g_847,&g_847,&g_847,&g_847,&g_847,&g_847},{&g_847,&g_847,&g_847,&g_847,&g_847,&g_847}}};
    int32_t l_1907 = 0x4CBF1883L;
    uint16_t l_1908[3][5] = {{0x6341L,0UL,0x6341L,0xCA1DL,0x9411L},{0xC7B5L,0UL,0x9411L,0UL,0xC7B5L},{0x6341L,0UL,0UL,0xC7B5L,0UL}};
    int16_t *l_1909 = &g_143;
    uint8_t *l_1910 = &g_637;
    int32_t *l_1911 = &g_69[3][2][0];
    int32_t *l_1912 = &l_1907;
    uint16_t * const **l_1915 = &g_1346;
    uint16_t * const ** const *l_1914 = &l_1915;
    int32_t ***l_1916[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1916[i] = &g_1583;
    /*bef_stmt:135535*/
/*bef_stmt:135535*/
/*bef_stmt:135535*/
/*bef_stmt:135535*/
/*bef_stmt:135535*/
/*bef_stmt:135535*/
/*bef_stmt:135535*/
/*bef_stmt:135535*/
g_1060 = ((((/*TAG51:STA*/((int32_t)(realsmith_proxy_3UVkM((int)(l_1899)+(1342673125), (int)(l_1899)+(1342673125))+(int)(l_1899)-(-1342673119))+l_1899)/*TAG51:END:l_1899*/ , (0xCAL >= (((*l_1911) &= ((((((((*l_1909) = (safe_mul_func_uint8_t_u_u((l_1907 ^= (/*TAG52:STA*/((int32_t)(realsmith_proxy_3wpLw((int)(l_1899)+(1342673183), (int)(l_1899)+(1342673157), (int)(l_1899)+(1342673121), (int)(l_1899)+(1342673059))+(int)(l_1899)-(-1342673109))+l_1899)/*TAG52:END:l_1899*/ , (safe_mul_func_int8_t_s_s((l_1904[6][0][2] == &g_847), (safe_sub_func_int64_t_s_s(/*TAG53:STA*/((uint32_t)(realsmith_proxy_Uxiok((int)(p_22)+(1299687316), (int)(p_22)+(1299687293), (int)(p_22)+(1299687225), (int)(p_22)+(1299687222), (int)(p_22)+(1299687255))+(int)(p_22)-(-1299687404))+p_22)/*TAG53:END:p_22*/, /*TAG54:STA*/((uint32_t)(realsmith_proxy_M9dfD((int)(p_21)+(-65360), (int)(p_21)+(-65197), (int)(p_21)+(-65215))+(int)(p_21)-(65283))+p_21)/*TAG54:END:p_21*/)))))), /*TAG55:STA*/((uint16_t)(realsmith_Kr7kP()+(int)(l_1908[0][0])-(25410))+l_1908[0][0])/*TAG55:END:l_1908[0][0]*/))) == (&l_1899 != &l_1899)) <= /*TAG56:STA*/((uint32_t)(realsmith_proxy_DrRT6((int)(p_22)+(1299687315))+(unsigned int)(p_22)-(2995279985))+p_22)/*TAG56:END:p_22*/) , 0x0A7855C180C84494LL) , l_1910) == l_1910) && 0UL)) == 0UL))) & /*TAG57:STA*/((uint32_t)(realsmith_NeQfW((int)(p_21)+(-65216))+(int)(p_21)-(65267))+p_21)/*TAG57:END:p_21*/) , 0x0057L) == (/*TAG58:STA*/((int16_t)(realsmith_proxy_uzIp8((int)(*g_952)+(-82), (unsigned long)(*g_952)+(80))+(int)(*g_952)-(15))+*g_952)/*TAG58:END:*g_952*/));
/*aft_stmt:135535*/
/*aft_stmt:135535*/
/*aft_stmt:135535*/
/*aft_stmt:135535*/
/*aft_stmt:135535*/
/*aft_stmt:135535*/
/*aft_stmt:135535*/
/*aft_stmt:135535*/
    l_1912 = &l_1907;
    for (g_105 = 0; (g_105 <= 8); g_105 += 1)
    { /* block id: 758 */
        uint8_t *l_1913 = &g_767;
        int32_t l_1917[7][2] = {{0x0F97E633L,0L},{0L,0x0F97E633L},{0L,0L},{0x0F97E633L,0L},{0L,0x0F97E633L},{0L,0L},{0x0F97E633L,0L}};
        int8_t l_1918 = (-7L);
        int i, j;
        /*bef_stmt:136073*/
(*l_1912) |= /*TAG59:STA*/((uint32_t)(realsmith_proxy_MF1VY((int)(p_22)+(1299687241))+(int)(p_22)-(-1299687385))+p_22)/*TAG59:END:p_22*/;
/*aft_stmt:136073*/
        /*bef_stmt:136087*/
if (/*TAG60:STA*/((uint32_t)(realsmith_proxy_J9PcL((int)(p_22)+(1299687382), (int)(p_22)+(1299687313))+(int)(p_22)-(-1299687312))+p_22)/*TAG60:END:p_22*/)
            break;
/*aft_stmt:136087*/
        /*bef_stmt:136431*/
/*bef_stmt:136431*/
/*bef_stmt:136431*/
/*bef_stmt:136431*/
/*bef_stmt:136431*/
/*bef_stmt:136431*/
if (((0x51L ^ (((((0xB1A454BDB1BA539CLL < Tag61(/*uint32_t:136497:136497:136431:e*/p_21)) && Tag62(/*const uint32_t:136497:136497:136431:e*/p_22)) != (Tag63(/*uint32_t:136497:136497:136431:e*/p_21) < ((void*)0 != l_1913))) && (((((&g_618 == l_1914) & Tag64(/*uint32_t:136497:136497:136431:e*/p_21)) , Tag65(/*uint32_t:136497:136497:136431:e*/p_21)) , l_1916[0]) != (void*)0)) | 0x2D87CA3E9D04D13ALL)) == Tag66(/*int32_t:136437:136497:136431:e*/l_1917[4][1])))
        { /* block id: 761 */
            /*bef_stmt:136411*/
return (Tag67(/*uint16_t:0:0:136411:e*/*g_369));
/*aft_stmt:136411*/
        }
        else
        { /* block id: 763 */
            /*bef_stmt:136426*/
return Tag68(/*int8_t:136437:136497:136426:e*/l_1918);
/*aft_stmt:136426*/
        }
/*aft_stmt:136431*/
/*aft_stmt:136431*/
/*aft_stmt:136431*/
/*aft_stmt:136431*/
/*aft_stmt:136431*/
/*aft_stmt:136431*/
    }
    (*l_1911) = 0xAE375C98L;
    /*bef_stmt:136495*/
return (/*TAG69:STA*/((uint16_t)(realsmith_QEMFK((unsigned long)(*g_369)+(35))+(int)(*g_369)-(37))+*g_369)/*TAG69:END:*g_369*/);
/*aft_stmt:136495*/
}


/* ------------------------------------------ */
/* 
 * reads : g_1031 g_94 g_143 g_885 g_886 g_208 g_952 g_239 g_369 g_135 g_169 g_951 g_1060 g_1262 g_953 g_1729 g_89 g_314 g_315 g_571 g_92 g_457 g_665 g_70 g_71 g_1583 g_639 g_767 g_131 g_1890 g_69 g_996
 * writes: g_1031 g_94 g_694 g_369 g_1037 g_169 g_1060 g_239 g_1262 g_953 g_89 g_349 g_457 g_665 g_71 g_639 g_143 g_767 g_131 g_1729 g_705 g_208 g_571 g_92 g_394
 */
static const int32_t  func_25(uint32_t * const  p_26)
{ /* block id: 652 */
    uint8_t l_1682 = 255UL;
    uint8_t l_1703 = 250UL;
    int8_t *l_1710 = &g_694[1];
    uint16_t *l_1711 = &g_639;
    uint16_t **l_1712 = &g_369;
    int32_t l_1713[10][4][6] = {{{0xF5C96104L,0xBCC22263L,(-1L),0xFBE053C7L,0x35355AFEL,(-1L)},{1L,0L,0xF5C96104L,0x0F682283L,0x4D8F8DDAL,0x25DFF757L},{0L,(-6L),0x3521935BL,(-8L),0xF21B94F5L,6L},{0x75C8A504L,(-1L),0x4D8F8DDAL,0x8A90D337L,0x8A90D337L,0x4D8F8DDAL}},{{(-1L),(-1L),1L,0x022AD883L,6L,0x73D80AC9L},{(-1L),0xA1C3E93BL,(-6L),0x260F9AC9L,0x1F8988E8L,1L},{(-1L),(-1L),(-6L),2L,(-1L),0x73D80AC9L},{0L,2L,1L,0x347F3AF7L,0xEB87608BL,0x4D8F8DDAL}},{{0x347F3AF7L,0xEB87608BL,0x4D8F8DDAL,(-8L),0x18B28A55L,6L},{8L,0x56CF8AAAL,0x3521935BL,0x18287527L,0xD1AEB605L,0x25DFF757L},{0xD1AEB605L,(-1L),0xF5C96104L,0xE8625AA9L,0x3521935BL,(-1L)},{0x3877B4A1L,0x4D4838EEL,(-1L),0xF5C96104L,0x0E02FB14L,1L}},{{0L,0xCE44FCBBL,0xDE70A50AL,0x0F83D6B6L,0x56CF8AAAL,0x75FFA84CL},{8L,0x277135E0L,8L,(-3L),1L,0x347F3AF7L},{0x4D4838EEL,8L,0x18B28A55L,1L,0L,1L},{0x0F83D6B6L,0x3BBC85B9L,1L,0x4D8F8DDAL,(-1L),0xCE44FCBBL}},{{3L,0x25DFF757L,(-4L),0x1F8988E8L,0xE2703B3BL,(-1L)},{0x56CF8AAAL,1L,0L,6L,(-3L),(-8L)},{0x5B711217L,0x260F9AC9L,(-1L),0x56CF8AAAL,0x277135E0L,(-2L)},{1L,(-1L),(-1L),0L,3L,0xE8625AA9L}},{{0x3BBC85B9L,0xFF3543B4L,1L,1L,(-2L),0x5B911004L},{6L,0L,3L,(-9L),1L,0L},{0L,1L,(-8L),0xCE44FCBBL,(-8L),1L},{6L,0x456E6E2FL,3L,6L,(-1L),0x71B86DD9L}},{{0x9D2709C8L,0L,6L,0x837DCB18L,0L,6L},{0x18287527L,0L,(-1L),0x0E02FB14L,(-1L),1L},{0x73D80AC9L,0x456E6E2FL,1L,1L,(-8L),(-3L)},{0x0F682283L,1L,(-4L),(-1L),1L,0x5B711217L}},{{1L,(-2L),0xD1AEB605L,(-8L),0x96D25698L,0x347F3AF7L},{0xF5C96104L,0x347F3AF7L,0x71B86DD9L,1L,0xFBE053C7L,(-6L)},{0xEB87608BL,0L,0x837DCB18L,8L,0x022AD883L,0xC736CAF8L},{0xFF3543B4L,0x3877B4A1L,0x18B28A55L,0x8A90D337L,0x277135E0L,0xA1C3E93BL}},{{0x9B32DFECL,0xCE44FCBBL,6L,3L,(-4L),0xD675F739L},{(-8L),0x506F98B7L,0x022AD883L,0xA1C3E93BL,(-4L),0xE5C84990L},{(-10L),0xE3AA662AL,3L,0xD458AFA9L,0L,0x18287527L},{(-8L),(-1L),0x347F3AF7L,0x1F8988E8L,0xD4171C23L,0x0E02FB14L}},{{8L,0x022AD883L,(-10L),0xC736CAF8L,1L,0L},{0x277135E0L,(-1L),8L,0x3BBC85B9L,0xE8625AA9L,8L},{0x347F3AF7L,1L,2L,0L,(-8L),6L},{8L,(-1L),8L,0L,(-1L),0x4D4838EEL}}};
    uint32_t *l_1714 = &g_1037;
    uint32_t *l_1715 = &g_169;
    int32_t *l_1716 = &g_1060;
    uint16_t l_1721 = 0x25E6L;
    int32_t l_1783 = (-1L);
    int64_t *l_1808 = &g_1729[0];
    int64_t l_1844 = 0x53F0D557196C9D13LL;
    int i, j, k;
    /*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
/*bef_stmt:142223*/
(*l_1716) |= (safe_lshift_func_uint16_t_u_s((/*TAG70:STA*/((uint8_t)(realsmith_Qy9wa((int)(l_1682)+(-163))+(int)(l_1682)+(int)(**g_951)+(int)(*g_952)-(4734))+l_1682)/*TAG70:END:l_1682*/ ^ ((/*TAG71:STA*/((uint8_t)(realsmith_proxy_MaZAi((int)(*g_952)+(-2212), (int)(l_1682)+(-226), (int)(l_1682)+(-279))+(int)(l_1682)+(int)(*g_952)-(2495))+l_1682)/*TAG71:END:l_1682*/ , ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((((safe_div_func_int16_t_s_s(((safe_div_func_int16_t_s_s((((((*l_1715) ^= (((safe_sub_func_uint32_t_u_u(((*l_1714) = (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((++(*p_26)) , ((/*TAG72:STA*/((int16_t)(realsmith_LEZYz((long)(g_143)+(10450), (long)(g_143)+(10418))+(int)(g_143)+(int)(*g_952)-(107325))+g_143)/*TAG72:END:g_143*/ , /*TAG73:STA*/((uint8_t)(realsmith_OualO((int)(g_143)+(10448), (int)(l_1682)+(-199))+(int)(l_1682)+(int)(g_143)+(int)(*g_952)-(-7925))+l_1682)/*TAG73:END:l_1682*/) != ((((0x25381A6CL == (safe_lshift_func_int16_t_s_s(/*TAG74:STA*/((uint8_t)(realsmith_Q0KIC((unsigned int)(l_1703)+(-232))+(char)(l_1703)+(char)(l_1682)+(char)(*g_952)+(char)(g_143)-(90))+l_1703)/*TAG74:END:l_1703*/, ((((*l_1712) = ((safe_div_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((/*TAG75:STA*/((int8_t)(realsmith_proxy_imjr2((char)(g_143)+(-121), 3)+(char)(**g_885)+((char)(g_143)-(120))+(char)(*g_952)-(2))+**g_885)/*TAG75:END:**g_885*/), ((*l_1710) = (((((safe_mul_func_int8_t_s_s(/*TAG76:STA*/((uint8_t)(realsmith_M9C6k((int)(*g_952)+(-2221), (int)(g_143)+(10469))+(int)(l_1703)+(int)(*g_952)+(int)(**g_885)+(int)(g_143)+(int)(l_1682)-(4267))+l_1703)/*TAG76:END:l_1703*/, ((((/*TAG77:STA*/((uint8_t)(realsmith_Gd01v((unsigned char)(g_143)+(-116), (unsigned char)(**g_885)+(46))+(int)(l_1703)+(int)(g_143)+(int)(**g_885)+(int)(l_1682)+(int)(*g_952)-(-7637))+l_1703)/*TAG77:END:l_1703*/ < 0x89L) | 0x83258099BBEE9C34LL) != 0x5E3553A2L) <= (/*TAG78:STA*/((int16_t)(realsmith_proxy_fXOSZ((char)(**g_885)+(-15))+(char)(*g_952)+(char)(**g_885)+(char)(g_143)-(98))+*g_952)/*TAG78:END:*g_952*/)))) , (Tag79(/*uint16_t:0:0:142223:e*/*g_369))) , /*TAG80:STA*/((uint8_t)(realsmith_proxy_1y8cF((char)(g_143)+(-116), (char)(g_143)+(-120), 1)+(unsigned long)(l_1703)+(unsigned long)(**g_885)+(unsigned long)(*g_952)+(unsigned long)(l_1682)-(2739))+l_1703)/*TAG80:END:l_1703*/) != /*TAG81:STA*/((uint8_t)(realsmith_proxy_rbhtG((int)(l_1703)+(-255))+(int)(l_1703)+(int)(*g_952)+(int)(**g_885)+(int)(g_143)+(int)(l_1682)-(-7636))+l_1703)/*TAG81:END:l_1703*/) == /*TAG82:STA*/((uint8_t)(realsmith_kypE9((int)(g_143)+(10422))+(int)(l_1703)+(int)(g_143)+(int)(l_1682)+(int)(**g_885)+(int)(*g_952)-(8747))+l_1703)/*TAG82:END:l_1703*/)))) | /*TAG83:STA*/((uint8_t)(realsmith_proxy_UfcuG((int)(**g_885)+(-11))+(int)(l_1682)+(int)(**g_885)+(int)(l_1703)+(int)(*g_952)+(int)(g_143)-(-7638))+l_1682)/*TAG83:END:l_1682*/) & /*TAG84:STA*/((uint8_t)(realsmith_proxy_bumbz((int)(**g_885)+(20), (unsigned char)(*g_952)+(-261), (unsigned long)(l_1682)+(-212))+(long)(l_1682)+(long)(**g_885)+(long)(g_143)+(long)(l_1703)+(long)(*g_952)-(-7594))+l_1682)/*TAG84:END:l_1682*/), (Tag85(/*uint32_t:163071:163071:142223:e*/*p_26)))) , l_1711)) == l_1711) & /*TAG86:STA*/((int32_t)(realsmith_zsWIN((int)(*g_952)+(-2214), (int)(**g_885)+(90), (int)(*g_952)+(-2218))+(long)(l_1713[2][1][5])+(long)(*g_952)+(long)(**g_885)+(long)(g_143)-(635452633))+l_1713[2][1][5])/*TAG86:END:l_1713[2][1][5]*/)))) == /*TAG87:STA*/((int32_t)(realsmith_proxy_CRupD((int)(*g_952)+(-2232), (char)(l_1713[2][1][5])+(-84))+(int)(l_1713[2][1][5])+(int)(*g_952)+(int)(l_1703)+(int)(g_143)-(635426949))+l_1713[2][1][5])/*TAG87:END:l_1713[2][1][5]*/) || /*TAG88:STA*/((uint8_t)(realsmith_VM44Y((int)(l_1713[2][1][5])+(-635434741))+(int)(l_1682)+(int)(*g_952)+(int)(l_1703)+(int)(l_1713[2][1][5])-(635437579))+l_1682)/*TAG88:END:l_1682*/) && (/*TAG89:STA*/((int8_t)(realsmith_VmgZh((int)(g_143)+(10445))+(int)(**g_885)+(int)(g_143)+(int)(*g_952)-(-8142))+**g_885)/*TAG89:END:**g_885*/)))), /*TAG90:STA*/((uint8_t)(realsmith_proxy_UpZt8((char)(g_143)+(-220), (unsigned long)(l_1682)+(-349), (char)(l_1682)+(-31))+(int)(l_1682)+(int)(l_1713[2][1][5])+(int)(g_143)+(int)(**g_885)+(int)(*g_952)-(635426952))+l_1682)/*TAG90:END:l_1682*/)) == /*TAG91:STA*/((int32_t)(realsmith_proxy_uQDSI((int)(*g_952)+(-2326))+(unsigned int)(l_1713[2][1][5])+(unsigned int)(l_1682)+(unsigned int)(l_1703)+(unsigned int)(*g_952)+((unsigned int)(g_143)-(4294956920))-(635437578))+l_1713[2][1][5])/*TAG91:END:l_1713[2][1][5]*/), 65535UL)) , (/*TAG92:STA*/((int16_t)(realsmith_udNMJ()+(int)(*g_952)+(int)(**g_885)+(int)(g_143)-(-8141))+*g_952)/*TAG92:END:*g_952*/)), /*TAG93:STA*/((int32_t)(realsmith_proxy_HBSNp((long)(l_1682)+(-254), (long)(l_1713[2][1][5])+(-635434838), (int)(l_1713[3][2][1])+(-8))+(char)(l_1713[3][2][1])+(char)(l_1682)+((char)(l_1713[2][1][5])-(87))+(char)(**g_885)-(56))+l_1713[3][2][1])/*TAG93:END:l_1713[3][2][1]*/))), /*TAG94:STA*/((uint8_t)(realsmith_proxy_ft9v4((int)(l_1703)+(-208), (unsigned char)(l_1682)+(-166), (int)(l_1713[3][2][1])+(49), (int)(l_1682)+(-191))+(int)(l_1703)+(int)(l_1713[2][1][5])+(int)(l_1713[3][2][1])+(int)(**g_885)+(int)(l_1682)-(635435354))+l_1703)/*TAG94:END:l_1703*/)) == /*TAG95:STA*/((uint8_t)(realsmith_proxy_wY2az((char)(l_1703)+(-73))+(int)(l_1703)+(int)(**g_885)+(int)(l_1713[3][2][1])+(int)(l_1682)-(514))+l_1703)/*TAG95:END:l_1703*/) , 0x745646DFL)) , (/*TAG96:STA*/((int16_t)(realsmith_zXuMO()+(long)(**g_951)+(long)(**g_885)+(long)(*g_952)-(4468))+**g_951)/*TAG96:END:**g_951*/)) ^ 0xD7CAL) == /*TAG97:STA*/((int32_t)(realsmith_Nk7oR((int)(*g_952)+(-2149), (int)(l_1713[5][3][2])+(0))+(int)(l_1713[5][3][2])+(int)(l_1713[3][2][1])+(int)(*g_952)+(int)(**g_951)+(int)(**g_885)-(4479))+l_1713[5][3][2])/*TAG97:END:l_1713[5][3][2]*/), 2UL)) & (/*TAG98:STA*/((int16_t)(realsmith_tZdUB((unsigned long)(*g_952)+(-2230), (unsigned long)(*g_952)+(-2155))+(int)(*g_952)+(int)(**g_951)+(int)(**g_885)-(4468))+*g_952)/*TAG98:END:*g_952*/)), /*TAG99:STA*/((uint8_t)(realsmith_mALGP((int)(**g_885)+(13))+(int)(l_1703)+(int)(l_1713[2][1][5])+(int)(**g_885)+(int)(l_1713[5][3][2])+(int)(l_1713[3][2][1])-(635435358))+l_1703)/*TAG99:END:l_1703*/)) , 0xD8L) <= (/*TAG100:STA*/((int8_t)(realsmith_proxy_fXPj2((unsigned long)(**g_885)+(7))+(char)(**g_885)-(1))+**g_885)/*TAG100:END:**g_885*/)) & /*TAG101:STA*/((int32_t)(realsmith_v2z7O((int)(l_1682)+(-187))+(int)(l_1713[7][3][2])+(int)(l_1713[3][2][1])+(int)(l_1682)+(int)(l_1703)+(int)(l_1713[5][3][2])-(414354522))+l_1713[7][3][2])/*TAG101:END:l_1713[7][3][2]*/), /*TAG102:STA*/((uint8_t)(realsmith_mgwBc((int)(l_1682)+(-187))+(int)(l_1682)-(255))+l_1682)/*TAG102:END:l_1682*/)), /*TAG103:STA*/((int32_t)(realsmith_Y5GmZ()+(int)(l_1713[2][1][5])+(int)(l_1713[3][2][1])+(int)(l_1703)+(int)(l_1713[7][3][2])+(int)(l_1713[5][3][2])-(1049789103))+l_1713[2][1][5])/*TAG103:END:l_1713[2][1][5]*/)) , 7UL)) , (Tag104(/*uint32_t:163071:163071:142223:e*/*p_26)))), 6));
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
/*aft_stmt:142223*/
    for (g_239 = 14; (g_239 == (-26)); --g_239)
    { /* block id: 661 */
        uint32_t ****l_1741 = &g_174;
        int32_t l_1743 = 0x3B8EB526L;
        int32_t l_1744[8] = {0x97A2757AL,0x97A2757AL,0x97A2757AL,0x97A2757AL,0x97A2757AL,0x97A2757AL,0x97A2757AL,0x97A2757AL};
        int32_t l_1747[9][5][5] = {{{(-9L),(-9L),0xBFEB13D2L,1L,1L},{0x1D6CFDEEL,0x122DFAC7L,(-1L),0L,0xF9C85DECL},{0xDD40FA48L,0xBFEB13D2L,(-7L),0xBFEB13D2L,0xDD40FA48L},{0x40C0ED1CL,0x122DFAC7L,0L,(-2L),3L},{1L,(-9L),0L,3L,3L}},{{(-2L),0L,(-2L),0x122DFAC7L,3L},{(-1L),3L,(-9L),0xB1B9C181L,0xDD40FA48L},{3L,0xF9C85DECL,0L,0L,0xF9C85DECL},{0L,0x81D1E926L,(-9L),0xDD40FA48L,1L},{0L,0x03B2B199L,(-2L),(-1L),0xB0F070FFL}},{{0x4AE37972L,0L,0L,0x4AE37972L,0xBFEB13D2L},{0L,0L,0L,0x40C0ED1CL,(-1L)},{0L,5L,(-7L),(-9L),(-7L)},{3L,3L,(-1L),0x40C0ED1CL,0L},{(-1L),0xB1B9C181L,5L,(-9L),0x4AE37972L}},{{0L,0L,0x1D6CFDEEL,0L,0L},{0xB1B9C181L,0x81D1E926L,(-7L),3L,0xBFEB13D2L},{0x122DFAC7L,(-1L),0L,0xF9C85DECL,0xF9C85DECL},{3L,1L,3L,0x81D1E926L,0xBFEB13D2L},{(-2L),0xF9C85DECL,(-1L),0x03B2B199L,0L}},{{0xBFEB13D2L,0x4AE37972L,0L,0L,0x4AE37972L},{0L,0L,(-1L),0L,0xB0F070FFL},{1L,1L,3L,5L,(-1L)},{3L,0L,0L,3L,0L},{1L,0L,(-7L),0xB1B9C181L,5L}},{{0L,0x40C0ED1CL,0x1D6CFDEEL,(-1L),0x1D6CFDEEL},{0xBFEB13D2L,0xBFEB13D2L,5L,0xB1B9C181L,(-7L)},{(-2L),0x03B2B199L,0L,3L,0L},{3L,5L,(-1L),5L,3L},{0x122DFAC7L,0x03B2B199L,0xB0F070FFL,0L,(-1L)}},{{0xB1B9C181L,0xBFEB13D2L,0x4AE37972L,0L,0L},{0L,0x40C0ED1CL,0L,0x03B2B199L,(-1L)},{0xDD40FA48L,0L,0xBFEB13D2L,0x81D1E926L,3L},{(-1L),0L,0xF9C85DECL,0xF9C85DECL,0L},{0x4AE37972L,1L,0xBFEB13D2L,3L,(-7L)}},{{0x40C0ED1CL,0L,0L,0L,0x1D6CFDEEL},{(-9L),0x4AE37972L,0x4AE37972L,(-9L),5L},{0x40C0ED1CL,0xF9C85DECL,0xB0F070FFL,0x122DFAC7L,0L},{0x4AE37972L,1L,(-1L),0xBFEB13D2L,(-1L)},{(-1L),(-1L),0L,0x122DFAC7L,0xB0F070FFL}},{{0xDD40FA48L,0x81D1E926L,5L,(-9L),0x4AE37972L},{0L,0L,0x1D6CFDEEL,0L,0L},{0xB1B9C181L,0x81D1E926L,(-7L),3L,0xBFEB13D2L},{0x122DFAC7L,(-1L),0L,0xF9C85DECL,0xF9C85DECL},{3L,1L,3L,0x81D1E926L,0xBFEB13D2L}}};
        int32_t ****l_1822 = (void*)0;
        int64_t *l_1856 = &g_1729[1];
        int i, j, k;
        for (g_1262 = 0; (g_1262 <= 8); g_1262 += 1)
        { /* block id: 664 */
            int32_t *l_1719 = &l_1713[2][1][5];
            int32_t *l_1720 = (void*)0;
            int16_t l_1728[6][4][10] = {{{0x6764L,0x6764L,0x9F5EL,0x6764L,0x6764L,0x9F5EL,0x6764L,0x6764L,0x9F5EL,0x6764L},{0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L},{0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL},{0x6764L,0x6764L,0x9F5EL,0x6764L,0x6764L,0x9F5EL,0x6764L,0x6764L,0x6764L,0xCFDEL}},{{0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL},{0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL},{0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL},{0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL}},{{0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL},{0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL},{0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL},{0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL}},{{0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL},{0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL},{0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL},{0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL}},{{0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL},{0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL},{0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL},{0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL}},{{0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL},{0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL,0xCFDEL,0x6764L,0xCFDEL},{0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x9F5EL,0xCFDEL,0x9F5EL,0x6764L,0x9F5EL},{0x6764L,0x9F5EL,0x6764L,0x6764L,0x9F5EL,0x6764L,0x6764L,0x9F5EL,0x6764L,0x6764L}}};
            int32_t l_1764 = 0x4DEA1EB9L;
            int32_t l_1766 = 0xCBF0FDE4L;
            int8_t **l_1784 = &g_886;
            int64_t * const l_1809 = &g_101;
            int8_t l_1810[7];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1810[i] = 0x17L;
            l_1721++;
            for (g_953 = 3; (g_953 <= 8); g_953 += 1)
            { /* block id: 668 */
                int32_t l_1737 = 0x61312C2AL;
                uint8_t *l_1738 = &g_89[8][5][1];
                uint32_t *****l_1742 = &g_349;
                int32_t l_1765 = 0x178CEE85L;
                int32_t l_1767 = (-1L);
                uint16_t l_1782[9][2][3] = {{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}},{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}},{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}},{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}},{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}},{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}},{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}},{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}},{{65535UL,65535UL,65535UL},{0x0BF5L,0x0BF5L,0x0BF5L}}};
                int i, j, k;
                /*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
/*bef_stmt:151732*/
l_1744[6] &= (safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((Tag105(/*int16_t:156212:163034:151732:e*/l_1728[2][0][0]) != (((Tag106(/*int64_t:0:0:151732:e*/g_1729[0]) ^ (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((Tag107(/*const int16_t:0:0:151732:e*/**g_951)), 3)), (0xCAD0L == (((Tag108(/*int32_t:163071:163071:151732:e*/*l_1716)) > ((safe_unary_minus_func_uint8_t_u(255UL)) == ((*l_1738)--))) > (((Tag109(/*uint64_t:0:0:151732:e*/**g_314)) <= (((&g_174 == ((*l_1742) = l_1741)) < (Tag110(/*int32_t:156212:163034:151732:e*/*l_1719))) == (Tag111(/*int32_t:163071:163071:151732:e*/*l_1716)))) , (Tag112(/*uint32_t:163071:163071:151732:e*/*p_26)))))))) || (Tag113(/*int32_t:156212:163034:151732:e*/*l_1719))) <= 0x33L)), 5)) , (Tag114(/*int32_t:163071:163071:151732:e*/*l_1716))) < Tag115(/*int32_t:163034:163071:151732:e*/l_1743)), (Tag116(/*uint32_t:163071:163071:151732:e*/*p_26))));
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
/*aft_stmt:151732*/
                for (g_457 = 2; (g_457 <= 8); g_457 += 1)
                { /* block id: 674 */
                    uint8_t l_1768[7][1][1];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1768[i][j][k] = 248UL;
                        }
                    }
                    for (g_665 = 0; (g_665 >= 0); g_665 -= 1)
                    { /* block id: 677 */
                        int32_t **l_1745 = (void*)0;
                        int32_t **l_1746 = &g_71;
                        int32_t *l_1748 = &l_1713[8][3][5];
                        int32_t *l_1749 = &l_1744[6];
                        int32_t *l_1750 = &l_1713[6][1][4];
                        int32_t *l_1751 = &l_1744[6];
                        int32_t *l_1752 = &l_1744[0];
                        int32_t *l_1753 = (void*)0;
                        int32_t *l_1754 = (void*)0;
                        int32_t *l_1755 = &g_69[3][2][0];
                        int32_t *l_1756 = &l_1713[0][2][5];
                        int32_t *l_1757 = (void*)0;
                        int32_t *l_1758 = &g_1060;
                        int32_t *l_1759 = (void*)0;
                        int32_t *l_1760 = &l_1744[6];
                        int32_t *l_1761 = &l_1744[4];
                        int32_t *l_1762 = &l_1713[5][0][3];
                        int32_t *l_1763[9][3] = {{&g_69[4][5][2],(void*)0,&g_69[4][5][2]},{&l_1713[8][3][2],(void*)0,&g_1060},{&l_1713[8][3][2],&l_1713[8][3][2],(void*)0},{&g_69[4][5][2],(void*)0,(void*)0},{(void*)0,(void*)0,&g_1060},{&g_69[4][5][2],(void*)0,&g_69[4][5][2]},{&l_1713[8][3][2],(void*)0,&g_1060},{&l_1713[8][3][2],&l_1713[8][3][2],(void*)0},{&g_69[4][5][2],(void*)0,(void*)0}};
                        int i, j;
                        (*l_1746) = p_26;
                        /*bef_stmt:154030*/
(*l_1716) &= (Tag117(/*int32_t:0:0:154030:e*/**g_70));
/*aft_stmt:154030*/
                        l_1768[6][0][0]--;
                        /*bef_stmt:154267*/
/*bef_stmt:154267*/
/*bef_stmt:154267*/
/*bef_stmt:154267*/
(**g_1583) = (((*l_1738) = ((((safe_unary_minus_func_int64_t_s(Tag118(/*int32_t:156193:156212:154267:e*/l_1767))) || (safe_sub_func_uint64_t_u_u(Tag119(/*int32_t:163034:163071:154267:e*/l_1744[6]), 0x3B33E522B07E4554LL))) != Tag120(/*int32_t:156193:156212:154267:e*/l_1767)) && 65534UL)) | (Tag121(/*int32_t:156212:163034:154267:e*/*l_1719)));
/*aft_stmt:154267*/
/*aft_stmt:154267*/
/*aft_stmt:154267*/
/*aft_stmt:154267*/
                    }
                    /*bef_stmt:154748*/
/*bef_stmt:154748*/
/*bef_stmt:154748*/
/*bef_stmt:154748*/
l_1766 = ((safe_add_func_uint16_t_u_u(((*g_369)--), ((Tag122(/*const int16_t:0:0:154748:e*/*g_952)) > ((((*l_1719) &= ((safe_add_func_int8_t_s_s(((*l_1710) = (-4L)), 1L)) || ((0x65L > (Tag123(/*int32_t:163071:163071:154748:e*/*l_1716))) && (l_1783 = ((*l_1716) = (safe_rshift_func_uint16_t_u_s(Tag124(/*uint16_t:156193:156212:154748:e*/l_1782[3][1][2]), 4))))))) == (l_1784 == &g_415)) & Tag125(/*int32_t:163034:163071:154748:e*/l_1747[8][0][4]))))) | 1L);
/*aft_stmt:154748*/
/*aft_stmt:154748*/
/*aft_stmt:154748*/
/*aft_stmt:154748*/
                    /*bef_stmt:154771*/
if (Tag126(/*int32_t:163034:163071:154771:e*/l_1744[6]))
                        break;
/*aft_stmt:154771*/
                    /*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
/*bef_stmt:155551*/
l_1810[5] |= ((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(Tag127(/*uint8_t:155568:156193:155551:e*/l_1768[6][0][0]), Tag128(/*int32_t:163034:163071:155551:e*/l_1744[7]))) , (((~(safe_div_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(4UL, (Tag129(/*int32_t:156212:163034:155551:e*/*l_1719)))) || ((g_143 |= (safe_rshift_func_int16_t_s_u((Tag130(/*const int16_t:0:0:155551:e*/*g_952)), 8))) <= Tag131(/*int32_t:156193:156212:155551:e*/l_1767))) || (safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((0x3BC9L & ((l_1808 == l_1809) , 65535UL)) >= 1UL), 0xD2957E41L)), Tag132(/*int32_t:163034:163071:155551:e*/l_1747[1][1][4]))), Tag133(/*int32_t:163034:163071:155551:e*/l_1743)))), (-1L))), 0L)) & Tag134(/*uint16_t:156193:156212:155551:e*/l_1782[3][1][2])) <= Tag135(/*int32_t:163034:163071:155551:e*/l_1747[1][1][4])) && Tag136(/*int32_t:163034:163071:155551:e*/l_1743)), 0x439AL))) | Tag137(/*int32_t:163034:163071:155551:e*/l_1747[6][0][3])) , (Tag138(/*int32_t:163071:163071:155551:e*/*l_1716)))), 0x9BL)), (-4L))) , 0x6684D2D6L);
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
/*aft_stmt:155551*/
                }
                /*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
/*bef_stmt:156189*/
(*l_1719) = (0L <= ((safe_unary_minus_func_uint8_t_u(((Tag139(/*int32_t:156212:163034:156189:e*/*l_1719)) && (safe_mod_func_int32_t_s_s((-1L), (0L || (safe_rshift_func_uint16_t_u_s(Tag140(/*int32_t:163034:163071:156189:e*/l_1747[7][0][2]), (safe_mul_func_int8_t_s_s((Tag141(/*int8_t:0:0:156189:e*/*g_886)), (((Tag142(/*uint16_t:0:0:156189:e*/*g_369)) || (safe_lshift_func_uint8_t_u_s((((Tag143(/*int32_t:156212:163034:156189:e*/*l_1719)) & ((((((((0xAE04L >= 65535UL) || (Tag144(/*const int16_t:0:0:156189:e*/**g_951))) || Tag145(/*int32_t:163034:163071:156189:e*/l_1744[0])) == Tag146(/*int32_t:156193:156212:156189:e*/l_1765)) , l_1822) == (void*)0) , (Tag147(/*uint32_t:163071:163071:156189:e*/*p_26))) >= (Tag148(/*uint32_t:163071:163071:156189:e*/*p_26)))) , (Tag149(/*int32_t:163071:163071:156189:e*/*l_1716))), (Tag150(/*int8_t:0:0:156189:e*/**g_885))))) , Tag151(/*uint16_t:156193:156212:156189:e*/l_1782[8][1][1])))))))))))) & 254UL));
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
/*aft_stmt:156189*/
            }
        }
        for (g_767 = 0; (g_767 <= 54); ++g_767)
        { /* block id: 699 */
            int8_t l_1833 = 0x75L;
            uint32_t *l_1891 = (void*)0;
            int32_t *l_1898 = &g_69[3][2][0];
            for (g_131 = 18; (g_131 <= 28); g_131++)
            { /* block id: 702 */
                int16_t *l_1832 = &g_143;
                int32_t l_1834 = (-7L);
                int32_t l_1835 = 0x54EAB2CEL;
                int8_t * const l_1874 = &g_665;
                uint32_t l_1875[6][7][6] = {{{0xDAA10EF3L,18446744073709551615UL,0xDAA10EF3L,0x096AE7FBL,0x1F17677DL,0xDDD55AC1L},{0x1B55B0C0L,0x3F9303F9L,18446744073709551615UL,0x1F17677DL,1UL,0x48A1B539L},{0xD8EF303FL,0x2FA06A06L,18446744073709551610UL,0x1F17677DL,0x6A4ED9FCL,0x096AE7FBL},{0x1B55B0C0L,1UL,1UL,0x096AE7FBL,0xED725A3BL,0xD8EF303FL},{0xDAA10EF3L,1UL,0UL,18446744073709551610UL,18446744073709551615UL,0xFE513027L},{0x1F17677DL,18446744073709551615UL,0UL,1UL,1UL,18446744073709551615UL},{1UL,0x4CD775EBL,18446744073709551613UL,18446744073709551615UL,18446744073709551615UL,18446744073709551613UL}},{{18446744073709551615UL,18446744073709551615UL,1UL,0xDDD55AC1L,0x2FA06A06L,0x3FE63EF6L},{0x3E6C9F2CL,0x1F17677DL,0xB0B73E08L,0xED725A3BL,0UL,1UL},{0x6DA83332L,0x3E6C9F2CL,0xB0B73E08L,0x48A1B539L,18446744073709551615UL,0x3FE63EF6L},{0UL,0x48A1B539L,1UL,0x3F9303F9L,0xB0B73E08L,18446744073709551613UL},{0x3F9303F9L,0xB0B73E08L,18446744073709551613UL,0x3FE63EF6L,0xEC4C08A7L,18446744073709551615UL},{0x042516FDL,18446744073709551615UL,0UL,1UL,0xDDD55AC1L,0xFE513027L},{0xDDD55AC1L,0xD8EF303FL,0UL,0x042516FDL,0UL,0xD8EF303FL}},{{1UL,1UL,1UL,0x1B55B0C0L,0UL,0x096AE7FBL},{0xEC4C08A7L,0x6A4ED9FCL,18446744073709551610UL,1UL,18446744073709551606UL,0x48A1B539L},{0xFE513027L,0x6A4ED9FCL,18446744073709551613UL,0xEC4C08A7L,18446744073709551615UL,18446744073709551606UL},{0x096AE7FBL,18446744073709551615UL,0x3E6C9F2CL,0x6A4ED9FCL,18446744073709551615UL,18446744073709551615UL},{0x1B55B0C0L,0xFE513027L,18446744073709551615UL,0UL,18446744073709551606UL,18446744073709551615UL},{0UL,0UL,9UL,18446744073709551612UL,1UL,0xEC4C08A7L},{18446744073709551615UL,0xEC4C08A7L,0xB0B73E08L,0xB0B73E08L,0xEC4C08A7L,18446744073709551615UL}},{{0x48A1B539L,18446744073709551610UL,0UL,0x096AE7FBL,1UL,0x2FA06A06L},{18446744073709551615UL,1UL,0UL,0xED725A3BL,18446744073709551615UL,0xDDD55AC1L},{18446744073709551615UL,0xD8EF303FL,0xED725A3BL,0x096AE7FBL,1UL,1UL},{0x48A1B539L,1UL,0x3F9303F9L,0xB0B73E08L,18446744073709551613UL,0x3FE63EF6L},{18446744073709551615UL,0UL,0UL,18446744073709551612UL,0xDDD55AC1L,0x1F17677DL},{0UL,18446744073709551615UL,0x48A1B539L,0UL,18446744073709551612UL,1UL},{0x1B55B0C0L,0x6A4ED9FCL,18446744073709551612UL,0x6A4ED9FCL,0x1B55B0C0L,0x3F9303F9L}},{{0x096AE7FBL,0x042516FDL,1UL,0xEC4C08A7L,0UL,0UL},{0UL,1UL,18446744073709551610UL,0x042516FDL,0x2FA06A06L,0UL},{1UL,0UL,1UL,9UL,0xD8EF303FL,0x3F9303F9L},{0x2FA06A06L,18446744073709551613UL,18446744073709551612UL,0x1F17677DL,0UL,1UL},{18446744073709551606UL,0x096AE7FBL,0x48A1B539L,18446744073709551615UL,0UL,0x1F17677DL},{0x1F17677DL,0xDAA10EF3L,0UL,0x6DA83332L,0x3FE63EF6L,0x3FE63EF6L},{0UL,0x3F9303F9L,0x3F9303F9L,0UL,18446744073709551615UL,1UL}},{{0xB0B73E08L,1UL,0xED725A3BL,18446744073709551610UL,0x096AE7FBL,0xDDD55AC1L},{0x3F9303F9L,0x3E6C9F2CL,0UL,0x1B55B0C0L,0x096AE7FBL,0x2FA06A06L},{1UL,1UL,0UL,18446744073709551606UL,18446744073709551615UL,18446744073709551615UL},{1UL,0x3F9303F9L,0xB0B73E08L,18446744073709551613UL,0x3FE63EF6L,0xEC4C08A7L},{1UL,0xDAA10EF3L,9UL,0x2FA06A06L,0UL,18446744073709551615UL},{0xD8EF303FL,0x096AE7FBL,18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL},{0x3E6C9F2CL,18446744073709551613UL,0x3E6C9F2CL,0x4CD775EBL,0xD8EF303FL,18446744073709551606UL}}};
                int i, j, k;
                /*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
/*bef_stmt:162391*/
if ((~(safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_1714) = (((void*)0 == l_1832) & (Tag152(/*int8_t:163021:163034:162391:e*/l_1833) == 0x6DL))) >= ((((*l_1808) = Tag153(/*int32_t:163003:163021:162391:e*/l_1834)) == (l_1835 = (Tag154(/*int8_t:163021:163034:162391:e*/l_1833) > Tag155(/*int32_t:163003:163021:162391:e*/l_1834)))) , ((((**l_1712) = (safe_add_func_uint64_t_u_u(Tag156(/*int32_t:163003:163021:162391:e*/l_1834), ((*l_1808) = (safe_rshift_func_uint8_t_u_s(((((((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((Tag157(/*const int16_t:0:0:162391:e*/**g_951)), 65529UL)), (Tag158(/*int8_t:0:0:162391:e*/*g_886)))) < Tag159(/*int8_t:163021:163034:162391:e*/l_1833)) >= Tag160(/*int8_t:163021:163034:162391:e*/l_1833)) , (Tag161(/*uint32_t:163071:163071:162391:e*/*p_26))) , Tag162(/*int32_t:163034:163071:162391:e*/l_1743)) ^ (Tag163(/*int32_t:163071:163071:162391:e*/*l_1716))), 3)))))) | Tag164(/*int32_t:163003:163021:162391:e*/l_1835)) <= (Tag165(/*uint64_t:0:0:162391:e*/**g_314))))), 7)), (Tag166(/*int32_t:163071:163071:162391:e*/*l_1716))))))
                { /* block id: 708 */
                    int64_t *l_1857 = &l_1844;
                    int32_t l_1861 = 3L;
                    int32_t *l_1870[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1870[i] = &g_69[3][2][0];
                    /*bef_stmt:160943*/
if (Tag167(/*int64_t:163071:163071:160943:e*/l_1844))
                        break;
/*aft_stmt:160943*/
                    for (g_705 = 0; (g_705 <= 23); g_705 = safe_add_func_uint16_t_u_u(g_705, 3))
                    { /* block id: 712 */
                        uint32_t l_1847 = 0x882E4A22L;
                        --l_1847;
                    }
                    /*bef_stmt:161578*/
/*bef_stmt:161578*/
/*bef_stmt:161578*/
/*bef_stmt:161578*/
/*bef_stmt:161578*/
/*bef_stmt:161578*/
/*bef_stmt:161578*/
/*bef_stmt:161578*/
l_1713[5][2][1] &= ((*l_1716) = (((*l_1808) = (((safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((l_1857 = l_1856) == ((safe_rshift_func_uint16_t_u_u((+(Tag168(/*uint32_t:163071:163071:161578:e*/*p_26))), (Tag169(/*uint16_t:0:0:161578:e*/*g_369)))) , &l_1844)), (Tag170(/*int32_t:161584:163003:161578:e*/l_1861) , (Tag171(/*int32_t:163003:163021:161578:e*/l_1835) | 0x53L)))), (((safe_div_func_uint16_t_u_u(0x04CAL, (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(1UL, 7)), (-1L))), 0x21B9FFF5L)))) < Tag172(/*int8_t:163021:163034:161578:e*/l_1833)) ^ 0x38372480DEEA913CLL))), 0xE9F3L)) , Tag173(/*int32_t:163003:163021:161578:e*/l_1834)) != (Tag174(/*uint32_t:163071:163071:161578:e*/*p_26)))) < Tag175(/*int32_t:163003:163021:161578:e*/l_1835)));
/*aft_stmt:161578*/
/*aft_stmt:161578*/
/*aft_stmt:161578*/
/*aft_stmt:161578*/
/*aft_stmt:161578*/
/*aft_stmt:161578*/
/*aft_stmt:161578*/
/*aft_stmt:161578*/
                }
                else
                { /* block id: 719 */
                    int16_t l_1889 = (-1L);
                    /*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
/*bef_stmt:162272*/
(*g_1583) = func_27((l_1891 = func_38((+(((safe_mul_func_uint16_t_u_u((((((*g_885) != l_1874) , (l_1875[2][3][3]++)) == 0x1A0CEC00L) , ((*g_369) |= (safe_lshift_func_uint16_t_u_s((!(safe_rshift_func_int16_t_s_s((l_1834 = (Tag176(/*int32_t:163003:163021:162272:e*/l_1834) || (Tag177(/*int32_t:163071:163071:162272:e*/*l_1716)))), 2))), 6)))), (safe_add_func_int32_t_s_s((((*l_1832) = ((safe_sub_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(4294967295UL, Tag178(/*int16_t:162386:163003:162272:e*/l_1889))) == (Tag179(/*int8_t:163021:163034:162272:e*/l_1833) ^ (((Tag180(/*uint32_t:0:0:162272:e*/g_1890) , Tag181(/*int8_t:163021:163034:162272:e*/l_1833)) ^ (-1L)) == 0xA0L))), 0x63D50BDEL)) , (Tag182(/*int32_t:163071:163071:162272:e*/*l_1716)))) > Tag183(/*int32_t:163003:163021:162272:e*/l_1835)), (-3L))))) >= Tag184(/*int16_t:162386:163003:162272:e*/l_1889)) > Tag185(/*int32_t:163034:163071:162272:e*/l_1744[6]))), Tag186(/*int16_t:162386:163003:162272:e*/l_1889))));
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
/*aft_stmt:162272*/
                    for (g_394 = 0; (g_394 == 57); g_394 = safe_add_func_int32_t_s_s(g_394, 3))
                    { /* block id: 728 */
                        /*bef_stmt:162374*/
return (Tag187(/*int32_t:0:0:162374:e*/**g_70));
/*aft_stmt:162374*/
                    }
                }
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
/*aft_stmt:162391*/
                for (g_1037 = 0; (g_1037 == 18); g_1037 = safe_add_func_uint32_t_u_u(g_1037, 5))
                { /* block id: 734 */
                    int32_t l_1896 = 0xDF034253L;
                    int32_t *l_1897 = &l_1744[6];
                    for (l_1833 = 4; (l_1833 >= 0); l_1833 -= 1)
                    { /* block id: 737 */
                        int i, j, k;
                        (*l_1716) = 0x9FE728DDL;
                        (*l_1716) = (l_1747[(l_1833 + 2)][l_1833][l_1833] , g_69[(l_1833 + 1)][(l_1833 + 1)][l_1833]);
                    }
                    /*bef_stmt:162888*/
(*l_1897) = ((*l_1716) |= Tag188(/*int32_t:162892:163003:162888:e*/l_1896));
/*aft_stmt:162888*/
                }
                /*bef_stmt:162999*/
/*bef_stmt:162999*/
/*bef_stmt:162999*/
l_1898 = ((*g_1583) = ((Tag189(/*uint64_t:0:0:162999:e*/*g_315)) , func_38(Tag190(/*uint16_t:0:0:162999:e*/g_996), (Tag191(/*int32_t:163071:163071:162999:e*/*l_1716)))));
/*aft_stmt:162999*/
/*aft_stmt:162999*/
/*aft_stmt:162999*/
            }
        }
    }
    /*bef_stmt:163069*/
return (/*TAG192:STA*/((int32_t)(realsmith_proxy_mIMvr((char)(*l_1716)+(-43), (int)(*l_1716)+(-65260), (int)(*l_1716)+(-65270))+(unsigned int)(*l_1716)-(65283))+*l_1716)/*TAG192:END:*l_1716*/);
/*aft_stmt:163069*/
}


/* ------------------------------------------ */
/* 
 * reads : g_952 g_239 g_885 g_886 g_208 g_314 g_315 g_571 g_92 g_70 g_1060 g_71 g_767
 * writes: g_208 g_71 g_1060 g_571 g_92
 */
static uint32_t * func_27(uint32_t * p_28)
{ /* block id: 643 */
    const int8_t l_1637[5][2] = {{0xFFL,0xFFL},{0xFFL,0xFFL},{0xFFL,0xFFL},{0xFFL,0xFFL},{0xFFL,0xFFL}};
    int8_t ** const *l_1643[10] = {&g_885,&g_885,&g_885,&g_885,&g_885,&g_885,&g_885,&g_885,&g_885,&g_885};
    int8_t ** const **l_1642 = &l_1643[1];
    int32_t l_1654 = 0x8EEFD9F8L;
    int32_t l_1655[1][9] = {{0x7F77697BL,0x7F77697BL,0x7F77697BL,0x7F77697BL,0x7F77697BL,0x7F77697BL,0x7F77697BL,0x7F77697BL,0x7F77697BL}};
    int32_t l_1671 = 0x4E542ECDL;
    int32_t l_1678[9];
    uint32_t *l_1679[8] = {&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031};
    int i, j;
    for (i = 0; i < 9; i++)
        l_1678[i] = 0xE0F42C4BL;
    /*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
/*bef_stmt:165396*/
(*g_70) = func_38(((safe_div_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((~((((l_1654 = (safe_div_func_int64_t_s_s(((/*TAG193:STA*/((int8_t)(realsmith_proxy_VOpzg((int)(g_996)+(75))+(char)(l_1637[1][1])+(char)(*g_315)+(char)(g_1890)+(char)(g_996)-(51))+l_1637[1][1])/*TAG193:END:l_1637[1][1]*/ && 0x6E55730E2B90A9CCLL) , (safe_rshift_func_uint8_t_u_u((/*TAG194:STA*/((int8_t)(realsmith_YC6gU((long)(l_1637[1][1])+(81), (long)(g_996)+(61))+(int)(l_1637[1][1])+(int)(*g_315)+(int)(g_1890)+(int)(g_996)-(-1085693250))+l_1637[1][1])/*TAG194:END:l_1637[1][1]*/ <= (safe_lshift_func_uint8_t_u_s((((void*)0 == l_1642) | ((safe_div_func_int64_t_s_s(((safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s(/*TAG195:STA*/((int8_t)(realsmith_G9JA6((int)(g_1890)+(1085693304))+(int)(l_1637[0][0])+(int)(g_996)+(int)(l_1637[1][1])+(int)(*g_315)+(int)(g_1890)-(-1085693251))+l_1637[0][0])/*TAG195:END:l_1637[0][0]*/, (0x84339709L == /*TAG196:STA*/((int8_t)(realsmith_AvC0K((unsigned int)(*g_315)+(39))+((unsigned int)(l_1637[3][1])-(4294967295))+((unsigned int)(l_1637[0][0])-(4294967295))+(unsigned int)(*g_315)+(unsigned int)(g_996)+(unsigned int)(g_1890)-(3209274065))+l_1637[3][1])/*TAG196:END:l_1637[3][1]*/))), (((((****l_1642) ^= (safe_div_func_int16_t_s_s((/*TAG197:STA*/((int8_t)(realsmith_d8YzX((int)(l_1637[1][1])+(75))+(int)(l_1637[1][1])+(int)(l_1637[3][1])+(int)(*g_315)+(int)(g_1890)+(int)(g_996)-(-1085693243))+l_1637[1][1])/*TAG197:END:l_1637[1][1]*/ == 0L), (/*TAG198:STA*/((int16_t)(realsmith_oNKmy((unsigned char)(g_996)+(0))+(unsigned char)(*g_952)+(unsigned char)(g_996)+((unsigned char)(g_1890)-(188))+(unsigned char)(*g_315)-(189))+*g_952)/*TAG198:END:*g_952*/)))) , (void*)0) != &l_1643[0]) , /*TAG199:STA*/((int8_t)(realsmith_BSlR4((unsigned int)(l_1637[1][1])+(-4294967279), (unsigned int)(l_1637[1][1])+(-4294967255), (int)(l_1637[1][1])+(4))+(int)(l_1637[1][1])-(-1))+l_1637[1][1])/*TAG199:END:l_1637[1][1]*/))) , /*TAG200:STA*/((int8_t)(realsmith_proxy_lntaO((char)(l_1637[1][1])+(-84))+(int)(l_1637[1][1])-(-1))+l_1637[1][1])/*TAG200:END:l_1637[1][1]*/), /*TAG201:STA*/((int8_t)(realsmith_soihi((int)(l_1637[1][1])+(83))+(int)(l_1637[1][1])-(3))+l_1637[1][1])/*TAG201:END:l_1637[1][1]*/)) , /*TAG202:STA*/((int8_t)(realsmith_hYRIg((int)(g_996)+(3))+(int)(l_1637[3][0])+(int)(l_1637[3][1])+(int)(l_1637[1][1])+(int)(l_1637[0][0])+(int)(g_996)-(14))+l_1637[3][0])/*TAG202:END:l_1637[3][0]*/), 0x56F4639F9E2607A0LL)) != /*TAG203:STA*/((int8_t)(realsmith_qeGi9((int)(l_1637[1][1])+(100))+(int)(l_1637[1][1])+(int)(*g_952)+(int)(g_996)+(int)(l_1637[0][0])+(int)(l_1637[3][1])-(2231))+l_1637[1][1])/*TAG203:END:l_1637[1][1]*/)), 7))), /*TAG204:STA*/((int8_t)(realsmith_8dxah((int)(l_1637[3][1])+(32))+(long)(l_1637[0][1])+(long)(l_1637[3][1])+(long)(*g_315)+(long)(l_1637[0][0])+(long)(g_996)-(0))+l_1637[0][1])/*TAG204:END:l_1637[0][1]*/))), (/*TAG205:STA*/((uint64_t)(realsmith_S3P5B((int)(g_996)+(25))+(int)(**g_314)+(int)(*g_315)+(int)(g_996)+(int)(*g_952)-(2239))+**g_314)/*TAG205:END:**g_314*/)))) <= /*TAG206:STA*/((int8_t)(realsmith_proxy_KFTE5((char)(l_1637[1][1])+(-3))+(int)(l_1637[1][1])-(-1))+l_1637[1][1])/*TAG206:END:l_1637[1][1]*/) | /*TAG207:STA*/((int8_t)(realsmith_WIbZP((int)(*g_315)+(15))+(int)(l_1637[1][1])+(int)(*g_952)+(int)(l_1637[3][0])+(int)(l_1637[0][0])+(int)(*g_315)-(2233))+l_1637[1][1])/*TAG207:END:l_1637[1][1]*/) || Tag208(/*int32_t:166274:166274:165396:e*/l_1654))) & /*TAG209:STA*/((int8_t)(realsmith_proxy_Tnz9E((int)(l_1637[0][1])+(11), (int)(**g_314)+(-9))+(int)(l_1637[1][1])+(int)(**g_314)+(int)(*g_952)+(int)(l_1637[0][1])+(int)(*g_315)-(2228))+l_1637[1][1])/*TAG209:END:l_1637[1][1]*/), /*TAG210:STA*/((int32_t)(realsmith_proxy_ayU1y((int)(l_1655[0][0])+(-2138532167))+(int)(l_1655[0][0])+(int)(l_1637[3][0])+(int)(*g_952)+(int)(**g_314)+(int)(l_1637[0][0])-(2138534709))+l_1655[0][0])/*TAG210:END:l_1655[0][0]*/)), Tag211(/*int32_t:166274:166274:165396:e*/l_1655[0][0]))) > /*TAG212:STA*/((int32_t)(realsmith_proxy_guzdj((int)(l_1637[0][1])+(57), (long)(l_1637[0][1])+(6), (int)(l_1655[0][0])+(-2138532153), (int)(l_1637[0][1])+(15), (int)(l_1655[0][7])+(-2138532218), (int)(l_1637[0][1])+(94))+(int)(l_1655[0][7])+(int)(l_1637[0][1])+(int)(l_1637[1][1])+((int)(l_1655[0][0])-(2138532219))+(int)(**g_314)-(2138532226))+l_1655[0][7])/*TAG212:END:l_1655[0][7]*/), /*TAG213:STA*/((int32_t)(realsmith_NFgB8()+(int)(l_1655[0][1])+(int)(*g_952)+(int)(l_1637[3][0])+((int)(l_1655[0][0])-(2138532219))+((int)(l_1655[0][7])-(2138532219))-(2138534452))+l_1655[0][1])/*TAG213:END:l_1655[0][1]*/);
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
/*aft_stmt:165396*/
    /*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
/*bef_stmt:166250*/
(*g_70) = func_38(/*TAG214:STA*/((uint8_t)(realsmith_proxy_G9YbQ((char)(*g_952)+(161), (unsigned int)(g_767)+(4))+(int)(g_767)+(int)(*g_952)-(2302))+g_767)/*TAG214:END:g_767*/, (~((safe_add_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(0L, (safe_rshift_func_uint16_t_u_s(/*TAG215:STA*/((int32_t)(realsmith_proxy_n8roL((char)(l_1655[0][0])+(-123))+((char)(l_1655[0][0])-(123))-(46))+l_1655[0][0])/*TAG215:END:l_1655[0][0]*/, 1)))) , /*TAG216:STA*/((int32_t)(realsmith_nHJVR((unsigned long)(l_1655[0][0])+(-2138532122))+(int)(l_1655[0][0])-(2138532219))+l_1655[0][0])/*TAG216:END:l_1655[0][0]*/), ((safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(((l_1654 &= ((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(/*TAG217:STA*/((int32_t)(realsmith_proxy_hAxoh((char)(l_1655[0][1])+(-124), (int)(l_1654)+(1))+((int)(l_1655[0][4])-(2138532219))+(int)(l_1654)+((int)(l_1655[0][1])-(2138532219))+(int)(g_767)+((int)(l_1655[0][7])-(2138532219))-(638266882))+l_1655[0][4])/*TAG217:END:l_1655[0][4]*/, 1L)), 3)) , /*TAG218:STA*/((int32_t)(realsmith_RUQMl((int)(l_1655[0][0])+(-2138532162))+(int)(l_1671)+((int)(l_1655[0][7])-(2138532219))+(int)(l_1637[1][1])+((int)(l_1655[0][0])-(2138532219))+(int)(l_1637[0][1])-(1314139851))+l_1671)/*TAG218:END:l_1671*/)) != ((l_1678[8] = (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((/*TAG219:STA*/((int32_t)(realsmith_nVQ7B()+((unsigned int)(l_1671)-(1314139853))-(4294946462))+l_1671)/*TAG219:END:l_1671*/ | (((safe_add_func_uint16_t_u_u((((*g_315) ^= /*TAG220:STA*/((int8_t)(realsmith_EUAS7((int)(l_1637[1][1])+(44))+(long)(l_1637[1][1])-(333))+l_1637[1][1])/*TAG220:END:l_1637[1][1]*/) || 0x0BCAD179578F07B2LL), /*TAG221:STA*/((int32_t)(realsmith_tYB1b((int)(l_1671)+(-1314139845))+(int)(l_1671)+(int)(l_1637[3][0])+((int)(l_1655[0][4])-(2138532219))+(int)(l_1637[1][1])+((int)(l_1655[0][1])-(2138532219))-(1314139848))+l_1671)/*TAG221:END:l_1671*/)) , 0xD06008B5L) > /*TAG222:STA*/((int32_t)(realsmith_proxy_IkDMm((int)(l_1655[0][3])+(-2138532200), (int)(l_1655[0][3])+(-2138532151))+(unsigned long)(l_1655[0][3])-(2138532220))+l_1655[0][3])/*TAG222:END:l_1655[0][3]*/)) & /*TAG223:STA*/((int32_t)(realsmith_5F5el((int)(l_1655[0][7])+(-2138532156), (long)(l_1655[0][7])+(-2138532158))+(int)(l_1655[0][7])-(2138532231))+l_1655[0][7])/*TAG223:END:l_1655[0][7]*/), /*TAG224:STA*/((int32_t)(realsmith_proxy_C3BtI((unsigned long)(l_1655[0][0])+(-2138532223), (unsigned long)(l_1655[0][0])+(-2138532218), (unsigned long)(l_1655[0][0])+(-2138532218), (unsigned int)(l_1655[0][0])+(-2138532219), (unsigned long)(l_1655[0][0])+(-2138532215), (unsigned long)(l_1655[0][0])+(-2138532217), (unsigned long)(l_1655[0][0])+(-2138532214))-(-1)+(unsigned long)(l_1655[0][0])-(2138532219))+l_1655[0][0])/*TAG224:END:l_1655[0][0]*/)), 2))) , Tag225(/*int32_t:166274:166274:166250:e*/l_1678[8]))), /*TAG226:STA*/((int8_t)(realsmith_QB76L((int)(l_1655[0][1])+(-2138532195), (int)(l_1655[0][4])+(-2138532172), (int)(l_1637[1][1])+(70))+(int)(l_1637[1][1])+((int)(l_1655[0][4])-(2138532219))+((int)(l_1655[0][1])-(2138532219))+((int)(l_1655[0][0])-(2138532219))+((int)(l_1671)-(1314139853))-(1157627903))+l_1637[1][1])/*TAG226:END:l_1637[1][1]*/)) == /*TAG227:STA*/((int32_t)(realsmith_UmNsp((int)(l_1655[0][6])+(-2138532178), (int)(l_1655[0][7])+(-2138532149))+(int)(l_1655[0][6])+((int)(l_1655[0][7])-(2138532219))+((int)(l_1655[0][4])-(2138532219))+((int)(l_1655[0][1])-(2138532219))+(int)(l_1654)-(2138532289))+l_1655[0][6])/*TAG227:END:l_1655[0][6]*/), /*TAG228:STA*/((int32_t)(realsmith_proxy_2sxje((char)(l_1655[0][4])+(-109))+((char)(l_1655[0][4])-(123))-(14))+l_1655[0][4])/*TAG228:END:l_1655[0][4]*/)) | /*TAG229:STA*/((int32_t)(realsmith_proxy_Wj00e((int)(l_1671)+(-1314139925), (unsigned int)(l_1655[0][3])+(-2138532145), (unsigned int)(l_1655[0][0])+(-2138532148))+(int)(l_1655[0][0])+((int)(l_1655[0][1])-(2138532219))+((int)(l_1655[0][6])-(2138532219))+((int)(l_1655[0][3])-(2138532219))+((int)(l_1671)-(1314139853))-(2138532219))+l_1655[0][0])/*TAG229:END:l_1655[0][0]*/))) || /*TAG230:STA*/((int32_t)(realsmith_SIGro((int)(l_1671)+(-1314139817))+(int)(l_1671)-(1314139855))+l_1671)/*TAG230:END:l_1671*/)));
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
/*aft_stmt:166250*/
    return l_1679[3];
}


/* ------------------------------------------ */
/* 
 * reads : g_315 g_92 g_1037 g_169 g_70 g_71 g_1060 g_952 g_239 g_369 g_953 g_951 g_767 g_314 g_69 g_1128 g_135 g_996 g_637 g_885 g_886 g_208 g_415 g_416 g_639 g_571 g_143 g_1262 g_37 g_94 g_1113 g_1114 g_1583
 * writes: g_92 g_1037 g_169 g_1060 g_135 g_953 g_571 g_143 g_767 g_69 g_1262 g_1128 g_996 g_637 g_1346 g_208 g_71 g_315 g_394 g_639 g_705 g_89 g_37 g_94 g_239 g_1114 g_70
 */
static uint32_t * func_29(int32_t  p_30, uint32_t * p_31, int32_t  p_32)
{ /* block id: 459 */
    uint32_t l_1203 = 0xE94FFFDDL;
    uint16_t * const *l_1206 = &g_369;
    uint32_t *l_1211 = (void*)0;
    int32_t l_1212 = 0x35EFBF2FL;
    uint32_t *l_1213 = &g_1037;
    uint32_t *l_1220 = &g_169;
    uint32_t l_1228 = 0x27BEC469L;
    int64_t *l_1229 = &g_953;
    uint64_t *l_1230 = &g_571[0];
    int16_t *l_1231 = &g_143;
    int32_t l_1271 = (-10L);
    uint64_t l_1295 = 0x13ED678310D9DB08LL;
    uint64_t l_1309 = 0UL;
    int32_t l_1331 = 0xCBA93DD4L;
    int32_t l_1332 = 0x22FD3E97L;
    uint32_t *l_1336 = &g_1031;
    uint16_t *l_1341 = &g_639;
    int8_t **l_1347 = &g_886;
    int64_t l_1350 = 0L;
    int32_t l_1369 = 0xDB717AB1L;
    int32_t ***l_1391 = (void*)0;
    int32_t l_1452 = 9L;
    int32_t l_1453 = (-1L);
    int32_t l_1455 = 0x50B9B389L;
    int32_t l_1456[3][10][8] = {{{3L,0x77C072F4L,(-1L),0xC519E87CL,0x08CA11F3L,0x2AF50E3EL,0x9C2E8A61L,8L},{0x77C072F4L,7L,4L,(-2L),0L,(-6L),4L,0x76AA8F02L},{0xDE8E6FEFL,0x2A0191CBL,0x77C072F4L,0L,5L,8L,0L,0L},{0xE3E3B32EL,0xBEDEA4F2L,0xDB25FF95L,0xA3EB8D36L,7L,0xC519E87CL,8L,0xC37DFE2FL},{(-5L),0x0BB8D86EL,0L,0xD77FE349L,1L,0x60AE3810L,0x0966172CL,8L},{0xFCDC8D92L,0x3A98232AL,0L,8L,0xC519E87CL,(-9L),(-1L),1L},{0xE17CAA9AL,0L,7L,0L,7L,0L,0xE17CAA9AL,1L},{(-1L),3L,5L,4L,1L,0xE17CAA9AL,8L,0x2AF50E3EL},{0x60AE3810L,8L,(-5L),0xBEDEA4F2L,1L,0x76AA8F02L,3L,0L},{(-1L),0x843EA1FAL,8L,0x2AF50E3EL,7L,7L,0xDE8E6FEFL,(-5L)}},{{0xE17CAA9AL,0x11417B8BL,0L,(-1L),0xC519E87CL,0xBEDEA4F2L,(-2L),0xDE8E6FEFL},{0xFCDC8D92L,0x08CA11F3L,(-7L),0x11417B8BL,1L,1L,5L,0x877037BBL},{(-5L),0xE17CAA9AL,0x843EA1FAL,0x79D79B3DL,7L,(-2L),0xE3E3B32EL,0L},{0xE3E3B32EL,0L,0x0966172CL,0xFCDC8D92L,5L,0x9B79DCACL,0x9B79DCACL,5L},{0xDE8E6FEFL,0x9C2E8A61L,0x9C2E8A61L,0xDE8E6FEFL,0L,0x0BB8D86EL,8L,(-6L)},{0x77C072F4L,0L,(-1L),0xE17CAA9AL,0x08CA11F3L,(-1L),0xA3EB8D36L,(-1L)},{3L,0L,0xC519E87CL,0x7C9C5EA3L,0x21229BC7L,0x0BB8D86EL,0L,(-1L)},{(-1L),0x9C2E8A61L,(-2L),8L,0xA05D5F75L,0x9B79DCACL,0xD6168B0EL,0x77C072F4L},{0xD77FE349L,0L,0xC37DFE2FL,0x88F6FFA3L,0x9B79DCACL,(-2L),(-7L),(-2L)},{0xC37DFE2FL,0xE17CAA9AL,8L,0L,0L,1L,0x77C072F4L,(-1L)}},{{0x11417B8BL,0x08CA11F3L,(-1L),(-7L),8L,0xBEDEA4F2L,0x2AF50E3EL,0x3A98232AL},{5L,0x11417B8BL,0xD77FE349L,7L,(-5L),7L,0xD77FE349L,0x11417B8BL},{0x0966172CL,0x843EA1FAL,0xDE8E6FEFL,7L,(-1L),0x76AA8F02L,7L,0x9B79DCACL},{0x88F6FFA3L,8L,0x7C9C5EA3L,3L,0x0966172CL,0xE17CAA9AL,0L,0xA3EB8D36L},{0L,0x79D79B3DL,1L,4L,0xBEDEA4F2L,0x0BB8D86EL,(-1L),7L},{0xBEDEA4F2L,0x0BB8D86EL,(-1L),7L,0xC37DFE2FL,0L,(-2L),0xDB25FF95L},{0x60AE3810L,0x11417B8BL,0xE3E3B32EL,0xFCDC8D92L,0x7C9C5EA3L,0x88F6FFA3L,0L,0xC37DFE2FL},{7L,(-1L),0xA3EB8D36L,(-1L),0x08CA11F3L,0xE17CAA9AL,(-1L),0L},{(-1L),8L,0x3A98232AL,(-1L),0x2A0191CBL,1L,8L,8L},{(-1L),8L,0x2A0191CBL,0x2A0191CBL,8L,(-1L),0xC37DFE2FL,0x79D79B3DL}}};
    int8_t l_1534 = 0x7CL;
    int64_t l_1535 = 0L;
    int64_t *l_1556[10];
    uint64_t l_1586 = 18446744073709551607UL;
    uint8_t l_1611 = 1UL;
    int16_t l_1626 = 1L;
    int32_t *l_1627[6];
    uint32_t l_1629 = 0x3A9FD778L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1556[i] = &l_1350;
    for (i = 0; i < 6; i++)
        l_1627[i] = &l_1455;
    /*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
/*bef_stmt:212658*/
if ((safe_mod_func_uint64_t_u_u(((--(*g_315)) || ((((1L == (safe_sub_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((((*l_1231) = (((~((*l_1230) = (((*g_315)++) | ((((-1L) || /*TAG231:STA*/((uint32_t)(realsmith_proxy_SaCQ0((int)(l_1203)+(380633082), (int)(l_1203)+(380633034))+(int)(l_1203)-(-380633123))+l_1203)/*TAG231:END:l_1203*/) >= (((*l_1229) ^= (safe_rshift_func_uint16_t_u_s(((((l_1206 != (void*)0) | (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((((*l_1213)++) || 0xACCCFDE0L), (((*g_369) = (safe_mul_func_uint8_t_u_u((6UL < ((((safe_div_func_uint64_t_u_u(((((*l_1220) |= /*TAG232:STA*/((int32_t)(realsmith_proxy_zqrNB((char)(l_1212)+(-87), (unsigned long)(l_1212)+(-904904490))+(int)(l_1212)-(904904495))+l_1212)/*TAG232:END:l_1212*/) , (~((((safe_mod_func_uint32_t_u_u((((!((safe_mul_func_uint8_t_u_u((((((((**g_70) ^= ((+/*TAG233:STA*/((int32_t)(realsmith_proxy_cEGCU((long)(p_30)+(28))+(long)(p_30)-(28))+p_30)/*TAG233:END:p_30*/) && 0L)) && (Tag234(/*int32_t:0:0:212658:e*/*g_71))) || (Tag235(/*int32_t:0:0:212658:e*/**g_70))) || /*TAG236:STA*/((int32_t)(realsmith_proxy_WdnwE((char)(p_30)+(-57))+(int)(l_1212)+(int)(l_1203)+(int)(p_30)-(524271373))+l_1212)/*TAG236:END:l_1212*/) , /*TAG237:STA*/((uint32_t)(realsmith_pEu1P((int)(l_1203)+(380633167), (int)(p_30)+(22))+(int)(l_1203)+(int)(p_30)+(int)(l_1212)-(524271374))+l_1203)/*TAG237:END:l_1203*/) != /*TAG238:STA*/((int32_t)(realsmith_i8SFb((int)(p_30)+(94), (int)(l_1203)+(380633181), (int)(l_1203)+(380633158))+(int)(p_32)+(int)(l_1203)+(int)(p_30)+(int)(l_1212)-(524271407))+p_32)/*TAG238:END:p_32*/), 0x47L)) , /*TAG239:STA*/((int32_t)(realsmith_iAdrq((int)(l_1212)+(-904904434))+(unsigned long)(p_30)+(unsigned long)(p_32)+(unsigned long)(l_1203)+(unsigned long)(l_1212)-(4819238670))+p_30)/*TAG239:END:p_30*/)) == /*TAG240:STA*/((uint32_t)(realsmith_KP7n8((unsigned int)(p_32)+(39), (unsigned int)(l_1203)+(-3914334106))+(unsigned long)(l_1203)+(unsigned long)(p_32)+(unsigned long)(p_30)+(unsigned long)(l_1212)-(4819239006))+l_1203)/*TAG240:END:l_1203*/) == /*TAG241:STA*/((int32_t)(realsmith_proxy_zDF3s((char)(p_32)+(-57), (char)(l_1212)+(-71))+(int)(p_32)+(int)(l_1203)+(int)(p_30)+(int)(l_1212)-(524271372))+p_32)/*TAG241:END:p_32*/), /*TAG242:STA*/((int32_t)(realsmith_1w9IH((int)(p_32)+(83))+(int)(p_30)+(int)(p_32)+(int)(l_1203)+(int)(l_1212)-(524271385))+p_30)/*TAG242:END:p_30*/)) <= (/*TAG243:STA*/((int16_t)(realsmith_pjAH2((int)(*g_952)+(-2190))+(int)(*g_952)-(2240))+*g_952)/*TAG243:END:*g_952*/)) | Tag244(/*int32_t:212785:212785:212658:e*/p_32)) || /*TAG245:STA*/((int32_t)(realsmith_LGQA3((int)(p_30)+(63), (int)(p_30)+(96))+(int)(p_32)+(int)(p_30)+(int)(l_1203)+(int)(l_1212)-(524271372))+p_32)/*TAG245:END:p_32*/))) > /*TAG246:STA*/((uint32_t)(realsmith_proxy_9IOUg((int)(p_32)+(52), (long)(l_1203)+(-3914334111), (long)(*g_952)+(-2157))+(long)(l_1203)+(long)(p_32)+(long)(p_30)+(long)(*g_952)-(3914336468))+l_1203)/*TAG246:END:l_1203*/), /*TAG247:STA*/((int32_t)(realsmith_proxy_OLHuV((int)(p_32)+(89), (char)(p_32)+(-39), (unsigned long)(*g_952)+(-2139))+(int)(p_32)+(int)(l_1203)+(int)(l_1212)+(int)(*g_952)+(int)(p_30)-(524273606))+p_32)/*TAG247:END:p_32*/)) ^ /*TAG248:STA*/((int32_t)(realsmith_F21CS((unsigned int)(l_1203)+(-3914334127), (unsigned int)(p_30)+(45))+(int)(p_32)+(int)(l_1203)+(int)(p_30)+(int)(l_1212)+(int)(*g_952)-(1332594674))+p_32)/*TAG248:END:p_32*/) | /*TAG249:STA*/((int32_t)(realsmith_OOo5b((int)(*g_952)+(-2147), (int)(l_1203)+(380633125))+(unsigned int)(p_30)+(unsigned int)(l_1212)+((unsigned int)(l_1203)-(3914334173))+(unsigned int)(*g_952)-(904906728))+p_30)/*TAG249:END:p_30*/) | /*TAG250:STA*/((int32_t)(realsmith_proxy_M6orU((unsigned char)(p_30)+(-38), (int)(l_1212)+(-904904463))+(unsigned int)(p_30)+(unsigned int)(l_1212)+((unsigned int)(l_1203)-(3914334173))+(unsigned int)(p_32)-(3166395719))+p_30)/*TAG250:END:p_30*/)), 1UL))) <= /*TAG251:STA*/((int32_t)(realsmith_kg93k((int)(p_32)+(24))+(int)(p_30)+(int)(l_1203)+(int)(l_1212)+(int)(*g_952)+(int)(p_32)-(524273605))+p_30)/*TAG251:END:p_30*/))), /*TAG252:STA*/((int32_t)(realsmith_proxy_fmHGv((int)(p_32)+(-37), (int)(l_1203)+(380633112), (int)(l_1212)+(-904904413))+(int)(p_32)+(int)(l_1203)+(int)(l_1212)+(int)(p_30)+(int)(*g_952)-(524273605))+p_32)/*TAG252:END:p_32*/))) > /*TAG253:STA*/((int32_t)(realsmith_proxy_nmsXe((int)(l_1212)+(-904904502), (char)(l_1212)+(-56), (unsigned long)(l_1212)+(-904904440), (int)(*g_952)+(-2179), (int)(l_1203)+(380633218))+(long)(p_32)+(long)(l_1212)+(long)(l_1203)+(long)(*g_952)-(4819240921))+p_32)/*TAG253:END:p_32*/) , /*TAG254:STA*/((int32_t)(realsmith_FJEjl((int)(p_30)+(67), (long)(l_1212)+(-904904417))+(long)(p_30)+(long)(l_1212)+(long)(*g_952)+(long)(l_1203)+(long)(p_32)-(4819240902))+p_30)/*TAG254:END:p_30*/), /*TAG255:STA*/((uint32_t)(realsmith_Qy7Hd((int)(p_32)+(94))+(int)(l_1228)+(int)(p_32)+(int)(p_30)+(int)(*g_952)+(int)(l_1212)-(1571720273))+l_1228)/*TAG255:END:l_1228*/))) & /*TAG256:STA*/((int32_t)(realsmith_g75Vd((unsigned int)(l_1212)+(-904904444), (unsigned int)(l_1212)+(-904904448))+((int)(l_1212)-(904904495))-(1613955119))+l_1212)/*TAG256:END:l_1212*/)) , 0L)))) == 0L) < /*TAG257:STA*/((uint32_t)(realsmith_sZlBD()+(int)(l_1228)-(666813546))+l_1228)/*TAG257:END:l_1228*/)) == (/*TAG258:STA*/((int16_t)(realsmith_ltBfq((int)(**g_951)+(-2157), (int)(**g_951)+(-2164))+(int)(**g_951)-(3680))+**g_951)/*TAG258:END:**g_951*/)), (/*TAG259:STA*/((int16_t)(realsmith_proxy_AvWAx((int)(*g_952)+(-2178), (unsigned char)(*g_952)+(-115), (unsigned long)(*g_952)+(-2141), (unsigned long)(*g_952)+(-2224), (unsigned char)(*g_952)+(-275), (unsigned char)(*g_952)+(-121))+(int)(*g_952)-(2232))+*g_952)/*TAG259:END:*g_952*/))) & /*TAG260:STA*/((int32_t)(realsmith_proxy_e0g4Z((int)(p_30)+(7), (int)(p_30)+(63), (int)(p_30)+(90), (int)(p_30)+(4), (int)(p_30)+(80), (int)(p_30)+(28), (int)(p_30)+(39))+(int)(p_30)-(80))+p_30)/*TAG260:END:p_30*/), /*TAG261:STA*/((int32_t)(realsmith_RHvVe((int)(p_32)+(24), (int)(p_32)+(44))+(int)(p_32)-(0))+p_32)/*TAG261:END:p_32*/))) == 0x2D012DBAF8F2D36FLL) , /*TAG262:STA*/((int32_t)(realsmith_proxy_p5lvQ((int)(p_32)+(61), (int)(p_32)+(32), (unsigned long)(p_32)+(-3), (unsigned long)(p_32)+(22), (int)(p_32)+(-77), (unsigned long)(p_32)+(5), (int)(p_32)+(-11), (unsigned long)(p_32)+(100), (char)(p_32)+(-91), (unsigned long)(p_32)+(68))+(int)(p_32)-(1))+p_32)/*TAG262:END:p_32*/) , 0xA74AC2F0D6701A30LL)), /*TAG263:STA*/((int32_t)(realsmith_7NV9j((int)(l_1212)+(-904904402), (int)(l_1212)+(-904904491))+(int)(l_1212)-(904904499))+l_1212)/*TAG263:END:l_1212*/)))
    { /* block id: 469 */
        (**g_70) = (-7L);
    }
    else
    { /* block id: 471 */
        uint64_t l_1257 = 0UL;
        uint16_t l_1259 = 65532UL;
        int32_t l_1264 = 0x8AAD0E50L;
        uint32_t l_1266[5][1][10] = {{{0x4A0C0459L,9UL,0x5803153FL,0UL,0xF1DC5F02L,0x9BEEA79BL,0xE7BBEAE5L,18446744073709551614UL,0UL,0x98BB05F5L}},{{4UL,9UL,18446744073709551615UL,0x20B1D8C0L,0x5803153FL,0xE7BBEAE5L,0xE7BBEAE5L,0x5803153FL,0x20B1D8C0L,18446744073709551615UL}},{{9UL,9UL,0xF1DC5F02L,18446744073709551610UL,0x98BB05F5L,0x4A0C0459L,0xE7BBEAE5L,18446744073709551615UL,18446744073709551610UL,18446744073709551614UL}},{{0x9BEEA79BL,9UL,0x98BB05F5L,0x8E071274L,18446744073709551615UL,4UL,0xE7BBEAE5L,0xF1DC5F02L,0x8E071274L,0xF1DC5F02L}},{{0xE7BBEAE5L,9UL,18446744073709551614UL,0xF4485173L,18446744073709551614UL,9UL,0xE7BBEAE5L,0x98BB05F5L,0xF4485173L,0x5803153FL}}};
        int32_t l_1269 = 0x6A07F33EL;
        int32_t l_1270 = 1L;
        int32_t **l_1302 = &g_71;
        uint16_t * const *l_1344 = &g_369;
        uint16_t * const **l_1345[1];
        int8_t ***l_1348 = (void*)0;
        int8_t **l_1349 = &g_886;
        uint32_t *l_1406 = &g_94;
        int32_t l_1443 = 0xF1FA95FFL;
        int32_t l_1444 = 0xBE5978ABL;
        int32_t l_1447 = 0x832FBAB4L;
        int32_t l_1451[7][10][3] = {{{0x212B7906L,0x65700316L,0xEAAD861AL},{(-1L),0x77938D67L,0L},{(-9L),(-1L),(-10L)},{0L,0L,0xC2140008L},{(-9L),0x212B7906L,(-1L)},{(-1L),0x4B6FB574L,1L},{0x212B7906L,0x8E8776D3L,0x748774AAL},{0L,(-1L),1L},{0x8B0F41C3L,(-1L),(-1L)},{0x1A65E457L,1L,0xC2140008L}},{{(-8L),(-1L),(-10L)},{0x4B6FB574L,1L,0L},{(-1L),(-1L),0xEAAD861AL},{0x8053EF48L,(-1L),0xFDF65408L},{0x8E8776D3L,0x8E8776D3L,0xAEC147F7L},{0x8053EF48L,0x4B6FB574L,0L},{(-1L),0x212B7906L,0x989FF5AAL},{0x4B6FB574L,0L,0x316F7F2FL},{(-8L),(-1L),0x989FF5AAL},{0x1A65E457L,0x77938D67L,0L}},{{0x8B0F41C3L,0x65700316L,0xAEC147F7L},{0L,0x17B3A2A8L,0xFDF65408L},{0x212B7906L,0x65700316L,0xEAAD861AL},{(-1L),0x77938D67L,0L},{(-9L),(-1L),(-10L)},{0L,0L,0xC2140008L},{(-9L),0x212B7906L,(-1L)},{(-1L),0x4B6FB574L,1L},{0x212B7906L,0x8E8776D3L,0x748774AAL},{0L,(-1L),1L}},{{0x8B0F41C3L,(-1L),(-1L)},{0x588825B4L,4L,0L},{2L,0x905C771CL,0x65700316L},{0x051D23AAL,4L,0L},{1L,(-1L),(-8L)},{0x19B6CA45L,0xB0AEF86EL,1L},{0xFAA7CA1FL,0xFAA7CA1FL,0x8E8776D3L},{0x19B6CA45L,0x051D23AAL,0x17B3A2A8L},{1L,2L,0x8B0F41C3L},{0x051D23AAL,0x40AFB7CCL,0x976C8A97L}},{{2L,1L,0x8B0F41C3L},{0x588825B4L,0L,0x17B3A2A8L},{0x2CF44A2EL,0L,0x8E8776D3L},{0xFC49CE7CL,0xA638F439L,1L},{2L,0L,(-8L)},{0xB0AEF86EL,0L,0L},{(-6L),1L,0x65700316L},{0x40AFB7CCL,0x40AFB7CCL,0L},{(-6L),2L,(-1L)},{0xB0AEF86EL,0x051D23AAL,0x1A65E457L}},{{2L,0xFAA7CA1FL,0L},{0xFC49CE7CL,0xB0AEF86EL,0x1A65E457L},{0x2CF44A2EL,(-1L),(-1L)},{0x588825B4L,4L,0L},{2L,0x905C771CL,0x65700316L},{0x051D23AAL,4L,0L},{1L,(-1L),(-8L)},{0x19B6CA45L,0xB0AEF86EL,1L},{0xFAA7CA1FL,0xFAA7CA1FL,0x8E8776D3L},{0x19B6CA45L,0x051D23AAL,0x17B3A2A8L}},{{1L,2L,0x8B0F41C3L},{0x051D23AAL,0x40AFB7CCL,0x976C8A97L},{2L,1L,0x8B0F41C3L},{0x588825B4L,0L,0x17B3A2A8L},{0x2CF44A2EL,0L,0x8E8776D3L},{0xFC49CE7CL,0xA638F439L,1L},{2L,0L,(-8L)},{0xB0AEF86EL,0L,0L},{(-6L),1L,0x65700316L},{0x40AFB7CCL,0x40AFB7CCL,0L}}};
        int8_t l_1457 = 0xFCL;
        uint8_t l_1491 = 0xF6L;
        uint32_t *l_1494[3][8][4] = {{{&g_1037,&g_1031,&g_1031,&g_1031},{&g_1037,&g_1037,&g_1128,&g_1037},{&g_94,&g_1031,&g_1037,&g_1031},{&g_1031,(void*)0,&g_1128,&g_1037},{&g_1031,(void*)0,&g_1031,&g_1031},{(void*)0,&g_1031,&g_493,&g_1037},{&g_1037,&g_1037,&g_1031,&g_1031},{&g_493,&g_1031,&g_1031,&g_493}},{{&g_1037,&g_1031,&g_493,&g_1031},{(void*)0,&g_37,&g_1031,&g_1128},{&g_1031,&g_1128,&g_1128,&g_1128},{&g_1031,&g_37,&g_1037,&g_1031},{&g_94,&g_1031,&g_1128,&g_493},{&g_1037,&g_1031,&g_1031,&g_1031},{&g_1037,&g_1037,&g_1128,&g_1037},{&g_94,&g_1031,&g_1037,&g_1031}},{{&g_1031,(void*)0,&g_1128,&g_1037},{&g_1031,(void*)0,&g_1031,&g_1031},{&g_1037,&g_1031,&g_1128,&g_1031},{&g_1031,&g_1128,&g_493,&g_1031},{&g_1037,&g_493,&g_493,&g_1037},{&g_1031,&g_37,&g_1128,&g_1031},{&g_1037,&g_493,&g_1031,(void*)0},{&g_1031,(void*)0,&g_94,(void*)0}}};
        int64_t *l_1557 = &g_953;
        int32_t l_1585[8][7][4] = {{{6L,0xB372C763L,1L,1L},{0xF32D5CF5L,0x9E330565L,0L,(-1L)},{(-1L),0x7491F5DCL,(-1L),(-4L)},{0xBA21247EL,0xFAD1B2D0L,6L,0xC0E7C259L},{0x6B25772DL,1L,0xF886CC9EL,0L},{0x541D803DL,(-1L),0xF32D5CF5L,(-1L)},{0x111E1116L,0x0D26787BL,(-1L),2L}},{{1L,0x37D242D0L,0L,0x65F57A56L},{(-1L),0xE3CF0B7CL,0x826594A2L,4L},{(-1L),0L,0L,3L},{1L,4L,(-1L),0x9E330565L},{0x111E1116L,(-1L),0xF32D5CF5L,0L},{0x541D803DL,0x50605C43L,0xF886CC9EL,1L},{0x6B25772DL,0x51EE8B20L,6L,0x43C5B94AL}},{{0xBA21247EL,1L,(-1L),0x481EE614L},{(-1L),1L,0L,5L},{0xF32D5CF5L,3L,1L,8L},{6L,1L,3L,0x94B5E4ACL},{5L,2L,0xB372C763L,(-9L)},{2L,8L,0xE3CF0B7CL,0L},{0xE8AC5025L,3L,0x88FE4649L,0L}},{{9L,0x15DB846CL,0x65F57A56L,0L},{0x50605C43L,5L,0x43C5B94AL,0x355A6CDFL},{0x481EE614L,1L,0x44C2B445L,9L},{0xFAD1B2D0L,0xC0E7C259L,0x37D242D0L,0xE3CF0B7CL},{0x44C2B445L,0L,1L,0L},{3L,0x65F57A56L,2L,1L},{0L,0xBA21247EL,0xF687D9CBL,0xF687D9CBL}},{{0x12DC0B1EL,0x12DC0B1EL,1L,0x826594A2L},{(-9L),0x6B25772DL,0xE8AC5025L,0x7150B69EL},{4L,0x355A6CDFL,0x98701CB3L,0xE8AC5025L},{8L,0x355A6CDFL,(-1L),0x7150B69EL},{0x355A6CDFL,0x6B25772DL,(-1L),0x826594A2L},{0x35B98427L,0x12DC0B1EL,0xBCD83CDFL,0xF687D9CBL},{(-7L),0xBA21247EL,1L,1L}},{{0xE3CF0B7CL,0x65F57A56L,(-9L),0L},{0x7150B69EL,0L,0xBA21247EL,0xE3CF0B7CL},{1L,0xC0E7C259L,0x9E330565L,9L},{1L,1L,0x51EE8B20L,0x355A6CDFL},{0xFA6DDB4CL,5L,0x7491F5DCL,0L},{0x88FE4649L,0x15DB846CL,9L,0L},{0xFCDE57A9L,3L,0x50605C43L,1L}},{{0xE3CF0B7CL,0x98701CB3L,1L,0x94B5E4ACL},{0xB372C763L,2L,(-1L),1L},{3L,0x826594A2L,(-1L),0x98701CB3L},{1L,0L,4L,(-4L)},{0L,0L,9L,0x51EE8B20L},{(-1L),0L,1L,5L},{6L,4L,0xF270C246L,0x37D242D0L}},{{0xF886CC9EL,0x7491F5DCL,0xFAD1B2D0L,(-7L)},{0xF32D5CF5L,9L,0xF32D5CF5L,1L},{(-1L),0x355A6CDFL,0xF687D9CBL,(-9L)},{0L,0xC0E7C259L,3L,0x355A6CDFL},{0x826594A2L,2L,3L,0xF886CC9EL},{0L,8L,0xF687D9CBL,2L},{(-1L),0x6B25772DL,0xF32D5CF5L,0xF270C246L}}};
        uint32_t l_1601 = 5UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1345[i] = &l_1344;
        for (g_767 = 0; (g_767 <= 1); g_767 += 1)
        { /* block id: 474 */
            int8_t l_1256 = (-1L);
            const int32_t l_1258[2][8][6] = {{{0xA3E95590L,0x39F816A7L,0x7A8A35A0L,0x0BE28FAEL,0x7AA35F99L,0L},{0x7AA35F99L,(-10L),0L,(-10L),0x7AA35F99L,0x238F2313L},{0L,0x39F816A7L,0xF518CB93L,(-8L),(-10L),0x7A8A35A0L},{0x7A8A35A0L,(-1L),0x39F816A7L,0x39F816A7L,(-1L),0x7A8A35A0L},{(-8L),0x0BE28FAEL,0xF518CB93L,0x7AA35F99L,0x7A8A35A0L,0x238F2313L},{(-1L),0L,0L,0x7A8A35A0L,0L,0L},{(-1L),0x238F2313L,0x7A8A35A0L,0x7AA35F99L,0xF518CB93L,0x0BE28FAEL},{(-8L),0x7A8A35A0L,(-1L),0x39F816A7L,0x39F816A7L,(-1L)}},{{0x7A8A35A0L,0x7A8A35A0L,(-10L),(-8L),0xF518CB93L,0x39F816A7L},{0L,0x238F2313L,0x7AA35F99L,(-10L),0L,(-10L)},{0x7AA35F99L,0L,0x7AA35F99L,0x0BE28FAEL,0x7A8A35A0L,0x39F816A7L},{0xA3E95590L,0x0BE28FAEL,(-10L),(-5L),(-1L),(-1L)},{(-5L),(-1L),(-1L),(-5L),(-10L),0x0BE28FAEL},{0xA3E95590L,0x39F816A7L,0x7A8A35A0L,0x0BE28FAEL,0x7AA35F99L,0L},{0x7AA35F99L,(-10L),0L,(-10L),0x7AA35F99L,0x238F2313L},{0L,0x39F816A7L,0xF518CB93L,(-8L),(-10L),0x7A8A35A0L}}};
            int32_t *l_1260 = (void*)0;
            int32_t *l_1261 = &g_69[5][2][2];
            int32_t l_1265 = 0x08E76E05L;
            int32_t l_1272 = 0L;
            int32_t l_1328 = 9L;
            int32_t l_1329 = (-1L);
            int32_t l_1330 = (-5L);
            int i, j, k;
            /*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
/*bef_stmt:185909*/
g_1262 = (safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(((!((safe_rshift_func_uint8_t_u_u((((((+((*l_1229) &= (0L & ((safe_unary_minus_func_int32_t_s(((*l_1261) &= (safe_rshift_func_uint8_t_u_u(((Tag264(/*int32_t:212785:212785:185909:e*/p_32) < (((((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((*g_71) = (((Tag265(/*uint64_t:0:0:185909:e*/*g_315)) || (safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(Tag266(/*int32_t:212785:212785:185909:e*/p_30), (safe_div_func_uint32_t_u_u(0UL, (safe_div_func_int16_t_s_s(Tag267(/*int8_t:189787:212630:185909:e*/l_1256), Tag268(/*uint32_t:212785:212785:185909:e*/l_1203))))))) , (((((Tag269(/*uint64_t:212630:212785:185909:e*/l_1257) > (Tag270(/*uint64_t:212630:212785:185909:e*/l_1257) , (Tag271(/*uint64_t:0:0:185909:e*/**g_314)))) & Tag272(/*int32_t:212785:212785:185909:e*/p_30)) && Tag273(/*int32_t:212785:212785:185909:e*/p_32)) , Tag274(/*int32_t:212785:212785:185909:e*/l_1212)) > Tag275(/*const int32_t:189787:212630:185909:e*/l_1258[1][2][2]))), (Tag276(/*uint64_t:0:0:185909:e*/*g_315))))) , (Tag277(/*int32_t:0:0:185909:e*/*g_71)))), Tag278(/*uint64_t:212630:212785:185909:e*/l_1257))), Tag279(/*uint64_t:212630:212785:185909:e*/l_1257))), 1L)) & 65529UL) == Tag280(/*int32_t:212785:212785:185909:e*/p_30)) , Tag281(/*int32_t:212785:212785:185909:e*/l_1212)) & Tag282(/*int32_t:212785:212785:185909:e*/p_32))) >= Tag283(/*const int32_t:189787:212630:185909:e*/l_1258[1][2][2])), Tag284(/*uint16_t:212630:212785:185909:e*/l_1259)))))) , Tag285(/*uint16_t:212630:212785:185909:e*/l_1259))))) < (Tag286(/*const int16_t:0:0:185909:e*/**g_951))) , Tag287(/*uint16_t:212630:212785:185909:e*/l_1259)) == Tag288(/*int32_t:212785:212785:185909:e*/p_30)) > 0x735AL), Tag289(/*int32_t:212785:212785:185909:e*/p_30))) , 0x0CL)) && Tag290(/*int32_t:212785:212785:185909:e*/p_32)), Tag291(/*int32_t:212785:212785:185909:e*/p_32)))));
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
/*aft_stmt:185909*/
            for (g_1128 = 0; (g_1128 <= 0); g_1128 += 1)
            { /* block id: 481 */
                int32_t l_1296 = 0xC78C3F93L;
                for (g_135 = 0; (g_135 <= 1); g_135 += 1)
                { /* block id: 484 */
                    int32_t *l_1263[10] = {&g_69[3][2][0],&g_69[3][2][0],&g_69[2][6][3],&g_69[2][6][3],&g_69[3][2][0],&g_69[3][2][0],&g_69[3][2][0],&g_69[2][6][3],&g_69[2][6][3],&g_69[3][2][0]};
                    int i;
                    l_1266[0][0][9]--;
                    for (g_996 = 0; (g_996 <= 1); g_996 += 1)
                    { /* block id: 488 */
                        uint32_t l_1273 = 4294967293UL;
                        const uint32_t *l_1300 = (void*)0;
                        const uint32_t * const *l_1299[6][7];
                        const uint32_t * const **l_1298 = &l_1299[5][5];
                        const uint32_t * const ***l_1297 = &l_1298;
                        uint32_t l_1301 = 4294967288UL;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1299[i][j] = &l_1300;
                        }
                        l_1273--;
                        /*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
/*bef_stmt:187806*/
(*g_71) = ((safe_div_func_uint16_t_u_u(((18446744073709551610UL && l_1266[(g_767 + 1)][g_1128][(g_996 + 1)]) >= (Tag292(/*uint32_t:212630:212785:187806:e*/l_1266[0][0][9]) ^ ((((-3L) >= (safe_rshift_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(Tag293(/*int32_t:212785:212785:187806:e*/p_32), (safe_mod_func_uint8_t_u_u(Tag294(/*int32_t:212785:212785:187806:e*/l_1212), (~Tag295(/*int32_t:212630:212785:187806:e*/l_1269)))))), (safe_div_func_uint16_t_u_u((0x41072A8FDFD486C1LL >= (safe_mod_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(Tag296(/*uint32_t:212630:212785:187806:e*/l_1266[0][0][9]), Tag297(/*uint64_t:212785:212785:187806:e*/l_1295))) , Tag298(/*int32_t:212785:212785:187806:e*/p_32)), 6L)) < 0x7A6B813108BDA4CBLL) >= Tag299(/*int32_t:188657:189787:187806:e*/l_1296)), Tag300(/*int32_t:212785:212785:187806:e*/p_30)))), Tag301(/*int32_t:212785:212785:187806:e*/p_32))))) , l_1297) != (void*)0), Tag302(/*uint32_t:187810:188643:187806:e*/l_1301)))) ^ Tag303(/*int32_t:188657:189787:187806:e*/l_1296)) == Tag304(/*uint32_t:187810:188643:187806:e*/l_1273)))), Tag305(/*int32_t:188657:189787:187806:e*/l_1296))) ^ 1UL);
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
/*aft_stmt:187806*/
                    }
                    for (g_637 = 0; (g_637 <= 0); g_637 += 1)
                    { /* block id: 494 */
                        int32_t l_1320 = 0x0729B0B1L;
                        int i, j, k;
                        /*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
/*bef_stmt:188627*/
(**g_70) = (((((void*)0 == l_1302) & (Tag306(/*int32_t:188657:189787:188627:e*/l_1296) ^ (safe_mul_func_uint16_t_u_u(Tag307(/*int32_t:212785:212785:188627:e*/p_30), (safe_lshift_func_int16_t_s_s((Tag308(/*const int16_t:0:0:188627:e*/*g_952)), (safe_mul_func_uint8_t_u_u(((Tag309(/*uint64_t:212785:212785:188627:e*/l_1309) & ((((Tag310(/*int32_t:212630:212785:188627:e*/**l_1302)) & (safe_div_func_uint8_t_u_u((((*l_1229) &= (safe_sub_func_uint32_t_u_u(((*l_1213)--), ((((+((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_u((Tag311(/*int8_t:0:0:188627:e*/**g_885)), 1)))) | (((((Tag312(/*int32_t:212630:212785:188627:e*/**l_1302)) | 0UL) != 0xF511DF6F5FE2B06ELL) <= Tag313(/*int32_t:212785:212785:188627:e*/p_32)) >= Tag314(/*int32_t:188631:188643:188627:e*/l_1320)))) <= (Tag315(/*int32_t:212630:212785:188627:e*/**l_1302))) ^ (Tag316(/*int32_t:189787:212630:188627:e*/*l_1261))) != Tag317(/*int32_t:212785:212785:188627:e*/p_32))))) > Tag318(/*uint32_t:212785:212785:188627:e*/l_1203)), Tag319(/*uint32_t:212785:212785:188627:e*/l_1228)))) & 0x4AA0C7C6L) || Tag320(/*int32_t:188631:188643:188627:e*/l_1320))) ^ Tag321(/*int32_t:212785:212785:188627:e*/p_30)), 1UL)))))))) != 18446744073709551606UL) , 0L);
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
/*aft_stmt:188627*/
                    }
                }
            }
            for (l_1272 = 0; (l_1272 <= 0); l_1272 += 1)
            { /* block id: 503 */
                int8_t l_1321 = 0L;
                int32_t *l_1322 = &l_1271;
                int32_t *l_1323 = &l_1264;
                int32_t *l_1324 = &l_1270;
                int32_t *l_1325 = (void*)0;
                int32_t *l_1326 = &l_1264;
                int32_t *l_1327[8][2] = {{&g_69[0][1][0],&g_69[0][1][0]},{(void*)0,&g_69[0][1][0]},{&g_69[0][1][0],(void*)0},{&g_69[0][1][0],&g_69[0][1][0]},{(void*)0,&g_69[0][1][0]},{&g_69[0][1][0],(void*)0},{&g_69[0][1][0],&g_69[0][1][0]},{(void*)0,&g_69[0][1][0]}};
                uint8_t l_1333 = 0xC5L;
                int i, j;
                l_1333--;
                return l_1336;
            }
        }
        /*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
/*bef_stmt:212624*/
if (((254UL == ((Tag322(/*int32_t:212785:212785:212624:e*/l_1271) , ((((((*g_886) = (safe_mul_func_uint16_t_u_u(((Tag323(/*const int16_t:0:0:212624:e*/*g_952)) || (safe_mod_func_int64_t_s_s(((Tag324(/*int32_t:212785:212785:212624:e*/p_30) > (((*l_1206) != (l_1341 = &l_1259)) <= ((safe_sub_func_uint32_t_u_u((l_1332 |= ((Tag325(/*uint64_t:212785:212785:212624:e*/l_1295) >= (0x6DC3L & ((l_1347 = (((g_1346 = l_1344) != l_1206) , l_1347)) == l_1349))) > 247UL)), 0x95256C94L)) , 0L))) < Tag326(/*int32_t:212785:212785:212624:e*/p_30)), Tag327(/*int64_t:212785:212785:212624:e*/l_1350)))), Tag328(/*uint64_t:212785:212785:212624:e*/l_1309)))) <= Tag329(/*int64_t:212785:212785:212624:e*/l_1350)) , Tag330(/*int64_t:212785:212785:212624:e*/l_1350)) , (Tag331(/*int32_t:0:0:212624:e*/**g_70))) >= (Tag332(/*int32_t:0:0:212624:e*/**g_70)))) == 7L)) , 0x94B174D9L))
        { /* block id: 513 */
            int32_t l_1367 = 1L;
            int32_t l_1370 = 0xBAA8A322L;
            uint64_t l_1371 = 0x196985B9FAEDB174LL;
            uint64_t *l_1384[8];
            int8_t ***l_1390[4];
            int32_t ****l_1392 = &l_1391;
            int64_t l_1440 = 0xE5BE727A8221847ELL;
            int32_t l_1441 = (-1L);
            int32_t l_1445 = 1L;
            int32_t l_1448 = 0xFE40902BL;
            int32_t l_1450[8] = {0xE5A4D66AL,0x9CF0D3FAL,0x9CF0D3FAL,0xE5A4D66AL,0x9CF0D3FAL,0x9CF0D3FAL,0xE5A4D66AL,0x9CF0D3FAL};
            int32_t l_1454[4];
            uint32_t *l_1468 = &g_169;
            int i;
            for (i = 0; i < 8; i++)
                l_1384[i] = &l_1295;
            for (i = 0; i < 4; i++)
                l_1390[i] = &l_1347;
            for (i = 0; i < 4; i++)
                l_1454[i] = (-5L);
            (*l_1302) = &p_32;
            for (g_637 = (-10); (g_637 >= 23); g_637 = safe_add_func_uint8_t_u_u(g_637, 8))
            { /* block id: 517 */
                int32_t *l_1353 = &l_1332;
                int32_t *l_1354 = &l_1332;
                int32_t *l_1355 = &l_1332;
                int32_t l_1356[1][3][3] = {{{3L,3L,3L},{1L,1L,1L},{3L,3L,3L}}};
                int32_t *l_1357 = &g_1060;
                int32_t *l_1358 = &g_1060;
                int32_t *l_1359 = &l_1270;
                int32_t *l_1360 = &l_1356[0][2][1];
                int32_t *l_1361 = &g_1060;
                int32_t *l_1362 = &l_1269;
                int32_t *l_1363 = &l_1356[0][2][1];
                int32_t *l_1364 = &l_1264;
                int32_t *l_1365 = &l_1356[0][2][1];
                int32_t *l_1366[6][1][6] = {{{&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1]}},{{&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1]}},{{&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1]}},{{&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1]}},{{&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1]}},{{&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1],&l_1356[0][2][1]}}};
                uint64_t *l_1383 = &g_571[0];
                int i, j, k;
                ++l_1371;
                for (l_1228 = 0; (l_1228 > 8); l_1228 = safe_add_func_int64_t_s_s(l_1228, 9))
                { /* block id: 521 */
                    uint16_t ***l_1378 = &g_368[2];
                    int32_t ***l_1389 = &l_1302;
                    /*bef_stmt:194504*/
/*bef_stmt:194504*/
/*bef_stmt:194504*/
/*bef_stmt:194504*/
/*bef_stmt:194504*/
/*bef_stmt:194504*/
/*bef_stmt:194504*/
/*bef_stmt:194504*/
(*l_1363) = (safe_mod_func_uint64_t_u_u((l_1378 != (void*)0), ((((+((Tag333(/*int32_t:212785:212785:194504:e*/p_32) && ((*l_1231) = 0L)) <= ((((safe_div_func_int64_t_s_s((~(((*g_314) = l_1383) == (l_1384[6] = &l_1371))), (safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(((((*l_1389) = &g_71) != &g_71) > (((*l_1229) = ((Tag334(/*const int8_t:0:0:194504:e*/*g_415)) , Tag335(/*int32_t:212785:212785:194504:e*/p_30))) || Tag336(/*int32_t:212785:212785:194504:e*/p_32))), 0x07L)) != Tag337(/*int32_t:205316:212630:194504:e*/l_1370)), Tag338(/*int32_t:212785:212785:194504:e*/p_30))))) && Tag339(/*int32_t:212785:212785:194504:e*/p_32)) , l_1390[2]) == (void*)0))) < (Tag340(/*int32_t:0:0:194504:e*/*g_71))) | 1UL) , l_1228)));
/*aft_stmt:194504*/
/*aft_stmt:194504*/
/*aft_stmt:194504*/
/*aft_stmt:194504*/
/*aft_stmt:194504*/
/*aft_stmt:194504*/
/*aft_stmt:194504*/
/*aft_stmt:194504*/
                }
            }
            if ((((*l_1392) = l_1391) == &g_70))
            { /* block id: 531 */
                for (g_394 = 0; g_394 < 8; g_394 += 1)
                {
                    l_1384[g_394] = &l_1371;
                }
                /*bef_stmt:194760*/
(*g_70) = func_38(((void*)0 != l_1347), (Tag341(/*int32_t:0:0:194760:e*/*g_71)));
/*aft_stmt:194760*/
            }
            else
            { /* block id: 534 */
                uint64_t l_1414 = 0x11BA14460E3786EALL;
                int32_t l_1430 = 0x6D2B2C6DL;
                int32_t l_1446 = 0x19ECE6A8L;
                int32_t l_1449[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int32_t **l_1470 = &g_71;
                int8_t l_1482[4][8] = {{0L,(-7L),0xBAL,0L,5L,0L,0xBAL,(-7L)},{(-7L),(-1L),0xBAL,(-6L),(-1L),0xBAL,5L,0xBAL},{0x6EL,5L,0xFCL,(-7L),(-7L),0xFCL,5L,0x6EL},{7L,(-7L),0xBAL,0xBAL,9L,7L,0xBAL,(-6L)}};
                int i, j;
                if ((&p_31 != (void*)0))
                { /* block id: 535 */
                    int32_t *l_1393 = &g_69[3][2][0];
                    int32_t *l_1394 = &g_69[3][2][0];
                    int32_t *l_1395 = &g_1060;
                    int32_t *l_1396 = &l_1332;
                    int32_t *l_1397 = &l_1332;
                    int32_t *l_1398 = &l_1369;
                    int32_t *l_1399[6][9] = {{&l_1331,(void*)0,&l_1332,(void*)0,&l_1331,&l_1264,&l_1264,&l_1331,(void*)0},{&l_1331,&l_1264,&l_1331,&g_1060,&l_1270,&l_1270,&g_1060,&l_1331,&l_1264},{(void*)0,(void*)0,&l_1264,&l_1332,&l_1332,&l_1264,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1370,&g_1060,&g_1060,&l_1370,(void*)0,&l_1270,(void*)0,&l_1370},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1331,(void*)0,(void*)0,(void*)0},{&l_1264,&l_1264,&l_1270,&l_1370,&l_1370,&l_1370,&l_1270,&l_1264,&l_1264}};
                    int8_t l_1400[5];
                    uint16_t l_1401 = 65535UL;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1400[i] = 0x0FL;
                    ++l_1401;
                    /*bef_stmt:196949*/
(*l_1393) &= (Tag342(/*int32_t:0:0:196949:e*/*g_71));
/*aft_stmt:196949*/
                    for (l_1269 = 0; (l_1269 >= (-14)); l_1269 = safe_sub_func_uint64_t_u_u(l_1269, 3))
                    { /* block id: 540 */
                        return l_1406;
                    }
                    /*bef_stmt:197084*/
(*l_1394) = (Tag343(/*int32_t:0:0:197084:e*/*g_71));
/*aft_stmt:197084*/
                }
                else
                { /* block id: 544 */
                    uint16_t l_1407 = 0x178DL;
                    int32_t l_1437 = 0x7F894439L;
                    int32_t l_1438 = 0x2C99B9F7L;
                    int32_t l_1439[7][10][3] = {{{0x5A3C39EFL,0L,0x6251D45AL},{0x40E21B72L,9L,(-1L)},{(-10L),1L,0x7738BA04L},{(-1L),(-1L),(-3L)},{0x67C2E68CL,(-7L),1L},{1L,0x8A0601ADL,8L},{1L,0x67C2E68CL,(-1L)},{1L,0x40E21B72L,0x67C2E68CL},{1L,9L,9L},{0x67C2E68CL,0xBC31CD57L,0xC4B46EE5L}},{{(-1L),0L,0x53FFB60BL},{(-10L),0x67C2E68CL,1L},{0x40E21B72L,0x75A0A89BL,0x7738BA04L},{0x5A3C39EFL,0x67C2E68CL,9L},{9L,0L,(-10L)},{1L,0xBC31CD57L,0x5A3C39EFL},{(-10L),9L,0xC4B46EE5L},{0x75A0A89BL,0x40E21B72L,(-3L)},{0x6251D45AL,1L,0x6251D45AL},{0x5A3C39EFL,0xCACFC76EL,0L}},{{0L,0xD7382949L,0L},{(-7L),0x5A3C39EFL,0L},{9L,(-7L),(-1L)},{0xF7D49F2CL,(-1L),0x53FFB60BL},{8L,1L,(-7L)},{0xF7D49F2CL,0xD7382949L,(-10L)},{9L,8L,0L},{(-7L),0L,(-1L)},{0L,0x5A3C39EFL,1L},{0x5A3C39EFL,0x75A0A89BL,0x8A0601ADL}},{{0xF7D49F2CL,0x75A0A89BL,1L},{0x7738BA04L,0x5A3C39EFL,(-7L)},{0L,0L,0x6251D45AL},{(-1L),8L,0x53FFB60BL},{(-1L),0xD7382949L,0x8A0601ADL},{0L,1L,0xF7D49F2CL},{9L,(-1L),0x8A0601ADL},{0L,(-7L),0x53FFB60BL},{0xC4B46EE5L,0x5A3C39EFL,0x6251D45AL},{1L,0xD7382949L,(-7L)}},{{(-1L),0xCACFC76EL,1L},{(-7L),1L,0x8A0601ADL},{(-7L),9L,1L},{(-1L),(-1L),(-1L)},{1L,0x75A0A89BL,0L},{0xC4B46EE5L,1L,(-10L)},{0L,1L,(-7L)},{9L,0x7738BA04L,0x53FFB60BL},{0L,1L,(-1L)},{(-1L),1L,0L}},{{(-1L),0x75A0A89BL,0L},{0L,(-1L),0L},{0x7738BA04L,9L,0x6251D45AL},{0xF7D49F2CL,1L,0x6251D45AL},{0x5A3C39EFL,0xCACFC76EL,0L},{0L,0xD7382949L,0L},{(-7L),0x5A3C39EFL,0L},{9L,(-7L),(-1L)},{0xF7D49F2CL,(-1L),0x53FFB60BL},{8L,1L,(-7L)}},{{0xF7D49F2CL,0xD7382949L,(-10L)},{9L,8L,0L},{(-7L),0L,(-1L)},{0L,0x5A3C39EFL,1L},{0x5A3C39EFL,0x75A0A89BL,0x8A0601ADL},{0xF7D49F2CL,0x75A0A89BL,1L},{0x7738BA04L,0x5A3C39EFL,(-7L)},{0L,0L,0x6251D45AL},{(-1L),8L,0x53FFB60BL},{(-1L),0xD7382949L,0x8A0601ADL}}};
                    int64_t l_1442 = 0xA454883A2DF48EF8LL;
                    uint64_t l_1458 = 3UL;
                    int i, j, k;
                    l_1407--;
                    /*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
/*bef_stmt:203592*/
if (((**l_1302) = (p_30 = (l_1430 = (safe_mul_func_uint16_t_u_u((((Tag344(/*int32_t:212785:212785:203592:e*/p_32) != (safe_lshift_func_uint8_t_u_s(0x4EL, 7))) == (Tag345(/*int32_t:212785:212785:203592:e*/p_32) || (Tag346(/*uint64_t:205299:205316:203592:e*/l_1414) > (safe_div_func_int64_t_s_s(0x573A17C9BCB8885ALL, (~(safe_lshift_func_int16_t_s_s((((**l_1349) = (safe_mul_func_uint16_t_u_u((--(*l_1341)), ((((Tag347(/*uint64_t:205299:205316:203592:e*/l_1414) && (safe_sub_func_int8_t_s_s((Tag348(/*int8_t:0:0:203592:e*/*g_886)), ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((Tag349(/*uint64_t:0:0:203592:e*/*g_315)), ((Tag350(/*int32_t:212785:212785:203592:e*/p_32) , Tag351(/*uint16_t:203598:205299:203592:e*/l_1407)) , Tag352(/*int32_t:212785:212785:203592:e*/p_30)))), Tag353(/*int32_t:212785:212785:203592:e*/p_32))) , 0x3BL)))) , (void*)0) != (void*)0) ^ Tag354(/*uint16_t:203598:205299:203592:e*/l_1407))))) & Tag355(/*int32_t:212785:212785:203592:e*/p_32)), 14)))))))) >= Tag356(/*uint64_t:205299:205316:203592:e*/l_1414)), Tag357(/*int32_t:212785:212785:203592:e*/p_32)))))))
                    { /* block id: 551 */
                        int32_t *l_1431 = &l_1264;
                        int32_t *l_1432 = &g_69[3][2][0];
                        int32_t *l_1433 = &g_69[1][4][1];
                        int32_t *l_1434 = &l_1430;
                        int32_t *l_1435 = &l_1271;
                        int32_t *l_1436[2];
                        uint16_t ****l_1465 = &g_618;
                        uint16_t *****l_1466 = &l_1465;
                        int32_t *l_1469 = &g_705;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1436[i] = &l_1331;
                        ++l_1458;
                        /*bef_stmt:202856*/
/*bef_stmt:202856*/
/*bef_stmt:202856*/
/*bef_stmt:202856*/
/*bef_stmt:202856*/
/*bef_stmt:202856*/
/*bef_stmt:202856*/
(*l_1431) |= ((((((1UL | ((Tag358(/*int32_t:212630:212785:202856:e*/**l_1302)) | Tag359(/*int32_t:205299:205316:202856:e*/l_1430))) >= (safe_sub_func_uint16_t_u_u(((((*l_1469) = ((((255UL >= ((safe_lshift_func_int8_t_s_u(((((*l_1466) = l_1465) != (void*)0) <= 0x3C780182EEC12447LL), 2)) > (!(l_1468 != p_31)))) , (Tag360(/*int32_t:212630:212785:202856:e*/**l_1302))) || Tag361(/*int32_t:212785:212785:202856:e*/p_32)) >= Tag362(/*int32_t:212785:212785:202856:e*/p_32))) , (void*)0) != (void*)0), 1UL))) , 5L) , (Tag363(/*uint64_t:0:0:202856:e*/**g_314))) >= (-1L)) , (Tag364(/*int32_t:0:0:202856:e*/**g_70)));
/*aft_stmt:202856*/
/*aft_stmt:202856*/
/*aft_stmt:202856*/
/*aft_stmt:202856*/
/*aft_stmt:202856*/
/*aft_stmt:202856*/
/*aft_stmt:202856*/
                    }
                    else
                    { /* block id: 556 */
                        uint8_t *l_1471 = &g_89[6][3][2];
                        uint8_t *l_1472 = &g_637;
                        int32_t l_1473[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1473[i] = (-5L);
                        /*bef_stmt:203107*/
(*g_71) &= Tag365(/*int32_t:212785:212785:203107:e*/p_30);
/*aft_stmt:203107*/
                        /*bef_stmt:203543*/
/*bef_stmt:203543*/
/*bef_stmt:203543*/
/*bef_stmt:203543*/
/*bef_stmt:203543*/
/*bef_stmt:203543*/
/*bef_stmt:203543*/
/*bef_stmt:203543*/
/*bef_stmt:203543*/
(*g_71) = ((l_1470 != &g_71) >= (((((Tag366(/*int32_t:212785:212785:203543:e*/p_30) | ((*l_1231) &= (Tag367(/*int32_t:205299:205316:203543:e*/**l_1470)))) < (((*l_1213) &= (((((-1L) != (((-1L) || (Tag368(/*uint64_t:0:0:203543:e*/*g_315))) | (-1L))) <= ((((*l_1472) = ((*l_1471) = 250UL)) , 18446744073709551615UL) & 1UL)) , Tag369(/*int32_t:212785:212785:203543:e*/p_32)) || Tag370(/*int32_t:203582:203598:203543:e*/l_1473[2]))) != Tag371(/*int32_t:212785:212785:203543:e*/p_30))) & Tag372(/*int32_t:212785:212785:203543:e*/p_32)) | (Tag373(/*uint64_t:0:0:203543:e*/**g_314))) , Tag374(/*int32_t:212785:212785:203543:e*/p_32)));
/*aft_stmt:203543*/
/*aft_stmt:203543*/
/*aft_stmt:203543*/
/*aft_stmt:203543*/
/*aft_stmt:203543*/
/*aft_stmt:203543*/
/*aft_stmt:203543*/
/*aft_stmt:203543*/
/*aft_stmt:203543*/
                        (*g_70) = (*g_70);
                    }
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
/*aft_stmt:203592*/
                }
                /*bef_stmt:205293*/
/*bef_stmt:205293*/
/*bef_stmt:205293*/
/*bef_stmt:205293*/
/*bef_stmt:205293*/
/*bef_stmt:205293*/
/*bef_stmt:205293*/
/*bef_stmt:205293*/
if ((((((void*)0 == (*l_1206)) > Tag375(/*int32_t:212785:212785:205293:e*/p_30)) , (safe_sub_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(0x8662L, ((*l_1231) ^= (Tag376(/*const int16_t:0:0:205293:e*/**g_951))))) , ((*l_1230) |= 1UL)) | (safe_rshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(((0UL && (0xD2E1632A42AEABFBLL ^ (((Tag377(/*int32_t:205299:205316:205293:e*/**l_1470)) < Tag378(/*int32_t:212785:212785:205293:e*/p_30)) <= (Tag379(/*int8_t:0:0:205293:e*/**g_885))))) && Tag380(/*int8_t:205299:205316:205293:e*/l_1482[1][6])), 65535UL)) && (-8L)) < 0L), 2))), Tag381(/*int32_t:212785:212785:205293:e*/p_32)))) != Tag382(/*int32_t:212785:212785:205293:e*/p_32)))
                { /* block id: 568 */
                    int32_t *l_1485 = &l_1449[0];
                    int32_t *l_1486 = &l_1456[1][4][1];
                    int32_t *l_1487 = &l_1445;
                    int32_t *l_1488 = &l_1271;
                    int32_t *l_1489 = &l_1450[4];
                    int32_t *l_1490[5][7] = {{&l_1271,&l_1450[3],&g_69[3][1][3],&l_1449[0],&l_1264,&l_1444,&l_1430},{&l_1264,&l_1430,(void*)0,(void*)0,&l_1430,&l_1264,&l_1271},{&l_1450[3],(void*)0,&g_69[3][1][3],&l_1271,&l_1444,&l_1264,&l_1264},{&l_1449[0],&l_1444,&g_69[4][6][3],&l_1444,&l_1449[0],&l_1444,&l_1450[3]},{&l_1450[3],(void*)0,&l_1264,&l_1450[3],&l_1449[0],&l_1450[3],&l_1449[0]}};
                    int i, j;
                    /*bef_stmt:205223*/
/*bef_stmt:205223*/
/*bef_stmt:205223*/
(*g_70) = func_38((safe_mul_func_uint16_t_u_u((Tag383(/*int32_t:212630:212785:205223:e*/**l_1302)), ((Tag384(/*uint64_t:0:0:205223:e*/*g_315)) <= 0xBFC47ADA9DCA2FA8LL))), Tag385(/*int32_t:212785:212785:205223:e*/p_30));
/*aft_stmt:205223*/
/*aft_stmt:205223*/
/*aft_stmt:205223*/
                    (*l_1470) = (*g_70);
                    --l_1491;
                }
                else
                { /* block id: 572 */
                    return l_1468;
                }
/*aft_stmt:205293*/
/*aft_stmt:205293*/
/*aft_stmt:205293*/
/*aft_stmt:205293*/
/*aft_stmt:205293*/
/*aft_stmt:205293*/
/*aft_stmt:205293*/
/*aft_stmt:205293*/
            }
        }
        else
        { /* block id: 576 */
            const uint8_t l_1558 = 0x87L;
            int32_t **l_1581 = &g_71;
            for (l_1332 = (-8); (l_1332 == 8); ++l_1332)
            { /* block id: 579 */
                uint16_t ****l_1497[9];
                uint16_t *****l_1498 = &l_1497[3];
                int32_t l_1501 = 0x8E01C645L;
                uint8_t l_1525 = 0x92L;
                int32_t l_1607 = 0xFB3372F5L;
                int32_t l_1609 = 0x2F1C6CDBL;
                int32_t l_1610 = 0x1A4BB8DCL;
                int i;
                for (i = 0; i < 9; i++)
                    l_1497[i] = &g_618;
                (*l_1498) = l_1497[3];
                for (g_1037 = 0; (g_1037 <= 0); g_1037 += 1)
                { /* block id: 583 */
                    const uint32_t l_1522 = 5UL;
                    int32_t l_1526 = 1L;
                    int32_t *l_1559 = &g_69[5][4][1];
                    int16_t l_1584[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1584[i] = 0xE5CCL;
                    for (g_1262 = 0; (g_1262 >= 0); g_1262 -= 1)
                    { /* block id: 586 */
                        uint16_t ***l_1512 = &g_368[2];
                        uint16_t *****l_1521 = &l_1497[3];
                        uint16_t l_1531 = 65530UL;
                        int32_t *l_1536 = &l_1456[1][4][1];
                        int i, j, k;
                        /*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
/*bef_stmt:207312*/
g_69[(g_1037 + 4)][(g_1037 + 5)][g_1037] = (safe_mod_func_int16_t_s_s(((l_1501 = g_69[(g_1262 + 1)][g_1262][(g_1037 + 1)]) , ((safe_add_func_uint64_t_u_u(l_1451[(g_1037 + 1)][(g_1037 + 5)][(g_1262 + 2)], (safe_mul_func_uint8_t_u_u((((**g_314) = (safe_mul_func_uint8_t_u_u(l_1451[(g_1262 + 5)][g_1037][g_1037], (safe_mod_func_uint16_t_u_u(((*g_369) = ((safe_lshift_func_int16_t_s_u((l_1512 != (void*)0), (safe_lshift_func_uint16_t_u_s(((!(safe_rshift_func_uint8_t_u_u(255UL, (((((safe_unary_minus_func_int32_t_s(l_1451[(g_1037 + 4)][(g_1262 + 5)][g_1037])) & ((Tag386(/*const int16_t:0:0:207312:e*/*g_952)) | (safe_lshift_func_uint8_t_u_s((((void*)0 == l_1521) ^ Tag387(/*int32_t:212785:212785:207312:e*/p_32)), 5)))) , Tag388(/*int32_t:212785:212785:207312:e*/p_32)) , Tag389(/*const uint32_t:210857:212533:207312:e*/l_1522)) ^ (Tag390(/*uint64_t:0:0:207312:e*/**g_314)))))) || 1L), (Tag391(/*const int16_t:0:0:207312:e*/**g_951)))))) && Tag392(/*int32_t:212785:212785:207312:e*/p_30))), Tag393(/*int32_t:212785:212785:207312:e*/p_32)))))) , Tag394(/*int32_t:212785:212785:207312:e*/p_30)), Tag395(/*int32_t:212785:212785:207312:e*/p_32))))) ^ Tag396(/*int32_t:212785:212785:207312:e*/p_32))), 1L));
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
/*aft_stmt:207312*/
                        /*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
/*bef_stmt:207971*/
l_1447 &= ((0UL < ((safe_add_func_int16_t_s_s(((l_1451[(g_1037 + 1)][(g_1037 + 5)][(g_1262 + 2)] | ((p_30 = ((*l_1536) ^= (((Tag397(/*uint8_t:212533:212618:207971:e*/l_1525) & Tag398(/*int32_t:210857:212533:207971:e*/l_1526)) > (Tag399(/*int32_t:210857:212533:207971:e*/l_1526) < ((((((Tag400(/*int32_t:212630:212785:207971:e*/**l_1302)) || (safe_sub_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((Tag401(/*uint16_t:207977:210857:207971:e*/l_1531) >= (safe_lshift_func_uint8_t_u_u(Tag402(/*int8_t:212785:212785:207971:e*/l_1534), (Tag403(/*int32_t:210857:212533:207971:e*/l_1526) <= 0xC663L)))), Tag404(/*int64_t:212785:212785:207971:e*/l_1535))) >= Tag405(/*int32_t:212785:212785:207971:e*/p_32)), (Tag406(/*int32_t:0:0:207971:e*/**g_70))))) , Tag407(/*int32_t:212785:212785:207971:e*/p_30)) & Tag408(/*int32_t:212785:212785:207971:e*/p_30)) && 0xA9421F1AL) & l_1451[(g_1037 + 4)][(g_1262 + 5)][g_1037]))) <= 255UL))) , (Tag409(/*const int8_t:0:0:207971:e*/*g_415)))) || 0x004F3E37B5EA4D1ELL), Tag410(/*const uint32_t:210857:212533:207971:e*/l_1522))) < Tag411(/*int32_t:212533:212618:207971:e*/l_1501))) || Tag412(/*int32_t:212785:212785:207971:e*/p_30));
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
/*aft_stmt:207971*/
                    }
                    for (g_37 = 0; (g_37 <= 4); g_37 += 1)
                    { /* block id: 597 */
                        uint8_t *l_1543 = &l_1525;
                        int64_t ***l_1566 = &g_846[0];
                        int64_t *l_1570 = (void*)0;
                        int64_t ** const l_1569 = &l_1570;
                        int64_t ** const *l_1568 = &l_1569;
                        int64_t ** const **l_1567 = &l_1568;
                        int32_t ***l_1582[10][3][5] = {{{&g_70,&g_70,&l_1302,&l_1581,&g_70},{&g_70,&l_1581,&l_1581,&l_1302,&l_1302},{&l_1302,&l_1581,(void*)0,&g_70,(void*)0}},{{(void*)0,(void*)0,&l_1302,&l_1302,&l_1581},{&l_1581,&g_70,&g_70,&l_1581,&l_1302},{&l_1581,&l_1302,&g_70,&l_1302,&l_1581}},{{(void*)0,&g_70,&g_70,&g_70,&l_1302},{&l_1302,(void*)0,&l_1581,&l_1581,&l_1581},{&g_70,&l_1581,&g_70,&g_70,&l_1302}},{{(void*)0,&l_1581,(void*)0,&g_70,&l_1581},{&l_1302,&g_70,&g_70,&l_1302,&l_1302},{&l_1581,&g_70,(void*)0,&l_1581,&l_1581}},{{(void*)0,&g_70,&g_70,&l_1302,(void*)0},{&l_1302,&l_1581,&l_1581,&l_1302,&l_1302},{(void*)0,&l_1302,&g_70,&l_1302,&g_70}},{{&l_1581,&g_70,&g_70,(void*)0,&g_70},{&l_1302,&g_70,&g_70,&l_1302,&g_70},{(void*)0,&g_70,&l_1302,&l_1302,&l_1581}},{{&g_70,&l_1302,(void*)0,&l_1302,&g_70},{&l_1302,&g_70,&l_1581,&l_1581,(void*)0},{(void*)0,&g_70,&l_1302,&l_1302,&g_70}},{{&l_1581,&g_70,&l_1581,&g_70,(void*)0},{&l_1581,&l_1302,&l_1302,&g_70,&g_70},{(void*)0,&l_1581,&l_1581,&l_1581,&l_1581}},{{&l_1302,&g_70,&l_1302,&g_70,&g_70},{&g_70,&g_70,&l_1581,&l_1302,&g_70},{&g_70,&g_70,&l_1302,&l_1581,&g_70}},{{&g_70,&l_1581,&l_1581,&l_1302,&l_1302},{&l_1302,&l_1581,(void*)0,&g_70,(void*)0},{(void*)0,(void*)0,&l_1302,&l_1302,&l_1581}}};
                        int i, j, k;
                    }
                }
                for (g_94 = 0; (g_94 <= 57); g_94++)
                { /* block id: 614 */
                    int32_t l_1604 = (-10L);
                    int32_t l_1605 = 0x88F95294L;
                    int32_t l_1606 = 0xEE9D6051L;
                    int32_t ***l_1623[8] = {(void*)0,(void*)0,&g_70,(void*)0,(void*)0,&g_70,(void*)0,(void*)0};
                    int i;
                    for (g_239 = (-5); (g_239 == 2); ++g_239)
                    { /* block id: 617 */
                        int32_t *l_1593 = (void*)0;
                        int32_t *l_1594 = &l_1269;
                        int32_t *l_1595 = &l_1453;
                        int32_t *l_1596 = &l_1444;
                        int32_t *l_1597 = &l_1456[1][4][1];
                        int32_t *l_1598 = &g_1060;
                        int32_t *l_1599 = (void*)0;
                        int32_t *l_1600[10] = {&g_69[3][2][0],(void*)0,&g_69[3][2][0],&g_69[3][2][0],(void*)0,&g_69[3][2][0],&g_69[3][2][0],(void*)0,&g_69[3][2][0],&g_69[3][2][0]};
                        int32_t l_1608 = 6L;
                        int i;
                        l_1601--;
                        /*bef_stmt:211936*/
if (Tag413(/*int32_t:212785:212785:211936:e*/p_32))
                            break;
/*aft_stmt:211936*/
                        l_1611++;
                        (*g_70) = (*l_1581);
                    }
                    /*bef_stmt:212013*/
if (Tag414(/*int32_t:212785:212785:212013:e*/p_30))
                        break;
/*aft_stmt:212013*/
                    /*bef_stmt:212459*/
/*bef_stmt:212459*/
/*bef_stmt:212459*/
/*bef_stmt:212459*/
/*bef_stmt:212459*/
/*bef_stmt:212459*/
/*bef_stmt:212459*/
(**l_1581) = (((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((Tag415(/*uint8_t:212533:212618:212459:e*/l_1525) , (0xAEADD054L <= (p_32 |= ((((safe_lshift_func_uint8_t_u_u((0x8AL || (safe_mul_func_int16_t_s_s((((*g_1113) = (*g_1113)) != (void*)0), ((0UL || (~0x4180L)) <= ((&g_71 == (g_70 = &g_71)) ^ (Tag416(/*uint16_t:0:0:212459:e*/*g_369))))))), 3)) < 0xF1L) || 0x1554L) , (Tag417(/*int32_t:0:0:212459:e*/*g_71)))))), Tag418(/*int32_t:212533:212618:212459:e*/l_1609))), Tag419(/*int8_t:212785:212785:212459:e*/l_1534))) , (Tag420(/*int32_t:212630:212785:212459:e*/**l_1302))) != Tag421(/*int32_t:212785:212785:212459:e*/p_30));
/*aft_stmt:212459*/
/*aft_stmt:212459*/
/*aft_stmt:212459*/
/*aft_stmt:212459*/
/*aft_stmt:212459*/
/*aft_stmt:212459*/
/*aft_stmt:212459*/
                    /*bef_stmt:212487*/
if ((Tag422(/*int32_t:0:0:212487:e*/**g_1583)))
                        continue;
/*aft_stmt:212487*/
                }
                (*g_71) &= 0x52EBF18BL;
            }
            for (g_208 = 0; (g_208 <= 5); ++g_208)
            { /* block id: 634 */
                return p_31;
            }
        }
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
/*aft_stmt:212624*/
    }
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
/*aft_stmt:212658*/
    /*bef_stmt:212711*/
g_69[3][2][0] &= /*TAG423:STA*/((int16_t)(realsmith_proxy_FoRpj((char)(l_1626)+(3), (unsigned long)(l_1626)+(78))+(int)(l_1626)-(80))+l_1626)/*TAG423:END:l_1626*/;
/*aft_stmt:212711*/
    /*bef_stmt:212772*/
p_30 = (safe_unary_minus_func_int16_t_s(((*l_1231) = /*TAG424:STA*/((uint32_t)(realsmith_proxy_xqBCa((char)(l_1629)+(-140))+(int)(l_1629)-(1401734244))+l_1629)/*TAG424:END:l_1629*/)));
/*aft_stmt:212772*/
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : g_70 g_1060 g_71
 * writes: g_71 g_1060
 */
static uint32_t * func_38(uint32_t  p_39, int32_t  p_40)
{ /* block id: 454 */
    int32_t *l_1186 = &g_1060;
    uint32_t *l_1189[4][6] = {{&g_1128,(void*)0,&g_1037,(void*)0,&g_1128,&g_1128},{&g_1031,(void*)0,(void*)0,&g_1031,&g_1128,&g_1031},{&g_1031,&g_1128,&g_1031,(void*)0,(void*)0,&g_1031},{&g_1128,&g_1128,(void*)0,&g_1037,(void*)0,(void*)0}};
    int i, j;
    (*g_70) = l_1186;
    /*bef_stmt:213620*/
/*bef_stmt:213620*/
/*bef_stmt:213620*/
(*g_71) = ((safe_sub_func_uint32_t_u_u(Tag425(/*uint32_t:213693:213693:213620:e*/p_39), (Tag426(/*int32_t:213693:213693:213620:e*/*l_1186)))) == Tag427(/*int32_t:213693:213693:213620:e*/p_40));
/*aft_stmt:213620*/
/*aft_stmt:213620*/
/*aft_stmt:213620*/
    (*l_1186) = 0L;
    return l_1189[0][4];
}


/* ------------------------------------------ */
/* 
 * reads : g_315 g_92 g_1052 g_131 g_89 g_1060 g_885 g_886 g_208 g_394 g_953 g_69 g_300 g_1113 g_70 g_1128 g_1037 g_101 g_951 g_952 g_239 g_369 g_135 g_314 g_571
 * writes: g_92 g_394 g_639 g_1037 g_69 g_101 g_71 g_1128 g_70 g_208 g_953
 */
static int8_t  func_41(uint64_t  p_42, uint32_t * p_43, uint32_t  p_44)
{ /* block id: 418 */
    int8_t * const l_1049[5][4][8] = {{{&g_665,&g_694[1],&g_457,&g_694[1],&g_665,&g_208,&g_694[1],&g_457},{&g_208,(void*)0,&g_457,(void*)0,&g_457,(void*)0,&g_457,(void*)0},{&g_665,&g_665,&g_665,&g_694[1],&g_208,&g_694[1],&g_457,&g_694[0]},{(void*)0,&g_694[1],(void*)0,(void*)0,&g_457,&g_208,&g_208,&g_457}},{{(void*)0,&g_665,&g_694[1],&g_694[1],&g_208,&g_457,&g_694[1],(void*)0},{&g_665,&g_457,&g_694[0],&g_208,&g_457,&g_457,&g_694[0],&g_208},{&g_208,&g_665,&g_457,&g_694[1],&g_665,&g_694[1],&g_457,(void*)0},{&g_665,&g_694[1],&g_457,(void*)0,&g_694[1],(void*)0,(void*)0,&g_665}},{{&g_694[1],&g_694[1],&g_694[1],&g_208,&g_208,&g_694[1],&g_694[1],&g_694[1]},{&g_694[0],(void*)0,(void*)0,(void*)0,&g_694[1],&g_665,&g_694[1],&g_457},{&g_208,(void*)0,(void*)0,&g_208,(void*)0,&g_665,(void*)0,&g_694[1]},{&g_665,(void*)0,(void*)0,&g_694[1],&g_694[1],&g_694[1],&g_694[1],&g_694[1]}},{{&g_694[1],&g_694[1],&g_694[1],(void*)0,&g_457,(void*)0,&g_694[1],&g_457},{(void*)0,&g_694[1],&g_457,&g_694[0],&g_694[1],&g_694[1],&g_457,&g_208},{&g_694[1],&g_665,&g_208,&g_694[1],&g_665,&g_457,&g_665,&g_457},{&g_457,&g_457,&g_208,&g_457,&g_457,&g_457,&g_694[1],&g_694[0]}},{{&g_665,&g_665,&g_694[1],(void*)0,&g_457,&g_208,&g_457,&g_457},{&g_694[1],&g_694[1],&g_694[1],&g_665,&g_694[0],&g_694[1],&g_694[1],&g_694[1]},{&g_457,&g_665,&g_208,&g_694[0],&g_694[1],(void*)0,&g_665,&g_208},{&g_694[1],(void*)0,&g_208,&g_457,&g_457,&g_208,&g_457,(void*)0}}};
    int32_t l_1056 = 0x26C1F9FAL;
    int8_t * const *l_1059 = &l_1049[0][0][1];
    int8_t * const **l_1058 = &l_1059;
    int8_t * const ***l_1057 = &l_1058;
    int32_t l_1079 = 0xEBF5E1C0L;
    int32_t l_1082 = (-1L);
    int16_t l_1117[5][9] = {{0xC2F9L,(-9L),(-9L),0xC2F9L,0x7576L,5L,0xC2F9L,5L,0x7576L},{0xC2F9L,(-9L),(-9L),0xC2F9L,0x7576L,5L,0xC2F9L,5L,0x7576L},{0xC2F9L,(-9L),(-9L),0xC2F9L,0x7576L,5L,0xC2F9L,5L,0x7576L},{0xC2F9L,(-9L),0x08E1L,(-9L),3L,0x3B4AL,(-9L),0x3B4AL,3L},{(-9L),0x08E1L,0x08E1L,(-9L),3L,0x3B4AL,(-9L),0x3B4AL,3L}};
    int16_t *l_1156 = &g_143;
    int16_t **l_1155[10][6][4] = {{{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,(void*)0,&l_1156},{(void*)0,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,(void*)0},{&l_1156,&l_1156,&l_1156,&l_1156}},{{&l_1156,&l_1156,&l_1156,(void*)0},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,(void*)0,&l_1156,(void*)0},{&l_1156,&l_1156,&l_1156,&l_1156}},{{&l_1156,&l_1156,&l_1156,(void*)0},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,(void*)0,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156}},{{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,(void*)0,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156}},{{&l_1156,(void*)0,&l_1156,&l_1156},{(void*)0,&l_1156,(void*)0,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,(void*)0,&l_1156},{&l_1156,(void*)0,&l_1156,(void*)0},{&l_1156,&l_1156,(void*)0,&l_1156}},{{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{(void*)0,&l_1156,(void*)0,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,(void*)0,&l_1156,&l_1156},{&l_1156,&l_1156,(void*)0,(void*)0}},{{&l_1156,&l_1156,&l_1156,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,(void*)0,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156}},{{(void*)0,&l_1156,&l_1156,(void*)0},{&l_1156,(void*)0,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,(void*)0,&l_1156,&l_1156},{(void*)0,&l_1156,&l_1156,(void*)0},{(void*)0,&l_1156,&l_1156,(void*)0}},{{&l_1156,&l_1156,&l_1156,(void*)0},{(void*)0,&l_1156,&l_1156,&l_1156},{(void*)0,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,(void*)0,(void*)0,&l_1156},{&l_1156,&l_1156,(void*)0,&l_1156}},{{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156},{&l_1156,&l_1156,(void*)0,&l_1156},{&l_1156,&l_1156,&l_1156,&l_1156}}};
    int i, j, k;
    /*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
/*bef_stmt:233401*/
if (((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((/*TAG428:STA*/((uint32_t)(realsmith_proxy_PrtZZ((int)(p_44)+(1299687368))+(int)(p_44)-(-1299687286))+p_44)/*TAG428:END:p_44*/ | (safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s(0L, /*TAG429:STA*/((uint64_t)(realsmith_proxy_4TkvY((int)(p_42)+(-64), (int)(p_42)+(-100), (int)(p_42)+(84))+(int)(p_42)-(2))+p_42)/*TAG429:END:p_42*/)), (~((*g_315)++))))), ((((void*)0 != l_1049[0][0][1]) > (safe_mul_func_int8_t_s_s((((((((g_1052 != (((/*TAG430:STA*/((uint16_t)(realsmith_yyNAr((int)(g_131)+(-59734), (int)(g_131)+(-59718), (int)(g_131)+(-59727))+(int)(g_131)-(59746))+g_131)/*TAG430:END:g_131*/ , (((/*TAG431:STA*/((uint64_t)(realsmith_proxy_w0oHO((char)(p_42)+(80), (char)(p_42)+(-97))+(int)(p_42)-(1))+p_42)/*TAG431:END:p_42*/ <= (safe_sub_func_uint8_t_u_u(Tag432(/*int32_t:233432:233432:233401:e*/l_1056), /*TAG433:STA*/((uint64_t)(realsmith_irYXV((int)(g_131)+(-59688))+(int)(p_42)+(int)(*g_369)+(int)(g_131)+(int)(**g_1583)+(int)(*g_71)-(1977182601))+p_42)/*TAG433:END:p_42*/))) > 0xAA0EL) <= (-1L))) > /*TAG434:STA*/((uint8_t)(realsmith_w7B22()+(int)(g_89[7][3][1])-(238))+g_89[7][3][1])/*TAG434:END:g_89[7][3][1]*/) , l_1057)) ^ 0L) >= /*TAG435:STA*/((int32_t)(realsmith_proxy_Phzs6((char)(g_1060)+(84), (char)(g_1060)+(13), (char)(g_1060)+(-19), (char)(g_1060)+(-1), (unsigned long)(g_1060)+(33))+(unsigned long)(g_1060)-(2))+g_1060)/*TAG435:END:g_1060*/) ^ 1UL) <= 18446744073709551615UL) , /*TAG436:STA*/((uint64_t)(realsmith_KBzdU((int)(p_42)+(39))+(int)(p_42)-(1))+p_42)/*TAG436:END:p_42*/) & Tag437(/*int32_t:233432:233432:233401:e*/l_1056)), Tag438(/*int32_t:233432:233432:233401:e*/l_1056)))) >= /*TAG439:STA*/((uint64_t)(realsmith_proxy_aZGF3((int)(**g_1583)+(-988528586), (unsigned char)(**g_1583)+(-114), (int)(g_131)+(-59692), (unsigned char)(g_89[7][3][1])+(-218))+(int)(p_42)+(int)(g_89[7][3][1])+(int)(**g_1583)+(int)(g_131)+(int)(g_1060)-(988588659))+p_42)/*TAG439:END:p_42*/))), Tag440(/*int32_t:233432:233432:233401:e*/l_1056))) | (Tag441(/*int8_t:0:0:233401:e*/**g_885))))
    { /* block id: 420 */
        uint32_t l_1085 = 4294967290UL;
        int32_t l_1112 = 0x121C211CL;
        int32_t l_1116 = 0xE6112001L;
        int32_t l_1126 = 0xD84672E1L;
        int32_t l_1127 = 0xF33A3E34L;
        uint32_t **l_1133 = &g_36[1][1][4];
        int32_t **l_1141 = &g_71;
        int64_t *l_1150 = &g_101;
        int64_t *l_1157 = &g_953;
        uint16_t *l_1158 = (void*)0;
        int16_t **l_1159 = &l_1156;
        int32_t *l_1160 = (void*)0;
        int32_t *l_1161[9][9][3] = {{{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0}},{{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0}},{{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0}},{{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0}},{{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0}},{{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0}},{{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0}},{{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0}},{{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,(void*)0,(void*)0},{(void*)0,&l_1082,(void*)0},{&l_1126,&l_1126,(void*)0}}};
        int32_t l_1162 = 0x4093775CL;
        int i, j, k;
        /*bef_stmt:228563*/
l_1056 = /*TAG442:STA*/((uint64_t)(realsmith_proxy_CjNN0((int)(p_44)+(1299687318))+(char)(p_42)+(char)(g_1060)+(char)(g_89[7][3][1])+((char)(p_44)-(111))+(char)(**g_1583)-(110))+p_42)/*TAG442:END:p_42*/;
/*aft_stmt:228563*/
        for (g_394 = (-1); (g_394 <= 2); g_394 = safe_add_func_int16_t_s_s(g_394, 8))
        { /* block id: 424 */
            int32_t l_1083 = 0x23DAB66DL;
            int32_t l_1109 = (-5L);
            int32_t l_1118 = 0x49EDCAF7L;
            int32_t *l_1119 = (void*)0;
            int32_t *l_1120 = &l_1116;
            int32_t *l_1121 = &l_1056;
            int32_t *l_1122 = &l_1112;
            int32_t *l_1123 = (void*)0;
            int32_t *l_1124 = &g_69[3][0][2];
            int32_t *l_1125[1][2];
            int32_t ***l_1134 = &g_70;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1125[i][j] = &l_1056;
            }
            for (g_639 = 0; (g_639 < 28); g_639++)
            { /* block id: 427 */
                int32_t *l_1065 = &g_1060;
                int32_t *l_1066 = &g_69[3][2][0];
                int32_t *l_1067 = &g_69[3][2][0];
                int32_t *l_1068 = &g_69[3][2][0];
                int32_t *l_1069 = &l_1056;
                int32_t *l_1070 = &g_69[4][4][2];
                int32_t *l_1071 = &g_69[3][2][0];
                int32_t *l_1072 = &g_1060;
                int32_t *l_1073 = &g_69[3][2][0];
                int32_t *l_1074 = &g_69[3][2][0];
                int32_t *l_1075 = &g_1060;
                int32_t *l_1076 = &g_69[3][2][0];
                int32_t *l_1077 = &g_69[3][2][0];
                int32_t *l_1078 = (void*)0;
                int32_t *l_1080 = &g_69[3][3][1];
                int32_t *l_1081[7] = {&g_1060,&g_69[3][2][0],&g_69[3][2][0],&g_1060,&g_69[3][2][0],&g_69[3][2][0],&g_1060};
                int8_t l_1084 = 0x7DL;
                int16_t l_1108 = 0L;
                int64_t *l_1110 = (void*)0;
                int64_t *l_1111 = &g_101;
                uint8_t **l_1115 = &g_1114[1][2][0];
                int i;
                l_1085++;
                /*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
/*bef_stmt:231214*/
l_1118 ^= ((safe_rshift_func_uint8_t_u_s(Tag443(/*uint32_t:233432:233432:231214:e*/p_44), (((l_1116 ^= (safe_lshift_func_uint8_t_u_s(((((l_1112 = (safe_lshift_func_uint8_t_u_s((+(safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u((Tag444(/*uint64_t:233432:233432:231214:e*/p_42) != (safe_lshift_func_uint16_t_u_u(((((0xC9L <= Tag445(/*int64_t:0:0:231214:e*/g_953)) | ((4294967295UL != (Tag446(/*int32_t:231220:231611:231214:e*/*l_1065))) | (Tag447(/*int8_t:0:0:231214:e*/*g_886)))) <= (((*l_1111) = (l_1109 = ((safe_lshift_func_int8_t_s_u(((*l_1080) = ((((*p_43) = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((Tag448(/*int16_t:231220:231611:231214:e*/l_1108) | (Tag449(/*uint64_t:233432:233432:231214:e*/p_42) || Tag450(/*uint32_t:233432:233432:231214:e*/p_44))), 2)), (Tag451(/*int32_t:231220:231611:231214:e*/*l_1074)))) , Tag452(/*uint64_t:233432:233432:231214:e*/p_42)), 7))) | (Tag453(/*int32_t:231220:231611:231214:e*/*l_1066))) ^ Tag454(/*uint64_t:233432:233432:231214:e*/p_42))), Tag455(/*uint64_t:0:0:231214:e*/g_300))) >= Tag456(/*uint32_t:233432:233432:231214:e*/p_44)))) != 1UL)) ^ Tag457(/*uint32_t:232344:233432:231214:e*/l_1085)), 12))), 0L))))), Tag458(/*int32_t:233432:233432:231214:e*/l_1082)))) != 0x148A7F5CL) , g_1113) != l_1115), Tag459(/*int32_t:233432:233432:231214:e*/l_1079)))) < Tag460(/*int32_t:231611:232344:231214:e*/l_1083)) , 0L))) , Tag461(/*int16_t:233432:233432:231214:e*/l_1117[1][2]));
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
/*aft_stmt:231214*/
            }
            (*g_70) = p_43;
            --g_1128;
            /*bef_stmt:231605*/
/*bef_stmt:231605*/
/*bef_stmt:231605*/
/*bef_stmt:231605*/
/*bef_stmt:231605*/
/*bef_stmt:231605*/
/*bef_stmt:231605*/
l_1056 ^= (safe_sub_func_uint16_t_u_u(((Tag462(/*int32_t:231611:232344:231605:e*/*l_1124)) != ((&p_43 == l_1133) | (Tag463(/*int32_t:231611:232344:231605:e*/*l_1122)))), (((*l_1134) = &g_71) == ((((((safe_sub_func_uint32_t_u_u(0UL, (Tag464(/*uint32_t:233432:233432:231605:e*/*p_43)))) , (safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(0x34AEL, Tag465(/*uint64_t:233432:233432:231605:e*/p_42))), Tag466(/*uint32_t:233432:233432:231605:e*/p_44)))) , 0xBBD88447DD23D436LL) & Tag467(/*int32_t:232344:233432:231605:e*/l_1116)) > Tag468(/*uint32_t:233432:233432:231605:e*/p_44)) , l_1141))));
/*aft_stmt:231605*/
/*aft_stmt:231605*/
/*aft_stmt:231605*/
/*aft_stmt:231605*/
/*aft_stmt:231605*/
/*aft_stmt:231605*/
/*aft_stmt:231605*/
        }
        /*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
/*bef_stmt:232340*/
l_1162 = (((l_1082 = ((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((/*TAG469:STA*/((uint64_t)(realsmith_proxy_8dpJJ((char)(*p_43)+(24), 84)+(int)(p_42)+(int)(g_300)+(int)(*p_43)+(int)(l_1117[1][2])-(434987699))+p_42)/*TAG469:END:p_42*/ ^ (safe_mod_func_int8_t_s_s(/*TAG470:STA*/((uint32_t)(realsmith_proxy_UUXhB(65, (int)(p_44)+(1299687374))+(int)(p_44)+(int)(g_300)+(int)(l_1117[1][2])+(int)(p_42)-(-1631943446))+p_44)/*TAG470:END:p_44*/, ((l_1079 = (((/*TAG471:STA*/((uint32_t)(realsmith_proxy_rsslU((char)(p_44)+(-156))+(int)(p_44)+(int)(l_1117[1][2])+(int)(p_42)+(int)(g_300)-(-1631943463))+p_44)/*TAG471:END:p_44*/ ^ ((*l_1157) = ((((*l_1150) |= (-1L)) | (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((/*TAG472:STA*/((uint64_t)(realsmith_proxy_8SQsm((unsigned char)(*p_43)+(-72), (unsigned long)(p_44)+(-2995279983), (unsigned char)(l_1117[1][2])+(-243), (unsigned long)(p_42)+(0))+(unsigned int)(p_42)+(unsigned int)(p_44)+(unsigned int)(*p_43)+((unsigned int)(l_1117[1][2])-(4294967287))-(3762523833))+p_42)/*TAG472:END:p_42*/ | (/*TAG473:STA*/((int16_t)(realsmith_DvI46((int)(**g_951)+(-2179))+(int)(**g_951)-(2234))+**g_951)/*TAG473:END:**g_951*/)), ((**g_885) = (/*TAG474:STA*/((int16_t)(realsmith_DlTrX((int)(g_300)+(332256196))+(int)(l_1117[2][0])+(int)(p_44)+(int)(*p_43)+(int)(p_42)+(int)(g_300)-(-864715228))+l_1117[2][0])/*TAG474:END:l_1117[2][0]*/ < (&g_952 != l_1155[7][0][1]))))), 1L))) || (/*TAG475:STA*/((uint32_t)(realsmith_ffFwv((int)(g_300)+(332256235))+(int)(*p_43)+(int)(**g_951)+(int)(g_300)+(int)(l_1117[2][0])-(434974317))+*p_43)/*TAG475:END:*p_43*/)))) , l_1158) == l_1156)) && /*TAG476:STA*/((uint32_t)(realsmith_proxy_kl0Lf((int)(**g_951)+(-2154), (long)(p_44)+(-2995279938), (char)(**g_951)+(30))+(int)(p_44)+(int)(**g_951)+(int)(p_42)+(int)(l_1117[2][0])-(-1299700703))+p_44)/*TAG476:END:p_44*/)))), /*TAG477:STA*/((uint32_t)(realsmith_proxy_BrpeS((int)(p_44)+(1299687273), (int)(p_44)+(1299687381))+(int)(p_44)+(int)(**g_951)+(int)(*p_43)+(int)(l_1117[1][2])-(-532441229))+p_44)/*TAG477:END:p_44*/)), 6)) , (void*)0) == l_1159), 0L)) ^ (Tag478(/*uint16_t:0:0:232340:e*/*g_369)))) , (/*TAG479:STA*/((uint64_t)(realsmith_proxy_ORdgl((int)(**g_314)+(37), (char)(**g_314)+(-92), (long)(**g_314)+(20))+(int)(**g_314)-(8))+**g_314)/*TAG479:END:**g_314*/)) , /*TAG480:STA*/((uint64_t)(realsmith_31VC0((int)(g_571[0])+(1707978517))-(1))+g_571[0])/*TAG480:END:g_571[0]*/);
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
/*aft_stmt:232340*/
    }
    else
    { /* block id: 448 */
        int8_t l_1166 = 6L;
        uint8_t **l_1167[6] = {&g_1114[1][2][0],&g_1114[1][2][0],&g_1114[1][2][0],&g_1114[1][2][0],&g_1114[1][2][0],&g_1114[1][2][0]};
        const int64_t *l_1183 = &g_101;
        uint16_t l_1184 = 0UL;
        int32_t l_1185 = 0L;
        int i;
        /*bef_stmt:233335*/
/*bef_stmt:233335*/
/*bef_stmt:233335*/
/*bef_stmt:233335*/
/*bef_stmt:233335*/
/*bef_stmt:233335*/
/*bef_stmt:233335*/
/*bef_stmt:233335*/
/*bef_stmt:233335*/
/*bef_stmt:233335*/
l_1185 = (!(((safe_rshift_func_int16_t_s_u(Tag481(/*int8_t:233390:233432:233335:e*/l_1166), 9)) == (((void*)0 == l_1167[5]) <= (safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s((0UL != ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u(Tag482(/*int8_t:233390:233432:233335:e*/l_1166), (safe_unary_minus_func_int32_t_s(((((safe_lshift_func_int16_t_s_s(0xB3D4L, 5)) <= ((Tag483(/*int8_t:233390:233432:233335:e*/l_1166) , l_1183) == (void*)0)) ^ Tag484(/*uint32_t:233432:233432:233335:e*/p_44)) && Tag485(/*int32_t:233432:233432:233335:e*/l_1082)))))) && Tag486(/*uint64_t:233432:233432:233335:e*/p_42)) , 0x47673BC920B55D61LL) , (Tag487(/*const int16_t:0:0:233335:e*/*g_952))), 3)), 0x6FL)) && Tag488(/*int16_t:233432:233432:233335:e*/l_1117[1][2]))), Tag489(/*int8_t:233390:233432:233335:e*/l_1166))), 0x4B9AD729L)))) <= Tag490(/*uint16_t:233390:233432:233335:e*/l_1184)));
/*aft_stmt:233335*/
/*aft_stmt:233335*/
/*aft_stmt:233335*/
/*aft_stmt:233335*/
/*aft_stmt:233335*/
/*aft_stmt:233335*/
/*aft_stmt:233335*/
/*aft_stmt:233335*/
/*aft_stmt:233335*/
/*aft_stmt:233335*/
        (*g_70) = (void*)0;
        /*bef_stmt:233386*/
l_1079 = Tag491(/*uint64_t:233432:233432:233386:e*/p_42);
/*aft_stmt:233386*/
    }
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
/*aft_stmt:233401*/
    /*bef_stmt:233430*/
return (/*TAG492:STA*/((int8_t)(realsmith_proxy_mdLbk((int)(**g_885)+(15), (char)(**g_885)+(-22))+(int)(**g_885)-(1))+**g_885)/*TAG492:END:**g_885*/);
/*aft_stmt:233430*/
}


/* ------------------------------------------ */
/* 
 * reads : g_13 g_36 g_70 g_79 g_37 g_71 g_89 g_94 g_99 g_69 g_105 g_131 g_135 g_143 g_141 g_92 g_174 g_101 g_169 g_208 g_239 g_314 g_315 g_368 g_175 g_369 g_300 g_394 g_637 g_415 g_416 g_767 g_522 g_493 g_665 g_571 g_846 g_885 g_694 g_886 g_349 g_951 g_953 g_639 g_952 g_1031
 * writes: g_79 g_37 g_69 g_89 g_92 g_94 g_105 g_71 g_131 g_135 g_141 g_143 g_169 g_101 g_300 g_349 g_368 g_394 g_415 g_208 g_239 g_637 g_694 g_767 g_493 g_891 g_175 g_847 g_996 g_1031 g_571
 */
static const int64_t  func_45(uint32_t * p_46, int64_t  p_47, uint32_t * p_48, uint8_t  p_49)
{ /* block id: 2 */
    const uint32_t *l_50 = &g_37;
    uint32_t *l_52 = &g_37;
    uint32_t **l_51 = &l_52;
    const uint32_t **l_57 = &l_50;
    const int32_t l_58[9][7] = {{0xFCE4A839L,0L,0x5B5B06A8L,0x36BBBD28L,0xA7FCF623L,0xFCE4A839L,0x36BBBD28L},{7L,(-1L),1L,0xB816E149L,0xB816E149L,1L,(-1L)},{0L,0x85DC32C7L,0x5B5B06A8L,1L,0x85DC32C7L,0x36BBBD28L,0xFD1A6840L},{(-8L),0xB816E149L,0L,(-8L),(-1L),(-8L),0L},{0xA7FCF623L,0xA7FCF623L,0x539AEA1DL,1L,0L,0xCD8A6CE2L,0xA7FCF623L},{5L,0L,5L,0xB816E149L,9L,9L,0xB816E149L},{0x8E6F9635L,0xFD1A6840L,0x8E6F9635L,0x36BBBD28L,0L,0x8E6F9635L,0x85DC32C7L},{0xB816E149L,(-1L),(-1L),3L,(-1L),0L,(-1L)},{0x25AC89D6L,0x36BBBD28L,0x36BBBD28L,0x25AC89D6L,0xCD8A6CE2L,0x17887B34L,0x8E6F9635L}};
    int32_t l_102 = 7L;
    int32_t *l_108 = &g_69[3][2][0];
    int32_t l_112[3];
    uint32_t l_224 = 0x8DD45185L;
    const int32_t l_226 = 0L;
    int8_t l_301 = 1L;
    int8_t l_323 = 0xB4L;
    uint32_t ****l_348 = &g_174;
    const uint8_t l_392 = 0xAAL;
    uint16_t **l_393[5][1] = {{&g_369},{(void*)0},{&g_369},{(void*)0},{&g_369}};
    uint16_t l_525 = 0x1B02L;
    int32_t l_563 = 0x1786727EL;
    uint64_t *l_589 = &g_92;
    uint64_t *l_602[2];
    int16_t l_625 = 6L;
    int16_t l_703 = 0xBBD9L;
    int32_t l_704 = 4L;
    const int64_t *l_764 = &g_101;
    const int64_t **l_763 = &l_764;
    const uint32_t l_801 = 18446744073709551615UL;
    int16_t l_816 = 0x6F9CL;
    int32_t *l_817 = &l_112[0];
    const int32_t * const **l_871 = (void*)0;
    uint8_t *l_880 = &g_89[4][4][3];
    uint8_t **l_879 = &l_880;
    uint32_t l_966[10][9][2] = {{{0UL,0xF42C0CECL},{0UL,0x7E9231B8L},{1UL,0UL},{0UL,0UL},{1UL,18446744073709551615UL},{0UL,18446744073709551608UL},{0UL,1UL},{4UL,0xE459EEB4L},{0x2774F167L,0x471CBA1AL}},{{0x2774F167L,0xE459EEB4L},{4UL,1UL},{0UL,18446744073709551608UL},{0UL,18446744073709551615UL},{1UL,0UL},{0UL,0UL},{1UL,0x7E9231B8L},{0UL,0xF42C0CECL},{0UL,18446744073709551614UL}},{{4UL,0UL},{0x2774F167L,0x62AB7E0AL},{0x2774F167L,0UL},{4UL,18446744073709551614UL},{0UL,0xF42C0CECL},{0UL,0x7E9231B8L},{1UL,0UL},{0UL,0UL},{1UL,18446744073709551615UL}},{{0UL,18446744073709551608UL},{0UL,1UL},{4UL,0xE459EEB4L},{0x2774F167L,0x471CBA1AL},{0x2774F167L,0xE459EEB4L},{4UL,1UL},{0UL,18446744073709551608UL},{0UL,18446744073709551615UL},{1UL,0UL}},{{0UL,0UL},{1UL,0x7E9231B8L},{0UL,0xF42C0CECL},{0UL,18446744073709551614UL},{4UL,0UL},{0x2774F167L,0x62AB7E0AL},{0x2774F167L,0UL},{4UL,18446744073709551614UL},{0UL,0xF42C0CECL}},{{0UL,0x7E9231B8L},{1UL,0UL},{0UL,0UL},{1UL,18446744073709551615UL},{0UL,18446744073709551608UL},{0UL,1UL},{4UL,0xE459EEB4L},{0x2774F167L,0x471CBA1AL},{0x2774F167L,0xE459EEB4L}},{{4UL,1UL},{0UL,18446744073709551608UL},{0UL,18446744073709551615UL},{1UL,0UL},{0UL,0UL},{1UL,0x7E9231B8L},{0UL,0xF42C0CECL},{0UL,18446744073709551614UL},{4UL,0UL}},{{0x2774F167L,0x62AB7E0AL},{0x2774F167L,0UL},{4UL,18446744073709551614UL},{0UL,0xF42C0CECL},{0UL,0x7E9231B8L},{1UL,0UL},{0UL,0UL},{1UL,18446744073709551615UL},{0UL,18446744073709551608UL}},{{0UL,1UL},{4UL,0xE459EEB4L},{0x2774F167L,0x471CBA1AL},{0x2774F167L,0xE459EEB4L},{4UL,1UL},{0UL,18446744073709551608UL},{0UL,18446744073709551615UL},{1UL,0UL},{0UL,0UL}},{{1UL,0x7E9231B8L},{0UL,0xF42C0CECL},{0UL,18446744073709551614UL},{4UL,0UL},{0x2774F167L,0x62AB7E0AL},{0x2774F167L,0UL},{4UL,18446744073709551614UL},{0UL,0xF42C0CECL},{0UL,0x7E9231B8L}}};
    uint32_t l_994[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    const uint32_t l_1034 = 0xFF30FAA3L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_112[i] = 1L;
    for (i = 0; i < 2; i++)
        l_602[i] = &g_300;
    /*bef_stmt:283036*/
/*bef_stmt:283036*/
/*bef_stmt:283036*/
/*bef_stmt:283036*/
/*bef_stmt:283036*/
/*bef_stmt:283036*/
/*bef_stmt:283036*/
/*bef_stmt:283036*/
/*bef_stmt:283036*/
/*bef_stmt:283036*/
if ((((((l_50 == ((*l_51) = (/*TAG493:STA*/((int64_t)(realsmith_B2RHy()+(int)(p_47)-(13))+p_47)/*TAG493:END:p_47*/ , p_48))) ^ ((safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(/*TAG494:STA*/((int64_t)(realsmith_proxy_8j0yF((int)(g_13)+(58), (int)(g_13)+(40))+(int)(g_13)-(0))+g_13)/*TAG494:END:g_13*/, (((void*)0 == l_57) ^ ((Tag495(/*const int32_t:298329:298329:283036:e*/l_58[4][1]) , (safe_sub_func_uint64_t_u_u(/*TAG496:STA*/((int32_t)(realsmith_proxy_u27WU((int)(l_58[4][1])+(1476594222), (int)(l_58[4][1])+(1476594199), (int)(l_58[4][1])+(1476594152), (int)(l_58[4][1])+(1476594218))+(int)(l_58[4][1])-(-1476594141))+l_58[4][1])/*TAG496:END:l_58[4][1]*/, ((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(0x94C655EF1C8D2125LL, /*TAG497:STA*/((int64_t)(realsmith_4Ndlz((unsigned int)(g_13)+(-4294967207), (unsigned int)(g_13)+(-4294967287))+((unsigned int)(g_13)-(4294967295))-(80))+g_13)/*TAG497:END:g_13*/)), /*TAG498:STA*/((int64_t)(realsmith_lm0Wo((int)(g_13)+(95))+(int)(g_13)-(-4))+g_13)/*TAG498:END:g_13*/)), /*TAG499:STA*/((int32_t)(realsmith_proxy_NcRts((int)(l_58[2][5])+(-918273253))+(int)(l_58[2][5])-(918273320))+l_58[2][5])/*TAG499:END:l_58[2][5]*/)) ^ /*TAG500:STA*/((int64_t)(realsmith_proxy_LFiKC((int)(p_47)+(-89), (unsigned int)(p_47)+(-4294967256), (int)(p_47)+(-52))+(int)(p_47)-(0))+p_47)/*TAG500:END:p_47*/)))) , /*TAG501:STA*/((int32_t)(realsmith_opJb7((int)(l_58[4][1])+(1476594233), (int)(l_58[4][1])+(1476594163))+(int)(l_58[4][1])-(-1476594140))+l_58[4][1])/*TAG501:END:l_58[4][1]*/)))), 8)) , /*TAG502:STA*/((int32_t)(realsmith_Z2JEN()+(int)(l_58[4][1])-(-1476594141))+l_58[4][1])/*TAG502:END:l_58[4][1]*/)) , (*l_51)) != &g_37) > 0xB69233C9E48991CDLL))
    { /* block id: 4 */
        int32_t *l_68 = &g_69[3][2][0];
        int32_t **l_67 = &l_68;
        int32_t *l_77 = &g_69[3][2][0];
        uint32_t ***l_177 = &g_175[0][0];
        int16_t *l_240 = &g_141;
        int32_t l_254 = 2L;
        int32_t l_302 = 0x7A8FD81BL;
        int32_t l_305 = 0x394F41C5L;
        int32_t l_306 = 0xB1B6B8CCL;
        int32_t l_308[7][3][6] = {{{(-2L),(-6L),0L,(-2L),(-7L),0L},{(-2L),(-7L),0L,(-6L),(-6L),0L},{0xAB075E4DL,0xAB075E4DL,0L,0x9975E8FBL,(-6L),0L}},{{(-6L),(-7L),0L,0x9975E8FBL,(-7L),0L},{0xAB075E4DL,(-6L),0L,(-6L),0xAB075E4DL,0L},{(-2L),(-6L),0L,(-2L),(-7L),0L}},{{(-2L),(-7L),0L,(-6L),(-6L),0L},{0xAB075E4DL,0xAB075E4DL,0L,0x9975E8FBL,(-6L),0L},{(-6L),(-7L),0L,0x9975E8FBL,(-7L),0L}},{{0xAB075E4DL,(-6L),0L,(-6L),0xAB075E4DL,0L},{(-2L),(-6L),0L,(-2L),(-7L),0L},{(-2L),(-7L),0L,(-6L),(-6L),0L}},{{0xAB075E4DL,0xAB075E4DL,0L,0x9975E8FBL,(-6L),0L},{(-6L),(-7L),0L,0x9975E8FBL,(-7L),0L},{0xAB075E4DL,(-6L),0L,(-6L),0xAB075E4DL,0L}},{{(-2L),(-6L),0L,(-2L),(-7L),0L},{(-2L),(-7L),0L,(-6L),(-6L),0L},{0xAB075E4DL,0xAB075E4DL,0L,0x9975E8FBL,(-6L),0L}},{{(-6L),(-7L),0L,0x9975E8FBL,(-7L),0L},{0xAB075E4DL,(-6L),0L,(-6L),0xAB075E4DL,0L},{(-2L),(-6L),0L,(-2L),(-7L),0L}}};
        uint16_t l_311 = 0x68B4L;
        int16_t l_330 = 0x84D9L;
        uint8_t l_336[4][1];
        int8_t *l_417 = (void*)0;
        uint16_t l_422 = 0x71D1L;
        uint16_t *** const l_513 = &g_368[0];
        uint64_t **l_561[5];
        uint8_t l_584 = 253UL;
        int64_t l_585 = (-1L);
        int8_t l_644 = 0x52L;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_336[i][j] = 0x67L;
        }
        for (i = 0; i < 5; i++)
            l_561[i] = &g_315;
lbl_109:
        (*l_67) = g_36[1][1][4];
        /*bef_stmt:272165*/
if (Tag503(/*uint8_t:298329:298329:272165:e*/p_49))
        { /* block id: 6 */
            int32_t ***l_72 = &l_67;
            int32_t **l_74 = &l_68;
            int32_t ***l_73 = &l_74;
            int32_t *l_78 = &g_79;
            uint8_t *l_88[1];
            uint64_t *l_90 = (void*)0;
            uint64_t *l_91 = &g_92;
            uint32_t *l_93 = &g_94;
            int16_t *l_170 = &g_143;
            uint16_t l_172[8][8] = {{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL},{65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL}};
            int8_t l_225[5] = {1L,1L,1L,1L,1L};
            uint16_t *l_262 = &g_135;
            int32_t l_273 = 0L;
            int32_t l_299 = 0xC37B4458L;
            int32_t l_307 = 0xED60C299L;
            int32_t l_309 = 0x5FE341C2L;
            int32_t l_310[7][7] = {{0x56D3FFEEL,0x56D3FFEEL,0L,(-4L),(-6L),0xC43994B5L,2L},{(-1L),0xC6FC5E1DL,(-4L),0x56D3FFEEL,2L,0xBF82D76AL,0xBF82D76AL},{(-6L),0xAD0A1748L,0x48D3F0D9L,0xAD0A1748L,(-6L),0x56D3FFEEL,(-1L)},{0x802B541BL,0L,0x48D3F0D9L,0x5D1AE425L,0xAD0A1748L,7L,0x3D0C7AC6L},{0x5D1AE425L,2L,(-4L),7L,7L,(-4L),2L},{0x802B541BL,0x5D1AE425L,0L,(-1L),0xC6FC5E1DL,(-4L),0x56D3FFEEL},{(-6L),0xC43994B5L,2L,0x48D3F0D9L,0x7651ACF5L,7L,0x7651ACF5L}};
            uint64_t **l_317 = &g_315;
            uint64_t ***l_326 = &l_317;
            int i, j;
            for (i = 0; i < 1; i++)
                l_88[i] = &g_89[4][4][3];
            /*bef_stmt:264090*/
/*bef_stmt:264090*/
/*bef_stmt:264090*/
/*bef_stmt:264090*/
/*bef_stmt:264090*/
/*bef_stmt:264090*/
/*bef_stmt:264090*/
/*bef_stmt:264090*/
/*bef_stmt:264090*/
if (((((g_70 == ((*l_73) = ((*l_72) = &l_68))) && (safe_add_func_uint32_t_u_u(((*p_46) |= (((*l_78) &= ((*l_67) != (l_77 = p_46))) , 1UL)), (((*l_93) &= ((((*l_91) = (safe_div_func_uint8_t_u_u(((g_89[7][2][2] = ((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((-1L), (0xB0L | (0L ^ ((*g_71) = (safe_rshift_func_uint8_t_u_u(Tag504(/*int64_t:298329:298329:264090:e*/p_47), Tag505(/*const int64_t:0:0:264090:e*/g_13)))))))), Tag506(/*const int64_t:0:0:264090:e*/g_13))) != 0x21L)) || Tag507(/*uint8_t:0:0:264090:e*/g_89[4][4][0])), 0x02L))) , Tag508(/*int64_t:298329:298329:264090:e*/p_47)) && Tag509(/*const int32_t:298329:298329:264090:e*/l_58[6][6]))) & Tag510(/*const int32_t:298329:298329:264090:e*/l_58[4][1]))))) && Tag511(/*uint32_t:0:0:264090:e*/g_94)) & Tag512(/*const int32_t:298329:298329:264090:e*/l_58[2][4])))
            { /* block id: 16 */
                int64_t *l_100[4] = {&g_101,&g_101,&g_101,&g_101};
                uint16_t *l_103 = (void*)0;
                uint16_t *l_104 = &g_105;
                int32_t l_136 = (-7L);
                int32_t l_144[4][4][9] = {{{0x4ECE7258L,0L,0xE6AD3C43L,0xE6AD3C43L,0L,0x4ECE7258L,9L,(-9L),0xE6AD3C43L},{0x32723F93L,(-1L),0x4ECE7258L,0xE6AD3C43L,0x86B99F0CL,0x32723F93L,0x32723F93L,0x86B99F0CL,0xE6AD3C43L},{0xF97A4938L,0L,0xF97A4938L,0x4ECE7258L,0x86B99F0CL,0xF97A4938L,9L,(-1L),0x4ECE7258L},{0xF97A4938L,0x86B99F0CL,0x4ECE7258L,0xF97A4938L,0L,0xF97A4938L,0x4ECE7258L,0x86B99F0CL,0xF97A4938L}},{{0x32723F93L,0x86B99F0CL,0xE6AD3C43L,0x4ECE7258L,(-1L),0x32723F93L,0x4ECE7258L,(-9L),0x4ECE7258L},{0x4ECE7258L,0L,0xE6AD3C43L,0xE6AD3C43L,0L,0x4ECE7258L,9L,(-9L),0xE6AD3C43L},{0x32723F93L,(-1L),0x4ECE7258L,0xE6AD3C43L,0x86B99F0CL,0x32723F93L,0x32723F93L,0x86B99F0CL,0xE6AD3C43L},{0xF97A4938L,0L,0xF97A4938L,0x4ECE7258L,0x86B99F0CL,0xF97A4938L,9L,(-1L),0x4ECE7258L}},{{0xF97A4938L,0x86B99F0CL,0x4ECE7258L,0xF97A4938L,0L,0xF97A4938L,0x4ECE7258L,0x86B99F0CL,0xF97A4938L},{0x32723F93L,0x86B99F0CL,0xE6AD3C43L,0x4ECE7258L,(-1L),0x32723F93L,0x4ECE7258L,(-9L),0x4ECE7258L},{0x4ECE7258L,0L,0xE6AD3C43L,0xE6AD3C43L,0L,0x4ECE7258L,9L,(-9L),0xE6AD3C43L},{0x32723F93L,(-1L),0x4ECE7258L,0xE6AD3C43L,0x86B99F0CL,0x32723F93L,0x32723F93L,0x86B99F0CL,0xE6AD3C43L}},{{0xF97A4938L,0L,0xF97A4938L,0x4ECE7258L,0x86B99F0CL,0xF97A4938L,9L,(-1L),0x4ECE7258L},{0xF97A4938L,0x86B99F0CL,0x4ECE7258L,0xF97A4938L,0L,0xF97A4938L,0x4ECE7258L,0x86B99F0CL,0xF97A4938L},{0x32723F93L,0x86B99F0CL,0xB3F44D47L,1L,0x4ECE7258L,0x94C2ECEAL,1L,9L,1L},{1L,0x32723F93L,0xB3F44D47L,0xB3F44D47L,0x32723F93L,1L,0L,9L,0xB3F44D47L}}};
                int32_t *l_145 = &l_112[2];
                uint64_t l_227 = 1UL;
                int i, j, k;
                /*bef_stmt:264058*/
/*bef_stmt:264058*/
/*bef_stmt:264058*/
if ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(Tag513(/*const int32_t:0:0:264058:e*/g_99), (l_102 = Tag514(/*int64_t:298329:298329:264058:e*/p_47)))), ((*l_104) = Tag515(/*int32_t:0:0:264058:e*/g_69[3][2][0])))))
                { /* block id: 19 */
                    l_108 = ((safe_lshift_func_uint16_t_u_u((l_103 != (void*)0), 8)) , (*g_70));
                    /*bef_stmt:249260*/
(*l_108) = (Tag516(/*int32_t:0:0:249260:e*/**g_70));
/*aft_stmt:249260*/
                    (*l_73) = &l_108;
                }
                else
                { /* block id: 23 */
                    uint8_t l_113[8][3] = {{252UL,0UL,252UL},{252UL,0UL,0UL},{252UL,0x21L,255UL},{252UL,0UL,252UL},{252UL,0UL,0UL},{252UL,0x21L,255UL},{252UL,0UL,252UL},{252UL,0UL,0UL}};
                    int32_t l_137[1][2][8] = {{{0x54C0D22BL,0x29BBF80EL,0x54C0D22BL,0x065CC1FFL,0x5F7E0F15L,0x5F7E0F15L,0x065CC1FFL,0x54C0D22BL},{0x29BBF80EL,0x29BBF80EL,0x5F7E0F15L,1L,0L,1L,0x5F7E0F15L,0x29BBF80EL}}};
                    int16_t l_171 = 0x9A33L;
                    uint32_t ****l_176 = (void*)0;
                    int8_t *l_207[10] = {&g_208,&g_208,&g_208,&g_208,&g_208,&g_208,&g_208,&g_208,&g_208,&g_208};
                    int32_t ***l_251[9][1][5] = {{{&l_67,&l_67,&l_74,&g_70,&l_74}},{{&g_70,&g_70,(void*)0,&l_67,(void*)0}},{{&l_67,&l_67,&l_74,&g_70,&l_74}},{{&g_70,&g_70,(void*)0,&l_67,(void*)0}},{{&l_67,&l_67,&l_74,&g_70,&l_74}},{{&g_70,&g_70,(void*)0,&l_67,(void*)0}},{{&l_67,&l_67,&l_74,&g_70,&l_74}},{{&g_70,&g_70,(void*)0,&l_67,(void*)0}},{{&l_67,&l_67,&l_74,&g_70,&l_74}}};
                    uint8_t l_255 = 0xF0L;
                    int i, j, k;
                    (*g_70) = &l_102;
                    /*bef_stmt:257334*/
if (Tag517(/*uint8_t:298329:298329:257334:e*/p_49))
                    { /* block id: 25 */
                        int32_t *l_110 = (void*)0;
                        int32_t *l_111[1];
                        uint16_t *l_134[9][9][2] = {{{&g_135,&g_105},{&g_135,&g_105},{&g_105,&g_105},{&g_135,&g_105},{&g_135,(void*)0},{&g_135,&g_105},{&g_105,&g_135},{&g_135,&g_105},{&g_135,&g_105}},{{&g_135,&g_135},{&g_105,&g_105},{&g_135,(void*)0},{&g_135,&g_105},{&g_135,&g_105},{&g_105,&g_105},{&g_135,&g_105},{&g_135,&g_105},{&g_135,&g_105}},{{&g_105,&g_105},{&g_135,&g_105},{&g_135,(void*)0},{&g_135,&g_105},{&g_105,&g_135},{&g_135,&g_105},{&g_135,&g_105},{&g_135,&g_135},{&g_105,&g_105}},{{&g_135,(void*)0},{&g_135,&g_105},{&g_135,&g_105},{&g_105,&g_105},{&g_135,&g_105},{&g_135,&g_105},{&g_135,&g_105},{&g_105,&g_105},{&g_135,&g_105}},{{&g_135,(void*)0},{&g_135,&g_105},{&g_105,&g_135},{&g_135,&g_105},{&g_135,&g_105},{&g_135,&g_135},{&g_105,&g_105},{&g_135,(void*)0},{&g_135,&g_105}},{{&g_135,&g_105},{&g_105,&g_105},{&g_135,&g_105},{&g_135,&g_105},{&g_135,&g_105},{&g_105,&g_105},{&g_135,&g_105},{&g_135,(void*)0},{&g_135,&g_105}},{{&g_105,&g_135},{&g_135,&g_105},{&g_135,&g_105},{&g_135,&g_135},{&g_105,&g_105},{&g_135,(void*)0},{&g_135,&g_105},{&g_135,&g_105},{&g_105,&g_105}},{{&g_135,&g_105},{&g_135,&g_105},{&g_135,&g_105},{&g_105,&g_105},{&g_135,&g_105},{&g_135,(void*)0},{&g_135,&g_105},{&g_105,&g_135},{&g_135,&g_105}},{{&g_135,&g_105},{&g_135,&g_135},{&g_105,&g_105},{&g_135,(void*)0},{&g_135,&g_105},{&g_135,&g_105},{&g_105,&g_105},{&g_135,&g_105},{&g_135,&g_105}}};
                        int16_t *l_140 = &g_141;
                        int16_t *l_142 = &g_143;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_111[i] = &g_69[3][3][3];
                        /*bef_stmt:255419*/
if (Tag518(/*uint32_t:0:0:255419:e*/g_37))
                            goto lbl_109;
/*aft_stmt:255419*/
                        l_113[0][2]--;
                        /*bef_stmt:255502*/
(*g_71) = (Tag519(/*int32_t:0:0:255502:e*/**g_70));
/*aft_stmt:255502*/
                        /*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
/*bef_stmt:256369*/
(*l_108) = (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((Tag520(/*int32_t:298329:298329:256369:e*/*l_108)), (l_137[0][1][0] = (((safe_sub_func_int8_t_s_s((Tag521(/*int32_t:282995:298329:256369:e*/*l_77)), ((((((l_136 = ((Tag522(/*int32_t:0:0:256369:e*/**g_70)) >= ((((!(safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((g_131 |= ((Tag523(/*int32_t:298329:298329:256369:e*/*l_108)) >= Tag524(/*uint16_t:0:0:256369:e*/g_105))), (((0x256CL || (&g_71 != (void*)0)) == ((((*l_142) |= ((*l_140) = (((++g_135) < Tag525(/*uint8_t:298329:298329:256369:e*/p_49)) , Tag526(/*const int32_t:0:0:256369:e*/g_99)))) | 65535UL) | 0xEBL)) >= Tag527(/*int64_t:298329:298329:256369:e*/p_47)))), Tag528(/*int64_t:298329:298329:256369:e*/p_47)))) || Tag529(/*uint32_t:0:0:256369:e*/g_37)) | 5L) == Tag530(/*int32_t:264064:270116:256369:e*/l_136)))) >= Tag531(/*int32_t:264044:264064:256369:e*/l_137[0][0][3])) , (Tag532(/*uint32_t:298329:298329:256369:e*/*p_46))) , (void*)0) != p_48) , Tag533(/*int64_t:298329:298329:256369:e*/p_47)))) , (Tag534(/*int32_t:0:0:256369:e*/**g_70))) || (Tag535(/*int32_t:298329:298329:256369:e*/*l_108)))))), 4)) >= (Tag536(/*int32_t:0:0:256369:e*/**g_70))), Tag537(/*int32_t:264064:270116:256369:e*/l_144[3][3][2])));
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
/*aft_stmt:256369*/
                    }
                    else
                    { /* block id: 36 */
                        int16_t *l_158 = &g_141;
                        int32_t l_167 = 0xD5C270F0L;
                        uint32_t *l_168 = &g_169;
                        int32_t l_173 = 0L;
                        l_145 = ((*l_74) = (*g_70));
                        /*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
/*bef_stmt:257320*/
l_173 &= (((((((*l_104) ^= (safe_rshift_func_uint8_t_u_s((Tag538(/*int64_t:298329:298329:257320:e*/p_47) <= (safe_mul_func_int16_t_s_s(((*l_158) &= (safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s(Tag539(/*uint32_t:0:0:257320:e*/g_94), 0L)), Tag540(/*uint32_t:0:0:257320:e*/g_37))), (safe_sub_func_uint8_t_u_u(0xABL, (Tag541(/*int32_t:264064:270116:257320:e*/*l_145))))))), ((((safe_mul_func_uint8_t_u_u(((((*l_168) = (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(Tag542(/*int64_t:298329:298329:257320:e*/p_47), ((l_167 = ((((safe_mod_func_uint8_t_u_u((Tag543(/*int16_t:0:0:257320:e*/g_143) & Tag544(/*int64_t:298329:298329:257320:e*/p_47)), Tag545(/*const int32_t:0:0:257320:e*/g_99))) != (-1L)) && (Tag546(/*int32_t:298329:298329:257320:e*/*l_108))) < Tag547(/*int32_t:257326:264044:257320:e*/l_167))) <= (-10L)))) < Tag548(/*int16_t:0:0:257320:e*/g_143)), 0xEBL))) , 18446744073709551615UL) & Tag549(/*int64_t:298329:298329:257320:e*/p_47)), 0x24L)) || Tag550(/*int32_t:0:0:257320:e*/g_69[3][2][0])) , l_170) != (void*)0)))), Tag551(/*int16_t:264044:264064:257320:e*/l_171)))) , Tag552(/*int32_t:257326:264044:257320:e*/l_167)) , Tag553(/*uint16_t:270116:282995:257320:e*/l_172[5][0])) || (Tag554(/*int32_t:270116:282995:257320:e*/***l_73))) <= Tag555(/*uint64_t:0:0:257320:e*/g_92)) == 4L);
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
/*aft_stmt:257320*/
                    }
/*aft_stmt:257334*/
                    l_177 = g_174;
                    /*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
/*bef_stmt:264038*/
if ((safe_div_func_uint16_t_u_u((((*l_77) = 5L) == (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(Tag556(/*int32_t:298329:298329:264038:e*/l_102), (safe_rshift_func_int8_t_s_s(Tag557(/*int64_t:298329:298329:264038:e*/p_47), 0)))) && (safe_mul_func_uint16_t_u_u(((Tag558(/*uint16_t:0:0:264038:e*/g_135) == (Tag559(/*int64_t:0:0:264038:e*/g_101) <= ((((g_79 = ((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u((((((safe_div_func_int8_t_s_s((+(safe_mul_func_int16_t_s_s(((l_137[0][1][7] ^= 0xD4L) || Tag560(/*uint16_t:0:0:264038:e*/g_131)), (!((*l_170) = ((safe_sub_func_uint32_t_u_u(Tag561(/*int16_t:264044:264064:264038:e*/l_171), (safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((+(safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(Tag562(/*uint32_t:298329:298329:264038:e*/l_224), Tag563(/*int32_t:0:0:264038:e*/g_79))), Tag564(/*int64_t:298329:298329:264038:e*/p_47))) && 0xCDA5918F5825647FLL), Tag565(/*uint8_t:264044:264064:264038:e*/l_113[4][1])))) == 1UL), 4)), Tag566(/*int8_t:270116:282995:264038:e*/l_225[3]))))))) != Tag567(/*int64_t:298329:298329:264038:e*/p_47))))))), Tag568(/*uint8_t:298329:298329:264038:e*/p_49))) != 0x102025CEF9BD4510LL) == Tag569(/*uint32_t:0:0:264038:e*/g_169)) & Tag570(/*uint8_t:298329:298329:264038:e*/p_49)) || 1L), 3)) ^ 0x4E90A01309221738LL) || Tag571(/*uint32_t:0:0:264038:e*/g_94)) >= (Tag572(/*int32_t:264064:270116:264038:e*/*l_145))), 9L)) && Tag573(/*const int32_t:298329:298329:264038:e*/l_226)), Tag574(/*uint8_t:0:0:264038:e*/g_89[4][4][3]))), Tag575(/*uint8_t:264044:264064:264038:e*/l_113[0][2]))), Tag576(/*uint32_t:0:0:264038:e*/g_169))), Tag577(/*uint16_t:0:0:264038:e*/g_105))) ^ Tag578(/*uint64_t:264064:270116:264038:e*/l_227))) , Tag579(/*uint8_t:298329:298329:264038:e*/p_49)) != Tag580(/*uint8_t:298329:298329:264038:e*/p_49)) >= Tag581(/*int64_t:298329:298329:264038:e*/p_47)))) >= Tag582(/*int64_t:298329:298329:264038:e*/p_47)), Tag583(/*const int64_t:0:0:264038:e*/g_13)))), Tag584(/*int16_t:264044:264064:264038:e*/l_171))), (Tag585(/*int32_t:264064:270116:264038:e*/*l_145))))), Tag586(/*int8_t:0:0:264038:e*/g_208))))
                    { /* block id: 50 */
                        int64_t l_243[4];
                        int32_t l_248[7][8][4] = {{{(-1L),8L,(-1L),0xFA78DD74L},{0xEF0F6B80L,(-1L),1L,0x2BFAC57BL},{(-1L),(-1L),0x6D6D97C5L,(-1L)},{(-1L),0x2BFAC57BL,1L,(-1L)},{0xEF0F6B80L,0xFA78DD74L,(-1L),8L},{(-1L),(-1L),0L,0L},{(-1L),0x0F14B365L,(-1L),(-1L)},{0xEF0F6B80L,0L,1L,1L}},{{(-1L),0xFA78DD74L,0x6D6D97C5L,0xFA78DD74L},{(-1L),1L,1L,0L},{0xEF0F6B80L,(-1L),(-1L),0x0F14B365L},{(-1L),0L,0L,(-1L)},{(-1L),8L,(-1L),0xFA78DD74L},{0xEF0F6B80L,(-1L),1L,0x2BFAC57BL},{(-1L),(-1L),0x6D6D97C5L,(-1L)},{(-1L),0x2BFAC57BL,1L,(-1L)}},{{0xEF0F6B80L,0xFA78DD74L,(-1L),8L},{(-1L),(-1L),0L,0L},{(-1L),0x0F14B365L,(-1L),(-1L)},{0xEF0F6B80L,0L,1L,1L},{(-1L),0xFA78DD74L,0x6D6D97C5L,0xFA78DD74L},{(-1L),1L,1L,0L},{0xEF0F6B80L,(-1L),(-1L),0x0F14B365L},{(-1L),0L,0L,(-1L)}},{{(-1L),8L,(-1L),0xFA78DD74L},{0xEF0F6B80L,(-1L),1L,0x2BFAC57BL},{(-1L),(-1L),0x6D6D97C5L,(-1L)},{0xEF0F6B80L,0xFFB450AEL,0L,1L},{9L,8L,0x6D6D97C5L,0xDCB419A3L},{0xEF0F6B80L,1L,0L,0x2BFAC57BL},{0xEF0F6B80L,0xC7DA12D6L,0x6D6D97C5L,0x0F14B365L},{9L,0x2BFAC57BL,0L,1L}},{{0xEF0F6B80L,8L,(-1L),8L},{0xEF0F6B80L,1L,0L,0x2BFAC57BL},{9L,0x0F14B365L,0x6D6D97C5L,0xC7DA12D6L},{0xEF0F6B80L,0x2BFAC57BL,0L,1L},{0xEF0F6B80L,0xDCB419A3L,0x6D6D97C5L,8L},{9L,1L,0L,0xFFB450AEL},{0xEF0F6B80L,0x0F14B365L,(-1L),0x0F14B365L},{0xEF0F6B80L,0xFFB450AEL,0L,1L}},{{9L,8L,0x6D6D97C5L,0xDCB419A3L},{0xEF0F6B80L,1L,0L,0x2BFAC57BL},{0xEF0F6B80L,0xC7DA12D6L,0x6D6D97C5L,0x0F14B365L},{9L,0x2BFAC57BL,0L,1L},{0xEF0F6B80L,8L,(-1L),8L},{0xEF0F6B80L,1L,0L,0x2BFAC57BL},{9L,0x0F14B365L,0x6D6D97C5L,0xC7DA12D6L},{0xEF0F6B80L,0x2BFAC57BL,0L,1L}},{{0xEF0F6B80L,0xDCB419A3L,0x6D6D97C5L,8L},{9L,1L,0L,0xFFB450AEL},{0xEF0F6B80L,0x0F14B365L,(-1L),0x0F14B365L},{0xEF0F6B80L,0xFFB450AEL,0L,1L},{9L,8L,0x6D6D97C5L,0xDCB419A3L},{0xEF0F6B80L,1L,0L,0x2BFAC57BL},{0xEF0F6B80L,0xC7DA12D6L,0x6D6D97C5L,0x0F14B365L},{9L,0x2BFAC57BL,0L,1L}}};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_243[i] = (-1L);
                        /*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
/*bef_stmt:263356*/
(*g_71) = ((*l_77) = ((((((safe_rshift_func_uint16_t_u_s(((~(Tag587(/*uint32_t:0:0:263356:e*/g_37) >= ((Tag588(/*int32_t:282995:298329:263356:e*/*l_77)) <= ((safe_mod_func_uint32_t_u_u((((*l_91) ^= Tag589(/*uint8_t:264044:264064:263356:e*/l_113[5][0])) , (Tag590(/*uint32_t:298329:298329:263356:e*/*p_46))), (safe_div_func_int8_t_s_s((0xB2L < ((Tag591(/*int32_t:0:0:263356:e*/**g_70)) != (((Tag592(/*int16_t:0:0:263356:e*/g_239) == ((l_240 = (void*)0) != ((safe_div_func_int64_t_s_s(((Tag593(/*int8_t:0:0:263356:e*/g_208) ^ 6UL) ^ Tag594(/*int64_t:263967:264044:263356:e*/l_243[0])), Tag595(/*uint8_t:298329:298329:263356:e*/p_49))) , (void*)0))) || (Tag596(/*int32_t:0:0:263356:e*/**g_70))) < 0xB7F7EF872575A83ELL))), (Tag597(/*int32_t:298329:298329:263356:e*/*l_108)))))) != (Tag598(/*int32_t:0:0:263356:e*/*g_71)))))) , Tag599(/*int32_t:0:0:263356:e*/g_69[3][2][0])), 15)) ^ 0x6C83C06EL) == Tag600(/*uint8_t:298329:298329:263356:e*/p_49)) , Tag601(/*int64_t:298329:298329:263356:e*/p_47)) , Tag602(/*uint32_t:0:0:263356:e*/g_169)) | Tag603(/*uint8_t:298329:298329:263356:e*/p_49)));
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
/*aft_stmt:263356*/
                        /*bef_stmt:263370*/
if (Tag604(/*int16_t:0:0:263370:e*/g_141))
                            goto lbl_109;
/*aft_stmt:263370*/
                        /*bef_stmt:263961*/
/*bef_stmt:263961*/
/*bef_stmt:263961*/
/*bef_stmt:263961*/
/*bef_stmt:263961*/
/*bef_stmt:263961*/
/*bef_stmt:263961*/
(**g_70) ^= (Tag605(/*uint16_t:0:0:263961:e*/g_131) || ((*l_91) &= ((l_248[3][7][1] = (safe_mod_func_uint16_t_u_u(((&l_68 == (void*)0) , (safe_div_func_int32_t_s_s((Tag606(/*int32_t:298329:298329:263961:e*/*l_108)), (Tag607(/*uint8_t:0:0:263961:e*/g_89[1][3][2]) , 0x8298D6B9L)))), 0x3C18L))) || ((((Tag608(/*int32_t:282995:298329:263961:e*/*l_77)) == (safe_mod_func_uint32_t_u_u((((l_248[0][4][0] &= ((l_251[6][0][4] == &l_67) == (Tag609(/*int32_t:298329:298329:263961:e*/*l_108)))) | 0xED3EL) | Tag610(/*const int64_t:0:0:263961:e*/g_13)), (Tag611(/*uint32_t:298329:298329:263961:e*/*p_46))))) , (void*)0) != (void*)0))));
/*aft_stmt:263961*/
/*aft_stmt:263961*/
/*aft_stmt:263961*/
/*aft_stmt:263961*/
/*aft_stmt:263961*/
/*aft_stmt:263961*/
/*aft_stmt:263961*/
                    }
                    else
                    { /* block id: 60 */
                        int32_t l_252 = 0x512B0079L;
                        int32_t l_253 = 0x26B6B827L;
                        l_255++;
                    }
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
/*aft_stmt:264038*/
                }
/*aft_stmt:264058*/
/*aft_stmt:264058*/
/*aft_stmt:264058*/
            }
            else
            { /* block id: 64 */
                /*bef_stmt:264085*/
return Tag612(/*uint16_t:0:0:264085:e*/g_135);
/*aft_stmt:264085*/
            }
/*aft_stmt:264090*/
/*aft_stmt:264090*/
/*aft_stmt:264090*/
/*aft_stmt:264090*/
/*aft_stmt:264090*/
/*aft_stmt:264090*/
/*aft_stmt:264090*/
/*aft_stmt:264090*/
/*aft_stmt:264090*/
            /*bef_stmt:264551*/
/*bef_stmt:264551*/
/*bef_stmt:264551*/
/*bef_stmt:264551*/
/*bef_stmt:264551*/
/*bef_stmt:264551*/
/*bef_stmt:264551*/
/*bef_stmt:264551*/
/*bef_stmt:264551*/
/*bef_stmt:264551*/
(*g_71) = ((((safe_mul_func_uint16_t_u_u(Tag613(/*int64_t:298329:298329:264551:e*/p_47), (0x55L < (0x6C639F2A2B4910B4LL <= (safe_mod_func_uint16_t_u_u((--(*l_262)), ((9UL || ((+((Tag614(/*uint32_t:298329:298329:264551:e*/*p_46)) >= (((Tag615(/*int32_t:298329:298329:264551:e*/*l_108)) ^ ((+(safe_div_func_uint16_t_u_u(Tag616(/*uint32_t:0:0:264551:e*/g_169), (Tag617(/*int32_t:298329:298329:264551:e*/*l_108))))) || (((Tag618(/*uint8_t:0:0:264551:e*/g_89[4][4][3]) < Tag619(/*int32_t:270116:282995:264551:e*/l_273)) ^ 1UL) != (Tag620(/*int32_t:298329:298329:264551:e*/*l_108))))) | Tag621(/*uint8_t:298329:298329:264551:e*/p_49)))) <= Tag622(/*int16_t:0:0:264551:e*/g_239))) || 0UL))))))) , (void*)0) != &p_49) <= 1UL);
/*aft_stmt:264551*/
/*aft_stmt:264551*/
/*aft_stmt:264551*/
/*aft_stmt:264551*/
/*aft_stmt:264551*/
/*aft_stmt:264551*/
/*aft_stmt:264551*/
/*aft_stmt:264551*/
/*aft_stmt:264551*/
/*aft_stmt:264551*/
            for (p_49 = 15; (p_49 != 46); ++p_49)
            { /* block id: 71 */
                uint16_t l_276 = 0xCEC6L;
                int64_t *l_282 = &g_101;
                int32_t l_303 = 0xA3034F45L;
                int32_t l_304[8];
                int32_t l_335 = 0x379DEA74L;
                int i;
                for (i = 0; i < 8; i++)
                    l_304[i] = 1L;
                /*bef_stmt:268477*/
/*bef_stmt:268477*/
/*bef_stmt:268477*/
/*bef_stmt:268477*/
/*bef_stmt:268477*/
/*bef_stmt:268477*/
/*bef_stmt:268477*/
/*bef_stmt:268477*/
if (((l_276 = 0x122EL) == ((((Tag623(/*int32_t:0:0:268477:e*/g_69[0][4][1]) & ((*l_282) = (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((~(0x32L && (0x0EF7L & Tag624(/*int16_t:0:0:268477:e*/g_141)))), 1L)), (Tag625(/*uint32_t:298329:298329:268477:e*/*p_46)))))) & (Tag626(/*int32_t:0:0:268477:e*/g_69[3][2][0]) != ((((Tag627(/*int32_t:298329:298329:268477:e*/*l_108)) == p_49) ^ (Tag628(/*uint32_t:298329:298329:268477:e*/*p_46))) || 0x7783L))) | (Tag629(/*int32_t:0:0:268477:e*/**g_70))) , Tag630(/*int16_t:0:0:268477:e*/g_141))))
                { /* block id: 74 */
                    uint32_t l_292[8] = {18446744073709551615UL,18446744073709551615UL,0xAACB86EDL,18446744073709551615UL,18446744073709551615UL,0xAACB86EDL,18446744073709551615UL,18446744073709551615UL};
                    int32_t l_295 = 0L;
                    int32_t *l_298[8][3][1] = {{{(void*)0},{(void*)0},{&l_102}},{{&l_112[0]},{&l_102},{(void*)0}},{{(void*)0},{(void*)0},{&l_102}},{{&l_112[0]},{&l_102},{(void*)0}},{{(void*)0},{(void*)0},{&l_102}},{{&l_112[0]},{&l_102},{(void*)0}},{{(void*)0},{(void*)0},{&l_102}},{{&l_112[0]},{&l_102},{(void*)0}}};
                    uint64_t ***l_316[1][3][8] = {{{&g_314,(void*)0,&g_314,(void*)0,&g_314,(void*)0,&g_314,(void*)0},{&g_314,(void*)0,&g_314,(void*)0,&g_314,(void*)0,&g_314,(void*)0},{&g_314,(void*)0,&g_314,(void*)0,&g_314,(void*)0,&g_314,(void*)0}}};
                    int i, j, k;
                    /*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
/*bef_stmt:267676*/
g_300 = (l_299 = (safe_div_func_int8_t_s_s(((((*l_93) = (0x6AL & ((0x1F4DL <= ((safe_unary_minus_func_int32_t_s((((((*p_46) = 8UL) || (((*l_108) = (((Tag631(/*int32_t:298329:298329:267676:e*/*l_108)) , ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(Tag632(/*uint32_t:267800:270097:267676:e*/l_292[1]), 0x9F59L)), 1)) & ((safe_div_func_uint32_t_u_u((l_295 ^= (Tag633(/*int32_t:298329:298329:267676:e*/*l_108))), (safe_add_func_uint8_t_u_u(Tag634(/*uint16_t:270097:270116:267676:e*/l_276), 0x5DL)))) > 4294967295UL))) <= Tag635(/*uint16_t:270097:270116:267676:e*/l_276))) == Tag636(/*uint32_t:0:0:267676:e*/g_37))) <= Tag637(/*uint32_t:267800:270097:267676:e*/l_292[1])) ^ 1L))) , Tag638(/*int64_t:298329:298329:267676:e*/p_47))) >= Tag639(/*uint32_t:267800:270097:267676:e*/l_292[1])))) | Tag640(/*uint16_t:270097:270116:267676:e*/l_276)) , Tag641(/*uint32_t:0:0:267676:e*/g_94)), Tag642(/*uint8_t:0:0:267676:e*/g_89[8][4][3]))));
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
/*aft_stmt:267676*/
                    ++l_311;
                    l_317 = g_314;
                    for (l_295 = 0; (l_295 <= (-9)); --l_295)
                    { /* block id: 85 */
                        uint64_t l_320 = 3UL;
                        l_320++;
                        /*bef_stmt:267784*/
if (Tag643(/*uint64_t:267788:267800:267784:e*/l_320))
                            continue;
/*aft_stmt:267784*/
                    }
                }
                else
                { /* block id: 89 */
                    for (l_302 = 0; (l_302 <= 3); l_302 += 1)
                    { /* block id: 92 */
                        int32_t *l_337 = (void*)0;
                        int32_t l_338 = 1L;
                        /*bef_stmt:267945*/
(**g_70) ^= Tag644(/*int8_t:298329:298329:267945:e*/l_323);
/*aft_stmt:267945*/
                        (*l_77) &= p_49;
                        /*bef_stmt:268336*/
/*bef_stmt:268336*/
/*bef_stmt:268336*/
/*bef_stmt:268336*/
/*bef_stmt:268336*/
/*bef_stmt:268336*/
l_338 = ((65535UL && (safe_mul_func_int8_t_s_s((((&g_314 == l_326) >= ((**g_70) = p_49)) , (~((Tag645(/*uint64_t:0:0:268336:e*/*g_315)) <= (safe_rshift_func_uint8_t_u_u(Tag646(/*int16_t:282995:298329:268336:e*/l_330), p_49))))), (((g_300 = (safe_mul_func_uint16_t_u_u((Tag647(/*uint64_t:0:0:268336:e*/g_92) != (safe_mod_func_int8_t_s_s(Tag648(/*int64_t:298329:298329:268336:e*/p_47), Tag649(/*int32_t:270097:270116:268336:e*/l_335)))), p_49))) || 0x9CF201076E64F549LL) , 247UL)))) || Tag650(/*uint8_t:282995:298329:268336:e*/l_336[0][0]));
/*aft_stmt:268336*/
/*aft_stmt:268336*/
/*aft_stmt:268336*/
/*aft_stmt:268336*/
/*aft_stmt:268336*/
/*aft_stmt:268336*/
                    }
                    /*bef_stmt:268386*/
l_304[1] ^= (Tag651(/*int32_t:298329:298329:268386:e*/*l_108));
/*aft_stmt:268386*/
                    /*bef_stmt:268400*/
if (Tag652(/*int64_t:298329:298329:268400:e*/p_47))
                        break;
/*aft_stmt:268400*/
                    /*bef_stmt:268465*/
l_310[4][6] |= (Tag653(/*int32_t:0:0:268465:e*/**g_70));
/*aft_stmt:268465*/
                }
/*aft_stmt:268477*/
/*aft_stmt:268477*/
/*aft_stmt:268477*/
/*aft_stmt:268477*/
/*aft_stmt:268477*/
/*aft_stmt:268477*/
/*aft_stmt:268477*/
/*aft_stmt:268477*/
                for (p_47 = 0; (p_47 > (-21)); --p_47)
                { /* block id: 105 */
                    uint8_t l_341 = 248UL;
                    int64_t *l_351 = &g_101;
                    int64_t **l_350 = &l_351;
                    uint16_t ***l_370 = (void*)0;
                    uint16_t ***l_371 = &g_368[2];
                    /*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
/*bef_stmt:269290*/
(*g_71) = (((Tag654(/*uint8_t:270051:270097:269290:e*/l_341) , (safe_lshift_func_uint16_t_u_u((Tag655(/*const int32_t:0:0:269290:e*/g_99) ^ ((Tag656(/*int32_t:0:0:269290:e*/*g_71)) , ((((safe_lshift_func_int16_t_s_u(((g_349 = l_348) == l_348), 10)) | ((((*l_282) |= 0xA938F1B1C8B13025LL) && (((Tag657(/*int32_t:0:0:269290:e*/g_69[5][6][1]) , (((((void*)0 == &g_89[4][4][3]) & Tag658(/*uint16_t:0:0:269290:e*/g_135)) & (-7L)) , (Tag659(/*int32_t:298329:298329:269290:e*/*l_108)))) >= (Tag660(/*int32_t:282995:298329:269290:e*/*l_77))) != (Tag661(/*uint64_t:0:0:269290:e*/*g_315)))) == 0x0B22L)) || (Tag662(/*int32_t:298329:298329:269290:e*/*l_108))) > Tag663(/*uint8_t:0:0:269290:e*/g_89[4][4][3])))), Tag664(/*int32_t:0:0:269290:e*/g_69[3][2][0])))) && Tag665(/*uint16_t:0:0:269290:e*/g_135)) | (Tag666(/*int32_t:298329:298329:269290:e*/*l_108)));
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
/*aft_stmt:269290*/
                    /*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
/*bef_stmt:269971*/
(*l_74) = (((***l_326) ^= (((l_282 == ((*l_350) = &g_101)) < 0x45CBL) & ((Tag667(/*int64_t:0:0:269971:e*/g_101) , (safe_lshift_func_uint8_t_u_u(0x7EL, ((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*l_262) = Tag668(/*const int32_t:0:0:269971:e*/g_99)), ((safe_lshift_func_int16_t_s_s(0x81FDL, (safe_mod_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((Tag669(/*uint8_t:270051:270097:269971:e*/l_341) , p_49) >= p_49), (Tag670(/*int32_t:282995:298329:269971:e*/*l_77)))) , 0xAB8EF6BCL), (Tag671(/*int32_t:0:0:269971:e*/*g_71)))) , 0x4DC154CDL) | (Tag672(/*uint32_t:298329:298329:269971:e*/*p_46))) || 0x56L), 0xDD0B4287L)) , Tag673(/*uint32_t:0:0:269971:e*/g_169)) > p_47), Tag674(/*int32_t:270097:270116:269971:e*/l_303))))) ^ 0x49L))), Tag675(/*uint8_t:0:0:269971:e*/g_89[4][4][3]))) , Tag676(/*uint8_t:270051:270097:269971:e*/l_341))))) , Tag677(/*uint8_t:0:0:269971:e*/g_89[4][4][3])))) , p_46);
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
/*aft_stmt:269971*/
                    (*l_371) = g_368[2];
                    if (p_49)
                    { /* block id: 114 */
                        return p_47;
                    }
                    else
                    { /* block id: 116 */
                        /*bef_stmt:270040*/
return Tag678(/*int16_t:0:0:270040:e*/g_143);
/*aft_stmt:270040*/
                    }
                }
                /*bef_stmt:270093*/
(*g_71) = Tag679(/*int64_t:298329:298329:270093:e*/p_47);
/*aft_stmt:270093*/
            }
        }
        else
        { /* block id: 122 */
            int32_t *l_372 = (void*)0;
            int32_t *l_373 = &l_302;
            int16_t * const l_374 = &g_143;
            int16_t **l_375 = &l_240;
            int32_t *l_391[8];
            int i;
            for (i = 0; i < 8; i++)
                l_391[i] = (void*)0;
            /*bef_stmt:270411*/
(*l_373) ^= (Tag680(/*int32_t:298329:298329:270411:e*/*l_108));
/*aft_stmt:270411*/
            (*l_67) = (*g_70);
            /*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
/*bef_stmt:272147*/
if ((g_394 |= (((((l_374 != ((*l_375) = &g_239)) | (((safe_mul_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((((*l_374) |= ((((Tag681(/*int32_t:298329:298329:272147:e*/*l_108)) , (Tag682(/*uint8_t:298329:298329:272147:e*/p_49) , (**l_177))) != p_48) > (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((!((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s(((g_79 &= ((*l_373) = (-1L))) , 0x208D911FL), (Tag683(/*uint16_t:0:0:272147:e*/g_135) <= (Tag684(/*uint64_t:0:0:272147:e*/*g_315))))), Tag685(/*uint16_t:0:0:272147:e*/g_131))), Tag686(/*int64_t:298329:298329:272147:e*/p_47))) | (Tag687(/*uint16_t:0:0:272147:e*/*g_369)))) != 2L), Tag688(/*uint32_t:0:0:272147:e*/g_94))), 6)))) & Tag689(/*const uint8_t:298329:298329:272147:e*/l_392)), Tag690(/*uint8_t:0:0:272147:e*/g_89[4][4][3]))) | Tag691(/*uint64_t:0:0:272147:e*/g_300)), 0x19L)) != (Tag692(/*int32_t:0:0:272147:e*/**g_70))) & (Tag693(/*uint32_t:298329:298329:272147:e*/*p_46)))) , 9L) , (void*)0) != l_393[0][0])))
            { /* block id: 130 */
                int32_t *l_420[3];
                int32_t l_421 = (-1L);
                int i;
                for (i = 0; i < 3; i++)
                    l_420[i] = &g_79;
                /*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
/*bef_stmt:272122*/
(*l_373) ^= ((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(Tag694(/*uint16_t:0:0:272122:e*/g_135), (safe_mul_func_int16_t_s_s((-1L), ((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((6UL >= ((safe_rshift_func_int8_t_s_u((((**l_67) = ((safe_sub_func_int32_t_s_s(8L, (safe_lshift_func_uint16_t_u_u(9UL, 3)))) <= (((((p_47 = ((g_415 = &g_208) != l_417)) >= ((Tag695(/*uint64_t:0:0:272122:e*/*g_315)) , (safe_add_func_int16_t_s_s(((*l_374) = ((l_391[2] = l_420[1]) != p_46)), Tag696(/*int32_t:0:0:272122:e*/g_79))))) ^ Tag697(/*uint8_t:298329:298329:272122:e*/p_49)) && (Tag698(/*int32_t:282995:298329:272122:e*/*l_77))) , Tag699(/*const int32_t:0:0:272122:e*/g_99)))) || (-5L)), Tag700(/*uint8_t:298329:298329:272122:e*/p_49))) ^ 0xC0L)), (Tag701(/*uint16_t:0:0:272122:e*/*g_369)))), 0x9EFA2BEDL)), Tag702(/*int32_t:272128:272153:272122:e*/l_421))) ^ (Tag703(/*uint64_t:0:0:272122:e*/*g_315))))))) || (Tag704(/*int32_t:282995:298329:272122:e*/*l_68))) ^ Tag705(/*uint16_t:0:0:272122:e*/g_394)), Tag706(/*int32_t:272128:272153:272122:e*/l_421))), 0L)) ^ Tag707(/*uint16_t:282995:298329:272122:e*/l_422));
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
/*aft_stmt:272122*/
            }
            else
            { /* block id: 137 */
                /*bef_stmt:272142*/
return Tag708(/*int64_t:298329:298329:272142:e*/p_47);
/*aft_stmt:272142*/
            }
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
/*aft_stmt:272147*/
        }
/*aft_stmt:272165*/
        for (g_208 = 0; (g_208 == (-27)); --g_208)
        { /* block id: 143 */
            int32_t l_438[4][10][3] = {{{0L,0x9C4CCF5BL,0x916F802EL},{0xE9AF74B9L,0xBCC2ADB7L,0x0A8174C1L},{8L,1L,0xAB1CBFD8L},{0xE9AF74B9L,0xDEA721B8L,0xDEA721B8L},{0L,0xCFBCF9DDL,0x9364D3CEL},{0L,0xBCC2ADB7L,0xDEA721B8L},{0xAB1CBFD8L,0xD5E26DA1L,0xAB1CBFD8L},{1L,0xE61F8264L,0x0A8174C1L},{0L,0xD5E26DA1L,0x916F802EL},{0xBCC2ADB7L,0xBCC2ADB7L,(-3L)}},{{8L,0xCFBCF9DDL,0xAB1CBFD8L},{0xBCC2ADB7L,0xDEA721B8L,0xE61F8264L},{0L,1L,0x9364D3CEL},{1L,0xBCC2ADB7L,0xE61F8264L},{0xAB1CBFD8L,0x9C4CCF5BL,0xAB1CBFD8L},{0L,0xE61F8264L,(-3L)},{0L,0x9C4CCF5BL,0x916F802EL},{0xE9AF74B9L,0xBCC2ADB7L,0x0A8174C1L},{8L,1L,0xAB1CBFD8L},{0xE9AF74B9L,0xDEA721B8L,0xDEA721B8L}},{{0L,0xCFBCF9DDL,0x9364D3CEL},{0L,0xBCC2ADB7L,0xDEA721B8L},{0xAB1CBFD8L,0xD5E26DA1L,0xAB1CBFD8L},{1L,0xE61F8264L,0x0A8174C1L},{0L,0xD5E26DA1L,0x916F802EL},{0xBCC2ADB7L,0xBCC2ADB7L,(-3L)},{8L,0xCFBCF9DDL,0xAB1CBFD8L},{0xBCC2ADB7L,0xDEA721B8L,0xE61F8264L},{0L,1L,0x9364D3CEL},{1L,0xBCC2ADB7L,0xE61F8264L}},{{0xAB1CBFD8L,0x9C4CCF5BL,0xAB1CBFD8L},{0L,0xE61F8264L,(-3L)},{0L,0x9C4CCF5BL,0x916F802EL},{0xE9AF74B9L,0xBCC2ADB7L,0x0A8174C1L},{8L,1L,0xAB1CBFD8L},{0xE9AF74B9L,0xDEA721B8L,0xDEA721B8L},{0L,0xCFBCF9DDL,0x9364D3CEL},{0L,0xBCC2ADB7L,0xDEA721B8L},{0xAB1CBFD8L,0xD5E26DA1L,0xAB1CBFD8L},{1L,0xE61F8264L,0x0A8174C1L}}};
            int64_t l_516[6] = {0L,0L,0L,0L,0L,0L};
            int32_t l_517[6][6] = {{0xB3094976L,1L,(-9L),(-3L),(-1L),(-1L)},{(-3L),(-1L),(-1L),(-3L),(-9L),1L},{0xB3094976L,0x99E091EBL,1L,1L,(-1L),0xAD46D742L},{(-1L),(-9L),0x91C05EF8L,(-9L),(-1L),(-1L)},{0xAD46D742L,0x99E091EBL,0xE08067BEL,(-4L),(-9L),1L},{1L,(-1L),0x99E091EBL,0x99E091EBL,(-1L),1L}};
            int i, j, k;
        }
        /*bef_stmt:282989*/
if ((Tag709(/*int32_t:298329:298329:282989:e*/*l_108)))
        { /* block id: 190 */
            uint64_t l_536 = 3UL;
            uint32_t ** const **l_557 = (void*)0;
            int32_t l_568[2];
            int64_t * const l_586[3][10][5] = {{{&g_101,&l_585,&l_585,&g_101,&l_585},{(void*)0,&l_585,&l_585,(void*)0,&g_101},{&l_585,&g_101,(void*)0,&l_585,&l_585},{&l_585,&g_101,&l_585,&l_585,(void*)0},{(void*)0,&g_101,&g_101,&l_585,&g_101},{&g_101,&g_101,&g_101,&l_585,&g_101},{&l_585,(void*)0,&l_585,&g_101,&l_585},{&l_585,(void*)0,&g_101,&g_101,&g_101},{&l_585,(void*)0,&l_585,&l_585,(void*)0},{&l_585,&g_101,&l_585,&g_101,&g_101}},{{&l_585,&l_585,&l_585,&l_585,(void*)0},{&g_101,&l_585,&l_585,(void*)0,(void*)0},{&l_585,&g_101,&l_585,&g_101,&l_585},{&g_101,&l_585,&l_585,&l_585,&g_101},{&l_585,&l_585,&l_585,&l_585,(void*)0},{(void*)0,&l_585,&g_101,&g_101,&l_585},{(void*)0,&g_101,&l_585,&g_101,&g_101},{(void*)0,&g_101,&l_585,&g_101,&g_101},{(void*)0,&g_101,&l_585,&l_585,&l_585},{&g_101,(void*)0,(void*)0,&l_585,&l_585}},{{&g_101,(void*)0,&l_585,&g_101,&l_585},{(void*)0,&g_101,(void*)0,(void*)0,&l_585},{&l_585,&g_101,(void*)0,&l_585,&l_585},{&g_101,&l_585,&g_101,&g_101,&l_585},{&g_101,&l_585,(void*)0,&l_585,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&l_585,&l_585,&l_585},{&g_101,&g_101,&g_101,(void*)0,(void*)0},{&g_101,&l_585,&g_101,&g_101,&g_101},{&g_101,&g_101,(void*)0,(void*)0,&l_585}}};
            uint32_t *l_598 = &l_224;
            int32_t **l_614[5] = {&g_71,&g_71,&g_71,&g_71,&g_71};
            int32_t **l_615 = (void*)0;
            uint16_t ***l_616 = &l_393[0][0];
            int32_t l_711 = (-2L);
            uint32_t l_721 = 0UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_568[i] = 0x78519C44L;
            for (g_239 = 0; (g_239 != 0); g_239 = safe_add_func_int32_t_s_s(g_239, 9))
            { /* block id: 193 */
                int32_t *l_530 = &l_112[0];
                /*bef_stmt:278394*/
(*l_530) |= (Tag710(/*int32_t:0:0:278394:e*/**g_70));
/*aft_stmt:278394*/
                /*bef_stmt:278418*/
if ((Tag711(/*int32_t:0:0:278418:e*/*g_71)))
                    break;
/*aft_stmt:278418*/
                /*bef_stmt:278440*/
if ((Tag712(/*int32_t:0:0:278440:e*/*g_71)))
                    continue;
/*aft_stmt:278440*/
            }
lbl_772:
            for (g_141 = 0; (g_141 <= 2); g_141 += 1)
            { /* block id: 200 */
                int32_t l_531[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
                int32_t *l_532 = &g_69[3][2][0];
                uint8_t l_533 = 0xFFL;
                int8_t *l_560 = &g_457;
                int8_t *l_562 = &l_301;
                uint32_t l_675 = 0x0F030724L;
                int i;
                l_533--;
                /*bef_stmt:278847*/
if (Tag713(/*uint64_t:281972:282995:278847:e*/l_536))
                    break;
/*aft_stmt:278847*/
            }
lbl_771:
            (*l_67) = (*g_70);
            for (g_637 = 0; (g_637 <= 2); g_637 += 1)
            { /* block id: 273 */
                int32_t l_713 = (-10L);
                int32_t l_717[8] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                const int32_t l_762[9] = {0xFE75F887L,0xFE75F887L,0xFE75F887L,0xFE75F887L,0xFE75F887L,0xFE75F887L,0xFE75F887L,0xFE75F887L,0xFE75F887L};
                uint32_t l_768 = 0x1F9BA150L;
                int i;
                if (l_112[g_637])
                    break;
                /*bef_stmt:279413*/
if ((Tag714(/*int32_t:298329:298329:279413:e*/*l_108)))
                    break;
/*aft_stmt:279413*/
                for (l_330 = 0; (l_330 <= 2); l_330 += 1)
                { /* block id: 278 */
                    int64_t l_708 = 8L;
                    int32_t l_709 = 0xC9A0DDC9L;
                    int32_t l_710 = (-10L);
                    int32_t l_714 = 0L;
                    int32_t l_718 = (-2L);
                    int32_t l_720 = 0x3BF93B83L;
                    /*bef_stmt:281354*/
/*bef_stmt:281354*/
if (((Tag715(/*int32_t:0:0:281354:e*/*g_71)) == (0x5784FBCFD712ACB6LL != (safe_rshift_func_uint8_t_u_u(Tag716(/*int64_t:281937:281955:281354:e*/l_708), 0)))))
                    { /* block id: 279 */
                        int32_t l_712 = (-5L);
                        int32_t l_715 = 1L;
                        int32_t l_716 = 0xA161FCA8L;
                        int32_t l_719 = 0x69B06446L;
                        int i;
                        l_721++;
                        /*bef_stmt:279843*/
return Tag717(/*int64_t:298329:298329:279843:e*/p_47);
/*aft_stmt:279843*/
                    }
                    else
                    { /* block id: 282 */
                        uint16_t *l_759 = &l_311;
                        int32_t **l_760 = &l_77;
                        int8_t *l_761 = &g_694[1];
                        /*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
/*bef_stmt:281055*/
l_718 = ((((*l_77) = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((g_101 = (safe_rshift_func_int8_t_s_u(((((safe_add_func_uint64_t_u_u(0xAEB9F8CD926CCB3ELL, ((safe_add_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(0xF7L, ((Tag718(/*int32_t:298329:298329:281055:e*/*l_108)) & (Tag719(/*int32_t:281937:281955:281055:e*/l_709) & (((safe_mod_func_int8_t_s_s(((*l_761) = (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(Tag720(/*int32_t:281937:281955:281055:e*/l_714), (((((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((0x42FDL ^ ((l_759 != (void*)0) || ((void*)0 == l_760))), Tag721(/*int32_t:281955:281972:281055:e*/l_717[7]))), (Tag722(/*const int8_t:0:0:281055:e*/*g_415)))) , Tag723(/*int64_t:298329:298329:281055:e*/p_47)))) != (Tag724(/*uint64_t:0:0:281055:e*/**g_314))) && Tag725(/*uint64_t:0:0:281055:e*/g_300)) & (Tag726(/*int32_t:282995:298329:281055:e*/**l_67))) && 0xC5L))), 0x5C3EL)), Tag727(/*int32_t:281955:281972:281055:e*/l_717[7]))), Tag728(/*int64_t:298329:298329:281055:e*/p_47)))), 0x2AL)) != (Tag729(/*int32_t:282995:298329:281055:e*/*l_77))) == 0x69L))))), (Tag730(/*int32_t:0:0:281055:e*/**g_70)))) , (Tag731(/*uint64_t:0:0:281055:e*/**g_314))), 0xE9C10271A21B44E1LL)) , Tag732(/*uint8_t:298329:298329:281055:e*/p_49)) & Tag733(/*uint8_t:298329:298329:281055:e*/p_49)), Tag734(/*uint8_t:298329:298329:281055:e*/p_49))) >= Tag735(/*int64_t:298329:298329:281055:e*/p_47)))) > (Tag736(/*uint64_t:0:0:281055:e*/*g_315))) != 0UL) > 0x40L), Tag737(/*uint8_t:0:0:281055:e*/g_89[4][4][3])))), Tag738(/*uint8_t:298329:298329:281055:e*/p_49))), 0xD7L)), 7)) , Tag739(/*uint8_t:298329:298329:281055:e*/p_49)), (Tag740(/*uint16_t:0:0:281055:e*/*g_369))))) & Tag741(/*const int32_t:281955:281972:281055:e*/l_762[4])) == Tag742(/*int64_t:298329:298329:281055:e*/p_47));
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
/*aft_stmt:281055*/
                        /*bef_stmt:281320*/
/*bef_stmt:281320*/
/*bef_stmt:281320*/
l_720 = (g_767 |= (((((void*)0 == &g_694[1]) , 0x37L) >= ((((4L ^ ((void*)0 != l_763)) && (Tag743(/*uint32_t:298329:298329:281320:e*/*p_46))) || (Tag744(/*int32_t:281345:281937:281320:e*/**l_760))) , (safe_add_func_uint64_t_u_u((Tag745(/*int32_t:298329:298329:281320:e*/*l_108)), 0L)))) || 0x85E725A488BCB18DLL));
/*aft_stmt:281320*/
/*aft_stmt:281320*/
/*aft_stmt:281320*/
                        l_768++;
                        /*bef_stmt:281341*/
if (Tag746(/*int64_t:298329:298329:281341:e*/p_47))
                            goto lbl_771;
/*aft_stmt:281341*/
                    }
/*aft_stmt:281354*/
/*aft_stmt:281354*/
                    /*bef_stmt:281370*/
if (Tag747(/*uint32_t:281972:282995:281370:e*/l_721))
                        goto lbl_772;
/*aft_stmt:281370*/
                    for (g_767 = 0; (g_767 <= 3); g_767 += 1)
                    { /* block id: 295 */
                        int i, j, k;
                        /*bef_stmt:281922*/
/*bef_stmt:281922*/
(*g_70) = (((((*g_315) = g_89[(g_767 + 2)][(g_767 + 1)][l_330]) > (!0x2BL)) , (safe_div_func_int8_t_s_s((g_89[(g_767 + 1)][(l_330 + 3)][(g_637 + 1)] && (&l_718 != (*l_67))), (safe_mul_func_uint16_t_u_u((((&g_239 != ((0x38L <= 255UL) , &g_239)) && Tag748(/*int64_t:298329:298329:281922:e*/p_47)) | 0x3D08BAAEL), Tag749(/*int32_t:0:0:281922:e*/g_522)))))) , (*g_70));
/*aft_stmt:281922*/
/*aft_stmt:281922*/
                    }
                }
            }
        }
        else
        { /* block id: 301 */
            uint32_t l_808 = 0UL;
            int8_t *l_809 = &l_323;
            int16_t *l_810 = &l_703;
            uint32_t *l_811 = &g_493;
            int32_t l_812 = 9L;
            int64_t *l_813 = &l_585;
            /*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
/*bef_stmt:282952*/
(*g_71) = (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((0UL | ((safe_add_func_int64_t_s_s(((*l_813) ^= (+(safe_mod_func_int64_t_s_s(Tag750(/*uint8_t:298329:298329:282952:e*/p_49), ((l_812 = ((*l_811) &= (safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s((Tag751(/*const int8_t:0:0:282952:e*/*g_415)), (((safe_lshift_func_int8_t_s_s(((((*l_810) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u(Tag752(/*int64_t:298329:298329:282952:e*/p_47), 9)) < Tag753(/*const uint32_t:298329:298329:282952:e*/l_801)), (-1L))), (safe_rshift_func_int8_t_s_u(((*l_809) ^= ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((Tag754(/*int32_t:282995:298329:282952:e*/*l_77)) < (Tag755(/*int32_t:0:0:282952:e*/g_69[3][2][0]) > Tag756(/*uint32_t:282979:282995:282952:e*/l_808))), Tag757(/*uint32_t:282979:282995:282952:e*/l_808))), Tag758(/*int64_t:298329:298329:282952:e*/p_47))) != Tag759(/*uint32_t:282979:282995:282952:e*/l_808))), Tag760(/*uint16_t:0:0:282952:e*/g_131)))))) ^ 0xE03EL) | Tag761(/*int8_t:0:0:282952:e*/g_208)), (Tag762(/*const int8_t:0:0:282952:e*/*g_415)))) ^ Tag763(/*int64_t:298329:298329:282952:e*/p_47)) && Tag764(/*uint32_t:282979:282995:282952:e*/l_808)))) | Tag765(/*uint8_t:298329:298329:282952:e*/p_49)), Tag766(/*int8_t:0:0:282952:e*/g_208))))) , Tag767(/*int8_t:0:0:282952:e*/g_665)))))), 0L)) || 0x760DD8723BB86235LL)), Tag768(/*uint8_t:298329:298329:282952:e*/p_49))), 65535UL)), Tag769(/*uint32_t:282979:282995:282952:e*/l_808)));
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
/*aft_stmt:282952*/
            /*bef_stmt:282977*/
return Tag770(/*int16_t:0:0:282977:e*/g_143);
/*aft_stmt:282977*/
        }
/*aft_stmt:282989*/
    }
    else
    { /* block id: 310 */
        /*bef_stmt:283031*/
return /*TAG771:STA*/((int64_t)(realsmith_SWISg((int)(p_47)+(31), (int)(p_47)+(38))+(int)(p_47)-(29))+p_47)/*TAG771:END:p_47*/;
/*aft_stmt:283031*/
    }
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*aft_stmt:283036*/
/*bef_stmt:283224*/
/*bef_stmt:283224*/
lbl_993:
    (*l_817) ^= (safe_add_func_uint64_t_u_u((((Tag772(/*int32_t:0:0:283224:e*/**g_70)) != Tag773(/*int16_t:298329:298329:283224:e*/l_816)) >= (((void*)0 != &l_226) && ((void*)0 != &l_602[1]))), 1UL));
/*aft_stmt:283224*/
/*aft_stmt:283224*/
    for (l_224 = 0; (l_224 <= 0); l_224 += 1)
    { /* block id: 316 */
        int16_t l_834 = (-1L);
        int32_t l_843 = 7L;
        uint64_t **l_849 = &l_589;
        uint8_t l_875 = 0x30L;
        int8_t *l_884 = &g_208;
        int8_t ** const l_883 = &l_884;
        int8_t **l_887[3][3] = {{&g_886,&g_886,&g_886},{&l_884,&l_884,&l_884},{&g_886,&g_886,&g_886}};
        uint32_t l_893 = 0x4B2213C1L;
        const int32_t l_925 = 0x89413D72L;
        int16_t *l_943 = &l_703;
        int64_t *l_987[4];
        int64_t **l_995[4];
        uint16_t l_1000 = 0x2A67L;
        int8_t ** const **l_1010 = (void*)0;
        uint8_t l_1020 = 0xAEL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_987[i] = &g_953;
        for (i = 0; i < 4; i++)
            l_995[i] = &l_987[1];
        for (g_239 = 0; (g_239 >= 0); g_239 -= 1)
        { /* block id: 319 */
            uint8_t *l_820[4] = {&g_637,&g_637,&g_637,&g_637};
            int8_t *l_833[10][3][8] = {{{&l_301,&g_665,(void*)0,&g_457,(void*)0,&l_323,&g_694[1],&g_208},{&l_323,(void*)0,&l_301,&l_301,&g_694[1],&g_694[1],&l_323,&l_323},{&l_323,&g_694[0],(void*)0,&g_694[1],&l_301,(void*)0,&g_694[1],(void*)0}},{{&g_694[1],(void*)0,&g_694[1],&g_694[1],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_694[1],&g_694[1],(void*)0,&g_694[1],&g_694[1],&g_694[1],(void*)0},{&l_301,&g_665,&g_457,&g_457,&g_208,&g_208,&g_694[1],&g_694[1]}},{{(void*)0,&g_694[0],&l_323,&l_301,&g_694[1],&l_323,&l_301,&g_694[0]},{&g_665,&l_323,&g_208,&l_301,&l_323,&g_694[1],&g_694[1],(void*)0},{&g_694[0],&g_694[1],&g_665,&l_323,&g_665,&g_665,&g_694[1],&g_694[0]}},{{(void*)0,&l_323,&g_694[1],&g_208,&l_323,&g_694[1],&l_301,&l_323},{&l_323,&g_457,&g_694[1],&l_323,&l_301,&g_208,&g_457,&l_323},{&l_323,&g_694[1],&g_694[0],&g_694[1],&g_694[0],&l_301,&g_694[0],&g_694[1]}},{{(void*)0,(void*)0,(void*)0,&g_208,&g_208,&l_301,&g_694[1],&g_694[1]},{(void*)0,&l_301,&l_301,(void*)0,&g_665,&l_323,&g_208,(void*)0},{(void*)0,&g_694[0],(void*)0,&g_694[1],&g_208,(void*)0,&g_694[1],&g_665}},{{(void*)0,&l_323,&l_323,&l_301,&g_694[0],(void*)0,&l_323,&g_694[0]},{&l_323,(void*)0,&g_208,&g_694[1],&l_301,&g_457,&l_301,(void*)0},{&l_323,&g_694[1],&g_208,&l_323,&l_323,(void*)0,&g_694[1],&l_323}},{{(void*)0,&g_694[1],&l_323,&g_694[1],&g_665,&l_301,&l_301,&l_323},{&g_694[0],&l_301,(void*)0,&g_457,&l_323,&l_323,&g_457,(void*)0},{&g_665,&g_665,&g_208,(void*)0,&g_694[1],&l_301,&g_694[1],(void*)0}},{{(void*)0,&g_694[1],&g_208,&l_323,&g_208,&g_694[1],&l_323,(void*)0},{&g_694[1],&g_457,&l_301,(void*)0,&l_323,(void*)0,&g_694[1],(void*)0},{&g_694[1],&l_323,(void*)0,&g_457,(void*)0,&g_665,&l_301,&l_323}},{{&l_323,&l_323,&l_323,&g_694[1],&l_323,&g_208,&g_694[1],&l_323},{&l_323,&l_323,&l_301,&l_323,&l_323,(void*)0,&g_665,(void*)0},{&g_694[0],(void*)0,&g_694[0],&g_694[1],&l_301,&g_208,&g_694[1],&g_694[0]}},{{(void*)0,&g_665,&l_301,&l_301,(void*)0,&l_301,&l_301,&g_665},{&g_694[0],&l_323,&g_208,&g_694[1],&l_323,&g_208,&g_694[0],(void*)0},{&g_694[1],&l_323,(void*)0,&g_694[1],&g_665,&g_694[1],&l_301,(void*)0}}};
            int32_t l_835 = (-3L);
            int16_t l_842 = 0xFE3FL;
            int64_t **l_848[3][5] = {{&g_847,(void*)0,&g_847,&g_847,(void*)0},{(void*)0,&g_847,&g_847,(void*)0,&g_847},{(void*)0,(void*)0,&g_847,(void*)0,(void*)0}};
            uint64_t ***l_850 = &l_849;
            int i, j, k;
            /*bef_stmt:289653*/
/*bef_stmt:289653*/
/*bef_stmt:289653*/
/*bef_stmt:289653*/
/*bef_stmt:289653*/
/*bef_stmt:289653*/
/*bef_stmt:289653*/
/*bef_stmt:289653*/
/*bef_stmt:289653*/
/*bef_stmt:289653*/
(*l_817) = (((safe_mod_func_int8_t_s_s(((p_49 = 0xEBL) , 0L), ((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(0x1CL, (safe_sub_func_int8_t_s_s((-1L), (safe_mul_func_int8_t_s_s(g_571[g_239], (safe_sub_func_int8_t_s_s((l_835 = (l_834 = 3L)), (safe_rshift_func_int16_t_s_s(Tag774(/*int64_t:298329:298329:289653:e*/p_47), ((safe_mod_func_uint16_t_u_u(((((safe_div_func_int8_t_s_s((Tag775(/*int32_t:298329:298329:289653:e*/*l_817)), (Tag776(/*int16_t:289811:298290:289653:e*/l_842) | Tag777(/*int64_t:298329:298329:289653:e*/p_47)))) <= 18446744073709551615UL) , &g_13) == (void*)0), Tag778(/*int32_t:298290:298329:289653:e*/l_843))) == (Tag779(/*int32_t:298329:298329:289653:e*/*l_817))))))))))))), (Tag780(/*uint32_t:298329:298329:289653:e*/*p_46)))) || (Tag781(/*uint64_t:0:0:289653:e*/**g_314))), g_571[g_239])) , Tag782(/*int16_t:0:0:289653:e*/g_141)))) ^ Tag783(/*int16_t:289811:298290:289653:e*/l_842)) ^ 0x839464D46CCC5F4FLL);
/*aft_stmt:289653*/
/*aft_stmt:289653*/
/*aft_stmt:289653*/
/*aft_stmt:289653*/
/*aft_stmt:289653*/
/*aft_stmt:289653*/
/*aft_stmt:289653*/
/*aft_stmt:289653*/
/*aft_stmt:289653*/
/*aft_stmt:289653*/
            (*l_108) = (((((*l_589)++) , g_846[3]) == l_848[1][3]) < 0x82L);
            (*l_850) = l_849;
        }
        /*bef_stmt:298254*/
if ((0xA08049A2L >= (Tag784(/*uint32_t:298329:298329:298254:e*/*p_46))))
        { /* block id: 328 */
            int64_t *l_851 = &g_101;
            int8_t *l_859 = &g_694[1];
            int8_t **l_858 = &l_859;
            int32_t *l_860 = &l_843;
            /*bef_stmt:290371*/
/*bef_stmt:290371*/
/*bef_stmt:290371*/
/*bef_stmt:290371*/
/*bef_stmt:290371*/
/*bef_stmt:290371*/
/*bef_stmt:290371*/
(*l_860) ^= ((*g_71) ^= (((*l_851) = Tag785(/*uint8_t:298329:298329:290371:e*/p_49)) , ((safe_rshift_func_int8_t_s_s(((Tag786(/*int32_t:298329:298329:290371:e*/*l_817)) > ((safe_div_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(Tag787(/*uint8_t:298329:298329:290371:e*/p_49), ((((*l_858) = &g_208) == (((void*)0 == &g_89[1][4][3]) , &l_301)) , Tag788(/*int64_t:298329:298329:290371:e*/p_47)))) > 0x7CL), (-1L))) != Tag789(/*uint8_t:298329:298329:290371:e*/p_49))), (Tag790(/*const int8_t:0:0:290371:e*/*g_415)))) == Tag791(/*uint16_t:0:0:290371:e*/g_131))));
/*aft_stmt:290371*/
/*aft_stmt:290371*/
/*aft_stmt:290371*/
/*aft_stmt:290371*/
/*aft_stmt:290371*/
/*aft_stmt:290371*/
/*aft_stmt:290371*/
            /*bef_stmt:290387*/
return Tag792(/*int32_t:298290:298329:290387:e*/l_843);
/*aft_stmt:290387*/
        }
        else
        { /* block id: 334 */
            int8_t l_862 = 1L;
            uint8_t *l_868 = &g_89[4][4][3];
            int16_t *l_872 = (void*)0;
            int16_t *l_873 = &l_625;
            int16_t *l_874 = &g_239;
            uint32_t *l_876 = &g_94;
            uint32_t l_877 = 0UL;
            uint64_t * const *l_888 = &l_602[1];
            int8_t l_892 = 0x01L;
            uint16_t ***l_924 = (void*)0;
            int32_t l_1022 = 2L;
            int32_t l_1029 = 1L;
            /*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
/*bef_stmt:291457*/
if ((((&g_369 == (void*)0) > (Tag793(/*uint64_t:0:0:291457:e*/*g_315))) , (l_877 ^= (((*p_46) = ((*l_876) |= (((((+Tag794(/*int8_t:298237:298290:291457:e*/l_862)) , ((safe_mod_func_uint8_t_u_u((!(((*l_874) &= ((*l_873) &= ((&g_70 == ((((*g_71) = ((Tag795(/*int8_t:298237:298290:291457:e*/l_862) , (safe_div_func_int8_t_s_s((Tag796(/*const int8_t:0:0:291457:e*/*g_415)), ((*l_868) &= Tag797(/*int8_t:0:0:291457:e*/g_665))))) != (safe_rshift_func_uint16_t_u_s(65535UL, Tag798(/*int16_t:298290:298329:291457:e*/l_834))))) , Tag799(/*int16_t:298290:298329:291457:e*/l_834)) , l_871)) == (Tag800(/*uint32_t:298329:298329:291457:e*/*p_46))))) != 0x5370L)), Tag801(/*int8_t:298237:298290:291457:e*/l_862))) ^ Tag802(/*uint8_t:298329:298329:291457:e*/p_49))) || Tag803(/*uint8_t:298290:298329:291457:e*/l_875)) != (Tag804(/*uint32_t:298329:298329:291457:e*/*p_46))) <= (Tag805(/*uint64_t:0:0:291457:e*/**g_314))))) <= (-1L)))))
            { /* block id: 342 */
                uint8_t **l_878 = &l_868;
                l_879 = l_878;
            }
            else
            { /* block id: 344 */
                /*bef_stmt:291452*/
return Tag806(/*uint8_t:298329:298329:291452:e*/p_49);
/*aft_stmt:291452*/
            }
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
/*aft_stmt:291457*/
            /*bef_stmt:298151*/
/*bef_stmt:298151*/
/*bef_stmt:298151*/
/*bef_stmt:298151*/
/*bef_stmt:298151*/
/*bef_stmt:298151*/
/*bef_stmt:298151*/
/*bef_stmt:298151*/
if (((*g_71) = (safe_mod_func_int8_t_s_s(((((((l_883 == (l_887[2][1] = g_885)) , l_888) == ((((safe_mul_func_int16_t_s_s(((*l_874) = (((g_891[2][3] = &g_79) != (((*p_46) |= ((((*l_868) = (((-1L) & (((-4L) > Tag807(/*uint8_t:298329:298329:298151:e*/p_49)) > 0x6EL)) , (0x56C3L ^ Tag808(/*uint8_t:298329:298329:298151:e*/p_49)))) < Tag809(/*int64_t:298329:298329:298151:e*/p_47)) , 4294967295UL)) , &g_705)) || Tag810(/*int8_t:298237:298290:298151:e*/l_892))), Tag811(/*uint8_t:298329:298329:298151:e*/p_49))) , (Tag812(/*int32_t:298329:298329:298151:e*/*l_108))) , Tag813(/*uint8_t:298290:298329:298151:e*/l_875)) , (void*)0)) > 0x38L) != 7L) , Tag814(/*uint32_t:298290:298329:298151:e*/l_893)), 0xBBL))))
            { /* block id: 353 */
                int64_t l_906 = (-1L);
                const uint32_t **l_956 = &l_50;
                const int64_t **l_963 = &l_764;
                uint16_t *l_988 = &g_105;
                for (l_843 = 0; (l_843 <= 2); l_843 += 1)
                { /* block id: 356 */
                    int16_t **l_942 = &l_873;
                    int32_t *l_946 = &l_112[0];
                    const uint32_t ***l_957 = (void*)0;
                    const uint32_t ***l_958 = &l_956;
                    const int64_t ***l_964 = &l_763;
                    const int64_t ***l_965 = &l_963;
                    int64_t *l_992 = &l_906;
                    int i, j;
                    for (g_135 = 0; g_135 < 3; g_135 += 1)
                    {
                        l_112[g_135] = 0x06ABB4C0L;
                    }
                    for (l_625 = 2; (l_625 >= 0); l_625 -= 1)
                    { /* block id: 360 */
                        uint32_t ***l_902 = &l_51;
                        int i, j, k;
                        /*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
/*bef_stmt:293448*/
g_69[(l_224 + 5)][(l_843 + 4)][l_224] = (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((*l_880) = ((g_69[(l_224 + 5)][(l_625 + 1)][(l_224 + 1)] == (((g_694[l_224] == ((-10L) >= (((++(**l_849)) <= (safe_div_func_int16_t_s_s(((((Tag815(/*int8_t:0:0:293448:e*/**g_885)) == ((l_902 != (*g_349)) <= (~((safe_add_func_int32_t_s_s(((((255UL & ((6L | Tag816(/*int64_t:298329:298329:293448:e*/p_47)) >= 0x78F4L)) , Tag817(/*int64_t:298329:298329:293448:e*/p_47)) && (-9L)) , Tag818(/*uint32_t:298237:298290:293448:e*/l_877)), (Tag819(/*int32_t:0:0:293448:e*/**g_70)))) , (Tag820(/*uint32_t:298329:298329:293448:e*/*p_46)))))) > Tag821(/*int64_t:296844:298237:293448:e*/l_906)) , 0L), 0x64BDL))) <= Tag822(/*uint32_t:298290:298329:293448:e*/l_893)))) & Tag823(/*int16_t:298290:298329:293448:e*/l_834)) | (-1L))) | Tag824(/*uint8_t:298329:298329:293448:e*/p_49))), Tag825(/*int64_t:298329:298329:293448:e*/p_47))) , 1UL) , Tag826(/*int64_t:298329:298329:293448:e*/p_47)), 0L));
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
/*aft_stmt:293448*/
                        /*bef_stmt:294101*/
/*bef_stmt:294101*/
/*bef_stmt:294101*/
/*bef_stmt:294101*/
/*bef_stmt:294101*/
/*bef_stmt:294101*/
/*bef_stmt:294101*/
/*bef_stmt:294101*/
/*bef_stmt:294101*/
(*l_817) &= (Tag827(/*uint16_t:0:0:294101:e*/g_394) >= ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((Tag828(/*uint8_t:298329:298329:294101:e*/p_49) & ((**l_879) = (safe_mul_func_uint16_t_u_u(4UL, (((safe_mul_func_int8_t_s_s((((-9L) != (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(65535UL, 1)), ((0xE5A1FD8D3D39559ALL | (l_888 != (((+((-8L) ^ (safe_mul_func_int16_t_s_s((((l_924 == (void*)0) && (-1L)) , Tag829(/*uint8_t:0:0:294101:e*/g_89[4][4][3])), Tag830(/*int64_t:298329:298329:294101:e*/p_47))))) , 0xC418F4B9BA959B72LL) , &g_315))) != Tag831(/*int16_t:0:0:294101:e*/g_141))))) , Tag832(/*uint8_t:298329:298329:294101:e*/p_49)), 0x19L)) , Tag833(/*int64_t:298329:298329:294101:e*/p_47)) > 0x702FL))))) || 0xE149L), 3)) <= Tag834(/*const int32_t:298290:298329:294101:e*/l_925)) , (-6L)), 5)), (-1L))) || (Tag835(/*uint32_t:298329:298329:294101:e*/*p_46))));
/*aft_stmt:294101*/
/*aft_stmt:294101*/
/*aft_stmt:294101*/
/*aft_stmt:294101*/
/*aft_stmt:294101*/
/*aft_stmt:294101*/
/*aft_stmt:294101*/
/*aft_stmt:294101*/
/*aft_stmt:294101*/
                        /*bef_stmt:294287*/
/*bef_stmt:294287*/
/*bef_stmt:294287*/
/*bef_stmt:294287*/
(*l_817) &= (Tag836(/*uint64_t:0:0:294287:e*/g_571[0]) && (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(0L, 1L)), (((Tag837(/*int64_t:298329:298329:294287:e*/p_47) || Tag838(/*uint16_t:0:0:294287:e*/g_131)) >= Tag839(/*uint8_t:298329:298329:294287:e*/p_49)) , ((*g_369)--)))));
/*aft_stmt:294287*/
/*aft_stmt:294287*/
/*aft_stmt:294287*/
/*aft_stmt:294287*/
                    }
                    /*bef_stmt:294728*/
/*bef_stmt:294728*/
/*bef_stmt:294728*/
/*bef_stmt:294728*/
(*l_817) = (safe_div_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((Tag840(/*int32_t:0:0:294728:e*/*g_71)), (safe_rshift_func_uint16_t_u_s(65535UL, 14)))), (((*l_942) = &g_239) == l_943))) >= (((safe_sub_func_int32_t_s_s(((void*)0 != l_946), (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((void*)0 != g_951) , &p_47) != &p_47), Tag841(/*int8_t:298237:298290:294728:e*/l_862))), 249UL)))) ^ 0UL) == 0x83B35482L)) ^ Tag842(/*int64_t:0:0:294728:e*/g_953)), (Tag843(/*int8_t:0:0:294728:e*/**g_885))));
/*aft_stmt:294728*/
/*aft_stmt:294728*/
/*aft_stmt:294728*/
/*aft_stmt:294728*/
                    /*bef_stmt:296300*/
/*bef_stmt:296300*/
/*bef_stmt:296300*/
/*bef_stmt:296300*/
/*bef_stmt:296300*/
/*bef_stmt:296300*/
/*bef_stmt:296300*/
/*bef_stmt:296300*/
if ((Tag844(/*int64_t:296844:298237:296300:e*/l_906) , (safe_div_func_uint32_t_u_u((((*l_958) = l_956) == ((**l_348) = &p_48)), (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((&g_847 == ((*l_965) = ((*l_964) = l_963))), (((((Tag845(/*uint32_t:298329:298329:296300:e*/l_966[0][6][0]) != (0x04A7L | (safe_add_func_uint64_t_u_u(((*g_315) |= (Tag846(/*const int32_t:298290:298329:296300:e*/l_925) ^ (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((Tag847(/*int32_t:0:0:296300:e*/*g_71)), (Tag848(/*int32_t:296822:296844:296300:e*/*l_946)))), (-1L))))), l_843)))) , Tag849(/*int64_t:298329:298329:296300:e*/p_47)) != 3L) , Tag850(/*int8_t:298237:298290:296300:e*/l_892)) ^ Tag851(/*int64_t:298329:298329:296300:e*/p_47)))), 4294967286UL))))))
                    { /* block id: 376 */
                        int8_t ***l_974 = &l_887[2][1];
                        int8_t ****l_973 = &l_974;
                        int32_t l_983 = 0xE338ACF8L;
                        int64_t **l_989 = &g_847;
                        int64_t **l_990 = (void*)0;
                        int64_t **l_991[4][7];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_991[i][j] = (void*)0;
                        }
                        (*l_973) = &g_885;
                        /*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
/*bef_stmt:296208*/
(*g_71) = (Tag852(/*uint8_t:298329:298329:296208:e*/p_49) != (Tag853(/*uint8_t:298329:298329:296208:e*/p_49) , (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s(Tag854(/*int32_t:296212:296822:296208:e*/l_983), (Tag855(/*int32_t:0:0:296208:e*/*g_71)))), (((safe_sub_func_uint16_t_u_u(((*l_817) = Tag856(/*int64_t:298329:298329:296208:e*/p_47)), (((~Tag857(/*uint16_t:0:0:296208:e*/g_639)) | ((((l_987[0] == (l_992 = ((*l_989) = ((l_988 == (void*)0) , (void*)0)))) && Tag858(/*int64_t:298329:298329:296208:e*/p_47)) ^ (Tag859(/*uint32_t:298329:298329:296208:e*/*p_46))) | Tag860(/*uint8_t:298329:298329:296208:e*/p_49))) == (-5L)))) ^ Tag861(/*uint8_t:298329:298329:296208:e*/p_49)) & 0xEFCAL))), 0)) ^ Tag862(/*int64_t:298329:298329:296208:e*/p_47)), 0x6CL))));
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
/*aft_stmt:296208*/
                    }
                    else
                    { /* block id: 382 */
                        /*bef_stmt:296234*/
if (Tag863(/*int8_t:298237:298290:296234:e*/l_862))
                            goto lbl_993;
/*aft_stmt:296234*/
                        /*bef_stmt:296257*/
if (Tag864(/*uint32_t:298329:298329:296257:e*/l_994[6]))
                            break;
/*aft_stmt:296257*/
                        /*bef_stmt:296291*/
(**g_70) = Tag865(/*int64_t:296844:298237:296291:e*/l_906);
/*aft_stmt:296291*/
                    }
/*aft_stmt:296300*/
/*aft_stmt:296300*/
/*aft_stmt:296300*/
/*aft_stmt:296300*/
/*aft_stmt:296300*/
/*aft_stmt:296300*/
/*aft_stmt:296300*/
/*aft_stmt:296300*/
                    for (l_893 = 0; (l_893 <= 4); l_893 += 1)
                    { /* block id: 389 */
                        int i, j, k;
                        /*bef_stmt:296784*/
/*bef_stmt:296784*/
/*bef_stmt:296784*/
/*bef_stmt:296784*/
/*bef_stmt:296784*/
g_996 = (((0xD90FB527L ^ (((l_995[0] != &g_847) , ((*l_946) = (((*p_46) &= g_69[(l_843 + 3)][l_224][(l_843 + 1)]) , (g_69[l_893][(l_843 + 1)][l_893] |= Tag866(/*uint8_t:298329:298329:296784:e*/p_49))))) | (((*l_988) = Tag867(/*uint8_t:298329:298329:296784:e*/p_49)) && Tag868(/*int64_t:296844:298237:296784:e*/l_906)))) , Tag869(/*int64_t:298329:298329:296784:e*/p_47)) && (Tag870(/*int32_t:296822:296844:296784:e*/*l_946)));
/*aft_stmt:296784*/
/*aft_stmt:296784*/
/*aft_stmt:296784*/
/*aft_stmt:296784*/
/*aft_stmt:296784*/
                        /*bef_stmt:296806*/
if ((Tag871(/*int32_t:0:0:296806:e*/*g_71)))
                            continue;
/*aft_stmt:296806*/
                    }
                }
            }
            else
            { /* block id: 398 */
                uint64_t l_1009 = 0xC41358316D040695LL;
                const uint64_t *l_1013 = &l_1009;
                const uint64_t **l_1012 = &l_1013;
                const uint64_t ***l_1011 = &l_1012;
                int32_t ***l_1021 = &g_70;
                int32_t l_1025 = 0x45A9286CL;
                int32_t l_1027 = 1L;
                int32_t l_1028 = 0xBCBE5148L;
                int32_t l_1030 = (-3L);
                for (l_301 = 0; (l_301 < 25); l_301 = safe_add_func_int64_t_s_s(l_301, 1))
                { /* block id: 401 */
                    int32_t *l_999[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_999[i] = &l_102;
                    l_1000++;
                    /*bef_stmt:297328*/
if (Tag872(/*int64_t:298329:298329:297328:e*/p_47))
                        break;
/*aft_stmt:297328*/
                }
                /*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
/*bef_stmt:297874*/
l_1022 = ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((Tag873(/*uint64_t:298137:298237:297874:e*/l_1009) != ((l_1010 == (((((l_1011 != &g_314) && (safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((Tag874(/*int8_t:298237:298290:297874:e*/l_892) , (Tag875(/*uint8_t:298290:298329:297874:e*/l_1020) , &g_70)) == l_1021) >= 0xECL), (Tag876(/*uint32_t:298329:298329:297874:e*/*p_46)))), (Tag877(/*int32_t:298137:298237:297874:e*/***l_1021)))) == 0x35L) >= 0x21L), 5))) ^ (Tag878(/*const int16_t:0:0:297874:e*/*g_952))) == Tag879(/*uint32_t:298237:298290:297874:e*/l_877)) , (void*)0)) , 0x1E0CL)), Tag880(/*uint8_t:298329:298329:297874:e*/p_49))) <= (Tag881(/*int32_t:298329:298329:297874:e*/*l_108))), 4)) <= Tag882(/*int8_t:298237:298290:297874:e*/l_862)), (Tag883(/*uint16_t:0:0:297874:e*/*g_369)))) < Tag884(/*uint8_t:298329:298329:297874:e*/p_49));
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
/*aft_stmt:297874*/
                for (l_704 = (-8); (l_704 < (-17)); l_704 = safe_sub_func_uint16_t_u_u(l_704, 1))
                { /* block id: 408 */
                    int32_t *l_1026[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1026[i] = &l_112[0];
                    --g_1031;
                    /*bef_stmt:298121*/
return Tag885(/*const uint32_t:298329:298329:298121:e*/l_1034);
/*aft_stmt:298121*/
                }
            }
/*aft_stmt:298151*/
/*aft_stmt:298151*/
/*aft_stmt:298151*/
/*aft_stmt:298151*/
/*aft_stmt:298151*/
/*aft_stmt:298151*/
/*aft_stmt:298151*/
/*aft_stmt:298151*/
            for (g_79 = 0; g_79 < 1; g_79 += 1)
            {
                g_571[g_79] = 0xC865561AB883A08BLL;
            }
        }
/*aft_stmt:298254*/
        /*bef_stmt:298284*/
(*g_71) ^= Tag886(/*uint8_t:298290:298329:298284:e*/l_1020);
/*aft_stmt:298284*/
    }
    /*bef_stmt:298327*/
return Tag887(/*int64_t:298329:298329:298327:e*/p_47);
/*aft_stmt:298327*/
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
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_69[i][j][k], "g_69[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_89[i][j][k], "g_89[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_571[i], "g_571[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_694[i], "g_694[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_953, "g_953", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1037, "g_1037", print_hash_value);
    transparent_crc(g_1060, "g_1060", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1368, "g_1368", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1729[i], "g_1729[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1890, "g_1890", print_hash_value);
    transparent_crc(g_1963, "g_1963", print_hash_value);
    transparent_crc(g_1976, "g_1976", print_hash_value);
    transparent_crc(g_2039, "g_2039", print_hash_value);
    transparent_crc(g_2180, "g_2180", print_hash_value);
    transparent_crc(g_2214, "g_2214", print_hash_value);
    transparent_crc(g_2279, "g_2279", print_hash_value);
    transparent_crc(g_2356, "g_2356", print_hash_value);
    transparent_crc(g_2372, "g_2372", print_hash_value);
    transparent_crc(g_2377, "g_2377", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 550
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

XXX max expression depth: 58
breakdown:
   depth: 1, occurrence: 263
   depth: 2, occurrence: 58
   depth: 3, occurrence: 2
   depth: 4, occurrence: 3
   depth: 5, occurrence: 4
   depth: 7, occurrence: 2
   depth: 8, occurrence: 1
   depth: 12, occurrence: 1
   depth: 13, occurrence: 1
   depth: 14, occurrence: 1
   depth: 15, occurrence: 2
   depth: 16, occurrence: 3
   depth: 17, occurrence: 1
   depth: 18, occurrence: 2
   depth: 19, occurrence: 1
   depth: 20, occurrence: 3
   depth: 21, occurrence: 4
   depth: 22, occurrence: 6
   depth: 23, occurrence: 3
   depth: 24, occurrence: 2
   depth: 25, occurrence: 3
   depth: 26, occurrence: 3
   depth: 27, occurrence: 5
   depth: 28, occurrence: 5
   depth: 29, occurrence: 4
   depth: 30, occurrence: 2
   depth: 32, occurrence: 3
   depth: 33, occurrence: 1
   depth: 34, occurrence: 1
   depth: 36, occurrence: 1
   depth: 37, occurrence: 1
   depth: 44, occurrence: 1
   depth: 45, occurrence: 1
   depth: 46, occurrence: 1
   depth: 54, occurrence: 1
   depth: 58, occurrence: 1

XXX total number of pointers: 489

XXX times a variable address is taken: 1448
XXX times a pointer is dereferenced on RHS: 391
breakdown:
   depth: 1, occurrence: 289
   depth: 2, occurrence: 100
   depth: 3, occurrence: 2
XXX times a pointer is dereferenced on LHS: 330
breakdown:
   depth: 1, occurrence: 291
   depth: 2, occurrence: 35
   depth: 3, occurrence: 3
   depth: 4, occurrence: 1
XXX times a pointer is compared with null: 50
XXX times a pointer is compared with address of another variable: 18
XXX times a pointer is compared with another pointer: 9
XXX times a pointer is qualified to be dereferenced: 6732

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1308
   level: 2, occurrence: 440
   level: 3, occurrence: 88
   level: 4, occurrence: 63
   level: 5, occurrence: 9
XXX number of pointers point to pointers: 164
XXX number of pointers point to scalars: 325
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 24.3
XXX average alias set size: 1.49

XXX times a non-volatile is read: 2143
XXX times a non-volatile is write: 964
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 6

XXX stmts: 263
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 32
   depth: 1, occurrence: 28
   depth: 2, occurrence: 40
   depth: 3, occurrence: 44
   depth: 4, occurrence: 62
   depth: 5, occurrence: 57

XXX percentage a fresh-made variable is used: 16.7
XXX percentage an existing variable is used: 83.3
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: 4160C7C3 */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: 4160C7C3 */
