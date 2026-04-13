
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef u32 uintptr_t;

#define MEM8(addr) (*(volatile u8 *)(uintptr_t)(addr))
#define MEM16(addr) (*(volatile u16 *)(uintptr_t)(addr))
#define MEM32(addr) (*(volatile u32 *)(uintptr_t)(addr))
#define ROR32(v,n) (((u32)(v) >> (n)) | ((u32)(v) << (32 - (n))))
#define CARRY_FROM_LSL(v,n) ((u32)(((u32)(n) == 0) ? 0 : ((u32)(n) < 32 ? ((((u32)(v)) >> (32 - (u32)(n))) & 1) : ((u32)(n) == 32 ? ((u32)(v) & 1) : 0))))
#define CARRY_FROM_LSR(v,n) ((u32)(((u32)(n) == 0) ? 0 : ((u32)(n) < 32 ? ((((u32)(v)) >> ((u32)(n) - 1)) & 1) : ((u32)(n) == 32 ? ((((u32)(v)) >> 31) & 1) : 0))))
#define CARRY_FROM_ASR(v,n) ((u32)(((u32)(n) == 0) ? 0 : ((u32)(n) < 32 ? ((((u32)(v)) >> ((u32)(n) - 1)) & 1) : ((((u32)(v)) >> 31) & 1))))
#define SWITCH_DISPATCH_PC(off) do { (void)(off); /* PC-relative computed jump table dispatch */ } while (0)
#define COMPUTED_BRANCH(expr) do { (void)(expr); /* computed branch target */ } while (0)

typedef struct hid_feature_report_t {
  u8 report_id;
  u8 header;
  u8 cmd_id;
  u8 rw;
  u8 payload_len;
  u8 payload[59];
} hid_feature_report_t;

typedef struct motion_sample_t {
  u8 flags;
  u8 xy_payload[4];
  u8 aux0;
  u8 aux1;
} motion_sample_t;

typedef struct mouse_config_t {
  u8 profile_count;
  u8 tracking_mode_flag;
  u8 reserved_02;
  u8 debounce_internal_idx;
  u8 reserved_04[6];
  u8 report_rate_idx;
  u8 reserved_0B[7];
  u8 lod_idx;
  u8 reserved_13[2];
  u8 motion_sync_flag;
  u8 reserved_16[18];
  u32 cfg_apply_deadline_ticks;
  u8 reserved_2C[8];
  u32 tracking_change_ticks;
} mouse_config_t;

typedef struct sensor_shadow_t {
  u8 reserved_00[5];
  u8 lod_idx_shadow;
  u8 tracking_mode_shadow;
  u8 reserved_07;
  u16 applied_cpi;
} sensor_shadow_t;

typedef struct motion_runtime_ctx_t {
  u8 reserved_00[3];
  u8 buffered_state;
  u8 reserved_04[6];
  u8 sync_gate_latched;
  u8 aux_mode_byte;
  u16 cached_word_0C;
  u16 cached_word_0E;
  u32 control_flags;
  u32 tick_accum_14;
  u8 reserved_18[12];
  u32 tick_accum_24;
  u32 tick_accum_28;
  u32 tick_accum_2C;
  u32 tick_accum_30;
} motion_runtime_ctx_t;

#define g_motion_runtime_ctx (*(volatile motion_runtime_ctx_t *)0x20004A78u)

/* ===== Segments ===== */
/* ROM: 0x00000000 - 0x00014490 */
/* RAM: 0x20000000 - 0x200078B0 */

/* ===== Named Data Symbols ===== */
/* 0x00001FDC aSigrtmemOutOfH (ROM): <unknown> */
/* 0x00001FFC aHeapMemoryCorr (ROM): <unknown> */
/* 0x0000276C aSetDpiLevelDat (ROM): <unknown> */
/* 0x00002964 aSensorCordedRe (ROM): <unknown> */
/* 0x0000482E jpt_482C (ROM): <unknown> */
/* 0x000048BA def_482C (ROM): <unknown> */
/* 0x00006E04 aDevIdxD (ROM): <unknown> */
/* 0x00006EB8 aMouseRfProtolT (ROM): <unknown> */
/* 0x000073F8 aMouse24gPwmLed (ROM): <unknown> */
/* 0x000076BC aChargerLedOn (ROM): <unknown> */
/* 0x000076E0 aChargerLedOff (ROM): <unknown> */
/* 0x0000773C aChargerFullLed (ROM): <unknown> */
/* 0x00007754 aChargerFullLed_0 (ROM): <unknown> */
/* 0x00007A5C aMouse24gPwmLed_0 (ROM): <unknown> */
/* 0x00007B1C aMouse5vGlitchE (ROM): <unknown> */
/* 0x00007E30 aMouse24gCpiArr (ROM): <unknown> */
/* 0x00007E68 aMouseButtonInd (ROM): <unknown> */
/* 0x00007E90 aMouseButtonInd_0 (ROM): <unknown> */
/* 0x000085F4 aReadAmbCmd (ROM): <unknown> */
/* 0x00008604 aCmdReadAmbPara (ROM): <unknown> */
/* 0x0000866C aReadRegCmd (ROM): <unknown> */
/* 0x0000867C aCmdReadRegPara (ROM): <unknown> */
/* 0x00008AE8 aMouseNacProtoc (ROM): <unknown> */
/* 0x00008BCC aUsb5vPlugUp (ROM): <unknown> */
/* 0x00008DFC aMouseProtocolS (ROM): <unknown> */
/* 0x0000909C aMouseButtonInd_1 (ROM): <unknown> */
/* 0x00009FC4 aPmouse (ROM): <unknown> */
/* 0x0000B028 aRomBooting222 (ROM): <unknown> */
/* 0x0000B03C aRomBooting3334 (ROM): <unknown> */
/* 0x0000B096 jpt_B094 (ROM): <unknown> */
/* 0x0000B166 def_B094 (ROM): <unknown> */
/* 0x0000C58B jpt_C586 (ROM): <unknown> */
/* 0x0000C778 def_C586 (ROM): <unknown> */
/* 0x0000EFF6 jpt_EFF4 (ROM): <unknown> */
/* 0x0000F062 jpt_F060 (ROM): <unknown> */
/* 0x0000F078 def_F060 (ROM): <unknown> */
/* 0x0000F0CE def_EFF4 (ROM): <unknown> */
/* 0x0000F1AA def_F1C2 (ROM): <unknown> */
/* 0x0000F1C4 jpt_F1C2 (ROM): <unknown> */
/* 0x0000F4FC aNull (ROM): <unknown> */
/* 0x0000FD5A aFffeeeddddcccc (ROM): <unknown> */
/* 0x0000FD70 aMouse24gPwmLed_1 (ROM): <unknown> */
/* 0x0000FDB8 aE24gPwmLedDisa (ROM): <unknown> */
/* 0x0000FDF8 aPixart (ROM): <unknown> */
/* 0x0000FE08 aZygenNp01sV2Wi (ROM): <unknown> */
/* 0x00010160 aCurrentTimerIn (ROM): <unknown> */
/* 0x0001018C aTimerUpdateTic (ROM): <unknown> */
/* 0x00010302 jpt_10300 (ROM): <unknown> */
/* 0x000103F4 def_10300 (ROM): <unknown> */
/* 0x00010660 aMouseKeyboaroc (ROM): <unknown> */
/* 0x00010694 aMouseKeyboaroc_0 (ROM): <unknown> */
/* 0x000106C4 aMouseKeyboaroc_1 (ROM): <unknown> */
/* 0x000106F4 aMouseKeyboaroc_2 (ROM): <unknown> */
/* 0x000117E8 aMouseButtonInd_2 (ROM): <unknown> */
/* 0x0001251C aRfChGroupIdxD (ROM): <unknown> */
/* 0x00012C34 aChksumFail (ROM): <unknown> */
/* 0x00012EF4 aNacRxFifoReadW (ROM): <unknown> */
/* 0x20000348 aTickDDD (RAM): <unknown> */
/* 0x200041C4 g_runtime_event_handlers (RAM): <unknown> */
/* 0x2000421C g_motion_tick_state (RAM): <unknown> */
/* 0x20004294 g_runtime_handler_index (RAM): <unknown> */
/* 0x20004298 g_runtime_handler_table (RAM): <unknown> */
#define g_mouse_cfg (*(volatile mouse_config_t *)0x20004960u)
/* 0x200049CC g_debounce_slot_payload (RAM): u8[5] */
/* 0x200049DE g_dpi_value_table (RAM): u16[4] */
#define g_motion_sample (*(volatile motion_sample_t *)0x20004AACu)
/* 0x20004ABA g_buffered_motion_stage_a (RAM): <unknown> */
/* 0x20004AC3 g_buffered_motion_stage_b (RAM): <unknown> */
#define g_track_trail_mode (*(volatile u8 *)0x20004BC8u)
/* 0x20004BD0 g_motion_queue (RAM): <unknown> */
#define g_sensor_shadow (*(volatile sensor_shadow_t *)0x20004BE8u)
#define g_hid_feature_rx_report (*(volatile hid_feature_report_t *)0x2000503Cu)
/* 0x200050BC g_runtime_event_flags (RAM): <unknown> */
#define g_hid_feature_tx_report (*(volatile hid_feature_report_t *)0x200050E4u)
/* 0x200056C0 g_motion_flush_stage (RAM): <unknown> */


/* ===== [1/1228] sub_2 @ 0x00000002 (ROM) ===== */
void sub_2(void)
{
  /* frame: locals=0x1C, saved_regs=0x4, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R3, R4, R5, R6, R7, SP, LR, PC;

  R0 = 0; /* 00000002: MOVS            R0, #0 */
loc_4:
  R5 = R6 << 0x8; /* 00000004: LSLS            R5, R6, #8 */
  R0 = ((s32)R0) >> 0x20; /* 00000006: ASRS            R0, R0, #0x20 ; ' ' */
  R5 = R7 << 0x8; /* 00000008: LSLS            R5, R7, #8 */
  R0 = ((s32)R0) >> 0x20; /* 0000000A: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R7 << 0x8; /* 0000000C: LSLS            R7, R7, #8 */
  R0 = ((s32)R0) >> 0x20; /* 0000000E: ASRS            R0, R0, #0x20 ; ' ' */
  R0 = R0; /* 00000010: MOVS            R0, R0 */
  R0 = R0; /* 00000012: MOVS            R0, R0 */
  R0 = R0; /* 00000014: MOVS            R0, R0 */
  R0 = R0; /* 00000016: MOVS            R0, R0 */
  R0 = R0; /* 00000018: MOVS            R0, R0 */
  R0 = R0; /* 0000001A: MOVS            R0, R0 */
  R0 = R0; /* 0000001C: MOVS            R0, R0 */
  R0 = R0; /* 0000001E: MOVS            R0, R0 */
  R0 = R0; /* 00000020: MOVS            R0, R0 */
  R0 = R0; /* 00000022: MOVS            R0, R0 */
  R0 = R0; /* 00000024: MOVS            R0, R0 */
  R0 = R0; /* 00000026: MOVS            R0, R0 */
  R0 = R0; /* 00000028: MOVS            R0, R0 */
  R0 = R0; /* 0000002A: MOVS            R0, R0 */
  R1 = R0 << 0x9; /* 0000002C: LSLS            R1, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 0000002E: ASRS            R0, R0, #0x20 ; ' ' */
  R0 = R0; /* 00000030: MOVS            R0, R0 */
  R0 = R0; /* 00000032: MOVS            R0, R0 */
  R0 = R0; /* 00000034: MOVS            R0, R0 */
  R0 = R0; /* 00000036: MOVS            R0, R0 */
  R3 = R0 << 0x9; /* 00000038: LSLS            R3, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 0000003A: ASRS            R0, R0, #0x20 ; ' ' */
  R1 = R2 >> 0x11; /* 0000003C: LSRS            R1, R2, #0x11 */
  R0 = 0; /* 0000003E: MOVS            R0, #0 */
  R2 = R2 - 0xa9; /* 00000040: SUBS            R2, #0xA9 */
  R0 = 0; /* 00000042: MOVS            R0, #0 */
  R5 = 0xd1; /* 00000044: MOVS            R5, #0xD1 */
  R0 = ((s32)R0) >> 0x20; /* 00000046: ASRS            R0, R0, #0x20 ; ' ' */
  R6 = 0x9; /* 00000048: MOVS            R6, #9 */
  R0 = ((s32)R0) >> 0x20; /* 0000004A: ASRS            R0, R0, #0x20 ; ' ' */
  R6 = 0x35; /* 0000004C: MOVS            R6, #0x35 ; '5' */
  R0 = ((s32)R0) >> 0x20; /* 0000004E: ASRS            R0, R0, #0x20 ; ' ' */
  R5 = 0x49; /* 00000050: MOVS            R5, #0x49 ; 'I' */
  R0 = ((s32)R0) >> 0x20; /* 00000052: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R0 << 0x9; /* 00000054: LSLS            R7, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 00000056: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000058: CMP             R5, #9 */
  R0 = ((s32)R0) >> 0x20; /* 0000005A: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R0 << 0x9; /* 0000005C: LSLS            R7, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 0000005E: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R0 << 0x9; /* 00000060: LSLS            R7, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 00000062: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000064: CMP             R3, #0x4D ; 'M' */
  R0 = ((s32)R0) >> 0x20; /* 00000066: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000068: CMP             R3, #0x69 ; 'i' */
  R0 = ((s32)R0) >> 0x20; /* 0000006A: ASRS            R0, R0, #0x20 ; ' ' */
  /* 0000006C: CMP             R3, #0x85 */
  R0 = ((s32)R0) >> 0x20; /* 0000006E: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000070: CMP             R3, #0xA1 */
  R0 = ((s32)R0) >> 0x20; /* 00000072: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000074: CMP             R3, #0xBD */
  R0 = ((s32)R0) >> 0x20; /* 00000076: ASRS            R0, R0, #0x20 ; ' ' */
  R0 = R0 + 0x1; /* 00000078: ADDS            R0, #1 */
  R0 = ((s32)R0) >> 0x20; /* 0000007A: ASRS            R0, R0, #0x20 ; ' ' */
  R6 = 0x59; /* 0000007C: MOVS            R6, #0x59 ; 'Y' */
  R0 = ((s32)R0) >> 0x20; /* 0000007E: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R0 << 0x9; /* 00000080: LSLS            R7, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 00000082: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000084: CMP             R5, #0x99 */
  R0 = ((s32)R0) >> 0x20; /* 00000086: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R0 << 0x9; /* 00000088: LSLS            R7, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 0000008A: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R0 << 0x9; /* 0000008C: LSLS            R7, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 0000008E: ASRS            R0, R0, #0x20 ; ' ' */
  R5 = 0xe9; /* 00000090: MOVS            R5, #0xE9 */
  R0 = ((s32)R0) >> 0x20; /* 00000092: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R0 << 0x9; /* 00000094: LSLS            R7, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 00000096: ASRS            R0, R0, #0x20 ; ' ' */
  R5 = 0xb9; /* 00000098: MOVS            R5, #0xB9 */
  R0 = ((s32)R0) >> 0x20; /* 0000009A: ASRS            R0, R0, #0x20 ; ' ' */
  R7 = R0 << 0x9; /* 0000009C: LSLS            R7, R0, #9 */
  R0 = ((s32)R0) >> 0x20; /* 0000009E: ASRS            R0, R0, #0x20 ; ' ' */
  R3 = 0xa9; /* 000000A0: MOVS            R3, #0xA9 */
  R0 = ((s32)R0) >> 0x20; /* 000000A2: ASRS            R0, R0, #0x20 ; ' ' */
/* <<< end original lines 1-260 */

/* >>> original lines 22221-22310 */
  MEM32(R4 + (unk_200048D8 - 0x200048B8)) = R0; /* 00009B36: STR             R0, [R4,#(unk_200048D8 - 0x200048B8)] */
  R0 = MEM16(R4 + (unk_200048C4 - 0x200048B8)); /* 00009B38: LDRH            R0, [R4,#(unk_200048C4 - 0x200048B8)] */
  MEM16(R4 + (unk_200048C6 - 0x200048B8)) = R0; /* 00009B3A: STRH            R0, [R4,#(unk_200048C6 - 0x200048B8)] */
loc_9B3C:
  R1 = 0x17; /* 00009B3C: MOVS            R1, #0x17 */
  R0 = SP; /* 00009B3E: MOV             R0, SP */
  MEM8(R0 + 0xC+var_8) = R1; /* 00009B40: STRB            R1, [R0,#0xC+var_8] */
  R1 = MEM16(R4 + (unk_200048C4 - 0x200048B8)); /* 00009B42: LDRH            R1, [R4,#(unk_200048C4 - 0x200048B8)] */
  MEM16(R0 + 0xC+var_6) = R1; /* 00009B44: STRH            R1, [R0,#0xC+var_6] */
loc_9B46:
  R2 = MEM32(R4 + (unk_20004908 - 0x200048B8)); /* 00009B46: LDR             R2, [R4,#(unk_20004908 - 0x200048B8)] */
  R1 = SP + 0xC+var_8; /* 00009B48: ADD             R1, SP, #0xC+var_8 */
  R0 = 4; /* 00009B4A: MOVS            R0, #4 */
  R0 = sub_2(R0, R1, R2, R3); /* 00009B4C: BLX             R2 */
  /* 00009B4E: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_9B58; /* 00009B50: BNE             loc_9B58 */
loc_9B52:
  R0 = MEM8(R4 + (unk_200048BA - 0x200048B8)); /* 00009B52: LDRB            R0, [R4,#(unk_200048BA - 0x200048B8)] */
  /* 00009B54: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_9B46; /* 00009B56: BEQ             loc_9B46 */
loc_9B58:
  R0 = MEM32(SP + 0xC+var_C); /* 00009B58: LDR             R0, [SP,#0xC+var_C] */
  /* 00009B5A: MSR.W           PRIMASK, R0 */
loc_9B5E:
  SP = SP + 0xC; /* 00009B5E: ADD             SP, SP, #0xC */
  return; /* 00009B60: POP             {R4-R7,PC} */
loc_9B62:
  R1 = MEM8(R0); /* 00009B62: LDRB            R1, [R0] */
  /* 00009B64: CMP             R1, #0x18 */
  if ((R1 == 0x18)) goto loc_9B7A; /* 00009B66: BEQ             loc_9B7A */
loc_9B68:
  /* 00009B68: CMP             R1, #0x22 ; '"' */
  if ((R1 == 0x22)) goto loc_9BF2; /* 00009B6A: BEQ             loc_9BF2 */
loc_9B6C:
  /* 00009B6C: CMP             R1, #0x25 ; '%' */
  if ((R1 != 0x25)) goto loc_9B5E; /* 00009B6E: BNE             loc_9B5E */
loc_9B70:
  R0 = R0 + 1; /* 00009B70: ADDS            R0, R0, #1 */
  R0 = sub_5354(R0, R1, R2, R3); /* 00009B72: BL              sub_5354 */
  SP = SP + 0xC; /* 00009B76: ADD             SP, SP, #0xC */
  return; /* 00009B78: POP             {R4-R7,PC} */
loc_9B7A:
  R1 = MEM8(R0 + 6); /* 00009B7A: LDRB            R1, [R0,#6] */
  R2 = MEM8(R0 + 5); /* 00009B7C: LDRB            R2, [R0,#5] */
  R0 = R0 + 1; /* 00009B7E: ADDS            R0, R0, #1 */
  R3 = R1 << 8; /* 00009B80: LSLS            R3, R1, #8 */
  R5 = MEM8(R0); /* 00009B82: LDRB            R5, [R0] */
  R3 = R3 | R2; /* 00009B84: ORRS            R3, R2 */
  R2 = R5; /* 00009B86: MOV             R2, R5 */
  R5 = MEM8(R0 + 1); /* 00009B88: LDRB            R5, [R0,#1] */
  R1 = MEM8(R0 + 3); /* 00009B8A: LDRB            R1, [R0,#3] */
  R5 = R5 << 8; /* 00009B8C: LSLS            R5, R5, #8 */
  R2 = R2 | R5; /* 00009B8E: ORRS            R2, R5 */
  R5 = MEM8(R0 + 2); /* 00009B90: LDRB            R5, [R0,#2] */
  R1 = R1 << 0x18; /* 00009B92: LSLS            R1, R1, #0x18 */
  R5 = R5 << 0x10; /* 00009B94: LSLS            R5, R5, #0x10 */
  R2 = R2 | R5; /* 00009B96: ORRS            R2, R5 */
  R2 = R2 | R1; /* 00009B98: ORRS            R2, R1 */
  R1 = R0 + 6; /* 00009B9A: ADDS            R1, R0, #6 */
  R5 = MEM32(R4 + (unk_20004900 - 0x200048B8)); /* 00009B9C: LDR             R5, [R4,#(unk_20004900 - 0x200048B8)] */
  R0 = 0; /* 00009B9E: MOVS            R0, #0 */
  R0 = ((u32 (*)(u32, u32, u32, u32))(R5))(R0, R1, R2, R3); /* 00009BA0: BLX             R5 */
  /* 00009BA2: CMP             R0, #1 */
  if ((R0 == 1)) goto loc_9BC4; /* 00009BA4: BEQ             loc_9BC4 */
loc_9BA6:
  R0 = 0xFF; /* 00009BA6: MOVS            R0, #0xFF */
  R1 = SP; /* 00009BA8: MOV             R1, SP */
  MEM8(R1 + 0xC+var_C) = R0; /* 00009BAA: STRB            R0, [R1,#0xC+var_C] */
loc_9BAC:
  R1 = 0x18; /* 00009BAC: MOVS            R1, #0x18 */
  R0 = SP; /* 00009BAE: MOV             R0, SP */
  MEM8(R0 + 0xC+var_4) = R1; /* 00009BB0: STRB            R1, [R0,#0xC+var_4] */
  R1 = MEM8(R0 + 0xC+var_C); /* 00009BB2: LDRB            R1, [R0,#0xC+var_C] */
  MEM8(R0 + 0xC+var_3) = R1; /* 00009BB4: STRB            R1, [R0,#0xC+var_3] */
loc_9BB6:
  R2 = MEM32(R4 + (unk_20004908 - 0x200048B8)); /* 00009BB6: LDR             R2, [R4,#(unk_20004908 - 0x200048B8)] */
  R1 = SP + 0xC+var_4; /* 00009BB8: ADD             R1, SP, #0xC+var_4 */
  R0 = 4; /* 00009BBA: MOVS            R0, #4 */
  R0 = sub_2(R0, R1, R2, R3); /* 00009BBC: BLX             R2 */
  /* 00009BBE: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_9BCC; /* 00009BC0: BEQ             loc_9BCC */
loc_9BC2:
  goto loc_9BD2; /* 00009BC2: B               loc_9BD2 */
loc_9BC4:
  R0 = 0; /* 00009BC4: MOVS            R0, #0 */
  R1 = SP; /* 00009BC6: MOV             R1, SP */
  MEM8(R1 + 0xC+var_C) = R0; /* 00009BC8: STRB            R0, [R1,#0xC+var_C] */
  goto loc_9BAC; /* 00009BCA: B               loc_9BAC */
loc_9BCC:
  R0 = MEM8(R4 + (unk_200048BA - 0x200048B8)); /* 00009BCC: LDRB            R0, [R4,#(unk_200048BA - 0x200048B8)] */
/* <<< end original lines 22221-22310 */

/* >>> original lines 37221-37310 */

  /* save {R4-R6,LR} */ /* 000100A6: PUSH            {R4-R6,LR} */
  R5 = R1; /* 000100A8: MOV             R5, R1 */
  R1 = 0x3E8; /* 000100AA: LDR             R1, =0x3E8 */
  R4 = (u32)&(g_motion_tick_state); /* 000100AC: LDR             R4, =g_motion_tick_state */
  R6 = R0; /* 000100AE: MOVS            R6, R0 */
  if (COND_BEQ) goto loc_100BA; /* 000100B0: BEQ             loc_100BA */
loc_100B2:
  /* 000100B2: CMP             R5, #6 */
  if ((((u32)R5) <= ((u32)6))) goto loc_100D4; /* 000100B4: BLS             loc_100D4 */
loc_100B6:
  R0 = 6; /* 000100B6: MOVS            R0, #6 */
  goto loc_100D6; /* 000100B8: B               loc_100D6 */
loc_100BA:
  /* 000100BA: CMP             R5, #3 */
  if ((((u32)R5) <= ((u32)3))) goto loc_100C2; /* 000100BC: BLS             loc_100C2 */
loc_100BE:
  R0 = 0; /* 000100BE: MOVS            R0, #0 */
  goto loc_100C4; /* 000100C0: B               loc_100C4 */
loc_100C2:
  R0 = R5; /* 000100C2: MOV             R0, R5 */
loc_100C4:
  MEM8(R4 + (byte_2000421D - 0x2000421C)) = R0; /* 000100C4: STRB            R0, [R4,#(byte_2000421D - 0x2000421C)] */
  R2 = 0x20004284; /* 000100C6: LDR             R2, =0x20004284 */
  R0 = R0 << 2; /* 000100C8: LSLS            R0, R0, #2 */
  R0 = MEM32(R2 + R0); /* 000100CA: LDR             R0, [R2,R0] */
  R0 = sub_10B34(R0, R1, R2, R3); /* 000100CC: BL              sub_10B34 */
  MEM32(R4 + (dword_20004228 - 0x2000421C)) = R0; /* 000100D0: STR             R0, [R4,#(dword_20004228 - 0x2000421C)] */
  goto loc_100EC; /* 000100D2: B               loc_100EC */
loc_100D4:
  R0 = R5; /* 000100D4: MOV             R0, R5 */
loc_100D6:
  R2 = (u32)&(g_track_trail_mode); /* 000100D6: LDR             R2, =g_track_trail_mode */
  MEM8(R4 + (byte_2000421D - 0x2000421C)) = R0; /* 000100D8: STRB            R0, [R4,#(byte_2000421D - 0x2000421C)] */
  R2 = MEM8(R2); /* 000100DA: LDRB            R2, [R2] */
  /* 000100DC: CMP             R2, #0 */
  if ((R2 == 0)) goto loc_100FA; /* 000100DE: BEQ             loc_100FA */
loc_100E0:
  R2 = 0x20004268; /* 000100E0: LDR             R2, =0x20004268 */
  R0 = R0 << 2; /* 000100E2: LSLS            R0, R0, #2 */
  R0 = MEM32(R2 + R0); /* 000100E4: LDR             R0, [R2,R0] */
  R0 = sub_10B34(R0, R1, R2, R3); /* 000100E6: BL              sub_10B34 */
  MEM32(R4 + (dword_20004228 - 0x2000421C)) = R0; /* 000100EA: STR             R0, [R4,#(dword_20004228 - 0x2000421C)] */
loc_100EC:
  R3 = R0; /* 000100EC: MOV             R3, R0 */
  R2 = R5; /* 000100EE: MOV             R2, R5 */
  R1 = R6; /* 000100F0: MOV             R1, R6 */
  R0 = (u32)&sub_101B4; /* 000100F2: ADR             R0, sub_101B4 */
  R0 = sub_13230(R0, R1, R2, R3); /* 000100F4: BL              sub_13230 */
  return; /* 000100F8: POP             {R4-R6,PC} */
loc_100FA:
  R2 = 0x2000424C; /* 000100FA: LDR             R2, =0x2000424C */
  R0 = R0 << 2; /* 000100FC: LSLS            R0, R0, #2 */
  R0 = MEM32(R2 + R0); /* 000100FE: LDR             R0, [R2,R0] */
  R0 = sub_10B34(R0, R1, R2, R3); /* 00010100: BL              sub_10B34 */
  MEM32(R4 + (dword_20004228 - 0x2000421C)) = R0; /* 00010104: STR             R0, [R4,#(dword_20004228 - 0x2000421C)] */
  goto loc_100EC; /* 00010106: B               loc_100EC */
}

/* ===== [935/1228] sub_10108 @ 0x00010108 (ROM) ===== */
void sub_10108(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* direct callees: sub_1323C */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R4, LR, PC;

  /* save {R4,LR} */ /* 00010108: PUSH            {R4,LR} */
  R0 = 3; /* 0001010A: MOVS            R0, #3 */
  R0 = sub_1323C(R0, R1, R2, R3); /* 0001010C: BL              sub_1323C */
  R1 = (u32)&(g_motion_tick_state); /* 00010110: LDR             R1, =g_motion_tick_state */
  R1 = MEM8(R1); /* 00010112: LDRB            R1, [R1] */
  R0 = R0 | R1; /* 00010114: ORRS            R0, R1 */
  if (COND_BEQ) goto locret_1011A; /* 00010116: BEQ             locret_1011A */
loc_10118:
  R0 = 1; /* 00010118: MOVS            R0, #1 */
locret_1011A:
  return; /* 0001011A: POP             {R4,PC} */
}

/* ===== [936/1228] sub_1011C @ 0x0001011C (ROM) ===== */
void sub_1011C(void)
{
  /* frame: locals=0x0, saved_regs=0x10, args=0x0 */
  /* direct callees: sub_10AB0, sub_1323C, sub_13224, sub_FEB4 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R4, R5, R6, LR, PC;

  /* save {R4-R6,LR} */ /* 0001011C: PUSH            {R4-R6,LR} */
  R4 = (u32)&(g_motion_tick_state); /* 0001011E: LDR             R4, =g_motion_tick_state */
/* <<< end original lines 37221-37310 */

/* >>> original lines 38839-38948 */
  return; /* 00010C90: BX              LR */
}

/* ===== [960/1228] motion_queue_is_full @ 0x00010C92 (ROM) ===== */
void motion_queue_is_full(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* direct callees: sub_133BC */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R4, LR, PC;

  /* save {R4,LR} */ /* 00010C92: PUSH            {R4,LR} */
  R4 = R2; /* 00010C94: MOV             R4, R2 */
  R2 = R1; /* 00010C96: MOV             R2, R1 */
  R1 = MEM8(R0 + 0x6); /* 00010C98: LDRB            R1, [R0,#6] */
  R0 = R2 + 0x1; /* 00010C9A: ADDS            R0, R2, #1 */
  R0 = sub_133BC(R0, R1, R2, R3); /* 00010C9C: BL              sub_133BC */
  /* 00010CA0: CMP             R1, R4 */
  if ((R1 != R4)) goto loc_10CA8; /* 00010CA2: BNE             loc_10CA8 */
loc_10CA4:
  R0 = 0x1; /* 00010CA4: MOVS            R0, #1 */
  return; /* 00010CA6: POP             {R4,PC} */
loc_10CA8:
  R0 = 0; /* 00010CA8: MOVS            R0, #0 */
  return; /* 00010CAA: POP             {R4,PC} */
}

/* ===== [961/1228] motion_queue_is_empty @ 0x00010CAC (ROM) ===== */
void motion_queue_is_empty(void)
{
  /* frame: locals=0x0, saved_regs=0x0, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, LR;

  /* 00010CAC: CMP             R0, R1 */
  if ((R0 != R1)) goto loc_10CB4; /* 00010CAE: BNE             loc_10CB4 */
loc_10CB0:
  R0 = 0x1; /* 00010CB0: MOVS            R0, #1 */
  return; /* 00010CB2: BX              LR */
loc_10CB4:
  R0 = 0; /* 00010CB4: MOVS            R0, #0 */
  return; /* 00010CB6: BX              LR */
}

/* ===== [962/1228] motion_queue_push_record @ 0x00010CB8 (ROM) ===== */
void motion_queue_push_record(void)
{
  /* frame: locals=0x0, saved_regs=0x10, args=0x0 */
  /* direct callees: sub_132CC, sub_133BC */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R3, R4, R5, R6, LR, PC;

  /* save {R4 - R6,LR} */ /* 00010CB8: PUSH            {R4-R6,LR} */
  R4 = R0; /* 00010CBA: MOV             R4, R0 */
  R0 = MEM32(R0); /* 00010CBC: LDR             R0, [R0] */
  /* 00010CBE: CMP             R0, #0 */
  if ((R0 == 0)) goto locret_10CDE; /* 00010CC0: BEQ             locret_10CDE */
loc_10CC2:
  R5 = MEM8(R4 + 0x4); /* 00010CC2: LDRB            R5, [R4,#4] */
  R3 = R5 << 0x2; /* 00010CC4: LSLS            R3, R5, #2 */
  R0 = MEM32(R0 + R3); /* 00010CC6: LDR             R0, [R0,R3] */
  MEM8(R0) = R2; /* 00010CC8: STRB            R2, [R0] */
  R0 = MEM32(R4); /* 00010CCA: LDR             R0, [R4] */
  R0 = MEM32(R0 + R3); /* 00010CCC: LDR             R0, [R0,R3] */
  R0 = R0 + 0x1; /* 00010CCE: ADDS            R0, R0, #1 */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00010CD0: BL              sub_132CC */
  R1 = MEM8(R4 + 0x6); /* 00010CD4: LDRB            R1, [R4,#6] */
  R0 = R5 + 0x1; /* 00010CD6: ADDS            R0, R5, #1 */
  R0 = sub_133BC(R0, R1, R2, R3); /* 00010CD8: BL              sub_133BC */
  MEM8(R4 + 0x4) = R1; /* 00010CDC: STRB            R1, [R4,#4] */
locret_10CDE:
  return; /* 00010CDE: POP             {R4-R6,PC} */
}

/* ===== [963/1228] motion_queue_peek_record @ 0x00010CE0 (ROM) ===== */
void motion_queue_peek_record(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* direct callees: sub_132CC */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R3, R4, LR, PC;

  /* save {R4,LR} */ /* 00010CE0: PUSH            {R4,LR} */
  R3 = R1; /* 00010CE2: MOV             R3, R1 */
  R1 = MEM8(R0 + 0x5); /* 00010CE4: LDRB            R1, [R0,#5] */
  R0 = MEM32(R0); /* 00010CE6: LDR             R0, [R0] */
  R1 = R1 << 0x2; /* 00010CE8: LSLS            R1, R1, #2 */
  R1 = MEM32(R0 + R1); /* 00010CEA: LDR             R1, [R0,R1] */
  R0 = R3; /* 00010CEC: MOV             R0, R3 */
  R2 = MEM8(R1); /* 00010CEE: LDRB            R2, [R1] */
  R1 = R1 + 0x1; /* 00010CF0: ADDS            R1, R1, #1 */
  R4 = R2; /* 00010CF2: MOV             R4, R2 */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00010CF4: BL              sub_132CC */
  R0 = R4; /* 00010CF8: MOV             R0, R4 */
  return; /* 00010CFA: POP             {R4,PC} */
}

/* ===== [964/1228] motion_queue_pop_record @ 0x00010CFC (ROM) ===== */
void motion_queue_pop_record(void)
{
  /* frame: locals=0x0, saved_regs=0x10, args=0x0 */
  /* direct callees: sub_133BC */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R4, R5, R6, LR, PC;

  /* save {R4 - R6,LR} */ /* 00010CFC: PUSH            {R4-R6,LR} */
  R5 = R0; /* 00010CFE: MOV             R5, R0 */
  /* 00010D00: MRS.W           R4, PRIMASK */
  disable_interrupts(); /* 00010D04: CPSID           I */
  R1 = MEM8(R0 + 0x6); /* 00010D06: LDRB            R1, [R0,#6] */
/* <<< end original lines 38839-38948 */

/* >>> original lines 40991-41336 */
loc_11A02:
  R0 = sub_134C4(R0, R1, R2, R3); /* 00011A02: BL              sub_134C4 */
  return; /* 00011A06: POP             {R4,PC} */
}

/* ===== [987/1228] queue_motion_payload_record @ 0x00011A20 (ROM) ===== */
void queue_motion_payload_record(void)
{
  /* frame: locals=0x24, saved_regs=0x14, args=0x0 */
  /* direct callees: sub_12860, sub_10C5C, motion_queue_is_full, sub_1353C, motion_queue_is_empty, sub_132CC, sub_12A7A, sub_13548, motion_queue_push_record, sub_10C80, ... */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R4, R5, R6, R7, SP, LR, PC;

  /* save {R0 - R2,R4 - R7,LR} */ /* 00011A20: PUSH            {R0-R2,R4-R7,LR} */
  SP = SP - 0x18; /* 00011A22: SUB             SP, SP, #0x18 */
  R5 = R2; /* 00011A24: MOV             R5, R2 */
  R0 = sub_12860(R0, R1, R2, R3); /* 00011A26: BL              sub_12860 */
  R4 = MEM32(SP + 0x1c); /* 00011A2A: LDR             R4, [SP,#0x24+var_8] */
  R6 = 0; /* 00011A2C: MOVS            R6, #0 */
  R7 = 0x2; /* 00011A2E: MOVS            R7, #2 */
  R4 = R4 + 0x2; /* 00011A30: ADDS            R4, R4, #2 */
  /* 00011A32: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11A3E; /* 00011A34: BEQ             loc_11A3E */
loc_11A36:
  R0 = sub_10C5C(R0, R1, R2, R3); /* 00011A36: BL              sub_10C5C */
  /* 00011A3A: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11A52; /* 00011A3C: BEQ             loc_11A52 */
loc_11A3E:
  R0 = (u32)&(g_motion_queue); /* 00011A3E: LDR             R0, =g_motion_queue */
  R2 = MEM8(R0 + 0x5); /* 00011A40: LDRB            R2, [R0,#(unk_20004BD5 - 0x20004BD0)] */
  R1 = MEM8(R0 + 0x4); /* 00011A42: LDRB            R1, [R0,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = motion_queue_is_full(R0, R1, R2, R3); /* 00011A44: BL              motion_queue_is_full */
  /* 00011A48: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11B0C; /* 00011A4A: BEQ             loc_11B0C */
loc_11A4C:
  R0 = 0; /* 00011A4C: MOVS            R0, #0 */
  SP = SP + 0x24; /* 00011A4E: ADD             SP, SP, #0x24 ; '$' */
  return; /* 00011A50: POP             {R4-R7,PC} */
loc_11A52:
  /* 00011A52: CMP             R5, #1 */
  if ((R5 == 0x1)) goto loc_11AFE; /* 00011A54: BEQ             loc_11AFE */
loc_11A56:
  R0 = sub_1353C(R0, R1, R2, R3); /* 00011A56: BL              sub_1353C */
  /* 00011A5A: CMP             R0, #0 */
  R0 = (u32)&(g_motion_queue); /* 00011A5C: LDR             R0, =g_motion_queue */
  if ((R0 == 0)) goto loc_11AC8; /* 00011A5E: BEQ             loc_11AC8 */
loc_11A60:
  R1 = MEM8(R0 + 0x5); /* 00011A60: LDRB            R1, [R0,#(unk_20004BD5 - 0x20004BD0)] */
  R0 = MEM8(R0 + 0x4); /* 00011A62: LDRB            R0, [R0,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = motion_queue_is_empty(R0, R1, R2, R3); /* 00011A64: BL              motion_queue_is_empty */
  /* 00011A68: CMP             R0, #0 */
  MEM32(SP + 0) = R6; /* 00011A6A: STR             R6, [SP,#0x24+var_24] */
  MEM32(SP + 0x4) = R6; /* 00011A6C: STR             R6, [SP,#0x24+var_20] */
  MEM32(SP + 0x8) = R6; /* 00011A6E: STR             R6, [SP,#0x24+var_1C] */
  MEM32(SP + 0xc) = R6; /* 00011A70: STR             R6, [SP,#0x24+var_18] */
  MEM32(SP + 0x10) = R6; /* 00011A72: STR             R6, [SP,#0x24+var_14] */
  if ((R0 == 0)) goto loc_11A96; /* 00011A74: BEQ             loc_11A96 */
loc_11A76:
  R0 = SP; /* 00011A76: MOV             R0, SP */
  MEM8(R0 + 0) = R7; /* 00011A78: STRB            R7, [R0,#0x24+var_24] */
  MEM8(R0 + 0x1) = R5; /* 00011A7A: STRB            R5, [R0,#0x24+var_24+1] */
  R0 = R0 + 0x2; /* 00011A7C: ADDS            R0, R0, #2 */
  R2 = MEM32(SP + 0x1c); /* 00011A7E: LDR             R2, [SP,#0x24+var_8] */
  R1 = MEM32(SP + 0x18); /* 00011A80: LDR             R1, [SP,#0x24+var_C] */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011A82: BL              sub_132CC */
  R1 = (u8)(R4); /* 00011A86: UXTB            R1, R4 */
  R0 = SP; /* 00011A88: MOV             R0, SP */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00011A8A: BL              sub_12A7A */
  R0 = 0x1; /* 00011A8E: MOVS            R0, #1 */
  R0 = sub_13548(R0, R1, R2, R3); /* 00011A90: BL              sub_13548 */
  goto loc_11B30; /* 00011A94: B               loc_11B30 */
loc_11A96:
  R1 = SP; /* 00011A96: MOV             R1, SP */
  MEM8(R1 + 0) = R7; /* 00011A98: STRB            R7, [R1,#0x24+var_24] */
  R0 = 0x5; /* 00011A9A: MOVS            R0, #5 */
  MEM8(R1 + 0x1) = R0; /* 00011A9C: STRB            R0, [R1,#0x24+var_24+1] */
  R0 = SP + 0; /* 00011A9E: ADD             R0, SP, #0x24+var_24 */
  R0 = R0 + 0x2; /* 00011AA0: ADDS            R0, #2 */
  R2 = MEM32(SP + 0x1c); /* 00011AA2: LDR             R2, [SP,#0x24+var_8] */
  R1 = MEM32(SP + 0x18); /* 00011AA4: LDR             R1, [SP,#0x24+var_C] */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011AA6: BL              sub_132CC */
  R2 = (u8)(R4); /* 00011AAA: UXTB            R2, R4 */
  R1 = SP; /* 00011AAC: MOV             R1, SP */
  R0 = (u32)&(g_motion_queue); /* 00011AAE: LDR             R0, =g_motion_queue */
  R0 = motion_queue_push_record(R0, R1, R2, R3); /* 00011AB0: BL              motion_queue_push_record */
  R0 = (u32)&(g_motion_queue); /* 00011AB4: LDR             R0, =g_motion_queue */
  R2 = MEM8(R0 + 0x5); /* 00011AB6: LDRB            R2, [R0,#(unk_20004BD5 - 0x20004BD0)] */
  R1 = MEM8(R0 + 0x4); /* 00011AB8: LDRB            R1, [R0,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = sub_10C80(R0, R1, R2, R3); /* 00011ABA: BL              sub_10C80 */
  /* 00011ABE: CMP             R0, #2 */
  if ((((u32)R0) < ((u32)0x2))) goto loc_11B30; /* 00011AC0: BCC             loc_11B30 */
loc_11AC2:
  R0 = pack_queued_motion_history(R0, R1, R2, R3); /* 00011AC2: BL              pack_queued_motion_history; Coalesce deferred subtype-5 XY-only records from g_motion_queue. Cursor 0x20004A7E starts at 1, so 0x20004ACC is built as [00,xyA0..3,xyB0..3]. If a half-full aggregate must flush, bytes 0x20004A90..93 provide the tail XY filler. */
  goto loc_11B30; /* 00011AC6: B               loc_11B30 */
loc_11AC8:
  R2 = MEM8(R0 + 0x5); /* 00011AC8: LDRB            R2, [R0,#(unk_20004BD5 - 0x20004BD0)] */
  R1 = MEM8(R0 + 0x4); /* 00011ACA: LDRB            R1, [R0,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = (u32)&(g_motion_queue); /* 00011ACC: LDR             R0, =g_motion_queue */
  R0 = motion_queue_is_full(R0, R1, R2, R3); /* 00011ACE: BL              motion_queue_is_full */
  /* 00011AD2: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_11A4C; /* 00011AD4: BNE             loc_11A4C */
loc_11AD6:
  MEM32(SP + 0) = R6; /* 00011AD6: STR             R6, [SP,#0x24+var_24] */
  MEM32(SP + 0x4) = R6; /* 00011AD8: STR             R6, [SP,#0x24+var_20] */
  MEM32(SP + 0x8) = R6; /* 00011ADA: STR             R6, [SP,#0x24+var_1C] */
  MEM32(SP + 0xc) = R6; /* 00011ADC: STR             R6, [SP,#0x24+var_18] */
  R0 = SP; /* 00011ADE: MOV             R0, SP */
  MEM32(SP + 0x10) = R6; /* 00011AE0: STR             R6, [SP,#0x24+var_14] */
  MEM8(R0 + 0) = R7; /* 00011AE2: STRB            R7, [R0,#0x24+var_24] */
  R1 = 0x5; /* 00011AE4: MOVS            R1, #5 */
  MEM8(R0 + 0x1) = R1; /* 00011AE6: STRB            R1, [R0,#0x24+var_24+1] */
  R0 = R0 + 0x2; /* 00011AE8: ADDS            R0, R0, #2 */
  R2 = MEM32(SP + 0x1c); /* 00011AEA: LDR             R2, [SP,#0x24+var_8] */
  R1 = MEM32(SP + 0x18); /* 00011AEC: LDR             R1, [SP,#0x24+var_C] */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011AEE: BL              sub_132CC */
  R2 = (u8)(R4); /* 00011AF2: UXTB            R2, R4 */
  R1 = SP; /* 00011AF4: MOV             R1, SP */
  R0 = (u32)&(g_motion_queue); /* 00011AF6: LDR             R0, =g_motion_queue */
  R0 = motion_queue_push_record(R0, R1, R2, R3); /* 00011AF8: BL              motion_queue_push_record */
  goto loc_11B30; /* 00011AFC: B               loc_11B30 */
loc_11AFE:
  R0 = (u32)&(g_motion_queue); /* 00011AFE: LDR             R0, =g_motion_queue */
  R2 = MEM8(R0 + 0x5); /* 00011B00: LDRB            R2, [R0,#(unk_20004BD5 - 0x20004BD0)] */
  R1 = MEM8(R0 + 0x4); /* 00011B02: LDRB            R1, [R0,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = motion_queue_is_full(R0, R1, R2, R3); /* 00011B04: BL              motion_queue_is_full */
  /* 00011B08: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_11A4C; /* 00011B0A: BNE             loc_11A4C */
loc_11B0C:
  MEM32(SP + 0) = R6; /* 00011B0C: STR             R6, [SP,#0x24+var_24] */
  MEM32(SP + 0x4) = R6; /* 00011B0E: STR             R6, [SP,#0x24+var_20] */
  MEM32(SP + 0x8) = R6; /* 00011B10: STR             R6, [SP,#0x24+var_1C] */
  MEM32(SP + 0xc) = R6; /* 00011B12: STR             R6, [SP,#0x24+var_18] */
  R0 = SP; /* 00011B14: MOV             R0, SP */
  MEM32(SP + 0x10) = R6; /* 00011B16: STR             R6, [SP,#0x24+var_14] */
  MEM8(R0 + 0) = R7; /* 00011B18: STRB            R7, [R0,#0x24+var_24] */
  MEM8(R0 + 0x1) = R5; /* 00011B1A: STRB            R5, [R0,#0x24+var_24+1] */
  R0 = R0 + 0x2; /* 00011B1C: ADDS            R0, R0, #2 */
  R2 = MEM32(SP + 0x1c); /* 00011B1E: LDR             R2, [SP,#0x24+var_8] */
  R1 = MEM32(SP + 0x18); /* 00011B20: LDR             R1, [SP,#0x24+var_C] */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011B22: BL              sub_132CC */
  R2 = (u8)(R4); /* 00011B26: UXTB            R2, R4 */
  R1 = SP; /* 00011B28: MOV             R1, SP */
  R0 = (u32)&(g_motion_queue); /* 00011B2A: LDR             R0, =g_motion_queue */
  R0 = motion_queue_push_record(R0, R1, R2, R3); /* 00011B2C: BL              motion_queue_push_record */
loc_11B30:
  R0 = 0x1; /* 00011B30: MOVS            R0, #1 */
  SP = SP + 0x24; /* 00011B32: ADD             SP, SP, #0x24 ; '$' */
  return; /* 00011B34: POP             {R4-R7,PC} */
}

/* ===== [988/1228] queue_motion_record_if_space @ 0x00011B36 (ROM) ===== */
void queue_motion_record_if_space(void)
{
  /* frame: locals=0x0, saved_regs=0x10, args=0x0 */
  /* direct callees: motion_queue_is_full, queue_motion_payload_record */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R4, R5, R6, LR, PC;

  /* save {R4 - R6,LR} */ /* 00011B36: PUSH            {R4-R6,LR} */
  R5 = R0; /* 00011B38: MOV             R5, R0 */
  R0 = (u32)&(g_motion_queue); /* 00011B3A: LDR             R0, =g_motion_queue */
  R4 = R1; /* 00011B3C: MOV             R4, R1 */
  R2 = MEM8(R0 + 0x5); /* 00011B3E: LDRB            R2, [R0,#(unk_20004BD5 - 0x20004BD0)] */
  R1 = MEM8(R0 + 0x4); /* 00011B40: LDRB            R1, [R0,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = motion_queue_is_full(R0, R1, R2, R3); /* 00011B42: BL              motion_queue_is_full */
  /* 00011B46: CMP             R0, #0 */
  if ((R0 != 0)) goto locret_11B54; /* 00011B48: BNE             locret_11B54 */
loc_11B4A:
  R0 = R5; /* 00011B4A: MOV             R0, R5 */
  R1 = R4; /* 00011B4C: MOV             R1, R4 */
  R2 = 0x1; /* 00011B4E: MOVS            R2, #1 */
  R0 = queue_motion_payload_record(R0, R1, R2, R3); /* 00011B50: BL              queue_motion_payload_record; Builds internal motion queue records. Payload length 7 becomes a 9-byte record [0x02, subtype, payload7]; payload length 4 becomes a 6-byte record [0x02, subtype, xy4]. subtype 0x05 is used for queued/deferred motion, while subtype 0x03 is used for direct/immediate motion. */
locret_11B54:
  return; /* 00011B54: POP             {R4-R6,PC} */
}

/* ===== [989/1228] postprocess_motion_buffered_mode @ 0x00011B56 (ROM) ===== */
void postprocess_motion_buffered_mode(void)
{
  /* frame: locals=0x4, saved_regs=0x14, args=0x0 */
  /* direct callees: motion_queue_is_full, is_motion_path_busy, sub_132CC, sub_1353C, sub_12A7A, sub_13548, sub_10F7C, decode_motion_sample_flags */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R3, R4, R5, R6, R7, LR, PC;

  /* save {R3 - R7,LR} */ /* 00011B56: PUSH            {R3-R7,LR} */
  R0 = (u32)&(g_motion_queue); /* 00011B58: LDR             R0, =g_motion_queue */
  R7 = 0; /* 00011B5A: MOVS            R7, #0 */
  R2 = MEM8(R0 + 0x5); /* 00011B5C: LDRB            R2, [R0,#(unk_20004BD5 - 0x20004BD0)] */
  R1 = MEM8(R0 + 0x4); /* 00011B5E: LDRB            R1, [R0,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = motion_queue_is_full(R0, R1, R2, R3); /* 00011B60: BL              motion_queue_is_full */
  R5 = 0; /* 00011B64: MOVS            R5, #0 */
  R4 = (u32)&(g_motion_runtime_ctx); /* 00011B66: LDR             R4, =unk_20004A78 */
  /* 00011B68: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11B76; /* 00011B6A: BEQ             loc_11B76 */
loc_11B6C:
  R0 = is_motion_path_busy(R0, R1, R2, R3); /* 00011B6C: BL              is_motion_path_busy */
  /* 00011B70: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_11C26; /* 00011B72: BNE             loc_11C26 */
loc_11B74:
  goto loc_11C66; /* 00011B74: B               loc_11C66 */
loc_11B76:
  R0 = g_motion_runtime_ctx.buffered_state; /* 00011B76: LDRB            R0, [R4,#(unk_20004A7B - 0x20004A78)] */
  R6 = 0x20004ac3; /* 00011B78: LDR             R6, =0x20004AC3 */
  /* 00011B7A: CMP             R0, #1 */
  if ((R0 == 0x1)) goto loc_11B8C; /* 00011B7C: BEQ             loc_11B8C */
loc_11B7E:
  /* 00011B7E: CMP             R0, #2 */
  if ((R0 == 0x2)) goto loc_11C0E; /* 00011B80: BEQ             loc_11C0E */
loc_11B82:
  /* 00011B82: CMP             R0, #3 */
  if ((R0 == 0x3)) goto loc_11C2C; /* 00011B84: BEQ             loc_11C2C */
loc_11B86:
  /* 00011B86: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11C34; /* 00011B88: BEQ             loc_11C34 */
loc_11B8A:
  goto loc_11C66; /* 00011B8A: B               loc_11C66 */
loc_11B8C:
  R0 = MEM8(R4 + 0x4); /* 00011B8C: LDRB            R0, [R4,#(unk_20004A7C - 0x20004A78)] */
  R7 = 0x9; /* 00011B8E: MOVS            R7, #9 */
  /* 00011B90: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11BCC; /* 00011B92: BEQ             loc_11BCC; Stash bytes 1..4 from the 7-byte sample. This strongly suggests a packed XY delta payload. */
loc_11B94:
  R2 = 0x7; /* 00011B94: MOVS            R2, #7 */
  R1 = (u32)&(g_motion_sample); /* 00011B96: LDR             R1, =g_motion_sample */
  R0 = R6 + 0x2; /* 00011B98: ADDS            R0, R6, #2 */
  g_motion_runtime_ctx.tick_accum_24 = R5; /* 00011B9A: STR             R5, [R4,#(unk_20004A9C - 0x20004A78)] */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011B9C: BL              sub_132CC */
  R0 = sub_1353C(R0, R1, R2, R3); /* 00011BA0: BL              sub_1353C */
  /* 00011BA4: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11BBA; /* 00011BA6: BEQ             loc_11BBA */
loc_11BA8:
  R1 = 0x9; /* 00011BA8: MOVS            R1, #9 */
  R0 = 0x20004ac3; /* 00011BAA: LDR             R0, =0x20004AC3 */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00011BAC: BL              sub_12A7A */
  R0 = 0x1; /* 00011BB0: MOVS            R0, #1 */
  R0 = sub_13548(R0, R1, R2, R3); /* 00011BB2: BL              sub_13548 */
  MEM8(R4 + 0x4) = R5; /* 00011BB6: STRB            R5, [R4,#(unk_20004A7C - 0x20004A78)] */
  goto loc_11BFA; /* 00011BB8: B               loc_11BFA */
loc_11BBA:
  R2 = 0x9; /* 00011BBA: MOVS            R2, #9 */
  R1 = 0x20004ac3; /* 00011BBC: LDR             R1, =0x20004AC3 */
  R0 = 0x200056c0; /* 00011BBE: LDR             R0, =0x200056C0 */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011BC0: BL              sub_132CC */
  MEM8(R4 + 0x5) = R7; /* 00011BC4: STRB            R7, [R4,#(unk_20004A7D - 0x20004A78)] */
  R0 = 0x2; /* 00011BC6: MOVS            R0, #2 */
  g_motion_runtime_ctx.buffered_state = R0; /* 00011BC8: STRB            R0, [R4,#(unk_20004A7B - 0x20004A78)] */
  goto loc_11C0A; /* 00011BCA: B               loc_11C0A */
loc_11BCC:
  R6 = (u32)&(g_motion_sample); /* 00011BCC: LDR             R6, =g_motion_sample; Stash bytes 1..4 from the 7-byte sample. This strongly suggests a packed XY delta payload. */
  R0 = R6 + 0x1; /* 00011BCE: ADDS            R0, R6, #1 */
  R0 = sub_10F7C(R0, R1, R2, R3); /* 00011BD0: BL              sub_10F7C */
  R1 = R6 + 0x1; /* 00011BD4: ADDS            R1, R6, #1 */
  R2 = 0x4; /* 00011BD6: MOVS            R2, #4 */
  R0 = 0x20004abf; /* 00011BD8: LDR             R0, =0x20004ABF */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011BDA: BL              sub_132CC */
  R0 = 0x2; /* 00011BDE: MOVS            R0, #2 */
  g_motion_runtime_ctx.tick_accum_24 = R5; /* 00011BE0: STR             R5, [R4,#(unk_20004A9C - 0x20004A78)] */
  g_motion_runtime_ctx.buffered_state = R0; /* 00011BE2: STRB            R0, [R4,#(unk_20004A7B - 0x20004A78)] */
  R0 = sub_1353C(R0, R1, R2, R3); /* 00011BE4: BL              sub_1353C */
  /* 00011BE8: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11BFE; /* 00011BEA: BEQ             loc_11BFE */
loc_11BEC:
  R1 = 0x9; /* 00011BEC: MOVS            R1, #9 */
  R0 = 0x20004aba; /* 00011BEE: LDR             R0, =0x20004ABA */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00011BF0: BL              sub_12A7A */
  R0 = 0x1; /* 00011BF4: MOVS            R0, #1 */
  R0 = sub_13548(R0, R1, R2, R3); /* 00011BF6: BL              sub_13548 */
loc_11BFA:
  g_motion_runtime_ctx.buffered_state = R5; /* 00011BFA: STRB            R5, [R4,#(unk_20004A7B - 0x20004A78)] */
  goto loc_11C0A; /* 00011BFC: B               loc_11C0A */
loc_11BFE:
  R2 = 0x9; /* 00011BFE: MOVS            R2, #9 */
  R1 = 0x20004aba; /* 00011C00: LDR             R1, =0x20004ABA */
  R0 = 0x200056c0; /* 00011C02: LDR             R0, =0x200056C0 */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011C04: BL              sub_132CC */
  MEM8(R4 + 0x5) = R7; /* 00011C08: STRB            R7, [R4,#(unk_20004A7D - 0x20004A78)] */
loc_11C0A:
  R7 = 0x1; /* 00011C0A: MOVS            R7, #1 */
  goto loc_11C66; /* 00011C0C: B               loc_11C66 */
loc_11C0E:
  R0 = sub_1353C(R0, R1, R2, R3); /* 00011C0E: BL              sub_1353C */
  /* 00011C12: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11C26; /* 00011C14: BEQ             loc_11C26 */
loc_11C16:
  R1 = MEM8(R4 + 0x5); /* 00011C16: LDRB            R1, [R4,#(unk_20004A7D - 0x20004A78)] */
  R0 = 0x200056c0; /* 00011C18: LDR             R0, =0x200056C0 */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00011C1A: BL              sub_12A7A */
  R0 = 0x1; /* 00011C1E: MOVS            R0, #1 */
  R0 = sub_13548(R0, R1, R2, R3); /* 00011C20: BL              sub_13548 */
  g_motion_runtime_ctx.buffered_state = R5; /* 00011C24: STRB            R5, [R4,#(unk_20004A7B - 0x20004A78)] */
loc_11C26:
  R7 = 0x1; /* 00011C26: MOVS            R7, #1 */
  g_motion_runtime_ctx.tick_accum_24 = R5; /* 00011C28: STR             R5, [R4,#(unk_20004A9C - 0x20004A78)] */
  goto loc_11C66; /* 00011C2A: B               loc_11C66 */
loc_11C2C:
  g_motion_runtime_ctx.buffered_state = R5; /* 00011C2C: STRB            R5, [R4,#(unk_20004A7B - 0x20004A78)] */
  R7 = 0x1; /* 00011C2E: MOVS            R7, #1 */
  g_motion_runtime_ctx.tick_accum_24 = R5; /* 00011C30: STR             R5, [R4,#(unk_20004A9C - 0x20004A78)] */
  goto loc_11C66; /* 00011C32: B               loc_11C66 */
loc_11C34:
  R0 = sub_1353C(R0, R1, R2, R3); /* 00011C34: BL              sub_1353C */
  /* 00011C38: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11C66; /* 00011C3A: BEQ             loc_11C66 */
loc_11C3C:
  R2 = 0; /* 00011C3C: MOVS            R2, #0 */
  R1 = 0x7; /* 00011C3E: MOVS            R1, #7 */
  R0 = (u32)&(g_motion_sample); /* 00011C40: LDR             R0, =g_motion_sample */
  R0 = decode_motion_sample_flags(R0, R1, R2, R3); /* 00011C42: BL              decode_motion_sample_flags; Consumes a 7-byte motion sample, compares it against cached per-field state, and emits a compact change mask plus two status bytes. Bytes 1..4 are treated as a 4-byte motion payload and are special-cased by the post-processor. */
  /* 00011C46: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11C66; /* 00011C48: BEQ             loc_11C66 */
loc_11C4A:
  R2 = 0x7; /* 00011C4A: MOVS            R2, #7 */
  R1 = (u32)&(g_motion_sample); /* 00011C4C: LDR             R1, =g_motion_sample */
  R0 = R6 + 0x2; /* 00011C4E: ADDS            R0, R6, #2 */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00011C50: BL              sub_132CC */
  R1 = 0x9; /* 00011C54: MOVS            R1, #9 */
  R0 = 0x20004ac3; /* 00011C56: LDR             R0, =0x20004AC3 */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00011C58: BL              sub_12A7A */
  R0 = 0x1; /* 00011C5C: MOVS            R0, #1 */
  R0 = sub_13548(R0, R1, R2, R3); /* 00011C5E: BL              sub_13548 */
  R7 = 0x1; /* 00011C62: MOVS            R7, #1 */
  g_motion_runtime_ctx.tick_accum_24 = R5; /* 00011C64: STR             R5, [R4,#(unk_20004A9C - 0x20004A78)] */
loc_11C66:
  R0 = (u32)&(g_motion_sample); /* 00011C66: LDR             R0, =g_motion_sample */
  R0 = MEM8(R0); /* 00011C68: LDRB            R0, [R0] */
  /* 00011C6A: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11C70; /* 00011C6C: BEQ             loc_11C70 */
loc_11C6E:
  g_motion_runtime_ctx.tick_accum_24 = R5; /* 00011C6E: STR             R5, [R4,#(unk_20004A9C - 0x20004A78)] */
loc_11C70:
  R0 = R7; /* 00011C70: MOV             R0, R7 */
  return; /* 00011C72: POP             {R3-R7,PC} */
}

/* ===== [990/1228] postprocess_motion_direct_mode @ 0x00011C74 (ROM) ===== */
void postprocess_motion_direct_mode(void)
{
  /* frame: locals=0x4, saved_regs=0x14, args=0x0 */
  /* direct callees: motion_queue_is_full, is_motion_path_busy, sub_1353C, pack_queued_motion_history, decode_motion_sample_flags, queue_motion_payload_record, sub_10FD4, sub_133BC */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R3, R4, R5, R6, R7, SP, LR, PC;

  /* save {R3 - R7,LR} */ /* 00011C74: PUSH            {R3-R7,LR} */
  R0 = (u32)&(g_motion_queue); /* 00011C76: LDR             R0, =g_motion_queue */
  R6 = 0; /* 00011C78: MOVS            R6, #0 */
  R2 = MEM8(R0 + 0x5); /* 00011C7A: LDRB            R2, [R0,#(unk_20004BD5 - 0x20004BD0)] */
/* <<< end original lines 40991-41336 */

/* >>> original lines 41431-41550 */
  return; /* 00011D28: POP             {R3-R7,PC} */
}

/* ===== [991/1228] motion_postprocess_dispatch @ 0x00011D2A (ROM) ===== */
void motion_postprocess_dispatch(void)
{
  /* frame: locals=0x4, saved_regs=0x14, args=0x0 */
  /* direct callees: sub_13554, sub_13560, decode_motion_sample_flags, sub_1353C, sub_100A0, postprocess_motion_direct_mode, postprocess_motion_buffered_mode, sub_10FD4 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R3, R4, R5, R6, R7, SP, LR, PC;

  /* save {R3 - R7,LR} */ /* 00011D2A: PUSH            {R3-R7,LR} */
  R7 = R1; /* 00011D2C: MOV             R7, R1 */
  R6 = R0; /* 00011D2E: MOV             R6, R0 */
  R4 = 0; /* 00011D30: MOVS            R4, #0 */
  MEM32(SP + 0) = R0; /* 00011D32: STR             R0, [SP,#4+var_4] */
  R0 = sub_13554(R0, R1, R2, R3); /* 00011D34: BL              sub_13554 */
  /* 00011D38: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11D40; /* 00011D3A: BEQ             loc_11D40 */
loc_11D3C:
  R0 = sub_13560(R0, R1, R2, R3); /* 00011D3C: BL              sub_13560 */
loc_11D40:
  R1 = (u32)&(unk_20004929); /* 00011D40: LDR             R1, =unk_20004929 */
  R0 = R6; /* 00011D42: MOV             R0, R6 */
  R1 = MEM8(R1); /* 00011D44: LDRB            R1, [R1] */
  R6 = 0; /* 00011D46: MOVS            R6, #0 */
  R0 = R0 | R1; /* 00011D48: ORRS            R0, R1 */
  R5 = (u32)&(g_motion_runtime_ctx); /* 00011D4A: LDR             R5, =unk_20004A78 */
  /* 00011D4C: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11D64; /* 00011D4E: BEQ             loc_11D64 */
loc_11D50:
  R1 = 0x7; /* 00011D50: MOVS            R1, #7 */
  R0 = (u32)&(g_motion_sample); /* 00011D52: LDR             R0, =g_motion_sample */
  R2 = MEM32(SP + 0); /* 00011D54: LDR             R2, [SP,#4+var_4] */
  R0 = decode_motion_sample_flags(R0, R1, R2, R3); /* 00011D56: BL              decode_motion_sample_flags; Consumes a 7-byte motion sample, compares it against cached per-field state, and emits a compact change mask plus two status bytes. Bytes 1..4 are treated as a 4-byte motion payload and are special-cased by the post-processor. */
  /* 00011D5A: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11DB0; /* 00011D5C: BEQ             loc_11DB0 */
loc_11D5E:
  R4 = 0x1; /* 00011D5E: MOVS            R4, #1 */
  g_motion_runtime_ctx.tick_accum_24 = R6; /* 00011D60: STR             R6, [R5,#(unk_20004A9C - 0x20004A78)] */
  goto loc_11DB0; /* 00011D62: B               loc_11DB0 */
loc_11D64:
  /* 00011D64: CMP             R7, #0 */
  if ((R7 == 0)) goto loc_11D8E; /* 00011D66: BEQ             loc_11D8E */
loc_11D68:
  R0 = (u32)&(g_track_trail_mode); /* 00011D68: LDR             R0, =g_track_trail_mode; trackTrail == 1 forces the more conservative early-exit behavior in this path. */
  R0 = MEM8(R0); /* 00011D6A: LDRB            R0, [R0] */
  /* 00011D6C: CMP             R0, #1 */
  if ((R0 != 0x1)) goto loc_11D78; /* 00011D6E: BNE             loc_11D78 */
loc_11D70:
  R0 = sub_1353C(R0, R1, R2, R3); /* 00011D70: BL              sub_1353C */
  /* 00011D74: CMP             R0, #0 */
  if ((R0 == 0)) goto locret_11DB2; /* 00011D76: BEQ             locret_11DB2 */
loc_11D78:
  R0 = sub_100A0(R0, R1, R2, R3); /* 00011D78: BL              sub_100A0 */
  /* 00011D7C: CMP             R0, #4; Profile index 4 selects the buffered/stabilized algorithm; all other indices select the more direct algorithm. */
  if ((R0 == 0x4)) goto loc_11D88; /* 00011D7E: BEQ             loc_11D88 */
loc_11D80:
  R0 = postprocess_motion_direct_mode(R0, R1, R2, R3); /* 00011D80: BL              postprocess_motion_direct_mode; Direct motion post-processor. Full sample is required when decode return bit0 is set or sample[0] != 0. Otherwise it queues the raw 4-byte XY payload unchanged as a len-6 record [0x02,0x03,xy4]. */
loc_11D84:
  R4 = R0; /* 00011D84: MOV             R4, R0 */
  goto loc_11DB0; /* 00011D86: B               loc_11DB0 */
loc_11D88:
  R0 = postprocess_motion_buffered_mode(R0, R1, R2, R3); /* 00011D88: BL              postprocess_motion_buffered_mode; Buffered/stabilized motion post-processor. Uses state byte 0x20004A7B and staging buffers 0x20004ABA / 0x20004AC3 / 0x200056C0. XY-only staged packet is [1E,01,0E,02,0A,xy4]; full staged packet is [00,00,sample7]. */
  goto loc_11D84; /* 00011D8C: B               loc_11D84 */
loc_11D8E:
  R0 = sub_10FD4(R0, R1, R2, R3); /* 00011D8E: BL              sub_10FD4 */
  R1 = MEM32(R5 + 0x20); /* 00011D92: LDR             R1, [R5,#(unk_20004A98 - 0x20004A78)] */
  R0 = R0 + R1; /* 00011D94: ADDS            R0, R0, R1 */
  R1 = 0x3e80; /* 00011D96: MOVS            R1, #0x3E80 */
  MEM32(R5 + 0x20) = R0; /* 00011D9A: STR             R0, [R5,#(unk_20004A98 - 0x20004A78)] */
  /* 00011D9C: CMP             R0, R1 */
  if ((((u32)R0) < ((u32)R1))) goto loc_11DB0; /* 00011D9E: BCC             loc_11DB0 */
loc_11DA0:
  R0 = sub_100A0(R0, R1, R2, R3); /* 00011DA0: BL              sub_100A0 */
  /* 00011DA4: CMP             R0, #4 */
  if ((R0 == 0x4)) goto loc_11DB4; /* 00011DA6: BEQ             loc_11DB4 */
loc_11DA8:
  R0 = postprocess_motion_direct_mode(R0, R1, R2, R3); /* 00011DA8: BL              postprocess_motion_direct_mode; Direct motion post-processor. Full sample is required when decode return bit0 is set or sample[0] != 0. Otherwise it queues the raw 4-byte XY payload unchanged as a len-6 record [0x02,0x03,xy4]. */
loc_11DAC:
  R4 = R0; /* 00011DAC: MOV             R4, R0 */
  MEM32(R5 + 0x20) = R6; /* 00011DAE: STR             R6, [R5,#(unk_20004A98 - 0x20004A78)] */
loc_11DB0:
  R0 = R4; /* 00011DB0: MOV             R0, R4 */
locret_11DB2:
  return; /* 00011DB2: POP             {R3-R7,PC} */
loc_11DB4:
  R0 = postprocess_motion_buffered_mode(R0, R1, R2, R3); /* 00011DB4: BL              postprocess_motion_buffered_mode; Buffered/stabilized motion post-processor. Uses state byte 0x20004A7B and staging buffers 0x20004ABA / 0x20004AC3 / 0x200056C0. XY-only staged packet is [1E,01,0E,02,0A,xy4]; full staged packet is [00,00,sample7]. */
  goto loc_11DAC; /* 00011DB8: B               loc_11DAC */
}

/* ===== [992/1228] prime_buffered_motion_state @ 0x00011DBA (ROM) ===== */
void prime_buffered_motion_state(void)
{
  /* frame: locals=0x0, saved_regs=0x10, args=0x0 */
  /* direct callees: decode_motion_sample_flags, sub_1353C, sub_132CC, sub_12A7A, sub_13548 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R4, R5, R6, LR, PC;

  /* save {R4 - R6,LR} */ /* 00011DBA: PUSH            {R4-R6,LR} */
  R4 = (u32)&(g_motion_runtime_ctx); /* 00011DBC: LDR             R4, =unk_20004A78 */
  R0 = g_motion_runtime_ctx.buffered_state; /* 00011DBE: LDRB            R0, [R4,#(unk_20004A7B - 0x20004A78)] */
  /* 00011DC0: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_11E12; /* 00011DC2: BNE             loc_11E12 */
loc_11DC4:
  R2 = 0; /* 00011DC4: MOVS            R2, #0 */
  R1 = 0x7; /* 00011DC6: MOVS            R1, #7 */
  R0 = (u32)&(g_motion_sample); /* 00011DC8: LDR             R0, =g_motion_sample */
  R0 = decode_motion_sample_flags(R0, R1, R2, R3); /* 00011DCA: BL              decode_motion_sample_flags; Consumes a 7-byte motion sample, compares it against cached per-field state, and emits a compact change mask plus two status bytes. Bytes 1..4 are treated as a 4-byte motion payload and are special-cased by the post-processor. */
  /* 00011DCE: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11E12; /* 00011DD0: BEQ             loc_11E12 */
loc_11DD2:
  R5 = 0x1; /* 00011DD2: MOVS            R5, #1 */
  g_motion_runtime_ctx.buffered_state = R5; /* 00011DD4: STRB            R5, [R4,#(unk_20004A7B - 0x20004A78)] */
  R0 = R0 << 0x1f; /* 00011DD6: LSLS            R0, R0, #0x1F; Test decode return bit0. Nonzero means this sample must remain in full 7-byte form. */
  if ((R0 == 0)) goto loc_11E00; /* 00011DD8: BEQ             loc_11E00; Pure XY-only path: copy sample[1..4] unchanged into 0x20004ABA+5. */
loc_11DDA:
  R0 = sub_1353C(R0, R1, R2, R3); /* 00011DDA: BL              sub_1353C */
  /* 00011DDE: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_11E10; /* 00011DE0: BEQ             loc_11E10 */
/* <<< end original lines 41431-41550 */

/* >>> original lines 42151-42340 */
}

/* ===== [999/1228] can_delay_xy_history_record @ 0x00012414 (ROM) ===== */
void can_delay_xy_history_record(void)
{
  /* frame: locals=0x0, saved_regs=0x0, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, LR;

  R1 = (u32)&(g_motion_runtime_ctx); /* 00012414: LDR             R1, =unk_20004A78 */
  R0 = 0x2; /* 00012416: MOVS            R0, #2 */
  R1 = MEM32(R1 + 0x10); /* 00012418: LDR             R1, [R1,#(unk_20004A88 - 0x20004A78)] */
  R0 = R0 & ~(R1); /* 0001241A: BICS            R0, R1 */
  if ((R0 == 0)) goto loc_12422; /* 0001241C: BEQ             loc_12422 */
loc_1241E:
  R0 = 0; /* 0001241E: MOVS            R0, #0 */
  return; /* 00012420: BX              LR */
loc_12422:
  R0 = 0x1; /* 00012422: MOVS            R0, #1 */
  return; /* 00012424: BX              LR */
}

/* ===== [1000/1228] queue_motion_history_tail @ 0x00012426 (ROM) ===== */
void queue_motion_history_tail(void)
{
  /* frame: locals=0x18, saved_regs=0x8, args=0x0 */
  /* direct callees: sub_1353C, sub_13704, sub_132CC, motion_queue_push_record */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R4, SP, LR, PC;

  /* save {R4,LR} */ /* 00012426: PUSH            {R4,LR} */
  SP = SP - 0x18; /* 00012428: SUB             SP, SP, #0x18 */
  R4 = R0; /* 0001242A: MOV             R4, R0 */
  R0 = sub_1353C(R0, R1, R2, R3); /* 0001242C: BL              sub_1353C */
  /* 00012430: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_12468; /* 00012432: BEQ             loc_12468 */
loc_12434:
  R2 = 0xff; /* 00012434: MOVS            R2, #0xFF */
  R1 = 0x10; /* 00012436: MOVS            R1, #0x10 */
  R0 = 0x200056c9; /* 00012438: LDR             R0, =0x200056C9 */
  R0 = sub_13704(R0, R1, R2, R3); /* 0001243A: BL              sub_13704 */
  R2 = 0; /* 0001243E: MOVS            R2, #0 */
  MEM32(SP + 0) = R2; /* 00012440: STR             R2, [SP,#0x18+var_18] */
  MEM32(SP + 0x4) = R2; /* 00012442: STR             R2, [SP,#0x18+var_14] */
  MEM32(SP + 0x8) = R2; /* 00012444: STR             R2, [SP,#0x18+var_10] */
  MEM32(SP + 0xc) = R2; /* 00012446: STR             R2, [SP,#0x18+var_C] */
  MEM32(SP + 0x10) = R2; /* 00012448: STR             R2, [SP,#0x18+var_8] */
  R0 = 0x3; /* 0001244A: MOVS            R0, #3; Build a type-3 record from motion history tail bytes and push it into the motion queue. */
  R2 = SP; /* 0001244C: MOV             R2, SP */
  MEM8(R2 + 0) = R0; /* 0001244E: STRB            R0, [R2,#0x18+var_18] */
  R0 = SP + 0; /* 00012450: ADD             R0, SP, #0x18+var_18 */
  R1 = 0x200056c9; /* 00012452: LDR             R1, =0x200056C9 */
  R2 = R4; /* 00012454: MOV             R2, R4 */
  R0 = R0 + 0x1; /* 00012456: ADDS            R0, #1 */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00012458: BL              sub_132CC */
  R4 = R4 + 0x1; /* 0001245C: ADDS            R4, R4, #1 */
  R2 = (u8)(R4); /* 0001245E: UXTB            R2, R4 */
  R1 = SP; /* 00012460: MOV             R1, SP */
  R0 = (u32)&(g_motion_queue); /* 00012462: LDR             R0, =g_motion_queue */
  R0 = motion_queue_push_record(R0, R1, R2, R3); /* 00012464: BL              motion_queue_push_record */
loc_12468:
  SP = SP + 0x18; /* 00012468: ADD             SP, SP, #0x18 */
  return; /* 0001246A: POP             {R4,PC} */
}

/* ===== [1001/1228] pack_queued_motion_history @ 0x0001246C (ROM) ===== */
void pack_queued_motion_history(void)
{
  /* frame: locals=0x14, saved_regs=0x14, args=0x0 */
  /* direct callees: motion_queue_is_empty, motion_queue_peek_record, sub_12A7A, motion_queue_pop_record, sub_132CC */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R4, R5, R6, R7, SP, LR, PC;

  /* save {R4 - R7,LR} */ /* 0001246C: PUSH            {R4-R7,LR} */
  R5 = (u32)&(g_motion_queue); /* 0001246E: LDR             R5, =g_motion_queue */
  R7 = 0x20004acc; /* 00012470: LDR             R7, =0x20004ACC */
  R4 = (u32)&(g_motion_runtime_ctx); /* 00012472: LDR             R4, =unk_20004A78 */
  SP = SP - 0x14; /* 00012474: SUB             SP, SP, #0x14 */
  R6 = 0x1; /* 00012476: MOVS            R6, #1 */
loc_12478:
  R1 = MEM8(R5 + 0x5); /* 00012478: LDRB            R1, [R5,#(unk_20004BD5 - 0x20004BD0)] */
  R0 = MEM8(R5 + 0x4); /* 0001247A: LDRB            R0, [R5,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = motion_queue_is_empty(R0, R1, R2, R3); /* 0001247C: BL              motion_queue_is_empty */
  /* 00012480: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_124CE; /* 00012482: BNE             loc_124CE */
loc_12484:
  R1 = SP; /* 00012484: MOV             R1, SP */
  R0 = (u32)&(g_motion_queue); /* 00012486: LDR             R0, =g_motion_queue */
  R0 = motion_queue_peek_record(R0, R1, R2, R3); /* 00012488: BL              motion_queue_peek_record */
  R1 = SP; /* 0001248C: MOV             R1, SP */
  R1 = MEM8(R1 + 0); /* 0001248E: LDRB            R1, [R1,#0x14+var_14] */
  /* 00012490: CMP             R1, #2 */
  if ((R1 != 0x2)) goto loc_124CE; /* 00012492: BNE             loc_124CE */
loc_12494:
  R1 = SP; /* 00012494: MOV             R1, SP */
  R1 = MEM8(R1 + 0x1); /* 00012496: LDRB            R1, [R1,#0x14+var_13] */
  /* 00012498: CMP             R1, #5 */
  if ((R1 != 0x5)) goto loc_124CE; /* 0001249A: BNE             loc_124CE */
loc_1249C:
  /* 0001249C: CMP             R0, #9; Queued motion records use lengths 9 (full sample) or 6 (XY-only sample). */
  if ((R0 == 0x9)) goto loc_124A6; /* 0001249E: BEQ             loc_124A6; If the next queued record is full-length and the aggregate is already half-full, flush the pending half by appending tail XY bytes from 0x20004A90..93. */
loc_124A0:
  /* 000124A0: CMP             R0, #6 */
  if ((R0 == 0x6)) goto loc_124E8; /* 000124A2: BEQ             loc_124E8 */
loc_124A4:
  goto loc_124CE; /* 000124A4: B               loc_124CE */
loc_124A6:
  R1 = MEM8(R4 + 0x6); /* 000124A6: LDRB            R1, [R4,#(unk_20004A7E - 0x20004A78)]; If the next queued record is full-length and the aggregate is already half-full, flush the pending half by appending tail XY bytes from 0x20004A90..93. */
  /* 000124A8: CMP             R1, #1 */
  if ((R1 == 0x1)) goto loc_124C0; /* 000124AA: BEQ             loc_124C0 */
loc_124AC:
  R0 = R7 + R1; /* 000124AC: ADDS            R0, R7, R1 */
  R1 = MEM8(R4 + 0x18); /* 000124AE: LDRB            R1, [R4,#(unk_20004A90 - 0x20004A78)] */
  MEM8(R0) = R1; /* 000124B0: STRB            R1, [R0] */
  R1 = MEM8(R4 + 0x19); /* 000124B2: LDRB            R1, [R4,#(unk_20004A91 - 0x20004A78)] */
  MEM8(R0 + 0x1) = R1; /* 000124B4: STRB            R1, [R0,#1] */
  R1 = MEM8(R4 + 0x1a); /* 000124B6: LDRB            R1, [R4,#(unk_20004A92 - 0x20004A78)] */
  MEM8(R0 + 0x2) = R1; /* 000124B8: STRB            R1, [R0,#2] */
  R1 = MEM8(R4 + 0x1b); /* 000124BA: LDRB            R1, [R4,#(unk_20004A93 - 0x20004A78)] */
  MEM8(R0 + 0x3) = R1; /* 000124BC: STRB            R1, [R0,#3] */
  goto loc_12508; /* 000124BE: B               loc_12508 */
loc_124C0:
  R1 = R0; /* 000124C0: MOV             R1, R0 */
  R0 = SP; /* 000124C2: MOV             R0, SP */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 000124C4: BL              sub_12A7A */
  R0 = (u32)&(g_motion_queue); /* 000124C8: LDR             R0, =g_motion_queue */
  R0 = motion_queue_pop_record(R0, R1, R2, R3); /* 000124CA: BL              motion_queue_pop_record */
loc_124CE:
  R0 = MEM8(R4 + 0x6); /* 000124CE: LDRB            R0, [R4,#(unk_20004A7E - 0x20004A78)] */
  /* 000124D0: CMP             R0, #1 */
  if ((R0 == 0x1)) goto loc_12512; /* 000124D2: BEQ             loc_12512 */
loc_124D4:
  R0 = R7 + R0; /* 000124D4: ADDS            R0, R7, R0 */
  R1 = MEM8(R4 + 0x18); /* 000124D6: LDRB            R1, [R4,#(unk_20004A90 - 0x20004A78)] */
  MEM8(R0) = R1; /* 000124D8: STRB            R1, [R0] */
  R1 = MEM8(R4 + 0x19); /* 000124DA: LDRB            R1, [R4,#(unk_20004A91 - 0x20004A78)] */
  MEM8(R0 + 0x1) = R1; /* 000124DC: STRB            R1, [R0,#1] */
  R1 = MEM8(R4 + 0x1a); /* 000124DE: LDRB            R1, [R4,#(unk_20004A92 - 0x20004A78)] */
  MEM8(R0 + 0x2) = R1; /* 000124E0: STRB            R1, [R0,#2] */
  R1 = MEM8(R4 + 0x1b); /* 000124E2: LDRB            R1, [R4,#(unk_20004A93 - 0x20004A78)] */
  MEM8(R0 + 0x3) = R1; /* 000124E4: STRB            R1, [R0,#3] */
  goto loc_12508; /* 000124E6: B               loc_12508 */
loc_124E8:
  R0 = (u32)&(g_motion_queue); /* 000124E8: LDR             R0, =g_motion_queue */
  R0 = motion_queue_pop_record(R0, R1, R2, R3); /* 000124EA: BL              motion_queue_pop_record */
  R0 = MEM8(R4 + 0x6); /* 000124EE: LDRB            R0, [R4,#(unk_20004A7E - 0x20004A78)]; Pop one queued len-6 record and append its record[2..5] XY bytes into 0x20004ACC at offset cursor=0x20004A7E. */
  R1 = SP + 0; /* 000124F0: ADD             R1, SP, #0x14+var_14; Append the 4-byte XY payload from a queued len-6 record into the 9-byte aggregate at 0x20004ACC. */
  R0 = R7 + R0; /* 000124F2: ADDS            R0, R7, R0 */
  R2 = 0x4; /* 000124F4: MOVS            R2, #4 */
  R1 = R1 + 0x2; /* 000124F6: ADDS            R1, #2 */
  R0 = sub_132CC(R0, R1, R2, R3); /* 000124F8: BL              sub_132CC */
  R0 = MEM8(R4 + 0x6); /* 000124FC: LDRB            R0, [R4,#(unk_20004A7E - 0x20004A78)] */
  R0 = R0 + 0x4; /* 000124FE: ADDS            R0, R0, #4 */
  R0 = (u8)(R0); /* 00012500: UXTB            R0, R0 */
  MEM8(R4 + 0x6) = R0; /* 00012502: STRB            R0, [R4,#(unk_20004A7E - 0x20004A78)] */
  /* 00012504: CMP             R0, #9; Cursor reaches 9 after two XY-only payloads; emit the 9-byte aggregate packet. */
  if ((R0 != 0x9)) goto loc_12478; /* 00012506: BNE             loc_12478 */
loc_12508:
  R1 = 0x9; /* 00012508: MOVS            R1, #9 */
  R0 = 0x20004acc; /* 0001250A: LDR             R0, =0x20004ACC */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 0001250C: BL              sub_12A7A */
  MEM8(R4 + 0x6) = R6; /* 00012510: STRB            R6, [R4,#(unk_20004A7E - 0x20004A78)] */
loc_12512:
  SP = SP + 0x14; /* 00012512: ADD             SP, SP, #0x14 */
  return; /* 00012514: POP             {R4-R7,PC} */
}

/* ===== [1002/1228] sub_12558 @ 0x00012558 (ROM) ===== */
void sub_12558(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* direct callees: sub_FE9C, sub_13710 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R4, LR, PC;

  /* save {R4,LR} */ /* 00012558: PUSH            {R4,LR} */
  R4 = (u32)&(unk_20004B0C); /* 0001255A: LDR             R4, =unk_20004B0C */
  R1 = MEM8(R4 + 0x3); /* 0001255C: LDRB            R1, [R4,#(byte_20004B0F - 0x20004B0C)] */
  /* 0001255E: CMP             R1, R0 */
  if ((R1 == R0)) goto locret_1257A; /* 00012560: BEQ             locret_1257A */
loc_12562:
  MEM8(R4 + 0x3) = R0; /* 00012562: STRB            R0, [R4,#(byte_20004B0F - 0x20004B0C)] */
  R0 = 0x1; /* 00012564: MOVS            R0, #1 */
  R0 = sub_FE9C(R0, R1, R2, R3); /* 00012566: BL              sub_FE9C */
  R0 = MEM8(R4 + 0x3); /* 0001256A: LDRB            R0, [R4,#(byte_20004B0F - 0x20004B0C)] */
  /* 0001256C: CMP             R0, #2 */
  if ((R0 == 0x2)) goto loc_1257C; /* 0001256E: BEQ             loc_1257C */
loc_12570:
  /* 00012570: CMP             R0, #3 */
  if ((R0 == 0x3)) goto loc_1257C; /* 00012572: BEQ             loc_1257C */
/* <<< end original lines 42151-42340 */

/* >>> original lines 43456-43675 */
  R0 = ((u32 (*)(u32, u32, u32, u32))(0xfe78))(R0, R1, R2, R3); /* 00012D50: BL              dword_FE78 */
  return; /* 00012D54: POP             {R4,PC} */
}

/* ===== [1020/1228] drain_motion_output_queue @ 0x00012D56 (ROM) ===== */
void drain_motion_output_queue(void)
{
  /* frame: locals=0x24, saved_regs=0x14, args=0x0 */
  /* direct callees: sub_13584, sub_132A8, sub_13890, sub_1389C, sub_138A8, sub_138B4, sub_12A7A, sub_138C0, motion_queue_is_empty, motion_queue_peek_record, ... */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R4, R5, R6, R7, SP, LR, PC;

  /* save {R4 - R7,LR} */ /* 00012D56: PUSH            {R4-R7,LR} */
  SP = SP - 0x24; /* 00012D58: SUB             SP, SP, #0x24 */
  R0 = sub_13584(R0, R1, R2, R3); /* 00012D5A: BL              sub_13584 */
  R0 = sub_132A8(R0, R1, R2, R3); /* 00012D5E: BL              sub_132A8 */
  R0 = sub_13890(R0, R1, R2, R3); /* 00012D62: BL              sub_13890 */
  R4 = (u32)&(unk_20004BC4); /* 00012D66: LDR             R4, =unk_20004BC4 */
  /* 00012D68: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_12E44; /* 00012D6A: BNE             loc_12E44 */
loc_12D6C:
  R0 = 0x12; /* 00012D6C: MOVS            R0, #0x12 */
  R0 = sub_1389C(R0, R1, R2, R3); /* 00012D6E: BL              sub_1389C */
  MEM8(R4 + 0x1) = R0; /* 00012D72: STRB            R0, [R4,#(unk_20004BC5 - 0x20004BC4)] */
  /* 00012D74: CMP             R0, #0x12 */
  if ((((u32)R0) >= ((u32)0x12))) goto loc_12D8E; /* 00012D76: BCS             loc_12D8E */
loc_12D78:
  R1 = SP; /* 00012D78: MOV             R1, SP */
  R0 = (u32)&(unk_20005756); /* 00012D7A: LDR             R0, =unk_20005756; Copies burst bytes 2..5 only, which strongly matches little-endian X/Y deltas from a motion-burst register. */
  R0 = sub_138A8(R0, R1, R2, R3); /* 00012D7C: BL              sub_138A8 */
  R0 = sub_138B4(R0, R1, R2, R3); /* 00012D80: BL              sub_138B4 */
  R0 = SP; /* 00012D84: MOV             R0, SP */
  R1 = MEM8(R0 + 0); /* 00012D86: LDRB            R1, [R0,#0x24+var_24] */
  R0 = (u32)&(unk_20005756); /* 00012D88: LDR             R0, =unk_20005756; Copies burst bytes 2..5 only, which strongly matches little-endian X/Y deltas from a motion-burst register. */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00012D8A: BL              sub_12A7A */
loc_12D8E:
  R5 = (u32)&(g_motion_queue); /* 00012D8E: LDR             R5, =g_motion_queue */
  R7 = 0x20004bd8; /* 00012D90: LDR             R7, =0x20004BD8 */
loc_12D92:
  R0 = sub_13890(R0, R1, R2, R3); /* 00012D92: BL              sub_13890 */
  /* 00012D96: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_12E44; /* 00012D98: BNE             loc_12E44 */
loc_12D9A:
  R0 = sub_138C0(R0, R1, R2, R3); /* 00012D9A: BL              sub_138C0 */
  R1 = MEM8(R5 + 0x5); /* 00012D9E: LDRB            R1, [R5,#(unk_20004BD5 - 0x20004BD0)] */
  R0 = MEM8(R5 + 0x4); /* 00012DA0: LDRB            R0, [R5,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = motion_queue_is_empty(R0, R1, R2, R3); /* 00012DA2: BL              motion_queue_is_empty */
  /* 00012DA6: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_12E44; /* 00012DA8: BNE             loc_12E44 */
loc_12DAA:
  R0 = sub_138B4(R0, R1, R2, R3); /* 00012DAA: BL              sub_138B4 */
  R0 = MEM8(R4 + 0x4); /* 00012DAE: LDRB            R0, [R4,#(g_track_trail_mode - 0x20004BC4)] */
  /* 00012DB0: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_12DCA; /* 00012DB2: BEQ             loc_12DCA */
loc_12DB4:
  R1 = (u32)&(unk_20005756); /* 00012DB4: LDR             R1, =unk_20005756; Copies burst bytes 2..5 only, which strongly matches little-endian X/Y deltas from a motion-burst register. */
  R0 = (u32)&(g_motion_queue); /* 00012DB6: LDR             R0, =g_motion_queue */
  R0 = motion_queue_peek_record(R0, R1, R2, R3); /* 00012DB8: BL              motion_queue_peek_record */
  R1 = SP; /* 00012DBC: MOV             R1, SP */
  MEM8(R1 + 0) = R0; /* 00012DBE: STRB            R0, [R1,#0x24+var_24] */
  R1 = (u32)&(unk_20005756); /* 00012DC0: LDR             R1, =unk_20005756; Copies burst bytes 2..5 only, which strongly matches little-endian X/Y deltas from a motion-burst register. */
  R2 = MEM8(R1); /* 00012DC2: LDRB            R2, [R1] */
  /* 00012DC4: CMP             R2, #2 */
  if ((R2 == 0x2)) goto loc_12EB4; /* 00012DC6: BEQ             loc_12EB4 */
loc_12DC8:
  goto loc_12ED0; /* 00012DC8: B               loc_12ED0 */
loc_12DCA:
  R0 = sub_100A0(R0, R1, R2, R3); /* 00012DCA: BL              sub_100A0 */
  /* 00012DCE: CMP             R0, #5 */
  if ((R0 == 0x5)) goto loc_12E8A; /* 00012DD0: BEQ             loc_12E8A */
loc_12DD2:
  R0 = 0; /* 00012DD2: MOVS            R0, #0 */
  MEM32(SP + 0x20) = R0; /* 00012DD4: STR             R0, [SP,#0x24+var_4] */
loc_12DD6:
  R1 = MEM8(R5 + 0x5); /* 00012DD6: LDRB            R1, [R5,#(unk_20004BD5 - 0x20004BD0)] */
  R0 = MEM8(R5 + 0x4); /* 00012DD8: LDRB            R0, [R5,#(unk_20004BD4 - 0x20004BD0)] */
  R0 = motion_queue_is_empty(R0, R1, R2, R3); /* 00012DDA: BL              motion_queue_is_empty */
  /* 00012DDE: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_12DF4; /* 00012DE0: BNE             loc_12DF4 */
loc_12DE2:
  R1 = SP + 0xc; /* 00012DE2: ADD             R1, SP, #0x24+var_18 */
  R0 = (u32)&(g_motion_queue); /* 00012DE4: LDR             R0, =g_motion_queue */
  R0 = motion_queue_peek_record(R0, R1, R2, R3); /* 00012DE6: BL              motion_queue_peek_record */
  R6 = R0; /* 00012DEA: MOV             R6, R0 */
  R0 = SP; /* 00012DEC: MOV             R0, SP */
  R0 = MEM8(R0 + 0xd); /* 00012DEE: LDRB            R0, [R0,#0x24+var_17] */
  /* 00012DF0: CMP             R0, #5 */
  if ((R0 == 0x5)) goto loc_12E12; /* 00012DF2: BEQ             loc_12E12 */
loc_12DF4:
  R0 = MEM8(R4 + 0x5); /* 00012DF4: LDRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
  /* 00012DF6: CMP             R0, #1 */
  if ((R0 == 0x1)) goto loc_12E84; /* 00012DF8: BEQ             loc_12E84 */
loc_12DFA:
  R0 = MEM8(R4 + 0x5); /* 00012DFA: LDRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
  R1 = (u32)&(unk_20004BC4); /* 00012DFC: LDR             R1, =unk_20004BC4 */
  R0 = R7 + R0; /* 00012DFE: ADDS            R0, R7, R0 */
  R2 = MEM8(R1 + 0x6); /* 00012E00: LDRB            R2, [R1,#(unk_20004BCA - 0x20004BC4)] */
  MEM8(R0) = R2; /* 00012E02: STRB            R2, [R0] */
  R2 = MEM8(R1 + 0x7); /* 00012E04: LDRB            R2, [R1,#(unk_20004BCB - 0x20004BC4)] */
  MEM8(R0 + 0x1) = R2; /* 00012E06: STRB            R2, [R0,#1] */
  R2 = MEM8(R1 + 0x8); /* 00012E08: LDRB            R2, [R1,#(unk_20004BCC - 0x20004BC4)] */
  MEM8(R0 + 0x2) = R2; /* 00012E0A: STRB            R2, [R0,#2] */
  R1 = MEM8(R1 + 0x9); /* 00012E0C: LDRB            R1, [R1,#(unk_20004BCD - 0x20004BC4)] */
  MEM8(R0 + 0x3) = R1; /* 00012E0E: STRB            R1, [R0,#3] */
  goto loc_12E38; /* 00012E10: B               loc_12E38 */
loc_12E12:
  /* 00012E12: CMP             R6, #9 */
  if ((R6 == 0x9)) goto loc_12E46; /* 00012E14: BEQ             loc_12E46 */
loc_12E16:
  R0 = (u32)&(g_motion_queue); /* 00012E16: LDR             R0, =g_motion_queue */
  R0 = motion_queue_pop_record(R0, R1, R2, R3); /* 00012E18: BL              motion_queue_pop_record */
  R0 = MEM8(R4 + 0x5); /* 00012E1C: LDRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
  R1 = SP + 0xc; /* 00012E1E: ADD             R1, SP, #0x24+var_18 */
  R0 = R7 + R0; /* 00012E20: ADDS            R0, R7, R0 */
  R2 = R6 - 0x2; /* 00012E22: SUBS            R2, R6, #2 */
  R1 = R1 + 0x2; /* 00012E24: ADDS            R1, #2 */
  R0 = sub_132CC(R0, R1, R2, R3); /* 00012E26: BL              sub_132CC */
  R0 = MEM8(R4 + 0x5); /* 00012E2A: LDRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
  R0 = R0 + R6; /* 00012E2C: ADDS            R0, R0, R6 */
  R0 = R0 - 0x2; /* 00012E2E: SUBS            R0, R0, #2 */
  R0 = (u8)(R0); /* 00012E30: UXTB            R0, R0 */
  MEM8(R4 + 0x5) = R0; /* 00012E32: STRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
  /* 00012E34: CMP             R0, #9 */
  if ((R0 != 0x9)) goto loc_12DD6; /* 00012E36: BNE             loc_12DD6 */
loc_12E38:
  R1 = 0x9; /* 00012E38: MOVS            R1, #9 */
  R0 = 0x20004bd8; /* 00012E3A: LDR             R0, =0x20004BD8 */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00012E3C: BL              sub_12A7A */
  R0 = 0x1; /* 00012E40: MOVS            R0, #1 */
  MEM8(R4 + 0x5) = R0; /* 00012E42: STRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
loc_12E44:
  goto loc_12EC6; /* 00012E44: B               loc_12EC6 */
loc_12E46:
  R0 = MEM8(R4 + 0x5); /* 00012E46: LDRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
  /* 00012E48: CMP             R0, #1 */
  if ((R0 == 0x1)) goto loc_12E74; /* 00012E4A: BEQ             loc_12E74 */
loc_12E4C:
  R1 = R7 + R0; /* 00012E4C: ADDS            R1, R7, R0 */
  R0 = (u32)&(unk_20004BC4); /* 00012E4E: LDR             R0, =unk_20004BC4 */
  R2 = MEM8(R0 + 0x6); /* 00012E50: LDRB            R2, [R0,#(unk_20004BCA - 0x20004BC4)] */
  MEM8(R1) = R2; /* 00012E52: STRB            R2, [R1] */
  R2 = MEM8(R0 + 0x7); /* 00012E54: LDRB            R2, [R0,#(unk_20004BCB - 0x20004BC4)] */
  MEM8(R1 + 0x1) = R2; /* 00012E56: STRB            R2, [R1,#1] */
  R2 = MEM8(R0 + 0x8); /* 00012E58: LDRB            R2, [R0,#(unk_20004BCC - 0x20004BC4)] */
  MEM8(R1 + 0x2) = R2; /* 00012E5A: STRB            R2, [R1,#2] */
  R0 = MEM8(R0 + 0x9); /* 00012E5C: LDRB            R0, [R0,#(unk_20004BCD - 0x20004BC4)] */
  MEM8(R1 + 0x3) = R0; /* 00012E5E: STRB            R0, [R1,#3] */
  R1 = 0x9; /* 00012E60: MOVS            R1, #9 */
  R0 = 0x20004bd8; /* 00012E62: LDR             R0, =0x20004BD8 */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00012E64: BL              sub_12A7A */
  R0 = 0x1; /* 00012E68: MOVS            R0, #1 */
  MEM8(R4 + 0x5) = R0; /* 00012E6A: STRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
loc_12E6C:
  R0 = MEM8(R4 + 0x5); /* 00012E6C: LDRB            R0, [R4,#(unk_20004BC9 - 0x20004BC4)] */
  /* 00012E6E: CMP             R0, #1 */
  if ((R0 != 0x1)) goto loc_12DFA; /* 00012E70: BNE             loc_12DFA */
loc_12E72:
  goto loc_12EC6; /* 00012E72: B               loc_12EC6 */
loc_12E74:
  R1 = R6; /* 00012E74: MOV             R1, R6 */
  R0 = SP + 0xc; /* 00012E76: ADD             R0, SP, #0x24+var_18 */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00012E78: BL              sub_12A7A */
  R0 = (u32)&(g_motion_queue); /* 00012E7C: LDR             R0, =g_motion_queue */
  R0 = motion_queue_pop_record(R0, R1, R2, R3); /* 00012E7E: BL              motion_queue_pop_record */
  goto loc_12E6C; /* 00012E82: B               loc_12E6C */
loc_12E84:
  R0 = MEM32(SP + 0x20); /* 00012E84: LDR             R0, [SP,#0x24+var_4] */
  /* 00012E86: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_12EC6; /* 00012E88: BNE             loc_12EC6 */
loc_12E8A:
  R1 = (u32)&(unk_20005756); /* 00012E8A: LDR             R1, =unk_20005756; Copies burst bytes 2..5 only, which strongly matches little-endian X/Y deltas from a motion-burst register. */
  R0 = (u32)&(g_motion_queue); /* 00012E8C: LDR             R0, =g_motion_queue */
  R0 = motion_queue_peek_record(R0, R1, R2, R3); /* 00012E8E: BL              motion_queue_peek_record */
  R1 = SP; /* 00012E92: MOV             R1, SP */
  MEM8(R1 + 0) = R0; /* 00012E94: STRB            R0, [R1,#0x24+var_24] */
  R1 = (u32)&(unk_20005756); /* 00012E96: LDR             R1, =unk_20005756; Copies burst bytes 2..5 only, which strongly matches little-endian X/Y deltas from a motion-burst register. */
  R2 = MEM8(R1); /* 00012E98: LDRB            R2, [R1] */
  /* 00012E9A: CMP             R2, #2 */
  if ((R2 != 0x2)) goto loc_12ED0; /* 00012E9C: BNE             loc_12ED0 */
loc_12E9E:
  R1 = MEM8(R1 + 0x1); /* 00012E9E: LDRB            R1, [R1,#(unk_20005757 - 0x20005756)] */
  /* 00012EA0: CMP             R1, #5 */
  if ((R1 != 0x5)) goto loc_12ED0; /* 00012EA2: BNE             loc_12ED0 */
loc_12EA4:
  /* 00012EA4: CMP             R0, #6 */
  if ((R0 != 0x6)) goto loc_12ED0; /* 00012EA6: BNE             loc_12ED0 */
loc_12EA8:
  R0 = can_delay_xy_history_record(R0, R1, R2, R3); /* 00012EA8: BL              can_delay_xy_history_record */
  /* 00012EAC: CMP             R0, #0 */
  if ((R0 != 0)) goto loc_12EC6; /* 00012EAE: BNE             loc_12EC6 */
loc_12EB0:
  goto loc_12ED0; /* 00012EB0: B               loc_12ED0 */
loc_12EB2:
  goto loc_12EB4; /* 00012EB2: B               loc_12EB4 */
loc_12EB4:
  R1 = MEM8(R1 + 0x1); /* 00012EB4: LDRB            R1, [R1,#(unk_20005757 - 0x20005756)] */
  /* 00012EB6: CMP             R1, #5 */
  if ((R1 != 0x5)) goto loc_12ED0; /* 00012EB8: BNE             loc_12ED0 */
loc_12EBA:
  /* 00012EBA: CMP             R0, #6 */
  if ((R0 != 0x6)) goto loc_12ED0; /* 00012EBC: BNE             loc_12ED0 */
loc_12EBE:
  R0 = can_delay_xy_history_record(R0, R1, R2, R3); /* 00012EBE: BL              can_delay_xy_history_record */
  /* 00012EC2: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_12ED0; /* 00012EC4: BEQ             loc_12ED0 */
loc_12EC6:
  R0 = sub_1353C(R0, R1, R2, R3); /* 00012EC6: BL              sub_1353C */
  /* 00012ECA: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_12EE2; /* 00012ECC: BEQ             loc_12EE2 */
loc_12ECE:
  goto loc_12EE8; /* 00012ECE: B               loc_12EE8 */
loc_12ED0:
  R0 = SP; /* 00012ED0: MOV             R0, SP */
  R1 = MEM8(R0 + 0); /* 00012ED2: LDRB            R1, [R0,#0x24+var_24] */
  R0 = (u32)&(unk_20005756); /* 00012ED4: LDR             R0, =unk_20005756; Copies burst bytes 2..5 only, which strongly matches little-endian X/Y deltas from a motion-burst register. */
  R0 = sub_12A7A(R0, R1, R2, R3); /* 00012ED6: BL              sub_12A7A */
  R0 = (u32)&(g_motion_queue); /* 00012EDA: LDR             R0, =g_motion_queue */
  R0 = motion_queue_pop_record(R0, R1, R2, R3); /* 00012EDC: BL              motion_queue_pop_record */
  goto loc_12D92; /* 00012EE0: B               loc_12D92 */
loc_12EE2:
/* <<< end original lines 43456-43675 */

/* >>> original lines 43881-44100 */
  MEM32(SP + 0) = R6; /* 00012FFA: STR             R6, [SP,#0x1C+var_1C] */
  MEM32(SP + 0x8) = R5; /* 00012FFC: STR             R5, [SP,#0x1C+var_14] */
  R0 = sub_13470(R0, R1, R2, R3); /* 00012FFE: BL              sub_13470 */
  goto loc_1300E; /* 00013002: B               loc_1300E */
loc_13004:
  R0 = MEM8(R0); /* 00013004: LDRB            R0, [R0] */
  /* 00013006: CMP             R0, #1 */
  if ((R0 != 0x1)) goto loc_1300E; /* 00013008: BNE             loc_1300E */
loc_1300A:
  R0 = (u32)&(unk_20004A6E); /* 0001300A: LDR             R0, =unk_20004A6E */
  MEM8(R0) = R1; /* 0001300C: STRB            R1, [R0] */
loc_1300E:
  R0 = SP; /* 0001300E: MOV             R0, SP */
  R0 = MEM8(R0 + 0xc); /* 00013010: LDRB            R0, [R0,#0x1C+var_10] */
  R0 = R0 >> 0x7; /* 00013012: LSRS            R0, R0, #7 */
  if ((R0 == 0)) goto loc_13032; /* 00013014: BEQ             loc_13032 */
loc_13016:
  R0 = SP; /* 00013016: MOV             R0, SP */
  R0 = MEM8(R0 + 0xe); /* 00013018: LDRB            R0, [R0,#0x1C+var_E] */
  MEM8(R4) = R0; /* 0001301A: STRB            R0, [R4] */
  R0 = SP; /* 0001301C: MOV             R0, SP */
  R0 = MEM8(R0 + 0xf); /* 0001301E: LDRB            R0, [R0,#0x1C+var_D] */
  MEM8(R4 + 0x1) = R0; /* 00013020: STRB            R0, [R4,#1] */
  R0 = SP; /* 00013022: MOV             R0, SP */
  R0 = MEM8(R0 + 0x10); /* 00013024: LDRB            R0, [R0,#0x1C+var_C] */
  MEM8(R4 + 0x2) = R0; /* 00013026: STRB            R0, [R4,#2] */
  R0 = SP; /* 00013028: MOV             R0, SP */
  R0 = MEM8(R0 + 0x11); /* 0001302A: LDRB            R0, [R0,#0x1C+var_B] */
  MEM8(R4 + 0x3) = R0; /* 0001302C: STRB            R0, [R4,#3] */
  R7 = 0x1; /* 0001302E: MOVS            R7, #1 */
  goto loc_1303A; /* 00013030: B               loc_1303A */
loc_13032:
  MEM8(R4) = R5; /* 00013032: STRB            R5, [R4] */
  MEM8(R4 + 0x1) = R5; /* 00013034: STRB            R5, [R4,#1] */
  MEM8(R4 + 0x2) = R5; /* 00013036: STRB            R5, [R4,#2] */
  MEM8(R4 + 0x3) = R5; /* 00013038: STRB            R5, [R4,#3] */
loc_1303A:
  R2 = SP + 0xc; /* 0001303A: ADD             R2, SP, #0x1C+var_10 */
  R1 = 0x16; /* 0001303C: MOVS            R1, #0x16 */
  R0 = SP + 0x14; /* 0001303E: ADD             R0, SP, #0x1C+var_8 */
  R0 = sub_10A28(R0, R1, R2, R3); /* 00013040: BL              sub_10A28 */
  R0 = R7; /* 00013044: MOV             R0, R7 */
  SP = SP + 0x1c; /* 00013046: ADD             SP, SP, #0x1C */
  return; /* 00013048: POP             {R4-R7,PC} */
}

/* ===== [1031/1228] read_motion_burst_path_b @ 0x0001304A (ROM) ===== */
void read_motion_burst_path_b(void)
{
  /* frame: locals=0x1C, saved_regs=0x14, args=0x0 */
  /* direct callees: sub_109D6, sub_13464, sub_13470 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R2, R3, R4, R5, R6, R7, SP, LR, PC;

  /* save {R4 - R7,LR} */ /* 0001304A: PUSH            {R4-R7,LR} */
  SP = SP - 0x1c; /* 0001304C: SUB             SP, SP, #0x1C */
  R4 = R0; /* 0001304E: MOV             R4, R0 */
  R1 = 0x6; /* 00013050: MOVS            R1, #6 */
  R0 = SP; /* 00013052: MOV             R0, SP */
  MEM8(R0 + 0x14) = R1; /* 00013054: STRB            R1, [R0,#0x1C+var_8] */
  R7 = 0; /* 00013056: MOVS            R7, #0 */
  R2 = SP + 0xc; /* 00013058: ADD             R2, SP, #0x1C+var_10 */
  R1 = 0x16; /* 0001305A: MOVS            R1, #0x16 */
  R0 = SP + 0x14; /* 0001305C: ADD             R0, SP, #0x1C+var_8 */
  R0 = sub_109D6(R0, R1, R2, R3); /* 0001305E: BL              sub_109D6 */
  R0 = SP; /* 00013062: MOV             R0, SP */
  R0 = MEM8(R0 + 0xc); /* 00013064: LDRB            R0, [R0,#0x1C+var_10] */
  R1 = 0x1; /* 00013066: MOVS            R1, #1 */
  R2 = R0 << 0x1c; /* 00013068: LSLS            R2, R0, #0x1C */
  R0 = (u32)&(unk_20004A6F); /* 0001306A: LDR             R0, =unk_20004A6F */
  R5 = 0; /* 0001306C: MOVS            R5, #0 */
  /* 0001306E: CMP             R2, #0 */
  if ((((s32)R2) >= ((s32)0))) goto loc_13096; /* 00013070: BGE             loc_13096 */
loc_13072:
  R2 = MEM8(R0); /* 00013072: LDRB            R2, [R0] */
  /* 00013074: CMP             R2, #0 */
  if ((R2 != 0)) goto loc_130A0; /* 00013076: BNE             loc_130A0 */
loc_13078:
  MEM8(R0) = R1; /* 00013078: STRB            R1, [R0] */
  R0 = (u32)&(unk_20004A70); /* 0001307A: LDR             R0, =unk_20004A70 */
  R6 = 0x1e; /* 0001307C: MOVS            R6, #0x1E */
  MEM32(R0) = R5; /* 0001307E: STR             R5, [R0] */
  R0 = sub_13464(R0, R1, R2, R3); /* 00013080: BL              sub_13464 */
  R2 = 0; /* 00013084: MOVS            R2, #0 */
  MEM32(SP + 0x4) = R5; /* 00013086: STR             R5, [SP,#0x1C+var_18] */
  R3 = R6; /* 00013088: MOV             R3, R6 */
  R1 = R2; /* 0001308A: MOV             R1, R2 */
  MEM32(SP + 0) = R6; /* 0001308C: STR             R6, [SP,#0x1C+var_1C] */
  MEM32(SP + 0x8) = R5; /* 0001308E: STR             R5, [SP,#0x1C+var_14] */
  R0 = sub_13470(R0, R1, R2, R3); /* 00013090: BL              sub_13470 */
  goto loc_130A0; /* 00013094: B               loc_130A0 */
loc_13096:
  R0 = MEM8(R0); /* 00013096: LDRB            R0, [R0] */
  /* 00013098: CMP             R0, #1 */
  if ((R0 != 0x1)) goto loc_130A0; /* 0001309A: BNE             loc_130A0 */
loc_1309C:
  R0 = (u32)&(unk_20004A6E); /* 0001309C: LDR             R0, =unk_20004A6E */
  MEM8(R0) = R1; /* 0001309E: STRB            R1, [R0] */
loc_130A0:
  R0 = SP; /* 000130A0: MOV             R0, SP */
  R0 = MEM8(R0 + 0xc); /* 000130A2: LDRB            R0, [R0,#0x1C+var_10] */
  R0 = R0 >> 0x7; /* 000130A4: LSRS            R0, R0, #7 */
  if ((R0 == 0)) goto loc_130C4; /* 000130A6: BEQ             loc_130C4 */
loc_130A8:
  R0 = SP; /* 000130A8: MOV             R0, SP; Copies burst bytes 2..5 only, which strongly matches little-endian X/Y deltas from a motion-burst register. */
  R0 = MEM8(R0 + 0xe); /* 000130AA: LDRB            R0, [R0,#0x1C+var_E] */
  MEM8(R4) = R0; /* 000130AC: STRB            R0, [R4] */
  R0 = SP; /* 000130AE: MOV             R0, SP */
  R0 = MEM8(R0 + 0xf); /* 000130B0: LDRB            R0, [R0,#0x1C+var_D] */
  MEM8(R4 + 0x1) = R0; /* 000130B2: STRB            R0, [R4,#1] */
  R0 = SP; /* 000130B4: MOV             R0, SP */
  R0 = MEM8(R0 + 0x10); /* 000130B6: LDRB            R0, [R0,#0x1C+var_C] */
  MEM8(R4 + 0x2) = R0; /* 000130B8: STRB            R0, [R4,#2] */
  R0 = SP; /* 000130BA: MOV             R0, SP */
  R0 = MEM8(R0 + 0x11); /* 000130BC: LDRB            R0, [R0,#0x1C+var_B] */
  MEM8(R4 + 0x3) = R0; /* 000130BE: STRB            R0, [R4,#3] */
  R7 = 0x1; /* 000130C0: MOVS            R7, #1 */
  goto loc_130CC; /* 000130C2: B               loc_130CC */
loc_130C4:
  MEM8(R4) = R5; /* 000130C4: STRB            R5, [R4] */
  MEM8(R4 + 0x1) = R5; /* 000130C6: STRB            R5, [R4,#1] */
  MEM8(R4 + 0x2) = R5; /* 000130C8: STRB            R5, [R4,#2] */
  MEM8(R4 + 0x3) = R5; /* 000130CA: STRB            R5, [R4,#3] */
loc_130CC:
  R0 = R7; /* 000130CC: MOV             R0, R7 */
  SP = SP + 0x1c; /* 000130CE: ADD             SP, SP, #0x1C */
  return; /* 000130D0: POP             {R4-R7,PC} */
}

/* ===== [1032/1228] sub_130D2 @ 0x000130D2 (ROM) ===== */
void sub_130D2(void)
{
  /* frame: locals=0x0, saved_regs=0x10, args=0x0 */
  /* direct callees: sub_133BC, sub_138F0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R4, R5, R6, LR, PC;

  /* save {R4 - R6,LR} */ /* 000130D2: PUSH            {R4-R6,LR} */
  R4 = R0; /* 000130D4: MOV             R4, R0 */
  R0 = 0x7530; /* 000130D6: LDR             R0, =0x7530 */
  /* 000130D8: CMP             R4, R0 */
  if ((((u32)R4) > ((u32)R0))) goto locret_1311C; /* 000130DA: BHI             locret_1311C */
loc_130DC:
  R1 = 0x32; /* 000130DC: MOVS            R1, #0x32 ; '2' */
  R0 = R4; /* 000130DE: MOV             R0, R4 */
  R0 = sub_133BC(R0, R1, R2, R3); /* 000130E0: BL              sub_133BC */
  /* 000130E4: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_130EC; /* 000130E6: BEQ             loc_130EC */
loc_130E8:
  R0 = R0 - 0x1; /* 000130E8: SUBS            R0, R0, #1 */
  R0 = (u16)(R0); /* 000130EA: UXTH            R0, R0 */
loc_130EC:
  R5 = (u8)(R0); /* 000130EC: UXTB            R5, R0 */
  R6 = R0 >> 0x8; /* 000130EE: LSRS            R6, R0, #8 */
  R1 = R5; /* 000130F0: MOV             R1, R5 */
  R0 = 0x48; /* 000130F2: MOVS            R0, #0x48 ; 'H' */
  R0 = sub_138F0(R0, R1, R2, R3); /* 000130F4: BL              sub_138F0 */
  R1 = R6; /* 000130F8: MOV             R1, R6 */
  R0 = 0x49; /* 000130FA: MOVS            R0, #0x49 ; 'I' */
  R0 = sub_138F0(R0, R1, R2, R3); /* 000130FC: BL              sub_138F0 */
  R1 = R5; /* 00013100: MOV             R1, R5 */
  R0 = 0x4a; /* 00013102: MOVS            R0, #0x4A ; 'J' */
  R0 = sub_138F0(R0, R1, R2, R3); /* 00013104: BL              sub_138F0 */
  R1 = R6; /* 00013108: MOV             R1, R6 */
  R0 = 0x4b; /* 0001310A: MOVS            R0, #0x4B ; 'K' */
  R0 = sub_138F0(R0, R1, R2, R3); /* 0001310C: BL              sub_138F0 */
  R1 = 0x1; /* 00013110: MOVS            R1, #1 */
  R0 = 0x47; /* 00013112: MOVS            R0, #0x47 ; 'G' */
  R0 = sub_138F0(R0, R1, R2, R3); /* 00013114: BL              sub_138F0 */
  R0 = (u32)&(g_sensor_shadow); /* 00013118: LDR             R0, =g_sensor_shadow */
  MEM16(R0 + 0x8) = R4; /* 0001311A: STRH            R4, [R0,#(g_sensor_shadow.applied_cpi - 0x20004BE8)] */
locret_1311C:
  return; /* 0001311C: POP             {R4-R6,PC} */
}

/* ===== [1033/1228] sub_1311E @ 0x0001311E (ROM) ===== */
void sub_1311E(void)
{
  /* frame: locals=0xC, saved_regs=0x14, args=0x0 */
  /* direct callees: sub_10996, sub_1011C, sub_138FC, sub_133BC, sub_138F0, sub_13908, sub_FFB4, sub_FFF6 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, R4, R5, R6, R7, SP, LR, PC;

  /* save {R4 - R7,LR} */ /* 0001311E: PUSH            {R4-R7,LR} */
  SP = SP - 0xc; /* 00013120: SUB             SP, SP, #0xC */
  R5 = R0; /* 00013122: MOV             R5, R0 */
  R1 = SP + 0x4; /* 00013124: ADD             R1, SP, #0xC+var_8 */
  R0 = 0x5b; /* 00013126: MOVS            R0, #0x5B ; '[' */
  R0 = sub_10996(R0, R1, R2, R3); /* 00013128: BL              sub_10996 */
  R0 = SP; /* 0001312C: MOV             R0, SP */
  R0 = MEM8(R0 + 0x4); /* 0001312E: LDRB            R0, [R0,#0xC+var_8] */
  /* 00013130: CMP             R0, #0x60 ; '`' */
  if ((R0 != 0x60)) goto loc_131D6; /* 00013132: BNE             loc_131D6 */
loc_13134:
  R4 = (u32)&(g_sensor_shadow); /* 00013134: LDR             R4, =g_sensor_shadow */
  R0 = 0; /* 00013136: MOVS            R0, #0 */
  MEM8(R4) = R0; /* 00013138: STRB            R0, [R4] */
  R0 = sub_1011C(R0, R1, R2, R3); /* 0001313A: BL              sub_1011C */
  R0 = sub_138FC(R0, R1, R2, R3); /* 0001313E: BL              sub_138FC */
  R6 = MEM16(R4 + 0x8); /* 00013142: LDRH            R6, [R4,#(g_sensor_shadow.applied_cpi - 0x20004BE8)] */
  R0 = 0x7530; /* 00013144: LDR             R0, =0x7530 */
  /* 00013146: CMP             R6, R0 */
  if ((((u32)R6) > ((u32)R0))) goto loc_13188; /* 00013148: BHI             loc_13188 */
loc_1314A:
  R1 = 0x32; /* 0001314A: MOVS            R1, #0x32 ; '2' */
  R0 = R6; /* 0001314C: MOV             R0, R6 */
  R0 = sub_133BC(R0, R1, R2, R3); /* 0001314E: BL              sub_133BC */
  /* 00013152: CMP             R0, #0 */
  if ((R0 == 0)) goto loc_1315A; /* 00013154: BEQ             loc_1315A */
loc_13156:
  R0 = R0 - 0x1; /* 00013156: SUBS            R0, R0, #1 */
  R0 = (u16)(R0); /* 00013158: UXTH            R0, R0 */
loc_1315A:
  R1 = (u8)(R0); /* 0001315A: UXTB            R1, R0 */
  R7 = R0 >> 0x8; /* 0001315C: LSRS            R7, R0, #8 */
  R0 = 0x48; /* 0001315E: MOVS            R0, #0x48 ; 'H' */
  MEM32(SP + 0) = R1; /* 00013160: STR             R1, [SP,#0xC+var_C] */
  R0 = sub_138F0(R0, R1, R2, R3); /* 00013162: BL              sub_138F0 */
  R1 = R7; /* 00013166: MOV             R1, R7 */
  R0 = 0x49; /* 00013168: MOVS            R0, #0x49 ; 'I' */
/* <<< end original lines 43881-44100 */

/* >>> original lines 44631-44699 */
  R0 = 0x1000db0d; /* 000133B2: LDR             R0, =0x1000DB0D */
  MEM32(SP + var_s4) = R0; /* 000133B4: STR             R0, [SP,#var_s4] */
  return; /* 000133B6: POP             {R0,PC} */
}

/* ===== [1070/1228] sub_133BC @ 0x000133BC (ROM) ===== */
void sub_133BC(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 000133BC: PUSH            {R0,R1} */
  R0 = 0x10001207; /* 000133BE: LDR             R0, =0x10001207 */
  MEM32(SP + var_s4) = R0; /* 000133C0: STR             R0, [SP,#var_s4] */
  return; /* 000133C2: POP             {R0,PC} */
}

/* ===== [1071/1228] sub_133C8 @ 0x000133C8 (ROM) ===== */
void sub_133C8(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 000133C8: PUSH            {R0,R1} */
  R0 = 0x10002675; /* 000133CA: LDR             R0, =0x10002675 */
  MEM32(SP + var_s4) = R0; /* 000133CC: STR             R0, [SP,#var_s4] */
  return; /* 000133CE: POP             {R0,PC} */
}

/* ===== [1072/1228] sub_133D4 @ 0x000133D4 (ROM) ===== */
void sub_133D4(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 000133D4: PUSH            {R0,R1} */
  R0 = 0x100023d1; /* 000133D6: LDR             R0, =0x100023D1 */
  MEM32(SP + var_s4) = R0; /* 000133D8: STR             R0, [SP,#var_s4] */
  return; /* 000133DA: POP             {R0,PC} */
}

/* ===== [1073/1228] sub_133E0 @ 0x000133E0 (ROM) ===== */
void sub_133E0(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 000133E0: PUSH            {R0,R1} */
  R0 = 0x10007ec9; /* 000133E2: LDR             R0, =0x10007EC9 */
  MEM32(SP + var_s4) = R0; /* 000133E4: STR             R0, [SP,#var_s4] */
  return; /* 000133E6: POP             {R0,PC} */
}

/* ===== [1074/1228] sub_133EC @ 0x000133EC (ROM) ===== */
void sub_133EC(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 000133EC: PUSH            {R0,R1} */
  R0 = 0x10005d89; /* 000133EE: LDR             R0, =0x10005D89 */
  MEM32(SP + var_s4) = R0; /* 000133F0: STR             R0, [SP,#var_s4] */
  return; /* 000133F2: POP             {R0,PC} */
}
/* <<< end original lines 44631-44699 */

/* >>> original lines 45046-45165 */
  /* save {R0,R1} */ /* 00013530: PUSH            {R0,R1} */
  R0 = 0x10006ad5; /* 00013532: LDR             R0, =0x10006AD5 */
  MEM32(SP + var_s4) = R0; /* 00013534: STR             R0, [SP,#var_s4] */
  return; /* 00013536: POP             {R0,PC} */
}

/* ===== [1102/1228] sub_1353C @ 0x0001353C (ROM) ===== */
void sub_1353C(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 0001353C: PUSH            {R0,R1} */
  R0 = 0x1000bc01; /* 0001353E: LDR             R0, =0x1000BC01 */
  MEM32(SP + var_s4) = R0; /* 00013540: STR             R0, [SP,#var_s4] */
  return; /* 00013542: POP             {R0,PC} */
}

/* ===== [1103/1228] sub_13548 @ 0x00013548 (ROM) ===== */
void sub_13548(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 00013548: PUSH            {R0,R1} */
  R0 = 0x1000ba01; /* 0001354A: LDR             R0, =0x1000BA01 */
  MEM32(SP + var_s4) = R0; /* 0001354C: STR             R0, [SP,#var_s4] */
  return; /* 0001354E: POP             {R0,PC} */
}

/* ===== [1104/1228] sub_13554 @ 0x00013554 (ROM) ===== */
void sub_13554(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 00013554: PUSH            {R0,R1} */
  R0 = 0x100061a9; /* 00013556: LDR             R0, =0x100061A9 */
  MEM32(SP + var_s4) = R0; /* 00013558: STR             R0, [SP,#var_s4] */
  return; /* 0001355A: POP             {R0,PC} */
}

/* ===== [1105/1228] sub_13560 @ 0x00013560 (ROM) ===== */
void sub_13560(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 00013560: PUSH            {R0,R1} */
  R0 = 0x10006199; /* 00013562: LDR             R0, =0x10006199 */
  MEM32(SP + var_s4) = R0; /* 00013564: STR             R0, [SP,#var_s4] */
  return; /* 00013566: POP             {R0,PC} */
}

/* ===== [1106/1228] sub_1356C @ 0x0001356C (ROM) ===== */
void sub_1356C(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 0001356C: PUSH            {R0,R1} */
  R0 = 0x10003d65; /* 0001356E: LDR             R0, =0x10003D65 */
  MEM32(SP + var_s4) = R0; /* 00013570: STR             R0, [SP,#var_s4] */
  return; /* 00013572: POP             {R0,PC} */
}

/* ===== [1107/1228] sub_13578 @ 0x00013578 (ROM) ===== */
void sub_13578(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 00013578: PUSH            {R0,R1} */
  R0 = 0x1000bd4b; /* 0001357A: LDR             R0, =0x1000BD4B */
  MEM32(SP + var_s4) = R0; /* 0001357C: STR             R0, [SP,#var_s4] */
  return; /* 0001357E: POP             {R0,PC} */
}

/* ===== [1108/1228] sub_13584 @ 0x00013584 (ROM) ===== */
void sub_13584(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 00013584: PUSH            {R0,R1} */
  R0 = 0x1000bb0d; /* 00013586: LDR             R0, =0x1000BB0D */
  MEM32(SP + var_s4) = R0; /* 00013588: STR             R0, [SP,#var_s4] */
  return; /* 0001358A: POP             {R0,PC} */
}

/* ===== [1109/1228] sub_13590 @ 0x00013590 (ROM) ===== */
void sub_13590(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 00013590: PUSH            {R0,R1} */
  R0 = 0x100068c5; /* 00013592: LDR             R0, =0x100068C5 */
  MEM32(SP + var_s4) = R0; /* 00013594: STR             R0, [SP,#var_s4] */
  return; /* 00013596: POP             {R0,PC} */
}

/* ===== [1110/1228] sub_1359C @ 0x0001359C (ROM) ===== */
void sub_1359C(void)
{
  /* frame: locals=0x0, saved_regs=0x8, args=0x0 */
  /* Register-oriented C-like fallback synthesized from ARM instructions. */
  u32 R0, R1, SP, PC;

  /* save {R0,R1} */ /* 0001359C: PUSH            {R0,R1} */
  R0 = 0x100097d1; /* 0001359E: LDR             R0, =0x100097D1 */
  MEM32(SP + var_s4) = R0; /* 000135A0: STR             R0, [SP,#var_s4] */
/* <<< end original lines 45046-45165 */

/* >>> original lines 47661-47900 */
  /* 000004B8: ASRS            R0, R0, #1 */
  /* 000004BA: POP             {R0-R3} */
  /* 000004BC: ADCS            R4, R0 */
  /* 000004BE: ADCS            R5, R1 */
  /* 000004C0: ADCS            R6, R2 */
  /* 000004C2: ADCS            R7, R3 */
  /* 000004C4: MOV             R8, R0 */
  /* 000004C6: ADD             R0, SP, #0x20 ; ' ' */
  /* 000004C8: STM             R0!, {R4-R7} */
  /* 000004CA: MOV             R0, R8 */
  /* 000004CC: MOV             R6, R12 */
  /* 000004CE: MOV             R5, R10 */
  /* 000004D0: EORS            R4, R4 */
  /* 000004D2: ADCS            R5, R6 */
  /* 000004D4: ADCS            R6, R4 */
  /* 000004D6: ADDS            R0, R0, R5 */
}

/* ===== [orphan 4/73] 0x000004DC-0x000005DA (ROM) ===== */
void orphan_code_4DC(void)
{
  /*
   * Code bytes outside any recognized function.
   * Exported as a standalone stub to preserve full coverage.
   */
  /* 000004DC: ADCS            R3, R6 */
  /* 000004DE: ADD             R7, SP, #0x30 ; '0' */
  /* 000004E0: STM             R7!, {R0-R3} */
  /* 000004E2: POP             {R0-R7} */
  /* 000004E4: ADDS            R3, R3, R0 */
  /* 000004E6: ADCS            R4, R1 */
  /* 000004E8: ADCS            R5, R2 */
  /* 000004EA: ADCS            R6, R0 */
  /* 000004EC: MOV             R8, R2 */
  /* 000004EE: MOV             R9, R3 */
  /* 000004F0: MOV             R10, R4 */
  /* 000004F2: MOV             R11, R5 */
  /* 000004F4: MOV             R12, R6 */
  /* 000004F6: ADCS            R7, R1 */
  /* 000004F8: POP             {R2-R5} */
  /* 000004FA: ADCS            R2, R0 */
  /* 000004FC: ADCS            R3, R1 */
  /* 000004FE: MOVS            R6, #0 */
  /* 00000500: ADCS            R4, R6 */
  /* 00000502: ADCS            R5, R6 */
  /* 00000504: ADCS            R6, R6 */
  /* 00000506: SUBS            R7, R7, R0 */
  /* 00000508: SBCS            R2, R1 */
  /* 0000050A: MOV             R0, R8 */
  /* 0000050C: MOV             R1, R9 */
  /* 0000050E: SBCS            R3, R0 */
  /* 00000510: SBCS            R4, R1 */
  /* 00000512: MOVS            R0, #0 */
  /* 00000514: SBCS            R5, R0 */
  /* 00000516: SBCS            R6, R0 */
  /* 00000518: MOV             R0, R12 */
  /* 0000051A: ADDS            R0, R0, R1 */
  /* 0000051C: MOV             R12, R0 */
  /* 0000051E: MOV             R0, R10 */
  /* 00000520: ADCS            R7, R0 */
  /* 00000522: MOV             LR, R7 */
  /* 00000524: MOV             R0, R8 */
  /* 00000526: ADCS            R2, R0 */
  /* 00000528: ADCS            R3, R1 */
  /* 0000052A: ADCS            R4, R0 */
  /* 0000052C: ADCS            R5, R1 */
  /* 0000052E: MOVS            R7, #0 */
  /* 00000530: ADCS            R6, R7 */
  /* 00000532: POP             {R0,R1} */
  /* 00000534: ADDS            R6, R6, R0 */
  /* 00000536: ADCS            R1, R7 */
  /* 00000538: ADCS            R7, R7 */
  /* 0000053A: MOV             R0, R11 */
  /* 0000053C: ADDS            R2, R2, R0 */
  /* 0000053E: MOV             R8, R2 */
  /* 00000540: MOV             R2, R12 */
  /* 00000542: ADCS            R3, R2 */
  /* 00000544: MOV             R9, R3 */
  /* 00000546: MOV             R3, R10 */
  /* 00000548: ADCS            R4, R3 */
  /* 0000054A: MOV             R10, R4 */
  /* 0000054C: ADCS            R5, R0 */
  /* 0000054E: ADCS            R6, R3 */
  /* 00000550: ADCS            R1, R0 */
  /* 00000552: POP             {R2,R4} */
  /* 00000554: ADCS            R2, R7 */
  /* 00000556: MOVS            R7, #0 */
  /* 00000558: ADCS            R4, R7 */
  /* 0000055A: ADCS            R7, R7 */
  /* 0000055C: SUBS            R5, R5, R3 */
  /* 0000055E: SBCS            R6, R0 */
  /* 00000560: MOV             R3, R12 */
  /* 00000562: MOV             R0, LR */
  /* 00000564: SBCS            R1, R3 */
  /* 00000566: SBCS            R2, R0 */
  /* 00000568: MOVS            R3, #0 */
  /* 0000056A: SBCS            R4, R3 */
  /* 0000056C: SBCS            R7, R3 */
  /* 0000056E: MOV             LR, R4 */
  /* 00000570: MOV             R11, R7 */
  /* 00000572: MOV             R4, R10 */
  /* 00000574: ADDS            R4, R4, R0 */
  /* 00000576: ADCS            R5, R3 */
  /* 00000578: MOV             R7, R12 */
  /* 0000057A: ADCS            R6, R7 */
  /* 0000057C: ADCS            R1, R0 */
  /* 0000057E: ADCS            R2, R7 */
  /* 00000580: MOV             R7, LR */
  /* 00000582: ADCS            R7, R0 */
  /* 00000584: MOV             R0, R11 */
  /* 00000586: ADCS            R0, R3 */
  /* 00000588: SUBS            R3, R3, R3 */
  /* 0000058A: MOV             R10, R0 */
  /* 0000058C: MOV             R0, R8 */
  /* 0000058E: ADCS            R0, R3 */
  /* 00000590: MOV             R11, R7 */
  /* 00000592: MOV             R7, R9 */
  /* 00000594: ADCS            R7, R3 */
  /* 00000596: MOV             R12, R0 */
  /* 00000598: MOV             R9, R7 */
  /* 0000059A: ADCS            R4, R3 */
  /* 0000059C: SBCS            R5, R3 */
  /* 0000059E: SBCS            R6, R3 */
  /* 000005A0: SBCS            R1, R3 */
  /* 000005A2: MOVS            R3, #1 */
  /* 000005A4: SBCS            R2, R3 */
  /* 000005A6: MOVS            R3, #0 */
  /* 000005A8: MOV             R0, R11 */
  /* 000005AA: MOV             R7, R10 */
  /* 000005AC: ADCS            R0, R3 */
  /* 000005AE: SBCS            R7, R3 */
  /* 000005B0: MOV             R8, R2 */
  /* 000005B2: MOV             R2, R12 */
  /* 000005B4: MOV             R11, R0 */
  /* 000005B6: MOV             R3, R9 */
  /* 000005B8: ADDS            R2, R2, R7 */
  /* 000005BA: ADCS            R3, R7 */
  /* 000005BC: ADCS            R4, R7 */
  /* 000005BE: MOVS            R0, #0 */
  /* 000005C0: ADCS            R5, R0 */
  /* 000005C2: ADCS            R6, R0 */
  /* 000005C4: ADCS            R1, R0 */
  /* 000005C6: POP             {R0} */
  /* 000005C8: STM             R0!, {R2-R6} */
  /* 000005CA: MOVS            R5, #1 */
  /* 000005CC: ANDS            R5, R7 */
  /* 000005CE: MOV             R2, R8 */
  /* 000005D0: MOV             R3, R11 */
  /* 000005D2: ADCS            R2, R5 */
  /* 000005D4: ADCS            R3, R7 */
  /* 000005D6: STM             R0!, {R1-R3} */
  /* 000005D8: POP             {PC} */
}

/* ===== [orphan 5/73] 0x000008B0-0x000008B2 (ROM) ===== */
void locret_8B0(void)
{
  /*
   * Code bytes outside any recognized function.
   * Exported as a standalone stub to preserve full coverage.
   */
  /* 000008B0: POP             {R0-R4,R6,R7,PC} */
}

/* ===== [orphan 6/73] 0x00000A40-0x00000A5C (ROM) ===== */
void orphan_code_A40(void)
{
  /*
   * Code bytes outside any recognized function.
   * Exported as a standalone stub to preserve full coverage.
   */
  /* 00000A40: LSRS            R6, R3, #1 */
  /* 00000A42: ORRS            R7, R6 */
  /* 00000A44: LSLS            R6, R3, #0x1F */
  /* 00000A46: LSRS            R5, R2, #1 */
  /* 00000A48: ORRS            R6, R5 */
  /* 00000A4A: LSLS            R5, R2, #0x1F */
  /* 00000A4C: LSRS            R4, R1, #1 */
  /* 00000A4E: ORRS            R5, R4 */
  /* 00000A50: LSLS            R4, R1, #0x1F */
  /* 00000A52: LSRS            R3, R0, #1 */
  /* 00000A54: ORRS            R4, R3 */
  /* 00000A56: MOV             R0, R9 */
  /* 00000A58: STM             R0!, {R4-R7} */
  /* 00000A5A: BX              LR */
}

/* ===== [orphan 7/73] 0x00000AAC-0x00000AC0 (ROM) ===== */
void orphan_code_AAC(void)
{
  /*
   * Code bytes outside any recognized function.
   * Exported as a standalone stub to preserve full coverage.
   */
  /* 00000AAC: LSLS            R1, R4, #0xE */
  /* 00000AAE: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000AB0: LSLS            R5, R6, #0x1A */
  /* 00000AB2: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000AB4: LSLS            R1, R5, #0x1E */
  /* 00000AB6: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000AB8: LSRS            R5, R0, #0x20 ; ' ' */
  /* 00000ABA: ASRS            R0, R0, #0x20 ; ' ' */
  /* 00000ABC: LSRS            R7, R6, #7 */
  /* 00000ABE: ASRS            R0, R0, #0x20 ; ' ' */
}

/* ===== [orphan 8/73] 0x00000DCC-0x00000DE1 (ROM) ===== */
void orphan_code_DCC(void)
{
  /*
   * Code bytes outside any recognized function.
   * Exported as a standalone stub to preserve full coverage.
   */
  /* 00000DCC: ADDS            R3, #0xA0 */
  /* 00000DCE: CMP             R5, #0xEB */
  /* 00000DD0: LDRB            R1, [R0,#0x16] */
  /* 00000DD2: STRB            R3, [R0,#0x1C] */
  /* 00000DD4: LSRS            R2, R6 */
  /* 00000DD6: STR             R4, [R4,#0x38] */
  /* 00000DD8: B               sub_BA6 */
  /* 00000DDA: LDRH.W          R4, [R12,#0x247] */
  /* 00000DDE: B               loc_103A */
}

/* ===== [orphan 9/73] 0x00000E00-0x00000E04 (ROM) ===== */
void orphan_code_E00(void)
{
  /*
   * Code bytes outside any recognized function.
   * Exported as a standalone stub to preserve full coverage.
   */
  /* 00000E00: CMN             R2, R4 */
  /* 00000E02: LDR             R7, =0x213B510 */
}

/* ===== [orphan 10/73] 0x0000118E-0x00001190 (ROM) ===== */
void loc_118E(void)
{
  /*
   * Code bytes outside any recognized function.
/* <<< end original lines 47661-47900 */
