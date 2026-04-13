
#include <defs.h>

#include <stdarg.h>


//-------------------------------------------------------------------------
// Function declarations

int __fastcall sub_E0677A8(int result, int, int, int);
int __fastcall sub_E06790C(int result);
int __fastcall sub_E0679BC(unsigned int, unsigned int, int, int);
int __fastcall sub_E067B24(unsigned int, unsigned int, int, int);
unsigned int __fastcall sub_E067C6C(unsigned int result, int a2);
int __fastcall sub_E067CCC(int, int);
void __fastcall sub_E067CD4(unsigned int a1, int a2);
BOOL __fastcall sub_E067CE4(unsigned int a1, int a2);
BOOL __fastcall sub_E067CF8(unsigned int a1, int a2);
BOOL __fastcall sub_E067D0C(unsigned int a1, int a2);
BOOL __fastcall sub_E067D20(int a1, int a2);
BOOL __fastcall sub_E067D34(int a1, int a2);
unsigned int __fastcall sub_E067D48(int);
int __fastcall sub_E067D88(__int64 a1, __int64 a2);
int __fastcall sub_E067DBC(unsigned __int8 *, unsigned __int8 *);
int __fastcall sub_E067DD0(unsigned int a1, unsigned int a2, __int64 a3, unsigned int *a4);
int __fastcall sub_E068070(__int64 *a1, unsigned int a2);
void sub_E06811C();
int sub_E068144();
int sub_E068154();
int __fastcall sub_E06818C(int, int, unsigned int);
int sub_E0681A0();
unsigned int __fastcall sub_E0681F8(char *a1, _BYTE *a2, int *a3, int a4);
unsigned int __fastcall sub_E0682C0(int a1, char *a2, unsigned int *a3, _WORD *a4);
int sub_E06834C();
int sub_E0685B0();
__int64 *sub_E068610();
int __fastcall sub_E06862C(unsigned int, char);
int __fastcall sub_E06864C(int a1);
int __fastcall sub_E068684(int a1);
int __fastcall sub_E0686BC(int a1);
int __fastcall sub_E0686F4(int a1);
unsigned int __fastcall sub_E06872C(unsigned int a1, int a2, int a3, int a4);
unsigned int sub_E068774();
void sub_E0687A0();
_BYTE *sub_E0687FC();
_BYTE *sub_E06880C();
_BYTE *sub_E06881C();
_BYTE *sub_E06882C();
_BYTE *sub_E06883C();
int __fastcall sub_E06884C(_DWORD); // weak
unsigned int __fastcall sub_E06884E(int a1, int a2, char a3);
unsigned int sub_E068888();
_BYTE *sub_E0688D0();
_BYTE *sub_E0688E0();
_BYTE *sub_E0688F0();
unsigned int sub_E068938();
unsigned int sub_E0689A8();
void __fastcall __noreturn sub_E068A28(int a1, int a2);
void sub_E068ADC();
void sub_E068B14();
int __fastcall sub_E068B3E(int a1, int a2);
int __fastcall sub_E068C22(int a1, int a2);
int __fastcall sub_E068D06(int a1, int a2);
int __fastcall sub_E068DE6(int a1, int a2);
int sub_E068EC4();
int sub_E068F1C();
int sub_E068F74();
int __fastcall sub_E068FCC(_DWORD); // weak
int __fastcall sub_E068FCE(int result);
int __fastcall sub_E06900C(_DWORD); // weak
unsigned int __fastcall sub_E06900E(unsigned int result, int a2);
void __fastcall sub_E0690C8(int a1);
int __fastcall sub_E069108(_DWORD); // weak
unsigned int __fastcall sub_E06910A(unsigned int result);
unsigned int sub_E069208();
unsigned int sub_E069258();
int __fastcall sub_E06930C(_DWORD, _DWORD); // weak
unsigned int __fastcall sub_E06930E(int a1, unsigned int a2, int a3, int a4);
unsigned int sub_E06936C();
void __fastcall sub_E069420(int a1, int a2);
int sub_E069478();
void process_deferred_profile_action();
void control_event_dispatch_thread();
int __fastcall enqueue_control_event(int event_group, int is_commit, char *payload);
__int64 *__fastcall poll_control_event_slots(int arg0, int arg1);
_BYTE *sub_E06A050();
int sub_E06A060();
int __fastcall sub_E06A078(int a1, int a2);
_BYTE *sub_E06A0F0();
int sub_E06A120();
int sub_E06A150();
char __fastcall sub_E06A15C(char result);
int sub_E06A168();
int sub_E06A174();
int sub_E06A180();
void sub_E06A18C();
int sub_E06A1F0();
unsigned int sub_E06A270();
void __noreturn sub_E06A468(); // weak
void __fastcall __noreturn sub_E06A46A(int a1, int a2, char a3);
void sub_E06A4B0();
int sub_E06A500();
int sub_E06A534();
int sub_E06A560();
int sub_E06A588();
int __fastcall sub_E06A5D4(int, int);
void sub_E06A5E0();
void sub_E06A5EC();
void sub_E06A5F8();
int __fastcall sub_E06A604(unsigned int *);
unsigned int __fastcall sub_E06A624(unsigned int a1, int a2, unsigned int a3);
unsigned int __fastcall sub_E06A650(unsigned int a1, int a2, unsigned int a3);
unsigned int __fastcall sub_E06A67C(unsigned int a1);
int __fastcall sub_E06A6DC(unsigned int *);
_DWORD *sub_E06A6FC();
unsigned int __fastcall sub_E06A794(unsigned int a1, int a2, unsigned int a3);
char __fastcall sub_E06A7C0(char result);
int __fastcall sub_E06A7CC(int);
void sub_E06A81C();
int __fastcall sub_E06A850(int result);
void __fastcall apply_profile_subblock_runtime_side_effects(uint8_t *profile_block);
void sub_E06A92C();
void sub_E06A960();
int __fastcall sub_E06A998(int a1, unsigned int a2, unsigned int a3);
int sub_E06AD24();
__int64 *sub_E06ADD0();
int __fastcall sub_E06ADEC(unsigned int);
int __fastcall sub_E06AE18(unsigned int);
int sub_E06AE30();
int __fastcall sub_E06AE54(int result, int a2, int a3);
int sub_E06AE9C();
int sub_E06AED0();
void __noreturn sub_E06AEE0();
int __fastcall sub_E06AF04(_DWORD); // weak
int __fastcall sub_E06AF08(int a1, int a2, int a3, int a4);
void __noreturn sub_E06AF3C();
__int64 *sub_E06B01C();
void sub_E06B06C();
_BYTE *sub_E06B078();
int __fastcall sub_E06B088(int);
__int64 *sub_E06B0A0();
int sub_E06B0D4();
void __fastcall sub_E06B0FC(int a1, int a2, int a3);
int sub_E06B1DC();
int sub_E06B238();
void sub_E06B25C();
int __fastcall sub_E06B298(int, int, int);
int __fastcall sub_E06B2B0(unsigned int *);
unsigned int __fastcall sub_E06B2D0(unsigned int a1, int a2, int a3, int a4);
void __fastcall sub_E06B30C(int a1, int a2);
int sub_E06B384();
int __fastcall sub_E06B4E8(int a1, int a2);
int sub_E06B54C();
int __fastcall sub_E06B5F0(int a1, int a2, int a3, int a4);
bool __fastcall sensor_reg_write_u8(unsigned __int8 reg_addr, unsigned __int8 value, int lock_token);
int __fastcall sensor_reg_read_u8(unsigned __int8 reg_addr, unsigned __int8 *out_value, unsigned int lock_token);
int __fastcall sub_E06B728(char a1, int a2, int a3);
int __fastcall sub_E06B7B4(char a1, int a2, unsigned int a3);
int sub_E06B874();
int sub_E06B9A4();
int sub_E06BA4C();
unsigned int __fastcall sub_E06BAAC(unsigned int result, int);
void sub_E06BADC();
__int64 *sub_E06BB30();
int __fastcall queue_sensor_tx_packet(unsigned __int8 packet_type, char *payload, unsigned int payload_len);
int __fastcall sub_E06BBB4(int a1, _BYTE *a2, int a3);
BOOL sub_E06BCF4();
int sub_E06BD5C();
int sub_E06BE08();
void sub_E06BE40();
void __fastcall __noreturn sub_E06BEC8(int a1, int a2);
int __fastcall sub_E06BF28(int result);
int __fastcall sub_E06BF9C(int result);
int __fastcall sub_E06C010(int result);
int __fastcall sub_E06C050(int result);
int __fastcall sub_E06C090(int result);
int __fastcall sub_E06C0D0(int result);
int __fastcall sub_E06C10C(int result);
int __fastcall sub_E06C154(int result);
int __fastcall sub_E06C1D8(int result);
int __fastcall sub_E06C25C(int result);
int __fastcall sub_E06C28C(int result);
int __fastcall sub_E06C2BC(int result);
void sub_E06C2DC();
int __fastcall sub_E06C340(int a1);
int sub_E06C38C();
void sub_E06C3CC();
void sub_E06C3F0();
void sub_E06C404();
int __fastcall sub_E06C420(_DWORD); // weak
unsigned int __fastcall sub_E06C422(unsigned int result, int a2, int a3, char a4);
int __fastcall sub_E06C534(int, int);
void __fastcall __noreturn sub_E06C544(int a1, int a2);
int __fastcall sub_E06C654(int);
int __fastcall sub_E06C670(int a1, char *a2, unsigned int a3);
int __fastcall sub_E06C704(int a1, _BYTE *a2);
int __fastcall sub_E06C74C(int a1);
int __fastcall sub_E06C7A0(int);
int __fastcall sub_E06C7D4(int);
int __fastcall sub_E06C7E8(char *a1, int a2);
int __fastcall sub_E06C84C(char *a1, int a2);
int __fastcall sub_E06C8B0(int a1, int a2);
__int64 *sub_E06C8F8();
int macro_compact_storage_pages();
_BYTE *sub_E06CA34();
int __fastcall macro_slot_exists(uint16_t macro_id);
int __fastcall has_pending_transfer_slot(int transfer_id, int transfer_type);
int __fastcall queue_profile_transfer_request(int *request_desc);
int __fastcall sub_E06CC14(int a1);
int __fastcall cancel_transfer_request(int transfer_id, int transfer_type);
void reset_transfer_request_slots();
int __fastcall sub_E06CD24(_DWORD, _DWORD); // weak
int __fastcall sub_E06CD26(unsigned int a1, int a2, int a3);
int __fastcall macro_slot_delete(uint16_t macro_id);
int __fastcall macro_slot_write_metadata(uint16_t macro_id, const void *src, uint32_t len);
int __fastcall macro_slot_read_metadata(uint16_t macro_id, void *dst, uint8_t *inout_len);
uint32_t macro_find_free_page_base();
int __fastcall macro_slot_allocate_storage(uint16_t macro_id, uint32_t size_bytes);
int __fastcall macro_slot_write_chunk(uint16_t macro_id, uint32_t offset, const void *src, uint32_t len);
int __fastcall macro_slot_read_chunk(uint16_t macro_id, uint32_t offset, void *dst, uint32_t len);
uint16_t __fastcall macro_slot_enumerate_ids(uint16_t skip_count, uint8_t *out_be_ids, uint16_t max_ids);
uint16_t macro_slot_count();
void __fastcall macro_get_free_storage_bytes(uint32_t *out_bytes);
void aggregate_input_edge_events();
void __fastcall __noreturn sub_E06D984(int a1, int a2);
void start_macro_main_thread();
int __fastcall sub_E06D9F0(int, int);
int __fastcall sub_E06D9FC(int a1, int a2, __int64 a3);
void sub_E06DA20();
void __fastcall __noreturn sub_E06DA2C(int a1, int a2, int a3, int a4);
_BYTE *sub_E06DB34();
_BYTE *sub_E06DB44();
int __fastcall sub_E06DB78(int, int);
int __fastcall sub_E06DB90(int);
int get_control_transport_mode();
int __fastcall sub_E06DBBC(int result, int a2, int a3, int a4);
int __fastcall sub_E06DC28(int result, int a2, int a3, int a4);
int __fastcall sub_E06DC80(int result, int a2);
int sub_E06DCD4();
int sub_E06DD00();
void __fastcall queue_control_status_report(int report_kind);
void __fastcall apply_polling_rate_command(int arg0, int lock_token);
_DWORD *__fastcall sub_E06E16C(_DWORD *result, char a2);
void apply_active_profile_runtime_state();
int commit_profile_subblock_cache();
/* <<< end original lines 1-250 */

/* >>> original lines 1380-1465 */
int dword_E0851B4[6] = { 1603502080, 1603502592, 1603503104, 0, 0, 0 }; // weak
_UNKNOWN unk_E08522C; // weak
_UNKNOWN unk_E085234; // weak
int dword_E08525C[6] = { 1603502080, 1603502592, 1603503104, 0, 0, 0 }; // weak
int dword_E085284[6] = { 1603502080, 1603502592, 1603503104, 0, 0, 0 }; // weak
_UNKNOWN *off_E0852AC = &unk_E084B60; // weak
_UNKNOWN *off_E0852BC = &unk_E084B60; // weak
_UNKNOWN *off_E0852CC = &unk_E084B60; // weak
_UNKNOWN unk_E0852DC; // weak
_UNKNOWN unk_E085370; // weak
_UNKNOWN unk_E0853E8; // weak
_UNKNOWN *off_E085428 = &unk_E085430; // weak
int dword_E085444[7] = { 33, 587205728, 10272, 65542, 587202560, 1952, 65543 }; // weak
int dword_E085474[20] =
{
  789053440,
  1024,
  8,
  1,
  789053440,
  801171456,
  4096,
  8,
  1,
  801171496,
  801189888,
  768,
  8,
  1,
  801189898,
  801190656,
  256,
  8,
  1,
  801190656
}; // weak
int dword_E08560C[] = { 0 }; // weak
_UNKNOWN *off_E085658 = (_UNKNOWN *)0xE080DFB; // weak
_UNKNOWN *off_E085668 = (_UNKNOWN *)0xE08102B; // weak
_UNKNOWN unk_E085688; // weak
int dword_E085690[2] = { 512, 4096 }; // weak
int *off_E085698[3] = { &dword_E084818, &dword_E0847F0, &dword_E0847C8 }; // weak
_UNKNOWN unk_E0856C0; // weak
_UNKNOWN unk_E085780; // weak
int dword_E085798[6] = { 1603502080, 1603502592, 1603503104, 0, 0, 0 }; // weak
char **off_E0857C0[3] = { &off_E084908, &off_E0848E0, &off_E0848B8 }; // weak
int (*off_E0857E8[3])[3] = { &dword_E0846D8, &dword_E0846B0, &dword_E084688 }; // weak
_UNKNOWN unk_E08582C; // weak
int dword_E08591C[6] = { 1603502080, 1603502592, 1603503104, 0, 0, 0 }; // weak
unsigned __int8 dword_E085944[13] = { 8u, 0u, 0u, 0u, 63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 8u }; // weak
int dword_E08595C[6] = { 1603502080, 1603502592, 1603503104, 0, 0, 0 }; // weak
int dword_E085984[5] = { 1603411968, 587218780, 63, 5, 0 }; // weak
_UNKNOWN unk_E0859CC; // weak
_UNKNOWN unk_E0859E4; // weak
_UNKNOWN unk_E0859F4; // weak
_UNKNOWN *funcs_E079FE2 = (_UNKNOWN *)0xE079CE1; // weak
_UNKNOWN *off_E085A34 = (_UNKNOWN *)0xE0844B0; // weak
char *off_E085A4C = "sysworkq"; // weak
int dword_E085A54 = 1966080000; // weak
int dword_E085AA8[2] = { 20000, 131102 }; // weak
int dword_E085BC0[11] =
{
  67043584,
  1963526660,
  1600414323,
  7368801,
  1380209219,
  5196609,
  1380209219,
  542067521,
  1328369483,
  1962952014,
  6578803
}; // weak
char byte_E085CFE[] = { '\x01' }; // weak
char byte_E085D01[3] = { '\b', '\x04', '\x02' }; // weak
int dword_E085D08[24] =
{
  235802112,
  235802126,
  235802126,
  235802126,
  235802126,
  235802126,
  235802126,
  234950158,
/* <<< end original lines 1380-1465 */

/* >>> original lines 2720-3045 */
  unsigned __int16 *v15; // r8
  int i; // r12
  unsigned int v17; // t1

  v5 = 0;
  v6 = a1 - 2;
  v7 = a1 + 30;
  do
  {
    v8 = *(unsigned __int16 *)(v6 + 2);
    v6 += 2;
    v5 += v8;
  }
  while ( v6 != v7 );
  v9 = 0;
  v10 = 0;
  v11 = 587219282;
  v12 = 587219080;
  result = v5 >> 4;
  do
  {
    v14 = *(unsigned __int16 *)v11;
    v11 += 2;
    if ( v14 > result || *(unsigned __int16 *)v11 <= result )
    {
      if ( MEMORY[0x23004152] > result )
      {
        v10 = 0;
      }
      else if ( MEMORY[0x23004166] <= result )
      {
        v10 = 100;
      }
    }
    else
    {
      v15 = (unsigned __int16 *)v12;
      for ( i = 0; i != 11; ++i )
      {
        v17 = *v15++;
        if ( v17 <= result && *v15 > result )
          v10 = i + v9;
      }
    }
    v9 += 10;
    v12 += 20;
  }
  while ( v9 != 110 );
  *a2 = v10;
  *a4 = result;
  *a3 = v5;
  return result;
}

//----- (0E06834C) --------------------------------------------------------
int sub_E06834C()
{
  int result; // r0
  int v1; // r1
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r2
  bool v6; // zf
  _BYTE *v7; // r1
  int v8; // r0
  int v9; // r10
  int v10; // r4
  char v11; // r3
  char v12; // r3

  result = sub_E0681A0();
  if ( !result )
  {
    sub_E0827B2(587224672);
    sub_E07BC2C((_DWORD *)0x23005660, v1, 93750, 0, 0);
    MEMORY[0x2300A4CF] = 0;
    while ( 1 )
    {
      v2 = sub_E068144() == 0;
      if ( v2 != v4 )
        break;
      v6 = MEMORY[0x2300A4CC] == 255;
      MEMORY[0x2300A4CC] = 0;
      if ( !v6 )
      {
        v3 = MEMORY[0x2300A9DA];
        if ( MEMORY[0x2300A9DA] != v2 )
        {
          MEMORY[0x2300A9DA] = v2;
          MEMORY[0x23004385] = 100;
          v3 = 587246043;
          MEMORY[0x2300A9DB] = 100;
          MEMORY[0x2300A9D9] = 0;
          MEMORY[0x2300A9D8] = 0;
          v5 = 587244749;
          goto LABEL_5;
        }
      }
LABEL_8:
      if ( !MEMORY[0x2300A4CE] )
      {
        if ( MEMORY[0x2300A4CF] > 0xFu )
          goto LABEL_11;
        goto LABEL_10;
      }
      if ( MEMORY[0x2300A4CE] == 2 )
      {
        MEMORY[0x2300A4CF] = 15;
LABEL_10:
        MEMORY[0x23003710] = 2 * MEMORY[0x2300A4CF] + 587244634;
        sub_E06818C(v2, v3, 0x23003708u);
      }
LABEL_11:
      sub_E07AA84((_DWORD *)0x2300580C, v3, -1);
      if ( !MEMORY[0x2300A4CE] )
        MEMORY[0x2300A4CE] = MEMORY[0x2300A4CF] > 0xFu;
      if ( MEMORY[0x2300A4CE] == 1 )
      {
        sub_E0682C0(587244634, (char *)0x23004385, (unsigned int *)0x23007E90, (_WORD *)0x2300A458);
        MEMORY[0x2300A9DB] = *v7;
        MEMORY[0x2300A4CE] = 2;
LABEL_15:
        v8 = 31250;
        goto LABEL_30;
      }
      if ( MEMORY[0x2300A4CE] == 3 )
      {
        v9 = MEMORY[0x2300A9DA];
        sub_E0681F8((char *)0x2300A45A, (_BYTE *)0x2300A9DB, (int *)0x23007E90, MEMORY[0x2300A9DA]);
        MEMORY[0x2300A4CE] = 2;
        if ( MEMORY[0x23004385] == MEMORY[0x2300A9DB] )
        {
          if ( MEMORY[0x23004385] <= 0x63u )
          {
            v10 = 0;
            goto LABEL_46;
          }
          MEMORY[0x23004180] = -1;
          if ( v9 || (v10 = MEMORY[0x23004386], MEMORY[0x23004386]) )
          {
            v10 = 0;
            goto LABEL_26;
          }
          goto LABEL_53;
        }
        if ( v9 )
        {
          if ( MEMORY[0x2300A9DB] == 100 )
          {
            MEMORY[0x2300A4CD] = 1;
            goto LABEL_25;
          }
          if ( MEMORY[0x2300A4CD] )
          {
LABEL_25:
            MEMORY[0x23004385] = 100;
            v10 = 1;
            MEMORY[0x23004180] = -1;
            goto LABEL_26;
          }
          MEMORY[0x23004385] = MEMORY[0x2300A9DB];
          if ( MEMORY[0x2300A9DB] > 0x63u )
          {
            MEMORY[0x23004180] = -1;
            goto LABEL_34;
          }
LABEL_45:
          v10 = 1;
LABEL_46:
          MEMORY[0x23004180] = (MEMORY[0x2300A9DB] >> 1) + 2 * MEMORY[0x2300A9DB] + (MEMORY[0x2300A9DB] >> 4);
          if ( !(v9 | MEMORY[0x23004386]) )
          {
            if ( !MEMORY[0x2300A9DB] )
            {
              MEMORY[0x2300A9D8] = 1;
              MEMORY[0x2300A9D7] = 1;
              sub_E06B238();
              goto LABEL_26;
            }
            if ( MEMORY[0x2300A9DB] <= 0xFu )
            {
              v12 = 1;
              goto LABEL_52;
            }
LABEL_53:
            v12 = 0;
            MEMORY[0x2300A9D7] = 0;
LABEL_52:
            MEMORY[0x2300A9D8] = v12;
          }
LABEL_26:
          v11 = MEMORY[0x2300A9D8];
          if ( MEMORY[0x2300A9D9] == MEMORY[0x2300A9D8] )
          {
            if ( !v10 )
              goto LABEL_28;
            goto LABEL_35;
          }
LABEL_40:
          MEMORY[0x2300A9D9] = v11;
        }
        else
        {
          MEMORY[0x23004385] = MEMORY[0x2300A9DB];
          if ( MEMORY[0x2300A9DB] <= 0x63u )
            goto LABEL_45;
          MEMORY[0x23004180] = -1;
          v11 = MEMORY[0x23004386];
          if ( MEMORY[0x23004386] )
          {
LABEL_34:
            v11 = MEMORY[0x2300A9D8];
            if ( MEMORY[0x2300A9D9] != MEMORY[0x2300A9D8] )
              goto LABEL_40;
          }
          else
          {
            MEMORY[0x2300A9D8] = 0;
            MEMORY[0x2300A9D7] = 0;
            if ( MEMORY[0x2300A9D9] )
              goto LABEL_40;
          }
        }
LABEL_35:
        if ( MEMORY[0x2300A4D0] == 1 )
        {
          sub_E06DD70(3);
          MEMORY[0x2300A628] = 1;
          MEMORY[0x2300A49C] = 0;
        }
      }
LABEL_28:
      if ( MEMORY[0x2300A4CE] )
        goto LABEL_15;
      v8 = 1563;
LABEL_30:
      sub_E07B58C((unsigned int)v8);
    }
    v2 = sub_E068144() == 0;
    MEMORY[0x23004384] = v2;
LABEL_5:
    *(_BYTE *)v5 = 0;
    goto LABEL_8;
  }
  return result;
}
// E068378: variable 'v1' is possibly undefined
// E068390: variable 'v4' is possibly undefined
// E0683A2: variable 'v5' is possibly undefined
// E0683CA: variable 'v3' is possibly undefined
// E068400: variable 'v7' is possibly undefined

//----- (0E0685B0) --------------------------------------------------------
int sub_E0685B0()
{
  int result; // r0
  int v8; // [sp+14h] [bp-Ch]

  sub_E07AF1C(0x23006410u, 587266208, 1024, (int)sub_E06834C, 0, 0, 0, 12, 0, v8, 157);
  sub_E082456();
  sub_E07B5E8(0x23006410u);
  _R3 = 587234952;
  do
  {
    __asm
    {
      LDAEX.W         R1, [R3]
      STLEX.W         PC, R2, [R3]
    }
  }
  while ( result );
  return result;
}
// E0685D6: variable 'v8' is possibly undefined
// E0685F6: variable 'result' is possibly undefined

//----- (0E068610) --------------------------------------------------------
__int64 *sub_E068610()
{
  __int64 *result; // r0

  _R3 = 587234952;
  __asm { LDA.W           R3, [R3] }
  if ( _R3 == 1 )
    return sub_E07B14C((__int64 *)0x23006410);
  return result;
}

//----- (0E06862C) --------------------------------------------------------
int __fastcall sub_E06862C(unsigned int a1, char a2)
{
  if ( a1 > 9 )
    __und(0xFFu);
  return (*(_DWORD *)(*((_DWORD *)&unk_E08518C + a1) + 12) >> a2) & 1;
}

//----- (0E06864C) --------------------------------------------------------
int __fastcall sub_E06864C(int a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r3
  unsigned int v4; // r1

  if ( a1 )
  {
    v1 = sub_E067D88((unsigned int)(31250 * a1 + 999), 1000);
    v2 = v4;
  }
  else
  {
    v1 = 0;
    v2 = 0;
  }
  return sub_E07AE34(587228352, (_DWORD *)0x230065A0, v1, v2);
}
// E06867C: variable 'v4' is possibly undefined

//----- (0E068684) --------------------------------------------------------
int __fastcall sub_E068684(int a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r3
  unsigned int v4; // r1

  if ( a1 )
/* <<< end original lines 2720-3045 */

/* >>> original lines 6460-6715 */
//----- (0E06B4E8) --------------------------------------------------------
int __fastcall sub_E06B4E8(int a1, int a2)
{
  int result; // r0
  int v3; // r4
  int v4; // r3
  unsigned int v5; // r2
  int v6; // r3
  int v7; // r2

  result = MEMORY[0x2300A622];
  if ( MEMORY[0x2300A622] )
  {
    v3 = 100;
    v4 = MEMORY[0x230037AC];
    *(_DWORD *)(MEMORY[0x230037AC] + 260) = 0;
    v5 = 1;
    *(_DWORD *)(v4 + 4) = 1;
    while ( !*(_DWORD *)(MEMORY[0x230037AC] + 260) )
    {
      sub_E0818F0(1u);
      if ( !--v3 )
      {
        v5 = 7;
        v6 = MEMORY[0x230037AC];
        *(_DWORD *)(MEMORY[0x230037AC] + 1280) = 0;
        *(_DWORD *)(v6 + 1280) = 7;
        break;
      }
    }
    sub_E07CE88(0x47u, a2, v5);
    sub_E07CEE8(587235368, 1, v7);
    sub_E07AAD0((unsigned int *)0x230058BC);
    return 1;
  }
  return result;
}
// E06B524: variable 'a2' is possibly undefined
// E06B524: variable 'v5' is possibly undefined
// E06B52C: variable 'v7' is possibly undefined

//----- (0E06B54C) --------------------------------------------------------
int sub_E06B54C()
{
  int result; // r0
  int v1; // r3
  int v2; // r1
  unsigned int v3; // r2
  int v4; // r1
  unsigned int v5; // r2
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r2
  unsigned int v9; // r2

  result = MEMORY[0x2300A622];
  if ( MEMORY[0x2300A622] )
  {
    sub_E072ECC(421);
    v1 = MEMORY[0x230037AC];
    *(_DWORD *)(MEMORY[0x230037AC] + 1280) = 0;
    *(_DWORD *)(v1 + 776) = 536346631;
    sub_E07CEDE(2u);
    sub_E07CEDE(0xAu);
    sub_E07CEDE(7u);
    sub_E07CEDE(0x47u);
    sub_E07CE88(2u, v2, v3);
    sub_E06B2D0(2u, 1, 0, 5);
    sub_E07CE88(0xAu, v4, v5);
    sub_E06B2D0(0xAu, 1, 0, 5);
    sub_E06B2D0(7u, 0, 0, 0);
    sub_E06B2D0(0x47u, 1, 1, 0);
    sub_E07CE88(0x47u, v6, v7);
    sub_E07CEB8(2u, 0, v8);
    sub_E07CEB8(0xAu, 0, v9);
    MEMORY[0x2300A622] = 0;
    return 1;
  }
  return result;
}
// E06B58C: variable 'v2' is possibly undefined
// E06B58C: variable 'v3' is possibly undefined
// E06B59E: variable 'v4' is possibly undefined
// E06B59E: variable 'v5' is possibly undefined
// E06B5C8: variable 'v6' is possibly undefined
// E06B5C8: variable 'v7' is possibly undefined
// E06B5D0: variable 'v8' is possibly undefined
// E06B5D8: variable 'v9' is possibly undefined

//----- (0E06B5F0) --------------------------------------------------------
int __fastcall sub_E06B5F0(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4

  v4 = (_DWORD *)MEMORY[0x230037AC];
  *(_DWORD *)(MEMORY[0x230037AC] + 1852) = a1;
  v4[464] = a2;
  v4[449] = a3;
  v4[450] = a4;
  v4[66] = 0;
  *v4 = 1;
  sub_E07AA84((_DWORD *)0x230058BC, a2, -1);
  *(_DWORD *)(MEMORY[0x230037AC] + 4) = 1;
  return 1;
}

//----- (0E06B630) --------------------------------------------------------
BOOL __fastcall sub_E06B630(char a1, char a2, int a3)
{
  BOOL v5; // r4
  int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r1
  int v17; // r2

  if ( !MEMORY[0x2300A622] )
    return 0;
  _R5 = 587235368;
  __asm { LDA.W           R3, [R5] }
  if ( !_R3 )
    return 0;
  sub_E07CEE8(587235368, 0, a3);
  sub_E07CEA0(0x47u, v13, v14);
  *MEMORY[0x23008024] = a1 | 0x80;
  *(_BYTE *)(MEMORY[0x23008024] + 1) = a2;
  v5 = sub_E06B5F0(MEMORY[0x23008024], 2, MEMORY[0x23008020], 2) != 0;
  sub_E07CE88(0x47u, 1, v15);
  sub_E07CEE8(587235368, v16, v17);
  return v5;
}
// E06B656: variable 'v13' is possibly undefined
// E06B656: variable 'v14' is possibly undefined
// E06B682: variable 'v15' is possibly undefined
// E06B688: variable 'v16' is possibly undefined
// E06B688: variable 'v17' is possibly undefined

//----- (0E06B6A0) --------------------------------------------------------
int __fastcall sub_E06B6A0(char a1, _BYTE *a2, unsigned int a3)
{
  int v5; // r4
  int v13; // r2
  int v14; // r1
  unsigned int v15; // r2
  int v16; // r2

  if ( !MEMORY[0x2300A622] )
    return 0;
  _R5 = 587235368;
  __asm { LDA.W           R3, [R5] }
  if ( !_R3 )
    return 0;
  sub_E07CEA0(0x47u, (int)a2, a3);
  sub_E07CEE8(587235368, 0, v13);
  *MEMORY[0x23008024] = a1 & 0x7F;
  if ( sub_E06B5F0(MEMORY[0x23008024], 1, MEMORY[0x23008020], 1)
    && (*MEMORY[0x23008024] = 0, sub_E06B5F0(MEMORY[0x23008024], 1, MEMORY[0x23008020], 1)) )
  {
    v5 = 1;
    *a2 = *MEMORY[0x23008020];
  }
  else
  {
    v5 = 0;
  }
  sub_E07CE88(0x47u, v14, v15);
  sub_E07CEE8(587235368, 1, v16);
  return v5;
}
// E06B6C8: variable 'v13' is possibly undefined
// E06B6E8: variable 'v14' is possibly undefined
// E06B6E8: variable 'v15' is possibly undefined
// E06B6F0: variable 'v16' is possibly undefined

//----- (0E06B728) --------------------------------------------------------
int __fastcall sub_E06B728(char a1, int a2, int a3)
{
  int v13; // r1
  unsigned int v14; // r2
  char v15; // r1
  unsigned int v16; // r2
  int v17; // r1
  int v18; // r2
  int v19; // r1

  if ( !MEMORY[0x2300A622] )
    return 0;
  _R6 = 587235368;
  __asm { LDA.W           R3, [R6] }
  if ( !_R3 )
    return 0;
  sub_E07CEE8(587235368, 0, a3);
  sub_E07CEA0(0x47u, v13, v14);
  *MEMORY[0x23008024] = a1 & 0x7F;
  sub_E0842F0((_BYTE *)(MEMORY[0x23008024] + 1), v15, a3);
  if ( !sub_E06B5F0(MEMORY[0x23008024], (unsigned __int8)(a3 + 1), MEMORY[0x23008020], a3 + 1) )
    return 0;
  sub_E0842A2(a2, (char *)(MEMORY[0x23008020] + 1), a3);
  sub_E07CE88(0x47u, 1, v16);
  sub_E07CEE8(587235368, v17, v18);
  return v19;
}
// E06B756: variable 'v13' is possibly undefined
// E06B756: variable 'v14' is possibly undefined
// E06B76E: variable 'v15' is possibly undefined
// E06B794: variable 'v16' is possibly undefined
// E06B79A: variable 'v17' is possibly undefined
// E06B79A: variable 'v18' is possibly undefined
// E06B79E: variable 'v19' is possibly undefined

//----- (0E06B7B4) --------------------------------------------------------
int __fastcall sub_E06B7B4(char a1, int a2, unsigned int a3)
{
  int v6; // r7
  int v13; // r2
  char v16; // r1
  _DWORD *v17; // r3
  int v18; // r4

  if ( !MEMORY[0x2300A622] )
    return 0;
  v6 = MEMORY[0x2300A621];
  if ( MEMORY[0x2300A621] )
    return 0;
  if ( !a2 )
    return 0;
  _R5 = 587235368;
  __asm { LDA.W           R3, [R5] }
  if ( !_R3 )
    return 0;
  sub_E07CEA0(0x47u, a2, a3);
  sub_E07CEE8(587235368, v6, v13);
  _R8 = __get_CPSR();
  _R3 = 96;
  __asm { MSR.W           BASEPRI_MAX, R3 }
  __isb(0xFu);
  MEMORY[0x2300A621] = 1;
  MEMORY[0x2300A620] = a2;
  *MEMORY[0x23008024] = a1 & 0x7F;
  sub_E0842F0((_BYTE *)(MEMORY[0x23008024] + 1), v16, a2);
  v17 = (_DWORD *)MEMORY[0x230037AC];
  v18 = a2 + 1;
  *(_DWORD *)(MEMORY[0x230037AC] + 1852) = MEMORY[0x23008024];
  v17[464] = v18;
  v17[449] = MEMORY[0x23008020];
  v17[450] = v18;
  v17[66] = v6;
  *v17 = 1;
  __asm { MSR.W           BASEPRI, R8 }
  __isb(0xFu);
  return 1;
}
// E06B7F0: variable 'v13' is possibly undefined
// E06B822: variable 'v16' is possibly undefined

//----- (0E06B874) --------------------------------------------------------
/* <<< end original lines 6460-6715 */

/* >>> original lines 7800-7905 */
    while ( result != 470 );
  }
  return result;
}

//----- (0E06C534) --------------------------------------------------------
int __fastcall sub_E06C534(int a1, int a2)
{
  return sub_E07AA84((_DWORD *)0x2300586C, a2, 0);
}

//----- (0E06C544) --------------------------------------------------------
void __fastcall __noreturn sub_E06C544(int a1, int a2)
{
  unsigned int v2; // r2
  int v3; // r0
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // [sp+4h] [bp-4h] BYREF

  v11 = a2;
  v2 = MEMORY[0x53013400];
  if ( MEMORY[0x53013400] == 1 )
  {
    MEMORY[0x53013600] = 1850885685;
    sub_E06C404();
  }
  sub_E07CDDE(a1, a2, v2);
  v3 = sub_E06A588();
  sub_E06C340(v3);
  sub_E070910();
  sub_E07CEF6();
  sub_E069478();
  sub_E06936C();
  sub_E06B9A4();
  sub_E06B0A0();
  sub_E06B384();
  sub_E076F2C(&v11);
  sub_E076FAC();
  if ( (v11 & 0x80) == 0 )
  {
    if ( MEMORY[0x2FC0FFF0] != 591755409 )
    {
      v9 = sub_E07CF96();
      if ( !v9 )
        goto LABEL_12;
      goto LABEL_7;
    }
    MEMORY[0x2FC0FFF0] = v11 & 0x80;
  }
  v4 = sub_E07CF96();
  v7 = v4;
  if ( v4 )
  {
    v8 = sub_E070090(v4, v5, v6);
    if ( v8 == 1 )
    {
      v9 = v7;
LABEL_7:
      sub_E06FEF8(v9);
      goto LABEL_12;
    }
    if ( !v8 )
      sub_E070034(v7);
  }
LABEL_12:
  sub_E06DD00();
  sub_E0685B0();
  sub_E06BADC();
  sub_E06AD24();
  sub_E06C2DC();
  sub_E06E504();
  sub_E06D9A0();
  sub_E071438();
  sub_E06A4B0();
  MEMORY[0x2FC0FFF8] = 0;
  MEMORY[0x2300A642] = 1;
  sub_E06C3CC();
  while ( 1 )
  {
    MEMORY[0x53013600] = 1850885685;
    sub_E07AA84((_DWORD *)0x2300586C, v10, -1);
    sub_E07AA1C((unsigned int *)0x2300586C);
    sub_E07B58C(25000);
  }
}
// E06C55A: variable 'a1' is possibly undefined
// E06C55A: variable 'a2' is possibly undefined
// E06C55A: variable 'v2' is possibly undefined
// E06C5A6: variable 'v5' is possibly undefined
// E06C5A6: variable 'v6' is possibly undefined
// E06C618: variable 'v10' is possibly undefined
// E06FEF8: using guessed type int __fastcall sub_E06FEF8(_DWORD);
// E070034: using guessed type int __fastcall sub_E070034(_DWORD);

//----- (0E06C654) --------------------------------------------------------
int __fastcall sub_E06C654(int a1)
{
  int result; // r0

  result = 640 * a1;
/* <<< end original lines 7800-7905 */

/* >>> original lines 8110-8235 */
          v5 = (char *)v2 + 6;
          v6 = 9;
LABEL_4:
          sub_E06BBB4(v6, v5, v4);
          break;
        default:
          break;
      }
      sub_E0828F6(v3);
    }
    sub_E06BE08();
    sub_E06BE40();
  }
}
// E06BED6: variable 'a2' is possibly undefined

//----- (0E06BF28) --------------------------------------------------------
int __fastcall sub_E06BF28(int result)
{
  int v1; // r3
  _BYTE *v2; // r2
  int v3; // r0
  void (__fastcall *apply_perf_mode)(int); // r3

  if ( result )
  {
    v1 = *(unsigned __int8 *)result;
    v2 = &g_profile_storage[214 * g_active_profile_index];
    v2[87] = v1 != 0;
    if ( v1 )
    {
      if ( v2[91] )
      {
        if ( !g_sensor_ops
          || !g_sensor_ops->apply_perf_mode
          || ((int (__fastcall *)(int))g_sensor_ops->get_perf_mode)(214) == 5 )
        {
          goto LABEL_9;
        }
        v3 = 5;
        apply_perf_mode = g_sensor_ops->apply_perf_mode;
      }
      else
      {
        if ( !g_sensor_ops )
          goto LABEL_9;
        apply_perf_mode = g_sensor_ops->apply_perf_mode;
        if ( !apply_perf_mode )
          goto LABEL_9;
        v3 = 4;
      }
    }
    else
    {
      if ( !g_sensor_ops )
        goto LABEL_9;
      apply_perf_mode = g_sensor_ops->apply_perf_mode;
      if ( !apply_perf_mode )
        goto LABEL_9;
      v3 = 2;
    }
    apply_perf_mode(v3);
LABEL_9:
    schedule_config_persist_and_sync(8);
    queue_control_status_report(13);
    return 1;
  }
  return result;
}
// 23006130: using guessed type _BYTE g_profile_storage[4];

//----- (0E06BF9C) --------------------------------------------------------
int __fastcall sub_E06BF9C(int result)
{
  int v1; // r1
  _BYTE *v2; // r2
  char v3; // r3
  int v4; // r0
  void (__fastcall *apply_perf_mode)(int); // r3

  if ( result )
  {
    v1 = *(unsigned __int8 *)result;
    v2 = &g_profile_storage[214 * g_active_profile_index];
    v3 = *(_BYTE *)result;
    if ( *(_BYTE *)result )
      v3 = 1;
    v2[91] = v3;
    if ( v2[87] )
    {
      if ( v1 )
      {
        if ( !g_sensor_ops || !g_sensor_ops->apply_perf_mode || g_sensor_ops->get_perf_mode() == 5 )
          goto LABEL_11;
        v4 = 5;
        apply_perf_mode = g_sensor_ops->apply_perf_mode;
      }
      else
      {
        if ( !g_sensor_ops )
          goto LABEL_11;
        apply_perf_mode = g_sensor_ops->apply_perf_mode;
        if ( !apply_perf_mode )
          goto LABEL_11;
        v4 = 4;
      }
    }
    else
    {
      if ( !g_sensor_ops )
        goto LABEL_11;
      apply_perf_mode = g_sensor_ops->apply_perf_mode;
      if ( !apply_perf_mode )
        goto LABEL_11;
      v4 = 2;
    }
    apply_perf_mode(v4);
LABEL_11:
    schedule_config_persist_and_sync(8);
    queue_control_status_report(13);
    return 1;
  }
  return result;
}
// 23006130: using guessed type _BYTE g_profile_storage[4];

/* <<< end original lines 8110-8235 */

/* >>> original lines 9450-10190 */
  unsigned int v4; // r1

  v3 = sub_E067D88((unsigned int)(a1 + 999), a3);
  return sub_E07AE34(587230608, (_DWORD *)0x23006E40, v3, v4);
}
// E06DA16: variable 'v4' is possibly undefined

//----- (0E06DA20) --------------------------------------------------------
void sub_E06DA20()
{
  sub_E082084(587241428);
}

//----- (0E06DA2C) --------------------------------------------------------
void __fastcall __noreturn sub_E06DA2C(int a1, int a2, int a3, int a4)
{
  int v11; // r3
  int v12; // r1
  int v13; // r1
  int v14; // [sp+4h] [bp-Ch] BYREF
  int v15; // [sp+8h] [bp-8h]
  int v16; // [sp+Ch] [bp-4h]

  v14 = a2;
  v15 = a3;
  v16 = a4;
  while ( 1 )
  {
    sub_E07A760(587241428, (int)&v14, -1);
    _R7 = __get_CPSR();
    _R3 = 96;
    __asm { MSR.W           BASEPRI_MAX, R3 }
    __isb(0xFu);
    _R6 = __get_CPSR();
    __asm { MSR.W           BASEPRI_MAX, R3 }
    __isb(0xFu);
    if ( v14 == 3 )
    {
      v11 = v15;
    }
    else
    {
      if ( v14 != 4 )
      {
        if ( v14 == 2 )
          MEMORY[0x2300A9DD] = v15;
        goto LABEL_10;
      }
      MEMORY[0x2300A9DD] = v15;
      v11 = v16;
    }
    if ( MEMORY[0x23004386] )
    {
      if ( !v11 )
        MEMORY[0x23004386] = 0;
    }
    else if ( v11 )
    {
      MEMORY[0x23004386] = v11;
    }
LABEL_10:
    v12 = MEMORY[0x2300A9DD];
    if ( MEMORY[0x2300A9DD] )
    {
      if ( MEMORY[0x2300A9DC] == 1 )
      {
        MEMORY[0x2300A9DC] = 0;
        sub_E071830();
        goto LABEL_13;
      }
      if ( MEMORY[0x2300A9DC] == 4 )
      {
        MEMORY[0x2300A9DC] = 0;
LABEL_13:
        sub_E06D9F0(10, v12);
      }
      sub_E06B0D4();
      goto LABEL_15;
    }
    if ( !MEMORY[0x2300A9DC] )
    {
      __dsb(0xFu);
      MEMORY[0xE000ED0C] = MEMORY[0xE000ED0C] & 0x700 | 0x5FA0004;
      __dsb(0xFu);
      while ( 1 )
        ;
    }
    if ( MEMORY[0x2300A9DC] == 4 )
    {
      MEMORY[0x2300A9DC] = 1;
      if ( sub_E07137C() == 1 )
      {
        sub_E06D9F0(1, v13);
        sub_E071AA4();
      }
      sub_E06B1DC();
      sub_E06C420(0);
    }
LABEL_15:
    __asm { MSR.W           BASEPRI, R7 }
    __isb(0xFu);
    __asm { MSR.W           BASEPRI, R6 }
    __isb(0xFu);
  }
}
// E06DAA2: variable 'v12' is possibly undefined
// E06DB08: variable 'v13' is possibly undefined
// E06C420: using guessed type int __fastcall sub_E06C420(_DWORD);

//----- (0E06DB34) --------------------------------------------------------
_BYTE *sub_E06DB34()
{
  return sub_E082408(587230784, (int)sub_E06E064);
}

//----- (0E06DB44) --------------------------------------------------------
_BYTE *sub_E06DB44()
{
  sub_E0823FC((_BYTE *)0x23006D90);
  sub_E07AD54(0x23006D90u, 587279008, 2048, 5, 0);
  sub_E06DB34();
  return sub_E06E468();
}

//----- (0E06DB78) --------------------------------------------------------
int __fastcall sub_E06DB78(int a1, int a2)
{
  if ( a1 )
    return sub_E06D9F0(a1, a2);
  else
    return sub_E07AE34(587230608, (_DWORD *)0x23006E40, 0, 0);
}

//----- (0E06DB90) --------------------------------------------------------
int __fastcall sub_E06DB90(int a1)
{
  int v1; // r3
  char *v2; // r2
  int v3; // t1

  v1 = 0;
  v2 = byte_E085D01;
  while ( 1 )
  {
    v3 = (unsigned __int8)*v2++;
    if ( v3 == a1 )
      break;
    if ( ++v1 == 7 )
      return 1;
  }
  return (unsigned __int8)v1;
}

//----- (0E06DBB0) --------------------------------------------------------
int sub_E06DBB0()
{
  return MEMORY[0x2300A9DC];
}

//----- (0E06DBBC) --------------------------------------------------------
int __fastcall sub_E06DBBC(int result, int a2, int a3, int a4)
{
  int v16; // [sp+4h] [bp-Ch] BYREF
  int v17; // [sp+8h] [bp-8h]
  int v18; // [sp+Ch] [bp-4h]

  v16 = a2;
  v17 = a3;
  v18 = a4;
  _R3 = 587235332;
  __asm { LDA.W           R3, [R3] }
  if ( _R3 == 1 )
  {
    _R2 = 587235348;
    do
    {
      __asm
      {
        LDAEX.W         R1, [R2]
        STLEX.W         PC, R3, [R2]
      }
    }
    while ( result );
    _R2 = 587235340;
    __asm
    {
      LDAEX.W         R1, [R2]
      STLEX.W         PC, R3, [R2]
    }
  }
  else if ( MEMORY[0x23004387] != result )
  {
    MEMORY[0x23004387] = result;
    v16 = 3;
    v17 = result;
    while ( 1 )
    {
      result = sub_E07A6AC(587241428, (char *)&v16, 938);
      if ( !result )
        break;
      sub_E06DA20();
    }
  }
  return result;
}
// E06DBE2: conditional instruction was optimized away because r0.4==0

//----- (0E06DC28) --------------------------------------------------------
int __fastcall sub_E06DC28(int result, int a2, int a3, int a4)
{
  int v13; // [sp+4h] [bp-Ch] BYREF
  int v14; // [sp+8h] [bp-8h]
  int v15; // [sp+Ch] [bp-4h]

  v13 = a2;
  v14 = a3;
  v15 = a4;
  _R3 = 587235332;
  __asm { LDA.W           R2, [R3] }
  if ( _R2 == 1 )
  {
    _R3 = 587235336;
    do
    {
      __asm
      {
        LDAEX.W         R1, [R3]
        STLEX.W         PC, R2, [R3]
      }
    }
    while ( result );
  }
  else if ( MEMORY[0x23004388] != result )
  {
    MEMORY[0x23004388] = result;
    v13 = 2;
    v14 = result;
    while ( 1 )
    {
      result = sub_E07A6AC(587241428, (char *)&v13, 938);
      if ( !result )
        break;
      sub_E06DA20();
    }
  }
  return result;
}

//----- (0E06DC80) --------------------------------------------------------
int __fastcall sub_E06DC80(int result, int a2)
{
  _DWORD v2[4]; // [sp+4h] [bp-10h] BYREF

  if ( MEMORY[0x23004388] == result )
  {
    if ( a2 == MEMORY[0x23004387] )
      return result;
    goto LABEL_3;
  }
  MEMORY[0x23004388] = result;
  if ( a2 != MEMORY[0x23004387] )
LABEL_3:
    MEMORY[0x23004387] = a2;
  v2[0] = 4;
  v2[1] = MEMORY[0x23004388];
  v2[2] = MEMORY[0x23004387];
  while ( 1 )
  {
    result = sub_E07A6AC(587241428, (char *)v2, 938);
    if ( !result )
      break;
    sub_E06DA20();
  }
  return result;
}

//----- (0E06DCD4) --------------------------------------------------------
int sub_E06DCD4()
{
  MEMORY[0x2300A9DD] = 0;
  MEMORY[0x23004388] = 0;
  MEMORY[0x2300A9DC] = 4;
  sub_E06DC80(0, 0);
  return sub_E06B1DC();
}

//----- (0E06DD00) --------------------------------------------------------
int sub_E06DD00()
{
  int v1; // [sp+14h] [bp-Ch]

  sub_E06DB44();
  sub_E06E4B0();
  sub_E082066(587241428, 587241468, 0x20000000CLL);
  sub_E07AF1C(0x23006ED0u, 587281056, 512, (int)sub_E06DA2C, 0, 0, 0, 9, 0, v1, 0);
  sub_E082456();
  sub_E07B5E8(0x23006ED0u);
  return sub_E06DCD4();
}
// E06DD3A: variable 'v1' is possibly undefined

//----- (0E06DD70) --------------------------------------------------------
void __fastcall sub_E06DD70(int a1)
{
  int v1; // r3
  int v2; // r2
  char *v3; // r1
  _BYTE *v4; // r3
  int v5; // r6
  char v6; // r2
  int v7; // r3
  char v8; // r2
  _BYTE *v9; // r3
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r6
  _BYTE *v16; // r1
  char v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r0
  int v20; // r0
  _BYTE *v21; // r3
  int v22; // r2
  __int16 v23; // r0
  int v24; // r3
  char v25; // r2
  int v26; // r3
  char v27; // r2

  v1 = MEMORY[0x2300A99B];
  v2 = MEMORY[0x2300A99B] + 2;
  v3 = (char *)(8 * v2 + 587246053);
  *(_DWORD *)(8 * v2 + 0x2300A9E5) = 0;
  *(_DWORD *)(8 * v2 + 0x2300A9E9) = 0;
  *(_BYTE *)(8 * v2 + 0x2300A9E5) = a1;
  switch ( a1 )
  {
    case 1:
      v4 = (_BYTE *)(8 * v1 + 587246053);
      v4[17] = MEMORY[0x2300A9A1] + 1;
      v5 = HIBYTE(MEMORY[0x2300A99C]);
      v4[19] = MEMORY[0x2300A99C];
      v4[18] = v5;
      v6 = MEMORY[0x2300A99E];
      v4[20] = MEMORY[0x2300A99F];
      v4[21] = v6;
      goto LABEL_3;
    case 2:
      v7 = 8 * v1 + 587246053;
      v8 = MEMORY[0x23006134] + 1;
      goto LABEL_10;
    case 3:
      v9 = (_BYTE *)(8 * v1 + 587246053);
      v9[17] = MEMORY[0x23004385];
      v9[18] = MEMORY[0x2300A9DA];
      v9[19] = MEMORY[0x2300A9D9];
      goto LABEL_3;
    case 5:
      goto LABEL_3;
    case 6:
      sub_E084490();
      v10 = MEMORY[0x2300A99B];
      *(_BYTE *)(8 * MEMORY[0x2300A99B] + 0x2300A9F6) = v11 == 8;
      goto LABEL_13;
    case 7:
      v7 = 8 * v1 + 587246053;
      v8 = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006189);
      goto LABEL_10;
    case 8:
      v7 = 8 * v1 + 587246053;
      v8 = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006183);
LABEL_10:
      *(_BYTE *)(v7 + 17) = v8;
LABEL_3:
      if ( MEMORY[0x2300A9DD] )
        goto LABEL_4;
      goto LABEL_23;
    case 9:
      v15 = MEMORY[0x23006134];
      *(_BYTE *)(8 * v1 + 0x2300A9F6) = (MEMORY[0x23006134] << 6)
                                      | (8 * *(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300616D))
                                      | *(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300616E);
      v16 = (_BYTE *)(8 * v1 + 587246053);
      if ( MEMORY[0x2300A4D0] == 1 )
        v17 = MEMORY[0x23004385];
      else
        v17 = 0;
      v16[18] = v17;
      v18 = *(unsigned __int16 *)(214 * v15 + 0x23006165);
      v19 = v18 >> 8;
      v16[20] = v18;
      LOBYTE(v18) = *(_BYTE *)(214 * v15 + 0x23006183);
      v16[19] = v19;
      v16[21] = v18;
      LOBYTE(v19) = *(_BYTE *)(214 * v15 + 0x23006143);
      v16[22] = MEMORY[0x2300AEEE];
      v16[23] = (4 * *(_BYTE *)(214 * v15 + 0x23006142))
              | (8 * v19)
              | *(_BYTE *)(214 * v15 + 0x2300618B)
              | (2 * *(_BYTE *)(214 * v15 + 0x23006184));
      goto LABEL_30;
    case 13:
      v24 = 8 * v1 + 587246053;
      v25 = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300618B);
      *(_BYTE *)(v24 + 17) = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006187);
      *(_BYTE *)(v24 + 18) = v25;
      goto LABEL_34;
    case 15:
      v26 = 8 * v1 + 587246053;
      v27 = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006184);
      goto LABEL_38;
    case 16:
      v26 = 8 * v1 + 587246053;
      v27 = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006186);
      goto LABEL_38;
    case 17:
      v26 = 8 * v1 + 587246053;
      v27 = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006185);
      goto LABEL_38;
    case 25:
      sub_E084490();
      if ( v12 == 8 )
        v13 = 587247342;
      else
        v13 = 0;
      v10 = MEMORY[0x2300A99B];
      if ( v12 == 8 )
        LOBYTE(v13) = *(_BYTE *)v13;
      *(_BYTE *)(8 * MEMORY[0x2300A99B] + 0x2300A9F6) = v13;
LABEL_13:
      if ( MEMORY[0x2300A9DD] )
      {
        v3 = (char *)(8 * (v10 + 2) + 587246053);
LABEL_4:
        sub_E06BB64(7, v3, 8u);
      }
      else
      {
LABEL_23:
        if ( MEMORY[0x2300A9DC] == 1 )
        {
          sub_E084490();
          if ( v14 == 8 )
            sub_E084498();
        }
      }
      ++MEMORY[0x2300A99B];
      break;
    case 33:
      v21 = (_BYTE *)(8 * v1 + 587246053);
      v22 = 214 * MEMORY[0x23006134] + 587227440;
      v23 = *(_WORD *)(214 * MEMORY[0x23006134] + 0x23006169);
      v21[18] = v23;
      v21[17] = HIBYTE(v23);
      LOWORD(v22) = *(_WORD *)(v22 + 59);
      v21[19] = BYTE1(v22);
      v21[20] = v22;
      goto LABEL_34;
    case 34:
      v26 = 8 * v1 + 587246053;
      v27 = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300613F);
      goto LABEL_38;
    case 35:
      v26 = 8 * v1 + 587246053;
      v27 = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006188);
LABEL_38:
      *(_BYTE *)(v26 + 17) = v27;
LABEL_34:
      if ( MEMORY[0x2300A9DD] )
      {
        sub_E06BB64(7, v3, 8u);
      }
      else
      {
LABEL_30:
        if ( MEMORY[0x2300A9DC] == 1 )
        {
          sub_E084490();
          if ( v20 == 8 )
            sub_E084498();
        }
      }
      break;
    default:
      break;
  }
  if ( MEMORY[0x2300A99B] > 7u )
    MEMORY[0x2300A99B] = 0;
}
// E06DE4E: variable 'v11' is possibly undefined
// E06DE96: variable 'v12' is possibly undefined
// E06DEB8: variable 'v14' is possibly undefined
// E06DF58: variable 'v20' is possibly undefined

//----- (0E06E064) --------------------------------------------------------
void __fastcall sub_E06E064(int a1, int a2)
{
  void (__fastcall *v2)(_DWORD); // r3
  char v3; // r3
  unsigned int v4; // r0
  int v5; // r0
  void (__fastcall *v6)(int); // r3
  unsigned int v7; // r0

  if ( MEMORY[0x2300A9DD] )
  {
    MEMORY[0x2300A9E2] = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006183);
  }
  else
  {
    if ( MEMORY[0x2300A9DC] != 1 )
      goto LABEL_4;
    MEMORY[0x2300A9E2] = *(_BYTE *)(214 * MEMORY[0x23006134] + 0x23006183);
    sub_E071C2C(MEMORY[0x2300A9E2]);
  }
  sub_E06DD70(8);
LABEL_4:
  if ( MEMORY[0x23009884] )
  {
    v2 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 56);
    if ( v2 )
      v2(MEMORY[0x2300A9E2]);
  }
  v3 = MEMORY[0x2300A9E2];
  if ( MEMORY[0x2300A9E2] > 0x10u )
  {
    switch ( MEMORY[0x2300A9E2] )
    {
      case 0x20u:
        v7 = 500;
        MEMORY[0x2300A9E3] = 1;
        break;
      case 0x40u:
        v7 = 250;
        MEMORY[0x2300A9E3] = 1;
        break;
      case 0x80u:
        v7 = 125;
        MEMORY[0x2300A9E3] = 1;
        break;
      default:
        return;
    }
    v4 = sub_E06BAAC(v7, a2);
    if ( !*(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300618B) )
    {
      if ( MEMORY[0x23009884] )
      {
        v6 = *(void (__fastcall **)(int))(MEMORY[0x23009884] + 12);
        if ( v6 )
        {
          v5 = 4;
          goto LABEL_20;
        }
      }
      return;
    }
    goto LABEL_11;
  }
  if ( MEMORY[0x2300A9E2] == 16 )
    v3 = 1;
  MEMORY[0x2300A9E3] = v3;
  v4 = sub_E06BAAC(0x3E8u, a2);
  if ( *(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300618B) )
  {
LABEL_11:
    if ( MEMORY[0x23009884]
      && *(_DWORD *)(MEMORY[0x23009884] + 12)
      && (*(int (__fastcall **)(unsigned int))(MEMORY[0x23009884] + 8))(v4) != 5 )
    {
      v5 = 5;
      v6 = *(void (__fastcall **)(int))(MEMORY[0x23009884] + 12);
LABEL_20:
      v6(v5);
      return;
    }
    return;
  }
  if ( MEMORY[0x23009884] )
  {
    v6 = *(void (__fastcall **)(int))(MEMORY[0x23009884] + 12);
    if ( v6 )
    {
      v5 = 2;
      goto LABEL_20;
    }
  }
}
// E06E0A6: variable 'a2' is possibly undefined

//----- (0E06E16C) --------------------------------------------------------
_DWORD *__fastcall sub_E06E16C(_DWORD *result, char a2)
{
  int v2; // r2
  unsigned int v3; // r3
  int v4; // r1
  int v5; // r2
  char v6; // r4
  int v7; // t1

  *result = 0;
  result[1] = 0;
  if ( (a2 & 1) != 0 )
  {
    v2 = 2;
    *(_BYTE *)result = MEMORY[0x2300A9E5];
    v3 = 2;
    do
    {
      if ( *(_BYTE *)(v2 + 587246053) )
      {
        *((_BYTE *)result + v3) = *(_BYTE *)(v2 + 587246053);
        v3 = (unsigned __int8)(v3 + 1);
      }
      ++v2;
    }
    while ( v2 != 8 );
  }
  else
  {
    v3 = 2;
  }
  if ( (a2 & 2) != 0 )
  {
    v4 = 587246062;
    *(_BYTE *)result |= MEMORY[0x2300A9ED];
    LOBYTE(v5) = 6;
    do
    {
      v7 = *(unsigned __int8 *)++v4;
      v6 = v7;
      if ( v7 )
      {
        if ( v3 > 7 )
          return result;
        *((_BYTE *)result + v3) = v6;
        v3 = (unsigned __int8)(v3 + 1);
      }
      v5 = (unsigned __int8)(v5 - 1);
    }
    while ( v5 );
  }
  return result;
}

//----- (0E06E1C8) --------------------------------------------------------
void sub_E06E1C8()
{
  int v0; // r5
  int v1; // r3
  int *v2; // r0
  int v3; // r2
  int v4; // t1
  int v5; // r3
  int v6; // r2
  unsigned __int16 v7; // r1
  int v8; // r0
  int v9; // r1
  void (__fastcall *v10)(_DWORD, _DWORD); // r2
  void (__fastcall *v11)(_DWORD); // r2
  void (__fastcall *v12)(_DWORD); // r2
  void (__fastcall *v13)(_DWORD); // r2
  void (__fastcall *v14)(_DWORD); // r2
  void (__fastcall *v15)(_DWORD); // r2
  int v16; // r5
  int v17; // r6
  int v18; // r7
  int v19; // r1
  void (__fastcall *v20)(int, int); // r3

  sub_E06CCD0();
  nullsub_10();
  v0 = 587245984;
  v1 = MEMORY[0x23006134];
  v2 = (int *)(214 * MEMORY[0x23006134] + 587227501);
  v3 = 214 * MEMORY[0x23006134] + 587227533;
  do
  {
    v4 = *v2++;
    *(_DWORD *)v0 = v4;
    v0 += 4;
  }
  while ( v2 != (int *)v3 );
  v5 = 214 * v1 + 587227440;
  v6 = 4 * MEMORY[0x2300A9A1] + 587245984;
  v7 = *(_WORD *)(4 * MEMORY[0x2300A9A1] + 0x2300A9A2);
  *(_WORD *)(v5 + 53) = v7;
  MEMORY[0x2300A99C] = v7;
  v8 = v7;
  MEMORY[0x2300A99E] = *(_WORD *)(v6 + 4);
  v9 = MEMORY[0x2300A99E];
  *(_WORD *)(v5 + 55) = MEMORY[0x2300A99E];
  if ( *(_BYTE *)(v5 + 92) )
  {
    v10 = *(void (__fastcall **)(_DWORD, _DWORD))(MEMORY[0x23009884] + 16);
    if ( v10 )
      v10(*(unsigned __int16 *)(v5 + 57), *(unsigned __int16 *)(v5 + 59));
  }
  else
  {
    v20 = *(void (__fastcall **)(int, int))(MEMORY[0x23009884] + 16);
    if ( v20 )
      v20(v8, v9);
  }
  v11 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 20);
  if ( v11 )
    v11(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x23006184));
  v12 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 24);
  if ( v12 )
    v12(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x23006189));
  v13 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 32);
  if ( v13 )
    v13(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x23006186));
  v14 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 36);
  if ( v14 )
    v14(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x2300618A));
  v15 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 28);
  if ( v15 )
    v15(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x23006185));
  v16 = 0;
  v17 = 587227440;
  v18 = 587246030;
  do
  {
    ++v16;
    *(_BYTE *)v18++ = sub_E06DB90(*(unsigned __int8 *)(v17 + 83));
    v17 += 214;
  }
  while ( v16 != 3 );
  sub_E06DB78(3, v19);
  sub_E0842A2(587244923, (char *)(214 * MEMORY[0x23006134] + 587227548), 112);
  sub_E06DD70(2);
}
// E06E2B0: variable 'v19' is possibly undefined
// E07CF3E: using guessed type int nullsub_10(void);

//----- (0E06E2F4) --------------------------------------------------------
BOOL sub_E06E2F4()
/* <<< end original lines 9450-10190 */

/* >>> original lines 10690-11295 */
      v31 = MEMORY[0x23009846] - 1;
      MEMORY[0x2300A49C] = 495;
      v32 = MEMORY[0x23009847];
      if ( MEMORY[0x23009847] >= 5u )
        v32 = 5;
      *(_BYTE *)(214 * v31 + 0x2300616E) = v32 - 1;
      v33 = MEMORY[0x23006134];
      if ( v31 == MEMORY[0x23006134] )
      {
        v34 = 587245984;
        v35 = (int *)(214 * v31 + 587227501);
        do
        {
          v36 = *v35++;
          *(_DWORD *)v34 = v36;
          v34 += 4;
        }
        while ( v35 != (int *)(214 * v31 + 587227533) );
        v37 = 4 * MEMORY[0x2300A9A1] + 587245984;
        v38 = 214 * v33 + 587227440;
        v39 = *(_WORD *)(4 * MEMORY[0x2300A9A1] + 0x2300A9A2);
        *(_WORD *)(v38 + 53) = v39;
        MEMORY[0x2300A99C] = v39;
        v40 = *(_WORD *)(v37 + 4);
        *(_WORD *)(v38 + 55) = v40;
        MEMORY[0x2300A99E] = v40;
        if ( MEMORY[0x23009884] )
        {
          v41 = *(void (__fastcall **)(_DWORD, _DWORD))(MEMORY[0x23009884] + 16);
          if ( v41 )
          {
            v41(v39, v40);
            sub_E06DD70(1);
          }
        }
        if ( *(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300618C) )
          *(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300618C) = 0;
      }
      return sub_E070894(8);
    case 3:
      if ( !MEMORY[0x23009846] )
        goto LABEL_12;
      MEMORY[0x2300A628] = 1;
      v42 = MEMORY[0x23009846] - 1;
      MEMORY[0x2300A49C] = 50;
      v43 = 214 * v42 + 587227440;
      v44 = __rev16(MEMORY[0x23009847]);
      v45 = __rev16(MEMORY[0x23009849]);
      *(_WORD *)(v43 + 53) = v44;
      *(_WORD *)(v43 + 55) = v45;
      v46 = v44;
      if ( MEMORY[0x23009880] == 2 )
      {
        if ( v44 >= 0x6590u )
          v46 = 26000;
        *(_WORD *)(214 * v42 + 0x23006165) = v46;
        if ( v45 > 0x6590u )
        {
          *(_BYTE *)(214 * v42 + 0x23006167) = -112;
          v47 = 101;
LABEL_67:
          *(_BYTE *)(214 * v42 + 0x23006168) = v47;
        }
      }
      else if ( MEMORY[0x23009880] == 3 )
      {
        if ( v44 >= 0x7530u )
          v46 = 30000;
        *(_WORD *)(214 * v42 + 0x23006165) = v46;
        if ( v45 > 0x7530u )
        {
          *(_BYTE *)(214 * v42 + 0x23006167) = 48;
          v47 = 117;
          goto LABEL_67;
        }
      }
      if ( v42 == MEMORY[0x23006134] )
      {
        MEMORY[0x2300A99C] = *(_WORD *)(214 * v42 + 0x23006165);
        MEMORY[0x2300A99E] = *(_WORD *)(214 * v42 + 0x23006167);
        v48 = *(void (__fastcall **)(_DWORD, _DWORD))(MEMORY[0x23009884] + 16);
        if ( v48 )
          v48(MEMORY[0x2300A99C], MEMORY[0x2300A99E]);
      }
      return sub_E070894(8);
    case 4:
      if ( !MEMORY[0x23009846] )
        goto LABEL_12;
      v51 = MEMORY[0x23009847];
      if ( MEMORY[0x23009847] )
        v51 = 1;
      v52 = MEMORY[0x23009846] - 1;
      v53 = 214 * v52 + 587227440;
      *(_BYTE *)(214 * v52 + 0x23006185) = v51;
      if ( v52 == MEMORY[0x23006134] )
      {
        if ( MEMORY[0x23009884] )
        {
          v54 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 28);
          if ( v54 )
            v54(*(unsigned __int8 *)(v53 + 85));
        }
      }
      return sub_E070894(8);
    case 8:
      v55 = MEMORY[0x23009846];
      if ( !MEMORY[0x23009846] )
        goto LABEL_12;
      if ( MEMORY[0x23009880] == 2 )
      {
        if ( MEMORY[0x23009847] != 2 && MEMORY[0x23009847] != 1 )
          goto LABEL_12;
        *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x23006189) = MEMORY[0x23009847];
        v56 = v55 - 1;
        if ( v56 == MEMORY[0x23006134] )
        {
          if ( MEMORY[0x23009884] )
          {
            v57 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 24);
            if ( v57 )
              v57(*(unsigned __int8 *)(214 * v56 + 0x23006189));
          }
        }
        goto LABEL_94;
      }
      if ( MEMORY[0x23009880] != 3 )
        goto LABEL_94;
      result = MEMORY[0x23009847];
      if ( (MEMORY[0x23009847] & 0x7Fu) - 1 > 1 && (MEMORY[0x23009847] & 0x7F) != 7 )
        goto LABEL_12;
      v58 = MEMORY[0x23009846] - 1;
      *(_BYTE *)(214 * v58 + 0x23006189) = MEMORY[0x23009847];
      if ( v58 != MEMORY[0x23006134] || !MEMORY[0x23009884] )
        goto LABEL_94;
      v59 = *(void (**)(void))(MEMORY[0x23009884] + 24);
LABEL_104:
      if ( !v59 )
        goto LABEL_94;
      goto LABEL_105;
    case 9:
      if ( !MEMORY[0x23009846] )
        goto LABEL_12;
      MEMORY[0x2300A628] = 1;
      MEMORY[0x2300A49C] = 0;
      v60 = MEMORY[0x23009846] - 1;
      *(_BYTE *)(214 * v60 + 0x23006184) = MEMORY[0x23009847] != 0;
      if ( v60 != MEMORY[0x23006134] || !MEMORY[0x23009884] )
        goto LABEL_94;
      v59 = *(void (**)(void))(MEMORY[0x23009884] + 20);
      goto LABEL_104;
    case 0xA:
      if ( !MEMORY[0x23009846] )
        goto LABEL_12;
      v61 = MEMORY[0x23009847];
      if ( MEMORY[0x23009847] )
        v61 = 1;
      v62 = MEMORY[0x23009846] - 1;
      *(_BYTE *)(214 * v62 + 0x23006186) = v61;
      if ( v62 != MEMORY[0x23006134] || !MEMORY[0x23009884] )
        goto LABEL_94;
      v59 = *(void (**)(void))(MEMORY[0x23009884] + 32);
      goto LABEL_104;
    case 0xB:
      if ( !MEMORY[0x23009846] )
        goto LABEL_12;
      v63 = MEMORY[0x23009847] == 0;
      v64 = MEMORY[0x23009846] - 1;
      v65 = 214 * v64 + 587227440;
      *(_BYTE *)(214 * v64 + 0x23006187) = MEMORY[0x23009847] != 0;
      if ( v63 && *(unsigned __int8 *)(214 * v64 + 0x23006183) > 0x1Fu
        || v64 != MEMORY[0x23006134]
        || !MEMORY[0x23009884] )
      {
        goto LABEL_94;
      }
      v66 = *(void (__fastcall **)(int))(MEMORY[0x23009884] + 12);
      if ( *(_BYTE *)(v65 + 91) )
      {
        if ( v66 && (*(int (**)(void))(MEMORY[0x23009884] + 8))() != 5 )
        {
          v59 = *(void (**)(void))(MEMORY[0x23009884] + 12);
          goto LABEL_105;
        }
      }
      else if ( v66 )
      {
        v66(4);
      }
      goto LABEL_94;
    case 0xD:
    unk_2300A99B = 0;
}
// E06DE54: variable 'v11' is possibly undefined
// E06DE96: variable 'v12' is possibly undefined
// E06DEB8: variable 'v14' is possibly undefined
// E06DF58: variable 'v21' is possibly undefined
// 23006130: using guessed type _BYTE g_profile_storage[4];
// 2300A9E5: using guessed type _DWORD[2];
// 2300A9F6: using guessed type _BYTE[64];

//----- (0E06E064) --------------------------------------------------------
void __fastcall apply_polling_rate_command(int arg0, int lock_token)
{
  void (__fastcall *set_polling_code)(unsigned __int8); // r3
  unsigned __int8 v3; // r3
  unsigned int v4; // r0
  int v5; // r0
  void (__fastcall *apply_perf_mode)(int); // r3
  unsigned int v7; // r0

  if ( BYTE1(g_control_transport_mode) )
  {
    g_active_polling_code = g_profile_storage[214 * g_active_profile_index + 83];
  }
  else
  {
    if ( (unsigned __int8)g_control_transport_mode != 1 )
      goto LABEL_4;
    g_active_polling_code = g_profile_storage[214 * g_active_profile_index + 83];
    sub_E071C2C(g_active_polling_code);
  }
  queue_control_status_report(8);
LABEL_4:
  if ( g_sensor_ops )
  {
    set_polling_code = g_sensor_ops->set_polling_code;
    if ( set_polling_code )
      set_polling_code(g_active_polling_code);
  }
  v3 = g_active_polling_code;
  if ( g_active_polling_code > 0x10u )
  {
    switch ( g_active_polling_code )
    {
      case 0x20u:
        v7 = 500;
        g_motion_flush_period_ticks = 1;
        break;
      case 0x40u:
        v7 = 250;
        g_motion_flush_period_ticks = 1;
        break;
      case 0x80u:
        v7 = 125;
        g_motion_flush_period_ticks = 1;
        break;
      default:
        return;
    }
    v4 = sub_E06BAAC(v7, lock_token);
    if ( !g_profile_storage[214 * g_active_profile_index + 91] )
    {
      if ( g_sensor_ops )
      {
        apply_perf_mode = g_sensor_ops->apply_perf_mode;
        if ( apply_perf_mode )
        {
          v5 = 4;
          goto LABEL_20;
        }
      }
      return;
    }
    goto LABEL_11;
  }
  if ( g_active_polling_code == 16 )
    v3 = 1;
  g_motion_flush_period_ticks = v3;
  v4 = sub_E06BAAC(0x3E8u, lock_token);
  if ( g_profile_storage[214 * g_active_profile_index + 91] )
  {
LABEL_11:
    if ( g_sensor_ops
      && g_sensor_ops->apply_perf_mode
      && ((int (__fastcall *)(unsigned int))g_sensor_ops->get_perf_mode)(v4) != 5 )
    {
      v5 = 5;
      apply_perf_mode = g_sensor_ops->apply_perf_mode;
LABEL_20:
      apply_perf_mode(v5);
      return;
    }
    return;
  }
  if ( g_sensor_ops )
  {
    apply_perf_mode = g_sensor_ops->apply_perf_mode;
    if ( apply_perf_mode )
    {
      v5 = 2;
      goto LABEL_20;
    }
  }
}
// E06E0A6: variable 'lock_token' is possibly undefined
// 23006130: using guessed type _BYTE g_profile_storage[4];

//----- (0E06E16C) --------------------------------------------------------
_DWORD *__fastcall sub_E06E16C(_DWORD *result, char a2)
{
  int v2; // r2
  unsigned int v3; // r3
  unsigned __int8 *v4; // r1
  int v5; // r2
  char v6; // r4
  int v7; // t1
        if ( *(unsigned __int8 *)(v9 + 109) == MEMORY[0x23009847] )
        {
          sub_E0842A2(
            v8,
            (char *)(v7 + 7 * MEMORY[0x23009848] + 110 + 16 * v6 + 587227440),
            *(unsigned __int8 *)(7 * MEMORY[0x23009848] + v7 + 16 * v6 + 587227551) + 2);
          v8 = v10;
        }
        ++v6;
        v9 += 16;
      }
      while ( v6 != 7 );
    }
    return;
  }
  if ( MEMORY[0x23009845] > 0x80u )
  {
    if ( MEMORY[0x23009845] == 129 )
    {
      if ( !MEMORY[0x23009846] )
        goto LABEL_35;
      MEMORY[0x23009847] = *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x2300613F);
      v3 = 2;
    }
    else
    {
      if ( MEMORY[0x23009845] != 131 || !MEMORY[0x23009846] )
        goto LABEL_6;
      v2 = *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x23006143);
      MEMORY[0x23009847] = *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x23006142);
      MEMORY[0x23009848] = v2;
      v3 = 3;
    }
    MEMORY[0x23009843] = v3;
    return;
  }
  if ( MEMORY[0x23009845] == 1 )
  {
    if ( MEMORY[0x23009846] )
    {
      v14 = MEMORY[0x23009847];
      if ( MEMORY[0x23009847] )
        v14 = 1;
      *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x2300613F) = v14;
      goto LABEL_18;
    }
LABEL_35:
    v1 = -94;
    goto LABEL_36;
  }
  if ( MEMORY[0x23009845] == 3 )
  {
    if ( !MEMORY[0x23009846] )
      goto LABEL_6;
    v11 = 214 * (MEMORY[0x23009846] - 1) + 587227440;
    v12 = MEMORY[0x23009847];
    if ( MEMORY[0x23009847] )
      v12 = 1;
    *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x23006142) = v12;
    v13 = MEMORY[0x23009848];
    if ( MEMORY[0x23009848] )
      v13 = 1;
    *(_BYTE *)(v11 + 19) = v13;
LABEL_18:
    sub_E070894(8);
    return;
  }
  if ( MEMORY[0x23009845] )
  {
LABEL_6:
    v1 = -93;
LABEL_36:
    MEMORY[0x23009840] = v1;
    return;
  }
  if ( MEMORY[0x23009846] )
  {
    v4 = MEMORY[0x23009846] - 1;
    do
    {
      if ( *(unsigned __int8 *)(214 * v4 + 587227549 + v0) == MEMORY[0x23009847] )
      {
        v5 = 7 * MEMORY[0x23009848] + 110 + 214 * v4 + v0;
        *(_DWORD *)(v5 + 587227440) = MEMORY[0x23009849];
        *(_WORD *)(v5 + 587227444) = MEMORY[0x2300984D];
        *(_BYTE *)(v5 + 587227446) = MEMORY[0x2300984F];
        if ( v4 == MEMORY[0x23006134] )
          sub_E0842A2(587244923, (char *)(214 * v4 + 587227548), 112);
      }
      v0 += 16;
    }
    while ( v0 != 112 );
    goto LABEL_18;
  }
}
// E06EF38: variable 'v10' is possibly undefined

//----- (0E06EFB4) --------------------------------------------------------
void sub_E06EFB4()
{
  int v0; // r3
  char v1; // r2
  char v2; // r7
  __int16 v3; // r6
  int v4; // r3
  int v5; // r0
  int v6; // r3
  _DWORD *v7; // r3
  int j; // r1
  int v9; // t1
  int v10; // r0
  _DWORD *v11; // r3
  int i; // r1
  int v13; // t1
  int v14; // r2
  int v15; // r1
  int *v16; // r2
  int *v17; // r1
  int v18; // t1
  int v19; // r2
  int v20; // r3
  int v21; // t1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // t1

  v0 = 587241536;
  if ( MEMORY[0x23009845] > 3u )
  {
    switch ( MEMORY[0x23009845] )
    {
      case 0x81u:
        if ( MEMORY[0x23009846] )
        {
          v22 = 214 * (MEMORY[0x23009846] - 1) + 587227533;
          v23 = 587241543;
          v24 = 214 * (MEMORY[0x23009846] - 1) + 587227545;
          do
          {
            v25 = *(_DWORD *)v22;
            v22 += 4;
            *(_DWORD *)v23 = v25;
            v23 += 4;
          }
          while ( v22 != v24 );
          *(_WORD *)v23 = *(_WORD *)v22;
          *(_BYTE *)(v23 + 2) = *(_BYTE *)(v22 + 2);
          return;
        }
        break;
      case 0x82u:
        if ( MEMORY[0x23009846] )
        {
          MEMORY[0x23009848] = *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x2300613D);
          MEMORY[0x23009843] = 3;
          return;
        }
        break;
      case 0x80u:
        if ( MEMORY[0x23009846] )
        {
          v14 = 214 * (MEMORY[0x23009846] - 1);
          v15 = v14 + 26 * MEMORY[0x23009847] + 587227440;
          MEMORY[0x23009848] = *(_BYTE *)(v14 + 26 * MEMORY[0x23009847] + 0x2300614B);
          MEMORY[0x23009849] = *(_BYTE *)(v14 + 26 * MEMORY[0x23009847] + 0x2300614C);
          v16 = (int *)(v14 + 26 * MEMORY[0x23009847] + 587227472);
          MEMORY[0x2300984A] = *(_WORD *)(v15 + 29);
          v0 = 587241547;
          v17 = v16 + 5;
          do
          {
            v18 = *v16++;
            *(_DWORD *)v0 = v18;
            v0 += 4;
          }
          while ( v16 != v17 );
          v1 = *(_BYTE *)v16;
          goto LABEL_24;
        }
        break;
      default:
        v1 = -93;
LABEL_24:
        *(_BYTE *)v0 = v1;
        return;
    }
LABEL_23:
    v1 = -94;
    goto LABEL_24;
  }
  switch ( MEMORY[0x23009845] )
  {
    case 1:
      if ( !MEMORY[0x23009846] )
        goto LABEL_23;
      v19 = 587241543;
      v20 = 214 * (MEMORY[0x23009846] - 1) + 587227533;
      do
      {
        v21 = *(_DWORD *)v19;
        v19 += 4;
        *(_DWORD *)v20 = v21;
        v20 += 4;
      }
      while ( v19 != 587241555 );
      *(_WORD *)v20 = MEMORY[0x23009853];
      *(_BYTE *)(v20 + 2) = MEMORY[0x23009855];
      goto LABEL_16;
    case 2:
      if ( !MEMORY[0x23009846] )
        goto LABEL_23;
      *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x2300613D) = MEMORY[0x23009848];
      if ( MEMORY[0x23004386] && MEMORY[0x2300A9DA] )
      {
        MEMORY[0x2300A617] = 1;
        MEMORY[0x2300A492] = 0;
      }
      v10 = 214 * MEMORY[0x23006134] + 587227440;
      goto LABEL_15;
    case 3:
      MEMORY[0x2300A618] = 1;
      MEMORY[0x2300A60A] = MEMORY[0x23009846];
      MEMORY[0x2300A60C] = MEMORY[0x23009848];
      return;
    default:
      if ( !MEMORY[0x23009846] )
        goto LABEL_23;
      v2 = MEMORY[0x23009849];
      v3 = MEMORY[0x2300984A];
      v4 = 214 * (MEMORY[0x23009846] - 1);
      v5 = MEMORY[0x23004386];
      if ( MEMORY[0x23009847] == 255 )
      {
        *(_BYTE *)(214 * (MEMORY[0x23009846] - 1) + 0x2300614B) = MEMORY[0x23009848];
        *(_BYTE *)(v4 + 587227468) = v2;
        *(_WORD *)(v4 + 587227469) = v3;
        v11 = (_DWORD *)(v4 + 587227472);
        for ( i = 587241547; i != 587241567; i += 4 )
        {
          v13 = *(_DWORD *)i;
          *v11++ = v13;
        }
        *(_BYTE *)v11 = MEMORY[0x2300985F];
        if ( v5 && MEMORY[0x2300A9DA] )
        {
          MEMORY[0x2300A617] = 1;
          MEMORY[0x2300A492] = 0;
        }
        v10 = 214 * MEMORY[0x23006134] + 587227440;
      }
      else
      {
        v6 = v4 + 26 * MEMORY[0x23009847];
        *(_BYTE *)(v6 + 587227467) = MEMORY[0x23009848];
        *(_BYTE *)(v6 + 587227468) = v2;
        *(_WORD *)(v6 + 587227469) = v3;
        v7 = (_DWORD *)(v6 + 587227472);
        for ( j = 587241547; j != 587241567; j += 4 )
        {
          v9 = *(_DWORD *)j;
          *v7++ = v9;
        }
        *(_BYTE *)v7 = MEMORY[0x2300985F];
        if ( v5 && MEMORY[0x2300A9DA] )
        {
          MEMORY[0x2300A617] = 1;
          MEMORY[0x2300A492] = 0;
        }
        v10 = 214 * MEMORY[0x23006134] + 587227440;
      }
LABEL_15:
      sub_E06A8CC((unsigned __int8 *)(v10 + 27));
LABEL_16:
      sub_E070894(8);
      break;
  }
}

//----- (0E06F1DC) --------------------------------------------------------
void __fastcall sub_E06F1DC(int a1, unsigned int a2)
{
  char v2; // r3
  char v3; // r3
  unsigned __int16 v4; // r5
  int v5; // r0
  unsigned __int16 v6; // r5
  unsigned int v7; // r0
  unsigned __int16 v8; // r5
  unsigned int v9; // r6
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // [sp+4h] [bp-4h] BYREF

  v12 = a2;
  if ( MEMORY[0x23009845] <= 6u )
  {
    if ( MEMORY[0x23009845] )
    {
      switch ( MEMORY[0x23009845] )
/* <<< end original lines 10690-11295 */

/* >>> original lines 11820-12420 */
      v69 = g_ctrl_target_id - 1;
      g_profile_storage[214 * v69 + 86] = v68;
      if ( v69 != g_active_profile_index || !g_sensor_ops )
        goto LABEL_94;
      set_motion_sync = (void (*)(void))g_sensor_ops->set_ripple_control;
      goto LABEL_104;
    case 0xBu:
      if ( !g_ctrl_target_id )
        goto LABEL_12;
      v70 = MEMORY[0x23009847] == 0;
      v71 = g_ctrl_target_id - 1;
      v72 = &g_profile_storage[214 * v71];
      v72[87] = MEMORY[0x23009847] != 0;
      if ( v70 && v72[83] > 0x1Fu || v71 != g_active_profile_index || !g_sensor_ops )
        goto LABEL_94;
      apply_perf_mode = g_sensor_ops->apply_perf_mode;
      if ( v72[91] )
      {
        if ( apply_perf_mode && g_sensor_ops->get_perf_mode() != 5 )
        {
          set_motion_sync = (void (*)(void))g_sensor_ops->apply_perf_mode;
          goto LABEL_105;
        }
      }
      else if ( apply_perf_mode )
      {
        apply_perf_mode(4);
      }
      goto LABEL_94;
    case 0xDu:
      if ( !g_ctrl_target_id )
        goto LABEL_12;
      v83 = MEMORY[0x23009847];
      if ( MEMORY[0x23009847] )
        v83 = 1;
      g_profile_storage[214 * g_ctrl_target_id - 126] = v83;
      goto LABEL_94;
    case 0x13u:
      if ( !g_ctrl_target_id )
        goto LABEL_12;
      if ( MEMORY[0x23009847] == 1 && (unsigned __int8)g_sensor_backend_id == 2 )
        goto LABEL_4;
      g_profile_storage[214 * g_ctrl_target_id - 123] = MEMORY[0x23009847] != 0;
      unk_2300A628 = 1;
      unk_2300A49C = 0;
      queue_control_status_report(13);
      v74 = g_ctrl_target_id - 1;
      v75 = &g_profile_storage[214 * v74];
      if ( !v75[91] )
      {
        if ( v74 != g_active_profile_index || !g_sensor_ops )
          goto LABEL_94;
        get_perf_mode = g_sensor_ops->get_perf_mode;
        if ( (unsigned __int8)v75[83] > 0x10u )
        {
          if ( !get_perf_mode )
            goto LABEL_94;
          if ( get_perf_mode() == 4 )
            goto LABEL_94;
          set_motion_sync = (void (*)(void))g_sensor_ops->apply_perf_mode;
          if ( !set_motion_sync )
            goto LABEL_94;
        }
        else
        {
          if ( !get_perf_mode )
            goto LABEL_94;
          if ( get_perf_mode() == 2 )
            goto LABEL_94;
          set_motion_sync = (void (*)(void))g_sensor_ops->apply_perf_mode;
          if ( !set_motion_sync )
            goto LABEL_94;
        }
LABEL_105:
        set_motion_sync();
        goto LABEL_94;
      }
      if ( v74 == g_active_profile_index )
      {
        if ( g_sensor_ops )
        {
          v76 = g_sensor_ops->get_perf_mode;
          if ( v76 )
          {
            if ( v76() != 5 )
            {
              set_motion_sync = (void (*)(void))g_sensor_ops->apply_perf_mode;
              if ( set_motion_sync )
                goto LABEL_105;
            }
          }
        }
      }
LABEL_94:
      lock_ctx = schedule_config_persist_and_sync(8);
LABEL_95:
      v32 = 2;
LABEL_46:
      g_ctrl_payload_len = v32;
      return lock_ctx;
    case 0x14u:
        v5 = sub_E06F9A4((unsigned __int8)v2[6]);
        v6 = v2[8];
        MEMORY[0x23009819] = v5;
        MEMORY[0x2300981D] = v6;
        MEMORY[0x2300981E] = v2[9];
        MEMORY[0x23009820] = 10;
        MEMORY[0x2300981C] = sub_E07CF40((unsigned __int8)v2[7]);
        MEMORY[0x23009818] = 3;
        goto LABEL_41;
      case 2:
        if ( MEMORY[0x2300A9C0] )
        {
          sub_E0711CC();
          MEMORY[0x2300A9C0] = 0;
        }
        sub_E0842F0((_BYTE *)0x23009818, 0, 20);
        v7 = (unsigned __int8)v2[6];
        v8 = v2[8];
        if ( v2[9] )
        {
          v17 = sub_E06F9A4((unsigned __int8)v2[6]);
          MEMORY[0x2300981F] = v18;
          MEMORY[0x23009819] = v17;
          v19 = (unsigned __int8)v2[7];
          MEMORY[0x2300981E] = v8;
          MEMORY[0x2300981C] = sub_E07CF40(v19);
          if ( v20 )
          {
            switch ( v20 )
            {
              case 1:
                v21 = 2;
                goto LABEL_62;
              case 2:
                v21 = 1;
LABEL_62:
                MEMORY[0x2300981D] = v21;
                break;
              case 255:
                MEMORY[0x2300981D] = -1;
                break;
            }
          }
          v16 = 6;
LABEL_53:
          MEMORY[0x23009818] = v16;
          goto LABEL_41;
        }
        sub_E07CF40((unsigned __int8)v2[7]);
        v9 = sub_E06F9A4(v7);
        v12 = (unsigned __int8)v2[11];
        MEMORY[0x23009819] = v9;
        if ( v12 )
        {
          MEMORY[0x2300981E] = v8;
          MEMORY[0x2300981C] = v11;
          if ( v10 )
          {
            switch ( v10 )
            {
              case 1:
                v15 = 2;
                goto LABEL_51;
              case 2:
                v15 = 1;
LABEL_51:
                MEMORY[0x2300981D] = v15;
                break;
              case 255:
                MEMORY[0x2300981D] = -1;
                break;
            }
          }
          v16 = 5;
          MEMORY[0x23009820] = v12;
          goto LABEL_53;
        }
        MEMORY[0x2300981C] = v11;
        MEMORY[0x2300981E] = v8;
        if ( !v10 )
          goto LABEL_40;
        if ( v10 == 1 )
        {
          v13 = 2;
        }
        else
        {
          if ( v10 != 2 )
          {
            if ( v10 == 255 )
              MEMORY[0x2300981D] = -1;
            goto LABEL_40;
          }
          v13 = 1;
        }
        MEMORY[0x2300981D] = v13;
LABEL_40:
        MEMORY[0x23009818] = 1;
        sub_E07103C((_DWORD *)0x23009818);
        MEMORY[0x2300A9C0] = 1;
LABEL_41:
        sub_E07103C((_DWORD *)0x23009818);
        v14 = 1;
LABEL_42:
        MEMORY[0x2300A9C0] = v14;
        break;
      case 3:
        if ( MEMORY[0x2300A9C0] )
        {
          sub_E0711CC();
          MEMORY[0x2300A9C0] = 0;
        }
        sub_E0842F0((_BYTE *)0x23009818, 0, 20);
        v22 = (unsigned __int8)v2[6];
        MEMORY[0x23009818] = 2;
        v23 = sub_E06F9A4(v22);
        v25 = v2[8];
        MEMORY[0x23009819] = v23;
        MEMORY[0x2300981D] = v25;
        v26 = (unsigned __int8)v2[12];
        if ( !v2[12] )
          goto LABEL_41;
        if ( v26 == 1 )
        {
          MEMORY[0x2300981C] = v24;
        }
        else
        {
          if ( v26 == 2 )
          {
            LOBYTE(v26) = 1;
          }
          else if ( v26 != 255 )
          {
            goto LABEL_41;
          }
          MEMORY[0x2300981C] = v26;
        }
        goto LABEL_41;
      case 4:
        if ( MEMORY[0x2300A9C0] )
        {
          sub_E0711CC();
          MEMORY[0x2300A9C0] = 0;
        }
        sub_E0842F0((_BYTE *)0x23009818, 0, 20);
        v27 = (unsigned __int8)v2[6];
        MEMORY[0x23009818] = 4;
        v28 = sub_E06F9A4(v27);
        v29 = *((_WORD *)v2 + 4);
        MEMORY[0x23009819] = v28;
        MEMORY[0x2300981C] = v29;
        MEMORY[0x23009820] = 10;
        goto LABEL_41;
      default:
        if ( !MEMORY[0x2300A9C0] )
          continue;
        sub_E0711CC();
        v14 = 0;
        goto LABEL_42;
    }
  }
}
// E06FAD2: variable 'v1' is possibly undefined
// E06FB8E: variable 'v11' is possibly undefined
// E06FB94: variable 'v10' is possibly undefined
// E06FBF6: variable 'v18' is possibly undefined
// E06FC06: variable 'v20' is possibly undefined
// E06FC54: variable 'v24' is possibly undefined
// E071218: using guessed type int __fastcall sub_E071218(_DWORD, _DWORD);

//----- (0E06FCD4) --------------------------------------------------------
int __fastcall sub_E06FCD4(char a1)
{
  int result; // r0

  result = a1 & 0x1F;
  MEMORY[0x5F938404] = 1 << result;
  return result;
}

//----- (0E06FCE8) --------------------------------------------------------
void __fastcall sub_E06FCE8(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r2
  int v6; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r2
  char v13; // r0
  _BYTE *v14; // r3
  int v15; // r2
  int v16; // r1

  if ( *(_BYTE *)a1 )
  {
    MEMORY[0x2300A4AA] += *(_WORD *)(a1 + 2);
    MEMORY[0x2300A4A8] += *(_WORD *)(a1 + 4);
  }
  if ( sub_E06DBB0() != 1 )
  {
    if ( sub_E06DBB0() )
      goto LABEL_9;
    MEMORY[0x2300A9C2] = 0;
    MEMORY[0x2300A9C3] = 0;
    MEMORY[0x2300A9C4] = 0;
    MEMORY[0x2300A9C5] = 0;
    MEMORY[0x2300A9C6] = 0;
    MEMORY[0x2300A9C7] = 0;
    MEMORY[0x2300A9C8] = 0;
    MEMORY[0x2300A9C9] = 0;
    if ( (sub_E07CF80(587241632) & 2) != 0 || (v11 = sub_E07CF80(587241424) & 0x10) != 0 )
    {
      v11 = 1;
      *(_BYTE *)(v10 + 1) = MEMORY[0x2300A9E1] + MEMORY[0x2300A6DE];
      LOWORD(v12) = MEMORY[0x2300A4AA];
    }
    else
    {
      v12 = MEMORY[0x2300A4AA];
      v16 = MEMORY[0x2300A4A8];
      *(_BYTE *)(v10 + 1) = 0;
      if ( !v12 )
      {
        if ( !v16 )
          goto LABEL_9;
        v11 = 0;
      }
    }
    *(_WORD *)(v10 + 2) = v12;
    *(_WORD *)(v10 + 4) = MEMORY[0x2300A4A8];
    v13 = sub_E07CF80(587241628);
    *v14 = v13;
    if ( !sub_E06BB64(3, (char *)0x2300A9C2, 8u) )
      goto LABEL_9;
    MEMORY[0x2300A4A8] = 0;
    MEMORY[0x2300A4AA] = 0;
    if ( !v11 )
      goto LABEL_9;
    MEMORY[0x2300A9E1] = 0;
    sub_E07CF86(587241632, -3, v15);
    MEMORY[0x2300A6DE] = 0;
LABEL_7:
    sub_E07CF86(587241424, -17, v3);
    goto LABEL_9;
  }
  sub_E084490();
  if ( v2 == 7 )
  {
    MEMORY[0x2300A4A8] = 0;
    MEMORY[0x2300A4AA] = 0;
    if ( (sub_E07CF80(587241632) & 2) == 0 && (sub_E07CF80(587241424) & 0x10) == 0 )
      goto LABEL_9;
    MEMORY[0x2300A9E1] = 0;
    sub_E07CF86(587241632, -3, 0);
    goto LABEL_7;
  }
  v4 = (__int16)(MEMORY[0x2300A4AA] | MEMORY[0x2300A4A8]);
  if ( MEMORY[0x2300A4A8] )
  {
    if ( (sub_E07CF80(587241424) & 0x20) != 0 )
    {
      sub_E07CF86(587241424, -33, v5);
      MEMORY[0x2300A4AA] += MEMORY[0x2300A4A2];
      MEMORY[0x2300A4A8] += MEMORY[0x2300A4A0];
    }
    sub_E084498();
    if ( v6 == 1 )
    {
      MEMORY[0x2300A4A8] = 0;
      MEMORY[0x2300A4AA] = 0;
    }
    v4 = 1;
  }
  if ( (sub_E07CF80(587241632) & 2) != 0 || (sub_E07CF80(587241424) & 0x10) != 0 )
  {
    sub_E084498();
    if ( v8 == 1 )
    {
      MEMORY[0x2300A9E1] = 0;
      MEMORY[0x2300A6DE] = 0;
      sub_E07CF86(587241632, -3, v7);
      sub_E07CF86(587241424, -17, v9);
LABEL_20:
      sub_E06B1DC();
      goto LABEL_9;
    }
  }
  if ( v4 )
    goto LABEL_20;
LABEL_9:
  if ( *(_BYTE *)(a1 + 1) )
    sub_E068ADC();
  else
    sub_E068B14();
}
// E06FD1A: variable 'v2' is possibly undefined
// E06FD42: variable 'v3' is possibly undefined
// E06FD7E: variable 'v5' is possibly undefined
// E06FDAC: variable 'v6' is possibly undefined
// E06FDD2: variable 'v8' is possibly undefined
// E06FDE0: variable 'v7' is possibly undefined
// E06FDEA: variable 'v9' is possibly undefined
// E06FE44: variable 'v10' is possibly undefined
// E06FE5A: variable 'v14' is possibly undefined
// E06FE82: variable 'v15' is possibly undefined

//----- (0E06FEE4) --------------------------------------------------------
int __fastcall sub_E06FEE4(char a1)
{
  int result; // r0

  result = a1 & 0x1F;
  MEMORY[0x5F938408] = 1 << result;
  return result;
}

//----- (0E06FEFA) --------------------------------------------------------
int __fastcall sub_E06FEFA(int a1, int a2, int a3, char a4)
{
  void (__fastcall *v6)(int, int); // r2
  int v7; // r1
  int v8; // r0
  void (__fastcall *v9)(_DWORD); // r2
  void (__fastcall *v10)(_DWORD); // r2
  void (__fastcall *v11)(_DWORD); // r2
  void (__fastcall *v12)(_DWORD); // r2
  void (__fastcall *v13)(_DWORD); // r3
  void (__fastcall *v14)(_DWORD); // r3
  _DWORD v15[5]; // [sp+0h] [bp-14h] BYREF

  MEMORY[0x2300A9E3] = a4;
  MEMORY[0x2300A9E4] = a4;
  sub_E06FCD4(72);
  sub_E07CF7C(0x5DCu);
  sub_E06FEE4(72);
  sub_E07CF7C(0x5DCu);
  sub_E06FCD4(72);
  sub_E07CF7C(0x5DCu);
  if ( a1 == 2 )
  {
    MEMORY[0x2300A9CA] = 2;
    return 1;
  }
  if ( a1 == 3 )
  {
    MEMORY[0x2300A9CA] = 3;
    MEMORY[0x23009884] = &dword_E085A54;
    if ( !sub_E07C2A4 )
    {
      MEMORY[0x23009884] = sub_E07C2A4;
      return (int)sub_E07C2A4;
    }
    v15[1] = sub_E06FCE8;
    v15[2] = sub_E06B4E8;
    v15[3] = sub_E06C3F0;
    if ( sub_E07C2A4(v15) == 1 )
    {
      MEMORY[0x23009880] = 3;
      v6 = *(void (__fastcall **)(int, int))(MEMORY[0x23009884] + 16);
      if ( *(_BYTE *)(214 * MEMORY[0x23006134] + 0x2300618C) )
      {
        if ( !v6 )
        {
LABEL_13:
          v9 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 20);
          if ( v9 )
            v9(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x23006184));
          v10 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 24);
          if ( v10 )
            v10(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x23006189));
          v11 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 32);
          if ( v11 )
            v11(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x23006186));
          v12 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 36);
          if ( v12 )
            v12(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x2300618A));
          v13 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 28);
          if ( v13 )
            v13(*(unsigned __int8 *)(214 * MEMORY[0x23006134] + 0x23006185));
          v14 = *(void (__fastcall **)(_DWORD))(MEMORY[0x23009884] + 40);
          if ( v14 )
            v14(0);
          return 1;
        }
        v7 = *(unsigned __int16 *)(214 * MEMORY[0x23006134] + 0x2300616B);
        v8 = *(unsigned __int16 *)(214 * MEMORY[0x23006134] + 0x23006169);
      }
      else
      {
        if ( !v6 )
          goto LABEL_13;
        v7 = *(unsigned __int16 *)(214 * MEMORY[0x23006134] + 0x23006167);
        v8 = *(unsigned __int16 *)(214 * MEMORY[0x23006134] + 0x23006165);
      }
      v6(v8, v7);
      goto LABEL_13;
    }
  }
  return 1;
}
// E085A54: using guessed type int dword_E085A54;

//----- (0E070036) --------------------------------------------------------
int __fastcall sub_E070036(int a1, int a2, int a3, char a4)
{
  _DWORD v5[5]; // [sp+0h] [bp-14h] BYREF

  MEMORY[0x2300A9E3] = a4;
  MEMORY[0x2300A9E4] = a4;
  if ( a1 == 3 )
  {
    MEMORY[0x2300A9CA] = 3;
    v5[1] = sub_E06FCE8;
    v5[2] = sub_E06B4E8;
    v5[3] = sub_E06C3F0;
    MEMORY[0x23009884] = &dword_E085A54;
    if ( sub_E07C474 )
    {
      sub_E07C474((int)v5);
      MEMORY[0x23009880] = 3;
    }
  }
  return 1;
}
// E085A54: using guessed type int dword_E085A54;

//----- (0E070090) --------------------------------------------------------
int __fastcall sub_E070090(int a1, int a2, unsigned int a3)
{
  int result; // r0

  if ( a1 != 3 )
    return 2;
  result = (int)sub_E08290A;
  if ( sub_E08290A )
    return sub_E08290A((int)sub_E08290A, a2, a3);
  return result;
}

//----- (0E0700A4) --------------------------------------------------------
void sub_E0700A4()
{
  void (*v0)(void); // r3
  int v1; // r3
  int v2; // r4
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r2
  int v11; // r0
  int v12; // r2

  ++MEMORY[0x2300A9E4];
  if ( MEMORY[0x2300A9E4] < (unsigned int)MEMORY[0x2300A9E3] || !MEMORY[0x2300A9E3] )
    return;
  MEMORY[0x2300A9E4] = 0;
  if ( MEMORY[0x23009884] )
  {
    v0 = *(void (**)(void))(MEMORY[0x23009884] + 64);
    if ( v0 )
    {
      v0();
      return;
    }
  }
  if ( sub_E06DBB0() )
  {
    if ( sub_E06DBB0() != 1 )
      return;
    sub_E084490();
    if ( v7 == 7 )
    {
      MEMORY[0x2300A4A8] = 0;
      MEMORY[0x2300A4AA] = 0;
      if ( (sub_E07CF80(587241632) & 2) != 0 || (sub_E07CF80(587241424) & 0x10) != 0 )
      {
        MEMORY[0x2300A9E1] = 0;
        MEMORY[0x2300A6DE] = 0;
        sub_E07CF86(587241424, -17, 587245278);
        sub_E07CF86(587241632, -3, v8);
      }
      return;
    }
    if ( ((sub_E07CF80(587241632) & 2) != 0 || (sub_E07CF80(587241424) & 0x10) != 0) && (sub_E084498(), v11 == 1) )
    {
      MEMORY[0x2300A9E1] = 0;
      sub_E07CF86(587241632, -3, v10);
      MEMORY[0x2300A6DE] = 0;
      sub_E07CF86(587241424, -17, v12);
/* <<< end original lines 11820-12420 */

/* >>> original lines 12590-12750 */
        if ( sub_E07EB24(587225516, **(unsigned __int8 ***)(k + 4), 0, 1) )
          goto LABEL_28;
      }
      sub_E07E0E6(587225516, 0, 0, 0, 0);
      if ( !sub_E07E198(587225516) )
        MEMORY[0x23009890] = 587225516;
    }
  }
  while ( 1 )
LABEL_28:
    sub_E07B58C(157);
}
// E070480: using guessed type int sub_E070480();

//----- (0E070480) --------------------------------------------------------
void __fastcall sub_E070480(int a1, _BYTE *a2, int a3)
{
  int v3; // r4
  int v4; // r3
  int v5; // r0

  LOBYTE(v3) = *a2;
  v4 = MEMORY[0x2300A9CD];
  switch ( *a2 )
  {
    case 0:
      a3 = MEMORY[0x2300A9CC];
      if ( !MEMORY[0x2300A9CC] )
      {
        a1 = sub_E07E1F8(MEMORY[0x23009890]);
        if ( a1 != -116 )
        {
          if ( a1 )
            return;
          MEMORY[0x2300A9CC] = 1;
        }
        v4 = MEMORY[0x2300A9CD];
      }
      if ( v4 != 1 )
      {
        if ( v4 == 3 )
        {
          v3 = 1;
          goto LABEL_9;
        }
LABEL_37:
        sub_E06DBBC(1, (int)a2, a3, v4);
        LOBYTE(v3) = 1;
        goto LABEL_13;
      }
      break;
    case 1:
      if ( MEMORY[0x2300A9CC] )
      {
        a1 = sub_E07E254(MEMORY[0x23009890], (int)a2);
        if ( a1 )
          return;
        v4 = MEMORY[0x2300A9CD];
        MEMORY[0x2300A9CC] = 0;
      }
      if ( v4 )
      {
        if ( v4 == 3 )
        {
          v3 = 0;
          goto LABEL_9;
        }
LABEL_38:
        sub_E06DC80(0, 0);
        LOBYTE(v3) = 0;
        goto LABEL_13;
      }
      break;
    case 2:
      if ( MEMORY[0x2300A9CD] == 3 )
      {
        v3 = MEMORY[0x2300A9CB];
        if ( MEMORY[0x2300A9CB] != 3 )
          goto LABEL_9;
      }
      break;
    case 3:
      MEMORY[0x2300A9CB] = MEMORY[0x2300A9CD];
      if ( MEMORY[0x2300A9CD] != 3 )
      {
        if ( MEMORY[0x23003896] || MEMORY[0x230038F2] || MEMORY[0x2300394E] )
          sub_E06B25C();
        goto LABEL_13;
      }
      break;
    case 4:
      v3 = MEMORY[0x2300A9CD];
      if ( MEMORY[0x2300A9CD] )
        v3 = 1;
      if ( MEMORY[0x2300A9CD] != v3 )
      {
        if ( MEMORY[0x2300A9CD] == 3 )
          goto LABEL_9;
        goto LABEL_32;
      }
      break;
    case 5:
      if ( MEMORY[0x2300A9CD] != 2 )
      {
        if ( MEMORY[0x2300A9CD] == 3 )
        {
          v3 = 2;
LABEL_9:
          a3 = MEMORY[0x23003896];
          if ( MEMORY[0x23003896]
            || (a3 = MEMORY[0x230038F2], MEMORY[0x230038F2])
            || (v4 = MEMORY[0x2300394E], MEMORY[0x2300394E]) )
          {
            sub_E06B298(a1, (int)a2, a3);
          }
          else
          {
LABEL_32:
            switch ( v3 )
            {
              case 0:
                goto LABEL_38;
              case 1:
                goto LABEL_37;
              case 2:
                goto LABEL_39;
              default:
                break;
            }
          }
        }
        else
        {
LABEL_39:
          v5 = sub_E06DC28(1, (int)a2, a3, v4);
          _R3 = 587241612;
          do
          {
            __asm
            {
              LDAEX.W         R1, [R3]
              STLEX.W         PC, R2, [R3]
            }
          }
          while ( v5 );
          _R3 = 587241608;
          __asm
          {
            LDAEX.W         R1, [R3]
            STLEX.W         PC, R2, [R3]
          }
          LOBYTE(v3) = 2;
        }
LABEL_13:
        MEMORY[0x2300A9CD] = v3;
      }
      break;
    default:
      return;
  }
}
/* <<< end original lines 12590-12750 */

/* >>> original lines 12755-13160 */
//----- (0E0705B0) --------------------------------------------------------
int __fastcall sub_E0705B0(int a1, int a2)
{
  int result; // r0

  if ( MEMORY[0x2300A9CC] )
    return sub_E07E12E(MEMORY[0x23009890], a2);
  return result;
}

//----- (0E0705C8) --------------------------------------------------------
void sub_E0705C8()
{
  int v0; // [sp+14h] [bp-Ch]

  sub_E07AF1C(0x23007160u, 587284640, 4096, (int)sub_E07030C, 0, 0, 0, -16, 0, v0, 32);
  sub_E082456();
  sub_E07B5E8(0x23007160u);
}
// E0705F0: variable 'v0' is possibly undefined

//----- (0E070618) --------------------------------------------------------
__int64 *sub_E070618()
{
  return sub_E07B14C((__int64 *)0x23007160);
}

//----- (0E070624) --------------------------------------------------------
void __noreturn sub_E070624()
{
  __dsb(0xFu);
  MEMORY[0xE000ED0C] = MEMORY[0xE000ED0C] & 0x700 | 0x5FA0004;
  __dsb(0xFu);
  while ( 1 )
    ;
}

//----- (0E070648) --------------------------------------------------------
int sub_E070648()
{
  return sub_E07AE34(587231760, (_DWORD *)0x230072F0, 0x493Eu, 0);
}

//----- (0E07065C) --------------------------------------------------------
int __fastcall sub_E07065C(int a1, int a2)
{
  return sub_E081216((int)&off_E084B38, a1, a2);
}
// E084B38: using guessed type char *off_E084B38;

//----- (0E070678) --------------------------------------------------------
int sub_E070678()
{
  return sub_E08123C();
}

//----- (0E070694) --------------------------------------------------------
int sub_E070694()
{
  int result; // r0
  int v7; // r2

  _R6 = __get_CPSR();
  _R3 = 96;
  __asm { MSR.W           BASEPRI_MAX, R3 }
  __isb(0xFu);
  MEMORY[0x230063C0] = 80;
  MEMORY[0x23006406] = sub_E07D062((unsigned __int8 *)0x230063C0, 17, 0);
  __asm { MSR.W           BASEPRI, R6 }
  __isb(0xFu);
  result = sub_E070678();
  _R3 = 587241620;
  do
  {
    __asm { LDAEX.W         R1, [R3] }
    __asm { STLEX.W         PC, R1, [R3] }
  }
  while ( v7 );
  if ( MEMORY[0x2300A9D3] )
    sub_E070624();
  return result;
}
// E0706DC: variable 'v7' is possibly undefined

//----- (0E0706F8) --------------------------------------------------------
int sub_E0706F8()
{
  int result; // r0
  int v7; // r2

  _R6 = __get_CPSR();
  _R3 = 96;
  __asm { MSR.W           BASEPRI_MAX, R3 }
  __isb(0xFu);
  MEMORY[0x23006130] = 656;
  MEMORY[0x230063B8] = sub_E07D062((unsigned __int8 *)0x23006130, 162, 0);
  __asm { MSR.W           BASEPRI, R6 }
  __isb(0xFu);
  result = sub_E070678();
  _R3 = 587241620;
  do
  {
    __asm { LDAEX.W         R1, [R3] }
    __asm { STLEX.W         PC, R1, [R3] }
  }
  while ( v7 );
  if ( MEMORY[0x2300A9D4] )
    sub_E070624();
  return result;
}
// E070740: variable 'v7' is possibly undefined

//----- (0E070760) --------------------------------------------------------
void __noreturn sub_E070760()
{
  _R6 = __get_CPSR();
  _R3 = 96;
  __asm { MSR.W           BASEPRI_MAX, R3 }
  __isb(0xFu);
  sub_E0842A2(587227440, (char *)&unk_E084E90, 656);
  MEMORY[0x230063B8] = sub_E07D062((unsigned __int8 *)0x23006130, 162, 0);
  __asm { MSR.W           BASEPRI, R6 }
  __isb(0xFu);
  sub_E070678();
  sub_E070624();
}

//----- (0E0707B0) --------------------------------------------------------
int sub_E0707B0()
{
  int result; // r0
  int v7; // r2

  _R5 = __get_CPSR();
  _R3 = 96;
  __asm { MSR.W           BASEPRI_MAX, R3 }
  __isb(0xFu);
  MEMORY[0x2300601A] = sub_E07D062((unsigned __int8 *)0x23005AB0, 346, 0);
  __asm { MSR.W           BASEPRI, R5 }
  __isb(0xFu);
  result = sub_E070678();
  _R3 = 587241620;
  do
  {
    __asm { LDAEX.W         R1, [R3] }
    __asm { STLEX.W         PC, R1, [R3] }
  }
  while ( v7 );
  return result;
}
// E0707F8: variable 'v7' is possibly undefined

//----- (0E070804) --------------------------------------------------------
_BYTE *sub_E070804()
{
  return sub_E082408(587231936, (int)sub_E070694);
}

//----- (0E070814) --------------------------------------------------------
_BYTE *sub_E070814()
{
  return sub_E082408(587231984, (int)sub_E0706F8);
}

//----- (0E070824) --------------------------------------------------------
_BYTE *sub_E070824()
{
  return sub_E082408(587232080, (int)sub_E070760);
}

//----- (0E070834) --------------------------------------------------------
int sub_E070834()
{
  return sub_E07AE34(587231760, (_DWORD *)0x23007350, 0x186Au, 0);
}

//----- (0E070848) --------------------------------------------------------
_BYTE *sub_E070848()
{
  return sub_E082408(587232032, (int)sub_E0707B0);
}

//----- (0E070858) --------------------------------------------------------
_BYTE *sub_E070858()
{
  sub_E0823FC((_BYTE *)0x23007210);
  sub_E07AD54(0x23007210u, 587288736, 1024, 7, 0);
  sub_E070804();
  sub_E070814();
  sub_E070848();
  return sub_E070824();
}

//----- (0E070894) --------------------------------------------------------
int __fastcall sub_E070894(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r1

  result = sub_E06DBB0();
  if ( result == 1 )
    result = sub_E06B1DC();
  switch ( a1 )
  {
    case 4:
      v4 = 587231936;
      return sub_E07AE34(587231760, (_DWORD *)v4, 0x61Bu, 0);
    case 8:
    case 2:
      _R3 = 587241620;
      do
      {
        __asm { LDAEX.W         R1, [R3] }
        __asm { STLEX.W         PC, R1, [R3] }
      }
      while ( v3 );
      return sub_E070648();
    case 32:
      _R3 = 587241620;
      do
      {
        __asm { LDAEX.W         R1, [R3] }
        __asm { STLEX.W         PC, R1, [R3] }
      }
      while ( v3 );
      v4 = 587232032;
      return sub_E07AE34(587231760, (_DWORD *)v4, 0x61Bu, 0);
  }
  return result;
}
// E0708D0: variable 'v3' is possibly undefined

//----- (0E070910) --------------------------------------------------------
int sub_E070910()
{
  int v0; // r5
  int v1; // r6
  int v2; // r7
  int v3; // r1
  int result; // r0
  int *v5; // r2
  int v6; // r3
  int v7; // t1

  sub_E070858();
  sub_E07065C(1728512, 587228096);
  if ( MEMORY[0x230063C0] != 80 || MEMORY[0x23006406] != sub_E07D062((unsigned __int8 *)0x230063C0, 17, 0) )
    sub_E0842A2(587228096, aP, 80);
  sub_E07065C(1732608, 587227440);
  if ( MEMORY[0x23006130] != 656 || MEMORY[0x230063B8] != sub_E07D062((unsigned __int8 *)0x23006130, 162, 0) )
    sub_E0842A2(587227440, (char *)&unk_E084E90, 656);
  sub_E07065C(1736704, 587225776);
  if ( MEMORY[0x2300601A] != sub_E07D062((unsigned __int8 *)0x23005AB0, 346, 0) )
    sub_E0842F0((_BYTE *)0x23005AB0, 0, 1392);
  sub_E06CA34();
  v0 = 0;
  sub_E06E31C();
  v1 = 587227440;
  v2 = 587246030;
  do
  {
    ++v0;
    *(_BYTE *)v2++ = sub_E06DB90(*(unsigned __int8 *)(v1 + 83));
    v1 += 214;
  }
  while ( v0 != 3 );
  v3 = MEMORY[0x23006134];
  result = 587245984;
  v5 = (int *)(214 * MEMORY[0x23006134] + 587227501);
  v6 = 214 * MEMORY[0x23006134] + 587227533;
  do
  {
    v7 = *v5++;
    *(_DWORD *)result = v7;
    result += 4;
  }
  while ( v5 != (int *)v6 );
  MEMORY[0x2300A99C] = *(_WORD *)(214 * v3 + 0x23006165);
  MEMORY[0x2300A99E] = *(_WORD *)(214 * v3 + 0x23006167);
  return result;
}
// E085120: using guessed type char aP;

//----- (0E070A24) --------------------------------------------------------
void sub_E070A24()
{
  MEMORY[0x5302C400] = 0;
  MEMORY[0x5302C490] = -1;
  MEMORY[0x5302C220] = 0;
  MEMORY[0x5302C010] = 1;
  while ( !MEMORY[0x5302C220] )
    ;
  MEMORY[0x5302C220] = 0;
}

//----- (0E070A58) --------------------------------------------------------
void sub_E070A58()
{
  sub_E070A24();
  if ( MEMORY[0x230098A4] )
  {
    if ( *MEMORY[0x230098A4] )
      ((void (*)(void))*MEMORY[0x230098A4])();
  }
}

//----- (0E070A74) --------------------------------------------------------
int __fastcall sub_E070A74(int result)
{
  _DWORD *v1; // r4
  int v2; // r3
  int v3; // r2
  unsigned int v4; // r2
  int v5; // r3
  int (*v6)(void); // r3

  v1 = (_DWORD *)result;
  if ( (MEMORY[0x5302C488] & 0x800) != 0 )
  {
    if ( MEMORY[0x5302C22C] )
    {
      MEMORY[0x5302C22C] = 0;
      v2 = ++MEMORY[0x230098B0];
      v3 = *(_DWORD *)(result + 8);
      if ( v3 )
      {
        if ( v2 == v3 )
          v4 = 0;
        else
          v4 = 3125;
        result = sub_E07AE90((_DWORD *)0x23003480, MEMORY[0x5302C488] << 20, v4, 0);
      }
    }
  }
  if ( (MEMORY[0x5302C488] & 0x40) != 0 && MEMORY[0x5302C218] )
  {
    MEMORY[0x5302C218] = 0;
    v5 = *(unsigned __int8 *)v1;
    if ( v5 == 1 )
    {
      if ( ++MEMORY[0x230098B4] != v1[2] )
        return result;
      sub_E070A24();
      v6 = (int (*)(void))v1[3];
      return v6();
    }
    if ( v5 == 6 && ++MEMORY[0x230098B4] == v1[3] )
    {
      sub_E070A24();
      v6 = (int (*)(void))v1[4];
      return v6();
    }
  }
  return result;
}

//----- (0E070B18) --------------------------------------------------------
_DWORD *__fastcall sub_E070B18(char a1, unsigned int a2)
{
  __int64 v3; // r0

  MEMORY[0x2300AA38] = a1;
  sub_E079360((unsigned __int8 *)&unk_E085370);
  if ( a2 < 0xA )
    a2 = 10;
  MEMORY[0x53028200] = 0;
  MEMORY[0x53028308] = -1;
  LODWORD(v3) = sub_E067D88(31250LL * a2 + 999, 1000);
  return sub_E07BC2C((_DWORD *)0x23005708, SHIDWORD(v3), 32, 0, v3);
}
// E070B60: variable 'v3' is possibly undefined

//----- (0E070B78) --------------------------------------------------------
int __fastcall sub_E070B78(int result, unsigned int a2)
{
  int v2; // r2
  int v3; // r2
  __int16 v4; // r3
  _BYTE v5[5]; // [sp+4h] [bp-Ch]
  __int16 v6; // [sp+Ah] [bp-6h]
  unsigned __int8 v7; // [sp+Ch] [bp-4h]

  MEMORY[0x5302C704] = 1;
  MEMORY[0x5302CE44] = 0;
  MEMORY[0x5302CE48] = 0;
  MEMORY[0x5302CE3C] = 0;
  MEMORY[0x5302CE40] = 1;
  if ( a2 == 2 )
  {
    MEMORY[0x5302CE34] = 204;
    v2 = -858993460;
    goto LABEL_5;
  }
  if ( a2 > 2 )
  {
    if ( a2 != 255 )
      return result;
    v3 = 220;
    goto LABEL_10;
  }
  if ( a2 )
  {
    v3 = 106;
LABEL_10:
    MEMORY[0x5302CE34] = v3;
/* <<< end original lines 12755-13160 */

/* >>> original lines 14622-15140 */
      if ( v10 <= 0x50 )
        v8 = dword_E085D08;
      else
        v10 = 14;
      if ( !v11 )
        v10 = *((unsigned __int8 *)v8 + v10);
      unk_5302C710 = v10;
      sub_E070CF8(v3, v5);
      v12 = *(unsigned __int8 *)(v3 + 235429209) * unk_2300A4AC;
      v13 = (100 - v6) * v12 / v6 + v12;
      sub_E079360((unsigned __int8 *)&unk_E085370);
      sub_E070DCC(0, v14);
      unk_53028200 = 0;
      unk_53028308 = -1;
      v15 = sub_E07937C((int *)&unk_E085370, v13);
      sub_E081C18((int *)&unk_E085370, 1, v15, 2, 0);
      _R6 = __get_CPSR();
      _R3 = 96;
      __asm { MSR.W           BASEPRI_MAX, R3 }
      __isb(0xFu);
      unk_53025000 = 1;
      v22 = sub_E079BCC(unk_2300AA36);
      if ( v22 )
        v22 = sub_E081CB0(1 << unk_2300AA36);
      sub_E070D28(v22, v23);
      sub_E079878(unk_2300AA36, 1392673092, (int)&unk_5302C000);
      _R3 = 587241644;
      do
      {
        __asm { LDAEX.W         R1, [R3] }
        __asm { STLEX.W         PC, R1, [R3] }
      }
      while ( v24 );
      result = (_DWORD *)sub_E081C8C(1 << unk_2300AA36);
      __asm { MSR.W           BASEPRI, R6 }
      __isb(0xFu);
      return result;
    case 6:
      v1 = result[2];
      v2 = *((_BYTE *)result + 6);
LABEL_6:
      result = sub_E070B18(v2, v1);
      break;
    default:
      return result;
  }
  return result;
}
// E0710BA: variable 'v7' is possibly undefined
// E0710EE: variable 'v8' is possibly undefined
// E071116: variable 'v14' is possibly undefined
// E07116A: variable 'v23' is possibly undefined
// E071188: variable 'v24' is possibly undefined
// E085D08: using guessed type int dword_E085D08[24];

//----- (0E0711CC) --------------------------------------------------------
void sub_E0711CC()
{
  int v0; // r0
  int v1; // r1

  sub_E079360((unsigned __int8 *)&unk_E085370);
  sub_E081BE0((int)&unk_E085370);
  sub_E0827B2(587224840);
  unk_2300AA37 = 0;
  v0 = sub_E079BCC(unk_2300AA36);
  if ( v0 )
    v0 = sub_E081CB0(1 << unk_2300AA36);
  sub_E070D28(v0, v1);
  sub_E070A24();
}
// E0711FA: variable 'v1' is possibly undefined

//----- (0E07121C) --------------------------------------------------------
int __fastcall sub_E07121C(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  bool v6; // zf
  int result; // r0
  _DWORD v8[4]; // [sp+Ch] [bp-10h] BYREF

  v8[0] = 1000000;
  v8[1] = a4;
  v8[2] = a1;
  sub_E079318((int)&unk_E085370, (int)v8, (int)nullsub_14);
  sub_E072EF4(40, -4, 0);
  unk_230098A8 = a1;
  sub_E07DD8C(44, -4, (int)sub_E070A74, a1, 0);
  sub_E072EB0(44);
  v5 = sub_E079798(587246134);
  v6 = v5 == 195887104;
  if ( v5 == 195887104 )
    result = 0;
  else
    result = -14;
  if ( v6 )
    unk_230098A4 = a1 + 12;
  return result;
}
// E079798: using guessed type int __fastcall sub_E079798(_DWORD);
// E07D098: using guessed type int nullsub_14();

//----- (0E07129C) --------------------------------------------------------
int sub_E07129C()
{
  char v1; // [sp+7h] [bp-1h] BYREF

  v1 = 0;
  sub_E071C84(&v1);
  LOBYTE(dword_230063D6[23]) = v1;
  schedule_config_persist_and_sync(4);
  sub_E06A7C0(3);
  return 1;
}
// E07129C: using guessed type int sub_E07129C();
// 230063D6: using guessed type unsigned __int16 dword_230063D6[2077];
// 23006404: using guessed type _DWORD[1027];

//----- (0E0712D0) --------------------------------------------------------
int sub_E0712D0()
{
  sub_E07AA1C((unsigned int **)&dword_2300588C[8]);
  return 1;
}
// E0712D0: using guessed type int sub_E0712D0();
// 2300588C: using guessed type unsigned int dword_2300588C[28];

//----- (0E0712E0) --------------------------------------------------------
int sub_E0712E0()
{
  int v0; // r0

  v0 = sub_E06A7C0(2);
  _R3 = 587241808;
  do
  {
    __asm
    {
      LDAEX.W         R1, [R3]
      STLEX.W         PC, R2, [R3]
    }
  }
  while ( v0 );
  return 1;
}
// E0712E0: using guessed type int sub_E0712E0();

//----- (0E071300) --------------------------------------------------------
int sub_E071300()
{
  int v0; // r0

  sub_E06A7C0(2);
  unk_230099E0 = 0;
  unk_230099E4 = 0;
  v0 = sub_E06B1DC();
  _R3 = 587241808;
  __asm { LDA.W           R2, [R3] }
  if ( _R2 == 1 )
  {
    do
    {
      __asm
      {
        LDAEX.W         R1, [R3]
        STLEX.W         PC, R2, [R3]
      }
    }
    while ( v0 );
  }
  return 1;
}
// E071300: using guessed type int sub_E071300();

//----- (0E071340) --------------------------------------------------------
int sub_E071340()
{
  int v6; // r2

  unk_2300A628 = 1;
  _R4 = 587241808;
  unk_2300A49C = 0;
  sub_E06A7C0(3);
  __asm { LDA.W           R3, [R4] }
  if ( !_R3 )
  {
    sub_E06B1DC();
    do
    {
      __asm
      {
        LDAEX.W         R3, [R4]
        STLEX.W         PC, R5, [R4]
      }
    }
    while ( v6 );
  }
  return 1;
}
// E07136A: variable 'v6' is possibly undefined
// E071340: using guessed type int sub_E071340();

//----- (0E07137C) --------------------------------------------------------
int sub_E07137C()
{
  int result; // r0

  result = sub_E071C74();
  if ( result != 4 )
  {
    LOWORD(dword_230098B8[17]) = 106;
    BYTE1(dword_230098B8[15]) = g_profile_storage[214 * g_active_profile_index + 87];
    dword_230098B8[19] = dword_FFFE010;
    HIWORD(dword_230098B8[15]) = 256;
    HIWORD(dword_230098B8[16]) = 30000;
    LOBYTE(dword_230098B8[16]) = 1;
    dword_230098B8[20] = sub_E0712E0;
    dword_230098B8[5] = 0;
    dword_230098B8[6] = 0;
    dword_230098B8[22] = sub_E071340;
    LOBYTE(dword_230098B8[15]) = 0;
    dword_230098B8[23] = sub_E071300;
    dword_230098B8[21] = 0;
    dword_230098B8[24] = sub_E07D09A;
    dword_230098B8[26] = 0;
    dword_230098B8[25] = sub_E07129C;
    dword_230098B8[7] = 0;
    dword_230098B8[27] = sub_E06A534;
    dword_230098B8[28] = sub_E06A560;
    dword_230098B8[29] = sub_E0712D0;
    dword_230098B8[30] = sub_E06A5E0;
    dword_230098B8[31] = sub_E06A5EC;
    dword_230098B8[32] = sub_E06A5F8;
    result = sub_E0719B4((char *)&dword_230098B8[13], &dword_230098B8[5]);
    if ( result != 1 )
      return 2;
  }
  return result;
}
// E07129C: using guessed type int sub_E07129C();
// E0712D0: using guessed type int sub_E0712D0();
// E0712E0: using guessed type int sub_E0712E0();
// E071300: using guessed type int sub_E071300();
// E071340: using guessed type int sub_E071340();
// E07D09A: using guessed type int sub_E07D09A();
// FFFE010: using guessed type _DWORD dword_FFFE010;
// 23006130: using guessed type _BYTE g_profile_storage[4];
// 230098B8: using guessed type _DWORD dword_230098B8[49];
// 230098CC: using guessed type _DWORD;
// 230098D0: using guessed type _DWORD;
// 230098D4: using guessed type _DWORD;
// 230098F4: using guessed type _DWORD;
// 230098F8: using guessed type _DWORD;
// 230098FC: using guessed type _DWORD;
// 23009904: using guessed type _DWORD;
// 23009908: using guessed type _DWORD;
// 2300990C: using guessed type _DWORD;
// 23009910: using guessed type _DWORD;
// 23009914: using guessed type _DWORD;
// 23009918: using guessed type _DWORD;
// 2300991C: using guessed type _DWORD;
// 23009920: using guessed type _DWORD;
// 23009924: using guessed type _DWORD;
// 23009928: using guessed type _DWORD;
// 2300992C: using guessed type _DWORD;
// 23009930: using guessed type _DWORD;
// 23009934: using guessed type _DWORD;
// 23009938: using guessed type _DWORD;

//----- (0E071438) --------------------------------------------------------
int sub_E071438()
{
  int v1; // [sp+14h] [bp-Ch]

  sub_E07AF1C(0x23007380u, 587289760, 2048, 587208093, 0, 0, 0, 10, 0, v1, 0);
  sub_E082456();
  sub_E07B5E8(0x23007380u);
  return sub_E08211A(dword_230098B8);
}
// E07145E: variable 'v1' is possibly undefined
// 230098B8: using guessed type _DWORD[49];

//----- (0E071490) --------------------------------------------------------
__int64 *sub_E071490()
{
  if ( dword_2300588C[10] )
    sub_E07AAD0((unsigned int **)&dword_2300588C[8]);
  return sub_E07B14C((__int64 *)&dword_230063D6[2005]);
}
// 2300588C: using guessed type unsigned int dword_2300588C[28];
// 230063D6: using guessed type unsigned __int16 dword_230063D6[2077];

//----- (0E0714B0) --------------------------------------------------------
int sub_E0714B0()
{
  _R0 = __get_CPSR();
  _R3 = 96;
  __asm { MSR.W           BASEPRI_MAX, R3 }
  __isb(0xFu);
  if ( !unk_2300A4AE )
  {
    MEMORY[0x5300E040] = 1;
    unk_5302E040 = 1;
  }
  ++unk_2300A4AE;
  __asm { MSR.W           BASEPRI, R0 }
  __isb(0xFu);
  return 0;
}

//----- (0E0714EC) --------------------------------------------------------
int sub_E0714EC()
{
  _R1 = __get_CPSR();
  _R3 = 96;
  __asm { MSR.W           BASEPRI_MAX, R3 }
  __isb(0xFu);
  if ( unk_2300A4AE == 1 )
  {
    MEMORY[0x5300E044] = 1;
    unk_5302E044 = 1;
  }
  --unk_2300A4AE;
  __asm { MSR.W           BASEPRI, R1 }
  __isb(0xFu);
  return 0;
}

//----- (0E071524) --------------------------------------------------------
int sub_E071524()
{
  int result; // r0

  sub_E072ECC(40);
  MEMORY[0xE000E284] = 256;
  result = sub_E072EF4(40, 0, 1);
  unk_53028508 = 0;
  unk_53028200 = 8;
  unk_53028304 = 4718592;
  unk_53028510 = 5;
  unk_53028540 = 0;
  unk_53028544 = 0;
  unk_53028548 = 0;
  unk_5302854C = 0;
  unk_53028550 = 0;
  unk_53028554 = 0;
  unk_5302800C = 1;
  unk_53028004 = 1;
  return result;
}

//----- (0E071584) --------------------------------------------------------
int sub_E071584()
{
  int result; // r0
  int v1; // r3
  int v2; // r1

  sub_E072ECC(44);
  unk_5302C010 = 1;
  unk_5302C710 = 24;
  unk_5302C500 = 9;
  unk_5302C704 = 1;
  unk_5302CE34 = 599999463;
  unk_5302CE38 = 333669283;
  unk_5302CE2C = -1296779592;
  unk_5302CE30 = unk_23009994;
  unk_2300AD60 = 2;
  unk_5302CE3C = 2;
  unk_5302CE40 = 4;
  unk_5302CED0 = 0;
  unk_5302CE20 = 16777222;
  unk_5302CE28 = 17039424;
  unk_5302CE4C = 0xFFFF;
  unk_5302CE44 = 2;
  unk_5302CE48 = 69665;
  unk_5302C200 = 0;
  unk_5302C208 = 0;
  unk_5302C204 = 0;
  unk_5302C21C = 0;
  dword_5302C220 = 0;
  unk_5302C488 = 140;
  sub_E072EF4(44, 1, 1);
  sub_E072EB0(44);
  result = sub_E0714B0();
  unk_5302C7E4 = unk_5302C7E4 & 0xFF000FFF | 0x12C000;
  if ( unk_FFFE458 != -1 )
    unk_5302C734 = unk_FFFE458;
  if ( unk_FFFE45C != -1 )
    unk_5302C738 = unk_FFFE45C;
  if ( unk_FFFE460 != -1 )
    unk_5302C73C = unk_FFFE460;
  if ( unk_FFFE464 != -1 )
    unk_5302C740 = unk_FFFE464;
  if ( unk_FFFE468 != -1 )
    unk_5302C74C = unk_FFFE468;
  if ( unk_FFFE46C != -1 )
    unk_5302C7D8 = unk_FFFE46C;
  if ( unk_FFFE470 != -1 )
    unk_5302C840 = unk_FFFE470;
  if ( unk_FFFE474 != -1 )
    unk_5302C844 = unk_FFFE474;
  if ( unk_FFFE478 != -1 )
    unk_5302C848 = unk_FFFE478;
  if ( unk_FFFE47C != -1 )
    unk_5302C84C = unk_FFFE47C;
  v1 = unk_5302C8A0;
  if ( v1 == 0x80000000 || (v2 = unk_5302C8A0, v2 == 5771790) )
    unk_5302C8A0 = 5769486;
  unk_5302C8A4 = 16296543;
  unk_5302C7AC = -2039315846;
  unk_5302C7B0 = 2121696882;
  unk_5302C7B4 = 67502206;
  return result;
}
// 5302C220: using guessed type int dword_5302C220;

//----- (0E071788) --------------------------------------------------------
void sub_E071788()
{
  unk_53022508 = 16;
}

//----- (0E0717B0) --------------------------------------------------------
void sub_E0717B0()
{
  sub_E071D8C();
  unk_530281C8 = 0x80000000;
  unk_5302C10C = 0x80000000;
  unk_53022508 = 1;
  unk_530281CC = -2147483647;
  unk_5302C108 = -2147483647;
  unk_53022508 = 2;
  unk_530281C4 = -2147483646;
  unk_5302C100 = -2147483646;
  unk_53022508 = 4;
  unk_530281C0 = -2147483645;
  unk_5302C110 = -2147483645;
  unk_53022508 = 8;
  unk_5302C31C = -2147483644;
  unk_5302C104 = -2147483644;
  unk_53022508 = 16;
  sub_E071788();
}

//----- (0E071830) --------------------------------------------------------
int sub_E071830()
{
  if ( !unk_2300AD67 )
    return 3;
  ((void (*)(void))unk_23001948)();
  sub_E07B14C(qword_23007410);
  unk_5302C400 = 0;
  unk_5302C010 = 1;
  do
  {
    if ( dword_5302C220 )
      break;
  }
  while ( unk_5302C520 );
  dword_5302C220 = 0;
  unk_53022508 = 31;
  unk_5302C10C = 0;
  unk_5302C108 = 0;
  unk_5302C100 = 0;
  unk_5302C104 = 0;
  unk_5302C110 = 0;
  unk_5302C300 = 0;
  unk_5302C30C = 0;
  unk_5302C314 = 0;
  unk_5302C318 = 0;
  unk_5302C31C = 0;
  unk_5302C320 = 0;
  unk_5302C304 = 0;
  unk_5302C308 = 0;
  unk_5302C32C = 0;
  unk_5302C330 = 0;
  unk_5302C490 = -1;
  unk_5302C4B0 = -1;
  unk_5302C20C = 0;
  dword_5302C220 = 0;
  unk_5302C21C = 0;
  unk_5302C200 = 0;
  unk_5302C204 = 0;
  unk_5302C208 = 0;
  unk_5302C218 = 0;
  unk_5302C214 = 0;
  unk_5302C22C = 0;
  unk_5302C230 = 0;
  unk_530281C0 = 0;
  unk_530281C4 = 0;
  unk_530281C8 = 0;
  unk_530281CC = 0;
  unk_530281D0 = 0;
  unk_530281D4 = 0;
  unk_530281D8 = 0;
  unk_53028308 = -1;
  unk_53028200 = 0;
  unk_5302C0A4 = 1;
  sub_E0714EC();
  unk_2300AD67 = 0;
  unk_2300AD66 = 0;
  unk_2300AD65 = 0;
  unk_2300AD63 = 0;
  unk_2300AD62 = 0;
  return 1;
}
// 23007410: using guessed type _QWORD qword_23007410[218];
// 5302C220: using guessed type int dword_5302C220;

//----- (0E07194C) --------------------------------------------------------
int sub_E07194C()
{
  int result; // r0
  int v1; // r2
  int v2; // [sp+14h] [bp-10h]

  result = sub_E07D0A6(587241812);
  if ( result != 1 )
/* <<< end original lines 14622-15140 */

/* >>> original lines 27720-28320 */

//----- (0E07C084) --------------------------------------------------------
void __fastcall __noreturn sub_E07C084(int a1, int a2)
{
  while ( 1 )
  {
    sub_E07AA84((_DWORD *)0x2300587C, a2, -1);
    MEMORY[0x2300A3C4](587244738);
  }
}
// E07C096: variable 'a2' is possibly undefined
// 2300A3C4: using guessed type int (__fastcall *)(_DWORD);

//----- (0E07C0B0) --------------------------------------------------------
void __fastcall sub_E07C0B0(unsigned __int8 *a1, int a2, int a3)
{
  unsigned int v4; // r2

  if ( MEMORY[0x2300B886] && a1 && a2 )
  {
    sub_E08294C(587244628, 0, a3);
    MEMORY[0x2300B87B] = a1[1];
    v4 = *a1;
    MEMORY[0x2300B87C] = (*a1 & 0x20) == 0;
    MEMORY[0x2300A4C2] = v4 >> 7;
    MEMORY[0x2300A4C3] = (*a1 & 8) != 0;
    MEMORY[0x2300A4C4] = *((_WORD *)a1 + 1);
    MEMORY[0x2300A4C6] = *((_WORD *)a1 + 2);
    if ( MEMORY[0x2300A3C4] )
      sub_E07AA1C((unsigned int *)0x2300587C);
  }
}
// 2300A3C4: using guessed type int (__fastcall *)(_DWORD);

//----- (0E07C120) --------------------------------------------------------
int sub_E07C120()
{
  int v1; // [sp+14h] [bp-10h]
  int v2; // [sp+14h] [bp-10h]

  sub_E082066(587244488, 587244528, 0x80000000CLL);
  sub_E07AF1C(0x23007DF8u, 587311840, 1024, (int)sub_E07C558, 0, 0, 0, 7, 0, v1, 0);
  sub_E082456();
  sub_E07B5E8(0x23007DF8u);
  sub_E07AF1C(0x23007D68u, 587310816, 1024, (int)sub_E07C084, 0, 0, 0, 6, 0, v2, 0);
  sub_E082456();
  sub_E07B5E8(0x23007D68u);
  MEMORY[0x2300A454] = 0;
  return 1;
}
// E07C152: variable 'v1' is possibly undefined
// E07C180: variable 'v2' is possibly undefined
// E07C084: using guessed type void __noreturn sub_E07C084();
// E07C558: using guessed type int sub_E07C558();

//----- (0E07C1C8) --------------------------------------------------------
int __fastcall sub_E07C1C8(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r4
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  unsigned int v17; // r2
  unsigned int v18; // r2
  unsigned int v19; // r2
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v22; // r2
  unsigned int v23; // r2
  unsigned __int8 v24; // [sp+7h] [bp-1h] BYREF

  v24 = 0;
  sub_E06B630(58, 90, a3);
  v3 = sub_E07B58C(313);
  LOBYTE(v4) = 61;
  sub_E08295A(v3, v5, v6);
  do
  {
    sub_E081DFE(0x3ACu);
    sub_E06B6A0(108, &v24, v7);
    v4 = (unsigned __int8)(v4 - 1);
    if ( !v4 )
    {
      sub_E06B630(127, 20, v8);
      sub_E06B630(108, 0, v9);
      sub_E06B630(127, 0, v10);
      return 0;
    }
  }
  while ( v24 != 128 );
  sub_E06B630(34, 0, v8);
  sub_E06B630(85, 0, v12);
  sub_E06B630(127, 7, v13);
  sub_E06B630(64, 64, v14);
  sub_E06B630(127, 0, v15);
  sub_E06B630(104, 1, v16);
  sub_E06B6A0(2, &v24, v17);
  sub_E06B6A0(3, &v24, v18);
  sub_E06B6A0(4, &v24, v19);
  sub_E06B6A0(5, &v24, v20);
  sub_E06B6A0(6, &v24, v21);
  sub_E06B630(91, 64, v22);
  sub_E06B6A0(21, (_BYTE *)0x2300B87B, v23);
  return 1;
}
// E07C1E4: variable 'v5' is possibly undefined
// E07C1E4: variable 'v6' is possibly undefined
// E07C1F8: variable 'v7' is possibly undefined
// E07C206: variable 'v8' is possibly undefined
// E07C20E: variable 'v9' is possibly undefined
// E07C216: variable 'v10' is possibly undefined
// E07C234: variable 'v12' is possibly undefined
// E07C23C: variable 'v13' is possibly undefined
// E07C244: variable 'v14' is possibly undefined
// E07C24C: variable 'v15' is possibly undefined
// E07C254: variable 'v16' is possibly undefined
// E07C25E: variable 'v17' is possibly undefined
// E07C268: variable 'v18' is possibly undefined
// E07C272: variable 'v19' is possibly undefined
// E07C27C: variable 'v20' is possibly undefined
// E07C286: variable 'v21' is possibly undefined
// E07C28E: variable 'v22' is possibly undefined
// E07C296: variable 'v23' is possibly undefined

//----- (0E07C2A4) --------------------------------------------------------
int __fastcall sub_E07C2A4(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2

  if ( !a1 )
    return 0;
  if ( a1[1] )
    MEMORY[0x2300A3C4] = a1[1];
  MEMORY[0x2300A3C0] = a1[2];
  if ( a1[3] )
    MEMORY[0x2300A3BC] = a1[3];
  if ( MEMORY[0x2300A3BC] )
    MEMORY[0x2300A3BC]();
  v2 = sub_E07C120();
  if ( !sub_E07C1C8(v2, v3, v4) )
    return 0;
  MEMORY[0x2300B886] = 1;
  MEMORY[0x2300B87C] = 0;
  MEMORY[0x2300B885] = 0;
  return 1;
}
// E07C2CC: variable 'v3' is possibly undefined
// E07C2CC: variable 'v4' is possibly undefined

//----- (0E07C300) --------------------------------------------------------
int __fastcall sub_E07C300(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v5; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-8h]
  int v7; // [sp+Ch] [bp-4h]

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( MEMORY[0x2300B886] )
  {
    v5 = 10;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      result = sub_E07BE84((char *)&v5, a2, 0);
      if ( !result )
        break;
      sub_E07BE78();
    }
  }
  return result;
}
// E07C318: variable 'a2' is possibly undefined

//----- (0E07C330) --------------------------------------------------------
void __fastcall sub_E07C330(int a1, int a2, int a3)
{
  int v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  unsigned int v14; // r2
  int v15; // r2

  if ( MEMORY[0x2300B886] )
  {
    _R3 = 587244624;
    __asm { LDA.W           R3, [R3] }
    if ( _R3 != 1 && !MEMORY[0x2300B885] )
    {
      if ( MEMORY[0x2300B87C] != 1 && (MEMORY[0x2300B87B] & 0xF7) == 0xB7 )
      {
        sub_E08294C(587244628, 1, a3);
        if ( sub_E06B7B4(22, 6, v14) )
        {
          MEMORY[0x2300B878] = 0;
        }
        else if ( (unsigned __int8)(MEMORY[0x2300B878] + 1) > 1u )
        {
          MEMORY[0x2300B878] = 0;
          MEMORY[0x2300A3C0]();
          sub_E08294C(587244628, 0, v15);
        }
        else
        {
          ++MEMORY[0x2300B878];
        }
      }
      else
      {
        v9 = 587244736;
        if ( (unsigned __int16)(MEMORY[0x2300A4C0] + 1) > 3u )
        {
          MEMORY[0x2300A4C0] = 0;
          if ( MEMORY[0x2300A3BC] )
            MEMORY[0x2300A3BC]();
          MEMORY[0x2300B885] = 1;
          v10 = sub_E08294C(587244628, 0, v9);
          sub_E07C300(v10, v11, v12, v13);
          MEMORY[0x2300B886] = 0;
        }
        else
        {
          ++MEMORY[0x2300A4C0];
        }
      }
    }
  }
}
// E07C384: variable 'v9' is possibly undefined
// E07C388: variable 'v11' is possibly undefined
// E07C388: variable 'v12' is possibly undefined
// E07C388: variable 'v13' is possibly undefined
// E07C39E: variable 'v14' is possibly undefined
// E07C3C6: variable 'v15' is possibly undefined
// 2300A3BC: using guessed type int (*)(void);
// 2300A3C0: using guessed type int (*)(void);

//----- (0E07C3F8) --------------------------------------------------------
int __fastcall sub_E07C3F8(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v5; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-8h]
  int v7; // [sp+Ch] [bp-4h]

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( MEMORY[0x2300B886] )
  {
    v5 = 11;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      result = sub_E07BE84((char *)&v5, a2, 0);
      if ( !result )
        break;
      sub_E07BE78();
    }
  }
  return result;
}
// E07C410: variable 'a2' is possibly undefined

//----- (0E07C428) --------------------------------------------------------
BOOL __fastcall sub_E07C428(int a1, int a2, unsigned int a3)
{
  int v3; // r2
  BOOL result; // r0
  char v5; // [sp+7h] [bp-1h] BYREF

  v5 = HIBYTE(a2);
  if ( MEMORY[0x2300B886] )
  {
    MEMORY[0x2300B87D] = 0;
    v5 = 0;
    sub_E06B6A0(64, &v5, a3);
    result = sub_E06B630(64, v5 | 0x80, v3);
    MEMORY[0x2300B884] = 0;
    MEMORY[0x2300B883] = 0;
  }
  return result;
}
// E07C452: variable 'v3' is possibly undefined

//----- (0E07C474) --------------------------------------------------------
int __fastcall sub_E07C474(int result)
{
  int v1; // r2
  unsigned int v2; // r2
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r2

  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
      MEMORY[0x2300A3C4] = *(_DWORD *)(result + 4);
    MEMORY[0x2300A3C0] = *(_DWORD *)(result + 8);
    v1 = *(_DWORD *)(result + 12);
    if ( v1 )
      MEMORY[0x2300A3BC] = *(_DWORD *)(result + 12);
    if ( MEMORY[0x2300A3BC] )
      MEMORY[0x2300A3BC]();
    MEMORY[0x2300B886] = 1;
    sub_E06B630(91, 64, v1);
    v3 = sub_E06B6A0(21, (_BYTE *)0x2300B87B, v2);
    sub_E07C428(v3, v4, v5);
    return 1;
  }
  return result;
}
// E07C49E: variable 'v1' is possibly undefined
// E07C4A6: variable 'v2' is possibly undefined
// E07C4AA: variable 'v4' is possibly undefined
// E07C4AA: variable 'v5' is possibly undefined

//----- (0E07C4C8) --------------------------------------------------------
int __fastcall sub_E07C4C8(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v17; // r2

  result = sub_E07C1C8(a1, a2, a3);
  if ( result )
  {
    MEMORY[0x2300B886] = 1;
    sub_E07BFE0(MEMORY[0x2300A4CA], MEMORY[0x2300A4C8], 1, 587244746);
    sub_E07BFB0(MEMORY[0x2300B882], v4, v5, 587249794);
    sub_E07BF80(MEMORY[0x2300B881], v6, v7, 587249793);
    sub_E07BF20(MEMORY[0x2300B87F], v8, v9, 587249791);
    sub_E07BEF0(MEMORY[0x2300B87E], v10, v11, 587249790);
    sub_E07BF50(MEMORY[0x2300B880], v12, v13, 587249792);
    sub_E07BEC0(MEMORY[0x2300B87D], v14, v15, 587249789);
    result = sub_E07C01C(MEMORY[0x2300B884], v16, v17, 587249796);
    MEMORY[0x2300B885] = 0;
    MEMORY[0x2300B87C] = 0;
  }
  return result;
}
// E07C4E6: variable 'v4' is possibly undefined
// E07C4E6: variable 'v5' is possibly undefined
// E07C4EE: variable 'v6' is possibly undefined
// E07C4EE: variable 'v7' is possibly undefined
// E07C4F6: variable 'v8' is possibly undefined
// E07C4F6: variable 'v9' is possibly undefined
// E07C4FE: variable 'v10' is possibly undefined
// E07C4FE: variable 'v11' is possibly undefined
// E07C506: variable 'v12' is possibly undefined
// E07C506: variable 'v13' is possibly undefined
// E07C50E: variable 'v14' is possibly undefined
// E07C50E: variable 'v15' is possibly undefined
// E07C516: variable 'v16' is possibly undefined
// E07C516: variable 'v17' is possibly undefined

//----- (0E07C558) --------------------------------------------------------
void __noreturn sub_E07C558()
{
  int v0; // r2
  int v1; // r0
  int v2; // r1
  unsigned int v3; // r2
  int v12; // r2
  char v13; // r11^1
  unsigned int v14; // r4
  int v15; // r2
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r1
  int v20; // r1
  char v21; // r4
  void (__fastcall *v22)(_DWORD, _DWORD); // r3
  BOOL v23; // r2
  int v24; // r2
  char v25; // r1
  char v26; // r0
  BOOL v27; // r2
  char v28; // r1
  char v29; // r0
  int v30; // r3
  char v31; // r3
  int v32; // r2
  unsigned int v33; // r2
  int v34; // r2
  int v35; // r2
  int v36; // r2
  int v37; // r2
  int v38; // r2
  int v39; // r2
  char v40; // [sp+3h] [bp-11h] BYREF
  int v41; // [sp+4h] [bp-10h] BYREF
  int v42; // [sp+8h] [bp-Ch]
  int v43; // [sp+Ch] [bp-8h]

  while ( 1 )
  {
    sub_E07A760(587244488, (int)&v41, -1);
    v1 = sub_E08294C(587244624, 1, v0);
    _R7 = 587244628;
    while ( 1 )
    {
      __asm { LDA.W           R3, [R7] }
      if ( _R3 != 1 )
        break;
      v1 = sub_E07B58C(4);
      if ( MEMORY[0x2300B879] > 1u )
      {
        MEMORY[0x2300B879] = 0;
        MEMORY[0x2300A3C0](v1);
        v1 = sub_E08294C(587244628, 0, v12);
      }
      else
      {
        ++MEMORY[0x2300B879];
      }
    }
    MEMORY[0x2300B879] = 0;
    _R7 = __get_CPSR();
    _R3 = 96;
    __asm { MSR.W           BASEPRI_MAX, R3 }
    __isb(0xFu);
    switch ( v41 )
    {
      case 1:
        if ( MEMORY[0x2300B87C] != 1 && (MEMORY[0x2300B87B] & 0xF7) == 0xB7 )
          goto LABEL_13;
        MEMORY[0x2300B886] = 0;
LABEL_60:
        sub_E07C4C8(v1, v2, v3);
        MEMORY[0x2300A49C] = 0;
        goto LABEL_13;
      case 2:
        MEMORY[0x2300A4CA] = v42;
        MEMORY[0x2300A4C8] = v43;
        v13 = (unsigned __int16)((unsigned __int16)v42 / 0x32u - 1) >> 8;
        v14 = (unsigned __int16)v43 / 0x32u - 1;
        sub_E06B630(72, (unsigned __int16)v42 / 0x32u - 1, v3);
        sub_E06B630(73, v13, v15);
        sub_E06B630(74, v14, v16);
        sub_E06B630(75, SBYTE1(v14), v17);
        sub_E06B630(71, 1, v18);
        v3 = MEMORY[0x2300B884];
        if ( MEMORY[0x2300B884] == 4 )
        {
          v19 = 6999;
          if ( MEMORY[0x2300A4CA] > 0x1B57u || MEMORY[0x2300A4C8] > 0x1B57u )
          {
            if ( MEMORY[0x2300B883] != 2 )
            {
              v20 = 3;
              v41 = 3;
              v42 = 4;
              v43 = 1;
              while ( sub_E07BE84((char *)&v41, v20, 0) )
                sub_E07BE78();
            }
          }
          else if ( MEMORY[0x2300B883] != 1 )
          {
            v41 = 3;
            v42 = MEMORY[0x2300B884];
            v43 = 2;
            while ( sub_E07BE84((char *)&v41, v19, 0) )
              sub_E07BE78();
          }
        }
        goto LABEL_13;
      case 3:
        switch ( v42 )
        {
          case 1:
            sub_E083F76(v1, v2, v3);
            goto LABEL_13;
          case 2:
            sub_E083C4A(v1, v2, v3);
            goto LABEL_13;
          case 3:
            sub_E083922(v1, v2, v3);
            goto LABEL_13;
          case 4:
            v21 = v43;
            if ( v43 == 1 )
            {
              sub_E082F50(v1, v2, v3);
LABEL_22:
              MEMORY[0x2300B883] = v21;
              goto LABEL_13;
            }
            if ( v43 == 2 )
            {
              sub_E08324E(v1, v2, v3);
              goto LABEL_22;
            }
            break;
          case 5:
            sub_E08354C(v1, v2, v3);
            MEMORY[0x2300B883] = 3;
            sub_E081DFE(0x4E20u);
            v22 = *(void (__fastcall **)(_DWORD, _DWORD))(MEMORY[0x23009884] + 16);
            if ( v22 )
              v22(MEMORY[0x2300A4CA], MEMORY[0x2300A4C8]);
            goto LABEL_13;
          default:
            goto LABEL_13;
        }
        goto LABEL_13;
      case 4:
        v23 = v42 != 0;
        MEMORY[0x2300B882] = v42 != 0;
        if ( v42 )
        {
          sub_E06B630(127, 13, v23);
          v25 = -3;
        }
        else
        {
          sub_E06B630(127, 13, v23);
          v25 = -4;
        }
        v26 = 72;
        goto LABEL_33;
      case 5:
        v3 = v42 << 24;
        MEMORY[0x2300B881] = v42;
        v30 = v42 & 0x7F;
        if ( (v42 & 0x80) != 0 )
        {
          if ( v30 != 7 )
            goto LABEL_13;
          sub_E06B630(127, 24, v3);
          v25 = 0;
        }
        else if ( v30 == 2 )
        {
          sub_E06B630(127, 24, v3);
          v25 = -113;
        }
        else
        {
          sub_E06B630(127, 24, v3);
          v25 = -123;
        }
        v26 = 122;
LABEL_33:
        sub_E06B630(v26, v25, v24);
        v28 = 0;
        v29 = 127;
LABEL_45:
        sub_E06B630(v29, v28, v27);
LABEL_13:
        sub_E08294C(587244624, 0, v3);
        __asm { MSR.W           BASEPRI, R7 }
        __isb(0xFu);
        break;
      case 6:
        v28 = v42;
        v29 = 86;
        v27 = v42 != 0;
        if ( v42 )
          v28 = 13;
        MEMORY[0x2300B880] = v42 != 0;
        goto LABEL_45;
      case 7:
        v31 = v42;
        if ( v42 )
          v31 = 1;
        MEMORY[0x2300B87F] = v31;
        sub_E06B630(127, 13, v3);
        if ( MEMORY[0x2300B87F] )
          v25 = -126;
/* <<< end original lines 27720-28320 */

/* >>> original lines 29280-29540 */
  unsigned int v5; // r2

  if ( bundle )
  {
    if ( bundle->motion_cb )
      unk_2300A3C4 = (int (__fastcall *)(_DWORD))bundle->motion_cb;
    unk_2300A3C0 = bundle->raw_cb;
    ready_cb = bundle->ready_cb;
    if ( ready_cb )
      unk_2300A3BC = bundle->ready_cb;
    if ( unk_2300A3BC )
      unk_2300A3BC();
    g_sensor_is_ready = 1;
    sensor_reg_write_u8(0x5Bu, 0x40u, (int)ready_cb);
    u8 = sensor_reg_read_u8(0x15u, &out_value, v2);
    sensor_refresh_rest_control(u8, v4, v5);
    return 1;
  }
  return (int)bundle;
}
// E07C49E: variable 'ready_cb' is possibly undefined
// E07C4A6: variable 'v2' is possibly undefined
// E07C4AA: variable 'v4' is possibly undefined
// E07C4AA: variable 'v5' is possibly undefined
// 2300A3BC: using guessed type int (*unk_2300A3BC)(void);
// 2300A3C0: using guessed type int (__fastcall *unk_2300A3C0)(_DWORD);
// 2300A3C4: using guessed type int (__fastcall *unk_2300A3C4)(_DWORD);

//----- (0E07C4C8) --------------------------------------------------------
int __fastcall sub_E07C4C8(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v17; // r2

  result = sensor_3950_initialize(a1, a2, a3);
  if ( result )
  {
    g_sensor_is_ready = 1;
    sub_E07BFE0(word_2300A4CA, unk_2300A4C8, 1, (int)&word_2300A4CA);
    sub_E07BFB0(byte_2300B87D[5], v4, v5, (int)&byte_2300B87D[5]);
    sub_E07BF80(byte_2300B87D[4], v6, v7, (int)&byte_2300B87D[4]);
    sub_E07BF20(byte_2300B87D[2], v8, v9, (int)&byte_2300B87D[2]);
    sub_E07BEF0(byte_2300B87D[1], v10, v11, (int)&byte_2300B87D[1]);
    sub_E07BF50(byte_2300B87D[3], v12, v13, (int)&byte_2300B87D[3]);
    sub_E07BEC0(byte_2300B87D[0], v14, v15, (int)byte_2300B87D);
    result = sub_E07C01C(unk_2300B884, v16, v17, (int)&unk_2300B884);
    unk_2300B885 = 0;
    unk_2300B87C = 0;
  }
  return result;
}
// E07C4E6: variable 'v4' is possibly undefined
// E07C4E6: variable 'v5' is possibly undefined
// E07C4EE: variable 'v6' is possibly undefined
// E07C4EE: variable 'v7' is possibly undefined
// E07C4F6: variable 'v8' is possibly undefined
// E07C4F6: variable 'v9' is possibly undefined
// E07C4FE: variable 'v10' is possibly undefined
// E07C4FE: variable 'v11' is possibly undefined
// E07C506: variable 'v12' is possibly undefined
// E07C506: variable 'v13' is possibly undefined
// E07C50E: variable 'v14' is possibly undefined
// E07C50E: variable 'v15' is possibly undefined
// E07C516: variable 'v16' is possibly undefined
// E07C516: variable 'v17' is possibly undefined
// 2300A4CA: using guessed type unsigned __int16 word_2300A4CA;
// 2300B87D: using guessed type unsigned __int8 byte_2300B87D[6];

//----- (0E07C558) --------------------------------------------------------
// Sensor worker thread. Consumes sensor control messages and programs registers or runtime modes through sensor_reg_write_u8()/sensor_reg_read_u8().
void sensor_3950_worker_thread()
{
  int v0; // r2
  int v1; // r0
  int v2; // r1
  unsigned int v3; // r2
  int v12; // r2
  unsigned __int8 v13; // r11^1
  unsigned int v14; // r4
  int v15; // r2
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r1
  int v20; // r1
  char v21; // r4
  void (__fastcall *set_dpi_xy)(unsigned __int16, unsigned __int16); // r3
  BOOL v23; // r2
  int v24; // r2
  unsigned __int8 v25; // r1
  unsigned __int8 v26; // r0
  BOOL v27; // r2
  unsigned __int8 v28; // r1
  unsigned __int8 v29; // r0
  int v30; // r3
  unsigned __int8 v31; // r3
  int v32; // r2
  unsigned int v33; // r2
  int v34; // r2
  int v35; // r2
  int v36; // r2
  int v37; // r2
  int v38; // r2
  int v39; // r2
  unsigned __int8 out_value; // [sp+3h] [bp-11h] BYREF
  int v41; // [sp+4h] [bp-10h] BYREF
  int v42; // [sp+8h] [bp-Ch]
  int v43; // [sp+Ch] [bp-8h]

  while ( 1 )
  {
    sub_E07A760(587244488, (int)&v41, -1);
    v1 = sub_E08294C(587244624, 1, v0);
    _R7 = 587244628;
    while ( 1 )
    {
      __asm { LDA.W           R3, [R7] }
      if ( _R3 != 1 )
        break;
      v1 = sub_E07B58C(4);
      if ( unk_2300B879 > 1u )
      {
        unk_2300B879 = 0;
        unk_2300A3C0(v1);
        v1 = sub_E08294C(587244628, 0, v12);
      }
      else
      {
        ++unk_2300B879;
      }
    }
    unk_2300B879 = 0;
    _R7 = __get_CPSR();
    _R3 = 96;
    __asm { MSR.W           BASEPRI_MAX, R3 }
    __isb(0xFu);
    switch ( v41 )
    {
      case 1:
        if ( unk_2300B87C != 1 && (::out_value & 0xF7) == 0xB7 )
          goto LABEL_13;
        g_sensor_is_ready = 0;
LABEL_60:
        sub_E07C4C8(v1, v2, v3);
        unk_2300A49C = 0;
        goto LABEL_13;
      case 2:
        word_2300A4CA = v42;
        word_2300A4C8 = v43;
        v13 = (unsigned __int16)((unsigned __int16)v42 / 0x32u - 1) >> 8;
        v14 = (unsigned __int16)v43 / 0x32u - 1;
        sensor_reg_write_u8(0x48u, (unsigned __int16)v42 / 0x32u - 1, v3);
        sensor_reg_write_u8(0x49u, v13, v15);
        sensor_reg_write_u8(0x4Au, v14, v16);
        sensor_reg_write_u8(0x4Bu, BYTE1(v14), v17);
        sensor_reg_write_u8(0x47u, 1u, v18);
        v3 = unk_2300B884;
        if ( unk_2300B884 == 4 )
        {
          v19 = 6999;
          if ( word_2300A4CA > 0x1B57u || word_2300A4C8 > 0x1B57u )
          {
            if ( unk_2300B883 != 2 )
            {
              v20 = 3;
              v41 = 3;
              v42 = 4;
              v43 = 1;
              while ( sub_E07BE84((char *)&v41, v20, 0) )
                sub_E07BE78();
            }
          }
          else if ( unk_2300B883 != 1 )
          {
            v41 = 3;
            v42 = unk_2300B884;
            v43 = 2;
            while ( sub_E07BE84((char *)&v41, v19, 0) )
              sub_E07BE78();
          }
        }
        goto LABEL_13;
      case 3:
        switch ( v42 )
        {
          case 1:
            sub_E083F76(v1, v2, v3);
            goto LABEL_13;
          case 2:
            sub_E083C4A(v1, v2, v3);
            goto LABEL_13;
          case 3:
            sub_E083922(v1, v2, v3);
            goto LABEL_13;
          case 4:
            v21 = v43;
            if ( v43 == 1 )
            {
              sub_E082F50(v1, v2, v3);
LABEL_22:
              unk_2300B883 = v21;
              goto LABEL_13;
            }
            if ( v43 == 2 )
            {
              sub_E08324E(v1, v2, v3);
              goto LABEL_22;
            }
            break;
          case 5:
            sub_E08354C(v1, v2, v3);
            unk_2300B883 = 3;
            sub_E081DFE(0x4E20u);
            set_dpi_xy = g_sensor_ops->set_dpi_xy;
            if ( set_dpi_xy )
              set_dpi_xy(word_2300A4CA, word_2300A4C8);
            goto LABEL_13;
          default:
            goto LABEL_13;
        }
        goto LABEL_13;
      case 4:
        v23 = v42 != 0;
        byte_2300B87D[5] = v42 != 0;
        if ( v42 )
        {
          sensor_reg_write_u8(0x7Fu, 0xDu, v23);
          v25 = -3;
        }
        else
        {
          sensor_reg_write_u8(0x7Fu, 0xDu, v23);
          v25 = -4;
        }
        v26 = 72;
        goto LABEL_33;
      case 5:
        v3 = v42 << 24;
        byte_2300B87D[4] = v42;
        v30 = v42 & 0x7F;
        if ( (v42 & 0x80) != 0 )
        {
          if ( v30 != 7 )
            goto LABEL_13;
          sensor_reg_write_u8(0x7Fu, 0x18u, v3);
          v25 = 0;
        }
        else if ( v30 == 2 )
/* <<< end original lines 29280-29540 */

/* >>> original lines 40413-40654 */
BOOL __fastcall sub_E082F50(int a1, int a2, int a3)
{
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // r2
  int v21; // r2
  int v22; // r2
  int v23; // r2
  int v24; // r2
  int v25; // r2
  int v26; // r2
  int v27; // r2
  int v28; // r2
  int v29; // r2
  int v30; // r2
  int v31; // r2
  int v32; // r2
  int v33; // r2
  int v34; // r2
  int v35; // r2
  int v36; // r2
  int v37; // r2
  int v38; // r2
  int v39; // r2
  int v40; // r2
  int v41; // r2
  int v42; // r2
  int v43; // r2
  int v44; // r2
  int v45; // r2
  int v46; // r2
  int v47; // r2
  int v48; // r2
  int v49; // r2
  int v50; // r2
  int v51; // r2
  int v52; // r2
  int v53; // r2
  int v54; // r2
  int v55; // r2
  int v56; // r2
  int v57; // r2
  int v58; // r2
  int v59; // r2
  int v60; // r2
  int v61; // r2
  int v62; // r2
  int v63; // r2
  int v64; // r2
  int v65; // r2
  int v66; // r2
  int v67; // r2
  int v68; // r2
  int v69; // r2
  int v70; // r2
  int v71; // r2
  int v72; // r2
  int v73; // r2
  int v74; // r2
  int v75; // r2
  int v76; // r2
  int v77; // r2
  int v78; // r2
  int v79; // r2
  int v80; // r2
  int v81; // r2
  int v82; // r2
  int v83; // r2
  int v84; // r2
  int v85; // r2
  int v86; // r2
  int v87; // r2
  int v88; // r2
  int v89; // r2
  int v90; // r2
  int v91; // r2
  int v92; // r2
  int v93; // r2
  int v94; // r2
  int v95; // r2
  int v96; // r2

  sensor_reg_write_u8(0x7Fu, 7u, a3);
  sensor_reg_write_u8(0x40u, 0x41u, v3);
  sensor_reg_write_u8(0x7Fu, 5u, v4);
  sensor_reg_write_u8(0x43u, 0x64u, v5);
  sensor_reg_write_u8(0x44u, 5u, v6);
  sensor_reg_write_u8(0x49u, 0x20u, v7);
  sensor_reg_write_u8(0x51u, 0x40u, v8);
  sensor_reg_write_u8(0x53u, 0x40u, v9);
  sensor_reg_write_u8(0x55u, 0xFBu, v10);
  sensor_reg_write_u8(0x5Bu, 0xFBu, v11);
  sensor_reg_write_u8(0x5Fu, 0x90u, v12);
  sensor_reg_write_u8(0x61u, 0x31u, v13);
  sensor_reg_write_u8(0x6Du, 0xB8u, v14);
  sensor_reg_write_u8(0x6Eu, 0xCFu, v15);
  sensor_reg_write_u8(0x7Bu, 0x50u, v16);
  sensor_reg_write_u8(0x7Fu, 6u, v17);
  sensor_reg_write_u8(0x53u, 3u, v18);
  sensor_reg_write_u8(0x62u, 2u, v19);
  sensor_reg_write_u8(0x7Au, 3u, v20);
  sensor_reg_write_u8(0x6Bu, 0x20u, v21);
  sensor_reg_write_u8(0x6Du, 0x8Fu, v22);
  sensor_reg_write_u8(0x6Eu, 0x70u, v23);
  sensor_reg_write_u8(0x6Fu, 7u, v24);
  sensor_reg_write_u8(0x7Fu, 7u, v25);
  sensor_reg_write_u8(0x42u, 0x14u, v26);
  sensor_reg_write_u8(0x43u, 0, v27);
  sensor_reg_write_u8(0x7Fu, 9u, v28);
  sensor_reg_write_u8(0x40u, 1u, v29);
  sensor_reg_write_u8(0x43u, 0x23u, v30);
  sensor_reg_write_u8(0x44u, 0x88u, v31);
  sensor_reg_write_u8(0x47u, 0, v32);
  sensor_reg_write_u8(0x4Fu, 0xCu, v33);
  sensor_reg_write_u8(0x51u, 4u, v34);
  sensor_reg_write_u8(0x55u, 0x3Fu, v35);
  sensor_reg_write_u8(0x56u, 0x3Fu, v36);
  sensor_reg_write_u8(0x59u, 0xFu, v37);
  sensor_reg_write_u8(0x5Au, 0xFu, v38);
  sensor_reg_write_u8(0x73u, 0xCu, v39);
  sensor_reg_write_u8(0x7Fu, 0xAu, v40);
  sensor_reg_write_u8(0x4Au, 0x14u, v41);
  sensor_reg_write_u8(0x7Fu, 0x19u, v42);
  sensor_reg_write_u8(0x41u, 0x32u, v43);
  sensor_reg_write_u8(0x47u, 0x24u, v44);
  sensor_reg_write_u8(0x4Bu, 2u, v45);
  sensor_reg_write_u8(0x4Cu, 2u, v46);
  sensor_reg_write_u8(0x7Fu, 0xCu, v47);
  sensor_reg_write_u8(0x4Au, 0x20u, v48);
  sensor_reg_write_u8(0x4Bu, 0x1Fu, v49);
  sensor_reg_write_u8(0x4Cu, 0x5Cu, v50);
  sensor_reg_write_u8(0x4Du, 0x90u, v51);
  sensor_reg_write_u8(0x50u, 0x14u, v52);
  sensor_reg_write_u8(0x51u, 0x15u, v53);
  sensor_reg_write_u8(0x53u, 0x1Eu, v54);
  sensor_reg_write_u8(0x55u, 2u, v55);
  sensor_reg_write_u8(0x62u, 2u, v56);
  sensor_reg_write_u8(0x7Fu, 0x14u, v57);
  sensor_reg_write_u8(0x62u, 0x14u, v58);
  sensor_reg_write_u8(0x7Fu, 0x18u, v59);
  sensor_reg_write_u8(0x48u, 0x55u, v60);
  sensor_reg_write_u8(0x50u, 0x18u, v61);
  sensor_reg_write_u8(0x51u, 0x40u, v62);
  sensor_reg_write_u8(0x52u, 0x20u, v63);
  sensor_reg_write_u8(0x53u, 0x38u, v64);
  sensor_reg_write_u8(0x55u, 0x68u, v65);
  sensor_reg_write_u8(0x61u, 0xAu, v66);
  sensor_reg_write_u8(0x62u, 0x1Au, v67);
  sensor_reg_write_u8(0x63u, 0x48u, v68);
  sensor_reg_write_u8(0x64u, 0x40u, v69);
  sensor_reg_write_u8(0x70u, 0x22u, v70);
  sensor_reg_write_u8(0x71u, 0x88u, v71);
  sensor_reg_write_u8(0x72u, 0x88u, v72);
  sensor_reg_write_u8(0x77u, 0x22u, v73);
  sensor_reg_write_u8(0x79u, 0xCBu, v74);
  sensor_reg_write_u8(0x4Cu, 0x20u, v75);
  sensor_reg_write_u8(0x4Du, 0x30u, v76);
  sensor_reg_write_u8(0x4Eu, 0x28u, v77);
  sensor_reg_write_u8(0x5Au, 0x30u, v78);
  sensor_reg_write_u8(0x5Bu, 0x24u, v79);
  sensor_reg_write_u8(0x5Du, 2u, v80);
  sensor_reg_write_u8(0x5Eu, 1u, v81);
  sensor_reg_write_u8(0x6Du, 0x85u, v82);
  sensor_reg_write_u8(0x6Eu, 0xCu, v83);
  sensor_reg_write_u8(0x6Fu, 0xAu, v84);
  sensor_reg_write_u8(0x7Fu, 0, v85);
  sensor_reg_write_u8(0x4Fu, 0x4Fu, v86);
  sensor_reg_write_u8(0x4Eu, 0, v87);
  sensor_reg_write_u8(0x52u, 0x4Fu, v88);
  sensor_reg_write_u8(0x51u, 0, v89);
  sensor_reg_write_u8(0x47u, 1u, v90);
  sensor_reg_write_u8(0x54u, 0x55u, v91);
  sensor_reg_write_u8(0x5Au, 0x80u, v92);
  sensor_reg_write_u8(0x40u, 0x83u, v93);
  sensor_reg_write_u8(0x7Fu, 7u, v94);
  sensor_reg_write_u8(0x40u, 0x40u, v95);
  return sensor_reg_write_u8(0x7Fu, 0, v96);
}
// E082F5E: variable 'v3' is possibly undefined
// E082F66: variable 'v4' is possibly undefined
// E082F6E: variable 'v5' is possibly undefined
// E082F76: variable 'v6' is possibly undefined
// E082F7E: variable 'v7' is possibly undefined
// E082F86: variable 'v8' is possibly undefined
// E082F8E: variable 'v9' is possibly undefined
// E082F96: variable 'v10' is possibly undefined
// E082F9E: variable 'v11' is possibly undefined
// E082FA6: variable 'v12' is possibly undefined
// E082FAE: variable 'v13' is possibly undefined
// E082FB6: variable 'v14' is possibly undefined
// E082FBE: variable 'v15' is possibly undefined
// E082FC6: variable 'v16' is possibly undefined
// E082FCE: variable 'v17' is possibly undefined
// E082FD6: variable 'v18' is possibly undefined
// E082FDE: variable 'v19' is possibly undefined
// E082FE6: variable 'v20' is possibly undefined
// E082FEE: variable 'v21' is possibly undefined
// E082FF6: variable 'v22' is possibly undefined
// E082FFE: variable 'v23' is possibly undefined
// E083006: variable 'v24' is possibly undefined
// E08300E: variable 'v25' is possibly undefined
// E083016: variable 'v26' is possibly undefined
// E08301E: variable 'v27' is possibly undefined
// E083026: variable 'v28' is possibly undefined
// E08302E: variable 'v29' is possibly undefined
// E083036: variable 'v30' is possibly undefined
// E08303E: variable 'v31' is possibly undefined
// E083046: variable 'v32' is possibly undefined
// E08304E: variable 'v33' is possibly undefined
// E083056: variable 'v34' is possibly undefined
// E08305E: variable 'v35' is possibly undefined
// E083066: variable 'v36' is possibly undefined
// E08306E: variable 'v37' is possibly undefined
// E083076: variable 'v38' is possibly undefined
// E08307E: variable 'v39' is possibly undefined
// E083086: variable 'v40' is possibly undefined
// E08308E: variable 'v41' is possibly undefined
// E083096: variable 'v42' is possibly undefined
// E08309E: variable 'v43' is possibly undefined
// E0830A6: variable 'v44' is possibly undefined
// E0830AE: variable 'v45' is possibly undefined
// E0830B6: variable 'v46' is possibly undefined
// E0830BE: variable 'v47' is possibly undefined
// E0830C6: variable 'v48' is possibly undefined
// E0830CE: variable 'v49' is possibly undefined
// E0830D6: variable 'v50' is possibly undefined
// E0830DE: variable 'v51' …21488 tokens truncated…= v10 > 0x50;
/* <<< end original lines 40413-40654 */

/* >>> original lines 41770-41860 */
  while ( a1 );
  while ( 1 )
  {
    do
      sub_E0888C0(587235376, (int)v10, -1);
    while ( v10[0] <= 0x63 );
    v8 = (unsigned __int8)(LOBYTE(v10[0]) - 100);
    v9 = *(void (__fastcall **)(int))(9 * v8 + 0x230041D0);
    if ( v9 )
      v9(9 * v8 + 587219404);
  }
}

//----- (0E086968) --------------------------------------------------------
int __fastcall sub_E086968(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int result; // r0
  _DWORD v13[3]; // [sp+4h] [bp-Ch] BYREF

  v13[0] = a2;
  v13[1] = a3;
  v13[2] = a4;
  _R2 = 587235512;
  __asm { LDA.W           R0, [R2] }
  if ( result )
  {
    _R2 = __get_CPSR();
    _R1 = 96;
    __asm { MSR.W           BASEPRI_MAX, R1 }
    __isb(0xFu);
    v13[0] = *a1;
    __asm { MSR.W           BASEPRI, R2 }
    __isb(0xFu);
    while ( sub_E0887C0(587235376, (char *)v13, 0) )
      sub_E088868(587235376);
    return 1;
  }
  return result;
}

//----- (0E0869B4) --------------------------------------------------------
void __fastcall sub_E0869B4(char *a1, int a2)
{
  if ( !MEMORY[0x2300A9C1] )
  {
    sub_E088830((_BYTE *)0x23009840, 0, 64);
    sub_E0888A0(587241536, a1, a2);
    MEMORY[0x2300A9C1] = 1;
    sub_E088880((unsigned int *)0x2300588C);
  }
}

//----- (0E0869F4) --------------------------------------------------------
void __fastcall __noreturn sub_E0869F4(int a1, int a2)
{
  int v2; // r1
  int v3; // r4
  int v4; // r2
  unsigned int v5; // r4
  int v6; // r3
  bool v7; // zf
  char v8; // r11
  char v9; // r5
  int v10; // r0
  unsigned int v11; // r5
  unsigned __int8 v12; // r1
  bool v13; // zf
  char v14; // r11
  char v15; // r5
  int v16; // r0
  unsigned int v17; // r5
  int v18; // r2
  char v19; // r5
  char *v20; // [sp+4h] [bp-50h] BYREF
  char v21; // [sp+8h] [bp-4Ch] BYREF
  unsigned __int8 v22; // [sp+9h] [bp-4Bh]
  char v23[74]; // [sp+Ah] [bp-4Ah] BYREF

  v20 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        sub_E088890((_DWORD *)0x230058AC, a2, -1);
        v20 = &v21;
        sub_E088840((_DWORD *)0x230098B8, v2, 0xFFFFFFFF, 0xFFFFFFFF);
        v3 = sub_E087478(&v20);
        sub_E088828((unsigned int *)0x230098B8);
      }
/* <<< end original lines 41770-41860 */

/* >>> original lines 42520-42550 */
  _R1 = MEMORY[0x2301AEEC];
  __asm { MSR.W           CONTROL, R1 }
  __isb(0xFu);
  return savedregs(0);
}
// E084486: positive sp value 20 has been found
// E084488: variable 'savedregs' is possibly undefined

//----- (0E084490) --------------------------------------------------------
// attributes: thunk
void sub_E084490()
{
  JUMPOUT(0x230024B8);
}
// E084490: control flows out of bounds to 230024B8

//----- (0E084498) --------------------------------------------------------
// attributes: thunk
void sub_E084498()
{
  JUMPOUT(0x23002540);
}
// E084498: control flows out of bounds to 23002540

//----- (0E0844A0) --------------------------------------------------------
// attributes: thunk
void sub_E0844A0()
{
  JUMPOUT(0x2300155C);
}
// E0844A0: control flows out of bounds to 2300155C
/* <<< end original lines 42520-42550 */

/* >>> original lines 43820-43990 */

//----- (0E0874AC) --------------------------------------------------------
// Maps the user-visible polling code to the radio scheduler parameter set: base rate, subslot count, symbol code and other timing fields.
void radio_apply_polling_schedule_profile()
{
  unsigned __int8 v0; // r0
  unsigned __int8 v1; // r6
  __int16 v2; // r5
  unsigned __int8 v3; // r2
  unsigned __int8 v4; // r1
  __int16 v5; // r4

  if ( g_radio_polling_code == 16 )
  {
LABEL_13:
    v2 = 30;
    LOWORD(g_radio_base_polling_rate_hz) = 500;
    v5 = 10;
    g_radio_subslots_per_cycle = 4;
    v3 = 2;
    v4 = 16;
    v0 = 2;
    v1 = 2;
    goto LABEL_10;
  }
  if ( g_radio_polling_code > 0x10u )
  {
    switch ( g_radio_polling_code )
    {
      case 0x40u:
        v0 = 3;
        LOWORD(g_radio_base_polling_rate_hz) = 125;
        v1 = 1;
        g_radio_subslots_per_cycle = 4;
        v4 = 64;
        v3 = 2;
        break;
      case 0x80u:
        v0 = 3;
        LOWORD(g_radio_base_polling_rate_hz) = 125;
        g_radio_subslots_per_cycle = 4;
        v3 = 1;
        v4 = 64;
        v1 = 1;
        break;
      case 0x20u:
        v2 = 60;
        LOWORD(g_radio_base_polling_rate_hz) = 250;
        v5 = 48;
        g_radio_subslots_per_cycle = 4;
        v3 = 2;
        v4 = 32;
        v0 = 2;
        v1 = 2;
LABEL_10:
        g_radio_pipe_mode = v3;
        g_radio_schedule_class = v0;
        g_radio_symbol_code = v4;
        g_radio_schedule_mode = v1;
        unk_2300A4B2 = v2;
        unk_2300A4B0 = v5;
        g_radio_last_polling_code = g_radio_polling_code;
        unk_2300A4BC = 250;
        return;
      default:
        return;
    }
    v2 = 96;
    v5 = 72;
    goto LABEL_10;
  }
  if ( (unsigned __int8)(g_radio_polling_code - 1) <= 7u )
  {
    switch ( g_radio_polling_code )
    {
      case 1u:
        goto LABEL_13;
      case 2u:
        v1 = g_radio_polling_code;
        LOWORD(g_radio_base_polling_rate_hz) = 1000;
        v0 = 4;
        g_radio_subslots_per_cycle = 6;
        v2 = 30;
        v3 = g_radio_polling_code;
        v4 = 8;
        v5 = 20;
        goto LABEL_10;
      case 4u:
        v0 = 2;
        LOWORD(g_radio_base_polling_rate_hz) = 1000;
        v4 = 8;
        v1 = 2;
        g_radio_subslots_per_cycle = 8;
        v2 = 50;
        v3 = g_radio_polling_code;
        v5 = 40;
        goto LABEL_10;
      case 8u:
        v0 = 2;
        LOWORD(g_radio_base_polling_rate_hz) = 1000;
        v1 = 2;
        g_radio_subslots_per_cycle = 12;
        v2 = 100;
        v3 = g_radio_polling_code;
        v4 = g_radio_polling_code;
        v5 = 90;
        goto LABEL_10;
      default:
        return;
    }
  }
}

//----- (0E0875E4) --------------------------------------------------------
// Rebuilds the nRF54 radio/timeslot schedule after polling-rate or mode changes by rewriting multiple 0x5302xxxx registers and resetting state.
void radio_restart_timeslot_scheduler()
{
  char *v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r0

  if ( unk_2300AD67 )
  {
    if ( unk_2300AD6A )
    {
      dword_5302C220 = 0;
      unk_5302C010 = 1;
      while ( !dword_5302C220 )
        ;
      unk_2300AD6A = 0;
      unk_2300AD58 = 0;
      unk_2300AD59 = 0;
      unk_2300AD6B = 1;
      unk_2300AEEF = 0;
      unk_2300AD57 = 0;
      byte_2300AEFF[0] = 0;
      unk_2300AD53 = 0;
      unk_2300AD52 = 0;
      unk_2300AEF5 = 0;
      unk_2300AD4E = 0;
      unk_2300AD50 = 0;
      unk_2300AD4F = 0;
      unk_2300AD4D = 0;
      unk_2300AEF7 = 0;
      unk_5302CED0 = 587247085;
      radio_apply_polling_schedule_profile();
      sub_E086E90(byte_2300AD6C[0], 587246957);
      sub_E0888A0(587247085, v1, byte_2300AD6C[1] + 1);
      if ( byte_2300AD6C[0] )
      {
        byte_2300AD60 = 0;
        unk_5302CE3C = 0;
        unk_5302CE40 = 1;
        unk_5302C710 = 3;
        unk_5302C708 = byte_230043B1[byte_2300AEFF[0] + 4];
        unk_5302854C = 500;
        unk_53028540 = 400;
        unk_53028548 = 483;
      }
      else
      {
        byte_2300AD60 = 1;
        unk_5302CE3C = 1;
        unk_5302CE40 = 2;
        unk_5302C710 = 28;
        unk_5302C708 = byte_230043B1[2 * unk_2300AD5F + byte_2300AEFF[0]];
        unk_5302854C = unk_2300A4BC;
        unk_53028540 = unk_2300A4BC - 100;
        unk_53028548 = unk_2300A4BC - 17;
      }
/* <<< end original lines 43820-43990 */
