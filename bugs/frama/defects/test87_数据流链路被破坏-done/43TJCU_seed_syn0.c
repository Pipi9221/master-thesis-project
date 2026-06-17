
int M_NETGRAPH_realsmith_mi8XG = 6;

__attribute__((used)) static int
realsmith_mi8XG(int node)
{
 const int priv = (1);
 (1);
 (1);
 (1);
 return (0);
}

int A_SG_CONTEXT_CMD_realsmith_onl0Q = -5;

int A_SG_CONTEXT_DATA0_realsmith_onl0Q = 20;

int A_SG_CONTEXT_DATA1_realsmith_onl0Q = 4;

int A_SG_CONTEXT_DATA2_realsmith_onl0Q = 6;

int A_SG_CONTEXT_DATA3_realsmith_onl0Q = 6;

int EBUSY_realsmith_onl0Q = 0;

int EINVAL_realsmith_onl0Q = 7;

int F_CONTEXT_CMD_BUSY_realsmith_onl0Q = 16;

int F_FREELIST_realsmith_onl0Q = 3;

unsigned int M_FL_ENTRY_SIZE_LO_realsmith_onl0Q = 20;

unsigned int M_FL_INDEX_LO_realsmith_onl0Q = 14;

int S_FL_ENTRY_SIZE_LO_realsmith_onl0Q = 16;

int realsmith_onl0Q(int *adapter, unsigned int id, int gts_enable,
   int base_addr, unsigned int size, unsigned int bsize,
   unsigned int cong_thres, int gen, unsigned int cidx)
{
 if (base_addr & 0xfff)
  return -EINVAL_realsmith_onl0Q;
 if ((1) & F_CONTEXT_CMD_BUSY_realsmith_onl0Q)
  return -EBUSY_realsmith_onl0Q;
 base_addr >>= 12;
 (1);
 base_addr >>= 32;
 (1);
 (1);
 (1);
 return (1);
}
int realsmith_proxy_5UmS4(int p_0_7grgC, unsigned int p_1_Qrg0p, int p_2_xKhwJ, int p_3_TSZHk, unsigned int p_4_5rwuG, unsigned int p_5_bB4LK, unsigned int p_6_iAOUT, int p_7_kZX42, unsigned int p_8_vI8Gr) {
int proxy_ret_unTnt = realsmith_onl0Q(&(p_0_7grgC), p_1_Qrg0p, p_2_xKhwJ, p_3_TSZHk, p_4_5rwuG, p_5_bB4LK, p_6_iAOUT, p_7_kZX42, p_8_vI8Gr);
return proxy_ret_unTnt;
}


long BLE_ADDR_RANDOM_realsmith_ZbiXQ = -3;

long FALSE_realsmith_ZbiXQ = 4;

long realsmith_ZbiXQ (long to_add, int bd_addr, long wl_addr_type)
{
    long started = FALSE_realsmith_ZbiXQ;
    if(wl_addr_type > BLE_ADDR_RANDOM_realsmith_ZbiXQ) {
        (1);
        return started;
    }
    if (to_add) {
        started = (1);
    }else{
        started = (1);
    }
    return started;
}

int realsmith_xOygn(char* source,char* dest)
    {
        int len;
        len=(1);
        (1);
        return len;
    }
int realsmith_proxy_bc875(char p_0_gU4oB, char p_1_kLvnJ) {
int proxy_ret_RV29g = realsmith_xOygn(&(p_0_gU4oB), &(p_1_kLvnJ));
return proxy_ret_RV29g;
}


int
realsmith_lEWHn(int dev, int child)
{
 int domain;
 if ((1) != 0)
  return (0);
 return ((1));
}

long ADDR_EXPR_realsmith_xV9wU = -9;

long CONSTRUCTOR_realsmith_xV9wU = 6;

long STRING_CST_realsmith_xV9wU = 8;

long VAR_DECL_realsmith_xV9wU = -7;

__attribute__((used)) static int
realsmith_xV9wU (int exp)
{
  (1);
  if ((1) != ADDR_EXPR_realsmith_xV9wU)
    return 0;
  exp = (1);
  if (!exp)
    return 0;
  if ((1) == STRING_CST_realsmith_xV9wU
      || (1) == CONSTRUCTOR_realsmith_xV9wU
      || ((1) == VAR_DECL_realsmith_xV9wU && (1)))
    return (1);
  else
    return 0;
}

int realsmith_GhI4U( unsigned int c )
{
    return ((c) >= 0x8281 && (c) <= 0x829a);
}

long IMMED_WIDTH_ALL_realsmith_1OBSA = 17;

int OP_IMMED_INV_realsmith_1OBSA = -2;

int OP_IMMED_SHIFT_realsmith_1OBSA = 2;

int OP_IMMED_WIDTH_realsmith_1OBSA = 10;

__attribute__((used)) static int realsmith_1OBSA(int instr)
{
 if ((1) ||
     (1) ||
     (1) != IMMED_WIDTH_ALL_realsmith_1OBSA) {
  (1);
  return 0;
 }
 return 1;
}

int EINVAL_realsmith_ZlNZV = 7;

__attribute__((used)) static int realsmith_ZlNZV(unsigned int cpu, unsigned int human)
{
 unsigned long min, max;
 if ((1)) {
  (1);
  return -EINVAL_realsmith_ZlNZV;
 }
 if (human) {
  (1);
  (1);
  (1);
  (1);
  (1);
 } else {
  (1);
 }
 return 0;
}

__attribute__((used)) static int realsmith_Tu6cK( const int *p_peek )
{
    int h = (1);
    if( ((( h >> 21 )&0x07FF) != 0x07FF )
        || (((h >> 19)&0x03) == 1 )
        || (((h >> 17)&0x03) == 0 )
        || (((h >> 12)&0x0F) == 0x0F )
        || (((h >> 10) & 0x03) == 0x03 )
        || ((h & 0x03) == 0x02 ))
    {
        return 0;
    }
    return 1;
}
int realsmith_proxy_kttpi(int p_0_vtVd5) {
int proxy_eJuBt[10] = { 4, 1, p_0_vtVd5, 42, p_0_vtVd5, 45, p_0_vtVd5, p_0_vtVd5, 29, 4 };
int proxy_ret_RCkmI = realsmith_Tu6cK(proxy_eJuBt);
return proxy_ret_RCkmI;
}


__attribute__((used)) static unsigned long realsmith_VC0g3(unsigned long n)
{
   n = (1);
   return n ^ (n >> 1);
}

__attribute__((used)) static int realsmith_P6B8f(int pcie_port, int bus, int dev,
     int fn, int reg)
{
 long address =
     (1);
 if (address)
  return (1);
 else
  return 0xffff;
}

unsigned char realsmith_49rC5(unsigned val)
{
 return ((val / 10) << 4) + val % 10;
}

__attribute__((used)) static int realsmith_FRNXt(int *bio)
{
    if (bio == ((void*)0)) {
        return 0;
    }
    return 1;
}
int realsmith_proxy_zpeaf(int p_0_APb31) {
int proxy_ret_NeRIR = realsmith_FRNXt(&(p_0_APb31));
return proxy_ret_NeRIR;
}


int mrb_ary_ref_realsmith_hOBCv = 18;

__attribute__((used)) static int
realsmith_hOBCv(int *mrb, int self)
{
  int argc;
  int *argv;
  (1);
  return (1);
}
int realsmith_proxy_05DaI(int p_0_t1ohv, int p_1_kEb4f) {
int proxy_ret_HDsmG = realsmith_hOBCv(&(p_0_t1ohv), p_1_kEb4f);
return proxy_ret_HDsmG;
}


__attribute__((used)) static const int const*realsmith_RdnjH(const int const*obj,int const*n){
int num;
if((1))return obj;
if((1)&&(1)){
(1);
return n;
}
else
return ((void*)0);
}
int realsmith_proxy_3svlo(int p_0_fVMxm, int p_1_gFuo7) {
int proxy_qhA3H[11] = { 19, p_0_fVMxm, 70, p_0_fVMxm, p_0_fVMxm, p_0_fVMxm, 10, 23, p_0_fVMxm, p_0_fVMxm, p_0_fVMxm };
int proxy_qI1pZ[16] = { p_1_gFuo7, 23, p_1_gFuo7, 23, 99, 27, 29, p_1_gFuo7, 55, p_1_gFuo7, p_1_gFuo7, p_1_gFuo7, p_1_gFuo7, p_1_gFuo7, 1, 86 };
int * proxy_ret_TfPJ0 = realsmith_RdnjH(proxy_qhA3H, proxy_qI1pZ);
return *proxy_ret_TfPJ0;
}


int O_APPEND_realsmith_0A7hf = 19;

int O_CREAT_realsmith_0A7hf = 5;

int O_EXCL_realsmith_0A7hf = -6;

int O_RDONLY_realsmith_0A7hf = 6;

int O_RDWR_realsmith_0A7hf = -3;

int O_TRUNC_realsmith_0A7hf = -2;

int O_WRONLY_realsmith_0A7hf = 12;

int SSH2_FXF_APPEND_realsmith_0A7hf = 18;

int SSH2_FXF_CREAT_realsmith_0A7hf = 4;

int SSH2_FXF_EXCL_realsmith_0A7hf = 13;

int SSH2_FXF_READ_realsmith_0A7hf = 18;

int SSH2_FXF_TRUNC_realsmith_0A7hf = 16;

int SSH2_FXF_WRITE_realsmith_0A7hf = -4;

__attribute__((used)) static int
realsmith_0A7hf(int pflags)
{
 int flags = 0;
 if ((pflags & SSH2_FXF_READ_realsmith_0A7hf) &&
     (pflags & SSH2_FXF_WRITE_realsmith_0A7hf)) {
  flags = O_RDWR_realsmith_0A7hf;
 } else if (pflags & SSH2_FXF_READ_realsmith_0A7hf) {
  flags = O_RDONLY_realsmith_0A7hf;
 } else if (pflags & SSH2_FXF_WRITE_realsmith_0A7hf) {
  flags = O_WRONLY_realsmith_0A7hf;
 }
 if (pflags & SSH2_FXF_APPEND_realsmith_0A7hf)
  flags |= O_APPEND_realsmith_0A7hf;
 if (pflags & SSH2_FXF_CREAT_realsmith_0A7hf)
  flags |= O_CREAT_realsmith_0A7hf;
 if (pflags & SSH2_FXF_TRUNC_realsmith_0A7hf)
  flags |= O_TRUNC_realsmith_0A7hf;
 if (pflags & SSH2_FXF_EXCL_realsmith_0A7hf)
  flags |= O_EXCL_realsmith_0A7hf;
 return flags;
}

__attribute__((used)) static int
realsmith_867IV(const char *p, unsigned long l)
{
 while (l > 0) {
  if (*p != '\0')
   return (0);
  --l;
  ++p;
 }
 return (1);
}
int realsmith_proxy_3HCtS(char p_0_KC70N, unsigned long p_1_3b1kv) {
char proxy_eU9Gf[14] = { 22, p_0_KC70N, 23, 70, p_0_KC70N, 30, p_0_KC70N, p_0_KC70N, p_0_KC70N, 75, 32, 74, p_0_KC70N, 52 };
int proxy_ret_JKqTw = realsmith_867IV(proxy_eU9Gf, p_1_3b1kv);
return proxy_ret_JKqTw;
}


int EINVAL_realsmith_t6IxN = -8;

int heartbeat_realsmith_t6IxN = 18;

int wd_heartbeat_realsmith_t6IxN = 13;

__attribute__((used)) static int realsmith_t6IxN(int t)
{
 if (t < 1 || t > 65535)
  return -EINVAL_realsmith_t6IxN;
 heartbeat_realsmith_t6IxN = t;
 wd_heartbeat_realsmith_t6IxN = t * 100;
 return 0;
}

__attribute__((used)) static inline int realsmith_13Tlf(int val, int width)
{
 return ((val<<width) + 0x7FFF - val)>>16;
}

__attribute__((used)) static int
realsmith_3n1Po()
{
    int chr = (1);
    (1);
    return chr;
}

__attribute__((used)) static int realsmith_5qb70(const char *color) {
 if ((1) != 7 || color[0] != '#') {
  return 0;
 }
 char *ptr = ((void*)0);
 (1);
 return *ptr == '\0';
}
int realsmith_proxy_ZG7LQ(char p_0_zzuT7) {
char proxy_tIzqe[20] = { 83, p_0_zzuT7, 69, 91, 28, p_0_zzuT7, p_0_zzuT7, 85, 69, p_0_zzuT7, 77, 15, 32, p_0_zzuT7, p_0_zzuT7, p_0_zzuT7, p_0_zzuT7, 27, p_0_zzuT7, p_0_zzuT7 };
int proxy_ret_GKXIG = realsmith_5qb70(proxy_tIzqe);
return proxy_ret_GKXIG;
}


__attribute__((used)) static int realsmith_vWApQ (int pos, unsigned long len) {
  if (pos < 0) pos += (int)len + 1;
  return (pos >= 0) ? pos : 0;
}

int BCS_TRY_BLOCK_realsmith_naeMR = 4;

int CPP_CLOSE_BRACE_realsmith_naeMR = 13;

int CPP_OPEN_BRACE_realsmith_naeMR = -4;

int error_mark_node_realsmith_naeMR = 17;

__attribute__((used)) static int
realsmith_naeMR (int *parser, int in_statement_expr,
         int in_try, int objc_sjlj_exceptions)
{
  int compound_stmt;
  if (!(1))
    return error_mark_node_realsmith_naeMR;
  compound_stmt = (1);
  (1);
  if (objc_sjlj_exceptions)
    (1);
  (1);
  (1);
  return compound_stmt;
}
int realsmith_proxy_QKJY9(int p_0_9C7Uh, int p_1_XIXus, int p_2_udwv9, int p_3_mFGWi) {
int proxy_YWTpq[15] = { 28, 22, 5, p_0_9C7Uh, 46, p_0_9C7Uh, p_0_9C7Uh, 99, p_0_9C7Uh, 4, 85, p_0_9C7Uh, 94, 95, p_0_9C7Uh };
int proxy_ret_zXZpA = realsmith_naeMR(proxy_YWTpq, p_1_XIXus, p_2_udwv9, p_3_mFGWi);
return proxy_ret_zXZpA;
}


int M41T81_CCR_ADDRESS_realsmith_VvCaa = 11;

int M_SMB_BUSY_realsmith_VvCaa = -4;

int M_SMB_ERROR_realsmith_VvCaa = 13;

int R_SMB_CMD_realsmith_VvCaa = 2;

int R_SMB_DATA_realsmith_VvCaa = -2;

int R_SMB_START_realsmith_VvCaa = 10;

int R_SMB_STATUS_realsmith_VvCaa = -10;

int V_SMB_TT_RD1BYTE_realsmith_VvCaa = -5;

int V_SMB_TT_WR1BYTE_realsmith_VvCaa = 16;

__attribute__((used)) static int realsmith_VvCaa(int addr)
{
 while ((1) & M_SMB_BUSY_realsmith_VvCaa)
  ;
 (1);
 (1);
 while ((1) & M_SMB_BUSY_realsmith_VvCaa)
  ;
 (1);
 while ((1) & M_SMB_BUSY_realsmith_VvCaa)
  ;
 if ((1) & M_SMB_ERROR_realsmith_VvCaa) {
  (1);
  return -1;
 }
 return ((1) & 0xff);
}

unsigned char IFLA_XDP_DRV_PROG_ID_realsmith_vnYZI = 4;

unsigned char IFLA_XDP_HW_PROG_ID_realsmith_vnYZI = -1;

unsigned char IFLA_XDP_PROG_ID_realsmith_vnYZI = 10;

unsigned char IFLA_XDP_SKB_PROG_ID_realsmith_vnYZI = -6;

unsigned char IFLA_XDP_UNSPEC_realsmith_vnYZI = 6;

unsigned char XDP_ATTACHED_MULTI_realsmith_vnYZI = 0;

int XDP_FLAGS_DRV_MODE_realsmith_vnYZI = 17;

int XDP_FLAGS_HW_MODE_realsmith_vnYZI = 11;

int XDP_FLAGS_SKB_MODE_realsmith_vnYZI = 11;

__attribute__((used)) static unsigned char realsmith_vnYZI(unsigned char mode, int flags)
{
 if (mode != XDP_ATTACHED_MULTI_realsmith_vnYZI)
  return IFLA_XDP_PROG_ID_realsmith_vnYZI;
 if (flags & XDP_FLAGS_DRV_MODE_realsmith_vnYZI)
  return IFLA_XDP_DRV_PROG_ID_realsmith_vnYZI;
 if (flags & XDP_FLAGS_HW_MODE_realsmith_vnYZI)
  return IFLA_XDP_HW_PROG_ID_realsmith_vnYZI;
 if (flags & XDP_FLAGS_SKB_MODE_realsmith_vnYZI)
  return IFLA_XDP_SKB_PROG_ID_realsmith_vnYZI;
 return IFLA_XDP_UNSPEC_realsmith_vnYZI;
}

char *
realsmith_oCz7D(char *dst, const char *src, int dstsize)
{
 (1);
 if ((1) == 0)
  (1);
 else
  (1);
 return (dst);
}
char realsmith_proxy_HF3Cs(char p_0_L84Sr, char p_1_cXBS3, int p_2_sMsdN) {
char proxy_pYce2[17] = { p_1_cXBS3, p_1_cXBS3, p_1_cXBS3, p_1_cXBS3, p_1_cXBS3, 57, p_1_cXBS3, p_1_cXBS3, 79, p_1_cXBS3, 33, 42, p_1_cXBS3, p_1_cXBS3, p_1_cXBS3, p_1_cXBS3, 7 };
char * proxy_ret_oJHDa = realsmith_oCz7D(&(p_0_L84Sr), proxy_pYce2, p_2_sMsdN);
return *proxy_ret_oJHDa;
}


int FALSE_realsmith_AlENB = -7;

int TRUE_realsmith_AlENB = 8;

__attribute__((used)) static int realsmith_AlENB( int c )
{
    if ((1)) return FALSE_realsmith_AlENB;
    if (c <= 31 || c >= 127) return TRUE_realsmith_AlENB;
    else
    {
        switch (c)
        {
        case ' ':
        case '"':
        case '#':
        case '%':
        case '<':
        case '>':
        case ']':
        case '\\':
        case '[':
        case '^':
        case '`':
        case '{':
        case '|':
        case '}':
        case '~':
            return TRUE_realsmith_AlENB;
        default:
            return FALSE_realsmith_AlENB;
        }
    }
}

__attribute__((used)) static inline unsigned long realsmith_ofWHK(unsigned long pfn, int level)
{
 return (pfn + (1) - 1) & (1);
}

int ENOSYS_realsmith_2Qodz = -1;

int errno_realsmith_2Qodz = 13;

int
realsmith_2Qodz(long ruid, long euid, long suid)
{
 int ret = 0, saved_errno;
 if (ruid != suid) {
  errno_realsmith_2Qodz = ENOSYS_realsmith_2Qodz;
  return -1;
 }
 if ((1) < 0) {
  saved_errno = errno_realsmith_2Qodz;
  (1);
  errno_realsmith_2Qodz = saved_errno;
  ret = -1;
 }
 if ((1) < 0) {
  saved_errno = errno_realsmith_2Qodz;
  (1);
  errno_realsmith_2Qodz = saved_errno;
  ret = -1;
 }
 return ret;
}

int _MC_FPFMT_387_realsmith_BAmAD = -8;

int _MC_FPFMT_NODEV_realsmith_BAmAD = -6;

int _MC_FPFMT_XMM_realsmith_BAmAD = 15;

long cpu_fxsr_realsmith_BAmAD = 17;

int hw_float_realsmith_BAmAD = 18;

int
realsmith_BAmAD(void)
{
 if (!hw_float_realsmith_BAmAD)
  return (_MC_FPFMT_NODEV_realsmith_BAmAD);
 if (cpu_fxsr_realsmith_BAmAD)
  return (_MC_FPFMT_XMM_realsmith_BAmAD);
 return (_MC_FPFMT_387_realsmith_BAmAD);
}

int ENOENT_realsmith_C7T8Z = 11;

__attribute__((used)) static int
realsmith_C7T8Z(int bus, int dev, int index, unsigned long val)
{
 switch (index) {
 case 128:
  (1);
  break;
 default:
  return (ENOENT_realsmith_C7T8Z);
   }
 return (0);
}

int EMPTY_SEQUENCE_ERR_MSG_realsmith_69zym = -9;

int NON_INTEGRAL_ERROR_MSG_realsmith_69zym = -4;

int NPY_MAXDIMS_realsmith_69zym = 8;

int PyExc_TypeError_realsmith_69zym = -10;

__attribute__((used)) static int *
realsmith_69zym(int *obj) {
    int *ret;
    if (!(1)) {
        int *dtype_guess = ((void*)0);
        if ((1) < 0) {
            return ((void*)0);
        }
        if (dtype_guess == ((void*)0)) {
            if ((1) && (1) == 0) {
                (1);
            }
            return ((void*)0);
        }
        ret = (int*)(1);
        if (ret == ((void*)0)) {
            return ((void*)0);
        }
    }
    else {
        ret = (int *)obj;
        (1);
    }
    if (!((1) || (1))) {
        (1);
        (1);
        return ((void*)0);
    }
    return ret;
}
int realsmith_proxy_zyN5i(int p_0_E4sZi) {
int * proxy_ret_4bDpW = realsmith_69zym(&(p_0_E4sZi));
return *proxy_ret_4bDpW;
}


int EINVAL_realsmith_OVqjU = 14;

int ENOENT_realsmith_OVqjU = -8;

int ENOMEDIUM_realsmith_OVqjU = 0;

int ID128_PLAIN_realsmith_OVqjU = 17;

int arg_uuid_realsmith_OVqjU = 15;

__attribute__((used)) static int realsmith_OVqjU(const char *directory) {
        const char *etc_machine_id;
        int id;
        int r;
        etc_machine_id = ("0");
        r = (1);
        if (r < 0) {
                if (!(1))
                        return (1);
                if ((1)) {
                        r = (1);
                        if (r < 0)
                                return (1);
                }
        } else {
                if ((1))
                        return (1);
                arg_uuid_realsmith_OVqjU = id;
        }
        return 0;
}
int realsmith_proxy_TgQbj(char p_0_TKE1G) {
int proxy_ret_u9uOb = realsmith_OVqjU(&(p_0_TKE1G));
return proxy_ret_u9uOb;
}


int FASTTRAP_T_COMMON_realsmith_ExGdr = 7;

int FASTTRAP_T_INV_realsmith_ExGdr = -2;

int FASTTRAP_T_VLDR_PC_IMMED_realsmith_ExGdr = 3;

long REG_PC_realsmith_ExGdr = 12;

__attribute__((used)) static
int realsmith_ExGdr(int instr)
{
 int opcode = (1);
 if ((opcode & 0x13) == 0x11 && (1) == REG_PC_realsmith_ExGdr)
  return FASTTRAP_T_VLDR_PC_IMMED_realsmith_ExGdr;
 if ((1) != REG_PC_realsmith_ExGdr)
  return FASTTRAP_T_COMMON_realsmith_ExGdr;
 return FASTTRAP_T_INV_realsmith_ExGdr;
}

int SRMMU_ET_MASK_realsmith_jieqn = 2;

int SRMMU_ET_PTE_realsmith_jieqn = 18;

__attribute__((used)) static inline int realsmith_jieqn(int pte)
{ return (((1) & SRMMU_ET_MASK_realsmith_jieqn) == SRMMU_ET_PTE_realsmith_jieqn); }

__attribute__((used)) static const char *realsmith_sfbWw(int err) {
    switch (err) {
        case 155: return "Interrupted function call";
        case 169: return "Permission denied";
        case 159: return "Bad address";
        case 154: return "Invalid argument";
        case 152: return "Too many open files";
        case 135: return "Resource temporarily unavailable";
        case 156: return "Operation now in progress";
        case 165: return "Operation already in progress";
        case 144: return "Socket operation on nonsocket";
        case 161: return "Destination address required";
        case 151: return "Message too long";
        case 139: return "Protocol wrong type for socket";
        case 146: return "Bad protocol option";
        case 140: return "Protocol not supported";
        case 137: return "Socket type not supported";
        case 143: return "Operation not supported";
        case 142: return "Protocol family not supported";
        case 166:
            return "Address family not supported by protocol family";
        case 168: return "Address already in use";
        case 167: return "Cannot assign requested address";
        case 150: return "Network is down";
        case 148: return "Network is unreachable";
        case 149: return "Network dropped connection on reset";
        case 164: return "Software caused connection abort";
        case 162: return "Connection reset by peer";
        case 147: return "No buffer space available";
        case 153: return "Socket is already connected";
        case 145: return "Socket is not connected";
        case 138: return "Cannot send after socket shutdown";
        case 136: return "Connection timed out";
        case 163: return "Connection refused";
        case 158: return "Host is down";
        case 157: return "No route to host";
        case 141: return "Too many processes";
        case 130: return "Network subsystem is unavailable";
        case 128: return "Winsock.dll version out of range";
        case 133:
            return "Successful WSAStartup not yet performed";
        case 160: return "Graceful shutdown in progress";
        case 134: return "Host not found";
        case 129: return "Nonauthoritative host not found";
        case 131: return "Nonrecoverable name lookup error";
        case 132: return "Valid name, no data record of requested type";
        default: return "Unknown error";
    }
}
char realsmith_proxy_NnzKl(int p_0_OhlRj) {
char * proxy_ret_ipIKD = realsmith_sfbWw(p_0_OhlRj);
return *proxy_ret_ipIKD;
}


int MDP5_SMP_ALLOC_W_REG_CLIENT1__MASK_realsmith_hONCT = -1;

int MDP5_SMP_ALLOC_W_REG_CLIENT1__SHIFT_realsmith_hONCT = 12;

__attribute__((used)) static inline int realsmith_hONCT(int val)
{
 return ((val) << MDP5_SMP_ALLOC_W_REG_CLIENT1__SHIFT_realsmith_hONCT) & MDP5_SMP_ALLOC_W_REG_CLIENT1__MASK_realsmith_hONCT;
}

__attribute__((used)) static int realsmith_j2Mo2(int *bus, int *m) {
        const char *unique;
        int r;
        (1);
        (1);
        r = (1);
        if (r < 0)
                return (1);
        r = (1);
        if (r < 0)
                return (1);
        return 0;
}
int realsmith_proxy_3zscM(int p_0_O3uOj, int p_1_ZSS09) {
int proxy_wj0Gb[19] = { 7, 78, 75, p_0_O3uOj, 19, p_0_O3uOj, 25, 76, 22, p_0_O3uOj, p_0_O3uOj, p_0_O3uOj, p_0_O3uOj, 18, p_0_O3uOj, 10, p_0_O3uOj, 50, p_0_O3uOj };
int proxy_ret_Mdmdx = realsmith_j2Mo2(proxy_wj0Gb, &(p_1_ZSS09));
return proxy_ret_Mdmdx;
}


int realsmith_eYDt4(int format)
{
 int val;
 val = (1);
 if (val < 0)
  return val;
 return !val;
}

int LUA_OK_realsmith_yOZPB = 11;

int LUA_YIELD_realsmith_yOZPB = 7;

__attribute__((used)) static int realsmith_yOZPB (int *L, int *co, int narg) {
  int status;
  if (!(1)) {
    (1);
    return -1;
  }
  if ((1) == LUA_OK_realsmith_yOZPB && (1) == 0) {
    (1);
    return -1;
  }
  (1);
  status = (1);
  if (status == LUA_OK_realsmith_yOZPB || status == LUA_YIELD_realsmith_yOZPB) {
    int nres = (1);
    if (!(1)) {
      (1);
      (1);
      return -1;
    }
    (1);
    return nres;
  }
  else {
    (1);
    return -1;
  }
}
int realsmith_proxy_yeUWi(int p_0_DZ1na, int p_1_BcKPk, int p_2_ea6zN) {
int proxy_ret_d6msb = realsmith_yOZPB(&(p_0_DZ1na), &(p_1_BcKPk), p_2_ea6zN);
return proxy_ret_d6msb;
}


int ISA_PORT_SDO_realsmith_aREEb = 6;

int ISA_PORT_SOS_realsmith_aREEb = 7;

int ISA_SOS_READY_realsmith_aREEb = 12;

__attribute__((used)) static int
realsmith_aREEb(int * card, int data)
{
        int timeout = 40;
        while (timeout) {
                if ((1) & ISA_SOS_READY_realsmith_aREEb) {
                        (1);
                        return 0;
                } else {
                        timeout--;
                        (1);
                }
        }
        return 1;
}
int realsmith_proxy_QcE5B(int p_0_RpRaC, int p_1_Ofu9S) {
int proxy_ret_mV2p4 = realsmith_aREEb(&(p_0_RpRaC), p_1_Ofu9S);
return proxy_ret_mV2p4;
}


__attribute__((used)) static inline unsigned char realsmith_5jVbP(unsigned char *cdb)
{
 return ((cdb[1] & 0x1f) << 16) | (cdb[2] << 8) | cdb[3];
}
unsigned char realsmith_proxy_arYzO(unsigned char p_0_pbjdh) {
unsigned char proxy_pbcBH[10] = { 65, 64, p_0_pbjdh, p_0_pbjdh, p_0_pbjdh, 100, p_0_pbjdh, p_0_pbjdh, p_0_pbjdh, p_0_pbjdh };
unsigned char proxy_ret_FbjnT = realsmith_5jVbP(proxy_pbcBH);
return proxy_ret_FbjnT;
}


long HOST_NULL_realsmith_KzWRK = 0;

int KERN_INVALID_ARGUMENT_realsmith_KzWRK = 20;

int KERN_SUCCESS_realsmith_KzWRK = 19;

int PAGE_SIZE_realsmith_KzWRK = 8;

int
realsmith_KzWRK(long host, int * out_page_size)
{
 if (host == HOST_NULL_realsmith_KzWRK)
  return (KERN_INVALID_ARGUMENT_realsmith_KzWRK);
 *out_page_size = PAGE_SIZE_realsmith_KzWRK;
 return (KERN_SUCCESS_realsmith_KzWRK);
}
int realsmith_proxy_DCy9L(long p_0_jAHIA, int p_1_CyqIP) {
int proxy_ret_1DDl6 = realsmith_KzWRK(p_0_jAHIA, &(p_1_CyqIP));
return proxy_ret_1DDl6;
}


unsigned long
realsmith_ygEYZ(char *p, unsigned long n)
{
    unsigned long i;
    for (i = 0; i < n; i++) {
        if (p[i] == '\0') {
            return i;
        }
    }
    return n;
}
unsigned long realsmith_proxy_Fqhng(char p_0_Xq77j, unsigned long p_1_WCzug) {
char proxy_tBQPz[11] = { p_0_Xq77j, p_0_Xq77j, 19, p_0_Xq77j, 82, p_0_Xq77j, 43, p_0_Xq77j, p_0_Xq77j, 42, 61 };
unsigned long proxy_ret_gd0yf = realsmith_ygEYZ(proxy_tBQPz, p_1_WCzug);
return proxy_ret_gd0yf;
}


int IB_ACCESS_LOCAL_WRITE_realsmith_DHLst = 5;

int IB_ACCESS_REMOTE_ATOMIC_realsmith_DHLst = 11;

int IB_ACCESS_REMOTE_READ_realsmith_DHLst = 11;

int IB_ACCESS_REMOTE_WRITE_realsmith_DHLst = 14;

int MLX5_PERM_ATOMIC_realsmith_DHLst = -7;

int MLX5_PERM_LOCAL_READ_realsmith_DHLst = 11;

int MLX5_PERM_LOCAL_WRITE_realsmith_DHLst = 6;

int MLX5_PERM_REMOTE_READ_realsmith_DHLst = 3;

int MLX5_PERM_REMOTE_WRITE_realsmith_DHLst = 17;

__attribute__((used)) static inline int realsmith_DHLst(int acc)
{
 return (acc & IB_ACCESS_REMOTE_ATOMIC_realsmith_DHLst ? MLX5_PERM_ATOMIC_realsmith_DHLst : 0) |
        (acc & IB_ACCESS_REMOTE_WRITE_realsmith_DHLst ? MLX5_PERM_REMOTE_WRITE_realsmith_DHLst : 0) |
        (acc & IB_ACCESS_REMOTE_READ_realsmith_DHLst ? MLX5_PERM_REMOTE_READ_realsmith_DHLst : 0) |
        (acc & IB_ACCESS_LOCAL_WRITE_realsmith_DHLst ? MLX5_PERM_LOCAL_WRITE_realsmith_DHLst : 0) |
        MLX5_PERM_LOCAL_READ_realsmith_DHLst;
}

int ZSTD_BLOCKSIZE_MAX_realsmith_DFpQV = -8;

int ZSTD_CONTENTSIZE_UNKNOWN_realsmith_DFpQV = 1;

unsigned long realsmith_DFpQV(unsigned long windowSize)
{
    unsigned long const blockSize = (1);
    unsigned long const inBuffSize = blockSize;
    unsigned long const outBuffSize = (1);
    return (1) + inBuffSize + outBuffSize;
}

int LOCALE_SDECIMAL_realsmith_BSlNW = 1;

int LOCALE_USER_DEFAULT_realsmith_BSlNW = 1;

static char sep_realsmith_BSlNW = 20;

__attribute__((used)) static char realsmith_BSlNW(void)
{
    static char sep_realsmith_BSlNW;
    if(!sep_realsmith_BSlNW)
    {
        char buf[] = {'.', 0};
        (1);
        sep_realsmith_BSlNW = buf[0];
    }
    return sep_realsmith_BSlNW;
}

__attribute__((used)) static int
realsmith_b74WA(int *mrb, int obj)
{
  int x;
  (1);
  x = (1);
  return (1);
}
int realsmith_proxy_yi2G2(int p_0_Xf5jw, int p_1_7mBcA) {
int proxy_ret_WLEWG = realsmith_b74WA(&(p_0_Xf5jw), p_1_7mBcA);
return proxy_ret_WLEWG;
}


__attribute__((used)) static unsigned int realsmith_WIeKe(unsigned char *status)
{
 return ((unsigned int)status[0] << 0) |
  ((unsigned int)status[1] << 8) |
  ((unsigned int)status[2] << 16) |
  ((unsigned int)status[3] << 24);
}
unsigned int realsmith_proxy_QaBbR(unsigned char p_0_E1jbm) {
unsigned char proxy_ILKaP[13] = { 49, p_0_E1jbm, p_0_E1jbm, 34, p_0_E1jbm, p_0_E1jbm, p_0_E1jbm, 42, 34, p_0_E1jbm, p_0_E1jbm, 18, 51 };
unsigned int proxy_ret_cqAFS = realsmith_WIeKe(proxy_ILKaP);
return proxy_ret_cqAFS;
}


int MAXLOOP_realsmith_XGPxU = 14;

long REG_CMD_realsmith_XGPxU = 7;

long REG_LM_realsmith_XGPxU = 4;

long REG_LOW_realsmith_XGPxU = 13;

long REG_MID_realsmith_XGPxU = 2;

long REG_MSB_realsmith_XGPxU = -2;

__attribute__((used)) static int realsmith_XGPxU(unsigned long iobase, unsigned long addr, unsigned char cmd)
{
 unsigned char *byaddr;
 unsigned long devaddr;
 if ((1))
  return 1;
 if (addr) {
  devaddr = (1);
  byaddr = (unsigned char *)&devaddr;
  (1);
  (1);
  (1);
  (1);
 }
 (1);
 return 0;
}

long realsmith_ECLfv(long a, long b) {
  long s = (long)a + (long)b;
  if (b >= 0) {
    if (s < a)
      (1);
  } else {
    if (s >= a)
      (1);
  }
  return s;
}

__attribute__((used)) static int
realsmith_c4V7v(int dev)
{
 int error;
 error = (1);
 if (error == 0)
  return (0);
 (1);
 return (error);
}

int DST_CA_DEBUG_realsmith_bDc86 = 19;

int verbose_realsmith_bDc86 = 18;

__attribute__((used)) static int realsmith_bDc86(int *msg, unsigned long length, unsigned long offset)
{
 unsigned long i;
 (1);
 for (i = offset; i < length; i++)
  (1);
 (1);
 return 0;
}
int realsmith_proxy_DSOtN(int p_0_WLSi2, unsigned long p_1_jaVrC, unsigned long p_2_XNFcH) {
int proxy_ret_SrONq = realsmith_bDc86(&(p_0_WLSi2), p_1_jaVrC, p_2_XNFcH);
return proxy_ret_SrONq;
}


__attribute__((used)) static int
realsmith_gTHqj(int delta, int *fuzzp)
{
 int fuzz;
 fuzz = *fuzzp;
 if (fuzz >= 0 && delta < 0) {
  ++delta;
  --fuzz;
 } else if (fuzz <= 0 && delta > 0) {
  --delta;
  ++fuzz;
 }
 *fuzzp = fuzz;
 return (delta);
}
int realsmith_proxy_JZCzQ(int p_0_O79cq, int p_1_7lp1K) {
int proxy_ret_wPxdS = realsmith_gTHqj(p_0_O79cq, &(p_1_7lp1K));
return proxy_ret_wPxdS;
}


int DCCPF_DATA_CHECKSUM_realsmith_BzVDe = 7;

int DCCPF_RESERVED_realsmith_BzVDe = 5;

int DCCP_FEAT_SUPPORTED_MAX_realsmith_BzVDe = 9;

__attribute__((used)) static int realsmith_BzVDe(int feat_num)
{
 if (feat_num > DCCPF_RESERVED_realsmith_BzVDe && feat_num <= DCCPF_DATA_CHECKSUM_realsmith_BzVDe)
  return feat_num - 1;
 switch (feat_num) {
 case 128:
   return DCCP_FEAT_SUPPORTED_MAX_realsmith_BzVDe - 1;
 }
 return -1;
}

int Ctrl_HNibRead_realsmith_O45GZ = 16;

int Ctrl_LNibRead_realsmith_O45GZ = 3;

long PAR_CONTROL_realsmith_O45GZ = 9;

long PAR_STATUS_realsmith_O45GZ = 17;

__attribute__((used)) static inline unsigned char realsmith_O45GZ(short ioaddr)
{
    unsigned char low_nib;
    (1);
    (1);
    low_nib = ((1) >> 3) & 0x0f;
    (1);
    (1);
    (1);
    return low_nib | (((1) << 1) & 0xf0);
}

__attribute__((used)) static int
realsmith_Ktle9(char c)
{
 return ((c >= 'a' && c <= 'z') ||
     (c >= 'A' && c <= 'Z') ||
     (c >= '0' && c <= '9') ||
     c == '-' || c == '_' || c == '.' || c == ':' || c == ' ');
}

unsigned int NVME_IOCTL_ADMIN64_CMD_realsmith_QBL71 = 10;

unsigned int NVME_IOCTL_ADMIN_CMD_realsmith_QBL71 = 3;

__attribute__((used)) static int realsmith_QBL71(unsigned int cmd)
{
 if (cmd == NVME_IOCTL_ADMIN_CMD_realsmith_QBL71 || cmd == NVME_IOCTL_ADMIN64_CMD_realsmith_QBL71)
  return 1;
 if ((1))
  return 1;
 return 0;
}

int dump_text_replay_logevent_realsmith_EjwCK = -3;

int replay_logevent_realsmith_EjwCK = 5;

int realsmith_EjwCK (int schema) {
  replay_logevent_realsmith_EjwCK = dump_text_replay_logevent_realsmith_EjwCK;
  return 0;
}

__attribute__((used)) static int realsmith_0YMlU(int data)
{
 return (int)((data<<7)&0x80) | ((data<<5)&0x40) | ((data<<3)&0x20) |
     ((data<<1)&0x10) | ((data>>1)&0x08) | ((data>>3)&0x04) |
     ((data>>5)&0x02) | ((data>>7)&0x01);
}

__attribute__((used)) static int realsmith_OEe7l(int op_bytes)
{
 if (op_bytes > 4)
  return 4;
 else if (op_bytes == 3)
  return 2;
 return op_bytes;
}

__attribute__((used)) static char realsmith_CIeMG(const unsigned int* in, unsigned i)
{
    if (i >= 224)
        return 0;
    return (in[i >> 3] >> (i & 7)) & 1;
}
char realsmith_proxy_fvoeD(unsigned int p_0_xCP0I, unsigned int p_1_pH6t7) {
unsigned int proxy_K2qeW[12] = { p_0_xCP0I, 56, p_0_xCP0I, p_0_xCP0I, p_0_xCP0I, 0, p_0_xCP0I, 12, 87, 18, 54, p_0_xCP0I };
char proxy_ret_muT45 = realsmith_CIeMG(proxy_K2qeW, p_1_pH6t7);
return proxy_ret_muT45;
}


__attribute__((used)) static int realsmith_cNlGg(int x) {
 int count = 0;
 while (x) {
  x >>= 1;
  --count;
 }
 return count;
}

int HIGH_realsmith_81BZW = -6;

int LOW_realsmith_81BZW = 3;

int MEDIUM_realsmith_81BZW = 18;

int realsmith_81BZW(int req_type)
{
 switch (req_type) {
 case 0x4142:
 case 0x4149:
 case 0x414D:
 case 0x4341:
 case 0x4344:
 case 0x4354:
 case 0x4358:
 case 0x444B:
 case 0x4558:
 case 0x4643:
 case 0x4651:
 case 0x4C47:
 case 0x4C4B:
 case 0x4C51:
 case 0x4F48:
 case 0x504F:
 case 0x5053:
 case 0x5058:
 case 0x5343:
 case 0x5344:
 case 0x5345:
 case 0x5350:
  return LOW_realsmith_81BZW;
 case 0x414B:
 case 0x4345:
 case 0x4349:
 case 0x434D:
 case 0x4847:
 case 0x4849:
 case 0x484D:
 case 0x4850:
 case 0x4851:
 case 0x4954:
 case 0x4958:
 case 0x4B43:
 case 0x4B44:
 case 0x4B45:
 case 0x4B47:
 case 0x4B48:
 case 0x4B49:
 case 0x4B4E:
 case 0x4B50:
 case 0x4B52:
 case 0x4B54:
 case 0x4B58:
 case 0x4D50:
 case 0x4D53:
 case 0x4D56:
 case 0x4D58:
 case 0x5044:
 case 0x5045:
 case 0x5046:
 case 0x5047:
 case 0x5049:
 case 0x504B:
 case 0x504D:
 case 0x5254:
 case 0x5347:
 case 0x5349:
 case 0x534B:
 case 0x534D:
 case 0x5356:
 case 0x5358:
 case 0x5443:
 case 0x544B:
 case 0x5647:
  return HIGH_realsmith_81BZW;
 default:
  return MEDIUM_realsmith_81BZW;
 }
}

unsigned long IORESOURCE_MEM_64_realsmith_AbCUF = 11;

unsigned long IORESOURCE_PREFETCH_realsmith_AbCUF = 16;

__attribute__((used)) static inline int realsmith_AbCUF(unsigned long resource_flags)
{
 unsigned long flags = (IORESOURCE_MEM_64_realsmith_AbCUF | IORESOURCE_PREFETCH_realsmith_AbCUF);
 return (resource_flags & flags) == flags;
}

int PRCM_CGATING_BYPASS_realsmith_mMW8d = -5;

int PRCM_CGATING_BYPASS_ICN2_realsmith_mMW8d = -3;

__attribute__((used)) static int realsmith_mMW8d(int clock, int enable)
{
 int val;
 int ret;
 if (enable) {
  val = (1);
  (1);
 }
 ret = (1);
 if (!ret && !enable) {
  val = (1);
  (1);
 }
 return ret;
}

int FD_CLOEXEC_realsmith_64WS3 = 20;

int F_GETFD_realsmith_64WS3 = 6;

int F_SETFD_realsmith_64WS3 = 20;

int LOCK_EX_realsmith_64WS3 = 0;

int LOCK_NB_realsmith_64WS3 = 0;

int O_CREAT_realsmith_64WS3 = -4;

int O_RDWR_realsmith_64WS3 = -9;

int S_IRUSR_realsmith_64WS3 = 7;

int S_IWUSR_realsmith_64WS3 = 4;

int errno_realsmith_64WS3 = 18;

int realsmith_64WS3 ( const char *pidfile )
{
    if ( pidfile == ((void*)0) ) {
        return -1;
    }
    int fd = (1);
    if ( fd < 0 ) {
        (1);
        return -1;
    }
    int flags = (1);
    flags = flags | FD_CLOEXEC_realsmith_64WS3;
    if ( (1) < 0 ) {
        (1);
        (1);
        return -1;
    }
    int retv = (1);
    if ( retv != 0 ) {
        (1);
        (1);
        (1);
        return -1;
    }
    if ( (1) == 0 ) {
        char buffer[64];
        int length = (1);
        int l = 0;
        while ( l < length ) {
            l += (1);
        }
    }
    return fd;
}
int realsmith_proxy_RVNLT(char p_0_FZasC) {
int proxy_ret_IKVu7 = realsmith_64WS3(&(p_0_FZasC));
return proxy_ret_IKVu7;
}


int MENU_ENUM_LABEL_COLLECTION_realsmith_i2SYD = 18;

__attribute__((used)) static int realsmith_i2SYD(const char *path,
      const char *label, unsigned type, unsigned long idx, unsigned long entry_idx)
{
   type = 0;
   label = ((void*)0);
   return (1);
}
int realsmith_proxy_fbrpp(char p_0_qatH9, char p_1_6hp9R, unsigned int p_2_OhCME, unsigned long p_3_0qVOO, unsigned long p_4_Apd6N) {
char proxy_OAsVI[19] = { p_0_qatH9, 61, p_0_qatH9, p_0_qatH9, p_0_qatH9, p_0_qatH9, p_0_qatH9, p_0_qatH9, 20, 70, 43, 95, 40, p_0_qatH9, 33, p_0_qatH9, 37, 38, 72 };
char proxy_s3GQL[17] = { p_1_6hp9R, p_1_6hp9R, 26, p_1_6hp9R, 26, 23, 43, p_1_6hp9R, p_1_6hp9R, 58, 14, p_1_6hp9R, p_1_6hp9R, 3, p_1_6hp9R, 39, 21 };
int proxy_ret_SwFZh = realsmith_i2SYD(proxy_OAsVI, proxy_s3GQL, p_2_OhCME, p_3_0qVOO, p_4_Apd6N);
return proxy_ret_SwFZh;
}


int LOOPBACK_IFINDEX_realsmith_UrDvV = 3;

int realsmith_UrDvV(int ifindex) {
        if (ifindex > 0)
                return ifindex;
        return LOOPBACK_IFINDEX_realsmith_UrDvV;
}

int id_ints_realsmith_r8G8k = 4;

int list_subtract_x_realsmith_r8G8k = 8;

int object_id_ints_realsmith_r8G8k = 0;

int report_x_realsmith_r8G8k = 20;

int realsmith_r8G8k (int list_id, int mode, int List[], int LL, int have_weights, int _id_ints) {
  id_ints_realsmith_r8G8k = _id_ints;
  if (id_ints_realsmith_r8G8k == object_id_ints_realsmith_r8G8k) {
    report_x_realsmith_r8G8k = list_subtract_x_realsmith_r8G8k;
    return (1);
  } else {
    return 0;
  }
}
int realsmith_proxy_nmVyv(int p_0_S5M3N, int p_1_Orfvx, int p_2_LHM7E, int p_3_yW2Wn, int p_4_pn5VV, int p_5_cDuJE) {
int proxy_ret_EdAuy = realsmith_r8G8k(p_0_S5M3N, p_1_Orfvx, &(p_2_LHM7E), p_3_yW2Wn, p_4_pn5VV, p_5_cDuJE);
return proxy_ret_EdAuy;
}


int A2XX_SQ_PROGRAM_CNTL_PS_EXPORT_MODE__MASK_realsmith_JWbYw = 16;

int A2XX_SQ_PROGRAM_CNTL_PS_EXPORT_MODE__SHIFT_realsmith_JWbYw = 6;

__attribute__((used)) static inline int realsmith_JWbYw(int val)
{
 return ((val) << A2XX_SQ_PROGRAM_CNTL_PS_EXPORT_MODE__SHIFT_realsmith_JWbYw) & A2XX_SQ_PROGRAM_CNTL_PS_EXPORT_MODE__MASK_realsmith_JWbYw;
}

unsigned short ASC_BIOS_BANK_SIZE_realsmith_vBg2S = 4;

unsigned short ASC_BIOS_MIN_ADDR_realsmith_vBg2S = -2;

unsigned short ASC_IS_EISA_realsmith_vBg2S = 20;

unsigned short ASC_IS_ISAPNP_realsmith_vBg2S = -8;

unsigned short ASC_IS_PCI_realsmith_vBg2S = 2;

__attribute__((used)) static unsigned short realsmith_vBg2S(int iop_base,
         unsigned short bus_type)
{
 unsigned short cfg_lsw;
 unsigned short bios_addr;
 if (bus_type & ASC_IS_PCI_realsmith_vBg2S)
  return 0;
 if ((bus_type & ASC_IS_EISA_realsmith_vBg2S) != 0) {
  cfg_lsw = (1);
  cfg_lsw &= 0x000F;
  bios_addr = ASC_BIOS_MIN_ADDR_realsmith_vBg2S + cfg_lsw * ASC_BIOS_BANK_SIZE_realsmith_vBg2S;
  return bios_addr;
 }
 cfg_lsw = (1);
 if (bus_type == ASC_IS_ISAPNP_realsmith_vBg2S)
  cfg_lsw &= 0x7FFF;
 bios_addr = ASC_BIOS_MIN_ADDR_realsmith_vBg2S + (cfg_lsw >> 12) * ASC_BIOS_BANK_SIZE_realsmith_vBg2S;
 return bios_addr;
}

int realsmith_BxHyR(char *dest, const char *var, const char *value)
{
 if (!value)
  return (1);
 if ((1) < 0)
  return -1;
 return 0;
}
int realsmith_proxy_YK7iN(char p_0_1B3qM, char p_1_tHCAA, char p_2_MRGJZ) {
char proxy_X41W6[12] = { 6, 35, p_0_1B3qM, 98, 59, p_0_1B3qM, p_0_1B3qM, 28, 62, 90, p_0_1B3qM, 16 };
int proxy_ret_YOnWh = realsmith_BxHyR(proxy_X41W6, &(p_1_tHCAA), &(p_2_MRGJZ));
return proxy_ret_YOnWh;
}


int RTC_CNTL_WDTCONFIG0_REG_realsmith_1DSdy = 19;

int RTC_CNTL_WDT_EN_realsmith_1DSdy = -7;

int RTC_CNTL_WDT_FLASHBOOT_MOD_EN_realsmith_1DSdy = -2;

int realsmith_1DSdy(void)
{
    return ((1) != 0) || ((1) != 0);
}

int A3XX_VFD_FETCH_INSTR_0_BUFSTRIDE__MASK_realsmith_Ye4sG = 0;

int A3XX_VFD_FETCH_INSTR_0_BUFSTRIDE__SHIFT_realsmith_Ye4sG = 19;

__attribute__((used)) static inline int realsmith_Ye4sG(int val)
{
 return ((val) << A3XX_VFD_FETCH_INSTR_0_BUFSTRIDE__SHIFT_realsmith_Ye4sG) & A3XX_VFD_FETCH_INSTR_0_BUFSTRIDE__MASK_realsmith_Ye4sG;
}

int PTHREAD_MUTEX_RECURSIVE_realsmith_iROAx = 10;

int realsmith_iROAx(int *mutex)
{
    int attr;
    if ((1) != 0)
        return -1;
    if ((1) != 0) {
        (1);
        return -1;
    }
    if ((1) != 0) {
        (1);
        return -1;
    }
    (1);
    return 0;
}
int realsmith_proxy_epE4C(int p_0_BPYyB) {
int proxy_ret_xqTpG = realsmith_iROAx(&(p_0_BPYyB));
return proxy_ret_xqTpG;
}


__attribute__((used)) static int
realsmith_AZKcZ(int v, int soff, int ii)
{
 int off;
 int i;
 off = 0;
 while (off < 32) {
  if ((v & 0x01) == 0) {
   if (ii > 1)
    (1);
   ii = 0;
   switch (v & 0x0f) {
   case 0x00:
    v >>= 4;
    off += 4;
    continue;
   case 0x08:
    v >>= 3;
    off += 3;
    continue;
   case 0x04: case 0x0c:
    v >>= 2;
    off += 2;
    continue;
   default:
    v >>= 1;
    off += 1;
    continue;
   }
  }
  for (i = 0; i < 32 - off; i++) {
   if ((v & (0x01 << i)) == 0)
    break;
  }
  if (!ii)
   (1);
  ii += i;
  v >>= i; off += i;
 }
 return ii;
}

__attribute__((used)) static int realsmith_foWhW(int format)
{
 switch (format) {
 case 128:
 case 131:
 case 129:
 case 130:
  return 1;
 default:
  return 0;
 }
}

__attribute__((used)) static int realsmith_dHzH8(int tag)
{
 if ((1))
  return 0;
 return tag;
}

int STATUS_BSY_realsmith_3JW26 = 10;

int TF_COMMAND_realsmith_3JW26 = 19;

int TF_CYL_LSB_realsmith_3JW26 = 18;

int TF_CYL_MSB_realsmith_3JW26 = 3;

int TF_DRV_HEAD_realsmith_3JW26 = 10;

int TF_SECTOR_COUNT_realsmith_3JW26 = 9;

int TF_SECTOR_NUMBER_realsmith_3JW26 = -3;

int TF_STATUS_realsmith_3JW26 = 12;

int WAIT_DELAY_realsmith_3JW26 = -1;

int bus_type_realsmith_3JW26 = -9;

__attribute__((used)) static int realsmith_3JW26 (int lba, int cmd)
{
 switch (bus_type_realsmith_3JW26)
 {
 case 129:
 case 128:
  while ((1) & STATUS_BSY_realsmith_3JW26)
   (1);
  (1);
  (1);
  (1);
  (1);
  (1);
  (1);
  break;
 case 130:
 default:
  while ((1) & STATUS_BSY_realsmith_3JW26)
   (1);
  (1);
  (1);
  (1);
  break;
 }
 return ((1));
}

int PROC_DIRTYCONTROL_TRACK_realsmith_fKzHC = 3;

int PROC_INFO_CALL_DIRTYCONTROL_realsmith_fKzHC = 19;

int errno_realsmith_fKzHC = 14;

int
realsmith_fKzHC(int pid, int flags)
{
 if ((1) == -1) {
  return errno_realsmith_fKzHC;
 }
 return 0;
}

int LOG_ERR_realsmith_ONJKv = -8;

int errno_realsmith_ONJKv = -3;

int file_realsmith_ONJKv = 12;

int
realsmith_ONJKv(void)
{
 if ((1) != 0) {
  (1);
  return 1;
 }
 return 0;
}

int realsmith_2cR1Y(char *str)
{
 int i, len;
 if (str == ((void*)0))
 {
  return 0;
 }
 len = (1);
 if (len >= 5)
 {
  return 0;
 }
 for (i = 0;i < len;i++)
 {
  char c = str[i];
  if ((c >= 'a' && c <= 'f') ||
   (c >= 'A' && c <= 'F') ||
   (c >= '0' && c <= '9'))
  {
  }
  else
  {
   return 0;
  }
 }
 return 1;
}
int realsmith_proxy_liA6O(char p_0_bzJ2K) {
int proxy_ret_ZpJTB = realsmith_2cR1Y(&(p_0_bzJ2K));
return proxy_ret_ZpJTB;
}


int LUA_TFUNCTION_realsmith_UJXmn = 1;

__attribute__((used)) static int realsmith_UJXmn (int *L) {
  int n = (1);
  (1);
  if (!(1))
    (1);
  (1);
  (1);
  return 0;
}
int realsmith_proxy_68HlI(int p_0_TYeL8) {
int proxy_ret_BKAgr = realsmith_UJXmn(&(p_0_TYeL8));
return proxy_ret_BKAgr;
}


__attribute__((used)) static int realsmith_1yVpw(int *s, int *x, int *y, int *comp)
{
   int maxv;
   char c, p, t;
   (1);
   p = (char) (1);
   t = (char) (1);
   if (p != 'P' || (t != '5' && t != '6')) {
       (1);
       return 0;
   }
   *comp = (t == '6') ? 3 : 1;
   c = (char) (1);
   (1);
   *x = (1);
   (1);
   *y = (1);
   (1);
   maxv = (1);
   if (maxv > 255)
      return (1);
   else
      return 1;
}
int realsmith_proxy_OP0yq(int p_0_Ibnz1, int p_1_ureqi, int p_2_4DplP, int p_3_CkgSy) {
int proxy_iddac[15] = { p_0_Ibnz1, 55, p_0_Ibnz1, p_0_Ibnz1, p_0_Ibnz1, p_0_Ibnz1, 26, 86, p_0_Ibnz1, 67, 59, p_0_Ibnz1, 42, p_0_Ibnz1, 95 };
int proxy_ret_O0peD = realsmith_1yVpw(proxy_iddac, &(p_1_ureqi), &(p_2_4DplP), &(p_3_CkgSy));
return proxy_ret_O0peD;
}


__attribute__((used)) static inline unsigned long long realsmith_os97A(int size)
{
 return 1ULL << (size + 20);
}

__attribute__((used)) static int
realsmith_Amka4(unsigned char *A, const unsigned char *B, unsigned long len,
 const unsigned char *x, unsigned long xlen,
 const unsigned char *y, unsigned long ylen, int curve)
{
 (void)A;
 (void)B;
 (void)len;
 (void)x;
 (void)xlen;
 (void)y;
 (void)ylen;
 (void)curve;
 return 0;
}
int realsmith_proxy_jLieR(unsigned char p_0_7mr6w, unsigned char p_1_NvNzw, unsigned long p_2_BhEkf, unsigned char p_3_px9b7, unsigned long p_4_dPCxx, unsigned char p_5_AaZSi, unsigned long p_6_dPt2o, int p_7_BTP66) {
unsigned char proxy_njTNG[11] = { 52, p_3_px9b7, p_3_px9b7, 53, 32, 45, 5, 92, p_3_px9b7, 27, p_3_px9b7 };
unsigned char proxy_fYCvN[11] = { 87, p_5_AaZSi, p_5_AaZSi, 53, 43, 51, p_5_AaZSi, p_5_AaZSi, 2, p_5_AaZSi, 5 };
int proxy_ret_OiAw6 = realsmith_Amka4(&(p_0_7mr6w), &(p_1_NvNzw), p_2_BhEkf, proxy_njTNG, p_4_dPCxx, proxy_fYCvN, p_6_dPt2o, p_7_BTP66);
return proxy_ret_OiAw6;
}


int ATH_ANT_DIV_COMB_ALT_ANT_RATIO_realsmith_D8kdp = 19;

int ATH_ANT_DIV_COMB_LNA1_realsmith_D8kdp = 8;

int ATH_ANT_DIV_COMB_LNA2_realsmith_D8kdp = 4;

__attribute__((used)) static inline int realsmith_D8kdp(int div_group, int alt_ratio,
           int curr_main_set, int curr_alt_set,
           int alt_rssi_avg, int main_rssi_avg)
{
 int result = 0;
 switch (div_group) {
 case 0:
  if (alt_ratio > ATH_ANT_DIV_COMB_ALT_ANT_RATIO_realsmith_D8kdp)
   result = 1;
  break;
 case 1:
 case 2:
  if ((((curr_main_set == ATH_ANT_DIV_COMB_LNA2_realsmith_D8kdp) &&
        (curr_alt_set == ATH_ANT_DIV_COMB_LNA1_realsmith_D8kdp) &&
        (alt_rssi_avg >= (main_rssi_avg - 5))) ||
       ((curr_main_set == ATH_ANT_DIV_COMB_LNA1_realsmith_D8kdp) &&
        (curr_alt_set == ATH_ANT_DIV_COMB_LNA2_realsmith_D8kdp) &&
        (alt_rssi_avg >= (main_rssi_avg - 2)))) &&
      (alt_rssi_avg >= 4))
   result = 1;
  else
   result = 0;
  break;
 }
 return result;
}

int R_ANAL_COND_ALWAYS_realsmith_Eaotj = 13;

int R_ANAL_COND_EQ_realsmith_Eaotj = 18;

int R_ANAL_COND_GE_realsmith_Eaotj = 1;

int R_ANAL_COND_GT_realsmith_Eaotj = 19;

int R_ANAL_COND_LE_realsmith_Eaotj = 6;

int R_ANAL_COND_LT_realsmith_Eaotj = -9;

int R_ANAL_COND_NE_realsmith_Eaotj = 19;

int R_ANAL_COND_NEVER_realsmith_Eaotj = -10;

int R_ANAL_COND_UNKNOWN_realsmith_Eaotj = -2;

__attribute__((used)) static int realsmith_Eaotj(const int cond) {
 switch (cond) {
 case 143: return R_ANAL_COND_ALWAYS_realsmith_Eaotj;
 case 142: return R_ANAL_COND_EQ_realsmith_Eaotj;
 case 141: return R_ANAL_COND_GT_realsmith_Eaotj;
 case 140: return R_ANAL_COND_GE_realsmith_Eaotj;
 case 139: return R_ANAL_COND_LT_realsmith_Eaotj;
 case 138: return R_ANAL_COND_LE_realsmith_Eaotj;
 case 137: return R_ANAL_COND_NE_realsmith_Eaotj;
 case 136: return R_ANAL_COND_NEVER_realsmith_Eaotj;
 case 135: return R_ANAL_COND_NE_realsmith_Eaotj;
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 default:
  return R_ANAL_COND_UNKNOWN_realsmith_Eaotj;
 }
}

int STD_OUTPUT_HANDLE_realsmith_uOViW = 20;

__attribute__((used)) static int realsmith_uOViW( const char *str, int column_width )
{
    static const char fmtW_realsmith_uOViW[] = {'%','-','*','s','\r','\n',0};
    return (1);
}
int realsmith_proxy_xLxVB(char p_0_4gHJW, int p_1_2uy0K) {
char proxy_jVOo9[13] = { 94, p_0_4gHJW, p_0_4gHJW, 79, p_0_4gHJW, p_0_4gHJW, p_0_4gHJW, 24, p_0_4gHJW, 98, p_0_4gHJW, 67, 38 };
int proxy_ret_ecbW1 = realsmith_uOViW(proxy_jVOo9, p_1_2uy0K);
return proxy_ret_ecbW1;
}


int realsmith_FnQVv(int *source)
{
 if (!(1))
  return 0;
 return (1);
}
int realsmith_proxy_4Gi9F(int p_0_myBJd) {
int proxy_ret_zFW5W = realsmith_FnQVv(&(p_0_myBJd));
return proxy_ret_zFW5W;
}


__attribute__((used)) static int realsmith_Dq6dR(int *c, int bits)
{
    int value = 0;
    while (bits--) {
        value = (value << 1) | (1);
    }
    return value;
}
int realsmith_proxy_8CnYz(int p_0_3we8s, int p_1_4Sy2m) {
int proxy_ret_ZTbfQ = realsmith_Dq6dR(&(p_0_3we8s), p_1_4Sy2m);
return proxy_ret_ZTbfQ;
}


__attribute__((used)) static const char* realsmith_C3aLa(void) {
  return
    "struct Function {\n"
    "  var (*func)(var);\n"
    "};\n";
}
char realsmith_proxy_snjLM() {
char * proxy_ret_LfdNh = realsmith_C3aLa();
return *proxy_ret_LfdNh;
}


int BANDWIDTH_6_MHZ_realsmith_2Pzj4 = 7;

int BANDWIDTH_7_MHZ_realsmith_2Pzj4 = 4;

int BANDWIDTH_8_MHZ_realsmith_2Pzj4 = 12;

int BANDWIDTH_AUTO_realsmith_2Pzj4 = -1;

__attribute__((used)) static int realsmith_2Pzj4( int *p_access )
{
    int fe_bandwidth = 0;
    int i_bandwidth = (1);
    (1);
    switch( i_bandwidth )
    {
        case 0: fe_bandwidth = BANDWIDTH_AUTO_realsmith_2Pzj4; break;
        case 6: fe_bandwidth = BANDWIDTH_6_MHZ_realsmith_2Pzj4; break;
        case 7: fe_bandwidth = BANDWIDTH_7_MHZ_realsmith_2Pzj4; break;
        case 8: fe_bandwidth = BANDWIDTH_8_MHZ_realsmith_2Pzj4; break;
        default:
            (1);
            fe_bandwidth = BANDWIDTH_AUTO_realsmith_2Pzj4;
            break;
    }
    return fe_bandwidth;
}
int realsmith_proxy_7cSJ4(int p_0_UxEzh) {
int proxy_p1Pe7[18] = { p_0_UxEzh, p_0_UxEzh, p_0_UxEzh, p_0_UxEzh, 18, 20, p_0_UxEzh, p_0_UxEzh, 96, p_0_UxEzh, p_0_UxEzh, 24, 55, 15, p_0_UxEzh, p_0_UxEzh, 79, p_0_UxEzh };
int proxy_ret_6p2h7 = realsmith_2Pzj4(proxy_p1Pe7);
return proxy_ret_6p2h7;
}


int MZ_EXIST_ERROR_realsmith_IBInC = 11;

int MZ_OK_realsmith_IBInC = 19;

int realsmith_IBInC(const char *path)
{
    int path_len = (int)(1);
    if (path[path_len - 1] != '\\' && path[path_len - 1] != '/')
        return MZ_EXIST_ERROR_realsmith_IBInC;
    return MZ_OK_realsmith_IBInC;
}
int realsmith_proxy_sa4nr(char p_0_jyD4a) {
int proxy_ret_dIZty = realsmith_IBInC(&(p_0_jyD4a));
return proxy_ret_dIZty;
}


int FALSE_realsmith_i2QVM = 11;

int TRUE_realsmith_i2QVM = 15;

__attribute__((used)) static inline int realsmith_i2QVM(int token)
{
  int ret;
  switch(token)
  {
    case 128:
    case 135:
    case 134:
    case 136:
    case 138:
    case 130:
    case 131:
    case 132:
    case 133:
    case 129:
    case 137:
      ret = TRUE_realsmith_i2QVM;
      break;
    default:
      ret = FALSE_realsmith_i2QVM;
      break;
  }
  return ret;
}

__attribute__((used)) static int realsmith_eOqGA(int frequency)
{
    int freq = 48000;
    switch (frequency) {
    case 131:
        freq = 16000;
        break;
    case 130:
        freq = 32000;
        break;
    case 129:
        freq = 44100;
        break;
    case 128:
        freq = 48000;
        break;
    }
    return freq;
}

int A3XX_SP_VS_CTRL_REG1_INITIALOUTSTANDING__MASK_realsmith_NS2ss = 13;

int A3XX_SP_VS_CTRL_REG1_INITIALOUTSTANDING__SHIFT_realsmith_NS2ss = 7;

__attribute__((used)) static inline int realsmith_NS2ss(int val)
{
 return ((val) << A3XX_SP_VS_CTRL_REG1_INITIALOUTSTANDING__SHIFT_realsmith_NS2ss) & A3XX_SP_VS_CTRL_REG1_INITIALOUTSTANDING__MASK_realsmith_NS2ss;
}

int RET_ILUNI_realsmith_EJyBK = -9;

__attribute__((used)) static int
realsmith_EJyBK (int conv, unsigned char *r, int wc, int n)
{
  if (wc < 0x0080) {
    *r = wc;
    return 1;
  }
  else if (wc >= 0x0e01 && wc <= 0x0e5b && !(wc >= 0x0e3b && wc <= 0x0e3e)) {
    *r = wc-0x0d60;
    return 1;
  }
  return RET_ILUNI_realsmith_EJyBK;
}
int realsmith_proxy_0rptn(int p_0_RpzX8, unsigned char p_1_lCTHG, int p_2_pltus, int p_3_SM7s9) {
unsigned char proxy_MaSRJ[11] = { p_1_lCTHG, 56, 70, 54, 31, 4, 44, p_1_lCTHG, 63, p_1_lCTHG, p_1_lCTHG };
int proxy_ret_3VtuN = realsmith_EJyBK(p_0_RpzX8, proxy_MaSRJ, p_2_pltus, p_3_SM7s9);
return proxy_ret_3VtuN;
}


__attribute__((used)) static int realsmith_FidWZ(int strat)
{
    switch(strat)
    {
        case 133:
            return 9;
        case 134:
        case 135:
            return 8;
        case 136:
        case 128:
            return 7;
        case 129:
        case 130:
        case 132:
        case 131:
        default:;
    }
    return 6;
}

__attribute__((used)) static int realsmith_u0cUa(int value)
{
 return (value & 0x80) ? value | ~0xff : value & 0xff;
}

__attribute__((used)) static int
realsmith_S5LJj (int *valp)
{
  int error;
  error = (*valp & ~0x3f) != 0;
  return error;
}
int realsmith_proxy_Y8txg(int p_0_7LNze) {
int proxy_jezT9[13] = { p_0_7LNze, p_0_7LNze, p_0_7LNze, 40, p_0_7LNze, p_0_7LNze, 60, p_0_7LNze, 48, 17, 39, 44, p_0_7LNze };
int proxy_ret_cCCDr = realsmith_S5LJj(proxy_jezT9);
return proxy_ret_cCCDr;
}


__attribute__((used)) static inline int realsmith_Zpb2E(int Family, int Model) {
 return Family | (Model << 4);
}

int RES_ERROR_realsmith_zAT9y = 15;

int RES_OK_realsmith_zAT9y = -3;

int realsmith_zAT9y (
 int pdrv,
 const int *buff,
 int sector,
 int count
)
{
  if (count == 1) {
    if (! (1)) {
      return RES_ERROR_realsmith_zAT9y;
    }
  } else {
    if (! (1)) {
      return RES_ERROR_realsmith_zAT9y;
    }
  }
  return RES_OK_realsmith_zAT9y;
}
int realsmith_proxy_NrVvs(int p_0_MpsRr, int p_1_fmaYP, int p_2_OJC8c, int p_3_I2x8e) {
int proxy_ret_LOcHd = realsmith_zAT9y(p_0_MpsRr, &(p_1_fmaYP), p_2_OJC8c, p_3_I2x8e);
return proxy_ret_LOcHd;
}


int NETIOR_XGMAC_STATS_CLR_POS_realsmith_ctEQK = 0;

int
realsmith_ctEQK(int nae_base, int nblock, int port_type,
    int port, int desc_size)
{
 int netwk_inf;
 int mac_cfg1, netior_ctrl3;
 int iface, iface_ctrl_reg, iface_ctrl3_reg, conf1_reg, conf2_reg;
 switch (port_type) {
 case 128:
  netwk_inf = (1);
  netwk_inf |= (1 << NETIOR_XGMAC_STATS_CLR_POS_realsmith_ctEQK);
  (1);
  (1);
  break;
 case 130:
  (1);
  break;
 case 129:
  (1);
  iface = port & 0x3;
  iface_ctrl_reg = (1);
  conf1_reg = (1);
  conf2_reg = (1);
  netwk_inf = (1);
  netwk_inf &= 0x7ffffff;
  netwk_inf |= (port << 27);
  (1);
  netwk_inf &= 0xfffff7ff;
  (1);
  mac_cfg1 = (1);
  (1);
  (1);
  mac_cfg1 = (1);
  (1);
  iface_ctrl3_reg = (1);
  netior_ctrl3 = (1);
  (1);
  mac_cfg1 = (1);
  (1);
  netwk_inf = (1);
  (1);
  netwk_inf = (1);
  (1);
  netwk_inf = (1);
  (1);
  mac_cfg1 = (1);
  (1);
  break;
 }
 (1);
 (1);
 return (0);
}

__attribute__((used)) static int realsmith_uJyB6(const int *arr, int len, int val)
{
    int i;
    for (i = 0; i < len; i++)
        if (arr[i] == val)
            return 1;
    return 0;
}
int realsmith_proxy_gv0H9(int p_0_5wbvJ, int p_1_OAVKz, int p_2_x0Taz) {
int proxy_fS9kH[10] = { 12, p_0_5wbvJ, p_0_5wbvJ, 84, 27, 99, 50, p_0_5wbvJ, 26, p_0_5wbvJ };
int proxy_ret_Wttti = realsmith_uJyB6(proxy_fS9kH, p_1_OAVKz, p_2_x0Taz);
return proxy_ret_Wttti;
}


__attribute__((used)) static inline unsigned int realsmith_okX1Q(unsigned int x, unsigned n)
{
 return (x >> n) | (x << (32 - n));
}

int SSL_R_CA_KEY_TOO_SMALL_realsmith_8Kabe = 11;

int SSL_R_CA_MD_TOO_WEAK_realsmith_8Kabe = 8;

int SSL_R_EE_KEY_TOO_SMALL_realsmith_8Kabe = 11;

int SSL_SECOP_CA_KEY_realsmith_8Kabe = 9;

int SSL_SECOP_CA_MD_realsmith_8Kabe = 14;

int SSL_SECOP_EE_KEY_realsmith_8Kabe = 6;

int SSL_SECOP_PEER_realsmith_8Kabe = 0;

int realsmith_8Kabe(int *s, int *ctx, int *x, int vfy, int is_ee)
{
    if (vfy)
        vfy = SSL_SECOP_PEER_realsmith_8Kabe;
    if (is_ee) {
        if (!(1))
            return SSL_R_EE_KEY_TOO_SMALL_realsmith_8Kabe;
    } else {
        if (!(1))
            return SSL_R_CA_KEY_TOO_SMALL_realsmith_8Kabe;
    }
    if (!(1))
        return SSL_R_CA_MD_TOO_WEAK_realsmith_8Kabe;
    return 1;
}
int realsmith_proxy_rjn7Z(int p_0_7SqdV, int p_1_ueWm5, int p_2_4WiGn, int p_3_PPKAd, int p_4_I7xRG) {
int proxy_77MeQ[18] = { p_0_7SqdV, p_0_7SqdV, p_0_7SqdV, p_0_7SqdV, p_0_7SqdV, 64, 21, p_0_7SqdV, p_0_7SqdV, p_0_7SqdV, p_0_7SqdV, p_0_7SqdV, 66, p_0_7SqdV, p_0_7SqdV, p_0_7SqdV, 89, 92 };
int proxy_FU8Ph[10] = { p_1_ueWm5, 95, 86, p_1_ueWm5, 87, p_1_ueWm5, 15, 47, p_1_ueWm5, 37 };
int proxy_ret_Uijfi = realsmith_8Kabe(proxy_77MeQ, proxy_FU8Ph, &(p_2_4WiGn), p_3_PPKAd, p_4_I7xRG);
return proxy_ret_Uijfi;
}


__attribute__((used)) static int realsmith_ArIuJ(int *cbio, int *resp)
{
    char http_resp[] =
        "HTTP/1.0 200 OK\r\nContent-type: application/ocsp-response\r\n"
        "Content-Length: %d\r\n\r\n";
    if (cbio == ((void*)0))
        return 0;
    (1);
    (1);
    (void)(1);
    return 1;
}
int realsmith_proxy_k7iVT(int p_0_U3qpo, int p_1_uLdJg) {
int proxy_MbqwT[16] = { 3, p_0_U3qpo, p_0_U3qpo, p_0_U3qpo, p_0_U3qpo, 8, p_0_U3qpo, 79, p_0_U3qpo, p_0_U3qpo, 58, 99, 99, 68, 96, 98 };
int proxy_TbxEO[19] = { p_1_uLdJg, p_1_uLdJg, 87, p_1_uLdJg, 34, 9, 24, p_1_uLdJg, 28, p_1_uLdJg, 32, p_1_uLdJg, 12, 69, p_1_uLdJg, p_1_uLdJg, p_1_uLdJg, 96, 7 };
int proxy_ret_aNfeO = realsmith_ArIuJ(proxy_MbqwT, proxy_TbxEO);
return proxy_ret_aNfeO;
}


int FAIL_realsmith_nyJfs = -8;

int NUL_realsmith_nyJfs = 2;

int
realsmith_nyJfs(
    int *s,
    int len)
{
    *s = NUL_realsmith_nyJfs;
    return FAIL_realsmith_nyJfs;
}
int realsmith_proxy_Iabcf(int p_0_FWa3C, int p_1_tfYr4) {
int proxy_ret_KGQze = realsmith_nyJfs(&(p_0_FWa3C), p_1_tfYr4);
return proxy_ret_KGQze;
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
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output /home/chuang/FramaCsliceNew/creal/batch_experiments/test_20251023_195341/test87/43TJCU_seed.c
 * Seed:      2292197140
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_4[2] = {(-8L),(-8L)};
static uint8_t g_39 = 0x9DL;
static int32_t g_44 = 0x635D5AA0L;
static uint32_t g_51 = 0x8D85E261L;
static uint8_t g_76 = 0x90L;
static uint8_t *g_75 = &g_76;
static uint64_t g_80 = 0x737198010E05D1EELL;
static int64_t g_85 = (-1L);
static uint64_t g_89 = 0x8A5C6425F0F443C0LL;
static uint64_t *g_88 = &g_89;
static uint32_t g_103[9][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
static int32_t g_128 = (-3L);
static int8_t g_165 = (-7L);
static int8_t g_166 = (-1L);
static uint64_t g_167 = 0xDB116D794BBEC019LL;
static int32_t g_177[9][3][4] = {{{0L,0x9AB7E0C7L,0L,0xD96E28CDL},{0xEF9817D9L,0x2E02E4CAL,0xD96E28CDL,5L},{0xD96E28CDL,5L,0xBAE54040L,5L}},{{1L,0x2E02E4CAL,0x91E2AD39L,0xD96E28CDL},{4L,0x9AB7E0C7L,5L,0xBDEA83D7L},{0x91E2AD39L,1L,(-8L),(-8L)}},{{0x91E2AD39L,0x91E2AD39L,0xEF9817D9L,0x9AB7E0C7L},{0xD96E28CDL,1L,5L,0x2E02E4CAL},{0xBDEA83D7L,0L,4L,5L}},{{(-8L),0L,(-8L),0x2E02E4CAL},{0L,1L,0xBAE54040L,0x9AB7E0C7L},{0x9AB7E0C7L,5L,0xBDEA83D7L,1L}},{{0x91E2AD39L,0xBDEA83D7L,0xBDEA83D7L,0x91E2AD39L},{0x9AB7E0C7L,0x2E02E4CAL,0xBAE54040L,(-8L)},{0L,0L,(-8L),0xEF9817D9L}},{{(-8L),0xEF9817D9L,4L,0xEF9817D9L},{0xBDEA83D7L,0L,5L,(-8L)},{0xD96E28CDL,0x2E02E4CAL,0xEF9817D9L,0x91E2AD39L}},{{5L,0xBDEA83D7L,1L,1L},{5L,5L,0xEF9817D9L,0x9AB7E0C7L},{0xD96E28CDL,1L,5L,0x2E02E4CAL}},{{0xBDEA83D7L,0L,4L,5L},{(-8L),0L,(-8L),0x2E02E4CAL},{0L,1L,0xBAE54040L,0x9AB7E0C7L}},{{0x9AB7E0C7L,5L,0xBDEA83D7L,1L},{0x91E2AD39L,0xBDEA83D7L,0xBDEA83D7L,0x91E2AD39L},{0x9AB7E0C7L,0x2E02E4CAL,0xBAE54040L,(-8L)}}};
static const int32_t g_184 = 0x1F0966B1L;
static int32_t *g_243 = (void*)0;
static uint32_t *g_248 = &g_103[0][1];
static uint32_t **g_247 = &g_248;
static uint32_t ***g_246 = &g_247;
static uint64_t g_257 = 9UL;
static int32_t g_277 = 0x9A4662F5L;
static uint64_t g_312 = 0x3F3D568525718F32LL;
static int16_t g_326 = (-10L);
static int8_t g_327[3][10] = {{0x96L,0x76L,0x15L,(-8L),0L,(-8L),0x15L,0x76L,0x96L,1L},{0x96L,5L,0x78L,(-1L),(-8L),1L,1L,(-8L),(-1L),0x78L},{1L,1L,(-8L),(-1L),0x78L,5L,0x96L,0x60L,0x96L,5L}};
static uint16_t g_329 = 0x6EC9L;
static uint16_t g_333 = 0xC21DL;
static uint8_t g_336 = 0UL;
static uint8_t g_364 = 252UL;
static int32_t g_379[6] = {1L,1L,1L,1L,1L,1L};
static uint32_t g_450 = 0x3600E5B1L;
static int64_t g_527 = 0xD90D3A76F4C441E3LL;
static uint16_t *g_537 = &g_329;
static uint16_t **g_536 = &g_537;
static uint32_t ****g_578 = &g_246;
static uint32_t *****g_577 = &g_578;
static uint64_t g_608 = 18446744073709551615UL;
static int16_t *g_634 = &g_326;
static int16_t **g_640 = (void*)0;
static int32_t *g_646 = (void*)0;
static int32_t **g_645 = &g_646;
static int64_t g_713 = 0x09D06D2233501648LL;
static int16_t g_808[2][10] = {{0x569FL,0x569FL,0x3DBCL,0x27ADL,0x3DBCL,0x569FL,0x569FL,0x3DBCL,0x27ADL,0x3DBCL},{0x569FL,0x569FL,0x3DBCL,0x27ADL,0x3DBCL,0x569FL,0x569FL,0x3DBCL,0x27ADL,0x3DBCL}};
static uint64_t g_963 = 0x54AE6C7109BAEE24LL;
static int32_t **g_969 = &g_243;
static int32_t *** const g_968[1][6] = {{&g_969,&g_969,&g_969,&g_969,&g_969,&g_969}};
static uint64_t *** const g_1080 = (void*)0;
static uint32_t g_1100 = 0UL;
static int64_t g_1254 = (-1L);
static uint64_t g_1335 = 6UL;
static uint32_t g_1488[2][9] = {{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL}};
static int32_t g_1586[10] = {0x9CE8B640L,0x9CE8B640L,0xD5C62183L,0x9CE8B640L,0x9CE8B640L,0xD5C62183L,0x9CE8B640L,0x9CE8B640L,0xD5C62183L,0x9CE8B640L};
static uint8_t ***** const g_1697 = (void*)0;
static uint16_t ****g_1747[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static int8_t *g_1777 = &g_327[2][8];
static int8_t **g_1776[2] = {&g_1777,&g_1777};
static int8_t ***g_1775 = &g_1776[1];
static int32_t g_1836 = 0xFB7837E0L;
static int32_t *g_1881 = (void*)0;
static uint32_t *g_1883[3] = {&g_1488[0][7],&g_1488[0][7],&g_1488[0][7]};
static uint32_t **g_1882 = &g_1883[2];
static const int32_t ***g_1979 = (void*)0;
static uint16_t *****g_2034 = &g_1747[7][1];
static int64_t g_2107 = 0x96B360636424A09ELL;
static int32_t g_2108 = 0xC0CD01E6L;
static int32_t *g_2198[4][2][1] = {{{&g_379[5]},{&g_1586[5]}},{{&g_379[5]},{&g_1586[5]}},{{&g_379[5]},{&g_1586[5]}},{{&g_379[5]},{&g_1586[5]}}};
static uint32_t g_2215 = 0xBF9ADE61L;
static const uint32_t *g_2354 = (void*)0;
static const uint32_t **g_2353 = &g_2354;
static const uint32_t ***g_2352 = &g_2353;
static const uint32_t *** const *g_2351 = &g_2352;
static int32_t * const *g_2379 = (void*)0;
static int32_t * const **g_2378 = &g_2379;
static int32_t * const ** const * const g_2377 = &g_2378;
static uint8_t * const *g_2444 = &g_75;
static uint8_t * const **g_2443 = &g_2444;
static uint8_t * const ***g_2442 = &g_2443;
static int16_t ***g_2469 = &g_640;
static int16_t ****g_2468 = &g_2469;
static uint16_t g_2488 = 0xC4FBL;
static uint32_t g_2492 = 0xB4E55550L;
static int32_t *g_2499 = &g_277;
static uint32_t g_2599 = 0UL;
static uint32_t *****g_2655 = (void*)0;
static uint64_t **g_3158 = &g_88;
static uint64_t ** const *g_3157 = &g_3158;
static const uint8_t g_3185 = 1UL;
static int8_t **g_3311 = &g_1777;
static int8_t *** const g_3310 = &g_3311;
static int8_t *** const *g_3309[1][1][7] = {{{&g_3310,&g_3310,&g_3310,&g_3310,&g_3310,&g_3310,&g_3310}}};
static int8_t *** const **g_3308 = &g_3309[0][0][2];
static uint8_t g_3325 = 246UL;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int32_t  func_10(uint32_t  p_11, uint16_t  p_12);
static uint32_t  func_25(uint64_t  p_26, const int32_t * p_27, uint32_t  p_28, const uint32_t  p_29);
static int32_t * func_30(int32_t * const  p_31, uint32_t  p_32);
static int32_t * const  func_33(uint8_t  p_34, int32_t * p_35, uint64_t  p_36);
static int8_t  func_54(uint64_t  p_55, int32_t * const  p_56);
static uint16_t  func_57(uint8_t * p_58, int32_t  p_59);
static int32_t  func_60(int32_t * p_61, int32_t * p_62, int32_t * p_63, int32_t  p_64);
static int32_t * func_65(const int16_t  p_66, int32_t  p_67, uint8_t * p_68);
static uint8_t * func_69(uint32_t  p_70, int32_t * p_71, int32_t * p_72, uint8_t * p_73, uint8_t * p_74);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_39 g_51 g_75 g_76 g_85 g_88 g_44 g_103 g_128 g_80 g_89 g_167 g_184 g_177 g_165 g_246 g_166 g_247 g_248 g_312 g_329 g_333 g_243 g_277 g_327 g_364 g_257 g_379 g_336 g_326 g_536 g_537 g_713 g_808 g_634 g_963 g_968 g_577 g_969 g_1080 g_1100 g_578 g_450 g_527 g_608 g_1488 g_2215 g_1775 g_1776 g_1777 g_2107 g_1335 g_2468 g_1254 g_2443 g_2444 g_2488 g_2492 g_2034 g_1747 g_2499 g_1586 g_2599 g_2469 g_2655 g_2442 g_1836 g_2378 g_2379 g_2377 g_3325
 * writes: g_39 g_51 g_76 g_80 g_85 g_89 g_103 g_128 g_44 g_167 g_177 g_243 g_165 g_246 g_257 g_277 g_329 g_333 g_336 g_379 g_326 g_450 g_527 g_312 g_166 g_578 g_75 g_364 g_327 g_645 g_1100 g_536 g_88 g_713 g_577 g_2198 g_2215 g_2107 g_1335 g_1254 g_2488 g_808 g_2492 g_608 g_963 g_2599 g_1586 g_248 g_4 g_3325
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    int64_t l_2 = 1L;
    int32_t *l_3 = &g_4[0];
    int32_t *l_5 = (void*)0;
    int32_t *l_6[6];
    uint32_t l_7 = 0UL;
    uint8_t *l_2940 = &g_76;
    int64_t l_2964 = 0xEA973CF56FD6E84ALL;
    int8_t l_2970[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int16_t l_2989 = 0x552EL;
    uint64_t l_3038 = 1UL;
    uint64_t l_3151[5][3][10] = {{{18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551613UL,18446744073709551607UL,0xB5BD25078D5E4D5FLL,0x0DC7578931DD2DCELL,0UL,18446744073709551608UL,0x46242C8B4233847CLL},{0x1C05D1F78DD1264FLL,1UL,0x0DC7578931DD2DCELL,18446744073709551615UL,0xB5BD25078D5E4D5FLL,18446744073709551608UL,0xCF8717785E725A48LL,0UL,0x2493F95B5FFC3A83LL,0x078CB9867DA03364LL},{18446744073709551606UL,0xA579B6DD568E4E57LL,18446744073709551615UL,0x65BEA1B273A68AA2LL,18446744073709551608UL,4UL,0xDD643CED3D8D8B70LL,0x0DC7578931DD2DCELL,0xAE1F5122BADD6F88LL,0UL}},{{0xA579B6DD568E4E57LL,18446744073709551607UL,0x4D43C30F84A1B8F5LL,0UL,1UL,1UL,0UL,0x4D43C30F84A1B8F5LL,18446744073709551607UL,0xA579B6DD568E4E57LL},{0x0DC7578931DD2DCELL,0x46242C8B4233847CLL,0xDD643CED3D8D8B70LL,1UL,0x04EF5C4FC2C966A0LL,0x7A55B54C819387C9LL,0x4760392CB646BB07LL,0x7244C1076CDECE7ELL,1UL,18446744073709551613UL},{0x2493F95B5FFC3A83LL,1UL,0x894F646FD6B62299LL,0x46242C8B4233847CLL,0x04EF5C4FC2C966A0LL,0xC5BA4DDE6419A60ALL,18446744073709551612UL,1UL,0xDAC3E0B527377AA3LL,0xA579B6DD568E4E57LL}},{{0x04EF5C4FC2C966A0LL,0x4760392CB646BB07LL,0xA579B6DD568E4E57LL,0x0F8147A8A370C2E6LL,1UL,0x46242C8B4233847CLL,0x2493F95B5FFC3A83LL,0UL,0x7A55B54C819387C9LL,0UL},{18446744073709551611UL,0xCF8717785E725A48LL,18446744073709551608UL,0x894F646FD6B62299LL,18446744073709551608UL,0xCF8717785E725A48LL,18446744073709551611UL,0x46242C8B4233847CLL,0UL,0x078CB9867DA03364LL},{0xAE1F5122BADD6F88LL,0xDAC3E0B527377AA3LL,18446744073709551608UL,0x1C05D1F78DD1264FLL,0xB5BD25078D5E4D5FLL,0x1F9BA150AF54E74ALL,0x7244C1076CDECE7ELL,0x65BEA1B273A68AA2LL,0x0F8147A8A370C2E6LL,0x46242C8B4233847CLL}},{{0x894F646FD6B62299LL,0xDAC3E0B527377AA3LL,0x0F8147A8A370C2E6LL,0x0DC7578931DD2DCELL,18446744073709551607UL,18446744073709551615UL,18446744073709551611UL,0x078CB9867DA03364LL,4UL,18446744073709551608UL},{0x46242C8B4233847CLL,0xCF8717785E725A48LL,0x1C05D1F78DD1264FLL,1UL,0xC5BA4DDE6419A60ALL,0x65BEA1B273A68AA2LL,0x2493F95B5FFC3A83LL,0x2493F95B5FFC3A83LL,0x65BEA1B273A68AA2LL,0xC5BA4DDE6419A60ALL},{18446744073709551615UL,0x4760392CB646BB07LL,0x4760392CB646BB07LL,18446744073709551615UL,0UL,0x1C05D1F78DD1264FLL,18446744073709551612UL,1UL,18446744073709551606UL,18446744073709551608UL}},{{0xDAC3E0B527377AA3LL,1UL,0x7244C1076CDECE7ELL,0UL,18446744073709551608UL,18446744073709551608UL,0x4760392CB646BB07LL,18446744073709551612UL,18446744073709551606UL,0x2493F95B5FFC3A83LL},{18446744073709551607UL,0x46242C8B4233847CLL,0x078CB9867DA03364LL,18446744073709551615UL,0UL,0x04EF5C4FC2C966A0LL,0UL,0x1F9BA150AF54E74ALL,0x65BEA1B273A68AA2LL,0xAE1F5122BADD6F88LL},{0x7A55B54C819387C9LL,18446744073709551607UL,4UL,1UL,0xDD643CED3D8D8B70LL,0x4760392CB646BB07LL,0xDD643CED3D8D8B70LL,1UL,4UL,18446744073709551607UL}}};
    uint16_t ***l_3272 = (void*)0;
    uint16_t ****l_3271[8] = {&l_3272,&l_3272,&l_3272,&l_3272,&l_3272,&l_3272,&l_3272,&l_3272};
    int16_t * const *l_3291[3];
    int16_t * const **l_3290 = &l_3291[1];
    int16_t * const ***l_3289 = &l_3290;
    uint64_t ***l_3331 = &g_3158;
    int16_t l_3332 = 0L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_6[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_3291[i] = &g_634;
    --l_7;
    /*bef_stmt:100533*/
/*bef_stmt:100533*/
if (func_10(/*TAG1:STA*/((int32_t)(realsmith_fKzHC((int)(g_4[1])+(52), (int)(g_4[1])+(22))+(int)(g_4[1])-(-8))+g_4[1])/*TAG1:END:g_4[1]*/, Tag2(/*int32_t:0:0:100533:e*/g_4[0])))
    { /* block id: 1184 */
        const uint8_t l_2939 = 0x2BL;
        uint32_t *l_2941[8][1][3] = {{{&l_7,(void*)0,(void*)0}},{{&g_103[2][0],&g_103[2][0],(void*)0}},{{&g_450,(void*)0,(void*)0}},{{(void*)0,&l_7,(void*)0}},{{&g_450,&l_7,&g_450}},{{&g_103[2][0],(void*)0,(void*)0}},{{&g_103[2][0],&g_103[2][0],(void*)0}},{{&g_450,(void*)0,(void*)0}}};
        uint64_t **l_2949 = &g_88;
        uint64_t ***l_2950 = &l_2949;
        int32_t l_2965 = 0x67A28533L;
        int64_t l_2966[5][2][9] = {{{(-7L),0x0BA4EEDF27189A8DLL,2L,2L,0x0BA4EEDF27189A8DLL,(-7L),0xCBEC1ACB53CB527FLL,0xCBEC1ACB53CB527FLL,(-7L)},{0xB6EF9A9332873FE5LL,0xE3526C6B91B0269BLL,0xC09CD9371B1DCFD8LL,0xE3526C6B91B0269BLL,0xB6EF9A9332873FE5LL,0xE3526C6B91B0269BLL,0xC09CD9371B1DCFD8LL,0xE3526C6B91B0269BLL,0xB6EF9A9332873FE5LL}},{{0x0BA4EEDF27189A8DLL,2L,2L,0x0BA4EEDF27189A8DLL,(-7L),0xCBEC1ACB53CB527FLL,0xCBEC1ACB53CB527FLL,(-7L),0x0BA4EEDF27189A8DLL},{0L,0xE3526C6B91B0269BLL,0L,0x0234D534FA00A9F9LL,0L,0xE3526C6B91B0269BLL,0L,0x0234D534FA00A9F9LL,0L}},{{0x0BA4EEDF27189A8DLL,0x0BA4EEDF27189A8DLL,0xCBEC1ACB53CB527FLL,2L,(-7L),(-7L),2L,0xCBEC1ACB53CB527FLL,0x0BA4EEDF27189A8DLL},{0xB6EF9A9332873FE5LL,0x0234D534FA00A9F9LL,0xC09CD9371B1DCFD8LL,0x0234D534FA00A9F9LL,0xB6EF9A9332873FE5LL,0x0234D534FA00A9F9LL,0xC09CD9371B1DCFD8LL,0x0234D534FA00A9F9LL,0xB6EF9A9332873FE5LL}},{{(-7L),2L,0xCBEC1ACB53CB527FLL,0x0BA4EEDF27189A8DLL,0x0BA4EEDF27189A8DLL,0xCBEC1ACB53CB527FLL,2L,(-7L),(-7L)},{0L,0x0234D534FA00A9F9LL,0L,0xE3526C6B91B0269BLL,0L,0x0234D534FA00A9F9LL,0L,0xE3526C6B91B0269BLL,0L}},{{(-7L),0x0BA4EEDF27189A8DLL,2L,2L,0x0BA4EEDF27189A8DLL,(-7L),0xCBEC1ACB53CB527FLL,0xCBEC1ACB53CB527FLL,(-7L)},{0xB6EF9A9332873FE5LL,0xE3526C6B91B0269BLL,0xC09CD9371B1DCFD8LL,0xE3526C6B91B0269BLL,0xB6EF9A9332873FE5LL,0xE3526C6B91B0269BLL,0xC09CD9371B1DCFD8LL,0xE3526C6B91B0269BLL,0xB6EF9A9332873FE5LL}}};
        int64_t l_2967 = 0xA75465E971B68127LL;
        int32_t l_2968 = (-1L);
        int64_t l_2969[2][5] = {{0x2EE1F256A3E920A2LL,0x2EE1F256A3E920A2LL,0x2EE1F256A3E920A2LL,0x2EE1F256A3E920A2LL,0x2EE1F256A3E920A2LL},{0xAFA6C75E6F0FC2CFLL,0xAFA6C75E6F0FC2CFLL,0xAFA6C75E6F0FC2CFLL,0xAFA6C75E6F0FC2CFLL,0xAFA6C75E6F0FC2CFLL}};
        int32_t l_2971 = 0L;
        uint8_t l_2987[7] = {249UL,249UL,1UL,249UL,249UL,1UL,249UL};
        int8_t l_3033 = 0xBAL;
        int32_t l_3036 = 9L;
        int32_t l_3037 = 0x240CCC0FL;
        uint8_t ** const l_3058 = &g_75;
        uint8_t ** const *l_3057 = &l_3058;
        uint8_t ** const **l_3056 = &l_3057;
        uint16_t l_3059 = 0x53CDL;
        int32_t l_3069 = 0x6610D6FBL;
        int64_t l_3098 = 0x151F443B1863DBA0LL;
        uint64_t l_3104 = 0xCAA69394A03E599DLL;
        int64_t l_3170 = (-5L);
        int64_t l_3232 = (-9L);
        int i, j, k;
        (*l_3) = (((*g_247) = l_2941[2][0][2]) == l_2941[3][0][0]);
        /*bef_stmt:94101*/
if (Tag3(/*int64_t:0:0:94101:e*/g_2107))
            goto lbl_2972;
/*aft_stmt:94101*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
/*bef_stmt:95187*/
lbl_2972:
        l_2971 ^= (l_2970[8] = ((*l_3) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x31L, ((l_2968 &= (((((!((safe_lshift_func_uint8_t_u_u(((((*g_75) = (((*l_2950) = l_2949) != (void*)0)) > ((((safe_unary_minus_func_uint64_t_u((((*g_1777) = ((((*g_88) = (/*TAG4:STA*/((uint64_t)(realsmith_lEWHn((int)(g_4[1])+(99), (int)(g_2107)+(-1680121936))+(int)(*g_88)+((int)(g_2107)-(1680122014))+(int)(g_4[1])-(1270792101))+*g_88)/*TAG4:END:*g_88*/)) & /*TAG5:STA*/((uint64_t)(realsmith_proxy_arYzO((unsigned char)(g_4[1])+(-164))+(unsigned char)(g_963)+((unsigned char)(g_4[1])-(248))+((unsigned char)(g_2107)-(158))+((unsigned char)(*g_88)-(173))-(120))+g_963)/*TAG5:END:g_963*/) <= ((*g_634) = (safe_mod_func_int16_t_s_s((Tag6(/*int32_t:100759:100759:95187:e*/*l_3)), (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((Tag7(/*const uint8_t:99973:100759:95187:e*/l_2939) | (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_2941[2][0][2] == ((*g_247) = &l_7)), Tag8(/*int64_t:100759:100759:95187:e*/l_2964))), /*TAG9:STA*/((int32_t)(realsmith_okX1Q((unsigned int)(*g_88)+(-1270792088), (unsigned int)(*g_88)+(-1270792101))+(unsigned int)(l_2965)+(unsigned int)(*g_88)+((unsigned int)(l_2964)-(1876355146))+((unsigned int)(g_2107)-(1680122014))-(3361817824))+l_2965)/*TAG9:END:l_2965*/))), 3)), (Tag10(/*int32_t:100759:100759:95187:e*/*l_3)))), 5))))))) > (Tag11(/*int32_t:100759:100759:95187:e*/*l_3))))) <= Tag12(/*int32_t:99973:100759:95187:e*/l_2965)) == 255UL) || 0x789FL)) , Tag13(/*int64_t:99973:100759:95187:e*/l_2966[1][0][4])), Tag14(/*int32_t:99973:100759:95187:e*/l_2965))) ^ /*TAG15:STA*/((int64_t)(realsmith_Ye4sG((int)(l_2966[1][0][5])+(-1405833790))+(int)(l_2966[1][0][5])-(1405833855))+l_2966[1][0][5])/*TAG15:END:l_2966[1][0][5]*/)) > 0xA17151F8L) > /*TAG16:STA*/((int32_t)(realsmith_proxy_68HlI((int)(l_2939)+(-35))+(int)(l_2965)+((int)(l_2964)-(1876355146))+(int)(l_2966[1][0][4])+(int)(g_4[1])+(int)(l_2939)-(1738704207))+l_2965)/*TAG16:END:l_2965*/) > 0x31CC472CL) | Tag17(/*int64_t:99973:100759:95187:e*/l_2967))) < Tag18(/*int64_t:99973:100759:95187:e*/l_2969[1][3])))), Tag19(/*int64_t:99973:100759:95187:e*/l_2967)))));
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
/*aft_stmt:95187*/
        for (l_7 = (-23); (l_7 == 7); l_7 = safe_add_func_int64_t_s_s(l_7, 1))
        { /* block id: 1200 */
            int32_t l_2975 = 0x2D4348CDL;
            const uint64_t *l_2985 = (void*)0;
            const uint64_t **l_2986 = &l_2985;
            int64_t *l_2988[10] = {&l_2967,&l_2967,&l_2967,&l_2967,&l_2967,&l_2967,&l_2967,&l_2967,&l_2967,&l_2967};
            int32_t *l_3003 = (void*)0;
            int32_t *l_3011 = &g_177[1][2][0];
            uint32_t l_3027[8] = {18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL};
            uint8_t *l_3028 = &l_2987[1];
            uint8_t *l_3029[10];
            int32_t l_3032 = (-4L);
            int8_t l_3034 = 0xFEL;
            int32_t l_3035 = 0xB042215AL;
            const uint32_t l_3060[7][6][6] = {{{4294967286UL,4294967292UL,0x85C223F3L,0UL,4294967294UL,0xDF302686L},{4294967286UL,0x69463E9DL,0UL,1UL,0xAA07ADAEL,4294967292UL},{0UL,4294967294UL,1UL,0x92F13685L,1UL,0x3B292A4DL},{4294967288UL,0x7168AA33L,0xA67F9876L,4294967295UL,0xDF302686L,0x63453074L},{0x7168AA33L,0UL,0UL,0UL,4294967295UL,0xAA07ADAEL},{0x8124A900L,1UL,4294967295UL,1UL,0x8124A900L,1UL}},{{1UL,4294967295UL,4294967294UL,0xBB7E1655L,0UL,1UL},{0x85C223F3L,1UL,0xBB8EAD91L,0x63453074L,0xAA07ADAEL,4294967294UL},{4294967288UL,4294967286UL,3UL,0UL,0UL,0xA67F9876L},{0xAA07ADAEL,1UL,0UL,0x69463E9DL,4294967286UL,1UL},{1UL,1UL,1UL,4294967295UL,0x92F13685L,0x69463E9DL},{0x69463E9DL,0x2D396829L,4294967286UL,1UL,4294967295UL,4294967295UL}},{{4294967286UL,0xA67F9876L,0xA67F9876L,4294967286UL,0xFE5F449BL,4294967295UL},{0xBB7E1655L,4294967288UL,0x8124A900L,0xBB8EAD91L,1UL,4294967289UL},{0xA67F9876L,4294967292UL,0x92F13685L,0x274D7983L,1UL,0xAA07ADAEL},{4294967295UL,4294967288UL,4294967294UL,1UL,0xFE5F449BL,4294967295UL},{3UL,0xA67F9876L,0xBB7E1655L,1UL,4294967295UL,4294967287UL},{0xDF302686L,0x2D396829L,0UL,0xAA07ADAEL,0x92F13685L,4294967294UL}},{{0UL,1UL,0xFE5F449BL,1UL,4294967286UL,1UL},{4294967292UL,1UL,4294967292UL,0x7168AA33L,0UL,1UL},{0UL,4294967286UL,1UL,0UL,0xAA07ADAEL,0xBB8EAD91L},{0x85C223F3L,1UL,1UL,0UL,0x3B292A4DL,0x7168AA33L},{0UL,0x63453074L,0UL,0x7168AA33L,0x274D7983L,0x85C223F3L},{4294967292UL,0UL,4294967294UL,1UL,0UL,0x92F13685L}},{{0UL,0xFE5F449BL,4294967295UL,0xAA07ADAEL,4294967289UL,3UL},{0xDF302686L,0x76070B1BL,1UL,1UL,1UL,1UL},{3UL,3UL,0xDF302686L,1UL,1UL,1UL},{4294967295UL,0UL,4294967287UL,0x274D7983L,1UL,0xDF302686L},{0xA67F9876L,4294967295UL,4294967287UL,0xBB8EAD91L,3UL,1UL},{0xBB7E1655L,0xBB8EAD91L,0xDF302686L,4294967286UL,4294967287UL,1UL}},{{4294967286UL,4294967287UL,1UL,1UL,4294967288UL,3UL},{0x69463E9DL,4294967294UL,4294967295UL,4294967295UL,1UL,0x92F13685L},{1UL,0x85C223F3L,4294967294UL,0x69463E9DL,4294967294UL,0x85C223F3L},{0xAA07ADAEL,4294967295UL,0UL,0UL,0UL,0x7168AA33L},{4294967288UL,0x3B292A4DL,1UL,0x63453074L,0x4E4BF5F3L,0xBB8EAD91L},{0x92F13685L,0x3B292A4DL,1UL,4294967287UL,0UL,1UL}},{{1UL,4294967295UL,4294967292UL,0UL,4294967294UL,1UL},{0x274D7983L,0x85C223F3L,0xFE5F449BL,0x3B292A4DL,1UL,4294967294UL},{0x76070B1BL,4294967294UL,0UL,0UL,4294967288UL,4294967287UL},{0UL,4294967288UL,4294967287UL,4294967287UL,4294967288UL,0UL},{0xBB8EAD91L,1UL,1UL,0x7168AA33L,0xDF302686L,1UL},{0xFE5F449BL,0x63453074L,0xBB7E1655L,0x274D7983L,1UL,1UL}}};
            int32_t l_3073 = (-1L);
            uint64_t l_3081 = 0xD712ACB60B3A69C4LL;
            uint16_t l_3147 = 0xF8F0L;
            const uint32_t l_3148[4] = {0x903FBCFAL,0x903FBCFAL,0x903FBCFAL,0x903FBCFAL};
            int16_t l_3152 = 0L;
            int32_t l_3179 = (-1L);
            int32_t l_3197 = 0xCF136174L;
            uint16_t l_3247 = 0x45DDL;
            int32_t l_3251 = 0x7E993F22L;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_3029[i] = &l_2987[6];
        }
    }
    else
    { /* block id: 1332 */
        const int32_t l_3319 = 0xF3EFE635L;
        uint16_t l_3322[1][5][2] = {{{0UL,7UL},{7UL,0UL},{7UL,7UL},{0UL,7UL},{7UL,0UL}}};
        const int32_t *l_3324 = &g_1586[8];
        const int32_t **l_3323 = &l_3324;
        int i, j, k;
        (*l_3323) = &l_3319;
        ++g_3325;
    }
/*aft_stmt:100533*/
/*aft_stmt:100533*/
    /*bef_stmt:100731*/
/*bef_stmt:100731*/
/*bef_stmt:100731*/
l_3332 &= (safe_unary_minus_func_int8_t_s(((*g_1777) ^= (3L != (((safe_sub_func_int32_t_s_s((Tag20(/*int32_t:0:0:100731:e*/*g_2499)), ((void*)0 == l_3331))) && Tag21(/*int64_t:0:0:100731:e*/g_527)) || (Tag22(/*int32_t:100759:100759:100731:e*/*l_3)))))));
/*aft_stmt:100731*/
/*aft_stmt:100731*/
/*aft_stmt:100731*/
    /*bef_stmt:100757*/
return (Tag23(/*int32_t:100759:100759:100757:e*/*l_3));
/*aft_stmt:100757*/
}


/* ------------------------------------------ */
/* 
 * reads : g_4 g_39 g_51 g_75 g_76 g_85 g_88 g_44 g_103 g_128 g_80 g_89 g_167 g_184 g_177 g_165 g_246 g_166 g_247 g_248 g_312 g_329 g_333 g_243 g_277 g_327 g_364 g_257 g_379 g_336 g_326 g_536 g_537 g_713 g_808 g_634 g_963 g_968 g_577 g_969 g_1080 g_1100 g_578 g_450 g_527 g_608 g_1488 g_2215 g_1775 g_1776 g_1777 g_2107 g_1335 g_2468 g_1254 g_2443 g_2444 g_2488 g_2492 g_2034 g_1747 g_2499 g_1586 g_2599 g_2469 g_2655 g_2442 g_1836 g_2378 g_2379 g_2377
 * writes: g_39 g_51 g_76 g_80 g_85 g_89 g_103 g_128 g_44 g_167 g_177 g_243 g_165 g_246 g_257 g_277 g_329 g_333 g_336 g_379 g_326 g_450 g_527 g_312 g_166 g_578 g_75 g_364 g_327 g_645 g_1100 g_536 g_88 g_713 g_577 g_2198 g_2215 g_2107 g_1335 g_1254 g_2488 g_808 g_2492 g_608 g_963 g_2599 g_1586
 */
static int32_t  func_10(uint32_t  p_11, uint16_t  p_12)
{ /* block id: 2 */
    uint8_t l_13 = 0UL;
    int32_t l_15 = 0x284A8988L;
    int32_t ***l_2608 = &g_645;
    uint64_t *l_2609 = &g_80;
    uint16_t l_2617 = 0xA30FL;
    int8_t **l_2681 = &g_1777;
    int32_t l_2712 = 1L;
    const uint32_t *l_2833 = &g_1488[0][6];
    const uint32_t **l_2832 = &l_2833;
    const uint32_t ***l_2831 = &l_2832;
    const uint32_t ****l_2830 = &l_2831;
    const uint32_t *****l_2829 = &l_2830;
    int32_t * const *l_2854 = (void*)0;
    int32_t * const **l_2853 = &l_2854;
    int32_t * const ***l_2852 = &l_2853;
    int32_t l_2879 = (-3L);
    uint64_t ***l_2892 = (void*)0;
    int32_t l_2904 = 0L;
    uint64_t l_2912 = 18446744073709551615UL;
    uint32_t l_2938[4][9][2] = {{{4294967287UL,5UL},{4294967286UL,4294967287UL},{4294967295UL,0UL},{4294967295UL,4294967287UL},{4294967286UL,5UL},{4294967287UL,0UL},{4294967295UL,4294967295UL},{9UL,5UL},{5UL,9UL}},{{4294967295UL,4294967295UL},{0UL,4294967287UL},{5UL,4294967286UL},{4294967287UL,4294967295UL},{0UL,4294967295UL},{4294967287UL,4294967286UL},{5UL,4294967287UL},{0UL,4294967295UL},{4294967295UL,9UL}},{{5UL,5UL},{9UL,4294967295UL},{4294967295UL,0UL},{4294967287UL,5UL},{4294967286UL,4294967287UL},{4294967295UL,0UL},{4294967295UL,4294967287UL},{4294967286UL,5UL},{4294967287UL,0UL}},{{4294967295UL,4294967295UL},{9UL,5UL},{5UL,9UL},{4294967295UL,4294967295UL},{0UL,4294967287UL},{5UL,4294967286UL},{4294967287UL,4294967295UL},{0UL,4294967295UL},{4294967287UL,4294967286UL}}};
    int i, j, k;
    /*bef_stmt:132679*/
if (/*TAG24:STA*/((int32_t)(realsmith_jieqn((int)(g_963)+(-163245571))+(int)(g_4[0])+(int)(g_963)-(163245596))+g_4[0])/*TAG24:END:g_4[0]*/)
    { /* block id: 3 */
        int32_t *l_14[3][8] = {{&g_4[0],&g_4[0],&g_4[0],&g_4[0],&g_4[0],&g_4[0],&g_4[0],&g_4[0]},{&g_4[0],&g_4[1],&g_4[0],&g_4[0],&g_4[0],&g_4[1],&g_4[0],&g_4[0]},{&g_4[1],&g_4[0],&g_4[0],&g_4[0],&g_4[0],&g_4[1],&g_4[0],&g_4[1]}};
        int64_t *l_2715 = &g_1254;
        uint64_t ** const l_2785 = &g_88;
        uint8_t **l_2794[7] = {&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75};
        uint32_t ****l_2802 = &g_246;
        const uint32_t *****l_2834 = (void*)0;
        const uint16_t ****l_2846 = (void*)0;
        int32_t l_2864[9][10][1] = {{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}},{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}},{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}},{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}},{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}},{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}},{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}},{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}},{{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)},{1L},{(-7L)}}};
        uint16_t l_2905 = 0xE6AFL;
        const uint32_t l_2916 = 0xF86E00D5L;
        int i, j, k;
        /*bef_stmt:107816*/
l_13 = Tag25(/*uint32_t:132783:132783:107816:e*/p_11);
/*aft_stmt:107816*/
        l_15 = 0L;
        /*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
/*bef_stmt:131149*/
if ((((*g_634) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(Tag26(/*int32_t:0:0:131149:e*/g_4[0]), (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((Tag27(/*int32_t:0:0:131149:e*/g_4[0]) >= ((void*)0 == l_14[0][5])), (safe_unary_minus_func_uint8_t_u(255UL)))) , (/*TAG28:STA*/((int32_t)(realsmith_proxy_8CnYz((int)(g_4[0])+(-52), (int)(g_4[0])+(14))+(int)(g_4[0])-(55))+g_4[0])/*TAG28:END:g_4[0]*/ < (((Tag29(/*uint32_t:132783:132783:131149:e*/p_11) , 0UL) != ((((func_25(Tag30(/*int32_t:0:0:131149:e*/g_4[0]), &l_15, Tag31(/*uint16_t:132783:132783:131149:e*/p_12), /*TAG32:STA*/((uint16_t)(realsmith_proxy_5UmS4((int)(p_12)+(-65504), (unsigned int)(p_11)+(-4294967239), (int)(p_12)+(-65501), (int)(p_12)+(-65472), (unsigned int)(p_11)+(-4294967249), (unsigned int)(p_11)+(-4294967193), (unsigned int)(p_11)+(-4294967261), (int)(p_12)+(-65453), (unsigned int)(p_12)+(-65479))+(int)(p_12)+(int)(p_11)+(int)(g_4[0])-(65505))+p_12)/*TAG32:END:p_12*/) & Tag33(/*uint8_t:132783:132783:131149:e*/l_13)) ^ 0xE92DA2F8298D6B92LL) <= Tag34(/*int32_t:132783:132783:131149:e*/l_15)) != 251UL)) ^ Tag35(/*int32_t:132783:132783:131149:e*/l_15)))), /*TAG36:STA*/((uint32_t)(realsmith_DFpQV((unsigned long)(p_11)+(-4294967269))+(unsigned long)(p_11)+(unsigned long)(p_12)+(unsigned long)(l_13)-(4295033067))+p_11)/*TAG36:END:p_11*/)))), 7))) > Tag37(/*int32_t:132783:132783:131149:e*/l_15)))
        { /* block id: 1035 */
            int16_t **l_2616 = &g_634;
            /*bef_stmt:108966*/
/*bef_stmt:108966*/
/*bef_stmt:108966*/
/*bef_stmt:108966*/
/*bef_stmt:108966*/
/*bef_stmt:108966*/
/*bef_stmt:108966*/
/*bef_stmt:108966*/
/*bef_stmt:108966*/
(*g_2499) = (((((((0x8001EDFECE9AC76DLL != ((safe_mul_func_uint8_t_u_u(((**g_2444) = ((Tag38(/*uint32_t:132783:132783:108966:e*/p_11) & (((safe_lshift_func_uint8_t_u_s(((l_2608 != l_2608) && (l_2609 == l_2609)), 1)) < (Tag39(/*uint16_t:0:0:108966:e*/*g_537))) > (safe_div_func_int16_t_s_s(((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((((void*)0 == l_2616) ^ Tag40(/*uint16_t:132783:132783:108966:e*/l_2617)) , (-1L)) ^ 0xC4L), 0UL)), 0xCC530642L)) & Tag41(/*uint32_t:132783:132783:108966:e*/p_11)), 5UL)))) == Tag42(/*uint32_t:132783:132783:108966:e*/p_11))), Tag43(/*uint16_t:132783:132783:108966:e*/p_12))) , 0x20E17AFFB450AE07LL)) <= Tag44(/*uint16_t:132783:132783:108966:e*/p_12)) , 0x57L) , 0x4603C1C094A489D5LL) == (Tag45(/*uint64_t:0:0:108966:e*/*g_88))) == Tag46(/*uint16_t:132783:132783:108966:e*/p_12)) > 0L);
/*aft_stmt:108966*/
/*aft_stmt:108966*/
/*aft_stmt:108966*/
/*aft_stmt:108966*/
/*aft_stmt:108966*/
/*aft_stmt:108966*/
/*aft_stmt:108966*/
/*aft_stmt:108966*/
/*aft_stmt:108966*/
        }
        else
        { /* block id: 1038 */
            int32_t l_2632 = 0L;
            int8_t l_2633 = (-6L);
            int64_t *l_2711 = &g_527;
            uint32_t ** const *l_2731 = &g_1882;
            int32_t l_2745[6] = {0x4700DD48L,0x4700DD48L,0x4700DD48L,0x4700DD48L,0x4700DD48L,0x4700DD48L};
            int32_t l_2746 = 1L;
            int32_t l_2747 = (-1L);
            const int32_t l_2761 = (-1L);
            uint8_t *l_2783 = &g_336;
            uint32_t ***l_2891[6] = {&g_247,&g_247,&g_247,&g_247,&g_247,&g_247};
            int i;
            l_14[2][7] = &l_15;
            /*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
/*bef_stmt:110402*/
if ((((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((-9L), Tag47(/*uint32_t:132783:132783:110402:e*/p_11))), ((-1L) <= ((/*TAG48:STA*/((uint8_t)(realsmith_proxy_RVNLT((char)(*g_75)+(35))+(int)(*g_75)-(251))+*g_75)/*TAG48:END:*g_75*/) , ((Tag49(/*int32_t:131132:131792:110402:e*/l_2632) == /*TAG50:STA*/((uint16_t)(realsmith_UrDvV((int)(*g_537)+(11))+(int)(p_12)+(int)(l_13)+(int)(*g_88)+(int)(*g_537)+(int)(l_2617)-(1270899645))+p_12)/*TAG50:END:p_12*/) == ((*g_2468) == (/*TAG51:STA*/((uint32_t)(realsmith_BzVDe((int)(*g_537)+(96))+(int)(p_11)+(int)(*g_88)+(int)(p_12)+(int)(*g_537)+(int)(l_13)-(1270857879))+p_11)/*TAG51:END:p_11*/ , ((/*TAG52:STA*/((uint16_t)(realsmith_c4V7v((int)(**g_536)+(7))+(int)(**g_536)-(4))+**g_536)/*TAG52:END:**g_536*/) , (*g_2468))))))))), Tag53(/*uint32_t:132783:132783:110402:e*/p_11))) , (Tag54(/*int8_t:0:0:110402:e*/***g_1775))) && Tag55(/*uint16_t:132783:132783:110402:e*/l_2617)), Tag56(/*uint16_t:132783:132783:110402:e*/l_2617))) || (Tag57(/*int16_t:0:0:110402:e*/*g_634))), Tag58(/*uint32_t:132783:132783:110402:e*/p_11))) == Tag59(/*int8_t:131132:131792:110402:e*/l_2633)) >= 6UL))
            { /* block id: 1040 */
lbl_2861:
                (*g_969) = l_14[2][7];
            }
            else
            { /* block id: 1042 */
                uint8_t l_2634[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_2634[i] = 0xCAL;
                /*bef_stmt:110190*/
(*g_2499) = /*TAG60:STA*/((uint8_t)(realsmith_O45GZ((int)(l_2634[1])+(-109))+(unsigned char)(l_2634[1])-(202))+l_2634[1])/*TAG60:END:l_2634[1]*/;
/*aft_stmt:110190*/
                for (g_51 = 0; (g_51 < 53); g_51 = safe_add_func_uint32_t_u_u(g_51, 7))
                { /* block id: 1046 */
                    /*bef_stmt:110364*/
/*bef_stmt:110364*/
if (((/*TAG61:STA*/((uint8_t)(realsmith_xV9wU((int)(***g_2443)+(-198))+(int)(***g_2443)-(252))+***g_2443)/*TAG61:END:***g_2443*/) , ((*g_2499) ^= Tag62(/*uint32_t:132783:132783:110364:e*/p_11))))
                    { /* block id: 1048 */
                        /*bef_stmt:110342*/
if (Tag63(/*uint32_t:132783:132783:110342:e*/p_11))
                            break;
/*aft_stmt:110342*/
                    }
                    else
                    { /* block id: 1050 */
                        /*bef_stmt:110359*/
return Tag64(/*uint16_t:132783:132783:110359:e*/p_12);
/*aft_stmt:110359*/
                    }
/*aft_stmt:110364*/
/*aft_stmt:110364*/
                }
                l_15 |= 0xB88300E0L;
            }
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
/*aft_stmt:110402*/
            /*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
/*bef_stmt:127767*/
if ((((++(***g_246)) || 0xB827DA15L) && (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((0x39F2A2B4L && (255UL >= ((Tag65(/*uint8_t:132783:132783:127767:e*/l_13) != (Tag66(/*int64_t:0:0:127767:e*/g_713) , ((g_2655 != g_2655) ^ ((**g_536) = ((safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s(0x01ECBBADL, ((~Tag67(/*uint16_t:132783:132783:127767:e*/p_12)) | (Tag68(/*uint8_t:0:0:127767:e*/**g_2444))))) , Tag69(/*uint32_t:132783:132783:127767:e*/p_11)), 0xE9L)) <= (Tag70(/*int8_t:0:0:127767:e*/*g_1777))))))) <= Tag71(/*int32_t:132783:132783:127767:e*/l_15)))), 65529UL)), (Tag72(/*uint8_t:0:0:127767:e*/****g_2442)))) > 0xF603D102L), 255UL)) >= Tag73(/*int32_t:131132:131792:127767:e*/l_2632)), /*TAG74:STA*/((uint16_t)(realsmith_proxy_fvoeD((unsigned int)(p_12)+(-65512), (unsigned int)(p_12)+(-65438))+(char)(p_12)-(-8))+p_12)/*TAG74:END:p_12*/)), Tag75(/*uint32_t:132783:132783:127767:e*/p_11))) , Tag76(/*uint16_t:132783:132783:127767:e*/l_2617)) , (Tag77(/*uint8_t:0:0:127767:e*/***g_2443))), 7)) > 0xD56101C7L), Tag78(/*uint8_t:132783:132783:127767:e*/l_13)))))
            { /* block id: 1058 */
                const int64_t l_2682 = 0x216B368C89E3A007LL;
                int32_t l_2683[8] = {0x24A533F7L,0x24A533F7L,0x24A533F7L,0x24A533F7L,0x24A533F7L,0x24A533F7L,0x24A533F7L,0x24A533F7L};
                int8_t *l_2684[5][5][4] = {{{(void*)0,(void*)0,&g_166,&l_2633},{&l_2633,(void*)0,&l_2633,&g_166},{&l_2633,&g_166,&g_166,&l_2633},{(void*)0,&g_166,&l_2633,&g_166},{&g_166,(void*)0,&l_2633,&l_2633}},{{(void*)0,(void*)0,&g_166,&l_2633},{&l_2633,(void*)0,&l_2633,&g_166},{&l_2633,&g_166,&g_166,&l_2633},{(void*)0,&g_166,&l_2633,&g_166},{&g_166,(void*)0,&l_2633,&l_2633}},{{(void*)0,(void*)0,&g_166,&l_2633},{&l_2633,(void*)0,&l_2633,&g_166},{&l_2633,&g_166,&g_166,&l_2633},{(void*)0,&g_166,&l_2633,&g_166},{&g_166,(void*)0,&l_2633,&l_2633}},{{(void*)0,(void*)0,&g_166,&l_2633},{&l_2633,(void*)0,&l_2633,&g_166},{&l_2633,&g_166,&g_166,&l_2633},{(void*)0,&g_166,&l_2633,&g_166},{&g_166,(void*)0,&l_2633,&l_2633}},{{(void*)0,(void*)0,&g_166,&l_2633},{&l_2633,(void*)0,&l_2633,&g_166},{&l_2633,&g_166,&g_166,&l_2633},{(void*)0,&g_166,&l_2633,&g_166},{&g_166,(void*)0,&l_2633,&l_2633}}};
                uint32_t *l_2735[10][7] = {{(void*)0,&g_1488[0][7],&g_1100,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2215,&g_1100,&g_2215,&g_51,&g_1100,&g_2492,&g_2492},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_2492,&g_51,(void*)0,&g_51,&g_2492,(void*)0},{&g_1100,(void*)0,&g_1488[0][7],(void*)0,(void*)0,(void*)0,&g_1488[0][7]},{(void*)0,&g_2215,(void*)0,&g_2492,&g_51,(void*)0,&g_51},{&g_1488[0][7],(void*)0,(void*)0,&g_1488[0][7],(void*)0,&g_2492,&g_1488[0][7]},{(void*)0,&g_51,&g_51,&g_51,&g_51,(void*)0,&g_1100},{(void*)0,&g_1488[0][7],(void*)0,&g_1100,&g_1100,(void*)0,&g_1488[0][7]},{&g_51,&g_1100,(void*)0,&g_51,&g_51,&g_51,&g_51}};
                uint32_t *l_2736 = &g_1100;
                uint32_t *l_2737 = &g_1100;
                uint32_t *l_2738 = &g_2215;
                uint32_t *l_2739 = &g_2492;
                uint32_t *l_2740 = &g_51;
                uint32_t *l_2741 = (void*)0;
                uint32_t *l_2742 = &g_1488[1][6];
                uint32_t ** const l_2734[5][5][1] = {{{&l_2735[0][5]},{&l_2739},{&l_2740},{&l_2739},{&l_2735[0][5]}},{{&l_2736},{&l_2741},{&l_2737},{&l_2737},{&l_2741}},{{&l_2736},{&l_2735[0][5]},{&l_2739},{&l_2740},{&l_2739}},{{&l_2735[0][5]},{&l_2736},{&l_2741},{&l_2737},{&l_2737}},{{&l_2741},{&l_2736},{&l_2735[0][5]},{&l_2739},{&l_2740}}};
                uint32_t ** const *l_2733 = &l_2734[3][1][0];
                uint32_t ** const **l_2732 = &l_2733;
                uint64_t **l_2784[8][8] = {{&g_88,&l_2609,&l_2609,(void*)0,&g_88,(void*)0,(void*)0,&g_88},{&l_2609,&g_88,&g_88,&l_2609,&g_88,&l_2609,(void*)0,&l_2609},{&l_2609,&l_2609,&l_2609,(void*)0,&l_2609,&l_2609,&l_2609,&g_88},{&l_2609,&l_2609,&l_2609,&g_88,&l_2609,&l_2609,&g_88,&l_2609},{&g_88,&g_88,&l_2609,&g_88,&l_2609,(void*)0,&l_2609,(void*)0},{&l_2609,&l_2609,&g_88,&l_2609,&l_2609,(void*)0,&g_88,(void*)0},{&l_2609,&l_2609,&l_2609,&g_88,&g_88,&l_2609,&l_2609,&l_2609},{&l_2609,(void*)0,&l_2609,&g_88,&g_88,&l_2609,&g_88,&g_88}};
                uint8_t **l_2795[2][6][6] = {{{&g_75,&g_75,&g_75,&g_75,&l_2783,&l_2783},{&l_2783,&g_75,&l_2783,&l_2783,&l_2783,&g_75},{&g_75,&g_75,&l_2783,&g_75,&l_2783,&l_2783},{&g_75,&g_75,&g_75,&g_75,&l_2783,&l_2783},{&l_2783,&g_75,&l_2783,&l_2783,&l_2783,&g_75},{&g_75,&g_75,&l_2783,&g_75,&l_2783,&l_2783}},{{&g_75,&g_75,&g_75,&g_75,&l_2783,&l_2783},{&l_2783,&g_75,&l_2783,&l_2783,&l_2783,&g_75},{&g_75,&g_75,&l_2783,&g_75,&l_2783,&l_2783},{&g_75,&g_75,&g_75,&g_75,&l_2783,&l_2783},{&l_2783,&g_75,&l_2783,&l_2783,&l_2783,&g_75},{&g_75,&g_75,&g_75,&l_2783,(void*)0,(void*)0}}};
                uint8_t **l_2796 = &l_2783;
                uint32_t l_2818 = 0UL;
                int i, j, k;
                /*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
/*bef_stmt:118825*/
(*g_2499) |= ((((l_15 &= (l_2683[7] |= (((safe_add_func_uint32_t_u_u((Tag79(/*uint32_t:132783:132783:118825:e*/p_11) || (safe_lshift_func_int16_t_s_s(Tag80(/*uint32_t:132783:132783:118825:e*/p_11), 3))), (safe_rshift_func_int16_t_s_s(Tag81(/*uint16_t:132783:132783:118825:e*/p_12), 13)))) != ((safe_div_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((((Tag82(/*uint32_t:0:0:118825:e*/g_51) >= (safe_rshift_func_int8_t_s_u(((**l_2681) = ((safe_div_func_int16_t_s_s(Tag83(/*uint32_t:132783:132783:118825:e*/p_11), (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((void*)0 != l_2681), (Tag84(/*uint16_t:132783:132783:118825:e*/p_12) && ((void*)0 != &g_968[0][4])))), Tag85(/*uint32_t:132783:132783:118825:e*/p_11))) >= Tag86(/*const int64_t:126768:131132:118825:e*/l_2682)), Tag87(/*uint16_t:132783:132783:118825:e*/p_12))))) , 0x6BL)), 6))) == Tag88(/*uint8_t:132783:132783:118825:e*/l_13)) >= Tag89(/*int32_t:131132:131792:118825:e*/l_2632)), 0x6EDECE64AD6A94C9LL)), 0x13205A4E5D210BA1LL)) , 0xA4DF166B5957E190LL)) & 0xE5D46BA36E7A10DBLL))) >= (Tag90(/*uint8_t:0:0:118825:e*/*g_75))) , Tag91(/*uint16_t:132783:132783:118825:e*/p_12)) && 1L);
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
/*aft_stmt:118825*/
                for (l_2633 = 1; (l_2633 >= 0); l_2633 -= 1)
                { /* block id: 1065 */
                    int16_t l_2696 = 0xF66DL;
                    /*bef_stmt:118936*/
if ((Tag92(/*int32_t:0:0:118936:e*/*g_2499)))
                        break;
/*aft_stmt:118936*/
                    for (g_76 = 0; (g_76 <= 1); g_76 += 1)
                    { /* block id: 1069 */
                        int32_t l_2708 = 3L;
                        int i;
                        /*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
/*bef_stmt:119741*/
(*g_2499) &= (Tag93(/*uint16_t:132783:132783:119741:e*/p_12) | (safe_mul_func_int8_t_s_s(((l_2712 |= (!(safe_add_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u(65528UL, (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((Tag94(/*int16_t:120013:126768:119741:e*/l_2696) & (safe_div_func_int16_t_s_s((Tag95(/*int16_t:0:0:119741:e*/*g_634)), (Tag96(/*uint16_t:0:0:119741:e*/**g_536))))) ^ (safe_div_func_uint64_t_u_u(((+(safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(Tag97(/*int32_t:120000:120013:119741:e*/l_2708), (safe_sub_func_uint64_t_u_u((&l_2696 == ((Tag98(/*int32_t:126768:131132:119741:e*/l_2683[5]) , ((Tag99(/*uint16_t:132783:132783:119741:e*/p_12) == (-1L)) | Tag100(/*uint32_t:132783:132783:119741:e*/p_11))) , (void*)0)), (-1L))))), Tag101(/*uint32_t:132783:132783:119741:e*/p_11))), Tag102(/*int32_t:132783:132783:119741:e*/l_15)))) , Tag103(/*int32_t:120000:120013:119741:e*/l_2708)), (Tag104(/*uint64_t:0:0:119741:e*/*g_88))))), (Tag105(/*uint32_t:0:0:119741:e*/**g_247)))), 9)))) > (Tag106(/*uint32_t:0:0:119741:e*/*****g_577))) , &l_2682) == l_2711), 0L)))) , Tag107(/*int32_t:132783:132783:119741:e*/l_15)), Tag108(/*uint16_t:132783:132783:119741:e*/l_2617))));
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
/*aft_stmt:119741*/
                        /*bef_stmt:119996*/
/*bef_stmt:119996*/
/*bef_stmt:119996*/
/*bef_stmt:119996*/
/*bef_stmt:119996*/
/*bef_stmt:119996*/
/*bef_stmt:119996*/
(*g_2499) = (((l_2633 ^ (Tag109(/*uint16_t:132783:132783:119996:e*/p_12) && Tag110(/*int32_t:120000:120013:119996:e*/l_2708))) && ((((l_2683[4] = (Tag111(/*int32_t:132783:132783:119996:e*/l_2712) , ((Tag112(/*int32_t:0:0:119996:e*/*g_2499)) & Tag113(/*uint16_t:132783:132783:119996:e*/p_12)))) == 65527UL) > Tag114(/*uint64_t:0:0:119996:e*/g_167)) ^ (safe_div_func_uint64_t_u_u((l_2715 != l_2711), Tag115(/*uint16_t:132783:132783:119996:e*/p_12))))) , 9L);
/*aft_stmt:119996*/
/*aft_stmt:119996*/
/*aft_stmt:119996*/
/*aft_stmt:119996*/
/*aft_stmt:119996*/
/*aft_stmt:119996*/
/*aft_stmt:119996*/
                    }
                }
                /*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
/*bef_stmt:120788*/
l_15 |= ((safe_lshift_func_uint16_t_u_s((l_2747 = ((p_12 = ((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(65535UL, (safe_div_func_int8_t_s_s((Tag116(/*int8_t:0:0:120788:e*/*g_1777)), (safe_unary_minus_func_int32_t_s((Tag117(/*uint8_t:132783:132783:120788:e*/l_13) , ((g_713 = Tag118(/*int32_t:0:0:120788:e*/g_1586[5])) ^ (((*l_2711) = (safe_rshift_func_int8_t_s_s(((l_2746 = (((((safe_add_func_uint64_t_u_u((Tag119(/*uint32_t:132783:132783:120788:e*/p_11) > (safe_mod_func_int32_t_s_s((l_2731 != ((*l_2732) = &g_1882)), (safe_mul_func_int8_t_s_s(((Tag120(/*uint16_t:132783:132783:120788:e*/p_12) , (l_2745[1] |= ((Tag121(/*uint32_t:132783:132783:120788:e*/p_11) , (-8L)) , 0xB1516107DD1096E9LL))) == Tag122(/*uint16_t:132783:132783:120788:e*/p_12)), Tag123(/*uint32_t:132783:132783:120788:e*/p_11)))))), 4L)) ^ Tag124(/*uint16_t:132783:132783:120788:e*/p_12)) , Tag125(/*uint32_t:132783:132783:120788:e*/p_11)) , Tag126(/*int32_t:131132:131792:120788:e*/l_2745[1])) != Tag127(/*uint16_t:132783:132783:120788:e*/p_12))) < (Tag128(/*int8_t:0:0:120788:e*/***g_1775))), Tag129(/*uint32_t:132783:132783:120788:e*/p_11)))) != Tag130(/*uint32_t:132783:132783:120788:e*/p_11)))))))))) >= Tag131(/*uint16_t:132783:132783:120788:e*/p_12)), Tag132(/*const int64_t:126768:131132:120788:e*/l_2682))) && Tag133(/*uint16_t:132783:132783:120788:e*/p_12))) < Tag134(/*uint32_t:132783:132783:120788:e*/p_11))), 8)) , 0x86590DE7L);
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
/*aft_stmt:120788*/
                /*bef_stmt:126762*/
/*bef_stmt:126762*/
/*bef_stmt:126762*/
/*bef_stmt:126762*/
/*bef_stmt:126762*/
/*bef_stmt:126762*/
/*bef_stmt:126762*/
/*bef_stmt:126762*/
if (((l_2712 = 2L) , (((Tag135(/*uint16_t:132783:132783:126762:e*/p_12) , ((Tag136(/*int64_t:0:0:126762:e*/g_713) | 18446744073709551611UL) && (Tag137(/*const int64_t:126768:131132:126762:e*/l_2682) > 0xE4L))) < ((251UL > ((safe_add_func_int8_t_s_s(Tag138(/*int32_t:131132:131792:126762:e*/l_2745[1]), ((safe_lshift_func_int16_t_s_s(((--(*l_2609)) , ((*g_634) = (safe_sub_func_uint64_t_u_u((~0xFBL), (Tag139(/*uint64_t:0:0:126762:e*/*g_88)))))), 5)) && Tag140(/*const int32_t:131132:131792:126762:e*/l_2761)))) < 0x1D78DC2BEDC92A4BLL)) == (Tag141(/*uint64_t:0:0:126762:e*/*g_88)))) >= Tag142(/*uint16_t:132783:132783:126762:e*/p_12))))
                { /* block id: 1087 */
                    uint64_t l_2762 = 18446744073709551615UL;
                    int64_t l_2801 = 0x43D3B9B7C93A240FLL;
                    for (g_1335 = 0; (g_1335 <= 1); g_1335 += 1)
                    { /* block id: 1090 */
                        l_2762++;
                    }
                    /*bef_stmt:121405*/
/*bef_stmt:121405*/
/*bef_stmt:121405*/
(*g_2499) ^= (safe_lshift_func_int16_t_s_u(0xAE42L, ((safe_div_func_int8_t_s_s((Tag143(/*int32_t:131132:131792:121405:e*/l_2747) <= (Tag144(/*int16_t:0:0:121405:e*/*g_634))), Tag145(/*uint16_t:132783:132783:121405:e*/p_12))) && 0x651ACF54B015BF4ALL)));
/*aft_stmt:121405*/
/*aft_stmt:121405*/
/*aft_stmt:121405*/
                    for (g_329 = 0; (g_329 != 47); g_329++)
                    { /* block id: 1096 */
                        int32_t l_2773 = 1L;
                        uint8_t l_2782[5][7][7] = {{{0x93L,253UL,0x50L,0UL,255UL,6UL,0x8DL},{255UL,0x91L,255UL,0x48L,0x37L,0xEAL,0x92L},{0x64L,0x93L,7UL,0x1AL,250UL,8UL,0x13L},{252UL,253UL,0xBFL,255UL,0x21L,0x48L,0x91L},{1UL,0x13L,1UL,255UL,0x8DL,0x92L,0x50L},{0x84L,255UL,1UL,0xB4L,0xCFL,0x9BL,8UL},{250UL,0x01L,248UL,8UL,0x1DL,253UL,8UL}},{{255UL,2UL,0x15L,255UL,8UL,255UL,0x50L},{0x1AL,1UL,247UL,0x91L,0x64L,1UL,0x91L},{249UL,255UL,0x50L,0x1EL,0xD6L,0xC0L,0x13L},{1UL,0x37L,0xD6L,1UL,5UL,0x00L,0x92L},{0x91L,0x8DL,0x9BL,0xBFL,0xBFL,0x9BL,0x8DL},{5UL,0xEAL,0xC0L,255UL,0xD6L,255UL,1UL},{0xC0L,0x93L,255UL,248UL,0UL,255UL,0x27L}},{{0x84L,1UL,0x8CL,255UL,0x1EL,8UL,0x1AL},{0xFAL,0x27L,1UL,0xBFL,0x1DL,0x92L,1UL},{6UL,0x32L,0x01L,1UL,0x32L,255UL,0xE4L},{250UL,1UL,0x8CL,0x1EL,1UL,249UL,9UL},{0UL,1UL,0x15L,0x91L,0x21L,0xC0L,0x84L},{0xBFL,0xB4L,255UL,255UL,0x64L,1UL,0xEAL},{0xB4L,0xCFL,0x9BL,8UL,0xFAL,247UL,0x13L}},{{0xB4L,0x27L,1UL,0xB4L,255UL,0x1DL,1UL},{0xBFL,0x8DL,6UL,255UL,0UL,0x50L,253UL},{0UL,0x91L,247UL,255UL,0x13L,0xA2L,1UL},{250UL,0xEAL,255UL,0x1AL,255UL,255UL,0xFAL},{6UL,8UL,0xEAL,0x48L,8UL,0x48L,0xEAL},{0xFAL,0xFAL,1UL,0UL,1UL,0x1AL,255UL},{0x15L,1UL,0xF3L,0x27L,255UL,0xABL,253UL}},{{0xDEL,0xD6L,1UL,2UL,255UL,0xD9L,249UL},{0x48L,0xE4L,0x32L,0xBFL,0x00L,1UL,0x15L},{0x74L,0xF3L,0xDEL,248UL,0x2DL,0x06L,0x74L},{8UL,0x01L,0xABL,2UL,0x92L,0x9BL,0xA2L},{0x27L,255UL,1UL,0xD6L,255UL,250UL,0xBFL},{0x74L,247UL,0x1AL,0UL,255UL,7UL,0xC0L},{0x13L,0x74L,0x9BL,255UL,0xEAL,2UL,0x8CL}}};
                        uint8_t ***l_2797 = &l_2796;
                        uint8_t **l_2799 = &g_75;
                        uint8_t ***l_2798 = &l_2799;
                        int32_t l_2800 = (-8L);
                        int32_t l_2803 = 0xADF75AD1L;
                        int i, j, k;
                        /*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
/*bef_stmt:125426*/
(*g_969) = func_65((((safe_sub_func_int32_t_s_s((l_15 &= (Tag146(/*int32_t:132783:132783:125426:e*/l_2712) , Tag147(/*uint32_t:132783:132783:125426:e*/p_11))), Tag148(/*int32_t:125983:126595:125426:e*/l_2773))) , Tag149(/*uint64_t:126595:126768:125426:e*/l_2762)) <= (safe_add_func_int32_t_s_s(((0x08L | (-9L)) > (Tag150(/*uint32_t:132783:132783:125426:e*/p_11) > ((((safe_mul_func_int8_t_s_s(Tag151(/*int32_t:131132:131792:125426:e*/l_2745[3]), (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((void*)0 == (*g_577)), Tag152(/*uint16_t:132783:132783:125426:e*/p_12))), Tag153(/*int8_t:0:0:125426:e*/g_327[2][8]))))) ^ 0x9CL) ^ Tag154(/*int32_t:131132:131792:125426:e*/l_2745[1])) != Tag155(/*uint32_t:132783:132783:125426:e*/p_11)))), Tag156(/*uint8_t:125983:126595:125426:e*/l_2782[0][0][2])))), Tag157(/*uint16_t:132783:132783:125426:e*/p_12), l_2783);
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
/*aft_stmt:125426*/
                        /*bef_stmt:125946*/
/*bef_stmt:125946*/
/*bef_stmt:125946*/
/*bef_stmt:125946*/
/*bef_stmt:125946*/
l_2803 ^= ((l_2784[7][4] != l_2785) || (((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(Tag158(/*uint16_t:132783:132783:125946:e*/p_12), (((l_2795[1][2][4] = l_2794[2]) != ((*l_2798) = ((*l_2797) = l_2796))) || 1L))) , ((l_2773 |= 1UL) >= (l_2800 &= ((0x13L == Tag159(/*uint16_t:132783:132783:125946:e*/l_2617)) ^ 0L)))), 6L)) ^ Tag160(/*const int32_t:0:0:125946:e*/g_184)) , (Tag161(/*uint8_t:0:0:125946:e*/****g_2442))), Tag162(/*int64_t:126595:126768:125946:e*/l_2801))), 4)) , (void*)0) == l_2802));
/*aft_stmt:125946*/
/*aft_stmt:125946*/
/*aft_stmt:125946*/
/*aft_stmt:125946*/
/*aft_stmt:125946*/
                        /*bef_stmt:125981*/
return Tag163(/*int32_t:132783:132783:125981:e*/l_15);
/*aft_stmt:125981*/
                    }
                    /*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
/*bef_stmt:126591*/
l_14[0][2] = func_30(func_33(((safe_div_func_int64_t_s_s(Tag164(/*uint32_t:132783:132783:126591:e*/p_11), (+0xF811L))) & ((safe_mod_func_int8_t_s_s((((((*g_1777) = (Tag165(/*int8_t:0:0:126591:e*/*g_1777))) , (*l_2785)) == l_2711) || (safe_mul_func_int8_t_s_s(((Tag166(/*uint8_t:132783:132783:126591:e*/l_13) ^ Tag167(/*uint16_t:132783:132783:126591:e*/p_12)) <= (safe_add_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((((Tag168(/*uint8_t:0:0:126591:e*/**g_2444)) && (safe_rshift_func_int16_t_s_u(1L, Tag169(/*uint32_t:132783:132783:126591:e*/p_11)))) , 65535UL))) || Tag170(/*uint8_t:0:0:126591:e*/g_364)), Tag171(/*uint8_t:132783:132783:126591:e*/l_13))) ^ Tag172(/*uint16_t:132783:132783:126591:e*/p_12)), Tag173(/*uint32_t:126768:131132:126591:e*/l_2818)))), 8L))), (-4L))) && Tag174(/*int64_t:126595:126768:126591:e*/l_2801))), &l_15, (Tag175(/*uint64_t:0:0:126591:e*/*g_88))), Tag176(/*int32_t:131132:131792:126591:e*/l_2747));
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
/*aft_stmt:126591*/
                }
                else
                { /* block id: 1109 */
                    uint32_t l_2821 = 0xEBC71706L;
                    for (g_713 = 0; (g_713 == (-13)); --g_713)
                    { /* block id: 1112 */
                        (*g_2499) |= 1L;
                    }
                    /*bef_stmt:126745*/
(*g_2499) = Tag177(/*int32_t:131132:131792:126745:e*/l_2745[1]);
/*aft_stmt:126745*/
                    --l_2821;
                }
/*aft_stmt:126762*/
/*aft_stmt:126762*/
/*aft_stmt:126762*/
/*aft_stmt:126762*/
/*aft_stmt:126762*/
/*aft_stmt:126762*/
/*aft_stmt:126762*/
/*aft_stmt:126762*/
            }
            else
            { /* block id: 1118 */
                uint32_t * const *l_2838 = &g_1883[0];
                uint32_t * const **l_2837 = &l_2838;
                uint32_t * const ***l_2836 = &l_2837;
                uint32_t * const **** const l_2835 = &l_2836;
                uint16_t *l_2845 = &g_2488;
                int8_t l_2855 = 6L;
                int8_t *l_2856 = &g_166;
                /*bef_stmt:127284*/
/*bef_stmt:127284*/
/*bef_stmt:127284*/
/*bef_stmt:127284*/
(*g_2499) = (safe_unary_minus_func_int16_t_s(((((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(/*TAG178:STA*/((int32_t)(realsmith_vBg2S((int)(l_2712)+(73), (int)(l_2712)+(82))+(int)(l_2712)-(1))+l_2712)/*TAG178:END:l_2712*/, /*TAG179:STA*/((int32_t)(realsmith_P6B8f((int)(l_2747)+(1), (int)(l_2747)+(19), (int)(l_2747)+(41), (int)(l_2747)+(33), (int)(l_2747)+(74))+(int)(l_2747)-(0))+l_2747)/*TAG179:END:l_2747*/)) , ((*g_537) = 0xE2AAL)), 4)) & /*TAG180:STA*/((uint16_t)(realsmith_FidWZ((int)(p_12)+(-65444))+(int)(p_12)-(65534))+p_12)/*TAG180:END:p_12*/) | /*TAG181:STA*/((uint32_t)(realsmith_Eaotj((int)(p_11)+(80))+(int)(p_11)-(-10))+p_11)/*TAG181:END:p_11*/) > ((l_2834 = l_2829) == l_2835))));
/*aft_stmt:127284*/
/*aft_stmt:127284*/
/*aft_stmt:127284*/
/*aft_stmt:127284*/
                /*bef_stmt:127750*/
/*bef_stmt:127750*/
/*bef_stmt:127750*/
/*bef_stmt:127750*/
/*bef_stmt:127750*/
/*bef_stmt:127750*/
/*bef_stmt:127750*/
(*g_2499) &= (safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((Tag182(/*int8_t:0:0:127750:e*/*g_1777)), (((*****g_577)--) >= (((*l_2845) = ((*g_537) = Tag183(/*int32_t:131132:131792:127750:e*/l_2747))) || 0x1966L)))), ((l_2846 == (void*)0) != ((*l_2856) |= ((((void*)0 == &g_1882) > (safe_mod_func_uint64_t_u_u((((((safe_mul_func_uint8_t_u_u((~/*TAG184:STA*/((int32_t)(realsmith_proxy_Iabcf((int)(g_1836)+(76007378), (int)(g_1836)+(76007550))+(int)(g_1836)-(-76007464))+g_1836)/*TAG184:END:g_1836*/), Tag185(/*uint8_t:132783:132783:127750:e*/l_13))) , l_2852) == &l_2853) > Tag186(/*int8_t:127756:131132:127750:e*/l_2855)) <= /*TAG187:STA*/((int32_t)(realsmith_OEe7l((int)(l_2761)+(21))+(int)(l_2761)-(3))+l_2761)/*TAG187:END:l_2761*/), Tag188(/*uint16_t:132783:132783:127750:e*/p_12)))) , 0x62L)))));
/*aft_stmt:127750*/
/*aft_stmt:127750*/
/*aft_stmt:127750*/
/*aft_stmt:127750*/
/*aft_stmt:127750*/
/*aft_stmt:127750*/
/*aft_stmt:127750*/
            }
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
/*aft_stmt:127767*/
            for (g_76 = 0; (g_76 == 24); g_76 = safe_add_func_uint64_t_u_u(g_76, 1))
            { /* block id: 1130 */
                const uint32_t l_2878 = 18446744073709551614UL;
                uint32_t ***l_2893 = &g_247;
                int16_t *** const *l_2895 = (void*)0;
                int32_t l_2903[8][8] = {{0L,0L,6L,0x97BD805EL,0xA43EE4E5L,6L,0xA43EE4E5L,0x97BD805EL},{0x19C8E913L,0x97BD805EL,0x19C8E913L,0xB93EB39BL,0x97BD805EL,5L,5L,0x97BD805EL},{0x97BD805EL,5L,5L,0x97BD805EL,0xB93EB39BL,0x19C8E913L,0x97BD805EL,0x19C8E913L},{0x97BD805EL,0xA43EE4E5L,6L,0xA43EE4E5L,0x97BD805EL,6L,0L,0L},{0x19C8E913L,0xA43EE4E5L,0xB93EB39BL,0xB93EB39BL,0xA43EE4E5L,0x19C8E913L,5L,0xA43EE4E5L},{0L,5L,0xB93EB39BL,0L,0xB93EB39BL,5L,0L,0x19C8E913L},{0xA43EE4E5L,0x97BD805EL,6L,0L,0L,6L,0x97BD805EL,0xA43EE4E5L},{0x19C8E913L,0L,5L,0xB93EB39BL,0L,0xB93EB39BL,5L,0L}};
                int i, j;
                for (g_608 = 0; (g_608 != 60); g_608 = safe_add_func_int64_t_s_s(g_608, 2))
                { /* block id: 1133 */
                    /*bef_stmt:128910*/
if (Tag189(/*int64_t:0:0:128910:e*/g_713))
                        goto lbl_2861;
/*aft_stmt:128910*/
                }
                /*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
/*bef_stmt:130894*/
if (((*g_2499) = ((*g_577) != ((safe_lshift_func_int8_t_s_s(((*g_1777) = (Tag190(/*int32_t:131132:131792:130894:e*/l_2632) != (Tag191(/*int32_t:131792:132783:130894:e*/l_2864[0][4][0]) || (((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(0xDBBC01CAA2F9C379LL, ((void*)0 != &p_11))), (safe_add_func_int64_t_s_s((Tag192(/*uint16_t:132783:132783:130894:e*/p_12) ^ ((safe_sub_func_uint64_t_u_u((Tag193(/*uint64_t:0:0:130894:e*/*g_88)), ((*l_2715) = (((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint8_t_u_u(0UL, Tag194(/*uint16_t:132783:132783:130894:e*/p_12))))) && 5L) | Tag195(/*uint32_t:132783:132783:130894:e*/p_11))))) , Tag196(/*uint16_t:132783:132783:130894:e*/p_12))), Tag197(/*uint32_t:0:0:130894:e*/g_2492))))), Tag198(/*uint16_t:132783:132783:130894:e*/p_12))) | 9L) , Tag199(/*const uint32_t:131114:131132:130894:e*/l_2878))))), Tag200(/*int32_t:132783:132783:130894:e*/l_2879))) , (void*)0))))
                { /* block id: 1139 */
                    /*bef_stmt:129504*/
if (Tag201(/*const uint32_t:131114:131132:129504:e*/l_2878))
                        break;
/*aft_stmt:129504*/
                }
                else
                { /* block id: 1141 */
                    uint8_t *l_2890 = &g_336;
                    int8_t l_2894[8][3] = {{1L,0xCAL,0xCAL},{0x92L,(-6L),(-6L)},{1L,0xCAL,0xCAL},{0x92L,(-6L),(-6L)},{1L,0xCAL,0xCAL},{0x92L,(-6L),(-6L)},{1L,0xCAL,0xCAL},{0x92L,(-6L),(-6L)}};
                    int i, j;
                    /*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
/*bef_stmt:130871*/
l_2745[1] = (((safe_sub_func_int16_t_s_s((l_2747 = (((((0x10L < ((*g_1777) |= (Tag202(/*uint32_t:132783:132783:130871:e*/p_11) == (((-1L) >= (safe_add_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((((*g_2378) == (void*)0) | ((l_2783 == l_2890) , ((((l_2891[3] == ((*l_2802) = (l_2893 = (((void*)0 != l_2892) , (void*)0)))) & Tag203(/*int32_t:131132:131792:130871:e*/l_2746)) <= Tag204(/*uint16_t:132783:132783:130871:e*/p_12)) < Tag205(/*uint16_t:132783:132783:130871:e*/p_12)))) , Tag206(/*uint16_t:132783:132783:130871:e*/p_12)), Tag207(/*int8_t:130887:131114:130871:e*/l_2894[1][2]))), 1)), Tag208(/*const uint32_t:131114:131132:130871:e*/l_2878))) >= Tag209(/*uint32_t:132783:132783:130871:e*/p_11)) || Tag210(/*uint32_t:132783:132783:130871:e*/p_11)) == 0x42L), Tag211(/*uint16_t:132783:132783:130871:e*/p_12)))) > Tag212(/*int8_t:130887:131114:130871:e*/l_2894[1][2]))))) && Tag213(/*uint16_t:132783:132783:130871:e*/p_12)) , (void*)0) != l_2895) <= Tag214(/*const uint32_t:131114:131132:130871:e*/l_2878))), Tag215(/*int32_t:131132:131792:130871:e*/l_2745[5]))) , Tag216(/*uint16_t:132783:132783:130871:e*/p_12)) < (Tag217(/*int32_t:0:0:130871:e*/*g_2499)));
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
/*aft_stmt:130871*/
                    /*bef_stmt:130885*/
return Tag218(/*uint32_t:132783:132783:130885:e*/p_11);
/*aft_stmt:130885*/
                }
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
/*aft_stmt:130894*/
                /*bef_stmt:131101*/
/*bef_stmt:131101*/
/*bef_stmt:131101*/
l_2745[1] |= ((+Tag219(/*uint64_t:0:0:131101:e*/g_608)) > ((Tag220(/*int8_t:0:0:131101:e*/***g_1775)) < (l_2746 |= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((Tag221(/*uint32_t:0:0:131101:e*/**g_247)), (safe_mod_func_uint32_t_u_u(4294967288UL, (-1L))))), 7)))));
/*aft_stmt:131101*/
/*aft_stmt:131101*/
/*aft_stmt:131101*/
                l_2905++;
            }
        }
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
/*aft_stmt:131149*/
        for (g_1335 = 0; (g_1335 > 10); g_1335 = safe_add_func_int32_t_s_s(g_1335, 6))
        { /* block id: 1156 */
            int64_t l_2910 = (-4L);
            int32_t l_2911 = (-3L);
            int32_t l_2923 = 0L;
            ++l_2912;
            /*bef_stmt:131752*/
/*bef_stmt:131752*/
/*bef_stmt:131752*/
/*bef_stmt:131752*/
/*bef_stmt:131752*/
/*bef_stmt:131752*/
/*bef_stmt:131752*/
(*g_2499) = ((!(((*l_2608) = &g_646) == (Tag222(/*uint32_t:132783:132783:131752:e*/p_11) , (**g_2377)))) | (((*g_634) = (l_2892 == &l_2785)) & (Tag223(/*const uint32_t:131792:132783:131752:e*/l_2916) < (safe_sub_func_int16_t_s_s(((l_2911 &= 0xA7L) != (safe_sub_func_uint8_t_u_u(Tag224(/*int64_t:131778:131792:131752:e*/l_2910), (((l_2923 = ((*g_75) = (((**l_2785) = (safe_mod_func_int8_t_s_s((Tag225(/*int8_t:0:0:131752:e*/*g_1777)), Tag226(/*uint32_t:132783:132783:131752:e*/p_11)))) || 0x0017CBC052F4E065LL))) ^ Tag227(/*int32_t:132783:132783:131752:e*/l_15)) && 0xECL)))), Tag228(/*int64_t:131778:131792:131752:e*/l_2910))))));
/*aft_stmt:131752*/
/*aft_stmt:131752*/
/*aft_stmt:131752*/
/*aft_stmt:131752*/
/*aft_stmt:131752*/
/*aft_stmt:131752*/
/*aft_stmt:131752*/
        }
    }
    else
    { /* block id: 1166 */
        int32_t l_2934 = 0xFFFA6E6CL;
        int64_t * const l_2935 = (void*)0;
        int32_t l_2936 = (-9L);
        int32_t l_2937 = 0x45AD9B93L;
        for (g_44 = 0; (g_44 <= 9); g_44 += 1)
        { /* block id: 1169 */
            int32_t l_2927 = 6L;
            uint16_t *l_2933 = &g_2488;
            uint16_t **l_2932 = &l_2933;
            int i;
            /*bef_stmt:132526*/
/*bef_stmt:132526*/
/*bef_stmt:132526*/
/*bef_stmt:132526*/
/*bef_stmt:132526*/
/*bef_stmt:132526*/
/*bef_stmt:132526*/
g_1586[g_44] = ((safe_lshift_func_int8_t_s_u(((((-7L) <= (Tag229(/*uint16_t:132783:132783:132526:e*/p_12) > (((**g_536) &= ((+18446744073709551615UL) == (-4L))) & Tag230(/*int32_t:132579:132670:132526:e*/l_2927)))) == (safe_sub_func_uint32_t_u_u((4L < (((*l_2609) = ((*g_88) = (((safe_mul_func_uint16_t_u_u((((*l_2932) = &p_12) == (void*)0), ((0xF609A58BL > Tag231(/*int32_t:132670:132783:132526:e*/l_2934)) & 9UL))) || Tag232(/*int32_t:132579:132670:132526:e*/l_2927)) | Tag233(/*int32_t:132670:132783:132526:e*/l_2934)))) == 18446744073709551615UL)), 4294967290UL))) != 1L), Tag234(/*int32_t:132579:132670:132526:e*/l_2927))) & Tag235(/*int32_t:132670:132783:132526:e*/l_2934));
/*aft_stmt:132526*/
/*aft_stmt:132526*/
/*aft_stmt:132526*/
/*aft_stmt:132526*/
/*aft_stmt:132526*/
/*aft_stmt:132526*/
/*aft_stmt:132526*/
            l_2936 = ((void*)0 != l_2935);
        }
        /*bef_stmt:132615*/
(*g_2499) &= Tag236(/*uint32_t:132783:132783:132615:e*/p_11);
/*aft_stmt:132615*/
        /*bef_stmt:132666*/
l_2937 = ((*g_2499) = (l_2936 = Tag237(/*int32_t:132670:132783:132666:e*/l_2936)));
/*aft_stmt:132666*/
    }
/*aft_stmt:132679*/
    /*bef_stmt:132767*/
(*g_969) = (/*TAG238:STA*/((uint32_t)(realsmith_c4V7v((int)(l_2938[2][5][1])+(10))+(int)(l_2938[2][5][1])-(1))+l_2938[2][5][1])/*TAG238:END:l_2938[2][5][1]*/ , &l_15);
/*aft_stmt:132767*/
    /*bef_stmt:132781*/
return Tag239(/*uint32_t:132783:132783:132781:e*/p_11);
/*aft_stmt:132781*/
}


/* ------------------------------------------ */
/* 
 * reads : g_39 g_51 g_4 g_75 g_76 g_85 g_88 g_44 g_103 g_128 g_80 g_89 g_167 g_184 g_177 g_165 g_246 g_166 g_247 g_248 g_312 g_329 g_333 g_243 g_277 g_327 g_364 g_257 g_379 g_336 g_326 g_536 g_537 g_713 g_808 g_634 g_963 g_968 g_577 g_969 g_1080 g_1100 g_578 g_450 g_527 g_608 g_1488 g_2215 g_1775 g_1776 g_1777 g_2107 g_1335 g_2468 g_1254 g_2443 g_2444 g_2488 g_2492 g_2034 g_1747 g_2499 g_1586 g_2599
 * writes: g_39 g_51 g_76 g_80 g_85 g_89 g_103 g_128 g_44 g_167 g_177 g_243 g_165 g_246 g_257 g_277 g_329 g_333 g_336 g_379 g_326 g_450 g_527 g_312 g_166 g_578 g_75 g_364 g_327 g_645 g_1100 g_536 g_88 g_713 g_577 g_2198 g_2215 g_2107 g_1335 g_1254 g_2488 g_808 g_2492 g_608 g_963 g_2599
 */
static uint32_t  func_25(uint64_t  p_26, const int32_t * p_27, uint32_t  p_28, const uint32_t  p_29)
{ /* block id: 6 */
    int16_t l_37 = 0xE086L;
    uint8_t *l_38 = &g_39;
    int32_t *l_40[4];
    int8_t l_41[7][10][3] = {{{1L,(-1L),1L},{0xD1L,(-1L),0x85L},{1L,1L,0L},{2L,(-1L),(-1L)},{0L,(-1L),(-1L)},{2L,0x59L,2L},{1L,0L,(-1L)},{0xD1L,0xB8L,(-1L)},{1L,0L,0L},{(-1L),0x59L,0x85L}},{{1L,(-1L),1L},{0xD1L,(-1L),0x85L},{1L,1L,0L},{2L,(-1L),(-1L)},{0L,(-1L),(-1L)},{0x85L,0xB8L,0x85L},{0L,1L,(-1L)},{(-1L),(-1L),2L},{(-1L),1L,1L},{2L,0xB8L,0xFFL}},{{(-1L),1L,(-1L)},{(-1L),(-1L),0xFFL},{0L,0L,1L},{0x85L,(-1L),2L},{1L,1L,(-1L)},{0x85L,0xB8L,0x85L},{0L,1L,(-1L)},{(-1L),(-1L),2L},{(-1L),1L,1L},{2L,0xB8L,0xFFL}},{{(-1L),1L,(-1L)},{(-1L),(-1L),0xFFL},{0L,0L,1L},{0x85L,(-1L),2L},{1L,1L,(-1L)},{0x85L,0xB8L,0x85L},{0L,1L,(-1L)},{(-1L),(-1L),2L},{(-1L),1L,1L},{2L,0xB8L,0xFFL}},{{(-1L),1L,(-1L)},{(-1L),(-1L),0xFFL},{0L,0L,1L},{0x85L,(-1L),2L},{1L,1L,(-1L)},{0x85L,0xB8L,0x85L},{0L,1L,(-1L)},{(-1L),(-1L),2L},{(-1L),1L,1L},{2L,0xB8L,0xFFL}},{{(-1L),1L,(-1L)},{(-1L),(-1L),0xFFL},{0L,0L,1L},{0x85L,(-1L),2L},{1L,1L,(-1L)},{0x85L,0xB8L,0x85L},{0L,1L,(-1L)},{(-1L),(-1L),2L},{(-1L),1L,1L},{2L,0xB8L,0xFFL}},{{(-1L),1L,(-1L)},{(-1L),(-1L),0xFFL},{0L,0L,1L},{0x85L,(-1L),2L},{1L,1L,(-1L)},{0x85L,0xB8L,0x85L},{0L,1L,(-1L)},{(-1L),(-1L),2L},{(-1L),1L,1L},{2L,0xB8L,0xFFL}}};
    int8_t *l_1386 = &g_327[2][8];
    int32_t l_2598[6][10] = {{0xEBB8D378L,0x102025CEL,0x9C454E90L,1L,1L,0x9C454E90L,0x102025CEL,0xEBB8D378L,0xEBB8D378L,0x102025CEL},{0xEBB8D378L,1L,0x102025CEL,0x102025CEL,1L,0xEBB8D378L,0x9C454E90L,0x9C454E90L,0xEBB8D378L,1L},{1L,0x102025CEL,0x102025CEL,1L,0xEBB8D378L,0x9C454E90L,0x9C454E90L,0xEBB8D378L,1L,0x102025CEL},{1L,1L,0x9C454E90L,0x102025CEL,0xEBB8D378L,0xEBB8D378L,0x102025CEL,0x9C454E90L,1L,1L},{0xEBB8D378L,0x102025CEL,0x9C454E90L,1L,1L,0x9C454E90L,0x102025CEL,0xEBB8D378L,0xEBB8D378L,0x102025CEL},{0xEBB8D378L,1L,0x102025CEL,0x102025CEL,1L,0xEBB8D378L,0x9C454E90L,0x9C454E90L,0xEBB8D378L,1L}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_40[i] = &g_4[0];
    /*bef_stmt:138808*/
/*bef_stmt:138808*/
/*bef_stmt:138808*/
/*bef_stmt:138808*/
/*bef_stmt:138808*/
/*bef_stmt:138808*/
/*bef_stmt:138808*/
/*bef_stmt:138808*/
(*g_969) = func_30(func_33(((*l_38) |= /*TAG240:STA*/((int16_t)(realsmith_ctEQK((int)(**g_247)+(73), (int)(l_37)+(8085), (int)(**g_247)+(27), (int)(**g_247)+(79), (int)(l_37)+(8103))+(int)(l_37)+(int)(**g_247)-(-8058))+l_37)/*TAG240:END:l_37*/), l_40[0], Tag241(/*int8_t:138828:138828:138808:e*/l_41[2][4][0])), (func_54(((((*l_1386) = ((func_57(l_38, func_60(l_40[3], func_65(/*TAG242:STA*/((int32_t)(realsmith_0YMlU((int)(g_4[0])+(44))+(int)(g_4[0])-(28))+g_4[0])/*TAG242:END:g_4[0]*/, (Tag243(/*const int32_t:138828:138828:138808:e*/*p_27)), func_69(Tag244(/*const uint32_t:138828:138828:138808:e*/p_29), l_40[3], l_40[1], l_38, g_75)), &g_379[5], Tag245(/*uint32_t:138828:138828:138808:e*/p_28))) < 8L) <= 0x13100FB3L)) && Tag246(/*uint8_t:0:0:138808:e*/g_76)) , 0UL), l_40[3]) == Tag247(/*uint64_t:138828:138828:138808:e*/p_26)));
/*aft_stmt:138808*/
/*aft_stmt:138808*/
/*aft_stmt:138808*/
/*aft_stmt:138808*/
/*aft_stmt:138808*/
/*aft_stmt:138808*/
/*aft_stmt:138808*/
/*aft_stmt:138808*/
    g_2599++;
    /*bef_stmt:138826*/
return /*TAG248:STA*/((uint32_t)(realsmith_proxy_fbrpp((char)(p_29)+(-45), (char)(p_29)+(-20), (unsigned int)(p_29)+(-65477), (unsigned long)(p_29)+(-65462), (unsigned long)(p_29)+(-65525))+(int)(p_29)-(65529))+p_29)/*TAG248:END:p_29*/;
/*aft_stmt:138826*/
}


/* ------------------------------------------ */
/* 
 * reads : g_248 g_103 g_246 g_247 g_4 g_277 g_75 g_364 g_39 g_336 g_76 g_969 g_2215 g_1775 g_1776 g_1777 g_327 g_578 g_634 g_326 g_2107 g_85 g_1335 g_2468 g_1488 g_1254 g_2443 g_2444 g_2488 g_312 g_128 g_2492 g_537 g_329 g_88 g_167 g_89 g_2034 g_1747 g_2499 g_243 g_536 g_608 g_1586 g_577 g_44 g_963
 * writes: g_103 g_2198 g_277 g_243 g_2215 g_2107 g_85 g_1335 g_1254 g_364 g_39 g_336 g_76 g_2488 g_326 g_808 g_2492 g_89 g_329 g_608 g_44 g_963 g_167
 */
static int32_t * func_30(int32_t * const  p_31, uint32_t  p_32)
{ /* block id: 851 */
    uint32_t l_2192[9] = {0x8228DD22L,0x8228DD22L,0x8228DD22L,0x8228DD22L,0x8228DD22L,0x8228DD22L,0x8228DD22L,0x8228DD22L,0x8228DD22L};
    int32_t *l_2197 = &g_277;
    int8_t *** const l_2216 = &g_1776[1];
    uint16_t * const * const l_2222 = (void*)0;
    uint16_t * const * const *l_2221 = &l_2222;
    uint16_t * const * const **l_2220 = &l_2221;
    uint16_t * const * const ***l_2219 = &l_2220;
    uint8_t l_2266 = 0UL;
    int32_t l_2277 = 1L;
    int32_t l_2279 = 0x64E0F8EDL;
    int32_t l_2283 = 0xE700939BL;
    int32_t l_2286[1];
    uint32_t l_2293 = 0x8DBB0C4BL;
    uint8_t **l_2322 = &g_75;
    uint8_t ** const *l_2321 = &l_2322;
    int32_t l_2323 = 8L;
    int64_t l_2375 = 0x3D34774F0CFABA88LL;
    uint32_t **l_2396 = &g_248;
    uint8_t *l_2454 = (void*)0;
    int64_t l_2544 = (-3L);
    int16_t l_2583 = 0x1BF8L;
    int64_t *l_2595 = (void*)0;
    int64_t *l_2596 = (void*)0;
    int64_t *l_2597[5] = {&l_2544,&l_2544,&l_2544,&l_2544,&l_2544};
    int i;
    for (i = 0; i < 1; i++)
        l_2286[i] = 1L;
    /*bef_stmt:140449*/
/*bef_stmt:140449*/
/*bef_stmt:140449*/
/*bef_stmt:140449*/
/*bef_stmt:140449*/
/*bef_stmt:140449*/
/*bef_stmt:140449*/
/*bef_stmt:140449*/
/*bef_stmt:140449*/
(*l_2197) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((/*TAG249:STA*/((uint32_t)(realsmith_proxy_3HCtS((char)(l_2192[7])+(-74), (unsigned long)(l_2192[7])+(-2183716109))+(int)(l_2192[7])-(-2111251166))+l_2192[7])/*TAG249:END:l_2192[7]*/ & (((***g_246) = (Tag250(/*uint32_t:0:0:140449:e*/*g_248))) , (safe_add_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s((l_2197 != (g_2198[1][1][0] = l_2197)), (((/*TAG251:STA*/((int32_t)(realsmith_ONJKv()+(int)(*p_31)-(-7))+*p_31)/*TAG251:END:*p_31*/) & 0xFFC7AEA2L) >= (4294967295UL | ((safe_lshift_func_int16_t_s_u((Tag252(/*int32_t:157522:157522:140449:e*/*l_2197)), 8)) != (Tag253(/*uint32_t:157522:157522:140449:e*/p_32) > 0xE49F3D97F4B07233LL)))))) || 0UL) && (Tag254(/*int32_t:157522:157522:140449:e*/*l_2197))) | /*TAG255:STA*/((uint32_t)(realsmith_proxy_snjLM()+(char)(p_32)+(char)(*g_248)+((char)(l_2192[7])-(34))+(char)(*p_31)+(char)(g_4[0])-(99))+p_32)/*TAG255:END:p_32*/), 0L)))) && (Tag256(/*int32_t:157522:157522:140449:e*/*p_31))), (Tag257(/*uint8_t:0:0:140449:e*/*g_75)))), (-2L)));
/*aft_stmt:140449*/
/*aft_stmt:140449*/
/*aft_stmt:140449*/
/*aft_stmt:140449*/
/*aft_stmt:140449*/
/*aft_stmt:140449*/
/*aft_stmt:140449*/
/*aft_stmt:140449*/
/*aft_stmt:140449*/
    (*g_969) = (void*)0;
    /*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
/*bef_stmt:157025*/
if ((((*l_2197) = ((((((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(1UL, (safe_lshift_func_int16_t_s_s((-7L), 10)))) , (safe_add_func_uint8_t_u_u((((/*TAG258:STA*/((uint32_t)(realsmith_proxy_rjn7Z((int)(p_32)+(85), (int)(p_32)+(-23), (int)(p_32)+(95), (int)(p_32)+(19), (int)(p_32)+(13))+(int)(p_32)-(1))+p_32)/*TAG258:END:p_32*/ > /*TAG259:STA*/((uint32_t)(realsmith_hONCT((int)(g_2215)+(1080369579))+(int)(g_2215)-(-1080320415))+g_2215)/*TAG259:END:g_2215*/) < (l_2216 == ((safe_div_func_uint32_t_u_u((Tag260(/*int32_t:157522:157522:157025:e*/*l_2197)), (Tag261(/*int32_t:157522:157522:157025:e*/*l_2197)))) , &g_1776[1]))) & (Tag262(/*int32_t:157522:157522:157025:e*/*p_31))), Tag263(/*uint32_t:157522:157522:157025:e*/p_32)))), 0)) , l_2219) == &l_2220) < (Tag264(/*int32_t:157522:157522:157025:e*/*p_31))) , (/*TAG265:STA*/((int32_t)(realsmith_foWhW((int)(*l_2197)+(36))+(int)(*l_2197)-(0))+*l_2197)/*TAG265:END:*l_2197*/)), Tag266(/*uint32_t:157522:157522:157025:e*/p_32))), (-1L))) , (/*TAG267:STA*/((int32_t)(realsmith_mMW8d((int)(*l_2197)+(6), (int)(*l_2197)+(74))+(int)(*l_2197)-(1))+*l_2197)/*TAG267:END:*l_2197*/)) < (Tag268(/*int32_t:157522:157522:157025:e*/*l_2197))) || Tag269(/*uint32_t:157522:157522:157025:e*/p_32)) | /*TAG270:STA*/((uint32_t)(realsmith_QBL71((unsigned int)(p_32)+(67))+(int)(p_32)-(1))+p_32)/*TAG270:END:p_32*/) , (Tag271(/*int32_t:157522:157522:157025:e*/*l_2197)))) || (Tag272(/*int8_t:0:0:157025:e*/***g_1775))))
    { /* block id: 857 */
        uint32_t l_2246 = 0x4278B4D3L;
        int32_t l_2247 = 0x88402CD4L;
        const int32_t *l_2259 = &g_1586[9];
        int32_t l_2261 = 0x6E8AD8A3L;
        int32_t l_2265 = 0xCBD5710FL;
        int32_t l_2281 = 0x87B73E0AL;
        int32_t l_2284 = 0x08433D45L;
        int32_t l_2285[6];
        uint32_t ****l_2342 = &g_246;
        int8_t l_2407 = 0xE5L;
        uint64_t **l_2428 = &g_88;
        int32_t l_2451 = 1L;
        int16_t l_2455 = 1L;
        uint32_t l_2505 = 0x0266A50EL;
        uint16_t ****l_2557 = (void*)0;
        int i;
        for (i = 0; i < 6; i++)
            l_2285[i] = 0x22D0DF9EL;
        for (g_2215 = 5; (g_2215 > 44); g_2215 = safe_add_func_int16_t_s_s(g_2215, 2))
        { /* block id: 860 */
            int32_t l_2244 = 0x662E11FFL;
            uint32_t l_2257 = 0UL;
            int32_t l_2260 = (-2L);
            int32_t l_2263[2];
            int32_t l_2274 = 0xA3CE64A8L;
            int16_t l_2310 = 0xCDA3L;
            uint64_t l_2350 = 18446744073709551615UL;
            int64_t l_2367 = 0x0B74B58E11436CA5LL;
            int32_t l_2404[2][4] = {{0xC6C392C2L,0xC6C392C2L,0x60710535L,0xC6C392C2L},{0xC6C392C2L,0L,0L,0xC6C392C2L}};
            uint8_t ***l_2420 = (void*)0;
            uint16_t ***l_2452 = (void*)0;
            int i, j;
            for (i = 0; i < 2; i++)
                l_2263[i] = 0L;
            for (g_277 = 0; (g_277 == 24); ++g_277)
            { /* block id: 863 */
                int32_t *l_2243[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int64_t *l_2245 = &g_2107;
                uint64_t l_2287[6][10][1] = {{{0UL},{0x1B9C541E8549A095LL},{0x2ACC1C9C026FF168LL},{18446744073709551615UL},{18446744073709551609UL},{0x3F6FCE8E420E8C65LL},{18446744073709551609UL},{18446744073709551615UL},{0x2ACC1C9C026FF168LL},{0x1B9C541E8549A095LL}},{{0UL},{0x88CA8F50AFF6FD40LL},{0x9482C8474297027BLL},{1UL},{1UL},{1UL},{1UL},{0x9482C8474297027BLL},{0x88CA8F50AFF6FD40LL},{0UL}},{{0x1B9C541E8549A095LL},{0x2ACC1C9C026FF168LL},{18446744073709551615UL},{18446744073709551609UL},{0x3F6FCE8E420E8C65LL},{18446744073709551609UL},{18446744073709551615UL},{0x2ACC1C9C026FF168LL},{0x1B9C541E8549A095LL},{0UL}},{{0x88CA8F50AFF6FD40LL},{0x9482C8474297027BLL},{1UL},{1UL},{1UL},{1UL},{0x9482C8474297027BLL},{0x88CA8F50AFF6FD40LL},{0UL},{0x1B9C541E8549A095LL}},{{0x2ACC1C9C026FF168LL},{18446744073709551615UL},{18446744073709551609UL},{0x3F6FCE8E420E8C65LL},{18446744073709551609UL},{18446744073709551615UL},{0x2ACC1C9C026FF168LL},{0x1B9C541E8549A095LL},{0UL},{0x88CA8F50AFF6FD40LL}},{{0x9482C8474297027BLL},{1UL},{1UL},{1UL},{1UL},{0x9482C8474297027BLL},{0x88CA8F50AFF6FD40LL},{0UL},{0x1B9C541E8549A095LL},{0x2ACC1C9C026FF168LL}}};
                int16_t l_2311[10][10] = {{(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L)},{0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L)},{0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,0x09E9L},{(-1L),0x09E9L,(-1L),(-1L),0x09E9L,(-1L),(-1L),0x09E9L,(-1L),(-1L)},{0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L,0x09E9L,(-1L),0x09E9L},{0x09E9L,(-1L),(-1L),0x09E9L,(-1L),(-1L),0x09E9L,(-1L),(-1L),0x09E9L}};
                uint64_t *l_2349[8][9] = {{&g_608,(void*)0,&g_608,&g_608,(void*)0,&g_608,&g_608,(void*)0,&g_608},{&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_312},{&g_608,(void*)0,&g_608,&g_608,(void*)0,&g_608,&g_608,(void*)0,&g_608},{&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_312},{&g_608,(void*)0,&g_608,&g_608,(void*)0,&g_608,&g_608,(void*)0,&g_608},{&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_312},{&g_608,(void*)0,&g_608,&g_608,(void*)0,&g_608,&g_608,(void*)0,&g_608},{&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_312,&g_312,(void*)0,&g_312}};
                const uint32_t *** const **l_2355 = &g_2351;
                int32_t l_2356 = 0x5E0CC8E8L;
                int16_t l_2376 = 1L;
                int8_t ** const * const l_2402 = (void*)0;
                int8_t ** const * const *l_2401 = &l_2402;
                int8_t ** const * const **l_2400 = &l_2401;
                uint16_t l_2456 = 0x3CD0L;
                int i, j, k;
                /*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
/*bef_stmt:148204*/
l_2247 = (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((Tag273(/*uint32_t:157522:157522:148204:e*/p_32) || 0xC5L), (((l_2246 &= ((Tag274(/*int8_t:0:0:148204:e*/***g_1775)) != ((((((safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((*l_2245) ^= ((safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((Tag275(/*uint32_t:0:0:148204:e*/****g_578)) >= (l_2244 = (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((void*)0 == &p_31), 0xA814L)), (((Tag276(/*uint32_t:157522:157522:148204:e*/p_32) <= ((65535UL <= (Tag277(/*int16_t:0:0:148204:e*/*g_634))) >= 0x7DAC12F3L)) | 0x07A0097749B18F4BLL) >= Tag278(/*uint32_t:157522:157522:148204:e*/p_32)))))), 0xBFD055403F056747LL)) || Tag279(/*uint32_t:157522:157522:148204:e*/p_32)), 0xB4L)) || Tag280(/*uint32_t:157522:157522:148204:e*/p_32))), Tag281(/*uint32_t:157522:157522:148204:e*/p_32))), (Tag282(/*int32_t:157522:157522:148204:e*/*l_2197)))) , 0x2EA8L) || (Tag283(/*int32_t:157522:157522:148204:e*/*l_2197))) , (-1L)) || Tag284(/*uint32_t:157522:157522:148204:e*/p_32)) , Tag285(/*uint32_t:157522:157522:148204:e*/p_32)))) < (Tag286(/*int32_t:157522:157522:148204:e*/*p_31))) && 65535UL))), 0UL));
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
/*aft_stmt:148204*/
            }
        }
        /*bef_stmt:148285*/
(*l_2197) ^= (Tag287(/*int32_t:157522:157522:148285:e*/*p_31));
/*aft_stmt:148285*/
        for (g_85 = 10; (g_85 == 25); g_85++)
        { /* block id: 937 */
            uint32_t ***l_2462[3][6][5] = {{{&g_1882,(void*)0,&g_1882,&g_1882,(void*)0},{(void*)0,&g_1882,&g_1882,(void*)0,&g_1882},{&g_1882,(void*)0,&g_1882,&g_1882,&g_1882},{&g_1882,(void*)0,(void*)0,(void*)0,&g_1882},{&g_1882,&g_1882,(void*)0,&g_1882,(void*)0},{&g_1882,&g_1882,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_1882,&g_1882,(void*)0},{&g_1882,(void*)0,&g_1882,&g_1882,&g_1882},{(void*)0,(void*)0,(void*)0,&g_1882,&g_1882},{&g_1882,&g_1882,(void*)0,&g_1882,&g_1882},{(void*)0,&g_1882,&g_1882,(void*)0,(void*)0},{&g_1882,&g_1882,(void*)0,&g_1882,&g_1882}},{{&g_1882,&g_1882,(void*)0,(void*)0,&g_1882},{(void*)0,&g_1882,&g_1882,&g_1882,&g_1882},{(void*)0,&g_1882,&g_1882,(void*)0,&g_1882},{(void*)0,&g_1882,(void*)0,&g_1882,&g_1882},{(void*)0,&g_1882,(void*)0,&g_1882,&g_1882},{(void*)0,(void*)0,(void*)0,&g_1882,(void*)0}}};
            uint32_t ****l_2461 = &l_2462[0][2][1];
            uint32_t *****l_2463 = (void*)0;
            int32_t l_2494 = 0xAE6AC69BL;
            int32_t l_2504 = (-1L);
            int i, j, k;
            l_2461 = l_2461;
            for (p_32 = 0; (p_32 <= 44); p_32++)
            { /* block id: 941 */
                uint16_t l_2479 = 65531UL;
                int8_t * const *l_2491 = &g_1777;
                int32_t *l_2498 = &l_2277;
                int32_t *l_2500 = (void*)0;
                int32_t *l_2501 = &g_1586[5];
                int32_t *l_2502[9][4] = {{(void*)0,&l_2494,(void*)0,&g_4[0]},{&l_2284,&l_2494,&l_2286[0],&l_2494},{&l_2284,&g_4[0],(void*)0,&l_2494},{(void*)0,&l_2494,(void*)0,&g_4[0]},{&l_2284,&l_2494,&l_2286[0],&l_2494},{&l_2284,&g_4[0],(void*)0,&l_2494},{(void*)0,&l_2494,(void*)0,&g_4[0]},{&l_2284,&l_2494,&l_2286[0],&l_2494},{&l_2284,&g_4[0],(void*)0,&l_2494}};
                int16_t l_2503 = 0xA8E5L;
                int i, j;
                (*g_969) = (void*)0;
                for (g_1335 = (-22); (g_1335 == 28); ++g_1335)
                { /* block id: 945 */
                    int64_t *l_2470 = &g_1254;
                    int32_t l_2486[4] = {(-1L),(-1L),(-1L),(-1L)};
                    uint8_t *l_2487 = (void*)0;
                    int16_t *l_2493 = &g_808[1][7];
                    int32_t *l_2495 = (void*)0;
                    int32_t *l_2496 = &l_2279;
                    int i;
                    /*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
/*bef_stmt:152779*/
(*l_2496) ^= ((((g_2468 != (void*)0) < (((*l_2470) ^= (p_32 , Tag288(/*uint32_t:0:0:152779:e*/g_1488[1][3]))) > 0xA43772679F1A7DFALL)) , ((safe_div_func_int32_t_s_s((((((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((Tag289(/*uint16_t:153044:153100:152779:e*/l_2479) != (((safe_sub_func_int16_t_s_s(((*l_2493) = ((*g_634) = (((safe_mod_func_int16_t_s_s((((g_2488 |= (l_2486[0] = (--(***g_2443)))) , ((safe_mod_func_int16_t_s_s(((((Tag290(/*uint64_t:0:0:152779:e*/g_312) <= ((*l_2470) = (((((Tag291(/*uint32_t:0:0:152779:e*/*g_248)) , (1UL >= (Tag292(/*int32_t:157522:157522:152779:e*/*l_2197)))) ^ p_32) , (Tag293(/*int8_t:0:0:152779:e*/***g_1775))) != p_32))) , Tag294(/*int32_t:0:0:152779:e*/g_128)) | p_32) < Tag295(/*uint32_t:0:0:152779:e*/g_103[0][1])), Tag296(/*uint16_t:153044:153100:152779:e*/l_2479))) , (void*)0)) != l_2491), 1UL)) > Tag297(/*uint32_t:0:0:152779:e*/g_2492)) , Tag298(/*uint16_t:153044:153100:152779:e*/l_2479)))), (Tag299(/*uint16_t:0:0:152779:e*/*g_537)))) && (Tag300(/*uint16_t:0:0:152779:e*/*g_537))) <= (Tag301(/*uint64_t:0:0:152779:e*/*g_88)))) , (Tag302(/*int16_t:0:0:152779:e*/*g_634))), 6)) , (-10L)), Tag303(/*int32_t:153100:156672:152779:e*/l_2494))), 0x02D3L)) , (void*)0) == (void*)0) ^ 0x98L) , 65528UL) , 0x76F2A9E5F641D31ALL) != p_32), 4294967294UL)) , (void*)0)) == (*g_2034));
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
/*aft_stmt:152779*/
                    /*bef_stmt:152803*/
if ((Tag304(/*int32_t:152982:153044:152803:e*/*l_2496)))
                        continue;
/*aft_stmt:152803*/
                    for (g_2492 = 1; (g_2492 <= 5); g_2492 += 1)
                    { /* block id: 957 */
                        int32_t *l_2497 = &l_2486[1];
                        return g_2499;
                    }
                    /*bef_stmt:152976*/
(*l_2496) ^= (0x2F72762BL != (8UL && (Tag305(/*int32_t:157522:157522:152976:e*/*l_2197))));
/*aft_stmt:152976*/
                }
                /*bef_stmt:153033*/
(*l_2197) = (Tag306(/*int32_t:157522:157522:153033:e*/*p_31));
/*aft_stmt:153033*/
                l_2505++;
            }
            (*g_969) = (*g_969);
        }
        for (g_89 = 0; (g_89 <= 0); g_89 += 1)
        { /* block id: 969 */
            int8_t l_2522 = 0x83L;
            int32_t l_2523 = 0x4C4CDA38L;
            int32_t l_2566 = 0x318FC34FL;
            for (l_2261 = 0; (l_2261 <= 0); l_2261 += 1)
            { /* block id: 972 */
                uint32_t *****l_2558 = &l_2342;
                int32_t ***l_2561[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j;
                /*bef_stmt:156155*/
/*bef_stmt:156155*/
/*bef_stmt:156155*/
/*bef_stmt:156155*/
/*bef_stmt:156155*/
/*bef_stmt:156155*/
if (((safe_rshift_func_int8_t_s_s(0x5CL, ((((safe_rshift_func_uint8_t_u_s(0x88L, 6)) && ((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((**g_536)++), ((((g_1747[(g_89 + 9)][g_89] == (void*)0) >= (safe_rshift_func_int8_t_s_s((-4L), ((l_2286[g_89] , (Tag307(/*int16_t:0:0:156155:e*/*g_634))) < (l_2523 |= Tag308(/*int8_t:156639:156672:156155:e*/l_2522)))))) ^ Tag309(/*int8_t:0:0:156155:e*/g_327[2][8])) , (-1L)))), Tag310(/*uint32_t:157522:157522:156155:e*/p_32))), (Tag311(/*uint32_t:0:0:156155:e*/***g_246)))) & 0UL)) > 1L) , 0x90L))) , (Tag312(/*int32_t:157522:157522:156155:e*/*p_31))))
                { /* block id: 975 */
                    int64_t l_2524 = (-6L);
                    int8_t * const *l_2537 = &g_1777;
                    int8_t * const ** const l_2536 = &l_2537;
                    int8_t * const ** const *l_2535 = &l_2536;
                    const int64_t l_2546[8] = {0x8CE80C63ED81A4CDLL,0x0162082439807974LL,0x0162082439807974LL,0x8CE80C63ED81A4CDLL,0x0162082439807974LL,0x0162082439807974LL,0x8CE80C63ED81A4CDLL,0x0162082439807974LL};
                    int i;
                    /*bef_stmt:154358*/
/*bef_stmt:154358*/
l_2285[(l_2261 + 1)] &= (4L != (Tag313(/*int64_t:155933:156180:154358:e*/l_2524) | Tag314(/*uint32_t:157522:157522:154358:e*/p_32)));
/*aft_stmt:154358*/
/*aft_stmt:154358*/
                    for (g_608 = 0; (g_608 <= 0); g_608 += 1)
                    { /* block id: 979 */
                        int8_t * const ** const **l_2538 = &l_2535;
                        int32_t l_2543 = 0x70156936L;
                        int32_t *l_2545 = &g_44;
                        int32_t ****l_2562 = &l_2561[1];
                        uint8_t *l_2565 = &l_2266;
                        int i, j, k;
                        /*bef_stmt:155228*/
/*bef_stmt:155228*/
/*bef_stmt:155228*/
/*bef_stmt:155228*/
/*bef_stmt:155228*/
/*bef_stmt:155228*/
/*bef_stmt:155228*/
/*bef_stmt:155228*/
/*bef_stmt:155228*/
(*l_2545) ^= (l_2265 = (safe_div_func_uint64_t_u_u(3UL, (safe_sub_func_int64_t_s_s((((+Tag315(/*uint32_t:157522:157522:155228:e*/p_32)) | ((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((!((Tag316(/*const int32_t:156672:157522:155228:e*/*l_2259)) <= ((*g_634) = (((*l_2538) = l_2535) == &g_1775)))), (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((*l_2197) = ((Tag317(/*uint32_t:0:0:155228:e*/*****g_577)) & (0xC27FL > (Tag318(/*int32_t:155915:155933:155228:e*/l_2543) , ((l_2286[g_89] = ((Tag319(/*uint32_t:157522:157522:155228:e*/p_32) & Tag320(/*int64_t:157522:157522:155228:e*/l_2544)) || 2L)) , Tag321(/*uint32_t:157522:157522:155228:e*/p_32)))))) < 0xF6FF76FE41880D0CLL) | 0xF59DF16FFCA76E87LL), 0x08404EE2L)), Tag322(/*uint32_t:157522:157522:155228:e*/p_32))))), 5L)) > 0L)) & (-1L)), Tag323(/*uint32_t:157522:157522:155228:e*/p_32))))));
/*aft_stmt:155228*/
/*aft_stmt:155228*/
/*aft_stmt:155228*/
/*aft_stmt:155228*/
/*aft_stmt:155228*/
/*aft_stmt:155228*/
/*aft_stmt:155228*/
/*aft_stmt:155228*/
/*aft_stmt:155228*/
                        /*bef_stmt:155253*/
if (Tag324(/*const int64_t:155933:156180:155253:e*/l_2546[4]))
                            break;
/*aft_stmt:155253*/
                        /*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
/*bef_stmt:155909*/
l_2566 ^= ((safe_lshift_func_int8_t_s_s(Tag325(/*int8_t:156639:156672:155909:e*/l_2522), ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_u(((l_2523 &= (((safe_sub_func_int16_t_s_s((g_1747[(g_89 + 9)][g_89] == l_2557), (Tag326(/*uint16_t:0:0:155909:e*/**g_536)))) , l_2558) != ((((Tag327(/*int8_t:0:0:155909:e*/*g_1777)) >= (safe_rshift_func_int16_t_s_u(((*g_634) = (((*l_2562) = l_2561[2]) != (void*)0)), (((*l_2565) |= ((**l_2322) = (safe_sub_func_int8_t_s_s((Tag328(/*int8_t:156639:156672:155909:e*/l_2522) , 0xEFL), 0x9BL)))) == Tag329(/*uint32_t:157522:157522:155909:e*/p_32))))) == Tag330(/*uint32_t:157522:157522:155909:e*/p_32)) , &g_578))) , Tag331(/*int32_t:156639:156672:155909:e*/l_2523)), Tag332(/*uint32_t:157522:157522:155909:e*/p_32))) != 2UL) > Tag333(/*uint32_t:157522:157522:155909:e*/p_32)), (Tag334(/*int32_t:157522:157522:155909:e*/*l_2197)))), 8)) <= (Tag335(/*int8_t:0:0:155909:e*/*g_1777))))) , 0xBE7F268EL);
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
/*aft_stmt:155909*/
                    }
                }
                else
                { /* block id: 994 */
                    uint8_t l_2568 = 0x5CL;
                    for (l_2323 = 0; (l_2323 >= 0); l_2323 -= 1)
                    { /* block id: 997 */
                        int32_t *l_2567[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2567[i] = &l_2279;
                        --l_2568;
                    }
                }
/*aft_stmt:156155*/
/*aft_stmt:156155*/
/*aft_stmt:156155*/
/*aft_stmt:156155*/
/*aft_stmt:156155*/
/*aft_stmt:156155*/
                return (*g_969);
            }
            for (l_2407 = 1; (l_2407 >= 0); l_2407 -= 1)
            { /* block id: 1005 */
                const int8_t l_2573 = 0x4AL;
                /*bef_stmt:156288*/
if ((Tag336(/*int32_t:157522:157522:156288:e*/*p_31)))
                    break;
/*aft_stmt:156288*/
                (*g_2499) ^= (safe_add_func_uint16_t_u_u(0x5489L, ((void*)0 != &g_1883[1])));
                for (l_2284 = 1; (l_2284 >= 0); l_2284 -= 1)
                { /* block id: 1010 */
                    for (g_963 = 0; (g_963 <= 1); g_963 += 1)
                    { /* block id: 1013 */
                        int32_t *l_2574 = &l_2523;
                        /*bef_stmt:156570*/
/*bef_stmt:156570*/
(*g_969) = func_65(Tag337(/*const int8_t:156626:156639:156570:e*/l_2573), (Tag338(/*int32_t:157522:157522:156570:e*/*p_31)), &g_364);
/*aft_stmt:156570*/
/*aft_stmt:156570*/
                        return (*g_969);
                    }
                }
            }
        }
    }
    else
    { /* block id: 1020 */
        int32_t *l_2575 = &g_1586[7];
        int32_t *l_2576 = &g_277;
        int32_t *l_2577 = &g_379[2];
        int32_t *l_2578 = &g_1586[5];
        int32_t *l_2579[1];
        uint32_t l_2580 = 0xD9882068L;
        int i;
        for (i = 0; i < 1; i++)
            l_2579[i] = &l_2277;
        (*l_2197) &= (-7L);
        l_2580--;
    }
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
/*aft_stmt:157025*/
    /*bef_stmt:157499*/
/*bef_stmt:157499*/
/*bef_stmt:157499*/
/*bef_stmt:157499*/
/*bef_stmt:157499*/
/*bef_stmt:157499*/
/*bef_stmt:157499*/
(*g_969) = func_65(((((g_1254 = (((((/*TAG339:STA*/((uint32_t)(realsmith_proxy_ZG7LQ((char)(p_32)+(19))+(int)(p_32)-(0))+p_32)/*TAG339:END:p_32*/ && ((*g_634) = (/*TAG340:STA*/((int32_t)(realsmith_proxy_zpeaf((int)(*l_2197)+(-15))+(int)(*l_2197)-(1))+*l_2197)/*TAG340:END:*l_2197*/))) , ((*g_88) ^= (Tag341(/*int16_t:157522:157522:157499:e*/l_2583) >= 4294967287UL))) || (--(*g_88))) || (~(safe_mod_func_uint16_t_u_u(Tag342(/*uint32_t:157522:157522:157499:e*/p_32), ((safe_mul_func_uint8_t_u_u(254UL, ((*l_2197) = 255UL))) | (safe_add_func_uint16_t_u_u(/*TAG343:STA*/((uint32_t)(realsmith_proxy_epE4C((int)(p_32)+(-46))+(int)(p_32)-(-1))+p_32)/*TAG343:END:p_32*/, ((safe_mod_func_uint64_t_u_u(/*TAG344:STA*/((uint32_t)(realsmith_proxy_Y8txg((int)(p_32)+(-18))+(int)(p_32)-(1))+p_32)/*TAG344:END:p_32*/, 0x18FF7EC828289208LL)) != 255UL)))))))) , 0L)) , (-9L)) != 2UL) <= 0x7F26B115645DE02ALL), (/*TAG345:STA*/((int32_t)(realsmith_cNlGg((int)(*p_31)+(18))+(int)(*p_31)-(-12))+*p_31)/*TAG345:END:*p_31*/), &g_76);
/*aft_stmt:157499*/
/*aft_stmt:157499*/
/*aft_stmt:157499*/
/*aft_stmt:157499*/
/*aft_stmt:157499*/
/*aft_stmt:157499*/
/*aft_stmt:157499*/
    return (*g_969);
}


/* ------------------------------------------ */
/* 
 * reads : g_51
 * writes: g_51
 */
static int32_t * const  func_33(uint8_t  p_34, int32_t * p_35, uint64_t  p_36)
{ /* block id: 8 */
    int8_t l_42[2];
    int32_t *l_43 = &g_44;
    int32_t *l_45 = (void*)0;
    int32_t l_46 = (-7L);
    int32_t *l_47 = (void*)0;
    int32_t *l_48 = &l_46;
    int32_t *l_49 = &g_44;
    int32_t *l_50 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_42[i] = 1L;
    ++g_51;
    return &g_4[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_248 g_103 g_379 g_327 g_578 g_246 g_247 g_4 g_536 g_537 g_329 g_450 g_277 g_577 g_88 g_167 g_89 g_634 g_326 g_969 g_1488 g_243
 * writes: g_327 g_333 g_167 g_89 g_277 g_103 g_243 g_326 g_75
 */
static int8_t  func_54(uint64_t  p_55, int32_t * const  p_56)
{ /* block id: 551 */
    int64_t l_1387 = 0xA551717D732CAD3ELL;
    int32_t l_1390 = 0x7E8ABBEDL;
    int8_t *l_1393 = (void*)0;
    int8_t *l_1394 = (void*)0;
    int8_t *l_1395 = &g_327[2][8];
    int32_t l_1396 = 0x7C0110E6L;
    int32_t l_1406[3][8][4] = {{{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL}},{{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL}},{{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL},{0x4039403AL,0x4039403AL,0x4039403AL,0x4039403AL}}};
    int32_t l_1407[2][2][5] = {{{1L,0xCE50A50AL,1L,0xCE50A50AL,1L},{7L,7L,7L,7L,7L}},{{1L,0xCE50A50AL,1L,0xCE50A50AL,1L},{7L,7L,7L,7L,7L}}};
    int16_t l_1454 = (-1L);
    int32_t ***l_1463 = &g_969;
    uint32_t ** const *l_1485 = &g_247;
    uint32_t *l_1503 = &g_1488[1][6];
    uint32_t **l_1502[7] = {&l_1503,(void*)0,&l_1503,&l_1503,(void*)0,&l_1503,&l_1503};
    uint32_t l_1546 = 1UL;
    uint64_t l_1601[7][9][2] = {{{6UL,18446744073709551615UL},{0x8F0171E656DF3D5BLL,18446744073709551615UL},{6UL,0x2C1E671FEC061133LL},{0xF003DB0C5B97DF36LL,0xA344D482527BAD2CLL},{0x18564250E982BBF2LL,0x3CC4A51141A1275DLL},{0x6A7AD290502A0ABFLL,0x6A7AD290502A0ABFLL},{0x844F1992931CC2F2LL,18446744073709551615UL},{0x844F1992931CC2F2LL,0x3CC4A51141A1275DLL},{0x8F0171E656DF3D5BLL,0UL}},{{18446744073709551615UL,0x8F0171E656DF3D5BLL},{0x8943E5DDA05A26C8LL,0xF7F6D5663690F243LL},{0x8943E5DDA05A26C8LL,0x8F0171E656DF3D5BLL},{18446744073709551615UL,0UL},{0x8F0171E656DF3D5BLL,0x3CC4A51141A1275DLL},{0x844F1992931CC2F2LL,18446744073709551615UL},{6UL,0x18FCBC4090FD593DLL},{0x18FCBC4090FD593DLL,0x6A7AD290502A0ABFLL},{0x2C1E671FEC061133LL,0x316829720972D930LL}},{{0x8D0EE2D6BD03324DLL,0x844F1992931CC2F2LL},{0x18564250E982BBF2LL,0xF003DB0C5B97DF36LL},{0x3CC4A51141A1275DLL,0xF003DB0C5B97DF36LL},{0x18564250E982BBF2LL,0x844F1992931CC2F2LL},{0x8D0EE2D6BD03324DLL,0x316829720972D930LL},{0x2C1E671FEC061133LL,0x6A7AD290502A0ABFLL},{0x18FCBC4090FD593DLL,0x18FCBC4090FD593DLL},{6UL,18446744073709551615UL},{0x844F1992931CC2F2LL,0x3CC4A51141A1275DLL}},{{0x8F0171E656DF3D5BLL,0UL},{18446744073709551615UL,0x8F0171E656DF3D5BLL},{0x8943E5DDA05A26C8LL,0xF7F6D5663690F243LL},{0x8943E5DDA05A26C8LL,0x8F0171E656DF3D5BLL},{18446744073709551615UL,0UL},{0x8F0171E656DF3D5BLL,0x3CC4A51141A1275DLL},{0x844F1992931CC2F2LL,18446744073709551615UL},{6UL,0x18FCBC4090FD593DLL},{0x18FCBC4090FD593DLL,0x6A7AD290502A0ABFLL}},{{0x2C1E671FEC061133LL,0x316829720972D930LL},{0x8D0EE2D6BD03324DLL,0x844F1992931CC2F2LL},{0x18564250E982BBF2LL,0xF003DB0C5B97DF36LL},{0x3CC4A51141A1275DLL,0xF003DB0C5B97DF36LL},{0x18564250E982BBF2LL,0x844F1992931CC2F2LL},{0x8D0EE2D6BD03324DLL,0x316829720972D930LL},{0x2C1E671FEC061133LL,0x6A7AD290502A0ABFLL},{0x18FCBC4090FD593DLL,0x18FCBC4090FD593DLL},{6UL,18446744073709551615UL}},{{0x844F1992931CC2F2LL,0x3CC4A51141A1275DLL},{0x8F0171E656DF3D5BLL,0UL},{18446744073709551615UL,0x8F0171E656DF3D5BLL},{0x8943E5DDA05A26C8LL,0xF7F6D5663690F243LL},{0x8943E5DDA05A26C8LL,0x8F0171E656DF3D5BLL},{18446744073709551615UL,0UL},{0x8F0171E656DF3D5BLL,0x3CC4A51141A1275DLL},{0x844F1992931CC2F2LL,18446744073709551615UL},{6UL,0x18FCBC4090FD593DLL}},{{0x18FCBC4090FD593DLL,0x6A7AD290502A0ABFLL},{0x2C1E671FEC061133LL,0x316829720972D930LL},{0x8D0EE2D6BD03324DLL,0x844F1992931CC2F2LL},{0x18564250E982BBF2LL,0xF003DB0C5B97DF36LL},{0x3CC4A51141A1275DLL,0xF003DB0C5B97DF36LL},{0x18564250E982BBF2LL,0x844F1992931CC2F2LL},{0x8D0EE2D6BD03324DLL,0x316829720972D930LL},{0x2C1E671FEC061133LL,0x6A7AD290502A0ABFLL},{0x18FCBC4090FD593DLL,0x18FCBC4090FD593DLL}}};
    const uint16_t l_1630[7] = {0xD116L,0xD116L,0xD116L,0xD116L,0xD116L,0xD116L,0xD116L};
    uint16_t ***l_1673 = &g_536;
    uint16_t ****l_1672[10][9] = {{&l_1673,&l_1673,(void*)0,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673},{&l_1673,(void*)0,(void*)0,(void*)0,&l_1673,&l_1673,(void*)0,&l_1673,&l_1673},{(void*)0,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,(void*)0},{&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673},{(void*)0,&l_1673,&l_1673,(void*)0,&l_1673,&l_1673,&l_1673,(void*)0,&l_1673},{&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,(void*)0},{(void*)0,&l_1673,&l_1673,&l_1673,&l_1673,(void*)0,(void*)0,&l_1673,&l_1673},{&l_1673,(void*)0,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,(void*)0,&l_1673},{(void*)0,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,(void*)0,&l_1673,&l_1673},{&l_1673,&l_1673,(void*)0,&l_1673,&l_1673,&l_1673,&l_1673,&l_1673,(void*)0}};
    uint64_t *l_1740 = &l_1601[0][3][0];
    uint64_t *l_1742 = &l_1601[1][3][0];
    uint8_t l_1745 = 253UL;
    const int32_t l_1746[10][6][4] = {{{0xF0AB9244L,0x4AA8CD7FL,(-1L),0xF8C0CF07L},{0xF0AB9244L,(-10L),0x4E305637L,(-10L)},{0xCBD23FBBL,0xF8C0CF07L,(-1L),0x4AA8CD7FL},{0xCBD23FBBL,0x3113216CL,0x4E305637L,0xF4A47421L},{0xF0AB9244L,0x6603D028L,(-1L),0L},{0xF0AB9244L,0xF158C574L,0x4E305637L,0xF158C574L}},{{0xCBD23FBBL,0L,(-1L),0x6603D028L},{0xCBD23FBBL,0xF4A47421L,0x4E305637L,0x3113216CL},{0xF0AB9244L,0x4AA8CD7FL,(-1L),0xF8C0CF07L},{0xF0AB9244L,(-10L),0x4E305637L,(-10L)},{0xCBD23FBBL,0xF8C0CF07L,(-1L),0x4AA8CD7FL},{0xCBD23FBBL,0x3113216CL,0x4E305637L,0xF4A47421L}},{{0xF0AB9244L,0x6603D028L,(-1L),0L},{0xF0AB9244L,0xF158C574L,0x4E305637L,0xF158C574L},{0xCBD23FBBL,0L,(-1L),0x6603D028L},{0xCBD23FBBL,0xF4A47421L,0x4E305637L,0x3113216CL},{0xF0AB9244L,0x4AA8CD7FL,(-1L),0xF8C0CF07L},{0xF0AB9244L,(-10L),0x4E305637L,(-10L)}},{{0xCBD23FBBL,0xF8C0CF07L,(-1L),0x4AA8CD7FL},{0xCBD23FBBL,0x3113216CL,0x4E305637L,0xF4A47421L},{0xF0AB9244L,0x6603D028L,(-1L),0L},{0xF0AB9244L,0xF158C574L,0x4E305637L,0xF158C574L},{0xCBD23FBBL,0L,(-1L),0x6603D028L},{0xCBD23FBBL,0xF4A47421L,0x4E305637L,0x3113216CL}},{{0xF0AB9244L,0x4AA8CD7FL,(-1L),0xF8C0CF07L},{0xF0AB9244L,(-10L),0x4E305637L,(-10L)},{0xCBD23FBBL,0xF8C0CF07L,(-1L),0x4AA8CD7FL},{0xCBD23FBBL,0x3113216CL,0x4E305637L,0xF4A47421L},{0xF0AB9244L,0x6603D028L,(-1L),0L},{0xF0AB9244L,0xF158C574L,0x4E305637L,0xF158C574L}},{{0xCBD23FBBL,0L,(-1L),0x6603D028L},{0xCBD23FBBL,0xF4A47421L,0x4E305637L,0x3113216CL},{0xF0AB9244L,0x4AA8CD7FL,(-1L),0xF8C0CF07L},{0xF0AB9244L,(-10L),0x4E305637L,(-10L)},{0xCBD23FBBL,0xF8C0CF07L,(-1L),0x4AA8CD7FL},{0xCBD23FBBL,0x3113216CL,0x4E305637L,0xF4A47421L}},{{0xF0AB9244L,0x6603D028L,(-1L),0L},{0xF0AB9244L,0xF158C574L,0x4E305637L,0xF158C574L},{0xCBD23FBBL,0L,(-1L),0x6603D028L},{0xCBD23FBBL,0xF4A47421L,0x4E305637L,0x3113216CL},{0xF0AB9244L,0x4AA8CD7FL,(-1L),0xF8C0CF07L},{0xF0AB9244L,(-10L),0x4E305637L,(-10L)}},{{0xCBD23FBBL,0xF8C0CF07L,(-1L),0x4AA8CD7FL},{0xCBD23FBBL,0x3113216CL,0x4E305637L,0xF4A47421L},{0xF0AB9244L,0x6603D028L,(-1L),0L},{0xF0AB9244L,0xF158C574L,0x4E305637L,0xF158C574L},{0xCBD23FBBL,0L,(-1L),0x6603D028L},{0xCBD23FBBL,0xF4A47421L,0x4E305637L,0x3113216CL}},{{0xF0AB9244L,0x4AA8CD7FL,(-1L),0xF8C0CF07L},{0xF0AB9244L,(-10L),0x4E305637L,(-10L)},{0xCBD23FBBL,0xF8C0CF07L,(-1L),0x4AA8CD7FL},{0xCBD23FBBL,0x3113216CL,0x4E305637L,0xF4A47421L},{0xF0AB9244L,0x6603D028L,(-1L),0L},{0xF0AB9244L,0xF158C574L,0x4E305637L,0xF158C574L}},{{0xCBD23FBBL,0L,(-1L),0x6603D028L},{0xCBD23FBBL,0xF4A47421L,0x4E305637L,0x3113216CL},{0xF0AB9244L,0x4AA8CD7FL,(-1L),0xF8C0CF07L},{0xF0AB9244L,(-10L),0x4E305637L,(-10L)},{0xCBD23FBBL,0xF8C0CF07L,(-1L),0x4AA8CD7FL},{0xCBD23FBBL,0x3113216CL,0x4E305637L,0xF4A47421L}}};
    const uint64_t **l_1763 = (void*)0;
    int64_t l_1811 = 1L;
    uint64_t l_1862[5][7][7] = {{{0x7CD3DDAA2EEC87F0LL,0x2266B002BA9BDFD9LL,0UL,0x3C7F23434C6714E1LL,0xFD1AB7A170C606D0LL,0UL,0xB29F8CCB81F4C472LL},{0x43DF06C8D8C068DFLL,0x4D47CDBE84DD2687LL,0x2BB715D20673ACD5LL,0UL,0x8F3E213E67FDD452LL,18446744073709551615UL,5UL},{18446744073709551615UL,0x0D1A45B078A6CA59LL,0xFB304CC65716A238LL,0UL,0xBC81DF5E9BFAC17FLL,0UL,0UL},{18446744073709551615UL,0x7CD3DDAA2EEC87F0LL,0UL,0x4D47CDBE84DD2687LL,0xFB304CC65716A238LL,18446744073709551610UL,8UL},{0x43DF06C8D8C068DFLL,0xD06B7EEE16AC156BLL,0x7CD3DDAA2EEC87F0LL,0UL,0x7CD3DDAA2EEC87F0LL,0xD06B7EEE16AC156BLL,0x43DF06C8D8C068DFLL},{0x7CD3DDAA2EEC87F0LL,0xBC1420B4C6C8A3B0LL,1UL,18446744073709551615UL,0x2266B002BA9BDFD9LL,18446744073709551615UL,0UL},{5UL,0UL,0x43DF06C8D8C068DFLL,2UL,1UL,0x7CD3DDAA2EEC87F0LL,0x98F8E3287819AC1ALL}},{{18446744073709551610UL,5UL,1UL,18446744073709551615UL,0x1A21ED4568B584C9LL,0x98F8E3287819AC1ALL,1UL},{5UL,0x0C49500A664A08E7LL,0x7CD3DDAA2EEC87F0LL,7UL,0xD06B7EEE16AC156BLL,0UL,0UL},{0UL,0x2BB715D20673ACD5LL,0UL,0x9B36E8301211309ELL,0UL,1UL,0xCA432D00F3AF6613LL},{1UL,0UL,0xFB304CC65716A238LL,0x49081DD0CD556E63LL,0UL,0UL,0x0D1A45B078A6CA59LL},{7UL,1UL,0x2BB715D20673ACD5LL,1UL,0xD06B7EEE16AC156BLL,0xBC1420B4C6C8A3B0LL,0xD06B7EEE16AC156BLL},{0xB29F8CCB81F4C472LL,0UL,0UL,0xB29F8CCB81F4C472LL,0x1A21ED4568B584C9LL,0xBC81DF5E9BFAC17FLL,1UL},{18446744073709551615UL,1UL,2UL,18446744073709551610UL,1UL,0UL,0x2BB715D20673ACD5LL}},{{0x3C7F23434C6714E1LL,18446744073709551610UL,0xFD1AB7A170C606D0LL,0xBC1420B4C6C8A3B0LL,0x2266B002BA9BDFD9LL,0xE636344DB0266BD2LL,1UL},{1UL,0x333F47C42768BE20LL,5UL,0x0C49500A664A08E7LL,0x7CD3DDAA2EEC87F0LL,7UL,0xD06B7EEE16AC156BLL},{0x98F8E3287819AC1ALL,1UL,0x2266B002BA9BDFD9LL,0UL,0xFB304CC65716A238LL,0x3559F47D416DCD82LL,0x0D1A45B078A6CA59LL},{2UL,0UL,18446744073709551611UL,0x37D6515DBAF3BB0DLL,0xD0177779476F1271LL,2UL,0x2BB715D20673ACD5LL},{5UL,0x0C49500A664A08E7LL,0x49081DD0CD556E63LL,0x43DF06C8D8C068DFLL,0xBC81DF5E9BFAC17FLL,0UL,0x0D1A45B078A6CA59LL},{18446744073709551615UL,0x9B36E8301211309ELL,0x2266B002BA9BDFD9LL,1UL,1UL,0x2266B002BA9BDFD9LL,0x9B36E8301211309ELL},{0x69475A54BF5DE1F2LL,2UL,0x98F8E3287819AC1ALL,0x9B36E8301211309ELL,18446744073709551611UL,0xE636344DB0266BD2LL,0x48DC6E823C2A0C1BLL}},{{0UL,18446744073709551615UL,0UL,18446744073709551615UL,0xE636344DB0266BD2LL,0xD06B7EEE16AC156BLL,2UL},{18446744073709551615UL,5UL,5UL,0x9B36E8301211309ELL,1UL,0x69475A54BF5DE1F2LL,0xE636344DB0266BD2LL},{0UL,2UL,1UL,1UL,0x0D1A45B078A6CA59LL,8UL,0xBC1420B4C6C8A3B0LL},{2UL,0UL,0x0C49500A664A08E7LL,0x43DF06C8D8C068DFLL,0UL,7UL,0x3C7F23434C6714E1LL},{0xFD1AB7A170C606D0LL,0x8F3E213E67FDD452LL,0UL,0x37D6515DBAF3BB0DLL,1UL,7UL,0x2266B002BA9BDFD9LL},{0x7CD3DDAA2EEC87F0LL,0UL,0x4D47CDBE84DD2687LL,0xFB304CC65716A238LL,18446744073709551610UL,8UL,8UL},{0x3559F47D416DCD82LL,0UL,1UL,0UL,0x3559F47D416DCD82LL,0x69475A54BF5DE1F2LL,0x8F3E213E67FDD452LL}},{{2UL,0x2266B002BA9BDFD9LL,18446744073709551615UL,0UL,0xB29F8CCB81F4C472LL,0xD06B7EEE16AC156BLL,0x49081DD0CD556E63LL},{1UL,0xFB304CC65716A238LL,0UL,18446744073709551615UL,2UL,0xE636344DB0266BD2LL,0x43DF06C8D8C068DFLL},{2UL,0UL,0xBC81DF5E9BFAC17FLL,8UL,0x37D6515DBAF3BB0DLL,0x2266B002BA9BDFD9LL,0x1A21ED4568B584C9LL},{0x3559F47D416DCD82LL,0x4D47CDBE84DD2687LL,1UL,7UL,2UL,0UL,18446744073709551611UL},{0x7CD3DDAA2EEC87F0LL,0xCA432D00F3AF6613LL,0x3C7F23434C6714E1LL,0UL,0UL,2UL,0x3559F47D416DCD82LL},{0xFD1AB7A170C606D0LL,18446744073709551610UL,0x3C7F23434C6714E1LL,0xD06B7EEE16AC156BLL,0x1A21ED4568B584C9LL,0UL,7UL},{2UL,0UL,1UL,1UL,5UL,1UL,1UL}}};
    const uint32_t l_1918 = 0x54713064L;
    uint8_t l_1919 = 0x6DL;
    uint32_t l_1949 = 0x8D90D9BBL;
    uint32_t ****l_2049[4][8] = {{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246}};
    uint64_t ***l_2149 = (void*)0;
    uint16_t l_2152 = 0x903CL;
    uint8_t **l_2163[6][9][1] = {{{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}}};
    uint8_t ***l_2162 = &l_2163[0][0][0];
    int16_t ** const *l_2178 = (void*)0;
    uint8_t *l_2179 = &l_1745;
    int32_t *l_2180 = &l_1407[1][0][4];
    int32_t *l_2181 = &g_379[5];
    int32_t *l_2182 = &g_379[5];
    int32_t *l_2183[6][5] = {{&l_1407[1][0][4],&g_379[5],&l_1407[1][0][4],&g_1836,&g_4[0]},{&l_1396,&g_379[2],&g_4[0],&g_1836,&l_1407[1][0][4]},{&g_4[0],&g_4[0],&g_379[2],&g_379[2],&g_4[0]},{&g_4[0],&g_44,&g_4[0],&l_1407[1][0][4],&g_1836},{&g_379[5],&g_44,&l_1407[1][0][4],&g_1586[5],(void*)0},{&g_379[3],&g_4[0],&g_4[0],&g_379[3],&g_1586[5]}};
    int64_t l_2184 = 0x14185346C4371643LL;
    uint64_t l_2185 = 18446744073709551611UL;
    int i, j, k;
    /*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
/*bef_stmt:193815*/
if ((/*TAG346:STA*/((int64_t)(realsmith_vnYZI((unsigned char)(l_1387)+(-20), (int)(**g_536)+(89))+(unsigned char)(l_1387)+(unsigned char)(**g_536)-(75))+l_1387)/*TAG346:END:l_1387*/ & (safe_sub_func_int16_t_s_s(((((4294967287UL < (Tag347(/*uint32_t:0:0:193815:e*/*g_248))) | Tag348(/*uint64_t:193941:193941:193815:e*/p_55)) > (/*TAG349:STA*/((int64_t)(realsmith_NS2ss((int)(l_1387)+(-1932307703))+(int)(l_1387)+(int)(p_55)-(1932307774))+l_1387)/*TAG349:END:l_1387*/ , (l_1390 = /*TAG350:STA*/((uint64_t)(realsmith_proxy_yi2G2((int)(l_1387)+(-1932307674), (int)(p_55)+(98))+(int)(p_55)+(int)(l_1387)-(1932307775))+p_55)/*TAG350:END:p_55*/))) >= (l_1407[1][0][4] = ((safe_rshift_func_int8_t_s_s(((*l_1395) ^= /*TAG351:STA*/((int32_t)(realsmith_dHzH8((int)(g_379[5])+(88))+(int)(g_379[5])-(1))+g_379[5])/*TAG351:END:g_379[5]*/), 2)) || ((l_1396 = 18446744073709551611UL) <= ((!((((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((l_1406[1][3][0] ^= ((Tag352(/*uint32_t:0:0:193815:e*/****g_578)) >= (Tag353(/*uint32_t:0:0:193815:e*/*g_248)))) != (/*TAG354:STA*/((int32_t)(realsmith_ZbiXQ((long)(p_55)+(19), (int)(l_1387)+(-1932307704), (long)(g_379[5])+(56))+(long)(*p_56)+(long)(p_55)+(long)(g_379[5])-(-3))+*p_56)/*TAG354:END:*p_56*/)), /*TAG355:STA*/((uint64_t)(realsmith_XGPxU((unsigned long)(p_55)+(62), (unsigned long)(p_55)+(24), (unsigned char)(g_379[5])+(98))+(int)(p_55)+(int)(*p_56)+(int)(g_379[5])+(int)(l_1387)-(1932307768))+p_55)/*TAG355:END:p_55*/)), 0x5EL)), 0xBAL)), (-1L))) > 7L) <= Tag356(/*uint64_t:193941:193941:193815:e*/p_55)) > Tag357(/*uint64_t:193941:193941:193815:e*/p_55))) != (Tag358(/*uint32_t:0:0:193815:e*/***g_246))))))), /*TAG359:STA*/((uint64_t)(realsmith_proxy_zyN5i((int)(*p_56)+(-52))+(int)(p_55)+(int)(*p_56)+(int)(g_379[5])+(int)(l_1387)-(1932307707))+p_55)/*TAG359:END:p_55*/))))
    { /* block id: 557 */
        int32_t l_1447 = (-1L);
        uint16_t *l_1452 = (void*)0;
        uint16_t *l_1453 = &g_333;
        int32_t *l_1455 = &g_277;
        int8_t l_1458 = (-1L);
        int32_t ** const *l_1461 = (void*)0;
        int32_t ** const **l_1462 = &l_1461;
        uint8_t *l_1465 = &g_336;
        uint64_t *l_1476[5];
        int32_t l_1543 = 9L;
        int32_t l_1545[2][4];
        uint64_t **l_1578 = (void*)0;
        uint64_t ***l_1577 = &l_1578;
        int32_t *l_1583[6][5];
        int32_t l_1599 = (-1L);
        int32_t l_1613[10][4][6] = {{{0x7E3A9BFFL,(-10L),(-1L),(-1L),0L,(-1L)},{(-1L),0L,(-1L),(-1L),0xA597FDCAL,0x4EA8461FL},{(-1L),9L,(-1L),(-1L),0x4E5600A5L,(-1L)},{0x7E3A9BFFL,0L,(-1L),1L,5L,0x4EA8461FL}},{{0x4EA8461FL,(-10L),(-1L),(-1L),5L,(-1L)},{0x30A9BA4BL,0L,(-1L),(-1L),0x4E5600A5L,0x4EA8461FL},{0x30A9BA4BL,9L,1L,(-1L),0xA597FDCAL,(-1L)},{0x4EA8461FL,0L,1L,1L,0L,0x4EA8461FL}},{{0x7E3A9BFFL,(-10L),(-1L),(-1L),0L,(-1L)},{(-1L),0L,(-1L),(-1L),0xA597FDCAL,0x4EA8461FL},{(-1L),9L,(-1L),(-1L),0x4E5600A5L,(-1L)},{0x7E3A9BFFL,0L,(-1L),1L,5L,0x4EA8461FL}},{{0x4EA8461FL,(-10L),(-1L),(-1L),5L,(-1L)},{0x30A9BA4BL,0L,(-1L),(-1L),0x4E5600A5L,0x4EA8461FL},{0x30A9BA4BL,9L,1L,(-1L),0xA597FDCAL,(-1L)},{0x4EA8461FL,0L,1L,1L,0L,0x4EA8461FL}},{{0x7E3A9BFFL,(-10L),(-1L),(-1L),0L,(-1L)},{(-1L),0L,(-1L),(-1L),0xA597FDCAL,0x4EA8461FL},{(-1L),9L,(-1L),(-1L),0x4E5600A5L,(-1L)},{0x7E3A9BFFL,0L,(-1L),1L,5L,0x4EA8461FL}},{{0x4EA8461FL,(-10L),(-1L),(-1L),5L,(-1L)},{0x30A9BA4BL,0L,(-1L),(-1L),0x4E5600A5L,0x4EA8461FL},{0x30A9BA4BL,9L,1L,(-1L),0xA597FDCAL,(-1L)},{0x4EA8461FL,0L,1L,1L,0L,0L}},{{(-1L),1L,2L,0x3CF3C139L,0x30A9BA4BL,1L},{0x3CF3C139L,0x30A9BA4BL,1L,0xEBD3E2D5L,0x4EA8461FL,0L},{0x3CF3C139L,(-1L),0xEBD3E2D5L,0x3CF3C139L,0x7E3A9BFFL,2L},{(-1L),0x30A9BA4BL,0xEBD3E2D5L,0x4569756EL,(-1L),0L}},{{0L,1L,1L,0x3CF3C139L,(-1L),1L},{0xCF08D866L,0x30A9BA4BL,2L,0xEBD3E2D5L,0x7E3A9BFFL,0L},{0xCF08D866L,(-1L),0x4569756EL,0x3CF3C139L,0x4EA8461FL,2L},{0L,0x30A9BA4BL,0x4569756EL,0x4569756EL,0x30A9BA4BL,0L}},{{(-1L),1L,2L,0x3CF3C139L,0x30A9BA4BL,1L},{0x3CF3C139L,0x30A9BA4BL,1L,0xEBD3E2D5L,0x4EA8461FL,0L},{0x3CF3C139L,(-1L),0xEBD3E2D5L,0x3CF3C139L,0x7E3A9BFFL,2L},{(-1L),0x30A9BA4BL,0xEBD3E2D5L,0x4569756EL,(-1L),0L}},{{0L,1L,1L,0x3CF3C139L,(-1L),1L},{0xCF08D866L,0x30A9BA4BL,2L,0xEBD3E2D5L,0x7E3A9BFFL,0L},{0xCF08D866L,(-1L),0x4569756EL,0x3CF3C139L,0x4EA8461FL,2L},{0L,0x30A9BA4BL,0x4569756EL,0x4569756EL,0x30A9BA4BL,0L}}};
        int64_t l_1668 = 9L;
        int64_t l_1716 = (-8L);
        int8_t ***l_1779 = &g_1776[0];
        uint16_t l_1788 = 0x83F5L;
        int32_t l_1843 = 0x0D601062L;
        int32_t ***l_1922 = &g_969;
        uint16_t l_1950[1];
        int16_t ***l_1969[10][6] = {{(void*)0,(void*)0,&g_640,&g_640,&g_640,(void*)0},{&g_640,(void*)0,&g_640,&g_640,&g_640,&g_640},{&g_640,&g_640,&g_640,&g_640,(void*)0,&g_640},{(void*)0,&g_640,&g_640,&g_640,(void*)0,(void*)0},{&g_640,&g_640,&g_640,&g_640,&g_640,&g_640},{(void*)0,(void*)0,&g_640,&g_640,&g_640,(void*)0},{&g_640,(void*)0,&g_640,&g_640,&g_640,&g_640},{&g_640,&g_640,&g_640,&g_640,(void*)0,&g_640},{(void*)0,&g_640,&g_640,&g_640,(void*)0,(void*)0},{&g_640,&g_640,&g_640,&g_640,&g_640,&g_640}};
        uint8_t l_2073 = 0xA2L;
        int32_t l_2101 = 0xDF0B3138L;
        uint8_t l_2112 = 0UL;
        int64_t *l_2125 = &g_2107;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1476[i] = &g_1335;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_1545[i][j] = (-4L);
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++)
                l_1583[i][j] = &g_177[8][0][1];
        }
        for (i = 0; i < 1; i++)
            l_1950[i] = 0xEF84L;
        /*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
/*bef_stmt:184349*/
(*l_1455) = (~(safe_lshift_func_uint8_t_u_u(((~(((Tag360(/*uint16_t:0:0:184349:e*/**g_536)) > (safe_mod_func_uint64_t_u_u(((*g_88) = ((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((Tag361(/*uint32_t:0:0:184349:e*/g_450) != (safe_lshift_func_int8_t_s_s(((+Tag362(/*uint64_t:193941:193941:184349:e*/p_55)) == ((((safe_div_func_uint8_t_u_u((l_1406[2][1][2] = (Tag363(/*uint64_t:193941:193941:184349:e*/p_55) == (0L == ((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(Tag364(/*uint64_t:193941:193941:184349:e*/p_55), ((safe_sub_func_int64_t_s_s(Tag365(/*int32_t:184353:193941:184349:e*/l_1447), ((safe_sub_func_int8_t_s_s(((safe_add_func_int64_t_s_s((((*l_1453) = (((3L | Tag366(/*uint64_t:193941:193941:184349:e*/p_55)) && Tag367(/*uint64_t:193941:193941:184349:e*/p_55)) & 4294967295UL)) <= 0xAEF3L), Tag368(/*int32_t:0:0:184349:e*/g_277))) && 0xE7D6F68BL), 1L)) != (Tag369(/*uint32_t:0:0:184349:e*/*****g_577))))) < Tag370(/*uint64_t:193941:193941:184349:e*/p_55)))), Tag371(/*uint64_t:193941:193941:184349:e*/p_55))) <= (Tag372(/*uint16_t:0:0:184349:e*/**g_536))) != (Tag373(/*int32_t:193941:193941:184349:e*/*p_56))), Tag374(/*uint64_t:193941:193941:184349:e*/p_55))) > 2UL), (Tag375(/*uint64_t:0:0:184349:e*/*g_88)))), 15)), Tag376(/*int32_t:184353:193941:184349:e*/l_1447))), Tag377(/*int16_t:193941:193941:184349:e*/l_1454))) , (Tag378(/*int32_t:193941:193941:184349:e*/*p_56)))))), Tag379(/*int32_t:184353:193941:184349:e*/l_1447))) >= (Tag380(/*uint32_t:0:0:184349:e*/*****g_577))) ^ Tag381(/*int32_t:193941:193941:184349:e*/l_1396)) , Tag382(/*uint32_t:0:0:184349:e*/g_103[5][1]))), 0))) , (Tag383(/*uint64_t:0:0:184349:e*/*g_88))), Tag384(/*uint64_t:193941:193941:184349:e*/p_55))), Tag385(/*int16_t:193941:193941:184349:e*/l_1454))), Tag386(/*uint64_t:193941:193941:184349:e*/p_55))) , Tag387(/*int16_t:193941:193941:184349:e*/l_1454)) < Tag388(/*uint64_t:0:0:184349:e*/g_167)), 0x46FBL)) || Tag389(/*int32_t:193941:193941:184349:e*/l_1407[1][0][4])), 7)) , (-1L)) == Tag390(/*int32_t:193941:193941:184349:e*/l_1407[1][0][4])), 0xD0E194A4L)) < Tag391(/*uint64_t:0:0:184349:e*/g_167))), Tag392(/*int32_t:184353:193941:184349:e*/l_1447)))) | Tag393(/*uint64_t:193941:193941:184349:e*/p_55))) != 0x7A3929DFL), 1)));
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
/*aft_stmt:184349*/
    }
    else
    { /* block id: 829 */
        const int16_t l_2143 = 8L;
        uint32_t *l_2151 = &g_450;
        uint8_t *l_2153 = &g_364;
        int32_t *l_2154[2][5][10] = {{{(void*)0,&l_1396,&g_4[0],&l_1407[0][0][0],&g_4[0],&l_1396,(void*)0,&g_277,&l_1407[1][0][4],(void*)0},{&g_4[0],&l_1390,&l_1407[1][0][4],(void*)0,&g_277,&g_44,&g_379[5],&g_379[5],&g_44,&g_277},{&l_1407[1][0][4],&l_1390,&l_1390,&l_1407[1][0][4],&g_44,&g_4[0],(void*)0,(void*)0,&l_1390,&l_1407[1][0][4]},{&l_1407[1][0][4],&l_1396,&l_1390,&l_1407[0][0][0],&l_1390,&l_1407[1][0][4],&l_1390,&l_1407[0][0][0],(void*)0,&g_44},{(void*)0,&l_1407[1][0][4],&l_1407[1][0][4],&g_277,&l_1390,&g_1586[3],(void*)0,(void*)0,&g_277,&g_277}},{{&l_1407[1][0][4],(void*)0,&g_1586[3],&l_1407[1][0][4],&l_1407[1][0][4],&g_1586[3],(void*)0,&l_1407[1][0][4],&g_277,(void*)0},{(void*)0,&l_1407[1][0][4],&l_1407[0][0][0],&l_1407[1][0][4],&g_4[0],&l_1407[1][0][4],&g_379[5],(void*)0,&g_379[5],&l_1407[1][0][4]},{&l_1396,&g_4[0],&l_1407[0][0][0],&g_4[0],&l_1396,(void*)0,&g_277,&l_1407[1][0][4],(void*)0,&g_1586[3]},{&g_277,&l_1390,&g_1586[3],(void*)0,(void*)0,&g_277,&g_277,(void*)0,(void*)0,&g_1586[3]},{(void*)0,(void*)0,&l_1407[1][0][4],&g_1586[3],&l_1396,&g_44,(void*)0,&l_1407[0][0][0],&l_1390,&l_1407[1][0][4]}}};
        int8_t * const *l_2157 = &l_1394;
        int8_t * const **l_2156 = &l_2157;
        int8_t * const ***l_2155[8][1];
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 1; j++)
                l_2155[i][j] = &l_2156;
        }
        /*bef_stmt:193232*/
if ((Tag394(/*int32_t:193941:193941:193232:e*/*p_56)))
        { /* block id: 830 */
            int8_t l_2128[5][9] = {{0L,(-1L),0x1DL,(-1L),(-1L),0x83L,1L,0L,(-6L)},{0L,0L,(-1L),0L,(-6L),(-6L),(-6L),0L,(-1L)},{(-6L),(-6L),1L,(-1L),0x10L,(-6L),1L,(-6L),0x90L},{0L,0L,0x90L,(-1L),(-6L),0x83L,0L,0L,0x83L},{(-1L),0L,1L,0L,(-1L),0x1DL,(-1L),(-1L),0x83L}};
            int32_t l_2130[5][9][5] = {{{0x1F346CA4L,0xBE55AFBFL,0x1F346CA4L,(-2L),(-5L)},{0x0DC1BB05L,(-6L),(-1L),(-2L),0x70982445L},{0x6A24CAFCL,1L,0xFDAB8C43L,0x3EF69459L,0x661D4FDBL},{4L,0x49112253L,(-1L),0x70982445L,(-6L)},{0xB52C9742L,0x85CB02ADL,0x1F346CA4L,0x6A24CAFCL,(-1L)},{(-1L),1L,(-6L),(-1L),(-7L)},{0x007AE7CCL,0x11E48FD5L,0x11E48FD5L,0x007AE7CCL,1L},{(-5L),0x741C6A55L,0x0DC1BB05L,0x3E546448L,0x8576C500L},{0x85CB02ADL,0L,0x007AE7CCL,0x661D4FDBL,0x6A24CAFCL}},{{0xAAE6077CL,3L,3L,0x3E546448L,0x741C6A55L},{0xBE55AFBFL,(-1L),(-1L),0x007AE7CCL,0x375B3B45L},{0x20DA630CL,0xAAE6077CL,(-2L),(-1L),(-6L)},{0x11E48FD5L,0x6A24CAFCL,0xB52C9742L,0x6A24CAFCL,0x11E48FD5L},{0x8576C500L,(-2L),1L,0x70982445L,(-8L)},{0x1D1EDF14L,9L,0xB76EAE51L,0x3EF69459L,1L},{0x3E546448L,(-1L),(-6L),(-2L),0L},{(-1L),0x6A24CAFCL,(-1L),1L,2L},{0L,0x49112253L,(-2L),(-7L),(-1L)}},{{0x6A24CAFCL,0xB057707AL,(-1L),(-1L),0xB057707AL},{4L,0xB2925723L,(-6L),(-6L),0xAAE6077CL},{0xB18684DDL,0xB52C9742L,0xBE55AFBFL,0x661D4FDBL,0x375B3B45L},{0x79C688E4L,0x0DC1BB05L,(-7L),0x70982445L,(-1L)},{0xB18684DDL,1L,0xB057707AL,(-5L),0xBE55AFBFL},{4L,(-1L),3L,0x27D663F8L,4L},{0x6A24CAFCL,0L,0x28E18A6FL,0xB76EAE51L,0x28E18A6FL},{0L,0L,(-8L),0xB2925723L,0x27D663F8L},{(-1L),(-1L),0L,0xF4C46A56L,1L}},{{(-8L),0x27D663F8L,0xC8541C77L,(-1L),0x741C6A55L},{0xF4C46A56L,(-1L),0x007AE7CCL,0xB18684DDL,(-1L)},{(-1L),0L,0x49112253L,(-2L),(-7L)},{2L,0L,0xB76EAE51L,0xFDAB8C43L,0xFDAB8C43L},{(-3L),(-1L),(-3L),(-6L),0x3E546448L},{0x007AE7CCL,1L,1L,0x28E18A6FL,0x3EF69459L},{1L,0x0DC1BB05L,4L,0xAAE6077CL,4L},{(-5L),0xB52C9742L,1L,0x3EF69459L,0xB76EAE51L},{3L,0xB2925723L,(-3L),1L,0x8576C500L}},{{0x11E48FD5L,0xB057707AL,0xB76EAE51L,(-1L),0x85CB02ADL},{0xC8541C77L,0x49112253L,0x49112253L,0xC8541C77L,0x0DC1BB05L},{0xD49C93B0L,0x6A24CAFCL,0x007AE7CCL,0x259B65E6L,(-3L)},{0xB2925723L,(-6L),0xC8541C77L,4L,1L},{0x375B3B45L,(-2L),0L,0x259B65E6L,0x6A24CAFCL},{(-1L),0x8576C500L,(-8L),0xC8541C77L,0x79C688E4L},{0x1D1EDF14L,0x375B3B45L,0x28E18A6FL,(-1L),0x661D4FDBL},{0x49112253L,1L,3L,1L,0x49112253L},{(-3L),0x28E18A6FL,0xB057707AL,0x3EF69459L,0xFE11CA26L}}};
            uint64_t **l_2147 = &l_1742;
            uint64_t ***l_2146 = &l_2147;
            uint64_t ***l_2148 = (void*)0;
            uint8_t *l_2150 = &l_1745;
            int8_t * const ****l_2158 = &l_2155[6][0];
            int i, j, k;
            /*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
/*bef_stmt:192914*/
l_2154[0][1][3] = func_65((Tag395(/*int16_t:0:0:192914:e*/*g_634)), ((safe_lshift_func_int16_t_s_s(((((l_2128[3][2] &= Tag396(/*uint64_t:193941:193941:192914:e*/p_55)) | ((****g_578) = (!4294967286UL))) | ((/*TAG397:STA*/((int32_t)(realsmith_proxy_sa4nr((char)(l_2130[3][8][3])+(55))+(int)(l_2130[3][8][3])-(12))+l_2130[3][8][3])/*TAG397:END:l_2130[3][8][3]*/ | ((~((safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((l_2151 = (**l_1485)) != (void*)0), 1L)), /*TAG398:STA*/((uint64_t)(realsmith_0A7hf((int)(p_55)+(44))+(int)(p_55)-(-1))+p_55)/*TAG398:END:p_55*/)) && (Tag399(/*int32_t:193941:193941:192914:e*/*p_56))) < Tag400(/*uint8_t:193941:193941:192914:e*/l_1919)) ^ (/*TAG401:STA*/((uint16_t)(realsmith_proxy_YK7iN((char)(*g_537)+(-19), (char)(*g_537)+(-15), (char)(*g_537)+(93))+(int)(*g_537)-(3))+*g_537)/*TAG401:END:*g_537*/)), Tag402(/*uint64_t:193941:193941:192914:e*/p_55))) ^ /*TAG403:STA*/((int32_t)(realsmith_u0cUa((int)(g_4[0])+(106))+(int)(g_4[0])-(90))+g_4[0])/*TAG403:END:g_4[0]*/), /*TAG404:STA*/((uint64_t)(realsmith_Ktle9((char)(p_55)+(42))+(int)(p_55)-(0))+p_55)/*TAG404:END:p_55*/)) , Tag405(/*int32_t:192976:193802:192914:e*/l_2130[1][5][1])), 8)) ^ (Tag406(/*int32_t:193941:193941:192914:e*/*p_56))))) != Tag407(/*uint64_t:193941:193941:192914:e*/p_55))) >= (Tag408(/*int32_t:193941:193941:192914:e*/*p_56)))) , (Tag409(/*int32_t:193941:193941:192914:e*/*p_56)))) < /*TAG410:STA*/((uint16_t)(realsmith_ZlNZV((unsigned int)(l_2152)+(-36906), (unsigned int)(l_2152)+(-36922))+(int)(l_2152)-(36917))+l_2152)/*TAG410:END:l_2152*/), /*TAG411:STA*/((int16_t)(realsmith_proxy_nmVyv((int)(l_2143)+(18), (int)(l_2143)+(4), (int)(l_2143)+(-64), (int)(l_2143)+(1), (int)(l_2143)+(15), (int)(l_2143)+(25))+(int)(l_2143)-(8))+l_2143)/*TAG411:END:l_2143*/)) , Tag412(/*int32_t:192976:193802:192914:e*/l_2130[4][7][2])), l_2153);
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
/*aft_stmt:192914*/
            (*l_2158) = l_2155[1][0];
        }
        else
        { /* block id: 837 */
            uint16_t l_2161 = 0x58FAL;
            int32_t l_2164 = 9L;
            (**l_1463) = l_2154[0][4][3];
            /*bef_stmt:193165*/
l_2161 = (safe_sub_func_uint64_t_u_u(0xA1F504F9658C1E56LL, Tag413(/*uint32_t:0:0:193165:e*/g_1488[1][3])));
/*aft_stmt:193165*/
            l_2164 = (7L & ((void*)0 != l_2162));
        }
/*aft_stmt:193232*/
        /*bef_stmt:193798*/
/*bef_stmt:193798*/
/*bef_stmt:193798*/
/*bef_stmt:193798*/
/*bef_stmt:193798*/
/*bef_stmt:193798*/
/*bef_stmt:193798*/
/*bef_stmt:193798*/
/*bef_stmt:193798*/
/*bef_stmt:193798*/
(**l_1463) = (((g_75 = ((safe_rshift_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((((l_1406[0][7][1] = (((safe_mul_func_int16_t_s_s(((*g_634) = (-1L)), ((/*TAG414:STA*/((int32_t)(realsmith_1DSdy()+(int)(*p_56)+(int)(g_1488[1][3])+(int)(l_1919)+(int)(g_4[0])+(int)(p_55)-(89))+*p_56)/*TAG414:END:*p_56*/) | ((safe_rshift_func_int16_t_s_s(Tag415(/*uint64_t:193941:193941:193798:e*/p_55), (+0x4E7EL))) && /*TAG416:STA*/((uint64_t)(realsmith_1OBSA((int)(p_55)+(66))+(int)(p_55)-(0))+p_55)/*TAG416:END:p_55*/)))) || 255UL) && (safe_mul_func_uint16_t_u_u(((((void*)0 == l_2178) , (Tag417(/*int16_t:0:0:193798:e*/*g_634))) , Tag418(/*uint64_t:193941:193941:193798:e*/p_55)), (Tag419(/*int16_t:0:0:193798:e*/*g_634)))))) || (-9L)) , 0xCC2CE84B7E69E397LL), 1UL)) ^ /*TAG420:STA*/((uint64_t)(realsmith_2Qodz((long)(l_2152)+(-36846), (long)(g_1488[1][3])+(-4294967233), (long)(p_55)+(69))+(int)(p_55)+(int)(g_4[0])+(int)(g_1488[1][3])+(int)(*p_56)+(int)(l_2152)-(36902))+p_55)/*TAG420:END:p_55*/), /*TAG421:STA*/((uint64_t)(realsmith_proxy_NrVvs((int)(l_2152)+(-36904), (int)(p_55)+(-76), (int)(g_4[0])+(87), (int)(*g_537)+(50))+(int)(p_55)+(int)(g_1488[1][3])+(int)(*g_537)+(int)(g_4[0])+(int)(l_2152)-(36911))+p_55)/*TAG421:END:p_55*/)) <= Tag422(/*uint64_t:193941:193941:193798:e*/p_55)) != Tag423(/*uint64_t:193941:193941:193798:e*/p_55)), 5)) , l_2153)) == l_2179) , (void*)0);
/*aft_stmt:193798*/
/*aft_stmt:193798*/
/*aft_stmt:193798*/
/*aft_stmt:193798*/
/*aft_stmt:193798*/
/*aft_stmt:193798*/
/*aft_stmt:193798*/
/*aft_stmt:193798*/
/*aft_stmt:193798*/
/*aft_stmt:193798*/
    }
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
/*aft_stmt:193815*/
    (**l_1463) = &l_1407[1][0][1];
    /*bef_stmt:193906*/
l_1390 &= (Tag424(/*int32_t:0:0:193906:e*/*g_243));
/*aft_stmt:193906*/
    --l_2185;
    /*bef_stmt:193939*/
return (/*TAG425:STA*/((int32_t)(realsmith_proxy_4Gi9F((int)(*l_2182)+(4))+(int)(*l_2182)-(2))+*l_2182)/*TAG425:END:*l_2182*/);
/*aft_stmt:193939*/
}


/* ------------------------------------------ */
/* 
 * reads : g_634 g_326 g_177 g_248 g_103 g_88 g_167 g_89 g_364 g_537 g_329 g_536 g_166 g_379 g_246 g_247 g_312 g_1080 g_277 g_327 g_969 g_1100 g_577 g_578 g_257 g_85 g_450 g_128 g_527 g_184 g_608 g_76 g_336
 * writes: g_336 g_75 g_326 g_177 g_167 g_89 g_364 g_329 g_327 g_379 g_103 g_277 g_645 g_243 g_1100 g_536 g_88 g_450 g_128 g_166 g_713 g_577 g_527 g_76
 */
static uint16_t  func_57(uint8_t * p_58, int32_t  p_59)
{ /* block id: 385 */
    const uint8_t *l_1010 = &g_76;
    int32_t l_1015 = 0x07B2BAC5L;
    int32_t l_1057[4] = {0xDBEC7D8FL,0xDBEC7D8FL,0xDBEC7D8FL,0xDBEC7D8FL};
    uint32_t *l_1179 = &g_1100;
    uint32_t l_1180 = 0x57FB6B88L;
    uint64_t *l_1185 = &g_167;
    uint64_t **l_1186 = (void*)0;
    uint64_t **l_1187 = (void*)0;
    uint64_t **l_1188 = &g_88;
    uint64_t *l_1189 = (void*)0;
    uint32_t *l_1211 = &g_450;
    uint8_t *l_1232[3][2][9] = {{{&g_364,&g_76,(void*)0,&g_364,&g_364,&g_364,&g_76,&g_76,&g_76},{&g_364,&g_76,&g_364,&g_364,&g_76,&g_364,&g_336,&g_364,&g_76}},{{&g_336,&g_76,&g_76,&g_364,&g_76,(void*)0,&g_364,&g_336,&g_336},{&g_336,&g_76,(void*)0,&g_76,(void*)0,&g_76,&g_336,&g_364,&g_76}},{{&g_364,&g_336,(void*)0,&g_336,&g_76,&g_336,&g_76,(void*)0,&g_76},{&g_336,&g_76,&g_364,(void*)0,(void*)0,&g_364,&g_76,&g_336,&g_76}}};
    uint32_t ***** const l_1305 = &g_578;
    uint32_t *****l_1323 = &g_578;
    uint64_t * const l_1334 = &g_1335;
    uint64_t * const *l_1333 = &l_1334;
    uint64_t * const **l_1332 = &l_1333;
    uint64_t ***l_1344[10][2][3] = {{{&l_1186,&l_1186,&l_1186},{&l_1186,&l_1186,&l_1186}},{{&l_1188,&l_1188,&l_1186},{&l_1186,(void*)0,&l_1186}},{{&l_1186,(void*)0,&l_1186},{(void*)0,&l_1186,&l_1186}},{{(void*)0,(void*)0,&l_1186},{(void*)0,(void*)0,&l_1186}},{{&l_1186,&l_1188,(void*)0},{&l_1187,&l_1186,(void*)0}},{{(void*)0,&l_1186,(void*)0},{(void*)0,&l_1188,(void*)0}},{{(void*)0,&l_1187,&l_1186},{&l_1186,&l_1186,&l_1186}},{{&l_1187,(void*)0,&l_1186},{&l_1187,(void*)0,&l_1186}},{{&l_1187,&l_1186,&l_1186},{&l_1186,&l_1187,&l_1186}},{{(void*)0,&l_1187,&l_1186},{(void*)0,&l_1186,&l_1186}}};
    const uint64_t ***l_1345 = (void*)0;
    uint64_t l_1347 = 0x10AE6B5D24EA03A0LL;
    uint32_t l_1371 = 18446744073709551612UL;
    uint32_t l_1379[1];
    int32_t ***l_1380 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1379[i] = 0x468EE833L;
lbl_1264:
    for (g_336 = (-16); (g_336 < 39); g_336 = safe_add_func_int32_t_s_s(g_336, 8))
    { /* block id: 388 */
        uint32_t l_1006[1];
        uint8_t **l_1009[2][2] = {{&g_75,&g_75},{&g_75,&g_75}};
        int32_t *l_1012 = &g_177[8][0][1];
        int64_t l_1016 = 0xB45B9907CCD9682FLL;
        int32_t l_1017[1][3][2] = {{{2L,0x9A40043BL},{0x9A40043BL,2L},{0x9A40043BL,0x9A40043BL}}};
        int16_t l_1052[1][5];
        uint8_t l_1053 = 0x89L;
        int8_t *l_1054 = &g_327[2][8];
        int32_t l_1085 = 0xD0C431FAL;
        const uint8_t ***l_1117[9];
        const uint8_t ****l_1116[8][6][5] = {{{&l_1117[7],(void*)0,&l_1117[5],(void*)0,&l_1117[2]},{(void*)0,(void*)0,&l_1117[7],&l_1117[7],&l_1117[7]},{&l_1117[4],(void*)0,&l_1117[7],&l_1117[7],&l_1117[6]},{&l_1117[7],&l_1117[7],(void*)0,&l_1117[7],&l_1117[8]},{&l_1117[7],&l_1117[7],&l_1117[7],&l_1117[7],&l_1117[7]},{(void*)0,(void*)0,&l_1117[6],&l_1117[4],(void*)0}},{{&l_1117[2],(void*)0,&l_1117[7],&l_1117[7],(void*)0},{&l_1117[7],(void*)0,&l_1117[8],&l_1117[4],&l_1117[7]},{&l_1117[7],&l_1117[7],&l_1117[2],&l_1117[7],&l_1117[7]},{(void*)0,&l_1117[7],&l_1117[6],&l_1117[7],&l_1117[7]},{(void*)0,(void*)0,(void*)0,&l_1117[7],&l_1117[7]},{&l_1117[7],(void*)0,&l_1117[7],&l_1117[7],&l_1117[7]}},{{&l_1117[7],&l_1117[6],&l_1117[7],(void*)0,&l_1117[5]},{&l_1117[2],&l_1117[6],&l_1117[7],&l_1117[7],(void*)0},{(void*)0,&l_1117[7],(void*)0,&l_1117[7],&l_1117[6]},{&l_1117[7],&l_1117[7],&l_1117[6],(void*)0,&l_1117[6]},{&l_1117[7],&l_1117[7],&l_1117[2],&l_1117[6],(void*)0},{&l_1117[4],&l_1117[6],&l_1117[8],&l_1117[7],&l_1117[5]}},{{(void*)0,&l_1117[7],&l_1117[7],&l_1117[7],&l_1117[7]},{&l_1117[7],&l_1117[6],&l_1117[6],&l_1117[8],&l_1117[7]},{&l_1117[1],&l_1117[7],&l_1117[7],(void*)0,&l_1117[7]},{&l_1117[6],&l_1117[7],&l_1117[1],&l_1117[1],&l_1117[7]},{(void*)0,(void*)0,&l_1117[7],&l_1117[7],(void*)0},{&l_1117[2],&l_1117[7],&l_1117[6],(void*)0,&l_1117[1]}},{{&l_1117[5],(void*)0,&l_1117[7],&l_1117[7],&l_1117[2]},{&l_1117[2],(void*)0,&l_1117[5],(void*)0,&l_1117[7]},{(void*)0,(void*)0,&l_1117[7],&l_1117[5],&l_1117[7]},{(void*)0,(void*)0,&l_1117[7],(void*)0,(void*)0},{&l_1117[4],&l_1117[7],&l_1117[5],&l_1117[8],&l_1117[7]},{(void*)0,&l_1117[7],&l_1117[7],(void*)0,&l_1117[6]}},{{&l_1117[7],&l_1117[2],&l_1117[6],&l_1117[7],&l_1117[7]},{&l_1117[7],(void*)0,&l_1117[7],&l_1117[7],(void*)0},{&l_1117[7],&l_1117[7],&l_1117[1],&l_1117[6],&l_1117[7]},{&l_1117[6],&l_1117[7],&l_1117[7],&l_1117[6],&l_1117[7]},{&l_1117[5],(void*)0,(void*)0,&l_1117[7],&l_1117[2]},{&l_1117[6],&l_1117[2],(void*)0,&l_1117[7],&l_1117[1]}},{{&l_1117[6],&l_1117[7],&l_1117[7],&l_1117[7],(void*)0},{&l_1117[7],&l_1117[7],&l_1117[6],&l_1117[6],&l_1117[7]},{(void*)0,(void*)0,&l_1117[7],&l_1117[6],&l_1117[6]},{(void*)0,(void*)0,(void*)0,&l_1117[7],(void*)0},{&l_1117[7],(void*)0,&l_1117[7],&l_1117[7],&l_1117[8]},{&l_1117[6],(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_1117[6],&l_1117[7],&l_1117[7],&l_1117[8],&l_1117[5]},{&l_1117[5],(void*)0,(void*)0,(void*)0,&l_1117[7]},{&l_1117[6],&l_1117[7],&l_1117[7],&l_1117[5],&l_1117[7]},{&l_1117[7],&l_1117[7],&l_1117[6],(void*)0,&l_1117[5]},{&l_1117[7],(void*)0,&l_1117[7],&l_1117[7],(void*)0},{&l_1117[7],&l_1117[7],(void*)0,(void*)0,&l_1117[8]}}};
        uint32_t **l_1176 = (void*)0;
        uint32_t *l_1178 = (void*)0;
        uint32_t **l_1177 = &l_1178;
        int32_t *l_1181 = (void*)0;
        int32_t *l_1182 = &l_1017[0][1][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1006[i] = 1UL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1052[i][j] = 0x4952L;
        }
        for (i = 0; i < 9; i++)
            l_1117[i] = (void*)0;
        /*bef_stmt:215050*/
/*bef_stmt:215050*/
/*bef_stmt:215050*/
/*bef_stmt:215050*/
/*bef_stmt:215050*/
/*bef_stmt:215050*/
/*bef_stmt:215050*/
/*bef_stmt:215050*/
/*bef_stmt:215050*/
/*bef_stmt:215050*/
if ((safe_add_func_int32_t_s_s((l_1017[0][1][1] = (safe_add_func_uint16_t_u_u(Tag426(/*uint32_t:215453:226405:215050:e*/l_1006[0]), ((safe_lshift_func_uint16_t_u_s(((((g_75 = p_58) == l_1010) & (((*l_1012) |= (~((*g_634) |= Tag427(/*uint32_t:215453:226405:215050:e*/l_1006[0])))) , (safe_add_func_int16_t_s_s(1L, ((Tag428(/*uint32_t:0:0:215050:e*/*g_248)) || Tag429(/*int32_t:226405:226405:215050:e*/p_59)))))) && (g_364 &= (Tag430(/*uint32_t:215453:226405:215050:e*/l_1006[0]) >= (((*g_88) |= (Tag431(/*int32_t:226405:226405:215050:e*/l_1015) < (-10L))) , Tag432(/*int64_t:215453:226405:215050:e*/l_1016))))), Tag433(/*int32_t:226405:226405:215050:e*/p_59))) >= Tag434(/*int32_t:226405:226405:215050:e*/l_1015))))), Tag435(/*int32_t:226405:226405:215050:e*/p_59))))
        { /* block id: 395 */
            int64_t l_1026 = 0x4137FA1C7D16B89BLL;
            int32_t l_1055 = (-1L);
            int32_t *l_1056 = &g_379[2];
            /*bef_stmt:205257*/
if (Tag436(/*int32_t:226405:226405:205257:e*/p_59))
                break;
/*aft_stmt:205257*/
            /*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
/*bef_stmt:206354*/
l_1057[1] = ((*l_1056) ^= (((safe_mod_func_uint16_t_u_u(((Tag437(/*int32_t:226405:226405:206354:e*/p_59) != (safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((-1L), ((*l_1054) = (safe_lshift_func_uint8_t_u_s(((((*g_537) &= (Tag438(/*int32_t:215453:226405:206354:e*/l_1017[0][1][1]) && Tag439(/*int64_t:206358:215453:206354:e*/l_1026))) == (safe_div_func_int64_t_s_s(0x2CDBB00F40E55760LL, Tag440(/*int32_t:226405:226405:206354:e*/p_59)))) , (safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((l_1015 = (l_1055 = (safe_lshift_func_uint8_t_u_u((&g_327[2][1] != ((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(Tag441(/*int64_t:206358:215453:206354:e*/l_1026), ((((safe_mod_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_1017[0][2][0] |= (!(((((((safe_add_func_uint8_t_u_u((Tag442(/*int16_t:215453:226405:206354:e*/l_1052[0][4]) < 0UL), Tag443(/*int32_t:226405:226405:206354:e*/l_1015))) , Tag444(/*int32_t:226405:226405:206354:e*/p_59)) , (Tag445(/*uint16_t:0:0:206354:e*/**g_536))) ^ Tag446(/*int64_t:206358:215453:206354:e*/l_1026)) & (Tag447(/*uint64_t:0:0:206354:e*/*g_88))) == (-7L)) , Tag448(/*int32_t:226405:226405:206354:e*/p_59)))), Tag449(/*int64_t:215453:226405:206354:e*/l_1016))), Tag450(/*int32_t:226405:226405:206354:e*/l_1015))), 12)) < Tag451(/*uint8_t:215453:226405:206354:e*/l_1053)) , (Tag452(/*int16_t:0:0:206354:e*/*g_634))), 0x9CC5L)) > Tag453(/*int8_t:0:0:206354:e*/g_166)) | 0UL) >= 7L))) && Tag454(/*int32_t:226405:226405:206354:e*/p_59)), 7)) , l_1054)), 5)))), Tag455(/*int32_t:226405:226405:206354:e*/p_59))) <= 255UL), (-5L)))), Tag456(/*int32_t:226405:226405:206354:e*/p_59)))))) , Tag457(/*int32_t:226405:226405:206354:e*/p_59)), Tag458(/*int32_t:226405:226405:206354:e*/p_59)))) | Tag459(/*int32_t:226405:226405:206354:e*/p_59)), 0x19EEL)) , Tag460(/*int32_t:226405:226405:206354:e*/p_59)) , Tag461(/*int64_t:206358:215453:206354:e*/l_1026)));
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
/*aft_stmt:206354*/
        }
        else
        { /* block id: 404 */
            int32_t *l_1064 = &g_277;
            int32_t ***l_1075[6][4][7] = {{{&g_645,&g_645,&g_645,(void*)0,&g_645,(void*)0,&g_645},{&g_645,&g_645,&g_645,(void*)0,&g_645,&g_645,&g_645},{&g_645,&g_645,&g_645,&g_645,(void*)0,&g_645,&g_645},{&g_645,&g_645,&g_645,&g_645,&g_645,&g_645,&g_645}},{{&g_645,(void*)0,(void*)0,&g_645,&g_645,&g_645,(void*)0},{&g_645,&g_645,&g_645,&g_645,&g_645,&g_645,(void*)0},{&g_645,&g_645,&g_645,&g_645,&g_645,&g_645,(void*)0},{(void*)0,&g_645,&g_645,&g_645,&g_645,(void*)0,&g_645}},{{(void*)0,&g_645,&g_645,&g_645,&g_645,&g_645,&g_645},{&g_645,&g_645,&g_645,&g_645,&g_645,&g_645,&g_645},{&g_645,&g_645,(void*)0,&g_645,&g_645,(void*)0,&g_645},{(void*)0,(void*)0,(void*)0,&g_645,&g_645,&g_645,&g_645}},{{&g_645,&g_645,&g_645,&g_645,&g_645,&g_645,&g_645},{(void*)0,&g_645,&g_645,&g_645,&g_645,&g_645,&g_645},{(void*)0,&g_645,(void*)0,&g_645,&g_645,&g_645,(void*)0},{&g_645,&g_645,(void*)0,&g_645,&g_645,(void*)0,&g_645}},{{&g_645,(void*)0,&g_645,&g_645,&g_645,&g_645,&g_645},{&g_645,(void*)0,&g_645,(void*)0,&g_645,&g_645,&g_645},{&g_645,&g_645,&g_645,(void*)0,&g_645,&g_645,&g_645},{&g_645,&g_645,&g_645,&g_645,&g_645,&g_645,(void*)0}},{{&g_645,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_645},{&g_645,(void*)0,&g_645,&g_645,(void*)0,&g_645,&g_645},{&g_645,&g_645,&g_645,&g_645,(void*)0,&g_645,&g_645},{&g_645,&g_645,&g_645,&g_645,(void*)0,&g_645,&g_645}}};
            int32_t l_1088 = 6L;
            uint8_t **l_1158[7][4] = {{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75}};
            int32_t l_1165 = 1L;
            int i, j, k;
            /*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
/*bef_stmt:215017*/
if (((((safe_div_func_uint32_t_u_u(((***g_246)++), (safe_div_func_int32_t_s_s(((*l_1064) = Tag462(/*int32_t:226405:226405:215017:e*/p_59)), 1L)))) , ((((((safe_lshift_func_int16_t_s_s((Tag463(/*int32_t:226405:226405:215017:e*/p_59) <= (((*g_634) |= ((safe_rshift_func_int16_t_s_u((Tag464(/*uint64_t:0:0:215017:e*/g_312) , (safe_mul_func_int16_t_s_s(((((*l_1054) &= (safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((g_645 = &g_646) == (void*)0), (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((((void*)0 != g_1080) < ((((safe_mod_func_int16_t_s_s((((safe_div_func_int32_t_s_s(Tag465(/*int32_t:226405:226405:215017:e*/l_1015), Tag466(/*int32_t:226405:226405:215017:e*/l_1057[1]))) > Tag467(/*int16_t:215453:226405:215017:e*/l_1052[0][4])) , 0x3B24L), Tag468(/*int32_t:226405:226405:215017:e*/p_59))) , Tag469(/*int32_t:226405:226405:215017:e*/p_59)) <= Tag470(/*int32_t:0:0:215017:e*/g_277)) || Tag471(/*int32_t:215453:226405:215017:e*/l_1085))), Tag472(/*int32_t:226405:226405:215017:e*/p_59))), Tag473(/*int32_t:226405:226405:215017:e*/p_59))))), 0xF5F1L))) || Tag474(/*int32_t:226405:226405:215017:e*/p_59)) >= 0x40L), 0x3AEBL))), 11)) >= 1L)) < Tag475(/*int32_t:226405:226405:215017:e*/p_59))), 5)) , (void*)0) == p_58) >= (Tag476(/*int32_t:215040:215453:215017:e*/*l_1064))) < Tag477(/*int32_t:226405:226405:215017:e*/p_59)) <= 1UL)) , (void*)0) == (*g_247)))
            { /* block id: 410 */
                /*bef_stmt:210517*/
/*bef_stmt:210517*/
(*g_969) = func_65((Tag478(/*int16_t:0:0:210517:e*/*g_634)), Tag479(/*int32_t:226405:226405:210517:e*/l_1015), (g_75 = &g_336));
/*aft_stmt:210517*/
/*aft_stmt:210517*/
            }
            else
            { /* block id: 413 */
                uint8_t l_1089[9] = {0xDCL,0xDCL,0xA9L,0xDCL,0xDCL,0xA9L,0xDCL,0xDCL,0xA9L};
                const int64_t l_1121 = (-1L);
                uint32_t ** const *l_1129 = (void*)0;
                uint32_t ** const **l_1128[2][2][3] = {{{(void*)0,(void*)0,&l_1129},{(void*)0,(void*)0,&l_1129}},{{(void*)0,(void*)0,&l_1129},{(void*)0,(void*)0,&l_1129}}};
                int32_t *l_1130 = &l_1017[0][2][0];
                uint16_t ** const l_1135 = &g_537;
                uint16_t ***l_1136 = &g_536;
                uint32_t l_1148 = 0xC0011834L;
                uint8_t **l_1157 = &g_75;
                int i, j, k;
                for (g_329 = 0; (g_329 <= 0); g_329 += 1)
                { /* block id: 416 */
                    for (l_1053 = 0; (l_1053 <= 0); l_1053 += 1)
                    { /* block id: 419 */
                        int i, j, k;
                        (*l_1064) = l_1017[l_1053][(l_1053 + 1)][g_329];
                        /*bef_stmt:211629*/
if ((Tag480(/*int32_t:215040:215453:211629:e*/*l_1064)))
                            continue;
/*aft_stmt:211629*/
                    }
                    for (g_167 = 1; (g_167 <= 5); g_167 += 1)
                    { /* block id: 425 */
                        int32_t *l_1086 = &g_379[g_167];
                        int32_t *l_1087[8] = {&l_1017[0][1][1],(void*)0,&l_1017[0][1][1],(void*)0,&l_1017[0][1][1],(void*)0,&l_1017[0][1][1],(void*)0};
                        int i;
                        l_1089[1]++;
                    }
                    for (l_1053 = 0; (l_1053 <= 0); l_1053 += 1)
                    { /* block id: 430 */
                        int8_t **l_1096[1];
                        uint32_t *l_1099 = &g_1100;
                        uint8_t ****l_1118 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1096[i] = &l_1054;
                        if (l_1017[g_329][g_329][(l_1053 + 1)])
                            break;
                        /*bef_stmt:212443*/
if (Tag481(/*int32_t:226405:226405:212443:e*/l_1057[1]))
                            continue;
/*aft_stmt:212443*/
                        /*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
/*bef_stmt:213226*/
(*l_1064) = (((((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((&g_165 == (l_1054 = &g_166)), (safe_lshift_func_int8_t_s_s((((***g_246) = (Tag482(/*uint32_t:0:0:213226:e*/***g_246))) | Tag483(/*int32_t:226405:226405:213226:e*/p_59)), 0)))), ((((++(*l_1099)) , (0x5B997751L >= ((Tag484(/*int32_t:215040:215453:213226:e*/*l_1064)) , (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((Tag485(/*int32_t:226405:226405:213226:e*/l_1057[0]) >= l_1017[g_329][g_329][(l_1053 + 1)]), ((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(Tag486(/*int32_t:226405:226405:213226:e*/p_59), (Tag487(/*int16_t:0:0:213226:e*/*g_634)))), Tag488(/*int64_t:215453:226405:213226:e*/l_1016))), Tag489(/*uint8_t:215001:215040:213226:e*/l_1089[1]))))) , 8L), (Tag490(/*int16_t:0:0:213226:e*/*g_634)))) != Tag491(/*int32_t:226405:226405:213226:e*/p_59)))), Tag492(/*int32_t:226405:226405:213226:e*/l_1015)))))) , l_1116[4][2][0]) == l_1118))) & 0x0C64BA95L) | 1UL) || 0xE2EEA1A2C9637220LL) , (-7L));
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
/*aft_stmt:213226*/
                    }
                    /*bef_stmt:213255*/
if (Tag493(/*int32_t:226405:226405:213255:e*/p_59))
                        continue;
/*aft_stmt:213255*/
                    for (g_364 = 0; (g_364 <= 0); g_364 += 1)
                    { /* block id: 441 */
                        int i, j, k;
                        (*l_1064) = l_1017[g_329][(g_329 + 2)][(g_329 + 1)];
                    }
                }
                /*bef_stmt:213771*/
/*bef_stmt:213771*/
/*bef_stmt:213771*/
/*bef_stmt:213771*/
(*l_1130) |= ((*l_1064) = ((safe_add_func_int8_t_s_s(Tag494(/*const int64_t:215001:215040:213771:e*/l_1121), (+(Tag495(/*int16_t:0:0:213771:e*/*g_634))))) != (safe_add_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((safe_div_func_int32_t_s_s(Tag496(/*int32_t:226405:226405:213771:e*/p_59), Tag497(/*int32_t:226405:226405:213771:e*/p_59))))), (l_1128[1][1][0] != (*g_577))))));
/*aft_stmt:213771*/
/*aft_stmt:213771*/
/*aft_stmt:213771*/
/*aft_stmt:213771*/
                /*bef_stmt:214332*/
/*bef_stmt:214332*/
/*bef_stmt:214332*/
/*bef_stmt:214332*/
/*bef_stmt:214332*/
/*bef_stmt:214332*/
/*bef_stmt:214332*/
/*bef_stmt:214332*/
/*bef_stmt:214332*/
l_1148 ^= (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_1135 != ((*l_1136) = &g_537)), ((*l_1130) = Tag498(/*int32_t:215453:226405:214332:e*/l_1017[0][1][1])))), (safe_div_func_int16_t_s_s(((-10L) & (Tag499(/*int32_t:226405:226405:214332:e*/p_59) , ((safe_rshift_func_uint8_t_u_s((+(l_1015 |= (((safe_lshift_func_uint16_t_u_s(((*g_537) = 65535UL), (safe_sub_func_uint8_t_u_u(((Tag500(/*int32_t:226405:226405:214332:e*/p_59) && (l_1085 = ((Tag501(/*int32_t:226405:226405:214332:e*/p_59) , Tag502(/*int32_t:215453:226405:214332:e*/l_1085)) ^ (Tag503(/*uint32_t:0:0:214332:e*/*****g_577))))) ^ Tag504(/*int32_t:226405:226405:214332:e*/l_1057[2])), Tag505(/*uint32_t:0:0:214332:e*/g_103[3][1]))))) != 0xEBL) != 0L))), 5)) < 0x10EBL))), Tag506(/*int32_t:226405:226405:214332:e*/p_59)))));
/*aft_stmt:214332*/
/*aft_stmt:214332*/
/*aft_stmt:214332*/
/*aft_stmt:214332*/
/*aft_stmt:214332*/
/*aft_stmt:214332*/
/*aft_stmt:214332*/
/*aft_stmt:214332*/
/*aft_stmt:214332*/
                /*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
/*bef_stmt:214995*/
if ((safe_div_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(Tag507(/*int32_t:0:0:214995:e*/g_379[5]), (Tag508(/*int32_t:215040:215453:214995:e*/*l_1064)))) != (safe_mod_func_int64_t_s_s((0x4E88L != (safe_mul_func_uint8_t_u_u((((Tag509(/*uint16_t:0:0:214995:e*/*g_537)) , l_1157) != (Tag510(/*int32_t:226405:226405:214995:e*/p_59) , l_1158[4][2])), (Tag511(/*int32_t:226405:226405:214995:e*/l_1057[1]) , (((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((Tag512(/*int32_t:215001:215040:214995:e*/*l_1130)), 4)) , (Tag513(/*int16_t:0:0:214995:e*/*g_634))), (Tag514(/*int32_t:215040:215453:214995:e*/*l_1064)))) , Tag515(/*int32_t:226405:226405:214995:e*/p_59)), Tag516(/*int32_t:226405:226405:214995:e*/p_59))) < Tag517(/*int16_t:215453:226405:214995:e*/l_1052[0][4])) <= 0xFDCACDB2L))))), (Tag518(/*int32_t:215001:215040:214995:e*/*l_1130))))) <= Tag519(/*uint64_t:0:0:214995:e*/g_257)), Tag520(/*int32_t:226405:226405:214995:e*/p_59))))
                { /* block id: 453 */
                    /*bef_stmt:214880*/
return Tag521(/*int32_t:215040:215453:214880:e*/l_1165);
/*aft_stmt:214880*/
                }
                else
                { /* block id: 455 */
                    /*bef_stmt:214986*/
(*l_1064) &= ((!(l_1017[0][1][1] = (Tag522(/*uint64_t:0:0:214986:e*/*g_88)))) >= 0xB088911BFFCC0D5BLL);
/*aft_stmt:214986*/
                }
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
/*aft_stmt:214995*/
            }
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
/*aft_stmt:215017*/
            /*bef_stmt:215033*/
return Tag523(/*int32_t:226405:226405:215033:e*/p_59);
/*aft_stmt:215033*/
        }
/*aft_stmt:215050*/
/*aft_stmt:215050*/
/*aft_stmt:215050*/
/*aft_stmt:215050*/
/*aft_stmt:215050*/
/*aft_stmt:215050*/
/*aft_stmt:215050*/
/*aft_stmt:215050*/
/*aft_stmt:215050*/
/*aft_stmt:215050*/
        /*bef_stmt:215402*/
/*bef_stmt:215402*/
/*bef_stmt:215402*/
/*bef_stmt:215402*/
/*bef_stmt:215402*/
/*bef_stmt:215402*/
/*bef_stmt:215402*/
/*bef_stmt:215402*/
l_1057[1] = (safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0x98D6L, (safe_unary_minus_func_int16_t_s(((safe_mul_func_int8_t_s_s(((((((*l_1177) = &g_1100) == (Tag524(/*int32_t:226405:226405:215402:e*/p_59) , l_1179)) || ((Tag525(/*int16_t:0:0:215402:e*/*g_634)) , (Tag526(/*int32_t:226405:226405:215402:e*/p_59) != ((Tag527(/*int32_t:226405:226405:215402:e*/p_59) , l_1179) == (void*)0)))) != 1UL) , Tag528(/*int32_t:226405:226405:215402:e*/p_59)), Tag529(/*int32_t:226405:226405:215402:e*/l_1057[0]))) ^ Tag530(/*int32_t:226405:226405:215402:e*/l_1057[3])))))), Tag531(/*uint32_t:226405:226405:215402:e*/l_1180)));
/*aft_stmt:215402*/
/*aft_stmt:215402*/
/*aft_stmt:215402*/
/*aft_stmt:215402*/
/*aft_stmt:215402*/
/*aft_stmt:215402*/
/*aft_stmt:215402*/
/*aft_stmt:215402*/
        /*bef_stmt:215427*/
(*l_1182) = Tag532(/*int32_t:226405:226405:215427:e*/p_59);
/*aft_stmt:215427*/
        /*bef_stmt:215449*/
if ((Tag533(/*int32_t:215453:226405:215449:e*/*l_1182)))
            continue;
/*aft_stmt:215449*/
    }
    /*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
/*bef_stmt:225026*/
if ((0x9DE5D4DBL != ((safe_mul_func_uint16_t_u_u(((((*l_1188) = l_1185) != l_1189) ^ (-1L)), Tag534(/*uint32_t:226405:226405:225026:e*/l_1180))) || (((safe_mod_func_uint32_t_u_u(((*****g_577) = ((*l_1211) &= (safe_rshift_func_int8_t_s_u((((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(0xE5L, ((!/*TAG535:STA*/((int32_t)(realsmith_proxy_0rptn((int)(g_257)+(32), (unsigned char)(l_1057[0])+(-237), (int)(p_59)+(-65488), (int)(p_59)+(-65448))+(int)(p_59)+(int)(l_1057[3])+(int)(l_1057[0])+(int)(g_257)-(-1210451168))+p_59)/*TAG535:END:p_59*/) ^ (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((Tag536(/*int32_t:226405:226405:225026:e*/l_1057[1]) <= (((safe_div_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((*g_634) = ((safe_add_func_uint64_t_u_u((Tag537(/*uint32_t:0:0:225026:e*/g_103[3][1]) , 1UL), 5UL)) >= Tag538(/*int64_t:0:0:225026:e*/g_85))), Tag539(/*int32_t:226405:226405:225026:e*/p_59))) , (/*TAG540:STA*/((uint16_t)(realsmith_VC0g3((unsigned long)(*g_537)+(74))+(unsigned long)(*g_537)+(unsigned long)(g_85)+(unsigned long)(g_103[3][1])-(12))+*g_537)/*TAG540:END:*g_537*/)), 0xC611L)) >= 4294967295UL) >= 18446744073709551607UL)), 8)) != (Tag541(/*uint32_t:0:0:225026:e*/*g_248))), Tag542(/*int32_t:226405:226405:225026:e*/p_59)))))) > Tag543(/*int32_t:226405:226405:225026:e*/p_59)), 0x4A98L)), 1L)) != /*TAG544:STA*/((int32_t)(realsmith_3JW26((int)(l_1015)+(-129153714), (int)(l_1015)+(-129153677))+(int)(l_1015)-(129153734))+l_1015)/*TAG544:END:l_1015*/) || Tag545(/*int32_t:226405:226405:225026:e*/l_1057[0])), 3)))), Tag546(/*int32_t:226405:226405:225026:e*/p_59))) <= Tag547(/*int32_t:226405:226405:225026:e*/p_59)) < Tag548(/*uint32_t:226405:226405:225026:e*/l_1180)))))
    { /* block id: 471 */
        int32_t l_1214 = 0x8FE3BDC5L;
        int32_t * const *l_1221 = &g_243;
        uint8_t *l_1233 = &g_76;
        int8_t *l_1234 = &g_166;
        int32_t ***l_1237 = (void*)0;
        int64_t l_1250 = (-1L);
        int32_t l_1252 = (-1L);
        int32_t l_1253 = 0L;
        int32_t l_1255 = 1L;
        int32_t l_1260[2][6][1];
        uint8_t l_1261 = 0xBCL;
        uint32_t **** const *l_1322[10] = {&g_578,&g_578,&g_578,&g_578,&g_578,&g_578,&g_578,&g_578,&g_578,&g_578};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1260[i][j][k] = (-1L);
            }
        }
        for (l_1180 = 0; (l_1180 == 23); l_1180 = safe_add_func_uint64_t_u_u(l_1180, 8))
        { /* block id: 474 */
            int32_t **l_1219 = &g_243;
            int32_t l_1227 = 0xA605E710L;
            uint8_t ***l_1228 = (void*)0;
            int32_t l_1231 = (-5L);
            int32_t l_1251[10][8] = {{0xD6FCB4A8L,0xA1ACE755L,0xD6FCB4A8L,0L,0xDF0E94C1L,0x5AFDB85CL,0L,0x1D1E77ACL},{0L,2L,0L,0x58AEC909L,0x4F603ECDL,0xDF0E94C1L,0xA1ACE755L,0x1D1E77ACL},{0xDF14DD4FL,0x4F603ECDL,0x4F603ECDL,0xDF14DD4FL,0xA1ACE755L,0xC83CFEC9L,(-9L),0x26A9DA5CL},{0xDF0E94C1L,0x58AEC909L,0xC83CFEC9L,0x5AFDB85CL,0x4F603ECDL,0L,0x26A9DA5CL,0L},{0xD6FCB4A8L,0x58AEC909L,(-9L),0x58AEC909L,0xD6FCB4A8L,0xC83CFEC9L,0xDF14DD4FL,0L},{0xC83CFEC9L,0x4F603ECDL,0xD6FCB4A8L,0x6BC4E9B4L,0L,0xA1ACE755L,0x58AEC909L,0x58AEC909L},{0x26A9DA5CL,1L,0xD6FCB4A8L,0xD6FCB4A8L,1L,0x26A9DA5CL,0xDF14DD4FL,0L},{0L,0L,(-9L),0L,0x58AEC909L,0x6BC4E9B4L,0x26A9DA5CL,0xC83CFEC9L},{(-9L),0xDF0E94C1L,0xC83CFEC9L,0L,0xC83CFEC9L,0xDF0E94C1L,(-9L),0L},{1L,0xC83CFEC9L,0x4F603ECDL,0xD6FCB4A8L,0x6BC4E9B4L,0L,0xA1ACE755L,0x58AEC909L}};
            uint32_t **l_1278 = &g_248;
            uint32_t *** const l_1277 = &l_1278;
            uint32_t *** const *l_1276 = &l_1277;
            const uint32_t *l_1294 = &l_1180;
            const uint32_t **l_1293 = &l_1294;
            int16_t *l_1346[6][4] = {{&g_326,&g_808[1][7],&g_326,&g_808[1][7]},{&g_326,&g_808[1][7],&g_326,&g_808[1][7]},{&g_326,&g_808[1][7],&g_326,&g_808[1][7]},{&g_326,&g_808[1][7],&g_326,&g_808[1][7]},{&g_326,&g_808[1][7],&g_326,&g_808[1][7]},{&g_326,&g_808[1][7],&g_326,&g_808[1][7]}};
            int i, j;
            /*bef_stmt:224924*/
if (Tag549(/*int32_t:224989:226405:224924:e*/l_1214))
            { /* block id: 475 */
                int32_t ***l_1220 = &l_1219;
                int32_t * const **l_1222 = &l_1221;
                int32_t *l_1230[8] = {(void*)0,&g_379[1],(void*)0,(void*)0,&g_379[1],(void*)0,(void*)0,&g_379[1]};
                int8_t **l_1235 = &l_1234;
                uint16_t ***l_1281 = &g_536;
                int i;
                /*bef_stmt:219679*/
/*bef_stmt:219679*/
l_1214 &= (65532UL | ((safe_div_func_uint8_t_u_u(((((*l_1235) = l_1234) != (void*)0) ^ Tag550(/*int32_t:226405:226405:219679:e*/p_59)), 0xCAL)) != Tag551(/*int32_t:226405:226405:219679:e*/p_59)));
/*aft_stmt:219679*/
/*aft_stmt:219679*/
                for (g_128 = 0; (g_128 <= 2); g_128 += 1)
                { /* block id: 483 */
                    int32_t ***l_1236 = &l_1219;
                    int32_t l_1257 = 0x117F5C64L;
                    int32_t l_1259[2][1];
                    uint32_t * const ***l_1271 = (void*)0;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1259[i][j] = 0x4E879A87L;
                    }
                    l_1237 = l_1236;
                    /*bef_stmt:222063*/
/*bef_stmt:222063*/
/*bef_stmt:222063*/
/*bef_stmt:222063*/
/*bef_stmt:222063*/
/*bef_stmt:222063*/
/*bef_stmt:222063*/
/*bef_stmt:222063*/
/*bef_stmt:222063*/
/*bef_stmt:222063*/
if (((((0x7D9D1C71L | 6UL) || ((**g_536) ^= ((safe_rshift_func_int16_t_s_u((((void*)0 != &g_640) <= (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_379[(g_128 + 3)], g_327[g_128][(g_128 + 6)])), Tag552(/*int32_t:226405:226405:222063:e*/l_1057[1]))), (safe_mod_func_int32_t_s_s((Tag553(/*int32_t:226405:226405:222063:e*/p_59) , (((((((((Tag554(/*uint32_t:0:0:222063:e*/*****g_577)) | 0xDEA7148FL) == 0x4EL) && Tag555(/*int32_t:226405:226405:222063:e*/p_59)) == (Tag556(/*uint64_t:0:0:222063:e*/*g_88))) < 0x39L) == Tag557(/*int32_t:226405:226405:222063:e*/p_59)) > 0xF5L) && Tag558(/*int32_t:226405:226405:222063:e*/p_59))), (-2L))))), (Tag559(/*uint32_t:0:0:222063:e*/*g_248))))), 14)) <= Tag560(/*uint8_t:0:0:222063:e*/g_364)))) , Tag561(/*int32_t:226405:226405:222063:e*/p_59)) >= l_1180))
                    { /* block id: 486 */
                        int32_t l_1256 = 0xFD30ACB7L;
                        int32_t l_1258[1][1][10] = {{{0x53E27F23L,8L,0x53E27F23L,8L,0x53E27F23L,8L,0x53E27F23L,8L,0x53E27F23L,8L}}};
                        int i, j, k;
                        l_1057[1] &= 0x98D80510L;
                        ++l_1261;
                        /*bef_stmt:221003*/
if (Tag562(/*uint32_t:0:0:221003:e*/g_450))
                            goto lbl_1264;
/*aft_stmt:221003*/
                    }
                    else
                    { /* block id: 490 */
                        int8_t l_1270 = 0xC4L;
                        uint32_t **l_1275 = &l_1211;
                        uint32_t *** const l_1274 = &l_1275;
                        uint32_t *** const *l_1273[1];
                        uint32_t *** const **l_1272[3];
                        uint16_t *l_1282[6] = {&g_333,&g_333,&g_333,&g_333,&g_333,&g_333};
                        int32_t l_1283 = 0x5BF852B6L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1273[i] = &l_1274;
                        for (i = 0; i < 3; i++)
                            l_1272[i] = &l_1273[0];
                        /*bef_stmt:222020*/
/*bef_stmt:222020*/
/*bef_stmt:222020*/
/*bef_stmt:222020*/
/*bef_stmt:222020*/
/*bef_stmt:222020*/
/*bef_stmt:222020*/
/*bef_stmt:222020*/
/*bef_stmt:222020*/
/*bef_stmt:222020*/
l_1283 = (~(l_1227 = ((((safe_rshift_func_uint8_t_u_s((Tag563(/*int8_t:222049:222192:222020:e*/l_1270) == (Tag564(/*int32_t:226405:226405:222020:e*/p_59) , (l_1015 = ((**g_536) = (((**l_1235) = Tag565(/*int64_t:0:0:222020:e*/g_527)) >= (((((Tag566(/*int32_t:226405:226405:222020:e*/p_59) <= (l_1271 == (l_1276 = (*g_577)))) , 0x5CFD31AFL) > ((safe_sub_func_int16_t_s_s((((((Tag567(/*uint16_t:0:0:222020:e*/*g_537)) , &g_578) != (void*)0) , (void*)0) != l_1281), 65535UL)) , Tag568(/*int32_t:226405:226405:222020:e*/p_59))) && Tag569(/*int32_t:226405:226405:222020:e*/p_59)) , Tag570(/*int32_t:226405:226405:222020:e*/p_59))))))), 1)) && Tag571(/*int32_t:226405:226405:222020:e*/p_59)) | 0x72L) , (Tag572(/*uint16_t:0:0:222020:e*/**g_536)))));
/*aft_stmt:222020*/
/*aft_stmt:222020*/
/*aft_stmt:222020*/
/*aft_stmt:222020*/
/*aft_stmt:222020*/
/*aft_stmt:222020*/
/*aft_stmt:222020*/
/*aft_stmt:222020*/
/*aft_stmt:222020*/
/*aft_stmt:222020*/
                        /*bef_stmt:222047*/
return (Tag573(/*uint16_t:0:0:222047:e*/**g_536));
/*aft_stmt:222047*/
                    }
/*aft_stmt:222063*/
/*aft_stmt:222063*/
/*aft_stmt:222063*/
/*aft_stmt:222063*/
/*aft_stmt:222063*/
/*aft_stmt:222063*/
/*aft_stmt:222063*/
/*aft_stmt:222063*/
/*aft_stmt:222063*/
/*aft_stmt:222063*/
                    for (g_713 = 0; (g_713 <= 1); g_713 += 1)
                    { /* block id: 501 */
                        uint64_t l_1284 = 18446744073709551606UL;
                        /*bef_stmt:222167*/
l_1057[2] &= Tag574(/*int32_t:226405:226405:222167:e*/p_59);
/*aft_stmt:222167*/
                        l_1284++;
                    }
                }
            }
            else
            { /* block id: 506 */
                uint16_t l_1302 = 65530UL;
                int64_t l_1328 = 0xC8058E036CC56BEBLL;
                uint64_t * const **l_1336 = &l_1333;
                int32_t l_1337 = 8L;
                for (l_1015 = 0; (l_1015 >= 23); ++l_1015)
                { /* block id: 509 */
                    uint16_t l_1303 = 0x67B2L;
                    int8_t l_1304[8][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
                    int32_t l_1317 = 9L;
                    uint16_t l_1329 = 0UL;
                    int i, j;
                    /*bef_stmt:223333*/
/*bef_stmt:223333*/
/*bef_stmt:223333*/
/*bef_stmt:223333*/
/*bef_stmt:223333*/
/*bef_stmt:223333*/
/*bef_stmt:223333*/
/*bef_stmt:223333*/
/*bef_stmt:223333*/
l_1057[1] &= (safe_sub_func_int64_t_s_s((((safe_add_func_uint8_t_u_u((((void*)0 != l_1293) == Tag575(/*int32_t:226405:226405:223333:e*/p_59)), (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((Tag576(/*int32_t:226405:226405:223333:e*/p_59) && (((((Tag577(/*int16_t:0:0:223333:e*/*g_634)) ^ (Tag578(/*int16_t:0:0:223333:e*/*g_634))) || Tag579(/*uint16_t:0:0:223333:e*/g_329)) > ((+(l_1010 != p_58)) < Tag580(/*int32_t:224966:224989:223333:e*/l_1231))) | (-6L))), 0xCBF2L)) == Tag581(/*int32_t:226405:226405:223333:e*/p_59)), 0x05L)), 0x86008E83L)))) , Tag582(/*uint16_t:224917:224966:223333:e*/l_1302)) | 0xFDE1B83E92C2EBE3LL), (Tag583(/*uint64_t:0:0:223333:e*/*g_88))));
/*aft_stmt:223333*/
/*aft_stmt:223333*/
/*aft_stmt:223333*/
/*aft_stmt:223333*/
/*aft_stmt:223333*/
/*aft_stmt:223333*/
/*aft_stmt:223333*/
/*aft_stmt:223333*/
/*aft_stmt:223333*/
                    /*bef_stmt:224895*/
if (Tag584(/*int32_t:226405:226405:224895:e*/p_59))
                    { /* block id: 511 */
                        /*bef_stmt:223382*/
l_1304[5][0] = Tag585(/*uint16_t:224901:224917:223382:e*/l_1303);
/*aft_stmt:223382*/
                    }
                    else
                    { /* block id: 513 */
                        int32_t *l_1306[3];
                        uint16_t *l_1315 = (void*)0;
                        uint16_t *l_1316 = &l_1303;
                        uint64_t * const *l_1331 = (void*)0;
                        uint64_t * const **l_1330 = &l_1331;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1306[i] = &l_1231;
                        l_1253 |= (l_1305 == (void*)0);
                        /*bef_stmt:224293*/
/*bef_stmt:224293*/
/*bef_stmt:224293*/
/*bef_stmt:224293*/
/*bef_stmt:224293*/
/*bef_stmt:224293*/
/*bef_stmt:224293*/
/*bef_stmt:224293*/
/*bef_stmt:224293*/
l_1329 = ((safe_div_func_uint16_t_u_u((Tag586(/*uint16_t:0:0:224293:e*/*g_537)), (safe_mul_func_int16_t_s_s((l_1317 = ((l_1180 == (safe_sub_func_int16_t_s_s(((*g_634) = (-4L)), ((*l_1316) = (safe_lshift_func_int16_t_s_u(Tag587(/*int32_t:226405:226405:224293:e*/p_59), 4)))))) >= (Tag588(/*uint32_t:0:0:224293:e*/**g_247)))), (safe_lshift_func_uint8_t_u_s(Tag589(/*uint16_t:224917:224966:224293:e*/l_1302), 4)))))) , (safe_lshift_func_uint16_t_u_u((l_1322[9] != (g_577 = l_1323)), ((safe_unary_minus_func_int8_t_s((((+(((((((**l_1188)--) ^ (-6L)) <= Tag590(/*const int32_t:0:0:224293:e*/g_184)) , Tag591(/*int32_t:226405:226405:224293:e*/l_1057[1])) ^ 0x3AF03B71L) && 0xFF4F4EBEFCC3E80DLL)) != (Tag592(/*uint16_t:0:0:224293:e*/**g_536))) <= (Tag593(/*uint32_t:0:0:224293:e*/**g_247))))) && Tag594(/*int64_t:224917:224966:224293:e*/l_1328)))));
/*aft_stmt:224293*/
/*aft_stmt:224293*/
/*aft_stmt:224293*/
/*aft_stmt:224293*/
/*aft_stmt:224293*/
/*aft_stmt:224293*/
/*aft_stmt:224293*/
/*aft_stmt:224293*/
/*aft_stmt:224293*/
                        l_1337 = (0L && ((l_1332 = l_1330) != l_1336));
                        /*bef_stmt:224876*/
/*bef_stmt:224876*/
/*bef_stmt:224876*/
/*bef_stmt:224876*/
l_1347 ^= ((Tag595(/*uint32_t:0:0:224876:e*/***g_246)) | (l_1232[1][1][1] != ((safe_lshift_func_uint8_t_u_s((((((l_1057[3] ^= (Tag596(/*int8_t:224901:224917:224876:e*/l_1304[2][0]) & ((safe_add_func_uint32_t_u_u((Tag597(/*uint32_t:0:0:224876:e*/***g_246)), Tag598(/*int32_t:226405:226405:224876:e*/p_59))) ^ (l_1344[9][1][0] == (l_1345 = (void*)0))))) > 0xBE43F284L) | (&g_1254 != &g_713)) , l_1316) == l_1346[3][0]), 6)) , &g_166)));
/*aft_stmt:224876*/
/*aft_stmt:224876*/
/*aft_stmt:224876*/
/*aft_stmt:224876*/
                    }
/*aft_stmt:224895*/
                }
            }
/*aft_stmt:224924*/
            (*g_969) = &l_1057[0];
        }
    }
    else
    { /* block id: 531 */
        /*bef_stmt:225017*/
l_1015 |= Tag599(/*int32_t:226405:226405:225017:e*/p_59);
/*aft_stmt:225017*/
    }
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
/*aft_stmt:225026*/
    for (g_527 = 0; (g_527 <= 2); g_527 += 1)
    { /* block id: 536 */
        uint64_t l_1354 = 0x34746D554D191648LL;
        int8_t *l_1355[2];
        int32_t l_1356 = 6L;
        int32_t *l_1372 = (void*)0;
        int32_t *l_1373 = &l_1015;
        int32_t *l_1374 = (void*)0;
        int32_t *l_1375 = &l_1057[3];
        int i;
        for (i = 0; i < 2; i++)
            l_1355[i] = &g_166;
        /*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
/*bef_stmt:225941*/
(*l_1375) = (((safe_add_func_uint16_t_u_u((Tag600(/*int32_t:226405:226405:225941:e*/p_59) ^ (l_1356 = (safe_add_func_int64_t_s_s(/*TAG601:STA*/((uint64_t)(realsmith_AlENB((int)(g_167)+(-1270792083))+(int)(g_167)-(1270792102))+g_167)/*TAG601:END:g_167*/, ((safe_lshift_func_int8_t_s_s(0x64L, 4)) | /*TAG602:STA*/((uint64_t)(realsmith_AbCUF((unsigned long)(l_1354)+(-3779766200403826246))+(int)(l_1354)-(1293489736))+l_1354)/*TAG602:END:l_1354*/))))), ((((safe_add_func_int32_t_s_s(((*l_1373) = ((safe_rshift_func_uint8_t_u_s(/*TAG603:STA*/((int64_t)(realsmith_JWbYw((int)(g_85)+(25))+(int)(g_85)-(8))+g_85)/*TAG603:END:g_85*/, 6)) , (/*TAG604:STA*/((int32_t)(realsmith_proxy_Fqhng((char)(p_59)+(58), (unsigned long)(p_59)+(-65522))+(unsigned long)(p_59)-(65534))+p_59)/*TAG604:END:p_59*/ , (((safe_div_func_int8_t_s_s(Tag605(/*int32_t:226405:226405:225941:e*/l_1015), (Tag606(/*int32_t:0:0:225941:e*/g_379[5]) ^ (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(0UL, 1)), /*TAG607:STA*/((int32_t)(realsmith_proxy_yeUWi((int)(g_184)+(-520709758), (int)(g_85)+(13), (int)(g_184)+(-520709753))+(int)(p_59)+(int)(**g_247)+(int)(g_85)+(int)(g_184)+(int)(***g_246)-(520775326))+p_59)/*TAG607:END:p_59*/)), Tag608(/*uint32_t:226405:226405:225941:e*/l_1371))), 15))))) != (Tag609(/*uint64_t:0:0:225941:e*/*g_88))) != /*TAG610:STA*/((int32_t)(realsmith_ofWHK((unsigned long)(g_379[5])+(17), (int)(***g_246)+(41))+(unsigned long)(p_59)+(unsigned long)(g_379[5])+(unsigned long)(***g_246)+(unsigned long)(g_184)-(4815742625))+p_59)/*TAG610:END:p_59*/)))), Tag611(/*uint64_t:226405:226405:225941:e*/l_1347))) , Tag612(/*int32_t:226405:226405:225941:e*/p_59)) == Tag613(/*uint64_t:0:0:225941:e*/g_608)) & 0xCF69L))) >= Tag614(/*int32_t:226405:226405:225941:e*/p_59)) >= 0xEEL);
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
/*aft_stmt:225941*/
        for (g_326 = 2; (g_326 >= 0); g_326 -= 1)
        { /* block id: 542 */
            uint16_t l_1376 = 0x2110L;
            /*bef_stmt:226028*/
return /*TAG615:STA*/((uint16_t)(realsmith_proxy_k7iVT((int)(l_1376)+(-8557), (int)(l_1376)+(-8555))+(int)(l_1376)-(8465))+l_1376)/*TAG615:END:l_1376*/;
/*aft_stmt:226028*/
        }
    }
    /*bef_stmt:226376*/
/*bef_stmt:226376*/
/*bef_stmt:226376*/
/*bef_stmt:226376*/
/*bef_stmt:226376*/
(*g_969) = func_65(((safe_mul_func_int8_t_s_s(Tag616(/*uint32_t:226405:226405:226376:e*/l_1379[0]), Tag617(/*int32_t:0:0:226376:e*/g_277))) < (((Tag618(/*int32_t:226405:226405:226376:e*/p_59) , l_1380) == (void*)0) && (!(safe_div_func_int16_t_s_s(0xCB94L, (safe_rshift_func_uint8_t_u_s((g_76 |= Tag619(/*uint32_t:226405:226405:226376:e*/l_1379[0])), 6))))))), (l_1057[2] = (Tag620(/*int32_t:226405:226405:226376:e*/p_59) >= 6L)), l_1232[1][1][1]);
/*aft_stmt:226376*/
/*aft_stmt:226376*/
/*aft_stmt:226376*/
/*aft_stmt:226376*/
/*aft_stmt:226376*/
    /*bef_stmt:226403*/
return (Tag621(/*uint16_t:0:0:226403:e*/**g_536));
/*aft_stmt:226403*/
}


/* ------------------------------------------ */
/* 
 * reads : g_329 g_4 g_88 g_89 g_247 g_248 g_103 g_277 g_327 g_80 g_312 g_257 g_379 g_75 g_76 g_336 g_128 g_326 g_85 g_44 g_536 g_537 g_166 g_243 g_713 g_333 g_808 g_634 g_177 g_165 g_963 g_968 g_577 g_969
 * writes: g_243 g_329 g_277 g_379 g_76 g_326 g_103 g_450 g_336 g_85 g_333 g_527 g_312 g_166 g_89 g_80 g_578
 */
static int32_t  func_60(int32_t * p_61, int32_t * p_62, int32_t * p_63, int32_t  p_64)
{ /* block id: 135 */
    uint64_t l_393 = 0x56B708064E77AF36LL;
    const int32_t l_406[8] = {3L,0L,3L,3L,0L,3L,3L,0L};
    int32_t *l_411 = &g_44;
    int32_t l_412 = 0xDE0DC349L;
    int32_t l_413 = 1L;
    int32_t l_414 = 0xEEB75CB6L;
    int32_t l_418 = 0x79F95C6FL;
    int32_t l_419 = 0x5802B384L;
    int32_t l_420 = 0x849622E4L;
    int32_t l_421 = 0xEBBCC510L;
    uint32_t * const l_449 = &g_450;
    uint32_t * const *l_448 = &l_449;
    uint64_t l_474 = 0UL;
    const uint32_t *l_524 = &g_103[6][0];
    const uint32_t **l_523 = &l_524;
    const uint32_t ***l_522[5] = {&l_523,&l_523,&l_523,&l_523,&l_523};
    int8_t l_606 = 0L;
    uint64_t **l_611 = &g_88;
    int16_t l_652 = 1L;
    uint16_t *l_673 = &g_329;
    uint8_t *l_674 = (void*)0;
    int32_t l_684 = 0x960DC080L;
    int32_t **l_766 = &g_646;
    uint8_t *l_793[3];
    int16_t l_807 = (-1L);
    uint64_t l_810 = 0x10297337879278D9LL;
    uint32_t **l_873[8];
    int32_t * const l_993[1] = {&g_379[3]};
    int i;
    for (i = 0; i < 3; i++)
        l_793[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_873[i] = &g_248;
    g_243 = &g_277;
    /*bef_stmt:237605*/
if (Tag622(/*uint64_t:251530:251530:237605:e*/l_393))
    { /* block id: 137 */
        uint64_t **l_398[2][6] = {{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88}};
        const uint32_t l_409 = 0UL;
        int32_t l_415 = 9L;
        int32_t l_416 = 1L;
        int32_t l_417[3];
        uint32_t **l_446 = &g_248;
        uint32_t *** const *l_480 = (void*)0;
        uint8_t *l_504 = &g_336;
        int64_t *l_521 = &g_85;
        uint16_t *l_525 = &g_333;
        int64_t *l_526 = &g_527;
        int32_t *l_531[3];
        int32_t **l_558[4];
        uint32_t *** const **l_580 = (void*)0;
        int32_t l_600[9][5] = {{0L,0x28305BFBL,0x28305BFBL,0L,0x8213EF97L},{2L,0x703B3D18L,0x18C094D8L,5L,0x8213EF97L},{0x28305BFBL,2L,0x95F1D11CL,0L,0x95F1D11CL},{0L,0L,0x8213EF97L,5L,0x18C094D8L},{0xC3ACC7FAL,7L,0x8213EF97L,0L,0x28305BFBL},{0x7C1040AAL,2L,0xC3ACC7FAL,2L,0x703B3D18L},{7L,(-4L),0x95F1D11CL,0x703B3D18L,0x8213EF97L},{7L,0x8213EF97L,0L,0x28305BFBL,0x28305BFBL},{0x703B3D18L,5L,0x703B3D18L,(-4L),0x8213EF97L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_417[i] = 0x5EEE8872L;
        for (i = 0; i < 3; i++)
            l_531[i] = &l_416;
        for (i = 0; i < 4; i++)
            l_558[i] = &l_531[0];
        for (g_329 = 7; (g_329 <= 26); ++g_329)
        { /* block id: 140 */
            int32_t **l_407 = (void*)0;
            int32_t **l_408[1];
            uint64_t **l_410 = &g_88;
            uint8_t l_422 = 253UL;
            uint32_t * const *l_447[7] = {&g_248,(void*)0,(void*)0,&g_248,(void*)0,(void*)0,&g_248};
            int i;
            for (i = 0; i < 1; i++)
                l_408[i] = (void*)0;
            /*bef_stmt:230295*/
/*bef_stmt:230295*/
/*bef_stmt:230295*/
/*bef_stmt:230295*/
/*bef_stmt:230295*/
/*bef_stmt:230295*/
/*bef_stmt:230295*/
g_277 ^= ((Tag623(/*int32_t:0:0:230295:e*/g_4[0]) & 1UL) | (safe_rshift_func_uint16_t_u_u((l_398[0][5] == ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(Tag624(/*int32_t:251530:251530:230295:e*/p_64), ((+((/*TAG625:STA*/((uint64_t)(realsmith_Zpb2E((int)(g_277)+(1706663189), (int)(g_379[5])+(32))+(int)(*g_88)+(int)(g_379[5])+(int)(g_608)+(int)(g_277)+(int)(g_4[0])-(-1706662640))+*g_88)/*TAG625:END:*g_88*/) && ((-2L) & ((((safe_add_func_int32_t_s_s(/*TAG626:STA*/((int32_t)(realsmith_proxy_DSOtN((int)(l_406[1])+(-65), (unsigned long)(l_406[1])+(77), (unsigned long)(l_406[1])+(34))+(int)(l_406[1])-(0))+l_406[1])/*TAG626:END:l_406[1]*/, (0x8383E0AAL & ((g_243 = (void*)0) == p_61)))) < /*TAG627:STA*/((int32_t)(realsmith_VvCaa((int)(g_608)+(81))+(int)(l_406[1])+(int)(*g_88)+(int)(g_4[0])+(int)(l_393)+(int)(g_608)-(1316466485))+l_406[1])/*TAG627:END:l_406[1]*/) , 247UL) , (-1L))))) | (Tag628(/*uint32_t:0:0:230295:e*/**g_247))))), Tag629(/*const uint32_t:237568:251530:230295:e*/l_409))) , l_410)), 12)));
/*aft_stmt:230295*/
/*aft_stmt:230295*/
/*aft_stmt:230295*/
/*aft_stmt:230295*/
/*aft_stmt:230295*/
/*aft_stmt:230295*/
/*aft_stmt:230295*/
            l_411 = &g_4[0];
            l_422--;
            for (l_420 = 0; (l_420 == (-29)); l_420 = safe_sub_func_int64_t_s_s(l_420, 1))
            { /* block id: 147 */
                uint64_t l_427 = 18446744073709551615UL;
                int64_t l_464 = 0L;
                uint64_t l_465 = 4UL;
                uint8_t *l_476 = &g_364;
                uint32_t *** const **l_481 = &l_480;
                int32_t l_497[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_497[i] = (-2L);
                /*bef_stmt:230692*/
(*p_62) = Tag630(/*uint64_t:236187:236208:230692:e*/l_427);
/*aft_stmt:230692*/
                for (l_414 = (-23); (l_414 != 6); ++l_414)
                { /* block id: 151 */
                    uint64_t l_444[2][9];
                    int32_t l_445 = 5L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_444[i][j] = 0x1B4B37A56B2E2015LL;
                    }
                    /*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
/*bef_stmt:231551*/
(*p_62) &= ((((safe_div_func_int8_t_s_s(((~(Tag631(/*uint32_t:0:0:231551:e*/**g_247))) && (Tag632(/*int32_t:251530:251530:231551:e*/p_64) , (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(Tag633(/*int32_t:251530:251530:231551:e*/p_64), ((safe_mul_func_int16_t_s_s(((Tag634(/*uint32_t:0:0:231551:e*/*g_248)) == (l_444[0][1] &= ((safe_sub_func_uint64_t_u_u(18446744073709551615UL, (Tag635(/*int8_t:0:0:231551:e*/g_327[2][8]) | Tag636(/*uint64_t:0:0:231551:e*/g_80)))) & (Tag637(/*int32_t:251530:251530:231551:e*/p_64) > (safe_unary_minus_func_uint32_t_u((((safe_div_func_int8_t_s_s(Tag638(/*int32_t:251530:251530:231551:e*/p_64), 0x44L)) && Tag639(/*uint64_t:0:0:231551:e*/g_312)) == 0x58C7L))))))), Tag640(/*uint64_t:0:0:231551:e*/g_257))) | Tag641(/*int32_t:251530:251530:231551:e*/p_64)))) < 18446744073709551612UL), 2)))), 0x8EL)) >= Tag642(/*int32_t:231557:236187:231551:e*/l_445)) , (void*)0) != (void*)0);
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
/*aft_stmt:231551*/
                }
                if ((l_446 != (l_448 = l_447[5])))
                { /* block id: 156 */
                    int32_t *l_472 = (void*)0;
                    int16_t *l_473 = &g_326;
                    uint8_t **l_475[8][1] = {{&g_75},{(void*)0},{&g_75},{(void*)0},{&g_75},{(void*)0},{&g_75},{(void*)0}};
                    int i, j;
                    for (l_414 = 2; (l_414 >= 0); l_414 -= 1)
                    { /* block id: 159 */
                        int i;
                        /*bef_stmt:232491*/
/*bef_stmt:232491*/
/*bef_stmt:232491*/
/*bef_stmt:232491*/
/*bef_stmt:232491*/
(*p_63) = ((safe_lshift_func_int8_t_s_s((-1L), (0xBC0FL <= l_417[l_414]))) , ((safe_add_func_int8_t_s_s(0x12L, 0UL)) != (safe_lshift_func_int16_t_s_s(((((safe_div_func_int8_t_s_s(l_417[l_414], ((*g_75)++))) , l_417[l_414]) || ((Tag643(/*int32_t:251530:251530:232491:e*/p_64) && (safe_div_func_uint8_t_u_u((~Tag644(/*uint8_t:0:0:232491:e*/g_336)), Tag645(/*int64_t:236187:236208:232491:e*/l_464)))) | Tag646(/*int32_t:251530:251530:232491:e*/p_64))) != Tag647(/*uint64_t:236187:236208:232491:e*/l_465)), 3))));
/*aft_stmt:232491*/
/*aft_stmt:232491*/
/*aft_stmt:232491*/
/*aft_stmt:232491*/
/*aft_stmt:232491*/
                    }
                    /*bef_stmt:232733*/
/*bef_stmt:232733*/
g_379[0] ^= (l_417[2] = (((void*)0 == &g_177[8][0][1]) , ((safe_mul_func_uint8_t_u_u(0x3FL, Tag648(/*int32_t:0:0:232733:e*/g_4[1]))) > (safe_rshift_func_uint8_t_u_u(((Tag649(/*int32_t:251530:251530:232733:e*/*l_411)) == 0UL), 6)))));
/*aft_stmt:232733*/
/*aft_stmt:232733*/
                    /*bef_stmt:232884*/
/*bef_stmt:232884*/
p_62 = func_65(((safe_lshift_func_uint16_t_u_u((l_472 != &g_277), 7)) > ((*l_473) = Tag650(/*int32_t:251530:251530:232884:e*/p_64))), Tag651(/*uint64_t:251530:251530:232884:e*/l_474), (l_476 = &l_422));
/*aft_stmt:232884*/
/*aft_stmt:232884*/
                }
                else
                { /* block id: 168 */
                    int16_t l_477[7][5][4] = {{{0x29D9L,0L,3L,0xC282L},{0xF5D2L,8L,(-7L),1L},{0x867EL,(-3L),0L,0x455FL},{8L,(-6L),0L,0x97C8L},{0xF5D2L,0x455FL,7L,3L}},{{1L,0x3C43L,0xDA58L,0x4521L},{0x4521L,1L,(-1L),0xF7E6L},{0x437BL,0x867EL,3L,9L},{6L,0L,0x0A5DL,(-3L)},{0L,1L,0x1B2EL,0x455FL}},{{(-7L),1L,(-7L),3L},{0xF7E6L,0xCC50L,0x7DA7L,(-3L)},{1L,(-6L),1L,0xCC50L},{0x9C18L,6L,1L,1L},{1L,0x867EL,0x7DA7L,0xBE02L}},{{0xF7E6L,0L,(-7L),0xF7E6L},{(-7L),0xF7E6L,0x1B2EL,(-7L)},{0L,0x29D9L,0x0A5DL,0x97C8L},{6L,0x6ACCL,3L,(-3L)},{0x437BL,1L,(-1L),(-7L)}},{{0x4521L,(-3L),0xDA58L,6L},{1L,0L,7L,7L},{0xF5D2L,0L,0L,1L},{8L,0xF7E6L,0L,0x4521L},{0x867EL,(-6L),(-7L),(-5L)}},{{0xF5D2L,0x4521L,3L,3L},{0x29D9L,0x29D9L,0xDA58L,0xCC50L},{0x455FL,1L,9L,6L},{0x437BL,8L,0x4E1BL,9L},{0xF7E6L,8L,0x0A5DL,6L}},{{8L,1L,(-6L),0xCC50L},{(-7L),0x29D9L,0L,3L},{(-3L),0x4521L,0x7DA7L,(-5L)},{0x3C43L,(-6L),(-1L),0x4521L},{0x9C18L,0xF7E6L,9L,1L}}};
                    int i, j, k;
                    /*bef_stmt:235535*/
if (Tag652(/*int16_t:235584:236187:235535:e*/l_477[5][0][2]))
                        break;
/*aft_stmt:235535*/
                    /*bef_stmt:235580*/
if (Tag653(/*int16_t:235584:236187:235580:e*/l_477[6][4][1]))
                        continue;
/*aft_stmt:235580*/
                }
                /*bef_stmt:236170*/
/*bef_stmt:236170*/
/*bef_stmt:236170*/
/*bef_stmt:236170*/
/*bef_stmt:236170*/
/*bef_stmt:236170*/
/*bef_stmt:236170*/
/*bef_stmt:236170*/
/*bef_stmt:236170*/
/*bef_stmt:236170*/
(*p_63) ^= (l_497[2] = (Tag654(/*int32_t:251530:251530:236170:e*/p_64) , ((safe_add_func_uint64_t_u_u(Tag655(/*int32_t:251530:251530:236170:e*/p_64), (((*l_481) = l_480) != (void*)0))) | (+(safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(Tag656(/*int32_t:251530:251530:236170:e*/p_64), (((*l_449) = ((**l_446) = 0x0F213D79L)) , (((safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint64_t_u_u(((Tag657(/*int32_t:251530:251530:236170:e*/*l_411)) > (safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s(0x37L, Tag658(/*int32_t:0:0:236170:e*/g_128))), Tag659(/*uint64_t:236187:236208:236170:e*/l_427)))), (-1L))) >= (Tag660(/*uint32_t:0:0:236170:e*/**g_247))) , 65528UL), Tag661(/*const uint32_t:237568:251530:236170:e*/l_409))) && 0x6DL) <= (-1L))))) < Tag662(/*int16_t:0:0:236170:e*/g_326)), (-1L))), Tag663(/*int32_t:251530:251530:236170:e*/p_64)))))));
/*aft_stmt:236170*/
/*aft_stmt:236170*/
/*aft_stmt:236170*/
/*aft_stmt:236170*/
/*aft_stmt:236170*/
/*aft_stmt:236170*/
/*aft_stmt:236170*/
/*aft_stmt:236170*/
/*aft_stmt:236170*/
/*aft_stmt:236170*/
            }
        }
        /*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
/*bef_stmt:236972*/
(*p_62) ^= (safe_mul_func_int8_t_s_s(Tag664(/*int32_t:251530:251530:236972:e*/p_64), ((((safe_rshift_func_int8_t_s_u(/*TAG665:STA*/((int32_t)(realsmith_proxy_jLieR((unsigned char)(l_415)+(-46), (unsigned char)(l_415)+(74), (unsigned long)(l_415)+(1), (unsigned char)(l_415)+(3), (unsigned long)(l_415)+(39), (unsigned char)(l_415)+(-59), (unsigned long)(l_415)+(64), (int)(l_415)+(27))+(int)(l_415)-(9))+l_415)/*TAG665:END:l_415*/, ((safe_mul_func_uint8_t_u_u(((*g_75) |= Tag666(/*int32_t:251530:251530:236972:e*/p_64)), (--(*l_504)))) & ((*l_526) = (safe_mul_func_int8_t_s_s((/*TAG667:STA*/((int32_t)(realsmith_proxy_NnzKl((int)(l_415)+(11))+(char)(l_415)-(94))+l_415)/*TAG667:END:l_415*/ || (((safe_add_func_int16_t_s_s(Tag668(/*int32_t:0:0:236972:e*/g_4[0]), ((safe_add_func_uint16_t_u_u(Tag669(/*int32_t:0:0:236972:e*/g_4[0]), (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u((l_417[1] = ((*l_525) = (((0x7EBEL < (safe_sub_func_int64_t_s_s((&l_448 != (((*l_521) |= /*TAG670:STA*/((int32_t)(realsmith_EjwCK((int)(p_64)+(-65454))+(int)(p_64)-(65528))+p_64)/*TAG670:END:p_64*/) , l_522[1])), (Tag671(/*uint64_t:0:0:236972:e*/*g_88))))) , &l_504) != &g_75))), 0x18F7L)) >= Tag672(/*int8_t:0:0:236972:e*/g_327[2][8])), Tag673(/*int32_t:251530:251530:236972:e*/p_64))), 13)))) >= 0x0187B0370713F4A7LL))) , 0x928EBB8FL) , 0xA4L)), /*TAG674:STA*/((int32_t)(realsmith_D8kdp((int)(p_64)+(-65474), (int)(p_64)+(-65502), (int)(p_64)+(-65439), (int)(p_64)+(-65460), (int)(p_64)+(-65470), (int)(p_64)+(-65499))+(int)(p_64)-(65528))+p_64)/*TAG674:END:p_64*/)))))) != /*TAG675:STA*/((int32_t)(realsmith_proxy_liA6O((char)(p_64)+(3))+(int)(p_64)-(65528))+p_64)/*TAG675:END:p_64*/) , 1L) < (Tag676(/*uint32_t:0:0:236972:e*/**g_247)))));
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
/*aft_stmt:236972*/
        for (g_312 = 0; (g_312 <= 11); g_312 = safe_add_func_uint32_t_u_u(g_312, 1))
        { /* block id: 188 */
            int32_t *l_530 = &l_414;
            int32_t l_601[9] = {0x4526F646L,0x4526F646L,0x207FD5DAL,0x4526F646L,0x4526F646L,0x207FD5DAL,0x4526F646L,0x4526F646L,0x207FD5DAL};
            int8_t *l_618 = &g_166;
            int8_t *l_619 = (void*)0;
            int8_t *l_620 = &l_606;
            const int32_t l_627 = 0x981F19F4L;
            uint32_t *** const **l_639 = &l_480;
            int i;
            l_531[0] = ((5L != 0L) , l_530);
        }
        /*bef_stmt:237564*/
/*bef_stmt:237564*/
/*bef_stmt:237564*/
(*p_62) = (safe_mod_func_int64_t_s_s(((-1L) & (0L < (/*TAG677:STA*/((int32_t)(realsmith_proxy_OP0yq((int)(p_64)+(-65553), (int)(p_64)+(-65447), (int)(p_64)+(-65469), (int)(p_64)+(-65499))+(int)(p_64)-(65528))+p_64)/*TAG677:END:p_64*/ & Tag678(/*int32_t:251530:251530:237564:e*/p_64)))), (Tag679(/*int32_t:251530:251530:237564:e*/*l_411))));
/*aft_stmt:237564*/
/*aft_stmt:237564*/
/*aft_stmt:237564*/
    }
    else
    { /* block id: 266 */
        /*bef_stmt:237600*/
return Tag680(/*int32_t:251530:251530:237600:e*/p_64);
/*aft_stmt:237600*/
    }
/*aft_stmt:237605*/
    /*bef_stmt:237932*/
/*bef_stmt:237932*/
/*bef_stmt:237932*/
/*bef_stmt:237932*/
l_420 |= (((((g_277 = ((*p_62) = 0xEB2BDE5AL)) ^ (safe_sub_func_int32_t_s_s((0x729DL > (/*TAG681:STA*/((uint16_t)(realsmith_i2QVM((int)(**g_536)+(33))+(int)(**g_536)-(38))+**g_536)/*TAG681:END:**g_536*/)), ((/*TAG682:STA*/((int32_t)(realsmith_proxy_QKJY9((int)(*l_411)+(-32), (int)(*l_411)+(23), (int)(*l_411)+(57), (int)(*l_411)+(11))+(int)(*l_411)-(-7))+*l_411)/*TAG682:END:*l_411*/) < ((safe_sub_func_int16_t_s_s((~(safe_rshift_func_uint16_t_u_u(Tag683(/*int32_t:251530:251530:237932:e*/l_684), (safe_lshift_func_uint16_t_u_u(0x636AL, 2))))), (!(/*TAG684:STA*/((int32_t)(realsmith_proxy_JZCzQ((int)(*l_411)+(20), (int)(*l_411)+(65))+(int)(*l_411)-(4))+*l_411)/*TAG684:END:*l_411*/)))) != 1L))))) >= 0x60ADF701A50E411ELL) , (void*)0) != (void*)0);
/*aft_stmt:237932*/
/*aft_stmt:237932*/
/*aft_stmt:237932*/
/*aft_stmt:237932*/
    for (l_474 = 0; (l_474 <= 2); l_474 += 1)
    { /* block id: 274 */
        int16_t l_694 = (-1L);
        int64_t *l_700 = &g_527;
        int32_t l_724 = 0x792E91C4L;
        int32_t * const *l_840 = (void*)0;
        uint64_t **l_855[3][3] = {{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}};
        uint32_t **l_876 = &g_248;
        int32_t l_910 = 7L;
        int32_t l_912 = 1L;
        int32_t l_914 = 0x86736783L;
        uint8_t *l_998 = &g_336;
        uint8_t *l_999 = &g_336;
        int i, j;
        p_62 = p_63;
        for (g_166 = 0; (g_166 <= 2); g_166 += 1)
        { /* block id: 278 */
            int64_t *l_695 = &g_85;
            int32_t l_701 = 0x8F1C1515L;
            int32_t l_702 = (-4L);
            int32_t **l_703 = &g_243;
            int8_t l_708 = 9L;
            uint8_t *l_774 = &g_76;
            int16_t * const l_799[3][1] = {{(void*)0},{(void*)0},{(void*)0}};
            uint64_t l_812[2][1][5];
            const uint64_t *l_853 = &l_810;
            const uint64_t * const *l_852 = &l_853;
            int32_t l_864 = 9L;
            uint32_t **l_874 = &g_248;
            int32_t l_917 = (-3L);
            int32_t l_918[1];
            uint64_t l_921 = 0x8CB5ADE3933E42B3LL;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_812[i][j][k] = 18446744073709551615UL;
                }
            }
            for (i = 0; i < 1; i++)
                l_918[i] = 0x586312CEL;
            /*bef_stmt:240056*/
/*bef_stmt:240056*/
/*bef_stmt:240056*/
/*bef_stmt:240056*/
/*bef_stmt:240056*/
/*bef_stmt:240056*/
/*bef_stmt:240056*/
/*bef_stmt:240056*/
/*bef_stmt:240056*/
(*l_703) = func_65((l_702 = ((safe_rshift_func_uint16_t_u_u(g_327[g_166][(g_166 + 4)], (l_701 |= (/*TAG685:STA*/((int32_t)(realsmith_GhI4U((unsigned int)(*l_411)+(-4294967251))+(int)(p_64)+(int)(g_327[2][8])+(int)(*l_411)+(int)(**g_247)-(65405))+p_64)/*TAG685:END:p_64*/ <= ((((*l_695) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(Tag686(/*int16_t:251497:251530:240056:e*/l_694), 8)), (Tag687(/*int32_t:251530:251530:240056:e*/*l_411))))) , ((-1L) == /*TAG688:STA*/((int32_t)(realsmith_proxy_3svlo((int)(g_327[2][8])+(50), (int)(l_684)+(1777483683))+(int)(p_64)+(int)(*l_411)+(int)(l_684)+(int)(g_327[2][8])-(-1777418215))+p_64)/*TAG688:END:p_64*/)) < ((safe_sub_func_int8_t_s_s((Tag689(/*int32_t:251530:251530:240056:e*/*l_411)), (safe_mod_func_uint16_t_u_u(((&g_527 != l_700) <= Tag690(/*int32_t:251530:251530:240056:e*/p_64)), /*TAG691:STA*/((int32_t)(realsmith_13Tlf((int)(**g_247)+(13), (int)(p_64)+(-65520))+(int)(p_64)+(int)(**g_247)+(int)(l_684)+(int)(*l_411)+(int)(g_327[2][8])-(-1777418243))+p_64)/*TAG691:END:p_64*/)))) , (-10L))))))) , Tag692(/*int32_t:251530:251530:240056:e*/p_64))), (Tag693(/*int32_t:251530:251530:240056:e*/*p_63)), &g_336);
/*aft_stmt:240056*/
/*aft_stmt:240056*/
/*aft_stmt:240056*/
/*aft_stmt:240056*/
/*aft_stmt:240056*/
/*aft_stmt:240056*/
/*aft_stmt:240056*/
/*aft_stmt:240056*/
/*aft_stmt:240056*/
            (*l_703) = &g_4[0];
            /*bef_stmt:247150*/
/*bef_stmt:247150*/
/*bef_stmt:247150*/
/*bef_stmt:247150*/
/*bef_stmt:247150*/
/*bef_stmt:247150*/
/*bef_stmt:247150*/
if (((safe_mul_func_int8_t_s_s((((*p_62) = (safe_mod_func_int16_t_s_s((l_674 != &g_364), (Tag694(/*uint16_t:0:0:247150:e*/*g_537))))) == ((Tag695(/*int8_t:247156:251497:247150:e*/l_708) && (Tag696(/*int32_t:247156:251497:247150:e*/**l_703))) , (((*g_88) = (/*TAG697:STA*/((int16_t)(realsmith_C7T8Z((int)(*l_411)+(70), (int)(*l_411)+(100), (int)(l_694)+(47), (unsigned long)(p_64)+(-65475))+(int)(l_694)+(int)(p_64)+(int)(*l_411)+(int)(l_684)-(-1777418118))+l_694)/*TAG697:END:l_694*/ , (Tag698(/*uint64_t:0:0:247150:e*/*g_88)))) || 0x1DF5EA1AC5278211LL))), Tag699(/*int32_t:251530:251530:247150:e*/p_64))) < /*TAG700:STA*/((int32_t)(realsmith_proxy_QaBbR((unsigned char)(p_64)+(-305))+(unsigned int)(p_64)+(unsigned int)(l_684)-(3101067177))+p_64)/*TAG700:END:p_64*/))
            { /* block id: 286 */
                int32_t * const *l_740 = (void*)0;
                int32_t * const **l_739 = &l_740;
                int32_t l_747 = 1L;
                uint8_t **l_770 = &l_674;
                uint8_t ***l_769[4][5][6] = {{{&l_770,&l_770,(void*)0,(void*)0,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770}},{{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{(void*)0,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,(void*)0,&l_770,&l_770,&l_770}},{{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770}},{{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,(void*)0,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770},{&l_770,&l_770,&l_770,&l_770,&l_770,&l_770}}};
                uint32_t *l_802[5][3][1] = {{{&g_450},{&g_450},{&g_450}},{{&g_450},{&g_450},{&g_103[4][0]}},{{&g_450},{&g_450},{&g_450}},{{&g_450},{&g_450},{&g_103[4][0]}},{{&g_450},{&g_450},{&g_450}}};
                uint64_t l_809 = 1UL;
                int i, j, k;
                for (g_329 = 0; (g_329 <= 2); g_329 += 1)
                { /* block id: 289 */
                    int64_t l_725 = (-9L);
                    int32_t *l_726 = &l_412;
                    uint8_t *l_773 = &g_364;
                    /*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
/*bef_stmt:243691*/
(*l_726) &= (safe_lshift_func_int8_t_s_s(((/*TAG701:STA*/((int32_t)(realsmith_DHLst((int)(*p_63)+(6))+(int)(p_64)+(int)(l_684)+(int)(*l_411)+(int)(*p_63)-(-1777418128))+p_64)/*TAG701:END:p_64*/ > (safe_div_func_int64_t_s_s((/*TAG702:STA*/((int32_t)(realsmith_proxy_QcE5B((int)(p_64)+(-65615), (int)(l_684)+(1777483723))+(int)(**l_703)+(int)(l_708)+(int)(l_684)+(int)(p_64)-(-1777418118))+**l_703)/*TAG702:END:**l_703*/), /*TAG703:STA*/((int64_t)(realsmith_BAmAD()+(int)(g_713)-(860886615))+g_713)/*TAG703:END:g_713*/))) && (l_725 = ((((*p_63) = (Tag704(/*int32_t:251530:251530:243691:e*/*p_63))) > ((((((safe_div_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(4294967290UL, (safe_mul_func_uint16_t_u_u((Tag705(/*int32_t:251530:251530:243691:e*/p_64) && (safe_mod_func_uint8_t_u_u((l_724 = 1UL), Tag706(/*uint16_t:0:0:243691:e*/g_333)))), 0x0556L)))), Tag707(/*int16_t:251497:251530:243691:e*/l_694))) > Tag708(/*uint64_t:0:0:243691:e*/g_80)), 0x49A2L)) < Tag709(/*int32_t:251530:251530:243691:e*/p_64)) ^ /*TAG710:STA*/((int32_t)(realsmith_proxy_05DaI((int)(g_333)+(-49649), (int)(g_80)+(62))+(int)(g_277)+(int)(g_80)+(int)(g_333)+(int)(g_713)-(511489722))+g_277)/*TAG710:END:g_277*/) | 0x0873L) | /*TAG711:STA*/((int32_t)(realsmith_proxy_7cSJ4((int)(g_713)+(-860886668))+(int)(p_64)+(int)(g_80)+(int)(g_713)+(int)(*p_63)-(860952122))+p_64)/*TAG711:END:p_64*/) != (Tag712(/*int32_t:251530:251530:243691:e*/*l_411)))) ^ 18446744073709551613UL))), /*TAG713:STA*/((int32_t)(realsmith_3n1Po()+(int)(p_64)+(int)(g_277)+(int)(*p_63)+(int)(g_80)-(-349381042))+p_64)/*TAG713:END:p_64*/));
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
/*aft_stmt:243691*/
                    for (l_420 = 2; (l_420 >= 0); l_420 -= 1)
                    { /* block id: 296 */
                        uint8_t ***l_768 = (void*)0;
                        uint8_t ****l_767[8] = {&l_768,&l_768,&l_768,&l_768,&l_768,&l_768,&l_768,&l_768};
                        int16_t *l_777 = (void*)0;
                        int16_t *l_778[8][7] = {{&g_326,&l_652,&l_694,&g_326,&l_652,&g_326,&l_694},{&l_652,&l_652,(void*)0,&g_326,(void*)0,(void*)0,(void*)0},{&g_326,&l_694,&l_694,&g_326,&g_326,&g_326,&g_326},{&g_326,(void*)0,&g_326,&g_326,(void*)0,&g_326,&l_694},{(void*)0,&g_326,(void*)0,&l_652,&l_652,(void*)0,&g_326},{(void*)0,&l_694,&g_326,(void*)0,&g_326,&g_326,(void*)0},{&g_326,&l_694,&l_652,&g_326,&l_694,(void*)0,(void*)0},{&l_694,&g_326,&l_652,&g_326,&l_694,&l_652,&g_326}};
                        int i, j;
                    }
                }
                /*bef_stmt:245542*/
/*bef_stmt:245542*/
/*bef_stmt:245542*/
/*bef_stmt:245542*/
/*bef_stmt:245542*/
/*bef_stmt:245542*/
/*bef_stmt:245542*/
/*bef_stmt:245542*/
/*bef_stmt:245542*/
/*bef_stmt:245542*/
l_809 ^= ((l_793[1] != (((*g_634) = ((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((+(((l_799[0][0] == (void*)0) < (((void*)0 != &g_527) >= ((safe_sub_func_uint8_t_u_u(((((void*)0 == l_802[3][1][0]) ^ (safe_rshift_func_uint16_t_u_s((Tag714(/*int32_t:247156:251497:245542:e*/**l_703)), ((safe_sub_func_int16_t_s_s((l_747 = (/*TAG715:STA*/((int32_t)(realsmith_ECLfv((long)(*l_411)+(46), (long)(g_333)+(-49671))+(long)(*l_411)+(long)(g_333)+(long)(p_64)+(long)(g_713)+(long)(*p_63)-(707185135154485394))+*l_411)/*TAG715:END:*l_411*/)), 0x8BD3L)) || /*TAG716:STA*/((int16_t)(realsmith_os97A((int)(g_80)+(43))-(144115188075855872)+(int)(l_807)+(int)(g_80)+(int)(*l_411)+(int)(*p_63)+(int)(g_277)-(-349446580))+l_807)/*TAG716:END:l_807*/)))) > Tag717(/*int64_t:0:0:245542:e*/g_85)), (Tag718(/*int32_t:251530:251530:245542:e*/*l_411)))) , /*TAG719:STA*/((int32_t)(realsmith_49rC5((unsigned int)(p_64)+(-65503))+((unsigned char)(p_64)-(248))-(37))+p_64)/*TAG719:END:p_64*/))) | (/*TAG720:STA*/((int32_t)(realsmith_AZKcZ((int)(*g_243)+(21), (int)(*g_243)+(94), (int)(*g_243)+(90))+(int)(*g_243)-(-8))+*g_243)/*TAG720:END:*g_243*/))), 0x05L)), (Tag721(/*int32_t:251530:251530:245542:e*/*p_63)))) & /*TAG722:STA*/((int16_t)(realsmith_proxy_TgQbj((char)(g_808[1][7])+(-10))+(int)(g_808[1][7])-(15805))+g_808[1][7])/*TAG722:END:g_808[1][7]*/)) , (void*)0)) , (/*TAG723:STA*/((int32_t)(realsmith_vWApQ((int)(*p_62)+(3), (unsigned long)(*p_62)+(53))+(int)(*p_62)-(5))+*p_62)/*TAG723:END:*p_62*/));
/*aft_stmt:245542*/
/*aft_stmt:245542*/
/*aft_stmt:245542*/
/*aft_stmt:245542*/
/*aft_stmt:245542*/
/*aft_stmt:245542*/
/*aft_stmt:245542*/
/*aft_stmt:245542*/
/*aft_stmt:245542*/
/*aft_stmt:245542*/
                /*bef_stmt:245570*/
l_810 = /*TAG724:STA*/((uint64_t)(realsmith_proxy_gv0H9((int)(l_809)+(-5), (int)(l_809)+(5), (int)(l_809)+(1))+(int)(l_809)-(0))+l_809)/*TAG724:END:l_809*/;
/*aft_stmt:245570*/
            }
            else
            { /* block id: 317 */
                int8_t l_819 = (-4L);
                int16_t **l_844 = &g_634;
                uint16_t l_890[2];
                int32_t l_911[1];
                int32_t l_915 = 0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_890[i] = 1UL;
                for (i = 0; i < 1; i++)
                    l_911[i] = 0xE727422AL;
                for (g_80 = 0; (g_80 <= 2); g_80 += 1)
                { /* block id: 320 */
                    uint8_t l_820 = 255UL;
                    uint16_t *l_825 = &g_329;
                    int32_t **l_839 = &g_646;
                    uint64_t l_842[8] = {0xF96ED6ECC84D88B6LL,0xF96ED6ECC84D88B6LL,0xF96ED6ECC84D88B6LL,0xF96ED6ECC84D88B6LL,0xF96ED6ECC84D88B6LL,0xF96ED6ECC84D88B6LL,0xF96ED6ECC84D88B6LL,0xF96ED6ECC84D88B6LL};
                    int64_t l_861 = 0x0F0B32B1211876B2LL;
                    int8_t l_863 = 0xF5L;
                    uint32_t **l_875 = &g_248;
                    uint32_t l_877[8][5] = {{4294967292UL,0xC3980058L,0xC3980058L,4294967292UL,4294967286UL},{0x3A2EFB05L,0xB976835EL,0xF7A08F08L,0xF7A08F08L,0xB976835EL},{4294967286UL,0xC3980058L,0xCCDD9C51L,4294967291UL,4294967291UL},{0x0538200FL,0xBCD1D587L,0x0538200FL,0xF7A08F08L,4294967294UL},{0x4A7B4762L,4294967292UL,4294967291UL,4294967292UL,0x4A7B4762L},{0x0538200FL,0x3A2EFB05L,0xBCD1D587L,0xB976835EL,0xBCD1D587L},{4294967286UL,4294967286UL,4294967291UL,0x4A7B4762L,1UL},{0x3A2EFB05L,0x0538200FL,0x0538200FL,0x3A2EFB05L,0xBCD1D587L}};
                    int32_t l_906 = (-1L);
                    int32_t l_913 = 5L;
                    int32_t l_916 = 0x7001DE40L;
                    int32_t l_919 = 0xEAFDBAA0L;
                    int32_t l_920 = 0xEAD85B2AL;
                    int i, j;
                    /*bef_stmt:247109*/
l_812[1][0][1] |= (+Tag725(/*int32_t:0:0:247109:e*/g_177[8][0][1]));
/*aft_stmt:247109*/
                }
            }
/*aft_stmt:247150*/
/*aft_stmt:247150*/
/*aft_stmt:247150*/
/*aft_stmt:247150*/
/*aft_stmt:247150*/
/*aft_stmt:247150*/
/*aft_stmt:247150*/
        }
        /*bef_stmt:251491*/
/*bef_stmt:251491*/
/*bef_stmt:251491*/
/*bef_stmt:251491*/
/*bef_stmt:251491*/
/*bef_stmt:251491*/
/*bef_stmt:251491*/
/*bef_stmt:251491*/
/*bef_stmt:251491*/
/*bef_stmt:251491*/
if ((((safe_lshift_func_uint16_t_u_u(((void*)0 != &g_646), (((((*g_88)++) >= (((l_724 |= ((2L ^ (safe_rshift_func_uint16_t_u_s((((safe_div_func_uint32_t_u_u((l_914 |= /*TAG726:STA*/((int32_t)(realsmith_proxy_HF3Cs((char)(p_64)+(-40), (char)(p_64)+(-17), (int)(p_64)+(-65450))+(char)(p_64)-(-56))+p_64)/*TAG726:END:p_64*/), (Tag727(/*int32_t:251530:251530:251491:e*/*p_62)))) ^ (safe_mod_func_uint32_t_u_u((l_910 &= ((((Tag728(/*int32_t:251497:251530:251491:e*/l_912) & (((/*TAG729:STA*/((int32_t)(realsmith_BSlNW()+(char)(*l_411)-(38))+*l_411)/*TAG729:END:*l_411*/) , &g_243) == (void*)0)) != /*TAG730:STA*/((int32_t)(realsmith_proxy_xLxVB((char)(p_64)+(95), (int)(p_64)+(-65458))+(int)(p_64)-(65529))+p_64)/*TAG730:END:p_64*/) != Tag731(/*int32_t:251530:251530:251491:e*/p_64)) || Tag732(/*int32_t:251530:251530:251491:e*/p_64))), Tag733(/*int64_t:0:0:251491:e*/g_713)))) | 0x481D3AE2L), (Tag734(/*int16_t:0:0:251491:e*/*g_634))))) , 0xAA28D954L)) , Tag735(/*int8_t:0:0:251491:e*/g_165)) ^ 6UL)) , 1L) ^ 0xEF9DL))) | 0x5CL) > 0x1D9B2088L))
        { /* block id: 364 */
            uint16_t l_959[4][3][7] = {{{0x32FFL,0x365EL,0xEB3EL,0xEB3EL,0x365EL,0x32FFL,0x365EL},{0x0598L,0x504CL,0x504CL,0x0598L,65535UL,0x0598L,0x504CL},{0x9D97L,0x9D97L,0x32FFL,0xEB3EL,0x32FFL,0x9D97L,0x9D97L}},{{1UL,0x504CL,1UL,0x504CL,1UL,1UL,0x504CL},{65530UL,0x365EL,65530UL,0x32FFL,0x32FFL,65530UL,0x365EL},{0x504CL,65535UL,1UL,1UL,65535UL,0x504CL,65535UL}},{{65530UL,0x32FFL,0x32FFL,65530UL,0x365EL,65530UL,0x32FFL},{1UL,1UL,0x504CL,1UL,0x504CL,1UL,1UL},{0x9D97L,0x32FFL,0xEB3EL,0x32FFL,0x9D97L,0x9D97L,0x32FFL}},{{0x0598L,65535UL,0x0598L,0x504CL,0x504CL,0x0598L,65535UL},{0x32FFL,0x365EL,0xEB3EL,0xEB3EL,0x365EL,0x32FFL,0x365EL},{0x0598L,0x504CL,0x504CL,0x0598L,65535UL,0x0598L,0x504CL}}};
            int i, j, k;
            /*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
/*bef_stmt:250034*/
(*p_62) = (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((-1L) <= (((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((Tag736(/*int32_t:251530:251530:250034:e*/*l_411)) <= (safe_rshift_func_uint8_t_u_u(((Tag737(/*uint8_t:0:0:250034:e*/*g_75)) | (+(((~((*g_88) = ((((l_910 = 0x6EL) || (safe_lshift_func_int16_t_s_s((Tag738(/*int32_t:251530:251530:250034:e*/p_64) , (Tag739(/*int16_t:0:0:250034:e*/*g_634))), 14))) & ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((~(safe_mul_func_uint8_t_u_u((Tag740(/*int32_t:251530:251530:250034:e*/p_64) == (1L || (Tag741(/*int32_t:251530:251530:250034:e*/p_64) != Tag742(/*uint16_t:250062:251497:250034:e*/l_959[0][1][5])))), (Tag743(/*int32_t:251530:251530:250034:e*/*l_411))))), 6)) < Tag744(/*uint16_t:250062:251497:250034:e*/l_959[2][1][3])) < Tag745(/*uint16_t:250062:251497:250034:e*/l_959[0][1][5])), 0UL)) & 4UL)) & (Tag746(/*uint64_t:0:0:250034:e*/*g_88))))) <= Tag747(/*uint16_t:250062:251497:250034:e*/l_959[0][1][5])) <= (Tag748(/*uint16_t:0:0:250034:e*/*g_537))))), (Tag749(/*int32_t:251530:251530:250034:e*/*l_411))))) > Tag750(/*int32_t:251530:251530:250034:e*/p_64)), (Tag751(/*int32_t:251530:251530:250034:e*/*p_61)))) <= 0L), Tag752(/*uint16_t:250062:251497:250034:e*/l_959[0][1][5]))) < (Tag753(/*int32_t:251530:251530:250034:e*/*l_411))) , 0x6CF835F7L)) <= Tag754(/*int32_t:251497:251530:250034:e*/l_724)), Tag755(/*int32_t:251530:251530:250034:e*/p_64))) | (Tag756(/*int32_t:251530:251530:250034:e*/*l_411))), (Tag757(/*uint16_t:0:0:250034:e*/**g_536)))), (Tag758(/*int32_t:251530:251530:250034:e*/*p_63)))), 1)) >= Tag759(/*int32_t:251530:251530:250034:e*/p_64)) >= Tag760(/*int32_t:251530:251530:250034:e*/p_64));
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
/*aft_stmt:250034*/
            (*p_62) |= 0xEE46BD29L;
        }
        else
        { /* block id: 369 */
            uint64_t ***l_960 = &l_855[0][2];
            int32_t l_961 = 5L;
            int32_t l_971 = 0x5634BB11L;
            uint32_t ****l_984 = &g_246;
            (*l_960) = l_855[1][2];
            /*bef_stmt:251477*/
if (Tag761(/*int32_t:251483:251497:251477:e*/l_961))
            { /* block id: 371 */
                int32_t l_970 = 1L;
                /*bef_stmt:250307*/
(*p_63) = /*TAG762:STA*/((int32_t)(realsmith_ExGdr((int)(*p_61)+(62))+(int)(l_910)+(int)(*p_63)+(int)(*p_61)+(int)(l_724)+(int)(**g_536)-(-1440163495))+l_910)/*TAG762:END:l_910*/;
/*aft_stmt:250307*/
                /*bef_stmt:250719*/
/*bef_stmt:250719*/
/*bef_stmt:250719*/
/*bef_stmt:250719*/
/*bef_stmt:250719*/
/*bef_stmt:250719*/
/*bef_stmt:250719*/
/*bef_stmt:250719*/
/*bef_stmt:250719*/
/*bef_stmt:250719*/
l_971 |= ((!(((((void*)0 != &g_379[5]) <= (((*g_634) = (Tag763(/*int32_t:251530:251530:250719:e*/p_64) , Tag764(/*uint64_t:0:0:250719:e*/g_963))) >= ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((Tag765(/*int32_t:251483:251497:250719:e*/l_961) >= (((Tag766(/*int32_t:0:0:250719:e*/g_177[8][0][1]) , (void*)0) != g_968[0][2]) <= (((Tag767(/*int32_t:251530:251530:250719:e*/*l_411)) , 6L) > Tag768(/*int32_t:251530:251530:250719:e*/p_64)))), Tag769(/*int32_t:250736:251483:250719:e*/l_970))), 5)) != Tag770(/*int16_t:251497:251530:250719:e*/l_694)))) == Tag771(/*int32_t:251530:251530:250719:e*/p_64)) | /*TAG772:STA*/((int32_t)(realsmith_t6IxN((int)(l_910)+(40))+(int)(l_910)-(1))+l_910)/*TAG772:END:l_910*/)) != 0x8E49E6B672FE4E30LL);
/*aft_stmt:250719*/
/*aft_stmt:250719*/
/*aft_stmt:250719*/
/*aft_stmt:250719*/
/*aft_stmt:250719*/
/*aft_stmt:250719*/
/*aft_stmt:250719*/
/*aft_stmt:250719*/
/*aft_stmt:250719*/
/*aft_stmt:250719*/
            }
            else
            { /* block id: 375 */
                uint32_t ****l_985 = &g_246;
                int32_t l_988 = 0xD05895A5L;
                /*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
/*bef_stmt:251292*/
(*p_63) |= (safe_sub_func_uint32_t_u_u(Tag773(/*int32_t:251530:251530:251292:e*/p_64), (safe_div_func_int16_t_s_s(((Tag774(/*int8_t:0:0:251292:e*/g_327[1][4]) , (safe_mul_func_int16_t_s_s((Tag775(/*int32_t:251530:251530:251292:e*/p_64) , ((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((Tag776(/*int32_t:251530:251530:251292:e*/*l_411)) && ((((*g_577) = l_984) == l_985) != ((void*)0 == &l_694))), (safe_sub_func_uint32_t_u_u((Tag777(/*int32_t:251497:251530:251292:e*/l_724) || 0x412EL), (Tag778(/*uint32_t:0:0:251292:e*/**g_247)))))) | (Tag779(/*uint32_t:0:0:251292:e*/*g_248))), (Tag780(/*int32_t:251530:251530:251292:e*/*l_411)))), Tag781(/*int32_t:251497:251530:251292:e*/l_724))) & (Tag782(/*uint64_t:0:0:251292:e*/*g_88)))), 0x952EL))) ^ (Tag783(/*int32_t:251530:251530:251292:e*/*l_411))), Tag784(/*int32_t:251470:251483:251292:e*/l_988)))));
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
/*aft_stmt:251292*/
                /*bef_stmt:251430*/
(*g_969) = func_65((safe_sub_func_uint16_t_u_u(Tag785(/*int32_t:251530:251530:251430:e*/p_64), 0xDC78L)), (safe_rshift_func_uint16_t_u_s((&l_988 == l_993[0]), 0)), &g_76);
/*aft_stmt:251430*/
                (*g_969) = p_63;
            }
/*aft_stmt:251477*/
        }
/*aft_stmt:251491*/
/*aft_stmt:251491*/
/*aft_stmt:251491*/
/*aft_stmt:251491*/
/*aft_stmt:251491*/
/*aft_stmt:251491*/
/*aft_stmt:251491*/
/*aft_stmt:251491*/
/*aft_stmt:251491*/
/*aft_stmt:251491*/
    }
    /*bef_stmt:251528*/
return /*TAG786:STA*/((int32_t)(realsmith_proxy_kttpi((int)(p_64)+(-65503))+(int)(p_64)-(65528))+p_64)/*TAG786:END:p_64*/;
/*aft_stmt:251528*/
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_243
 */
static int32_t * func_65(const int16_t  p_66, int32_t  p_67, uint8_t * p_68)
{ /* block id: 131 */
    int32_t **l_391[9];
    uint32_t l_392 = 0xF7EAB353L;
    int i;
    for (i = 0; i < 9; i++)
        l_391[i] = &g_243;
    g_243 = &g_379[0];
    /*bef_stmt:251940*/
l_392 = (Tag787(/*int32_t:251964:251964:251940:e*/p_67) < (-5L));
/*aft_stmt:251940*/
    return &g_379[5];
}


/* ------------------------------------------ */
/* 
 * reads : g_76 g_85 g_88 g_44 g_103 g_4 g_128 g_80 g_89 g_75 g_167 g_184 g_177 g_165 g_246 g_166 g_247 g_248 g_312 g_329 g_333 g_243 g_277 g_327 g_364
 * writes: g_76 g_80 g_85 g_89 g_103 g_128 g_44 g_167 g_177 g_243 g_165 g_246 g_257 g_277 g_329 g_333 g_336
 */
static uint8_t * func_69(uint32_t  p_70, int32_t * p_71, int32_t * p_72, uint8_t * p_73, uint8_t * p_74)
{ /* block id: 11 */
    uint32_t l_77[9] = {1UL,0UL,0UL,1UL,0UL,0UL,1UL,0UL,0UL};
    int32_t l_93 = (-5L);
    int32_t l_156 = (-7L);
    uint64_t l_197 = 1UL;
    int16_t l_244 = 1L;
    int32_t l_285 = 0x4B981139L;
    uint8_t l_363[2][9] = {{1UL,0UL,0UL,1UL,0xEAL,246UL,0xEAL,1UL,0UL},{0xEAL,0xEAL,0xB6L,246UL,251UL,246UL,0xB6L,0xEAL,0xEAL}};
    int32_t l_380 = 7L;
    int32_t l_381 = 1L;
    int32_t l_382 = 1L;
    int32_t l_383 = (-1L);
    int32_t l_385 = 0xD7C64DFFL;
    int32_t l_386[8] = {0xF35F6FEAL,0xF35F6FEAL,0xF35F6FEAL,0xF35F6FEAL,0xF35F6FEAL,0xF35F6FEAL,0xF35F6FEAL,0xF35F6FEAL};
    int16_t l_387 = 0x1DC5L;
    int i, j;
    for (p_70 = 1; (p_70 <= 8); p_70 += 1)
    { /* block id: 14 */
        const uint64_t l_92[3][6][4] = {{{0x09845791C840D7AALL,0x30C446B92DD077F0LL,0x6A13618026BCB33DLL,0x9293E9D6A3610563LL},{0xF1F5868DEE43C49ELL,18446744073709551609UL,0xB82E29568EBAD553LL,2UL},{0x7CF1A457CE1196B4LL,0x3FE182C0C4DA8BF3LL,9UL,0x9293E9D6A3610563LL},{9UL,0xB82E29568EBAD553LL,0x1B3C7CD66DA80F5DLL,0xB82E29568EBAD553LL},{0x9079C9DB8D8D308ELL,0x5B3985E7E01DFB5DLL,18446744073709551609UL,0xF43875C6BA716740LL},{18446744073709551609UL,9UL,6UL,0x09021D5E08CE29F5LL}},{{9UL,0x09845791C840D7AALL,0x9293E9D6A3610563LL,0x7CF1A457CE1196B4LL},{9UL,0xF1F5868DEE43C49ELL,6UL,0x9293E9D6A3610563LL},{18446744073709551609UL,0x7CF1A457CE1196B4LL,18446744073709551609UL,0x9079C9DB8D8D308ELL},{0x9079C9DB8D8D308ELL,0x30C446B92DD077F0LL,0x1B3C7CD66DA80F5DLL,0x1B3C7CD66DA80F5DLL},{9UL,9UL,0x9079C9DB8D8D308ELL,18446744073709551609UL},{0x016C9CC5FAE8CD77LL,18446744073709551615UL,0x9293E9D6A3610563LL,6UL}},{{18446744073709551615UL,0x9079C9DB8D8D308ELL,0x7CF1A457CE1196B4LL,0x9293E9D6A3610563LL},{2UL,0x9079C9DB8D8D308ELL,0x09021D5E08CE29F5LL,6UL},{0x9079C9DB8D8D308ELL,18446744073709551615UL,0xF43875C6BA716740LL,18446744073709551609UL},{0x3FE182C0C4DA8BF3LL,9UL,0xB82E29568EBAD553LL,0x1B3C7CD66DA80F5DLL},{0x9293E9D6A3610563LL,0x30C446B92DD077F0LL,0x9293E9D6A3610563LL,0x9079C9DB8D8D308ELL},{0x70FE6C1E6BC95214LL,0x7CF1A457CE1196B4LL,0xF1F5868DEE43C49ELL,0x9293E9D6A3610563LL}}};
        int64_t * const l_99 = (void*)0;
        int32_t l_116[7][6] = {{0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL,0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL},{0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL,0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL},{0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL,0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL},{0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL,0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL},{0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL,0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL},{0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL,0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL},{0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL,0xD48F7C91L,0xD48F7C91L,0x8AF5EEACL}};
        uint32_t *l_132[10][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
        uint8_t *l_142[10] = {(void*)0,(void*)0,(void*)0,&g_76,&g_76,(void*)0,(void*)0,(void*)0,&g_76,&g_76};
        int32_t *l_153 = &g_128;
        int32_t **l_152 = &l_153;
        const uint32_t l_162[7] = {4294967294UL,4294967294UL,4294967295UL,4294967294UL,4294967294UL,4294967295UL,4294967294UL};
        int8_t l_163 = 0x9CL;
        uint32_t l_286 = 6UL;
        int32_t **l_303 = &g_243;
        uint16_t *l_352[1];
        int32_t *l_365 = &g_44;
        int32_t *l_366 = &g_277;
        int32_t *l_367 = &l_93;
        int32_t *l_368 = &l_93;
        int32_t *l_369 = &g_44;
        int32_t *l_370 = &g_277;
        int32_t *l_371 = &l_93;
        int32_t *l_372 = &g_44;
        int32_t *l_373 = &l_93;
        int32_t *l_374 = &l_116[5][3];
        int32_t *l_375 = &g_277;
        int32_t *l_376 = (void*)0;
        int32_t *l_377 = (void*)0;
        int32_t *l_378[10][10][2] = {{{&l_93,&l_93},{&l_116[5][3],&g_4[0]},{&l_93,&l_116[5][3]},{(void*)0,&l_116[5][3]},{&l_285,(void*)0},{&g_4[0],&l_93},{&g_4[0],(void*)0},{&l_285,&l_116[5][3]},{(void*)0,&l_116[5][3]},{&l_93,&g_4[0]}},{{&l_116[5][3],&l_93},{&l_93,&l_93},{&g_4[0],&l_116[1][1]},{&g_4[0],&l_285},{&l_93,&l_116[5][3]},{&g_4[0],&g_277},{(void*)0,&g_277},{&l_285,(void*)0},{&g_4[0],(void*)0},{&l_116[2][4],&g_4[0]}},{{&l_116[5][3],&l_285},{&g_277,&g_4[0]},{&l_285,(void*)0},{&g_277,&g_44},{&g_44,&l_285},{&g_277,&g_277},{&g_4[0],&l_116[5][3]},{&l_93,&g_44},{&l_93,(void*)0},{&g_4[1],&l_116[5][3]}},{{&g_277,&l_285},{&g_4[0],&l_285},{&g_44,&g_277},{&g_44,&l_285},{&l_93,&g_277},{&l_93,&l_116[5][3]},{&l_116[5][3],&g_277},{&l_285,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{&l_285,&g_277},{&l_116[5][3],&l_116[5][3]},{&l_93,&g_277},{&l_93,&l_285},{&g_44,&g_277},{&g_44,&l_285},{&g_4[0],&l_285},{&g_277,&l_116[5][3]},{&g_4[1],(void*)0}},{{&l_93,&g_44},{&l_93,&l_116[5][3]},{&g_4[0],&g_277},{&l_116[5][3],(void*)0},{(void*)0,&l_116[3][5]},{(void*)0,&l_116[6][3]},{&l_93,&l_93},{&l_116[5][3],&l_285},{&l_93,&g_4[0]},{&g_4[0],(void*)0}},{{(void*)0,(void*)0},{(void*)0,&l_116[5][3]},{(void*)0,(void*)0},{&l_285,&g_44},{&l_116[5][5],(void*)0},{&l_285,&l_285},{&g_277,&g_277},{&l_93,&l_93},{&g_44,&l_116[2][3]},{&l_116[1][1],&g_4[0]}},{{&l_116[2][4],&l_93},{(void*)0,&l_116[2][4]},{&g_4[0],&l_116[5][5]},{&g_4[0],&l_116[2][4]},{(void*)0,&l_93},{&l_116[2][4],&g_4[0]},{&l_116[1][1],&l_116[2][3]},{&g_44,&l_93},{&l_93,&g_277},{&g_277,&l_285}},{{&l_285,(void*)0},{&l_116[5][5],&g_44},{&l_285,(void*)0},{(void*)0,&l_116[5][3]},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_4[0],&g_4[0]},{&l_93,&l_285},{&l_116[5][3],&l_93},{&l_93,&l_116[6][3]}},{{(void*)0,&l_116[3][5]},{(void*)0,(void*)0},{&l_116[5][3],&g_277},{&g_4[0],&l_116[5][3]},{&l_93,&g_44},{&l_93,(void*)0},{&g_4[1],&l_116[5][3]},{&g_277,&l_285},{&g_4[0],&l_285},{&g_44,&g_277}}};
        int32_t l_384 = 0x65458731L;
        uint8_t l_388 = 254UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_352[i] = &g_329;
        for (g_76 = 0; (g_76 <= 8); g_76 += 1)
        { /* block id: 17 */
            uint64_t *l_78 = (void*)0;
            uint64_t *l_79 = &g_80;
            int64_t *l_84 = &g_85;
            uint64_t **l_90 = (void*)0;
            uint64_t **l_91 = (void*)0;
            uint32_t **l_131 = (void*)0;
            uint32_t *l_133 = &l_77[p_70];
            int32_t l_144[4] = {0xCC4819D7L,0xCC4819D7L,0xCC4819D7L,0xCC4819D7L};
            int8_t l_147 = 0xE4L;
            int i;
            /*bef_stmt:263602*/
/*bef_stmt:263602*/
/*bef_stmt:263602*/
l_93 &= (0x36B4ADBCF703B84DLL | ((((((*l_79) = l_77[g_76]) > (+(safe_mod_func_uint64_t_u_u((((((l_77[p_70] >= 0x4055L) | ((*l_84) ^= Tag788(/*uint32_t:286284:286284:263602:e*/l_77[6]))) == (safe_div_func_int32_t_s_s(((l_78 = g_88) == &g_89), /*TAG789:STA*/((uint64_t)(realsmith_proxy_DCy9L((long)(g_327[1][4])+(75), (int)(g_327[1][4])+(-62))+(int)(l_92[1][5][2])+(int)(g_327[1][4])-(-1553922706))+l_92[1][5][2])/*TAG789:END:l_92[1][5][2]*/))) > (0L && l_77[g_76])) || l_77[p_70]), p_70)))) != 6UL) && Tag790(/*int32_t:0:0:263602:e*/g_44)) ^ g_76));
/*aft_stmt:263602*/
/*aft_stmt:263602*/
/*aft_stmt:263602*/
            for (g_89 = 3; (g_89 <= 8); g_89 += 1)
            { /* block id: 24 */
                int64_t *l_98[9][1][7] = {{{&g_85,&g_85,(void*)0,&g_85,(void*)0,&g_85,&g_85}},{{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85}},{{&g_85,&g_85,&g_85,(void*)0,(void*)0,&g_85,&g_85}},{{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85}},{{&g_85,(void*)0,(void*)0,&g_85,&g_85,&g_85,(void*)0}},{{&g_85,&g_85,(void*)0,&g_85,(void*)0,&g_85,&g_85}},{{(void*)0,&g_85,&g_85,&g_85,(void*)0,(void*)0,&g_85}},{{&g_85,&g_85,&g_85,(void*)0,(void*)0,&g_85,&g_85}},{{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85}}};
                uint32_t *l_102 = &g_103[0][1];
                int32_t *l_104 = (void*)0;
                int32_t *l_105[7][6][4] = {{{&g_4[0],&g_44,&g_4[0],(void*)0},{&g_4[0],&l_93,&g_44,&g_4[0]},{&l_93,&l_93,&g_4[0],&g_44},{&g_44,&l_93,&g_4[0],&g_44},{&g_4[0],&g_4[1],&l_93,&g_4[0]},{&g_4[0],&g_4[0],&g_4[1],&l_93}},{{&l_93,(void*)0,&g_4[0],(void*)0},{&l_93,&g_4[0],&l_93,&g_4[0]},{(void*)0,&g_4[0],&g_4[0],&g_4[1]},{&g_4[1],&g_4[0],&g_4[0],&g_44},{&g_4[1],&l_93,&g_4[0],&l_93},{(void*)0,&g_44,&l_93,(void*)0}},{{&l_93,&g_4[0],&g_4[0],&l_93},{&l_93,(void*)0,&g_4[1],&g_4[0]},{&g_4[0],&l_93,&l_93,(void*)0},{&g_4[0],&g_44,&g_4[0],&g_4[0]},{&g_44,&g_44,&g_4[0],&g_4[0]},{&l_93,&l_93,&g_44,&l_93}},{{&g_4[0],&g_4[0],&g_4[0],&g_44},{&g_4[0],&g_4[0],&l_93,&l_93},{&g_4[0],&l_93,&l_93,&g_4[0]},{&g_4[0],&g_44,&l_93,&g_4[0]},{&g_44,&g_44,&g_44,(void*)0},{&l_93,&l_93,&l_93,&g_4[0]}},{{&l_93,(void*)0,&g_4[1],&l_93},{&g_44,&g_4[0],&g_44,(void*)0},{&g_4[1],&g_44,&g_44,&l_93},{&l_93,&l_93,&l_93,&g_44},{&l_93,&g_4[0],&l_93,&g_4[1]},{&l_93,&g_4[0],&g_44,&g_4[0]}},{{&g_4[1],&g_4[0],&g_44,(void*)0},{&g_44,(void*)0,&g_4[1],&l_93},{&l_93,&g_4[0],&l_93,&g_4[0]},{&l_93,&g_4[1],&g_44,&g_44},{&g_44,&l_93,&l_93,&g_44},{&g_4[0],&l_93,&l_93,&g_4[0]}},{{&g_4[0],&l_93,&l_93,(void*)0},{&g_4[0],&g_44,&g_4[0],(void*)0},{&g_4[0],&l_93,&g_44,&g_4[0]},{&l_93,&l_93,&g_4[0],&g_44},{&g_44,&l_93,&g_4[0],&g_44},{&g_4[0],&l_93,&l_93,&l_93}}};
                uint8_t *l_125 = &g_76;
                int32_t *l_126 = (void*)0;
                int32_t *l_127 = &g_128;
                int i, j, k;
                l_93 = (safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((l_98[6][0][0] == l_99), ((--l_77[g_76]) | ((*l_102) |= 4294967287UL)))) & 0x139C94463E91B5B2LL), 5));
                /*bef_stmt:269443*/
/*bef_stmt:269443*/
/*bef_stmt:269443*/
/*bef_stmt:269443*/
/*bef_stmt:269443*/
/*bef_stmt:269443*/
/*bef_stmt:269443*/
/*bef_stmt:269443*/
/*bef_stmt:269443*/
g_44 = (safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((safe_add_func_int16_t_s_s(1L, Tag791(/*int32_t:0:0:269443:e*/g_44))) , ((*l_127) &= (safe_rshift_func_int8_t_s_u(1L, ((safe_mod_func_uint8_t_u_u((Tag792(/*uint8_t:286284:286284:269443:e*/*p_74)), /*TAG793:STA*/((int32_t)(realsmith_proxy_3zscM((int)(g_327[1][4])+(36), (int)(g_327[1][4])+(-81))+(int)(l_116[5][3])+(int)(g_327[1][4])+(int)(**g_247)+(int)(*g_248)-(-728793993))+l_116[5][3])/*TAG793:END:l_116[5][3]*/)) && ((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((void*)0 != l_125), Tag794(/*int32_t:286232:286284:269443:e*/l_116[5][3]))), g_76)), 255UL)), 4)) >= g_76) , /*TAG795:STA*/((int32_t)(realsmith_eYDt4((int)(g_4[0])+(64))+(int)(g_4[0])+(int)(**g_247)+(int)(*g_248)-(-26))+g_4[0])/*TAG795:END:g_4[0]*/) & l_77[p_70])))))) , Tag796(/*int32_t:0:0:269443:e*/g_4[0])), Tag797(/*int32_t:0:0:269443:e*/g_4[0]))) , Tag798(/*uint64_t:0:0:269443:e*/g_80)), Tag799(/*int32_t:286284:286284:269443:e*/l_93)));
/*aft_stmt:269443*/
/*aft_stmt:269443*/
/*aft_stmt:269443*/
/*aft_stmt:269443*/
/*aft_stmt:269443*/
/*aft_stmt:269443*/
/*aft_stmt:269443*/
/*aft_stmt:269443*/
/*aft_stmt:269443*/
            }
            /*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
/*bef_stmt:270167*/
g_44 = ((safe_rshift_func_uint8_t_u_u(Tag800(/*int32_t:286284:286284:270167:e*/l_93), ((l_132[3][0][1] = &l_77[g_76]) == (void*)0))) >= ((((((*l_133) |= Tag801(/*int32_t:0:0:270167:e*/g_4[0])) > ((safe_sub_func_int8_t_s_s((((*l_78) = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((((void*)0 == l_142[4]) ^ ((~Tag802(/*int32_t:270171:286232:270167:e*/l_144[0])) <= ((((safe_sub_func_uint16_t_u_u((/*TAG803:STA*/((int8_t)(realsmith_eOqGA((int)(l_147)+(50))+(int)(l_147)+(int)(l_144[0])-(-867642053))+l_147)/*TAG803:END:l_147*/ , ((&l_93 == p_72) || /*TAG804:STA*/((int32_t)(realsmith_mi8XG((int)(g_4[0])+(104))+(int)(l_116[0][4])+((int)(l_92[1][5][2])-(-1553922717))+(int)(g_4[0])-(-728793975))+l_116[0][4])/*TAG804:END:l_116[0][4]*/)), p_70)) & p_70) || Tag805(/*int32_t:270171:286232:270167:e*/l_144[1])) != Tag806(/*int32_t:270171:286232:270167:e*/l_144[2])))), Tag807(/*int32_t:0:0:270167:e*/g_128))), 5)) , (/*TAG808:STA*/((uint64_t)(realsmith_81BZW((int)(*g_88)+(18))+(int)(*g_88)+(int)(g_4[0])-(19))+*g_88)/*TAG808:END:*g_88*/))) , p_70), 255UL)) & Tag809(/*int32_t:270171:286232:270167:e*/l_144[0]))) <= (-1L)) >= Tag810(/*int64_t:0:0:270167:e*/g_85)) & 18446744073709551615UL));
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
/*aft_stmt:270167*/
        }
        /*bef_stmt:286197*/
/*bef_stmt:286197*/
/*bef_stmt:286197*/
/*bef_stmt:286197*/
if ((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((&g_128 != ((*l_152) = &g_128)), (safe_rshift_func_int16_t_s_s((((((void*)0 != &l_77[p_70]) || Tag811(/*int32_t:286284:286284:286197:e*/l_156)) != 0xBCL) || (((!((((p_70 || 0x8A4D6DA33BDD32EFLL) || ((safe_lshift_func_uint16_t_u_u((((*g_75)++) >= (Tag812(/*const uint32_t:286232:286284:286197:e*/l_162[0]) >= Tag813(/*int8_t:286232:286284:286197:e*/l_163))), 12)) || Tag814(/*int64_t:0:0:286197:e*/g_85))) ^ 0xACL) <= 4L)) >= (-10L)) , 0x03F5253AL)), 3)))), p_70)))
        { /* block id: 38 */
            uint32_t *l_198 = &l_77[p_70];
            uint32_t **l_209 = &l_198;
            int32_t l_239 = 2L;
            int32_t *l_245 = &l_116[3][0];
            for (l_156 = 6; (l_156 >= 1); l_156 -= 1)
            { /* block id: 41 */
                int32_t l_206[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int32_t * const *l_234 = &l_153;
                int32_t l_242 = 7L;
                int i;
                for (g_44 = 0; (g_44 <= 8); g_44 += 1)
                { /* block id: 44 */
                    int32_t *l_164[1];
                    int32_t **l_233 = &l_153;
                    int16_t *l_240 = (void*)0;
                    int16_t *l_241[9];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_164[i] = &l_116[5][3];
                    for (i = 0; i < 9; i++)
                        l_241[i] = (void*)0;
                    g_167--;
                    /*bef_stmt:271447*/
if ((/*TAG815:STA*/((int32_t)(realsmith_proxy_bc875((char)(g_4[0])+(-61), (char)(g_4[0])+(16))+(int)(*p_72)+(int)(g_4[0])-(-15))+*p_72)/*TAG815:END:*p_72*/))
                        continue;
/*aft_stmt:271447*/
                    for (g_85 = 1; (g_85 >= 0); g_85 -= 1)
                    { /* block id: 49 */
                        int16_t *l_174 = (void*)0;
                        int32_t l_175 = 0x2F1CC1EFL;
                        int32_t *l_176 = &g_177[8][0][1];
                        const int32_t *l_183 = &g_184;
                        const int32_t **l_182 = &l_183;
                        uint32_t l_196 = 18446744073709551615UL;
                        uint32_t l_199 = 1UL;
                        int i, j;
                        /*bef_stmt:272521*/
/*bef_stmt:272521*/
/*bef_stmt:272521*/
/*bef_stmt:272521*/
/*bef_stmt:272521*/
/*bef_stmt:272521*/
l_199 |= (0x22L || (((((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((l_175 = g_103[(g_85 + 6)][g_85]), (((*l_176) = ((*l_153) ^= p_70)) , ((safe_rshift_func_uint8_t_u_u(((p_70 , Tag816(/*const uint64_t:286232:286284:272521:e*/l_92[1][5][2])) < (&l_156 != ((*l_182) = &g_177[8][0][1]))), ((+((safe_div_func_int32_t_s_s((0x6403L >= (safe_mod_func_uint8_t_u_u(((*g_75) = (safe_rshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((l_196 = (safe_sub_func_int32_t_s_s((0x4FL || 0x91L), Tag817(/*const int32_t:0:0:272521:e*/g_184)))), 0xE55DAC31F8A238C1LL)), 11))), 255UL))), (Tag818(/*int32_t:286284:286284:272521:e*/*p_71)))) , Tag819(/*int32_t:0:0:272521:e*/g_177[2][0][1]))) , Tag820(/*uint64_t:286284:286284:272521:e*/l_197)))) < p_70)))) , p_70), p_70)) | 0xB9AAB8839AD85155LL) > (Tag821(/*uint64_t:0:0:272521:e*/*g_88))) , (void*)0) != l_198));
/*aft_stmt:272521*/
/*aft_stmt:272521*/
/*aft_stmt:272521*/
/*aft_stmt:272521*/
/*aft_stmt:272521*/
/*aft_stmt:272521*/
                        /*bef_stmt:273072*/
/*bef_stmt:273072*/
/*bef_stmt:273072*/
/*bef_stmt:273072*/
l_175 |= ((((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(Tag822(/*int32_t:273625:274096:273072:e*/l_206[2]), (((safe_rshift_func_int8_t_s_s(((((void*)0 == l_209) , ((void*)0 == &g_76)) || p_70), 3)) | 0x78L) | (+(((safe_add_func_uint8_t_u_u(((((p_70 < ((safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(p_70, 0)) , 0x6BAA406F6B8A0B9BLL), (-1L))) >= (Tag823(/*uint8_t:286284:286284:273072:e*/*p_74)))) , p_70) , (void*)0) != &l_197), p_70)) ^ Tag824(/*int32_t:273625:274096:273072:e*/l_206[2])) != p_70))))), 1)), Tag825(/*const uint32_t:286232:286284:273072:e*/l_162[6]))) >= 0x4A36DFC68BD2B6BCLL) < 246UL) && 0xEE8434840841C128LL);
/*aft_stmt:273072*/
/*aft_stmt:273072*/
/*aft_stmt:273072*/
/*aft_stmt:273072*/
                    }
                    /*bef_stmt:273601*/
/*bef_stmt:273601*/
/*bef_stmt:273601*/
/*bef_stmt:273601*/
/*bef_stmt:273601*/
l_93 = (safe_rshift_func_uint8_t_u_s((p_70 , 1UL), (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((7UL && (++l_77[g_44])) | (((safe_div_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(0UL, (p_70 & ((safe_lshift_func_uint16_t_u_s((l_233 == l_234), p_70)) , (l_242 |= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x1759L, 7)), Tag826(/*int32_t:274096:286232:273601:e*/l_239))) ^ p_70)))))) < p_70), Tag827(/*int32_t:0:0:273601:e*/g_177[5][1][2]))) ^ p_70) && Tag828(/*int8_t:286232:286284:273601:e*/l_163))), (Tag829(/*uint8_t:286284:286284:273601:e*/*p_74)))), Tag830(/*int32_t:0:0:273601:e*/g_4[0])))));
/*aft_stmt:273601*/
/*aft_stmt:273601*/
/*aft_stmt:273601*/
/*aft_stmt:273601*/
/*aft_stmt:273601*/
                }
            }
            g_243 = p_72;
            /*bef_stmt:273678*/
(*l_245) = Tag831(/*int16_t:286284:286284:273678:e*/l_244);
/*aft_stmt:273678*/
            for (g_165 = 8; (g_165 >= 0); g_165 -= 1)
            { /* block id: 68 */
                uint32_t ****l_249 = &g_246;
                int32_t **l_250 = &l_245;
                int32_t *l_251 = &g_44;
                (*l_249) = g_246;
                (*l_250) = p_72;
                (*l_251) = 0x197FE0C6L;
                for (g_89 = 3; (g_89 <= 8); g_89 += 1)
                { /* block id: 74 */
                    int64_t *l_252 = &g_85;
                    (*l_250) = &g_4[0];
                    /*bef_stmt:274064*/
(*l_250) = (((*l_252) = Tag832(/*int8_t:0:0:274064:e*/g_166)) , p_72);
/*aft_stmt:274064*/
                }
            }
        }
        else
        { /* block id: 80 */
            uint64_t l_276[6][9][3] = {{{1UL,1UL,0x1D1B8B10F99018F3LL},{18446744073709551612UL,18446744073709551606UL,18446744073709551612UL},{0UL,0x91655B2EAF8C5385LL,0xB76007C242F11C63LL},{0x09F092F5C2C12883LL,18446744073709551612UL,18446744073709551612UL},{0xB76007C242F11C63LL,18446744073709551606UL,0x1D1B8B10F99018F3LL},{18446744073709551615UL,0x09F092F5C2C12883LL,0xCB2D3B0460979C41LL},{0xB76007C242F11C63LL,0UL,18446744073709551609UL},{0x09F092F5C2C12883LL,18446744073709551615UL,1UL},{0UL,0UL,0UL}},{{18446744073709551612UL,0x09F092F5C2C12883LL,18446744073709551606UL},{1UL,18446744073709551606UL,0UL},{18446744073709551606UL,18446744073709551612UL,1UL},{7UL,0x91655B2EAF8C5385LL,18446744073709551609UL},{18446744073709551606UL,18446744073709551606UL,0xCB2D3B0460979C41LL},{1UL,1UL,0x1D1B8B10F99018F3LL},{18446744073709551612UL,18446744073709551606UL,18446744073709551612UL},{0UL,0x91655B2EAF8C5385LL,0xB76007C242F11C63LL},{0x09F092F5C2C12883LL,18446744073709551612UL,18446744073709551612UL}},{{0xB76007C242F11C63LL,18446744073709551606UL,0x1D1B8B10F99018F3LL},{18446744073709551615UL,0x09F092F5C2C12883LL,0xCB2D3B0460979C41LL},{0xB76007C242F11C63LL,0UL,18446744073709551609UL},{0x09F092F5C2C12883LL,18446744073709551615UL,1UL},{0UL,0UL,0UL},{18446744073709551612UL,0x09F092F5C2C12883LL,18446744073709551606UL},{1UL,18446744073709551606UL,0UL},{18446744073709551606UL,18446744073709551612UL,1UL},{7UL,0x91655B2EAF8C5385LL,18446744073709551609UL}},{{18446744073709551606UL,18446744073709551606UL,0xCB2D3B0460979C41LL},{1UL,1UL,0x1D1B8B10F99018F3LL},{18446744073709551612UL,18446744073709551606UL,18446744073709551612UL},{0UL,0x91655B2EAF8C5385LL,0xB76007C242F11C63LL},{0x09F092F5C2C12883LL,18446744073709551612UL,18446744073709551612UL},{0xB76007C242F11C63LL,18446744073709551606UL,0x1D1B8B10F99018F3LL},{18446744073709551615UL,0x09F092F5C2C12883LL,0xCB2D3B0460979C41LL},{0xB76007C242F11C63LL,0UL,18446744073709551609UL},{0x09F092F5C2C12883LL,18446744073709551615UL,1UL}},{{0UL,0UL,0UL},{18446744073709551612UL,0x09F092F5C2C12883LL,18446744073709551606UL},{1UL,18446744073709551606UL,0UL},{18446744073709551606UL,18446744073709551612UL,1UL},{7UL,0x91655B2EAF8C5385LL,18446744073709551609UL},{18446744073709551606UL,18446744073709551606UL,0xCB2D3B0460979C41LL},{1UL,1UL,0x1D1B8B10F99018F3LL},{18446744073709551612UL,18446744073709551606UL,18446744073709551612UL},{0UL,0x91655B2EAF8C5385LL,0xB76007C242F11C63LL}},{{0x09F092F5C2C12883LL,18446744073709551612UL,18446744073709551612UL},{0xB76007C242F11C63LL,18446744073709551606UL,0x1D1B8B10F99018F3LL},{18446744073709551615UL,0x09F092F5C2C12883LL,0xCB2D3B0460979C41LL},{0xB76007C242F11C63LL,0UL,18446744073709551609UL},{0x09F092F5C2C12883LL,18446744073709551615UL,1UL},{0UL,0UL,0UL},{18446744073709551612UL,0x09F092F5C2C12883LL,18446744073709551606UL},{1UL,18446744073709551606UL,0UL},{18446744073709551606UL,18446744073709551612UL,1UL}}};
            int32_t l_282 = 0x470323A8L;
            int32_t l_283 = 0x9937B97AL;
            int32_t l_284 = 0xC5051C77L;
            uint64_t **l_302 = &g_88;
            const int8_t l_315 = 7L;
            int32_t *l_355[9][9][2] = {{{&g_4[0],&g_4[1]},{&g_44,&l_285},{&l_116[2][1],&l_93},{&l_93,&l_116[5][0]},{&g_44,&g_4[0]},{&l_285,&g_4[0]},{&l_116[5][3],&g_44},{&g_4[0],&l_116[0][0]},{&l_116[5][3],&l_116[5][0]}},{{(void*)0,&l_283},{(void*)0,&g_44},{&l_93,&g_44},{&g_4[1],(void*)0},{(void*)0,&g_4[0]},{&g_277,&l_282},{&l_116[5][3],&l_283},{&l_116[5][3],&l_283},{&l_116[5][3],&l_282}},{{&g_277,&g_4[0]},{(void*)0,(void*)0},{&g_4[1],&g_44},{&l_93,&g_44},{(void*)0,&l_283},{(void*)0,&l_116[5][0]},{&l_116[4][3],&l_116[2][1]},{&g_44,&l_285},{&l_282,&l_285}},{{&l_116[5][0],&g_4[0]},{&l_116[0][0],&l_93},{&l_285,&l_285},{&g_44,(void*)0},{&l_285,&g_4[0]},{&g_4[0],&l_116[5][3]},{&g_4[0],&g_4[0]},{&g_4[1],&l_116[0][0]},{&g_4[1],&g_4[0]}},{{&g_4[0],&l_116[5][3]},{&g_4[0],&g_4[0]},{&l_285,(void*)0},{&g_44,&l_285},{&l_285,&l_93},{&l_116[0][0],&g_4[0]},{&l_116[5][0],&l_285},{&l_282,&l_285},{&g_44,&l_116[2][1]}},{{&l_116[4][3],&l_116[5][0]},{(void*)0,&l_283},{(void*)0,&g_44},{&l_93,&g_44},{&g_4[1],(void*)0},{(void*)0,&g_4[0]},{&g_277,&l_282},{&l_116[5][3],&l_283},{&l_116[5][3],&l_283}},{{&l_116[5][3],&l_282},{&g_277,&g_4[0]},{(void*)0,(void*)0},{&g_4[1],&g_44},{&l_93,&g_44},{(void*)0,&l_283},{(void*)0,&l_116[5][0]},{&l_116[4][3],&l_116[2][1]},{&g_44,&l_285}},{{&l_282,&l_285},{&l_116[5][0],&g_4[0]},{&l_116[0][0],&l_93},{&l_285,&l_285},{&g_44,(void*)0},{&l_285,&g_4[0]},{&g_4[0],&l_116[5][3]},{&g_4[0],&g_4[0]},{&g_4[1],&l_116[0][0]}},{{&g_4[1],&g_4[0]},{&g_4[0],&l_116[5][3]},{&g_4[0],&g_4[0]},{&l_285,(void*)0},{&g_44,&l_285},{&l_285,&l_93},{&l_116[0][0],&g_4[0]},{&l_116[5][0],&l_285},{&l_282,&l_285}}};
            int i, j, k;
            for (g_80 = 0; (g_80 <= 9); g_80 += 1)
            { /* block id: 83 */
                int32_t l_260 = (-1L);
                int32_t *l_278 = &l_93;
                int32_t *l_279 = (void*)0;
                int32_t *l_280 = (void*)0;
                int32_t *l_281[8] = {&l_260,&g_44,&g_44,&l_260,&g_44,&g_44,&l_260,&g_44};
                uint32_t l_320[7][10] = {{9UL,1UL,0UL,0xBF030DFCL,1UL,0xEEC57FC2L,1UL,0UL,1UL,0xEEC57FC2L},{1UL,0x63E0678FL,1UL,0x63E0678FL,1UL,0UL,0xCEEA620BL,1UL,0xBF030DFCL,0xEEC57FC2L},{0xCC8B56E7L,1UL,0x3DE261AEL,0xCEEA620BL,1UL,9UL,0xBF030DFCL,0x3DE261AEL,0x63E0678FL,0xEEC57FC2L},{0xEEC57FC2L,0xCEEA620BL,0x2A2EA79DL,1UL,1UL,1UL,1UL,0xE67C20CEL,0x2F6F7A06L,0x63E0678FL},{0xBF030DFCL,0x13B148A5L,1UL,0x65729E08L,1UL,0xCEEA620BL,4294967288UL,1UL,4294967295UL,0x63E0678FL},{1UL,4294967295UL,0UL,0x13B148A5L,1UL,0x63E0678FL,0x65729E08L,0UL,0x65729E08L,0x63E0678FL},{1UL,4294967288UL,0x4929BF38L,4294967288UL,1UL,0xBF030DFCL,0x2F6F7A06L,0x4929BF38L,0x13B148A5L,0x63E0678FL}};
                int i, j;
                /*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
/*bef_stmt:283963*/
g_243 = ((p_70 ^ (((l_77[p_70] = (Tag833(/*uint32_t:0:0:283963:e*/***g_246))) >= ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((g_257 = p_70) || ((safe_add_func_int16_t_s_s((((*g_88) = Tag834(/*const uint32_t:286232:286284:283963:e*/l_162[2])) != (Tag835(/*int32_t:285598:286185:283963:e*/l_260) || p_70)), (g_277 = ((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((!(safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((Tag836(/*int32_t:285598:286185:283963:e*/l_260) > 0x71184B929F27ABC4LL), (Tag837(/*int32_t:286284:286284:283963:e*/l_156) && (-6L)))) , 0xB468D6D8L), (Tag838(/*uint32_t:0:0:283963:e*/*g_248)))) != Tag839(/*int32_t:286284:286284:283963:e*/l_93)), 4294967295UL)), 18446744073709551615UL))) == 0xC3L), 7)), Tag840(/*uint64_t:286185:286232:283963:e*/l_276[3][8][1]))), 0x03L)) , Tag841(/*int32_t:0:0:283963:e*/g_177[8][0][1]))))) >= Tag842(/*uint32_t:0:0:283963:e*/g_103[3][0]))), (-4L))), 11)) > Tag843(/*int32_t:285598:286185:283963:e*/l_260))) < Tag844(/*const uint64_t:286232:286284:283963:e*/l_92[1][5][2]))) , (void*)0);
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
/*aft_stmt:283963*/
                l_286++;
                /*bef_stmt:285592*/
/*bef_stmt:285592*/
/*bef_stmt:285592*/
/*bef_stmt:285592*/
/*bef_stmt:285592*/
if (((&g_76 != &g_76) && (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(Tag845(/*int32_t:0:0:285592:e*/g_44), (((safe_mod_func_uint32_t_u_u(0x37F39B1BL, (safe_div_func_uint32_t_u_u((Tag846(/*int8_t:0:0:285592:e*/g_166) | (~((Tag847(/*const int32_t:0:0:285592:e*/g_184) == (l_93 = (safe_mod_func_uint64_t_u_u((((void*)0 == l_302) & (l_303 == &g_243)), p_70)))) < 0xD3E1L))), p_70)))) | Tag848(/*int8_t:0:0:285592:e*/g_165)) < (-3L)))), Tag849(/*const int32_t:0:0:285592:e*/g_184)))))
                { /* block id: 91 */
                    int64_t l_325 = 7L;
                    int32_t l_328 = 0xEE604584L;
                    uint16_t *l_332 = &g_333;
                    uint64_t *l_337 = &l_276[3][8][1];
                    /*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
/*bef_stmt:285162*/
g_243 = (((((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(Tag850(/*uint64_t:0:0:285162:e*/g_312), (safe_mul_func_uint8_t_u_u((Tag851(/*uint8_t:0:0:285162:e*/*g_75)), Tag852(/*const int8_t:286185:286232:285162:e*/l_315))))) == ((safe_mod_func_int16_t_s_s((((*l_337) = ((Tag853(/*uint8_t:0:0:285162:e*/*g_75)) >= (g_336 = ((safe_mod_func_uint16_t_u_u(65529UL, Tag854(/*uint32_t:285598:286185:285162:e*/l_320[0][1]))) > ((*l_278) = ((((**l_302)--) == ((((safe_sub_func_int8_t_s_s(p_70, (--g_329))) ^ 0x92D6E2ABL) | ((*l_332)++)) | (0x47A8L > (-2L)))) != 0x243FL)))))) <= 0xA759260AA1E24365LL), Tag855(/*int64_t:0:0:285162:e*/g_85))) == (Tag856(/*uint8_t:286284:286284:285162:e*/*p_74)))) | Tag857(/*int32_t:0:0:285162:e*/g_44)), (Tag858(/*uint8_t:286284:286284:285162:e*/*p_74)))), p_70)), 255UL)) , Tag859(/*uint8_t:0:0:285162:e*/g_76)) , 0x82895629L) , Tag860(/*uint64_t:286185:286232:285162:e*/l_276[3][8][1])) , &l_328);
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
/*aft_stmt:285162*/
                    for (g_89 = 0; (g_89 <= 9); g_89 += 1)
                    { /* block id: 101 */
                        uint16_t **l_351 = &l_332;
                        int32_t l_353 = 0x52411BDBL;
                        int16_t *l_354 = &l_244;
                    }
                    /*bef_stmt:285328*/
if (Tag861(/*const int8_t:286185:286232:285328:e*/l_315))
                        break;
/*aft_stmt:285328*/
                    for (l_283 = 9; (l_283 >= 0); l_283 -= 1)
                    { /* block id: 112 */
                        (*l_303) = l_355[1][4][0];
                        (*l_303) = p_72;
                        /*bef_stmt:285504*/
if ((Tag862(/*int32_t:286284:286284:285504:e*/*p_71)))
                            continue;
/*aft_stmt:285504*/
                    }
                }
                else
                { /* block id: 117 */
                    (*l_303) = &g_277;
                    /*bef_stmt:285582*/
g_44 |= (Tag863(/*int32_t:286232:286284:285582:e*/**l_303));
/*aft_stmt:285582*/
                }
/*aft_stmt:285592*/
/*aft_stmt:285592*/
/*aft_stmt:285592*/
/*aft_stmt:285592*/
/*aft_stmt:285592*/
            }
            /*bef_stmt:286181*/
/*bef_stmt:286181*/
/*bef_stmt:286181*/
/*bef_stmt:286181*/
/*bef_stmt:286181*/
/*bef_stmt:286181*/
/*bef_stmt:286181*/
l_116[5][3] = (((safe_unary_minus_func_int8_t_s((Tag864(/*int8_t:0:0:286181:e*/g_327[2][8]) == (safe_add_func_uint64_t_u_u((0UL | (-1L)), 0x9871A9B2B1DB1BB6LL))))) != ((((safe_add_func_int16_t_s_s((((((***g_246) = (safe_mul_func_uint16_t_u_u(((l_363[0][5] = 0L) & (l_77[p_70] = (p_70 && ((Tag865(/*uint64_t:0:0:286181:e*/*g_88)) , (0x773E6724L < (Tag866(/*uint32_t:286284:286284:286181:e*/l_77[3]) == (Tag867(/*uint8_t:286284:286284:286181:e*/*p_74)))))))), p_70))) != Tag868(/*int32_t:286284:286284:286181:e*/l_93)) ^ 0x1A02D2D96E35F7F7LL) != 0xCD9E7DDAL), p_70)) >= Tag869(/*uint8_t:0:0:286181:e*/g_364)) > 0x43L) >= p_70)) , (Tag870(/*int32_t:286284:286284:286181:e*/*p_72)));
/*aft_stmt:286181*/
/*aft_stmt:286181*/
/*aft_stmt:286181*/
/*aft_stmt:286181*/
/*aft_stmt:286181*/
/*aft_stmt:286181*/
/*aft_stmt:286181*/
        }
/*aft_stmt:286197*/
/*aft_stmt:286197*/
/*aft_stmt:286197*/
/*aft_stmt:286197*/
        ++l_388;
        /*bef_stmt:286228*/
if ((Tag871(/*int32_t:286232:286284:286228:e*/*l_368)))
            break;
/*aft_stmt:286228*/
    }
    return p_73;
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
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_103[i][j], "g_103[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_177[i][j][k], "g_177[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_327[i][j], "g_327[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_379[i], "g_379[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_808[i][j], "g_808[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_963, "g_963", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1254, "g_1254", print_hash_value);
    transparent_crc(g_1335, "g_1335", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1488[i][j], "g_1488[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1586[i], "g_1586[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1836, "g_1836", print_hash_value);
    transparent_crc(g_2107, "g_2107", print_hash_value);
    transparent_crc(g_2108, "g_2108", print_hash_value);
    transparent_crc(g_2215, "g_2215", print_hash_value);
    transparent_crc(g_2488, "g_2488", print_hash_value);
    transparent_crc(g_2492, "g_2492", print_hash_value);
    transparent_crc(g_2599, "g_2599", print_hash_value);
    transparent_crc(g_3185, "g_3185", print_hash_value);
    transparent_crc(g_3325, "g_3325", print_hash_value);
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

XXX max expression depth: 52
breakdown:
   depth: 1, occurrence: 272
   depth: 2, occurrence: 62
   depth: 3, occurrence: 12
   depth: 4, occurrence: 2
   depth: 5, occurrence: 3
   depth: 7, occurrence: 5
   depth: 8, occurrence: 2
   depth: 9, occurrence: 1
   depth: 10, occurrence: 1
   depth: 12, occurrence: 1
   depth: 13, occurrence: 1
   depth: 14, occurrence: 2
   depth: 15, occurrence: 2
   depth: 16, occurrence: 1
   depth: 17, occurrence: 1
   depth: 18, occurrence: 5
   depth: 19, occurrence: 4
   depth: 20, occurrence: 7
   depth: 21, occurrence: 3
   depth: 22, occurrence: 8
   depth: 23, occurrence: 1
   depth: 24, occurrence: 4
   depth: 25, occurrence: 6
   depth: 26, occurrence: 2
   depth: 27, occurrence: 5
   depth: 28, occurrence: 1
   depth: 29, occurrence: 3
   depth: 30, occurrence: 3
   depth: 31, occurrence: 2
   depth: 33, occurrence: 1
   depth: 34, occurrence: 2
   depth: 36, occurrence: 1
   depth: 37, occurrence: 1
   depth: 39, occurrence: 1
   depth: 46, occurrence: 1
   depth: 47, occurrence: 1
   depth: 52, occurrence: 1

XXX total number of pointers: 611

XXX times a variable address is taken: 1338
XXX times a pointer is dereferenced on RHS: 534
breakdown:
   depth: 1, occurrence: 415
   depth: 2, occurrence: 59
   depth: 3, occurrence: 38
   depth: 4, occurrence: 13
   depth: 5, occurrence: 9
XXX times a pointer is dereferenced on LHS: 422
breakdown:
   depth: 1, occurrence: 358
   depth: 2, occurrence: 40
   depth: 3, occurrence: 18
   depth: 4, occurrence: 2
   depth: 5, occurrence: 4
XXX times a pointer is compared with null: 69
XXX times a pointer is compared with address of another variable: 13
XXX times a pointer is compared with another pointer: 24
XXX times a pointer is qualified to be dereferenced: 10192

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1905
   level: 2, occurrence: 378
   level: 3, occurrence: 286
   level: 4, occurrence: 125
   level: 5, occurrence: 55
XXX number of pointers point to pointers: 307
XXX number of pointers point to scalars: 304
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 29.1
XXX average alias set size: 1.4

XXX times a non-volatile is read: 3070
XXX times a non-volatile is write: 1345
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 2
XXX backward jumps: 8

XXX stmts: 278
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 37
   depth: 1, occurrence: 42
   depth: 2, occurrence: 48
   depth: 3, occurrence: 55
   depth: 4, occurrence: 55
   depth: 5, occurrence: 41

XXX percentage a fresh-made variable is used: 16
XXX percentage an existing variable is used: 84
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: 41D16439 */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: 41D16439 */
