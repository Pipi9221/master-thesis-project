#include <stdio.h>

__attribute__((used)) static char realsmith_ol26n(int dword, int max, int min)
{
 char parity = 0;
 int i;
 dword >>= min;
 for (i=max-min; i>=0; i--) {
  if (dword & 0x1)
   parity = !parity;
  dword >>= 1;
 }
 return parity;
}

unsigned int GPIO_INTR_realsmith_fI5Cw = 15;

__attribute__((used)) static unsigned int realsmith_fI5Cw(unsigned int line)
{
 return 8 * line + GPIO_INTR_realsmith_fI5Cw;
}

int STRM_OK_realsmith_xAYlr = 6;

__attribute__((used)) static int
realsmith_xAYlr(int* strm, int argc, int* args, int* ret)
{
  int x, y;
  (1);
  if ((1) && (1)) {
    *ret = (1);
    return STRM_OK_realsmith_xAYlr;
  }
  *ret = (1);
  return STRM_OK_realsmith_xAYlr;
}
int realsmith_proxy_t8x3I(int p_0_JDRcA, int p_1_FxHQT, int p_2_XlQtF, int p_3_AKX8u) {
int proxy_Lz8Ow[12] = { p_3_AKX8u, 58, 97, 93, 70, 24, 90, 28, 27, p_3_AKX8u, p_3_AKX8u, 100 };
int proxy_ret_YWqxM = realsmith_xAYlr(&(p_0_JDRcA), p_1_FxHQT, &(p_2_XlQtF), proxy_Lz8Ow);
return proxy_ret_YWqxM;
}


long AE_OK_realsmith_1Qszb = 15;

__attribute__((used)) static int realsmith_1Qszb(int handle, const char *method, int val)
{
 long status;
 status = (1);
 return (status == AE_OK_realsmith_1Qszb ? 0 : -1);
}
int realsmith_proxy_rgEw0(int p_0_AP02q, char p_1_FCSew, int p_2_IN0KR) {
int proxy_ret_UIdu3 = realsmith_1Qszb(p_0_AP02q, &(p_1_FCSew), p_2_IN0KR);
return proxy_ret_UIdu3;
}


__attribute__((used)) static unsigned long realsmith_Qed8P(unsigned long pfn)
{
 if (pfn % 1024 == 0)
  (1);
 return pfn + 1;
}

int ABS_MT_POSITION_X_realsmith_vGNTv = -9;

int ABS_MT_POSITION_Y_realsmith_vGNTv = -10;

int ABS_MT_SLOT_realsmith_vGNTv = 17;

int ABS_PRESSURE_realsmith_vGNTv = -2;

int ABS_RX_realsmith_vGNTv = -4;

int ABS_X_realsmith_vGNTv = -6;

int ABS_Y_realsmith_vGNTv = -3;

int ABS_Z_realsmith_vGNTv = -4;

int BTN_DIGI_realsmith_vGNTv = 19;

int BTN_DPAD_RIGHT_realsmith_vGNTv = 9;

int BTN_DPAD_UP_realsmith_vGNTv = 7;

int BTN_JOYSTICK_realsmith_vGNTv = 16;

int BTN_MOUSE_realsmith_vGNTv = -2;

int BTN_STYLUS_realsmith_vGNTv = -10;

int BTN_TOOL_FINGER_realsmith_vGNTv = -2;

int BTN_TOOL_PEN_realsmith_vGNTv = -6;

int BTN_TOUCH_realsmith_vGNTv = 18;

int BTN_TRIGGER_HAPPY1_realsmith_vGNTv = 7;

int BTN_TRIGGER_HAPPY40_realsmith_vGNTv = 5;

int EV_KEY_realsmith_vGNTv = -5;

int EV_REL_realsmith_vGNTv = 9;

int INPUT_PROP_ACCELEROMETER_realsmith_vGNTv = 2;

int INPUT_PROP_DIRECT_realsmith_vGNTv = 12;

int INPUT_PROP_POINTING_STICK_realsmith_vGNTv = 8;

int REL_X_realsmith_vGNTv = 1;

int REL_Y_realsmith_vGNTv = -5;

__attribute__((used)) static int realsmith_vGNTv(int *dev,
                          const unsigned long* bitmask_ev,
                          const unsigned long* bitmask_abs,
                          const unsigned long* bitmask_key,
                          const unsigned long* bitmask_rel,
                          const unsigned long* bitmask_props,
                          int test) {
        int button, axis;
        int has_abs_coordinates = 0;
        int has_rel_coordinates = 0;
        int has_mt_coordinates = 0;
        int has_joystick_axes_or_buttons = 0;
        int is_direct = 0;
        int has_touch = 0;
        int has_3d_coordinates = 0;
        int has_keys = 0;
        int stylus_or_pen = 0;
        int finger_but_no_pen = 0;
        int has_mouse_button = 0;
        int is_mouse = 0;
        int is_touchpad = 0;
        int is_touchscreen = 0;
        int is_tablet = 0;
        int is_joystick = 0;
        int is_accelerometer = 0;
        int is_pointing_stick= 0;
        has_keys = (1);
        has_abs_coordinates = (1) && (1);
        has_3d_coordinates = has_abs_coordinates && (1);
        is_accelerometer = (1);
        if (!has_keys && has_3d_coordinates)
                is_accelerometer = 1;
        if (is_accelerometer) {
                (1);
                return 1;
        }
        is_pointing_stick = (1);
        stylus_or_pen = (1) || (1);
        finger_but_no_pen = (1) && !(1);
        for (button = BTN_MOUSE_realsmith_vGNTv; button < BTN_JOYSTICK_realsmith_vGNTv && !has_mouse_button; button++)
                has_mouse_button = (1);
        has_rel_coordinates = (1) && (1) && (1);
        has_mt_coordinates = (1) && (1);
        if (has_mt_coordinates && (1) && (1))
                has_mt_coordinates = 0;
        is_direct = (1);
        has_touch = (1);
        if (!(1)) {
                for (button = BTN_JOYSTICK_realsmith_vGNTv; button < BTN_DIGI_realsmith_vGNTv && !has_joystick_axes_or_buttons; button++)
                        has_joystick_axes_or_buttons = (1);
                for (button = BTN_TRIGGER_HAPPY1_realsmith_vGNTv; button <= BTN_TRIGGER_HAPPY40_realsmith_vGNTv && !has_joystick_axes_or_buttons; button++)
                        has_joystick_axes_or_buttons = (1);
                for (button = BTN_DPAD_UP_realsmith_vGNTv; button <= BTN_DPAD_RIGHT_realsmith_vGNTv && !has_joystick_axes_or_buttons; button++)
                        has_joystick_axes_or_buttons = (1);
        }
        for (axis = ABS_RX_realsmith_vGNTv; axis < ABS_PRESSURE_realsmith_vGNTv && !has_joystick_axes_or_buttons; axis++)
                has_joystick_axes_or_buttons = (1);
        if (has_abs_coordinates) {
                if (stylus_or_pen)
                        is_tablet = 1;
                else if (finger_but_no_pen && !is_direct)
                        is_touchpad = 1;
                else if (has_mouse_button)
                        is_mouse = 1;
                else if (has_touch || is_direct)
                        is_touchscreen = 1;
                else if (has_joystick_axes_or_buttons)
                        is_joystick = 1;
        } else if (has_joystick_axes_or_buttons) {
                is_joystick = 1;
        }
        if (has_mt_coordinates) {
                if (stylus_or_pen)
                        is_tablet = 1;
                else if (finger_but_no_pen && !is_direct)
                        is_touchpad = 1;
                else if (has_touch || is_direct)
                        is_touchscreen = 1;
        }
        if (!is_tablet && !is_touchpad && !is_joystick &&
            has_mouse_button &&
            (has_rel_coordinates ||
            !has_abs_coordinates))
                is_mouse = 1;
        if (is_pointing_stick)
                (1);
        if (is_mouse)
                (1);
        if (is_touchpad)
                (1);
        if (is_touchscreen)
                (1);
        if (is_joystick)
                (1);
        if (is_tablet)
                (1);
        return is_tablet || is_mouse || is_touchpad || is_touchscreen || is_joystick || is_pointing_stick;
}
int realsmith_proxy_iHizE(int p_0_HwSSz, unsigned long p_1_7uvbb, unsigned long p_2_vS7WU, unsigned long p_3_aPvnO, unsigned long p_4_fjs4B, unsigned long p_5_V2zaq, int p_6_ntukT) {
int proxy_BldMH[17] = { 22, p_0_HwSSz, 39, p_0_HwSSz, p_0_HwSSz, 100, 7, p_0_HwSSz, 74, p_0_HwSSz, 6, p_0_HwSSz, 1, 95, 98, p_0_HwSSz, p_0_HwSSz };
unsigned long proxy_mEDhy[19] = { p_1_7uvbb, p_1_7uvbb, 14, 5, p_1_7uvbb, p_1_7uvbb, 38, p_1_7uvbb, 65, p_1_7uvbb, p_1_7uvbb, 64, p_1_7uvbb, 13, 25, 80, p_1_7uvbb, p_1_7uvbb, 50 };
unsigned long proxy_xglJn[11] = { p_5_V2zaq, p_5_V2zaq, 48, p_5_V2zaq, 65, p_5_V2zaq, p_5_V2zaq, 0, p_5_V2zaq, 85, 57 };
int proxy_ret_mrzMP = realsmith_vGNTv(proxy_BldMH, proxy_mEDhy, &(p_2_vS7WU), &(p_3_aPvnO), &(p_4_fjs4B), proxy_xglJn, p_6_ntukT);
return proxy_ret_mrzMP;
}


__attribute__((used)) static int realsmith_oH2UV(int *bp, const char *str)
{
    int n, ret;
    n = (1);
    ret = (1);
    return ret;
}
int realsmith_proxy_WaWH2(int p_0_JvqUL, char p_1_2WWJu) {
int proxy_Q2Dv1[13] = { p_0_JvqUL, 38, 99, 19, p_0_JvqUL, 50, 56, p_0_JvqUL, p_0_JvqUL, p_0_JvqUL, 94, p_0_JvqUL, p_0_JvqUL };
int proxy_ret_vguBG = realsmith_oH2UV(proxy_Q2Dv1, &(p_1_2WWJu));
return proxy_ret_vguBG;
}


int HPDF_FALSE_realsmith_zC4z5 = 9;

long HPDF_OK_realsmith_zC4z5 = -3;

int HPDF_TRUE_realsmith_zC4z5 = 3;

__attribute__((used)) static long
realsmith_zC4z5 (int fontdef)
{
    long ret = (1);
    if (ret != HPDF_OK_realsmith_zC4z5)
        return ret;
    return (1);
}

int realsmith_hhN0d (char *ptr) {
  int i;
  for (i = 0; i < 32; i++) {
    if ((ptr[i] < 'a' && ptr[i] > '9') || ptr[i] < '0' || ptr[i] > 'f') {
      return 0;
    }
  }
  return 32;
}
int realsmith_proxy_BNPnC(char p_0_fxLyu) {
int proxy_ret_vZY08 = realsmith_hhN0d(&(p_0_fxLyu));
return proxy_ret_vZY08;
}


int LARGE_SIZE_realsmith_jOGIW = 1;

int UV_RUN_DEFAULT_realsmith_jOGIW = 5;

int buffer_realsmith_jOGIW = -7;

int channel_realsmith_jOGIW = -2;

int closed_handle_write_realsmith_jOGIW = 15;

int large_buf_realsmith_jOGIW = -7;

int realsmith_jOGIW(void) {
  int r;
  (1);
  large_buf_realsmith_jOGIW = (1);
  r = (1);
  (1);
  (1);
  (1);
  (1);
  (1);
  if ((1) > 0)
    (1);
  r = (1);
  (1);
  (1);
  (1);
  return 0;
}

int I365_CSC_realsmith_7tZsm = -7;

int I365_CSC_BVD1_realsmith_7tZsm = 12;

int I365_CSC_BVD2_realsmith_7tZsm = 18;

int I365_CSC_DETECT_realsmith_7tZsm = 13;

int I365_CSC_READY_realsmith_7tZsm = 7;

int I365_CSC_STSCHG_realsmith_7tZsm = -1;

int I365_CS_BVD1_realsmith_7tZsm = -2;

int I365_CS_BVD2_realsmith_7tZsm = -2;

int I365_CS_DETECT_realsmith_7tZsm = 2;

int I365_CS_READY_realsmith_7tZsm = 14;

int I365_CS_STSCHG_realsmith_7tZsm = 18;

int I365_INTCTL_realsmith_7tZsm = 0;

int I365_PC_IOCARD_realsmith_7tZsm = -6;

int I365_STATUS_realsmith_7tZsm = -6;

unsigned int SS_BATDEAD_realsmith_7tZsm = -2;

unsigned int SS_BATWARN_realsmith_7tZsm = 13;

unsigned int SS_DETECT_realsmith_7tZsm = -5;

unsigned int SS_READY_realsmith_7tZsm = 1;

unsigned int SS_STSCHG_realsmith_7tZsm = -5;

__attribute__((used)) static inline unsigned int realsmith_7tZsm(int slot)
{
 unsigned int events = 0;
 int status, csc;
 status = (1);
 csc = (1);
 if ((1) & I365_PC_IOCARD_realsmith_7tZsm) {
  if ((csc & I365_CSC_STSCHG_realsmith_7tZsm) && (status & I365_CS_STSCHG_realsmith_7tZsm))
   events |= SS_STSCHG_realsmith_7tZsm;
 } else {
  if (csc & (I365_CSC_BVD1_realsmith_7tZsm | I365_CSC_BVD2_realsmith_7tZsm)) {
   if (!(status & I365_CS_BVD1_realsmith_7tZsm))
    events |= SS_BATDEAD_realsmith_7tZsm;
   else if ((status & (I365_CS_BVD1_realsmith_7tZsm | I365_CS_BVD2_realsmith_7tZsm)) == I365_CS_BVD1_realsmith_7tZsm)
    events |= SS_BATWARN_realsmith_7tZsm;
  }
 }
 if ((csc & I365_CSC_READY_realsmith_7tZsm) && (status & I365_CS_READY_realsmith_7tZsm))
  events |= SS_READY_realsmith_7tZsm;
 if ((csc & I365_CSC_DETECT_realsmith_7tZsm) && ((status & I365_CS_DETECT_realsmith_7tZsm) == I365_CS_DETECT_realsmith_7tZsm))
  events |= SS_DETECT_realsmith_7tZsm;
 return events;
}

int ENOSPC_realsmith_ld1vf = -10;

long GNTTAB_LIST_END_realsmith_ld1vf = -9;

int realsmith_ld1vf(long *private_head)
{
 long g = *private_head;
 if ((1))
  return -ENOSPC_realsmith_ld1vf;
 *private_head = (1);
 return g;
}
int realsmith_proxy_r0RX9(long p_0_x4XwC) {
int proxy_ret_1IMzU = realsmith_ld1vf(&(p_0_x4XwC));
return proxy_ret_1IMzU;
}


int TFF_CLASS_KEY_OR_ENUM_realsmith_xAxjj = -7;

int TFF_TEMPLATE_HEADER_realsmith_xAxjj = 3;

int cxx_pp_realsmith_xAxjj = -5;

__attribute__((used)) static const char *
realsmith_xAxjj (int typ, int verbose)
{
  int flags = 0;
  if (verbose)
    flags |= TFF_CLASS_KEY_OR_ENUM_realsmith_xAxjj;
  flags |= TFF_TEMPLATE_HEADER_realsmith_xAxjj;
  (1);
  (1);
  return ("0");
}
char realsmith_proxy_MTfXy(int p_0_8LnDt, int p_1_9Z2IR) {
char * proxy_ret_dxw2B = realsmith_xAxjj(p_0_8LnDt, p_1_9Z2IR);
return *proxy_ret_dxw2B;
}


__attribute__((used)) static int realsmith_7UE7C(char ch)
    {
    if (ch>='0' && ch<='9')
        return ch-'0';
    else if (ch>='a' && ch<='f')
        return ch-'a'+10;
    else if (ch>='A' && ch<='F')
        return ch-'A'+10;
    else return -1;
    }

__attribute__((used)) static int
realsmith_QCdNf(
  int *buf, int const * const eob,
  int const *data, int datalen)
{
 static int service_classes_realsmith_QCdNf[] = {
  128
 };
 return ((1));
}
int realsmith_proxy_8bJxO(int p_0_ISeSR, int p_1_SuR6w, int p_2_IGjwR, int p_3_pGnBq) {
int proxy_5dOYj[20] = { 30, p_0_ISeSR, 85, p_0_ISeSR, p_0_ISeSR, p_0_ISeSR, p_0_ISeSR, p_0_ISeSR, p_0_ISeSR, 99, 90, p_0_ISeSR, 17, p_0_ISeSR, p_0_ISeSR, p_0_ISeSR, 91, p_0_ISeSR, 26, p_0_ISeSR };
int proxy_RIMBF[17] = { 80, p_1_SuR6w, 62, p_1_SuR6w, p_1_SuR6w, p_1_SuR6w, p_1_SuR6w, 40, p_1_SuR6w, 85, 9, p_1_SuR6w, 30, 21, 2, p_1_SuR6w, p_1_SuR6w };
int proxy_5BNhn[16] = { 42, p_2_IGjwR, 2, p_2_IGjwR, p_2_IGjwR, 51, 49, 35, p_2_IGjwR, p_2_IGjwR, p_2_IGjwR, p_2_IGjwR, 84, 87, p_2_IGjwR, 60 };
int proxy_ret_Oq0K2 = realsmith_QCdNf(proxy_5dOYj, proxy_RIMBF, proxy_5BNhn, p_3_pGnBq);
return proxy_ret_Oq0K2;
}


__attribute__((used)) static
__inline__
long realsmith_LphaZ ( long a, long b, long c )
{
   long t;
   if (a > b) { t = a; a = b; b = t; };
   if (b > c) {
      b = c;
      if (a > b) b = a;
   }
   return b;
}

int errno_realsmith_xsrdr = 3;

int
realsmith_xsrdr(int tag, int flags, int *out_p)
{
 int res;
 res = (1);
 if (res == -1)
  return (errno_realsmith_xsrdr);
 *out_p = res;
 return (0);
}
int realsmith_proxy_2CDf8(int p_0_Vl0Y5, int p_1_hGzf2, int p_2_Cf1gy) {
int proxy_ret_1YnML = realsmith_xsrdr(p_0_Vl0Y5, p_1_hGzf2, &(p_2_Cf1gy));
return proxy_ret_1YnML;
}


__attribute__((used)) static int
realsmith_skpCk(int *days_)
{
    const int days_per_400years = (400*365 + 100 - 4 + 1);
    int days = (*days_) - (365*30 + 7);
    int year;
    year = 400 * (1);
    if (days >= 366) {
        year += 100 * ((days-1) / (100*365 + 25 - 1));
        days = (days-1) % (100*365 + 25 - 1);
        if (days >= 365) {
            year += 4 * ((days+1) / (4*365 + 1));
            days = (days+1) % (4*365 + 1);
            if (days >= 366) {
                year += (days-1) / 365;
                days = (days-1) % 365;
            }
        }
    }
    *days_ = days;
    return year + 2000;
}
int realsmith_proxy_pGf3v(int p_0_44Mhw) {
int proxy_ret_xTitQ = realsmith_skpCk(&(p_0_44Mhw));
return proxy_ret_xTitQ;
}


int NULL_RTX_realsmith_3J1Fu = -4;

int
realsmith_3J1Fu (int x)
{
  int last = NULL_RTX_realsmith_3J1Fu, insn;
  switch ((1))
    {
    case 131:
    case 130:
    case 133:
    case 132:
    case 134:
    case 129:
      insn = x;
      while (insn)
 {
   int next = (1);
   (1);
   last = insn;
   insn = next;
 }
      break;
    default:
      last = (1);
      (1);
      break;
    }
  return last;
}

int KERN_INVALID_ARGUMENT_realsmith_yGKxT = -9;

int
realsmith_yGKxT(
 long thread,
 int flavor,
 int state,
 int *count)
{
    if (thread == (1))
     return (KERN_INVALID_ARGUMENT_realsmith_yGKxT);
    return ((1));
}
int realsmith_proxy_QF3GB(long p_0_UKFoX, int p_1_JkVJ2, int p_2_g6Dmq, int p_3_tecoW) {
int proxy_ret_fqD69 = realsmith_yGKxT(p_0_UKFoX, p_1_JkVJ2, p_2_g6Dmq, &(p_3_tecoW));
return proxy_ret_fqD69;
}


__attribute__((used)) static int realsmith_fiMiq (int *L, const char *name) {
  int status = (1) || (1);
  return (1);
}
int realsmith_proxy_Ea5KT(int p_0_lrexl, char p_1_jTQrW) {
int proxy_okQBu[11] = { p_0_lrexl, 61, 97, p_0_lrexl, 86, 97, p_0_lrexl, 62, 10, p_0_lrexl, 84 };
int proxy_ret_jBip8 = realsmith_fiMiq(proxy_okQBu, &(p_1_jTQrW));
return proxy_ret_jBip8;
}


long NULL_TREE_realsmith_bpKU5 = 16;

__attribute__((used)) static inline int
realsmith_bpKU5 (long chrec)
{
  if (chrec == NULL_TREE_realsmith_bpKU5)
    return 0;
  switch ((1))
    {
    case 128:
      if ((1)
   && (1))
 return 1;
      else
 return 0;
    default:
      return 0;
    }
}

__attribute__((used)) static int realsmith_aJjCp(int val) { return (val / (65535/(63-12)) + 12) & 0x3f; }

int TCPF_CLOSE_WAIT_realsmith_DLuX4 = 5;

int TCPF_ESTABLISHED_realsmith_DLuX4 = 1;

int TCPF_FIN_WAIT1_realsmith_DLuX4 = -10;

int TCPF_FIN_WAIT2_realsmith_DLuX4 = -1;

int TCPF_SYN_RECV_realsmith_DLuX4 = -5;

__attribute__((used)) static inline int realsmith_DLuX4(int state)
{
 return (1 << state) &
        (TCPF_ESTABLISHED_realsmith_DLuX4 | TCPF_CLOSE_WAIT_realsmith_DLuX4 | TCPF_FIN_WAIT1_realsmith_DLuX4 |
  TCPF_FIN_WAIT2_realsmith_DLuX4 | TCPF_SYN_RECV_realsmith_DLuX4);
}

int EINVAL_realsmith_tcUp4 = 12;

int I915_OVERLAY_DEPTH_MASK_realsmith_tcUp4 = 1;

__attribute__((used)) static int realsmith_tcUp4(int format)
{
 switch (format & I915_OVERLAY_DEPTH_MASK_realsmith_tcUp4) {
 case 129:
 case 131:
  return 2;
 case 128:
 case 130:
  return 1;
 default:
  return -EINVAL_realsmith_tcUp4;
 }
}

__attribute__((used)) static inline char *realsmith_OhMLR (char *text, int len) {
  char *ptr = text, *text_end = text + len, *kptr = text;
  int state = 5;
  while (ptr < text_end) {
    if ((1)) {
      return ptr;
    }
    if (!*ptr || (state == 2 && (unsigned char) *ptr < 32 && *ptr != 9)) {
      return 0;
    }
    ++ptr;
  }
  if (state != 2) {
    kptr = ptr;
  }
  return kptr;
}
char realsmith_proxy_gOBVs(char p_0_HEphr, int p_1_cHjeB) {
char proxy_1DNYH[10] = { 65, 0, p_0_HEphr, 73, p_0_HEphr, 67, 9, 70, 41, 20 };
char * proxy_ret_76RXC = realsmith_OhMLR(proxy_1DNYH, p_1_cHjeB);
return *proxy_ret_76RXC;
}


__attribute__((used)) static inline int realsmith_5hr8Y(int x)
{
 return x ^ (1) ^ (1);
}

int OCTEON_FEATURE_PKND_realsmith_EdV7T = 19;

int realsmith_EdV7T(int ipd_port)
{
    if ((1))
    {
        if (ipd_port >= 0x800 && ipd_port < 0xd00)
        {
            int port = ((ipd_port & 0xff) >> 6);
            return ((port) ? (port - 1) : ((ipd_port & 0xff) >> 4));
        }
        else if (ipd_port >= 0x400 && ipd_port < 0x600)
            return (ipd_port & 0xff);
        else if (ipd_port >= 0x100 && ipd_port < 0x120)
            return (ipd_port & 0xff);
        else if (ipd_port < 8)
            return ipd_port;
        else
            (1);
        return -1;
    }
    if (ipd_port < 32)
        return ipd_port & 15;
    else if (ipd_port < 40)
        return ipd_port & 3;
    else if (ipd_port < 44)
        return ipd_port & 1;
    else if (ipd_port < 46)
        return ipd_port & 1;
    else
        (1);
    return -1;
}

__attribute__((used)) static inline unsigned int realsmith_s00SI(unsigned int num,
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

__attribute__((used)) static int realsmith_l83UP(const int* const data) {
  return (1) | ((int)(1) << 16);
}
int realsmith_proxy_rzyTV(int p_0_P92qx) {
int proxy_qH52s[20] = { 64, 0, 64, 6, 20, p_0_P92qx, 61, p_0_P92qx, 53, 48, p_0_P92qx, p_0_P92qx, p_0_P92qx, 51, p_0_P92qx, p_0_P92qx, p_0_P92qx, p_0_P92qx, 99, 46 };
int proxy_ret_8Ke9V = realsmith_l83UP(proxy_qH52s);
return proxy_ret_8Ke9V;
}


int FALSE_realsmith_qX6tt = 17;

int
realsmith_qX6tt(void)
{
 int result = FALSE_realsmith_qX6tt;
 return result;
}

int DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE__MASK_realsmith_cY9BD = -9;

int DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE__SHIFT_realsmith_cY9BD = 3;

__attribute__((used)) static inline int realsmith_cY9BD(int val)
{
 return ((val) << DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE__SHIFT_realsmith_cY9BD) & DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE__MASK_realsmith_cY9BD;
}

long MACH_SEND_INVALID_DEST_realsmith_DT8Jf = 7;

long
realsmith_DT8Jf(
 int task,
 int *options,
 long context,
 int *name)
{
 long rv;
 rv = (1);
 if (rv == MACH_SEND_INVALID_DEST_realsmith_DT8Jf)
  rv = (1);
 return (rv);
}
long realsmith_proxy_CcjMP(int p_0_c5glc, int p_1_2qfoG, long p_2_DsK5H, int p_3_I4OuU) {
int proxy_QlYUI[20] = { 83, p_1_2qfoG, p_1_2qfoG, 38, p_1_2qfoG, 59, p_1_2qfoG, 8, p_1_2qfoG, p_1_2qfoG, p_1_2qfoG, 2, p_1_2qfoG, 42, p_1_2qfoG, p_1_2qfoG, 10, p_1_2qfoG, 29, 42 };
int proxy_UNQaQ[15] = { p_3_I4OuU, 62, 22, p_3_I4OuU, 53, 65, 87, 78, 17, 63, p_3_I4OuU, p_3_I4OuU, p_3_I4OuU, p_3_I4OuU, p_3_I4OuU };
long proxy_ret_iDuSD = realsmith_DT8Jf(p_0_c5glc, proxy_QlYUI, p_2_DsK5H, proxy_UNQaQ);
return proxy_ret_iDuSD;
}


int BUS_PROBE_DEFAULT_realsmith_xoFwI = 7;

int ENXIO_realsmith_xoFwI = 17;

__attribute__((used)) static int
realsmith_xoFwI(int dev)
{
 if (!(1))
  return (ENXIO_realsmith_xoFwI);
 if ((1)) {
  (1);
  return (BUS_PROBE_DEFAULT_realsmith_xoFwI);
 }
 return (ENXIO_realsmith_xoFwI);
}

__attribute__((used)) static int realsmith_5G0ga(int *dump_buf,
         int dump, const char *param_name, int param_val)
{
 char *char_buf = (char *)dump_buf;
 int offset = 0;
 offset += (1);
 if (dump)
  *(char_buf + offset) = 0;
 offset++;
 offset += (1);
 offset = (1);
 if (dump)
  *(dump_buf + offset) = param_val;
 offset++;
 return offset;
}
int realsmith_proxy_quDcG(int p_0_sLOrA, int p_1_71Srw, char p_2_c1Ipi, int p_3_qwSbr) {
int proxy_cJzoo[12] = { 0, p_0_sLOrA, 79, p_0_sLOrA, p_0_sLOrA, p_0_sLOrA, p_0_sLOrA, 30, 52, 75, p_0_sLOrA, p_0_sLOrA };
char proxy_kvJiv[16] = { p_2_c1Ipi, 91, p_2_c1Ipi, 91, p_2_c1Ipi, p_2_c1Ipi, p_2_c1Ipi, 65, 37, 32, 39, p_2_c1Ipi, p_2_c1Ipi, p_2_c1Ipi, p_2_c1Ipi, p_2_c1Ipi };
int proxy_ret_eXxaY = realsmith_5G0ga(proxy_cJzoo, p_1_71Srw, proxy_kvJiv, p_3_qwSbr);
return proxy_ret_eXxaY;
}


__attribute__((used)) static char *
realsmith_712QR (const char *str, int len)
{
  char *buf = ((void*)0);
  int state = 128, prev = 128, cp = 0;
  int i = 0, j = 0, k = 0, l = 0;
  buf = ("0");
  for (; i < len; prev = state, ++i) {
    switch ((1)) {
    case 129:
      if (k) {
        for (l = i - k; l < i; ++l)
          buf[j++] = '?';
      } else {
        buf[j++] = '?';
      }
      state = 128;
      if (prev != 128)
        i--;
      k = 0;
      break;
    case 128:
      if (k)
        for (l = i - k; l < i; ++l)
          buf[j++] = str[l];
      buf[j++] = str[i];
      k = 0;
      break;
    default:
      k++;
      break;
    }
  }
  return buf;
}
char realsmith_proxy_uwx85(char p_0_hfLP7, int p_1_9V5vu) {
char proxy_9Wqx7[11] = { p_0_hfLP7, p_0_hfLP7, p_0_hfLP7, p_0_hfLP7, 65, 39, p_0_hfLP7, p_0_hfLP7, 3, p_0_hfLP7, 22 };
char * proxy_ret_d6jWu = realsmith_712QR(proxy_9Wqx7, p_1_9V5vu);
return *proxy_ret_d6jWu;
}


long CAIRO_STATUS_SUCCESS_realsmith_925lM = -3;

int realsmith_925lM(int *m)
{
 int c;
 (1);
 if ((1) != CAIRO_STATUS_SUCCESS_realsmith_925lM)
  return 0;
 (1);
 return 1;
}
int realsmith_proxy_CpVSU(int p_0_LoJlL) {
int proxy_ret_hPSfJ = realsmith_925lM(&(p_0_LoJlL));
return proxy_ret_hPSfJ;
}


int
realsmith_AakBH(const char *mbstr, int limit)
{
 int len = 0;
 if ((1) == 1)
  return limit;
 while (limit > 0 && *mbstr)
 {
  int l = (1);
  limit -= l;
  mbstr += l;
  len++;
 }
 return len;
}
int realsmith_proxy_hsvUN(char p_0_siZV6, int p_1_KvCwl) {
char proxy_f1LEk[10] = { p_0_siZV6, p_0_siZV6, p_0_siZV6, 50, 87, p_0_siZV6, p_0_siZV6, 27, p_0_siZV6, p_0_siZV6 };
int proxy_ret_SQHZR = realsmith_AakBH(proxy_f1LEk, p_1_KvCwl);
return proxy_ret_SQHZR;
}


int
realsmith_EdFWU(int wc, int *fp, int locale)
{
 int r;
 (1);
 (1);
 (1);
 r = (1);
 (1);
 return (r);
}
int realsmith_proxy_IhhGD(int p_0_u1KJI, int p_1_TlErY, int p_2_sNHv7) {
int proxy_azzw7[18] = { p_1_TlErY, p_1_TlErY, p_1_TlErY, 74, 7, 44, p_1_TlErY, p_1_TlErY, p_1_TlErY, 86, p_1_TlErY, 1, p_1_TlErY, p_1_TlErY, 14, p_1_TlErY, p_1_TlErY, p_1_TlErY };
int proxy_ret_DfZx0 = realsmith_EdFWU(p_0_u1KJI, proxy_azzw7, p_2_sNHv7);
return proxy_ret_DfZx0;
}


__attribute__((used)) static int realsmith_taFCA(const char *s, unsigned long m, const char *line) {
        unsigned long l;
        l = (1);
        if (l != m)
                return 0;
        return (1) == 0;
}
int realsmith_proxy_2dIfe(char p_0_c0sh5, unsigned long p_1_PfT67, char p_2_Lu5Of) {
char proxy_elxuU[12] = { p_2_Lu5Of, p_2_Lu5Of, p_2_Lu5Of, p_2_Lu5Of, 39, 42, 39, p_2_Lu5Of, p_2_Lu5Of, p_2_Lu5Of, p_2_Lu5Of, p_2_Lu5Of };
int proxy_ret_9LWlp = realsmith_taFCA(&(p_0_c0sh5), p_1_PfT67, proxy_elxuU);
return proxy_ret_9LWlp;
}


__attribute__((used)) static inline int realsmith_3Mx5x(unsigned long long u) {
        return u < (1ULL << 55);
}

__attribute__((used)) static int realsmith_7DwMj(unsigned long addr)
{
 int result = (1);
 return result;
}

int CP_SET_RENDER_MODE_6_ADDR_1_LO__MASK_realsmith_RmzAS = 7;

int CP_SET_RENDER_MODE_6_ADDR_1_LO__SHIFT_realsmith_RmzAS = 13;

__attribute__((used)) static inline int realsmith_RmzAS(int val)
{
 return ((val) << CP_SET_RENDER_MODE_6_ADDR_1_LO__SHIFT_realsmith_RmzAS) & CP_SET_RENDER_MODE_6_ADDR_1_LO__MASK_realsmith_RmzAS;
}

int FALSE_realsmith_sz2Zv = 0;

long SOCKET_ERROR_realsmith_sz2Zv = 6;

int TRUE_realsmith_sz2Zv = 12;

__attribute__((used)) static int
realsmith_sz2Zv(int sock, char* Quote)
{
    int strSize = (1);
    if ((1) == SOCKET_ERROR_realsmith_sz2Zv)
        return FALSE_realsmith_sz2Zv;
    return TRUE_realsmith_sz2Zv;
}
int realsmith_proxy_uxcBY(int p_0_ERd48, char p_1_HzgE8) {
char proxy_hOKYN[14] = { p_1_HzgE8, 72, p_1_HzgE8, 9, p_1_HzgE8, 53, p_1_HzgE8, p_1_HzgE8, p_1_HzgE8, p_1_HzgE8, 84, p_1_HzgE8, 3, 87 };
int proxy_ret_GeFvj = realsmith_sz2Zv(p_0_ERd48, proxy_hOKYN);
return proxy_ret_GeFvj;
}


long NTP_TO_UNIX_DAYS_realsmith_OJ8nV = -1;

int SECSPERDAY_realsmith_OJ8nV = 6;

long s_baseday_realsmith_OJ8nV = 8;

int
realsmith_OJ8nV(void)
{
 int retv;
 retv = (int)(s_baseday_realsmith_OJ8nV - NTP_TO_UNIX_DAYS_realsmith_OJ8nV);
 retv *= SECSPERDAY_realsmith_OJ8nV;
 return retv;
}

long COMPOUND_EXPR_realsmith_KgUQ5 = -1;

long CONVERT_EXPR_realsmith_KgUQ5 = 8;

long NOP_EXPR_realsmith_KgUQ5 = 17;

long error_mark_node_realsmith_KgUQ5 = -4;

int input_location_realsmith_KgUQ5 = -6;

long warn_unused_value_realsmith_KgUQ5 = 6;

long
realsmith_KgUQ5 (long expr1, long expr2)
{
  if (!(1))
    {
      if (warn_unused_value_realsmith_KgUQ5)
 {
   if ((1)
       && ((1) == NOP_EXPR_realsmith_KgUQ5
    || (1) == CONVERT_EXPR_realsmith_KgUQ5))
     ;
   else if ((1)
     && (1) == COMPOUND_EXPR_realsmith_KgUQ5
     && ((1) == CONVERT_EXPR_realsmith_KgUQ5
         || (1) == NOP_EXPR_realsmith_KgUQ5))
     ;
   else
     (1);
 }
    }
  else if (warn_unused_value_realsmith_KgUQ5)
    (1);
  if (expr2 == error_mark_node_realsmith_KgUQ5)
    return error_mark_node_realsmith_KgUQ5;
  return (1);
}

__attribute__((used)) static inline int realsmith_AbXYI(int a)
{
 return a >> 8 & ((1 << 3) - 1);
}

int realsmith_sb2bu(int *s, const int *md, const unsigned char *secret,
                    unsigned char *iv, unsigned long ivlen)
{
  static const unsigned char ivlabel_realsmith_sb2bu[] = "iv";
    return (1);
}
int realsmith_proxy_4P8IK(int p_0_ScQy9, int p_1_sBNZ3, unsigned char p_2_lBKrV, unsigned char p_3_fSF4p, unsigned long p_4_JHTY4) {
int proxy_TtmTW[11] = { 12, p_1_sBNZ3, 74, p_1_sBNZ3, p_1_sBNZ3, p_1_sBNZ3, p_1_sBNZ3, p_1_sBNZ3, p_1_sBNZ3, p_1_sBNZ3, p_1_sBNZ3 };
int proxy_ret_FQa8e = realsmith_sb2bu(&(p_0_ScQy9), proxy_TtmTW, &(p_2_lBKrV), &(p_3_fSF4p), p_4_JHTY4);
return proxy_ret_FQa8e;
}


int ZPROP_SRC_LOCAL_realsmith_xZF3U = 11;

int
realsmith_xZF3U(const char *dsname)
{
 int error = 0;
 if (!(1))
  error = (1);
 return (error);
}
int realsmith_proxy_gfZr4(char p_0_lr49x) {
int proxy_ret_dqT5C = realsmith_xZF3U(&(p_0_lr49x));
return proxy_ret_dqT5C;
}


int DIR__READ_realsmith_kcIm8 = -3;

int DIR__SEARCH_realsmith_kcIm8 = 1;

int DIR__WRITE_realsmith_kcIm8 = 8;

int FILE__APPEND_realsmith_kcIm8 = 20;

int FILE__EXECUTE_realsmith_kcIm8 = 5;

int FILE__READ_realsmith_kcIm8 = 4;

int FILE__WRITE_realsmith_kcIm8 = 6;

int MAY_APPEND_realsmith_kcIm8 = 1;

int MAY_EXEC_realsmith_kcIm8 = 6;

int MAY_READ_realsmith_kcIm8 = 9;

int MAY_WRITE_realsmith_kcIm8 = 11;

int S_IFDIR_realsmith_kcIm8 = 10;

int S_IFMT_realsmith_kcIm8 = -9;

__attribute__((used)) static inline int realsmith_kcIm8(int mode, int mask)
{
 int av = 0;
 if ((mode & S_IFMT_realsmith_kcIm8) != S_IFDIR_realsmith_kcIm8) {
  if (mask & MAY_EXEC_realsmith_kcIm8)
   av |= FILE__EXECUTE_realsmith_kcIm8;
  if (mask & MAY_READ_realsmith_kcIm8)
   av |= FILE__READ_realsmith_kcIm8;
  if (mask & MAY_APPEND_realsmith_kcIm8)
   av |= FILE__APPEND_realsmith_kcIm8;
  else if (mask & MAY_WRITE_realsmith_kcIm8)
   av |= FILE__WRITE_realsmith_kcIm8;
 } else {
  if (mask & MAY_EXEC_realsmith_kcIm8)
   av |= DIR__SEARCH_realsmith_kcIm8;
  if (mask & MAY_WRITE_realsmith_kcIm8)
   av |= DIR__WRITE_realsmith_kcIm8;
  if (mask & MAY_READ_realsmith_kcIm8)
   av |= DIR__READ_realsmith_kcIm8;
 }
 return av;
}

int ERR_INVALID_PARAMETER_realsmith_R0uR2 = 8;

int ERR_NOT_SUPPORTED_realsmith_R0uR2 = -10;

int ERR_NO_ERROR_realsmith_R0uR2 = 18;

int realsmith_R0uR2(int *s, char *in_str, char *ret_str, int ret_str_size)
{
 if (s == ((void*)0) || in_str == ((void*)0) || ret_str == ((void*)0))
 {
  return ERR_INVALID_PARAMETER_realsmith_R0uR2;
 }
 return ERR_NOT_SUPPORTED_realsmith_R0uR2;
 return ERR_NO_ERROR_realsmith_R0uR2;
}
int realsmith_proxy_TndjS(int p_0_D7eTS, char p_1_IwCGJ, char p_2_O6Kh7, int p_3_OzAD8) {
int proxy_1v20V[10] = { p_0_D7eTS, 42, 59, p_0_D7eTS, p_0_D7eTS, 48, p_0_D7eTS, 91, p_0_D7eTS, 0 };
char proxy_hRgUZ[12] = { 71, 67, p_2_O6Kh7, p_2_O6Kh7, 89, 93, p_2_O6Kh7, 87, p_2_O6Kh7, p_2_O6Kh7, p_2_O6Kh7, p_2_O6Kh7 };
int proxy_ret_f1GKx = realsmith_R0uR2(proxy_1v20V, &(p_1_IwCGJ), proxy_hRgUZ, p_3_OzAD8);
return proxy_ret_f1GKx;
}


__attribute__((used)) static __inline int
realsmith_L4TyJ(int l, int t)
{
 return ((l == 0xD8) &&
     ((t >= 0x31 && t <= 0x7E) || (t >= 0x91 && t <= 0xFE)));
}

int DEV_BSIZE_realsmith_a8Ecl = 15;

int PAGE_MASK_realsmith_a8Ecl = 6;

__attribute__((used)) static int
realsmith_a8Ecl(int offset)
{
 return ((offset & PAGE_MASK_realsmith_a8Ecl) / DEV_BSIZE_realsmith_a8Ecl);
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
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-volatiles --no-volatile-pointers --no-unions --output $EXPERIMENTAL_CREAL/batch_experiments/test_20251113_003156/test26/P6I3IZ_seed.c
 * Seed:      166563170
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_6 = 0x3AD3B315L;
static uint32_t g_9 = 0x0CA9F8D1L;
static int8_t g_13 = 0x90L;
static uint32_t g_14 = 0UL;
static const int32_t g_59 = (-7L);
static uint64_t g_71 = 0UL;
static int64_t g_84 = 0x29BFBD42F9032B81LL;
static const int32_t *g_99 = (void*)0;
static const int32_t ** const g_98 = &g_99;
static int32_t g_106 = (-2L);
static int32_t g_109 = 0x519F073EL;
static int16_t g_112[7] = {1L,1L,1L,1L,1L,1L,1L};
static uint8_t g_113 = 0x3EL;
static int32_t g_119[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static int64_t g_158 = 0x6A1BC1FB248A18BDLL;
static uint32_t g_159 = 0x6218FE46L;
static uint32_t g_161 = 0xFA6F0C6FL;
static uint8_t g_185[4][9][2] = {{{0x81L,0x38L},{0xA0L,0xA0L},{252UL,254UL},{0xDDL,0xDCL},{0xFAL,0x2AL},{0x38L,0xFAL},{0UL,0x42L},{0UL,0xFAL},{0x38L,0x2AL}},{{0xFAL,0xDCL},{0xDDL,254UL},{252UL,0xA0L},{0xA0L,0x38L},{0x81L,0x38L},{0xA0L,0xA0L},{254UL,0x2AL},{0UL,0x38L},{252UL,0x37L}},{{0x81L,252UL},{0xDCL,0xFAL},{0xDCL,252UL},{0x81L,0x37L},{252UL,0x38L},{0UL,0x2AL},{254UL,0x42L},{0x42L,0x81L},{0xA0L,0x81L}},{{0x42L,0x42L},{254UL,0x2AL},{0UL,0x38L},{252UL,0x37L},{0x81L,252UL},{0xDCL,0xFAL},{0xDCL,252UL},{0x81L,0x37L},{252UL,0x38L}}};
static int8_t *g_204 = &g_13;
static uint64_t g_221 = 18446744073709551610UL;
static const uint64_t g_237 = 18446744073709551615UL;
static const uint64_t *g_236 = &g_237;
static uint16_t g_239 = 0x8033L;
static uint32_t g_244 = 18446744073709551615UL;
static uint32_t g_248 = 0UL;
static int8_t ****g_253 = (void*)0;
static int16_t *g_271 = &g_112[3];
static int16_t **g_270 = &g_271;
static uint16_t g_312 = 0xD07DL;
static uint16_t g_400[1][3][9] = {{{0x279FL,0x279FL,0x279FL,0x279FL,0x279FL,0x279FL,0x279FL,0x279FL,0x279FL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{0x279FL,0x279FL,0x279FL,0x279FL,0x279FL,0x279FL,0x279FL,0x279FL,0x279FL}}};
static uint16_t g_408[2][5] = {{0x95D2L,0x95D2L,65528UL,0x95D2L,0x95D2L},{0UL,0x95D2L,0UL,0UL,0x95D2L}};
static uint8_t g_435[1] = {1UL};
static const uint16_t g_436 = 65535UL;
static int32_t *g_466 = (void*)0;
static int16_t g_504 = 0x0AFFL;
static int8_t g_506 = (-1L);
static int64_t g_524[5][6] = {{0x7B09303C9F13F672LL,0x1639882173A13C76LL,0x7B09303C9F13F672LL,0x7475A7284693693FLL,0x1639882173A13C76LL,(-1L)},{0x7B09303C9F13F672LL,0x805E9E55472B3AAALL,0x7475A7284693693FLL,0x7475A7284693693FLL,0x805E9E55472B3AAALL,0x7B09303C9F13F672LL},{0x7B09303C9F13F672LL,0xC9576F69CF8D5809LL,(-1L),0x7475A7284693693FLL,0xC9576F69CF8D5809LL,0x7475A7284693693FLL},{0x7B09303C9F13F672LL,0x1639882173A13C76LL,0x7B09303C9F13F672LL,0x7475A7284693693FLL,0x1639882173A13C76LL,(-1L)},{0x7B09303C9F13F672LL,0x805E9E55472B3AAALL,0x7475A7284693693FLL,0x7475A7284693693FLL,0x805E9E55472B3AAALL,0x7B09303C9F13F672LL}};
static int8_t g_573[4][2] = {{0x52L,0x52L},{0x52L,0x52L},{0x52L,0x52L},{0x52L,0x52L}};
static int64_t g_574 = (-6L);
static uint16_t g_575 = 0x0927L;
static int64_t **g_584 = (void*)0;
static int64_t ***g_583 = &g_584;
static int32_t ****g_671[3] = {(void*)0,(void*)0,(void*)0};
static const uint16_t g_759 = 1UL;
static int8_t g_762 = (-10L);
static int16_t g_848 = 0x3DE6L;
static int16_t g_876 = 1L;
static int16_t g_935 = (-6L);
static uint16_t *g_1012 = &g_400[0][0][5];
static uint16_t ** const g_1011 = &g_1012;
static uint16_t ** const *g_1010[7] = {&g_1011,&g_1011,&g_1011,&g_1011,&g_1011,&g_1011,&g_1011};
static uint16_t ** const **g_1009 = &g_1010[0];
static uint16_t ** const ***g_1008 = &g_1009;
static uint8_t *g_1175 = &g_435[0];
static uint8_t **g_1174[8] = {&g_1175,&g_1175,&g_1175,&g_1175,&g_1175,&g_1175,&g_1175,&g_1175};
static uint8_t g_1180[1] = {6UL};
static int8_t *****g_1181 = &g_253;
static uint16_t g_1251 = 0UL;
static uint64_t *g_1276 = &g_71;
static uint64_t ** const g_1275[5] = {&g_1276,&g_1276,&g_1276,&g_1276,&g_1276};
static uint64_t ** const *g_1274 = &g_1275[1];
static int64_t ****g_1318 = &g_583;
static int64_t *****g_1317 = &g_1318;
static int64_t *g_1323[8][3] = {{&g_158,&g_158,&g_158},{(void*)0,(void*)0,&g_524[3][4]},{(void*)0,(void*)0,&g_158},{&g_84,(void*)0,(void*)0},{&g_158,&g_158,&g_84},{&g_84,&g_574,&g_84},{(void*)0,&g_158,&g_84},{(void*)0,(void*)0,(void*)0}};
static int64_t ** const g_1322 = &g_1323[1][0];
static int64_t ** const *g_1321[6][9][4] = {{{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,&g_1322,&g_1322},{(void*)0,(void*)0,&g_1322,&g_1322},{(void*)0,&g_1322,&g_1322,&g_1322},{(void*)0,&g_1322,&g_1322,&g_1322},{&g_1322,&g_1322,(void*)0,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,&g_1322,&g_1322}},{{&g_1322,&g_1322,&g_1322,(void*)0},{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,&g_1322,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,&g_1322,(void*)0,&g_1322},{(void*)0,&g_1322,&g_1322,(void*)0},{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,(void*)0,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322}},{{(void*)0,(void*)0,&g_1322,&g_1322},{&g_1322,&g_1322,(void*)0,(void*)0},{&g_1322,&g_1322,(void*)0,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322},{(void*)0,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,&g_1322,&g_1322},{&g_1322,&g_1322,&g_1322,(void*)0},{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,&g_1322,&g_1322}},{{(void*)0,&g_1322,&g_1322,&g_1322},{&g_1322,&g_1322,(void*)0,(void*)0},{&g_1322,&g_1322,(void*)0,(void*)0},{&g_1322,&g_1322,&g_1322,&g_1322},{(void*)0,&g_1322,&g_1322,&g_1322},{&g_1322,&g_1322,(void*)0,&g_1322},{&g_1322,&g_1322,&g_1322,(void*)0},{&g_1322,&g_1322,&g_1322,(void*)0},{(void*)0,&g_1322,(void*)0,&g_1322}},{{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,&g_1322,&g_1322},{&g_1322,&g_1322,&g_1322,(void*)0},{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,&g_1322,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322},{&g_1322,&g_1322,(void*)0,&g_1322},{(void*)0,&g_1322,&g_1322,(void*)0},{&g_1322,&g_1322,&g_1322,&g_1322}},{{&g_1322,(void*)0,(void*)0,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322},{(void*)0,(void*)0,&g_1322,&g_1322},{&g_1322,&g_1322,(void*)0,(void*)0},{&g_1322,&g_1322,(void*)0,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322},{(void*)0,&g_1322,&g_1322,&g_1322},{&g_1322,(void*)0,&g_1322,&g_1322},{&g_1322,&g_1322,&g_1322,&g_1322}}};
static int64_t ** const ** const g_1320 = &g_1321[2][1][2];
static int64_t ** const ** const *g_1319 = &g_1320;
static uint64_t g_1385 = 0UL;
static int8_t g_1476 = 0xA0L;
static int32_t g_1513 = 0x4A36D1D9L;
static const uint8_t *** const *g_1552 = (void*)0;
static uint64_t g_1664 = 0UL;
static uint8_t * const *g_1700[3] = {&g_1175,&g_1175,&g_1175};
static uint8_t * const **g_1699 = &g_1700[0];
static uint32_t g_1744 = 18446744073709551615UL;
static const uint16_t *g_1754 = &g_759;
static const uint16_t **g_1753 = &g_1754;
static const uint16_t ***g_1752 = &g_1753;
static uint8_t * const ***g_1759 = &g_1699;
static const int32_t g_1794 = 0x26062291L;
static uint8_t ***g_1880 = (void*)0;
static uint8_t ****g_1879 = &g_1880;
static uint8_t *****g_1878[1][3][6] = {{{&g_1879,&g_1879,&g_1879,&g_1879,&g_1879,&g_1879},{&g_1879,&g_1879,&g_1879,&g_1879,&g_1879,&g_1879},{&g_1879,&g_1879,&g_1879,&g_1879,&g_1879,&g_1879}}};
static int8_t **g_1894 = &g_204;
static int8_t ***g_1893[7] = {&g_1894,&g_1894,&g_1894,&g_1894,&g_1894,&g_1894,&g_1894};
static uint32_t g_1896 = 0xC3717D3EL;
static int16_t ***g_1984 = &g_270;
static uint32_t g_1988 = 0xF1B2665EL;
static int64_t g_2049[1][5] = {{0L,0L,0L,0L,0L}};
static uint16_t **g_2112 = &g_1012;
static uint16_t ***g_2111 = &g_2112;
static uint16_t ****g_2110 = &g_2111;
static uint16_t *****g_2109 = &g_2110;
static int32_t g_2118[2][7] = {{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}};
static int32_t *g_2253 = &g_119[2];
static int32_t **g_2252 = &g_2253;
static int64_t g_2261 = 1L;
static int16_t * const *g_2291 = &g_271;
static int16_t * const ** const g_2290 = &g_2291;
static int16_t * const ** const *g_2289 = &g_2290;
static uint16_t g_2346[5][4][5] = {{{0x2B43L,65535UL,0UL,65535UL,0x2B43L},{0x29D2L,65528UL,0x67CFL,0x0DD5L,65535UL},{65535UL,0x07C9L,0xB47CL,0xB47CL,0x07C9L},{65529UL,0UL,0x1B24L,65528UL,65535UL}},{{65535UL,0xB47CL,0x2B43L,0x37B1L,0x2B43L},{65535UL,65535UL,0x29D2L,65529UL,0xB964L},{65535UL,0xADE9L,65535UL,0UL,0UL},{65529UL,0xD35CL,65529UL,0x43A0L,0x0DD5L}},{{65535UL,0xADE9L,65535UL,0x07C9L,0UL},{0x29D2L,65535UL,65535UL,0x29D2L,65529UL},{0x2B43L,0xB47CL,65535UL,0UL,0xADE9L},{0x1B24L,0UL,65529UL,0UL,0x1B24L}},{{0xB47CL,0x07C9L,65535UL,0UL,65534UL},{0x67CFL,65528UL,0x29D2L,0x29D2L,65528UL},{0UL,65535UL,0x2B43L,0x07C9L,65534UL},{0UL,0x29D2L,0x1B24L,0x43A0L,0x1B24L}},{{65534UL,65534UL,0xB47CL,0UL,0xADE9L},{0UL,0xB964L,0x67CFL,65529UL,65529UL},{0UL,65535UL,0UL,0x37B1L,0UL},{0x67CFL,0xB964L,0UL,65528UL,0x0DD5L}}};
static uint64_t **g_2375[6][3][1] = {{{&g_1276},{&g_1276},{&g_1276}},{{&g_1276},{&g_1276},{&g_1276}},{{&g_1276},{&g_1276},{&g_1276}},{{&g_1276},{&g_1276},{&g_1276}},{{&g_1276},{&g_1276},{&g_1276}},{{&g_1276},{&g_1276},{&g_1276}}};
static uint64_t ***g_2374 = &g_2375[2][1][0];
static uint64_t ****g_2373 = &g_2374;
static uint64_t *****g_2372 = &g_2373;
static uint64_t *****g_2376 = &g_2373;
static uint16_t **g_2421 = &g_1012;
static int64_t *g_2454 = &g_158;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int8_t  func_2(int16_t  p_3);
static uint8_t  func_22(uint8_t  p_23, int32_t * p_24, int32_t * p_25, uint8_t  p_26);
static int32_t * func_27(int8_t  p_28, int8_t * p_29, int32_t * p_30, int16_t  p_31, const int32_t * p_32);
static int8_t * func_33(int8_t  p_34);
static int8_t  func_35(int64_t  p_36, uint16_t  p_37, int32_t * p_38, uint16_t  p_39);
static const int8_t  func_42(int32_t * p_43, uint32_t  p_44, int32_t  p_45, uint8_t  p_46, int32_t  p_47);
static uint32_t  func_48(const int32_t * p_49, int8_t * p_50, int8_t  p_51, int8_t * p_52);
static int32_t * func_53(int32_t * p_54);
static int64_t  func_85(int32_t * p_86);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_9 g_14 g_6 g_71 g_13 g_98 g_59 g_99 g_109 g_106 g_113 g_119 g_112 g_84 g_158 g_161 g_221 g_236 g_204 g_248 g_253 g_270 g_239 g_185 g_271 g_312 g_237 g_400 g_408 g_435 g_436 g_466 g_504 g_762 g_524 g_159 g_876 g_759 g_1008 g_573 g_1012 g_1009 g_1010 g_1759 g_1699 g_1700 g_1175 g_506 g_2376 g_2373 g_1011 g_1894 g_848 g_2372 g_2374 g_2375 g_1276 g_2110 g_2111 g_2112 g_2289 g_2290 g_2291 g_2253
 * writes: g_9 g_14 g_13 g_6 g_71 g_84 g_112 g_109 g_106 g_113 g_119 g_158 g_159 g_161 g_185 g_204 g_221 g_239 g_244 g_248 g_99 g_270 g_271 g_312 g_400 g_408 g_524 g_876 g_762 g_435 g_573 g_848 g_253
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_4[2];
    int8_t *l_17[2];
    const int32_t *l_58[9];
    const int32_t **l_57 = &l_58[5];
    uint32_t l_463[7][9][3] = {{{1UL,0UL,1UL},{9UL,1UL,0UL},{0UL,1UL,4294967290UL},{4294967290UL,0xC4DABD73L,1UL},{4294967291UL,0UL,0x868B74DEL},{4294967290UL,2UL,0x44EE5FFFL},{0UL,8UL,0UL},{9UL,9UL,1UL},{1UL,0xD937DA5CL,1UL}},{{4294967290UL,4294967294UL,2UL},{0UL,1UL,0UL},{0xC4DABD73L,4294967290UL,2UL},{4294967291UL,8UL,1UL},{0x88DCE156L,0x44EE5FFFL,0x44EE5FFFL},{0x37A97595L,1UL,1UL},{0x88DCE156L,9UL,0UL},{4294967291UL,0xD937DA5CL,0x691C87F4L},{0xC4DABD73L,1UL,0x44EE5FFFL}},{{0UL,0xD937DA5CL,0x37A97595L},{4294967290UL,9UL,2UL},{0x868B74DEL,1UL,0x868B74DEL},{0xC4DABD73L,0x44EE5FFFL,2UL},{4294967290UL,8UL,0x37A97595L},{0x88DCE156L,4294967290UL,0x44EE5FFFL},{1UL,1UL,0x691C87F4L},{0x88DCE156L,4294967294UL,0UL},{4294967290UL,0xD937DA5CL,1UL}},{{0xC4DABD73L,0xC4DABD73L,0x44EE5FFFL},{0x868B74DEL,0xD937DA5CL,1UL},{4294967290UL,4294967294UL,2UL},{0UL,1UL,0UL},{0xC4DABD73L,4294967290UL,2UL},{4294967291UL,8UL,1UL},{0x88DCE156L,0x44EE5FFFL,0x44EE5FFFL},{0x37A97595L,1UL,1UL},{0x88DCE156L,9UL,0UL}},{{4294967291UL,0xD937DA5CL,0x691C87F4L},{0xC4DABD73L,1UL,0x44EE5FFFL},{0UL,0xD937DA5CL,0x37A97595L},{4294967290UL,9UL,2UL},{0x868B74DEL,1UL,0x868B74DEL},{0xC4DABD73L,0x44EE5FFFL,2UL},{4294967290UL,8UL,0x37A97595L},{0x88DCE156L,4294967290UL,0x44EE5FFFL},{1UL,1UL,0x691C87F4L}},{{0x88DCE156L,4294967294UL,0UL},{4294967290UL,0xD937DA5CL,1UL},{0xC4DABD73L,0xC4DABD73L,0x44EE5FFFL},{0x868B74DEL,0xD937DA5CL,1UL},{4294967290UL,4294967294UL,2UL},{0UL,1UL,0UL},{0xC4DABD73L,4294967290UL,2UL},{4294967291UL,8UL,1UL},{0x88DCE156L,0x44EE5FFFL,0x44EE5FFFL}},{{0x37A97595L,1UL,1UL},{0x88DCE156L,9UL,0UL},{4294967291UL,0xD937DA5CL,0x691C87F4L},{0xC4DABD73L,1UL,0x44EE5FFFL},{0UL,0xD937DA5CL,0x37A97595L},{4294967290UL,9UL,2UL},{0x868B74DEL,1UL,0x868B74DEL},{0xC4DABD73L,0x44EE5FFFL,2UL},{4294967290UL,8UL,0x37A97595L}}};
    int64_t *l_465 = &g_84;
    int32_t *l_2482[3][10][5] = {{{(void*)0,&l_4[1],(void*)0,&l_4[0],(void*)0},{&l_4[1],&l_4[0],&l_4[1],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_4[0],&l_4[1]},{&l_4[0],(void*)0,&l_4[1],(void*)0,&l_4[0]},{&l_4[1],&l_4[0],&l_4[0],&l_4[0],(void*)0},{&l_4[0],(void*)0,&l_4[0],&l_4[0],&l_4[1]},{(void*)0,&l_4[0],&l_4[0],(void*)0,&l_4[0]},{(void*)0,(void*)0,&l_4[0],&l_4[1],&l_4[1]},{&l_4[0],&l_4[1],&l_4[0],&l_4[0],&l_4[0]},{&l_4[0],&l_4[0],&l_4[0],&l_4[0],&l_4[0]}},{{&l_4[1],(void*)0,&l_4[0],&l_4[0],&l_4[1]},{(void*)0,&l_4[1],&l_4[0],&l_4[0],&l_4[1]},{(void*)0,(void*)0,&l_4[0],&l_4[1],&l_4[0]},{(void*)0,(void*)0,&l_4[0],(void*)0,(void*)0},{&l_4[1],&l_4[0],&l_4[0],&l_4[0],(void*)0},{&l_4[0],&l_4[0],&l_4[0],(void*)0,&l_4[0]},{&l_4[1],(void*)0,(void*)0,&l_4[0],(void*)0},{&l_4[0],(void*)0,&l_4[0],&l_4[0],(void*)0},{(void*)0,&l_4[0],&l_4[0],&l_4[1],&l_4[0]},{&l_4[0],(void*)0,(void*)0,&l_4[1],&l_4[1]}},{{&l_4[0],(void*)0,(void*)0,&l_4[0],&l_4[1]},{(void*)0,&l_4[1],&l_4[0],(void*)0,&l_4[0]},{(void*)0,(void*)0,(void*)0,&l_4[0],&l_4[0]},{&l_4[0],&l_4[0],(void*)0,&l_4[0],&l_4[1]},{&l_4[0],&l_4[0],&l_4[0],&l_4[0],&l_4[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_4[1]},{&l_4[0],(void*)0,(void*)0,&l_4[0],&l_4[1]},{&l_4[1],&l_4[0],&l_4[0],&l_4[0],&l_4[0]},{&l_4[0],(void*)0,(void*)0,&l_4[0],(void*)0},{&l_4[1],(void*)0,&l_4[0],&l_4[0],&l_4[1]}}};
    uint32_t l_2483 = 0UL;
    uint16_t l_2499 = 65527UL;
    int16_t *l_2545 = &g_848;
    uint16_t l_2546 = 0x3981L;
    int8_t l_2547 = 3L;
    int16_t l_2548 = 1L;
    uint16_t *l_2559[2];
    int64_t l_2560 = 0x6B20D6D55563F505LL;
    uint32_t l_2563 = 0x91A12690L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_4[i] = 0xF5020F89L;
    for (i = 0; i < 2; i++)
        l_17[i] = &g_13;
    for (i = 0; i < 9; i++)
        l_58[i] = &g_59;
    for (i = 0; i < 2; i++)
        l_2559[i] = &g_408[1][2];
    /*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
/*bef_stmt:103345*/
l_2548 |= ((g_13 = func_2(/*TAG1:STA*/((int32_t)(realsmith_proxy_r0RX9((long)(l_4[0])+(184414397))+(int)(l_4[0])-(-184414317))+l_4[0])/*TAG1:END:l_4[0]*/)) , (safe_mul_func_uint16_t_u_u((func_2((/*TAG2:STA*/((int32_t)(realsmith_proxy_TndjS((int)(l_4[1])+(184414351), (char)(l_4[1])+(201), (char)(l_4[1])+(72), (int)(l_4[1])+(184414360))+(int)(l_4[1])-(-184414337))+l_4[1])/*TAG2:END:l_4[1]*/ , ((*l_2545) = (safe_lshift_func_uint8_t_u_s(func_22(/*TAG3:STA*/((int32_t)(realsmith_7tZsm((int)(l_4[0])+(184414400))+(unsigned int)(l_4[0])-(4110552969))+l_4[0])/*TAG3:END:l_4[0]*/, &g_6, func_27(Tag4(/*uint32_t:0:0:103345:e*/g_14), func_33(func_35(((*l_465) = (safe_rshift_func_int8_t_s_s(0x36L, func_42(&l_4[0], ((func_48(((*l_57) = func_53(&g_6)), &g_13, Tag5(/*uint32_t:0:0:103345:e*/g_14), &g_13) , /*TAG6:STA*/((int32_t)(realsmith_proxy_2dIfe((char)(g_119[3])+(42), (unsigned long)(g_119[3])+(47), (char)(g_119[3])+(92))+(int)(g_119[3])-(0))+g_119[3])/*TAG6:END:g_119[3]*/) >= 0x2FEA349FL), /*TAG7:STA*/((uint16_t)(realsmith_a8Ecl((int)(g_119[3])+(41))+(int)(g_436)+(int)(g_119[3])-(65535))+g_436)/*TAG7:END:g_436*/, /*TAG8:STA*/((int32_t)(realsmith_proxy_t8x3I((int)(g_119[3])+(-67), (int)(l_4[1])+(184414389), (int)(g_119[3])+(10), (int)(g_119[3])+(53))+(int)(l_4[0])+(int)(l_4[1])+(int)(g_436)+(int)(g_119[3])-(-368763113))+l_4[0])/*TAG8:END:l_4[0]*/, /*TAG9:STA*/((uint32_t)(realsmith_Qed8P(28)+(unsigned long)(l_463[2][3][0])+(unsigned long)(g_436)+(unsigned long)(g_119[3])-(3302735247))+l_463[2][3][0])/*TAG9:END:l_463[2][3][0]*/)))), /*TAG10:STA*/((uint64_t)(realsmith_proxy_pGf3v((int)(g_436)+(-65575))+(int)(g_237)+(int)(g_119[3])+(int)(g_436)-(67934))+g_237)/*TAG10:END:g_237*/, g_466, /*TAG11:STA*/((uint16_t)(realsmith_3Mx5x((int)(g_237)+(84))+(int)(g_436)+(int)(g_119[3])+(int)(g_237)-(65535))+g_436)/*TAG11:END:g_436*/)), l_2482[2][7][1], /*TAG12:STA*/((uint32_t)(realsmith_L4TyJ((int)(l_2483)+(77), (int)(l_2483)+(80))+(int)(l_2483)-(0))+l_2483)/*TAG12:END:l_2483*/, &l_4[0]), /*TAG13:STA*/((uint16_t)(realsmith_qX6tt()+(int)(l_2499)-(65544))+l_2499)/*TAG13:END:l_2499*/), 2))))) < /*TAG14:STA*/((uint16_t)(realsmith_jOGIW()+(int)(l_2546)-(14721))+l_2546)/*TAG14:END:l_2546*/), /*TAG15:STA*/((int8_t)(realsmith_proxy_iHizE((int)(l_2547)+(59), (unsigned long)(l_2547)+(96), (unsigned long)(l_2547)+(2), (unsigned long)(l_2547)+(4), (unsigned long)(l_2547)+(-72), (unsigned long)(l_2547)+(9), (int)(l_2547)+(47))+(int)(l_2547)-(4))+l_2547)/*TAG15:END:l_2547*/)));
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
/*aft_stmt:103345*/
    /*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
/*bef_stmt:103976*/
l_2563 = (safe_mod_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(/*TAG16:STA*/((uint16_t)(realsmith_proxy_4P8IK((int)(g_400[0][1][6])+(-65526), (int)(g_400[0][1][6])+(-65572), (unsigned char)(g_400[0][1][6])+(-292), (unsigned char)(g_400[0][1][6])+(-243), (unsigned long)(g_400[0][1][6])+(-65463))+(int)(g_400[0][1][6])-(65536))+g_400[0][1][6])/*TAG16:END:g_400[0][1][6]*/, (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((~((l_2560 = (((safe_unary_minus_func_uint64_t_u((/*TAG17:STA*/((uint64_t)(realsmith_fI5Cw((unsigned int)(*****g_2372)+(23))+(unsigned int)(*****g_2372)-(262))+*****g_2372)/*TAG17:END:*****g_2372*/))) & ((Tag18(/*const int32_t:104010:104010:103976:e*/**l_57)) >= 0x6DL)) , (/*TAG19:STA*/((uint16_t)(realsmith_proxy_MTfXy((int)(****g_2110)+(-10134), (int)(****g_2110)+(-10086))+(char)(****g_2110)-(-49))+****g_2110)/*TAG19:END:****g_2110*/))) ^ (/*TAG20:STA*/((int32_t)(realsmith_ol26n((int)(**l_57)+(55), (int)(**l_57)+(101), (int)(**l_57)+(20))+(char)(**l_57)-(-9))+**l_57)/*TAG20:END:**l_57*/))) < ((/*TAG21:STA*/((int8_t)(realsmith_aJjCp((int)(**g_1894)+(48))+(int)(**g_1894)-(13))+**g_1894)/*TAG21:END:**g_1894*/) < (/*TAG22:STA*/((int32_t)(realsmith_EdV7T((int)(g_109)+(-1369427774))+(int)(g_109)-(1369427776))+g_109)/*TAG22:END:g_109*/ , (safe_sub_func_uint16_t_u_u((/*TAG23:STA*/((uint16_t)(realsmith_proxy_gfZr4((char)(**g_1011)+(55))+(int)(**g_1011)-(10143))+**g_1011)/*TAG23:END:**g_1011*/), 1L))))), 7)), (/*TAG24:STA*/((int8_t)(realsmith_proxy_WaWH2((int)(**g_1894)+(-97), (char)(**g_1894)+(-68))+(int)(**g_1894)-(2))+**g_1894)/*TAG24:END:**g_1894*/))))) <= (-10L)) || (/*TAG25:STA*/((int16_t)(realsmith_proxy_rzyTV((int)(****g_2289)+(-19))+(int)(****g_2289)-(65538))+****g_2289)/*TAG25:END:****g_2289*/)), (/*TAG26:STA*/((int32_t)(realsmith_proxy_QF3GB((long)(*g_99)+(83), (int)(*g_99)+(29), (int)(*g_99)+(89), (int)(*g_99)+(-46))+(int)(*g_99)-(-8))+*g_99)/*TAG26:END:*g_99*/)));
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
/*aft_stmt:103976*/
    /*bef_stmt:104008*/
return (/*TAG27:STA*/((int32_t)(realsmith_zC4z5((int)(*g_2253)+(60))+(long)(*g_2253)-(1))+*g_2253)/*TAG27:END:*g_2253*/);
/*aft_stmt:104008*/
}


/* ------------------------------------------ */
/* 
 * reads : g_9 g_14
 * writes: g_9 g_14
 */
static int8_t  func_2(int16_t  p_3)
{ /* block id: 1 */
    int32_t *l_5 = &g_6;
    int32_t *l_7 = (void*)0;
    int32_t *l_8[4][1];
    int16_t l_12 = 0x6285L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_8[i][j] = &g_6;
    }
    --g_9;
    --g_14;
    /*bef_stmt:104446*/
return Tag28(/*uint32_t:0:0:104446:e*/g_14);
/*aft_stmt:104446*/
}


/* ------------------------------------------ */
/* 
 * reads : g_98 g_524 g_1894 g_204 g_13 g_99 g_6 g_848 g_1759 g_1699 g_1700 g_1175 g_435 g_506 g_2376 g_2373 g_1011 g_1012 g_400
 * writes: g_99 g_14 g_6 g_848 g_435
 */
static uint8_t  func_22(uint8_t  p_23, int32_t * p_24, int32_t * p_25, uint8_t  p_26)
{ /* block id: 1169 */
    uint32_t *l_2508 = (void*)0;
    uint32_t *l_2509 = &g_14;
    int32_t l_2512[7] = {0xA3CC92EAL,0x3A4DF6F9L,0x3A4DF6F9L,0xA3CC92EAL,0x3A4DF6F9L,0x3A4DF6F9L,0xA3CC92EAL};
    uint32_t l_2521 = 0x9E17716EL;
    int8_t *l_2544 = (void*)0;
    int i;
    (*g_98) = p_24;
    (*g_98) = p_24;
    /*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
/*bef_stmt:105807*/
if ((((((safe_add_func_uint64_t_u_u(0UL, (safe_sub_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((*l_2509) = /*TAG29:STA*/((uint8_t)(realsmith_LphaZ((long)(p_23)+(-93), (long)(p_23)+(-63), (long)(p_23)+(-74))+(long)(p_23)-(200))+p_23)/*TAG29:END:p_23*/), (/*TAG30:STA*/((int64_t)(realsmith_proxy_CpVSU((int)(g_524[0][4])+(-1939946668))+(int)(g_524[0][4])-(1939946614))+g_524[0][4])/*TAG30:END:g_524[0][4]*/ < 0xF13B01D9L))) || (/*TAG31:STA*/((int32_t)(realsmith_bpKU5((long)(l_2512[5])+(-978187928))+(int)(l_2512[5])-(978188025))+l_2512[5])/*TAG31:END:l_2512[5]*/ <= ((/*TAG32:STA*/((uint8_t)(realsmith_7DwMj((unsigned long)(p_23)+(-37))+(int)(p_23)-(138))+p_23)/*TAG32:END:p_23*/ & /*TAG33:STA*/((uint8_t)(realsmith_kcIm8((int)(p_23)+(-92), (int)(p_23)+(-67))+(int)(p_23)-(144))+p_23)/*TAG33:END:p_23*/) != (/*TAG34:STA*/((uint8_t)(realsmith_DLuX4((int)(p_23)+(-134))+(int)(p_23)-(145))+p_23)/*TAG34:END:p_23*/ >= (safe_add_func_int16_t_s_s((/*TAG35:STA*/((int32_t)(realsmith_AbXYI((int)(l_2512[5])+(-978187980))+(int)(l_2512[5])-(978188025))+l_2512[5])/*TAG35:END:l_2512[5]*/ | /*TAG36:STA*/((int32_t)(realsmith_3J1Fu((int)(l_2512[5])+(-978187996))+(int)(l_2512[5])-(978188026))+l_2512[5])/*TAG36:END:l_2512[5]*/), 3UL)))))) == (/*TAG37:STA*/((int8_t)(realsmith_proxy_2CDf8((int)(*****g_2372)+(59), (int)(****g_2289)+(95), (int)(****g_2289)+(82))+(int)(**g_1894)+(int)(*****g_2372)+(int)(g_524[0][4])+(int)(****g_2289)+(int)(****g_2110)-(1939956766))+**g_1894)/*TAG37:END:**g_1894*/)), /*TAG38:STA*/((uint8_t)(realsmith_proxy_uxcBY((int)(p_23)+(-89), (char)(p_23)+(19))+(int)(p_23)-(149))+p_23)/*TAG38:END:p_23*/)))) > /*TAG39:STA*/((int32_t)(realsmith_cY9BD((int)(g_109)+(-1369427724))+(int)(l_2512[5])+((int)(g_109)-(1369427775))+(int)(p_23)+(int)(*g_99)+(int)(**g_1894)-(978188554))+l_2512[5])/*TAG39:END:l_2512[5]*/) , /*TAG40:STA*/((uint8_t)(realsmith_proxy_quDcG((int)(p_26)+(-250), (int)(p_26)+(-214), (char)(p_26)+(-69), (int)(p_26)+(-178))+(int)(p_26)-(249))+p_26)/*TAG40:END:p_26*/) ^ 0x5AL) || 1L))
    { /* block id: 1173 */
        /*bef_stmt:105352*/
(*p_24) = (/*TAG41:STA*/((int32_t)(realsmith_proxy_gOBVs((char)(**g_98)+(13), (int)(**g_98)+(9))+(char)(**g_98)-(56))+**g_98)/*TAG41:END:**g_98*/);
/*aft_stmt:105352*/
        for (g_848 = 0; (g_848 >= (-11)); g_848--)
        { /* block id: 1177 */
            /*bef_stmt:105425*/
return Tag42(/*uint8_t:105878:105878:105425:e*/p_26);
/*aft_stmt:105425*/
        }
    }
    else
    { /* block id: 1180 */
        int32_t *l_2517 = &g_6;
        int32_t *l_2518 = &l_2512[5];
        int32_t *l_2519 = &g_106;
        int32_t *l_2520[5] = {&g_109,&g_109,&g_109,&g_109,&g_109};
        int8_t *l_2524 = &g_506;
        int16_t *l_2543 = &g_848;
        int i;
        l_2521--;
        /*bef_stmt:105792*/
/*bef_stmt:105792*/
(*g_98) = func_27((Tag43(/*int8_t:0:0:105792:e*/**g_1894)), l_2524, p_25, Tag44(/*uint8_t:105878:105878:105792:e*/p_26), l_2517);
/*aft_stmt:105792*/
/*aft_stmt:105792*/
    }
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
/*aft_stmt:105807*/
    (*g_98) = p_24;
    /*bef_stmt:105876*/
return (Tag45(/*uint8_t:0:0:105876:e*/****g_1759));
/*aft_stmt:105876*/
}


/* ------------------------------------------ */
/* 
 * reads : g_1759 g_1699 g_1700 g_1175 g_435 g_573 g_506 g_13 g_2376 g_2373 g_1011 g_1012 g_400
 * writes: g_435
 */
static int32_t * func_27(int8_t  p_28, int8_t * p_29, int32_t * p_30, int16_t  p_31, const int32_t * p_32)
{ /* block id: 1162 */
    int32_t *l_2484[1][6] = {{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}};
    uint32_t l_2485 = 0x7F6EF400L;
    int64_t l_2488 = 0x921018097FF7CA8ALL;
    uint64_t **l_2494 = &g_1276;
    uint8_t *l_2495 = &g_435[0];
    uint64_t ** const **l_2496[10] = {&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274};
    uint64_t ** const ***l_2497 = &l_2496[6];
    int32_t l_2498[5][8][3] = {{{0xD8A4DCC9L,0x2097DE31L,0x01C9747AL},{0xEBD7BB7BL,0x2097DE31L,0xEBD7BB7BL},{0L,0x0312CC77L,0x795E8865L},{0x47ED6495L,(-1L),0x0312CC77L},{0xCB0E5D8AL,0xD8A4DCC9L,0x7DEFA7CEL},{0xD8A4DCC9L,0x3524A94AL,7L},{0xCB0E5D8AL,0xD422D31DL,0xEBD7BB7BL},{0x47ED6495L,0x7DEFA7CEL,0L}},{{0L,(-1L),0x1E82C1CFL},{0xEBD7BB7BL,0x1E82C1CFL,0x1E82C1CFL},{0xD8A4DCC9L,0xD724536AL,0L},{0xC8E12DC5L,(-1L),0xEBD7BB7BL},{0x29DD09E1L,(-1L),7L},{1L,0xD8A4DCC9L,0xC8E12DC5L},{0L,0xCB0E5D8AL,0x24EB5B70L},{(-1L),0x47ED6495L,0x3524A94AL}},{{0x795E8865L,0L,7L},{0xD8A4DCC9L,0xEBD7BB7BL,0x2097DE31L},{0xD8A4DCC9L,0xD8A4DCC9L,(-1L)},{0x795E8865L,0xC8E12DC5L,0xCB0E5D8AL},{(-1L),0x29DD09E1L,(-1L)},{0L,1L,7L},{(-1L),(-1L),(-1L)},{0x7DEFA7CEL,0xD8A4DCC9L,0xCB0E5D8AL}},{{1L,0x24EB5B70L,(-1L)},{(-1L),(-1L),0x2097DE31L},{7L,(-1L),7L},{0x0312CC77L,0x24EB5B70L,0x3524A94AL},{0x1E82C1CFL,0xD8A4DCC9L,0x24EB5B70L},{0x01C9747AL,(-1L),0xC8E12DC5L},{(-1L),1L,0xD724536AL},{0x01C9747AL,0x29DD09E1L,7L}},{{0x1E82C1CFL,0xC8E12DC5L,0xD422D31DL},{0x0312CC77L,0xD8A4DCC9L,0xEBD7BB7BL},{7L,0xEBD7BB7BL,0xEBD7BB7BL},{(-1L),0L,0xD422D31DL},{1L,0x47ED6495L,7L},{0x7DEFA7CEL,0xCB0E5D8AL,0xD724536AL},{(-1L),0xD8A4DCC9L,0xC8E12DC5L},{0L,0xCB0E5D8AL,0x24EB5B70L}}};
    int i, j, k;
    ++l_2485;
    /*bef_stmt:109347*/
/*bef_stmt:109347*/
/*bef_stmt:109347*/
/*bef_stmt:109347*/
l_2498[3][4][1] ^= (((****g_1759)--) || ((/*TAG46:STA*/((int8_t)(realsmith_ol26n((int)(p_28)+(8), (int)(p_28)+(71), (int)(p_28)+(21))+(char)(p_28)-(-1))+p_28)/*TAG46:END:p_28*/ > ((safe_rshift_func_int16_t_s_s(((+((void*)0 == l_2494)) > ((/*TAG47:STA*/((int8_t)(realsmith_proxy_hsvUN((char)(p_28)+(80), (int)(p_28)+(15))+(int)(*p_29)+(int)(p_28)+(int)(g_524[0][4])+(int)(**g_98)+(int)(g_14)-(1939946627))+*p_29)/*TAG47:END:*p_29*/) || ((l_2495 = p_29) == p_29))), 12)) | (/*TAG48:STA*/((int8_t)(realsmith_proxy_rgEw0((int)(**g_98)+(33), (char)(g_524[0][4])+(-189), (int)(**g_98)+(5))+(int)(p_28)+(int)(**g_98)+(int)(g_524[0][4])+(int)(**g_1894)+(int)(*p_29)-(1939946614))+p_28)/*TAG48:END:p_28*/ , ((*g_2376) != ((*l_2497) = l_2496[0]))))) ^ (/*TAG49:STA*/((uint16_t)(realsmith_xoFwI((int)(**g_98)+(28))+(int)(**g_1011)+(int)(**g_98)+(int)(**g_1894)+(int)(g_524[0][4])-(1939956765))+**g_1011)/*TAG49:END:**g_1011*/)));
/*aft_stmt:109347*/
/*aft_stmt:109347*/
/*aft_stmt:109347*/
/*aft_stmt:109347*/
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : g_271 g_762 g_106 g_98 g_876 g_99 g_270 g_185 g_204 g_759 g_253 g_14 g_9 g_13 g_524 g_113 g_236 g_237 g_400 g_59 g_1008 g_112 g_239 g_573 g_1012 g_158 g_1009 g_1010
 * writes: g_6 g_524 g_112 g_106 g_99 g_876 g_185 g_13 g_762 g_239 g_113 g_109 g_71 g_435 g_159 g_573 g_848 g_253
 */
static int8_t * func_33(int8_t  p_34)
{ /* block id: 465 */
    uint16_t *l_886 = &g_239;
    uint16_t **l_885 = &l_886;
    uint16_t ***l_884 = &l_885;
    uint16_t ****l_887 = &l_884;
    int32_t *****l_896[2];
    int32_t l_918 = 3L;
    int32_t l_920 = 0L;
    uint32_t l_973 = 5UL;
    int32_t l_974 = 0xFFF10AE5L;
    int32_t l_977[8];
    int8_t *l_1020 = &g_573[1][1];
    int64_t l_1096 = 0L;
    int32_t l_1111 = 0x26F249A0L;
    const int32_t *l_1136 = (void*)0;
    int8_t l_1141 = (-9L);
    uint8_t *l_1153 = &g_185[0][2][1];
    uint8_t **l_1154 = (void*)0;
    uint64_t *l_1155[6] = {&g_71,(void*)0,&g_71,&g_71,(void*)0,&g_71};
    int8_t *****l_1182 = &g_253;
    int64_t l_1205[8][5][3] = {{{0x7A5DFAFAC8FE04DFLL,0x520E40CC9B1921CFLL,(-5L)},{1L,3L,0x58350A405606B7F7LL},{5L,2L,4L},{1L,0xA152B601921358B1LL,0xC4188D0AF12EF7E4LL},{5L,(-6L),0L}},{{1L,0xACB47AD15F42AB51LL,(-7L)},{0x7A5DFAFAC8FE04DFLL,0L,5L},{0L,0xF06AF5FA12B215B9LL,0x422535C65C4087C0LL},{0L,0L,1L},{(-1L),0xACB47AD15F42AB51LL,(-3L)}},{{2L,(-6L),(-5L)},{(-7L),0xA152B601921358B1LL,0L},{(-5L),2L,(-5L)},{0L,3L,(-3L)},{0x4E8B199603866441LL,0x520E40CC9B1921CFLL,1L}},{{0xC4188D0AF12EF7E4LL,(-6L),0x422535C65C4087C0LL},{1L,5L,5L},{0xC4188D0AF12EF7E4LL,0x1E82ED8E037AA64FLL,(-7L)},{0x4E8B199603866441LL,0xA5034F4B57EBF5E3LL,0L},{0L,0L,0xC4188D0AF12EF7E4LL}},{{(-5L),1L,4L},{(-7L),0L,0x58350A405606B7F7LL},{2L,0xA5034F4B57EBF5E3LL,(-5L)},{(-1L),0x1E82ED8E037AA64FLL,0L},{0L,5L,0xA5034F4B57EBF5E3LL}},{{0L,(-6L),0L},{0x7A5DFAFAC8FE04DFLL,0x520E40CC9B1921CFLL,(-5L)},{1L,3L,0x58350A405606B7F7LL},{5L,2L,4L},{1L,0xA152B601921358B1LL,0xC4188D0AF12EF7E4LL}},{{5L,(-6L),0L},{1L,0xACB47AD15F42AB51LL,(-7L)},{0x7A5DFAFAC8FE04DFLL,0L,5L},{0L,0xF06AF5FA12B215B9LL,0x422535C65C4087C0LL},{0L,0L,2L}},{{0L,0xA152B601921358B1LL,0x422535C65C4087C0LL},{0x7A5DFAFAC8FE04DFLL,(-5L),0xA5034F4B57EBF5E3LL},{0x58350A405606B7F7LL,(-1L),0xC4188D0AF12EF7E4LL},{0xA5034F4B57EBF5E3LL,0x7A5DFAFAC8FE04DFLL,0xA5034F4B57EBF5E3LL},{1L,0x1E82ED8E037AA64FLL,0x422535C65C4087C0LL}}};
    int64_t l_1207 = (-4L);
    int16_t l_1230 = 0x2030L;
    uint8_t l_1271 = 0x74L;
    int32_t *l_1303[6] = {&g_109,&l_920,&g_109,&g_109,&l_920,&g_109};
    int64_t ****l_1316 = &g_583;
    int64_t *****l_1315 = &l_1316;
    uint8_t ***l_1435 = &l_1154;
    uint32_t l_1438 = 18446744073709551607UL;
    uint16_t l_1522 = 0x5796L;
    uint32_t l_1526 = 1UL;
    int8_t **l_1581 = &g_204;
    uint32_t l_1582 = 18446744073709551609UL;
    uint16_t * const *l_1646 = &l_886;
    uint16_t * const **l_1645[3];
    int16_t l_1662 = 0xB7E7L;
    int64_t l_1862 = 0xE6930FC8597948FELL;
    uint8_t ****l_1877 = (void*)0;
    uint8_t *****l_1876 = &l_1877;
    uint16_t l_1907 = 65527UL;
    const uint32_t l_2023 = 1UL;
    uint32_t l_2045 = 0x16F34DA1L;
    int8_t l_2046 = 0x68L;
    uint32_t *l_2047 = &g_161;
    int16_t *l_2048 = &l_1662;
    int64_t *l_2050 = &g_158;
    int64_t *l_2051 = &g_574;
    uint16_t l_2052 = 0UL;
    int32_t *l_2069 = (void*)0;
    int32_t **l_2068 = &l_2069;
    uint16_t ** const l_2082 = &l_886;
    uint64_t **l_2250[10];
    uint64_t ***l_2249 = &l_2250[6];
    uint64_t ****l_2248[9] = {&l_2249,&l_2249,&l_2249,&l_2249,&l_2249,&l_2249,&l_2249,&l_2249,&l_2249};
    uint64_t *****l_2247 = &l_2248[6];
    int16_t ****l_2293 = (void*)0;
    uint16_t * const ***l_2414 = &l_1645[1];
    uint16_t * const ****l_2413[1][8] = {{&l_2414,&l_2414,&l_2414,&l_2414,&l_2414,&l_2414,&l_2414,&l_2414}};
    const uint64_t l_2458 = 0UL;
    uint32_t l_2476 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_896[i] = &g_671[1];
    for (i = 0; i < 8; i++)
        l_977[i] = 0xF8CFA606L;
    for (i = 0; i < 3; i++)
        l_1645[i] = &l_1646;
    for (i = 0; i < 10; i++)
        l_2250[i] = &l_1155[0];
    (*l_887) = l_884;
    for (g_6 = (-9); (g_6 < (-28)); g_6--)
    { /* block id: 469 */
        int32_t **l_895 = (void*)0;
        int32_t ***l_894 = &l_895;
        int32_t *** const *l_893 = &l_894;
        int32_t *** const **l_892 = &l_893;
        int32_t l_909 = 0x385D4F22L;
        int64_t *l_910 = &g_524[1][4];
        const int16_t *l_917[3][7][6] = {{{(void*)0,(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0},{&g_112[3],&g_848,&g_504,&g_504,&g_848,&g_112[3]},{(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0,(void*)0},{&g_112[3],&g_112[3],&g_112[3],&g_112[3],&g_848,&g_112[3]},{&g_112[3],&g_848,&g_112[3],&g_112[3],&g_112[3],&g_112[3]},{(void*)0,(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0},{&g_112[3],&g_848,&g_504,&g_504,&g_848,&g_112[3]}},{{(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0,(void*)0},{&g_112[3],&g_112[3],&g_112[3],&g_112[3],&g_848,&g_112[3]},{&g_112[3],&g_848,&g_112[3],&g_112[3],&g_112[3],&g_112[3]},{(void*)0,(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0},{&g_112[3],&g_848,&g_504,&g_504,&g_848,&g_112[3]},{(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0,(void*)0},{&g_112[3],&g_112[3],&g_112[3],&g_112[3],&g_848,&g_112[3]}},{{&g_112[3],&g_848,&g_112[3],&g_112[3],&g_112[3],&g_112[3]},{(void*)0,(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0},{&g_112[3],&g_848,&g_504,&g_504,&g_848,&g_112[3]},{(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0,(void*)0},{&g_112[3],&g_112[3],&g_112[3],&g_112[3],&g_848,&g_112[3]},{&g_112[3],&g_848,&g_112[3],&g_112[3],&g_112[3],&g_112[3]},{(void*)0,(void*)0,&g_112[3],&g_504,&g_112[3],(void*)0}}};
        uint8_t *l_919[8][1] = {{&g_113},{&g_185[3][0][0]},{&g_113},{&g_113},{&g_185[3][0][0]},{&g_113},{&g_113},{&g_185[3][0][0]}};
        int16_t *l_921 = (void*)0;
        int16_t *l_922 = (void*)0;
        int16_t *l_923 = (void*)0;
        int16_t *l_924 = (void*)0;
        int32_t *l_925 = &g_106;
        int64_t ***l_943[9];
        int16_t l_992 = 0L;
        uint16_t ** const ***l_1013 = &g_1009;
        int8_t ** const l_1019[9] = {&g_204,&g_204,&g_204,&g_204,&g_204,&g_204,&g_204,&g_204,&g_204};
        uint32_t l_1021 = 0x7432DD85L;
        int32_t ** const *l_1036[6][3][6] = {{{&l_895,&l_895,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_895,(void*)0,(void*)0},{&l_895,(void*)0,(void*)0,(void*)0,&l_895,(void*)0}},{{(void*)0,&l_895,(void*)0,&l_895,&l_895,(void*)0},{&l_895,&l_895,(void*)0,&l_895,(void*)0,(void*)0},{&l_895,(void*)0,(void*)0,(void*)0,&l_895,(void*)0}},{{(void*)0,&l_895,(void*)0,&l_895,&l_895,(void*)0},{&l_895,&l_895,(void*)0,&l_895,(void*)0,(void*)0},{&l_895,(void*)0,(void*)0,(void*)0,&l_895,(void*)0}},{{(void*)0,&l_895,(void*)0,&l_895,&l_895,(void*)0},{&l_895,&l_895,(void*)0,&l_895,(void*)0,(void*)0},{&l_895,(void*)0,(void*)0,(void*)0,&l_895,(void*)0}},{{(void*)0,&l_895,(void*)0,&l_895,&l_895,(void*)0},{&l_895,&l_895,(void*)0,&l_895,(void*)0,(void*)0},{&l_895,(void*)0,(void*)0,(void*)0,&l_895,(void*)0}},{{(void*)0,&l_895,(void*)0,&l_895,&l_895,(void*)0},{&l_895,&l_895,(void*)0,&l_895,(void*)0,(void*)0},{&l_895,(void*)0,(void*)0,(void*)0,&l_895,(void*)0}}};
        int32_t ** const **l_1035 = &l_1036[3][1][1];
        uint16_t l_1045 = 65535UL;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_943[i] = &g_584;
        /*bef_stmt:135567*/
/*bef_stmt:135567*/
/*bef_stmt:135567*/
/*bef_stmt:135567*/
/*bef_stmt:135567*/
/*bef_stmt:135567*/
/*bef_stmt:135567*/
/*bef_stmt:135567*/
if (((*l_925) |= (Tag50(/*int8_t:135625:135625:135567:e*/p_34) , (safe_mod_func_int8_t_s_s(((l_892 = l_892) != (l_896[0] = l_896[1])), ((safe_div_func_int16_t_s_s((l_918 = (safe_mod_func_int8_t_s_s(((l_920 |= (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((Tag51(/*int8_t:135625:135625:135567:e*/p_34) || ((*l_910) = Tag52(/*int32_t:135573:135625:135567:e*/l_909))), (((*g_271) = (safe_lshift_func_int8_t_s_u(0x0EL, (safe_rshift_func_int16_t_s_u(6L, (0xB6D13E6BBDFCF15FLL || (safe_sub_func_int16_t_s_s((((void*)0 == l_917[2][4][5]) || (-8L)), 0x04B6L)))))))) < 0x4122L))), 0)), Tag53(/*int8_t:135625:135625:135567:e*/p_34))), Tag54(/*int32_t:135625:135625:135567:e*/l_918)))) | 0x1DL), Tag55(/*int8_t:135625:135625:135567:e*/p_34)))), Tag56(/*int8_t:135625:135625:135567:e*/p_34))) ^ Tag57(/*int8_t:0:0:135567:e*/g_762)))))))
        { /* block id: 477 */
            int16_t *l_926 = &g_876;
            int16_t *l_929 = &g_848;
            int32_t l_934 = 0L;
            int32_t **l_938 = &l_925;
            /*bef_stmt:121912*/
(*l_925) ^= Tag58(/*int8_t:135625:135625:121912:e*/p_34);
/*aft_stmt:121912*/
            (*g_98) = (void*)0;
            /*bef_stmt:122714*/
/*bef_stmt:122714*/
/*bef_stmt:122714*/
/*bef_stmt:122714*/
/*bef_stmt:122714*/
/*bef_stmt:122714*/
/*bef_stmt:122714*/
/*bef_stmt:122714*/
/*bef_stmt:122714*/
/*bef_stmt:122714*/
l_909 &= (((Tag59(/*int32_t:135573:135625:122714:e*/*l_925)) || ((*l_926) ^= ((*g_271) = Tag60(/*int8_t:135625:135625:122714:e*/p_34)))) | ((((((**l_885) = (((((safe_add_func_uint32_t_u_u((((void*)0 == (*g_98)) || ((l_929 = (*g_270)) == (*g_270))), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((g_185[1][2][0]++), ((g_762 = ((*g_204) = ((void*)0 == l_938))) > (safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s(((l_943[1] == (void*)0) , Tag61(/*const uint16_t:0:0:122714:e*/g_759)), 4)) <= (-1L)) , g_253) == g_253), Tag62(/*uint32_t:0:0:122714:e*/g_14)))))), 13)))) <= 4294967295UL) == Tag63(/*int8_t:135625:135625:122714:e*/p_34)) && 1UL) != Tag64(/*int8_t:135625:135625:122714:e*/p_34))) >= (Tag65(/*int32_t:122743:135573:122714:e*/**l_938))) , (Tag66(/*int32_t:122743:135573:122714:e*/**l_938))) <= Tag67(/*uint32_t:0:0:122714:e*/g_9)) >= Tag68(/*int8_t:135625:135625:122714:e*/p_34)));
/*aft_stmt:122714*/
/*aft_stmt:122714*/
/*aft_stmt:122714*/
/*aft_stmt:122714*/
/*aft_stmt:122714*/
/*aft_stmt:122714*/
/*aft_stmt:122714*/
/*aft_stmt:122714*/
/*aft_stmt:122714*/
/*aft_stmt:122714*/
            /*bef_stmt:122739*/
if (Tag69(/*int8_t:135625:135625:122739:e*/p_34))
                break;
/*aft_stmt:122739*/
        }
        else
        { /* block id: 489 */
            const int32_t l_955[5] = {1L,1L,1L,1L,1L};
            uint32_t *l_972[9] = {&g_9,&g_159,&g_9,&g_159,&g_9,&g_159,&g_9,&g_159,&g_9};
            int32_t l_975 = 0x2BF1D18AL;
            int32_t l_976 = 0x445B5F59L;
            int32_t l_978 = 0x9B4147E7L;
            int8_t **l_1018 = &g_204;
            int32_t l_1066 = 0x324B1C2BL;
            uint16_t *****l_1095[3];
            int32_t ***l_1102 = &l_895;
            int32_t l_1112 = 6L;
            int i;
            for (i = 0; i < 3; i++)
                l_1095[i] = &l_887;
            /*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
/*bef_stmt:124473*/
l_978 |= ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((((Tag70(/*int32_t:135573:135625:124473:e*/*l_925)) != (-1L)) > (Tag71(/*int8_t:0:0:124473:e*/*g_204))))), (safe_rshift_func_uint16_t_u_u(((((l_977[3] ^= (l_976 &= ((safe_mul_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((l_974 = (safe_mod_func_uint32_t_u_u((l_973 = ((((0x56L & (Tag72(/*const int32_t:135549:135573:124473:e*/l_955[1]) & (safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((safe_div_func_int64_t_s_s(((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((-2L), (g_113 |= Tag73(/*int64_t:0:0:124473:e*/g_524[1][4])))), (+9UL))) || ((((((((safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(((~(Tag74(/*int8_t:0:0:124473:e*/*g_204))) & Tag75(/*int8_t:135625:135625:124473:e*/p_34)), Tag76(/*uint32_t:0:0:124473:e*/g_9))) && Tag77(/*int8_t:135625:135625:124473:e*/p_34)), Tag78(/*int64_t:0:0:124473:e*/g_524[1][4]))) == Tag79(/*const int32_t:135549:135573:124473:e*/l_955[2])) < 18446744073709551615UL) & Tag80(/*int8_t:135625:135625:124473:e*/p_34)) , (Tag81(/*int8_t:0:0:124473:e*/*g_204))) && (Tag82(/*int32_t:135573:135625:124473:e*/*l_925))) && Tag83(/*int8_t:135625:135625:124473:e*/p_34)) > Tag84(/*const int32_t:135549:135573:124473:e*/l_955[2]))), 0x009C278E621CBA4CLL)) > 18446744073709551615UL) & 8UL), (Tag85(/*const uint64_t:0:0:124473:e*/*g_236)))), Tag86(/*int8_t:135625:135625:124473:e*/p_34))))) ^ Tag87(/*const int32_t:135549:135573:124473:e*/l_955[1])) <= Tag88(/*int8_t:135625:135625:124473:e*/p_34)) | 0x84F1491A5D89F31ELL)), Tag89(/*const int32_t:135549:135573:124473:e*/l_955[2])))), Tag90(/*int32_t:135549:135573:124473:e*/l_975))) , 255UL), Tag91(/*uint16_t:0:0:124473:e*/g_400[0][2][7]))) , Tag92(/*int8_t:135625:135625:124473:e*/p_34)))) || 0xAC925F65L) , (-3L)) < Tag93(/*int8_t:135625:135625:124473:e*/p_34)), 12)))) < 0L);
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
/*aft_stmt:124473*/
            for (g_109 = 0; (g_109 <= 29); g_109 = safe_add_func_int16_t_s_s(g_109, 6))
            { /* block id: 498 */
                int8_t l_981 = (-4L);
                int32_t l_993 = 1L;
                int32_t ****l_1034 = &l_894;
                int16_t l_1038 = (-2L);
                const int32_t l_1040 = 0L;
                (*g_98) = &l_978;
                /*bef_stmt:124739*/
if (Tag94(/*int8_t:134559:135549:124739:e*/l_981))
                    break;
/*aft_stmt:124739*/
                /*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
/*bef_stmt:125767*/
if ((((safe_lshift_func_int16_t_s_s((-7L), ((((((*l_910) = ((safe_add_func_int64_t_s_s(Tag95(/*int8_t:135625:135625:125767:e*/p_34), (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((*g_204) |= Tag96(/*int32_t:135549:135573:125767:e*/l_975)), ((safe_add_func_uint32_t_u_u((l_993 = Tag97(/*int16_t:135573:135625:125767:e*/l_992)), 0x4D7EB94BL)) || 0x3AL))), (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s((Tag98(/*int8_t:134559:135549:125767:e*/l_981) || ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((Tag99(/*const uint64_t:0:0:125767:e*/*g_236)), Tag100(/*int8_t:134559:135549:125767:e*/l_981))) & Tag101(/*int8_t:135625:135625:125767:e*/p_34)), Tag102(/*int8_t:135625:135625:125767:e*/p_34))) <= (Tag103(/*int32_t:135573:135625:125767:e*/*l_925)))), 65530UL)) , Tag104(/*uint16_t:0:0:125767:e*/g_400[0][1][4])) == Tag105(/*int8_t:135625:135625:125767:e*/p_34)), Tag106(/*const int32_t:0:0:125767:e*/g_59))) , 1L) < 0xDD6DBB33L), 1UL)))))) < 1L)) , 0x74D9C1214A6E320BLL) > (Tag107(/*int32_t:135573:135625:125767:e*/*l_925))) , (void*)0) == &g_583))) == (Tag108(/*const int32_t:0:0:125767:e*/*g_99))) , Tag109(/*int8_t:135625:135625:125767:e*/p_34)))
                { /* block id: 504 */
                    l_976 |= ((*l_925) = 0L);
                }
                else
                { /* block id: 507 */
                    int32_t l_1005 = (-4L);
                    int8_t *l_1017 = &g_506;
                    /*bef_stmt:125536*/
l_976 ^= (+Tag110(/*int32_t:125760:134559:125536:e*/l_1005));
/*aft_stmt:125536*/
                    for (g_71 = (-13); (g_71 < 20); g_71 = safe_add_func_uint32_t_u_u(g_71, 6))
                    { /* block id: 511 */
                        uint64_t l_1014 = 0x26F131D4E7176506LL;
                        l_1013 = g_1008;
                        ++l_1014;
                        return l_1017;
                    }
                    l_993 = (l_1018 == l_1019[3]);
                }
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
/*aft_stmt:125767*/
                /*bef_stmt:134553*/
if (Tag111(/*int8_t:135625:135625:134553:e*/p_34))
                { /* block id: 518 */
                    int8_t ***l_1032[8] = {&l_1018,&l_1018,&l_1018,&l_1018,&l_1018,&l_1018,&l_1018,&l_1018};
                    int32_t l_1039 = 1L;
                    int i;
                    /*bef_stmt:126750*/
if ((Tag112(/*const int32_t:0:0:126750:e*/**g_98)))
                    { /* block id: 519 */
                        return l_1020;
                    }
                    else
                    { /* block id: 521 */
                        int8_t ***l_1031 = &l_1018;
                        int8_t ****l_1030 = &l_1031;
                        int32_t ** const ***l_1037 = &l_1035;
                        /*bef_stmt:126106*/
if (Tag113(/*uint32_t:135573:135625:126106:e*/l_1021))
                            break;
/*aft_stmt:126106*/
                        /*bef_stmt:126141*/
(*l_925) &= (+Tag114(/*int8_t:135625:135625:126141:e*/p_34));
/*aft_stmt:126141*/
                        (*g_98) = (*g_98);
                        /*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
/*bef_stmt:126726*/
(*l_925) = ((((0xD9233CA5L < (((safe_mod_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((~(g_159 = (Tag115(/*int8_t:135625:135625:126726:e*/p_34) ^ (Tag116(/*int32_t:135549:135573:126726:e*/l_975) , (0L >= (safe_lshift_func_int16_t_s_s((Tag117(/*int8_t:135625:135625:126726:e*/p_34) & (((*l_1030) = (void*)0) != l_1032[6])), (+(((g_435[0] = (((l_1034 == ((*l_1037) = l_1035)) , Tag118(/*int16_t:134559:135549:126726:e*/l_1038)) == Tag119(/*int32_t:127863:134559:126726:e*/l_1039))) == 0x74L) > Tag120(/*uint16_t:0:0:126726:e*/g_400[0][0][1])))))))))) & Tag121(/*int32_t:135549:135573:126726:e*/l_975)), 18446744073709551615UL)) && Tag122(/*int32_t:127863:134559:126726:e*/l_1039)), 4L)) < Tag123(/*int32_t:127863:134559:126726:e*/l_1039)) <= 0xA3L)) | 0x9BD74B37L) > Tag124(/*int8_t:135625:135625:126726:e*/p_34)) & Tag125(/*const int32_t:134559:135549:126726:e*/l_1040));
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
/*aft_stmt:126726*/
                    }
/*aft_stmt:126750*/
                    /*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
/*bef_stmt:127540*/
l_1039 = ((safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((Tag126(/*uint16_t:0:0:127540:e*/g_400[0][2][7]) >= Tag127(/*uint16_t:135573:135625:127540:e*/l_1045)), (safe_mul_func_int8_t_s_s(((*g_204) |= 0L), Tag128(/*int8_t:135625:135625:127540:e*/p_34))))) , Tag129(/*int32_t:127863:134559:127540:e*/l_1039)) | (safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s(((l_1066 = (((safe_lshift_func_uint16_t_u_s(3UL, (Tag130(/*int16_t:0:0:127540:e*/**g_270)))) , Tag131(/*int8_t:135625:135625:127540:e*/p_34)) , (safe_add_func_uint8_t_u_u((((l_978 = (l_993 = (~(l_976 ^= (safe_div_func_int8_t_s_s(((*l_1020) |= (((**l_885)++) && (safe_div_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((((*g_271) = (Tag132(/*int16_t:0:0:127540:e*/*g_271))) == 0L), Tag133(/*int8_t:135625:135625:127540:e*/p_34))) || (Tag134(/*const uint64_t:0:0:127540:e*/*g_236))), Tag135(/*int8_t:135625:135625:127540:e*/p_34))))), Tag136(/*int8_t:135625:135625:127540:e*/p_34))))))) , 0x810D97E798E749A7LL) & Tag137(/*int8_t:135625:135625:127540:e*/p_34)), Tag138(/*int8_t:135625:135625:127540:e*/p_34))))) == Tag139(/*int8_t:135625:135625:127540:e*/p_34)))) < 1UL) , 65535UL), Tag140(/*int8_t:135625:135625:127540:e*/p_34))), 0xCDL))), Tag141(/*int16_t:134559:135549:127540:e*/l_1038))) ^ (Tag142(/*uint16_t:0:0:127540:e*/*g_1012)));
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
/*aft_stmt:127540*/
                    (*g_98) = &l_1039;
                    for (g_848 = 20; (g_848 > 6); g_848 = safe_sub_func_uint8_t_u_u(g_848, 7))
                    { /* block id: 543 */
                        uint16_t l_1069[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1069[i] = 65535UL;
                        l_1069[1]++;
                        (*l_925) ^= 0xBDE28141L;
                        /*bef_stmt:127844*/
if (Tag143(/*uint16_t:127848:127863:127844:e*/l_1069[1]))
                            continue;
/*aft_stmt:127844*/
                    }
                }
                else
                { /* block id: 548 */
                    int8_t l_1072 = 0x8EL;
                    int32_t l_1088[10] = {0x2B48C27CL,0x2B48C27CL,0x2B48C27CL,0x2B48C27CL,0x2B48C27CL,0x2B48C27CL,0x2B48C27CL,0x2B48C27CL,0x2B48C27CL,0x2B48C27CL};
                    uint64_t *l_1097[2][7][6] = {{{(void*)0,&g_221,&g_71,&g_221,&g_71,&g_221},{&g_221,&g_221,&g_71,&g_71,&g_71,&g_221},{&g_71,&g_71,&g_71,&g_71,&g_71,&g_71},{&g_221,&g_71,&g_71,&g_221,&g_71,&g_71},{&g_221,&g_221,&g_71,&g_71,&g_71,&g_221},{&g_71,&g_221,&g_71,&g_71,&g_221,&g_71},{&g_71,&g_71,&g_221,&g_221,&g_221,(void*)0}},{{&g_71,(void*)0,&g_71,&g_71,&g_71,&g_221},{&g_71,&g_71,&g_71,&g_221,&g_71,&g_221},{&g_71,&g_221,(void*)0,&g_71,&g_221,&g_71},{&g_221,&g_71,&g_71,&g_71,&g_221,&g_71},{&g_71,(void*)0,&g_221,(void*)0,&g_71,&g_71},{&g_71,&g_221,&g_71,(void*)0,&g_71,&g_71},{&g_71,&g_71,&g_221,&g_221,&g_71,&g_71}}};
                    int i, j, k;
                    for (p_34 = 0; (p_34 >= 0); p_34 -= 1)
                    { /* block id: 551 */
                        int8_t ***l_1074 = &l_1018;
                        int8_t ****l_1073[4][7][9] = {{{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,&l_1074},{&l_1074,&l_1074,&l_1074,(void*)0,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0},{(void*)0,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,(void*)0,&l_1074,&l_1074,(void*)0,&l_1074,&l_1074},{&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074}},{{&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,(void*)0},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,&l_1074},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{(void*)0,&l_1074,(void*)0,(void*)0,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074},{(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,&l_1074,&l_1074},{&l_1074,(void*)0,(void*)0,(void*)0,&l_1074,(void*)0,&l_1074,&l_1074,(void*)0},{(void*)0,&l_1074,&l_1074,(void*)0,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074}},{{&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,(void*)0,&l_1074,&l_1074},{(void*)0,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,&l_1074},{&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074}},{{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0},{&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,(void*)0,&l_1074},{&l_1074,(void*)0,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074}}};
                        uint16_t *****l_1079 = (void*)0;
                        int i, j, k;
                    }
                    /*bef_stmt:134539*/
/*bef_stmt:134539*/
/*bef_stmt:134539*/
/*bef_stmt:134539*/
/*bef_stmt:134539*/
/*bef_stmt:134539*/
/*bef_stmt:134539*/
/*bef_stmt:134539*/
/*bef_stmt:134539*/
/*bef_stmt:134539*/
if ((Tag144(/*int8_t:0:0:134539:e*/g_573[1][1]) , (0x28L ^ (((g_71 = (l_978 = (((safe_rshift_func_uint8_t_u_u((((((((&g_1009 != ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((void*)0 == l_1095[0]), 5)), Tag145(/*int64_t:135625:135625:134539:e*/l_1096))) , ((0xCD7FF5B53970ABACLL == (Tag146(/*int64_t:0:0:134539:e*/g_158) > 1UL)) , &g_1009))) <= (Tag147(/*int16_t:0:0:134539:e*/**g_270))) > (Tag148(/*int32_t:135573:135625:134539:e*/*l_925))) && Tag149(/*int8_t:0:0:134539:e*/g_573[1][1])) & 0xD5935F02F6E982ECLL) != Tag150(/*uint32_t:0:0:134539:e*/g_14)) == (-1L)), 0)) != Tag151(/*int8_t:135625:135625:134539:e*/p_34)) >= Tag152(/*const int32_t:0:0:134539:e*/g_59)))) < (Tag153(/*int32_t:135573:135625:134539:e*/*l_925))) , 255UL))))
                    { /* block id: 561 */
                        /*bef_stmt:133683*/
/*bef_stmt:133683*/
l_1088[5] = ((safe_mod_func_uint16_t_u_u((Tag154(/*int8_t:135625:135625:133683:e*/p_34) > Tag155(/*int32_t:135549:135573:133683:e*/l_978)), ((*g_271) = 2L))) > ((void*)0 == l_1102));
/*aft_stmt:133683*/
/*aft_stmt:133683*/
                        /*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
/*bef_stmt:134324*/
(*l_925) &= (((g_435[0] = ((-2L) > (((((safe_add_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((Tag156(/*int8_t:135625:135625:134324:e*/p_34) | ((l_1112 &= (((safe_rshift_func_uint8_t_u_u(((5L ^ (safe_mod_func_int32_t_s_s(((0x6A1B114056A652C4LL || (((Tag157(/*int8_t:0:0:134324:e*/*g_204)) | Tag158(/*int32_t:135625:135625:134324:e*/l_1111)) , 3UL)) || ((((void*)0 == &l_1040) || Tag159(/*int8_t:134545:134559:134324:e*/l_1072)) && (Tag160(/*int16_t:0:0:134324:e*/*g_271)))), 1UL))) && (Tag161(/*int16_t:0:0:134324:e*/**g_270))), Tag162(/*int64_t:0:0:134324:e*/g_524[4][4]))) & Tag163(/*int8_t:135625:135625:134324:e*/p_34)) || Tag164(/*int8_t:135625:135625:134324:e*/p_34))) , (Tag165(/*const int32_t:0:0:134324:e*/*g_99)))) , (-1L)), 18446744073709551615UL)) != Tag166(/*int8_t:135625:135625:134324:e*/p_34)), (Tag167(/*int16_t:0:0:134324:e*/**g_270)))) || 0x478006A8B99F6A77LL) <= Tag168(/*int8_t:135625:135625:134324:e*/p_34)) >= Tag169(/*int8_t:135625:135625:134324:e*/p_34)) & 1UL))) <= Tag170(/*int8_t:135625:135625:134324:e*/p_34)) , Tag171(/*int8_t:135625:135625:134324:e*/p_34));
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
/*aft_stmt:134324*/
                    }
                    else
                    { /* block id: 567 */
                        int8_t *****l_1113 = &g_253;
                        /*bef_stmt:134529*/
(*l_925) ^= (((((Tag172(/*const int32_t:0:0:134529:e*/*g_99)) <= (-6L)) != ((void*)0 != (**l_1013))) , ((*l_1113) = g_253)) == (void*)0);
/*aft_stmt:134529*/
                    }
/*aft_stmt:134539*/
/*aft_stmt:134539*/
/*aft_stmt:134539*/
/*aft_stmt:134539*/
/*aft_stmt:134539*/
/*aft_stmt:134539*/
/*aft_stmt:134539*/
/*aft_stmt:134539*/
/*aft_stmt:134539*/
/*aft_stmt:134539*/
                }
/*aft_stmt:134553*/
            }
            (*g_98) = &l_978;
            for (g_239 = 0; (g_239 <= 0); g_239 += 1)
            { /* block id: 576 */
                uint16_t l_1114 = 0xE3CAL;
                int32_t l_1122 = 0xAAB97098L;
                uint32_t l_1132 = 0UL;
                l_1114++;
                for (l_918 = 0; (l_918 <= 0); l_918 += 1)
                { /* block id: 580 */
                    uint32_t l_1117[5][8];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_1117[i][j] = 0UL;
                    }
                    for (l_992 = 0; l_992 < 8; l_992 += 1)
                    {
                        for (g_106 = 0; g_106 < 1; g_106 += 1)
                        {
                            l_919[l_992][g_106] = &g_185[3][0][0];
                        }
                    }
                    l_1117[1][3] = 0xAFF09E1AL;
                }
                for (l_1045 = 0; (l_1045 <= 0); l_1045 += 1)
                { /* block id: 586 */
                    uint16_t l_1119 = 0x698BL;
                    int32_t *** const l_1127 = &l_895;
                    int32_t *l_1128[6] = {&l_978,&l_978,&l_978,&l_978,&l_978,&l_978};
                    int i, j;
                }
            }
        }
/*aft_stmt:135567*/
/*aft_stmt:135567*/
/*aft_stmt:135567*/
/*aft_stmt:135567*/
/*aft_stmt:135567*/
/*aft_stmt:135567*/
/*aft_stmt:135567*/
/*aft_stmt:135567*/
    }
    return (*l_1581);
}


/* ------------------------------------------ */
/* 
 * reads : g_98 g_312 g_161 g_204 g_99 g_6 g_109 g_158 g_221 g_236 g_237 g_106 g_112 g_185 g_13 g_504 g_270 g_271 g_762 g_524 g_159
 * writes: g_6 g_99 g_312 g_161 g_13 g_109 g_158 g_221 g_71 g_106 g_248 g_112
 */
static int8_t  func_35(int64_t  p_36, uint16_t  p_37, int32_t * p_38, uint16_t  p_39)
{ /* block id: 250 */
    uint16_t *l_472[7][4][9] = {{{&g_408[0][1],&g_239,&g_408[1][2],&g_400[0][2][7],&g_408[0][4],&g_408[0][2],&g_400[0][2][7],&g_312,&g_312},{&g_400[0][2][7],&g_312,&g_408[0][0],&g_312,&g_408[1][2],&g_408[0][4],(void*)0,&g_400[0][2][6],&g_408[1][2]},{&g_408[0][1],(void*)0,&g_408[0][1],&g_312,&g_400[0][0][4],&g_239,(void*)0,&g_239,&g_239},{(void*)0,&g_312,&g_408[1][0],&g_239,&g_408[1][2],&g_400[0][1][4],(void*)0,&g_408[1][2],&g_408[0][2]}},{{&g_408[0][0],&g_408[1][1],&g_408[1][2],&g_239,&g_408[1][2],&g_312,&g_312,&g_408[0][2],&g_312},{&g_400[0][2][0],&g_400[0][2][7],(void*)0,&g_408[1][2],(void*)0,&g_408[1][2],&g_400[0][2][7],&g_408[1][2],&g_400[0][2][6]},{&g_408[0][4],&g_312,&g_408[1][1],(void*)0,&g_408[0][2],(void*)0,&g_239,&g_408[0][2],&g_400[0][2][7]},{(void*)0,&g_312,&g_408[1][1],(void*)0,&g_408[0][1],(void*)0,(void*)0,&g_239,&g_400[0][2][7]}},{{&g_239,&g_400[0][2][7],(void*)0,&g_239,&g_239,&g_408[0][0],&g_400[0][2][7],(void*)0,(void*)0},{&g_312,&g_408[1][1],&g_239,&g_400[0][0][3],&g_312,&g_312,&g_239,&g_408[1][1],&g_239},{&g_408[1][2],&g_312,(void*)0,&g_400[0][2][4],(void*)0,&g_239,&g_400[0][1][5],&g_408[1][2],(void*)0},{&g_400[0][0][6],&g_400[0][2][7],&g_408[1][2],&g_408[1][2],&g_400[0][2][7],&g_400[0][2][7],&g_400[0][2][7],&g_400[0][2][7],&g_408[1][2]}},{{&g_400[0][2][7],&g_408[1][2],&g_400[0][2][7],&g_239,(void*)0,&g_400[0][2][6],(void*)0,&g_400[0][0][3],(void*)0},{&g_312,&g_239,&g_408[1][4],&g_239,&g_408[0][0],&g_312,&g_239,&g_239,&g_312},{&g_239,&g_312,(void*)0,&g_239,&g_312,&g_312,&g_400[0][2][7],&g_408[1][2],&g_408[0][1]},{(void*)0,&g_408[1][0],&g_408[0][4],&g_408[1][2],&g_239,(void*)0,&g_408[1][2],(void*)0,&g_239}},{{&g_239,(void*)0,&g_400[0][0][8],&g_408[1][1],(void*)0,(void*)0,(void*)0,(void*)0,&g_400[0][2][7]},{&g_239,(void*)0,&g_408[0][4],&g_239,&g_408[1][2],(void*)0,(void*)0,(void*)0,&g_408[1][2]},{&g_312,&g_312,&g_239,&g_408[1][2],&g_239,&g_408[1][0],(void*)0,&g_312,&g_408[1][1]},{&g_408[0][1],&g_400[0][1][4],&g_312,&g_400[0][2][7],&g_239,&g_400[0][0][8],&g_400[0][2][7],&g_239,&g_312}},{{&g_408[0][4],&g_408[1][2],&g_312,&g_408[1][4],&g_400[0][0][6],&g_400[0][0][8],&g_408[1][0],&g_312,&g_312},{&g_408[1][2],&g_400[0][2][7],(void*)0,&g_408[1][2],&g_400[0][2][7],&g_408[1][0],&g_239,&g_239,&g_408[1][1]},{&g_239,&g_408[0][4],(void*)0,&g_239,&g_239,(void*)0,(void*)0,(void*)0,&g_400[0][2][0]},{&g_408[0][4],&g_408[1][2],&g_408[1][1],&g_408[1][1],&g_408[1][2],(void*)0,&g_400[0][0][3],(void*)0,&g_400[0][2][6]}},{{&g_239,&g_408[1][2],&g_239,&g_239,&g_400[0][2][6],(void*)0,(void*)0,&g_239,&g_239},{&g_239,&g_312,(void*)0,(void*)0,(void*)0,&g_312,&g_239,&g_408[1][2],&g_408[0][4]},{&g_312,&g_408[0][1],&g_239,&g_408[1][1],(void*)0,&g_312,&g_239,(void*)0,(void*)0},{&g_312,&g_408[1][2],&g_408[0][1],&g_239,(void*)0,&g_400[0][2][6],&g_408[0][2],&g_408[1][2],&g_400[0][2][7]}}};
    int32_t l_477 = 0xAF0863EAL;
    uint64_t l_482 = 0UL;
    uint32_t *l_483[9];
    int16_t * const *l_487 = (void*)0;
    const uint16_t l_488 = 0xCC21L;
    int32_t *l_489 = &g_109;
    int8_t ** const l_547[5][3] = {{(void*)0,&g_204,(void*)0},{&g_204,&g_204,&g_204},{(void*)0,&g_204,(void*)0},{&g_204,&g_204,&g_204},{(void*)0,&g_204,(void*)0}};
    int8_t ** const *l_546[6];
    int32_t l_553 = 4L;
    int32_t l_571 = 0xCB8743E9L;
    int16_t l_664 = 0x1EA0L;
    uint64_t *l_703 = (void*)0;
    uint64_t **l_702 = &l_703;
    int64_t l_746 = 0x6264BC835CB08668LL;
    uint32_t l_754 = 0xF7C95788L;
    const uint16_t *l_758 = &g_759;
    int16_t l_810 = 0xA4F7L;
    int32_t l_812[10] = {1L,4L,1L,4L,1L,4L,1L,4L,1L,4L};
    int32_t **** const *l_817 = (void*)0;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_483[i] = &g_248;
    for (i = 0; i < 6; i++)
        l_546[i] = &l_547[2][2];
    (*g_98) = func_53(&g_6);
    /*bef_stmt:144305*/
/*bef_stmt:144305*/
/*bef_stmt:144305*/
/*bef_stmt:144305*/
/*bef_stmt:144305*/
/*bef_stmt:144305*/
/*bef_stmt:144305*/
/*bef_stmt:144305*/
/*bef_stmt:144305*/
(*l_489) |= ((safe_mod_func_int32_t_s_s((9UL <= ((*g_204) = (safe_lshift_func_uint16_t_u_s((((~(g_312--)) , (safe_mod_func_int64_t_s_s((&g_244 != &g_244), ((/*TAG173:STA*/((uint16_t)(realsmith_RmzAS((int)(*g_99)+(51))+(int)(p_37)+(int)(g_524[4][4])+(int)(*g_99)+(int)(**g_270)+(int)(*g_271)-(1194080939))+p_37)/*TAG173:END:p_37*/ > (Tag174(/*int32_t:162259:162259:144305:e*/l_477) , (l_477 &= ((safe_sub_func_int32_t_s_s((1L > (safe_div_func_int32_t_s_s(/*TAG175:STA*/((uint64_t)(realsmith_s00SI((unsigned int)(*g_271)+(39), (unsigned int)(**g_270)+(41), (int)(l_482)+(13))+(unsigned int)(l_482)+(unsigned int)(*g_99)+(unsigned int)(*g_271)+(unsigned int)(g_524[4][4])+(unsigned int)(**g_270)-(1194015446))+l_482)/*TAG175:END:l_482*/, (g_161++)))), (safe_unary_minus_func_int16_t_s((l_487 == (void*)0))))) >= /*TAG176:STA*/((uint64_t)(realsmith_tcUp4((int)(**g_270)+(44))+(int)(l_482)+(int)(**g_270)+(int)(p_37)+(int)(*g_99)+(int)(*g_271)-(65525))+l_482)/*TAG176:END:l_482*/)))) , /*TAG177:STA*/((uint16_t)(realsmith_proxy_8bJxO((int)(*g_271)+(81), (int)(*g_271)+(-26), (int)(**g_270)+(-7), (int)(**g_270)+(88))+(int)(l_488)+(int)(g_524[4][4])+(int)(*g_271)+(int)(**g_270)-(1194067662))+l_488)/*TAG177:END:l_488*/)))) != /*TAG178:STA*/((uint16_t)(realsmith_proxy_Ea5KT((int)(**g_270)+(1), (char)(p_37)+(-47))+(int)(l_488)+(int)(l_482)+(int)(p_37)+(int)(*g_271)+(int)(**g_270)-(117795))+l_488)/*TAG178:END:l_488*/), /*TAG179:STA*/((uint16_t)(realsmith_proxy_BNPnC((char)(p_39)+(63))+(int)(p_39)+(int)(p_37)+(int)(**g_270)+(int)(l_482)+(int)(l_488)-(183328))+p_39)/*TAG179:END:p_39*/)))), (/*TAG180:STA*/((int32_t)(realsmith_KgUQ5((long)(**g_98)+(72), (long)(**g_98)+(61))+(long)(**g_98)-(1))+**g_98)/*TAG180:END:**g_98*/))) ^ /*TAG181:STA*/((uint16_t)(realsmith_proxy_uwx85((char)(l_488)+(-47), (int)(l_488)+(-52170))+(char)(l_488)-(81))+l_488)/*TAG181:END:l_488*/);
/*aft_stmt:144305*/
/*aft_stmt:144305*/
/*aft_stmt:144305*/
/*aft_stmt:144305*/
/*aft_stmt:144305*/
/*aft_stmt:144305*/
/*aft_stmt:144305*/
/*aft_stmt:144305*/
/*aft_stmt:144305*/
    for (l_482 = 0; (l_482 <= 1); l_482 += 1)
    { /* block id: 259 */
        int32_t *l_490 = &g_109;
        int32_t l_507 = 2L;
        int16_t *l_543[8][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{&g_112[3]},{&g_112[0]},{(void*)0},{&g_112[0]}},{{&g_112[3]},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{&g_112[3]},{&g_112[3]}},{{&g_504},{&g_112[3]},{(void*)0},{&g_504},{&g_112[6]},{&g_112[6]},{&g_504}},{{(void*)0},{&g_112[3]},{&g_504},{&g_112[3]},{(void*)0},{&g_504},{&g_112[6]}},{{&g_112[6]},{&g_504},{(void*)0},{&g_112[3]},{&g_504},{&g_112[3]},{(void*)0}},{{&g_504},{&g_112[6]},{&g_112[6]},{&g_504},{(void*)0},{&g_112[3]},{&g_504}},{{&g_112[3]},{(void*)0},{&g_504},{&g_112[6]},{&g_112[6]},{&g_504},{(void*)0}},{{&g_112[3]},{&g_504},{&g_112[3]},{(void*)0},{&g_504},{&g_112[6]},{&g_112[6]}}};
        int16_t l_552 = 0x5B23L;
        int32_t l_570[6][9][4] = {{{0x91F6EC8FL,1L,0xF12ADEE9L,1L},{1L,0xF12ADEE9L,2L,0xF12ADEE9L},{2L,0xF12ADEE9L,1L,1L},{0xF12ADEE9L,1L,0x91F6EC8FL,2L},{0xBF444C5DL,2L,2L,0xBF444C5DL},{0xBF444C5DL,1L,0x91F6EC8FL,4L},{0xF12ADEE9L,0xBF444C5DL,1L,9L},{2L,(-1L),2L,9L},{1L,0xBF444C5DL,0xF12ADEE9L,4L}},{{0x91F6EC8FL,1L,0xBF444C5DL,0xBF444C5DL},{2L,2L,0xBF444C5DL,2L},{0x91F6EC8FL,1L,0xF12ADEE9L,1L},{1L,0xF12ADEE9L,2L,0xF12ADEE9L},{2L,0xF12ADEE9L,1L,1L},{0xF12ADEE9L,1L,0x91F6EC8FL,2L},{0xBF444C5DL,2L,2L,0xBF444C5DL},{0xBF444C5DL,1L,0x91F6EC8FL,4L},{0xF12ADEE9L,0xBF444C5DL,1L,9L}},{{2L,(-1L),2L,9L},{1L,0xBF444C5DL,0xF12ADEE9L,4L},{0x91F6EC8FL,1L,0xBF444C5DL,0xBF444C5DL},{2L,2L,0xBF444C5DL,2L},{0x91F6EC8FL,1L,0xF12ADEE9L,1L},{1L,0xF12ADEE9L,2L,0xF12ADEE9L},{2L,0xF12ADEE9L,1L,1L},{0xF12ADEE9L,1L,0x91F6EC8FL,2L},{0xBF444C5DL,2L,2L,0xBF444C5DL}},{{0xBF444C5DL,1L,0x91F6EC8FL,4L},{0xF12ADEE9L,0xBF444C5DL,1L,9L},{2L,(-1L),2L,9L},{1L,0xBF444C5DL,0xF12ADEE9L,4L},{0x91F6EC8FL,1L,0xBF444C5DL,0xBF444C5DL},{2L,2L,0xBF444C5DL,2L},{0x91F6EC8FL,1L,0xF12ADEE9L,1L},{1L,0xF12ADEE9L,2L,0xF12ADEE9L},{2L,0xF12ADEE9L,1L,1L}},{{0xF12ADEE9L,1L,0x91F6EC8FL,1L},{2L,9L,9L,2L},{2L,0xBF444C5DL,2L,1L},{(-1L),2L,0x91F6EC8FL,0xF12ADEE9L},{1L,4L,1L,0xF12ADEE9L},{0x91F6EC8FL,2L,(-1L),1L},{2L,0xBF444C5DL,2L,2L},{9L,9L,2L,1L},{2L,1L,(-1L),0xBF444C5DL}},{{0x91F6EC8FL,(-1L),1L,(-1L)},{1L,(-1L),0x91F6EC8FL,0xBF444C5DL},{(-1L),1L,2L,1L},{2L,9L,9L,2L},{2L,0xBF444C5DL,2L,1L},{(-1L),2L,0x91F6EC8FL,0xF12ADEE9L},{1L,4L,1L,0xF12ADEE9L},{0x91F6EC8FL,2L,(-1L),1L},{2L,0xBF444C5DL,2L,2L}}};
        uint16_t l_711[6][4] = {{4UL,0xC618L,4UL,0xC618L},{4UL,0xC618L,4UL,0xC618L},{4UL,0xC618L,4UL,0xC618L},{4UL,0xC618L,4UL,0xC618L},{4UL,0xC618L,4UL,0xC618L},{4UL,0xC618L,4UL,0xC618L}};
        int i, j, k;
        l_490 = p_38;
        for (g_158 = 1; (g_158 >= 0); g_158 -= 1)
        { /* block id: 263 */
            int16_t l_495[8][5][6] = {{{0xFD89L,0x2838L,(-10L),0x1D06L,(-8L),0xCCDBL},{(-9L),0xC234L,0xCBB7L,1L,0x2838L,(-9L)},{(-7L),(-8L),0x771DL,9L,5L,1L},{1L,0x2916L,0x2838L,0x6BD7L,0xB622L,0xB622L},{0x2838L,0xCCDBL,0xCCDBL,0x2838L,0xA61DL,5L}},{{0x2A4CL,0xFD89L,1L,3L,(-8L),0xB492L},{0xCCDBL,(-5L),5L,(-1L),(-8L),(-9L)},{5L,0xFD89L,0x0354L,(-7L),0xA61DL,9L},{(-10L),0xCCDBL,0x2A4CL,0xC234L,0xB622L,0x4CB1L},{0x0D57L,0x2916L,0x1D06L,(-9L),5L,0xE593L}},{{(-8L),(-8L),0xA61DL,0x46A4L,0x2838L,0x46A4L},{(-5L),0xC234L,(-5L),9L,(-8L),(-7L)},{0x1D06L,0x2838L,0xC234L,(-8L),(-9L),3L},{0xB5F3L,(-9L),0x46A4L,(-8L),0L,9L},{0x1D06L,(-8L),(-5L),9L,(-1L),0xB5F3L}},{{(-5L),(-5L),0xE593L,0x46A4L,0xCBB7L,5L},{(-8L),0xA61DL,0x6BD7L,(-9L),(-7L),0x0D57L},{0xB492L,0xE593L,9L,(-8L),(-8L),9L},{0x0D57L,0x0D57L,0xB492L,0L,(-5L),0xCCDBL},{(-8L),0xB5F3L,0xFD89L,0x1D06L,0xC234L,0xB492L}},{{0x2838L,(-8L),0xFD89L,0x46A4L,0x0D57L,0xCCDBL},{0x4CB1L,0x46A4L,0xB492L,0x5882L,0xFD89L,9L},{0x5882L,0xFD89L,9L,0xCCDBL,9L,0x0D57L},{(-8L),0x2273L,0x6BD7L,0xCBB7L,0L,0x2A4CL},{0L,5L,(-10L),(-8L),(-10L),5L}},{{(-9L),0xCBB7L,0L,0x771DL,0xA61DL,0x0826L},{9L,0xB622L,0x0354L,1L,(-9L),0x46A4L},{0x2A4CL,0xB622L,(-8L),0xFD89L,0xA61DL,0L},{9L,0xCBB7L,5L,0L,(-10L),0x0354L},{0x1D06L,5L,0x2916L,0xB622L,0L,(-10L)}},{{0xE593L,0x2273L,0x771DL,1L,9L,0xFD89L},{0xCBB7L,0xFD89L,0x4CB1L,0x4CB1L,0xFD89L,0xCBB7L},{3L,0x46A4L,0x2273L,9L,0x0D57L,(-9L)},{0xA61DL,(-8L),0x2A4CL,(-1L),0xC234L,(-7L)},{0xA61DL,0xB5F3L,(-1L),9L,(-5L),(-8L)}},{{3L,0x0D57L,0x2838L,0x4CB1L,(-8L),0x6BD7L},{0xCBB7L,0xE593L,0x5882L,1L,(-7L),(-8L)},{0xE593L,0x2916L,3L,0xB622L,1L,(-5L)},{0x1D06L,0L,1L,0L,0x1D06L,0x2838L},{9L,1L,0x0D57L,0xFD89L,0xB622L,0x2273L}}};
            int8_t **l_521 = &g_204;
            uint16_t l_525 = 0x88E2L;
            int32_t l_536 = 9L;
            int8_t l_554 = 0L;
            int32_t l_572 = 0x4FF8A131L;
            int64_t *l_580 = &g_524[0][0];
            int64_t **l_579 = &l_580;
            int64_t ***l_578 = &l_579;
            int32_t l_625 = 0xD167BEF9L;
            uint32_t l_629 = 18446744073709551615UL;
            uint32_t l_643 = 0x01948BFCL;
            int i, j, k;
        }
    }
    for (g_221 = (-29); (g_221 >= 25); g_221++)
    { /* block id: 381 */
        int8_t **l_726 = &g_204;
        int8_t ***l_725 = &l_726;
        int8_t ****l_724 = &l_725;
        uint64_t *l_733 = &l_482;
        int32_t l_747 = 1L;
        int16_t *l_749[10] = {(void*)0,&g_504,&g_504,(void*)0,&l_664,(void*)0,&g_504,&g_504,(void*)0,&l_664};
        int32_t l_803 = 0xAD959840L;
        int32_t l_806 = (-9L);
        int32_t l_808 = 0xEA5257D6L;
        int32_t l_809 = (-1L);
        int32_t l_811 = (-9L);
        int32_t l_813 = 0x2B91C441L;
        int32_t **l_829 = &l_489;
        int i;
        for (g_71 = 7; (g_71 == 14); ++g_71)
        { /* block id: 384 */
            /*bef_stmt:155964*/
(*l_489) = ((Tag182(/*const uint64_t:0:0:155964:e*/*g_236)) ^ (l_724 != (void*)0));
/*aft_stmt:155964*/
        }
        for (g_106 = 1; (g_106 >= 0); g_106 -= 1)
        { /* block id: 389 */
            uint32_t l_745 = 4294967292UL;
            int32_t l_791 = 0x37F8EC5EL;
            int32_t l_801[1];
            uint8_t l_814 = 1UL;
            int32_t l_832 = 1L;
            int i;
            for (i = 0; i < 1; i++)
                l_801[i] = 0x8A75B7B7L;
            (*g_98) = &l_477;
            for (p_36 = 3; (p_36 <= 8); p_36 += 1)
            { /* block id: 393 */
                int32_t l_751 = (-9L);
                uint64_t l_765 = 0x8128E752AE15B302LL;
                uint64_t l_789 = 0x60E3E0D177FD6474LL;
                int32_t l_802 = 1L;
                int32_t l_804 = 0xE3C61104L;
                int32_t l_805 = 0x3C18CECEL;
                int32_t l_807[8] = {0x6CF50226L,0x6CF50226L,0x36C92700L,0x6CF50226L,0x6CF50226L,0x36C92700L,0x6CF50226L,0x6CF50226L};
                int32_t **** const *l_818 = &g_671[0];
                uint8_t *l_821 = &g_185[g_106][p_36][g_106];
                int16_t ***l_823 = &g_270;
                int16_t ****l_822 = &l_823;
                const uint16_t l_862 = 0UL;
                int i, j, k;
                if (g_112[(g_106 + 2)])
                    break;
                /*bef_stmt:162174*/
/*bef_stmt:162174*/
/*bef_stmt:162174*/
/*bef_stmt:162174*/
/*bef_stmt:162174*/
/*bef_stmt:162174*/
/*bef_stmt:162174*/
/*bef_stmt:162174*/
if ((safe_rshift_func_int16_t_s_s(((18446744073709551615UL && g_185[g_106][p_36][g_106]) | (safe_div_func_uint64_t_u_u((((((safe_add_func_uint16_t_u_u((((g_248 = ((void*)0 != l_733)) , ((*l_489) ^= (safe_sub_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((safe_mul_func_uint64_t_u_u(18446744073709551615UL, (Tag183(/*uint16_t:162259:162259:162174:e*/p_39) <= (!(safe_div_func_int16_t_s_s(0L, ((p_36 , (safe_add_func_uint8_t_u_u(0x89L, (Tag184(/*int8_t:0:0:162174:e*/*g_204))))) , 0x5265L))))))), p_36)) >= Tag185(/*int16_t:0:0:162174:e*/g_504)), 1UL)))) | Tag186(/*uint32_t:162204:162222:162174:e*/l_745)), Tag187(/*uint32_t:0:0:162174:e*/g_161))) , Tag188(/*uint16_t:162259:162259:162174:e*/p_37)) || p_36) >= 0x11L) ^ 0L), Tag189(/*int64_t:162259:162259:162174:e*/l_746)))), Tag190(/*uint16_t:162259:162259:162174:e*/p_37))))
                { /* block id: 397 */
                    int64_t l_755 = 0xC4772AB65F3D5325LL;
                    int32_t l_766 = 0x17B9FCCDL;
                    (*g_98) = &l_553;
                    for (g_161 = 0; (g_161 <= 8); g_161 += 1)
                    { /* block id: 401 */
                        uint32_t l_748 = 0xF18F30C6L;
                        int32_t l_750[3];
                        const uint16_t *l_757[6] = {&l_488,&l_488,&l_488,&l_488,&l_488,&l_488};
                        const uint16_t **l_756[7][4][2] = {{{&l_757[3],&l_757[0]},{&l_757[3],&l_757[0]},{&l_757[0],&l_757[3]},{&l_757[3],&l_757[0]}},{{&l_757[2],&l_757[3]},{&l_757[2],&l_757[0]},{&l_757[3],&l_757[3]},{&l_757[0],&l_757[0]}},{{&l_757[3],&l_757[0]},{&l_757[3],&l_757[3]},{&l_757[3],&l_757[3]},{&l_757[3],&l_757[0]}},{{&l_757[3],&l_757[3]},{&l_757[3],&l_757[3]},{&l_757[3],&l_757[3]},{&l_757[0],&l_757[2]}},{{&l_757[0],&l_757[3]},{&l_757[3],&l_757[3]},{&l_757[3],&l_757[3]},{&l_757[2],&l_757[3]}},{{&l_757[3],&l_757[0]},{&l_757[0],&l_757[0]},{&l_757[3],&l_757[3]},{&l_757[2],&l_757[3]}},{{&l_757[3],&l_757[3]},{&l_757[3],&l_757[3]},{&l_757[0],&l_757[2]},{&l_757[0],&l_757[3]}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_750[i] = 3L;
                        /*bef_stmt:160102*/
/*bef_stmt:160102*/
/*bef_stmt:160102*/
l_750[1] &= ((l_747 = (0xDD9E89A85817CEA4LL != (-1L))) ^ (((Tag191(/*uint32_t:160496:161641:160102:e*/l_748) ^ ((*g_270) == (Tag192(/*int64_t:0:0:160102:e*/g_158) , l_749[2]))) ^ (&g_270 == (void*)0)) , Tag193(/*uint16_t:162259:162259:160102:e*/p_39)));
/*aft_stmt:160102*/
/*aft_stmt:160102*/
/*aft_stmt:160102*/
                        /*bef_stmt:160122*/
l_751 = Tag194(/*uint32_t:162204:162222:160122:e*/l_745);
/*aft_stmt:160122*/
                        /*bef_stmt:160450*/
/*bef_stmt:160450*/
/*bef_stmt:160450*/
/*bef_stmt:160450*/
/*bef_stmt:160450*/
/*bef_stmt:160450*/
/*bef_stmt:160450*/
(*l_489) |= (safe_add_func_uint16_t_u_u((l_755 = Tag195(/*uint32_t:162259:162259:160450:e*/l_754)), (((((((Tag196(/*uint16_t:162259:162259:160450:e*/p_39) , &p_39) != (l_758 = (void*)0)) ^ (safe_div_func_uint16_t_u_u(0x9E1CL, Tag197(/*uint32_t:160496:161641:160450:e*/l_748)))) & ((*g_271) ^= Tag198(/*int8_t:0:0:160450:e*/g_762))) | (0UL > (safe_mul_func_uint16_t_u_u(Tag199(/*uint64_t:162180:162204:160450:e*/l_765), Tag200(/*int64_t:0:0:160450:e*/g_524[1][4]))))) , Tag201(/*int32_t:161641:162180:160450:e*/l_766)) != 0x100BAA80210C1FDCLL)));
/*aft_stmt:160450*/
/*aft_stmt:160450*/
/*aft_stmt:160450*/
/*aft_stmt:160450*/
/*aft_stmt:160450*/
/*aft_stmt:160450*/
/*aft_stmt:160450*/
                        /*bef_stmt:160492*/
(*l_489) = (Tag202(/*uint32_t:0:0:160492:e*/g_159) <= 0x5047L);
/*aft_stmt:160492*/
                    }
                    for (l_664 = 5; (l_664 >= 3); l_664 -= 1)
                    { /* block id: 413 */
                        int32_t l_788[7];
                        int32_t *l_790[1];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_788[i] = (-1L);
                        for (i = 0; i < 1; i++)
                            l_790[i] = (void*)0;
                        /*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
/*bef_stmt:161584*/
l_791 = ((*l_489) = ((safe_mul_func_int16_t_s_s((p_36 <= (p_36 , ((safe_mul_func_uint8_t_u_u(p_36, (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((((((void*)0 == &g_584) , (((safe_mod_func_int16_t_s_s(((Tag203(/*int64_t:0:0:161584:e*/g_158) , ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((-1L), (((p_36 ^ (safe_div_func_uint16_t_u_u((Tag204(/*uint16_t:162259:162259:161584:e*/p_39) && (Tag205(/*int8_t:0:0:161584:e*/*g_204))), Tag206(/*int32_t:161625:161641:161584:e*/l_788[1])))) , 0x4A2FL) , (Tag207(/*int32_t:162259:162259:161584:e*/*l_489))))) ^ p_36) , (Tag208(/*const int32_t:0:0:161584:e*/**g_98))) & Tag209(/*int8_t:0:0:161584:e*/g_13)), 255UL)), Tag210(/*uint32_t:0:0:161584:e*/g_159))), 7)) || (Tag211(/*int8_t:0:0:161584:e*/*g_204)))) , (Tag212(/*int16_t:0:0:161584:e*/*g_271))), Tag213(/*int32_t:161641:162180:161584:e*/l_766))) , Tag214(/*uint16_t:162259:162259:161584:e*/p_37)) , (Tag215(/*int32_t:162259:162259:161584:e*/*l_489)))) || (Tag216(/*const int32_t:0:0:161584:e*/**g_98))) == Tag217(/*int32_t:161625:161641:161584:e*/l_788[1])))), Tag218(/*uint16_t:162259:162259:161584:e*/p_37))), 1L)))) || Tag219(/*uint64_t:162180:162204:161584:e*/l_789)))), 0xF4F4L)) , Tag220(/*int32_t:162222:162259:161584:e*/l_747)));
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
/*aft_stmt:161584*/
                        /*bef_stmt:161619*/
(*l_489) |= (Tag221(/*const int32_t:0:0:161619:e*/*g_99));
/*aft_stmt:161619*/
                    }
                }
                else
                { /* block id: 418 */
                    int32_t *l_792 = &g_6;
                    int32_t *l_793 = &l_571;
                    int32_t *l_794 = &l_553;
                    int32_t *l_795 = &g_6;
                    int32_t *l_796 = (void*)0;
                    int32_t *l_797 = &g_109;
                    int32_t *l_798 = &l_571;
                    int32_t l_799 = (-5L);
                    int32_t *l_800[2][4] = {{&l_799,&g_6,&l_799,&g_6},{&l_799,&g_6,&l_799,&g_6}};
                    int i, j;
                    l_814++;
                    /*bef_stmt:162140*/
if ((Tag222(/*int32_t:162259:162259:162140:e*/*l_489)))
                        continue;
/*aft_stmt:162140*/
                    l_818 = l_817;
                }
/*aft_stmt:162174*/
/*aft_stmt:162174*/
/*aft_stmt:162174*/
/*aft_stmt:162174*/
/*aft_stmt:162174*/
/*aft_stmt:162174*/
/*aft_stmt:162174*/
/*aft_stmt:162174*/
            }
        }
    }
    /*bef_stmt:162257*/
return /*TAG223:STA*/((uint16_t)(realsmith_5hr8Y((int)(p_37)+(-65493))+(int)(p_37)-(65577))+p_37)/*TAG223:END:p_37*/;
/*aft_stmt:162257*/
}


/* ------------------------------------------ */
/* 
 * reads : g_98
 * writes: g_99
 */
static const int8_t  func_42(int32_t * p_43, uint32_t  p_44, int32_t  p_45, uint8_t  p_46, int32_t  p_47)
{ /* block id: 246 */
    const uint64_t l_464 = 0x3207EE8DCCD0DA9DLL;
    (*g_98) = &g_59;
    /*bef_stmt:162522*/
return /*TAG224:STA*/((uint64_t)(realsmith_proxy_CcjMP((int)(l_464)+(858727793), (int)(l_464)+(858727709), (long)(l_464)+(-3605112319527410266), (int)(l_464)+(858727872))+(long)(l_464)-(3605112319527410334))+l_464)/*TAG224:END:l_464*/;
/*aft_stmt:162522*/
}


/* ------------------------------------------ */
/* 
 * reads : g_71 g_6 g_13 g_9 g_98 g_59 g_99 g_14 g_109 g_106 g_113 g_119 g_112 g_84 g_158 g_161 g_221 g_236 g_204 g_248 g_253 g_270 g_239 g_185 g_271 g_312 g_237 g_400 g_408 g_435 g_436
 * writes: g_71 g_13 g_84 g_9 g_6 g_112 g_109 g_106 g_113 g_119 g_158 g_159 g_161 g_185 g_204 g_221 g_239 g_244 g_248 g_99 g_270 g_271 g_312 g_400 g_408
 */
static uint32_t  func_48(const int32_t * p_49, int8_t * p_50, int8_t  p_51, int8_t * p_52)
{ /* block id: 14 */
    int32_t *l_60 = &g_6;
    int32_t *l_61 = &g_6;
    int32_t *l_62 = &g_6;
    int32_t *l_63 = &g_6;
    int32_t *l_64 = &g_6;
    int32_t l_65[8] = {(-1L),(-1L),0xF82244F8L,(-1L),(-1L),0xF82244F8L,(-1L),(-1L)};
    int32_t *l_66 = &g_6;
    int32_t *l_67 = &g_6;
    int32_t *l_68 = &g_6;
    int32_t *l_69 = &l_65[2];
    int32_t *l_70[3][2][1];
    int8_t *l_186 = &g_13;
    int32_t l_241[5] = {0xF0FEBA86L,0xF0FEBA86L,0xF0FEBA86L,0xF0FEBA86L,0xF0FEBA86L};
    int16_t *l_278 = &g_112[3];
    int8_t **l_323 = &g_204;
    int8_t ***l_322 = &l_323;
    int32_t **l_433[1][6][5];
    int32_t ***l_432 = &l_433[0][2][4];
    int8_t ****l_457 = &l_322;
    uint8_t l_460 = 4UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_70[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
                l_433[i][j][k] = (void*)0;
        }
    }
lbl_212:
    ++g_71;
    /*bef_stmt:172693*/
if (/*TAG225:STA*/((uint64_t)(realsmith_proxy_IhhGD((int)(g_71)+(84), (int)(g_71)+(-87), (int)(g_71)+(60))+(int)(g_71)-(2))+g_71)/*TAG225:END:g_71*/)
    { /* block id: 16 */
        int32_t l_82 = (-1L);
        /*bef_stmt:165864*/
if ((/*TAG226:STA*/((int32_t)(realsmith_7UE7C((char)(*l_61)+(94))+(int)(*l_61)-(-1))+*l_61)/*TAG226:END:*l_61*/))
        { /* block id: 17 */
            int32_t l_81 = 0x8A21DEC7L;
            for (g_13 = 0; (g_13 != 14); ++g_13)
            { /* block id: 20 */
                int8_t l_78 = 0xD0L;
                for (g_71 = (-5); (g_71 >= 2); ++g_71)
                { /* block id: 23 */
                    int64_t *l_83 = &g_84;
                    int32_t l_118 = 0x0B167AC4L;
                    int8_t **l_122 = (void*)0;
                    int8_t *l_124 = &g_13;
                    int8_t **l_123 = &l_124;
                    int8_t *l_136[3][9] = {{&g_13,&l_78,&g_13,&g_13,&g_13,&l_78,&g_13,&g_13,&g_13},{&g_13,&l_78,&g_13,&g_13,&g_13,&l_78,&g_13,&g_13,&g_13},{&g_13,&l_78,&g_13,&g_13,&g_13,&l_78,&g_13,&g_13,&g_13}};
                    int i, j;
                    /*bef_stmt:165181*/
/*bef_stmt:165181*/
/*bef_stmt:165181*/
/*bef_stmt:165181*/
/*bef_stmt:165181*/
/*bef_stmt:165181*/
/*bef_stmt:165181*/
/*bef_stmt:165181*/
g_119[2] |= (0xBA34L <= ((Tag227(/*int8_t:165834:165845:165181:e*/l_78) , ((Tag228(/*int8_t:182137:182137:165181:e*/p_51) , ((safe_add_func_int16_t_s_s(Tag229(/*int32_t:165845:165870:165181:e*/l_81), (0L & (((*l_83) = Tag230(/*int32_t:165870:182137:165181:e*/l_82)) > func_85(&l_65[0]))))) , ((*l_66) = ((((safe_add_func_uint32_t_u_u(Tag231(/*int32_t:165815:165834:165181:e*/l_118), (-10L))) <= Tag232(/*uint8_t:0:0:165181:e*/g_113)) >= 0x1CC8E035E3094FC7LL) | 0xEC8BL)))) , (Tag233(/*int32_t:182137:182137:165181:e*/*l_61)))) && (Tag234(/*int8_t:182137:182137:165181:e*/*p_52))));
/*aft_stmt:165181*/
/*aft_stmt:165181*/
/*aft_stmt:165181*/
/*aft_stmt:165181*/
/*aft_stmt:165181*/
/*aft_stmt:165181*/
/*aft_stmt:165181*/
/*aft_stmt:165181*/
                    for (g_109 = 8; (g_109 >= 0); g_109 -= 1)
                    { /* block id: 50 */
                        int i;
                        return g_119[g_109];
                    }
                    /*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
/*bef_stmt:165811*/
(*l_69) = ((0x81D0925AL && ((safe_rshift_func_int8_t_s_s(Tag235(/*uint8_t:0:0:165811:e*/g_113), 7)) , (Tag236(/*int32_t:182137:182137:165811:e*/*l_64)))) || ((((*l_63) = ((((*l_123) = &p_51) != ((safe_add_func_int8_t_s_s((~(0xD6L & (safe_mul_func_uint8_t_u_u((Tag237(/*int32_t:0:0:165811:e*/g_119[4]) < ((Tag238(/*const int32_t:182137:182137:165811:e*/*p_49)) , ((p_51 = (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(Tag239(/*int32_t:165845:165870:165811:e*/l_81), (safe_mul_func_int8_t_s_s((Tag240(/*int8_t:182137:182137:165811:e*/p_51) == Tag241(/*int16_t:0:0:165811:e*/g_112[3])), Tag242(/*int8_t:182137:182137:165811:e*/p_51))))), Tag243(/*int8_t:182137:182137:165811:e*/p_51)))) | Tag244(/*int8_t:165834:165845:165811:e*/l_78)))), Tag245(/*int32_t:0:0:165811:e*/g_106))))), 5L)) , (void*)0)) ^ Tag246(/*int16_t:0:0:165811:e*/g_112[3]))) >= Tag247(/*int32_t:165870:182137:165811:e*/l_82)) != 0xE7CE46079F8D1BEBLL));
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
/*aft_stmt:165811*/
                }
            }
        }
        else
        { /* block id: 59 */
            /*bef_stmt:165859*/
return /*TAG248:STA*/((int8_t)(realsmith_OJ8nV()+(int)(p_51)-(53))+p_51)/*TAG248:END:p_51*/;
/*aft_stmt:165859*/
        }
/*aft_stmt:165864*/
    }
    else
    { /* block id: 62 */
        int16_t l_141 = 0x9AF2L;
        int16_t *l_153 = (void*)0;
        const uint32_t l_154 = 0x97B2EA26L;
        int32_t l_155 = 0xF682D672L;
        int8_t *l_175 = &g_13;
        int8_t **l_174 = &l_175;
        int32_t l_201 = 0xF28E72FCL;
        int32_t l_202 = (-6L);
        for (g_106 = 0; (g_106 != (-24)); --g_106)
        { /* block id: 65 */
            uint32_t *l_142 = &g_9;
            int64_t *l_156 = &g_84;
            int64_t *l_157[7][2];
            uint32_t *l_160 = &g_161;
            int32_t l_166 = (-10L);
            int32_t l_260 = 0x8960F64EL;
            int32_t l_261 = 1L;
            int32_t l_262 = 0xE4AD5F31L;
            uint32_t l_266[5];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                    l_157[i][j] = &g_158;
            }
            for (i = 0; i < 5; i++)
                l_266[i] = 0UL;
            /*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
/*bef_stmt:172654*/
if ((safe_div_func_uint16_t_u_u(((Tag249(/*int8_t:182137:182137:172654:e*/p_51) > ((*l_160) = (((*l_142) &= Tag250(/*int16_t:172682:182137:172654:e*/l_141)) , ((((safe_lshift_func_int8_t_s_s(((((Tag251(/*const int32_t:182137:182137:172654:e*/*p_49)) | (&g_13 == (void*)0)) != Tag252(/*int8_t:182137:182137:172654:e*/p_51)) != ((g_159 = (g_158 ^= ((*l_156) ^= (safe_sub_func_int64_t_s_s((((0xC21653139573E0F9LL & ((~(safe_div_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(((&g_112[2] != (((+(((Tag253(/*int32_t:0:0:172654:e*/g_6) , l_153) != (void*)0) != Tag254(/*int8_t:182137:182137:172654:e*/p_51))) | (Tag255(/*int32_t:182137:182137:172654:e*/*l_67))) , (void*)0)) <= Tag256(/*const uint32_t:172682:182137:172654:e*/l_154)), Tag257(/*uint32_t:0:0:172654:e*/g_9))) , Tag258(/*int32_t:172682:182137:172654:e*/l_155)) != Tag259(/*int32_t:172682:182137:172654:e*/l_155)), 246UL))) >= Tag260(/*uint32_t:0:0:172654:e*/g_9))) , 0xCA6ABCE8L) >= Tag261(/*int8_t:182137:182137:172654:e*/p_51)), Tag262(/*int8_t:182137:182137:172654:e*/p_51)))))) == 0L)), (Tag263(/*int8_t:182137:182137:172654:e*/*p_52)))) || Tag264(/*int8_t:182137:182137:172654:e*/p_51)) || Tag265(/*uint64_t:0:0:172654:e*/g_71)) != 0x09CDE0C07D60D117LL)))) < 0xC003BC58EBAA32B3LL), 0x0A89L)))
            { /* block id: 71 */
                int8_t ***l_176 = &l_174;
                uint64_t *l_179 = &g_71;
                int32_t l_184 = 0x1C4912ACL;
                int32_t **l_197 = (void*)0;
                int8_t l_198 = 1L;
                int16_t *l_203 = &g_112[6];
                uint32_t l_242[7][10] = {{0x7967E873L,0x659B8041L,0x5867A26EL,0x659B8041L,0x7967E873L,0x659B8041L,0x5867A26EL,0x659B8041L,0x7967E873L,0x659B8041L},{0x854EA2EEL,0x659B8041L,0x854EA2EEL,0xD6A5165AL,0x854EA2EEL,0x659B8041L,0x854EA2EEL,0xD6A5165AL,0x854EA2EEL,0x659B8041L},{0x7967E873L,0xD6A5165AL,0x5867A26EL,0xD6A5165AL,0x7967E873L,0xD6A5165AL,0x5867A26EL,0xD6A5165AL,0x7967E873L,0xD6A5165AL},{0x854EA2EEL,0xD6A5165AL,0x854EA2EEL,0x659B8041L,0x854EA2EEL,0xD6A5165AL,0x854EA2EEL,0x659B8041L,0x854EA2EEL,0xD6A5165AL},{0x7967E873L,0x659B8041L,0x5867A26EL,0x659B8041L,0x7967E873L,0x659B8041L,0x5867A26EL,0x659B8041L,0x7967E873L,0x659B8041L},{0x854EA2EEL,0x659B8041L,0x854EA2EEL,0xD6A5165AL,0x854EA2EEL,0x659B8041L,0x854EA2EEL,0xD6A5165AL,0x854EA2EEL,0x659B8041L},{0x7967E873L,0xD6A5165AL,0x5867A26EL,0xD6A5165AL,0x7967E873L,0xD6A5165AL,0x5867A26EL,0xD6A5165AL,0x7967E873L,0xD6A5165AL}};
                int32_t l_245 = 0x9B66F151L;
                int8_t ****l_254[4][3] = {{&l_176,(void*)0,(void*)0},{&l_176,(void*)0,&l_176},{&l_176,&l_176,(void*)0},{&l_176,&l_176,&l_176}};
                int i, j;
                /*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
/*bef_stmt:169491*/
(*l_67) = ((safe_rshift_func_uint16_t_u_u((g_185[3][0][0] = (safe_mod_func_uint16_t_u_u(0xC4D8L, (((*l_142) = ((*l_160) |= (Tag266(/*int32_t:172660:172682:169491:e*/l_166) , ((safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((0xA28B5F6DL >= Tag267(/*int32_t:0:0:169491:e*/g_119[8])), (Tag268(/*int8_t:182137:182137:169491:e*/p_51) , Tag269(/*int64_t:0:0:169491:e*/g_84)))) && (safe_unary_minus_func_uint64_t_u((((((Tag270(/*int32_t:182137:182137:169491:e*/*l_60)) || (safe_add_func_int16_t_s_s((((*l_176) = l_174) == ((safe_add_func_uint64_t_u_u(((*l_179)--), (safe_add_func_int16_t_s_s((Tag271(/*int64_t:0:0:169491:e*/g_158) , Tag272(/*int8_t:182137:182137:169491:e*/p_51)), Tag273(/*int32_t:172159:172660:169491:e*/l_184))))) , &p_50)), Tag274(/*uint32_t:0:0:169491:e*/g_9)))) , &g_112[3]) == &g_112[0]) >= 0xB982E971L)))), 5)) , Tag275(/*int64_t:0:0:169491:e*/g_84))))) & Tag276(/*int32_t:172660:172682:169491:e*/l_166))))), 7)) & 0xF5EDDB6F6008F057LL);
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
/*aft_stmt:169491*/
                /*bef_stmt:171543*/
/*bef_stmt:171543*/
/*bef_stmt:171543*/
/*bef_stmt:171543*/
/*bef_stmt:171543*/
/*bef_stmt:171543*/
/*bef_stmt:171543*/
if ((((*l_174) = l_186) != (g_204 = ((safe_sub_func_int32_t_s_s(0x1295E224L, ((((safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_202 = ((l_197 != &g_99) , (Tag277(/*const uint32_t:172682:182137:171543:e*/l_154) ^ ((Tag278(/*int64_t:0:0:171543:e*/g_84) < ((*l_179) = (Tag279(/*int8_t:172159:172660:171543:e*/l_198) != (safe_div_func_int32_t_s_s((g_109 ^= ((l_201 = (l_179 == l_179)) | 0UL)), Tag280(/*int16_t:172682:182137:171543:e*/l_141)))))) & Tag281(/*int8_t:182137:182137:171543:e*/p_51))))) , 65535UL), Tag282(/*int8_t:182137:182137:171543:e*/p_51))), 3)), 0xC0C8L)) | 65534UL), Tag283(/*int16_t:0:0:171543:e*/g_112[4]))) , l_203) != &g_112[6]) , 5UL))) , &g_13))))
                { /* block id: 84 */
                    uint32_t l_211 = 18446744073709551606UL;
                    /*bef_stmt:170419*/
/*bef_stmt:170419*/
/*bef_stmt:170419*/
/*bef_stmt:170419*/
/*bef_stmt:170419*/
(*l_69) = ((safe_sub_func_uint8_t_u_u(0xD6L, ((l_202 = ((***l_176) ^= ((void*)0 != &g_14))) <= Tag284(/*int32_t:172682:182137:170419:e*/l_201)))) >= ((*l_61) = (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((((Tag285(/*const int32_t:182137:182137:170419:e*/*p_49)) != Tag286(/*uint32_t:170423:172159:170419:e*/l_211)) && (Tag287(/*int32_t:172660:172682:170419:e*/l_166) , ((*g_98) == (*g_98)))) > 0x2FC8L), (-1L))), Tag288(/*int32_t:0:0:170419:e*/g_119[2])))));
/*aft_stmt:170419*/
/*aft_stmt:170419*/
/*aft_stmt:170419*/
/*aft_stmt:170419*/
/*aft_stmt:170419*/
                }
                else
                { /* block id: 89 */
                    uint16_t *l_238 = &g_239;
                    int32_t l_240 = 0x70F242EEL;
                    uint32_t *l_243 = &g_244;
                    /*bef_stmt:170514*/
if (Tag289(/*int8_t:182137:182137:170514:e*/p_51))
                        goto lbl_212;
/*aft_stmt:170514*/
                    for (g_13 = 23; (g_13 == (-3)); g_13 = safe_sub_func_uint8_t_u_u(g_13, 9))
                    { /* block id: 93 */
                        /*bef_stmt:170634*/
(*l_69) |= (Tag290(/*const int32_t:182137:182137:170634:e*/*p_49));
/*aft_stmt:170634*/
                    }
                    /*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
/*bef_stmt:171529*/
l_245 ^= (((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((*l_243) = (((l_242[6][7] = (safe_add_func_int16_t_s_s((((0L >= ((++g_221) <= (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(Tag291(/*int32_t:172660:172682:171529:e*/l_166), 5)), ((*l_238) = ((safe_mul_func_int16_t_s_s(((*l_203) = ((((*l_179) = (Tag292(/*int8_t:182137:182137:171529:e*/p_51) == Tag293(/*int8_t:0:0:171529:e*/g_13))) , Tag294(/*int32_t:172682:182137:171529:e*/l_155)) > 7UL)), ((((*l_69) = (safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((((Tag295(/*int8_t:0:0:171529:e*/g_13) && ((void*)0 == g_236)) > Tag296(/*int8_t:182137:182137:171529:e*/p_51)) == 0x1DL) , (Tag297(/*int8_t:182137:182137:171529:e*/*p_52))), Tag298(/*int32_t:172660:172682:171529:e*/l_166))), (Tag299(/*int8_t:0:0:171529:e*/*g_204)))) ^ 2UL), (Tag300(/*int32_t:182137:182137:171529:e*/*l_67))))) != (Tag301(/*const int32_t:182137:182137:171529:e*/*p_49))) , 0UL))) & Tag302(/*int32_t:172682:182137:171529:e*/l_201))))))) , Tag303(/*const uint32_t:172682:182137:171529:e*/l_154)) >= Tag304(/*int32_t:171535:172159:171529:e*/l_240)), Tag305(/*int32_t:182137:182137:171529:e*/l_241[1])))) >= Tag306(/*int8_t:0:0:171529:e*/g_13)) < Tag307(/*int8_t:182137:182137:171529:e*/p_51))) , Tag308(/*uint8_t:0:0:171529:e*/g_113)), 9)), (Tag309(/*int32_t:182137:182137:171529:e*/*l_62)))) , l_157[1][0]) != (void*)0);
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
/*aft_stmt:171529*/
                }
/*aft_stmt:171543*/
/*aft_stmt:171543*/
/*aft_stmt:171543*/
/*aft_stmt:171543*/
/*aft_stmt:171543*/
/*aft_stmt:171543*/
/*aft_stmt:171543*/
                /*bef_stmt:172114*/
if ((Tag310(/*const int32_t:182137:182137:172114:e*/*p_49)))
                { /* block id: 105 */
                    int32_t l_246 = 0L;
                    int32_t l_247 = (-1L);
                    (*l_63) = 0xFD56AB96L;
                    g_248++;
                    for (l_247 = 0; (l_247 < 24); ++l_247)
                    { /* block id: 110 */
                        l_254[2][1] = g_253;
                        /*bef_stmt:171764*/
return Tag311(/*int32_t:0:0:171764:e*/g_119[2]);
/*aft_stmt:171764*/
                    }
                }
                else
                { /* block id: 114 */
                    int32_t l_257 = 0x93109E43L;
                    for (g_113 = 10; (g_113 != 48); g_113++)
                    { /* block id: 117 */
                        /*bef_stmt:171920*/
(*l_69) = ((*l_62) = (l_257 &= (Tag312(/*const int32_t:182137:182137:171920:e*/*p_49))));
/*aft_stmt:171920*/
                        /*bef_stmt:171934*/
return Tag313(/*int8_t:182137:182137:171934:e*/p_51);
/*aft_stmt:171934*/
                    }
                    for (g_9 = 0; (g_9 < 44); g_9 = safe_add_func_uint8_t_u_u(g_9, 1))
                    { /* block id: 125 */
                        uint32_t l_263 = 8UL;
                        --l_263;
                        (*g_98) = (*g_98);
                    }
                }
/*aft_stmt:172114*/
                /*bef_stmt:172155*/
(*l_62) = Tag314(/*uint32_t:172660:172682:172155:e*/l_266[3]);
/*aft_stmt:172155*/
            }
            else
            { /* block id: 131 */
                uint32_t l_267[3][8] = {{0UL,8UL,0UL,9UL,0UL,9UL,0UL,8UL},{0UL,9UL,0UL,8UL,0UL,9UL,0UL,9UL},{0UL,8UL,0x134EBF0AL,8UL,0UL,0x93B319A5L,0UL,8UL}};
                int16_t ***l_272 = &g_270;
                int i, j;
                --l_267[0][2];
                (*l_272) = g_270;
            }
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
/*aft_stmt:172654*/
        }
    }
/*aft_stmt:172693*/
    /*bef_stmt:182119*/
if ((Tag315(/*int32_t:182137:182137:182119:e*/*l_66)))
    { /* block id: 137 */
        (*g_98) = (*g_98);
    }
    else
    { /* block id: 139 */
        int32_t l_277[7] = {0x9F0A606BL,1L,0x9F0A606BL,0x9F0A606BL,1L,0x9F0A606BL,5L};
        int32_t l_290 = 0x75687A54L;
        uint64_t l_300 = 0x5BEFCB44326F7BA1LL;
        int32_t l_310 = 0xC3C27BE7L;
        int32_t l_311[10][3] = {{4L,4L,0x3EB71C04L},{0x951A803AL,0x951A803AL,7L},{4L,4L,0x3EB71C04L},{0x951A803AL,0x951A803AL,7L},{4L,4L,0x3EB71C04L},{0x951A803AL,0x951A803AL,7L},{4L,4L,0x3EB71C04L},{0x951A803AL,0x951A803AL,7L},{4L,4L,0x3EB71C04L},{0x951A803AL,0x951A803AL,7L}};
        int16_t * const l_314 = (void*)0;
        uint16_t l_392 = 0x4060L;
        int32_t ****l_434 = &l_432;
        int64_t *l_459 = &g_158;
        int64_t ** const l_458 = &l_459;
        int i, j;
        for (g_161 = 2; (g_161 <= 7); g_161 += 1)
        { /* block id: 142 */
            int64_t l_291 = (-9L);
            uint32_t l_292[2];
            int32_t l_299 = 1L;
            uint32_t *l_313 = &l_292[0];
            int64_t *l_315 = &g_84;
            int8_t ***l_324 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_292[i] = 0xF9705F32L;
            for (g_113 = 0; (g_113 <= 7); g_113 += 1)
            { /* block id: 145 */
                int i;
                for (g_239 = 0; (g_239 <= 1); g_239 += 1)
                { /* block id: 148 */
                    int16_t *l_279 = &g_112[3];
                    int32_t l_293 = 0L;
                    int32_t l_294 = 0x357ABCD3L;
                    int i, j, k;
                    if (l_65[(g_239 + 1)])
                        break;
                    if (g_185[g_239][(g_113 + 1)][g_239])
                        break;
                    /*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
/*bef_stmt:175133*/
l_294 &= (((*p_50) = ((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(Tag316(/*int8_t:182137:182137:175133:e*/p_51), Tag317(/*int32_t:182103:182137:175133:e*/l_277[4]))) , (l_278 != ((*g_270) = l_279))), (((safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(Tag318(/*int8_t:182137:182137:175133:e*/p_51), ((g_185[(g_239 + 1)][(g_113 + 1)][g_239] = ((Tag319(/*int8_t:182137:182137:175133:e*/*p_52)) <= Tag320(/*int32_t:182103:182137:175133:e*/l_277[1]))) < (((l_65[(g_239 + 6)] |= ((safe_sub_func_int8_t_s_s((l_290 ^= ((((safe_sub_func_int8_t_s_s(((void*)0 == l_279), Tag321(/*int8_t:182137:182137:175133:e*/p_51))) , 0x2DB857E7L) >= 0xC6111A7FL) || Tag322(/*int32_t:0:0:175133:e*/g_106))), Tag323(/*int64_t:180351:182103:175133:e*/l_291))) <= Tag324(/*uint32_t:180351:182103:175133:e*/l_292[0]))) , (-4L)) >= (-1L))))), 0xB7011B64L)) > Tag325(/*int32_t:175261:176120:175133:e*/l_293)), Tag326(/*int8_t:182137:182137:175133:e*/p_51))) <= (Tag327(/*const int32_t:182137:182137:175133:e*/*p_49))) == Tag328(/*int32_t:0:0:175133:e*/g_106)))) != Tag329(/*int8_t:182137:182137:175133:e*/p_51))) >= Tag330(/*int32_t:175261:176120:175133:e*/l_293));
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
/*aft_stmt:175133*/
                    for (g_221 = 0; (g_221 <= 0); g_221 += 1)
                    { /* block id: 159 */
                        /*bef_stmt:175211*/
if ((Tag331(/*const int32_t:182137:182137:175211:e*/*p_49)))
                            break;
/*aft_stmt:175211*/
                        /*bef_stmt:175223*/
if (Tag332(/*int64_t:180351:182103:175223:e*/l_291))
                            continue;
/*aft_stmt:175223*/
                        /*bef_stmt:175245*/
if ((Tag333(/*int32_t:182137:182137:175245:e*/*l_69)))
                            continue;
/*aft_stmt:175245*/
                    }
                }
                (*g_98) = &l_65[g_113];
                (*l_67) &= (l_65[g_161] = (safe_unary_minus_func_int8_t_s(((*p_52) |= (-2L)))));
                for (g_71 = 0; (g_71 <= 0); g_71 += 1)
                { /* block id: 171 */
                    int32_t *l_298[5];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_298[i] = &g_106;
                    for (g_109 = 0; (g_109 <= 0); g_109 += 1)
                    { /* block id: 174 */
                        int64_t *l_297[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_297[i] = &g_84;
                        (*l_66) &= (!((l_297[0] = &g_158) == (void*)0));
                        (*g_98) = (l_70[(g_71 + 2)][g_109][g_71] = &l_290);
                        (*g_98) = func_53(l_298[4]);
                    }
                    --l_300;
                }
            }
            /*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
/*bef_stmt:180323*/
if (((*l_63) = (l_65[g_161] >= ((safe_rshift_func_uint8_t_u_u(((-2L) < ((((*l_315) &= (((((((safe_lshift_func_uint8_t_u_u((Tag334(/*int32_t:182137:182137:180323:e*/*l_66)), Tag335(/*uint32_t:0:0:180323:e*/g_14))) >= (safe_unary_minus_func_int8_t_s(Tag336(/*int32_t:182103:182137:180323:e*/l_290)))) ^ (Tag337(/*int16_t:0:0:180323:e*/*g_271))) >= (((safe_add_func_uint32_t_u_u(((l_311[0][1] = (l_310 = (Tag338(/*const int32_t:182137:182137:180323:e*/*p_49)))) | Tag339(/*uint64_t:182103:182137:180323:e*/l_300)), ((*l_313) = Tag340(/*uint16_t:0:0:180323:e*/g_312)))) >= 0xFF907EE7L) , (-2L))) , l_314) != (*g_270)) | (Tag341(/*int16_t:0:0:180323:e*/**g_270)))) > Tag342(/*int8_t:182137:182137:180323:e*/p_51)) , 0xCAL)), Tag343(/*int8_t:182137:182137:180323:e*/p_51))) ^ (Tag344(/*int32_t:182137:182137:180323:e*/*l_68))))))
            { /* block id: 189 */
                uint16_t *l_335 = &g_239;
                uint64_t *l_336 = (void*)0;
                uint64_t *l_337 = &g_71;
                int32_t l_338 = 0x3A820D98L;
                int32_t l_339 = 0xC4E37243L;
                /*bef_stmt:177448*/
/*bef_stmt:177448*/
/*bef_stmt:177448*/
/*bef_stmt:177448*/
/*bef_stmt:177448*/
/*bef_stmt:177448*/
/*bef_stmt:177448*/
/*bef_stmt:177448*/
/*bef_stmt:177448*/
/*bef_stmt:177448*/
g_106 = (safe_rshift_func_int8_t_s_s((l_339 ^= ((safe_mul_func_int8_t_s_s((-8L), (safe_div_func_uint32_t_u_u(((l_322 != l_324) ^ (Tag345(/*int8_t:182137:182137:177448:e*/p_51) , ((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((l_311[0][1] ^= (safe_rshift_func_int16_t_s_u((Tag346(/*int32_t:182103:182137:177448:e*/l_290) , (Tag347(/*int64_t:0:0:177448:e*/g_158) && (safe_mul_func_uint16_t_u_u(((Tag348(/*int32_t:182103:182137:177448:e*/l_310) & (l_338 |= ((safe_div_func_uint32_t_u_u((((*l_337) = (0x9C21L <= ((*l_335) = (Tag349(/*int16_t:0:0:177448:e*/g_112[0]) , 0x50B0L)))) > Tag350(/*int8_t:182137:182137:177448:e*/p_51)), 0x88CFFDCCL)) < 0x2BA2C1D8L))) == 0x47FCL), (Tag351(/*int16_t:0:0:177448:e*/*g_271)))))), Tag352(/*int8_t:182137:182137:177448:e*/p_51)))), 0x8E01L)) ^ 0x8628671EL) <= Tag353(/*int32_t:182103:182137:177448:e*/l_310)), Tag354(/*int8_t:182137:182137:177448:e*/p_51))) <= 0x83A6L))), 2L)))) , (-1L))), 0));
/*aft_stmt:177448*/
/*aft_stmt:177448*/
/*aft_stmt:177448*/
/*aft_stmt:177448*/
/*aft_stmt:177448*/
/*aft_stmt:177448*/
/*aft_stmt:177448*/
/*aft_stmt:177448*/
/*aft_stmt:177448*/
/*aft_stmt:177448*/
                /*bef_stmt:177515*/
l_65[g_161] &= ((~(Tag355(/*int16_t:0:0:177515:e*/**g_270))) , 0xC9523C57L);
/*aft_stmt:177515*/
                for (l_300 = 1; (l_300 <= 6); l_300 += 1)
                { /* block id: 199 */
                    int i;
                    (*l_66) ^= g_112[l_300];
                }
            }
            else
            { /* block id: 202 */
                int64_t l_352 = 0x46904C328541EEDBLL;
                uint8_t l_359[9] = {0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L};
                int32_t ***l_380 = (void*)0;
                int32_t l_393 = 0x68E58C9DL;
                int32_t l_395 = 9L;
                int32_t l_397 = 1L;
                int32_t l_398 = 0xACF2BDF7L;
                int64_t **l_405 = &l_315;
                int i;
                for (l_300 = 0; (l_300 > 1); l_300 = safe_add_func_int16_t_s_s(l_300, 3))
                { /* block id: 205 */
                    uint16_t l_343 = 0xE678L;
                    int32_t **l_383 = &l_60;
                    int32_t ***l_382 = &l_383;
                    int16_t l_394 = 1L;
                    int32_t l_396 = 0x510F0830L;
                    int32_t l_399 = 0x1F09E4ECL;
                    int64_t * const *l_404 = &l_315;
                    int64_t * const **l_403[3];
                    int32_t l_406 = (-3L);
                    int32_t l_407 = (-8L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_403[i] = &l_404;
                    if ((&p_52 == (void*)0))
                    { /* block id: 206 */
                        /*bef_stmt:178589*/
l_311[0][1] = (Tag356(/*int32_t:182137:182137:178589:e*/*l_69));
/*aft_stmt:178589*/
                    }
                    else
                    { /* block id: 208 */
                        uint32_t l_353 = 2UL;
                        uint64_t *l_358 = (void*)0;
                        int32_t ****l_381[5];
                        uint64_t *l_390 = (void*)0;
                        uint64_t *l_391 = &g_221;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_381[i] = &l_380;
                        ++l_343;
                        /*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
/*bef_stmt:179331*/
(*l_69) = ((((safe_mul_func_uint16_t_u_u(Tag357(/*int8_t:182137:182137:179331:e*/p_51), Tag358(/*int64_t:0:0:179331:e*/g_158))) > ((((*l_63) &= (Tag359(/*uint64_t:0:0:179331:e*/g_221) , Tag360(/*int8_t:182137:182137:179331:e*/p_51))) < (((safe_div_func_int32_t_s_s(Tag361(/*int64_t:180310:180351:179331:e*/l_352), Tag362(/*uint32_t:180120:180231:179331:e*/l_353))) & (((safe_mod_func_uint64_t_u_u((l_299 = (safe_add_func_int64_t_s_s(((*l_315) ^= Tag363(/*uint32_t:180120:180231:179331:e*/l_353)), (((&l_324 == (Tag364(/*int64_t:180351:182103:179331:e*/l_291) , g_253)) < (Tag365(/*int16_t:0:0:179331:e*/**g_270))) ^ 0x961F1A681670B57ELL)))), Tag366(/*uint8_t:180310:180351:179331:e*/l_359[5]))) , Tag367(/*uint64_t:0:0:179331:e*/g_221)) , 0xE3246DB285BB2746LL)) <= l_300)) , 1UL)) , (Tag368(/*int32_t:182137:182137:179331:e*/*l_64))) && Tag369(/*int32_t:182103:182137:179331:e*/l_277[5]));
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
/*aft_stmt:179331*/
                        /*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
/*bef_stmt:180116*/
g_109 = ((safe_lshift_func_int16_t_s_s(((l_299 &= (safe_lshift_func_uint16_t_u_u((g_312 = Tag370(/*int32_t:0:0:180116:e*/g_119[0])), 9))) & (safe_sub_func_int8_t_s_s(((*g_204) ^= (safe_mul_func_uint8_t_u_u(Tag371(/*uint32_t:180351:182103:180116:e*/l_292[0]), ((l_392 = ((*l_64) = (safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((((*l_391) ^= ((l_382 = l_380) == ((0x7A76L != (safe_mod_func_uint64_t_u_u((Tag372(/*int8_t:182137:182137:180116:e*/p_51) >= ((3UL < Tag373(/*uint32_t:180351:182103:180116:e*/l_292[0])) , (safe_sub_func_int32_t_s_s((Tag374(/*const int32_t:182137:182137:180116:e*/*p_49)), (safe_sub_func_int8_t_s_s(Tag375(/*int32_t:182103:182137:180116:e*/l_311[0][1]), 0xE9L)))))), Tag376(/*int8_t:182137:182137:180116:e*/p_51)))) , (void*)0))) > (Tag377(/*const uint64_t:0:0:180116:e*/*g_236))), Tag378(/*int32_t:182103:182137:180116:e*/l_311[0][1]))), 5)), Tag379(/*int32_t:182103:182137:180116:e*/l_311[1][0]))), Tag380(/*int8_t:182137:182137:180116:e*/p_51))) || 0x627800E5EF0ED297LL), Tag381(/*int8_t:182137:182137:180116:e*/p_51))))) && 0L)))), Tag382(/*int8_t:182137:182137:180116:e*/p_51)))), 4)) == (-1L));
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
/*aft_stmt:180116*/
                    }
                    g_400[0][2][7]--;
                    l_405 = (void*)0;
                    ++g_408[1][2];
                }
                (*g_98) = func_53(&l_65[g_161]);
            }
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
/*aft_stmt:180323*/
            /*bef_stmt:180349*/
return (Tag383(/*int32_t:182137:182137:180349:e*/*l_68));
/*aft_stmt:180349*/
        }
        /*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
/*bef_stmt:182090*/
if (((safe_div_func_int16_t_s_s(0xB219L, ((safe_lshift_func_uint8_t_u_u((Tag384(/*int8_t:182137:182137:182090:e*/p_51) ^ ((!((((((safe_unary_minus_func_int16_t_s((safe_div_func_int32_t_s_s(((*l_63) = Tag385(/*int32_t:182103:182137:182090:e*/l_277[4])), (((Tag386(/*int8_t:182137:182137:182090:e*/*p_50)) <= (-10L)) || (&l_278 != (void*)0)))))) & (safe_add_func_int32_t_s_s((+(safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((Tag387(/*int32_t:182137:182137:182090:e*/*l_69)) && ((((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*l_434) = l_432) != &g_98), 247UL)), Tag388(/*uint64_t:0:0:182090:e*/g_221))) , (Tag389(/*const uint64_t:0:0:182090:e*/*g_236))) & 0UL) , Tag390(/*uint8_t:0:0:182090:e*/g_435[0]))), Tag391(/*uint32_t:0:0:182090:e*/g_248))), Tag392(/*uint16_t:0:0:182090:e*/g_400[0][2][7]))) , 0xC5D52642L), Tag393(/*const uint16_t:0:0:182090:e*/g_436)))), Tag394(/*int8_t:182137:182137:182090:e*/p_51)))) < Tag395(/*uint32_t:0:0:182090:e*/g_161)) ^ Tag396(/*uint32_t:0:0:182090:e*/g_248)) , 0x01L) == (Tag397(/*int8_t:0:0:182090:e*/*g_204)))) == 0x7216L)), Tag398(/*int8_t:182137:182137:182090:e*/p_51))) ^ Tag399(/*int32_t:0:0:182090:e*/g_119[7])))) <= Tag400(/*uint8_t:0:0:182090:e*/g_185[3][0][0])))
        { /* block id: 233 */
            uint8_t l_451 = 0xDAL;
            /*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
/*bef_stmt:181789*/
l_311[2][2] ^= (safe_lshift_func_int16_t_s_s(((**g_270) = (-1L)), (((Tag401(/*uint16_t:0:0:181789:e*/g_400[0][1][3]) & (Tag402(/*uint32_t:0:0:181789:e*/g_9) & ((safe_mod_func_int32_t_s_s(((*l_69) &= (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s((Tag403(/*int8_t:182137:182137:181789:e*/*p_50)), 5)) , (safe_div_func_int64_t_s_s(Tag404(/*uint64_t:0:0:181789:e*/g_221), (Tag405(/*uint32_t:0:0:181789:e*/g_248) , (safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((((1L && 0L) >= ((((((Tag406(/*uint64_t:0:0:181789:e*/g_221) & Tag407(/*uint8_t:181795:182103:181789:e*/l_451)) , Tag408(/*uint8_t:181795:182103:181789:e*/l_451)) , Tag409(/*int8_t:182137:182137:181789:e*/p_51)) , (Tag410(/*const int32_t:182137:182137:181789:e*/*p_49))) == 0x944D6FE7L) && (-2L))) , 65526UL), Tag411(/*int8_t:182137:182137:181789:e*/p_51))), Tag412(/*int8_t:182137:182137:181789:e*/p_51))))))), Tag413(/*int8_t:182137:182137:181789:e*/p_51)))), (Tag414(/*const int32_t:182137:182137:181789:e*/*p_49)))) == (-6L)))) < 0xE4BE6754138627E3LL) || 0xFCL)));
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
/*aft_stmt:181789*/
        }
        else
        { /* block id: 237 */
            uint64_t l_452 = 0x07C1AA73F9B96A1ALL;
            int64_t **l_455 = (void*)0;
            int64_t ***l_456 = &l_455;
            l_452 = 8L;
            /*bef_stmt:182068*/
/*bef_stmt:182068*/
(*l_69) = ((safe_mul_func_uint8_t_u_u(Tag415(/*int8_t:182137:182137:182068:e*/p_51), (Tag416(/*int8_t:0:0:182068:e*/*g_204)))) <= ((*l_61) = (((*l_456) = l_455) == ((l_457 == g_253) , l_458))));
/*aft_stmt:182068*/
/*aft_stmt:182068*/
        }
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
/*aft_stmt:182090*/
        --l_460;
    }
/*aft_stmt:182119*/
    /*bef_stmt:182135*/
return Tag417(/*int8_t:182137:182137:182135:e*/p_51);
/*aft_stmt:182135*/
}


/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes: g_6
 */
static int32_t * func_53(int32_t * p_54)
{ /* block id: 6 */
    for (g_6 = 0; (g_6 >= (-30)); g_6 = safe_sub_func_int16_t_s_s(g_6, 5))
    { /* block id: 9 */
        return p_54;
    }
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : g_9 g_98 g_59 g_99 g_14 g_109 g_106 g_113
 * writes: g_9 g_6 g_112 g_109 g_106 g_113
 */
static int64_t  func_85(int32_t * p_86)
{ /* block id: 25 */
    int32_t l_87 = 5L;
    int64_t l_91[8] = {(-9L),1L,(-9L),1L,(-9L),1L,(-9L),1L};
    int32_t * const l_108 = &g_109;
    int32_t * const *l_107 = &l_108;
    int i;
    /*bef_stmt:184171*/
if (Tag418(/*int32_t:184199:184199:184171:e*/l_87))
    { /* block id: 26 */
        const int32_t **l_93 = (void*)0;
        const int32_t *l_95 = &l_87;
        const int32_t **l_94 = &l_95;
        for (g_9 = 10; (g_9 >= 32); ++g_9)
        { /* block id: 29 */
            int64_t l_90 = 0x464EB7F042724202LL;
            /*bef_stmt:182891*/
(*p_86) = (Tag419(/*int32_t:184199:184199:182891:e*/*p_86));
/*aft_stmt:182891*/
            if (g_9)
                goto lbl_92;
            /*bef_stmt:182927*/
if (Tag420(/*int64_t:182931:183053:182927:e*/l_90))
                continue;
/*aft_stmt:182927*/
        }
lbl_92:
        for (g_6 = 0; g_6 < 8; g_6 += 1)
        {
            l_91[g_6] = 0xBEC1606680214363LL;
        }
        (*l_94) = &g_59;
    }
    else
    { /* block id: 36 */
        uint32_t l_100 = 0UL;
        int32_t * const **l_102 = (void*)0;
        int32_t * const l_105 = &g_106;
        int32_t * const *l_104 = &l_105;
        int32_t * const **l_103[2][2][4] = {{{&l_104,&l_104,&l_104,&l_104},{&l_104,&l_104,&l_104,&l_104}},{{&l_104,&l_104,&l_104,&l_104},{&l_104,&l_104,&l_104,&l_104}}};
        int16_t *l_111 = &g_112[3];
        int i, j, k;
        /*bef_stmt:184096*/
/*bef_stmt:184096*/
/*bef_stmt:184096*/
/*bef_stmt:184096*/
/*bef_stmt:184096*/
(*l_105) &= ((*l_108) = (((safe_sub_func_int16_t_s_s((((*l_111) = ((((((void*)0 != g_98) < (((l_87 = Tag421(/*uint32_t:184159:184199:184096:e*/l_100)) & (+Tag422(/*const int32_t:0:0:184096:e*/g_59))) & ((l_107 = &p_86) == &g_99))) , (Tag423(/*int32_t:184199:184199:184096:e*/**l_107))) ^ 1L) , ((safe_unary_minus_func_uint8_t_u((((*l_107) == (*g_98)) ^ 7L))) && Tag424(/*uint32_t:0:0:184096:e*/g_14)))) ^ 0x2EDFL), Tag425(/*int32_t:0:0:184096:e*/g_109))) != 9UL) && 4L));
/*aft_stmt:184096*/
/*aft_stmt:184096*/
/*aft_stmt:184096*/
/*aft_stmt:184096*/
/*aft_stmt:184096*/
        g_113++;
        /*bef_stmt:184157*/
return (Tag426(/*int32_t:184199:184199:184157:e*/**l_107));
/*aft_stmt:184157*/
    }
/*aft_stmt:184171*/
    /*bef_stmt:184197*/
return (Tag427(/*int32_t:184199:184199:184197:e*/*l_108));
/*aft_stmt:184197*/
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
    printf("g_6: %d\n", g_6);
    printf("g_106: %d\n", g_106);
    printf("g_109: %d\n", g_109);
    printf("g_9: %lu\n", (unsigned long)g_9);
    printf("g_13: %d\n", (int)g_13);
    printf("g_71: %lu\n", (unsigned long)g_71);
    printf("g_14: %lu\n", (unsigned long)g_14);
    printf("g_158: %ld\n", (long)g_158);
    printf("g_161: %lu\n", (unsigned long)g_161);
    printf("g_221: %lu\n", (unsigned long)g_221);

    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_185[i][j][k], "g_185[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_400[i][j][k], "g_400[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_408[i][j], "g_408[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_435[i], "g_435[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_524[i][j], "g_524[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_573[i][j], "g_573[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_935, "g_935", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1180[i], "g_1180[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1251, "g_1251", print_hash_value);
    transparent_crc(g_1385, "g_1385", print_hash_value);
    transparent_crc(g_1476, "g_1476", print_hash_value);
    transparent_crc(g_1513, "g_1513", print_hash_value);
    transparent_crc(g_1664, "g_1664", print_hash_value);
    transparent_crc(g_1744, "g_1744", print_hash_value);
    transparent_crc(g_1794, "g_1794", print_hash_value);
    transparent_crc(g_1896, "g_1896", print_hash_value);
    transparent_crc(g_1988, "g_1988", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2049[i][j], "g_2049[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2118[i][j], "g_2118[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2261, "g_2261", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2346[i][j][k], "g_2346[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 608
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
   depth: 1, occurrence: 192
   depth: 2, occurrence: 44
   depth: 3, occurrence: 4
   depth: 6, occurrence: 2
   depth: 7, occurrence: 1
   depth: 8, occurrence: 1
   depth: 10, occurrence: 1
   depth: 15, occurrence: 3
   depth: 16, occurrence: 1
   depth: 17, occurrence: 1
   depth: 18, occurrence: 1
   depth: 20, occurrence: 1
   depth: 21, occurrence: 1
   depth: 22, occurrence: 1
   depth: 23, occurrence: 2
   depth: 24, occurrence: 2
   depth: 26, occurrence: 2
   depth: 27, occurrence: 2
   depth: 28, occurrence: 1
   depth: 29, occurrence: 4
   depth: 30, occurrence: 1
   depth: 31, occurrence: 1
   depth: 32, occurrence: 1
   depth: 33, occurrence: 2
   depth: 35, occurrence: 1
   depth: 38, occurrence: 1
   depth: 39, occurrence: 1
   depth: 43, occurrence: 1

XXX total number of pointers: 494

XXX times a variable address is taken: 1227
XXX times a pointer is dereferenced on RHS: 429
breakdown:
   depth: 1, occurrence: 304
   depth: 2, occurrence: 79
   depth: 3, occurrence: 29
   depth: 4, occurrence: 11
   depth: 5, occurrence: 6
XXX times a pointer is dereferenced on LHS: 391
breakdown:
   depth: 1, occurrence: 325
   depth: 2, occurrence: 31
   depth: 3, occurrence: 26
   depth: 4, occurrence: 8
   depth: 5, occurrence: 1
XXX times a pointer is compared with null: 66
XXX times a pointer is compared with address of another variable: 5
XXX times a pointer is compared with another pointer: 20
XXX times a pointer is qualified to be dereferenced: 7495

XXX max dereference level: 5
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1484
   level: 2, occurrence: 362
   level: 3, occurrence: 233
   level: 4, occurrence: 182
   level: 5, occurrence: 93
XXX number of pointers point to pointers: 274
XXX number of pointers point to scalars: 220
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 27.7
XXX average alias set size: 1.48

XXX times a non-volatile is read: 2511
XXX times a non-volatile is write: 1240
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 1
XXX backward jumps: 7

XXX stmts: 182
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 32
   depth: 1, occurrence: 22
   depth: 2, occurrence: 24
   depth: 3, occurrence: 25
   depth: 4, occurrence: 41
   depth: 5, occurrence: 38

XXX percentage a fresh-made variable is used: 15.6
XXX percentage an existing variable is used: 84.4
********************* end of statistics **********************/

/* EXITof gcc -O0: 0 */
/* CKSMof gcc -O0: 279C5A84 */
/* EXITof clang -O0: 0 */
/* CKSMof clang -O0: 279C5A84 */
