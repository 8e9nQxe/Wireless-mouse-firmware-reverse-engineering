#include <defs.h>

#include <stdarg.h>


//-------------------------------------------------------------------------
// Function declarations

void sub_FC();
int __fastcall sub_100(int);
int __fastcall sub_1D0(__int64 a1, unsigned int *a2);
void __fastcall __noreturn sub_2EC(int a1, int a2);
_DWORD *__fastcall sub_2F8(_DWORD *result, _DWORD *a2, unsigned int a3);
int __fastcall sub_368(int a1, int a2, unsigned int a3);
int __fastcall sub_40C(int a1, int a2, unsigned int a3);
int __fastcall sub_49C(_QWORD *a1, unsigned int *a2, _QWORD *a3);
int sub_6D6();
int sub_734();
void sub_7B0();
_DWORD *__fastcall sub_932(_DWORD *a1);
int __fastcall sub_946(_QWORD *a1, unsigned int *a2);
int __fastcall sub_970(_QWORD *a1, unsigned int *a2);
BOOL __fastcall sub_98A(int a1, int a2);
BOOL __fastcall sub_9DC(int *a1, int *a2);
_DWORD *__fastcall sub_9F6(_DWORD *result, int *a2, unsigned int a3, int *a4);
_DWORD *__fastcall sub_A18(_DWORD *a1, int *a2);
_BYTE *__fastcall sub_A24(_BYTE *result, _BYTE *a2);
int __fastcall sub_A36(_DWORD *a1, int *a2, int a3);
int __fastcall sub_A96(int a1, int a2);
int __fastcall sub_A9A(int a1, int a2);
int __fastcall sub_B58(int a1, int a2, unsigned __int16 *a3);
int __fastcall sub_BBC(_QWORD *a1, int a2, unsigned int *a3);
void __fastcall sub_BDC(int *a1, int a2, int a3, int a4, int a5);
int __fastcall sub_C66(_QWORD *a1);
int __fastcall sub_CA2(int a1);
int __fastcall sub_CB0(_BYTE *a1, _BYTE *a2, _BYTE *a3, int a4);
int __fastcall sub_E72(_BYTE *a1, _BYTE *a2);
int __fastcall sub_E7A(_BYTE *a1, _BYTE *a2, _BYTE *a3);
_WORD *__fastcall sub_F00(unsigned int a1, unsigned int a2);
int __fastcall sub_F2C(unsigned int a1);
_DWORD *__fastcall sub_F8E(int a1);
unsigned __int64 __fastcall sub_FDA(unsigned int a1, int a2, unsigned int a3, int a4);
int __fastcall sub_100A(unsigned __int64 a1, unsigned __int64 a2);
void __fastcall sub_109A(__int64 a1, unsigned __int64 a2, int a3, int a4, int a5, int a6, int a7);
int __fastcall sub_110C(_BYTE *a1, int a2, int a3, int a4);
int __fastcall sub_1144(int *a1);
int __fastcall sub_1170(unsigned __int8 *a1);
int __fastcall sub_1194(_WORD *a1, int a2, unsigned __int64 a3);
int __fastcall sub_11EC(int *a1, int a2, int *a3);
int __fastcall sub_1208(_WORD *a1, int a2, int a3);
int __fastcall sub_1212(int a1, int a2, unsigned int *a3);
int __fastcall sub_13B4(unsigned int *a1, unsigned int *a2, unsigned int a3);
_BYTE *__fastcall sub_140E(_BYTE *a1, char *a2, unsigned int a3);
_BYTE *__fastcall sub_141A(_BYTE *result, char *a2, unsigned int a3);
char *__fastcall sub_149C(char *a1, char *a2, unsigned int a3);
char *__fastcall sub_14E2(char *a1, char *a2, unsigned int a3);
_WORD *__fastcall sub_1532(_WORD *a1, unsigned int a2, unsigned __int8 a3);
_WORD *__fastcall sub_155E(_WORD *result, unsigned int a2, int a3);
_WORD *__fastcall sub_157C(_WORD *a1, unsigned int a2);
_DWORD *__fastcall sub_1580(_DWORD *result, unsigned int a2);
int __fastcall sub_1584(unsigned __int8 *a1);
int __fastcall sub_159A(int result, _DWORD *a2);
void __fastcall sub_15AA(unsigned int a1, unsigned int a2);
int __fastcall sub_15C6(unsigned int a1, unsigned int a2);
int sub_1788();
int __fastcall sub_1798(unsigned __int64 a1, unsigned __int64 a2);
int __fastcall sub_18BA(__int64 a1, unsigned __int64 a2);
int __fastcall sub_1A90(unsigned __int64 a1, unsigned __int64 a2);
int __fastcall sub_1AC0(unsigned __int64 a1, unsigned __int64 a2);
int __fastcall sub_1AF0(__int64 a1, __int64 a2);
int __fastcall sub_1F20(__int64 a1, __int64 a2);
unsigned int __fastcall sub_1F38(__int64 a1);
unsigned int __fastcall sub_1FD2(unsigned int a1);
unsigned int __fastcall sub_1FD8(unsigned __int64 a1, unsigned __int64 a2);
int __fastcall sub_2220(int a1, int a2, int a3);
unsigned int __fastcall sub_2280(unsigned int a1, unsigned int a2);
int __fastcall sub_23E0(int a1);
int __fastcall sub_2468(int result);
int sub_2470();
int sub_2480();
int sub_24A0();
_DWORD *__fastcall sub_24AA(char *a1, unsigned int a2, int a3, char *a4);
_DWORD *__fastcall sub_2504(_DWORD *result);
int __fastcall sub_2512(int result, int *a2);
int __fastcall sub_2524(int result, int *a2);
int __fastcall sub_2536(int a1, unsigned __int8 *a2, unsigned int a3);
int __fastcall sub_2588(int a1, int a2, int a3, int a4);
int __fastcall sub_2638(int *a1, int a2, int *a3);
int __fastcall sub_26A4(int *a1, int a2, _BYTE **a3);
int __fastcall sub_26CC(int a1);
int __fastcall sub_26D6(int a1, int a2, int a3, int a4);
char __fastcall sub_26FC(char result, _BYTE **a2);
char __fastcall sub_2706(char result, int a2);
int __fastcall sub_2718(int a1, int a2, int a3);
int __fastcall sub_27D4(__int64 a1, int a2);
int __fastcall sub_2844(_DWORD *a1, int a2, unsigned __int64 a3);
int __fastcall sub_2888(int *a1, int a2, int *a3);
int __fastcall sub_28A0(_DWORD *a1, int a2, int a3);
unsigned int __fastcall sub_28B4(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5);
_DWORD *__fastcall sub_294C(_DWORD *a1, _DWORD *a2, int a3);
int __fastcall sub_2980(_DWORD, _DWORD, _DWORD); // weak
unsigned __int64 __fastcall sub_2982(__int64 a1, __int64 a2);
int *__fastcall sub_29FE(int *a1, _BYTE *a2, unsigned int *a3, int a4, int a5);
void __fastcall sub_2B9C(int a1, int a2, unsigned int a3);
int __fastcall sub_2E16(int a1, int a2, unsigned int a3);
int __fastcall sub_30EC(int a1, unsigned __int8 *a2, unsigned int a3);
int __fastcall sub_3102(int a1, int a2, _BYTE *a3);
int __fastcall sub_3112(int a1, int a2, unsigned __int8 **a3);
int __fastcall sub_311A(int a1, int a2, int a3);
int __fastcall sub_3130(int a1, int a2, _WORD *a3);
int __fastcall sub_3140(int a1, int a2, int *a3);
int __fastcall sub_3148(_BYTE *a1, unsigned int a2, int a3);
int __fastcall sub_3188(int a1);
unsigned int __fastcall sub_3194(unsigned int a1);
unsigned int __fastcall sub_31BC(int a1, int a2);
unsigned int __fastcall sub_31EC(int a1, int a2, int a3, int a4, char a5);
int sub_3240();
int sub_3250();
int __fastcall sub_3258(int a1, int a2, int a3, int a4);
int __fastcall sub_32D0(int a1, int a2);
void __fastcall sub_32E0(__int64 *a1, int a2, int a3);
int __fastcall sub_33B8(unsigned int a1, unsigned int a2);
unsigned int *__fastcall sub_33F8(unsigned int *a1, _DWORD *a2, _DWORD *a3, int a4, int a5);
unsigned int *__fastcall sub_35E4(unsigned int *a1, int a2, _DWORD *a3, int a4, int a5);
__int64 __fastcall sub_37EC(_DWORD *a1, _DWORD *a2, int a3);
void __fastcall sub_3808(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4);
void __fastcall sub_3898(int a1, _DWORD *a2, int a3);
void __fastcall sub_38B2(int a1, _DWORD *a2, int a3, unsigned int a4);
void __fastcall __noreturn sub_3938(int a1, int a2);
int __fastcall sub_3948(int result);
int __fastcall sub_3954(int a1);
unsigned int __fastcall sub_39A4(unsigned int result, unsigned int a2, char a3);
void __noreturn sub_3A04();
int __fastcall sub_3A10(_BYTE *a1, _BYTE *a2);
int __fastcall sub_3A44(unsigned int *a1, unsigned int *a2);
int sub_3AE4();
int __fastcall sub_3AF0(char *a1, _BYTE *a2, int a3);
void __fastcall sub_3B48(int);
void __fastcall sub_3B54(int a1);
void __fastcall sub_3B60(int a1);
void __fastcall sub_3B78(int a1);
int __fastcall ramapi_transport_enqueue_frame(int channel_desc, int frame, int frame_len);
unsigned int ramapi_get_elapsed_ticks();
void __fastcall sub_3B9C(int a1);
int __fastcall ramapi_set_run_state_code(int code);
int __fastcall ramapi_transport_channel_idle(int arg0, int arg1);
int __fastcall ramapi_transport_peek_frame_meta(int channel_desc, int frame_store);
int __fastcall ramapi_transport_consume_frame(int channel_desc);
void __fastcall sub_3BFC(int a1);
int __fastcall ramapi_transport_select_context(int route_handle);
int __fastcall ramapi_transport_emit_small_frame(int frame, int frame_len, int class_id);
void __fastcall sub_3C74(int a1);
void __fastcall sub_3C80(int a1);
void __fastcall sub_3C8C(int a1);
void __fastcall sub_3CE0(int a1);
void __fastcall sub_3CEC(int a1);
void __fastcall sub_3CF8(int a1);
void __fastcall sub_3D04(int a1);
void __fastcall sub_3D10(int a1);
void __fastcall sub_3D1C(int);
_DWORD *__fastcall sub_3D34(_DWORD *result);
int sub_3D48();
int sub_3D70();
_BYTE *__fastcall sub_3DFC(char *a1, unsigned int a2, char *a3, unsigned int a4, _BYTE *a5, unsigned int a6);
int sub_3EC8();
int __fastcall sub_3F28(char *a1, int a2, int a3);
int __fastcall sub_3F4E(int a1, int a2);
_DWORD *__fastcall sub_4004(_DWORD *a1);
_DWORD *__fastcall sub_4050(unsigned int *a1, char *a2, unsigned int a3);
int __fastcall sub_4170(int a1, int a2);
int (*sub_42A0())(void);
int (*sub_42E8())(void);
int sub_4330();
int sub_4598();
int __fastcall sub_45C8(int a1);
int __fastcall sub_45D0(int a1);
int __fastcall sub_45D8(int a1);
int __fastcall sub_45E0(char *a1);
char *__fastcall sub_460C(char *result);
int __fastcall sub_4664(int result, unsigned __int8 *a2);
int __fastcall sub_46C6(char *a1);
int __fastcall sub_46D4(unsigned int a1, unsigned int a2);
_BYTE *__fastcall sub_4706(_BYTE *result);
_BYTE *__fastcall sub_4718(_BYTE *result, _BYTE *);
_BYTE *__fastcall sub_472E(_BYTE *result, _BYTE *a2);
_BYTE *__fastcall sub_4748(_BYTE *result, _BYTE *a2);
int __fastcall _rt_switch8(int a1, int a2, int a3, unsigned int a4);
int __fastcall sub_4784(int a1, int a2);
unsigned int __fastcall sub_47B0(unsigned int a1);
int __fastcall sub_47F8(int a1, int a2);
int sub_48BC();
void __fastcall sub_48DA(int a1);
void __fastcall sub_48E2(int a1);
int sub_48EC();
int sub_4958();
unsigned int __fastcall sub_49BC(unsigned int a1);
int sub_4A14();
void sub_4A6C();
unsigned int __fastcall sub_4AD4(unsigned int a1);
_BYTE *__fastcall sub_4BC8(char a1, char *a2, unsigned int a3);
_BYTE *__fastcall sub_4D0C(char a1, char *a2, unsigned int a3);
int __fastcall sub_4D64(char, int, char);
int __fastcall build_vendor_reply_buffer(char reply_type, int payload, char payload_len);
int __fastcall sub_4DC4(char a1, char *a2, char a3);
int __fastcall sub_4DF4(char a1, char *a2, char a3);
BOOL __fastcall sub_4E64(int a1);
void sub_4FDC();
int sub_5054();
void sub_50BA();
void __fastcall sub_510C(int a1);
int get_runtime_transport_mtu_25();
int get_runtime_transport_mtu_55();
int __fastcall sub_5128(_BYTE *a1, unsigned int a2);
_BYTE *__fastcall sub_5148(_BYTE *result, _DWORD *a2);
int sub_5196();
int sub_51B4();
int sub_51DC();
int sub_53D8();
int __fastcall sub_53E4(int a1);
int sub_540C();
int sub_5538();
int __fastcall sub_5618(int a1);
int sub_5694();
int __fastcall sub_5708(int a1, int a2);
int __fastcall sub_57D4(int a1, int a2);
int sub_582C();
int __fastcall sub_58A0(int a1, int a2);
int __fastcall sub_58F8(int a1);
int sub_5C04();
int __fastcall sub_5CBC(int a1, char *a2, char a3, int a4);
int __fastcall sub_5CE4(int a1, char *a2, int a3, unsigned int a4, int a5);
int __fastcall sub_5D54(unsigned __int8 *a1, _BYTE *a2);
int __fastcall sub_61C0(unsigned __int8 *a1, int a2);
int __fastcall sub_61D8(unsigned __int8 *a1, int a2);
int __fastcall sub_6564(unsigned __int8 *a1, int a2);
unsigned int __fastcall sub_657C(unsigned int result, int a2);
_BYTE *__fastcall sub_6598(int a1);
int __fastcall sub_6772(unsigned __int8 *a1);
unsigned __int8 *__fastcall sub_690A(unsigned int a1, unsigned __int8 *a2);
int __fastcall sub_6930(int a1, int a2);
int __fastcall sub_6D2A(int result, int a2, int a3, int a4);
unsigned int __fastcall sub_6D54(unsigned __int8 *a1);
int __fastcall sub_6DA2(unsigned __int8 *a1);
int __fastcall sub_6DC0(int a1);
int __fastcall sub_6FEE(int a1);
int __fastcall sub_6FF8(int a1, int a2, int a3, int a4);
int sub_701C();
unsigned int __fastcall sub_7034(unsigned __int8 *a1);
int __fastcall sub_7082(unsigned __int8 *a1);
int __fastcall sub_709A(int a1);
int __fastcall sub_712C(char *a1);
int __fastcall sub_71B2(int a1);
int __fastcall sub_71BC(int a1);
int __fastcall sub_71DE(unsigned __int8 *a1);
int __fastcall sub_72F6(int a1);
void __fastcall sub_7322(int a1);
int __fastcall sub_735E(int a1);
int __fastcall sub_7498(_BYTE *a1, int a2);
int __fastcall nullsub_1(_DWORD); // weak
int __fastcall nullsub_2(_DWORD); // weak
int __fastcall sub_7578(_DWORD *a1, int a2, int a3, int a4);
int sub_7594();
int __fastcall sub_75B0(int result);
int sub_76A0();
int sub_774E();
int sub_7760();
int sub_7778();
int __fastcall begin_runtime_stream_write_session_from_packet(unsigned __int8 *, int, int, int);
int __fastcall handle_runtime_stream_read_request_packet(unsigned __int8 *);
unsigned int __fastcall write_runtime_stream_chunk_via_callback(int a1, unsigned int a2);
unsigned __int8 *__fastcall sub_79C8(unsigned __int8 a1, unsigned int a2, unsigned __int8 *a3);
int sub_7A3C();
int sub_7AA4();
unsigned int sub_7B04();
int sub_7C74();
int sub_7CC4();
int __fastcall sub_7E18(unsigned int *a1);
int __fastcall sub_7E58(int *a1);
int sub_7EE4();
int sub_7F78();
int __fastcall sub_7FEC(__int16 a1, _WORD *a2);
int sub_80AC();
BOOL __fastcall sub_810E(int a1, int a2, int a3, int a4);
int __fastcall sub_81A0(int a1);
int __fastcall sub_81A8(unsigned int a1, unsigned int a2);
int __fastcall sub_820C(unsigned int a1);
BOOL __fastcall sub_821A(unsigned __int8 a1);
int __fastcall sub_822A(unsigned int a1);
BOOL __fastcall sub_8238(unsigned __int8 a1);
BOOL __fastcall sub_8256(unsigned __int8 a1);
const char *__fastcall sub_8268(const char *result, int a2, unsigned int a3);
int sub_82D4(const char *a1, ...); // weak
int sub_8364();
int sub_852C();
int sub_8568();
int __fastcall sub_857A(int a1, _BYTE *a2);
int sub_8592();
int sub_85A4();
int __fastcall sub_8638(int result, _BYTE *a2, char a3);
int sub_86BC();
int __fastcall sub_86CE(int a1, _BYTE *a2);
char __fastcall sub_86E8(char result);
int __fastcall sub_876C(int result, int a2);
int sub_8834();
int __fastcall sub_8860(unsigned __int8 *a1, int a2);
int __fastcall sub_88B8(int a1);
int __fastcall sub_88D8(int result, unsigned __int8 *a2);
BOOL __fastcall sub_88FA(char *a1);
int __fastcall sub_893C(char *a1);
int __fastcall sub_896C(int a1, int a2);
BOOL __fastcall sub_8982(int a1, char *a2);
int __fastcall sub_89A0(int a1);
void sub_89A4();
void sub_89B8();
int __fastcall sub_89E0(int a1, int a2, int a3, unsigned __int8 a4);
int __fastcall sub_89F8(int a1, int a2, int a3, unsigned __int8 a4);
_BYTE *__fastcall sub_8A44(_BYTE *a1);
_BYTE *__fastcall sub_8A9C(_BYTE *a1);
int __fastcall sub_8AEC(int a1);
int __fastcall sub_8B2C(int a1);
int __fastcall sub_8BAC(int a1);
int __fastcall sub_8BEC(int a1);
int __fastcall sub_8D6A(unsigned __int8 *a1, int a2);
int __fastcall sub_8DC2(int a1);
int __fastcall sub_8DE2(int result, unsigned __int8 *a2);
int __fastcall sub_8F9C(int a1, int a2);
int __fastcall sub_90A0(int a1);
int __fastcall persist_profile_dpi_stage0_value(__int16 a1, int a2, unsigned int a3, int a4);
int __fastcall persist_profile_dpi_stage1_value(__int16 a1, int a2, unsigned int a3, int a4);
int __fastcall persist_profile_dpi_stage2_value(__int16 a1, int a2, unsigned int a3, int a4);
int __fastcall persist_profile_dpi_stage3_value(__int16 a1, int a2, unsigned int a3, int a4);
int __fastcall persist_sleep_timeout_setting(int timeout_step, int profile_index);
int __fastcall persist_active_dpi_stage(int stage_index, int profile_index);
BOOL __fastcall sub_9A40(unsigned __int8 *);
int __fastcall sub_9A82(char *a1);
int sub_9DF0();
_DWORD *__fastcall sub_9E9E(int a1);
unsigned int __fastcall sub_9ED8(unsigned int result);
int sub_9EF8();
int sub_9F0C();
int get_active_dpi_stage();
unsigned int __fastcall get_dpi_value_for_stage(int stage_index);
int __fastcall sub_9FF0(int a1, int a2, int a3, int a4);
_BYTE *__fastcall sub_A064(_BYTE *a1, unsigned __int8 *a2);
int __fastcall sub_A14C(__int16 a1);
_BYTE *__fastcall sub_A174(_BYTE *result);
int sub_A288();
__int16 __fastcall sub_A294(__int16 result);
int sub_A2A0();
char __fastcall sub_A2AC(char result);
int __fastcall sub_A2C0(int result);
char __fastcall sub_A2CC(char result);
int __fastcall sub_A2D8(int result, _BYTE *a2);
int __fastcall sub_A308(_DWORD *a1);
int __fastcall sub_A38C(int a1, int a2, int a3);
int __fastcall sub_A3D8(int a1, unsigned int a2);
int __fastcall sub_A488(int a1, unsigned int a2, int a3, int a4, int a5);
int __fastcall sub_A594(int a1);
int __fastcall sub_A5C4(int a1, int a2);
int __fastcall sub_A5DC(int a1, int a2);
int __fastcall sub_A62C(_BYTE *a1, int a2);
unsigned __int8 *__fastcall sub_A644(unsigned __int8 *result);
int __fastcall sub_A71C(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
int sub_A860();
unsigned __int8 *__fastcall sub_A86C(unsigned __int8 *result);
int __fastcall sub_A8C8(char a1);
int __fastcall sub_A8F0(unsigned __int8 *a1, int a2);
int __fastcall sub_A98C(char a1, char a2, int a3);
char __fastcall sub_A9C0(char result);
int __fastcall sub_A9EC(int a1);
unsigned __int8 *__fastcall sub_AA60(unsigned __int8 *result);
int __fastcall sub_AAEC(char a1, unsigned int a2, char *a3);
int __fastcall sub_AB24(char a1);
int __fastcall sub_AB88(char a1, unsigned int a2, char a3);
_BYTE *__fastcall sub_AC00(unsigned int a1, unsigned int a2);
int __fastcall sub_ACE8(int, int);
unsigned int __fastcall sub_AD00(char *a1, unsigned int a2, char *a3, unsigned int a4, _BYTE *a5, unsigned int a6);
int sub_AD9C();
void sub_ADC8();
int __fastcall sub_AE64(char a1, __int16 a2, int a3, int a4, int a5);
int __fastcall sub_AF4C(char a1, __int16 a2, int a3, int a4, int a5);
int __fastcall sub_B064(int result);
unsigned int sub_B090();
int __fastcall update_aux_event_bitmap_queue(char event_mask, int queue_value, int add_entry, int persist_mode);
unsigned __int8 *__fastcall sub_B1D4(unsigned int a1, unsigned __int8 *a2);
int __fastcall sub_B1FC(int a1, int a2);
_BYTE *__fastcall sub_B428(char *a1, int a2, int a3, unsigned int a4);
unsigned int sub_B4A0();
int __fastcall sub_B5D0(_BYTE *a1);
int __fastcall sub_B5EA(char *a1);
int sub_B622();
int sub_B66C();
int sub_B690();
int sub_B6A0();
int sub_B6C4();
void __fastcall sub_B6EC(int a1, unsigned __int16 *a2);
int __fastcall sub_B6FC(_BYTE *a1);
int sub_B778();
_BYTE *sub_B780();
_BYTE *sub_B7D4();
int sub_B830();
int sub_B8B0();
int sub_B974();
unsigned int sub_BB54();
int __fastcall sub_BBD8(int a1, char a2);
int sub_BBF0();
_BYTE *sub_BBF8();
int sub_BD2C();
int sub_BD44();
int __fastcall sub_BD50(int a1, int a2, unsigned int a3);
unsigned int __fastcall sub_BDBC(unsigned int result);
unsigned int sub_BE74();
int __fastcall clear_pending_vendor_slot(int result);
_BYTE *__fastcall sub_BEE4(char a1, char *a2, unsigned int a3);
int __fastcall sub_BF04(_BYTE *a1);
int __fastcall sub_BF4C(_BYTE *a1);
int __fastcall sub_BF94(unsigned __int8 *a1);
int __fastcall sub_BFB2(char *a1, int a2, int a3, int a4);
int __fastcall sub_BFDA(unsigned __int8 *a1);
_BYTE *sub_BFF8();
int __fastcall sub_C010(unsigned __int8 *a1, int a2, int a3, int a4);
int __fastcall sub_C038(unsigned __int8 *a1);
_BYTE *sub_C08C();
int __fastcall sub_C0A4(char *a1, int a2, int a3, int a4);
int __fastcall sub_C0CC(int a1, int a2, int a3, int a4);
_BYTE *sub_C0EC();
int sub_C104();
_BYTE *sub_C12C();
int sub_C16C();
_BYTE *sub_C18C();
_BYTE *sub_C1E0();
char __fastcall sub_C1F8(char result);
int __fastcall sub_C204(_BYTE *a1);
_BYTE *sub_C254();
_BYTE *sub_C26C();
void sub_C2C8();
void sub_C2F8();
void sub_C328();
void sub_C360();
void sub_C3A4();
void sub_C3E8();
void sub_C460();
void sub_C4B4();
void sub_C4E4();
_BYTE *sub_C514();
int __fastcall handle_read_amb_cmd(read_amb_cmd_t *cmd);
int __fastcall handle_read_reg_cmd(read_reg_cmd_t *cmd);
_BYTE *sub_C5E4();
_BYTE *sub_C5FC();
unsigned int __fastcall sub_C614(unsigned __int8 *a1);
int sub_C63C();
_BYTE *__fastcall sub_C69C(_BYTE *a1, _BYTE *a2, int a3);
_BYTE *__fastcall sub_C6D8(char *a1, unsigned int a2);
void sub_C980();
BOOL sub_CAC8();
int sub_CBD8();
int sub_CFDC();
void __fastcall sub_CFF8(int a1);
int __fastcall sub_D010(int a1);
int __fastcall sub_D058(int a1);
int sub_D0F0();
void sub_D122();
int __fastcall sub_D188(int result);
char __fastcall sub_D194(char result);
int __fastcall sub_D1A0(int result);
int __fastcall sub_D3B0(int a1, int a2);
int (*sub_D3C8())(void);
int (*__fastcall sub_D3E8(int a1))(void);
int (*__fastcall sub_D418(int a1, int a2, int a3))(void);
void sub_D554();
_DWORD *sub_D56C();
int sub_D57C();
void __fastcall sub_D5A0(int a1);
int nullsub_5(void); // weak
_BYTE *sub_D654();
_BYTE *sub_D6BC();
void __fastcall service_runtime_transport_deferred_callback(unsigned __int8 *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void nullsub_8();
int sub_DCA6();
int __fastcall runtime_transport_reply_callback_noop(int a1, int a2);
int __fastcall drain_runtime_transport_queue(int, int, int);
int sub_E130();
int sub_E13A();
int __fastcall sub_E146(_BYTE *a1, char *a2, char *a3, _BYTE *a4);
_BYTE *__fastcall sub_E170(_BYTE *a1, _BYTE *a2, _BYTE *a3);
int __fastcall sub_E198(int a1, int a2, int a3);
int __fastcall sub_E1C8(int a1, int a2, int a3);
int __fastcall sub_E1F8(int a1, int a2);
_BYTE *__fastcall sub_E234(_BYTE *result, unsigned int a2);
int __fastcall sub_E248(int a1, int a2);
void sub_E294();
int sub_E2C2();
__int64 __fastcall sub_E2FE(unsigned __int8 *a1);
int sub_E364();
int __fastcall sub_E3FC(int a1);
int nullsub_7(void); // weak
int __fastcall apply_sensor_dpi_registers(unsigned int dpi_value);
unsigned int __fastcall sub_F2CC(unsigned int a1, int a2);
int sub_F304();
void sub_F30C();
int sub_F314();
int sub_F324();
int sub_F3D0();
void sub_F3E8();
unsigned int __fastcall sub_F3F0(unsigned int a1);
int sub_F47C();
int __fastcall sub_F488(int a1, int a2, char a3);
char __fastcall sub_F4F8(char result);
void sub_F512();
int __fastcall sub_F51C(int result);
int sub_F544();
int __fastcall sub_F55A(int a1, int a2, int a3);
int __fastcall sub_F57C(unsigned int a1, unsigned int a2, char *a3);
void sub_F624();
void sub_F62C();
int __fastcall sub_F634(int, int, int);
int __fastcall sub_F63C(unsigned int a1, unsigned int a2);
void sub_F67A();
void __fastcall sub_F684(int a1);
int __fastcall sub_F6D4(int a1);
void sub_F6F0();
void sub_F6F8();
void sub_F700();
void sub_F708();
void sub_F710();
void sub_F718();
void sub_F720();
void sub_F728();
void sub_F730();
int __fastcall sub_F738(int a1);
void sub_F778();
void sub_F780();
void sub_F788();
void sub_F790();
void sub_F798();
void sub_F7A0();
void sub_F7A8();
void sub_F7B0();
int __fastcall sub_F7D0(int);
int __fastcall sub_F7F8(int);
int __fastcall sub_F81E(int a1);
int __fastcall sub_F848(int a1);
void sub_F87C();
void sub_F894();
int __fastcall sub_F918(int);
void sub_F978();
void __fastcall sub_F980(int a1);
void sub_F99C();
int __fastcall sub_F9A4(int a1);
void sub_F9CE();
void sub_F9D6();
int sub_F9DE();
void sub_F9F4();
void sub_F9FC();
void sub_FA04();
void sub_FA0C();
int sub_FA14();
void sub_FA36();
int __fastcall sub_FA48(char *a1);
int __fastcall sub_FAC4(char *a1);
int __fastcall sub_FB3C(char *a1);
int __fastcall sub_FBB8(int a1);
void sub_FCF4();
int sub_FCFE();
int sub_FD0C();
int __fastcall sub_FD1C(int a1, int a2, int a3);
_DWORD *__fastcall sub_FD3C(unsigned int *a1, _DWORD *a2);
int __fastcall sub_FDB0(int a1, int a2, int a3, int a4);
int __fastcall sub_FEA0(int a1, int a2, char a3, char a4);
void sub_FEB8();
int __fastcall sub_FEC0(int a1);
void sub_FED8();
void sub_FEE0();
void __fastcall sub_FF60(int);
void sub_FF70();
int __fastcall sub_FF8C(unsigned int a1, unsigned int a2, int a3);
int __fastcall sub_FFD4(int a1);
int __fastcall sub_FFF8(int a1, int a2);
int __fastcall sub_10074(unsigned int a1);
int sub_100A0();
int __fastcall sub_10118(int a1, unsigned int a2, char a3, int a4, int a5);
int __fastcall apply_system_mode_register_script(int script_selector);
int __fastcall sub_10680(int a1, int a2, int a3, int a4);
void sub_106AA();
int __fastcall sub_106DC(_BYTE *a1, int a2, int a3, int a4);
void sub_107D8();
int sub_107E0();
void sub_107F6();
void sub_107FE();
int __fastcall sub_10808(int a1, int a2, int a3, int a4);
int __fastcall sub_108CC(int a1, int a2, int a3, int a4);
unsigned __int8 *__fastcall copy_amb_payload_bytes(read_amb_cmd_t *cmd, unsigned __int8 *out_buf);
int __fastcall sub_10978(_BYTE *a1);
int __fastcall sub_10996(int a1, read_amb_cmd_t *a2);
void sub_109D8();
unsigned __int8 *__fastcall copy_reg_window_bytes(read_reg_cmd_t *cmd, unsigned __int8 *out_buf);
int __fastcall sub_10A84(_BYTE *a1);
int __fastcall sub_10AA2(int a1, read_reg_cmd_t *a2);
void sub_10B90();
void __fastcall sub_10BB8(int a1);
unsigned __int8 *__fastcall sub_10BE8(unsigned __int8 *result);
int __fastcall sub_10C5C(int result);
int __fastcall sub_10CCC(int a1);
unsigned __int8 *__fastcall sub_10CF8(unsigned __int8 *result);
int __fastcall sub_10D68(char *a1, int a2, int a3, int a4);
int __fastcall sub_10DD0(char *a1);
int (*sub_10E54())(void);
int sub_10E74();
unsigned __int8 *__fastcall sub_10EB8(unsigned __int8 *result);
int __fastcall sub_10F44(_BYTE *a1, unsigned __int8 *a2, int a3, int a4);
int __fastcall sub_10FD4(int result, int a2, int a3, int a4);
int __fastcall sub_10FEC(_BYTE *a1);
int sub_11008();
int sub_11034();
int sub_11054();
_BYTE *__fastcall sub_110AA(_BYTE *result, int a2, int a3, int a4);
int __fastcall sub_110EC(int a1, unsigned __int8 *a2);
unsigned __int8 *__fastcall sub_11158(unsigned __int8 *result);
int sub_11208();
char __fastcall sub_11214(char result);
void sub_11220();
int __fastcall sub_1123C(int a1);
int __fastcall sub_1127C(int a1);
_BYTE *sub_1156C();
int sub_11598();
void sub_115CC();
int __fastcall set_profile_dpi_stage_value_and_mark_dirty(int, unsigned int, int, char);
char __fastcall set_dpi_stage_count(char count);
int mark_profile_dpi_stage_count_dirty();
int sub_11808();
int __fastcall sub_118F4(int a1, char a2);
BOOL __fastcall sub_11918(int a1, int a2, int a3, int a4);
int __fastcall sub_11A68(unsigned int *a1, unsigned int a2, int a3);
_BYTE *__fastcall sub_11AD4(char *a1, unsigned int a2, _BYTE *a3, unsigned int a4);
int __fastcall sub_11B0C(int a1, int a2, int a3);
int sub_11B94();
int sub_11BA0();
int __fastcall sub_11C78(int a1);
int __fastcall sub_11CF0(int a1, int a2, int a3, int a4, int a5);
int __fastcall sub_11DEC(unsigned int a1);
int __fastcall sub_11E3C(int a1, int a2, unsigned int a3);
int sub_11E6C();
void sub_11F9C();
int sub_11FF0();
int sub_12000();
int sub_12010();
char __fastcall sub_12024(char result);
int sub_12034();
char __fastcall sub_12048(char result);
int sub_12058();
char __fastcall sub_1206C(char result);
int sub_1207C();
char __fastcall sub_12090(char result);
int sub_120A0();
int sub_120B4();
int sub_120C8();
int sub_120DC();
int sub_120F0();
int sub_12104();
_BYTE *sub_12118();
char __fastcall sub_12130(char result);
char __fastcall sub_12144(char result);
int __fastcall sub_12158(int a1, int a2);
int __fastcall sub_1219C(int a1);
int sub_121B4();
int sub_121C8();
int sub_121DC();
int __fastcall sub_121F0(int a1, int a2);
int __fastcall sub_12244(int result, char a2);
int sub_12250();
int sub_12260();
unsigned int sub_12274();
int sub_12284();
int sub_12294();
int sub_122A8();
unsigned int sub_122D0();
int sub_122E4();
int sub_122F8();
int sub_12308();
int sub_1231C();
unsigned int sub_12334();
unsigned int sub_12348();
int sub_1235C();
int sub_12370();
int sub_12380();
int sub_12394();
unsigned int sub_123AC();
unsigned int sub_123C0();
int sub_123D4();
int sub_123E8();
int sub_123F8();
int sub_1240C();
unsigned int sub_12424();
unsigned int sub_12438();
int sub_1244C();
int sub_12460();
int sub_12470();
int sub_12484();
unsigned int sub_1249C();
int sub_124B0();
int sub_124C0();
int sub_124D0();
int sub_124E0();
int sub_124F0();
int sub_12500();
int sub_1250C();
int __fastcall sub_12518(int a1);
unsigned int sub_12524();
int sub_12534();
int sub_12544();
_WORD *__fastcall sub_12558(_WORD *result);
int __fastcall sub_12564(_WORD *a1, _WORD *a2);
int __fastcall sub_12574(int a1);
int __fastcall sub_125B4(int result);
int __fastcall sub_125C4(int result);
int sub_125D0();
void sub_125E4();
int __fastcall sub_12D34(unsigned __int8 *a1, int a2, int a3, int a4);
int __fastcall sub_12E48(int result, char a2);
int __fastcall sub_12E54(int a1, char a2);
int __fastcall sub_12E68(int result, char a2);
int __fastcall sub_12E74(int a1, char a2);
char __fastcall sub_12FA8(char result);
int __fastcall sub_12FB4(int a1);
int __fastcall sub_12FD8(int a1);
int __fastcall sub_12FF0(int a1);
int __fastcall sub_13014(int a1);
int __fastcall sub_1302C(int a1);
int __fastcall sub_13050(int a1);
int __fastcall sub_13068(int a1);
int __fastcall sub_130A4(int a1);
int __fastcall sub_130D0(int a1);
int __fastcall sub_130E8(int a1);
int __fastcall sub_13124(int a1);
int __fastcall sub_13150(int a1);
int __fastcall sub_13168(int a1);
int __fastcall sub_131A4(int a1);
int __fastcall sub_131D0(int a1);
int __fastcall sub_131E8(int a1);
int __fastcall sub_13224(int a1);
int __fastcall sub_13250(int a1);
int __fastcall sub_1327C(int a1);
char __fastcall sub_13294(char result);
int __fastcall sub_132A8(int a1);
char __fastcall sub_132C0(char result);
char __fastcall sub_132E0(char result);
char __fastcall sub_132F4(char result);
char __fastcall sub_13314(char result);
int __fastcall sub_13328(int a1);
int sub_1339C();
int sub_133C4();
unsigned int sub_133FC();
int sub_1351C();
int sub_13530();
int sub_13544();
int sub_13558();
int __fastcall sub_13584(int a1);
int __fastcall sub_1359C(char a1);
char __fastcall sub_135B4(char result);
int __fastcall sub_135C0(int a1);
int sub_135DC();
char __fastcall sub_135F0(char result);
int __fastcall sub_13600(unsigned int a1);
int __fastcall sub_13620(char a1);
int __fastcall sub_1363C(unsigned int a1);
int __fastcall sub_1365C(int a1);
int __fastcall sub_13674(int a1);
int sub_13690();
char __fastcall sub_136A4(char result);
int __fastcall sub_136B4(unsigned int a1);
int __fastcall sub_136D4(char a1);
int __fastcall sub_136F0(unsigned int a1);
int __fastcall sub_13710(int a1);
int __fastcall sub_13728(int a1);
int sub_13744();
char __fastcall sub_13758(char result);
int __fastcall sub_13768(unsigned int a1);
int __fastcall sub_13788(char a1);
int __fastcall sub_137A4(unsigned int a1);
int __fastcall sub_137C4(int a1);
int __fastcall sub_137DC(int a1);
int sub_137F8();
int __fastcall sub_1380C(unsigned int a1);
int __fastcall sub_1382C(char a1);
int __fastcall sub_13848(int a1);
__int16 __fastcall sub_13878(__int16 result);
int __fastcall sub_13884(int result);
void __fastcall sub_13890(int a1, int a2, int a3);
int sub_138C8();
int __fastcall sub_138F8(int a1);
char __fastcall sub_13910(char result);
int __fastcall sub_13924(char a1);
int __fastcall sub_13978(int result);
int sub_13984();
int __fastcall sub_13A24(int result);
int __fastcall sub_13A30(int result, char a2);
int __fastcall sub_13A3C(int result, char a2);
int __fastcall sub_13A48(int a1, char a2);
int __fastcall sub_13A5C(int a1, char a2);
int __fastcall sub_13A70(int result);
int __fastcall sub_13A7C(int result);
int __fastcall sub_13A88(int result);
int __fastcall sub_13A94(int a1, int a2, int a3);
int __fastcall sub_13AA8(int a1, int a2, int a3);
int __fastcall sub_13ABC(int a1, int a2, int a3);
int __fastcall sub_13AD0(int a1, int a2, int a3);
int __fastcall sub_13AE4(int result);
int __fastcall sub_13AF0(int result);
int __fastcall sub_13AFC(int a1, int a2, int a3, int a4);
int __fastcall sub_13F04(unsigned __int8 *a1);
int __fastcall sub_13F70(unsigned int a1);
int sub_13FA4();
int sub_13FAC();
int __fastcall sub_13FBC(int a1);
int __fastcall sub_14010(int result);
int __fastcall sub_1401C(int result);
int __fastcall sub_1402C(int a1);
int sub_14070();
int __fastcall sub_1408C(int a1);
int sub_140B8();
int sub_140D4();
unsigned __int8 *__fastcall sub_140E8(unsigned __int8 *result);
int sub_1411E();
int __fastcall sub_1412C(int a1, unsigned __int8 *a2);
unsigned __int8 *__fastcall sub_14144(unsigned __int8 *result);
int sub_141B4();
int __fastcall sub_141C2(int a1, unsigned __int8 *a2);
void *__fastcall sub_141DC(int a1, unsigned int *a2);
void *__fastcall sub_14208(int a1, unsigned int *a2);
unsigned int __fastcall sub_14234(unsigned int result, unsigned int a2, unsigned int a3, unsigned int a4);
int __fastcall sub_1429C(int a1, int a2);
void __fastcall sub_142A8(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8);
int __fastcall sub_14328(int a1, int a2);
int __fastcall sub_143D8(int a1, int a2);
void __fastcall sub_143E4(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8);
int __fastcall sub_144A8(int a1, int a2, int a3);
int __fastcall sub_144B8(int a1, int a2, int a3);
void sub_1527C();
unsigned int __fastcall sub_1543C(int a1, unsigned __int8 *a2, int a3, unsigned int a4);
void sub_154A6();
void __fastcall sub_15588(int a1);
int (*sub_15590())(void);
int (*sub_1559C())(void);
int sub_155A8();
void __fastcall sub_155C0(unsigned int a1);
int __fastcall sub_155D8(int result);
int sub_155EA();
unsigned int sub_15604();
unsigned int sub_156B0();
unsigned int sub_156F2();
unsigned int sub_156FA();
int sub_1573C();
void sub_15784();
void __fastcall sub_157DE(int a1);
int sub_15816();
void __fastcall sub_1581C(int a1, unsigned int a2, int a3);
BOOL sub_15874();
int sub_15888();
int sub_158B4();
void __fastcall sub_15910(int a1);
void __fastcall sub_15932(int a1);
void __fastcall sub_15954(int a1);
BOOL __fastcall sub_159F0(int a1);
_BYTE *__fastcall sub_15A2C(_BYTE *result, int a2);
_BYTE *__fastcall sub_15A98(_BYTE *result, int a2);
unsigned __int8 *__fastcall sensor_exchange_bytes(unsigned __int8 *count_ptr, int tx_buf, int rx_buf);
unsigned __int8 *__fastcall sensor_read_single_register(int reg_id, int out_buf);
int sub_15C50();
int __fastcall sub_15C7E(int result);
unsigned int __fastcall sub_15C84(int a1);
int __fastcall sub_15C98(int a1, int a2, char a3);
void __fastcall sub_15CD4(int a1, int a2);
int sub_15E18();
int __fastcall sub_15E24(int a1, unsigned int a2, unsigned int a3);
int __fastcall sub_15E3C(int result, unsigned int a2, unsigned int a3);
BOOL __fastcall sub_15E4E(int, int, int);
BOOL __fastcall sub_15E68(int a1, int a2);
int __fastcall sub_15E74(int result, int, int);
int __fastcall sub_15E9E(int a1, int a2);
int __fastcall sub_15EBC(int a1, _DWORD *a2, _DWORD *a3);
int __fastcall sub_15ED4(int a1, _DWORD *a2, _DWORD *a3);
void __fastcall sub_15EFA(int a1);
void __fastcall sub_15F18(int a1);
int __fastcall sub_15F88(_BYTE *a1, int a2, unsigned int a3);
int latch_sensor_bad_state_if_clear();
int __fastcall latch_sensor_bad_state(int a1);
int clear_sensor_bad_state_and_start_recovery_hold();
int is_sensor_bad_state_latched();
int __fastcall build_runtime_input_frame(runtime_input_frame_t *frame, int frame_len, int mode);
BOOL sub_164F8();
int __fastcall consume_cached_motion_sample_into_runtime_buffer(unsigned __int8 *dst);
int sub_16556();
void __fastcall sub_16564(int a1, int a2);
void __fastcall sub_165CC(int a1);
void __fastcall sub_16610(int a1);
int flush_chunked_runtime_transport_frame();
int __fastcall send_short_runtime_frame_over_link(int payload, int payload_len, int frame_class);
int service_runtime_frame_pipeline_mode4();
int __fastcall service_runtime_frame_pipeline_default(int, int, int, int);
int __fastcall service_runtime_frame_scheduler(int force_mode, int run_pipeline);
int __fastcall copy_runtime_frame_to_tx_buffer(int src_buf);
int sub_16AE8();
int service_runtime_link_power_state_machine();
void sub_16D9A();
void __fastcall sub_1706A(int a1, unsigned __int8 *a2, int a3, int a4);
BOOL __fastcall sub_1720E(int a1);
void __fastcall sub_17228(unsigned __int8 a1);
BOOL sub_17232();
void __fastcall sub_17270(int a1);
void __fastcall sub_172B4(int a1);
int sub_172CA();
void __fastcall sub_172D0(int a1);
int sub_175BC();
void __fastcall sub_17646(int a1);
void sub_1775C();
int __fastcall sub_1776A(int a1, unsigned int a2, int a3, int a4);
void __fastcall sub_177AE(int a1);
int __fastcall sub_177C4(int a1);
int __fastcall sub_1781E(int a1, int a2, unsigned int a3);
void sub_1786C();
int __fastcall sub_17920(int a1);
int (*sub_1795C())(void);
int (*sub_1796A())(void);
int sub_17978();
int __fastcall consume_cached_motion_sample_for_mode4(_BYTE *);
void __fastcall sub_17B82(int a1);
int __fastcall sub_17B8A(int a1, int a2, int a3, int a4);
int __fastcall sample_and_decode_motion_delta(unsigned __int8 *out_delta);
int __fastcall sub_17CEC(int, int, int, int);
char __fastcall sub_17D28(char result);
char __fastcall mark_runtime_frame_pending(char result);
int is_runtime_frame_pending();
int __fastcall sub_17D40(int a1, int a2);
int __fastcall sub_17DEE(int result, int a2, int a3, int a4);
void __fastcall sub_17E84(int a1, int a2, int a3, int a4);
int __fastcall sub_17F56(int, _BYTE *, int, int);
int sub_17FDC();
int flush_pending_runtime_frame();
void __fastcall sub_18044(int a1);
void __fastcall sub_18050(int a1);
void __fastcall sub_1805C(int a1);
void __fastcall sub_18068(int a1);
void __fastcall sub_18074(int a1);
void __fastcall sub_18080(int a1);
void __fastcall sub_1808C(int a1);
void __fastcall sub_18098(int a1);
void __fastcall sub_180A4(int a1);
void __fastcall sub_180B0(int a1);
void __fastcall sub_180BC(int a1);
void __fastcall sub_180C8(int a1);
void __fastcall sub_180D4(int a1);
void __fastcall sub_180E0(int a1);
void __fastcall sub_180EC(int a1);
void __fastcall sub_180F8(int a1);
void __fastcall sub_18104(int a1);
void __fastcall sub_18110(int a1);
void __fastcall sub_1811C(int a1);
void __fastcall sub_18128(int a1);
void __fastcall sub_18134(int a1);
void __fastcall sub_18140(int a1);
void __fastcall sub_1814C(int a1);
void __fastcall sub_18158(int a1);
void __fastcall sub_18164(int a1);
void __fastcall sub_18170(int a1);
void __fastcall sub_1817C(int a1);
void __fastcall sub_18188(int a1);
void __fastcall sub_18194(int a1);
void __fastcall sub_181A0(int a1);
void __fastcall sub_181AC(int a1);
void __fastcall sub_181B8(int a1);
void __fastcall sub_181C4(int a1);
void __fastcall sub_181D0(int a1);
void __fastcall sub_181DC(int a1);
void __fastcall sub_181E8(int a1);
void __fastcall sub_181F4(int a1);
void __fastcall sub_18200(int a1);
void __fastcall sub_1820C(int a1);
void __fastcall sub_18218(int a1);
void __fastcall sub_18224(int a1);
void __fastcall sub_18230(int a1);
void __fastcall sub_1823C(int a1);
void __fastcall sub_18248(int a1);
void __fastcall sub_18254(int a1);
void __fastcall sub_18260(int a1);
void __fastcall sub_1826C(int a1);
void __fastcall sub_18278(int a1);
void __fastcall sub_18284(int a1);
void __fastcall sub_18290(int a1);
void __fastcall sub_1829C(int a1);
void __fastcall sub_182A8(int a1);
void __fastcall sub_182B4(int a1);
void __fastcall sub_182C0(int a1);
void __fastcall sub_182CC(int a1);
void __fastcall sub_182D8(int a1);
void __fastcall sub_182E4(int a1);
void __fastcall sub_182F0(int a1);
void __fastcall sub_182FC(int a1);
void __fastcall sub_18308(int a1);
void __fastcall sub_18314(int a1);
void __fastcall sub_18320(int a1);
void __fastcall sub_1832C(int a1);
void __fastcall sub_18338(int a1);
void __fastcall sub_18344(int a1);
void __fastcall sub_18350(int a1);
void __fastcall sub_1835C(int a1);
void __fastcall sub_18368(int a1);
void __fastcall sub_18374(int a1);
void __fastcall sub_18380(int a1);
void __fastcall sub_1838C(int a1);
void __fastcall sub_18398(int a1);
void __fastcall sub_183A4(int a1);
void __fastcall sub_183B0(int a1);
void __fastcall sub_183BC(int a1);
void __fastcall sub_183C8(int a1);
void __fastcall sub_183D4(int a1);
void __fastcall sub_183E0(int a1);
void __fastcall sub_183EC(int a1);
void __fastcall sub_183F8(int a1);
void __fastcall sub_18404(int a1);
void __fastcall sub_18410(int a1);
void __fastcall sub_1841C(int a1);
void __fastcall sub_18428(int a1);
void __fastcall sub_18434(int a1);
void __fastcall sub_18440(int a1);
void __fastcall sub_1844C(int a1);
void __fastcall sub_18458(int a1);
void __fastcall sub_18464(int a1);
void __fastcall sub_18470(int a1);
void __fastcall sub_1847C(int a1);
void __fastcall sub_18488(int a1);
void __fastcall sub_184A0(int a1);
void __fastcall sub_184E8(int a1);
void __fastcall sub_1859C(int a1);
void __fastcall sub_185A8(int a1);
void __fastcall sub_185B4(int a1);
void __fastcall sub_185C0(int a1);
void __fastcall sub_185CC(int a1);
void __fastcall sub_185D8(int a1);
void __fastcall sub_185E4(int a1);
void __fastcall sub_185F0(int a1);
void __fastcall sub_185FC(int a1);
void __fastcall sub_18608(int a1);
void __fastcall sub_18614(int a1);
void __fastcall sub_18620(int a1);
void __fastcall sub_1862C(int a1);
void __fastcall sub_18638(int a1);
void __fastcall sub_18644(int a1);
void __fastcall sub_18650(int a1);
void __fastcall sub_1865C(int a1);
void __fastcall sub_18668(int a1);
void __fastcall sub_18674(int a1);
void __fastcall sub_18680(int a1);
void __fastcall sub_1868C(int a1);
void __fastcall sub_18698(int a1);
void __fastcall sub_186A4(int a1);
void __fastcall sub_186B0(int a1);
void __fastcall sub_186BC(int a1);
void __fastcall sub_186C8(int a1);
void __fastcall sub_186D4(int a1);
void __fastcall sub_186E0(int a1);
void __fastcall sub_186EC(int a1);
void __fastcall sub_186F8(int a1);
void __fastcall sub_18704(int a1);
void __fastcall sub_18710(int a1);
void __fastcall sub_1871C(int a1);
void __fastcall sub_18728(int a1);
void __fastcall sub_18734(int a1);
void __fastcall sub_18740(int a1);
void __fastcall sub_1874C(int a1);
void __fastcall sub_18758(int a1);
void __fastcall sub_18764(int a1);
void __fastcall sub_18770(int a1);
void __fastcall sub_1877C(int a1);
void __fastcall sub_18788(int a1);
void __fastcall sub_18794(int a1);
void __fastcall sub_187A0(int a1);
void __fastcall sub_187AC(int a1);
void __fastcall sub_187B8(int a1);
void __fastcall sub_187C4(int a1);
void __fastcall sub_187D0(int a1);
void __fastcall sub_187DC(int a1);
void __fastcall sub_187E8(int a1);
void __fastcall sub_187F4(int a1);
void __fastcall sub_18800(int a1);
void __fastcall sub_1880C(int a1);
void __fastcall sub_18818(int a1);
void __fastcall sub_18824(int a1);
void __fastcall sub_18830(int a1);
void __fastcall sub_1883C(int a1);
void __fastcall sub_18848(int a1);
void __fastcall sub_18854(int);
void __fastcall sub_18860(int a1);
void __fastcall sub_1886C(int a1);
void __fastcall sub_18878(int a1);
void __fastcall sub_18884(int a1);
void __fastcall sub_18890(int a1);
void __fastcall sub_1889C(int a1);
void __fastcall sub_188A8(int a1);
void __fastcall sub_188B4(int a1);
void __fastcall sub_188C0(int a1);
void __fastcall sub_188CC(int a1);

//-------------------------------------------------------------------------
// Data declarations

char byte_0 = '\xF0'; // weak
_BYTE byte_1[203] =
{
  114,
  0,
  32,
  49,
  3,
  0,
  16,
  57,
  3,
  0,
  16,
  59,
  3,
  0,
  16,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  61,
  3,
  0,
  16,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  63,
  3,
  0,
  16,
  33,
  8,
  0,
  32,
  113,
  61,
  0,
  16,
  -79,
  62,
  0,
  16,
  -99,
  52,
  0,
  32,
  -23,
  62,
  0,
  16,
  61,
  62,
  0,
  16,
  67,
  3,
  0,
  16,
  -95,
  66,
  0,
  16,
  67,
  3,
  0,
  16,
  67,
  3,
  0,
  16,
  -27,
  64,
  0,
  16,
  1,
  65,
  0,
  16,
  29,
  65,
  0,
  16,
  57,
  65,
  0,
  16,
  85,
  65,
  0,
  16,
  -103,
  69,
  0,
  16,
  13,
  63,
  0,
  16,
  67,
  3,
  0,
  16,
  49,
  67,
  0,
  16,
  67,
  3,
  0,
  16,
  67,
  3,
  0,
  16,
  -55,
  62,
  0,
  16,
  67,
  3,
  0,
  16,
  -103,
  62,
  0,
  16,
  67,
  3,
  0,
  16,
  73,
  61,
  0,
  16,
  -23,
  66,
  0,
  16,
  67,
  3,
  0,
  16,
  67,
  3,
  0,
  16,
  67,
  3,
  0,
  16,
  67,
  3,
  0,
  16,
  67,
  3,
  0,
  16,
  67,
  3,
  0,
  16,
  -9,
  -75,
  -1,
  36,
  -127,
  52,
  -1,
  37,
  32,
  107,
  1,
  53
}; // weak
_UNKNOWN locret_FE; // weak
_UNKNOWN loc_104; // weak
_UNKNOWN loc_10C; // weak
_UNKNOWN loc_110; // weak
_UNKNOWN loc_118; // weak
_UNKNOWN loc_11C; // weak
_UNKNOWN loc_134; // weak
_UNKNOWN loc_13C; // weak
_UNKNOWN loc_210; // weak
_UNKNOWN loc_214; // weak
_UNKNOWN loc_218; // weak
_UNKNOWN loc_240; // weak
_UNKNOWN loc_31C; // weak
_UNKNOWN loc_37C; // weak
_UNKNOWN loc_470; // weak
_UNKNOWN loc_4D8; // weak
_UNKNOWN loc_538; // weak
_UNKNOWN loc_57C; // weak
_UNKNOWN loc_5A0; // weak
_UNKNOWN loc_5B4; // weak
_UNKNOWN loc_65C; // weak
_UNKNOWN loc_674; // weak
_UNKNOWN loc_678; // weak
_UNKNOWN loc_67C; // weak
_UNKNOWN loc_680; // weak
_UNKNOWN loc_684; // weak
_UNKNOWN loc_688; // weak
_UNKNOWN loc_6A8; // weak
_UNKNOWN loc_730; // weak
_UNKNOWN loc_78C; // weak
_UNKNOWN loc_798; // weak
_UNKNOWN loc_79C; // weak
_UNKNOWN loc_7A0; // weak
_UNKNOWN loc_7AC; // weak
_UNKNOWN loc_7C4; // weak
_UNKNOWN loc_7C8; // weak
_UNKNOWN loc_7E0; // weak
_UNKNOWN loc_7EC; // weak
_UNKNOWN loc_7F8; // weak
_UNKNOWN loc_800; // weak
_UNKNOWN loc_884; // weak
_UNKNOWN loc_934; // weak
_UNKNOWN loc_938; // weak
_UNKNOWN unk_950; // weak
_UNKNOWN loc_98E; // weak
int dword_9AC = 700759519; // weak
unsigned __int16 word_9CC[8] = { 8256u, 8496u, 4371u, 16659u, 16659u, 16659u, 17665u, 0u }; // weak
unsigned __int16 word_AA0[24] =
{
  8320u,
  4912u,
  4224u,
  5184u,
  8528u,
  4193u,
  4433u,
  4465u,
  17200u,
  8752u,
  5459u,
  5509u,
  4914u,
  17473u,
  4098u,
  8768u,
  4371u,
  17187u,
  12800u,
  17202u,
  16899u,
  4674u,
  17441u,
  0u
}; // weak
unsigned __int16 word_AD0[68] =
{
  8320u,
  5496u,
  12640u,
  16480u,
  4097u,
  20736u,
  12289u,
  8448u,
  9328u,
  8768u,
  5220u,
  13124u,
  17171u,
  16707u,
  4097u,
  17410u,
  0u,
  18049u,
  17935u,
  53007u,
  1990u,
  6133u,
  4086u,
  9216u,
  6464u,
  16745u,
  16746u,
  16739u,
  46095u,
  53007u,
  16736u,
  16737u,
  16754u,
  16747u,
  9216u,
  16740u,
  2023u,
  2142u,
  17207u,
  2014u,
  2133u,
  17198u,
  2005u,
  2124u,
  17189u,
  1996u,
  2115u,
  17180u,
  1987u,
  17992u,
  12304u,
  49392u,
  17951u,
  48143u,
  2142u,
  17207u,
  2014u,
  2133u,
  17198u,
  2005u,
  2124u,
  17189u,
  1996u,
  2115u,
  17180u,
  17992u,
  49392u,
  18288u
}; // weak
_UNKNOWN locret_BA4; // weak
_UNKNOWN unk_C50; // weak
unsigned __int8 byte_C51[21] =
{
  32u,
  130u,
  0u,
  132u,
  0u,
  136u,
  160u,
  32u,
  0u,
  8u,
  0u,
  4u,
  32u,
  2u,
  64u,
  1u,
  128u,
  1u,
  96u,
  0u,
  160u
}; // weak
int dword_E80[8] = { -1, -1, -1, 0, 0, 0, 1, -1 }; // weak
int dword_EA0[8] = { -60611247, -205927742, -1491624316, -1125713235, -1, -1, 0, -1 }; // weak
_BYTE byte_EC0[62] =
{
  -106,
  -62,
  -104,
  -40,
  69,
  57,
  -95,
  -12,
  -96,
  51,
  -21,
  45,
  -127,
  125,
  3,
  119,
  -14,
  64,
  -92,
  99,
  -27,
  -26,
  -68,
  -8,
  71,
  66,
  44,
  -31,
  -14,
  -47,
  23,
  107,
  -11,
  81,
  -65,
  55,
  104,
  64,
  -74,
  -53,
  -50,
  94,
  49,
  107,
  87,
  51,
  -50,
  43,
  22,
  -98,
  15,
  124,
  74,
  -21,
  -25,
  -114,
  -101,
  127,
  26,
  -2,
  -30,
  66
}; // weak
_UNKNOWN loc_122C; // weak
_UNKNOWN loc_2022; // weak
_UNKNOWN loc_2120; // weak
_UNKNOWN dword_2208; // weak
_UNKNOWN dword_220C; // weak
_UNKNOWN dword_2210; // weak
_UNKNOWN dword_2214; // weak
_UNKNOWN dword_2218; // weak
_UNKNOWN dword_221C; // weak
_UNKNOWN unk_2694; // weak
_UNKNOWN unk_2698; // weak
_UNKNOWN unk_269C; // weak
_UNKNOWN unk_26A0; // weak
_UNKNOWN unk_2834; // weak
_UNKNOWN unk_2838; // weak
_UNKNOWN unk_283C; // weak
_UNKNOWN unk_2840; // weak
_UNKNOWN unk_28AC; // weak
_UNKNOWN unk_28B0; // weak
_UNKNOWN loc_32D4; // weak
_UNKNOWN loc_32D8; // weak
_UNKNOWN loc_32DC; // weak
__int16 a0123456789[11] = { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0 }; // weak
unsigned __int8 byte_1512C[128] =
{
  128u,
  128u,
  127u,
  126u,
  125u,
  124u,
  123u,
  122u,
  121u,
  120u,
  119u,
  118u,
  118u,
  117u,
  116u,
  115u,
  114u,
  113u,
  113u,
  112u,
  111u,
  110u,
  110u,
  109u,
  108u,
  108u,
  107u,
  106u,
  106u,
  105u,
  104u,
  104u,
  103u,
  102u,
  102u,
  101u,
  100u,
  100u,
  99u,
  99u,
  98u,
  97u,
  97u,
  96u,
  96u,
  95u,
  95u,
  94u,
  94u,
  93u,
  93u,
  92u,
  92u,
  91u,
  91u,
  90u,
  90u,
  89u,
  89u,
  88u,
  88u,
  87u,
  87u,
  86u,
  86u,
  85u,
  85u,
  85u,
  84u,
  84u,
  83u,
  83u,
  82u,
  82u,
  82u,
  81u,
  81u,
  80u,
  80u,
  80u,
  79u,
  79u,
  79u,
  78u,
  78u,
  77u,
  77u,
  77u,
  76u,
  76u,
  76u,
  75u,
  75u,
  75u,
  74u,
  74u,
  74u,
  73u,
  73u,
  73u,
  72u,
  72u,
  72u,
  71u,
  71u,
  71u,
  71u,
  70u,
  70u,
  70u,
  69u,
  69u,
  69u,
  68u,
  68u,
  68u,
  68u,
  67u,
  67u,
  67u,
  67u,
  66u,
  66u,
  66u,
  66u,
  65u,
  65u,
  65u
}; // weak
unsigned __int8 byte_151AC[64] =
{
  129u,
  130u,
  131u,
  132u,
  133u,
  134u,
  135u,
  136u,
  137u,
  139u,
  140u,
  141u,
  142u,
  143u,
  145u,
  146u,
  147u,
  149u,
  150u,
  151u,
  153u,
  154u,
  156u,
  157u,
  159u,
  160u,
  162u,
  163u,
  165u,
  167u,
  168u,
  170u,
  172u,
  174u,
  176u,
  178u,
  179u,
  181u,
  183u,
  185u,
  188u,
  190u,
  192u,
  194u,
  197u,
  199u,
  201u,
  204u,
  206u,
  209u,
  212u,
  215u,
  217u,
  220u,
  223u,
  226u,
  230u,
  233u,
  236u,
  240u,
  243u,
  247u,
  250u,
  254u
}; // weak
_UNKNOWN unk_151F4; // weak
_DWORD dword_1521C[4] = { 16386, -1610612736, 0, 16389 }; // weak
_UNKNOWN unk_15258; // weak
_UNKNOWN unk_15314; // weak
_UNKNOWN unk_1531C; // weak
_UNKNOWN unk_15330; // weak
_UNKNOWN unk_15338; // weak


//----- (000000FC) --------------------------------------------------------
void sub_FC()
{
  ;
}

//----- (00000100) --------------------------------------------------------
int __fastcall sub_100(int a1)
{
  int v2; // r3
  unsigned int v3; // r0
  int i; // r1
  int v5; // r2

  loc_138();
  MEMORY[0x50005004] = 16 * (MEMORY[0x50005004] >> 4) + 5;
  MEMORY[0x50005008] = 75;
  v2 = MEMORY[0x50005012] << 16;
  v3 = (MEMORY[0x50005010] | (unsigned int)v2) >> 18 << 18;
  MEMORY[0x50005010] = 0;
  MEMORY[0x50005012] = BYTE2(v3);
  MEMORY[0x50005024] = 0;
  for ( i = 0; i < 16; ++i )
  {
    v5 = *(unsigned __int8 *)(i + 0x10000000);
    *(_BYTE *)(a1 + i) = v5;
  }
  sub_109A((int)sub_109A, i, v5, v2);
  __isb(0xFu);
  return loc_138();
}

//----- (000001D0) --------------------------------------------------------
int __fastcall sub_1D0(__int64 a1, unsigned int *a2)
{
  switch ( HIDWORD(a1) )
  {
    case 'n':
      return sub_26A4((int *)a1, 110, (_BYTE **)a2);
    case 'p':
      return sub_1212(a1, 112, a2);
    case 'f':
      return sub_144A8(a1, 102, (int)a2);
    case 'e':
      return sub_144A8(a1, 101, (int)a2);
    case 'g':
      return sub_144A8(a1, 103, (int)a2);
    case 'a':
      return sub_144B8(a1, 97, (int)a2);
  }
  if ( __CFSHR__(*(_DWORD *)a1, 8) )
    HIDWORD(a1) |= 0x80u;
  switch ( HIDWORD(a1) )
  {
    case 0x69:
      return sub_2638((int *)a1, 105, (int *)a2);
    case 0x64:
      return sub_2638((int *)a1, 100, (int *)a2);
    case 0x75:
      return sub_2638((int *)a1, 117, (int *)a2);
    case 0x6F:
      return sub_2888((int *)a1, 111, (int *)a2);
    case 0x78:
      return sub_11EC((int *)a1, 120, (int *)a2);
    case 0xE9:
    case 0xE4:
    case 0xF5:
      return sub_27D4(a1, (int)a2);
    case 0xEF:
      return sub_28A0((_DWORD *)a1, 239, (int)a2);
    case 0xF8:
      return sub_1208((_WORD *)a1, 248, (int)a2);
  }
  if ( __CFSHR__(*(_DWORD *)a1, 7) )
    HIDWORD(a1) |= 0x80u;
  switch ( HIDWORD(a1) )
  {
    case 0x63:
      return sub_3102(a1, 99, a2);
    case 0x73:
      return sub_3112(a1, 115, (unsigned __int8 **)a2);
    case 0xE3:
      return sub_3130(a1, 227, a2);
    case 0xF3:
      return sub_3140(a1, 243, (int *)a2);
  }
  return 0;
}

//----- (000002EC) --------------------------------------------------------
void __fastcall __noreturn sub_2EC(int a1, int a2)
{
  sub_FC();
  sub_3A04();
}

//----- (000002F8) --------------------------------------------------------
_DWORD *__fastcall sub_2F8(_DWORD *result, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // r5
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1

  v3 = result;
  while ( a3 >= 0x10 )
  {
    result = (_DWORD *)*a2;
    v6 = a2[1];
    v7 = a2[2];
    v8 = a2[3];
    a2 += 4;
    *v3 = result;
    v3[1] = v6;
    v3[2] = v7;
    v3[3] = v8;
    v3 += 4;
    a3 -= 16;
  }
  if ( a3 >= 8 )
  {
    result = (_DWORD *)*a2;
    v9 = a2[1];
    a2 += 2;
    *v3 = result;
    v3[1] = v9;
    v3 += 2;
    a3 -= 8;
  }
  if ( a3 >= 4 )
  {
    result = (_DWORD *)*a2++;
    *v3++ = result;
    a3 -= 4;
  }
  while ( a3-- != 0 )
  {
    *(_BYTE *)v3 = *(_BYTE *)a2;
    a2 = (_DWORD *)((char *)a2 + 1);
    v3 = (_DWORD *)((char *)v3 + 1);
  }
  return result;
}

//----- (00000368) --------------------------------------------------------
int __fastcall sub_368(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r4

  return (unsigned __int16)v3 * (unsigned __int16)a3
       + (((unsigned __int16)v3 * HIWORD(a3)) << 16)
       + (((unsigned __int16)a3 * HIWORD(v3)) << 16);
}
// 386: variable 'v3' is possibly undefined

//----- (0000040C) --------------------------------------------------------
int __fastcall sub_40C(int a1, int a2, unsigned int a3)
{
  unsigned __int64 *v3; // r11
  int v4; // r2
  __int64 v5; // r10
  unsigned __int64 *v6; // r2
  int v7; // r3
  unsigned __int64 v8; // r0
  unsigned __int64 v9; // r2
  bool v10; // off
  int v11; // r7
  __int64 v12; // r0
  __int64 v13; // r0
  bool v14; // cf
  __int64 v15; // r2
  __int64 v16; // r10
  unsigned __int64 v19; // [sp-18h] [bp-18h]

  sub_368(a1, a2, a3);
  LODWORD(v5) = v4;
  v6 = v3;
  HIDWORD(v5) = v7;
  v8 = *v6;
  v9 = v6[1];
  v10 = (unsigned int)v8 >= (unsigned int)v9;
  v11 = -(v8 < v9);
  LODWORD(v8) = (v8 - v9) ^ v11;
  HIDWORD(v8) = (HIDWORD(v8) - (HIDWORD(v9) + !v10)) ^ v11;
  v19 = v8 - __PAIR64__(v11, v11);
  LODWORD(v12) = sub_368(v19, SHIDWORD(v19), v9);
  v14 = __CFADD__(__CFADD__((_DWORD)v12, (_DWORD)v5), HIDWORD(v12));
  v13 = v12 + v5;
  v16 = v15 + (v14 | (unsigned __int8)__CFADD__(HIDWORD(v5), HIDWORD(v13)));
  sub_368(v13, SHIDWORD(v13), v19);
  return v16;
}
// 40C: could not find valid save-restore pair for r8
// 40C: could not find valid save-restore pair for r9
// 416: variable 'v4' is possibly undefined
// 42E: variable 'v3' is possibly undefined
// 430: variable 'v7' is possibly undefined
// 454: variable 'v12' is possibly undefined
// 45A: variable 'v15' is possibly undefined

//----- (0000049C) --------------------------------------------------------
int __fastcall sub_49C(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int v3; // r6
  int v4; // r7
  __int64 v5; // r8
  __int64 v6; // r4
  int v7; // r2
  int v8; // r3
  __int64 v9; // r4
  int v10; // r2
  _BOOL1 v11; // cf
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // off
  int v16; // off
  unsigned int *v17; // r1
  _QWORD *v18; // r12
  unsigned int v19; // r0
  unsigned int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r7
  _DWORD *v24; // t0
  int v25; // r0
  unsigned int v26; // r1
  unsigned __int64 v27; // r0
  int v28; // r2
  _QWORD *v29; // r6
  int v30; // r12
  __int64 v31; // r8
  __int64 v32; // r0
  int v33; // r2
  int v34; // r3
  unsigned __int64 v35; // r4
  int v36; // r6
  int v37; // r7
  _QWORD *v38; // t0
  int v39; // r6
  int v40; // r7
  int v41; // r6
  int v42; // r6
  int v43; // r7
  int v44; // r12
  int v45; // r2
  int v46; // r2
  int v47; // r3
  int v48; // r3
  int v49; // r0
  __int64 v50; // r0
  int v51; // r2
  int v52; // off
  int v53; // r3
  BOOL v54; // off
  _BOOL1 v55; // r10
  int v56; // r6
  int v57; // r7
  __int64 v58; // r0
  int v59; // r2
  int v60; // off
  int v61; // r3
  int v62; // off
  int v63; // off
  int v64; // r6
  BOOL v65; // off
  int v66; // r7
  BOOL v67; // off
  BOOL v68; // r10
  int v69; // off
  int v70; // r6
  int v71; // off
  int v72; // r7
  int v73; // off
  int v74; // r6
  int v75; // r10
  unsigned int v76; // r7
  int v77; // r2
  int v78; // r3
  int v79; // off
  int v80; // off
  unsigned int v81; // kr00_4
  unsigned int v82; // r6
  int v83; // r7
  int v84; // r2
  int v85; // r3
  unsigned __int64 v86; // kr08_8
  unsigned int v87; // r12
  int v88; // r7
  unsigned int v89; // lr
  __int64 v90; // r2
  int v91; // off
  BOOL v92; // off
  BOOL v93; // off
  __int64 v94; // r6
  __int64 v95; // kr10_8
  unsigned __int64 v96; // r8
  int v97; // kr18_4
  BOOL v98; // off
  int v99; // r10
  int v100; // off
  int v101; // off
  int v102; // r11
  int v103; // kr20_4
  unsigned __int64 v104; // r4
  BOOL v105; // off
  int v106; // off
  BOOL v107; // off
  int v108; // r10
  unsigned int v109; // r12
  int v110; // r11
  int v111; // off
  BOOL v112; // off
  BOOL v113; // off
  int v115; // [sp-10h] [bp-64h]
  int v116; // [sp-Ch] [bp-60h]
  __int64 v117; // [sp-8h] [bp-5Ch]
  __int64 *v118; // [sp+0h] [bp-54h]
  _BYTE v119[12]; // [sp+0h] [bp-54h]
  unsigned int *v120; // [sp+4h] [bp-50h]
  int v123; // [sp+Ch] [bp-48h]
  __int64 v124; // [sp+10h] [bp-44h]
  int v125; // [sp+18h] [bp-3Ch] BYREF
  _BYTE v126[12]; // [sp+1Ch] [bp-38h]
  int v127; // [sp+28h] [bp-2Ch]
  int v128; // [sp+2Ch] [bp-28h]
  __int64 v129; // [sp+30h] [bp-24h]
  __int64 v130; // [sp+38h] [bp-1Ch]
  unsigned __int64 v131; // [sp+40h] [bp-14h]
  int v132; // [sp+48h] [bp-Ch]
  int v133; // [sp+4Ch] [bp-8h]
  _QWORD *v134; // [sp+50h] [bp-4h] BYREF

  v134 = a1;
  v6 = *a3;
  v118 = a3 + 2;
  v120 = a2 + 4;
  sub_40C((int)(a3 + 2), (int)(a2 + 4), *a2);
  v125 = v7;
  *(_DWORD *)v126 = v8;
  v124 = v5;
  v117 = v6;
  v9 = *v118;
  sub_40C((int)&v125, (int)(v118 + 1), *v120);
  v11 = __CFADD__(
          __CFADD__(__CFADD__((_DWORD)v5, (_DWORD)v117), HIDWORD(v5))
        | __CFADD__(HIDWORD(v117), (unsigned __int64)(v5 + v117) >> 32),
          v10);
  v12 = (__CFADD__(__CFADD__((_DWORD)v5, (_DWORD)v117), HIDWORD(v5))
       | __CFADD__(HIDWORD(v117), (unsigned __int64)(v5 + v117) >> 32))
      + v10;
  v15 = v11 | __CFADD__(v3, v10);
  v11 = __CFADD__(v15, v13);
  v14 = v15 + v13;
  *(_QWORD *)&v126[4] = v5 + v117;
  v127 = v3 + v12;
  v128 = v4 + v14;
  v16 = v11 | __CFADD__(v4, v13);
  v17 = a2;
  v18 = a3;
  *(_DWORD *)v119 = v16 + v9;
  *(_QWORD *)&v119[4] = __PAIR64__(v3, __CFADD__(v16, (_DWORD)v9)) + HIDWORD(v9);
  v123 = __CFADD__(__CFADD__(__CFADD__(v16, (_DWORD)v9), HIDWORD(v9)), v3) + v4;
  v19 = *v17;
  v24 = v17 + 1;
  v20 = v17[1];
  v21 = *++v24;
  v22 = *++v24;
  LODWORD(v9) = *++v24;
  HIDWORD(v9) = *++v24;
  ++v24;
  v23 = v24[1];
  v11 = v19 >= (unsigned int)v9;
  v25 = v19 - v9;
  LOBYTE(v16) = v11;
  v11 = __CFSUB__(v20, HIDWORD(v9), v11);
  v26 = v20 - (HIDWORD(v9) + !(_BYTE)v16);
  LOBYTE(v16) = v11;
  v11 = __CFSUB__(v21, *v24, v11);
  LODWORD(v9) = -!__CFSUB__(v22, v23, v11);
  LODWORD(v27) = v25 ^ v9;
  HIDWORD(v27) = v26 ^ v9;
  v28 = (v21 - (*v24 + !(_BYTE)v16)) ^ v9;
  v29 = v18;
  v30 = v9;
  v129 = v27 - __PAIR64__(v9, v9);
  LODWORD(v130) = v28 - (v9 + (v27 < __PAIR64__(v9, v9)));
  HIDWORD(v130) = ((v22 - (v23 + !v11)) ^ v9) - (v9 + !__CFSUB__(v28, (_DWORD)v9, v27 >= __PAIR64__(v9, v9)));
  v31 = v27 - __PAIR64__(v9, v9);
  v32 = *v29;
  v33 = *((_DWORD *)v29 + 2);
  v34 = *((_DWORD *)v29 + 3);
  v35 = v29[2];
  v38 = v29 + 3;
  v36 = *((_DWORD *)v29 + 6);
  v37 = *((_DWORD *)v38 + 1);
  v11 = (unsigned int)v35 >= (unsigned int)v32;
  LODWORD(v35) = v35 - v32;
  LOBYTE(v16) = v11;
  v11 = __CFSUB__(HIDWORD(v35), HIDWORD(v32), v11);
  HIDWORD(v35) -= HIDWORD(v32) + !(_BYTE)v16;
  LOBYTE(v16) = v11;
  v11 = __CFSUB__(v36, v33, v11);
  v39 = v36 - (v33 + !(_BYTE)v16);
  LOBYTE(v16) = v11;
  v11 = __CFSUB__(v37, v34, v11);
  v40 = v37 - (v34 + !(_BYTE)v16);
  LODWORD(v32) = -!v11;
  LODWORD(v35) = v35 ^ v32;
  HIDWORD(v35) ^= v32;
  v41 = v39 ^ v32;
  v11 = (unsigned int)v35 >= (unsigned int)v32;
  LODWORD(v35) = v35 - v32;
  LOBYTE(v16) = v11;
  v11 = __CFSUB__(HIDWORD(v35), (_DWORD)v32, v11);
  HIDWORD(v35) -= v32 + !(_BYTE)v16;
  LOBYTE(v16) = v11;
  v11 = __CFSUB__(v41, (_DWORD)v32, v11);
  v42 = v41 - (v32 + !(_BYTE)v16);
  v43 = (v40 ^ v32) - (v32 + !v11);
  v131 = v35;
  v132 = v42;
  v133 = v43;
  HIDWORD(v117) = v32 ^ v30;
  sub_40C(v32 ^ v30, (int)&v134, v31);
  v44 = HIDWORD(v117);
  v46 = v45 ^ HIDWORD(v117);
  v48 = v47 ^ HIDWORD(v117);
  v115 = v35 ^ HIDWORD(v117);
  v116 = HIDWORD(v35) ^ HIDWORD(v117);
  LODWORD(v117) = v42 ^ HIDWORD(v117);
  HIDWORD(v117) ^= v43;
  v49 = (v44 >> 1) ^ v31;
  v11 = __CFADD__(v44 & 1, v49);
  LODWORD(v50) = (v44 & 1) + v49;
  v11 |= __CFADD__((_DWORD)v124, (_DWORD)v50);
  LODWORD(v50) = v124 + v50;
  HIDWORD(v50) = HIDWORD(v124) + v11 + (HIDWORD(v31) ^ v44);
  v52 = __CFADD__(v11, HIDWORD(v31) ^ v44) | __CFADD__(HIDWORD(v124), v11 + (HIDWORD(v31) ^ v44));
  v11 = __CFADD__(v52, v46);
  v51 = v52 + v46;
  v11 |= __CFADD__(v125, v51);
  v51 += v125;
  v54 = v11;
  v11 = __CFADD__(v11, v48);
  v53 = v54 + v48;
  v11 |= __CFADD__(*(_DWORD *)v126, v53);
  v53 += *(_DWORD *)v126;
  v55 = v11;
  HIDWORD(v35) = *(_DWORD *)&v126[8];
  v56 = v127;
  v57 = v128;
  v11 = __CFADD__(__CFADD__((_DWORD)v50, *(_DWORD *)&v126[4]), HIDWORD(v50));
  v58 = v50 + *(_QWORD *)&v126[4];
  v60 = v11 | __CFADD__(*(_DWORD *)&v126[8], HIDWORD(v58));
  v11 = __CFADD__(v60, v51);
  v59 = v60 + v51;
  v62 = v11 | __CFADD__(v127, v59);
  v11 = __CFADD__(v62, v53);
  v61 = v62 + v53;
  v11 |= __CFADD__(v128, v61);
  HIDWORD(v31) = *(_DWORD *)&v126[4];
  *(_QWORD *)&v126[4] = v58;
  v127 += v59;
  v128 += v61;
  LODWORD(v35) = v115 + v11 + HIDWORD(v31);
  v63 = __CFADD__(v11, HIDWORD(v31)) | __CFADD__(v115, v11 + HIDWORD(v31));
  v11 = __CFADD__(v63, HIDWORD(v35));
  HIDWORD(v35) += v63;
  v11 |= __CFADD__(v116, HIDWORD(v35));
  HIDWORD(v35) += v116;
  v65 = v11;
  v11 = __CFADD__(v11, v56);
  v64 = v65 + v56;
  v11 |= __CFADD__((_DWORD)v117, v64);
  v64 += v117;
  v67 = v11;
  v11 = __CFADD__(v11, v57);
  v66 = v67 + v57;
  v11 |= __CFADD__(HIDWORD(v117), v66);
  v66 += HIDWORD(v117);
  LOBYTE(v58) = v55;
  v68 = v11;
  v11 = __CFADD__(v58 & 1, (_DWORD)v35);
  LODWORD(v35) = (v58 & 1) + v35;
  v69 = v11 | __CFADD__(*(_DWORD *)v119, (_DWORD)v35);
  v11 = __CFADD__(v69, HIDWORD(v35));
  HIDWORD(v35) += v69;
  v71 = v11 | __CFADD__(*(_DWORD *)&v119[4], HIDWORD(v35));
  v11 = __CFADD__(v71, v64);
  v70 = v71 + v64;
  v73 = v11 | __CFADD__(*(_DWORD *)&v119[8], v70);
  v11 = __CFADD__(v73, v66);
  v72 = v73 + v66;
  v11 |= __CFADD__(v123, v72);
  HIDWORD(v129) = *(_DWORD *)&v119[4] + HIDWORD(v35);
  LODWORD(v130) = *(_DWORD *)&v119[8] + v70;
  HIDWORD(v130) = v123 + v72;
  HIDWORD(v35) = v44 + v11 + v68;
  v74 = (__CFADD__(v11, v68) | __CFADD__(v44, v11 + v68)) + v44;
  v131 = *(_QWORD *)v119 + __PAIR64__(v74, HIDWORD(v35));
  v132 = v74
       + (__CFADD__(__CFADD__(*(_DWORD *)v119, HIDWORD(v35)), *(_DWORD *)&v119[4])
        | __CFADD__(v74, (*(_QWORD *)v119 + __PAIR64__(v74, HIDWORD(v35))) >> 32))
       + *(_DWORD *)&v119[8];
  v133 = v74
       + (__CFADD__(
            __CFADD__(__CFADD__(*(_DWORD *)v119, HIDWORD(v35)), *(_DWORD *)&v119[4])
          | __CFADD__(v74, (*(_QWORD *)v119 + __PAIR64__(v74, HIDWORD(v35))) >> 32),
            *(_DWORD *)&v119[8])
        | __CFADD__(
            v74,
            (__CFADD__(__CFADD__(*(_DWORD *)v119, HIDWORD(v35)), *(_DWORD *)&v119[4])
           | __CFADD__(v74, (*(_QWORD *)v119 + __PAIR64__(v74, HIDWORD(v35))) >> 32))
          + *(_DWORD *)&v119[8]))
       + v123;
  v75 = (unsigned __int64)(*(_QWORD *)v126 + v124) >> 32;
  v76 = HIDWORD(v124)
      + (__CFADD__(
           __CFADD__(
             __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75),
             *(_DWORD *)&v126[8])
         | __CFADD__(
             v125,
             (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75))
           + *(_DWORD *)&v126[8]),
           v127)
       | __CFADD__(
           (_DWORD)v124,
           (__CFADD__(
              __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75),
              *(_DWORD *)&v126[8])
          | __CFADD__(
              v125,
              (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75))
            + *(_DWORD *)&v126[8]))
         + v127))
      + v128;
  v11 = __CFADD__(
          __CFADD__(
            __CFADD__(
              __CFADD__(
                __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75),
                *(_DWORD *)&v126[8])
            | __CFADD__(
                v125,
                (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(
                                                                                              HIDWORD(v124),
                                                                                              v75))
              + *(_DWORD *)&v126[8]),
              v127)
          | __CFADD__(
              (_DWORD)v124,
              (__CFADD__(
                 __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
               | __CFADD__(HIDWORD(v124), v75),
                 *(_DWORD *)&v126[8])
             | __CFADD__(
                 v125,
                 (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                | __CFADD__(HIDWORD(v124), v75))
               + *(_DWORD *)&v126[8]))
            + v127),
            v128)
        | __CFADD__(
            HIDWORD(v124),
            (__CFADD__(
               __CFADD__(
                 __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
               | __CFADD__(HIDWORD(v124), v75),
                 *(_DWORD *)&v126[8])
             | __CFADD__(
                 v125,
                 (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                | __CFADD__(HIDWORD(v124), v75))
               + *(_DWORD *)&v126[8]),
               v127)
           | __CFADD__(
               (_DWORD)v124,
               (__CFADD__(
                  __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                | __CFADD__(HIDWORD(v124), v75),
                  *(_DWORD *)&v126[8])
              | __CFADD__(
                  v125,
                  (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                 | __CFADD__(HIDWORD(v124), v75))
                + *(_DWORD *)&v126[8]))
             + v127))
          + v128),
          *(_DWORD *)v119 + v35);
  v77 = v124
      + (__CFADD__(
           __CFADD__(
             __CFADD__(
               __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75),
               *(_DWORD *)&v126[8])
           | __CFADD__(
               v125,
               (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75))
             + *(_DWORD *)&v126[8]),
             v127)
         | __CFADD__(
             (_DWORD)v124,
             (__CFADD__(
                __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75),
                *(_DWORD *)&v126[8])
            | __CFADD__(
                v125,
                (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(
                                                                                              HIDWORD(v124),
                                                                                              v75))
              + *(_DWORD *)&v126[8]))
           + v127),
           v128)
       | __CFADD__(
           HIDWORD(v124),
           (__CFADD__(
              __CFADD__(
                __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(HIDWORD(v124), v75),
                *(_DWORD *)&v126[8])
            | __CFADD__(
                v125,
                (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4]) | __CFADD__(
                                                                                              HIDWORD(v124),
                                                                                              v75))
              + *(_DWORD *)&v126[8]),
              v127)
          | __CFADD__(
              (_DWORD)v124,
              (__CFADD__(
                 __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
               | __CFADD__(HIDWORD(v124), v75),
                 *(_DWORD *)&v126[8])
             | __CFADD__(
                 v125,
                 (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                | __CFADD__(HIDWORD(v124), v75))
               + *(_DWORD *)&v126[8]))
            + v127))
         + v128))
      + *(_DWORD *)v119
      + v35;
  v79 = v11
      | __CFADD__(
          (_DWORD)v124,
          (__CFADD__(
             __CFADD__(
               __CFADD__(
                 __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
               | __CFADD__(HIDWORD(v124), v75),
                 *(_DWORD *)&v126[8])
             | __CFADD__(
                 v125,
                 (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                | __CFADD__(HIDWORD(v124), v75))
               + *(_DWORD *)&v126[8]),
               v127)
           | __CFADD__(
               (_DWORD)v124,
               (__CFADD__(
                  __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                | __CFADD__(HIDWORD(v124), v75),
                  *(_DWORD *)&v126[8])
              | __CFADD__(
                  v125,
                  (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                 | __CFADD__(HIDWORD(v124), v75))
                + *(_DWORD *)&v126[8]))
             + v127),
             v128)
         | __CFADD__(
             HIDWORD(v124),
             (__CFADD__(
                __CFADD__(
                  __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                | __CFADD__(HIDWORD(v124), v75),
                  *(_DWORD *)&v126[8])
              | __CFADD__(
                  v125,
                  (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                 | __CFADD__(HIDWORD(v124), v75))
                + *(_DWORD *)&v126[8]),
                v127)
            | __CFADD__(
                (_DWORD)v124,
                (__CFADD__(
                   __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                 | __CFADD__(HIDWORD(v124), v75),
                   *(_DWORD *)&v126[8])
               | __CFADD__(
                   v125,
                   (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                  | __CFADD__(HIDWORD(v124), v75))
                 + *(_DWORD *)&v126[8]))
              + v127))
           + v128))
        + *(_DWORD *)v119
        + v35);
  v78 = HIDWORD(v124) + v79 + HIDWORD(v129);
  v80 = __CFADD__(v79, HIDWORD(v129)) | __CFADD__(HIDWORD(v124), v79 + HIDWORD(v129));
  v81 = ((unsigned __int64)(unsigned int)v80 + v130) >> 32;
  LODWORD(v35) = v80 + v130;
  v82 = (__CFADD__(v80, (_DWORD)v130) + (unsigned __int64)HIDWORD(v130)) >> 32;
  v11 = v76 >= (unsigned int)v124;
  v83 = v76 - v124;
  LOBYTE(v80) = v11;
  v11 = __CFSUB__(v77, HIDWORD(v124), v11);
  v84 = v77 - (HIDWORD(v124) + !(_BYTE)v80);
  LOBYTE(v80) = v11;
  v11 = __CFSUB__(v78, v125, v11);
  v85 = v78 - (v125 + !(_BYTE)v80);
  LOBYTE(v80) = v11;
  v11 = __CFSUB__((_DWORD)v35, *(_DWORD *)v126 + v124, v11);
  LODWORD(v35) = v35 - (*(_DWORD *)v126 + v124 + !(_BYTE)v80);
  v86 = __PAIR64__(v82, v81) - !v11;
  LODWORD(v58) = v124
               + (__CFADD__(
                    __CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                  | __CFADD__(HIDWORD(v124), v75),
                    *(_DWORD *)&v126[8])
                | __CFADD__(
                    v125,
                    (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                   | __CFADD__(HIDWORD(v124), v75))
                  + *(_DWORD *)&v126[8]))
               + v127;
  v87 = v58 + *(_DWORD *)v126 + v124;
  v11 = __CFADD__(__CFADD__((_DWORD)v58, *(_DWORD *)v126 + v124), v83);
  v88 = __CFADD__((_DWORD)v58, *(_DWORD *)v126 + v124) + v83;
  v89 = v75 + v88;
  v91 = v11 | __CFADD__(v75, v88);
  v11 = __CFADD__(v91, v84);
  LODWORD(v90) = v91 + v84;
  v11 |= __CFADD__(v125, (_DWORD)v90);
  LODWORD(v90) = v125 + v90;
  v92 = v11;
  v11 = __CFADD__(v11, v85);
  HIDWORD(v90) = v92 + v85;
  v11 |= __CFADD__(*(_DWORD *)v126 + v124, HIDWORD(v90));
  HIDWORD(v90) += *(_DWORD *)v126 + v124;
  v93 = v11;
  v11 = __CFADD__(v11, (_DWORD)v35);
  LODWORD(v35) = v93 + v35;
  v11 |= __CFADD__(v125, (_DWORD)v35);
  LODWORD(v35) = v125 + v35;
  HIDWORD(v35) = *(_DWORD *)v126 + v124 + v11 + (_DWORD)v86;
  v94 = (unsigned int)(__CFADD__(v11, (_DWORD)v86) | __CFADD__(*(_DWORD *)v126 + v124, v11 + (_DWORD)v86))
      + HIDWORD(v86);
  v95 = v94 + v131;
  HIDWORD(v94) += (__CFADD__(__CFADD__((_DWORD)v94, (_DWORD)v131), HIDWORD(v131))
                 | __CFADD__(HIDWORD(v94), (v94 + v131) >> 32))
                + HIDWORD(v94);
  LODWORD(v58) = v125
               + (__CFADD__(__CFADD__(*(_DWORD *)v126, (_DWORD)v124), *(_DWORD *)&v126[4])
                | __CFADD__(HIDWORD(v124), v75))
               + *(_DWORD *)&v126[8];
  v11 = __CFADD__(__CFADD__((_DWORD)v90, (_DWORD)v58), HIDWORD(v90));
  v97 = v90 + v58;
  HIDWORD(v90) = (v90 + __PAIR64__(v87, v58)) >> 32;
  v96 = __PAIR64__(HIDWORD(v90), (int)v90 + (int)v58);
  v11 |= __CFADD__(v87, HIDWORD(v90));
  HIDWORD(v90) = v75;
  v98 = v11;
  v11 = __CFADD__(v11, (_DWORD)v35);
  LODWORD(v35) = v98 + v35;
  v11 |= __CFADD__(v75, (_DWORD)v35);
  v99 = v75 + v35;
  v100 = v11;
  v11 = __CFADD__(v11, HIDWORD(v35));
  HIDWORD(v35) += v100;
  v11 |= __CFADD__((_DWORD)v58, HIDWORD(v35));
  HIDWORD(v35) += v58;
  LODWORD(v94) = HIDWORD(v90) + v11 + (_DWORD)v95;
  v101 = __CFADD__(v11, (_DWORD)v95) | __CFADD__(HIDWORD(v90), v11 + (_DWORD)v95);
  HIDWORD(v58) = v58 + v101 + HIDWORD(v95);
  LODWORD(v90) = HIDWORD(v94) + (__CFADD__(v101, HIDWORD(v95)) | __CFADD__((_DWORD)v58, v101 + HIDWORD(v95))) + v132;
  LODWORD(v35) = (__CFADD__(__CFADD__(v101, HIDWORD(v95)) | __CFADD__((_DWORD)v58, v101 + HIDWORD(v95)), v132)
                | __CFADD__(
                    HIDWORD(v94),
                    (__CFADD__(v101, HIDWORD(v95)) | __CFADD__((_DWORD)v58, v101 + HIDWORD(v95))) + v132))
               + v133;
  HIDWORD(v94) = ((__CFADD__(__CFADD__(v101, HIDWORD(v95)) | __CFADD__((_DWORD)v58, v101 + HIDWORD(v95)), v132)
                 | (unsigned __int8)__CFADD__(
                                      HIDWORD(v94),
                                      (__CFADD__(v101, HIDWORD(v95)) | __CFADD__((_DWORD)v58, v101 + HIDWORD(v95)))
                                    + v132))
                + (unsigned __int64)(unsigned int)v133) >> 32;
  v11 = HIDWORD(v35) >= HIDWORD(v90);
  HIDWORD(v35) -= HIDWORD(v90);
  LOBYTE(v101) = v11;
  v11 = __CFSUB__((_DWORD)v94, (_DWORD)v58, v11);
  LODWORD(v94) = v94 - (v58 + !(_BYTE)v101);
  LOBYTE(v101) = v11;
  v11 = __CFSUB__(HIDWORD(v58), v87, v11);
  HIDWORD(v58) -= v87 + !(_BYTE)v101;
  LOBYTE(v101) = v11;
  v11 = __CFSUB__((_DWORD)v90, v89, v11);
  LODWORD(v90) = v90 - (v89 + !(_BYTE)v101);
  v102 = (__PAIR64__(HIDWORD(v94), v35) - !v11) >> 32;
  v103 = v35 - !v11;
  LODWORD(v35) = v99;
  v11 = __CFADD__(__CFADD__(v99, v89), HIDWORD(v35));
  v104 = v35 + v89;
  v105 = v11;
  v11 = __CFADD__(v11, (_DWORD)v94);
  LODWORD(v94) = v105 + v94;
  v11 |= __CFADD__(v87, (_DWORD)v94);
  LODWORD(v94) = v87 + v94;
  v106 = v11;
  v11 = __CFADD__(v11, HIDWORD(v58));
  HIDWORD(v58) += v106;
  v11 |= __CFADD__(v89, HIDWORD(v58));
  HIDWORD(v58) += v89;
  v107 = v11;
  v11 = __CFADD__(v11, (_DWORD)v90);
  LODWORD(v90) = v107 + v90;
  v11 |= __CFADD__(v87, (_DWORD)v90);
  LODWORD(v90) = v87 + v90;
  HIDWORD(v94) = v89 + v11 + v103;
  v108 = (__CFADD__(v11, v103) | __CFADD__(v89, v11 + v103)) + v102;
  HIDWORD(v96) = (v96 + 1) >> 32;
  v109 = v96 + 1;
  v11 = __CFADD__(__CFADD__(__CFADD__(v97, 1), HIDWORD(v96)), (_DWORD)v104);
  LODWORD(v104) = __CFADD__(__CFADD__(v97, 1), HIDWORD(v96)) + (_DWORD)v104;
  LOBYTE(v107) = v11;
  v11 = HIDWORD(v104) >= !v11;
  HIDWORD(v104) -= !v107;
  LOBYTE(v107) = v11;
  v11 = (unsigned int)v94 >= !v11;
  LODWORD(v94) = v94 - !v107;
  LOBYTE(v107) = v11;
  v11 = HIDWORD(v58) >= !v11;
  HIDWORD(v58) -= !v107;
  LOBYTE(v107) = v11;
  v11 = __CFSUB__((_DWORD)v90, 1, v11);
  LODWORD(v58) = HIDWORD(v94);
  HIDWORD(v94) = v108 - !__CFADD__(v11, HIDWORD(v94));
  LODWORD(v96) = v90 - (!v107 + 1);
  v110 = v11 + (_DWORD)v58;
  v11 = __CFADD__(
          __CFADD__(__CFADD__(v109, HIDWORD(v94)), HIDWORD(v96))
        | __CFADD__(HIDWORD(v94), (__PAIR64__(HIDWORD(v96), v109) + __PAIR64__(HIDWORD(v94), HIDWORD(v94))) >> 32),
          (_DWORD)v104);
  LODWORD(v104) = (__CFADD__(__CFADD__(v109, HIDWORD(v94)), HIDWORD(v96))
                 | __CFADD__(
                     HIDWORD(v94),
                     (__PAIR64__(HIDWORD(v96), v109) + __PAIR64__(HIDWORD(v94), HIDWORD(v94))) >> 32))
                + v104;
  v111 = v11 | __CFADD__(HIDWORD(v94), (_DWORD)v104);
  v11 = __CFADD__(v111, HIDWORD(v104));
  HIDWORD(v104) += v111;
  v112 = v11;
  v11 = __CFADD__(v11, (_DWORD)v94);
  LODWORD(v94) = v112 + v94;
  v113 = v11;
  v11 = __CFADD__(v11, HIDWORD(v58));
  LODWORD(v58) = v134;
  *v134 = __PAIR64__(HIDWORD(v96), v109) + __PAIR64__(HIDWORD(v94), HIDWORD(v94));
  *(_DWORD *)(v58 + 8) = HIDWORD(v94) + v104;
  *(_DWORD *)(v58 + 12) = HIDWORD(v104);
  *(_DWORD *)(v58 + 16) = v94;
  LODWORD(v58) = v58 + 20;
  *(_DWORD *)v58 = v113 + HIDWORD(v58);
  *(_DWORD *)(v58 + 4) = (BYTE4(v94) & 1) + v11 + (_DWORD)v96;
  *(_DWORD *)(v58 + 8) = HIDWORD(v94)
                       + (__CFADD__(v11, (_DWORD)v96) | __CFADD__(BYTE4(v94) & 1, v11 + (_DWORD)v96))
                       + v110;
  return v58 + 12;
}
// 4B8: variable 'v7' is possibly undefined
// 4B8: variable 'v8' is possibly undefined
// 4C0: variable 'v5' is possibly undefined
// 4E2: variable 'v10' is possibly undefined
// 4E2: variable 'v3' is possibly undefined
// 4E4: variable 'v13' is possibly undefined
// 4E8: variable 'v4' is possibly undefined
// 560: variable 'v45' is possibly undefined
// 562: variable 'v47' is possibly undefined

//----- (000006D6) --------------------------------------------------------
int sub_6D6()
{
  unsigned int v0; // r4

  return (unsigned __int16)v0 * (unsigned __int16)v0 + (((unsigned __int16)v0 * HIWORD(v0)) << 17);
}
// 6D6: variable 'v0' is possibly undefined

//----- (00000734) --------------------------------------------------------
int sub_734()
{
  int v0; // r10

  v0 = sub_6D6();
  sub_6D6();
  sub_6D6();
  return v0;
}

//----- (000007B0) --------------------------------------------------------
void sub_7B0()
{
  sub_734();
  sub_734();
  sub_734();
  JUMPOUT(0x5DE);
}
// 8A2: control flows out of bounds to 5DE

//----- (00000932) --------------------------------------------------------
_DWORD *__fastcall sub_932(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = 1;
  v1 = a1 + 1;
  *v1 = 0;
  v1[1] = 0;
  v1 += 2;
  *v1 = 0;
  v1[1] = 0;
  v1 += 2;
  *v1 = 0;
  v1[1] = 0;
  v1 += 2;
  *v1 = 0;
  return v1 - 7;
}

//----- (00000946) --------------------------------------------------------
int __fastcall sub_946(_QWORD *a1, unsigned int *a2)
{
  return sub_49C(a1, a2, &unk_950);
}

//----- (00000970) --------------------------------------------------------
int __fastcall sub_970(_QWORD *a1, unsigned int *a2)
{
  __int64 v3; // [sp+0h] [bp-20h] BYREF
  int v4; // [sp+8h] [bp-18h]
  int v5; // [sp+Ch] [bp-14h]
  int v6; // [sp+10h] [bp-10h]
  int v7; // [sp+14h] [bp-Ch]
  int v8; // [sp+18h] [bp-8h]
  int v9; // [sp+1Ch] [bp-4h]

  v8 = 0;
  v9 = 0;
  v6 = 0;
  v7 = 0;
  v4 = 0;
  v5 = 0;
  v3 = 1;
  return sub_49C(a1, a2, &v3);
}

//----- (0000098A) --------------------------------------------------------
BOOL __fastcall sub_98A(int a1, int a2)
{
  BOOL result; // r0
  char v3; // zf

  sub_B58(a1, a2, word_9CC);
  result = sub_9DC((int *)(a1 + 64), &dword_9AC);
  if ( !v3 )
    return sub_9DC(&dword_9AC, (int *)(a1 + 64));
  return result;
}
// 99C: variable 'v3' is possibly undefined
// 9AC: using guessed type int dword_9AC;
// 9CC: using guessed type unsigned __int16 word_9CC[8];

//----- (000009DC) --------------------------------------------------------
BOOL __fastcall sub_9DC(int *a1, int *a2)
{
  _BOOL1 v2; // cf
  int v3; // r2
  int v4; // r3
  int v5; // r4

  v2 = 1;
  v3 = 8;
  do
  {
    v4 = *a1++;
    v5 = *a2++;
    v2 = __CFSUB__(v4, v5, v2);
    --v3;
  }
  while ( v3 );
  return v2;
}

//----- (000009F6) --------------------------------------------------------
_DWORD *__fastcall sub_9F6(_DWORD *result, int *a2, unsigned int a3, int *a4)
{
  _BOOL1 v4; // cf
  int v5; // r6
  int v6; // r5
  int v7; // r7
  _BOOL1 v8; // off

  v4 = a3 <= 1;
  v5 = 8;
  do
  {
    v6 = *a2++;
    v7 = *a4++;
    v8 = v4;
    v4 = __CFSUB__(v7, v6, v4);
    *result++ = (v7 - (v6 + !v8)) * a3 + v6 * (1 - a3);
    --v5;
  }
  while ( v5 );
  return result;
}

//----- (00000A18) --------------------------------------------------------
_DWORD *__fastcall sub_A18(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r4
  int v6; // r5
  _DWORD *v7; // r0
  int v8; // r3
  int v9; // r4
  int v10; // r5

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v2 = a2 + 4;
  *a1 = v3;
  a1[1] = v4;
  a1[2] = v5;
  a1[3] = v6;
  v7 = a1 + 4;
  v8 = v2[1];
  v9 = v2[2];
  v10 = v2[3];
  *v7 = *v2;
  v7[1] = v8;
  v7[2] = v9;
  v7[3] = v10;
  return v7 + 4;
}

//----- (00000A24) --------------------------------------------------------
_BYTE *__fastcall sub_A24(_BYTE *result, _BYTE *a2)
{
  _BYTE *v2; // r2

  v2 = result + 32;
  do
    *result++ = *a2++;
  while ( result != v2 );
  return result;
}

//----- (00000A36) --------------------------------------------------------
int __fastcall sub_A36(_DWORD *a1, int *a2, int a3)
{
  int v3; // r6
  int v4; // r7
  int v5; // r8
  int v6; // r9
  int v7; // r10
  int v8; // r11
  int v9; // r12
  int v10; // lr
  unsigned int v11; // r0
  _DWORD *v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r4
  _DWORD *v17; // [sp+0h] [bp-Ch]
  int v18; // [sp+4h] [bp-8h]

  v3 = 4;
  do
  {
    v17 = a1;
    v18 = v3;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = __get_CPSR() >> 30;
      v13 = *a2;
      v14 = a2[1];
      v15 = a2[2];
      v12 = a2 + 3;
      v5 += v13 * v11;
      v6 += v14 * v11;
      v7 += v15 * v11;
      v8 += *v12 * v11;
      v9 += v12[1] * v11;
      v10 += v12[2] * v11;
      a2 = v12 + 21;
      ++v4;
    }
    while ( v4 != 8 );
    *v17 = v5;
    v17[1] = v6;
    v17[2] = v7;
    v17[3] = v8;
    v17[4] = v9;
    v17[5] = v10;
    a1 = v17 + 6;
    a2 -= 186;
    --v3;
  }
  while ( v18 != 1 );
  return a3;
}

//----- (00000A96) --------------------------------------------------------
int __fastcall sub_A96(int a1, int a2)
{
  return sub_B58(a1, a2, word_AD0);
}
// AD0: using guessed type unsigned __int16 word_AD0[68];

//----- (00000A9A) --------------------------------------------------------
int __fastcall sub_A9A(int a1, int a2)
{
  return sub_B58(a1, a2, word_AA0);
}
// AA0: using guessed type unsigned __int16 word_AA0[24];

//----- (00000B58) --------------------------------------------------------
int __fastcall sub_B58(int a1, int a2, unsigned __int16 *a3)
{
  unsigned int v3; // r3
  int result; // r0
  unsigned __int16 *v5; // [sp+0h] [bp-88h]
  _DWORD v6[9]; // [sp+4h] [bp-84h]
  char v7; // [sp+28h] [bp-60h] BYREF
  int v8; // [sp+48h] [bp-40h] BYREF
  int v9; // [sp+68h] [bp-20h] BYREF

  v6[6] = a2;
  v6[7] = a2 + 32;
  v6[8] = a2 + 64;
  v6[3] = a1;
  v6[4] = a1 + 32;
  v6[5] = a1 + 64;
  v6[0] = &v7;
  v6[1] = &v8;
  v6[2] = &v9;
  while ( 1 )
  {
    v3 = *a3;
    v5 = a3 + 1;
    result = *(_DWORD *)((char *)v6 + ((v3 >> 6) & 0x3C));
    if ( ((v3 >> 10) & 0x3C) == 0 )
      break;
    (*(void (__fastcall **)(int, _DWORD, _DWORD))((char *)&locret_BA4 + ((v3 >> 10) & 0x3C)))(
      result,
      *(_DWORD *)((char *)v6 + ((v3 >> 2) & 0x3C)),
      *(_DWORD *)((char *)v6 + ((4 * v3) & 0x3C)));
    a3 = v5;
  }
  return result;
}

//----- (00000BBC) --------------------------------------------------------
int __fastcall sub_BBC(_QWORD *a1, int a2, unsigned int *a3)
{
  int v4; // [sp-4h] [bp-Ch]

  if ( a2 )
  {
    do
    {
      v4 = a2;
      sub_7B0();
      a2 = v4 - 1;
    }
    while ( v4 != 1 );
  }
  return sub_49C(a1, a3, a1);
}

//----- (00000BDC) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_BDC(int *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r4
  unsigned int v9; // r5
  unsigned int v10; // r6
  unsigned int v11; // r7
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r6
  int v18; // r7
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r4
  int v23; // r5
  int v24; // r6
  int v25; // r7
  int *v26; // r7
  int v27; // r4
  int v28; // r0
  int v29; // r5
  unsigned __int8 v30; // r6
  int v31; // [sp-64h] [bp-C8h]
  _DWORD v32[8]; // [sp-5Ch] [bp-C0h] BYREF
  unsigned int v33[8]; // [sp-3Ch] [bp-A0h] BYREF
  __int64 v34; // [sp-1Ch] [bp-80h] BYREF
  int v35; // [sp-14h] [bp-78h]
  int v36; // [sp-10h] [bp-74h]
  int v37; // [sp-Ch] [bp-70h]
  int v38; // [sp-8h] [bp-6Ch]
  int v39; // [sp-4h] [bp-68h]
  int v40; // [sp+0h] [bp-64h]
  unsigned int v41[8]; // [sp+4h] [bp-60h] BYREF
  int *v42; // [sp+24h] [bp-40h]

  v42 = a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v8 = a1[4];
  v9 = a1[5];
  v10 = a1[6];
  v11 = a1[7];
  v41[0] = *a1;
  v41[1] = v5;
  v41[2] = v6;
  v41[3] = v7;
  v41[4] = v8;
  v41[5] = v9;
  v41[6] = v10;
  v41[7] = v11;
  sub_BBC(a1, 1, v41);
  v12 = v42[1];
  v13 = v42[2];
  v14 = v42[3];
  v15 = v42[4];
  v16 = v42[5];
  v17 = v42[6];
  v18 = v42[7];
  LODWORD(v34) = *v42;
  HIDWORD(v34) = v12;
  v35 = v13;
  v36 = v14;
  v37 = v15;
  v38 = v16;
  v39 = v17;
  v40 = v18;
  sub_7B0();
  sub_7B0();
  v19 = v42[1];
  v20 = v42[2];
  v21 = v42[3];
  v22 = v42[4];
  v23 = v42[5];
  v24 = v42[6];
  v25 = v42[7];
  v33[0] = *v42;
  v33[1] = v19;
  v33[2] = v20;
  v33[3] = v21;
  v33[4] = v22;
  v33[5] = v23;
  v33[6] = v24;
  v33[7] = v25;
  sub_49C(v42, v33, &v34);
  sub_A18(&v34, v42);
  v26 = v42;
  v27 = 0;
  while ( 1 )
  {
    v28 = *((char *)&unk_C50 + v27);
    v29 = byte_C51[v27];
    v30 = 4 * v28;
    if ( (v28 & 0x20000000) != 0 )
      sub_A18(v32, v26);
    v31 = v27;
    sub_BBC(v26, v30, (_DWORD *)((char *)v32 + v29));
    v27 += 2;
    if ( v31 == 20 )
      __asm { POP             {PC} }
  }
}
// C4C: positive sp value 3C has been found
// C4C: unbalanced stack, ignored a potential tail call
// C51: using guessed type unsigned __int8 byte_C51[21];

//----- (00000C66) --------------------------------------------------------
int __fastcall sub_C66(_QWORD *a1)
{
  _DWORD *v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  _QWORD v10[4]; // [sp-20h] [bp-44h] BYREF
  __int64 v11; // [sp+0h] [bp-24h] BYREF
  int v12; // [sp+8h] [bp-1Ch]
  int v13; // [sp+Ch] [bp-18h]
  int v14; // [sp+10h] [bp-14h]
  int v15; // [sp+14h] [bp-10h]
  int v16; // [sp+18h] [bp-Ch]
  int v17; // [sp+1Ch] [bp-8h]
  _QWORD *v18; // [sp+20h] [bp-4h]

  v18 = a1;
  v1 = a1 + 8;
  v2 = v1[1];
  v3 = v1[2];
  v4 = v1[3];
  v5 = v1[4];
  v6 = v1[5];
  v7 = v1[6];
  v8 = v1[7];
  LODWORD(v11) = *v1;
  HIDWORD(v11) = v2;
  v12 = v3;
  v13 = v4;
  v14 = v5;
  v15 = v6;
  v16 = v7;
  v17 = v8;
  sub_BDC((int *)&v11, v2, v3, v4, v11);
  sub_7B0();
  sub_49C(&v11, (unsigned int *)&v11, v10);
  sub_49C(v18, (unsigned int *)v10, v18);
  return sub_49C(v18 + 4, (unsigned int *)&v11, v18 + 4);
}

//----- (00000CA2) --------------------------------------------------------
int __fastcall sub_CA2(int a1)
{
  return a1 & (-a1 >> 31) | (a1 >> 31) & -a1;
}

//----- (00000CB0) --------------------------------------------------------
int __fastcall sub_CB0(_BYTE *a1, _BYTE *a2, _BYTE *a3, int a4)
{
  int v4; // r6
  int result; // r0
  char v6; // zf
  unsigned int v7; // r2
  unsigned int v8; // r6
  _BYTE *v9; // r1
  char v10; // r0
  unsigned int i; // r2
  int v12; // r3
  char v13; // r3
  _BYTE *v14; // r0
  _BYTE *v15; // r1
  int v16; // r1
  unsigned int *v17; // r0
  int *v18; // r4
  int v19; // r5
  _DWORD *v20; // r0
  int *v21; // r1
  _DWORD *v22; // r0
  int *v23; // r1
  char *v24; // r7
  unsigned int v25; // r0
  int v26; // r4
  char v27; // r0
  unsigned int v28; // r4
  unsigned int v29; // r0
  BOOL v30; // r0
  _BYTE *v31; // r0
  _BYTE *v32; // r1
  _QWORD v33[4]; // [sp+0h] [bp-408h] BYREF
  unsigned int v34[8]; // [sp+20h] [bp-3E8h] BYREF
  _DWORD v35[8]; // [sp+40h] [bp-3C8h] BYREF
  int v36[144]; // [sp+60h] [bp-3A8h] BYREF
  int v37[24]; // [sp+2A0h] [bp-168h] BYREF
  int v38[8]; // [sp+300h] [bp-108h] BYREF
  int v39[8]; // [sp+320h] [bp-E8h] BYREF
  int v40[8]; // [sp+340h] [bp-C8h] BYREF
  _BYTE v41[62]; // [sp+360h] [bp-A8h] BYREF
  _BYTE v42[2]; // [sp+39Eh] [bp-6Ah] BYREF
  unsigned int v43[8]; // [sp+3A0h] [bp-68h] BYREF
  unsigned int v44[16]; // [sp+3C0h] [bp-48h] BYREF
  _BYTE *v45; // [sp+400h] [bp-8h]
  _BYTE *v46; // [sp+404h] [bp-4h]

  v45 = a1;
  v46 = a2;
  v4 = a4 << 16;
  sub_A24(v39, a3);
  sub_932(v38);
  result = sub_9DC(v39, v38);
  if ( !v6 )
  {
    result = sub_9DC(v39, dword_EA0) - 1;
    if ( result )
    {
      v7 = !(v39[0] & 1);
      v8 = v4 + v7;
      sub_9F6(v38, v39, v7, dword_EA0);
      v9 = v41;
      v10 = v38[0] & 0xF;
      for ( i = 1; i != 64; ++i )
      {
        v12 = (*((unsigned __int8 *)v38 + (i >> 1)) >> ((4 * i) & 7)) & 0xF;
        *v9++ = v10 - 16 * !((*((unsigned __int8 *)v38 + (i >> 1)) >> ((4 * i) & 7)) & 1);
        v13 = v12 | 1;
        v10 = v13;
      }
      *v9 = v13;
      v14 = sub_A24(v33, v46);
      sub_A24(v14, v15);
      result = sub_9DC((int *)v33, dword_E80) - 1;
      if ( result )
      {
        result = sub_9DC((int *)v34, dword_E80) - 1;
        if ( result )
        {
          sub_946(v33, (unsigned int *)v33);
          sub_946(v34, v34);
          result = sub_98A((int)v33, v16);
          if ( result )
          {
            v17 = sub_932(v35);
            sub_946(v17, v17);
            sub_A96((int)v37, (int)v33);
            v18 = v36;
            v19 = 7;
            do
            {
              v20 = sub_A18(v18, v37);
              v22 = sub_A18(v20, v21);
              sub_A18(v22, v23);
              sub_A9A((int)v18, (int)(v18 - 24));
              v18 += 24;
              --v19;
            }
            while ( v19 );
            v24 = v42;
            v25 = sub_CA2(v42[1]);
            sub_A36(v38, (int *)v33, v25 >> 1);
            do
            {
              v26 = 4;
              do
              {
                sub_A96((int)v38, (int)v38);
                --v26;
              }
              while ( v26 );
              v27 = *v24--;
              v28 = (unsigned int)v27 >> 31;
              v29 = sub_CA2(v27);
              sub_A36(v43, (int *)v33, v29 >> 1);
              sub_9F6(v44, (int *)v44, v28, dword_E80);
              if ( (int)v24 < (int)v41 )
                sub_A96((int)v37, (int)v38);
              sub_A9A((int)v38, (int)v43);
            }
            while ( (int)v24 >= (int)v41 );
            sub_932(v33);
            v30 = sub_9DC(v40, (int *)v33);
            sub_A36(v43, v36, v30 + 6);
            sub_C66(v43);
            sub_970(v43, v43);
            sub_970(v44, v44);
            sub_9F6(v44, (int *)v44, (unsigned __int8)v8, dword_E80);
            v31 = sub_A24(v45, v43);
            if ( HIWORD(v8) )
              sub_A24(v31, v32);
            return 1;
          }
        }
      }
    }
  }
  return result;
}
// CD6: variable 'v6' is possibly undefined
// D3E: variable 'v15' is possibly undefined
// D72: variable 'v16' is possibly undefined
// D9A: variable 'v21' is possibly undefined
// D9E: variable 'v23' is possibly undefined
// E5E: variable 'v32' is possibly undefined
// E80: using guessed type int dword_E80[8];
// EA0: using guessed type int dword_EA0[8];

//----- (00000E72) --------------------------------------------------------
int __fastcall sub_E72(_BYTE *a1, _BYTE *a2)
{
  return sub_CB0(a1, byte_EC0, a2, 1);
}
// EC0: using guessed type _BYTE byte_EC0[62];

//----- (00000E7A) --------------------------------------------------------
int __fastcall sub_E7A(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  return sub_CB0(a1, a2, a3, 0);
}

//----- (00000F00) --------------------------------------------------------
_WORD *__fastcall sub_F00(unsigned int a1, unsigned int a2)
{
  unsigned __int64 v2; // r0
  unsigned int v3; // r4
  _WORD *v5; // r0
  _WORD *v6; // r5

  LODWORD(v2) = sub_46D4(a1, a2);
  v3 = v2;
  if ( v2 >= 0x10000000 )
    return 0;
  v5 = (_WORD *)sub_F2C(v2);
  v6 = v5;
  if ( v5 )
    sub_157C(v5, v3);
  return v6;
}
// F12: variable 'v2' is possibly undefined

//----- (00000F2C) --------------------------------------------------------
int __fastcall sub_F2C(unsigned int a1)
{
  int v2; // r5
  unsigned int v3; // r4
  int result; // r0
  unsigned int *v5; // r0
  unsigned int *v6; // r2
  unsigned int *v7; // r1

  v2 = *(_DWORD *)sub_2470();
  v3 = 8 * ((a1 + 11) >> 3);
  if ( v3 <= a1 )
    return 0;
  while ( 1 )
  {
    v5 = *(unsigned int **)(v2 + 4);
    v6 = (unsigned int *)v2;
    if ( v5 )
      break;
LABEL_10:
    result = sub_2480();
    if ( !result )
      return result;
  }
  while ( *v5 < v3 )
  {
    v6 = v5;
    v5 = (unsigned int *)v5[1];
    if ( !v5 )
      goto LABEL_10;
  }
  if ( *v5 < v3 + 8 )
  {
    v6[1] = v5[1];
  }
  else
  {
    v7 = &v5[v3 / 4];
    v7[1] = v5[1];
    *v7 = *v5 - v3;
    v6[1] = (unsigned int)&v5[v3 / 4];
    *v5 = v3;
  }
  return (int)(v5 + 1);
}

//----- (00000F8E) --------------------------------------------------------
_DWORD *__fastcall sub_F8E(int a1)
{
  _DWORD *v2; // r5
  _DWORD *result; // r0
  _DWORD *i; // r4
  _DWORD *v5; // r2

  v2 = (_DWORD *)(a1 - 4);
  result = *(_DWORD **)sub_2470();
  if ( a1 )
  {
    for ( i = (_DWORD *)result[1]; i && i < v2; i = (_DWORD *)i[1] )
      result = i;
    if ( (_DWORD *)((char *)result + *result) == v2 )
    {
      v5 = (_DWORD *)*v2;
      v2 = result;
      *result += v5;
    }
    else
    {
      result[1] = v2;
    }
    result = (_DWORD *)*v2;
    if ( (_DWORD *)((char *)v2 + *v2) == i )
    {
      v2[1] = i[1];
      result = (_DWORD *)((char *)result + *i);
      *v2 = result;
    }
    else
    {
      v2[1] = i;
    }
  }
  return result;
}

//----- (00000FDA) --------------------------------------------------------
unsigned __int64 __fastcall sub_FDA(unsigned int a1, int a2, unsigned int a3, int a4)
{
  return ((unsigned __int64)((unsigned __int16)a1 * HIWORD(a3)) << 16)
       + ((unsigned __int64)(HIWORD(a1) * (unsigned __int16)a3) << 16)
       + __PAIR64__(
           HIWORD(a1) * HIWORD(a3) + a4 * a1 + a2 * a3,
           (unsigned __int16)a1 * (unsigned int)(unsigned __int16)a3);
}

//----- (0000100A) --------------------------------------------------------
int __fastcall sub_100A(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( !a2 )
    JUMPOUT(0x10F8);
  if ( a1 < a2 )
    JUMPOUT(0x10F4);
  if ( HIDWORD(a1) >= a2 )
  {
    HIDWORD(a2) = a2;
    LODWORD(a2) = 0;
  }
  if ( a1 >> 16 >= a2 )
    a2 <<= 16;
  if ( a1 >> 8 >= a2 )
    a2 <<= 8;
  if ( a1 >> 4 >= a2 )
    a2 *= 16LL;
  return sub_109A(0, 0, a2, SHIDWORD(a2));
}
// 1022: control flows out of bounds to 10F4
// 110A: control flows out of bounds to 10F8

//----- (0000109A) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_109A(__int64 a1, unsigned __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  _BOOL1 v7; // cf
  int v8; // r4
  int v9; // r5
  unsigned int v10; // r12
  unsigned int v11; // lr
  int v12; // off
  int v13; // off

  if ( __CFSUB__(v9, HIDWORD(a2), v7) )
  {
    a2 *= 4LL;
    v8 += 2;
  }
  if ( __PAIR64__(v10, v11) >> 1 >= a2 )
  {
    v12 = (a2 + (unsigned int)a2) >> 32;
    LODWORD(a2) = 2 * a2;
    HIDWORD(a2) += v12;
    ++v8;
  }
  while ( --v8 >= 0 )
  {
    v13 = (a1 + (unsigned __int64)(unsigned int)a1) >> 32;
    LODWORD(a1) = 2 * a1;
    HIDWORD(a1) += v13;
    if ( __PAIR64__(v10, v11) >= a2 )
    {
      v10 = (__PAIR64__(v10, v11) - a2) >> 32;
      v11 -= a2;
      ++a1;
    }
    a2 >>= 1;
  }
  __asm { POP             {R4-R7,PC} }
}
// 10FA: positive sp value C has been found
// 10FA: unbalanced stack, ignored a potential tail call
// 109A: variable 'v9' is possibly undefined
// 109A: variable 'v7' is possibly undefined
// 10A6: variable 'v8' is possibly undefined
// 10B2: variable 'v11' is possibly undefined
// 10B2: variable 'v10' is possibly undefined

//----- (0000110C) --------------------------------------------------------
int __fastcall sub_110C(_BYTE *a1, int a2, int a3, int a4)
{
  int v5; // r5
  _BYTE *v7; // [sp+0h] [bp-8h] BYREF
  _BYTE *v8; // [sp+4h] [bp-4h]

  v8 = (_BYTE *)a4;
  v7 = a1;
  if ( a2 )
    a1 = &a1[a2 - 1];
  v8 = a1;
  v5 = sub_26D6(a3, (int)&v7, a4, (int)sub_2706);
  if ( a2 )
    sub_26FC(0, &v7);
  return v5;
}

//----- (00001144) --------------------------------------------------------
int __fastcall sub_1144(int *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r6
  int result; // r0

  v2 = a1[6];
  v3 = *a1;
  if ( (v3 & 0x10) != 0 )
    v4 = 48;
  else
    v4 = 32;
  result = v3 << 31;
  if ( !result )
  {
    while ( --v2 >= 0 )
    {
      ((void (__fastcall *)(int, int))a1[1])(v4, a1[2]);
      result = a1[8] + 1;
      a1[8] = result;
    }
  }
  return result;
}

//----- (00001170) --------------------------------------------------------
int __fastcall sub_1170(unsigned __int8 *a1)
{
  int v2; // r5
  int result; // r0

  v2 = *((_DWORD *)a1 + 6);
  result = *a1 << 31;
  if ( result )
  {
    while ( --v2 >= 0 )
    {
      (*((void (__fastcall **)(int, _DWORD))a1 + 1))(32, *((_DWORD *)a1 + 2));
      result = *((_DWORD *)a1 + 8) + 1;
      *((_DWORD *)a1 + 8) = result;
    }
  }
  return result;
}

//----- (00001194) --------------------------------------------------------
int __fastcall sub_1194(_WORD *a1, int a2, unsigned __int64 a3)
{
  const char *v4; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r3

  if ( (*a1 & 0x800) != 0 )
    v4 = "0123456789ABCDEF@0X";
  else
    v4 = "0123456789abcdef@0x";
  v5 = 0;
  while ( a3 )
  {
    *((_BYTE *)a1 + v5 + 36) = v4[a3 & 0xF];
    a3 >>= 4;
    ++v5;
  }
  v6 = (int)v4;
  v7 = 0;
  if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    if ( a2 == 112 )
    {
      v7 = 1;
      v6 = (int)(v4 + 16);
    }
    else if ( v5 )
    {
      v7 = 2;
      v6 = (int)(v4 + 17);
    }
  }
  return sub_2588((int)a1, v5, v6, v7);
}
// 1: using guessed type _BYTE byte_1[203];

//----- (000011EC) --------------------------------------------------------
int __fastcall sub_11EC(int *a1, int a2, int *a3)
{
  int v5; // r0

  v5 = sub_2524(*a3, a1);
  return sub_1194(a1, a2, (unsigned int)v5);
}

//----- (00001208) --------------------------------------------------------
int __fastcall sub_1208(_WORD *a1, int a2, int a3)
{
  return sub_1194(a1, a2, *(_QWORD *)(8 * ((unsigned int)(a3 + 7) >> 3)));
}

//----- (00001212) --------------------------------------------------------
int __fastcall sub_1212(int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // r2

  v3 = *a3;
  *(_DWORD *)a1 |= 0x20u;
  *(_DWORD *)(a1 + 28) = 8;
  return sub_1194((_WORD *)a1, a2, v3);
}

//----- (000013B4) --------------------------------------------------------
int __fastcall sub_13B4(unsigned int *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r4
  int v6; // r3
  int v7; // r4
  int v8; // r3
  int v9; // r3
  int v10; // r4

  if ( !(((unsigned int)a1 | (unsigned int)a2) << 30) )
  {
    while ( a3 >= 4 )
    {
      v3 = *a1++;
      v4 = *a2++;
      a3 -= 4;
      if ( v3 != v4 )
      {
        if ( bswap32(v3) <= bswap32(v4) )
          return -1;
        else
          return 1;
      }
    }
  }
  if ( !a3 )
    return 0;
  if ( !(a3 << 31) )
    goto LABEL_11;
  ++a3;
  do
  {
    v9 = *(unsigned __int8 *)a1;
    v10 = *(unsigned __int8 *)a2;
    a1 = (unsigned int *)((char *)a1 + 1);
    a2 = (unsigned int *)((char *)a2 + 1);
    v8 = v9 - v10;
    if ( v8 )
      break;
    a3 -= 2;
    if ( !a3 )
      break;
LABEL_11:
    v6 = *(unsigned __int8 *)a1;
    v7 = *(unsigned __int8 *)a2;
    a1 = (unsigned int *)((char *)a1 + 1);
    a2 = (unsigned int *)((char *)a2 + 1);
    v8 = v6 - v7;
  }
  while ( !v8 );
  return v8;
}

//----- (0000140E) --------------------------------------------------------
_BYTE *__fastcall sub_140E(_BYTE *a1, char *a2, unsigned int a3)
{
  sub_141A(a1, a2, a3);
  return a1;
}

//----- (0000141A) --------------------------------------------------------
_BYTE *__fastcall sub_141A(_BYTE *result, char *a2, unsigned int a3)
{
  char v3; // r3
  char v4; // r3
  char v5; // r3
  int v6; // r3
  unsigned int *v7; // r1
  char v8; // r7
  unsigned int v9; // r6
  unsigned int *v10; // r1
  unsigned int v11; // r3
  unsigned int v12; // r5
  int v13; // r2
  char v14; // r3
  char *v15; // r1
  int v16; // r2
  char v17; // r3
  _BYTE *v18; // r1

  if ( a3 >= 4 )
  {
    if ( (_DWORD)result << 30 )
    {
      v3 = *a2++;
      *result++ = v3;
      --a3;
      if ( (_DWORD)result << 30 )
      {
        v4 = *a2++;
        *result++ = v4;
        --a3;
        if ( (_DWORD)result << 30 )
        {
          v5 = *a2++;
          *result++ = v5;
          --a3;
        }
      }
    }
    v6 = (unsigned __int8)a2 & 3;
    if ( ((unsigned __int8)a2 & 3) == 0 )
      return sub_2F8(result, a2, a3);
    v7 = (unsigned int *)&a2[-v6];
    v8 = 8 * v6;
    v9 = 32 - 8 * v6;
    v11 = *v7;
    v10 = v7 + 1;
    while ( a3 >= 4 )
    {
      v12 = v11;
      v11 = *v10++;
      *(_DWORD *)result = (v11 << v9) | (v12 >> v8);
      result += 4;
      a3 -= 4;
    }
    a2 = (char *)v10 - (v9 >> 3);
  }
  v13 = a3 - 1;
  if ( v13 >= 0 )
  {
    v14 = *a2;
    v15 = a2 + 1;
    *result++ = v14;
    v16 = v13 - 1;
    if ( v16 >= 0 )
    {
      v17 = *v15;
      v18 = v15 + 1;
      *result++ = v17;
      if ( v16 - 1 >= 0 )
        *result = *v18;
    }
  }
  return result;
}

//----- (0000149C) --------------------------------------------------------
char *__fastcall sub_149C(char *a1, char *a2, unsigned int a3)
{
  char *v3; // r1
  char *result; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r6

  if ( a1 - a2 >= a3 )
    return (char *)sub_2F8(a1, a2, a3);
  v3 = &a2[a3];
  result = &a1[a3];
  while ( a3 << 30 )
  {
    --v3;
    --result;
    --a3;
    *result = *v3;
  }
  while ( a3 >= 0x10 )
  {
    v3 -= 16;
    result -= 16;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v7 = *((_DWORD *)v3 + 3);
    *(_DWORD *)result = *(_DWORD *)v3;
    *((_DWORD *)result + 1) = v5;
    *((_DWORD *)result + 2) = v6;
    *((_DWORD *)result + 3) = v7;
    a3 -= 16;
  }
  while ( 1 )
  {
    a3 -= 4;
    if ( (a3 & 0x80000000) != 0 )
      break;
    v3 -= 4;
    result -= 4;
    *(_DWORD *)result = *(_DWORD *)v3;
  }
  return result;
}

//----- (000014E2) --------------------------------------------------------
char *__fastcall sub_14E2(char *a1, char *a2, unsigned int a3)
{
  unsigned int v4; // r4
  unsigned int v5; // r5
  char *result; // r0
  char *i; // r1
  char *v9; // r7

  v4 = a3;
  if ( !(((unsigned int)a1 | (unsigned int)a2) << 30) )
    return sub_149C(a1, a2, a3);
  v5 = a1 - a2;
  if ( a1 - a2 >= a3 )
    return sub_141A(a1, a2, v4);
  result = &a2[a3];
  if ( v5 >= 0x10 )
  {
    while ( v5 < v4 )
    {
      v9 = &result[-v5];
      sub_141A(result, &result[-v5], v5);
      v4 -= v5;
      result = v9;
    }
    a2 = &result[-v4];
    return sub_141A(a1, a2, v4);
  }
  for ( i = &a1[a3]; v4-- != 0; *i = *result )
  {
    --result;
    --i;
  }
  return result;
}

//----- (00001532) --------------------------------------------------------
_WORD *__fastcall sub_1532(_WORD *a1, unsigned int a2, unsigned __int8 a3)
{
  return sub_155E(a1, a2, 16843009 * a3);
}

//----- (0000155E) --------------------------------------------------------
_WORD *__fastcall sub_155E(_WORD *result, unsigned int a2, int a3)
{
  if ( a2 )
  {
    if ( (_DWORD)result << 31 )
    {
      *(_BYTE *)result = a3;
      result = (_WORD *)((char *)result + 1);
      --a2;
    }
    if ( a2 >= 2 && ((unsigned __int8)result & 2) != 0 )
    {
      *result++ = a3;
      a2 -= 2;
    }
  }
  while ( a2 >= 4 )
  {
    *(_DWORD *)result = a3;
    result += 2;
    a2 -= 4;
  }
  if ( (a2 & 2) != 0 )
    *result++ = a3;
  if ( a2 << 31 )
    *(_BYTE *)result = a3;
  return result;
}

//----- (0000157C) --------------------------------------------------------
_WORD *__fastcall sub_157C(_WORD *a1, unsigned int a2)
{
  return sub_155E(a1, a2, 0);
}

//----- (00001580) --------------------------------------------------------
_DWORD *__fastcall sub_1580(_DWORD *result, unsigned int a2)
{
  while ( a2 >= 4 )
  {
    *result++ = 0;
    a2 -= 4;
  }
  if ( (a2 & 2) != 0 )
  {
    *(_WORD *)result = 0;
    result = (_DWORD *)((char *)result + 2);
  }
  if ( a2 << 31 )
    *(_BYTE *)result = 0;
  return result;
}

//----- (00001584) --------------------------------------------------------
int __fastcall sub_1584(unsigned __int8 *a1)
{
  return (a1[1] << 8) | *a1 | (a1[2] << 16) | (a1[3] << 24);
}

//----- (0000159A) --------------------------------------------------------
int __fastcall sub_159A(int result, _DWORD *a2)
{
  *a2 = result;
  return result;
}

//----- (000015AA) --------------------------------------------------------
void __fastcall sub_15AA(unsigned int a1, unsigned int a2)
{
  if ( a1 >> 4 >= a2 )
  {
    if ( a1 >> 8 >= a2 )
    {
      if ( a1 >> 12 >= a2 )
      {
        if ( HIWORD(a1) >= a2 )
          JUMPOUT(0x15EC);
        JUMPOUT(0x1608);
      }
      JUMPOUT(0x1638);
    }
    JUMPOUT(0x166A);
  }
  JUMPOUT(0x169A);
}
// 15B0: control flows out of bounds to 169A
// 15B6: control flows out of bounds to 166A
// 15BC: control flows out of bounds to 1638
// 15C2: control flows out of bounds to 1608
// 15C4: control flows out of bounds to 15EC

//----- (000015C6) --------------------------------------------------------
int __fastcall sub_15C6(unsigned int a1, unsigned int a2)
{
  int v2; // r2
  char v3; // cf
  int v4; // r2
  bool v5; // cf
  int v6; // r2
  bool v7; // cf
  int v8; // r2
  bool v9; // cf
  bool v10; // cf
  int v11; // r2
  bool v12; // cf
  int v13; // r2
  bool v14; // cf
  int v15; // r2
  bool v16; // cf
  int v17; // off
  bool v18; // cf
  int v19; // r2
  bool v20; // cf
  int v21; // r2
  bool v22; // cf
  int v23; // r2
  bool v24; // cf
  bool v25; // cf
  int v26; // r2
  bool v27; // cf
  int v28; // r2
  bool v29; // cf
  int result; // r0
  unsigned int v31; // r2
  int v32; // r3
  char v33; // r3
  int v34; // r2
  char v35; // r12
  unsigned int v36; // r3
  bool v37; // cf
  int v38; // r2
  bool v39; // cf
  int v40; // r2
  bool v41; // cf
  int v42; // r2
  bool v43; // cf
  bool v44; // cf
  int v45; // r2
  bool v46; // cf
  int v47; // off
  bool v48; // cf
  int v49; // r2

  if ( ((a1 | a2) & 0x80000000) == 0 )
  {
    v2 = 0;
    if ( a1 >> 1 < a2 )
      return v2 + (a1 >= a2) + v2;
    if ( a1 >> 4 < a2 )
    {
LABEL_39:
      v25 = a1 >> 3 >= a2;
      if ( a1 >> 3 >= a2 )
      {
        v25 = a1 >= 8 * a2;
        a1 -= 8 * a2;
      }
      v26 = v2 + v25 + v2;
      v27 = a1 >> 2 >= a2;
      if ( a1 >> 2 >= a2 )
      {
        v27 = a1 >= 4 * a2;
        a1 -= 4 * a2;
      }
      v28 = v26 + v27 + v26;
      v29 = a1 >> 1 >= a2;
      if ( a1 >> 1 >= a2 )
      {
        v29 = a1 >= 2 * a2;
        a1 -= 2 * a2;
      }
      v2 = v28 + v29 + v28;
      return v2 + (a1 >= a2) + v2;
    }
    if ( a1 >> 8 < a2 )
    {
LABEL_30:
      v18 = a1 >> 7 >= a2;
      if ( a1 >> 7 >= a2 )
      {
        v18 = a1 >= a2 << 7;
        a1 -= a2 << 7;
      }
      v19 = v2 + v18 + v2;
      v20 = a1 >> 6 >= a2;
      if ( a1 >> 6 >= a2 )
      {
        v20 = a1 >= a2 << 6;
        a1 -= a2 << 6;
      }
      v21 = v19 + v20 + v19;
      v22 = a1 >> 5 >= a2;
      if ( a1 >> 5 >= a2 )
      {
        v22 = a1 >= 32 * a2;
        a1 -= 32 * a2;
      }
      v23 = v21 + v22 + v21;
      v24 = a1 >> 4 >= a2;
      if ( a1 >> 4 >= a2 )
      {
        v24 = a1 >= 16 * a2;
        a1 -= 16 * a2;
      }
      v2 = v23 + v24 + v23;
      goto LABEL_39;
    }
    if ( a1 >> 12 < a2 )
      goto LABEL_21;
    if ( HIWORD(a1) < a2 )
    {
      while ( 1 )
      {
LABEL_12:
        v3 = a1 >> 15 >= a2;
        if ( a1 >> 15 >= a2 )
        {
          v3 = a1 >= a2 << 15;
          a1 -= a2 << 15;
        }
        v4 = v2 + v3 + v2;
        v5 = a1 >> 14 >= a2;
        if ( a1 >> 14 >= a2 )
        {
          v5 = a1 >= a2 << 14;
          a1 -= a2 << 14;
        }
        v6 = v4 + v5 + v4;
        v7 = a1 >> 13 >= a2;
        if ( a1 >> 13 >= a2 )
        {
          v7 = a1 >= a2 << 13;
          a1 -= a2 << 13;
        }
        v8 = v6 + v7 + v6;
        v9 = a1 >> 12 >= a2;
        if ( a1 >> 12 >= a2 )
        {
          v9 = a1 >= a2 << 12;
          a1 -= a2 << 12;
        }
        v2 = v8 + v9 + v8;
LABEL_21:
        v10 = a1 >> 11 >= a2;
        if ( a1 >> 11 >= a2 )
        {
          v10 = a1 >= a2 << 11;
          a1 -= a2 << 11;
        }
        v11 = v2 + v10 + v2;
        v12 = a1 >> 10 >= a2;
        if ( a1 >> 10 >= a2 )
        {
          v12 = a1 >= a2 << 10;
          a1 -= a2 << 10;
        }
        v13 = v11 + v12 + v11;
        v14 = a1 >> 9 >= a2;
        if ( a1 >> 9 >= a2 )
        {
          v14 = a1 >= a2 << 9;
          a1 -= a2 << 9;
        }
        v15 = v13 + v14 + v13;
        v16 = a1 >> 8 >= a2;
        if ( a1 >> 8 >= a2 )
        {
          v16 = a1 >= a2 << 8;
          a1 -= a2 << 8;
        }
        v17 = v16 + v15;
        v3 = __CFADD__(v16, v15) | __CFADD__(v15, v17);
        v2 = v15 + v17;
        if ( !v3 )
          break;
        a2 >>= 8;
      }
      goto LABEL_30;
    }
    a2 <<= 8;
    v2 = bswap32(0xFFu);
    if ( HIWORD(a1) < a2 || (v2 >>= 8, (a2 <<= 8) != 0) )
    {
      if ( a1 >> 12 < a2 )
        goto LABEL_21;
      goto LABEL_12;
    }
    return sub_1788();
  }
  v31 = a2 >> 31;
  if ( (a2 & 0x80000000) != 0 )
    a2 = -a2;
  v32 = (int)a1 >> 31;
  if ( __CFSHR__(a1, 32) )
    a1 = -a1;
  v33 = v32 ^ v31;
  v34 = 0;
  v35 = v33;
  if ( a1 >> 4 < a2 )
    goto LABEL_70;
  if ( a1 >> 8 >= a2 )
  {
    a2 <<= 6;
    v34 = bswap32(0xFCu);
    v36 = a1 >> 8;
    if ( a1 >> 8 >= a2 )
    {
      a2 <<= 6;
      v34 >>= 6;
      if ( v36 >= a2 )
      {
        a2 <<= 6;
        v34 >>= 6;
        if ( v36 >= a2 )
        {
          a2 <<= 6;
          if ( !a2 )
            return sub_1788();
          v34 >>= 6;
        }
      }
    }
  }
  while ( 1 )
  {
    v37 = a1 >> 7 >= a2;
    if ( a1 >> 7 >= a2 )
    {
      v37 = a1 >= a2 << 7;
      a1 -= a2 << 7;
    }
    v38 = v34 + v37 + v34;
    v39 = a1 >> 6 >= a2;
    if ( a1 >> 6 >= a2 )
    {
      v39 = a1 >= a2 << 6;
      a1 -= a2 << 6;
    }
    v40 = v38 + v39 + v38;
    v41 = a1 >> 5 >= a2;
    if ( a1 >> 5 >= a2 )
    {
      v41 = a1 >= 32 * a2;
      a1 -= 32 * a2;
    }
    v42 = v40 + v41 + v40;
    v43 = a1 >> 4 >= a2;
    if ( a1 >> 4 >= a2 )
    {
      v43 = a1 >= 16 * a2;
      a1 -= 16 * a2;
    }
    v34 = v42 + v43 + v42;
LABEL_70:
    v44 = a1 >> 3 >= a2;
    if ( a1 >> 3 >= a2 )
    {
      v44 = a1 >= 8 * a2;
      a1 -= 8 * a2;
    }
    v45 = v34 + v44 + v34;
    v46 = a1 >> 2 >= a2;
    if ( a1 >> 2 >= a2 )
    {
      v46 = a1 >= 4 * a2;
      a1 -= 4 * a2;
    }
    v47 = v46 + v45;
    v3 = __CFADD__(v46, v45) | __CFADD__(v45, v47);
    v34 = v45 + v47;
    if ( !v3 )
      break;
    a2 >>= 6;
  }
  v48 = a1 >> 1 >= a2;
  if ( a1 >> 1 >= a2 )
  {
    v48 = a1 >= 2 * a2;
    a1 -= 2 * a2;
  }
  v49 = v34 + v48 + v34 + (a1 >= a2) + v34 + v48 + v34;
  result = v49;
  if ( v35 & 1 )
    return -v49;
  return result;
}

//----- (00001788) --------------------------------------------------------
int sub_1788()
{
  return 0;
}

//----- (00001798) --------------------------------------------------------
int __fastcall sub_1798(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // kr00_8
  int v3; // r5
  int v4; // r4
  int v5; // r12
  unsigned int v6; // r5
  int v7; // r2
  int v8; // r4
  int v9; // r4
  unsigned int v10; // r4
  unsigned int v11; // r6

  v2 = a1 - a2;
  if ( a1 < a2 )
  {
    a1 = a2;
    a2 += v2;
  }
  v3 = HIDWORD(a1) >> 20;
  v4 = (HIDWORD(a1) >> 20) - (HIDWORD(a2) >> 20);
  if ( (~(HIDWORD(a1) >> 20) & 0x7FF) == 0 )
  {
    v10 = 2 * HIDWORD(a1) + ((_DWORD)a1 != 0);
    v11 = 2 * HIDWORD(a2) + ((_DWORD)a2 != 0);
    if ( v10 <= 0xFFE00000 && v11 <= 0xFFE00000 )
    {
      if ( v10 != v11 )
      {
        if ( v10 != -2097152 )
          LODWORD(a1) = a2;
        return a1;
      }
      if ( HIDWORD(a1) == HIDWORD(a2) )
        return a1;
    }
    LODWORD(a1) = 0;
    return a1;
  }
  if ( ((HIDWORD(a2) >> 20) & 0x7FF) == 0 )
  {
    if ( (v3 & 0x7FF) != 0 )
      return a1;
    goto LABEL_11;
  }
  v5 = v3 << 20;
  HIDWORD(a1) &= ~(v3 << 20);
  v6 = HIDWORD(a2) & 0xFFFFF | 0x100000;
  BYTE4(a2) = 32 - v4;
  if ( 32 - v4 < 0 )
  {
    LODWORD(a2) = 2 * v6 + ((_DWORD)a2 != 0);
    v8 = v4 - 32;
    BYTE4(a2) = 31 - v8;
    if ( 31 - v8 >= 0 )
      a1 += v6 >> v8;
    else
      BYTE4(a2) = 0;
    if ( !(HIDWORD(a1) >> 20) )
    {
LABEL_7:
      HIDWORD(a1) += v5;
      v7 = (_DWORD)a2 << SBYTE4(a2);
      if ( v7 >= 0 )
        return a1;
      ++a1;
      if ( 2 * v7 )
        return a1;
      goto LABEL_9;
    }
  }
  else
  {
    a1 = __PAIR64__(((((unsigned int)a2 >> v4) + a1) >> 32) + (v6 >> v4), v6 << SBYTE4(a2))
       + ((unsigned int)a2 >> v4)
       + (unsigned int)a1;
    if ( !(HIDWORD(a1) >> 20) )
      goto LABEL_7;
  }
  HIDWORD(a1) += 0x100000;
  v9 = (_DWORD)a1 << 31;
  a1 >>= 1;
  HIDWORD(a1) += v5;
  if ( v9 < 0 )
  {
    ++a1;
    if ( !((_DWORD)a2 << SBYTE4(a2)) )
LABEL_9:
      LODWORD(a1) = 2 * ((unsigned int)a1 >> 1);
  }
  if ( (unsigned int)(2 * HIDWORD(a1)) >= 0xFFE00000 )
LABEL_11:
    LODWORD(a1) = 0;
  return a1;
}

//----- (000018BA) --------------------------------------------------------
int __fastcall sub_18BA(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r4
  int v3; // r7
  unsigned int v4; // r7
  unsigned int v5; // r12
  int v6; // r4
  bool v7; // cf
  unsigned int v8; // r2
  int v9; // r5
  char v10; // r3
  int v11; // r6
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r6
  char v16; // r3
  unsigned int v17; // r3
  unsigned int v18; // r3
  unsigned int v19; // r2
  int v20; // r3
  unsigned int v21; // r1
  unsigned int v22; // r6

  v2 = HIDWORD(a1);
  v3 = (a1 - a2) >> 32;
  HIDWORD(a1) = a1 - a2;
  if ( __PAIR64__(v2, a1) < a2 )
  {
    v4 = v3 ^ 0x80000000;
    v2 = (__PAIR64__(v2, a1) - __PAIR64__(v4, HIDWORD(a1))) >> 32;
    LODWORD(a1) = a2;
    a2 += __PAIR64__(v4, HIDWORD(a1));
  }
  HIDWORD(a1) = v2 >> 20;
  v5 = (v2 >> 20) - (HIDWORD(a2) >> 20);
  if ( (~(v2 >> 20) & 0x7FF) == 0 )
  {
    v21 = 2 * v2 + ((_DWORD)a1 != 0);
    v22 = 2 * HIDWORD(a2) + ((_DWORD)a2 != 0);
    if ( v21 <= 0xFFE00000 && v22 <= 0xFFE00000 )
    {
      if ( v21 != v22 )
      {
        if ( v21 != -2097152 )
          LODWORD(a1) = a2;
        return a1;
      }
      if ( v2 != HIDWORD(a2) )
        return a1;
    }
    LODWORD(a1) = 0;
    return a1;
  }
  if ( ((HIDWORD(a2) >> 20) & 0x7FF) != 0 )
  {
    v6 = v2 & ~(HIDWORD(a1) << 20);
    v7 = (_DWORD)a2 == 0;
    v8 = -(int)a2;
    v9 = -1048576 - ((HIDWORD(a2) & 0xFFFFF) + !v7);
    v10 = 32 - v5;
    if ( v5 > 0x20 )
    {
      v14 = 2 * v8;
      v8 = 2 * (v9 + __CFADD__(v8, v8) + v9);
      if ( v14 )
        ++v8;
      v10 = 62 - v5;
      if ( (int)(62 - v5) <= 0 )
        return a1;
      v11 = ((v9 >> (v5 - 32)) + __PAIR64__(v6, a1)) >> 32;
      LODWORD(a1) = (v9 >> (v5 - 32)) + a1;
      if ( v11 >= 0 )
        goto LABEL_7;
    }
    else
    {
      v11 = (__PAIR64__(((__PAIR64__(v6, v8 >> v5) + (unsigned int)a1) >> 32) + (v9 >> v5), v9 << v10)
           + (v8 >> v5)
           + (unsigned int)a1) >> 32;
      LODWORD(a1) = (v9 << v10) + (v8 >> v5) + a1;
      if ( v11 >= 0 )
      {
LABEL_7:
        v12 = v8 << v10;
        if ( v12 >= 0 )
          return a1;
        v13 = 1;
        goto LABEL_20;
      }
    }
    v7 = __CFADD__((_DWORD)a1, (_DWORD)a1);
    LODWORD(a1) = 2 * a1;
    v15 = v11 + v7 + v11;
    v16 = v10 + 1;
    v7 = __CFSHL__(v8, v16);
    v12 = v8 << v16;
    if ( v7 )
      LODWORD(a1) = a1 + 1;
    v17 = v15 + (HIDWORD(a1) << 21);
    v7 = __CFSHR__(v17, 21);
    v18 = v17 >> 21;
    if ( v7 )
    {
      if ( v18 )
      {
        v13 = (unsigned int)v12 >> 31;
LABEL_20:
        v7 = __CFADD__((_DWORD)a1, v13);
        LODWORD(a1) = a1 + v13;
        if ( !v7 && v12 == 0x80000000 )
          LODWORD(a1) = 2 * ((unsigned int)a1 >> 1);
        return a1;
      }
      LODWORD(a1) = ((unsigned int)a1 >> 1) | (v15 << 31);
      HIDWORD(a1) = (v15 >> 1) + (HIDWORD(a1) << 20);
      if ( 2 * HIDWORD(a1) )
      {
        if ( (unsigned int)(2 * HIDWORD(a1)) >= 0x200000 )
          return a1;
      }
      else if ( !(_DWORD)a1 )
      {
        return a1;
      }
LABEL_48:
      LODWORD(a1) = 0;
      return a1;
    }
    v19 = v15 + 0x200000;
    if ( v15 != -2097152 || (_DWORD)a1 )
    {
      HIDWORD(a1) = (HIDWORD(a1) & 0xFFFFF7FF) - 2;
      if ( v15 == -2097152 )
      {
        if ( WORD1(a1) )
        {
          __SET_PAIR__(v19, a1, (unsigned __int64)(unsigned int)a1 << 16);
          HIDWORD(a1) -= 16;
        }
        else
        {
          v19 = a1;
          LODWORD(a1) = 0;
          HIDWORD(a1) -= 32;
        }
      }
      v20 = 0;
      if ( !(v19 >> 13) )
      {
        v19 <<= 8;
        v20 = 8;
        if ( !(v19 >> 13) )
        {
          v19 *= 32;
          v20 = 13;
        }
      }
      if ( !(v19 >> 17) )
      {
        v19 *= 16;
        v20 += 4;
      }
      if ( !(v19 >> 19) )
      {
        v19 *= 4;
        v20 += 2;
      }
      if ( !(v19 >> 20) )
        ++v20;
      LODWORD(a1) = (_DWORD)a1 << v20;
      if ( HIDWORD(a1) - v20 < 0 )
        goto LABEL_48;
    }
  }
  else if ( (a1 & 0x7FF00000000LL) == 0 )
  {
    LODWORD(a1) = 0;
  }
  return a1;
}

//----- (00001A90) --------------------------------------------------------
int __fastcall sub_1A90(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( (HIDWORD(a1) ^ HIDWORD(a2)) >= 0 )
    return sub_1798(a1, a2);
  HIDWORD(a2) ^= 0x80000000;
  return sub_18BA(a1, a2);
}

//----- (00001AC0) --------------------------------------------------------
int __fastcall sub_1AC0(unsigned __int64 a1, unsigned __int64 a2)
{
  HIDWORD(a1) ^= 0x80000000;
  if ( (HIDWORD(a1) ^ HIDWORD(a2)) >= 0 )
    return sub_1798(a1, a2);
  HIDWORD(a2) ^= 0x80000000;
  return sub_18BA(a1, a2);
}

//----- (00001AF0) --------------------------------------------------------
int __fastcall sub_1AF0(__int64 a1, __int64 a2)
{
  int v2; // r5
  int v3; // r4
  int v4; // r6
  bool v5; // zf
  bool v6; // zf
  int v7; // r5
  unsigned int v8; // r4
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r12
  int v12; // r3
  unsigned int v13; // r1
  int v14; // r2
  int v15; // r1
  unsigned int v16; // r1
  unsigned int v17; // r1
  unsigned int v18; // r1
  unsigned int v19; // r5
  bool v20; // cf
  unsigned int v21; // r1
  __int64 v22; // r4
  __int64 v23; // r4
  int v24; // r7
  unsigned int v25; // r4
  unsigned int v26; // r1
  unsigned int v27; // r5
  unsigned int v28; // r1
  unsigned int v29; // r0
  int v30; // kr20_4
  unsigned int v31; // r4
  unsigned int v32; // r5
  unsigned int v33; // r12
  unsigned __int64 v34; // kr30_8
  unsigned int v35; // r6
  unsigned int v36; // r0
  unsigned int v37; // r4
  unsigned int v38; // r4
  int v39; // r12
  unsigned int v40; // r6
  int v41; // r7
  int v42; // r1
  int v43; // r3
  unsigned int v44; // r0
  unsigned int v45; // r2
  unsigned __int64 v46; // kr00_8
  unsigned int v47; // kr60_4
  unsigned int v48; // r7
  unsigned int v49; // r0
  int v50; // r2
  int v51; // r12
  unsigned __int64 v52; // kr08_8
  unsigned int v53; // lr
  unsigned int v54; // r0
  int v55; // r2
  int v56; // r4
  unsigned __int64 v57; // kr70_8
  int v58; // r4
  unsigned int v59; // kr78_4
  int v60; // r3
  int v61; // r5
  unsigned int v62; // r6
  unsigned __int64 v64; // [sp+0h] [bp-2Ch]
  unsigned __int64 v65; // [sp+0h] [bp-2Ch]
  __int64 v67; // [sp+0h] [bp-2Ch]
  unsigned __int64 v68; // [sp+0h] [bp-2Ch]
  int v69; // [sp+0h] [bp-2Ch]
  __int64 v70; // [sp+8h] [bp-24h]
  __int64 v71; // [sp+8h] [bp-24h]
  __int64 v72; // [sp+8h] [bp-24h]
  unsigned __int64 v73; // [sp+8h] [bp-24h]
  unsigned int v74; // [sp+10h] [bp-1Ch]
  unsigned int v75; // [sp+10h] [bp-1Ch]
  unsigned int v76; // [sp+10h] [bp-1Ch]
  unsigned int v77; // [sp+10h] [bp-1Ch]
  unsigned int v78; // [sp+10h] [bp-1Ch]
  unsigned int v79; // [sp+10h] [bp-1Ch]
  unsigned int v80; // [sp+14h] [bp-18h]
  __int64 v81; // [sp+18h] [bp-14h]
  unsigned int v82; // [sp+1Ch] [bp-10h]
  unsigned int v83; // [sp+1Ch] [bp-10h]
  unsigned int v84; // [sp+1Ch] [bp-10h]
  signed int v85; // [sp+20h] [bp-Ch]
  unsigned int v86; // [sp+24h] [bp-8h]
  unsigned int v87; // [sp+28h] [bp-4h]

  v2 = 134152192;
  v3 = (HIDWORD(a1) >> 4) & 0x7FF0000;
  v4 = (HIDWORD(a2) >> 4) & 0x7FF0000;
  v5 = (~v3 & 0x7FF0000) == 0;
  while ( !v5 )
  {
    v2 &= ~v4;
    v5 = v2 == 0;
    if ( v2 )
    {
      v6 = v4 == 0;
      while ( !v6 )
      {
        v6 = v3 == 0;
        if ( v3 )
        {
          v85 = (((unsigned int)(HIDWORD(a1) ^ HIDWORD(a2)) >> 31) | v3) - v4 + 66846720;
          v7 = (_DWORD)a1 << 11;
          v8 = (a2 >> 21) | 0x80000000;
          v9 = (_DWORD)a2 << 11;
          HIDWORD(v64) = (a1 >> 21) | 0x80000000;
          v10 = HIWORD(v8);
          LODWORD(v64) = v7;
          v11 = HIWORD(v9);
          v12 = v8 & ~(HIWORD(v8) << 16);
          v87 = HIWORD(v8) << 16;
          v13 = HIWORD(v9) << 16;
          v14 = v9 & ~v13;
          v86 = v13;
          v15 = byte_1512C[HIBYTE(v8) - 128];
          v16 = ((unsigned int)(v15 * (0x800000 - (HIWORD(v8) * v15 + v15))) >> 19) + 2;
          v80 = (((0x20000000 - ((v8 >> 13) * v16 + v16)) >> 16) * v16
               + ((((0x20000000 - ((v8 >> 13) * v16 + v16)) & ~((0x20000000 - ((v8 >> 13) * v16 + v16)) >> 16 << 16))
                 * v16) >> 16)) >> 6;
          v17 = v7 << 31;
          if ( v7 << 31 )
            v17 = 0x80000000;
          v74 = v17;
          v18 = (v80 * HIWORD(HIDWORD(v64))) >> 16;
          v65 = (v64 >> 1) - __PAIR64__(v18 * v10, v18 * v11);
          LODWORD(v70) = ((v18 * v14) >> 16) | ((v18 * v12) << 16);
          HIDWORD(v70) = (unsigned __int64)(v18 * v12) >> 16;
          v19 = (v18 * v14) << 16;
          v20 = v74 >= v19;
          v75 = v74 - v19;
          if ( !v20 )
            ++v70;
          v20 = (unsigned int)v65 >= (unsigned int)v70;
          LODWORD(v65) = v65 - v70;
          v82 = v18 << 16;
          HIDWORD(v65) -= HIDWORD(v70) + !v20;
          v21 = (v80 * (HIDWORD(v65) >> 2)) >> 16;
          HIDWORD(v22) = (unsigned __int64)(v21 * v10) >> 13;
          LODWORD(v22) = ((v21 * v11) >> 13) | ((v21 * v10) << 19);
          v71 = v22;
          LODWORD(v22) = (v21 * v11) << 19;
          v20 = v75 >= (unsigned int)v22;
          v76 = v75 - v22;
          if ( !v20 )
            ++v71;
          v67 = v65 - v71;
          HIDWORD(v23) = (unsigned __int64)(v21 * v12) >> 29;
          LODWORD(v23) = ((v21 * v14) >> 29) | (8 * v21 * v12);
          v72 = v23;
          LODWORD(v23) = 8 * v21 * v14;
          v20 = v76 >= (unsigned int)v23;
          v77 = v76 - v23;
          if ( !v20 )
            ++v72;
          v24 = (((_DWORD)v67 - (_DWORD)v72) << 26) | (v77 >> 6);
          v78 = v77 << 26;
          v25 = (unsigned __int64)(v67 - v72) >> 6;
          v83 = v82 + 8 * v21;
          v26 = (v80 * (v25 >> 15)) >> 16;
          v73 = ((v26 * v14) >> 16) | ((unsigned __int64)(v26 * v12) << 16);
          v27 = (v26 * v14) << 16;
          v20 = v78 >= v27;
          v79 = v78 - v27;
          if ( !v20 )
            ++v73;
          LODWORD(v81) = v26 << 22;
          v68 = __PAIR64__(v25, v24) - __PAIR64__(v26 * v10, v26 * v11) - v73;
          HIDWORD(v81) = v83 + (v26 >> 10);
          v28 = (v80 * (HIDWORD(v68) >> 2)) >> 16;
          v30 = (v28 * v10) << 19;
          v29 = (unsigned __int64)(v28 * v10) >> 13;
          v31 = ((v28 * v11) >> 13) | v30;
          v32 = (v28 * v11) << 19;
          v33 = v79 - v32;
          if ( v79 < v32 )
            v29 = (v31++ + __PAIR64__(v29, 1)) >> 32;
          v34 = v68 - __PAIR64__(v29, v31);
          v35 = (unsigned __int64)(v28 * v12) >> 29;
          v36 = ((v28 * v14) >> 29) | (8 * v28 * v12);
          v37 = 8 * v28 * v14;
          v20 = v33 >= v37;
          v38 = v33 - v37;
          if ( !v20 )
            v35 = (__PAIR64__(v35, v36++) + 1) >> 32;
          v39 = (__int64)(v34 - __PAIR64__(v35, v36)) >> 6;
          v41 = (((_DWORD)v34 - v36) << 26) | ((unsigned __int64)v38 >> 6);
          v40 = v81 + (v28 << 9);
          v84 = (v81 + (unsigned __int64)(v28 << 9)) >> 32;
          v42 = v87 | v12;
          v69 = 0;
          v43 = v86 | v14;
          v44 = v39 + __CFADD__(v41, v41) + v39;
          v45 = ((unsigned __int64)(v38 << 26) >> 31) | (2 * v41);
          if ( v44 > (__PAIR64__(v44, v45) - __PAIR64__(v42, v43)) >> 32 )
          {
            v69 = 1;
            v46 = __PAIR64__(v44, v45) - __PAIR64__(v42, v43);
            v44 = HIDWORD(v46);
            v47 = v46;
            v45 = v47;
          }
          v48 = v44 >> 31;
          v49 = v44 + __CFADD__(v45, v45) + v44;
          v50 = (v38 << 27 >> 31) | (2 * v45);
          v51 = 2 * v69;
          if ( v48 || v49 > (__PAIR64__(v49, v50) - __PAIR64__(v42, v43)) >> 32 )
          {
            ++v51;
            v52 = __PAIR64__(v49, v50) - __PAIR64__(v42, v43);
            v49 = HIDWORD(v52);
            v50 = v52;
          }
          v53 = v49 >> 31;
          v54 = v49 + __CFADD__(v50, v50) + v49;
          v55 = (v38 << 28 >> 31) | (2 * v50);
          v56 = 2 * v51;
          v57 = __PAIR64__(v54, v55) - __PAIR64__(v42, v43);
          if ( v53 || v54 > HIDWORD(v57) )
          {
            v54 = (__PAIR64__(v54, v55) - __PAIR64__(v42, v43)) >> 32;
            v55 = v57;
            ++v56;
          }
          if ( v54 | v55 )
            v40 |= 1u;
          LODWORD(a1) = 0;
          v59 = (v56 << 9) + v40;
          v58 = (__PAIR64__(v84, v56 << 9) + v40) >> 32;
          HIDWORD(a1) = v59;
          v60 = 2;
          if ( v58 >= 0 )
          {
            v60 = 1;
            HIDWORD(a1) = 2 * v59;
            v58 += (__PAIR64__(v58, v59) + v59) >> 32;
          }
          v61 = ((unsigned int)v58 >> 11) + ((v60 + (v85 >> 16)) << 20);
          v62 = ((unsigned __int64)HIDWORD(a1) >> 11) | (v58 << 21);
          if ( HIDWORD(a1) << 21 )
          {
            if ( __CFSHL__(HIDWORD(a1) << 21, 1) )
            {
              ++v62;
              if ( !(HIDWORD(a1) << 22) )
                v62 = 2 * (v62 >> 1);
            }
          }
          if ( v61 >= 0 && (v61 & 0x7FF00000) != 0 && (~v61 & 0x7FF00000) != 0 )
            LODWORD(a1) = v62;
          return a1;
        }
      }
      if ( (a1 & 0x7FF0000000000000LL) == 0 && (a2 & 0x7FF0000000000000LL) == 0 )
        goto LABEL_53;
      goto LABEL_56;
    }
  }
  if ( !__CFSUB__(-2097152, (unsigned int)((unsigned __int64)a1 >> 31), 2 * (_DWORD)a1 == 0)
    || !__CFSUB__(-2097152, (unsigned int)((unsigned __int64)a2 >> 31), 2 * (_DWORD)a2 == 0) )
  {
LABEL_53:
    LODWORD(a1) = 0;
    return a1;
  }
  if ( 2 * HIDWORD(a1) == -2097152 )
  {
    if ( 2 * HIDWORD(a2) != -2097152 )
      return a1;
    goto LABEL_53;
  }
LABEL_56:
  LODWORD(a1) = 0;
  return a1;
}
// 1512C: using guessed type unsigned __int8 byte_1512C[128];

//----- (00001F20) --------------------------------------------------------
int __fastcall sub_1F20(__int64 a1, __int64 a2)
{
  return sub_1AF0(a2, a1);
}

//----- (00001F38) --------------------------------------------------------
unsigned int __fastcall sub_1F38(__int64 a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r2
  unsigned int result; // r0

  v1 = a1;
  LODWORD(a1) = a1 >> 21;
  v2 = SHIDWORD(a1) >> 20;
  if ( !(SHIDWORD(a1) >> 20) || (LODWORD(a1) = a1 | 0x80000000, v2 >= 0) )
  {
    v3 = 1054 - v2;
    if ( v3 < 0 )
    {
      if ( 2 * HIDWORD(a1) + (unsigned int)(v1 != 0) <= 0xFFE00000 )
        return ~(SHIDWORD(a1) >> 31);
    }
    else
    {
      result = (unsigned int)a1 >> v3;
      if ( v3 <= 255 )
        return result;
    }
  }
  return 0;
}

//----- (00001FD2) --------------------------------------------------------
unsigned int __fastcall sub_1FD2(unsigned int a1)
{
  if ( !HIWORD(a1) )
  {
    a1 <<= 16;
    if ( !a1 )
      return 0;
  }
  if ( !HIBYTE(a1) )
    a1 <<= 8;
  if ( !(a1 >> 28) )
    a1 *= 16;
  if ( !(a1 >> 30) )
    a1 *= 4;
  if ( (a1 & 0x80000000) == 0 )
    a1 *= 2;
  return a1 << 21;
}

//----- (00001FD8) --------------------------------------------------------
unsigned int __fastcall sub_1FD8(unsigned __int64 a1, unsigned __int64 a2)
{
  int v2; // r4
  bool v3; // zf
  bool v4; // zf
  unsigned int v5; // r5
  unsigned int v6; // r1
  unsigned int v7; // r0
  int v8; // r12
  unsigned int v9; // r1
  unsigned int v10; // r6
  int v11; // r5
  int v12; // r7
  unsigned int v14; // r7
  int v15; // r6
  bool v16; // cf
  int v17; // r7
  int v18; // r4
  int v19; // r4
  int v20; // r5
  int v21; // r1
  unsigned __int64 v22; // kr18_8
  unsigned int v23; // r1
  unsigned __int64 v24; // kr28_8
  unsigned __int64 v25; // kr30_8
  char v26; // r3
  int v27; // r6
  int v28; // r4
  int v29; // r4
  unsigned int result; // r0
  int v31; // [sp+0h] [bp-24h]
  unsigned int v32; // [sp+0h] [bp-24h]
  unsigned int v33; // [sp+4h] [bp-20h]
  int v34; // [sp+4h] [bp-20h]
  int v35; // [sp+8h] [bp-1Ch]
  signed int v36; // [sp+Ch] [bp-18h]
  int v37; // [sp+10h] [bp-14h]
  int v38; // [sp+10h] [bp-14h]
  int v39; // [sp+14h] [bp-10h]
  int v40; // [sp+20h] [bp-4h]

  v2 = 134152192;
  v3 = (~(HIDWORD(a1) >> 4) & 0x7FF0000) == 0;
  do
  {
    if ( v3 )
    {
      if ( __CFSUB__(-2097152, (unsigned int)(a1 >> 31), 2 * (_DWORD)a1 == 0)
        && __CFSUB__(-2097152, (unsigned int)(a2 >> 31), 2 * (_DWORD)a2 == 0)
        && (unsigned int)(2 * HIDWORD(a1)) >= 0x200000
        && (unsigned int)(2 * HIDWORD(a2)) >= 0x200000 )
      {
        return 0;
      }
      else
      {
        return 0;
      }
    }
    v3 = (~(HIDWORD(a2) >> 4) & 0x7FF0000) == 0;
  }
  while ( (~(HIDWORD(a2) >> 4) & 0x7FF0000) == 0 );
  v4 = ((HIDWORD(a2) >> 4) & 0x7FF0000) == 0;
  do
  {
    if ( v4 )
      return 0;
    v2 *= 16;
    v4 = (HIDWORD(a1) & v2) == 0;
  }
  while ( (HIDWORD(a1) & v2) == 0 );
  v36 = ((HIDWORD(a2) >> 4) & 0x7FF0000)
      + (((unsigned int)(HIDWORD(a1) ^ HIDWORD(a2)) >> 31) | (HIDWORD(a1) >> 4) & 0x7FF0000)
      - 66846720;
  v5 = 16 * a1;
  v6 = (16 * (HIDWORD(a1) & 0xFFFFF | 0x100000)) | ((unsigned __int64)(unsigned int)a1 >> 28);
  v7 = v6 >> 14;
  v5 >>= 4;
  v8 = v6 & ~(v6 >> 14 << 14);
  v9 = v5 >> 14;
  v10 = (16 * (HIDWORD(a2) & 0xFFFFF | 0x100000)) | ((unsigned __int64)(unsigned int)a2 >> 28);
  v11 = v5 & ~(v5 >> 14 << 14);
  HIDWORD(a2) = v10 >> 14;
  v12 = a2 & 0xFFFFFFF;
  LODWORD(a2) = (a2 & 0xFFFFFFF) >> 14;
  v35 = v10 & ~(v10 >> 14 << 14);
  v37 = v12 & ~((_DWORD)a2 << 14);
  v33 = v9 + v11;
  v39 = a2 + v37;
  v14 = (v9 + v11) * (a2 + v37) - v9 * a2 - v11 * v37;
  v31 = (v14 >> 14) + v9 * a2;
  v15 = 16 * v11 * v37;
  v16 = __CFADD__(v15, v14 << 18);
  v17 = v15 + (v14 << 18);
  v18 = v31;
  if ( v16 )
    v18 = v31 + 1;
  v19 = 2 * v18;
  if ( v17 )
    v19 |= 1u;
  v20 = v11 * v35;
  v38 = v8 * v37;
  v32 = 2 * v20 + 2 * v38 + v19;
  v40 = v9 * HIDWORD(a2);
  v34 = v33 * (HIDWORD(a2) + v35) - v20 - v9 * HIDWORD(a2);
  if ( v32 << 27 )
    v21 = (v32 >> 5) | 1;
  else
    v21 = v32 >> 5;
  v22 = ((unsigned __int64)(v39 * (v7 + v8) - v38 - v7 * (_DWORD)a2) << 10)
      + ((unsigned __int64)(unsigned int)v34 << 10)
      + ((unsigned __int64)(v7 * (unsigned int)a2) << 24)
      + ((unsigned __int64)(unsigned int)v40 << 24)
      + (unsigned int)v21;
  v24 = ((unsigned __int64)(v7 * HIDWORD(a2)) << 20)
      + ((unsigned __int64)((v7 + v8) * (HIDWORD(a2) + v35) - v7 * HIDWORD(a2) - v8 * v35) << 6)
      + HIDWORD(v22);
  v23 = HIDWORD(v24);
  v25 = ((unsigned __int64)(unsigned int)(v8 * v35) << 24) + __PAIR64__(v24, v22);
  if ( HIDWORD(v25) < (unsigned int)v24 )
    v23 = HIDWORD(v24) + 1;
  if ( v23 < 0x200 )
  {
    v26 = 20;
    v27 = -4;
  }
  else
  {
    v26 = 21;
    v27 = -3;
  }
  result = ((unsigned int)v25 >> v26) | (HIDWORD(v25) << (32 - v26));
  v28 = (_DWORD)v25 << (32 - v26);
  if ( v28 )
  {
    v16 = __CFSHL__(v28, 1);
    v29 = 2 * v28;
    if ( v16 )
    {
      ++result;
      if ( !v29 )
        result = 2 * (result >> 1);
    }
  }
  if ( (unsigned int)(v27 + (v36 >> 16)) >= 0x7FE )
    return 0;
  return result;
}

//----- (00002220) --------------------------------------------------------
int __fastcall sub_2220(int a1, int a2, int a3)
{
  unsigned int v4; // r4
  int v5; // r3
  int result; // r0

  v4 = (unsigned int)(2 * a2) >> 21;
  v5 = 2047;
  result = 0;
  if ( v4 )
  {
    v5 = v4 ^ 0x7FF;
    if ( v4 != 0x7FF && a3 < v5 && a3 > (signed int)-v4 )
      return a1;
  }
  if ( v4 && !v5 )
  {
    if ( a1 | (a2 << 12) )
      return 0;
    else
      return a1;
  }
  return result;
}

//----- (00002280) --------------------------------------------------------
unsigned int __fastcall sub_2280(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r2
  int v4; // r6
  int v5; // r0
  unsigned int v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r7
  unsigned int v9; // r1
  unsigned int v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int v15; // r3
  unsigned int v16; // r5
  unsigned int v17; // r0
  unsigned int v18; // r4
  unsigned int v19; // r5
  int v20; // r0
  unsigned int v21; // r3
  unsigned int result; // r0
  int v23; // r3
  bool v24; // cf
  int v25; // r1
  unsigned int v26; // r1
  unsigned int v27; // r1

  v2 = a1 >> 7;
  v4 = (a1 >> 7) & 0xFF0000 | 0x100;
  v5 = a1 ^ a2;
  v6 = v2 & 0xFF0000;
  v7 = (a2 >> 7) & 0xFF0000;
  v8 = v5;
  if ( !v6 || !v7 || v6 == 16711680 || v7 == 16711680 )
  {
    if ( v5 < 0 )
      v6 = v4;
    result = 2143289344;
    if ( v6 >= 0xFF0000 || v7 >= 0xFF0000 )
    {
      if ( 2 * a1 <= 0xFF000000 )
      {
        v26 = 2 * a2;
        if ( v26 <= 0xFF000000 && (2 * a1 != -16777216 || v26 != -16777216) )
        {
          if ( v26 == -16777216 )
            v27 = 0;
          else
            v27 = (2 * a1) >> 1;
          return (v6 << 23) | v27;
        }
      }
    }
    else if ( v7 << 8 >> 24 )
    {
      return v8 >> 31 << 31;
    }
    else if ( v6 << 8 >> 24 )
    {
      return (v6 | 0xFF) << 23;
    }
  }
  else
  {
    if ( v5 < 0 )
      v6 = v4;
    v9 = a2 & 0x7FFFFF | 0x800000;
    v10 = a1 & 0x7FFFFF | 0x800000;
    v11 = v6 - v7 + 8192000;
    v12 = 2 * byte_151AC[127 - (v9 >> 17)];
    v13 = (v11 >> 16) + v11;
    if ( v10 < v9 )
      v10 *= 2;
    else
      ++v13;
    v14 = -v9;
    v15 = ((((v14 * v12) >> 4) * v12) >> 21) + (v12 << 7);
    v16 = v10 << 11;
    v17 = ((v10 >> 8) * v15) >> 20;
    v18 = v14 * v17 + v16;
    v19 = (v18 >> 8) * v15;
    v20 = (v17 << 12) + (v19 >> 19);
    v21 = v14 * (v19 >> 19) + (v18 << 12);
    if ( v21 >= -v14 )
    {
      v21 += v14;
      ++v20;
    }
    result = (v13 << 23) + v20;
    if ( v21 )
    {
      v23 = 2 * v21;
      v24 = __CFADD__(v14, v23);
      v25 = v14 + v23;
      if ( v24 )
      {
        ++result;
        if ( !v25 )
          result = 2 * (result >> 1);
      }
    }
    if ( (unsigned int)v13 >= 0xFC0000 )
    {
      if ( v13 > 0 )
      {
        if ( 2 * result + 0x1000000 < 0xFE000000 )
        {
          if ( (int)(result - 1610612736) >= 0 )
            return 2139095040;
          else
            return -8388608;
        }
      }
      else if ( (unsigned __int8)v13 >> 4 )
      {
        return (result + 1610612736) >> 31 << 31;
      }
    }
  }
  return result;
}
// 151AC: using guessed type unsigned __int8 byte_151AC[64];

//----- (000023E0) --------------------------------------------------------
int __fastcall sub_23E0(int a1)
{
  unsigned int v1; // r1
  int v2; // r2
  int v3; // r2

  v1 = a1 << 8;
  v2 = a1 >> 23;
  if ( a1 >> 23 )
  {
    v1 |= 0x80000000;
    if ( v2 < 0 )
      return 0;
  }
  v3 = 158 - v2;
  if ( v3 >= 0 )
    return v1 >> v3;
  if ( (unsigned int)(2 * a1) > 0xFF000000 )
    return 0;
  else
    return ~(a1 >> 31);
}

//----- (00002468) --------------------------------------------------------
int __fastcall sub_2468(int result)
{
  int v1; // r2
  unsigned int v2; // r1
  bool v3; // cf
  int v4; // r0

  v1 = 31;
  if ( HIWORD(result) || (v1 = 15, (result <<= 16) != 0) )
  {
    if ( !HIBYTE(result) )
    {
      result <<= 8;
      v1 -= 8;
    }
    if ( !((unsigned int)result >> 28) )
    {
      result *= 16;
      v1 -= 4;
    }
    if ( !((unsigned int)result >> 30) )
    {
      result *= 4;
      v1 -= 2;
    }
    if ( result >= 0 )
    {
      result *= 2;
      --v1;
    }
    v2 = (result >> 8) + (v1 << 23) + 0x40000000;
    v3 = __CFSHL__(result, 25);
    v4 = result << 25;
    if ( v3 )
    {
      ++v2;
      if ( !v4 )
        return 2 * (v2 >> 1);
    }
    return v2;
  }
  return result;
}

//----- (00002470) --------------------------------------------------------
int sub_2470()
{
  return 536890520;
}

//----- (00002480) --------------------------------------------------------
int sub_2480()
{
  return 0;
}
// 2488: returning address of temporary local variable '%var_4'

//----- (000024A0) --------------------------------------------------------
int sub_24A0()
{
  return sub_3188(1);
}

//----- (000024AA) --------------------------------------------------------
_DWORD *__fastcall sub_24AA(char *a1, unsigned int a2, int a3, char *a4)
{
  char *v4; // r5
  char *v5; // r4
  char **v6; // r7
  _DWORD *result; // r0

  v4 = a1;
  v5 = (char *)a2;
  if ( (unsigned int)(a1 + 16) > a2 )
  {
    sub_3188(0);
    if ( a4 != v5 )
      v4 = a4;
    v5 = a4;
  }
  v6 = (char **)sub_2470();
  *v6 = v4;
  result = sub_2504(v4);
  if ( v5 != v4 + 16 )
    return sub_294C(*v6, (_DWORD *)v4 + 4, v5 - (v4 + 16));
  return result;
}

//----- (00002504) --------------------------------------------------------
_DWORD *__fastcall sub_2504(_DWORD *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = result;
  return result;
}

//----- (00002512) --------------------------------------------------------
int __fastcall sub_2512(int result, int *a2)
{
  int v2; // r1

  v2 = *a2;
  if ( (v2 & 0x400) != 0 )
    return (char)result;
  if ( (v2 & 0x100) != 0 )
    return (__int16)result;
  return result;
}

//----- (00002524) --------------------------------------------------------
int __fastcall sub_2524(int result, int *a2)
{
  int v2; // r1

  v2 = *a2;
  if ( (v2 & 0x400) != 0 )
    return (unsigned __int8)result;
  if ( (v2 & 0x100) != 0 )
    return (unsigned __int16)result;
  return result;
}

//----- (00002536) --------------------------------------------------------
int __fastcall sub_2536(int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // r4
  unsigned int i; // r3
  unsigned int v6; // r6
  int v7; // r0

  v3 = a2;
  if ( a3 == 1 )
  {
    i = 1;
  }
  else
  {
    if ( (*(_BYTE *)a1 & 0x20) != 0 )
      a3 = *(_DWORD *)(a1 + 28);
    for ( i = 0; i < a3 && a2[i]; ++i )
      ;
  }
  v6 = (unsigned int)&a2[i];
  *(_DWORD *)(a1 + 24) -= i;
  *(_DWORD *)(a1 + 32) += i;
  sub_1144((int *)a1);
  while ( (unsigned int)v3 < v6 )
  {
    v7 = *v3++;
    (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(v7, *(_DWORD *)(a1 + 8));
  }
  return sub_1170((unsigned __int8 *)a1);
}

//----- (00002588) --------------------------------------------------------
int __fastcall sub_2588(int a1, int a2, int a3, int a4)
{
  int v6; // r1
  int v7; // r0
  int v8; // r7
  int i; // r6
  int v10; // r0
  int v11; // r0
  int v13; // [sp+0h] [bp-14h]

  v13 = a1 + 36;
  v6 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)a1 = v6 & 0xFFFFFFEF;
  }
  else
  {
    v7 = 1;
  }
  if ( v7 <= a2 )
    v8 = 0;
  else
    v8 = v7 - a2;
  *(_DWORD *)(a1 + 24) -= v8 + a2 + a4;
  if ( (*(_BYTE *)a1 & 0x10) == 0 )
    sub_1144((int *)a1);
  for ( i = 0; i < a4; ++i )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD))(a1 + 4))(*(unsigned __int8 *)(a3 + i), *(_DWORD *)(a1 + 8));
    ++*(_DWORD *)(a1 + 32);
  }
  if ( (*(_BYTE *)a1 & 0x10) != 0 )
    sub_1144((int *)a1);
  while ( 1 )
  {
    v10 = v8--;
    if ( v10 <= 0 )
      break;
    (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(48, *(_DWORD *)(a1 + 8));
    ++*(_DWORD *)(a1 + 32);
  }
  while ( 1 )
  {
    v11 = a2--;
    if ( v11 <= 0 )
      break;
    (*(void (__fastcall **)(_DWORD, _DWORD))(a1 + 4))(*(unsigned __int8 *)(v13 + a2), *(_DWORD *)(a1 + 8));
    ++*(_DWORD *)(a1 + 32);
  }
  sub_1170((unsigned __int8 *)a1);
  if ( (*(_BYTE *)a1 & 0x80) != 0 )
    return 2;
  else
    return 1;
}

//----- (00002638) --------------------------------------------------------
int __fastcall sub_2638(int *a1, int a2, int *a3)
{
  int v3; // r5
  int v4; // r0
  void *v5; // r6
  int v6; // r0
  int v7; // r4
  char v8; // r1

  v3 = 0;
  v4 = *a3;
  v5 = &unk_2694;
  if ( a2 == 117 )
  {
    v6 = sub_2524(v4, a1);
    goto LABEL_10;
  }
  v6 = sub_2512(v4, a1);
  if ( v6 < 0 )
  {
    v6 = -v6;
    v5 = &unk_2698;
LABEL_8:
    v3 = 1;
    goto LABEL_10;
  }
  if ( (*a1 & 2) != 0 )
  {
    v5 = &unk_269C;
    goto LABEL_8;
  }
  if ( (*a1 & 4) != 0 )
  {
    v5 = &unk_26A0;
    goto LABEL_8;
  }
LABEL_10:
  v7 = 0;
  while ( v6 )
  {
    v6 = sub_3194(v6);
    *((_BYTE *)a1 + v7++ + 36) = v8 + 48;
  }
  return sub_2588((int)a1, v7, (int)v5, v3);
}
// 267A: variable 'v8' is possibly undefined

//----- (000026A4) --------------------------------------------------------
int __fastcall sub_26A4(int *a1, int a2, _BYTE **a3)
{
  _BYTE *v3; // r1
  int v4; // r2
  int v5; // r0

  v3 = *a3;
  v4 = *a1;
  v5 = a1[8];
  if ( (v4 & 0x400) != 0 )
  {
    *v3 = v5;
  }
  else if ( (v4 & 0x100) != 0 )
  {
    *(_WORD *)v3 = v5;
  }
  else if ( (v4 & 0x80) != 0 )
  {
    *(_QWORD *)v3 = v5;
  }
  else
  {
    *(_DWORD *)v3 = v5;
  }
  return 1;
}

//----- (000026CC) --------------------------------------------------------
int __fastcall sub_26CC(int a1)
{
  unsigned __int8 *v1; // r1

  v1 = *(unsigned __int8 **)(a1 + 16);
  *(_DWORD *)(a1 + 16) = v1 + 1;
  return *v1;
}

//----- (000026D6) --------------------------------------------------------
int __fastcall sub_26D6(int a1, int a2, int a3, int a4)
{
  _DWORD v5[15]; // [sp+0h] [bp-3Ch] BYREF

  v5[2] = a2;
  v5[5] = 0;
  v5[1] = a4;
  v5[3] = sub_26CC;
  v5[4] = a1;
  return ((int (__fastcall *)(_DWORD *, int))loc_122C)(v5, a3);
}

//----- (000026FC) --------------------------------------------------------
char __fastcall sub_26FC(char result, _BYTE **a2)
{
  _BYTE *v2; // r2

  v2 = *a2;
  *v2 = result;
  *a2 = v2 + 1;
  return result;
}

//----- (00002706) --------------------------------------------------------
char __fastcall sub_2706(char result, int a2)
{
  _BYTE *v2; // r2

  v2 = *(_BYTE **)a2;
  if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
  {
    *(_DWORD *)a2 = v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (00002718) --------------------------------------------------------
int __fastcall sub_2718(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r6
  int v7; // r0
  int v8; // r0
  unsigned int i; // r5
  int v11; // [sp+0h] [bp-24h] BYREF
  int v12; // [sp+4h] [bp-20h]
  _BYTE v13[8]; // [sp+8h] [bp-1Ch] BYREF
  int v14; // [sp+10h] [bp-14h]
  unsigned int v15; // [sp+14h] [bp-10h]
  int v16; // [sp+18h] [bp-Ch]
  int v17; // [sp+1Ch] [bp-8h]
  int v18; // [sp+20h] [bp-4h]

  v16 = a1;
  v17 = a2;
  v18 = a3;
  v5 = 0;
  v6 = 0;
  v11 = 0;
  v12 = 0;
  while ( ((*(_BYTE *)a1 & 0x20) == 0 || *(_DWORD *)(a1 + 28) > v5) && (v6 < a3 || *(_WORD *)(v17 + 2 * v6)) )
  {
    v7 = sub_3148(v13, *(unsigned __int16 *)(v17 + 2 * v6), (int)&v11);
    if ( v7 != -1 )
    {
      if ( (*(_BYTE *)a1 & 0x20) != 0 && (unsigned int)(v5 + v7) > *(_DWORD *)(a1 + 28) )
        break;
      v5 += v7;
    }
    ++v6;
  }
  *(_DWORD *)(a1 + 24) -= v5;
  sub_1144((int *)a1);
  v11 = 0;
  v8 = 0;
  v12 = 0;
  while ( 1 )
  {
    v14 = v8;
    if ( v8 >= v6 )
      break;
    v15 = sub_3148(v13, *(unsigned __int16 *)(v17 + 2 * v8), (int)&v11);
    if ( v15 != -1 )
    {
      for ( i = 0; i < v15; ++i )
        (*(void (__fastcall **)(_DWORD, _DWORD))(a1 + 4))((unsigned __int8)v13[i], *(_DWORD *)(a1 + 8));
    }
    v8 = v14 + 1;
  }
  *(_DWORD *)(a1 + 32) += v5;
  return sub_1170((unsigned __int8 *)a1);
}

//----- (000027D4) --------------------------------------------------------
int __fastcall sub_27D4(__int64 a1, int a2)
{
  int v2; // r5
  void *v3; // r6
  _DWORD *v4; // r2
  int v5; // r2
  bool v6; // cf
  int v7; // r4
  char v8; // r2
  _DWORD *v10; // [sp+0h] [bp-Ch]

  v10 = (_DWORD *)a1;
  v2 = 0;
  v3 = &unk_2834;
  v4 = (_DWORD *)(8 * ((unsigned int)(a2 + 7) >> 3));
  LODWORD(a1) = *v4;
  v5 = v4[1];
  if ( HIDWORD(a1) != 245 )
  {
    if ( v5 < 0 )
    {
      v6 = (_DWORD)a1 == 0;
      LODWORD(a1) = -(int)a1;
      v3 = &unk_2838;
      v5 = -(v5 + !v6);
LABEL_8:
      v2 = 1;
      goto LABEL_9;
    }
    if ( (*v10 & 2) != 0 )
    {
      v3 = &unk_283C;
      goto LABEL_8;
    }
    if ( (*v10 & 4) != 0 )
    {
      v3 = &unk_2840;
      goto LABEL_8;
    }
  }
LABEL_9:
  HIDWORD(a1) = v5;
  v7 = 0;
  while ( a1 )
  {
    LODWORD(a1) = sub_2980(a1, HIDWORD(a1), a1 | HIDWORD(a1));
    *((_BYTE *)v10 + v7++ + 36) = v8 + 48;
  }
  return sub_2588((int)v10, v7, (int)v3, v2);
}
// 2814: variable 'a1' is possibly undefined
// 2818: variable 'v8' is possibly undefined
// 2980: using guessed type int __fastcall sub_2980(_DWORD, _DWORD, _DWORD);

//----- (00002844) --------------------------------------------------------
int __fastcall sub_2844(_DWORD *a1, int a2, unsigned __int64 a3)
{
  int v3; // r1
  int v4; // r3
  void *v5; // r2

  v3 = 0;
  while ( a3 )
  {
    *((_BYTE *)a1 + v3 + 36) = (a3 & 7) + 48;
    a3 >>= 3;
    ++v3;
  }
  v4 = 0;
  v5 = &unk_28AC;
  if ( (*a1 & 8) != 0 && ((*a1 & 0x20) != 0 || v3) )
  {
    v4 = 1;
    v5 = &unk_28B0;
    --a1[7];
  }
  return sub_2588((int)a1, v3, (int)v5, v4);
}

//----- (00002888) --------------------------------------------------------
int __fastcall sub_2888(int *a1, int a2, int *a3)
{
  int v4; // r0
  int v5; // r1

  v4 = sub_2524(*a3, a1);
  return sub_2844(a1, v5, (unsigned int)v4);
}
// 289A: variable 'v5' is possibly undefined

//----- (000028A0) --------------------------------------------------------
int __fastcall sub_28A0(_DWORD *a1, int a2, int a3)
{
  return sub_2844(a1, 8 * ((unsigned int)(a3 + 7) >> 3) + 8, *(_QWORD *)(8 * ((unsigned int)(a3 + 7) >> 3)));
}

//----- (000028B4) --------------------------------------------------------
unsigned int __fastcall sub_28B4(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int result; // r0

  if ( 2 * a2 <= 0xFFE00000 && (2 * a2 != -2097152 || !a1) && 2 * a4 <= 0xFFE00000 && (2 * a4 != -2097152 || !a3) )
  {
    if ( ((a2 | a4) & 0x80000000) == 0 )
      return __get_CPSR();
    if ( a4 == a2 )
    {
      if ( a3 >= a1 )
      {
        result = __get_CPSR() & 0x6FFFFFFF;
        goto LABEL_17;
      }
      result = __get_CPSR() & 0x6FFFFFFF;
    }
    else
    {
      result = __get_CPSR() & 0x6FFFFFFF;
      if ( a4 >= a2 )
      {
LABEL_17:
        __asm { MSR.W           CPSR_f, R0 }
        return result;
      }
    }
    result |= 0x80000000;
    goto LABEL_17;
  }
  if ( (a5 & 0xD0000) != 0 )
    return sub_31BC(0, a5);
  else
    return sub_31EC(a1, a2, a3, a4, a5);
}

//----- (0000294C) --------------------------------------------------------
_DWORD *__fastcall sub_294C(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r3
  _DWORD *i; // r0

  v3 = a1;
  for ( i = (_DWORD *)a1[1]; i && i < a2; i = (_DWORD *)i[1] )
    v3 = i;
  if ( (_DWORD *)((char *)v3 + *v3) != a2 )
  {
    a3 -= 8 * (((unsigned int)a2 + 3) >> 3) + 4 - (_DWORD)a2;
    a2 = (_DWORD *)(8 * (((unsigned int)a2 + 3) >> 3) + 4);
  }
  *a2 = a3;
  return sub_F8E((int)(a2 + 1));
}

//----- (00002982) --------------------------------------------------------
unsigned __int64 __fastcall sub_2982(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // kr00_8
  __int64 v3; // r0
  __int64 v4; // r4
  unsigned __int64 result; // r0
  unsigned __int64 i; // r2

  LODWORD(a2) = a1;
  v2 = ((a2 - __PAIR64__(HIDWORD(a2) >> 2, a1 >> 2)) >> 4) + a2 - __PAIR64__(HIDWORD(a2) >> 2, a1 >> 2);
  HIDWORD(v3) = ((v2 >> 8) + v2) >> 32;
  LODWORD(v4) = (v2 >> 8) + v2;
  LODWORD(v3) = (__int64)((v2 >> 8) + v2) >> 16;
  HIDWORD(v4) = HIWORD(HIDWORD(v3));
  result = (((unsigned __int64)(v3 + v4) >> 32) + v3 + v4) >> 3;
  LODWORD(v4) = 10 * result;
  HIDWORD(v4) = ((5 * result) >> 32) + ((5 * result + (unsigned int)(5 * result)) >> 32);
  for ( i = a2 - v4; i >= 0xA; i -= 10LL )
    ++result;
  return result;
}

//----- (000029FE) --------------------------------------------------------
int *__fastcall sub_29FE(int *a1, _BYTE *a2, unsigned int *a3, int a4, int a5)
{
  int v6; // r6
  unsigned int v7; // r1
  unsigned int v8; // r5
  int v9; // r7
  int v10; // r5
  int v11; // r1
  int v12; // r2
  int m; // r0
  int *result; // r0
  int v15; // r2
  int *v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r2
  __int64 v20; // r0
  int v21; // r2
  int v22; // r2
  int j; // r5
  int i; // r5
  int v25; // r2
  int v26; // r2
  char v27; // r2
  int v28; // r1
  int k; // r0
  char v30; // r2
  int *v31; // r0
  int v32; // r3
  int v33; // r2
  __int64 v34; // [sp+0h] [bp-4Ch] BYREF
  int v35; // [sp+8h] [bp-44h]
  __int64 v36; // [sp+Ch] [bp-40h] BYREF
  int v37; // [sp+14h] [bp-38h]
  int v38; // [sp+18h] [bp-34h]
  int v39; // [sp+1Ch] [bp-30h]
  unsigned int v40; // [sp+20h] [bp-2Ch]
  unsigned int v41; // [sp+24h] [bp-28h]
  int v42; // [sp+28h] [bp-24h]
  __int64 v43; // [sp+2Ch] [bp-20h] BYREF
  int v44; // [sp+34h] [bp-18h]
  int *v45; // [sp+3Ch] [bp-10h]
  _BYTE *v46; // [sp+40h] [bp-Ch]
  unsigned int *v47; // [sp+44h] [bp-8h]
  int v48; // [sp+48h] [bp-4h]

  v45 = a1;
  v46 = a2;
  v47 = a3;
  v48 = a4;
  v6 = a4;
  v7 = a3[1];
  v40 = *a3;
  v41 = v7;
  v8 = (2 * v7) >> 21;
  if ( !v8 )
    v8 = -1;
  v42 = 0;
  if ( (2 * v7) | v40 )
  {
    v9 = (int)(19728 * (v8 - 1023)) >> 16;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( a5 )
          v10 = -v6;
        else
          v10 = v9 - v6 + 1;
        v11 = v10;
        if ( v10 <= 0 )
          v12 = v42;
        else
          v12 = -v42;
        if ( v10 < 0 )
          v11 = -v10;
        sub_32E0(&v43, v11, v12);
        v36 = v43;
        v37 = v44;
        v17 = sub_33B8(v41, v40);
        HIDWORD(v34) = v18;
        v35 = v19;
        LODWORD(v34) = v17 - 8223;
        if ( v10 <= 0 )
        {
          LODWORD(v36) = v36 - 8223;
          v20 = sub_37EC(&v34, &v36, v42);
        }
        else
        {
          LODWORD(v36) = v36 + 8223;
          sub_3898((int)&v34, &v36, v42);
        }
        v34 = v20;
        v35 = v21;
        if ( (_WORD)v20 )
          v20 = 0x7FFFFFFFFFFFFFFFLL;
        else
          LODWORD(v20) = v21;
        v22 = a5;
        if ( a5 )
          break;
        for ( i = v6 - 1; i >= 0; --i )
        {
          LODWORD(v20) = sub_2980(v20, HIDWORD(v20), v22);
          v22 = v25 + 48;
          a2[i] = v22;
        }
        v26 = 1;
        v39 = v6;
        if ( v20 )
        {
          v26 = 0;
          ++v9;
        }
        else if ( *a2 == 48 )
        {
          v26 = 0;
          --v9;
        }
        v38 = v9;
        if ( v26 )
          goto LABEL_46;
      }
      LODWORD(v34) = 0;
      for ( j = 0; v20 && j < 17; ++j )
      {
        LODWORD(v20) = sub_2980(v20, HIDWORD(v20), v20 | HIDWORD(v20));
        a2[j] = v27 + 48;
      }
      if ( !v20 )
        break;
      if ( (_DWORD)v34 )
        goto LABEL_46;
      v6 = 17;
      a5 = 0;
    }
    v28 = 0;
    for ( k = j - 1; v28 < k; --k )
    {
      v30 = a2[v28];
      a2[v28] = a2[k];
      a2[k] = v30;
      ++v28;
    }
    v39 = j;
    v38 = j - v6 - 1;
LABEL_46:
    a2[v39] = 0;
    v31 = v45;
    v32 = v39;
    v33 = v38;
    v45[2] = a5;
    *v31 = v33;
    v31[1] = v32;
    return v31 + 2;
  }
  else
  {
    if ( a5 == 1 )
    {
      result = 0;
      v15 = ~a4;
    }
    else
    {
      for ( m = 0; m < a4; ++m )
        a2[m] = 48;
      result = (int *)a4;
      v15 = 0;
    }
    *((_BYTE *)result + (_DWORD)a2) = 0;
    v16 = v45;
    v45[2] = a5;
    *v16 = v15;
    v16[1] = (int)result;
  }
  return result;
}
// 2AB6: variable 'v18' is possibly undefined
// 2AB6: variable 'v19' is possibly undefined
// 2AF0: variable 'v20' is possibly undefined
// 2AF0: variable 'v21' is possibly undefined
// 2B18: variable 'v25' is possibly undefined
// 2B48: variable 'v27' is possibly undefined
// 2980: using guessed type int __fastcall sub_2980(_DWORD, _DWORD, _DWORD);

//----- (00002B9C) --------------------------------------------------------
void __fastcall sub_2B9C(int a1, int a2, unsigned int a3)
{
  int v3; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int v9; // r7
  int v10; // r3
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r3
  char *v14; // r7
  char v15; // r1
  bool v16; // cc
  char *v17; // r7
  char v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // [sp+0h] [bp-4Ch]
  _BYTE v24[4]; // [sp+4h] [bp-48h] BYREF
  char v25; // [sp+Bh] [bp-41h] BYREF
  _BYTE v26[32]; // [sp+Ch] [bp-40h] BYREF
  signed int v27; // [sp+2Ch] [bp-20h]
  int v28; // [sp+30h] [bp-1Ch] BYREF
  int v29; // [sp+34h] [bp-18h]
  int v30; // [sp+38h] [bp-14h]
  int v31; // [sp+3Ch] [bp-10h]
  int v32; // [sp+40h] [bp-Ch] BYREF
  int v33; // [sp+44h] [bp-8h]
  int v34; // [sp+48h] [bp-4h]

  v6 = *(_DWORD *)&byte_1[8 * (a3 >> 3) + 3];
  v28 = *(_DWORD *)(8 * (a3 >> 3));
  v29 = v6;
  v7 = sub_4784(v28, v6);
  if ( v29 >= 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
      v8 = 43;
    else
      v8 = 32 * (*(_DWORD *)a1 << 29 >> 31);
  }
  else
  {
    v8 = 45;
  }
  v31 = v8;
  if ( v7 == 3 || v7 >= 7 )
  {
    sub_3258(a1, a2, v7, v8);
    goto LABEL_77;
  }
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
    v9 = *(_DWORD *)(a1 + 28);
  else
    v9 = 6;
  switch ( a2 )
  {
    case 'e':
      if ( v9 < 17 )
        v10 = v9 + 1;
      else
        v10 = 17;
      sub_29FE(&v32, v26, (unsigned int *)&v28, v10, 0);
      v3 = 0;
      v11 = v32;
      a2 = v9 + 1;
      v30 = v33;
      break;
    case 'f':
      v27 = 0x80000000;
      sub_29FE(&v32, v26, (unsigned int *)&v28, v9, 1);
      a2 = v33;
      v3 = 0;
      v30 = v33;
      if ( !v34 )
        a2 = v32 + v9 + 1;
      v12 = v9 - a2;
      if ( v9 - a2 >= 0 )
      {
        a2 = v9 + 1;
        v3 = -v12 - 1;
      }
      v23 = a2 - v9;
      goto LABEL_45;
    case 'g':
      if ( v9 < 1 )
        v9 = 1;
      if ( v9 <= 17 )
        v13 = v9;
      else
        v13 = 17;
      sub_29FE(&v32, v26, (unsigned int *)&v28, v13, 0);
      a2 = v9;
      v11 = v32;
      v3 = 0;
      v30 = v33;
      if ( (*(_BYTE *)a1 & 8) == 0 )
      {
        if ( v30 < v9 )
          a2 = v30;
        while ( a2 > 1 && v26[a2 - 1] == 48 )
          --a2;
      }
      if ( v32 < v9 && v32 >= -4 )
      {
        if ( v32 > 0 )
        {
          if ( v32 + 1 > a2 )
            a2 = v32 + 1;
        }
        else
        {
          v3 = v32;
          a2 -= v32;
        }
        v23 = v32 - v3 + 1;
        v11 = 0x80000000;
        goto LABEL_44;
      }
      break;
    default:
LABEL_45:
      if ( (*(_BYTE *)a1 & 8) == 0 && v23 >= a2 )
        v23 = -1;
      v25 = 0;
      v14 = &v25;
      if ( v27 != 0x80000000 )
      {
        v32 = 2;
        v33 = 43;
        if ( v27 < 0 )
        {
          v27 = -v27;
          v33 = 45;
        }
        while ( 1 )
        {
          v16 = v32-- <= 0;
          if ( v16 && !v27 )
            break;
          --v14;
          v27 = sub_3194(v27);
          *v14 = v15 + 48;
        }
        v17 = v14 - 1;
        *v17 = v33;
        if ( (*(_WORD *)a1 & 0x800) != 0 )
          v18 = 69;
        else
          v18 = 101;
        v14 = v17 - 1;
        *v14 = v18;
      }
      v27 = v24 - v14 + 7;
      v19 = v31;
      if ( v31 )
        v19 = 1;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) - (v19 + a2 + (v23 >> 31) + v27) - 1;
      if ( (*(_BYTE *)a1 & 0x10) == 0 )
        sub_1144((int *)a1);
      if ( v31 )
      {
        (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(v31, *(_DWORD *)(a1 + 8));
        ++*(_DWORD *)(a1 + 32);
      }
      if ( (*(_BYTE *)a1 & 0x10) != 0 )
        sub_1144((int *)a1);
      while ( 1 )
      {
        v21 = a2--;
        if ( v21 <= 0 )
          break;
        if ( v3 < 0 || v30 <= v3 )
          (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(48, *(_DWORD *)(a1 + 8));
        else
          (*(void (__fastcall **)(_DWORD, _DWORD))(a1 + 4))((unsigned __int8)v26[v3], *(_DWORD *)(a1 + 8));
        ++v3;
        ++*(_DWORD *)(a1 + 32);
        if ( !--v23 )
        {
          v20 = sub_3250();
          (*(void (__fastcall **)(_DWORD, _DWORD))(a1 + 4))(
            *(unsigned __int8 *)(*(_DWORD *)(v20 + 12) + **(_DWORD **)(v20 + 12)),
            *(_DWORD *)(a1 + 8));
          ++*(_DWORD *)(a1 + 32);
        }
      }
      while ( 1 )
      {
        v16 = v27-- <= 0;
        if ( v16 )
          break;
        v22 = (unsigned __int8)*v14++;
        (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(v22, *(_DWORD *)(a1 + 8));
        ++*(_DWORD *)(a1 + 32);
      }
      sub_1170((unsigned __int8 *)a1);
LABEL_77:
      JUMPOUT(0x2A8C);
  }
  v23 = 1;
LABEL_44:
  v27 = v11;
  goto LABEL_45;
}
// 2E04: control flows out of bounds to 2A8C
// 2CDC: variable 'v23' is possibly undefined
// 2D16: variable 'v15' is possibly undefined
// 2D96: variable 'v3' is possibly undefined
// 1: using guessed type _BYTE byte_1[203];

//----- (00002E16) --------------------------------------------------------
int __fastcall sub_2E16(int a1, int a2, unsigned int a3)
{
  int v5; // r6
  int v6; // r7
  int v7; // r2
  int v8; // r3
  int v9; // r5
  int v10; // r1
  unsigned int v11; // r3
  unsigned int v12; // r12
  unsigned int v13; // r1
  int v14; // r2
  unsigned int v15; // r2
  unsigned int v16; // kr00_4
  const char *v17; // r1
  int v18; // r0
  char v19; // r0
  int v20; // r0
  signed int v21; // r2
  int v22; // lr
  int i; // r12
  unsigned int v24; // r2
  int j; // r2
  unsigned int v26; // r3
  int v27; // r0
  int v28; // r7
  signed int v29; // r0
  signed int v30; // r1
  signed int v31; // r1
  char v32; // r1
  int v33; // r7
  unsigned __int8 *v34; // r6
  int v35; // r0
  unsigned __int8 *k; // r6
  int v37; // r0
  bool v38; // cf
  _BYTE v40[4]; // [sp+0h] [bp-34h] BYREF
  signed int v41; // [sp+4h] [bp-30h]
  _BYTE v42[32]; // [sp+8h] [bp-2Ch] BYREF
  int v43; // [sp+28h] [bp-Ch]
  unsigned int v44; // [sp+2Ch] [bp-8h]

  v5 = *(_DWORD *)&byte_1[8 * (a3 >> 3) + 3];
  v6 = *(_DWORD *)(8 * (a3 >> 3));
  v7 = sub_4784(v6, v5);
  if ( v5 >= 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
      v8 = 43;
    else
      v8 = 32 * (*(_DWORD *)a1 << 29 >> 31);
  }
  else
  {
    v8 = 45;
  }
  v40[0] = v8;
  v43 = v8 != 0;
  if ( v7 == 3 || v7 >= 7 )
  {
    sub_3258(a1, a2, v7, v8);
    return 3;
  }
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
    v9 = *(_DWORD *)(a1 + 28);
  else
    v9 = 13;
  v41 = (unsigned int)(2 * v5) >> 21;
  if ( v9 < 13 )
  {
    v44 = (unsigned int)v5 >> 20;
    v10 = 4 * v9;
    v11 = 0;
    if ( (unsigned int)(4 * v9) < 0x18 )
    {
      v12 = 0x100000u >> v10;
    }
    else
    {
      v12 = 0;
      v11 = 0x10000000u >> (v10 - 24);
    }
    v13 = v10 + 12;
    if ( v13 < 0x20 )
    {
      v14 = v5;
    }
    else
    {
      v14 = v6;
      LOBYTE(v13) = v13 - 32;
    }
    v15 = v14 << v13;
    if ( v15 >= 0x80000000 )
    {
      v16 = v6 + v11;
      v5 = (__PAIR64__(v5, v6) + __PAIR64__(v12, v11)) >> 32;
      v6 += v11;
      if ( v15 == 0x80000000 )
      {
        v6 = v16 & ~v11;
        v5 &= ~v12;
      }
      if ( (unsigned int)v5 >> 20 != v44 )
        ++v41;
    }
  }
  if ( (*(_WORD *)a1 & 0x800) != 0 )
    v17 = "0123456789ABCDEFXP";
  else
    v17 = (const char *)&unk_151F4;
  v40[v43] = 48;
  v18 = v43 + 1;
  v40[v18] = v17[16];
  v43 = v18 + 1;
  if ( v41 > 0 )
    v19 = 49;
  else
    v19 = 48;
  v42[0] = v19;
  v20 = 1;
  if ( v41 )
  {
    v21 = v41 - 1023;
LABEL_34:
    v41 = v21;
    goto LABEL_35;
  }
  if ( (2 * v5) | v6 )
  {
    v21 = -1022;
    goto LABEL_34;
  }
LABEL_35:
  if ( v9 > 0 || (*(_BYTE *)a1 & 8) != 0 )
  {
    v42[1] = 46;
    v20 = 2;
  }
  v22 = v20;
  for ( i = 0; i < 5; ++i )
  {
    if ( v9 <= 0 )
      break;
    v24 = v5 << 12;
    v5 *= 16;
    --v9;
    v42[v20++] = v17[v24 >> 28];
  }
  for ( j = 0; j < 8; ++j )
  {
    if ( v9 <= 0 )
      break;
    __SET_PAIR__(v26, v6, 16LL * (unsigned int)v6);
    --v9;
    v42[v20++] = v17[v26];
  }
  if ( (*(_DWORD *)a1 & 0x20) == 0 )
  {
    while ( v20 > v22 && v42[v20 - 1] == 48 )
      --v20;
    if ( v20 > 0 && v42[v20 - 1] == 46 && (*(_DWORD *)a1 & 8) == 0 )
      --v20;
  }
  if ( v9 > 0 )
  {
    v42[v20++] = 62;
    --v9;
  }
  v42[v20] = v17[17];
  v27 = v20 + 1;
  v28 = v27 + 1;
  if ( v41 >= 0 )
  {
    v42[v27] = 43;
    v29 = v41;
  }
  else
  {
    v42[v27] = 45;
    v29 = -v41;
    v41 = -v41;
  }
  if ( v29 >= 1000 )
  {
    v42[v28++] = sub_15C6(v29, 0x3E8u) + 48;
    v41 = v30;
LABEL_61:
    v42[v28++] = sub_15C6(v41, 0x64u) + 48;
    v41 = v31;
LABEL_63:
    v42[v28++] = sub_15C6(v41, 0xAu) + 48;
    goto LABEL_64;
  }
  if ( v29 >= 100 )
    goto LABEL_61;
  if ( v29 >= 10 )
    goto LABEL_63;
LABEL_64:
  sub_15C6(v41, 0xAu);
  v42[v28] = v32 + 48;
  v33 = v28 + 1;
  *(_DWORD *)(a1 + 24) -= v33 + v9 + v43;
  if ( (*(_BYTE *)a1 & 0x10) == 0 )
    sub_1144((int *)a1);
  v34 = v40;
  *(_DWORD *)(a1 + 32) += v43;
  while ( --v43 != -1 )
  {
    v35 = *v34++;
    (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(v35, *(_DWORD *)(a1 + 8));
  }
  if ( (*(_BYTE *)a1 & 0x10) != 0 )
    sub_1144((int *)a1);
  for ( k = v42; ; ++k )
  {
    v38 = v33-- != 0;
    if ( !v38 )
      break;
    v37 = *k;
    if ( v37 == 62 )
    {
      *(_DWORD *)(a1 + 32) += v9;
      while ( 1 )
      {
        v38 = v9-- != 0;
        if ( !v38 )
          break;
        (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(48, *(_DWORD *)(a1 + 8));
      }
    }
    else
    {
      (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(v37, *(_DWORD *)(a1 + 8));
      ++*(_DWORD *)(a1 + 32);
    }
  }
  sub_1170((unsigned __int8 *)a1);
  return 3;
}
// 2EDC: conditional instruction was optimized away because r0.4==0
// 2EE6: conditional instruction was optimized away because r0.4==0
// 2EFA: conditional instruction was optimized away because r0.4==0
// 3026: variable 'v30' is possibly undefined
// 303C: variable 'v31' is possibly undefined
// 305A: variable 'v32' is possibly undefined
// 1: using guessed type _BYTE byte_1[203];

//----- (000030EC) --------------------------------------------------------
int __fastcall sub_30EC(int a1, unsigned __int8 *a2, unsigned int a3)
{
  if ( !*(_DWORD *)(a1 + 20) )
    sub_2536(a1, a2, a3);
  return 1;
}

//----- (00003102) --------------------------------------------------------
int __fastcall sub_3102(int a1, int a2, _BYTE *a3)
{
  *(_BYTE *)(a1 + 36) = *a3;
  *(_BYTE *)(a1 + 37) = 0;
  return sub_30EC(a1, (unsigned __int8 *)(a1 + 36), 1u);
}

//----- (00003112) --------------------------------------------------------
int __fastcall sub_3112(int a1, int a2, unsigned __int8 **a3)
{
  return sub_30EC(a1, *a3, 0xFFFFFFFF);
}

//----- (0000311A) --------------------------------------------------------
int __fastcall sub_311A(int a1, int a2, int a3)
{
  if ( !*(_DWORD *)(a1 + 20) )
    sub_2718(a1, a2, a3);
  return 1;
}

//----- (00003130) --------------------------------------------------------
int __fastcall sub_3130(int a1, int a2, _WORD *a3)
{
  *(_WORD *)(a1 + 36) = *a3;
  *(_WORD *)(a1 + 38) = 0;
  return sub_311A(a1, a1 + 36, 1);
}

//----- (00003140) --------------------------------------------------------
int __fastcall sub_3140(int a1, int a2, int *a3)
{
  return sub_311A(a1, *a3, -1);
}

//----- (00003148) --------------------------------------------------------
int __fastcall sub_3148(_BYTE *a1, unsigned int a2, int a3)
{
  int v6; // r0
  int v7; // r3

  v6 = sub_3240();
  v7 = *(_DWORD *)v6;
  if ( *(_BYTE *)(*(_DWORD *)v6 + 257) == 1 )
    return ((int (__fastcall *)(_BYTE *, unsigned int, int))(*(_DWORD *)(v7 + 263) + v7 + 263))(a1, a2, a3);
  if ( a2 > 0xFF || !*(_BYTE *)(v7 + a2) )
    return -1;
  *a1 = a2;
  return 1;
}

//----- (00003188) --------------------------------------------------------
int __fastcall sub_3188(int a1)
{
  int v1; // r0

  v1 = sub_3954(a1);
  return sub_3948(v1);
}

//----- (00003194) --------------------------------------------------------
unsigned int __fastcall sub_3194(unsigned int a1)
{
  unsigned int v2; // r0
  unsigned int result; // r0
  unsigned int i; // r1

  v2 = ((a1 - (a1 >> 2)) >> 4) + a1 - (a1 >> 2);
  result = ((((v2 >> 8) + v2) >> 16) + (v2 >> 8) + v2) >> 3;
  for ( i = a1 - 10 * result; i >= 0xA; i -= 10 )
    ++result;
  return result;
}

//----- (000031BC) --------------------------------------------------------
unsigned int __fastcall sub_31BC(int a1, int a2)
{
  unsigned int result; // r0

  if ( (a2 & 0x100000) == 0 )
    return 0;
  if ( (unsigned int)(a2 << 13) >> 29 )
    return 2 * ~(a2 << 15);
  result = __get_CPSR() & 0xFFFFFFF | 0x30000000;
  __asm { MSR.W           CPSR_f, R0 }
  return result;
}

//----- (000031EC) --------------------------------------------------------
unsigned int __fastcall sub_31EC(int a1, int a2, int a3, int a4, char a5)
{
  return sub_39A4(0, 0x7FF80000u, a5);
}

//----- (00003240) --------------------------------------------------------
int sub_3240()
{
  return sub_3250() + 4;
}

//----- (00003250) --------------------------------------------------------
int sub_3250()
{
  return 536890544;
}

//----- (00003258) --------------------------------------------------------
int __fastcall sub_3258(int a1, int a2, int a3, int a4)
{
  int v6; // r6
  int v7; // r1
  int v8; // r0
  int (__fastcall *v9)(int, int); // r5
  int v10; // r0
  int v11; // r0
  int v12; // r0

  v6 = 3;
  v7 = *(_DWORD *)a1;
  v8 = *(_DWORD *)a1 & 0x800;
  if ( a3 < 7 )
  {
    if ( v8 )
      v9 = (int (__fastcall *)(int, int))&loc_32D8;
    else
      v9 = (int (__fastcall *)(int, int))&loc_32DC;
  }
  else if ( v8 )
  {
    v9 = sub_32D0;
  }
  else
  {
    v9 = (int (__fastcall *)(int, int))&loc_32D4;
  }
  *(_DWORD *)a1 = v7 & 0xFFFFFFEF;
  v10 = *(_DWORD *)(a1 + 24) - 3;
  *(_DWORD *)(a1 + 24) = v10;
  if ( a4 )
    *(_DWORD *)(a1 + 24) = v10 - 1;
  sub_1144((int *)a1);
  if ( a4 )
  {
    (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(a4, *(_DWORD *)(a1 + 8));
    v11 = *(_DWORD *)(a1 + 32) + 1;
    *(_DWORD *)(a1 + 32) = v11;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 32) = v11 + 3;
  while ( v6-- != 0 )
  {
    v12 = *(unsigned __int8 *)v9;
    v9 = (int (__fastcall *)(int, int))((char *)v9 + 1);
    (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(v12, *(_DWORD *)(a1 + 8));
  }
  return sub_1170((unsigned __int8 *)a1);
}

//----- (000032D0) --------------------------------------------------------
int __fastcall sub_32D0(int a1, int a2)
{
  int v2; // r5

  *(_DWORD *)(v2 + 20) = 2 * a2;
  return sub_32E0(a1, *(_DWORD *)(v2 + 100));
}
// 32D4: variable 'v2' is possibly undefined
// 32E0: using guessed type int __fastcall sub_32E0(_DWORD, _DWORD);

//----- (000032E0) --------------------------------------------------------
void __fastcall sub_32E0(__int64 *a1, int a2, int a3)
{
  int v4; // r1
  int v5; // r5
  int v6; // r4
  int v7; // r0
  int v8; // r7
  int v9; // r2
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r2
  __int64 v14; // r0
  int v15; // r2
  __int64 *v16; // r3
  __int64 v17; // [sp+0h] [bp-34h] BYREF
  int v18; // [sp+8h] [bp-2Ch]
  __int64 v19; // [sp+Ch] [bp-28h] BYREF
  int v20; // [sp+14h] [bp-20h]
  _DWORD v21[2]; // [sp+18h] [bp-1Ch] BYREF
  int v22; // [sp+20h] [bp-14h]
  int v23; // [sp+24h] [bp-10h]
  __int64 *v24; // [sp+28h] [bp-Ch]
  int v25; // [sp+2Ch] [bp-8h]
  int v26; // [sp+30h] [bp-4h]

  v24 = a1;
  v25 = a2;
  v26 = a3;
  v17 = 0x8000000000003FFFLL;
  v18 = 0;
  v19 = 0x8000000000003FFFLL;
  v20 = 0;
  v5 = sub_15C6(a2 + 7067, 0x37u) - 128;
  v6 = v4 - 27;
  if ( v4 - 27 >= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 27 - v4;
    v7 = 1;
  }
  v8 = 0;
  v23 = v7;
  while ( v6 )
  {
    if ( v6 << 31 )
    {
      v17 = sub_37EC(&v17, &dword_1521C[3 * v8], a3);
      v18 = v9;
    }
    v6 >>= 1;
    ++v8;
  }
  while ( v5 )
  {
    if ( v5 << 31 )
    {
      v10 = (_DWORD *)((char *)&unk_15258 + 16 * v6);
      v11 = v10[1];
      v12 = v10[2];
      v21[0] = *v10;
      v22 = v12;
      v21[1] = v11;
      if ( !(v10[3] + a3) )
        v22 = v12 + a3;
      v19 = sub_37EC(&v19, v21, a3);
      v20 = v13;
    }
    v5 >>= 1;
    ++v6;
  }
  if ( v23 )
    sub_3898((int)&v19, &v17, a3);
  else
    v14 = sub_37EC(&v19, &v17, a3);
  v16 = v24;
  *v24 = v14;
  *((_DWORD *)v16 + 2) = v15;
}
// 3318: variable 'v4' is possibly undefined
// 3346: variable 'v9' is possibly undefined
// 3380: variable 'v13' is possibly undefined
// 33AC: variable 'v14' is possibly undefined
// 33AC: variable 'v15' is possibly undefined
// 1521C: using guessed type _DWORD dword_1521C[4];

//----- (000033B8) --------------------------------------------------------
int __fastcall sub_33B8(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r2

  v4 = (2 * a1) >> 21;
  if ( v4 )
  {
    v5 = 0x80000000;
  }
  else
  {
    v5 = 0;
    v4 = 1;
  }
  v6 = v4 + 15360;
  v7 = v5 | (a1 << 12 >> 1) | (a2 >> 21);
  v8 = a2 << 11;
  while ( v7 >= 0 )
  {
    v7 = (2 * v7) | (v8 >> 31);
    v8 *= 2;
    --v6;
  }
  return v6 | (a1 >> 31 << 31);
}

//----- (000033F8) --------------------------------------------------------
unsigned int *__fastcall sub_33F8(unsigned int *a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r1
  int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r1
  BOOL v13; // r0
  unsigned int v14; // r2
  int v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r1
  BOOL v18; // r0
  unsigned int v19; // r2
  int v20; // r0
  signed int v21; // r7
  int v22; // r6
  int v23; // r7
  char v24; // r0
  int v25; // r3
  int i; // r0
  int v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r0
  int v30; // r1
  unsigned int v31; // r3
  int v32; // r2
  unsigned int *v33; // r0
  int v35; // [sp+0h] [bp-24h]
  unsigned int v36; // [sp+4h] [bp-20h]
  unsigned int v37; // [sp+8h] [bp-1Ch]
  unsigned int v38; // [sp+Ch] [bp-18h]
  BOOL v39; // [sp+10h] [bp-14h]
  unsigned int *v40; // [sp+14h] [bp-10h]
  _DWORD *v41; // [sp+18h] [bp-Ch]
  _DWORD *v42; // [sp+1Ch] [bp-8h]
  int v43; // [sp+20h] [bp-4h]

  v40 = a1;
  v41 = a2;
  v42 = a3;
  v43 = a4;
  v7 = sub_46D4(a2[1], a3[1]);
  v35 = v8;
  v36 = v7;
  v9 = sub_46D4(a2[2], a3[2]);
  v37 = v10;
  v38 = v9;
  v11 = sub_46D4(a2[2], a3[1]);
  v37 += v11;
  v13 = v37 < v11;
  v14 = v36 + v12 + v13;
  v36 = v14;
  if ( v13 )
  {
    if ( v14 > v12 )
      goto LABEL_6;
LABEL_5:
    v15 = 1;
    goto LABEL_7;
  }
  if ( v14 < v12 )
    goto LABEL_5;
LABEL_6:
  v15 = 0;
LABEL_7:
  v35 += v15;
  v16 = sub_46D4(a2[1], a3[2]);
  v37 += v16;
  v18 = v37 < v16;
  v19 = v36 + v17 + v18;
  v36 = v19;
  if ( v18 )
  {
    if ( v19 > v17 )
      goto LABEL_12;
  }
  else if ( v19 >= v17 )
  {
LABEL_12:
    v20 = 0;
    goto LABEL_13;
  }
  v20 = 1;
LABEL_13:
  v35 += v20;
  v21 = ((unsigned int)(2 * *a2) >> 1) + ((unsigned int)(2 * *a3) >> 1) - 16382;
  while ( v35 >= 0 )
  {
    v35 = (2 * v35) | (v36 >> 31);
    v36 = (2 * v36) | (v37 >> 31);
    v37 = (2 * v37) | (v38 >> 31);
    --v21;
    v38 *= 2;
  }
  if ( v43 )
    v22 = 15361;
  else
    v22 = 0;
  v39 = v21 < v22;
  if ( v21 < v22 )
  {
    v23 = v22 - v21;
    v24 = v23 & 0x1F;
    if ( (v23 & 0x1F) != 0 )
    {
      v38 |= v37 << (32 - v24);
      v37 = (v37 >> v24) | (v36 << (32 - v24));
      v36 = (v36 >> v24) | (v35 << (32 - v24));
      v35 = (unsigned int)v35 >> v24;
    }
    v25 = v23 >> 5;
    if ( v23 >> 5 )
    {
      for ( i = 3; i >= 0; --i )
      {
        if ( i - v25 >= 0 )
          *(&v35 + i) = *(&v35 + i - v25);
        else
          *(&v35 + i) = 0;
      }
    }
    v21 = v22;
  }
  v27 = v38;
  v28 = v37;
  if ( v38 )
    v27 = 1;
  v37 |= v27;
  v29 = v28 | v27;
  if ( v43 )
  {
    v29 = (v29 != 0) | (v36 << 21);
    v30 = 2048;
    v36 = v36 >> 11 << 11;
  }
  else
  {
    v30 = 1;
  }
  if ( a5 == 1 )
  {
    if ( !v29 )
      goto LABEL_45;
  }
  else if ( a5 || v29 <= 0x80000000 && (v29 != 0x80000000 || (v36 & v30) == 0) )
  {
    goto LABEL_45;
  }
  v36 += v30;
  if ( !v36 && !++v35 )
  {
    ++v21;
    v35 = 0x80000000;
  }
LABEL_45:
  v31 = v36;
  v32 = v35;
  v33 = v40;
  *v40 = ((unsigned int)(*a2 ^ *a3) >> 31 << 31) | v21;
  v33[1] = v32;
  v33[2] = v31;
  return v33 + 3;
}
// 3408: variable 'v8' is possibly undefined
// 3414: variable 'v10' is possibly undefined
// 3432: variable 'v12' is possibly undefined
// 346C: variable 'v17' is possibly undefined

//----- (000035E4) --------------------------------------------------------
unsigned int *__fastcall sub_35E4(unsigned int *a1, int a2, _DWORD *a3, int a4, int a5)
{
  __int64 v5; // r0
  unsigned int v6; // lr
  signed int v7; // r4
  unsigned __int64 v8; // kr08_8
  int v9; // r2
  int v10; // r2
  unsigned int v11; // r5
  bool v12; // cf
  int v13; // r0
  int v14; // r3
  int v15; // r2
  char v16; // r0
  unsigned int v17; // r4
  int v18; // r4
  int i; // r1
  int v20; // r2
  int j; // r0
  unsigned int v22; // r0
  int v23; // r1
  unsigned int v24; // r3
  unsigned int *v25; // r0
  unsigned int v26; // r1
  unsigned int v28; // [sp+0h] [bp-2Ch]
  unsigned int v29; // [sp+4h] [bp-28h]
  unsigned int v30; // [sp+8h] [bp-24h]
  unsigned int v31; // [sp+Ch] [bp-20h]
  unsigned __int64 v32; // [sp+10h] [bp-1Ch]
  int v33; // [sp+18h] [bp-14h]
  unsigned int *v34; // [sp+1Ch] [bp-10h]
  _DWORD *v35; // [sp+20h] [bp-Ch]
  _DWORD *v36; // [sp+24h] [bp-8h]
  int v37; // [sp+28h] [bp-4h]

  v34 = a1;
  v35 = (_DWORD *)a2;
  v36 = a3;
  v37 = a4;
  v5 = *(_QWORD *)(a2 + 4);
  v6 = a3[2];
  v31 = a3[1];
  v7 = ((unsigned int)(2 * *v35) >> 1) - ((unsigned int)(2 * *a3) >> 1) + 0x3FFF;
  v8 = 0;
  if ( a4 )
    v9 = 53;
  else
    v9 = 64;
  v33 = v9;
  v10 = 0;
  v11 = 0;
  v32 = 0x8000000000000000LL;
  while ( v10 < v33 )
  {
    if ( v11 || __PAIR64__(v5, HIDWORD(v5)) >= __PAIR64__(v31, v6) )
    {
      LODWORD(v5) = (__PAIR64__(v5, HIDWORD(v5)) - __PAIR64__(v31, v6)) >> 32;
      HIDWORD(v5) -= v6;
      v8 += v32;
    }
    if ( v8 )
    {
      v32 >>= 1;
    }
    else
    {
      --v10;
      --v7;
    }
    v11 = (unsigned int)v5 >> 31 << 31;
    v12 = __CFADD__(HIDWORD(v5), HIDWORD(v5));
    HIDWORD(v5) *= 2;
    LODWORD(v5) = v5 + v12 + (_DWORD)v5;
    ++v10;
  }
  if ( v11 || __PAIR64__(v31, v6) < __PAIR64__(v5, HIDWORD(v5)) )
  {
    v13 = 3;
  }
  else if ( v5 == __PAIR64__(v6, v31) )
  {
    v13 = 2;
  }
  else
  {
    v13 = v5 != 0;
  }
  v28 = HIDWORD(v8);
  v29 = v8;
  v30 = 0;
  if ( v37 )
  {
    v14 = 15361;
    v29 = v8 | (v13 << 9);
  }
  else
  {
    v14 = 0;
    v30 = v13 << 30;
  }
  if ( v7 < v14 )
  {
    v15 = v14 - v7;
    v16 = (v14 - v7) & 0x1F;
    if ( ((v14 - v7) & 0x1F) != 0 )
    {
      v17 = v30 << (32 - v16);
      v30 = (v30 >> v16) | (v29 << (32 - v16)) | (v17 != 0);
      v29 = (v29 >> v16) | (v28 << (32 - v16));
      v28 >>= v16;
    }
    v18 = v15 >> 5;
    if ( v15 >> 5 )
    {
      for ( i = 2; i >= 0; --i )
      {
        v20 = 0;
        if ( i == 2 )
        {
          for ( j = 3 - v18; j < 3; ++j )
          {
            if ( j >= 0 && *(&v28 + j) )
              v20 = 1;
          }
        }
        if ( i - v18 >= 0 )
          *(&v28 + i) = *(&v28 + i - v18) | v20;
        else
          *(&v28 + i) = v20;
      }
    }
    v7 = v14;
  }
  v22 = v30;
  if ( v37 )
  {
    if ( v30 )
      v22 = 1;
    v22 |= v29 << 21;
    v23 = 2048;
    v29 = v29 >> 11 << 11;
  }
  else
  {
    v23 = 1;
  }
  if ( a5 == 1 )
  {
    if ( !v22 )
      goto LABEL_55;
  }
  else if ( a5 || v22 <= 0x80000000 && (v22 != 0x80000000 || (v29 & v23) == 0) )
  {
    goto LABEL_55;
  }
  v29 += v23;
  if ( !v29 && !++v28 )
  {
    ++v7;
    v28 = 0x80000000;
  }
LABEL_55:
  v24 = v28;
  v25 = v34;
  v26 = ((unsigned int)(*v35 ^ *v36) >> 31 << 31) | v7;
  v34[2] = v29;
  *v25 = v26;
  v25[1] = v24;
  return v25 + 2;
}

//----- (000037EC) --------------------------------------------------------
__int64 __fastcall sub_37EC(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4[3]; // [sp+8h] [bp-Ch] BYREF

  sub_33F8(v4, a1, a2, 0, a3);
  return *(_QWORD *)v4;
}

//----- (00003808) --------------------------------------------------------
void __fastcall sub_3808(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4)
{
  unsigned int v4[7]; // [sp+8h] [bp-1Ch] BYREF

  v4[3] = (unsigned int)a1;
  v4[4] = (unsigned int)a2;
  v4[5] = a3;
  v4[6] = a4;
  sub_33F8(v4, a1, a2, 1, a3);
  JUMPOUT(0x35E0);
}
// 3882: control flows out of bounds to 35E0

//----- (00003898) --------------------------------------------------------
void __fastcall sub_3898(int a1, _DWORD *a2, int a3)
{
  unsigned int v3[3]; // [sp+8h] [bp-Ch] BYREF

  sub_35E4(v3, a1, a2, 0, a3);
  JUMPOUT(0x3804);
}
// 38B0: control flows out of bounds to 3804

//----- (000038B2) --------------------------------------------------------
void __fastcall sub_38B2(int a1, _DWORD *a2, int a3, unsigned int a4)
{
  unsigned int v4[7]; // [sp+8h] [bp-1Ch] BYREF

  v4[3] = a1;
  v4[4] = (unsigned int)a2;
  v4[5] = a3;
  v4[6] = a4;
  sub_35E4(v4, a1, a2, 1, a3);
  JUMPOUT(0x35E0);
}
// 392C: control flows out of bounds to 35E0

//----- (00003938) --------------------------------------------------------
void __fastcall __noreturn sub_3938(int a1, int a2)
{
  sub_2EC(a1, a2);
}

//----- (00003948) --------------------------------------------------------
int __fastcall sub_3948(int result)
{
  if ( result )
    sub_3A04();
  return result;
}

//----- (00003954) --------------------------------------------------------
int __fastcall sub_3954(int a1)
{
  char *v1; // r1

  if ( a1 == 1 )
    v1 = ": Heap memory corrupted";
  else
    v1 = 0;
  sub_3A10("SIGRTMEM: Out of heap memory", v1);
  return 1;
}

//----- (000039A4) --------------------------------------------------------
unsigned int __fastcall sub_39A4(unsigned int result, unsigned int a2, char a3)
{
  int v4; // r1

  v4 = a3 & 0xF;
  if ( v4 == 9 )
    return sub_31BC(8, a3);
  if ( v4 == 10 )
  {
    if ( (a3 & 0x40) == 0 )
      return result;
    return 0x80000000;
  }
  if ( v4 != 8 )
    return result;
  if ( (a3 & 0x40) != 0 )
    return 0x80000000;
  if ( (a3 & 0x10) != 0 )
    return result << 29;
  else
    return __ROR4__((result >> 29 << 29) | a2 & 0xFFFFFF, 29) | (HIBYTE(a2) << 24);
}

//----- (00003A04) --------------------------------------------------------
void __noreturn sub_3A04()
{
  __breakpoint(171);
  while ( 1 )
    ;
}

//----- (00003A10) --------------------------------------------------------
int __fastcall sub_3A10(_BYTE *a1, _BYTE *a2)
{
  while ( 1 )
  {
    sub_3AE4();
    if ( !a1 || !*a1 )
      break;
    ++a1;
  }
  while ( a2 && *a2 )
  {
    ++a2;
    sub_3AE4();
  }
  return sub_3AE4();
}

//----- (00003A44) --------------------------------------------------------
int __fastcall sub_3A44(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int *v4; // r0
  unsigned int v5; // r2
  unsigned int *v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r5
  int result; // r0
  unsigned int v10; // r5
  int v11; // r4
  int v12; // r2
  int v13; // r3
  unsigned __int8 *v14; // r0
  unsigned __int8 *v15; // r1

  if ( (_DWORD)a1 << 30 == (_DWORD)a2 << 30 )
  {
    if ( ((unsigned __int8)a1 & 3) == 0 )
      goto LABEL_6;
    do
    {
      v2 = *(unsigned __int8 *)a1;
      v3 = *(unsigned __int8 *)a2;
      a1 = (unsigned int *)((char *)a1 + 1);
      a2 = (unsigned int *)((char *)a2 + 1);
      if ( !v2 || v2 != v3 )
        return v2 - v3;
    }
    while ( ((unsigned __int8)a1 & 3) != 0 );
LABEL_6:
    while ( 1 )
    {
      v5 = *a1;
      v4 = a1 + 1;
      v7 = *a2;
      v6 = a2 + 1;
      v8 = (v5 - 16843009) & ~v5 & 0x80808080;
      if ( v8 )
        break;
      if ( v5 != v7 )
        goto LABEL_10;
      v5 = *v4;
      a1 = v4 + 1;
      v7 = *v6;
      a2 = v6 + 1;
      v8 = (v5 - 16843009) & ~v5 & 0x80808080;
      if ( v8 )
        break;
      if ( v5 != v7 )
      {
LABEL_10:
        result = 1;
        if ( bswap32(v5) < bswap32(v7) )
          return -1;
        return result;
      }
    }
    v2 = bswap32(v5);
    v3 = bswap32(v7);
    v10 = bswap32(v8);
    v11 = 24;
    while ( 1 )
    {
      result = (v2 >> v11) - (v3 >> v11);
      if ( v2 >> v11 != v3 >> v11 || v10 >> v11 )
        break;
      v11 -= 8;
      if ( !v11 )
        return v2 - v3;
    }
  }
  else
  {
    do
    {
      v12 = *(unsigned __int8 *)a1;
      v13 = *(unsigned __int8 *)a2;
      v14 = (unsigned __int8 *)a1 + 1;
      v15 = (unsigned __int8 *)a2 + 1;
      if ( !v12 )
        break;
      if ( v12 != v13 )
        break;
      v12 = *v14;
      v13 = *v15;
      a1 = (unsigned int *)(v14 + 1);
      a2 = (unsigned int *)(v15 + 1);
      if ( !v12 )
        break;
    }
    while ( v12 == v13 );
    return v12 - v13;
  }
  return result;
}

//----- (00003AE4) --------------------------------------------------------
int sub_3AE4()
{
  __breakpoint(171);
  return 3;
}

//----- (00003AF0) --------------------------------------------------------
int __fastcall sub_3AF0(char *a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r4
  int v4; // r5
  int v5; // r3
  int v6; // r2
  char v7; // r6
  int v8; // r3
  _BYTE *v9; // r3
  int v10; // r2

  v3 = &a2[a3];
  do
  {
    v4 = (unsigned __int8)*a1++;
    v5 = v4 & 7;
    if ( (v4 & 7) == 0 )
      v5 = (unsigned __int8)*a1++;
    v6 = v4 >> 4;
    if ( !(v4 >> 4) )
      v6 = (unsigned __int8)*a1++;
    while ( --v5 )
    {
      v7 = *a1++;
      *a2++ = v7;
    }
    if ( (v4 & 8) != 0 )
    {
      v8 = (unsigned __int8)*a1++;
      v9 = &a2[-v8];
      v10 = v6 + 2;
      while ( --v10 >= 0 )
        *a2++ = *v9++;
    }
    else
    {
      while ( --v6 >= 0 )
        *a2++ = 0;
    }
  }
  while ( a2 < v3 );
  return 0;
}

//----- (00003B48) --------------------------------------------------------
// Same stub pattern as the other 0x3Bxx/0x3Cxx helpers: it tail-calls into a RAM-resident runtime entry at 0x20000185. The static image only contains the shim, not the implementation body.
void __fastcall sub_3B48(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536871301;
  JUMPOUT(0x20000184);
}
// 3B4E: control flows out of bounds to 20000184

//----- (00003B54) --------------------------------------------------------
void __fastcall sub_3B54(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536880917;
  JUMPOUT(0x20002714);
}
// 3B5A: control flows out of bounds to 20002714

//----- (00003B60) --------------------------------------------------------
void __fastcall sub_3B60(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536874321;
  JUMPOUT(0x20000D50);
}
// 3B66: control flows out of bounds to 20000D50

//----- (00003B6C) --------------------------------------------------------
int __fastcall ramapi_transport_can_poll_channel(int channel_desc, int arg1, int arg2)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536873491;
  JUMPOUT(0x20000A12);
}
// 3B72: control flows out of bounds to 20000A12

//----- (00003B78) --------------------------------------------------------
void __fastcall sub_3B78(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536875223;
  JUMPOUT(0x200010D6);
}
// 3B7E: control flows out of bounds to 200010D6

//----- (00003B84) --------------------------------------------------------
// Thunk pattern confirmed in disassembly: this stub restores the original R0 and tail-calls to 0x20000A39. The implementation body is RAM-resident and not present in the static image, so semantics are inferred from callers.
int __fastcall ramapi_transport_enqueue_frame(int channel_desc, int frame, int frame_len)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536873529;
  JUMPOUT(0x20000A38);
}
// 3B8A: control flows out of bounds to 20000A38

//----- (00003B90) --------------------------------------------------------
unsigned int ramapi_get_elapsed_ticks()
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536875291;
  JUMPOUT(0x2000111A);
}
// 3B96: control flows out of bounds to 2000111A

//----- (00003B9C) --------------------------------------------------------
void __fastcall sub_3B9C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536876481;
  JUMPOUT(0x200015C0);
}
// 3BA2: control flows out of bounds to 200015C0

//----- (00003BA8) --------------------------------------------------------
int ramapi_reset_idle_transport_state()
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536875477;
  JUMPOUT(0x200011D4);
}
// 3BAE: control flows out of bounds to 200011D4

//----- (00003BB4) --------------------------------------------------------
int __fastcall ramapi_set_run_state_code(int code)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536878713;
  JUMPOUT(0x20001E78);
}
// 3BBA: control flows out of bounds to 20001E78

//----- (00003BC0) --------------------------------------------------------
int __fastcall ramapi_publish_run_state_code(int code)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536871899;
  JUMPOUT(0x200003DA);
}
// 3BC6: control flows out of bounds to 200003DA

//----- (00003BD8) --------------------------------------------------------
int __fastcall ramapi_transport_channel_idle(int arg0, int arg1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536873517;
  JUMPOUT(0x20000A2C);
}
// 3BDE: control flows out of bounds to 20000A2C

//----- (00003BE4) --------------------------------------------------------
int __fastcall ramapi_transport_peek_frame_meta(int channel_desc, int frame_store)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536873571;
  JUMPOUT(0x20000A62);
}
// 3BEA: control flows out of bounds to 20000A62

//----- (00003BF0) --------------------------------------------------------
int __fastcall ramapi_transport_consume_frame(int channel_desc)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536873663;
  JUMPOUT(0x20000ABE);
}
// 3BF6: control flows out of bounds to 20000ABE

//----- (00003BFC) --------------------------------------------------------
void __fastcall sub_3BFC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536870913;
  JUMPOUT(0x20000000);
}
// 3C02: control flows out of bounds to 20000000

//----- (00003C08) --------------------------------------------------------
void __fastcall sub_3C08(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536878735;
  JUMPOUT(0x20001E8E);
}
// 3C0E: control flows out of bounds to 20001E8E

//----- (00003C14) --------------------------------------------------------
// Used when apply_active_profile_configuration() or system-mode handlers switch runtime context. The return value then flows through ramapi_transport_select_context() and a primary/secondary commit thunk.
int __fastcall ramapi_transport_configure_route(int current_ctx, int mode, int primary)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536871905;
  JUMPOUT(0x200003E0);
}
// 3C1A: control flows out of bounds to 200003E0

//----- (00003C20) --------------------------------------------------------
// Because callers treat the return value as a context/handle passed into commit thunks, this RAM API is best understood as a transport-context selector rather than a simple notifier.
int __fastcall ramapi_transport_select_context(int route_handle)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536872013;
  JUMPOUT(0x2000044C);
}
// 3C26: control flows out of bounds to 2000044C

//----- (00003C2C) --------------------------------------------------------
int __fastcall ramapi_transport_commit_primary(int ctx)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536871681;
  JUMPOUT(0x20000300);
}
// 3C32: control flows out of bounds to 20000300

//----- (00003C38) --------------------------------------------------------
int __fastcall ramapi_transport_commit_secondary(int ctx)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536871753;
  JUMPOUT(0x20000348);
}
// 3C3E: control flows out of bounds to 20000348

//----- (00003C44) --------------------------------------------------------
int __fastcall ramapi_transport_emit_small_frame(int frame, int frame_len, int class_id)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536875695;
  JUMPOUT(0x200012AE);
}
// 3C4A: control flows out of bounds to 200012AE

//----- (00003C5C) --------------------------------------------------------
void __fastcall sub_3C5C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536872737;
  JUMPOUT(0x20000720);
}
// 3C62: control flows out of bounds to 20000720

//----- (00003C74) --------------------------------------------------------
void __fastcall sub_3C74(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536875305;
  JUMPOUT(0x20001128);
}
// 3C7A: control flows out of bounds to 20001128

//----- (00003C80) --------------------------------------------------------
void __fastcall sub_3C80(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536879905;
  JUMPOUT(0x20002320);
}
// 3C86: control flows out of bounds to 20002320

//----- (00003C8C) --------------------------------------------------------
void __fastcall sub_3C8C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536875409;
  JUMPOUT(0x20001190);
}
// 3C92: control flows out of bounds to 20001190

//----- (00003CA4) --------------------------------------------------------
unsigned int __fastcall ramapi_get_hold_elapsed_ticks(int ctx)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536872057;
  JUMPOUT(0x20000478);
}
// 3CAA: control flows out of bounds to 20000478

//----- (00003CB0) --------------------------------------------------------
void __fastcall sub_3CB0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536873437;
  JUMPOUT(0x200009DC);
}
// 3CB6: control flows out of bounds to 200009DC

//----- (00003CBC) --------------------------------------------------------
void __fastcall sub_3CBC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536878583;
  JUMPOUT(0x20001DF6);
}
// 3CC2: control flows out of bounds to 20001DF6

//----- (00003CC8) --------------------------------------------------------
// Only referenced by service_transport_rx_queue(); inferred role is pulling a frame plus metadata from a transport-side mailbox into caller-owned buffers before the frame is re-enqueued or acknowledged.
int __fastcall ramapi_transport_pull_frame(int out_meta, int out_frame, int out_len)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536880009;
  JUMPOUT(0x20002388);
}
// 3CCE: control flows out of bounds to 20002388

//----- (00003CD4) --------------------------------------------------------
// Only referenced by service_transport_rx_queue() and service_transport_aux_queue(); inferred role is pushing an encoded frame to the lower transport with (type, payload, length, class) arguments.
int __fastcall ramapi_transport_push_frame(int frame_type, int frame, int frame_len, int class_id)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536871277;
  JUMPOUT(0x2000016C);
}
// 3CDA: control flows out of bounds to 2000016C

//----- (00003CE0) --------------------------------------------------------
void __fastcall sub_3CE0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536871253;
  JUMPOUT(0x20000154);
}
// 3CE6: control flows out of bounds to 20000154

//----- (00003CEC) --------------------------------------------------------
void __fastcall sub_3CEC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536871265;
  JUMPOUT(0x20000160);
}
// 3CF2: control flows out of bounds to 20000160

//----- (00003CF8) --------------------------------------------------------
void __fastcall sub_3CF8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536873033;
  JUMPOUT(0x20000848);
}
// 3CFE: control flows out of bounds to 20000848

//----- (00003D04) --------------------------------------------------------
void __fastcall sub_3D04(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536872635;
  JUMPOUT(0x200006BA);
}
// 3D0A: control flows out of bounds to 200006BA

//----- (00003D10) --------------------------------------------------------
void __fastcall sub_3D10(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536872373;
  JUMPOUT(0x200005B4);
}
// 3D16: control flows out of bounds to 200005B4

//----- (00003D1C) --------------------------------------------------------
void __fastcall sub_3D1C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 536881587;
  JUMPOUT(0x200029B2);
}
// 3D22: control flows out of bounds to 200029B2

//----- (00003D34) --------------------------------------------------------
_DWORD *__fastcall sub_3D34(_DWORD *result)
{
  while ( (MEMORY[0x50001010] & 0x100) == 0 )
    ;
  *result = MEMORY[0x50001018];
  return result;
}

//----- (00003D48) --------------------------------------------------------
int sub_3D48()
{
  MEMORY[0x50021010] = 1;
  if ( MEMORY[0x20003AD0] )
    MEMORY[0x20003AD0]();
  MEMORY[0x5002104C] = 0;
  return 0;
}
// 20003AD0: using guessed type int (*)(void);

//----- (00003D70) --------------------------------------------------------
int sub_3D70()
{
  unsigned int i; // r6
  int v1; // r4
  unsigned __int8 *v2; // r2
  unsigned int v3; // r5
  unsigned int j; // r7
  void (__fastcall *v5)(unsigned int); // r1
  int result; // r0

  for ( i = 0; i < 2; ++i )
  {
    v1 = *(unsigned __int8 *)(*(_DWORD *)(4 * i + 0x20003AD4) + 84)
       | (*(unsigned __int8 *)(*(_DWORD *)(4 * i + 0x20003AD4) + 85) << 8)
       | (*(unsigned __int8 *)(*(_DWORD *)(4 * i + 0x20003AD4) + 86) << 16)
       | (*(unsigned __int8 *)(*(_DWORD *)(4 * i + 0x20003AD4) + 87) << 24);
    v2 = (unsigned __int8 *)(*(_DWORD *)(4 * i + 0x20003AD4) + 32);
    v3 = (*v2 | (v2[1] << 8) | (v2[2] << 16) | (v2[3] << 24)) & v1;
    for ( j = 32 * i; v3 && j < 0x27; ++j )
    {
      if ( v3 << 31 )
      {
        v5 = *(void (__fastcall **)(unsigned int))(4 * j + 0x200042D8);
        if ( v5 )
          v5(j);
      }
      v3 >>= 1;
    }
    result = *(_DWORD *)(4 * i + 0x20003AD4) + 64;
    *(_DWORD *)(*(_DWORD *)(4 * i + 0x20003AD4) + 84) = v1;
  }
  return result;
}

//----- (00003DFC) --------------------------------------------------------
_BYTE *__fastcall sub_3DFC(char *a1, unsigned int a2, char *a3, unsigned int a4, _BYTE *a5, unsigned int a6)
{
  unsigned int v7; // r6
  char *v9; // r5
  _BYTE *v10; // r4

  v7 = a2 + a4;
  v9 = (char *)sub_F2C(a2 + a4);
  sub_141A(v9, a1, a2);
  sub_141A(&v9[a2], a3, a4);
  v10 = sub_11AD4(v9, v7, a5, a6);
  sub_F8E((int)v9);
  return v10;
}

//----- (00003EC8) --------------------------------------------------------
int sub_3EC8()
{
  int v0; // r4
  int result; // r0

  v0 = MEMORY[0x5000700C];
  result = 536886004;
  if ( MEMORY[0x20003AF4] )
    result = MEMORY[0x20003AF4](MEMORY[0x5000700C]);
  MEMORY[0x5000700C] = v0;
  return result;
}
// 20003AF4: using guessed type int (__fastcall *)(_DWORD);

//----- (00003F28) --------------------------------------------------------
int __fastcall sub_3F28(char *a1, int a2, int a3)
{
  unsigned int v5; // r3
  unsigned int v7[29]; // [sp+0h] [bp-74h] BYREF

  sub_4004(v7);
  sub_4050(v7, a1, v5);
  return sub_3F4E((int)v7, a3);
}
// 3F3E: variable 'v5' is possibly undefined

//----- (00003F4E) --------------------------------------------------------
int __fastcall sub_3F4E(int a1, int a2)
{
  int result; // r0
  int v5; // r5
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r2
  int v11; // r1
  _BYTE *v12; // r2

  result = *(_DWORD *)(a1 + 40);
  if ( (unsigned int)result < 0x40 )
  {
    *(_QWORD *)a1 += (unsigned int)(8 * result);
    v5 = a1 + 44;
    *(_DWORD *)(a1 + 40) = result + 1;
    *(_BYTE *)(result + a1 + 44) = 0x80;
    if ( *(_DWORD *)(a1 + 40) > 0x38u )
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(a1 + 40);
        if ( v6 >= 0x40 )
          break;
        *(_DWORD *)(a1 + 40) = v6 + 1;
        *(_BYTE *)(v6 + v5) = 0;
      }
      sub_4170(a1, a1 + 44);
      *(_DWORD *)(a1 + 40) = 0;
      goto LABEL_7;
    }
    while ( *(_DWORD *)(a1 + 40) < 0x38u )
    {
LABEL_7:
      v7 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = v7 + 1;
      *(_BYTE *)(v7 + v5) = 0;
    }
    v8 = *(_DWORD *)(a1 + 4);
    *(_BYTE *)(a1 + 100) = HIBYTE(v8);
    *(_BYTE *)(a1 + 101) = BYTE2(v8);
    *(_BYTE *)(a1 + 102) = BYTE1(v8);
    *(_BYTE *)(a1 + 103) = v8;
    v9 = *(_DWORD *)a1;
    *(_BYTE *)(a1 + 104) = HIBYTE(*(_DWORD *)a1);
    *(_BYTE *)(a1 + 105) = BYTE2(v9);
    *(_BYTE *)(a1 + 106) = BYTE1(v9);
    *(_BYTE *)(a1 + 107) = *(_BYTE *)a1;
    sub_4170(a1, a1 + 44);
    result = 0;
    do
    {
      v10 = 4 * result;
      v11 = 4 * result++ + a1;
      *(_BYTE *)(a2 + v10) = HIBYTE(*(_DWORD *)(v11 + 8));
      v12 = (_BYTE *)(v10 + a2);
      v12[1] = BYTE2(*(_DWORD *)(v11 + 8));
      v12[2] = HIBYTE(*(_WORD *)(v11 + 8));
      v12[3] = *(_BYTE *)(v11 + 8);
    }
    while ( result < 8 );
  }
  return result;
}

//----- (00004004) --------------------------------------------------------
_DWORD *__fastcall sub_4004(_DWORD *a1)
{
  _DWORD *result; // r0

  a1[10] = 0;
  *a1 = 0;
  a1[1] = 0;
  result = a1 + 2;
  *result = 1779033703;
  result[1] = -1150833019;
  result[2] = 1013904242;
  result[3] = -1521486534;
  result[4] = 1359893119;
  result[5] = -1694144372;
  result[6] = 528734635;
  result[7] = 1541459225;
  return result;
}

//----- (00004050) --------------------------------------------------------
_DWORD *__fastcall sub_4050(unsigned int *a1, char *a2, unsigned int a3)
{
  unsigned int v5; // r1
  _DWORD *result; // r0
  unsigned int v8; // r0
  unsigned int v9; // r6
  unsigned int v10; // r0
  unsigned int v11; // kr00_4
  int v12; // [sp+0h] [bp-4h]

  v5 = a1[10];
  result = a1 + 11;
  v12 = (int)result;
  if ( v5 <= 0x40 )
  {
    while ( a3 )
    {
      v8 = a1[10];
      if ( v8 || a3 < 0x40 )
      {
        v9 = 64 - v8;
        if ( 64 - v8 > a3 )
          v9 = a3;
        sub_141A((_BYTE *)(v8 + v12), a2, v9);
        a2 += v9;
        result = (_DWORD *)(a1[10] + v9);
        a3 -= v9;
        a1[10] = (unsigned int)result;
        if ( result == (_DWORD *)&byte_1[63] )
        {
          sub_4170((int)a1, v12);
          v10 = a1[1];
          v11 = *a1;
          a1[10] = 0;
          result = (_DWORD *)((__PAIR64__(v10, v11) + 512) >> 32);
          *(_QWORD *)a1 = __PAIR64__((unsigned int)result, v11 + 512);
        }
      }
      else
      {
        sub_4170((int)a1, (int)a2);
        result = (_DWORD *)((unsigned __int64)(*(_QWORD *)a1 + 512LL) >> 32);
        a3 -= 64;
        *a1 += 512;
        a2 += 64;
        a1[1] = (unsigned int)result;
      }
    }
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (00004170) --------------------------------------------------------
int __fastcall sub_4170(int a1, int a2)
{
  int i; // r0
  int v4; // r1
  int v5; // r3
  int j; // r5
  int v7; // r7
  unsigned __int8 *v8; // r6
  int k; // r0
  int v10; // r12
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int v15; // r2
  int v16; // r1
  int v17; // r5
  int result; // r0
  int v19; // r3
  int v20; // r2
  int v21; // [sp+0h] [bp-12Ch]
  int v22; // [sp+4h] [bp-128h]
  int v23; // [sp+8h] [bp-124h]
  int v24; // [sp+Ch] [bp-120h]
  int v25; // [sp+10h] [bp-11Ch]
  int v26; // [sp+14h] [bp-118h]
  int v27; // [sp+18h] [bp-114h]
  int v28; // [sp+1Ch] [bp-110h]
  _DWORD v29[65]; // [sp+20h] [bp-10Ch] BYREF
  int v30; // [sp+124h] [bp-8h]
  int v31; // [sp+128h] [bp-4h]

  v30 = a1;
  v31 = a2;
  for ( i = 0; i < 8; ++i )
  {
    v4 = 4 * i;
    v5 = *(_DWORD *)(4 * i + a1 + 8);
    *(int *)((char *)&v21 + v4) = v5;
  }
  for ( j = 0; j < 16; ++j )
  {
    v7 = j;
    v8 = (unsigned __int8 *)(4 * j + v31);
    v29[v7] = (bswap32(sub_1584(v8)) >> 8 << 8) | v8[3];
  }
  for ( k = 16; k < 64; ++k )
  {
    v10 = k;
    v11 = (__ROR4__(v29[k - 2], 17) ^ __ROR4__(v29[k - 2], 19) ^ (v29[k - 2] >> 10))
        + (__ROR4__(v29[k - 15], 18) ^ __ROR4__(v29[k - 15], 7) ^ (v29[k - 15] >> 3));
    v12 = v29[k - 16];
    v13 = v29[k - 7];
    v29[v10] = v11 + v13 + v12;
  }
  v14 = 0;
  do
  {
    v15 = (__ROR4__(v25, 6) ^ __ROR4__(v25, 11) ^ __ROR4__(v25, 25))
        + ((v26 ^ v27) & v25 ^ v27)
        + v28
        + *(_DWORD *)(4 * v14 + 0x10014DE8)
        + v29[v14];
    v16 = v15 + ((v21 | v22) & v23 | v21 & v22) + (__ROR4__(v21, 2) ^ __ROR4__(v21, 13) ^ __ROR4__(v21, 22));
    v17 = v24 + v15;
    v28 = v27;
    v27 = v26;
    v26 = v25;
    v24 = v23;
    v23 = v22;
    ++v14;
    v25 = v17;
    v22 = v21;
    v21 = v16;
  }
  while ( v14 < 64 );
  for ( result = 0; result < 8; ++result )
  {
    v19 = 4 * result + a1;
    v20 = *(&v21 + result);
    *(_DWORD *)(v19 + 8) += v20;
  }
  return result;
}

//----- (000042A0) --------------------------------------------------------
int (*sub_42A0())(void)
{
  int v0; // r0
  int v1; // r4
  int (*result)(void); // r0

  v0 = MEMORY[0x20003B34];
  v1 = (unsigned __int8)*MEMORY[0x20003B34];
  *MEMORY[0x20003B34] = v1;
  if ( (v1 & 0x10) != 0 && MEMORY[0x20003B4C] && !(*(unsigned __int8 *)(v0 + 3) << 31) )
  {
    do
      MEMORY[0x20003B4C](*(unsigned __int8 *)(MEMORY[0x20003B34] + 4));
    while ( !(*(unsigned __int8 *)(MEMORY[0x20003B34] + 3) << 31) );
  }
  result = (int (*)(void))(v1 << 26);
  if ( (v1 & 0x20) != 0 )
  {
    result = MEMORY[0x20003B54];
    if ( MEMORY[0x20003B54] )
      return (int (*)(void))MEMORY[0x20003B54]();
  }
  return result;
}
// 20003B4C: using guessed type int (__fastcall *)(_DWORD);
// 20003B54: using guessed type int (*)(void);

//----- (000042E8) --------------------------------------------------------
int (*sub_42E8())(void)
{
  int v0; // r0
  int v1; // r4
  int (*result)(void); // r0

  v0 = MEMORY[0x20003B38];
  v1 = (unsigned __int8)*MEMORY[0x20003B38];
  *MEMORY[0x20003B38] = v1;
  if ( (v1 & 0x10) != 0 && MEMORY[0x20003B50] && !(*(unsigned __int8 *)(v0 + 3) << 31) )
  {
    do
      MEMORY[0x20003B50](*(unsigned __int8 *)(MEMORY[0x20003B38] + 4));
    while ( !(*(unsigned __int8 *)(MEMORY[0x20003B38] + 3) << 31) );
  }
  result = (int (*)(void))(v1 << 26);
  if ( (v1 & 0x20) != 0 )
  {
    result = MEMORY[0x20003B58];
    if ( MEMORY[0x20003B58] )
      return (int (*)(void))MEMORY[0x20003B58]();
  }
  return result;
}
// 20003B50: using guessed type int (__fastcall *)(_DWORD);
// 20003B58: using guessed type int (*)(void);

//----- (00004330) --------------------------------------------------------
int sub_4330()
{
  int v0; // r6
  int v1; // r7
  int result; // r0
  int v3; // [sp+0h] [bp-14h]
  int v4; // [sp+4h] [bp-10h]
  int v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]
  int v7; // [sp+10h] [bp-4h]

  v0 = sub_12260();
  v1 = sub_12294();
  v6 = sub_12308();
  v5 = sub_12380();
  v4 = sub_123F8();
  v3 = sub_12470();
  v7 = sub_124B0();
  if ( sub_12544() )
  {
    if ( !sub_12534() )
    {
      sub_13924(1);
      MEMORY[0x20003FF2] = 1;
    }
    sub_13314(1);
  }
  if ( v0 | v1 | v6 | v5 | v4 || v3 )
  {
    if ( v7 )
    {
LABEL_8:
      sub_12144(0);
      result = sub_120B4();
      MEMORY[0x20003FF0] = 1;
      return result;
    }
    if ( (v1 & 4) != 0 )
    {
      result = sub_12104();
      MEMORY[0x20003FF1] = 1;
    }
    else if ( (v1 & 2) != 0 )
    {
      result = sub_120F0();
      MEMORY[0x20003FF3] = 1;
    }
    else
    {
      if ( (v1 & 8) != 0 )
      {
        sub_120C8();
        MEMORY[0x20003FF4] = 1;
      }
      if ( v1 << 31 )
      {
        sub_120DC();
        MEMORY[0x20003FF5] = 1;
      }
      if ( v0 << 31 )
      {
        if ( !MEMORY[0x200035F0] )
        {
          MEMORY[0x200035F0] = 1;
          sub_3B48(4);
        }
        sub_132E0(1);
        MEMORY[0x20003FF6] = 1;
      }
      if ( (v0 & 2) != 0 )
      {
        if ( !MEMORY[0x200035F0] )
        {
          MEMORY[0x200035F0] = 1;
          sub_3B48(4);
        }
        sub_13014(1);
        MEMORY[0x20003FF7] = 1;
      }
      if ( (v0 & 4) != 0 )
      {
        sub_13050(1);
        MEMORY[0x20003FF8] = 1;
      }
      if ( (v6 & 4) != 0 )
      {
        sub_12034();
        sub_130D0(1);
        sub_1365C(0);
      }
      if ( (v5 & 4) != 0 )
      {
        sub_12058();
        sub_13150(1);
        sub_13710(0);
      }
      if ( (v4 & 4) != 0 )
      {
        sub_1207C();
        sub_131D0(1);
        sub_137C4(0);
      }
      if ( (v3 & 4) != 0 )
      {
        sub_120A0();
        sub_13250(1);
        sub_13848(0);
      }
      if ( (v6 & 0xB) != 0 )
      {
        if ( !MEMORY[0x200035F0] )
        {
          MEMORY[0x200035F0] = 1;
          sub_3B48(4);
        }
        MEMORY[0x200036BC] = sub_124C0();
        sub_12024(MEMORY[0x200036BC]);
        sub_13068(1);
        if ( sub_122D0() == 1 )
          MEMORY[0x20003FFB] = 1;
        else
          MEMORY[0x20003FFF] = 1;
      }
      if ( (v5 & 0xB) != 0 )
      {
        if ( !MEMORY[0x200035F0] )
        {
          MEMORY[0x200035F0] = 1;
          sub_3B48(4);
        }
        MEMORY[0x200036C0] = sub_124D0();
        sub_12048(MEMORY[0x200036C0]);
        sub_130E8(1);
        if ( sub_12348() == 1 )
          MEMORY[0x20003FFC] = 1;
        else
          MEMORY[0x20004000] = 1;
      }
      if ( (v4 & 0xB) != 0 )
      {
        if ( !MEMORY[0x200035F0] )
        {
          MEMORY[0x200035F0] = 1;
          sub_3B48(4);
        }
        MEMORY[0x200036C4] = sub_124E0();
        sub_1206C(MEMORY[0x200036C4]);
        sub_13168(1);
        if ( sub_123C0() == 1 )
          MEMORY[0x20003FFD] = 1;
        else
          MEMORY[0x20004001] = 1;
      }
      if ( (v3 & 0xB) != 0 )
      {
        if ( !MEMORY[0x200035F0] )
        {
          MEMORY[0x200035F0] = 1;
          sub_3B48(4);
        }
        MEMORY[0x200036C8] = sub_124F0();
        sub_12090(MEMORY[0x200036C8]);
        sub_131E8(1);
        if ( sub_12438() == 1 )
          MEMORY[0x20003FFE] = 1;
        else
          MEMORY[0x20004002] = 1;
      }
      if ( (v0 & 8) != 0 )
      {
        sub_12FD8(1);
        MEMORY[0x20003FFA] = 1;
      }
      result = v0 << 24;
      if ( (v0 & 0x80) != 0 )
      {
        result = sub_12010();
        MEMORY[0x20003FF9] = 1;
      }
    }
  }
  else
  {
    result = v7;
    if ( v7 )
      goto LABEL_8;
  }
  return result;
}

//----- (00004598) --------------------------------------------------------
int sub_4598()
{
  int result; // r0

  if ( MEMORY[0x20003B5C] )
    MEMORY[0x20003B5C]();
  result = 1342210048;
  if ( MEMORY[0x50008010] )
  {
    MEMORY[0x50008020] = 1;
    while ( MEMORY[0x50008010] )
      ;
  }
  MEMORY[0x50008004] = 1;
  return result;
}
// 20003B5C: using guessed type int (*)(void);

//----- (000045C8) --------------------------------------------------------
int __fastcall sub_45C8(int a1)
{
  return sub_F7D0(a1);
}

//----- (000045D0) --------------------------------------------------------
int __fastcall sub_45D0(int a1)
{
  return sub_F7F8(a1);
}

//----- (000045D8) --------------------------------------------------------
int __fastcall sub_45D8(int a1)
{
  return sub_F81E(a1);
}

//----- (000045E0) --------------------------------------------------------
int __fastcall sub_45E0(char *a1)
{
  int v1; // r1

  v1 = (unsigned __int8)*a1;
  if ( !*a1 )
    return sub_FAC4(a1 + 1);
  if ( v1 == 1 )
    return sub_FB3C(a1 + 1);
  if ( v1 == 2 )
    return sub_FA48(a1 + 1);
  return 0;
}

//----- (0000460C) --------------------------------------------------------
char *__fastcall sub_460C(char *result)
{
  int v1; // r2
  char *v2; // r4
  _BYTE *v3; // r0
  _BYTE *v4; // r0
  _BYTE *v5; // r0

  v1 = (unsigned __int8)*result;
  v2 = result;
  if ( *result )
  {
    if ( v1 == 1 )
    {
      v5 = (_BYTE *)sub_A860();
      sub_141A(v5, v2, 0xFu);
      return (char *)sub_A98C(7, 0, 15);
    }
    else if ( v1 == 2 )
    {
      v3 = (_BYTE *)sub_A860();
      sub_141A(v3, v2, 0x18u);
      return (char *)sub_A98C(7, 0, 24);
    }
  }
  else
  {
    v4 = (_BYTE *)sub_A860();
    sub_472E(v4, v2);
    return (char *)sub_A98C(7, 0, 6);
  }
  return result;
}

//----- (00004664) --------------------------------------------------------
int __fastcall sub_4664(int result, unsigned __int8 *a2)
{
  int v2; // r1
  _BYTE *v3; // r0
  _BYTE *v4; // r0
  _BYTE *v5; // r0

  v2 = *a2;
  if ( !result )
  {
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        v5 = (_BYTE *)sub_A860();
        *v5 = 1;
        sub_45D8((int)(v5 + 1));
        return sub_A98C(7, 0, 15);
      }
      else if ( v2 == 2 )
      {
        v3 = (_BYTE *)sub_A860();
        *v3 = 2;
        sub_45C8((int)(v3 + 1));
        return sub_A98C(7, 0, 24);
      }
    }
    else
    {
      v4 = (_BYTE *)sub_A860();
      *v4 = 0;
      sub_45D0((int)(v4 + 1));
      return sub_A98C(7, 0, 6);
    }
  }
  return result;
}

//----- (000046C6) --------------------------------------------------------
int __fastcall sub_46C6(char *a1)
{
  return sub_A98C(8, *a1, 1);
}

//----- (000046D4) --------------------------------------------------------
int __fastcall sub_46D4(unsigned int a1, unsigned int a2)
{
  return (unsigned __int16)a1 * (unsigned __int16)a2
       + ((HIWORD(a1) * (unsigned __int16)a2) << 16)
       + (((unsigned __int16)a1 * HIWORD(a2)) << 16);
}

//----- (00004706) --------------------------------------------------------
_BYTE *__fastcall sub_4706(_BYTE *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  return result;
}

//----- (00004718) --------------------------------------------------------
_BYTE *__fastcall sub_4718(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  return result;
}

//----- (0000472E) --------------------------------------------------------
_BYTE *__fastcall sub_472E(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  return result;
}

//----- (00004748) --------------------------------------------------------
_BYTE *__fastcall sub_4748(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  return result;
}

//----- (0000476A) --------------------------------------------------------
int __fastcall _rt_switch8(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // lr
  unsigned int v5; // r5

  v5 = *(unsigned __int8 *)(v4 - 1);
  if ( a4 < v5 )
    v5 = a4;
  return ((int (*)(void))(v4 + 2 * *(unsigned __int8 *)(v4 + v5)))();
}
// 476E: variable 'v4' is possibly undefined

//----- (00004784) --------------------------------------------------------
int __fastcall sub_4784(int a1, int a2)
{
  unsigned int v2; // r1
  int result; // r0

  v2 = 2 * a2;
  result = (v2 << 11) | a1;
  if ( result )
    result = 4;
  if ( v2 >> 21 )
    result |= 1u;
  if ( v2 >> 21 == 2047 )
    result |= 2u;
  if ( result == 1 )
    return 5;
  return result;
}

//----- (000047B0) --------------------------------------------------------
unsigned int __fastcall sub_47B0(unsigned int a1)
{
  unsigned int result; // r0

  if ( MEMORY[0x20003EB0] )
    result = sub_4AD4(a1);
  else
    result = sub_49BC(a1);
  MEMORY[0x20003EC6] = 0;
  return result;
}

//----- (000047F8) --------------------------------------------------------
int __fastcall sub_47F8(int a1, int a2)
{
  int v2; // r6
  _BYTE *v3; // r5
  int result; // r0
  unsigned int v8[3]; // [sp+0h] [bp-Ch] BYREF

  v2 = 0;
  if ( !a2 )
    return 0;
  v3 = (_BYTE *)(a1 + 1);
  switch ( *(_BYTE *)a1 )
  {
    case 0:
      goto LABEL_17;
    case 1:
      v2 = 0;
      v8[0] = 0;
      v8[1] = 0;
      if ( a2 != 8 )
      {
        MEMORY[0x200035F2] = 0;
LABEL_6:
        v2 = 1;
        goto LABEL_18;
      }
      if ( sub_13B4((unsigned int *)(a1 + 2), v8, 6u) )
      {
        MEMORY[0x200035F2] = *(_BYTE *)(a1 + 1);
        v2 = 1;
      }
      else if ( *(unsigned __int8 *)(a1 + 1) != MEMORY[0x200035F2] )
      {
        MEMORY[0x200035F2] = *(_BYTE *)(a1 + 1);
        goto LABEL_6;
      }
LABEL_18:
      result = v2;
      break;
    case 2:
      if ( !sub_13B4((unsigned int *)(a1 + 1), (unsigned int *)0x200036D0, 8u) )
        goto LABEL_19;
      sub_4748((_BYTE *)0x200036D0, v3);
      v2 = 1;
      goto LABEL_18;
    case 4:
      if ( !sub_13B4((unsigned int *)(a1 + 1), (unsigned int *)0x200035F8, 2u) )
        goto LABEL_19;
      MEMORY[0x200035F8] = *(_BYTE *)(a1 + 1);
      MEMORY[0x200035F9] = *(_BYTE *)(a1 + 2);
      goto LABEL_17;
    case 5:
      if ( sub_13B4((unsigned int *)(a1 + 1), (unsigned int *)0x200035F1, 1u) )
      {
        MEMORY[0x200035F1] = *(_BYTE *)(a1 + 1);
LABEL_17:
        v2 = 1;
      }
      else
      {
LABEL_19:
        v2 = 0;
      }
      goto LABEL_18;
    default:
      goto LABEL_18;
  }
  return result;
}

//----- (000048BC) --------------------------------------------------------
int sub_48BC()
{
  int v0; // r0

  v0 = sub_121F0(0, 0);
  if ( v0 )
  {
    if ( v0 < 0 )
      return 0;
  }
  else
  {
    sub_13F70(2u);
  }
  return 1;
}

//----- (000048DA) --------------------------------------------------------
void __fastcall sub_48DA(int a1)
{
  sub_FF60(a1);
}

//----- (000048E2) --------------------------------------------------------
void __fastcall sub_48E2(int a1)
{
  sub_FF60(a1);
}

//----- (000048EC) --------------------------------------------------------
int sub_48EC()
{
  int v0; // r0
  unsigned int v1; // r2
  int v2; // r0
  unsigned int v3; // r2
  int v4; // r0

  v0 = sub_12158(0, 0);
  if ( v0 < 0 )
    return 0;
  if ( v0 <= 0 )
  {
    v3 = MEMORY[0x2000374A] - v0;
    v4 = 1;
    if ( v3 > 1 )
    {
      while ( *(unsigned __int8 *)(v4 + 536887494) - *(unsigned __int8 *)(v4 + 536887493) == 1 )
      {
        if ( ++v4 >= v3 )
          goto LABEL_11;
      }
      return 0;
    }
LABEL_11:
    sub_13F70(4u);
  }
  else
  {
    v1 = MEMORY[0x2000374A] - v0;
    v2 = 1;
    if ( v1 > 1 )
    {
      while ( *(unsigned __int8 *)(v2 + 536887494) - *(unsigned __int8 *)(v2 + 536887493) == 1 )
      {
        if ( ++v2 >= v1 )
          goto LABEL_6;
      }
      return 0;
    }
LABEL_6:
    sub_121B4();
  }
  return 1;
}

//----- (00004958) --------------------------------------------------------
int sub_4958()
{
  char v1[4]; // [sp+4h] [bp-4h] BYREF

  v1[0] = 48;
  if ( MEMORY[0x20003D94] )
  {
    if ( MEMORY[0x20003D94] == 1 )
    {
      MEMORY[0x20003D94] = 0;
      return 0;
    }
    return 1;
  }
  if ( MEMORY[0x20003D85] )
  {
    v1[0] = 0;
  }
  else if ( MEMORY[0x20003D84] )
  {
    v1[0] = -16;
  }
  if ( sub_AF4C(100, 8, 1, (int)v1, 100) )
  {
    MEMORY[0x20003D94] = 1;
    return 1;
  }
  return -1;
}

//----- (000049BC) --------------------------------------------------------
unsigned int __fastcall sub_49BC(unsigned int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r3
  unsigned int v4; // r1
  unsigned int v5; // r6
  int v6; // r1

  v2 = 0;
  v3 = 0;
  v4 = a1;
  *(_WORD *)(2 * a1 + 0x20004BD8) = MEMORY[0x20003EC6];
  do
  {
    if ( v2 != a1 )
    {
      v5 = *(unsigned __int16 *)(2 * v2 + 0x20004BD8);
      if ( v5 > v3 )
      {
        v3 = (unsigned __int8)v5;
        v4 = v2;
      }
    }
    v2 = (unsigned __int8)(v2 + 1);
  }
  while ( v2 < 0xC );
  if ( v4 == a1 || v3 < MEMORY[0x20003ECE] )
  {
    sub_15AA(a1 + 1, 0xCu);
    MEMORY[0x20003EC1] = 0;
    return v6;
  }
  else
  {
    MEMORY[0x20003EC1] = 1;
    return v4;
  }
}
// 49FA: variable 'v6' is possibly undefined

//----- (00004A14) --------------------------------------------------------
int sub_4A14()
{
  int result; // r0

  result = MEMORY[0x20003EB8];
  if ( MEMORY[0x20003EB1] )
  {
    if ( MEMORY[0x20003EB8] )
    {
      if ( MEMORY[0x20003EB8] == 1 )
      {
        result = 10;
        goto LABEL_15;
      }
LABEL_9:
      result = 3;
    }
  }
  else
  {
    if ( MEMORY[0x20003EB7] )
    {
      if ( !MEMORY[0x20003EB8] )
        goto LABEL_15;
      if ( MEMORY[0x20003EB8] != 1 )
      {
        result = 9;
        goto LABEL_15;
      }
      goto LABEL_9;
    }
    result = MEMORY[0x20003EBA];
    if ( MEMORY[0x20003EBA] )
    {
      if ( MEMORY[0x20003EBA] == 1 )
      {
        result = 3;
      }
      else if ( MEMORY[0x20003EBA] == 2 )
      {
        result = 9;
      }
      else
      {
        result = (unsigned __int8)(MEMORY[0x20003EBA] - 3);
      }
    }
    MEMORY[0x20003EB9] = 0;
  }
LABEL_15:
  MEMORY[0x20003EC4] = 0;
  MEMORY[0x20003EB7] = 0;
  MEMORY[0x20003EC6] = 0;
  return result;
}

//----- (00004A6C) --------------------------------------------------------
void sub_4A6C()
{
  int v0; // r1
  int v1; // r1

  if ( !MEMORY[0x20003EB1] )
  {
    if ( MEMORY[0x20003EB9] || MEMORY[0x20003EC4] >= 0x96u )
    {
      MEMORY[0x20003EC4] = 0;
      MEMORY[0x20003EB9] = 1;
      sub_F9CE();
      sub_15AA(MEMORY[0x20003EBA] + 1, 0xFu);
      MEMORY[0x20003EBA] = v0;
      sub_F980(*(unsigned __int8 *)(v0 + 536886995));
      return;
    }
    ++MEMORY[0x20003EC4];
  }
  MEMORY[0x20003EB7] = 1;
  sub_F9CE();
  sub_15AA(MEMORY[0x20003EB8] + 1, 3u);
  MEMORY[0x20003EB8] = v1;
  sub_F980(*(unsigned __int8 *)(v1 + 536886992));
  MEMORY[0x20003EC6] = 0;
}
// 4A9C: variable 'v0' is possibly undefined
// 4AC0: variable 'v1' is possibly undefined

//----- (00004AD4) --------------------------------------------------------
unsigned int __fastcall sub_4AD4(unsigned int a1)
{
  unsigned int v2; // r0
  __int16 v3; // r6
  unsigned int v4; // r3
  unsigned int v5; // r1
  unsigned int v6; // r7
  unsigned int v7; // r6
  int v8; // r1

  v2 = 0;
  v3 = MEMORY[0x20003EC6];
  v4 = 0;
  v5 = a1;
  if ( MEMORY[0x20003EAE] != a1 )
    goto LABEL_5;
  v6 = *(unsigned __int16 *)(2 * a1 + 0x20004BD8) + MEMORY[0x20003EC6];
  if ( v6 < MEMORY[0x20003EC6] )
  {
    v3 = -1;
LABEL_5:
    *(_WORD *)(2 * a1 + 0x20004BD8) = v3;
    goto LABEL_6;
  }
  *(_WORD *)(2 * a1 + 0x20004BD8) = v6;
LABEL_6:
  MEMORY[0x20003EAE] = a1;
  do
  {
    if ( v2 != a1 )
    {
      v7 = *(unsigned __int16 *)(2 * v2 + 0x20004BD8);
      if ( v7 > v4 )
      {
        v4 = (unsigned __int8)v7;
        v5 = v2;
      }
    }
    v2 = (unsigned __int8)(v2 + 1);
  }
  while ( v2 < 0xC );
  if ( v5 == a1 || v4 < MEMORY[0x20003ECE] )
  {
    sub_15AA(a1 + 1, 0xCu);
    MEMORY[0x20003EC1] = 0;
    return v8;
  }
  else
  {
    MEMORY[0x20003EC1] = 1;
    return v5;
  }
}
// 4B30: variable 'v8' is possibly undefined

//----- (00004B48) --------------------------------------------------------
int __fastcall build_runtime_transport_reply_frame(char a1, int a2, int a3)
{
  int v3; // r3

  v3 = MEMORY[0x20003B80];
  *MEMORY[0x20003B80] = 14;
  *(_BYTE *)(v3 + 1) = a3 + 1;
  *(_BYTE *)(v3 + 2) = a1;
  return sub_141A(v3 + 3, a2, a3);
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (00004B64) --------------------------------------------------------
int __fastcall build_checksum_guarded_frame(char opcode, int payload, unsigned int payload_len)
{
  char v3; // r4
  char v4; // r5
  unsigned int i; // r3
  char v6; // r0
  unsigned int v7; // r2
  int v9; // [sp+0h] [bp-10h] BYREF
  _DWORD v10[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = 0;
  v4 = payload_len;
  v9 = 16394;
  memset(v10, 0, sizeof(v10));
  BYTE2(v9) = opcode;
  if ( payload )
  {
    for ( i = 0; i < payload_len; v3 = v6 )
    {
      v6 = *(_BYTE *)(payload + i) + v3;
      i = (unsigned __int8)(i + 1);
    }
    sub_141A(v10, payload, payload_len);
  }
  v7 = (unsigned __int8)(v4 + 4);
  HIBYTE(v9) = v3;
  if ( v7 > 0xF )
    v7 = 15;
  MEMORY[0x20003DFC] = v7;
  return sub_141A(536890048, &v9, v7);
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (00004BC8) --------------------------------------------------------
_BYTE *__fastcall sub_4BC8(char a1, char *a2, unsigned int a3)
{
  unsigned __int8 v3; // r0
  int v4; // r1
  char v5; // r5
  unsigned int v6; // r6
  unsigned int i; // r6
  int v8; // r4
  int v9; // r4
  unsigned int v10; // r0
  char v11; // r1
  signed int v12; // r7
  signed int j; // r0
  char v14; // r1
  unsigned int v15; // r4
  unsigned int v17; // [sp+0h] [bp-14h]

  sub_15AA(a3, 0xFu);
  if ( v4 )
    ++v3;
  v5 = 0;
  v17 = v3;
  v6 = 0;
  sub_157C((_WORD *)0x20003DFD, 0x64u);
  if ( v17 <= 1 )
  {
    MEMORY[0x20003DFD] = 11;
    MEMORY[0x20003DFE] = 64;
    MEMORY[0x20003DFF] = a1;
    if ( a2 )
    {
      sub_157C((_WORD *)0x20003E02, 0xFu);
      sub_141A((_BYTE *)0x20003E02, a2, a3);
      if ( a3 )
      {
        do
        {
          v5 += *(_BYTE *)(v6 + 536886786);
          v6 = (unsigned __int8)(v6 + 1);
        }
        while ( v6 < a3 );
      }
    }
    MEMORY[0x20003E01] = a3;
    MEMORY[0x20003E00] = v5;
  }
  else
  {
    for ( i = 0; i < v17; i = (unsigned __int8)(i + 1) )
    {
      *(_BYTE *)(20 * i + 0x20003DFD) = 11;
      v8 = 20 * i + 536886781;
      *(_BYTE *)(v8 + 1) = 64;
      *(_BYTE *)(v8 + 2) = a1;
      v9 = 20 * i + 536886782;
      if ( (int)i >= (int)(v17 - 1) )
      {
        sub_157C((_WORD *)(20 * i + 536886786), 0xFu);
        v12 = a3 - 15 * i;
        sub_141A((_BYTE *)(20 * i + 536886786), &a2[15 * i], v12);
        for ( j = 0; v12 > j; v5 = v14 )
        {
          v14 = *(_BYTE *)(v9 + j + 4) + v5;
          j = (unsigned __int8)(j + 1);
        }
        *(_BYTE *)(20 * i + 0x20003E01) = v12;
      }
      else
      {
        sub_157C((_WORD *)(20 * i + 536886786), 0xFu);
        sub_141A((_BYTE *)(20 * i + 536886786), &a2[15 * i], 0xFu);
        v10 = 0;
        do
        {
          v11 = *(_BYTE *)(v9 + v10 + 4) + v5;
          v10 = (unsigned __int8)(v10 + 1);
          v5 = v11;
        }
        while ( v10 < 0xF );
        *(_BYTE *)(20 * i + 0x20003E01) = 15;
      }
      *(_BYTE *)(20 * i + 0x20003E00) = v5;
      v5 = 0;
    }
  }
  v15 = (unsigned __int8)(5 * v17 + a3);
  sub_157C((_WORD *)0x20004B0A, 0x64u);
  MEMORY[0x20003E61] = 0;
  if ( v15 > 0x64 )
    v15 = 100;
  MEMORY[0x20003E61] = v15;
  return sub_141A((_BYTE *)0x20004B0A, (char *)0x20003DFD, v15);
}
// 4BD6: variable 'v4' is possibly undefined
// 4BD8: variable 'v3' is possibly undefined

//----- (00004D0C) --------------------------------------------------------
_BYTE *__fastcall sub_4D0C(char a1, char *a2, unsigned int a3)
{
  char v3; // r4
  unsigned int i; // r0
  char v7; // r1
  _DWORD v9[5]; // [sp+0h] [bp-14h] BYREF

  v3 = 0;
  v9[0] = 32779;
  memset(&v9[1], 0, 16);
  BYTE2(v9[0]) = a1;
  if ( a2 )
  {
    sub_141A((_BYTE *)&v9[1] + 1, a2, a3);
    for ( i = 0; i < a3; v3 = v7 )
    {
      v7 = a2[i] + v3;
      i = (unsigned __int8)(i + 1);
    }
  }
  HIBYTE(v9[0]) = v3;
  LOBYTE(v9[1]) = a3;
  return sub_C6D8((char *)v9, (unsigned __int8)(a3 + 5));
}

//----- (00004D64) --------------------------------------------------------
int __fastcall sub_4D64(char a1, int a2, char a3)
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 0x80;
  MEMORY[0x200039CE] = a1;
  if ( a2 )
    sub_141A(536885711, a2, a3);
  MEMORY[0x200039B8] = a3 + 3;
  return 536885688;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (00004D94) --------------------------------------------------------
int __fastcall build_vendor_reply_buffer(char reply_type, int payload, char payload_len)
{
  MEMORY[0x200039ED] = 4;                       // Builds a small vendor reply in the 0x200039EC buffer: fixed header bytes (0x04, 0x80), reply type, optional payload copy, then total length = payload_len + 3.
  MEMORY[0x200039EE] = 0x80;
  MEMORY[0x200039EF] = reply_type;
  if ( payload )
    sub_141A(536885744, payload, payload_len);
  MEMORY[0x200039EC] = payload_len + 3;
  return 536885740;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (00004DC4) --------------------------------------------------------
int __fastcall sub_4DC4(char a1, char *a2, char a3)
{
  MEMORY[0x20003A32] = 4;
  MEMORY[0x20003A33] = 0x80;
  MEMORY[0x20003A34] = a1;
  if ( a2 )
    sub_141A((_BYTE *)0x20003A35, a2, a3);
  MEMORY[0x20003A31] = a3 + 3;
  return 536885809;
}

//----- (00004DF4) --------------------------------------------------------
int __fastcall sub_4DF4(char a1, char *a2, char a3)
{
  MEMORY[0x20003A7B] = 4;
  MEMORY[0x20003A7C] = 0x80;
  MEMORY[0x20003A7D] = a1;
  if ( a2 )
    sub_141A((_BYTE *)0x20003A7E, a2, a3);
  MEMORY[0x20003A7A] = a3 + 3;
  return 536885882;
}

//----- (00004E26) --------------------------------------------------------
int __fastcall sub_4E26(int a1, int a2, int a3)
{
  return drain_runtime_transport_queue(a1, a2, a3);
}

//----- (00004E32) --------------------------------------------------------
int sub_4E32()
{
  int v0; // r0
  __int64 v1; // r0
  int v2; // r2

  v0 = nullsub_4();
  v1 = sub_125E4(v0);
  return drain_runtime_transport_queue(v1, SHIDWORD(v1), v2);
}
// 4E3C: variable 'v2' is possibly undefined
// 7756: using guessed type int nullsub_4(void);
// 125E4: using guessed type __int64 __fastcall sub_125E4(_DWORD);

//----- (00004E64) --------------------------------------------------------
BOOL __fastcall sub_4E64(int a1)
{
  return (unsigned int)(a1 - 48) < 0xA;
}

//----- (00004E74) --------------------------------------------------------
int sub_4E74()
{
  sub_CFDC(0);
  MEMORY[0x20003D1B] = 2;
  return 2;
}
// CFDC: using guessed type int __fastcall sub_CFDC(_DWORD);

//----- (00004E88) --------------------------------------------------------
int sub_4E88()
{
  sub_CFDC(0);
  MEMORY[0x20003CDC] = 3;
  return 3;
}
// CFDC: using guessed type int __fastcall sub_CFDC(_DWORD);

//----- (00004E9C) --------------------------------------------------------
int sub_4E9C()
{
  sub_CFDC(0);
  MEMORY[0x20003CDC] = 5;
  return 5;
}
// CFDC: using guessed type int __fastcall sub_CFDC(_DWORD);

//----- (00004EB0) --------------------------------------------------------
int sub_4EB0()
{
  sub_3B48(6);
  return 5;
}

//----- (00004EBC) --------------------------------------------------------
// Processes a board-local 8-byte input event frame. Uses the event code at 0x20003D1D to drive hold handlers such as DPI-stage and system-mode switching, then either polls or enqueues the event toward the RAM transport path.
int __fastcall sub_4EBC(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v5; // r0
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a4;
  if ( sub_11F98(a1) )
  {
    sub_3B54();
    if ( sub_3B60(536886557, 8, 0) )
    {
      sub_CE58(1, MEMORY[0x20003D1D]);
      v4 = sub_CF74(1, MEMORY[0x20003D1D]);
      if ( sub_A27C(v4) )
      {
        handle_dpi_stage_hold_event(1, MEMORY[0x20003D1D]);
        sub_CCF0(1, MEMORY[0x20003D1D]);
        handle_system_mode_hold_event(1, MEMORY[0x20003D1D]);
      }
      if ( ramapi_transport_can_poll_channel(536885288, MEMORY[0x2000382C], MEMORY[0x2000382D]) )
      {
        v7 = 0;
        v5 = sub_3B78(&v7);
      }
      else
      {
        MEMORY[0x20003D1C] = 1;
        v5 = ramapi_transport_enqueue_frame(536885288, 536886556, 8);
      }
      sub_138C8(v5);
      return 8;
    }
    else
    {
      return 7;
    }
  }
  else
  {
    sub_3B48(6);
    return 5;
  }
}
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 3B54: using guessed type int sub_3B54(void);
// 3B60: using guessed type int __fastcall sub_3B60(_DWORD, _DWORD, _DWORD);
// 3B6C: using guessed type int __fastcall sub_3B6C(_DWORD, _DWORD, _DWORD);
// 3B78: using guessed type int __fastcall sub_3B78(_DWORD);
// 3B84: using guessed type int __fastcall sub_3B84(_DWORD, _DWORD, _DWORD);
// A27C: using guessed type int __fastcall sub_A27C(_DWORD);
// CE58: using guessed type int __fastcall sub_CE58(_DWORD, _DWORD);
// CED4: using guessed type int __fastcall sub_CED4(_DWORD, _DWORD);
// CF74: using guessed type int __fastcall sub_CF74(_DWORD, _DWORD);
// 11F98: using guessed type int __fastcall sub_11F98(_DWORD);
// 138C8: using guessed type int __fastcall sub_138C8(_DWORD);

//----- (00004F52) --------------------------------------------------------
int sub_4F52()
{
  int v0; // r0
  int v1; // r0

  sub_F738(1);
  sub_FA36(0);
  sub_F6F8(1);
  sub_F710(0);
  sub_F708(0);
  sub_F730(0);
  sub_F728(0);
  sub_F848(1);
  sub_FA04(3);
  sub_F6D4(63);
  sub_F6F0(63);
  sub_F978(62);
  sub_F99C(2);
  sub_F788(0);
  sub_F718(1);
  sub_F700(1);
  v0 = sub_F780(1);
  sub_F778(v0);
  sub_F708(1);
  sub_F730(0);
  v1 = sub_F728(0);
  sub_10808(v1);
  return sub_F684(1);
}
// F684: using guessed type int __fastcall sub_F684(_DWORD);
// F6D4: using guessed type int __fastcall sub_F6D4(_DWORD);
// F6F0: using guessed type int __fastcall sub_F6F0(_DWORD);
// F6F8: using guessed type int __fastcall sub_F6F8(_DWORD);
// F700: using guessed type int __fastcall sub_F700(_DWORD);
// F708: using guessed type int __fastcall sub_F708(_DWORD);
// F710: using guessed type int __fastcall sub_F710(_DWORD);
// F718: using guessed type int __fastcall sub_F718(_DWORD);
// F728: using guessed type int __fastcall sub_F728(_DWORD);
// F730: using guessed type int __fastcall sub_F730(_DWORD);
// F738: using guessed type int __fastcall sub_F738(_DWORD);
// F778: using guessed type int __fastcall sub_F778(_DWORD);
// F780: using guessed type int __fastcall sub_F780(_DWORD);
// F788: using guessed type int __fastcall sub_F788(_DWORD);
// F848: using guessed type int __fastcall sub_F848(_DWORD);
// F978: using guessed type int __fastcall sub_F978(_DWORD);
// F99C: using guessed type int __fastcall sub_F99C(_DWORD);
// FA04: using guessed type int __fastcall sub_FA04(_DWORD);
// FA36: using guessed type int __fastcall sub_FA36(_DWORD);
// 10808: using guessed type int __fastcall sub_10808(_DWORD);

//----- (00004FDC) --------------------------------------------------------
void sub_4FDC()
{
  sub_F710();
  sub_F708();
  sub_F730();
  sub_F728();
  sub_F848(1);
  sub_F9CE();
  sub_F9DE();
  sub_F9F4();
  sub_F6D4(63);
  sub_F6F0();
  sub_F978();
  sub_F99C();
  sub_F720();
  sub_F9FC();
  sub_F708();
  sub_F730();
  sub_F728();
  sub_F684(1);
}

//----- (00005054) --------------------------------------------------------
int sub_5054()
{
  int v0; // r0
  int v1; // r1
  int v2; // r2
  int v3; // r3

  sub_F738(1);
  sub_FA36();
  sub_F6F8();
  sub_F710();
  sub_F708();
  sub_F730();
  sub_F728();
  sub_F848(0);
  sub_FA04();
  sub_F978();
  sub_F99C();
  sub_F780();
  sub_F778();
  sub_F708();
  sub_F730();
  sub_F728();
  return sub_10808(v0, v1, v2, v3);
}
// 50B4: variable 'v0' is possibly undefined
// 50B4: variable 'v1' is possibly undefined
// 50B4: variable 'v2' is possibly undefined
// 50B4: variable 'v3' is possibly undefined

//----- (000050BA) --------------------------------------------------------
void sub_50BA()
{
  sub_F710();
  sub_F708();
  sub_F730();
  sub_F728();
  sub_F848(0);
  sub_F9CE();
  sub_F9DE();
  sub_FA04();
  sub_F978();
  sub_F99C();
  sub_F720();
  sub_F730();
  sub_F728();
}

//----- (0000510C) --------------------------------------------------------
void __fastcall sub_510C(int a1)
{
  sub_FF60(a1);
}

//----- (00005114) --------------------------------------------------------
int get_runtime_transport_mtu_25()
{
  return 25;
}

//----- (00005118) --------------------------------------------------------
int get_runtime_transport_mtu_dynamic_minus_3()
{
  return (unsigned __int16)(sub_F314() - 3);
}
// F314: using guessed type int sub_F314(void);

//----- (00005124) --------------------------------------------------------
int get_runtime_transport_mtu_55()
{
  return 55;
}

//----- (00005128) --------------------------------------------------------
int __fastcall sub_5128(_BYTE *a1, unsigned int a2)
{
  *a1 = a2;
  if ( a2 < 2 )
    return sub_A98C(101, 0, 37);
  else
    return sub_A8C8(101);
}

//----- (00005148) --------------------------------------------------------
_BYTE *__fastcall sub_5148(_BYTE *result, _DWORD *a2)
{
  int v2; // r2
  int v3; // r2

  if ( *result == 1 )
  {
    *result = result[1];
    v2 = (__int16)((unsigned __int8)result[3] << 8) | (unsigned __int8)result[2];
    if ( v2 <= 127 )
    {
      if ( v2 < -127 )
        LOBYTE(v2) = -127;
    }
    else
    {
      LOBYTE(v2) = 127;
    }
    result[1] = v2;
    v3 = (__int16)((unsigned __int8)result[5] << 8) | (unsigned __int8)result[4];
    if ( v3 <= 127 )
    {
      if ( v3 < -127 )
        LOBYTE(v3) = -127;
    }
    else
    {
      LOBYTE(v3) = 127;
    }
    result[2] = v3;
    *a2 = 3;
    return byte_1 + 2;
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (00005196) --------------------------------------------------------
int sub_5196()
{
  int v0; // r0

  v0 = sub_121F0(0, 0);
  if ( v0 )
  {
    if ( v0 < 0 )
      return 0;
  }
  else
  {
    sub_13F70(2u);
  }
  return 1;
}

//----- (000051B4) --------------------------------------------------------
int sub_51B4()
{
  int v0; // r0
  unsigned int v2; // r0

  v0 = sub_121F0(MEMORY[0x200037A4], MEMORY[0x200037A8]);
  if ( v0 < 0 )
    return 1;
  if ( v0 <= 0 )
    v2 = 2;
  else
    v2 = 102;
  return sub_13F70(v2);
}

//----- (000051DC) --------------------------------------------------------
int sub_51DC()
{
  int v0; // r0
  int result; // r0
  unsigned __int8 v2[12]; // [sp+0h] [bp-Ch] BYREF

  v0 = sub_12158(0, 0);
  if ( v0 < 0 )
    return 0;
  if ( v0 > 0 )
  {
    sub_121B4();
    return 1;
  }
  if ( MEMORY[0x20004108] == 6 )
  {
    result = sub_6930(536887560, (int)v2);
    if ( result )
    {
      sub_A9C0(0);
      sub_690A(0x20u, v2);
      sub_13F70(4u);
      return 1;
    }
  }
  else
  {
    if ( MEMORY[0x20004108] != 7 )
    {
      result = sub_A8F0((unsigned __int8 *)0x20004108, (int)v2);
      if ( !result )
        return result;
      sub_A9C0(0);
      sub_79C8(0xFFu, 0x20u, v2);
      sub_13F70(4u);
      return 1;
    }
    result = sub_B1FC(536887560, (int)v2);
    if ( result )
    {
      sub_A9C0(0);
      sub_B1D4(0x20u, v2);
      sub_13F70(4u);
      return 1;
    }
  }
  return result;
}

//----- (000052A8) --------------------------------------------------------
int __fastcall service_active_transport_timeout(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  MEMORY[0x20003C64] += ramapi_get_elapsed_ticks();
  if ( ramapi_transport_can_poll_channel(536886628, MEMORY[0x20003D68], MEMORY[0x20003D69]) )
  {
    if ( sub_3B9C(0, 0) != 1 )
      goto LABEL_5;
    v7 = ramapi_set_run_state_code(1);
    ramapi_publish_run_state_code(v7);
    if ( v8 == 4 )
      return 0;
LABEL_8:
    MEMORY[0x20003C64] = 0;
    return 0;
  }
  if ( sub_3B9C(0, 0) == 1 )
  {
    v5 = ramapi_set_run_state_code(1);
    ramapi_publish_run_state_code(v5);
    if ( v6 == 4 )
      return 0;
    goto LABEL_8;
  }
LABEL_5:
  if ( MEMORY[0x20003C64] <= 0x1E8480u )
  {
    v4 = a2;
  }
  else
  {
    MEMORY[0x20003C64] = 0;
    ramapi_reset_idle_transport_state();
    a1 = 2;
    v4 = 3;
  }
  ramapi_set_run_state_code(v4);
  return a1;
}
// 5304: variable 'v6' is possibly undefined
// 5316: variable 'v8' is possibly undefined
// 3B6C: using guessed type int __fastcall sub_3B6C(_DWORD, _DWORD, _DWORD);
// 3B90: using guessed type int sub_3B90(void);
// 3B9C: using guessed type int __fastcall sub_3B9C(_DWORD, _DWORD);
// 3BA8: using guessed type int sub_3BA8(void);
// 3BB4: using guessed type int __fastcall sub_3BB4(_DWORD);

//----- (00005334) --------------------------------------------------------
int service_sleep_transition_timeout()
{
  int v0; // r4
  int v2; // r0

  if ( !sub_D0F0() )
  {
    v0 = 0;
    MEMORY[0x20003C64] += ramapi_get_elapsed_ticks();
    if ( sub_3B9C(1, 0) == 1 )
      MEMORY[0x20003C64] = 0;
    if ( sub_CCE0(MEMORY[0x20003C78]) )
    {
      MEMORY[0x20003C64] = 0;
    }
    else if ( MEMORY[0x20003C64] > 0x1C9C380u )
    {
      MEMORY[0x20003C64] = 0;
      MEMORY[0x20003C50] = 0;
      ramapi_reset_idle_transport_state();
      v0 = 2;
      sub_CFF8(0);
      sub_86E8(0);
      goto LABEL_11;
    }
LABEL_12:
    v2 = 1;
    goto LABEL_4;
  }
  v0 = 0;
  MEMORY[0x20003C64] += ramapi_get_elapsed_ticks();
  sub_3B9C(1, 0);
  if ( MEMORY[0x20003C64] <= 0x1C9C380u )
    goto LABEL_12;
  MEMORY[0x20003C64] = 0;
  MEMORY[0x20003C50] = 0;
  ramapi_reset_idle_transport_state();
  sub_CFF8(0);
  sub_86E8(0);
  v0 = 2;
LABEL_11:
  v2 = 3;
LABEL_4:
  ramapi_set_run_state_code(v2);
  return v0;
}
// 3B90: using guessed type int sub_3B90(void);
// 3B9C: using guessed type int __fastcall sub_3B9C(_DWORD, _DWORD);
// 3BA8: using guessed type int sub_3BA8(void);
// 3BB4: using guessed type int __fastcall sub_3BB4(_DWORD);
// 86E8: using guessed type int __fastcall sub_86E8(_DWORD);
// CCE0: using guessed type int __fastcall sub_CCE0(_DWORD);
// CFF8: using guessed type int __fastcall sub_CFF8(_DWORD);
// D0F0: using guessed type int sub_D0F0(void);

//----- (000053D8) --------------------------------------------------------
int sub_53D8()
{
  MEMORY[0x20003D9A] = 1;
  return 1;
}

//----- (000053E4) --------------------------------------------------------
int __fastcall sub_53E4(int a1)
{
  int v1; // r0
  int v2; // r3
  int result; // r0

  v1 = 20 * a1;
  v2 = *(_DWORD *)(v1 + 268520020);
  v1 += 268520020;
  MEMORY[0x20003C2C] = v2;
  MEMORY[0x20003C30] = *(_DWORD *)(v1 + 4);
  MEMORY[0x20003C34] = *(_DWORD *)(v1 + 8);
  MEMORY[0x20003C3C] = *(_DWORD *)(v1 + 12);
  result = *(_DWORD *)(v1 + 16);
  MEMORY[0x20003C38] = result;
  return result;
}

//----- (0000540C) --------------------------------------------------------
int sub_540C()
{
  unsigned int i; // r0
  char v1; // r0
  unsigned int j; // r0
  _DWORD v4[5]; // [sp+0h] [bp-1Ch] BYREF
  _BYTE v5[8]; // [sp+14h] [bp-8h] BYREF

  sub_4706((_BYTE *)0x20003C7F);
  sub_D5A0(0);
  MEMORY[0x20003C7F] = 16 * (MEMORY[0x20003C7F] >> 4);
  MEMORY[0x20003C84] = 0;
  sub_F2CC(1u, (int)v5);
  MEMORY[0x20003C7F] = MEMORY[0x20003C7F] & 0xCF | (16 * v5[0]) & 0x3F;
  MEMORY[0x20003C85] |= 0xCu;
  if ( sub_D0F0() )
  {
    if ( MEMORY[0x20003C49] )
    {
      MEMORY[0x20003CCA] = MEMORY[0x20003CCE];
      MEMORY[0x20003CCB] = MEMORY[0x20003CCF];
      MEMORY[0x20003CCC] = MEMORY[0x20003CD0];
      MEMORY[0x20003CCD] = MEMORY[0x20003CD1];
      sub_F2CC(4u, 536886478);
      MEMORY[0x20003C49] = 0;
      for ( i = 0; i < 4; i = (unsigned __int8)(i + 1) )
        *(_BYTE *)(i + 536886482) = *(_BYTE *)(i + 536886438) ^ *(_BYTE *)(i + 536886478);
    }
    v1 = (MEMORY[0x20003C7F] & 0x3F) + 0x80;
  }
  else
  {
    if ( sub_13B4((unsigned int *)0x20003CCA, (unsigned int *)0x20003CCE, 4u) )
    {
      for ( j = 0; j < 4; j = (unsigned __int8)(j + 1) )
        *(_BYTE *)(j + 536886482) = *(_BYTE *)(j + 536886438) ^ *(_BYTE *)(j + 536886474);
      MEMORY[0x20003CCE] = MEMORY[0x20003CCA];
      MEMORY[0x20003CCF] = MEMORY[0x20003CCB];
      MEMORY[0x20003CD0] = MEMORY[0x20003CCC];
      MEMORY[0x20003CD1] = MEMORY[0x20003CCD];
    }
    v1 = MEMORY[0x20003C7F] & 0x3F;
  }
  MEMORY[0x20003C7F] = v1;
  MEMORY[0x20003C80] = MEMORY[0x20003CD2];
  MEMORY[0x20003C81] = MEMORY[0x20003CD3];
  MEMORY[0x20003C82] = MEMORY[0x20003CD4];
  MEMORY[0x20003C83] = MEMORY[0x20003CD5];
  sub_B064(536886628);
  memset(v4, 0, sizeof(v4));
  sub_141A((_BYTE *)v4 + 1, (char *)0x20003C7F, 7u);
  return ramapi_transport_enqueue_frame(536886628, (int)v4, 8);
}

//----- (00005538) --------------------------------------------------------
int sub_5538()
{
  int result; // r0
  __int16 v1; // r1

  result = 536886956;
  if ( MEMORY[0x20003EC1] )
  {
    if ( MEMORY[0x20003ECE] >= (unsigned int)MEMORY[0x20003ECA] )
      return result;
    v1 = MEMORY[0x20003ECE] + MEMORY[0x20003EBB];
  }
  else
  {
    if ( MEMORY[0x20003ECE] <= (unsigned int)MEMORY[0x20003ECC] )
      return result;
    v1 = MEMORY[0x20003ECE] - MEMORY[0x20003EBB];
  }
  MEMORY[0x20003ECE] = v1;
  return result;
}

//----- (00005618) --------------------------------------------------------
int __fastcall sub_5618(int a1)
{
  unsigned int v1; // r2
  unsigned int i; // r1
  int v3; // r0
  unsigned int v5; // r0

  v1 = *(unsigned __int16 *)(a1 + 6);
  for ( i = 0; i < v1; ++i )
    *(_BYTE *)(i + 536887430) = i;
  v3 = sub_121F0(536887430, *(unsigned __int16 *)(a1 + 6));
  if ( v3 < 0 )
    return sub_13F70(3u);
  if ( v3 <= 0 )
    v5 = 2;
  else
    v5 = 101;
  return sub_13F70(v5);
}

//----- (00005694) --------------------------------------------------------
int sub_5694()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  char v4; // r0

  v0 = MEMORY[0x200036CC];
  if ( MEMORY[0x200036CC] == 1 )
    return 1;
  if ( MEMORY[0x200036CC] == 3 )
    v1 = sub_122E4() ^ 1;
  else
    v1 = MEMORY[0x200036BC] & 8;
  if ( v1 )
  {
    if ( v0 )
    {
      if ( v0 == 3 )
        v2 = sub_5708(MEMORY[0x2000365C], MEMORY[0x20003668]);
      else
        v2 = sub_5708(0, 0);
      MEMORY[0x20003628] = v2;
      if ( v2 )
      {
        if ( v2 < 0 )
        {
          MEMORY[0x200036CC] = 0;
          MEMORY[0x20003628] = 0;
          return 0;
        }
        v4 = 2;
        goto LABEL_17;
      }
      MEMORY[0x200036CC] = 0;
    }
  }
  else if ( v0 )
  {
    v4 = 4;
LABEL_17:
    MEMORY[0x200036CC] = v4;
  }
  return 1;
}

//----- (00005708) --------------------------------------------------------
int __fastcall sub_5708(int a1, int a2)
{
  unsigned int v2; // r5
  unsigned int i; // r4
  char v4; // r0

  if ( a1 )
  {
    MEMORY[0x20003630] = a2;
    MEMORY[0x2000362C] = a1;
  }
  v2 = MEMORY[0x20003630];
  if ( !MEMORY[0x20003630] )
    return -1;
  if ( MEMORY[0x20003630] > 0x40u )
    v2 = 64;
  sub_1363C((unsigned __int16)v2);
  while ( sub_122E4() )
    ;
  for ( i = 0; i < v2; ++i )
  {
    v4 = *MEMORY[0x2000362C];
    ++MEMORY[0x2000362C];
    sub_135F0(v4);
  }
  MEMORY[0x20003630] -= v2;
  sub_135DC();
  return MEMORY[0x20003630];
}

//----- (000057D4) --------------------------------------------------------
int __fastcall sub_57D4(int a1, int a2)
{
  unsigned int v2; // r5
  unsigned int i; // r4
  char v4; // r0

  if ( a1 )
  {
    MEMORY[0x2000363C] = a2;
    MEMORY[0x20003638] = a1;
  }
  v2 = MEMORY[0x2000363C];
  if ( !MEMORY[0x2000363C] )
    return -1;
  if ( MEMORY[0x2000363C] > 0x40u )
    v2 = 64;
  sub_136F0((unsigned __int16)v2);
  while ( sub_1235C() )
    ;
  for ( i = 0; i < v2; ++i )
  {
    v4 = *MEMORY[0x20003638];
    ++MEMORY[0x20003638];
    sub_136A4(v4);
  }
  MEMORY[0x2000363C] -= v2;
  sub_13690();
  return MEMORY[0x2000363C];
}

//----- (0000582C) --------------------------------------------------------
int sub_582C()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  char v4; // r0

  v0 = MEMORY[0x200036CE];
  if ( MEMORY[0x200036CE] == 1 )
    return 1;
  if ( MEMORY[0x200036CE] == 3 )
    v1 = sub_123D4() ^ 1;
  else
    v1 = MEMORY[0x200036C4] & 8;
  if ( v1 )
  {
    if ( v0 )
    {
      if ( v0 == 3 )
        v2 = sub_58A0(MEMORY[0x20003664], MEMORY[0x20003670]);
      else
        v2 = sub_58A0(0, 0);
      MEMORY[0x20003640] = v2;
      if ( v2 )
      {
        if ( v2 < 0 )
        {
          MEMORY[0x200036CE] = 0;
          MEMORY[0x20003640] = 0;
          return 0;
        }
        v4 = 2;
        goto LABEL_17;
      }
      MEMORY[0x200036CE] = 0;
    }
  }
  else if ( v0 )
  {
    v4 = 4;
LABEL_17:
    MEMORY[0x200036CE] = v4;
  }
  return 1;
}

//----- (000058A0) --------------------------------------------------------
int __fastcall sub_58A0(int a1, int a2)
{
  unsigned int v2; // r5
  unsigned int i; // r4
  char v4; // r0

  if ( a1 )
  {
    MEMORY[0x20003648] = a2;
    MEMORY[0x20003644] = a1;
  }
  v2 = MEMORY[0x20003648];
  if ( !MEMORY[0x20003648] )
    return -1;
  if ( MEMORY[0x20003648] > 0x40u )
    v2 = 64;
  sub_137A4((unsigned __int16)v2);
  while ( sub_123D4() )
    ;
  for ( i = 0; i < v2; ++i )
  {
    v4 = *MEMORY[0x20003644];
    ++MEMORY[0x20003644];
    sub_13758(v4);
  }
  MEMORY[0x20003648] -= v2;
  sub_13744();
  return MEMORY[0x20003648];
}

//----- (000058F8) --------------------------------------------------------
int __fastcall sub_58F8(int a1)
{
  int v2; // r0
  int result; // r0
  unsigned int v4; // r1
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r0
  unsigned int i; // r1
  _BYTE *v9; // r6
  unsigned __int8 *v10; // r0
  int v11; // r3
  unsigned __int8 *v12; // r2
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r0
  unsigned int j; // r1
  unsigned int k; // r1
  int v18; // r1
  int v19; // r0
  __int16 v20; // [sp+0h] [bp-64h] BYREF
  __int16 v21; // [sp+4h] [bp-60h] BYREF
  __int16 v22; // [sp+8h] [bp-5Ch] BYREF
  _DWORD v23[21]; // [sp+Ch] [bp-58h] BYREF
  int v24; // [sp+60h] [bp-4h]

  v24 = 1;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v2 = *(unsigned __int8 *)(a1 + 3);
  if ( v2 == 1 )
  {
    sub_12564(&v20, &v21);
    sub_12558(&v22);
    result = 536884684;
    MEMORY[0x200035D4] = v20;
    MEMORY[0x200035D6] = v21;
    MEMORY[0x200035D8] = v22;
    v4 = MEMORY[0x200035E0];
    goto LABEL_47;
  }
  if ( v2 == 2 )
  {
    if ( !*(_BYTE *)(a1 + 2) )
    {
      result = 268518848;
      v4 = (MEMORY[0x100145C3] << 8) | MEMORY[0x100145C2];
      goto LABEL_47;
    }
    return 0;
  }
  if ( v2 != 3 )
    return 0;
  v5 = *(unsigned __int8 *)(a1 + 2);
  v6 = 0;
  sub_1580(v23, 0x54u);
  MEMORY[0x20004004] = 2;
  MEMORY[0x20004005] = 3;
  switch ( v5 )
  {
    case 0:
      result = 268518932;
      goto LABEL_45;
    case 1:
      v7 = sub_12500();
      for ( i = 0; i < 0x40; ++i )
      {
        *(_WORD *)(2 * i + 0x20004006) = *(_WORD *)(v7 + 2 * i);
        if ( !*(_WORD *)(v7 + 2 * i) )
          break;
      }
      goto LABEL_40;
    case 2:
      v9 = (_BYTE *)sub_B778();
      if ( (unsigned __int8)*v9 != 255 && *v9 )
      {
        do
        {
          *((_WORD *)v23 + v6) = (unsigned __int8)v9[v6 + 1];
          v6 = (unsigned __int8)(v6 + 1);
        }
        while ( (unsigned __int8)*v9 > v6 );
      }
      v10 = (unsigned __int8 *)sub_BBF0();
      v11 = *v10;
      v12 = v10;
      if ( v11 != 255 && *v10 )
      {
        v13 = (unsigned __int8)*v9;
        if ( v13 == 255 || !*v9 )
        {
          v13 = 0;
        }
        else if ( !*((_WORD *)v23 + v13 - 1) )
        {
          v13 = (unsigned __int8)(v13 - 1);
        }
        v14 = 0;
        if ( v11 )
        {
          do
          {
            *((_WORD *)v23 + v14 + v13) = v12[v14 + 1];
            v14 = (unsigned __int8)(v14 + 1);
          }
          while ( *v12 > v14 );
        }
        sub_13884((int)v23);
      }
      v15 = sub_1250C();
      for ( j = 0; j < 0x40; ++j )
      {
        *(_WORD *)(2 * j + 0x20004006) = *(_WORD *)(v15 + 2 * j);
        if ( !*(_WORD *)(v15 + 2 * j) )
          break;
      }
LABEL_40:
      v18 = 0;
      while ( *(_WORD *)(2 * v18 + 0x20004006) )
      {
        if ( (unsigned int)++v18 >= 0x40 )
        {
          LOBYTE(v18) = 64;
          break;
        }
      }
      result = 536887300;
      MEMORY[0x20004004] = 2 * v18 + 2;
      goto LABEL_45;
    case 3:
      for ( k = 0; k < 0x40; ++k )
      {
        *(_WORD *)(2 * k + 0x20004006) = a0123456789[k];
        if ( !a0123456789[k] )
          break;
      }
      goto LABEL_40;
  }
  result = 0;
LABEL_45:
  if ( !result )
    return result;
  v4 = *(unsigned __int8 *)result;
LABEL_47:
  if ( *(unsigned __int16 *)(a1 + 6) < v4 )
    v4 = *(unsigned __int16 *)(a1 + 6);
  v19 = sub_121F0(result, v4);
  if ( v19 > 0 )
  {
    result = sub_13F70(0x64u);
LABEL_53:
    v24 = result;
    return result;
  }
  if ( v19 < 0 )
  {
    result = 0;
    goto LABEL_53;
  }
  sub_13F70(2u);
  return v24;
}
// 59C8: conditional instruction was optimized away because r0.4 is in (1..FE)
// 5AD4: using guessed type __int16 a0123456789[11];

//----- (00005AEC) --------------------------------------------------------
int sub_5AEC()
{
  int v1; // r0
  int v2; // r6
  int v3; // r6

  if ( MEMORY[0x20003674] )
  {
    while ( 1 )
    {
      if ( ramapi_transport_channel_idle(
             *(unsigned __int8 *)(MEMORY[0x20003674] + 4),
             *(unsigned __int8 *)(MEMORY[0x20003674] + 5)) )
      {
        MEMORY[0x200036CC] = 0;
        return 1;
      }
      v1 = ramapi_transport_peek_frame_meta(MEMORY[0x20003674], 536887088);
      MEMORY[0x20003668] = v1;
      if ( MEMORY[0x20003F30] != 2 || sub_47F8(536887088, v1) )
        break;
      ramapi_transport_consume_frame(MEMORY[0x20003674]);
    }
    v2 = MEMORY[0x20003668];
    if ( !sub_13B4(536887089, 536884968, MEMORY[0x20003668] - 1) )
      sub_157C(536887089, v2 - 1);
    if ( MEMORY[0x20003F30] == 2 )
    {
      if ( MEMORY[0x200036E0] )
      {
        sub_3BFC(MEMORY[0x20003674], 536887088, 536884840, 2);
      }
      else
      {
        sub_3BFC(MEMORY[0x20003674], 536887088, 536884840, 7);
        sub_5148(536887088, 536884840);
      }
    }
    if ( !MEMORY[0x200036E0] && MEMORY[0x20003F30] != 2 )
    {
      ramapi_transport_consume_frame(MEMORY[0x20003674]);
      return 1;
    }
    if ( !MEMORY[0x200036CC] || MEMORY[0x200036CC] == 4 )
    {
      MEMORY[0x200036CC] = 3;
      --MEMORY[0x20003668];
      sub_14E2(536887088, 536887089);
      MEMORY[0x2000365C] = 536887088;
      v3 = sub_5694();
      if ( v3 )
      {
        if ( !MEMORY[0x200036CC] )
          ramapi_transport_consume_frame(MEMORY[0x20003674]);
      }
      return v3;
    }
    else
    {
      if ( MEMORY[0x200036CC] != 2 )
        return 1;
      return sub_5694();
    }
  }
  else
  {
    MEMORY[0x200036CC] = 0;
    return 1;
  }
}
// 13B4: using guessed type int __fastcall sub_13B4(_DWORD, _DWORD, _DWORD);
// 14E2: using guessed type int __fastcall sub_14E2(_DWORD, _DWORD);
// 157C: using guessed type int __fastcall sub_157C(_DWORD, _DWORD);
// 3BFC: using guessed type int __fastcall sub_3BFC(_DWORD, _DWORD, _DWORD, _DWORD);
// 47F8: using guessed type int __fastcall sub_47F8(_DWORD, _DWORD);
// 5148: using guessed type int __fastcall sub_5148(_DWORD, _DWORD);
// 5694: using guessed type int sub_5694(void);

//----- (00005C04) --------------------------------------------------------
int sub_5C04()
{
  int v1; // r6

  if ( MEMORY[0x2000367C] )
  {
    while ( !ramapi_transport_channel_idle(
               *(unsigned __int8 *)(MEMORY[0x2000367C] + 4),
               *(unsigned __int8 *)(MEMORY[0x2000367C] + 5)) )
    {
      MEMORY[0x20003670] = ramapi_transport_peek_frame_meta(MEMORY[0x2000367C], 536887216);
      if ( sub_47F8(536887216, MEMORY[0x20003670]) )
      {
        if ( MEMORY[0x200036E4] )
        {
          sub_3BFC(MEMORY[0x2000367C]);
        }
        else
        {
          sub_3BFC(MEMORY[0x2000367C]);
          sub_5148((_BYTE *)0x20003FB0, (_DWORD *)0x20003670);
        }
        if ( !MEMORY[0x200036CE] || MEMORY[0x200036CE] == 4 )
        {
          MEMORY[0x200036CE] = 3;
          MEMORY[0x20003664] = 536887216;
          v1 = sub_582C();
          if ( v1 && !MEMORY[0x200036CE] )
            ramapi_transport_consume_frame(MEMORY[0x2000367C]);
          return v1;
        }
        else if ( MEMORY[0x200036CE] == 2 )
        {
          return sub_582C();
        }
        else
        {
          return 1;
        }
      }
      ramapi_transport_consume_frame(MEMORY[0x2000367C]);
    }
  }
  MEMORY[0x200036CE] = 0;
  return 1;
}

//----- (00005CBC) --------------------------------------------------------
int __fastcall sub_5CBC(int a1, char *a2, char a3, int a4)
{
  sub_157C((_WORD *)a4, 0x10u);
  sub_141A((_BYTE *)(a4 + 8), a2, 8u);
  *(_BYTE *)a4 = a3;
  return sub_6564((unsigned __int8 *)a4, a1);
}

//----- (00005CE4) --------------------------------------------------------
int __fastcall sub_5CE4(int a1, char *a2, int a3, unsigned int a4, int a5)
{
  int v5; // r5
  unsigned int v7; // r4
  char v8; // r6
  int i; // r0
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r0
  char v14[20]; // [sp+0h] [bp-24h] BYREF
  int v15; // [sp+14h] [bp-10h]
  char *v16; // [sp+18h] [bp-Ch]
  int v17; // [sp+1Ch] [bp-8h]
  unsigned int v18; // [sp+20h] [bp-4h]

  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  v5 = 0;
  v7 = a4;
  v8 = 0;
  while ( v7 )
  {
    sub_5CBC(v15, v16, v8, (int)v14);
    for ( i = 0; i < 16; ++i )
    {
      if ( v5 + i >= a4 )
        break;
      v14[i] ^= *(_BYTE *)(v17 + v5 + i);
    }
    if ( v7 <= 0x10 )
      v10 = v7;
    else
      v10 = 16;
    sub_141A((_BYTE *)(a5 + v5), v14, v10);
    if ( v7 <= 0x10 )
      v11 = v7;
    else
      v11 = 16;
    v5 += v11;
    if ( v7 <= 0x10 )
      v12 = v7;
    else
      v12 = 16;
    v7 -= v12;
    ++v8;
  }
  return v5;
}

//----- (00005D54) --------------------------------------------------------
int __fastcall sub_5D54(unsigned __int8 *a1, _BYTE *a2)
{
  int v3; // r2
  unsigned __int8 *v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // lr
  int v9; // r3
  int v10; // r3
  int v11; // r1
  int v12; // r7
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r6
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r6
  int v22; // r3
  int v23; // r12
  int v24; // r6
  unsigned int v25; // r0
  char v26; // r7
  unsigned int v27; // r0
  char v28; // r0
  unsigned int v29; // r0
  char v30; // r7
  unsigned int v31; // r0
  char v32; // r0
  unsigned int v33; // r0
  char v34; // r7
  unsigned int v35; // r0
  char v36; // r0
  unsigned int v37; // r0
  char v38; // r7
  unsigned int v39; // r0
  char v40; // r0
  char v41; // r7
  char v42; // r7
  char v43; // r7
  int v44; // r7
  unsigned int v45; // r3
  _BYTE *v46; // r1
  unsigned __int8 v47; // r2
  unsigned __int8 v48; // r12
  unsigned __int8 v49; // r2
  unsigned __int8 v50; // r2
  int result; // r0
  int v52; // [sp+4h] [bp-40h]
  int v53; // [sp+8h] [bp-3Ch]
  int v54; // [sp+8h] [bp-3Ch]
  int v55; // [sp+8h] [bp-3Ch]
  int v56; // [sp+8h] [bp-3Ch]
  int v57; // [sp+8h] [bp-3Ch]
  int v58; // [sp+10h] [bp-34h]
  int v59; // [sp+14h] [bp-30h]
  int v60; // [sp+18h] [bp-2Ch]
  int v61; // [sp+1Ch] [bp-28h]
  int v62; // [sp+24h] [bp-20h]
  int v63; // [sp+2Ch] [bp-18h]
  int v64; // [sp+34h] [bp-10h]
  int v65; // [sp+38h] [bp-Ch]

  v3 = *a1;
  v5 = a2 + 160;
  v6 = v3 ^ (unsigned __int8)a2[160];
  *a1 = v6;
  v7 = a1[1] ^ (unsigned __int8)a2[161];
  a1[1] = v7;
  v8 = v7;
  v9 = a1[2] ^ (unsigned __int8)a2[162];
  a1[2] = v9;
  v63 = v9;
  v10 = a1[3] ^ (unsigned __int8)a2[163];
  a1[3] = v10;
  v61 = v10;
  v11 = a1[4] ^ (unsigned __int8)a2[164];
  a1[4] = v11;
  v12 = a1[5] ^ v5[5];
  a1[5] = v12;
  v13 = a1[6] ^ v5[6];
  a1[6] = v13;
  v62 = v13;
  v14 = a1[7] ^ v5[7];
  a1[7] = v14;
  v60 = v14;
  v15 = a1[8] ^ v5[8];
  a1[8] = v15;
  v65 = v15;
  v16 = a1[9] ^ v5[9];
  a1[9] = v16;
  v53 = v16;
  v17 = a1[10] ^ v5[10];
  a1[10] = v17;
  v59 = v17;
  v18 = a1[11] ^ v5[11];
  a1[11] = v18;
  v58 = v18;
  v19 = a1[12] ^ v5[12];
  a1[12] = v19;
  v64 = v19;
  v20 = a1[13] ^ v5[13];
  a1[13] = v20;
  v52 = v20;
  v21 = a1[14] ^ v5[14];
  a1[14] = v21;
  v22 = a1[15] ^ v5[15];
  a1[15] = v22;
  v23 = v22;
  *a1 = *(_BYTE *)(v6 + 268521448) ^ a2[144];
  a1[4] = *(_BYTE *)(v11 + 268521448) ^ a2[148];
  a1[8] = *(_BYTE *)(v65 + 268521448) ^ a2[152];
  a1[12] = *(_BYTE *)(v64 + 268521448) ^ a2[156];
  LOBYTE(v6) = *(_BYTE *)(v52 + 268521448) ^ a2[145];
  a1[13] = *(_BYTE *)(v53 + 268521448) ^ a2[157];
  a1[9] = *(_BYTE *)(v12 + 268521448) ^ a2[153];
  a1[5] = *(_BYTE *)(v8 + 268521448) ^ a2[149];
  a1[1] = v6;
  LOBYTE(v6) = *(_BYTE *)(v63 + 268521448) ^ a2[154];
  LOBYTE(v22) = *(_BYTE *)(v62 + 268521448) ^ a2[158];
  a1[2] = *(_BYTE *)(v59 + 268521448) ^ a2[146];
  a1[6] = *(_BYTE *)(v21 + 268521448) ^ a2[150];
  a1[10] = v6;
  a1[14] = v22;
  LOBYTE(v6) = *(_BYTE *)(v61 + 268521448) ^ a2[159];
  a1[3] = *(_BYTE *)(v60 + 268521448) ^ a2[147];
  a1[7] = *(_BYTE *)(v58 + 268521448) ^ a2[151];
  a1[11] = *(_BYTE *)(v23 + 268521448) ^ a2[155];
  a1[15] = v6;
  v24 = 8;
  do
  {
    v25 = sub_9ED8(*a1 ^ a1[2]);
    v26 = sub_9ED8(v25);
    v27 = sub_9ED8(a1[1] ^ a1[3]);
    v28 = sub_9ED8(v27);
    *a1 ^= v26;
    a1[1] ^= v28;
    a1[2] ^= v26;
    a1[3] ^= v28;
    v29 = sub_9ED8(a1[4] ^ a1[6]);
    v30 = sub_9ED8(v29);
    v31 = sub_9ED8(a1[5] ^ a1[7]);
    v32 = sub_9ED8(v31);
    a1[4] ^= v30;
    a1[5] ^= v32;
    a1[6] ^= v30;
    a1[7] ^= v32;
    v33 = sub_9ED8(a1[8] ^ a1[10]);
    v34 = sub_9ED8(v33);
    v35 = sub_9ED8(a1[9] ^ a1[11]);
    v36 = sub_9ED8(v35);
    a1[8] ^= v34;
    a1[9] ^= v36;
    a1[10] ^= v34;
    a1[11] ^= v36;
    v37 = sub_9ED8(a1[12] ^ a1[14]);
    v38 = sub_9ED8(v37);
    v39 = sub_9ED8(a1[13] ^ a1[15]);
    v40 = sub_9ED8(v39);
    a1[12] ^= v38;
    a1[13] ^= v40;
    a1[14] ^= v38;
    a1[15] ^= v40;
    v41 = *a1 ^ a1[1] ^ a1[2] ^ a1[3];
    v54 = *a1;
    *a1 ^= (unsigned __int8)sub_9ED8(v54 ^ a1[1]) ^ v41;
    a1[1] ^= (unsigned __int8)sub_9ED8(a1[1] ^ a1[2]) ^ v41;
    a1[2] ^= (unsigned __int8)sub_9ED8(a1[2] ^ a1[3]) ^ v41;
    a1[3] ^= (unsigned __int8)sub_9ED8(a1[3] ^ v54) ^ v41;
    v42 = a1[4] ^ a1[5] ^ a1[6] ^ a1[7];
    v55 = a1[4];
    a1[4] ^= (unsigned __int8)sub_9ED8(v55 ^ a1[5]) ^ v42;
    a1[5] ^= (unsigned __int8)sub_9ED8(a1[5] ^ a1[6]) ^ v42;
    a1[6] ^= (unsigned __int8)sub_9ED8(a1[6] ^ a1[7]) ^ v42;
    a1[7] ^= (unsigned __int8)sub_9ED8(a1[7] ^ v55) ^ v42;
    v43 = a1[8] ^ a1[9] ^ a1[10] ^ a1[11];
    v56 = a1[8];
    a1[8] ^= (unsigned __int8)sub_9ED8(v56 ^ a1[9]) ^ v43;
    a1[9] ^= (unsigned __int8)sub_9ED8(a1[9] ^ a1[10]) ^ v43;
    a1[10] ^= (unsigned __int8)sub_9ED8(a1[10] ^ a1[11]) ^ v43;
    a1[11] ^= (unsigned __int8)sub_9ED8(a1[11] ^ v56) ^ v43;
    v44 = a1[12] ^ a1[13] ^ a1[14] ^ a1[15];
    v57 = a1[12];
    a1[12] ^= (unsigned __int8)sub_9ED8(v57 ^ a1[13]) ^ (unsigned __int8)v44;
    a1[13] ^= (unsigned __int8)sub_9ED8(a1[13] ^ a1[14]) ^ (unsigned __int8)v44;
    a1[14] ^= (unsigned __int8)sub_9ED8(a1[14] ^ a1[15]) ^ (unsigned __int8)v44;
    v45 = a1[15] ^ sub_9ED8(v57 ^ a1[15]) ^ v44;
    a1[15] = v45;
    v46 = &a2[16 * v24];
    *a1 = *(_BYTE *)(*a1 + 0x10014FE8) ^ *v46;
    a1[4] = *(_BYTE *)(a1[4] + 0x10014FE8) ^ v46[4];
    a1[8] = *(_BYTE *)(a1[8] + 0x10014FE8) ^ v46[8];
    a1[12] = *(_BYTE *)(a1[12] + 0x10014FE8) ^ v46[12];
    v47 = *(_BYTE *)(a1[13] + 0x10014FE8) ^ v46[1];
    a1[13] = *(_BYTE *)(a1[9] + 0x10014FE8) ^ v46[13];
    a1[9] = *(_BYTE *)(a1[5] + 0x10014FE8) ^ v46[9];
    a1[5] = *(_BYTE *)(a1[1] + 0x10014FE8) ^ v46[5];
    a1[1] = v47;
    v48 = *(_BYTE *)(a1[2] + 0x10014FE8) ^ v46[10];
    v49 = *(_BYTE *)(a1[6] + 0x10014FE8) ^ v46[14];
    a1[2] = *(_BYTE *)(a1[10] + 0x10014FE8) ^ v46[2];
    a1[6] = *(_BYTE *)(a1[14] + 0x10014FE8) ^ v46[6];
    a1[10] = v48;
    a1[14] = v49;
    v50 = *(_BYTE *)(a1[3] + 0x10014FE8) ^ v46[15];
    a1[3] = *(_BYTE *)(a1[7] + 0x10014FE8) ^ v46[3];
    v24 = (char)(v24 - 1);
    a1[7] = *(_BYTE *)(a1[11] + 0x10014FE8) ^ v46[7];
    result = *(unsigned __int8 *)(v45 + 268521448) ^ (unsigned __int8)v46[11];
    a1[11] = result;
    a1[15] = v50;
  }
  while ( v24 >= 0 );
  return result;
}

//----- (000061C0) --------------------------------------------------------
int __fastcall sub_61C0(unsigned __int8 *a1, int a2)
{
  _BYTE v4[176]; // [sp+0h] [bp-B0h] BYREF

  sub_876C((int)v4, a2);
  return sub_5D54(a1, v4);
}

//----- (000061D8) --------------------------------------------------------
int __fastcall sub_61D8(unsigned __int8 *a1, int a2)
{
  unsigned int v4; // r7
  unsigned __int8 *v5; // r1
  int v6; // r2
  int v7; // r12
  int v8; // r3
  int v9; // lr
  int v10; // r12
  int v11; // r12
  char v12; // r6
  char v13; // r6
  char v14; // r6
  char v15; // r6
  unsigned __int8 v16; // r1
  unsigned __int8 *v17; // r1
  unsigned __int8 v18; // r7
  unsigned __int8 v19; // r7
  unsigned __int8 v20; // r2
  int v21; // r2
  unsigned __int8 v22; // r7
  unsigned __int8 v23; // r12
  unsigned __int8 v24; // r7
  unsigned __int8 v25; // r7
  int v26; // r3
  int v27; // r2
  unsigned __int8 v28; // r7
  unsigned __int8 v29; // r7
  unsigned __int8 v30; // r6
  char v31; // lr
  _BYTE *v32; // r5
  unsigned __int8 v33; // r0
  int result; // r0
  int v35; // [sp+0h] [bp-44h]
  int v36; // [sp+8h] [bp-3Ch]
  int v37; // [sp+8h] [bp-3Ch]
  int v38; // [sp+8h] [bp-3Ch]
  int v39; // [sp+8h] [bp-3Ch]
  char v40; // [sp+10h] [bp-34h]
  int v41; // [sp+14h] [bp-30h]
  unsigned __int8 v42; // [sp+14h] [bp-30h]
  unsigned __int8 v43; // [sp+20h] [bp-24h]
  unsigned __int8 v44; // [sp+24h] [bp-20h]
  unsigned __int8 v45; // [sp+30h] [bp-14h]
  unsigned __int8 v46; // [sp+34h] [bp-10h]
  unsigned __int8 v47; // [sp+38h] [bp-Ch]
  unsigned __int8 v48; // [sp+40h] [bp-4h]

  v4 = 0;
  do
  {
    v5 = (unsigned __int8 *)(16 * v4 + a2);
    v6 = *(unsigned __int8 *)((*a1 ^ *v5) + 0x10014EE8);
    *a1 = v6;
    a1[4] = *(_BYTE *)((a1[4] ^ v5[4]) + 0x10014EE8);
    a1[8] = *(_BYTE *)((a1[8] ^ v5[8]) + 0x10014EE8);
    a1[12] = *(_BYTE *)((a1[12] ^ v5[12]) + 0x10014EE8);
    v7 = a1[1] ^ v5[1];
    v8 = *(unsigned __int8 *)((a1[5] ^ v5[5]) + 0x10014EE8);
    a1[1] = v8;
    v41 = v8;
    a1[5] = *(_BYTE *)((a1[9] ^ v5[9]) + 0x10014EE8);
    a1[9] = *(_BYTE *)((a1[13] ^ v5[13]) + 0x10014EE8);
    a1[13] = *(_BYTE *)(v7 + 268521192);
    v9 = a1[2] ^ v5[2];
    v10 = a1[6] ^ v5[6];
    LOBYTE(v8) = *(_BYTE *)((v5[10] ^ a1[10]) + 0x10014EE8);
    a1[2] = v8;
    a1[6] = *(_BYTE *)((v5[14] ^ a1[14]) + 0x10014EE8);
    a1[10] = *(_BYTE *)(v9 + 268521192);
    a1[14] = *(_BYTE *)(v10 + 268521192);
    v11 = a1[15] ^ v5[15];
    a1[15] = *(_BYTE *)((a1[11] ^ v5[11]) + 0x10014EE8);
    a1[11] = *(_BYTE *)((a1[7] ^ v5[7]) + 0x10014EE8);
    a1[7] = *(_BYTE *)((a1[3] ^ v5[3]) + 0x10014EE8);
    LOBYTE(v5) = *(_BYTE *)(v11 + 268521192);
    a1[3] = (unsigned __int8)v5;
    v12 = v6 ^ v41 ^ v8 ^ (unsigned __int8)v5;
    v36 = v6;
    *a1 ^= (unsigned __int8)sub_9ED8(v6 ^ v41) ^ v12;
    a1[1] ^= (unsigned __int8)sub_9ED8(a1[1] ^ a1[2]) ^ v12;
    a1[2] ^= (unsigned __int8)sub_9ED8(a1[2] ^ a1[3]) ^ v12;
    a1[3] ^= (unsigned __int8)sub_9ED8(a1[3] ^ v36) ^ v12;
    v13 = a1[4] ^ a1[5] ^ a1[6] ^ a1[7];
    v37 = a1[4];
    a1[4] ^= (unsigned __int8)sub_9ED8(v37 ^ a1[5]) ^ v13;
    a1[5] ^= (unsigned __int8)sub_9ED8(a1[5] ^ a1[6]) ^ v13;
    a1[6] ^= (unsigned __int8)sub_9ED8(a1[6] ^ a1[7]) ^ v13;
    a1[7] ^= (unsigned __int8)sub_9ED8(a1[7] ^ v37) ^ v13;
    v14 = a1[8] ^ a1[9] ^ a1[10] ^ a1[11];
    v38 = a1[8];
    a1[8] ^= (unsigned __int8)sub_9ED8(v38 ^ a1[9]) ^ v14;
    a1[9] ^= (unsigned __int8)sub_9ED8(a1[9] ^ a1[10]) ^ v14;
    a1[10] ^= (unsigned __int8)sub_9ED8(a1[10] ^ a1[11]) ^ v14;
    a1[11] ^= (unsigned __int8)sub_9ED8(a1[11] ^ v38) ^ v14;
    v15 = a1[12] ^ a1[13] ^ a1[14] ^ a1[15];
    v39 = a1[12];
    a1[12] ^= (unsigned __int8)sub_9ED8(v39 ^ a1[13]) ^ v15;
    a1[13] ^= (unsigned __int8)sub_9ED8(a1[13] ^ a1[14]) ^ v15;
    a1[14] ^= (unsigned __int8)sub_9ED8(a1[14] ^ a1[15]) ^ v15;
    v4 = (unsigned __int8)(v4 + 1);
    a1[15] ^= (unsigned __int8)sub_9ED8(v39 ^ a1[15]) ^ v15;
  }
  while ( v4 < 9 );
  v16 = *(_BYTE *)((*a1 ^ *(unsigned __int8 *)(a2 + 16 * v4)) + 0x10014EE8);
  *a1 = v16;
  v48 = v16;
  v17 = (unsigned __int8 *)(16 * v4 + a2);
  v18 = *(_BYTE *)((a1[4] ^ v17[4]) + 0x10014EE8);
  a1[4] = v18;
  v46 = v18;
  v19 = *(_BYTE *)((a1[8] ^ v17[8]) + 0x10014EE8);
  a1[8] = v19;
  v44 = v19;
  v20 = *(_BYTE *)((a1[12] ^ v17[12]) + 0x10014EE8);
  a1[12] = v20;
  v42 = v20;
  v21 = a1[1] ^ v17[1];
  v22 = *(_BYTE *)((a1[5] ^ v17[5]) + 0x10014EE8);
  a1[1] = v22;
  v23 = v22;
  v24 = *(_BYTE *)((a1[9] ^ v17[9]) + 0x10014EE8);
  a1[5] = v24;
  v45 = v24;
  v25 = *(_BYTE *)((a1[13] ^ v17[13]) + 0x10014EE8);
  a1[9] = v25;
  v43 = v25;
  LOBYTE(v21) = *(_BYTE *)(v21 + 268521192);
  a1[13] = v21;
  v40 = v21;
  v26 = a1[2] ^ v17[2];
  v27 = a1[6] ^ v17[6];
  v28 = *(_BYTE *)((a1[10] ^ v17[10]) + 0x10014EE8);
  a1[2] = v28;
  v47 = v28;
  v29 = *(_BYTE *)((a1[14] ^ v17[14]) + 0x10014EE8);
  a1[6] = v29;
  v30 = *(_BYTE *)(v26 + 268521192);
  a1[10] = v30;
  LOBYTE(v27) = *(_BYTE *)(v27 + 268521192);
  a1[14] = v27;
  v31 = v27;
  v32 = (_BYTE *)(a2 + 160);
  v35 = a1[15] ^ v17[15];
  LOBYTE(v26) = *(_BYTE *)((a1[11] ^ v17[11]) + 0x10014EE8);
  a1[15] = v26;
  LOBYTE(v27) = *(_BYTE *)((a1[7] ^ v17[7]) + 0x10014EE8);
  a1[11] = v27;
  LOBYTE(v17) = *(_BYTE *)((a1[3] ^ v17[3]) + 0x10014EE8);
  a1[7] = (unsigned __int8)v17;
  v33 = *(_BYTE *)(v35 + 268521192);
  a1[3] = v33;
  *a1 = v48 ^ *v32;
  a1[1] = v23 ^ v32[1];
  a1[2] = v47 ^ v32[2];
  a1[3] = v33 ^ v32[3];
  a1[4] = v46 ^ v32[4];
  a1[5] = v45 ^ v32[5];
  a1[6] = v29 ^ v32[6];
  a1[7] = (unsigned __int8)v17 ^ v32[7];
  a1[8] = v44 ^ v32[8];
  a1[9] = v43 ^ v32[9];
  a1[10] = v30 ^ v32[10];
  a1[11] = v27 ^ v32[11];
  a1[12] = v42 ^ v32[12];
  a1[13] = v40 ^ v32[13];
  a1[14] = v31 ^ v32[14];
  result = (unsigned __int8)v32[15];
  a1[15] = v26 ^ result;
  return result;
}

//----- (00006564) --------------------------------------------------------
int __fastcall sub_6564(unsigned __int8 *a1, int a2)
{
  _BYTE v4[176]; // [sp+0h] [bp-B0h] BYREF

  sub_876C((int)v4, a2);
  return sub_61D8(a1, (int)v4);
}

//----- (0000657C) --------------------------------------------------------
unsigned int __fastcall sub_657C(unsigned int result, int a2)
{
  unsigned int i; // r2

  for ( i = 0; i < result; i = (unsigned __int8)(i + 1) )
    *(_BYTE *)(a2 + i) = MEMORY[0x50012055];
  return result;
}

//----- (00006598) --------------------------------------------------------
_BYTE *__fastcall sub_6598(int a1)
{
  int v1; // r5
  unsigned int v2; // r4
  _DWORD v4[82]; // [sp+0h] [bp-148h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 5);
  v2 = *(unsigned __int8 *)(a1 + 6);
  sub_1580(v4, 0x144u);
  if ( v2 >= 3 )
    v2 = 0;
  sub_1532(v4, 0x143u, 0xFFu);
  return sub_B428((char *)v4, v2, v1, 0x143u);
}

//----- (000065CE) --------------------------------------------------------
int __fastcall sub_65CE(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = 0;
  return emit_transport_frame_via_channel_table(10, 1, (int)&v5);
}

//----- (000065E2) --------------------------------------------------------
int __fastcall sub_65E2(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  v4 = *a1;
  LOBYTE(v6) = v4;
  LOBYTE(v6) = sub_89C8(v4, (int)&v6, a3, a4);
  return emit_transport_frame_via_channel_table(161, 1, (int)&v6);
}

//----- (000065FE) --------------------------------------------------------
int __fastcall sub_65FE(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = 0;
  LOBYTE(v5) = sub_9EF8(0);
  return emit_transport_frame_via_channel_table(18, 1, (int)&v5);
}
// 9EF8: using guessed type int __fastcall sub_9EF8(_DWORD);

//----- (0000661A) --------------------------------------------------------
int __fastcall sub_661A(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  sub_A030(*(unsigned __int8 *)(a1 + 1), &v5);
  return emit_transport_frame_via_channel_table(2, 4, (int)&v5);
}
// A030: using guessed type int __fastcall sub_A030(_DWORD, _DWORD);

//----- (00006630) --------------------------------------------------------
int __fastcall sub_6630(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = sub_B1B4(a1);
  return emit_transport_frame_via_channel_table(17, 1, (int)&v5);
}
// B1B4: using guessed type int __fastcall sub_B1B4(_DWORD);

//----- (00006646) --------------------------------------------------------
int __fastcall sub_6646(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = 1;
  return emit_transport_frame_via_channel_table(19, 1, (int)&v5);
}

//----- (0000665C) --------------------------------------------------------
int __fastcall sub_665C(unsigned __int8 *a1, int a2, int a3, unsigned int a4)
{
  int v5; // r0
  int v6; // r5
  unsigned int dpi_value_for_stage; // [sp+0h] [bp-4h] BYREF

  dpi_value_for_stage = a4;
  dpi_value_for_stage = get_dpi_value_for_stage(a1[1]);
  if ( (unsigned __int8)dpi_value_for_stage == 255
    && BYTE1(dpi_value_for_stage) == 255
    && BYTE2(dpi_value_for_stage) == 255 )
  {
    v5 = a1[1];
    v6 = *(unsigned __int16 *)(2 * v5 + 0x10014AEC);
    set_profile_dpi_stage_value_and_mark_dirty(v5, v6, *a1, 0, dpi_value_for_stage);
    sub_E3FC(v6);
  }
  return emit_transport_frame_via_channel_table(4, 3, (int)&dpi_value_for_stage);
}
// E3FC: using guessed type int __fastcall sub_E3FC(_DWORD);
// 11750: using guessed type int __fastcall sub_11750(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (000066BE) --------------------------------------------------------
int __fastcall sub_66BE(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = get_dpi_stage_count(a1);
  return emit_transport_frame_via_channel_table(30, 1, (int)&v5);
}
// 9FD8: using guessed type int __fastcall sub_9FD8(_DWORD);

//----- (000066D4) --------------------------------------------------------
// Transport opcode 58 reports the active optical-engine flag at 0x2000493E.
int __fastcall emit_active_optical_flag_transport(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = 0;
  if ( MEMORY[0x2000493E] > 1u )
  {
    MEMORY[0x2000493E] = 0;
    persist_active_optical_engine_flag(0, *a1);
  }
  LOBYTE(v5) = MEMORY[0x2000493E];
  return emit_transport_frame_via_channel_table(58, 1, (int)&v5);
}

//----- (0000671C) --------------------------------------------------------
// Transport opcode 23 reports HyperClick by calling get_hyperclick_enabled(profile). This aligns directly with the front-end getHyperClick(cmd23) path.
int __fastcall emit_hyperclick_status_report(unsigned __int8 *ctx, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = get_hyperclick_enabled(*ctx);
  return emit_transport_frame_via_channel_table(23, 1, (int)&v5);
}

//----- (00006734) --------------------------------------------------------
// Transport opcode 42 reports Button Delay / Slam-Click level by calling get_button_delay_level(profile). This aligns directly with the front-end getBtnDelay(cmd42) path.
int __fastcall emit_button_delay_status_report(unsigned __int8 *ctx, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = get_button_delay_level(*ctx);
  return emit_transport_frame_via_channel_table(42, 1, (int)&v5);
}

//----- (0000674C) --------------------------------------------------------
// Transport opcode 8 reports the persisted LOD value at 0x20004932.
int __fastcall emit_lod_status_transport(unsigned __int8 *ctx, int a2, int a3, int a4)
{
  int lod_setting; // r0
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a4;
  lod_setting = get_lod_setting();
  LOBYTE(v7) = lod_setting;
  if ( lod_setting == 255 )
  {
    LOBYTE(v7) = 1;
    persist_lod_setting(1, *ctx);
  }
  return emit_transport_frame_via_channel_table(8, 1, (int)&v7);
}

//----- (00006772) --------------------------------------------------------
int __fastcall sub_6772(unsigned __int8 *a1)
{
  char v2[68]; // [sp+0h] [bp-44h] BYREF

  sub_A064(v2, a1);
  return sub_AAEC(193, (unsigned __int8)(v2[4] + 7), v2);
}

//----- (00006792) --------------------------------------------------------
int __fastcall sub_6792(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = 0;
  return emit_transport_frame_via_channel_table(14, 1, (int)&v5);
}

//----- (000067A6) --------------------------------------------------------
int __fastcall sub_67A6(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  v4 = *a1;
  LOBYTE(v6) = v4;
  LOBYTE(v6) = sub_89E0(v4);
  return emit_transport_frame_via_channel_table(163, 1, (int)&v6);
}
// 89E0: using guessed type int __fastcall sub_89E0(_DWORD);

//----- (000067C2) --------------------------------------------------------
int __fastcall sub_67C2(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  v4 = *a1;
  LOBYTE(v6) = v4;
  LOBYTE(v6) = sub_89F8(v4);
  return emit_transport_frame_via_channel_table(165, 1, (int)&v6);
}
// 89F8: using guessed type int __fastcall sub_89F8(_DWORD);

//----- (000067DE) --------------------------------------------------------
int __fastcall sub_67DE(int a1)
{
  int v2; // [sp+0h] [bp-4h] BYREF

  v2 = sub_8A10(a1);
  return emit_transport_frame_via_channel_table(167, 2, (int)&v2);
}
// 8A10: using guessed type int __fastcall sub_8A10(_DWORD);

//----- (000067F2) --------------------------------------------------------
int __fastcall sub_67F2(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = get_sleep_timeout_setting();
  return emit_transport_frame_via_channel_table(25, 1, (int)&v5);
}

//----- (00006808) --------------------------------------------------------
int __fastcall sub_6808(int a1)
{
  int v2; // [sp+0h] [bp-4h] BYREF

  v2 = sub_8A28(a1);
  return emit_transport_frame_via_channel_table(21, 3, (int)&v2);
}
// 8A28: using guessed type int __fastcall sub_8A28(_DWORD);

//----- (0000681C) --------------------------------------------------------
// Transport opcode 50 reports the staged optical-engine mode at 0x2000493D.
int __fastcall emit_staged_optical_engine_mode_transport(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = get_staged_optical_engine_mode();
  return emit_transport_frame_via_channel_table(50, 1, (int)&v5);
}

//----- (00006832) --------------------------------------------------------
int __fastcall sub_6832(int a1, int a2, int a3, int a4)
{
  int active_profile_index; // r0
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  active_profile_index = get_active_profile_index();
  LOBYTE(v6) = active_profile_index;
  if ( active_profile_index == 255 )
  {
    LOBYTE(v6) = 1;
    sub_94D4(1);
  }
  return emit_transport_frame_via_channel_table(16, 1, (int)&v6);
}

//----- (00006854) --------------------------------------------------------
// Transport opcode 6 reports the effective report-rate setting after route normalization.
int __fastcall emit_report_rate_status_transport(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = get_effective_report_rate_setting();
  return emit_transport_frame_via_channel_table(6, 1, (int)&v5);
}

//----- (0000686A) --------------------------------------------------------
int __fastcall sub_686A(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = sub_A25C();
  return emit_transport_frame_via_channel_table(46, 1, (int)&v5);
}

//----- (00006880) --------------------------------------------------------
int sub_6880()
{
  char v1; // [sp+0h] [bp-4h] BYREF
  __int16 v2; // [sp+1h] [bp-3h]
  char v3; // [sp+3h] [bp-1h]

  v1 = MEMORY[0x20003DCC];
  v2 = MEMORY[0x20003DCD];
  v3 = MEMORY[0x20003DCF];
  return emit_transport_frame_via_channel_table(56, 4, (int)&v1);
}

//----- (000068B0) --------------------------------------------------------
// Transport opcode 12 reports the persisted System Mode value at 0x20004935.
int __fastcall emit_system_mode_status_transport(unsigned __int8 *ctx, int a2, int a3, int a4)
{
  unsigned int system_mode_setting; // r0
  char system_mode[4]; // [sp+0h] [bp-4h] BYREF

  *(_DWORD *)system_mode = a4;
  system_mode_setting = get_system_mode_setting();// Transport opcode 12 reports the current system mode value stored at 0x20004935. This aligns with the front-end System Mode UI for the newer custom-sensor devices.
  system_mode[0] = system_mode_setting;
  if ( system_mode_setting > 2 )
  {
    system_mode[0] = 0;
    persist_system_mode_setting(0, *ctx);
    set_active_system_mode_shadow(0);
  }
  return emit_transport_frame_via_channel_table(12, 1, (int)system_mode);
}

//----- (000068DE) --------------------------------------------------------
int __fastcall sub_68DE(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = sub_1151C();
  return emit_transport_frame_via_channel_table(55, 1, &v5);
}
// A6B8: using guessed type int __fastcall sub_A6B8(_DWORD, _DWORD, _DWORD);

//----- (000068F4) --------------------------------------------------------
int __fastcall sub_68F4(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = sub_8C68(a1, a2, a3, a4);
  return emit_transport_frame_via_channel_table(170, 1, (int)&v5);
}

//----- (0000690A) --------------------------------------------------------
unsigned __int8 *__fastcall sub_690A(unsigned int a1, unsigned __int8 *a2)
{
  unsigned __int8 *result; // r0

  if ( (a1 & 0x20) != 0 )
    return sub_A644(a2);
  if ( (a1 & 0x40) != 0 )
    return sub_10BE8(a2);
  result = (unsigned __int8 *)(a1 >> 7);
  if ( result )
    return (unsigned __int8 *)sub_10C5C((int)a2);
  return result;
}

//----- (00006930) --------------------------------------------------------
int __fastcall sub_6930(int a1, int a2)
{
  unsigned int v2; // r2
  int v3; // r3

  v2 = 0;
  if ( !MEMORY[0x20003E73] )
    return 0;
  v3 = *(unsigned __int8 *)(a1 + 1);
  while ( v3 != *(unsigned __int8 *)(5 * v2 + 0x10014B44) )
  {
    v2 = (unsigned __int8)(v2 + 1);
    if ( v2 >= MEMORY[0x20003E73] )
      return 0;
  }
  *(_BYTE *)a2 = v3;
  *(_DWORD *)(a2 + 4) = a1 + 7;
  return 1;
}

//----- (00006978) --------------------------------------------------------
int sub_6978()
{
  _BYTE v1[2]; // [sp+0h] [bp-4h] BYREF
  __int16 v2; // [sp+2h] [bp-2h]

  v2 = 0;
  v1[0] = 2;
  v1[1] = sub_9EF8(0);
  build_checksum_guarded_frame(18, (int)v1, 2u);
  MEMORY[0x20004AE1] = 1;
  return 1;
}
// 9EF8: using guessed type int __fastcall sub_9EF8(_DWORD);

//----- (0000699C) --------------------------------------------------------
int __fastcall sub_699C(int a1)
{
  unsigned int v1; // r0
  unsigned int payload_len; // [sp+0h] [bp-Ch] BYREF
  int v4; // [sp+4h] [bp-8h]

  v1 = *(unsigned __int8 *)(a1 + 1);
  v4 = 0;
  payload_len = 5;
  if ( v1 < 7 )
  {
    sub_A030(v1, (char *)&payload_len + 1);
  }
  else
  {
    *(_WORD *)((char *)&payload_len + 1) = 0;
    HIBYTE(payload_len) = 0;
    LOBYTE(v4) = 0;
  }
  build_checksum_guarded_frame(2, (int)&payload_len, (unsigned __int8)payload_len);
  MEMORY[0x20004AD1] = 1;
  return 1;
}
// A030: using guessed type int __fastcall sub_A030(_DWORD, _DWORD);

//----- (000069DC) --------------------------------------------------------
int sub_69DC()
{
  _BYTE v1[2]; // [sp+0h] [bp-4h] BYREF
  __int16 v2; // [sp+2h] [bp-2h]

  v2 = 0;
  v1[0] = 2;
  v1[1] = sub_B1B4(0);
  build_checksum_guarded_frame(17, (int)v1, 2u);
  MEMORY[0x20004AE0] = 1;
  return 1;
}
// B1B4: using guessed type int __fastcall sub_B1B4(_DWORD);

//----- (00006A00) --------------------------------------------------------
int sub_6A00()
{
  int v1; // [sp+0h] [bp-4h] BYREF

  v1 = 258;
  build_checksum_guarded_frame(19, (int)&v1, 2u);
  MEMORY[0x20004AE2] = 1;
  return 1;
}

//----- (00006A24) --------------------------------------------------------
int __fastcall sub_6A24(unsigned __int8 *a1)
{
  unsigned int dpi_value_for_stage; // r0
  char v3; // r6
  unsigned int v4; // r4
  int v5; // r0
  int v6; // r7
  int v8; // [sp+0h] [bp-4h] BYREF

  v8 = 0;
  dpi_value_for_stage = get_dpi_value_for_stage(a1[1]);
  v3 = dpi_value_for_stage;
  v4 = dpi_value_for_stage;
  if ( (unsigned __int8)dpi_value_for_stage == 255
    && BYTE1(dpi_value_for_stage) == 255
    && dpi_value_for_stage << 8 >> 24 == 255 )
  {
    v5 = a1[1];
    v6 = *(unsigned __int16 *)(2 * v5 + 0x10014AEC);
    set_profile_dpi_stage_value_and_mark_dirty(v5, v6, *a1, 0, v8);
    sub_E3FC(v6);
  }
  LOBYTE(v8) = 4;
  BYTE1(v8) = v3;
  BYTE2(v8) = BYTE1(v4);
  HIBYTE(v8) = v4 << 8 >> 24;
  build_checksum_guarded_frame(4, (int)&v8, 4u);
  MEMORY[0x20004AD3] = 1;
  return 1;
}
// E3FC: using guessed type int __fastcall sub_E3FC(_DWORD);
// 11750: using guessed type int __fastcall sub_11750(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (00006AD4) --------------------------------------------------------
// Checksum protocol opcode 58 reports the active optical-engine flag at 0x2000493E.
int __fastcall build_active_optical_flag_checksum(unsigned __int8 *a1)
{
  unsigned int payload_len; // [sp+0h] [bp-4h] BYREF

  payload_len = 2;
  if ( MEMORY[0x2000493E] > 1u )
  {
    MEMORY[0x2000493E] = 0;
    persist_active_optical_engine_flag(0, *a1);
  }
  BYTE1(payload_len) = MEMORY[0x2000493E];
  build_checksum_guarded_frame(58, (int)&payload_len, (unsigned __int8)payload_len);
  MEMORY[0x20004B09] = 1;
  return 1;
}

//----- (00006B64) --------------------------------------------------------
// Checksum protocol opcode 8 reports the persisted LOD value at 0x20004932.
int __fastcall build_lod_status_checksum(unsigned __int8 *ctx)
{
  int lod_setting; // r0
  char v3; // r4
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = 0;
  lod_setting = get_lod_setting();
  v3 = lod_setting;
  if ( lod_setting == 255 )
  {
    v3 = 1;
    persist_lod_setting(1, *ctx);
  }
  LOBYTE(v5) = 2;
  BYTE1(v5) = v3;
  build_checksum_guarded_frame(8, (int)&v5, 2u);
  MEMORY[0x20004AD7] = 1;
  return 1;
}

//----- (00006BA0) --------------------------------------------------------
int sub_6BA0()
{
  int v0; // r0
  char v2; // [sp+0h] [bp-4h] BYREF
  __int16 v3; // [sp+1h] [bp-3h]
  char v4; // [sp+3h] [bp-1h]

  v0 = sub_8A28(0);
  v2 = 4;
  v3 = v0;
  v4 = (unsigned int)(v0 << 8) >> 24;
  build_checksum_guarded_frame(21, (int)&v2, 4u);
  MEMORY[0x20004AE4] = 1;
  return 1;
}
// 8A28: using guessed type int __fastcall sub_8A28(_DWORD);

//----- (00006BFC) --------------------------------------------------------
int sub_6BFC()
{
  int active_profile_index; // r0
  char v1; // r4
  int v3; // [sp+0h] [bp-4h] BYREF

  v3 = 0;
  active_profile_index = get_active_profile_index();
  v1 = active_profile_index;
  if ( active_profile_index == 255 )
  {
    v1 = 1;
    sub_94D4(1);
  }
  LOBYTE(v3) = 2;
  BYTE1(v3) = v1;
  build_checksum_guarded_frame(16, (int)&v3, 2u);
  MEMORY[0x20004ADF] = 1;
  return 1;
}

//----- (00006C30) --------------------------------------------------------
// Checksum protocol opcode 6 reports the effective report-rate setting after route normalization.
int build_report_rate_status_frame()
{
  unsigned int payload_len; // [sp+0h] [bp-4h] BYREF

  payload_len = 2;
  BYTE1(payload_len) = get_effective_report_rate_setting();
  build_checksum_guarded_frame(6, (int)&payload_len, 2u);
  MEMORY[0x20004AD5] = 1;
  return 1;
}

//----- (00006C80) --------------------------------------------------------
int sub_6C80()
{
  char v1; // [sp+0h] [bp-Ch] BYREF
  __int16 v2; // [sp+1h] [bp-Bh]
  char v3; // [sp+3h] [bp-9h]
  int v4; // [sp+4h] [bp-8h]

  v1 = 5;
  v2 = MEMORY[0x20003DCC];
  v3 = MEMORY[0x20003DCE];
  v4 = MEMORY[0x20003DCF];
  build_checksum_guarded_frame(56, (int)&v1, 5u);
  MEMORY[0x20004B07] = 1;
  return 56;
}

//----- (00006CC4) --------------------------------------------------------
// Checksum protocol opcode 12 reports the persisted System Mode value at 0x20004935.
int __fastcall build_system_mode_status_checksum(unsigned __int8 *ctx)
{
  unsigned int system_mode_setting; // r0
  char v3; // r4
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = 0;
  system_mode_setting = get_system_mode_setting();
  v3 = system_mode_setting;
  if ( system_mode_setting > 2 )
  {
    v3 = 0;
    persist_system_mode_setting(0, *ctx);
  }
  LOBYTE(v5) = 2;
  BYTE1(v5) = v3;
  build_checksum_guarded_frame(12, (int)&v5, 2u);
  MEMORY[0x20004ADB] = 1;
  return 1;
}

//----- (00006CFC) --------------------------------------------------------
int sub_6CFC()
{
  int v1; // [sp+0h] [bp-4h] BYREF

  v1 = 2;
  BYTE1(v1) = sub_1151C();
  build_checksum_guarded_frame(55, &v1, 2);
  MEMORY[0x20004B06] = 1;
  return 55;
}
// 4B64: using guessed type int __fastcall sub_4B64(_DWORD, _DWORD, _DWORD);

//----- (00006D2A) --------------------------------------------------------
int __fastcall sub_6D2A(int result, int a2, int a3, int a4)
{
  unsigned int v4; // r3
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  v4 = *(unsigned __int8 *)(result + 1);
  v5 = 0;
  v5 = *(_DWORD *)(result + 2);
  if ( v4 < 7 )
    return sub_8F9C(v4, (int)&v5);
  return result;
}

//----- (00006D54) --------------------------------------------------------
unsigned int __fastcall sub_6D54(unsigned __int8 *a1)
{
  int v2; // r5
  unsigned int v3; // r3
  unsigned int result; // r0

  v2 = a1[1];
  v3 = a1[4];
  if ( v3 > 9 )
    LOBYTE(v3) = 0;
  set_profile_dpi_stage_value_and_mark_dirty(a1[1], (a1[3] << 8) | a1[2], *a1, v3);
  result = get_active_dpi_stage();
  if ( result == v2 )
    return apply_sensor_dpi_registers(((result >> 8 << 8) | a1[2]) & 0xFF0000FF | (unsigned __int16)(a1[3] << 8) | (a1[4] << 16) & 0xFF0000);
  return result;
}

//----- (00006DA2) --------------------------------------------------------
int __fastcall sub_6DA2(unsigned __int8 *a1)
{
  int v1; // r5
  unsigned int dpi_value_for_stage; // r6

  v1 = a1[1];
  dpi_value_for_stage = get_dpi_value_for_stage(v1);
  persist_active_dpi_stage(v1, *a1);
  return apply_sensor_dpi_registers(dpi_value_for_stage);
}

//----- (00006DC0) --------------------------------------------------------
int __fastcall sub_6DC0(int a1)
{
  char v1; // r4

  v1 = *(_BYTE *)(a1 + 1);
  mark_profile_dpi_stage_count_dirty();
  return set_dpi_stage_count(v1);
}

//----- (00006DD0) --------------------------------------------------------
// Checksum protocol cmd20 handler. Resets a small runtime state block through sub_F634(2107, 3, ...), marks reapply-needed flags, posts state code 21, and toggles the reset notification latch.
int handle_reset_request_checksum()
{
  int v6; // [sp+0h] [bp-4h] BYREF

  _R4 = __get_CPSR();
  v6 = 0;
  __disable_irq();
  sub_F634(2107, 3, &v6);
  __asm { MSR.W           PRIMASK, R4 }
  sub_11A5C();
  sub_11988(0);
  sub_7808(3);
  clear_pending_vendor_slot(21);
  return sub_C290(1);
}
// 7808: using guessed type int __fastcall sub_7808(_DWORD);
// BEA8: using guessed type int __fastcall sub_BEA8(_DWORD);
// C290: using guessed type int __fastcall sub_C290(_DWORD);
// F634: using guessed type int __fastcall sub_F634(_DWORD, _DWORD, _DWORD);

//----- (00006E0C) --------------------------------------------------------
int __fastcall handle_active_optical_flag_request_checksum(unsigned __int8 *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3

  persist_active_optical_engine_flag(a1[1], *a1);// This handler persists the active binary optical-engine flag and immediately reapplies the LOD-dependent register script using the current LOD value at 0x20004932.
  return apply_lod_and_optical_register_script(MEMORY[0x20004932], v1, v2, v3);
}
// 6E1A: variable 'v1' is possibly undefined
// 6E1A: variable 'v2' is possibly undefined
// 6E1A: variable 'v3' is possibly undefined
// 8FCC: using guessed type int __fastcall sub_8FCC(_DWORD, _DWORD);

//----- (00006E30) --------------------------------------------------------
int __fastcall handle_button_delay_setting_request_proto_a(unsigned __int8 *packet)
{
  return persist_button_delay_level(packet[1], *packet);
}

//----- (00006E3C) --------------------------------------------------------
int __fastcall handle_lod_setting_request_checksum(unsigned __int8 *packet)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3

  persist_lod_setting(packet[1], *packet);
  return apply_lod_and_optical_register_script(packet[1], v2, v3, v4);
}
// 6E4A: variable 'v2' is possibly undefined
// 6E4A: variable 'v3' is possibly undefined
// 6E4A: variable 'v4' is possibly undefined

//----- (00006E52) --------------------------------------------------------
void __fastcall handle_staged_optical_engine_setting_request_checksum(unsigned __int8 *packet)
{                                               // This handler updates a second optical-engine related state at 0x2000493D only when the current system mode is not 2. The exact relationship between the staged value (0x2000493D) and the active flag (0x2000493E) is still unresolved from static analysis.
  int v2; // r0

  if ( get_system_mode_setting() != 2 )
  {
    v2 = persist_staged_optical_engine_mode(packet[1], *packet);
    sub_FF60(v2);
  }
}

//----- (00006E6C) --------------------------------------------------------
int __fastcall sub_6E6C(int a1)
{
  sub_94D4(*(unsigned __int8 *)(a1 + 1));
  sub_11A5C();
  sub_7808(4);
  return apply_active_profile_configuration();
}
// 7808: using guessed type int __fastcall sub_7808(_DWORD);
// 94D4: using guessed type int __fastcall sub_94D4(_DWORD);

//----- (00006E84) --------------------------------------------------------
// Checksum protocol cmd5 handler. Persists a report-rate setting for the current profile, normalizes it for the active route via normalize_report_rate_setting_for_route(), then reconfigures the transport route state.
void __fastcall handle_report_rate_setting_request_checksum(unsigned __int8 *a1)
{
  int v2; // r5
  bool v3; // zf
  int v4; // r1
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0

  v2 = a1[1];
  v3 = sub_BD2C() == 0;
  v4 = *a1;
  v5 = a1[1];
  if ( v3 )
    persist_report_rate_setting_for_link_mode(v5, v4);
  else
    persist_report_rate_setting_for_wireless_mode(v5, v4);
  v6 = normalize_report_rate_setting_for_route(v2);
  clear_pending_vendor_slot(16);
  v7 = sub_C284(v6);
  ramapi_publish_run_state_code(v7);
  if ( v8 != v6 )
  {
    sub_3C08(v8);
    ramapi_transport_configure_route(v9, v6, 0);
    ramapi_set_run_state_code(1);
    sub_3B48(1);
  }
}
// 6EBA: variable 'v8' is possibly undefined
// 6EC4: variable 'v9' is possibly undefined
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 3BB4: using guessed type int __fastcall sub_3BB4(_DWORD);
// 3C14: using guessed type int __fastcall sub_3C14(_DWORD, _DWORD, _DWORD);
// C284: using guessed type int __fastcall sub_C284(_DWORD);

//----- (00006ED6) --------------------------------------------------------
int __fastcall sub_6ED6(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  v4 = *(unsigned __int8 *)(a1 + 1);
  if ( v4 )
    LOBYTE(v4) = 1;
  return sub_B130(v4, a2, a3, a4);
}

//----- (00006EE6) --------------------------------------------------------
int __fastcall handle_system_mode_setting_request_checksum(unsigned __int8 *a1)
{
  int v2; // r0

  persist_system_mode_setting(a1[1], *a1);      // Table B opcode 11 handler: applies system mode 0/1/2 by mapping to register scripts 0/2/4 without the trailing active-shadow update visible in the protocol-A variant.
  if ( a1[1] )
  {
    if ( a1[1] == 1 && sub_7778() != 2 )
    {
      v2 = 2;
      return apply_system_mode_register_script(v2);
    }
    return sub_FF60();
  }
  if ( sub_7778() == 2 )
    return sub_FF60();
  v2 = 0;
  return apply_system_mode_register_script(v2);
}
// 7778: using guessed type int sub_7778(void);
// FF60: using guessed type int sub_FF60(void);

//----- (00006F20) --------------------------------------------------------
int sub_6F20()
{
  int v1; // [sp+0h] [bp-4h] BYREF

  v1 = 3;
  build_checksum_guarded_frame(54, (int)&v1, 3u);
  MEMORY[0x20004B05] = 1;
  return 1;
}

//----- (00006F44) --------------------------------------------------------
int sub_6F44()
{
  int v0; // r0
  _DWORD v2[3]; // [sp+0h] [bp-Ch] BYREF

  memset(v2, 0, sizeof(v2));
  if ( get_system_mode_setting() == 2 )
    v0 = (unsigned __int8)(8 * get_lod_setting());
  else
    v0 = (unsigned __int8)(8 * (get_lod_setting() + 3));
  sub_F624(v0 + 2110, 8, (char *)v2 + 1);
  LOBYTE(v2[0]) = 9;
  build_checksum_guarded_frame(53, (int)v2, 9u);
  MEMORY[0x20004B04] = 1;
  return 53;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00006F9C) --------------------------------------------------------
int __fastcall sub_6F9C(int a1)
{
  int v2; // r4
  int result; // r0
  _DWORD v9[3]; // [sp+0h] [bp-Ch] BYREF

  v9[0] = 0;
  v9[1] = 0;
  if ( get_system_mode_setting() == 2 )
    v2 = (unsigned __int8)(8 * get_lod_setting());
  else
    v2 = (unsigned __int8)(8 * (get_lod_setting() + 3));
  sub_4748(v9, a1 + 1);
  _R5 = __get_CPSR();
  __disable_irq();
  result = sub_F634(v2 + 2110, 8, (int)v9);
  __asm { MSR.W           PRIMASK, R5 }
  return result;
}
// 4748: using guessed type int __fastcall sub_4748(_DWORD, _DWORD);

//----- (00006FEE) --------------------------------------------------------
int __fastcall sub_6FEE(int a1)
{
  return sub_8BEC(*(unsigned __int8 *)(a1 + 1));
}

//----- (00006FF8) --------------------------------------------------------
int __fastcall sub_6FF8(int a1, int a2, int a3, int a4)
{
  int v4; // r3
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  v4 = *(unsigned __int8 *)(a1 + 1);
  v6 = *(_DWORD *)(a1 + 2);
  return sub_8F9C(v4, (int)&v6);
}

//----- (0000701C) --------------------------------------------------------
int sub_701C()
{
  return sub_11CF0(4, 268454107, 0x4000, 1, 1);
}

//----- (00007034) --------------------------------------------------------
unsigned int __fastcall sub_7034(unsigned __int8 *a1)
{
  int v2; // r5
  unsigned int v3; // r3
  unsigned int result; // r0

  v2 = a1[1];
  v3 = a1[4];
  if ( v3 > 9 )
    LOBYTE(v3) = 0;
  set_profile_dpi_stage_value_and_mark_dirty(a1[1], (a1[3] << 8) | a1[2], *a1, v3);
  result = get_active_dpi_stage();
  if ( result == v2 )
    return apply_sensor_dpi_registers(((result >> 8 << 8) | a1[2]) & 0xFF0000FF | (unsigned __int16)(a1[3] << 8) | (a1[4] << 16) & 0xFF0000);
  return result;
}

//----- (00007082) --------------------------------------------------------
int __fastcall sub_7082(unsigned __int8 *a1)
{
  int v1; // r4
  unsigned int dpi_value_for_stage; // r0

  v1 = a1[1];
  persist_active_dpi_stage(v1, *a1);
  dpi_value_for_stage = get_dpi_value_for_stage(v1);
  return apply_sensor_dpi_registers(dpi_value_for_stage);
}

//----- (0000709A) --------------------------------------------------------
int __fastcall sub_709A(int a1)
{
  char v1; // r4

  v1 = *(_BYTE *)(a1 + 1);
  mark_profile_dpi_stage_count_dirty();
  return set_dpi_stage_count(v1);
}

//----- (000070AC) --------------------------------------------------------
// Direct transport protocol cmd20 handler. Runtime reset counterpart for the direct transport table; performs the same state-reset and reapply signaling without the checksum-framed notification tail.
int handle_reset_request_transport()
{
  int v6; // [sp+0h] [bp-4h] BYREF

  _R4 = __get_CPSR();
  v6 = 0;
  __disable_irq();
  sub_F634(2107, 3, &v6);
  __asm { MSR.W           PRIMASK, R4 }
  sub_11A5C();
  sub_11988(0);
  return sub_7808(3);
}
// 7808: using guessed type int __fastcall sub_7808(_DWORD);
// F634: using guessed type int __fastcall sub_F634(_DWORD, _DWORD, _DWORD);

//----- (000070DC) --------------------------------------------------------
int __fastcall handle_active_optical_flag_request_transport(unsigned __int8 *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3

  persist_active_optical_engine_flag(a1[1], *a1);
  return apply_lod_and_optical_register_script(MEMORY[0x20004932], v1, v2, v3);
}
// 70EA: variable 'v1' is possibly undefined
// 70EA: variable 'v2' is possibly undefined
// 70EA: variable 'v3' is possibly undefined
// 8FCC: using guessed type int __fastcall sub_8FCC(_DWORD, _DWORD);

//----- (00007100) --------------------------------------------------------
int __fastcall sub_7100(unsigned __int8 *a1)
{
  return persist_hyperclick_enabled(a1[1], *a1);
}

//----- (0000710C) --------------------------------------------------------
int __fastcall handle_button_delay_setting_request_proto_b(unsigned __int8 *packet)
{
  return persist_button_delay_level(packet[1], *packet);
}

//----- (00007118) --------------------------------------------------------
int __fastcall handle_lod_setting_request_transport(unsigned __int8 *packet)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3

  persist_lod_setting(packet[1], *packet);
  return apply_lod_and_optical_register_script(packet[1], v2, v3, v4);
}
// 7126: variable 'v2' is possibly undefined
// 7126: variable 'v3' is possibly undefined
// 7126: variable 'v4' is possibly undefined

//----- (0000712C) --------------------------------------------------------
int __fastcall sub_712C(char *a1)
{
  int v1; // r1
  unsigned int v2; // r5
  unsigned int v3; // r4
  int v4; // r6
  int result; // r0
  int v6; // [sp+0h] [bp-Ch]
  int v7; // [sp+4h] [bp-8h]

  v1 = ((unsigned __int8)a1[3] << 8) | (unsigned __int8)a1[2];
  v2 = (unsigned __int8)a1[4];
  v7 = (unsigned __int8)a1[5];
  v3 = (unsigned __int8)a1[6];
  v4 = ((unsigned __int8)a1[1] << 8) | (unsigned __int8)*a1;
  if ( v3 >= 3 )
    v3 = 0;
  v6 = v1 - 1;
  if ( v4 <= v1 - 1 )
  {
    if ( 320 - v2 < MEMORY[0x20003E8E] )
      v2 = (unsigned __int8)(64 - v2);
    sub_141A((_BYTE *)(MEMORY[0x20003E8E] + 536889728), a1 + 7, v2);
    MEMORY[0x20003E8E] += v2;
    MEMORY[0x2000497D] = v3;
    MEMORY[0x2000497E] = MEMORY[0x20003E8E];
  }
  result = v6;
  if ( v4 == v6 )
  {
    sub_B428((char *)0x2000497D, v3, v7, (unsigned __int16)(MEMORY[0x20003E8E] + 3));
    MEMORY[0x20003E8E] = 0;
    return 0;
  }
  return result;
}

//----- (000071B2) --------------------------------------------------------
int __fastcall sub_71B2(int a1)
{
  return sub_8AEC(*(unsigned __int8 *)(a1 + 1));
}

//----- (000071BC) --------------------------------------------------------
int __fastcall sub_71BC(int a1)
{
  return sub_8B2C(*(unsigned __int8 *)(a1 + 1));
}

//----- (000071DE) --------------------------------------------------------
int __fastcall sub_71DE(unsigned __int8 *a1)
{
  return persist_sleep_timeout_setting(a1[1], *a1);
}

//----- (000071EC) --------------------------------------------------------
int __fastcall handle_staged_optical_engine_setting_request_transport(unsigned __int8 *a1)
{
  int result; // r0

  result = get_system_mode_setting();           // Table A opcode 49 handler: persists the staged optical-engine mode at 0x2000493D when system mode != 2.
  if ( result != 2 )
  {
    persist_staged_optical_engine_mode(a1[1], *a1);
    return sub_11CF0(4, 268454107, 0x4000, 1);
  }
  return result;
}
// 11CF0: using guessed type int __fastcall sub_11CF0(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (00007230) --------------------------------------------------------
// Direct transport protocol cmd5 handler. Same logical role as the checksum variant: persist report rate, normalize it for the active route, then switch transport context/commit path depending on the current link mode.
void __fastcall handle_report_rate_setting_request_transport(unsigned __int8 *a1)
{
  int v2; // r5
  bool v3; // zf
  int v4; // r1
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0

  v2 = a1[1];
  v3 = sub_BD2C() == 0;
  v4 = *a1;
  v5 = a1[1];
  if ( v3 )
    persist_report_rate_setting_for_link_mode(v5, v4);
  else
    persist_report_rate_setting_for_wireless_mode(v5, v4);
  v6 = normalize_report_rate_setting_for_route(v2);
  ramapi_publish_run_state_code(v6);
  if ( v7 != v6 )
  {
    if ( sub_BD2C() )
    {
      v8 = ramapi_transport_configure_route(0, v6, 1);
      v9 = ramapi_transport_select_context(v8);
      ramapi_transport_commit_primary(v9);
    }
    else
    {
      sub_3C08(0);
      v11 = ramapi_transport_configure_route(v10, v6, 0);
      v12 = ramapi_transport_select_context(v11);
      ramapi_transport_commit_secondary(v12);
      ramapi_set_run_state_code(1);
      sub_3B48(1);
    }
  }
}
// 725A: variable 'v7' is possibly undefined
// 7280: variable 'v10' is possibly undefined
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 3BB4: using guessed type int __fastcall sub_3BB4(_DWORD);
// 3C14: using guessed type int __fastcall sub_3C14(_DWORD, _DWORD, _DWORD);
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);
// 3C2C: using guessed type int __fastcall sub_3C2C(_DWORD);
// 3C38: using guessed type int __fastcall sub_3C38(_DWORD);

//----- (0000729A) --------------------------------------------------------
int __fastcall sub_729A(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  v4 = *(unsigned __int8 *)(a1 + 1);
  if ( v4 )
    LOBYTE(v4) = 1;
  return sub_B130(v4, a2, a3, a4);
}

//----- (000072AA) --------------------------------------------------------
int __fastcall handle_system_mode_setting_request_transport(unsigned __int8 *a1)
{
  int v2; // r0
  int v4; // r0
  int v5; // r0

  persist_system_mode_setting(a1[1], *a1);      // Table A opcode 11 handler: applies system mode 0/1/2 by mapping to register scripts 0/2/4 and then updates the active shadow at 0x20003D75.
  if ( !a1[1] )
  {
    v4 = apply_system_mode_register_script(0);
    if ( sub_7778(v4) != 2 )
      return set_active_system_mode_shadow(a1[1]);
    goto LABEL_8;
  }
  if ( a1[1] == 1 )
  {
    v5 = apply_system_mode_register_script(2);
    if ( sub_7778(v5) != 2 )
      return set_active_system_mode_shadow(a1[1]);
LABEL_8:
    ((void (*)(void))sub_FF60)();
    return set_active_system_mode_shadow(a1[1]);
  }
  v2 = apply_system_mode_register_script(4);
  sub_FF60(v2);
  return set_active_system_mode_shadow(a1[1]);
}
// 7778: using guessed type int __fastcall sub_7778(_DWORD);
// FF60: using guessed type int __fastcall sub_FF60(_DWORD);

//----- (000072F6) --------------------------------------------------------
int __fastcall sub_72F6(int a1)
{
  char v3; // [sp+0h] [bp-1Ch] BYREF
  _WORD v4[13]; // [sp+1h] [bp-1Bh] BYREF

  sub_1532(v4, 0x19u, 0xFFu);
  v3 = *(_BYTE *)(a1 + 4);
  sub_141A(v4, (char *)(a1 + 6), *(unsigned __int8 *)(a1 + 4));
  return sub_1123C((int)&v3);
}

//----- (00007322) --------------------------------------------------------
void __fastcall sub_7322(int a1)
{
  int v2; // r0
  unsigned __int8 v3; // [sp+0h] [bp-1Ch] BYREF
  _WORD v4[13]; // [sp+1h] [bp-1Bh] BYREF

  sub_1532(v4, 0x10u, 0xFFu);
  if ( *(unsigned __int8 *)(a1 + 4) <= 0x10u )
    v3 = *(_BYTE *)(a1 + 4);
  else
    v3 = 16;
  sub_141A(v4, (char *)(a1 + 6), v3);
  v2 = sub_1127C((int)&v3);
  sub_FF60(v2);
}

//----- (0000735E) --------------------------------------------------------
int __fastcall sub_735E(int a1)
{
  return sub_90A0(*(unsigned __int8 *)(a1 + 1));
}

//----- (00007368) --------------------------------------------------------
int sub_7368()
{
  int v1; // [sp+0h] [bp-4h] BYREF

  v1 = 0;
  return emit_transport_frame_via_channel_table(53, 2, (int)&v1);
}

//----- (00007380) --------------------------------------------------------
int sub_7380()
{
  int v0; // r0
  _DWORD v2[3]; // [sp+0h] [bp-Ch] BYREF

  v2[0] = 0;
  v2[1] = 0;
  if ( get_system_mode_setting() == 2 )
    v0 = (unsigned __int8)(8 * get_lod_setting());
  else
    v0 = (unsigned __int8)(8 * (get_lod_setting() + 3));
  sub_F624(v0 + 2110, 8, v2);
  return emit_transport_frame_via_channel_table(53, 8, (int)v2);
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (000073C4) --------------------------------------------------------
int __fastcall sub_73C4(int a1)
{
  int v2; // r4
  int result; // r0
  _DWORD v9[3]; // [sp+0h] [bp-Ch] BYREF

  v9[0] = 0;
  v9[1] = 0;
  if ( get_system_mode_setting() == 2 )
    v2 = (unsigned __int8)(8 * get_lod_setting());
  else
    v2 = (unsigned __int8)(8 * (get_lod_setting() + 3));
  sub_4748(v9, a1 + 1);
  _R5 = __get_CPSR();
  __disable_irq();
  result = sub_F634(v2 + 2110, 8, (int)v9);
  __asm { MSR.W           PRIMASK, R5 }
  return result;
}
// 4748: using guessed type int __fastcall sub_4748(_DWORD, _DWORD);

//----- (00007414) --------------------------------------------------------
int __fastcall normalize_report_rate_setting_for_route(int rate)
{
  int v2; // r5
  int v3; // r0

  v2 = 0;
  if ( sub_BD2C() || (sub_3C08(0), !v3) )
  {
    if ( rate )
    {
      if ( rate != 1 )
        LOBYTE(rate) = 1;
    }
    else
    {
      v2 = 1;
    }
    if ( sub_BD2C() )
      MEMORY[0x20004930] = rate;
    else
      MEMORY[0x20004931] = rate;
  }
  else
  {
    if ( rate != 1 )
    {
      switch ( rate )
      {
        case 2:
          v2 = 6;
          break;
        case 3:
          v2 = 5;
          break;
        case 4:
          v2 = 4;
          break;
        default:
          LOBYTE(rate) = 1;
          break;
      }
    }
    MEMORY[0x2000493A] = rate;
  }
  return v2;
}
// 742A: variable 'v3' is possibly undefined

//----- (00007498) --------------------------------------------------------
int __fastcall sub_7498(_BYTE *a1, int a2)
{
  _BYTE *v3; // r0
  int v4; // r2
  int v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r1
  char v8; // r7
  unsigned __int8 v9; // r0
  char v10; // r5
  int v11; // r0
  char v12; // r2
  __int16 v14; // [sp+0h] [bp-14h] BYREF
  int v15; // [sp+2h] [bp-12h] BYREF
  __int16 v16; // [sp+6h] [bp-Eh]
  int v17; // [sp+8h] [bp-Ch]
  int v18; // [sp+Ch] [bp-8h]
  char v19[4]; // [sp+10h] [bp-4h] BYREF

  v19[0] = 1;
  *(_BYTE *)a2 = a1[1];
  v3 = a1 + 3;
  *(_DWORD *)(a2 + 4) = v3;
  LOBYTE(v4) = 0;
  v5 = (unsigned __int8)*v3;
  if ( !*v3 )
    goto LABEL_13;
  if ( a1 == (_BYTE *)-3 )
    goto LABEL_13;
  v6 = 0;
  v7 = v5 + 2;
  do
  {
    v8 = a1[v6 + 3];
    v6 = (unsigned __int8)(v6 + 1);
    v4 = (unsigned __int8)(v8 + v4);
  }
  while ( v7 > v6 );
  if ( (unsigned __int8)a1[2] == v4 )
  {
LABEL_13:
    MEMORY[0x20003E75] = 0;
    return 1;
  }
  else
  {
    ++MEMORY[0x20003E75];
    if ( MEMORY[0x20003E75] < 3u )
    {
      v19[0] = 2;
    }
    else
    {
      MEMORY[0x20003E75] = 0;
      v19[0] = 1;
    }
    v9 = a1[1];
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v10 = 0;
    v14 = -32758;
    v15 = v9;
    v11 = 0;
    do
    {
      v12 = v19[v11] + v10;
      v11 = (unsigned __int8)(v11 + 1);
      v10 = v12;
    }
    while ( !v11 );
    sub_141A((_BYTE *)&v15 + 2, v19, 1u);
    BYTE1(v15) = v10;
    MEMORY[0x20003DFC] = 5;
    sub_141A((_BYTE *)0x20004AC0, (char *)&v14, 5u);
    *(_BYTE *)((unsigned __int8)a1[1] + 0x20004ACF) = 1;
    return 0;
  }
}
// 74C0: conditional instruction was optimized away because r1.4<100u

//----- (00007578) --------------------------------------------------------
int __fastcall sub_7578(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  LOBYTE(v6) = 8;
  sub_A2D8(1, &v6);
  return sub_A308(a1);
}

//----- (00007594) --------------------------------------------------------
int sub_7594()
{
  int result; // r0

  if ( !MEMORY[0x20003888] )
    return sub_76A0();
  result = MEMORY[0x20003888]();
  if ( !result )
    return sub_76A0();
  return result;
}
// 20003888: using guessed type int (*)(void);

//----- (000075B0) --------------------------------------------------------
int __fastcall sub_75B0(int result)
{
  MEMORY[0x20003888] = result;
  return result;
}

//----- (000076A0) --------------------------------------------------------
int sub_76A0()
{
  int result; // r0
  int v1; // r0

  if ( MEMORY[0x20003D9A] && ramapi_transport_channel_idle(MEMORY[0x2000382C], MEMORY[0x2000382D]) && MEMORY[0x20003D8C] )
    sub_7B04();
  result = MEMORY[0x20003D90];
  if ( MEMORY[0x20003D90] )
  {
    if ( MEMORY[0x20003D8D] )
    {
      if ( !sub_7E18((unsigned int *)0x20003DB8) )
      {
        MEMORY[0x20003D8D] = 0;
        MEMORY[0x20003D8B] = 1;
      }
      MEMORY[0x20003D90] = 0;
    }
    if ( MEMORY[0x20003D8E] )
    {
      if ( sub_7FEC(2, (_WORD *)0x20003DA6) )
      {
        v1 = -1;
      }
      else
      {
        MEMORY[0x20003DBC] = (5 * (unsigned int)MEMORY[0x20003DA6]) >> 4;
        v1 = 0;
      }
      if ( !v1 )
      {
        MEMORY[0x20003D8E] = 0;
        MEMORY[0x20003D8B] = 1;
      }
      MEMORY[0x20003D90] = 0;
    }
    result = MEMORY[0x20003D8F];
    if ( MEMORY[0x20003D8F] )
    {
      if ( !sub_7E58((int *)0x20003DC0) )
      {
        MEMORY[0x20003D8F] = 0;
        MEMORY[0x20003D8B] = 1;
      }
      MEMORY[0x20003D90] = 0;
      return 0;
    }
  }
  return result;
}

//----- (0000774E) --------------------------------------------------------
int sub_774E()
{
  return 0;
}

//----- (00007760) --------------------------------------------------------
int sub_7760()
{
  return MEMORY[0x20003D83];
}

//----- (00007778) --------------------------------------------------------
int sub_7778()
{
  return MEMORY[0x20003D7D];
}

//----- (00007808) --------------------------------------------------------
int __fastcall sub_7808(int result)
{
  *(_BYTE *)(result + 536886745) = 0;
  return result;
}

//----- (00007814) --------------------------------------------------------
int __fastcall begin_runtime_stream_write_session_from_packet(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v5; // r1
  int v6; // r3
  int v7; // r0
  int v9; // [sp+0h] [bp-4h] BYREF

  v9 = a4;
  v5 = *a1 | (a1[1] << 8);
  v6 = a1[2];
  v7 = a1[3] << 24;
  MEMORY[0x20003B9C] = v5 | (v6 << 16) | v7;
  if ( !MEMORY[0x20003B9C] )
    prime_runtime_transport_stream_state(v7);
  MEMORY[0x20003B8C] = a1[4] | (a1[5] << 8) | (a1[6] << 16) | (a1[7] << 24);
  MEMORY[0x20003B90] = MEMORY[0x20003B8C];
  LOBYTE(v9) = 37;
  while ( !MEMORY[0x20003BB4](4, &v9) && !MEMORY[0x20003B66] )
    ;
  return MEMORY[0x20003BBC](MEMORY[0x20003B9C]);
}
// DF20: using guessed type int __fastcall sub_DF20(_DWORD);
// 20003BB4: using guessed type int (__fastcall *)(_DWORD, _DWORD);
// 20003BBC: using guessed type int (__fastcall *)(_DWORD);

//----- (00007878) --------------------------------------------------------
int __fastcall open_runtime_transport_session_from_packet(unsigned __int8 *a1)
{
  int v1; // r0
  char v2; // r4
  _BYTE v4[2]; // [sp+0h] [bp-14h] BYREF
  __int16 v5; // [sp+2h] [bp-12h]
  __int16 v6; // [sp+4h] [bp-10h]
  char v7; // [sp+6h] [bp-Eh]
  char v8; // [sp+7h] [bp-Dh]
  char v9; // [sp+8h] [bp-Ch]
  char v10; // [sp+9h] [bp-Bh]
  __int16 v11; // [sp+Ah] [bp-Ah]
  unsigned __int16 v12; // [sp+Ch] [bp-8h]
  char v13; // [sp+Eh] [bp-6h]
  unsigned __int8 *v14; // [sp+10h] [bp-4h]

  v14 = a1;
  MEMORY[0x20003B65] = 1;
  MEMORY[0x20003B64] = 1;
  MEMORY[0x20003B8C] = 0;
  v1 = MEMORY[0x20003BA8](a1);
  v2 = v1;
  if ( v1 == 1 || v1 == 5 )
    MEMORY[0x20003B88] = *v14 | (v14[1] << 8) | (v14[2] << 16) | (v14[3] << 24);
  rebuild_runtime_transport_queue_geometry();
  v4[1] = 1;
  v5 = MEMORY[0x20003B84];
  v6 = MEMORY[0x20003B72];
  v7 = 0;
  v8 = 16;
  v9 = 0;
  v10 = 0;
  v11 = MEMORY[0x20003B6A];
  v12 = MEMORY[0x20003B6E];
  if ( MEMORY[0x20003B6E] && v12 != 0xFFFF )
    v13 = v2;
  else
    v13 = 3;
  v4[0] = 0;
  return build_runtime_transport_reply_frame(39, (int)v4, 15);
}
// E058: using guessed type int sub_E058(void);
// 20003BA8: using guessed type int (__fastcall *)(_DWORD);

//----- (00007910) --------------------------------------------------------
int __fastcall handle_runtime_stream_read_request_packet(unsigned __int8 *a1)
{
  int result; // r0
  char v2[4]; // [sp+0h] [bp-Ch] BYREF
  _BYTE v3[8]; // [sp+4h] [bp-8h] BYREF

  if ( MEMORY[0x20003BAC](0, a1 + 6, *a1 | (a1[1] << 8) | (a1[2] << 16) | (a1[3] << 24), (a1[5] << 8) | a1[4]) == 1 )
    v2[0] = 0;
  else
    v2[0] = -1;
  v3[0] = 24;
  v3[1] = v2[0];
  while ( !MEMORY[0x20003BB4](4, v3) && !MEMORY[0x20003B66] )
    ;
  result = build_runtime_transport_reply_frame(24, (int)v2, 1);
  MEMORY[0x20003B65] = 0;
  return result;
}
// 20003BAC: using guessed type int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD);
// 20003BB4: using guessed type int (__fastcall *)(_DWORD, _DWORD);

//----- (00007980) --------------------------------------------------------
unsigned int __fastcall write_runtime_stream_chunk_via_callback(int a1, unsigned int a2)
{
  unsigned int v3; // r4
  unsigned int i; // r3
  __int16 v5; // r2
  unsigned int result; // r0

  v3 = a2;
  if ( a2 > MEMORY[0x20003B8C] )
    v3 = MEMORY[0x20003B8C];
  MEMORY[0x20003BB8](MEMORY[0x20003B9C], v3, a1);
  for ( i = 0; i < v3; MEMORY[0x20003B70] += v5 )
    v5 = *(unsigned __int8 *)(a1 + i++);
  MEMORY[0x20003B9C] += v3;
  result = MEMORY[0x20003B8C] - v3;
  MEMORY[0x20003B8C] -= v3;
  return result;
}
// 20003BB8: using guessed type int (__fastcall *)(_DWORD, _DWORD, _DWORD);

//----- (000079C8) --------------------------------------------------------
unsigned __int8 *__fastcall sub_79C8(unsigned __int8 a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned __int8 *result; // r0

  if ( a2 >> 7 )
    return (unsigned __int8 *)sub_110EC(a1, a3);
  if ( (a2 & 0x40) != 0 )
    return sub_10CF8(a3);
  result = (unsigned __int8 *)(a2 << 26);
  if ( (a2 & 0x20) != 0 )
    return sub_A86C(a3);
  return result;
}

//----- (000079F0) --------------------------------------------------------
int __fastcall sub_79F0(char a1, char a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r4

  if ( a4 )
  {
    MEMORY[0x20003E7E] = 4;
    v4 = 1;
    v5 = 2;
  }
  else
  {
    v4 = 0;
    v5 = 1;
  }
  if ( a3 )
  {
    *(_BYTE *)(v4 + 536886910) = a1;
    *(_BYTE *)(v5 + 536886910) = a2;
  }
  else
  {
    *(_BYTE *)(v4 + 536886910) = 0;
    *(_BYTE *)(v5 + 536886910) = 0;
  }
  if ( a4 )
    return ramapi_transport_enqueue_frame(536885288, 536886910, 3);
  else
    return ramapi_transport_emit_small_frame(536886910, 2, 2);
}
// 3B84: using guessed type int __fastcall sub_3B84(_DWORD, _DWORD, _DWORD);
// 3C44: using guessed type int __fastcall sub_3C44(_DWORD, _DWORD, _DWORD);

//----- (00007A3C) --------------------------------------------------------
int sub_7A3C()
{
  sub_159A(268461413, (_DWORD *)0x20004C40);
  sub_159A(268460481, (_DWORD *)0x20004C44);
  sub_159A(268459237, (_DWORD *)0x20004C48);
  sub_159A(268451625, (_DWORD *)0x20004C4C);
  sub_159A(268479745, (_DWORD *)0x20004C50);
  sub_159A(268493169, (_DWORD *)0x20004C54);
  return sub_159A(268493127, (_DWORD *)0x20004C58);
}

//----- (00007AA4) --------------------------------------------------------
int sub_7AA4()
{
  char v1[8]; // [sp+4h] [bp-8h] BYREF

  v1[0] = 48;
  if ( MEMORY[0x20003D96] )
  {
    if ( MEMORY[0x20003D96] == 1 )
    {
      if ( MEMORY[0x20003D8A] )
      {
        MEMORY[0x20003D8A] = 0;
        MEMORY[0x20003D96] = 0;
        return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else if ( sub_AF4C(100, 8, 1, (int)v1, 100) )
  {
    MEMORY[0x20003D96] = 1;
    MEMORY[0x20003DAC] = 0;
    MEMORY[0x20003D85] = 1;
    return 1;
  }
  else
  {
    return -1;
  }
}

//----- (00007B04) --------------------------------------------------------
unsigned int sub_7B04()
{
  unsigned int result; // r0
  int v1; // r5
  int v2; // r7
  int v3; // r0
  char v4; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  result = MEMORY[0x20003D99];
  v1 = 0;
  if ( MEMORY[0x20003D99] )
  {
    v2 = -1;
    switch ( MEMORY[0x20003D99] )
    {
      case 1u:
        if ( MEMORY[0x20003D8B] )
        {
          MEMORY[0x20003D8B] = 0;
          result = 2;
          MEMORY[0x20003D99] = 2;
        }
        else
        {
          result = MEMORY[0x20003D8E];
          if ( !MEMORY[0x20003D8E] )
          {
            result = sub_7FEC(2, (_WORD *)0x20003DA6);
            if ( result )
            {
              v1 = -1;
            }
            else
            {
              result = (5 * (unsigned int)MEMORY[0x20003DA6]) >> 4;
              MEMORY[0x20003DBC] = result;
            }
            if ( v1 )
            {
              MEMORY[0x20003D8E] = 1;
            }
            else
            {
              MEMORY[0x20003D99] = 2;
              return 2;
            }
          }
        }
        break;
      case 2u:
        if ( MEMORY[0x20003D8B] )
        {
          MEMORY[0x20003D8B] = 0;
          result = MEMORY[0x20003DB8];
          if ( MEMORY[0x20003D92] != MEMORY[0x20003DB8] )
            MEMORY[0x20003D92] = MEMORY[0x20003DB8];
        }
        else
        {
          result = MEMORY[0x20003D8D];
          if ( MEMORY[0x20003D8D] )
            return result;
          result = sub_7E18((unsigned int *)0x20003DB8);
          if ( result )
          {
            MEMORY[0x20003D8D] = 1;
            return result;
          }
        }
        MEMORY[0x20003D99] = 3;
        return result;
      case 3u:
        v5[0] = 0;
        result = sub_AE64(100, 6, 1, (int)v5, 100);
        if ( result )
        {
          result = ((10 * (unsigned int)v5[0]) >> 1) - 400;
          v2 = 0;
          MEMORY[0x20003DC4] = result;
        }
        if ( !v2 )
        {
          result = MEMORY[0x20003DC4];
          if ( (unsigned int)(MEMORY[0x20003DC4] - 1) >= 0x95 )
          {
            if ( MEMORY[0x20003DC4] < 450 && MEMORY[0x20003DC4] > 0 )
            {
              if ( MEMORY[0x20003D9C] || (result = MEMORY[0x20003D9B], MEMORY[0x20003D9B]) )
              {
                if ( MEMORY[0x20003D9B] )
                {
                  MEMORY[0x20003D9B] = 0;
                  sub_820C(1u);
                }
                result = MEMORY[0x20003D9C];
                if ( MEMORY[0x20003D9C] )
                {
                  MEMORY[0x20003D9C] = 0;
                  result = sub_81A0(300);
                }
              }
            }
          }
          else
          {
            result = sub_A14C(4) & 0x3F;
            if ( result != 20 )
            {
              result = sub_81A0(60);
              MEMORY[0x20003D9C] = 1;
            }
          }
          MEMORY[0x20003D99] = 0;
          MEMORY[0x20003D9A] = 0;
        }
        break;
    }
  }
  else
  {
    v3 = sub_9F0C();
    if ( MEMORY[0x20003D9E] != v3 )
    {
      MEMORY[0x20003D9E] = v3;
      MEMORY[0x20003D9F] = 0;
      v4 = v3;
      clear_pending_vendor_slot(22);
      sub_C1F8(v4);
    }
    result = MEMORY[0x20003D9E];
    if ( MEMORY[0x20003D9E] == 4 )
    {
      sub_CBD8();
      sub_D194(4);
      ramapi_set_run_state_code(3);
      result = sub_822A(1u);
    }
    MEMORY[0x20003D99] = 1;
  }
  return result;
}

//----- (00007C74) --------------------------------------------------------
int sub_7C74()
{
  int v0; // r4
  int v1; // r5
  int result; // r0
  _BYTE v3[8]; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v3[0] = 0;
  v1 = 0;
  if ( sub_AE64(100, 0, 1, (int)v3, 100) )
    v0 = v3[0];
  else
    v1 = -1;
  result = v1;
  if ( !v1 )
  {
    if ( v0 == 160 )
    {
      result = sub_7EE4();
      if ( !result )
      {
        MEMORY[0x20003D8C] = 1;
        return 0;
      }
    }
    else
    {
      return -2;
    }
  }
  return result;
}

//----- (00007CC4) --------------------------------------------------------
int sub_7CC4()
{
  int v0; // r5
  char v2; // r0
  _BYTE v3[8]; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v3[0] = 0;
  switch ( MEMORY[0x20003D93] )
  {
    case 0:
      if ( !sub_80AC() )
        MEMORY[0x20003D93] = 1;
      return 1;
    case 1:
      if ( !sub_AF4C(100, 16, 80, 268520180, 100) )
        v0 = -1;
      if ( v0 < 0 )
        return 1;
      MEMORY[0x20003D93] = 2;
      return 1;
    case 2:
      v3[0] = 0x80;
      if ( !sub_AF4C(100, 11, 1, (int)v3, 100) )
        return 1;
      MEMORY[0x20003D93] = 3;
      return 1;
    case 3:
      v3[0] = 48;
      if ( !sub_AF4C(100, 10, 1, (int)v3, 100) )
        return 1;
      MEMORY[0x20003D93] = 4;
      return 1;
    case 4:
      v3[0] = -86;
      if ( !sub_AF4C(100, 12, 1, (int)v3, 100) )
        return 1;
      v2 = 5;
      goto LABEL_17;
    case 5:
      v3[0] = 80;
      if ( !sub_AF4C(100, 13, 1, (int)v3, 100) )
        return 1;
      v2 = 6;
LABEL_17:
      MEMORY[0x20003D93] = v2;
      return 1;
    case 6:
      if ( !sub_7AA4() )
      {
        MEMORY[0x20003D93] = 7;
        MEMORY[0x20003D86] = 1;
        MEMORY[0x20003DB0] = 0;
      }
      return 1;
    case 7:
      if ( !MEMORY[0x20003D88] )
        return 1;
      MEMORY[0x20003D88] = 0;
      sub_AE64(100, 167, 1, (int)v3, 200);
      if ( (unsigned int)(v3[0] << 28) >> 30 == 3 )
        return 0;
      MEMORY[0x20003D86] = 1;
      MEMORY[0x20003DB0] = 0;
      ++MEMORY[0x20003D91];
      if ( MEMORY[0x20003D91] < 0x64u || sub_80AC() > 0 )
        return 1;
      MEMORY[0x20003D91] = 0;
      ++MEMORY[0x20003DB4];
      MEMORY[0x20003D93] = 0;
      return -1;
    default:
      MEMORY[0x20003D93] = 0;
      return 0;
  }
}

//----- (00007E18) --------------------------------------------------------
int __fastcall sub_7E18(unsigned int *a1)
{
  unsigned int v3; // r0

  if ( sub_7FEC(4, (_WORD *)0x20003DA8) )
    return -1;
  sub_15AA(100 * ((HIBYTE(MEMORY[0x20003DA8]) << 8) + MEMORY[0x20003DA8]), 0x6400u);
  if ( v3 >= 0x64 )
    v3 = 100;
  *a1 = v3;
  return 0;
}
// 7E46: variable 'v3' is possibly undefined

//----- (00007E58) --------------------------------------------------------
int __fastcall sub_7E58(int *a1)
{
  int v2; // r4
  int v3; // r0
  int v5; // r0
  int v6; // r0
  _BYTE v7[8]; // [sp+4h] [bp-8h] BYREF

  v7[0] = 0;
  v2 = -1;
  if ( sub_7FEC(14, (_WORD *)0x20003DA2) || !sub_AE64(100, 171, 1, (int)v7, 100) )
    return -1;
  v3 = MEMORY[0x20003DA2];
  if ( (MEMORY[0x20003DA2] & 0x8000) != 0 )
    v3 = (unsigned __int16)-MEMORY[0x20003DA2];
  else
    v2 = 1;
  v5 = v3 * v2;
  if ( v7[0] >> 6 )
  {
    v6 = sub_15C6(1600 * v5, 0x2710u);
  }
  else if ( v7[0] )
  {
    v6 = sub_15C6(3815 * v5, 0x2710u);
  }
  else
  {
    v6 = 123456;
  }
  *a1 = v6;
  return 0;
}

//----- (00007EE4) --------------------------------------------------------
int sub_7EE4()
{
  int v0; // r4
  _BYTE v2[8]; // [sp+4h] [bp-8h] BYREF

  v2[0] = 0;
  v0 = 0;
  if ( sub_AE64(100, 8, 1, (int)v2, 100) )
  {
    if ( v2[0] )
      return 1;
    if ( sub_AE64(100, 11, 1, (int)v2, 100) )
    {
      if ( (v2[0] & 0x80) == 0 )
        return 2;
      while ( sub_AE64(100, v0 + 16, 1, (int)v2, 100) )
      {
        if ( *(unsigned __int8 *)(v0 + 268520180) == v2[0] && ++v0 < 80 )
          continue;
        if ( v0 == 80 )
          return 0;
        else
          return 3;
      }
    }
  }
  return -1;
}

//----- (00007F78) --------------------------------------------------------
int sub_7F78()
{
  int v0; // r4
  int v1; // r5
  int result; // r0
  _BYTE v3[4]; // [sp+4h] [bp-4h] BYREF

  v0 = 0;
  v1 = 0;
  if ( MEMORY[0x20003D98] )
  {
    if ( MEMORY[0x20003D98] != 1 )
      return 0;
    result = sub_7CC4();
    if ( result < 0 )
    {
      MEMORY[0x20003D98] = 0;
      return result;
    }
    if ( !result )
      return 0;
  }
  else
  {
    v3[0] = 0;
    if ( sub_AE64(100, 0, 1, (int)v3, 100) )
      v0 = v3[0];
    else
      v1 = -1;
    result = v1;
    if ( !v1 )
    {
      if ( v0 != 160 )
        return -2;
      result = sub_7EE4();
      if ( result >= 0 )
      {
        if ( result )
        {
          MEMORY[0x20003D98] = 1;
          return 1;
        }
        return 0;
      }
    }
  }
  return result;
}

//----- (00007FEC) --------------------------------------------------------
int __fastcall sub_7FEC(__int16 a1, _WORD *a2)
{
  unsigned __int8 v4[8]; // [sp+4h] [bp-8h] BYREF

  *(_DWORD *)v4 = 0;
  if ( !MEMORY[0x20003D97] )
  {
    if ( sub_AE64(100, a1, 2, (int)v4, 100) )
    {
      MEMORY[0x20003DA0] = (v4[0] << 8) + v4[1];
      MEMORY[0x20003D97] = 1;
      return 1;
    }
    goto LABEL_10;
  }
  if ( MEMORY[0x20003D97] == 1 )
  {
    if ( sub_AE64(100, a1, 2, (int)v4, 100) )
    {
      if ( MEMORY[0x20003DA0] != (unsigned __int16)((v4[0] << 8) + v4[1]) )
      {
        MEMORY[0x20003D97] = 2;
        return 1;
      }
      MEMORY[0x20003D97] = 0;
      *a2 = MEMORY[0x20003DA0];
      MEMORY[0x20003DA0] = 0;
      return 0;
    }
LABEL_10:
    MEMORY[0x20003D97] = 0;
    return -1;
  }
  if ( MEMORY[0x20003D97] != 2 )
  {
    MEMORY[0x20003D97] = 0;
    MEMORY[0x20003DA0] = 0;
    return -1;
  }
  if ( sub_AE64(100, a1, 2, (int)v4, 100) )
  {
    *a2 = (v4[0] << 8) + v4[1];
    MEMORY[0x20003DA0] = 0;
    MEMORY[0x20003D97] = 0;
    return 0;
  }
  return -1;
}

//----- (000080AC) --------------------------------------------------------
int sub_80AC()
{
  char v1[8]; // [sp+4h] [bp-8h] BYREF

  v1[0] = 48;
  if ( MEMORY[0x20003D95] )
  {
    if ( MEMORY[0x20003D95] == 1 )
    {
      if ( MEMORY[0x20003D89] )
      {
        MEMORY[0x20003D89] = 0;
        MEMORY[0x20003D95] = 0;
        return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else if ( sub_AF4C(100, 8, 1, (int)v1, 100) )
  {
    MEMORY[0x20003D95] = 1;
    MEMORY[0x20003DAC] = 0;
    MEMORY[0x20003D84] = 1;
    return 1;
  }
  else
  {
    return -1;
  }
}

//----- (0000810E) --------------------------------------------------------
BOOL __fastcall sub_810E(int a1, int a2, int a3, int a4)
{
  BOOL result; // r0

  if ( sub_11918(a4, 6, a4, a4) )
    return 1;
  if ( sub_11918(3, 7, 6, 43) )
    return 1;
  if ( sub_81A0(300) )
    return 1;
  if ( sub_11918(6, 2, 1, 0) )
    return 1;
  if ( sub_11918(7, 4, 1, 0) )
    return 1;
  if ( sub_11918(8, 7, 1, 0) )
    return 1;
  if ( sub_11918(1, 3, 4, 10) )
    return 1;
  if ( sub_11918(2, 7, 4, 8) )
    return 1;
  result = sub_11918(4, 7, 2, 0);
  if ( result )
    return 1;
  return result;
}

//----- (000081A0) --------------------------------------------------------
int __fastcall sub_81A0(int a1)
{
  return sub_81A8(100 * a1, 1000);
}
// 81A8: using guessed type int __fastcall sub_81A8(_DWORD, _DWORD);

//----- (000081A8) --------------------------------------------------------
int __fastcall sub_81A8(unsigned int a1, unsigned int a2)
{
  unsigned __int8 v3; // r0
  char v4; // r0
  char v5; // r0
  char v6; // r0

  if ( a1 - a2 >= 0xB3B1 )
    return -111;
  if ( a1 > 0x7D0 )
  {
    if ( a1 > 0xFA0 )
    {
      if ( a1 > 0x1F40 )
      {
        sub_15AA(a1 - 8000, a2);
        v3 = v6 + 24;
      }
      else
      {
        sub_15AA(a1 - 4000, 0x1F4u);
        v3 = v5 + 16;
      }
    }
    else
    {
      sub_15AA(a1 - 2000, 0xFAu);
      v3 = v4 + 8;
    }
  }
  else
  {
    sub_15AA(a1 - a2, 0x7Du);
  }
  return sub_11918(4, 5, 6, v3);
}
// 81DA: variable 'v4' is possibly undefined
// 81EE: variable 'v5' is possibly undefined
// 81F8: variable 'v6' is possibly undefined
// 81FA: variable 'v3' is possibly undefined

//----- (0000820C) --------------------------------------------------------
int __fastcall sub_820C(unsigned int a1)
{
  if ( a1 > 1 )
    return -111;
  else
    return sub_821A(a1);
}

//----- (0000821A) --------------------------------------------------------
BOOL __fastcall sub_821A(unsigned __int8 a1)
{
  return sub_11918(1, 6, 1, a1);
}

//----- (0000822A) --------------------------------------------------------
int __fastcall sub_822A(unsigned int a1)
{
  if ( a1 > 1 )
    return -111;
  else
    return sub_8238(a1);
}

//----- (00008238) --------------------------------------------------------
BOOL __fastcall sub_8238(unsigned __int8 a1)
{
  return sub_11918(7, 7, 1, a1);
}

//----- (00008256) --------------------------------------------------------
BOOL __fastcall sub_8256(unsigned __int8 a1)
{
  return sub_11918(6, 7, 1, a1);
}

//----- (00008268) --------------------------------------------------------
const char *__fastcall sub_8268(const char *result, int a2, unsigned int a3)
{
  unsigned int i; // r4

  if ( MEMORY[0x20003ACD] )
  {
    if ( result )
      sub_82D4(result);
    for ( i = 0; i < a3; ++i )
    {
      if ( !(i << 29) )
        sub_82D4("[%04x] ", (unsigned __int16)i);
      sub_82D4("%02x ", *(unsigned __int8 *)(a2 + i));
      if ( i << 29 == -536870912 )
        sub_82D4("\r\n");
    }
    result = (const char *)(i << 29);
    if ( i << 29 )
      return (const char *)sub_82D4("\r\n");
  }
  return result;
}
// 82D4: using guessed type int sub_82D4(const char *a1, ...);

//----- (000082D4) --------------------------------------------------------
int sub_82D4(const char *a1, ...)
{
  int result; // r0
  unsigned int v2; // r0
  va_list varg_r1; // [sp+14h] [bp+14h] BYREF

  va_start(varg_r1, a1);
  result = MEMORY[0x20003ACD];
  if ( MEMORY[0x20003ACD] )
  {
    if ( a1 )
    {
      v2 = sub_110C((_BYTE *)0x20004295, 64, (int)a1, (int)varg_r1);
      MEMORY[0x200042D4] = 0;
      _R4 = __get_CPSR();
      __disable_irq();
      result = sub_11E3C(MEMORY[0x20003ACC], 536887957, v2);
      __asm { MSR.W           PRIMASK, R4 }
    }
  }
  return result;
}
// 82D4: using guessed type int sub_82D4(const char *a1, ...);

//----- (00008364) --------------------------------------------------------
int sub_8364()
{
  MEMORY[0x200037DC] = 268482757;
  MEMORY[0x200037E0] = 268488869;
  MEMORY[0x200037E4] = (int (*)(void))268482969;
  MEMORY[0x200037E8] = 536875269;
  MEMORY[0x2000380C] = 268488913;
  MEMORY[0x20003810] = 268489025;
  MEMORY[0x20003814] = 268489009;
  MEMORY[0x20003818] = 268488957;
  MEMORY[0x2000381C] = 268488973;
  sub_10FD4(536879413, 536879401, 536879425, 268482773);
  sub_B830();
  MEMORY[0x200037EC] = 268487513;
  MEMORY[0x200037F0] = 268489389;
  MEMORY[0x200037F4] = 268483089;
  MEMORY[0x200037F8] = 268489289;
  MEMORY[0x200037FC] = 268489165;
  MEMORY[0x20003800] = 268489533;
  MEMORY[0x20003804] = 268489593;
  MEMORY[0x20003808] = 268489333;
  return nullsub_5();
}
// D5F0: using guessed type int nullsub_5(void);
// 200037E4: using guessed type int (*)(void);

//----- (0000852C) --------------------------------------------------------
int sub_852C()
{
  MEMORY[0x200037D8] = 1;
  return 1;
}

//----- (00008568) --------------------------------------------------------
int sub_8568()
{
  return sub_A98C(33, 0, 0);
}

//----- (0000857A) --------------------------------------------------------
int __fastcall sub_857A(int a1, _BYTE *a2)
{
  sub_8638(1, a2, 1);
  return sub_A98C(33, 0, 0);
}

//----- (00008592) --------------------------------------------------------
int sub_8592()
{
  return sub_A98C(34, 0, 0);
}

//----- (000085A4) --------------------------------------------------------
int sub_85A4()
{
  sub_8638(2, 0, 1);
  return sub_A98C(34, 0, 0);
}

//----- (000085C0) --------------------------------------------------------
int sub_85C0()
{
  int result; // r0
  int v1; // r0

  result = MEMORY[0x20003A9C];
  if ( MEMORY[0x20003A9C] )
  {
    if ( MEMORY[0x20003AA4] )
    {
      return --MEMORY[0x20003AA4];
    }
    else
    {
      result = MEMORY[0x20003A9D];
      if ( !MEMORY[0x20003A9D] )
      {
        v1 = sub_140D4();
        ramapi_transport_select_context(v1);
        if ( MEMORY[0x20003AA0] )
        {
          if ( MEMORY[0x20003AA0] == 1 )
          {
            sub_FFF8(MEMORY[0x20004265] + 2400, MEMORY[0x20004266]);
            MEMORY[0x20003A9D] = 1;
          }
        }
        else
        {
          sub_10118(MEMORY[0x20004265], MEMORY[0x20004266] + 2400, MEMORY[0x20004267], MEMORY[0x20004268]);
          apply_system_mode_register_script(MEMORY[0x2000426A]);
          MEMORY[0x20003A9D] = 1;
          sub_CFF8(0);
        }
        result = MEMORY[0x20003A9F];
        if ( !MEMORY[0x20003A9F] )
        {
          while ( 1 )
            ;
        }
      }
    }
  }
  return result;
}
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);
// CFF8: using guessed type int __fastcall sub_CFF8(_DWORD);
// FFF8: using guessed type int __fastcall sub_FFF8(_DWORD, _DWORD);
// 10118: using guessed type int __fastcall sub_10118(_DWORD, _DWORD, _DWORD, _DWORD);
// 140D4: using guessed type int sub_140D4(void);

//----- (00008638) --------------------------------------------------------
int __fastcall sub_8638(int result, _BYTE *a2, char a3)
{
  MEMORY[0x20003AA0] = result;
  MEMORY[0x20003A9F] = a3;
  if ( result )
  {
    if ( result == 1 )
    {
      sub_100A0();
      MEMORY[0x20003A9D] = 0;
      if ( MEMORY[0x20003A9F] )
      {
        sub_11008();
        sub_11034();
      }
      sub_F544();
      MEMORY[0x20003A9E] = 1;
      MEMORY[0x20003A9C] = 1;
      MEMORY[0x20004265] = *a2;
      MEMORY[0x20004266] = a2[1];
      MEMORY[0x20003AA4] = 100;
      return 100;
    }
    else if ( result == 2 )
    {
      result = sub_100A0();
      MEMORY[0x20003A9C] = 0;
      MEMORY[0x20003A9D] = 0;
    }
  }
  else
  {
    sub_100A0();
    MEMORY[0x20003A9D] = 0;
    if ( MEMORY[0x20003A9F] )
    {
      sub_11008();
      sub_11034();
    }
    sub_F544();
    MEMORY[0x20003A9E] = 1;
    MEMORY[0x20003A9C] = 1;
    sub_472E((_BYTE *)0x20004265, a2);
    MEMORY[0x20003AA4] = 100;
    return 100;
  }
  return result;
}

//----- (000086BC) --------------------------------------------------------
int sub_86BC()
{
  return sub_A98C(32, 0, 0);
}

//----- (000086CE) --------------------------------------------------------
int __fastcall sub_86CE(int a1, _BYTE *a2)
{
  sub_8638(0, a2, 1);
  return sub_A98C(32, 0, 0);
}

//----- (000086E8) --------------------------------------------------------
char __fastcall sub_86E8(char result)
{
  MEMORY[0x20003DEF] = result;
  return result;
}

//----- (0000876C) --------------------------------------------------------
int __fastcall sub_876C(int result, int a2)
{
  unsigned int i; // r2
  unsigned int v3; // r3
  _BYTE *v4; // r2
  int v5; // lr
  char v6; // r6
  char v7; // r12
  char v8; // r7
  char v9; // r4
  char v10; // r6
  char v11; // r5
  char v12; // r12
  char v13; // r5
  char v14; // r7
  char v15; // r4
  char v16; // r4
  char v17; // r6
  char v18; // r5
  unsigned __int8 v19; // [sp+0h] [bp-8h]
  unsigned __int8 v20; // [sp+4h] [bp-4h]

  for ( i = 0; i < 0x10; i = (unsigned __int16)(i + 1) )
    *(_BYTE *)(result + i) = *(_BYTE *)(a2 + i);
  v3 = 1;
  do
  {
    v4 = (_BYTE *)(16 * v3 + result);
    v5 = (unsigned __int8)*(v4 - 4);
    *v4 = *(_BYTE *)((unsigned __int8)*(v4 - 3) + 0x10014EE8) ^ *(v4 - 16) ^ *(_BYTE *)(v3 + 268521704);
    v20 = *(v4 - 2);
    v6 = *(_BYTE *)(v20 + 0x10014EE8) ^ *(v4 - 15);
    v4[1] = v6;
    v7 = v6;
    v19 = *(v4 - 1);
    v8 = *(_BYTE *)(v19 + 0x10014EE8) ^ *(v4 - 14);
    v4[2] = v8;
    v9 = *(_BYTE *)(v5 + 268521192) ^ *(v4 - 13);
    v4[3] = v9;
    v10 = *(v4 - 12) ^ *v4;
    v4[4] = v10;
    v11 = *(v4 - 11) ^ v7;
    v4[5] = v11;
    v12 = v11;
    v13 = *(v4 - 10) ^ v8;
    v4[6] = v13;
    v14 = *(v4 - 9) ^ v9;
    v4[7] = v14;
    v15 = *(v4 - 8) ^ v10;
    v4[8] = v15;
    LOBYTE(v5) = v15;
    v16 = *(v4 - 7) ^ v12;
    v4[9] = v16;
    v17 = *(v4 - 6) ^ v13;
    v4[10] = v17;
    v18 = *(v4 - 5) ^ v14;
    v4[11] = v18;
    v4[12] = *(v4 - 4) ^ v5;
    v4[13] = *(v4 - 3) ^ v16;
    v4[14] = v20 ^ v17;
    v3 = (unsigned __int16)(v3 + 1);
    v4[15] = v19 ^ v18;
  }
  while ( v3 < 0xB );
  return result;
}

//----- (00008834) --------------------------------------------------------
int sub_8834()
{
  _BYTE *v0; // r4
  char v2[8]; // [sp+0h] [bp-8h] BYREF

  v0 = (_BYTE *)sub_A860();
  sub_F51C((int)v2);
  v0[16] = 4;
  sub_141A(v0, v2, 4u);
  return sub_A98C(11, 0, (unsigned __int8)v0[16]);
}

//----- (00008860) --------------------------------------------------------
int __fastcall sub_8860(unsigned __int8 *a1, int a2)
{
  int result; // r0

  sub_F55A(
    *a1 | (a1[1] << 8) | (a1[2] << 16) | (a1[3] << 24),
    (unsigned __int16)a1[4] | (unsigned __int16)(a1[5] << 8),
    a2);
  result = a1[4] | (a1[5] << 8) | (a1[6] << 16) | (a1[7] << 24);
  *(_BYTE *)(a2 + 16) = a1[4];
  return result;
}

//----- (000088B8) --------------------------------------------------------
int __fastcall sub_88B8(int a1)
{
  _BYTE *v2; // r0
  unsigned int v3; // r2
  _BYTE *v4; // r5

  v2 = (_BYTE *)sub_A860();
  v3 = *(unsigned __int8 *)(a1 + 16);
  v4 = v2;
  v2[16] = v3;
  sub_141A(v2, (char *)a1, v3);
  return sub_A98C(9, 0, (unsigned __int8)v4[16]);
}

//----- (000088D8) --------------------------------------------------------
int __fastcall sub_88D8(int result, unsigned __int8 *a2)
{
  int v3; // r5

  if ( !result )
  {
    v3 = sub_A860();
    sub_8860(a2, v3);
    return sub_A98C(9, 0, *(unsigned __int8 *)(v3 + 16));
  }
  return result;
}

//----- (000088FA) --------------------------------------------------------
BOOL __fastcall sub_88FA(char *a1)
{
  return sub_F57C(
           (unsigned __int8)*a1
         | ((unsigned __int8)a1[1] << 8)
         | ((unsigned __int8)a1[2] << 16)
         | ((unsigned __int8)a1[3] << 24),
           (unsigned __int16)((unsigned __int8)a1[4] | ((unsigned __int8)a1[5] << 8)),
           a1 + 8) != 0;
}

//----- (0000893C) --------------------------------------------------------
int __fastcall sub_893C(char *a1)
{
  return sub_A98C(10, *a1, 1);
}

//----- (0000896C) --------------------------------------------------------
int __fastcall sub_896C(int a1, int a2)
{
  return sub_F55A(36 * a1 + 1024, 36, a2);
}

//----- (00008982) --------------------------------------------------------
BOOL __fastcall sub_8982(int a1, char *a2)
{
  return sub_F57C(36 * a1 + 1024, 0x24u, a2) != 0;
}

//----- (000089A0) --------------------------------------------------------
int __fastcall sub_89A0(int a1)
{
  return sub_89A4(21 * a1);
}
// 89A4: using guessed type int __fastcall sub_89A4(_DWORD);

//----- (000089A4) --------------------------------------------------------
void sub_89A4()
{
  sub_F624();
}

//----- (000089B8) --------------------------------------------------------
void sub_89B8()
{
  sub_F624();
}

//----- (000089C8) --------------------------------------------------------
int __fastcall sub_89C8(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  sub_F624(2049, 1, &v5);
  return (unsigned __int8)v5;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (000089E0) --------------------------------------------------------
int __fastcall sub_89E0(int a1, int a2, int a3, unsigned __int8 a4)
{
  sub_F624();
  return a4;
}

//----- (000089F8) --------------------------------------------------------
int __fastcall sub_89F8(int a1, int a2, int a3, unsigned __int8 a4)
{
  sub_F624();
  return a4;
}

//----- (00008A10) --------------------------------------------------------
int __fastcall sub_8A10(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  sub_F624(2052, 2, &v5);
  return (unsigned __int16)v5;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00008A28) --------------------------------------------------------
int __fastcall sub_8A28(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  sub_F624(2054, 3, &v5);
  return (unsigned __int16)v5 | (BYTE2(v5) << 16);
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00008A44) --------------------------------------------------------
_BYTE *__fastcall sub_8A44(_BYTE *a1)
{
  unsigned __int8 v3; // [sp+0h] [bp-1Ch] BYREF
  _WORD v4[13]; // [sp+1h] [bp-1Bh] BYREF

  sub_F624();
  if ( v3 <= 0x19u && (v3 == 255 || !v3) )
  {
    v3 = 0;
    sub_1532(v4, 0x19u, 0xFFu);
  }
  else
  {
    sub_F624();
  }
  return sub_141A(a1, (char *)&v3, 0x1Au);
}
// 8A44: too many cbuild loops

//----- (00008A9C) --------------------------------------------------------
_BYTE *__fastcall sub_8A9C(_BYTE *a1)
{
  unsigned __int8 v3; // [sp+0h] [bp-1Ch] BYREF
  _WORD v4[13]; // [sp+1h] [bp-1Bh] BYREF

  sub_F624();
  if ( v3 == 255 || !v3 )
  {
    v3 = 0;
    sub_1532(v4, 0x19u, 0xFFu);
  }
  else
  {
    sub_F624();
  }
  return sub_141A(a1, (char *)&v3, 0x1Au);
}
// 8A9C: too many cbuild loops

//----- (00008AEC) --------------------------------------------------------
int __fastcall sub_8AEC(int a1)
{
  int result; // r0
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a1;
  _R6 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( sub_F634(2050, 1, (int)&v7) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (00008B2C) --------------------------------------------------------
int __fastcall sub_8B2C(int a1)
{
  int result; // r0
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a1;
  _R6 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( sub_F634(2051, 1, (int)&v7) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (00008BAC) --------------------------------------------------------
int __fastcall sub_8BAC(int a1)
{
  int result; // r0

  _R6 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( sub_F634(2054, 3, a1) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (00008BEC) --------------------------------------------------------
int __fastcall sub_8BEC(int a1)
{
  int result; // r0
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a1;
  _R6 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( sub_F634(2049, 1, (int)&v7) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (00008C2E) --------------------------------------------------------
int __fastcall load_hyperclick_enabled(int profile_index, int profile_slot, int a3, int a4)
{
  int v4; // r0
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  v4 = 8244;
  if ( profile_slot != 1 )
  {
    if ( profile_slot == 2 )
    {
      v4 = 8499;
    }
    else if ( profile_slot == 3 )
    {
      v4 = 8755;
    }
  }
  sub_F624(v4, 1, &v6);
  return (unsigned __int8)v6;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00008C68) --------------------------------------------------------
int __fastcall sub_8C68(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  sub_F624(2100, 1, &v5);
  return (unsigned __int8)v5;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00008C80) --------------------------------------------------------
int __fastcall load_lod_override_mode(int lod_value, int a2, int a3, int a4)
{
  int v5; // r0
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a4;
  LOBYTE(v7) = 0;
  if ( lod_value )
  {
    v5 = 2108;
    if ( lod_value == 2 )
      v5 = 2109;
  }
  else
  {
    v5 = 2107;
  }
  sub_F624(v5, 1, &v7);
  if ( (unsigned __int8)v7 >= 3u )
    LOBYTE(v7) = 0;
  return (unsigned __int8)v7;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00008CCC) --------------------------------------------------------
unsigned __int16 __fastcall load_lod_override_register_pair(int lod_value)
{
  int v2; // r0
  int v4; // [sp+0h] [bp-4h] BYREF

  v4 = 0;
  if ( lod_value )
  {
    v2 = 2103;
    if ( lod_value == 2 )
      v2 = 2105;
  }
  else
  {
    v2 = 2101;
  }
  sub_F624(v2, 2, &v4);
  return v4;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00008D0E) --------------------------------------------------------
int __fastcall load_button_delay_level(int profile_index, int profile_slot, int a3, int a4)
{
  int v4; // r0
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  v4 = 8246;
  if ( profile_slot != 1 )
  {
    if ( profile_slot == 2 )
    {
      v4 = 8501;
    }
    else if ( profile_slot == 3 )
    {
      v4 = 8757;
    }
  }
  sub_F624(v4, 1, &v6);
  if ( (unsigned __int8)v6 > 2u )
    LOBYTE(v6) = 1;
  return (unsigned __int8)v6;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00008D58) --------------------------------------------------------
unsigned __int8 load_persisted_active_profile_index()
{
  int v1; // [sp+0h] [bp-4h] BYREF

  sub_F624(0x2000, 1, &v1);
  return v1;
}
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);

//----- (00008D6A) --------------------------------------------------------
int __fastcall sub_8D6A(unsigned __int8 *a1, int a2)
{
  int result; // r0

  sub_F624();
  result = a1[4] | (a1[5] << 8) | (a1[6] << 16) | (a1[7] << 24);
  *(_BYTE *)(a2 + 16) = a1[4];
  return result;
}

//----- (00008DC2) --------------------------------------------------------
int __fastcall sub_8DC2(int a1)
{
  _BYTE *v2; // r0
  unsigned int v3; // r2
  _BYTE *v4; // r5

  v2 = (_BYTE *)sub_A860();
  v3 = *(unsigned __int8 *)(a1 + 16);
  v4 = v2;
  v2[16] = v3;
  sub_141A(v2, (char *)a1, v3);
  return sub_A98C(5, 0, (unsigned __int8)v4[16]);
}

//----- (00008DE2) --------------------------------------------------------
int __fastcall sub_8DE2(int result, unsigned __int8 *a2)
{
  int v3; // r5

  if ( !result )
  {
    v3 = sub_A860();
    sub_8D6A(a2, v3);
    return sub_A98C(5, 0, *(unsigned __int8 *)(v3 + 16));
  }
  return result;
}

//----- (00008E04) --------------------------------------------------------
int __fastcall persist_report_rate_setting_for_link_mode(int rate, int profile_index)
{
  int v4; // r0
  int result; // r0
  _DWORD v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[0] = rate;
  v10[1] = profile_index;
  _R7 = __get_CPSR();
  __disable_irq();
  sub_3C08(rate);
  if ( v4 )
  {
    MEMORY[0x2000493A] = v10[0];
    switch ( profile_index )
    {
      case 1:
        do
        {
          if ( sub_F634(8245, 1, (int)v10) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
            MEMORY[0x20003E77] = 0;
          result = MEMORY[0x20003E77];
        }
        while ( MEMORY[0x20003E77] );
        break;
      case 2:
        do
        {
          if ( sub_F634(8500, 1, (int)v10) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
            MEMORY[0x20003E77] = 0;
          result = MEMORY[0x20003E77];
        }
        while ( MEMORY[0x20003E77] );
        break;
      case 3:
        do
        {
          if ( sub_F634(8756, 8756, (int)v10) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
            MEMORY[0x20003E77] = 0;
          result = MEMORY[0x20003E77];
        }
        while ( MEMORY[0x20003E77] );
        break;
      default:
        do
        {
          if ( sub_F634(8245, 1, (int)v10) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
            MEMORY[0x20003E77] = 0;
          result = MEMORY[0x20003E77];
        }
        while ( MEMORY[0x20003E77] );
        break;
    }
  }
  else
  {
    MEMORY[0x20004931] = v10[0];
    switch ( profile_index )
    {
      case 1:
        do
        {
          if ( sub_F634(8236, 1, (int)v10) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
            MEMORY[0x20003E77] = 0;
          result = MEMORY[0x20003E77];
        }
        while ( MEMORY[0x20003E77] );
        break;
      case 2:
        do
        {
          if ( sub_F634(8491, 1, (int)v10) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
            MEMORY[0x20003E77] = 0;
          result = MEMORY[0x20003E77];
        }
        while ( MEMORY[0x20003E77] );
        break;
      case 3:
        do
        {
          if ( sub_F634(8747, 8747, (int)v10) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
            MEMORY[0x20003E77] = 0;
          result = MEMORY[0x20003E77];
        }
        while ( MEMORY[0x20003E77] );
        break;
      default:
        do
        {
          if ( sub_F634(8236, 1, (int)v10) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
            MEMORY[0x20003E77] = 0;
          result = MEMORY[0x20003E77];
        }
        while ( MEMORY[0x20003E77] );
        break;
    }
  }
  __asm { MSR.W           PRIMASK, R7 }
  return result;
}
// 8E20: variable 'v4' is possibly undefined

//----- (00008F9C) --------------------------------------------------------
int __fastcall sub_8F9C(int a1, int a2)
{
  unsigned int v4; // r2
  char v5; // r1
  unsigned int v6; // r6

  sub_13FA4();
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(a2 + v4);
    v6 = 4 * a1 + v4;
    v4 = (unsigned __int8)(v4 + 1);
    *(_BYTE *)(v6 + 536889697) = v5;
  }
  while ( v4 < 4 );
  *(_BYTE *)(a1 + 536890306) = 1;
  return 1;
}

//----- (00008FCC) --------------------------------------------------------
// The active optical-engine flag at 0x2000493E is loaded from blob byte 56 and exposed through opcode 58.
int __fastcall persist_active_optical_engine_flag(int engine_flag, int profile_index)
{
  int result; // r0
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = engine_flag;
  v8[1] = profile_index;
  MEMORY[0x2000493E] = engine_flag;
  _R6 = __get_CPSR();
  __disable_irq();
  switch ( profile_index )
  {
    case 1:
      do
      {
        if ( sub_F634(8249, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        if ( sub_F634(8504, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        if ( sub_F634(8760, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        if ( sub_F634(8249, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (000090A0) --------------------------------------------------------
int __fastcall sub_90A0(int a1)
{
  int result; // r0
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a1;
  _R6 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( sub_F634(2100, 1, (int)&v7) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (000090E0) --------------------------------------------------------
// HyperClick is stored at 0x20004939 and persisted with keys 8244/8499/8755. In the profile blob this is byte 51.
int __fastcall persist_hyperclick_enabled(int enabled, int profile_index)
{
  int result; // r0
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = enabled;
  v8[1] = profile_index;
  _R6 = __get_CPSR();
  __disable_irq();
  switch ( profile_index )
  {
    case 1:
      do
      {
        result = sub_F634(8244, 1, (int)v8);
        if ( !result )
        {
          ++MEMORY[0x20003E77];
          if ( MEMORY[0x20003E77] < 3u )
            continue;
        }
        MEMORY[0x20003E77] = 0;
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        result = sub_F634(8499, 1, (int)v8);
        if ( !result )
        {
          ++MEMORY[0x20003E77];
          if ( MEMORY[0x20003E77] < 3u )
            continue;
        }
        MEMORY[0x20003E77] = 0;
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        result = sub_F634(8755, 1, (int)v8);
        if ( !result )
        {
          ++MEMORY[0x20003E77];
          if ( MEMORY[0x20003E77] < 3u )
            continue;
        }
        MEMORY[0x20003E77] = 0;
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        result = sub_F634(8244, 1, (int)v8);
        if ( !result )
        {
          ++MEMORY[0x20003E77];
          if ( MEMORY[0x20003E77] < 3u )
            continue;
        }
        MEMORY[0x20003E77] = 0;
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  MEMORY[0x20004939] = v8[0];
  return result;
}

//----- (000091B4) --------------------------------------------------------
int __fastcall sub_91B4(int a1)
{
  int v1; // r4
  int v3; // r0
  int result; // r0
  int v9; // [sp+0h] [bp-4h] BYREF

  v9 = a1;
  v1 = MEMORY[0x20004932];
  _R7 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( v1 )
    {
      if ( v1 == 2 )
        v3 = 2109;
      else
        v3 = 2108;
    }
    else
    {
      v3 = 2107;
    }
    if ( sub_F634(v3, 1, &v9) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R7 }
  return result;
}
// F634: using guessed type int __fastcall sub_F634(_DWORD, _DWORD, _DWORD);

//----- (0000921C) --------------------------------------------------------
int __fastcall sub_921C(int a1)
{
  int v1; // r4
  int v3; // r0
  int v4; // r2
  int result; // r0

  v1 = MEMORY[0x20004932];
  _R7 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( v1 )
    {
      if ( v1 == 2 )
        v3 = 2105;
      else
        v3 = 2103;
      v4 = a1;
    }
    else
    {
      v3 = 2101;
      v4 = a1;
    }
    if ( sub_F634(v3, 2, v4) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R7 }
  return result;
}
// F634: using guessed type int __fastcall sub_F634(_DWORD, _DWORD, _DWORD);

//----- (00009284) --------------------------------------------------------
int __fastcall persist_profile_dpi_stage0_value(__int16 a1, int a2, unsigned int a3, int a4)
{
  int v5; // r0
  int result; // r0
  __int16 v11; // [sp+0h] [bp-4h] BYREF
  __int16 v12; // [sp+2h] [bp-2h]

  v12 = HIWORD(a4);
  v11 = a1;
  if ( a3 > 9 )
    LOBYTE(a3) = 0;
  LOBYTE(v12) = a3;
  _R4 = __get_CPSR();
  __disable_irq();
  v5 = 8223;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v5 = 8478;
    }
    else if ( a2 == 3 )
    {
      v5 = 8734;
    }
  }
  result = sub_F634(v5, 3, (int)&v11);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}

//----- (000092D4) --------------------------------------------------------
int __fastcall persist_profile_dpi_stage1_value(__int16 a1, int a2, unsigned int a3, int a4)
{
  __int64 (__fastcall *v5)(_DWORD, _DWORD, _DWORD); // r0
  int result; // r0
  __int16 v11; // [sp+0h] [bp-4h] BYREF
  __int16 v12; // [sp+2h] [bp-2h]

  v12 = HIWORD(a4);
  v11 = a1;
  if ( a3 > 9 )
    LOBYTE(a3) = 0;
  LOBYTE(v12) = a3;
  _R4 = __get_CPSR();
  __disable_irq();
  v5 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD))&loc_2022;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v5 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD))(&loc_2120 + 1);
    }
    else if ( a2 == 3 )
    {
      v5 = sub_2220;
    }
  }
  result = sub_F634((int)v5, 3, (int)&v11);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}
// 2220: using guessed type __int64 __fastcall sub_2220(_DWORD, _DWORD, _DWORD);

//----- (00009324) --------------------------------------------------------
int __fastcall persist_profile_dpi_stage2_value(__int16 a1, int a2, unsigned int a3, int a4)
{
  int v5; // r0
  int result; // r0
  __int16 v11; // [sp+0h] [bp-4h] BYREF
  __int16 v12; // [sp+2h] [bp-2h]

  v12 = HIWORD(a4);
  v11 = a1;
  if ( a3 > 9 )
    LOBYTE(a3) = 0;
  LOBYTE(v12) = a3;
  _R4 = __get_CPSR();
  __disable_irq();
  v5 = 8229;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v5 = 8484;
    }
    else if ( a2 == 3 )
    {
      v5 = 8740;
    }
  }
  result = sub_F634(v5, 3, (int)&v11);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}

//----- (00009374) --------------------------------------------------------
int __fastcall persist_profile_dpi_stage3_value(__int16 a1, int a2, unsigned int a3, int a4)
{
  int v5; // r0
  int result; // r0
  __int16 v11; // [sp+0h] [bp-4h] BYREF
  __int16 v12; // [sp+2h] [bp-2h]

  v12 = HIWORD(a4);
  v11 = a1;
  if ( a3 > 9 )
    LOBYTE(a3) = 0;
  LOBYTE(v12) = a3;
  _R4 = __get_CPSR();
  __disable_irq();
  v5 = 8232;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v5 = 8487;
    }
    else if ( a2 == 3 )
    {
      v5 = 8743;
    }
  }
  result = sub_F634(v5, 3, (int)&v11);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}

//----- (000093C4) --------------------------------------------------------
// Button delay / Slam-Click level is stored at 0x2000493B and persisted with keys 8246/8501/8757. In the profile blob this is byte 53.
int __fastcall persist_button_delay_level(int level, int profile_index)
{
  int result; // r0
  int v8; // r1
  _DWORD v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = level;
  v9[1] = profile_index;
  if ( (unsigned __int8)level > 2u )
    LOBYTE(v9[0]) = 1;
  _R6 = __get_CPSR();
  __disable_irq();
  switch ( profile_index )
  {
    case 1:
      do
      {
        result = sub_F634(8246, 1, (int)v9);
        if ( !result )
        {
          ++MEMORY[0x20003E77];
          if ( MEMORY[0x20003E77] < 3u )
            continue;
        }
        MEMORY[0x20003E77] = 0;
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        result = sub_F634(8501, 1, (int)v9);
        if ( !result )
        {
          ++MEMORY[0x20003E77];
          if ( MEMORY[0x20003E77] < 3u )
            continue;
        }
        MEMORY[0x20003E77] = 0;
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        result = sub_F634(8757, 1, (int)v9);
        if ( !result )
        {
          ++MEMORY[0x20003E77];
          if ( MEMORY[0x20003E77] < 3u )
            continue;
        }
        MEMORY[0x20003E77] = 0;
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        result = sub_F634(8246, 1, (int)v9);
        if ( !result )
        {
          ++MEMORY[0x20003E77];
          if ( MEMORY[0x20003E77] < 3u )
            continue;
        }
        MEMORY[0x20003E77] = 0;
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  MEMORY[0x2000493B] = v9[0];
  if ( LOBYTE(v9[0]) )
  {
    if ( LOBYTE(v9[0]) != 2 )
    {
      MEMORY[0x20003E6C] = 30000;
      return result;
    }
    v8 = 50000;
  }
  else
  {
    v8 = 10000;
  }
  MEMORY[0x20003E6C] = v8;
  return result;
}

//----- (000094D4) --------------------------------------------------------
int __fastcall sub_94D4(int a1)
{
  int result; // r0
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a1;
  MEMORY[0x20004921] = a1;
  _R6 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( sub_F634(0x2000, 1, (int)&v7) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (0000951C) --------------------------------------------------------
int __fastcall persist_staged_optical_engine_mode(int engine_mode, int profile_index)
{
  int result; // r0
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = engine_mode;
  v8[1] = profile_index;
  MEMORY[0x2000493D] = engine_mode;
  _R6 = __get_CPSR();
  __disable_irq();
  switch ( profile_index )
  {
    case 1:
      do
      {
        if ( sub_F634(8248, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        if ( sub_F634(8503, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        if ( sub_F634(8759, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        if ( sub_F634(8248, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (000095F0) --------------------------------------------------------
int __fastcall persist_sleep_timeout_setting(int timeout_step, int profile_index)
{
  int v2; // r0
  int result; // r0
  _DWORD v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = timeout_step;
  v9[1] = profile_index;
  MEMORY[0x20004938] = timeout_step;            // This setter matches the WebHID sleep-time control: it stores the per-profile timeout step, derives 0x20003DD0/0x20003DD4 runtime thresholds from a 60 MHz base, and persists the pair (timeout_step, profile_index) through sub_F634().
  v2 = 60000000 * (unsigned __int8)timeout_step;
  if ( MEMORY[0x20004938] >= 3u )
    MEMORY[0x20003DD0] = v2 / 2;
  else
    MEMORY[0x20003DD0] = v2;
  MEMORY[0x20003DD4] = v2;
  _R6 = __get_CPSR();
  __disable_irq();
  switch ( profile_index )
  {
    case 1:
      do
      {
        if ( sub_F634(8243, 1, (int)v9) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        if ( sub_F634(8498, 1, (int)v9) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        if ( sub_F634(8754, 1, (int)v9) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        if ( sub_F634(8243, 1, (int)v9) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (000096F0) --------------------------------------------------------
int __fastcall persist_active_dpi_stage(int stage_index, int profile_index)
{
  int result; // r0
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = stage_index;
  v8[1] = profile_index;
  MEMORY[0x20004923] = stage_index;
  _R6 = __get_CPSR();
  __disable_irq();
  switch ( profile_index )
  {
    case 1:
      do
      {
        if ( sub_F634(8222, 1, v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        if ( sub_F634(8477, 1, v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        if ( sub_F634((char *)&dword_221C + 1, 1, v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        if ( sub_F634(8222, 1, v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}
// 221C: using guessed type int dword_221C;
// F634: using guessed type int __fastcall sub_F634(_DWORD, _DWORD, _DWORD);

//----- (000097C4) --------------------------------------------------------
int __fastcall persist_lod_setting(int lod_value, int profile_index)
{
  int result; // r0
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = lod_value;
  v8[1] = profile_index;
  MEMORY[0x20004932] = lod_value;
  _R6 = __get_CPSR();
  __disable_irq();
  switch ( profile_index )
  {
    case 1:
      do
      {
        if ( sub_F634(8237, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        if ( sub_F634(8492, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        if ( sub_F634(8748, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        if ( sub_F634(8237, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (00009898) --------------------------------------------------------
int __fastcall persist_system_mode_setting(int system_mode, int profile_index)
{
  int result; // r0
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = system_mode;
  v8[1] = profile_index;
  _R6 = __get_CPSR();
  __disable_irq();
  MEMORY[0x20004935] = v8[0];
  switch ( profile_index )
  {
    case 1:
      do
      {
        if ( sub_F634(8240, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        if ( sub_F634(8495, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        if ( sub_F634(8751, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        if ( sub_F634(8240, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (0000996C) --------------------------------------------------------
int __fastcall persist_report_rate_setting_for_wireless_mode(int rate, int profile_index)
{
  int result; // r0
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = rate;
  v8[1] = profile_index;
  MEMORY[0x20004930] = rate;
  _R6 = __get_CPSR();
  __disable_irq();
  switch ( profile_index )
  {
    case 1:
      do
      {
        if ( sub_F634(8235, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 2:
      do
      {
        if ( sub_F634(8490, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    case 3:
      do
      {
        if ( sub_F634(8746, 8746, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
    default:
      do
      {
        if ( sub_F634(8235, 1, (int)v8) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
          MEMORY[0x20003E77] = 0;
        result = MEMORY[0x20003E77];
      }
      while ( MEMORY[0x20003E77] );
      break;
  }
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (00009A40) --------------------------------------------------------
BOOL __fastcall sub_9A40(unsigned __int8 *a1)
{
  return sub_F634(
           *a1 | (a1[1] << 8) | (a1[2] << 16) | (a1[3] << 24),
           (unsigned __int16)(a1[4] | (a1[5] << 8)),
           (int)(a1 + 8)) != 0;
}

//----- (00009A82) --------------------------------------------------------
int __fastcall sub_9A82(char *a1)
{
  return sub_A98C(6, *a1, 1);
}

//----- (00009A90) --------------------------------------------------------
// Incremental profile dirty-slot writeback service. Slot map: 0..6 button mapping dwords, 7..10 DPI stage0..3 packed 24-bit values, 11 DPI stage count byte. 0x20003E76 gates rescans and 0x20003E78 tracks the slot currently being serviced.
int __fastcall service_profile_incremental_dirty_writeback(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v5; // r0
  int v7; // r0
  int v12; // r0
  int v14; // r0
  int v15; // r0
  int *v17; // r0
  int v18; // r0
  int *v20; // r0
  int v21; // r0
  int *v23; // r0
  int v24; // r0
  int *v26; // r0
  int v27; // r0
  int *v29; // r0
  int v30; // r0
  int *v32; // r0
  int v33; // [sp+0h] [bp-4h] BYREF

  v33 = a4;
  result = 0;
  if ( MEMORY[0x20003E76] )
  {
    MEMORY[0x20003E78] = 0;
    while ( !*(_BYTE *)(MEMORY[0x20003E78] + 0x20004BC2) )
    {
      ++MEMORY[0x20003E78];
      if ( MEMORY[0x20003E78] >= 0xDu )
        goto LABEL_6;
    }
    MEMORY[0x20003E76] = 0;
  }
LABEL_6:
  switch ( MEMORY[0x20003E78] )
  {
    case 0:
      v5 = MEMORY[0x20004921];
      _R7 = __get_CPSR();
      __disable_irq();
      switch ( v5 )
      {
        case 1:
          goto LABEL_10;
        case 2:
          v7 = 8448;
          break;
        case 3:
          v7 = 8704;
          break;
        default:
LABEL_10:
          v7 = 8193;
          break;
      }
      result = sub_F634(v7, 4, 536889697);
      __asm { MSR.W           PRIMASK, R7 }
      if ( result )
      {
        MEMORY[0x20004BC2] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      break;
    case 1:
      v12 = MEMORY[0x20004921];
      _R7 = __get_CPSR();
      __disable_irq();
      switch ( v12 )
      {
        case 1:
          goto LABEL_19;
        case 2:
          v14 = 8452;
          break;
        case 3:
          v14 = 8708;
          break;
        default:
LABEL_19:
          v14 = 8197;
          break;
      }
      result = sub_F634(v14, 4, 536889701);
      __asm { MSR.W           PRIMASK, R7 }
      if ( result )
      {
        MEMORY[0x20004BC3] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      break;
    case 2:
      v15 = MEMORY[0x20004921];
      _R7 = __get_CPSR();
      __disable_irq();
      switch ( v15 )
      {
        case 1:
          goto LABEL_28;
        case 2:
          v17 = (_DWORD *)&loc_2108;
          break;
        case 3:
          v17 = &dword_2208;
          break;
        default:
LABEL_28:
          v17 = (_DWORD *)(&loc_2008 + 1);
          break;
      }
      result = sub_F634((int)v17, 4, 536889705);
      __asm { MSR.W           PRIMASK, R7 }
      if ( result )
      {
        MEMORY[0x20004BC4] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      break;
    case 3:
      v18 = MEMORY[0x20004921];
      _R7 = __get_CPSR();
      __disable_irq();
      switch ( v18 )
      {
        case 1:
          goto LABEL_37;
        case 2:
          v20 = (_DWORD *)&loc_210C;
          break;
        case 3:
          v20 = &dword_220C;
          break;
        default:
LABEL_37:
          v20 = (_DWORD *)(&loc_200C + 1);
          break;
      }
      result = sub_F634((int)v20, 4, 536889709);
      __asm { MSR.W           PRIMASK, R7 }
      if ( result )
      {
        MEMORY[0x20004BC5] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      break;
    case 4:
      v21 = MEMORY[0x20004921];
      _R7 = __get_CPSR();
      __disable_irq();
      switch ( v21 )
      {
        case 1:
          goto LABEL_46;
        case 2:
          v23 = (_DWORD *)&loc_2110;
          break;
        case 3:
          v23 = &dword_2210;
          break;
        default:
LABEL_46:
          v23 = (_DWORD *)(&loc_2010 + 1);
          break;
      }
      result = sub_F634((int)v23, 4, 536889713);
      __asm { MSR.W           PRIMASK, R7 }
      if ( result )
      {
        MEMORY[0x20004BC6] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      break;
    case 5:
      v24 = MEMORY[0x20004921];
      _R7 = __get_CPSR();
      __disable_irq();
      switch ( v24 )
      {
        case 1:
          goto LABEL_55;
        case 2:
          v26 = (_DWORD *)&loc_2114;
          break;
        case 3:
          v26 = &dword_2214;
          break;
        default:
LABEL_55:
          v26 = (_DWORD *)(&loc_2014 + 1);
          break;
      }
      result = sub_F634((int)v26, 4, 536889717);
      __asm { MSR.W           PRIMASK, R7 }
      if ( result )
      {
        MEMORY[0x20004BC7] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      break;
    case 6:
      v27 = MEMORY[0x20004921];
      _R7 = __get_CPSR();
      __disable_irq();
      switch ( v27 )
      {
        case 1:
          goto LABEL_64;
        case 2:
          v29 = (_DWORD *)&loc_2118;
          break;
        case 3:
          v29 = &dword_2218;
          break;
        default:
LABEL_64:
          v29 = (_DWORD *)(&loc_2018 + 1);
          break;
      }
      result = sub_F634((int)v29, 4, 536889721);
      __asm { MSR.W           PRIMASK, R7 }
      if ( result )
      {
        MEMORY[0x20004BC8] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      break;
    case 7:
      result = persist_profile_dpi_stage0_value(
                 (MEMORY[0x20004BB1] << 8) | MEMORY[0x20004BB0],
                 MEMORY[0x20004BAF],
                 MEMORY[0x20004BB2]);
      if ( result )
      {
        MEMORY[0x20004BC9] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      return result;
    case 8:
      result = persist_profile_dpi_stage1_value(
                 (MEMORY[0x20004BB6] << 8) | MEMORY[0x20004BB5],
                 MEMORY[0x20004BB4],
                 MEMORY[0x20004BB7]);
      if ( result )
      {
        MEMORY[0x20004BCA] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      return result;
    case 9:
      result = persist_profile_dpi_stage2_value(
                 (MEMORY[0x20004BBB] << 8) | MEMORY[0x20004BBA],
                 MEMORY[0x20004BB9],
                 MEMORY[0x20004BBC]);
      if ( result )
      {
        MEMORY[0x20004BCB] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      return result;
    case 0xA:
      result = persist_profile_dpi_stage3_value(
                 (MEMORY[0x20004BC0] << 8) | MEMORY[0x20004BBF],
                 MEMORY[0x20004BBE],
                 MEMORY[0x20004BC1]);
      if ( result )
      {
        MEMORY[0x20004BCC] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      return result;
    case 0xB:
      LOBYTE(v33) = MEMORY[0x20004922];
      v30 = MEMORY[0x20004921];
      _R7 = __get_CPSR();
      __disable_irq();
      switch ( v30 )
      {
        case 1:
          goto LABEL_82;
        case 2:
          v32 = (_DWORD *)&loc_211C;
          break;
        case 3:
          v32 = &dword_221C;
          break;
        default:
LABEL_82:
          v32 = (_DWORD *)(&loc_201C + 1);
          break;
      }
      result = sub_F634((int)v32, 1, (int)&v33);
      __asm { MSR.W           PRIMASK, R7 }
      if ( result )
      {
        MEMORY[0x20004BCD] = 0;
        MEMORY[0x20003E76] = 1;
        MEMORY[0x20003E78] = 13;
      }
      break;
    default:
      return result;
  }
  return result;
}
// 2208: using guessed type int dword_2208;
// 220C: using guessed type int dword_220C;
// 2210: using guessed type int dword_2210;
// 2214: using guessed type int dword_2214;
// 2218: using guessed type int dword_2218;
// 221C: using guessed type int dword_221C;
// 9284: using guessed type int __fastcall sub_9284(_DWORD, _DWORD, _DWORD);
// 92D4: using guessed type int __fastcall sub_92D4(_DWORD, _DWORD, _DWORD);
// 9324: using guessed type int __fastcall sub_9324(_DWORD, _DWORD, _DWORD);
// 9374: using guessed type int __fastcall sub_9374(_DWORD, _DWORD, _DWORD);

//----- (00009DF0) --------------------------------------------------------
int sub_9DF0()
{
  sub_11E6C();
  sub_11054();
  return sub_8364();
}

//----- (00009E9E) --------------------------------------------------------
_DWORD *__fastcall sub_9E9E(int a1)
{
  _DWORD *result; // r0
  unsigned int i; // r5
  int v4; // r0

  result = *(_DWORD **)a1;
  if ( result )
  {
    for ( i = 0; *(unsigned __int8 *)(a1 + 6) > i; i = (unsigned __int8)(i + 1) )
    {
      v4 = *(_DWORD *)(*(_DWORD *)a1 + 4 * i);
      if ( v4 )
      {
        sub_F8E(v4);
        *(_DWORD *)(*(_DWORD *)a1 + 4 * i) = 0;
      }
    }
    result = sub_F8E(*(_DWORD *)a1);
    *(_DWORD *)a1 = 0;
  }
  return result;
}

//----- (00009ED8) --------------------------------------------------------
unsigned int __fastcall sub_9ED8(unsigned int result)
{
  unsigned int v1; // r1

  v1 = result >> 7;
  LOBYTE(result) = 2 * result;
  if ( v1 )
    return (unsigned __int8)result ^ 0x1B;
  else
    return (unsigned __int8)result;
}

//----- (00009EF8) --------------------------------------------------------
int sub_9EF8()
{
  if ( MEMORY[0x20003D92] >= 0x5Fu )
    MEMORY[0x20003D92] = 100;
  return MEMORY[0x20003D92];
}

//----- (00009F0C) --------------------------------------------------------
int sub_9F0C()
{
  if ( (sub_A14C(13) & 8) != 0 )
    return 1;
  if ( (sub_A14C(14) & 0x20) != 0 )
    return 2;
  if ( (unsigned int)sub_9EF8() > 5 )
    return 0;
  if ( (unsigned int)sub_A288() > 0xBB8 || sub_9EF8() )
    return 3;
  return 4;
}

//----- (00009F54) --------------------------------------------------------
int get_active_profile_index()
{
  return MEMORY[0x20004921];
}

//----- (00009F60) --------------------------------------------------------
int get_active_dpi_stage()
{
  return MEMORY[0x20004923];
}

//----- (00009F6C) --------------------------------------------------------
// The 4 stage DPI values are read from 0x20004924..0x2000492F as four packed 24-bit values. In the profile blob these occupy bytes 30..41.
unsigned int __fastcall get_dpi_value_for_stage(int stage_index)
{
  unsigned __int8 v2; // r0
  unsigned __int16 v3; // [sp+0h] [bp-4h]
  unsigned __int8 v4; // [sp+2h] [bp-2h]

  switch ( stage_index )
  {
    case 0:
      v3 = MEMORY[0x20004924];
      v2 = MEMORY[0x20004926];
LABEL_11:
      v4 = v2;
      return v3 | (v4 << 16);
    case 1:
      v3 = MEMORY[0x20004927];
      v2 = MEMORY[0x20004929];
      goto LABEL_11;
    case 2:
      v3 = MEMORY[0x2000492A];
      v2 = MEMORY[0x2000492C];
      goto LABEL_11;
    case 3:
      v3 = MEMORY[0x2000492D];
      v2 = MEMORY[0x2000492F];
      goto LABEL_11;
  }
  v3 = MEMORY[0x20004924];
  v4 = MEMORY[0x20004926];
  return v3 | (v4 << 16);
}

//----- (00009FD8) --------------------------------------------------------
// Stored at 0x20004922. Because it is exposed through transport opcode 30 and front-end cmd30, this byte is the per-profile DPI stage count. Blob index = 28.
int get_dpi_stage_count()
{
  return MEMORY[0x20004922];
}

//----- (00009FE4) --------------------------------------------------------
// The staged optical-engine mode at 0x2000493D is loaded from blob byte 55 and exposed through opcode 50.
int get_staged_optical_engine_mode()
{
  return MEMORY[0x2000493D];
}

//----- (00009FF0) --------------------------------------------------------
int __fastcall sub_9FF0(int a1, int a2, int a3, int a4)
{
  __int16 v5; // r1^2
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a4;
  sub_7578(&v7, a2, a3, a4);
  v5 = HIWORD(v7);
  *(_WORD *)a1 = v7;
  *(_WORD *)(a1 + 2) = v5;
  *(_BYTE *)(a1 + 4) = 109;
  *(_BYTE *)(a1 + 5) = 2;
  *(_BYTE *)(a1 + 6) = 0;
  *(_BYTE *)(a1 + 7) = 0;
  return 0;
}

//----- (0000A030) --------------------------------------------------------
int __fastcall sub_A030(int a1, _BYTE *a2)
{
  unsigned int v2; // r2
  int result; // r0

  v2 = 0;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  result = 4 * a1;
  do
  {
    a2[v2] = *(_BYTE *)(result + v2 + 536889697);
    v2 = (unsigned __int8)(v2 + 1);
  }
  while ( v2 < 4 );
  return result;
}

//----- (0000A058) --------------------------------------------------------
// The selector at 0x20004932 is loaded from blob byte 44 and participates in apply_threshold_and_optical_register_script(). Static evidence strongly suggests this is the threshold/LOD profile selector.
int get_lod_setting()
{
  return MEMORY[0x20004932];
}

//----- (0000A064) --------------------------------------------------------
_BYTE *__fastcall sub_A064(_BYTE *a1, unsigned __int8 *a2)
{
  int v3; // r6
  unsigned int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r1
  char v9[2]; // [sp+0h] [bp-4Ch] BYREF
  unsigned __int16 v10; // [sp+2h] [bp-4Ah]
  unsigned __int8 v11; // [sp+4h] [bp-48h]
  unsigned __int8 v12; // [sp+5h] [bp-47h]
  unsigned __int8 v13; // [sp+6h] [bp-46h]
  _BYTE v14[61]; // [sp+7h] [bp-45h] BYREF
  _BYTE *v15; // [sp+44h] [bp-8h]
  unsigned __int8 *v16; // [sp+48h] [bp-4h]

  v15 = a1;
  v16 = a2;
  v3 = (a2[1] << 8) | *a2;
  if ( v3 )
  {
    v4 = (MEMORY[0x2000497F] << 8) | MEMORY[0x2000497E];
    if ( v4 == 0xFFFF )
      v4 = 0;
    v10 = *((_WORD *)a2 + 1);
    v5 = v10;
  }
  else
  {
    sub_109D8();
    v4 = (MEMORY[0x2000497F] << 8) | MEMORY[0x2000497E];
    if ( v4 == 0xFFFF )
    {
      v4 = 0;
      sub_1532((_WORD *)0x2000497D, 0x143u, 0xFFu);
    }
    sub_15AA(v4, 0x37u);
    if ( v7 )
      v5 = (unsigned __int16)(v5 + 1);
    v10 = v5;
  }
  v9[0] = *a2;
  v9[1] = a2[1];
  v12 = a2[5];
  v13 = a2[6];
  if ( v4 && v5 )
  {
    v6 = v5 - 1;
    if ( v3 >= v6 )
    {
      v3 = (unsigned __int16)v6;
      v11 = v4 - 55 * v6;
    }
    else
    {
      v11 = 55;
    }
  }
  else
  {
    v11 = 0;
  }
  sub_141A(v14, (char *)(55 * v3 + 536889728), v11);
  return sub_141A(v15, v9, 0x3Eu);
}
// A0B6: variable 'v5' is possibly undefined
// A0EE: variable 'v7' is possibly undefined

//----- (0000A140) --------------------------------------------------------
// The sleep-time byte at 0x20004938 comes from blob byte 50.
int get_sleep_timeout_setting()
{
  return MEMORY[0x20004938];
}

//----- (0000A14C) --------------------------------------------------------
int __fastcall sub_A14C(__int16 a1)
{
  int result; // r0
  _BYTE v2[8]; // [sp+4h] [bp-8h] BYREF

  v2[0] = 0;
  result = sub_AE64(11, a1, 1, (int)v2, 100);
  if ( result )
    return v2[0];
  return result;
}

//----- (0000A174) --------------------------------------------------------
_BYTE *__fastcall sub_A174(_BYTE *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 1;
  result[4] = 21;
  result[5] = 6;
  result[6] = 1;
  result[7] = 52;
  result[8] = 18;
  return result;
}

//----- (0000A198) --------------------------------------------------------
// This getter chooses among 0x20004930, 0x20004931, and 0x2000493A depending on wireless/link route state. These bytes therefore belong to the per-profile report-rate family. Blob indices = 42, 43, and 52 respectively.
int get_effective_report_rate_setting()
{
  int v1; // r0

  if ( sub_BD2C() )
    return MEMORY[0x20004930];
  sub_3C08(0);
  if ( v1 )
    return MEMORY[0x2000493A];
  else
    return MEMORY[0x20004931];
}
// A1AE: variable 'v1' is possibly undefined

//----- (0000A1BC) --------------------------------------------------------
int sub_A1BC()
{
  int v1; // r0

  if ( sub_BD2C() )
    return normalize_report_rate_setting_for_route(MEMORY[0x20004930]);
  if ( sub_3C08() )
    v1 = MEMORY[0x2000493A];
  else
    v1 = MEMORY[0x20004931];
  return normalize_report_rate_setting_for_route(v1);
}
// 3C08: using guessed type int sub_3C08(void);
// 7414: using guessed type int __fastcall sub_7414(_DWORD);
// BD2C: using guessed type int sub_BD2C(void);

//----- (0000A1E8) --------------------------------------------------------
// Loads the active profile blob from NVM. Bytes 0..27 become seven 4-byte button mapping slots at 0x20004961..0x2000497C; bytes 28..56 become the scalar profile block at 0x20004922..0x2000493E.
int __fastcall load_profile_blob_from_nvm(int profile_index)
{
  int v2; // r0
  unsigned int i; // r4
  unsigned int j; // r4
  int result; // r0
  _BYTE v11[64]; // [sp+0h] [bp-40h] BYREF

  sub_1580(v11, 60);                            // load_profile_blob_from_nvm() copies 57 bytes from NVM. Bytes 0..27 go to 0x20004961..0x2000497C as 7 button-mapping entries (4 bytes each). Bytes 28..56 go to 0x20004922..0x2000493E as the per-profile scalar settings block.
  v2 = 8193;
  if ( profile_index != 1 )
  {
    if ( profile_index == 2 )
    {
      v2 = 8448;
    }
    else if ( profile_index == 3 )
    {
      v2 = 8704;
    }
  }
  sub_F624(v2, 57, v11);
  _R6 = __get_CPSR();
  __disable_irq();
  for ( i = 0; i < 0x1C; i = (unsigned __int8)(i + 1) )
    sub_11820(i, (unsigned __int8)v11[i]);
  for ( j = 1; j <= 0x1D; j = (unsigned __int8)(j + 1) )
    result = sub_11814(j, (unsigned __int8)v11[j + 27]);
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}
// 1580: using guessed type int __fastcall sub_1580(_DWORD, _DWORD);
// F624: using guessed type int __fastcall sub_F624(_DWORD, _DWORD, _DWORD);
// 11814: using guessed type int __fastcall sub_11814(_DWORD, _DWORD);
// 11820: using guessed type int __fastcall sub_11820(_DWORD, _DWORD);

//----- (0000A25C) --------------------------------------------------------
BOOL sub_A25C()
{
  int v0; // r0
  int v1; // r1
  int v2; // r2
  int v3; // r3

  v0 = get_lod_setting();
  return load_lod_override_mode(v0, v1, v2, v3) != 0;
}
// A262: variable 'v1' is possibly undefined
// A262: variable 'v2' is possibly undefined
// A262: variable 'v3' is possibly undefined

//----- (0000A270) --------------------------------------------------------
// The system-mode byte at 0x20004935 comes from blob byte 47. It drives Highspeed / Competitive / Competitive+ script selection.
int get_system_mode_setting()
{
  return MEMORY[0x20004935];
}

//----- (0000A27C) --------------------------------------------------------
int sub_A27C()
{
  return MEMORY[0x20003C04];
}

//----- (0000A288) --------------------------------------------------------
int sub_A288()
{
  return MEMORY[0x20003DBC];
}

//----- (0000A294) --------------------------------------------------------
__int16 __fastcall sub_A294(__int16 result)
{
  MEMORY[0x20003F18] = result;
  return result;
}

//----- (0000A2A0) --------------------------------------------------------
int sub_A2A0()
{
  return MEMORY[0x20003F11];
}

//----- (0000A2AC) --------------------------------------------------------
char __fastcall sub_A2AC(char result)
{
  _R1 = __get_CPSR();
  __disable_irq();
  MEMORY[0x20003F11] = result;
  __asm { MSR.W           PRIMASK, R1 }
  return result;
}

//----- (0000A2C0) --------------------------------------------------------
int __fastcall sub_A2C0(int result)
{
  MEMORY[0x20003F24] = result;
  return result;
}

//----- (0000A2CC) --------------------------------------------------------
char __fastcall sub_A2CC(char result)
{
  MEMORY[0x20003F13] = result;
  return result;
}

//----- (0000A2D8) --------------------------------------------------------
int __fastcall sub_A2D8(int result, _BYTE *a2)
{
  int i; // r2

  if ( result > 11 )
    result = 11;
  MEMORY[0x50021048] = result;
  for ( i = 0; i < result; ++i )
    *(_BYTE *)(i + 1342312676) = *a2++;
  return result;
}

//----- (0000A308) --------------------------------------------------------
int __fastcall sub_A308(_DWORD *a1)
{
  int v6; // r1
  int v7; // r3
  char v8; // r4

  MEMORY[0x50021020] = MEMORY[0x5002101C];
  __dsb(0xFu);
  if ( !MEMORY[0x50021070] )
  {
    MEMORY[0x5002101C] = 1;
    MEMORY[0x5002104C] = 1;
    _R1 = __get_CPSR();
    __disable_irq();
    MEMORY[0x50021004] = 1;
    while ( !MEMORY[0x50021070] && !MEMORY[0x50021010] )
      ;
    __asm { MSR.W           PRIMASK, R1 }
  }
  do
    v6 = MEMORY[0x50021070];
  while ( MEMORY[0x50021070] );
  MEMORY[0x50021010] = 1;
  v7 = MEMORY[0x50021048];
  v8 = MEMORY[0x50021044];
  if ( a1 && MEMORY[0x50021048] > 0 )
  {
    do
      *a1++ = *(_DWORD *)(4 * v6++ + 0x500210B8) >> v8;
    while ( v6 < v7 );
  }
  MEMORY[0x5002104C] = 0;
  return 0;
}

//----- (0000A38C) --------------------------------------------------------
int __fastcall sub_A38C(int a1, int a2, int a3)
{
  int v3; // r2
  int result; // r0

  if ( a1 )
  {
    if ( a3 == 1 )
      MEMORY[0x50001055] |= a2;
    else
      MEMORY[0x50001055] &= ~(_BYTE)a2;
  }
  else
  {
    if ( a3 == 1 )
      v3 = MEMORY[0x50001044] | a2;
    else
      v3 = MEMORY[0x50001044] & ~a2;
    MEMORY[0x50001044] = v3;
  }
  result = *(_DWORD *)(4 * a1 + 0x20003AD4);
  *(_DWORD *)(result + 20) = a2;
  return result;
}

//----- (0000A3D8) --------------------------------------------------------
int __fastcall sub_A3D8(int a1, unsigned int a2)
{
  unsigned int v2; // r2
  int v3; // r0
  int result; // r0

  *(_DWORD *)(*(_DWORD *)(4 * a1 + 0x20003AD4) + 40) = a2;
  *(_DWORD *)(*(_DWORD *)(4 * a1 + 0x20003AD4) + 84) = a2;
  v2 = 0;
  v3 = 32 * a1;
  do
  {
    if ( !a2 )
      break;
    if ( a2 << 31 )
      *(_DWORD *)(4 * (v3 + v2) + 0x200042D8) = 0;
    a2 >>= 1;
    ++v2;
  }
  while ( v2 < 0x20 );
  result = *(unsigned __int8 *)(MEMORY[0x20003AD4] + 32)
         | (*(unsigned __int8 *)(MEMORY[0x20003AD4] + 33) << 8)
         | (*(unsigned __int8 *)(MEMORY[0x20003AD4] + 34) << 16)
         | (*(unsigned __int8 *)(MEMORY[0x20003AD4] + 35) << 24)
         | *(unsigned __int8 *)(MEMORY[0x20003AD8] + 32)
         | (*(unsigned __int8 *)(MEMORY[0x20003AD8] + 33) << 8)
         | (*(unsigned __int8 *)(MEMORY[0x20003AD8] + 34) << 16)
         | (*(unsigned __int8 *)(MEMORY[0x20003AD8] + 35) << 24);
  if ( !result )
  {
    MEMORY[0xE000E180] = 1;
    __dsb(0xFu);
    __isb(0xFu);
    __isb(0xFu);
    MEMORY[0xE000E280] = 1;
    return 1;
  }
  return result;
}

//----- (0000A488) --------------------------------------------------------
int __fastcall sub_A488(int a1, unsigned int a2, int a3, int a4, int a5)
{
  unsigned int v5; // r4
  BOOL v6; // r0
  int v7; // r2
  _BYTE *v8; // r3
  unsigned int i; // r2
  int result; // r0

  v5 = a2;
  v6 = a1 != 0;
  if ( a3 )
    *(_DWORD *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 68) = a2;
  else
    *(_DWORD *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 72) = a2;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      *(_DWORD *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 52) = a2;
    }
    else
    {
      v7 = *(unsigned __int8 *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 80)
         | (*(unsigned __int8 *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 81) << 8)
         | (*(unsigned __int8 *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 82) << 16)
         | (*(unsigned __int8 *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 83) << 24);
      v8 = (_BYTE *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 32);
      v8[16] = *(_BYTE *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 80);
      v8[17] = BYTE1(v7);
      v8[18] = BYTE2(v7);
      v8[19] = HIBYTE(v7);
    }
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 56) = a2;
  }
  for ( i = 0; i < 0x20; ++i )
  {
    if ( !v5 )
      break;
    if ( v5 << 31 )
      *(_DWORD *)(4 * (32 * v6 + i) + 0x200042D8) = a5;
    v5 >>= 1;
  }
  *(_DWORD *)(*(_DWORD *)(4 * v6 + 0x20003AD4) + 84) = a2;
  result = *(_DWORD *)(4 * v6 + 0x20003AD4) + 32;
  *(_DWORD *)(result + 4) = a2;
  if ( a2 )
  {
    MEMORY[0xE000E100] = 1;
    return 1;
  }
  return result;
}

//----- (0000A594) --------------------------------------------------------
int __fastcall sub_A594(int a1)
{
  unsigned __int8 *v1; // r0

  v1 = (unsigned __int8 *)(*(_DWORD *)(4 * (a1 != 0) + 0x20003AD4) + 64);
  return v1[16] | (v1[17] << 8) | (v1[18] << 16) | (v1[19] << 24);
}

//----- (0000A5C4) --------------------------------------------------------
int __fastcall sub_A5C4(int a1, int a2)
{
  return sub_A38C((unsigned int)(a1 << 26) >> 31, 1 << (a1 & 0xDF), a2);
}

//----- (0000A5DC) --------------------------------------------------------
int __fastcall sub_A5DC(int a1, int a2)
{
  int v2; // r2
  int v3; // r4
  int v4; // r0
  int result; // r0

  v2 = 1 << (a1 & 0xDF);
  v3 = 4 * ((unsigned int)(a1 << 26) >> 31);
  v4 = *(_DWORD *)(v3 + 0x20003AD4);
  if ( a2 )
    *(_DWORD *)(v4 + 4) = v2;
  else
    *(_DWORD *)(v4 + 8) = v2;
  result = *(_DWORD *)(v3 + 536885972);
  *(_DWORD *)(result + 24) = v2;
  return result;
}

//----- (0000A62C) --------------------------------------------------------
int __fastcall sub_A62C(_BYTE *a1, int a2)
{
  sub_E234(a1, 0);
  return sub_A5DC((int)a1, a2);
}

//----- (0000A644) --------------------------------------------------------
unsigned __int8 *__fastcall sub_A644(unsigned __int8 *result)
{
  unsigned int v1; // r2

  v1 = 0;
  if ( MEMORY[0x20003E73] )
  {
    while ( *(unsigned __int8 *)(5 * v1 + 0x10014B44) != *result
         || !(*(unsigned __int8 *)(5 * v1 + 0x10014B45)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014B46) << 8)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014B47) << 16)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014B48) << 24)) )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x20003E73] )
        return result;
    }
    return (unsigned __int8 *)((int (__fastcall *)(_DWORD))(*(unsigned __int8 *)(5 * v1 + 0x10014B45)
                                                          | (*(unsigned __int8 *)(5 * v1 + 0x10014B46) << 8)
                                                          | (*(unsigned __int8 *)(5 * v1 + 0x10014B47) << 16)
                                                          | (*(unsigned __int8 *)(5 * v1 + 0x10014B48) << 24)))(*((_DWORD *)result + 1));
  }
  return result;
}

//----- (0000A6B8) --------------------------------------------------------
int __fastcall emit_transport_frame_via_channel_table(char event_code, int payload_len, int payload)
{
  MEMORY[0x200041D4] = 6;
  MEMORY[0x200041D5] = event_code;
  MEMORY[0x200041DA] = payload_len;
  sub_141A(536887772, payload, payload_len);
  return (*(int (__fastcall **)(int, int))(4 * MEMORY[0x20003892] + 0x100148D8))(536887764, payload_len + 8);
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (0000A71C) --------------------------------------------------------
int __fastcall sub_A71C(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v7; // r2
  int result; // r0

  MEMORY[0x5002C002] = (MEMORY[0x5002C002] >> 10 << 10) | ~(_WORD)a1 & 0x3FF;
  if ( a2 )
    MEMORY[0x5002C007] = a2 - 1;
  if ( a3 )
    MEMORY[0x5002C006] = MEMORY[0x5002C006] & 0xF | (16 * a3);
  if ( a4 )
    MEMORY[0x5002C004] = MEMORY[0x5002C004] & 0xFC1F | (32 * (a4 + 1)) & 0x3FF;
  if ( a5 )
    MEMORY[0x5002C005] = MEMORY[0x5002C005] & 3 | (4 * (a5 + 1));
  if ( a6 )
    MEMORY[0x5002C006] = (16 * (MEMORY[0x5002C006] >> 4)) | (a6 - 1) & 0xF;
  if ( a7 )
    MEMORY[0x5002C003] = (4 * a7 - 4) & 0xF | MEMORY[0x5002C003] & 0xF3;
  MEMORY[0x20003ADF] = 0;
  MEMORY[0x20003AE0] = 0;
  MEMORY[0x20003AE1] = 0;
  MEMORY[0x20003AE2] = 0;
  if ( a1 )
  {
    v7 = (unsigned int)(a1 << 25) >> 31 << 6;
    if ( (MEMORY[0x5002C000] & 0x40) != 0 )
    {
      MEMORY[0x20003ADF] = ((unsigned __int8)a1 >> 7 << 7) | v7;
    }
    else if ( (unsigned __int8)a1 >> 6 )
    {
      MEMORY[0x20003AE2] = -1;
    }
    else
    {
      MEMORY[0x20003AE2] = 0;
    }
    MEMORY[0x20003ADF] = (2 * (MEMORY[0x20003ADF] >> 1)) & 0x81
                       | a1 & 1
                       | (2 * ((a1 & 2) != 0)) & 0x83
                       | (4 * ((a1 & 4) != 0)) & 0x87
                       | (8 * ((a1 & 8) != 0)) & 0x8F
                       | (16 * ((a1 & 0x10) != 0)) & 0x9F
                       | (32 * ((a1 & 0x20) != 0)) & 0xBF
                       | v7;
    MEMORY[0x20003AE0] = a1 << 23 >> 31;
    MEMORY[0x20003AE1] = a1 << 22 >> 31;
  }
  result = MEMORY[0x5002C001] | 1;
  MEMORY[0x5002C001] |= 1u;
  return result;
}

//----- (0000A860) --------------------------------------------------------
int sub_A860()
{
  return MEMORY[0x20003898];
}

//----- (0000A86C) --------------------------------------------------------
unsigned __int8 *__fastcall sub_A86C(unsigned __int8 *result)
{
  unsigned int v1; // r2

  v1 = 0;
  if ( MEMORY[0x20003890] )
  {
    while ( *(unsigned __int8 *)(8 * v1 + 0x10014840) != *result || !*(_DWORD *)(8 * v1 + 0x10014844) )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x20003890] )
        return result;
    }
    return (unsigned __int8 *)(*(int (__fastcall **)(_DWORD, int))(8 * v1 + 0x10014844))(
                                result[1],
                                result[2] | (result[3] << 8) | (result[4] << 16) | (result[5] << 24));
  }
  return result;
}

//----- (0000A8C8) --------------------------------------------------------
int __fastcall sub_A8C8(char a1)
{
  int v1; // r1

  v1 = MEMORY[0x20003894];
  *MEMORY[0x20003894] = a1;
  *(_BYTE *)(v1 + 2) = 0;
  *(_BYTE *)(v1 + 1) = 2;
  return (*(int (__fastcall **)(int, int))(4 * MEMORY[0x20003892] + 0x100148D8))(536887728, 5);
}

//----- (0000A8F0) --------------------------------------------------------
int __fastcall sub_A8F0(unsigned __int8 *a1, int a2)
{
  int v2; // r4
  unsigned int v3; // r3
  unsigned __int8 v4; // r6
  unsigned int v5; // r3
  unsigned __int8 *v6; // r2

  LOBYTE(v2) = 0;
  v3 = 0;
  do
  {
    v4 = a1[v3 + 2];
    v3 = (unsigned __int8)(v3 + 1);
    v2 = (unsigned __int8)(v4 + v2);
  }
  while ( (unsigned int)a1[3] + 4 > v3 );
  v5 = 0;
  if ( MEMORY[0x20003890] )
  {
    while ( a1[2] != *(unsigned __int8 *)(8 * v5 + 0x10014840) )
    {
      v5 = (unsigned __int8)(v5 + 1);
      if ( v5 >= MEMORY[0x20003890] )
        return 0;
    }
    if ( a1[1] == v2 )
    {
      MEMORY[0x20003891] = a1[4];
      *(_BYTE *)(a2 + 1) = a1[5];
      *(_BYTE *)a2 = a1[2];
      if ( a1[3] )
      {
LABEL_9:
        v6 = a1 + 6;
LABEL_11:
        *(_DWORD *)(a2 + 2) = v6;
        return 1;
      }
LABEL_10:
      v6 = 0;
      goto LABEL_11;
    }
    if ( a1[2] == 104 )
    {
      *(_BYTE *)a2 = a1[2];
      if ( a1[3] )
        goto LABEL_9;
      goto LABEL_10;
    }
  }
  return 0;
}
// A8FE: conditional instruction was optimized away because r5.4<100u

//----- (0000A98C) --------------------------------------------------------
int __fastcall sub_A98C(char a1, char a2, int a3)
{
  _BYTE *v3; // r3

  MEMORY[0x200041B0] = 3;
  v3 = (_BYTE *)MEMORY[0x20003894];
  *MEMORY[0x20003894] = a1;
  v3[3] = MEMORY[0x20003891];
  v3[2] = a3;
  v3[1] = a2;
  return (*(int (__fastcall **)(int, int))(4 * MEMORY[0x20003892] + 0x100148D8))(536887728, a3 + 5);
}

//----- (0000A9C0) --------------------------------------------------------
char __fastcall sub_A9C0(char result)
{
  MEMORY[0x20003892] = result;
  return result;
}

//----- (0000A9EC) --------------------------------------------------------
int __fastcall sub_A9EC(int a1)
{
  int result; // r0

  if ( (a1 & 2) != 0 )
  {
    MEMORY[0x50001005] |= 0x20u;
    MEMORY[0x5002C033] |= 0x80u;
  }
  else
  {
    MEMORY[0x50001005] &= ~0x20u;
  }
  if ( a1 << 31 )
  {
    MEMORY[0x50001005] |= 0x10u;
    MEMORY[0x5002C002] |= 0x3FFu;
    MEMORY[0x5002C003] |= 0x80u;
    MEMORY[0x5002C000] = -6;
    result = MEMORY[0x5002C001] | 1;
    MEMORY[0x5002C001] |= 1u;
  }
  else
  {
    sub_AB24(0);
    MEMORY[0x5002C002] |= 0x3FFu;
    result = MEMORY[0x50001005] & 0xEF;
    MEMORY[0x50001005] &= ~0x10u;
  }
  return result;
}

//----- (0000AA60) --------------------------------------------------------
unsigned __int8 *__fastcall sub_AA60(unsigned __int8 *result)
{
  unsigned int v1; // r2

  v1 = 0;
  if ( MEMORY[0x20003E8D] )
  {
    while ( *(unsigned __int8 *)(5 * v1 + 0x10014D76) != *result
         || !(*(unsigned __int8 *)(5 * v1 + 0x10014D77)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014D78) << 8)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014D79) << 16)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014D7A) << 24)) )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x20003E8D] )
        return result;
    }
    return (unsigned __int8 *)((int (__fastcall *)(int))(*(unsigned __int8 *)(5 * v1 + 0x10014D77)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014D78) << 8)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014D79) << 16)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014D7A) << 24)))(result[1] | (result[2] << 8) | (result[3] << 16) | (result[4] << 24));
  }
  return result;
}

//----- (0000AAEC) --------------------------------------------------------
int __fastcall sub_AAEC(char a1, unsigned int a2, char *a3)
{
  MEMORY[0x200041F8] = 7;
  MEMORY[0x200041F9] = a1;
  sub_141A((_BYTE *)0x200041FA, a3, a2);
  return (*(int (__fastcall **)(int, unsigned int))(4 * MEMORY[0x20003892] + 0x100148D8))(536887800, a2 + 2);
}

//----- (0000AB24) --------------------------------------------------------
int __fastcall sub_AB24(char a1)
{
  unsigned __int8 v1; // r1
  int v2; // r1
  int result; // r0

  v1 = ~MEMORY[0x5002C002];
  MEMORY[0x5002C000] = a1 & 0xFA;
  if ( (a1 & 0x40) != 0 )
  {
    MEMORY[0x20003ADF] = MEMORY[0x20003ADF] & 0x3F
                       | (((v1 & 0x40) != 0) << 6) & 0x7F
                       | ((unsigned __int8)~MEMORY[0x5002C002] >> 7 << 7);
    MEMORY[0x20003AE2] = 0;
  }
  else
  {
    v2 = v1 >> 6;
    if ( v2 )
      LOBYTE(v2) = -1;
    MEMORY[0x20003AE2] = v2;
    MEMORY[0x20003ADF] &= 0x3Fu;
  }
  result = MEMORY[0x5002C001] | 1;
  MEMORY[0x5002C001] |= 1u;
  return result;
}

//----- (0000AB88) --------------------------------------------------------
int __fastcall sub_AB88(char a1, unsigned int a2, char a3)
{
  int v6; // r4
  unsigned int v7; // r0

  v6 = 0;
  sub_107D8();
  MEMORY[0x20003AE8] = v7;
  while ( 1 )
  {
    v7 >>= 1;
    MEMORY[0x20003AE8] = v7;
    if ( v7 <= a2 )
      break;
    if ( (unsigned int)++v6 >= 6 )
      goto LABEL_5;
  }
  MEMORY[0x5002C009] = (8 * (MEMORY[0x5002C009] >> 3)) | v6 & 7;
LABEL_5:
  if ( v6 == 6 )
    MEMORY[0x5002C009] = 8 * (MEMORY[0x5002C009] >> 3) + 5;
  MEMORY[0x5002C000] = MEMORY[0x5002C000] & 0xFB | (4 * a1) & 7;
  MEMORY[0x5002C00A] = MEMORY[0x5002C00A] & 0xFD | (2 * a3) & 3;
  MEMORY[0x5002C00A] = (2 * (MEMORY[0x5002C00A] >> 1)) | ((a3 & 2) != 0);
  return MEMORY[0x20003AE8];
}
// AB9A: variable 'v7' is possibly undefined

//----- (0000AC00) --------------------------------------------------------
_BYTE *__fastcall sub_AC00(unsigned int a1, unsigned int a2)
{
  int v2; // r4
  int v3; // r5
  unsigned __int64 v4; // r0
  _BYTE *result; // r0
  _DWORD v6[3]; // [sp+0h] [bp-Ch]

  v2 = a1;
  v6[2] = MEMORY[0x10014A50];
  v6[1] = MEMORY[0x10014A4C];
  v6[0] = MEMORY[0x10014A48];
  if ( a1 <= 2 )
  {
    if ( a1 != 2 )
    {
      v3 = 1000000001;
      goto LABEL_5;
    }
  }
  else
  {
    v2 = 2;
  }
  v3 = 2000000001;
LABEL_5:
  if ( a2 )
  {
    v4 = sub_FDA(2 * MEMORY[0x20003AE8], 0, a2, 0);
    if ( (unsigned int)v3 < v4 )
    {
      result = (_BYTE *)sub_100A(v4 - (unsigned int)v3 + 1999999999, 0x77359400u);
      if ( (unsigned int)result > 0xFF )
        result = (_BYTE *)(&locret_FE + 1);
    }
    else
    {
      result = byte_1;
    }
    *(_BYTE *)v6[v2] = (_BYTE)result;
  }
  else
  {
    result = (_BYTE *)v6[v2];
    *result = 0;
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000AC8C) --------------------------------------------------------
int __fastcall sub_AC8C(_BYTE *a1, int a2, int a3)
{
  int v3; // r3
  int result; // r0

  if ( (unsigned __int8)*a1 > 7u )
    *a1 = 7;
  MEMORY[0x5002C008] = (8 * (MEMORY[0x5002C008] >> 3)) | *a1 & 7;
  MEMORY[0x5002C008] &= ~8u;
  v3 = 0;
  if ( *a1 )
  {
    do
    {
      *(_BYTE *)(v3 + 1342357516) = *(_BYTE *)(a2 + v3);
      *(_BYTE *)(v3 + 1342357524) = *(_BYTE *)(a3 + v3);
      ++v3;
    }
    while ( (unsigned __int8)*a1 > v3 );
  }
  MEMORY[0x5002C001] = MEMORY[0x20003ADE] | 0xC;
  do
    result = MEMORY[0x5002C00B];
  while ( !MEMORY[0x5002C00B] );
  return result;
}

//----- (0000ACE8) --------------------------------------------------------
int __fastcall sub_ACE8(int a1, int a2)
{
  char v3[4]; // [sp+0h] [bp-Ch] BYREF
  int v4; // [sp+4h] [bp-8h] BYREF
  int v5; // [sp+8h] [bp-4h] BYREF

  v4 = a1;
  v5 = a2;
  v3[0] = 1;
  return sub_AC8C(v3, &v4, &v5);
}
// AC8C: using guessed type int __fastcall sub_AC8C(_DWORD, _DWORD, _DWORD);

//----- (0000AD00) --------------------------------------------------------
unsigned int __fastcall sub_AD00(char *a1, unsigned int a2, char *a3, unsigned int a4, _BYTE *a5, unsigned int a6)
{
  unsigned int v9; // r4
  int i; // r0
  char v11; // r5
  _DWORD v13[16]; // [sp+8h] [bp-114h] BYREF
  char v14[64]; // [sp+48h] [bp-D4h] BYREF
  char v15[64]; // [sp+88h] [bp-94h] BYREF
  char v16[32]; // [sp+C8h] [bp-54h] BYREF
  char v17[36]; // [sp+E8h] [bp-34h] BYREF
  char *v18; // [sp+10Ch] [bp-10h]
  unsigned int v19; // [sp+110h] [bp-Ch]
  char *v20; // [sp+114h] [bp-8h]
  unsigned int v21; // [sp+118h] [bp-4h]

  v18 = a1;
  v19 = a2;
  v20 = a3;
  v21 = a4;
  v9 = a6;
  sub_1580(v13, 0x40u);
  sub_1532(v14, 0x40u, 0x36u);
  sub_1532(v15, 0x40u, 0x5Cu);
  if ( a2 <= 0x40 )
    sub_141A(v13, a1, a2);
  else
    sub_11AD4(a1, a2, v13, 0x40u);
  for ( i = 0; i < 64; ++i )
  {
    v11 = *((_BYTE *)v13 + i);
    v14[i] ^= v11;
    v15[i] ^= v11;
  }
  sub_3DFC(v14, 0x40u, v20, a4, v16, 0x20u);
  sub_3DFC(v15, 0x40u, v16, 0x20u, v17, 0x20u);
  if ( a6 > 0x20 )
    v9 = 32;
  sub_141A(a5, v17, v9);
  return v9;
}

//----- (0000AD9C) --------------------------------------------------------
int sub_AD9C()
{
  sub_E234(&byte_1[16], 0x13u);
  sub_E234(&byte_1[17], 0x14u);
  sub_E248(17, 1);
  sub_E248(18, 1);
  return sub_E1F8(18, 1);
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000ADC8) --------------------------------------------------------
void sub_ADC8()
{
  unsigned int v0; // r0

  v0 = sub_107E0();
  sub_15AA(v0 >> 1, MEMORY[0x5002B056] + 1);
}

//----- (0000AE64) --------------------------------------------------------
int __fastcall sub_AE64(char a1, __int16 a2, int a3, int a4, int a5)
{
  unsigned int v5; // r4
  int i; // r0
  unsigned int j; // r0
  int v9; // [sp+0h] [bp-8h]
  char v10; // [sp+4h] [bp-4h]

  v9 = MEMORY[0x5002B044] & 1;
  if ( (MEMORY[0x5002B044] & 1) == 0 )
    MEMORY[0x5002B044] |= 1u;
  if ( a3 )
  {
    v10 = a1 & 0x7F;
    while ( 1 )
    {
      v5 = a3 <= 32 ? a3 : 32;
      for ( i = a5; ; --i )
      {
        MEMORY[0x20003AF0] = a4;
        MEMORY[0x5002B042] = MEMORY[0x5002B042] & 0x7F | ((_WORD)v5 << 7);
        MEMORY[0x5002B052] = (MEMORY[0x5002B052] >> 7 << 7) | v10;
        MEMORY[0x5002B050] = a2;
        MEMORY[0x5002B041] |= 1u;
        while ( !(MEMORY[0x5002B046] << 31) )
          ;
        MEMORY[0x5002B045] |= 1u;
        if ( i <= 0 || (MEMORY[0x5002B046] & 2) == 0 )
          break;
      }
      if ( MEMORY[0x5002B046] >> 7 != v5 )
        return 0;
      if ( a4 )
      {
        for ( j = 0; j < v5; ++j )
          *(_BYTE *)(a4 + j) = MEMORY[0x5002B048];
        MEMORY[0x5002B04B] |= 0x80u;
      }
      a3 -= v5;
      a2 += v5;
      a4 += v5;
      if ( !a3 )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    MEMORY[0x20003AF0] = 0;
    if ( !v9 )
      MEMORY[0x5002B044] = 2 * (MEMORY[0x5002B044] >> 1);
    return 1;
  }
}
// AEA2: conditional instruction was optimized away because r4.4 is in (1..20|<0)
// AF08: conditional instruction was optimized away because r4.4 is in (1..20|<0)

//----- (0000AF4C) --------------------------------------------------------
int __fastcall sub_AF4C(char a1, __int16 a2, int a3, int a4, int a5)
{
  unsigned int v7; // r5
  int i; // r7
  __int16 v9; // r1
  unsigned int j; // r4
  int v12; // [sp+0h] [bp-8h]

  v12 = MEMORY[0x5002B044] & 1;
  if ( (MEMORY[0x5002B044] & 1) == 0 )
    MEMORY[0x5002B044] |= 1u;
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = a3 <= 32 ? a3 : 32;
      for ( i = a5; ; --i )
      {
        MEMORY[0x20003AF0] = 0;
        v9 = ((MEMORY[0x5002B042] << 8) | MEMORY[0x5002B041]) & 0x803F | ((_WORD)v7 << 6) & 0x7FFF;
        MEMORY[0x5002B041] = MEMORY[0x5002B041] & 0x3F | ((_BYTE)v7 << 6);
        MEMORY[0x5002B042] = HIBYTE(v9);
        for ( j = 0; j < v7; ++j )
          MEMORY[0x5002B04C] = *(_BYTE *)(a4 + j);
        MEMORY[0x5002B04F] |= 0x80u;
        MEMORY[0x5002B052] = (MEMORY[0x5002B052] >> 7 << 7) | a1 & 0x7F;
        MEMORY[0x5002B050] = a2;
        MEMORY[0x5002B041] |= 2u;
        while ( !(MEMORY[0x5002B046] << 31) )
          ;
        MEMORY[0x5002B045] |= 1u;
        if ( i <= 0 || (MEMORY[0x5002B046] & 2) == 0 )
          break;
      }
      if ( MEMORY[0x5002B046] >> 7 != v7 )
        return 0;
      a3 -= v7;
      a2 += v7;
      a4 += v7;
      if ( !a3 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    if ( !v12 )
      MEMORY[0x5002B044] = 2 * (MEMORY[0x5002B044] >> 1);
    return 1;
  }
}
// AF88: conditional instruction was optimized away because r5.4 is in (1..20|<0)
// AFAE: conditional instruction was optimized away because r5.4 is in (1..20|<0)

//----- (0000B064) --------------------------------------------------------
int __fastcall sub_B064(int result)
{
  _R2 = __get_CPSR();
  __disable_irq();
  *(_BYTE *)(result + 5) = 0;
  *(_BYTE *)(result + 4) = 0;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (0000B090) --------------------------------------------------------
unsigned int sub_B090()
{
  return (unsigned int)(MEMORY[0x100145C7] << 25) >> 31;
}

//----- (0000B0B4) --------------------------------------------------------
int __fastcall update_aux_event_bitmap_queue(char event_mask, int queue_value, int add_entry, int persist_mode)
{
  int v4; // r6
  int v5; // r4
  bool v6; // zf
  char v7; // r2
  unsigned int v8; // r0
  unsigned int v9; // r0

  if ( persist_mode )
  {
    MEMORY[0x20004BCF] = 2;
    v4 = 1;
    v5 = 3;
  }
  else
  {
    v4 = 0;
    v5 = 2;
  }
  v6 = add_entry == 0;
  v7 = *(_BYTE *)(v4 + 536890319);
  if ( v6 )
  {
    *(_BYTE *)(v4 + 536890319) = v7 & ~event_mask;
    v9 = 0;
    while ( *(unsigned __int8 *)(v5 + v9 + 536890319) != queue_value )
    {
      v9 = (unsigned __int8)(v9 + 1);
      if ( v9 >= 6 )
        goto LABEL_14;
    }
    *(_BYTE *)(v5 + v9 + 536890319) = 0;
  }
  else
  {
    *(_BYTE *)(v4 + 536890319) = v7 | event_mask;
    v8 = 0;
    while ( *(_BYTE *)(v5 + v8 + 536890319) )
    {
      v8 = (unsigned __int8)(v8 + 1);
      if ( v8 >= 6 )
        goto LABEL_14;
    }
    *(_BYTE *)(v5 + v8 + 536890319) = queue_value;
  }
LABEL_14:
  if ( persist_mode )
    return ramapi_transport_enqueue_frame(536885296, 536890319, 9);
  else
    return ramapi_transport_emit_small_frame(536890319, 8, 1);
}
// 3B84: using guessed type int __fastcall sub_3B84(_DWORD, _DWORD, _DWORD);
// 3C44: using guessed type int __fastcall sub_3C44(_DWORD, _DWORD, _DWORD);

//----- (0000B130) --------------------------------------------------------
int __fastcall sub_B130(unsigned __int8 a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r0
  __int64 v7; // r0
  int v8; // r2
  int v9; // r3
  int result; // r0
  int v15; // [sp+0h] [bp-4h] BYREF

  v15 = a4;
  if ( (MEMORY[0x20003D7C] & a1) != 0 )
  {
    LOBYTE(v15) = -1;                           // Recovery path guarded by the pending-event mask at 0x20003D7C: probe the current sensor state through sub_3C5C(0x55, ...) and either re-run sensor configuration or mark failure at 0x20003D7E.
    _R4 = __get_CPSR();
    __disable_irq();
    sub_ACE8(127, 0);
    sub_ACE8(9, 90);
    sub_3C5C(85, &v15);
    if ( (v15 & 0x80) != 0 )
    {
      v5 = sub_ACE8(6, 64);
      v6 = sub_13FA4(v5);
      LODWORD(v7) = get_system_mode_setting(v6);
      if ( (_DWORD)v7 != 2 )
        v7 = get_staged_optical_engine_mode();
      configure_sensor_from_profile(v7, SHIDWORD(v7), v8, v9);
      sub_B130(1);
    }
    else
    {
      sub_ACE8(85, 189);
      MEMORY[0x20003D7E] = 1;
      sub_91B4(0);
    }
    result = sub_ACE8(9, 0);
    __asm { MSR.W           PRIMASK, R4 }
  }
  else
  {
    MEMORY[0x20003D7E] = 0;
    return 0;
  }
  return result;
}
// B192: variable 'v7' is possibly undefined
// B192: variable 'v8' is possibly undefined
// B192: variable 'v9' is possibly undefined
// 3C5C: using guessed type int __fastcall sub_3C5C(_DWORD, _DWORD);
// 91B4: using guessed type int __fastcall sub_91B4(_DWORD);
// 9FE4: using guessed type __int64 sub_9FE4(void);
// A270: using guessed type int __fastcall sub_A270(_DWORD);
// ACE8: using guessed type int __fastcall sub_ACE8(_DWORD, _DWORD);
// 13FA4: using guessed type int __fastcall sub_13FA4(_DWORD);

//----- (0000B1B4) --------------------------------------------------------
int sub_B1B4()
{
  return MEMORY[0x20003D9E];
}

//----- (0000B1D4) --------------------------------------------------------
unsigned __int8 *__fastcall sub_B1D4(unsigned int a1, unsigned __int8 *a2)
{
  unsigned __int8 *result; // r0

  if ( (a1 & 0x20) != 0 )
    return sub_AA60(a2);
  if ( (a1 & 0x40) != 0 )
    return sub_10EB8(a2);
  result = (unsigned __int8 *)(a1 >> 7);
  if ( result )
    return sub_11158(a2);
  return result;
}

//----- (0000B1FC) --------------------------------------------------------
int __fastcall sub_B1FC(int a1, int a2)
{
  unsigned int v2; // r2
  int v3; // r3

  v2 = 0;
  if ( !MEMORY[0x20003E8D] )
    return 0;
  v3 = *(unsigned __int8 *)(a1 + 1);
  while ( v3 != *(unsigned __int8 *)(5 * v2 + 0x10014D76) )
  {
    v2 = (unsigned __int8)(v2 + 1);
    if ( v2 >= MEMORY[0x20003E8D] )
      return 0;
  }
  *(_BYTE *)a2 = v3;
  *(_DWORD *)(a2 + 1) = a1 + 2;
  return 1;
}

//----- (0000B428) --------------------------------------------------------
_BYTE *__fastcall sub_B428(char *a1, int a2, int a3, unsigned int a4)
{
  _BYTE *result; // r0
  int v6; // r6

  result = (_BYTE *)sub_F2C(a4);
  v6 = (int)result;
  if ( result )
  {
    sub_141A(result, a1, a4);
    sub_F62C();
    return sub_F8E(v6);
  }
  return result;
}

//----- (0000B4A0) --------------------------------------------------------
unsigned int sub_B4A0()
{
  unsigned int result; // r0

  result = MEMORY[0x20003DF6];
  if ( MEMORY[0x20003DF6] )
  {
    result = (unsigned __int16)(ramapi_get_elapsed_ticks() + MEMORY[0x20003E90]);
    MEMORY[0x20003E90] = result;
    if ( result >= 0x3E8 )
    {
      --MEMORY[0x20003DF6];
      MEMORY[0x20003E90] = 0;
      return 0;
    }
  }
  return result;
}

//----- (0000B5D0) --------------------------------------------------------
int __fastcall sub_B5D0(_BYTE *a1)
{
  _BYTE *v2; // r0

  v2 = (_BYTE *)sub_A860();
  sub_4748(v2, a1);
  return sub_A98C(55, 0, 8);
}

//----- (0000B5EA) --------------------------------------------------------
int __fastcall sub_B5EA(char *a1)
{
  _BYTE *v2; // r0

  v2 = (_BYTE *)sub_A860();
  sub_141A(v2, a1, 9u);
  return sub_A98C(48, 0, 9);
}

//----- (0000B622) --------------------------------------------------------
int sub_B622()
{
  return sub_A98C(54, 0, 0);
}

//----- (0000B66C) --------------------------------------------------------
int sub_B66C()
{
  int result; // r0

  result = MEMORY[0x20003A2D];
  if ( MEMORY[0x20003A2D] )
  {
    sub_A98C(27, 0, 0);
    MEMORY[0x20003A2D] = 0;
    return 0;
  }
  return result;
}

//----- (0000B690) --------------------------------------------------------
int sub_B690()
{
  return sub_A98C(27, 0, 0);
}

//----- (0000B6A0) --------------------------------------------------------
int sub_B6A0()
{
  int result; // r0

  result = MEMORY[0x20003A2D];
  if ( MEMORY[0x20003A2D] )
  {
    sub_A98C(26, 0, 0);
    MEMORY[0x20003A2D] = 0;
    return 0;
  }
  return result;
}

//----- (0000B6C4) --------------------------------------------------------
int sub_B6C4()
{
  return sub_A98C(26, 0, 0);
}

//----- (0000B6EC) --------------------------------------------------------
void __fastcall sub_B6EC(int a1, unsigned __int16 *a2)
{
  sub_13890(*a2, a2[1], 1);
}

//----- (0000B6FC) --------------------------------------------------------
int __fastcall sub_B6FC(_BYTE *a1)
{
  sub_8638(2, a1, 0);
  MEMORY[0x20004285] = 1;
  MEMORY[0x20004286] = 0;
  MEMORY[0x20003AA9] = 4;
  MEMORY[0x20003AAA] = 0x80;
  MEMORY[0x20003AAB] = 34;
  sub_141A((_BYTE *)0x20003AAC, (char *)0x20004285, 2u);
  MEMORY[0x20003AA8] = 5;
  return clear_pending_vendor_slot(7);
}

//----- (0000B778) --------------------------------------------------------
int sub_B778()
{
  return 536889429;
}

//----- (0000B780) --------------------------------------------------------
_BYTE *sub_B780()
{
  unsigned int v0; // r2
  char v2[28]; // [sp+0h] [bp-1Ch] BYREF

  sub_1532((_WORD *)0x2000483D, 0x18u, 0xFFu);
  sub_8A44(v2);
  sub_141A((_BYTE *)0x20004866, v2, 0x1Au);
  if ( MEMORY[0x20004866] == 255 || !MEMORY[0x20004866] || MEMORY[0x20004867] == 255 )
    v0 = 0;
  else
    v0 = (unsigned __int8)(MEMORY[0x20004866] - 9);
  MEMORY[0x2000483D] = v0;
  return sub_141A((_BYTE *)0x2000483E, (char *)0x20004870, v0);
}

//----- (0000B7D4) --------------------------------------------------------
_BYTE *sub_B7D4()
{
  unsigned int v0; // r2
  _DWORD v2[7]; // [sp+0h] [bp-3Ch] BYREF
  _DWORD v3[8]; // [sp+1Ch] [bp-20h] BYREF

  sub_1532((_WORD *)0x20004855, 0x11u, 0xFFu);
  sub_13FA4();
  sub_8A9C(v3);
  v2[1] = v3[1];
  v2[0] = v3[0];
  v2[2] = v3[2];
  v2[3] = v3[3];
  v2[4] = v3[4];
  v2[6] = v3[6];
  v2[5] = v3[5];
  v0 = LOBYTE(v3[0]);
  if ( LOBYTE(v3[0]) == 255 || !LOBYTE(v3[0]) || BYTE1(v2[0]) == 255 )
    v0 = 0;
  MEMORY[0x20004855] = v0;
  return sub_141A((_BYTE *)0x20004856, (char *)v2 + 1, v0);
}

//----- (0000B830) --------------------------------------------------------
int sub_B830()
{
  MEMORY[0x20003CE0] = 268486461;
  MEMORY[0x20003CE8] = 268486821;
  MEMORY[0x20003CEC] = 268486981;
  MEMORY[0x20003D08] = 268487041;
  MEMORY[0x20003D0C] = 268487073;
  MEMORY[0x20003D10] = 268486813;
  MEMORY[0x20003CE4] = 536876725;
  MEMORY[0x20003CF0] = 536877407;
  MEMORY[0x20003CF4] = 536877601;
  MEMORY[0x20003CF8] = 536878127;
  MEMORY[0x20003CFC] = 268487033;
  MEMORY[0x20003D00] = 536878547;
  MEMORY[0x20003D04] = 536878573;
  return 536886488;
}

//----- (0000B8B0) --------------------------------------------------------
int sub_B8B0()
{
  unsigned __int8 v0; // r1

  v0 = MEMORY[0x20003CD8];
  if ( MEMORY[0x20003CD8] > 1u )
  {
    v0 = 0;
    MEMORY[0x20003CD8] = 0;
  }
  return v0;
}

//----- (0000B8F0) --------------------------------------------------------
int __fastcall sub_B8F0(_BYTE *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  ramapi_transport_select_context(a1);
  v2 = sub_75B0(268482373);
  sub_11034(v2);
  v3 = sub_D188(536878741);
  sub_10E74(v3);
  apply_system_mode_register_script(0);
  MEMORY[0x20003CD8] = 0;
  v4 = sub_B780();
  v5 = sub_B7D4(v4);
  if ( MEMORY[0x20003CE0] )
    v5 = MEMORY[0x20003CE0](v5);
  if ( MEMORY[0x20003CE8] )
    MEMORY[0x20003CE8](v5);
  *a1 = 2;
  sub_7808(4);
  if ( !apply_active_profile_configuration() )
  {
    if ( MEMORY[0x20003CDA] )
    {
      MEMORY[0x20003CDA] = 0;
      sub_3B48(1);
    }
    if ( MEMORY[0x20003CDA] != 1 )
    {
      MEMORY[0x20003CDA] = 1;
      sub_3B48(1);
    }
  }
  return select_runtime_transport_callback_profile(1);
}
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);
// 75B0: using guessed type int __fastcall sub_75B0(_DWORD);
// 7808: using guessed type int __fastcall sub_7808(_DWORD);
// B780: using guessed type int sub_B780(void);
// B7D4: using guessed type int __fastcall sub_B7D4(_DWORD);
// D188: using guessed type int __fastcall sub_D188(_DWORD);
// DBF8: using guessed type int __fastcall sub_DBF8(_DWORD);
// 10E74: using guessed type int __fastcall sub_10E74(_DWORD);
// 11034: using guessed type int __fastcall sub_11034(_DWORD);

//----- (0000B974) --------------------------------------------------------
int sub_B974()
{
  int v0; // r0

  if ( MEMORY[0x20003CEC] )
    MEMORY[0x20003CEC]();
  sub_10E54();
  sub_11008();
  v0 = sub_852C();
  return ramapi_transport_select_context(v0);
}
// 20003CEC: using guessed type int (*)(void);

//----- (0000BB54) --------------------------------------------------------
unsigned int sub_BB54()
{
  unsigned int result; // r0

  for ( result = 0; result < 0x3B; result = (unsigned __int8)(result + 1) )
    *(_BYTE *)(result + 536890063) = 0;
  return result;
}

//----- (0000BBD8) --------------------------------------------------------
int __fastcall sub_BBD8(int a1, char a2)
{
  int result; // r0

  if ( a1 == 170 )
    result = 4;
  else
    result = a1 & 3;
  *(_BYTE *)(result + 536886882) = a2;
  return result;
}

//----- (0000BBF0) --------------------------------------------------------
int sub_BBF0()
{
  return 536889446;
}

//----- (0000BBF8) --------------------------------------------------------
_BYTE *sub_BBF8()
{
  sub_F67A();
  sub_E234(&byte_1[25], 0x10u);
  sub_E234(&byte_1[28], 0x10u);
  sub_E234(&byte_1[26], 0x10u);
  sub_E234(&byte_1[27], 0x10u);
  sub_E234(&byte_1[23], 3u);
  sub_E234(&byte_1[1], 0);
  sub_E234(&byte_1[6], 5u);
  sub_E234(&byte_1[5], 0);
  sub_E234(&byte_1[9], 3u);
  sub_E234(&byte_1[8], 3u);
  sub_E234(&byte_1[7], 0);
  sub_E234(&byte_1[2], 0);
  sub_E234(&byte_1[3], 0);
  sub_E234(&byte_1[30], 0);
  sub_E234(&byte_1[21], 0);
  sub_E198(0, 0x400000, 1);
  sub_E234(&byte_1[4], 0);
  sub_A5C4(5, 0);
  sub_E198(0, 5, 1);
  sub_E198(0, -1862268964, 1);
  sub_E1C8(0, 16779160, 1);
  sub_E1C8(0, 68, 0);
  sub_E234(&byte_1[24], 0);
  sub_A5DC(25, 0);
  sub_A9EC(1);
  sub_AB24(18);
  sub_A71C(259, 0, 14, 32, 64, 15, 2);
  return sub_1156C();
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000BD2C) --------------------------------------------------------
int sub_BD2C()
{
  return MEMORY[0x20003D15];
}

//----- (0000BD44) --------------------------------------------------------
int sub_BD44()
{
  return MEMORY[0x200038A0];
}

//----- (0000BD50) --------------------------------------------------------
int __fastcall sub_BD50(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r1
  int v5; // r4

  if ( a1 == 28 )
  {
    v3 = 0;
    a3 = MEMORY[0x200038A1];
  }
  else
  {
    v4 = 0;
    if ( MEMORY[0x200038A1] )
    {
      while ( *(unsigned __int8 *)(12 * v4 + 0x200038A4) != a1 )
      {
        v4 = (unsigned __int8)(v4 + 1);
        if ( v4 >= MEMORY[0x200038A1] )
          goto LABEL_7;
      }
      v3 = v4;
      a3 = (unsigned __int8)(v4 + 1);
    }
  }
LABEL_7:
  if ( v3 >= a3 )
    return 28;
  while ( *(unsigned __int8 *)(12 * v3 + 0x200038AC) >= (unsigned int)*(unsigned __int8 *)(12 * v3 + 0x200038AD) )
  {
    v3 = (unsigned __int8)(v3 + 1);
    if ( v3 >= a3 )
      return 28;
  }
  v5 = 12 * v3;
  (*(void (**)(void))(v5 + 536885416))();
  ++*(_BYTE *)(v5 + 536885420);
  return *(unsigned __int8 *)(v5 + 536885412);
}
// BD84: variable 'v3' is possibly undefined

//----- (0000BDBC) --------------------------------------------------------
unsigned int __fastcall sub_BDBC(unsigned int result)
{
  unsigned int v1; // r1
  unsigned int v2; // r2
  _BYTE *v3; // r0
  char v4; // r1

  v1 = 0;
  v2 = MEMORY[0x200038A1];
  if ( MEMORY[0x200038A1] )
  {
    while ( *(unsigned __int8 *)(12 * v1 + 0x200038A4) != result )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x200038A1] )
        return result;
    }
    v3 = (_BYTE *)(12 * v1 + 536885412);
    v3[8] = v3[9] + 1;
    v4 = 1;
    v3[11] = 1;
    result = 0;
    if ( v2 )
    {
      while ( *(_BYTE *)(12 * result + 0x200038AF) )
      {
        result = (unsigned __int8)(result + 1);
        if ( result >= v2 )
          goto LABEL_6;
      }
      v4 = 0;
    }
LABEL_6:
    MEMORY[0x200038A0] = v4;
  }
  return result;
}

//----- (0000BE74) --------------------------------------------------------
unsigned int sub_BE74()
{
  unsigned int result; // r0
  unsigned int v1; // r3
  _BYTE *v2; // r1

  result = 0;
  v1 = MEMORY[0x200038A1];
  if ( MEMORY[0x200038A1] )
  {
    do
    {
      v2 = (_BYTE *)(12 * result + 536885412);
      v2[8] = v2[9] + 1;
      result = (unsigned __int8)(result + 1);
      v2[11] = 1;
    }
    while ( result < v1 );
  }
  return result;
}

//----- (0000BEA8) --------------------------------------------------------
int __fastcall clear_pending_vendor_slot(int result)
{
  unsigned int v1; // r1

  v1 = 0;
  if ( MEMORY[0x200038A1] )
  {
    while ( *(unsigned __int8 *)(12 * v1 + 0x200038A4) != result )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x200038A1] )
        return result;
    }
    result = 0;
    *(_BYTE *)(12 * v1 + 0x200038AC) = 0;
  }
  return result;
}

//----- (0000BEE4) --------------------------------------------------------
_BYTE *__fastcall sub_BEE4(char a1, char *a2, unsigned int a3)
{
  _BYTE *result; // r0

  if ( a3 > 0x24 )
    a3 = 36;
  MEMORY[0x200038A2] = a3;
  result = sub_141A((_BYTE *)0x20004238, a2, a3);
  MEMORY[0x200038A3] = a1;
  return result;
}

//----- (0000BF04) --------------------------------------------------------
int __fastcall sub_BF04(_BYTE *a1)
{
  sub_8638(1, a1, 0);
  MEMORY[0x20004285] = 1;
  MEMORY[0x20004286] = 0;
  MEMORY[0x20003AA9] = 4;
  MEMORY[0x20003AAA] = 0x80;
  MEMORY[0x20003AAB] = 33;
  sub_141A((_BYTE *)0x20003AAC, (char *)0x20004285, 2u);
  MEMORY[0x20003AA8] = 5;
  return clear_pending_vendor_slot(7);
}

//----- (0000BF4C) --------------------------------------------------------
int __fastcall sub_BF4C(_BYTE *a1)
{
  sub_8638(0, a1, 0);
  MEMORY[0x20004285] = 1;
  MEMORY[0x20004286] = 0;
  MEMORY[0x20003AA9] = 4;
  MEMORY[0x20003AAA] = 0x80;
  MEMORY[0x20003AAB] = 32;
  sub_141A((_BYTE *)0x20003AAC, (char *)0x20004285, 2u);
  MEMORY[0x20003AA8] = 5;
  return clear_pending_vendor_slot(7);
}

//----- (0000BF94) --------------------------------------------------------
int __fastcall sub_BF94(unsigned __int8 *a1)
{
  char v2[20]; // [sp+0h] [bp-14h] BYREF

  sub_8860(a1, (int)v2);
  sub_4DC4(9, v2, 17);
  return clear_pending_vendor_slot(8);
}

//----- (0000BFB2) --------------------------------------------------------
int __fastcall sub_BFB2(char *a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = !sub_88FA(a1);
  sub_4DC4(10, (char *)&v5, 1);
  return clear_pending_vendor_slot(8);
}

//----- (0000BFDA) --------------------------------------------------------
int __fastcall sub_BFDA(unsigned __int8 *a1)
{
  char v2[20]; // [sp+0h] [bp-14h] BYREF

  sub_8D6A(a1, (int)v2);
  sub_4DC4(5, v2, 17);
  return clear_pending_vendor_slot(8);
}

//----- (0000BFF8) --------------------------------------------------------
_BYTE *sub_BFF8()
{
  return sub_BEE4(8, (char *)0x20003A32, MEMORY[0x20003A31]);
}

//----- (0000C010) --------------------------------------------------------
int __fastcall sub_C010(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = !sub_9A40(a1);
  sub_4DC4(6, (char *)&v5, 1);
  return clear_pending_vendor_slot(8);
}

//----- (0000C038) --------------------------------------------------------
int __fastcall sub_C038(unsigned __int8 *a1)
{
  int v1; // r0
  char v3[28]; // [sp+0h] [bp-1Ch] BYREF

  v1 = *a1;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      sub_45D8((int)v3);
      sub_4DF4(7, v3, 14);
    }
    else if ( v1 == 2 )
    {
      sub_45C8((int)v3);
      sub_4DF4(7, v3, 23);
    }
  }
  else
  {
    sub_45D0((int)v3);
    sub_4DF4(7, v3, 5);
  }
  return clear_pending_vendor_slot(9);
}

//----- (0000C08C) --------------------------------------------------------
_BYTE *sub_C08C()
{
  return sub_BEE4(8, (char *)0x20003A7B, MEMORY[0x20003A7A]);
}

//----- (0000C0A4) --------------------------------------------------------
int __fastcall sub_C0A4(char *a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = sub_45E0(a1) == 0;
  sub_4DF4(6, (char *)&v5, 1);
  return clear_pending_vendor_slot(9);
}

//----- (0000C0CC) --------------------------------------------------------
int __fastcall sub_C0CC(int a1, int a2, int a3, int a4)
{
  _BYTE v5[12]; // [sp+0h] [bp-Ch] BYREF

  sub_9FF0((int)v5, a2, a3, a4);
  sub_4D64(55, (int)v5, 8);
  return clear_pending_vendor_slot(11);
}

//----- (0000C0EC) --------------------------------------------------------
_BYTE *sub_C0EC()
{
  return sub_BEE4(11, (char *)0x200039CC, MEMORY[0x200039B8]);
}

//----- (0000C104) --------------------------------------------------------
int sub_C104()
{
  __int16 v1; // [sp+0h] [bp-1Ch] BYREF
  char v2; // [sp+2h] [bp-1Ah]
  _BYTE v3[20]; // [sp+4h] [bp-18h] BYREF
  __int16 v4; // [sp+18h] [bp-4h]
  char v5; // [sp+1Ah] [bp-2h]

  sub_45C8((int)v3);
  v2 = v5;
  v1 = v4;
  sub_4D64(105, (int)&v1, 3);
  return clear_pending_vendor_slot(12);
}

//----- (0000C12C) --------------------------------------------------------
_BYTE *sub_C12C()
{
  return sub_BEE4(12, (char *)0x200039CC, MEMORY[0x200039B8]);
}

//----- (0000C16C) --------------------------------------------------------
int sub_C16C()
{
  _BYTE v1[12]; // [sp+0h] [bp-Ch] BYREF

  sub_A174(v1);
  sub_4D64(48, (int)v1, 9);
  return clear_pending_vendor_slot(4);
}

//----- (0000C18C) --------------------------------------------------------
_BYTE *sub_C18C()
{
  return sub_BEE4(4, (char *)0x200039CC, MEMORY[0x200039B8]);
}

//----- (0000C1E0) --------------------------------------------------------
_BYTE *sub_C1E0()
{
  return sub_BEE4(10, (char *)0x200039CC, MEMORY[0x200039B8]);
}

//----- (0000C1F8) --------------------------------------------------------
char __fastcall sub_C1F8(char result)
{
  MEMORY[0x200039BF] = result;
  return result;
}

//----- (0000C204) --------------------------------------------------------
int __fastcall sub_C204(_BYTE *a1)
{
  char v3; // [sp+0h] [bp-1Ch] BYREF
  _BYTE v4[23]; // [sp+1h] [bp-1Bh] BYREF
  bool v5[4]; // [sp+18h] [bp-4h] BYREF

  v5[0] = 0;
  v3 = 2;
  sub_45C8((int)v4);
  v4[22] = a1[2];
  v4[20] = *a1;
  v4[21] = a1[1];
  v5[0] = sub_45E0(&v3) == 0;
  sub_4D64(106, (int)v5, 1);
  return clear_pending_vendor_slot(13);
}

//----- (0000C254) --------------------------------------------------------
_BYTE *sub_C254()
{
  return sub_BEE4(13, (char *)0x200039CC, MEMORY[0x200039B8]);
}

//----- (0000C26C) --------------------------------------------------------
_BYTE *sub_C26C()
{
  return sub_BEE4(14, (char *)0x200039CC, MEMORY[0x200039B8]);
}

//----- (0000C284) --------------------------------------------------------
char __fastcall sub_C284(char result)
{
  MEMORY[0x200039B9] = result;
  return result;
}

//----- (0000C290) --------------------------------------------------------
BOOL __fastcall sub_C290(int a1)
{
  BOOL result; // r0

  result = a1 != 0;
  MEMORY[0x200039BE] = result;
  return result;
}

//----- (0000C2C8) --------------------------------------------------------
void sub_C2C8()
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 64;
  MEMORY[0x200039CE] = 124;
  MEMORY[0x200039CF] = MEMORY[0x200039C1];
  MEMORY[0x200039B8] = 4;
  sub_BEE4(27, (char *)0x200039CC, 4u);
  sub_F9CE();
}

//----- (0000C2F8) --------------------------------------------------------
void sub_C2F8()
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 64;
  MEMORY[0x200039CE] = 122;
  MEMORY[0x200039CF] = MEMORY[0x200039C0];
  MEMORY[0x200039B8] = 4;
  sub_BEE4(24, (char *)0x200039CC, 4u);
  sub_F9CE();
}

//----- (0000C328) --------------------------------------------------------
void sub_C328()
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 64;
  MEMORY[0x200039CE] = 121;
  MEMORY[0x200039CF] = MEMORY[0x200039C2];
  MEMORY[0x200039D0] = MEMORY[0x200039C3];
  MEMORY[0x200039B8] = 5;
  sub_BEE4(24, (char *)0x200039CC, 5u);
  sub_F9CE();
}

//----- (0000C360) --------------------------------------------------------
void sub_C360()
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 64;
  MEMORY[0x200039CE] = 120;
  sub_141A((_BYTE *)0x200039CF, MEMORY[0x200039C4], (unsigned __int8)*MEMORY[0x200039C4] + 1);
  MEMORY[0x200039B8] = *MEMORY[0x200039C4] + 4;
  sub_BEE4(23, (char *)0x200039CC, MEMORY[0x200039B8]);
  sub_F9CE();
}

//----- (0000C3A4) --------------------------------------------------------
void sub_C3A4()
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 64;
  MEMORY[0x200039CE] = 123;
  sub_141A((_BYTE *)0x200039CF, MEMORY[0x200039C8], (unsigned __int8)*MEMORY[0x200039C8] + 1);
  MEMORY[0x200039B8] = *MEMORY[0x200039C8] + 4;
  sub_BEE4(26, (char *)0x200039CC, MEMORY[0x200039B8]);
  sub_F9CE();
}

//----- (0000C3E8) --------------------------------------------------------
void sub_C3E8()
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 64;
  MEMORY[0x200039CE] = 119;
  MEMORY[0x200039CF] = MEMORY[0x200039BF];
  MEMORY[0x200039B8] = 4;
  sub_BEE4(22, (char *)0x200039CC, 4u);
  sub_F9CE();
}

//----- (0000C418) --------------------------------------------------------
int __fastcall sub_C418(_BYTE *a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = 0;
  MEMORY[0x20003CD6] = *a1 == 0;
  sub_4D64(107, &v5, 1);
  clear_pending_vendor_slot(14);
  return sub_3C74(MEMORY[0x20003CD6] != 0, 0);
}
// 3C74: using guessed type int __fastcall sub_3C74(_DWORD, _DWORD);
// 4D64: using guessed type int __fastcall sub_4D64(_DWORD, _DWORD, _DWORD);

//----- (0000C460) --------------------------------------------------------
void sub_C460()
{
  __int16 v0; // [sp+0h] [bp-4h] BYREF
  char v1; // [sp+2h] [bp-2h]
  char v2; // [sp+3h] [bp-1h]

  v0 = 16388;
  v1 = 113;
  v2 = MEMORY[0x200039B9];
  sub_BEE4(16, (char *)&v0, 4u);
  sub_F9CE();
}

//----- (0000C4B4) --------------------------------------------------------
void sub_C4B4()
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 64;
  MEMORY[0x200039CE] = 118;
  MEMORY[0x200039CF] = MEMORY[0x200039BE];
  MEMORY[0x200039B8] = 4;
  sub_BEE4(21, (char *)0x200039CC, 4u);
  sub_F9CE();
}

//----- (0000C4E4) --------------------------------------------------------
void sub_C4E4()
{
  MEMORY[0x200039CC] = 4;
  MEMORY[0x200039CD] = 64;
  MEMORY[0x200039CE] = 117;
  MEMORY[0x200039CF] = MEMORY[0x200039BD];
  MEMORY[0x200039B8] = 4;
  sub_BEE4(20, (char *)0x200039CC, 4u);
  sub_F9CE();
}

//----- (0000C514) --------------------------------------------------------
_BYTE *sub_C514()
{
  return sub_BEE4(0, (char *)0x20003A54, MEMORY[0x20003A52]);
}

//----- (0000C52C) --------------------------------------------------------
int __fastcall handle_read_amb_cmd(read_amb_cmd_t *cmd)
{
  unsigned __int8 v3[32]; // [sp+0h] [bp-20h] BYREF

  sub_8268("read_amb_cmd", cmd, 5);
  copy_amb_payload_bytes(cmd, v3);
  sub_8268("cmd_read_amb_param", v3, cmd->length);
  build_vendor_reply_buffer(3, (int)v3, cmd->length);
  return clear_pending_vendor_slot(3);
}
// 8268: using guessed type int __fastcall sub_8268(_DWORD, _DWORD, _DWORD);

//----- (0000C588) --------------------------------------------------------
int __fastcall handle_read_reg_cmd(read_reg_cmd_t *cmd)
{
  unsigned __int8 v3[32]; // [sp+0h] [bp-20h] BYREF

  sub_8268("read_reg_cmd", cmd, 3);
  copy_reg_window_bytes(cmd, v3);
  sub_8268("cmd_read_reg_param", v3, cmd->length);
  build_vendor_reply_buffer(1, (int)v3, cmd->length);
  return clear_pending_vendor_slot(2);
}
// 8268: using guessed type int __fastcall sub_8268(_DWORD, _DWORD, _DWORD);

//----- (0000C5E4) --------------------------------------------------------
_BYTE *sub_C5E4()
{
  return sub_BEE4(3, (char *)0x200039ED, MEMORY[0x200039EC]);
}

//----- (0000C5FC) --------------------------------------------------------
_BYTE *sub_C5FC()
{
  return sub_BEE4(2, (char *)0x200039ED, MEMORY[0x200039EC]);
}

//----- (0000C614) --------------------------------------------------------
unsigned int __fastcall sub_C614(unsigned __int8 *a1)
{
  unsigned int result; // r0

  result = sub_11208();
  if ( *a1 == (unsigned __int8)result )
  {
    result >>= 8;
    if ( a1[1] == result )
    {
      sub_11214(0);
      return sub_BDBC(1u);
    }
  }
  return result;
}

//----- (0000C63C) --------------------------------------------------------
int sub_C63C()
{
  int result; // r0

  result = sub_11208();
  if ( result )
  {
    MEMORY[0x20003A0D] = 4;
    MEMORY[0x20003A0E] = 64;
    MEMORY[0x20003A0F] = 97;
    MEMORY[0x20003A10] = result;
    MEMORY[0x20003A11] = (unsigned int)(result << 20) >> 28;
    return (int)sub_BEE4(1, (char *)0x20003A0D, 5u);
  }
  return result;
}

//----- (0000C684) --------------------------------------------------------
int sub_C684()
{
  sub_14144();
  build_vendor_reply_buffer(2, 0, 0);
  return clear_pending_vendor_slot(2);
}
// 14144: using guessed type int sub_14144(void);

//----- (0000C69C) --------------------------------------------------------
_BYTE *__fastcall sub_C69C(_BYTE *a1, _BYTE *a2, int a3)
{
  unsigned int v4; // r4
  _BYTE *result; // r0

  if ( MEMORY[0x20003E61] < 0x14u )
  {
    v4 = MEMORY[0x20003E61];
  }
  else
  {
    v4 = 20;
    MEMORY[0x20003E61] -= 20;
  }
  result = sub_141A(a1, (char *)(20 * *(unsigned __int8 *)(a3 + 536886887) + 536890122), v4);
  *a2 = v4;
  return result;
}

//----- (0000C6D8) --------------------------------------------------------
_BYTE *__fastcall sub_C6D8(char *a1, unsigned int a2)
{
  sub_157C((_WORD *)0x20004B0A, 0x64u);
  MEMORY[0x20003E61] = 0;
  if ( a2 > 0x64 )
    a2 = 100;
  MEMORY[0x20003E61] = a2;
  return sub_141A((_BYTE *)0x20004B0A, a1, a2);
}

//----- (0000C708) --------------------------------------------------------
int __fastcall sub_C708(int a1)
{
  if ( a1 )
  {
    MEMORY[0x20003C58] |= 4u;
    MEMORY[0x20003C68] = 0;
    sub_F9CE(0);
  }
  else
  {
    MEMORY[0x20003C58] ^= MEMORY[0x20003C58] & 4;
  }
  return sub_F4F8(a1);
}
// F4F8: using guessed type int __fastcall sub_F4F8(_DWORD);
// F9CE: using guessed type int __fastcall sub_F9CE(_DWORD);

//----- (0000C73C) --------------------------------------------------------
int sub_C73C()
{
  unsigned __int16 v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r5
  int v6; // r3
  int v7; // r6
  int v8; // r2
  unsigned int i; // r1
  int v10; // r0
  int result; // r0
  _BYTE v16[16]; // [sp+0h] [bp-54h] BYREF
  _BYTE v17[16]; // [sp+10h] [bp-44h] BYREF
  unsigned __int8 v18; // [sp+20h] [bp-34h]
  unsigned __int8 v19; // [sp+21h] [bp-33h]
  unsigned __int8 v20; // [sp+22h] [bp-32h]
  unsigned __int8 v21; // [sp+23h] [bp-31h]
  int v22; // [sp+24h] [bp-30h] BYREF
  _BYTE v23[8]; // [sp+28h] [bp-2Ch] BYREF
  _BYTE v24[16]; // [sp+30h] [bp-24h] BYREF
  __int16 v25; // [sp+40h] [bp-14h]
  __int16 v26; // [sp+42h] [bp-12h]
  unsigned __int16 v27; // [sp+48h] [bp-Ch] BYREF
  _BYTE v28[8]; // [sp+4Ch] [bp-8h] BYREF

  _R4 = __get_CPSR();                           // Snapshot several runtime identity/calibration fields into the 0x20003Cxx mirror block under IRQ lock before later command/report handlers consume them.
  __disable_irq();
  sub_F51C(v23);
  MEMORY[0x20003CA6] = v23[0];
  MEMORY[0x20003CA7] = v23[1];
  MEMORY[0x20003CA8] = v23[2];
  MEMORY[0x20003CA9] = v23[3];
  sub_F7F8(v28);
  sub_F7D0(v24);
  sub_4718(536886433, v28);
  MEMORY[0x20003C54] = v25;
  MEMORY[0x20003C56] = v26;
  v1 = sub_8A10();
  if ( (unsigned __int8)v1 != 255 && HIBYTE(v1) != 255 )
    sub_13878(v1);
  v2 = sub_12558(&v27);
  v22 = sub_8A28(v2);
  if ( BYTE2(v22) != 174 || (v3 = v27, (unsigned __int16)v22 != v27) )
  {
    BYTE2(v22) = -82;
    LOWORD(v22) = v27;
    v3 = sub_8BAC(&v22);
  }
  v4 = sub_B8B0(v3);
  sub_896C(v4, v16);
  sub_141A(536886442, v16, 16);
  sub_141A(536886458, v17, 16);
  sub_141A(536889389, v17, 16);
  v5 = v18;
  MEMORY[0x20003CCE] = v18;
  v6 = v19;
  MEMORY[0x20003CCF] = v19;
  v7 = v20;
  MEMORY[0x20003CD0] = v20;
  v8 = v21;
  MEMORY[0x20003CD1] = v21;
  MEMORY[0x20003CCA] = v18;
  MEMORY[0x20003CCB] = v19;
  MEMORY[0x20003CCC] = v20;
  MEMORY[0x20003CCD] = v21;
  for ( i = 0; i < 4; i = (unsigned __int8)(i + 1) )
  {
    v10 = *(unsigned __int8 *)(i + 536886438) ^ *(unsigned __int8 *)(i + 536886478);
    *(_BYTE *)(i + 536886482) = v10;
  }
  if ( v5 == 255 && v6 == 255 && v7 == 255 && v8 == 255 )
    v10 = sub_86E8(1);
  MEMORY[0x20003DC8] = sub_89C8(v10);
  if ( MEMORY[0x20003DC8] > 1u )
    MEMORY[0x20003DC8] = 1;
  result = sub_8C68();
  MEMORY[0x20003BD2] = result;
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);
// 4718: using guessed type int __fastcall sub_4718(_DWORD, _DWORD);
// 86E8: using guessed type int __fastcall sub_86E8(_DWORD);
// 896C: using guessed type int __fastcall sub_896C(_DWORD, _DWORD);
// 89C8: using guessed type int __fastcall sub_89C8(_DWORD);
// 8A10: using guessed type int sub_8A10(void);
// 8A28: using guessed type int __fastcall sub_8A28(_DWORD);
// 8BAC: using guessed type int __fastcall sub_8BAC(_DWORD);
// 8C68: using guessed type int sub_8C68(void);
// B8B0: using guessed type int __fastcall sub_B8B0(_DWORD);
// F51C: using guessed type int __fastcall sub_F51C(_DWORD);
// F7D0: using guessed type int __fastcall sub_F7D0(_DWORD);
// F7F8: using guessed type int __fastcall sub_F7F8(_DWORD);
// 12558: using guessed type int __fastcall sub_12558(_DWORD);
// 13878: using guessed type int __fastcall sub_13878(_DWORD);

//----- (0000C8A4) --------------------------------------------------------
int sub_C8A4()
{
  int v0; // r0
  int result; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0

  if ( sub_D0E4() )
  {
    if ( !MEMORY[0x20003C50] )
    {
      sub_CFF8(1);
      MEMORY[0x20003C50] = 1;
      MEMORY[0x20003C64] = 0;
      MEMORY[0x20003C58] |= 1u;
    }
  }
  else
  {
    MEMORY[0x20003C50] = 0;
  }
  MEMORY[0x20003C5C] = 0;
  MEMORY[0x20003C60] = 0;
  MEMORY[0x20003C64] = 0;
  MEMORY[0x20003C4C] = 0;
  MEMORY[0x20003C4D] = 0;
  MEMORY[0x20003C4A] = 0;
  MEMORY[0x20003C6C] = 0;
  ramapi_reset_idle_transport_state();
  sub_F684(0);
  if ( (MEMORY[0x20003C58] & 1) != 0 )
  {
    MEMORY[0x20003C53] = 0;
    v2 = sub_D554(536886433, 5);
    v3 = sub_3C80(v2);
    sub_F3E8(v3);
    v4 = sub_B064(536886628);
    sub_540C(v4);
  }
  else
  {
    v0 = sub_D554(536889382, (unsigned int)(MEMORY[0x20004821] << 26) >> 30);
    sub_F3E8(v0);
    sub_3B9C(0, 1);
  }
  result = MEMORY[0x20003C48] | 0x5F;
  MEMORY[0x20003C48] |= 0x5Fu;
  return result;
}
// 3B9C: using guessed type int __fastcall sub_3B9C(_DWORD, _DWORD);
// 3BA8: using guessed type int sub_3BA8(void);
// 3C80: using guessed type int __fastcall sub_3C80(_DWORD);
// 540C: using guessed type int __fastcall sub_540C(_DWORD);
// B064: using guessed type int __fastcall sub_B064(_DWORD);
// CFF8: using guessed type int __fastcall sub_CFF8(_DWORD);
// D0E4: using guessed type int sub_D0E4(void);
// D554: using guessed type int __fastcall sub_D554(_DWORD, _DWORD);
// F3E8: using guessed type int __fastcall sub_F3E8(_DWORD);
// F684: using guessed type int __fastcall sub_F684(_DWORD);

//----- (0000C944) --------------------------------------------------------
int sub_C944()
{
  int v0; // r0

  MEMORY[0x20003C58] |= 1u;
  MEMORY[0x20003C58] ^= MEMORY[0x20003C58] & 2;
  sub_B064(536886628);
  v0 = sub_F684(0);
  return sub_3C80(v0);
}
// 3C80: using guessed type int __fastcall sub_3C80(_DWORD);
// B064: using guessed type int __fastcall sub_B064(_DWORD);
// F684: using guessed type int __fastcall sub_F684(_DWORD);

//----- (0000C980) --------------------------------------------------------
void sub_C980()
{
  MEMORY[0x20003C5C] = 0;
  MEMORY[0x20003C64] = 0;
  MEMORY[0x20003C60] = 0;
  MEMORY[0x20003E71] = 0;
  sub_3C8C(1);
}

//----- (0000C9A0) --------------------------------------------------------
int service_idle_power_state_machine()
{
  int v0; // r4
  int v1; // r0
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r0

  v0 = 1;                                       // Idle/power supervision state machine: clears/sets 0x20003C5x flags, accumulates elapsed time into 0x20003C60, and compares it against 0x20003DD4, which is derived from the persisted sleep-time setting.
  ramapi_set_run_state_code(2);
  if ( (~MEMORY[0x20003C58] & 2) != 0 )
  {
    if ( (MEMORY[0x20003C58] & 1) != 0 )
    {
      v0 = service_sleep_transition_timeout(1, 2);
      sub_CF74(0, MEMORY[0x20003C78]);
    }
    else
    {
      v0 = service_active_transport_timeout(1, 2);
    }
  }
  else if ( sub_3B9C(0, 1) )
  {
    MEMORY[0x20003C5C] = 0;
    MEMORY[0x20003C60] = 0;
    ramapi_set_run_state_code(1);
    v0 = 0;
  }
  else
  {
    if ( !ramapi_transport_channel_idle(MEMORY[0x20003D68], MEMORY[0x20003D69]) )
    {
      ramapi_publish_run_state_code(0);
      if ( v1 != 5 )
        return 0;
    }
    if ( sub_B1B4() == 2 )
    {
      v3 = 0;
      MEMORY[0x20003C60] = 0;
    }
    else
    {
      v3 = ramapi_get_elapsed_ticks() + MEMORY[0x20003C60];
      MEMORY[0x20003C60] = v3;
    }
    if ( v3 <= MEMORY[0x20003DD4] )
    {
      v4 = 0;
    }
    else
    {
      v4 = 2;
      MEMORY[0x20003C60] = 0;
    }
    if ( v4 )
    {
      ramapi_reset_idle_transport_state();
      v0 = 2;
      v5 = 3;
    }
    else
    {
      sub_3C8C(1);
      v5 = 2;
    }
    ramapi_set_run_state_code(v5);
  }
  if ( (~MEMORY[0x20003C58] & 4) == 0 )
  {
    v0 = 0;
    ramapi_set_run_state_code(1);
  }
  return v0;
}
// CA34: conditional instruction was optimized away because r0.4==2
// CA00: variable 'v1' is possibly undefined
// 3B90: using guessed type int sub_3B90(void);
// 3B9C: using guessed type int __fastcall sub_3B9C(_DWORD, _DWORD);
// 3BA8: using guessed type int sub_3BA8(void);
// 3BB4: using guessed type int __fastcall sub_3BB4(_DWORD);
// 3BD8: using guessed type int __fastcall sub_3BD8(_DWORD, _DWORD);
// 3C8C: using guessed type int __fastcall sub_3C8C(_DWORD);
// 52A8: using guessed type int __fastcall sub_52A8(_DWORD, _DWORD);
// 5334: using guessed type int __fastcall sub_5334(_DWORD, _DWORD);
// B1B4: using guessed type int sub_B1B4(void);

//----- (0000CAC8) --------------------------------------------------------
BOOL sub_CAC8()
{
  int v0; // r0
  char v2[16]; // [sp+0h] [bp-24h] BYREF
  _BYTE v3[20]; // [sp+10h] [bp-14h] BYREF

  sub_141A(v2, (char *)0x20003CAA, 0x10u);
  sub_141A(v3, (char *)0x20003CBA, 0x10u);
  v3[16] = MEMORY[0x20003CCE];
  v3[17] = MEMORY[0x20003CCF];
  v3[18] = MEMORY[0x20003CD0];
  v3[19] = MEMORY[0x20003CD1];
  MEMORY[0x20003CCA] = MEMORY[0x20003CCE];
  MEMORY[0x20003CCB] = MEMORY[0x20003CCF];
  MEMORY[0x20003CCC] = MEMORY[0x20003CD0];
  MEMORY[0x20003CCD] = MEMORY[0x20003CD1];
  v0 = sub_B8B0();
  return sub_8982(v0, v2);
}

//----- (0000CBD8) --------------------------------------------------------
int sub_CBD8()
{
  return sub_11598();
}
// 11598: using guessed type int sub_11598(void);

//----- (0000CBE0) --------------------------------------------------------
unsigned int __fastcall handle_dpi_stage_hold_event(int is_host_initiated, char raw_event_code)
{
  unsigned int result; // r0
  int v3; // r0
  int active_profile_index; // r0
  unsigned int dpi_value_for_stage; // r0

  if ( is_host_initiated )
    LOBYTE(is_host_initiated) = 1;
  MEMORY[0x20003BFC] = is_host_initiated;
  result = raw_event_code & 0x1F;
  if ( result == MEMORY[0x20003C09] )
  {
    result = MEMORY[0x20003C08];
    if ( !MEMORY[0x20003C08] )
      goto LABEL_13;
  }
  else
  {
    MEMORY[0x20003C09] = raw_event_code & 0x1F;
    if ( result != 10 )
    {
      MEMORY[0x20003C08] = 0;
LABEL_13:
      MEMORY[0x20003BFF] = 0;
      MEMORY[0x20003C1C] = 0;
      return result;
    }
    MEMORY[0x20003C08] = 1;
  }
  if ( MEMORY[0x20003BFF] )
  {
    ramapi_get_hold_elapsed_ticks(MEMORY[0x20003BFF]);
    result = v3 + MEMORY[0x20003C1C];
    MEMORY[0x20003C1C] = result;
    if ( result > 0x2DC6C0 )
    {
      MEMORY[0x20003C03] = (get_active_dpi_stage() + 1) & 3;// Long-hold timeout expired: rotate the persisted DPI stage modulo 4, reload the 24-bit DPI value for the new stage, and push it into the sensor register block via apply_sensor_dpi_registers().
      active_profile_index = get_active_profile_index();
      persist_active_dpi_stage(MEMORY[0x20003C03], active_profile_index);
      dpi_value_for_stage = get_dpi_value_for_stage(MEMORY[0x20003C03]);
      result = apply_sensor_dpi_registers(dpi_value_for_stage);
      MEMORY[0x20003BFF] = 0;
      MEMORY[0x20003C1C] = 0;
      MEMORY[0x20003C08] = 0;
    }
  }
  else
  {
    MEMORY[0x20003BFF] = 1;
    MEMORY[0x20003C1C] = 0;
    return sub_FF78();
  }
  return result;
}
// CC1A: variable 'v3' is possibly undefined
// FF78: using guessed type int sub_FF78(void);

//----- (0000CCE0) --------------------------------------------------------
BOOL __fastcall sub_CCE0(char a1)
{
  return (a1 & 0x1F) == 7;
}

//----- (0000CCF0) --------------------------------------------------------
int __fastcall sub_CCF0(int a1, char a2)
{
  unsigned int v2; // r4
  int v3; // r4
  int v4; // r2
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0

  if ( a1 )
    LOBYTE(a1) = 1;
  MEMORY[0x20003BFC] = a1;
  if ( (a2 & 0x1F) == MEMORY[0x20003C0C] )
  {
    if ( !MEMORY[0x20003C0B] )
      goto LABEL_49;
LABEL_8:
    if ( MEMORY[0x20003C0A] )
    {
      MEMORY[0x20003C20] += ramapi_get_hold_elapsed_ticks();
      if ( MEMORY[0x20003C20] > 0x2DC6C0u )
      {
        if ( sub_3CB0() || !MEMORY[0x20003BFC] && !sub_3CBC() )
        {
LABEL_47:
          MEMORY[0x20003C0A] = 0;
          MEMORY[0x20003C20] = 0;
          MEMORY[0x20003C0B] = 0;
          return 1;
        }
        v2 = ramapi_publish_run_state_code();
        if ( MEMORY[0x20003BFC] || !sub_3C08() )
        {
          if ( !v2 )
          {
            v3 = 1;
            goto LABEL_20;
          }
        }
        else
        {
          if ( !v2 )
          {
            v3 = 6;
            goto LABEL_20;
          }
          if ( v2 > 4 )
          {
            v3 = (unsigned __int8)(v2 - 1);
LABEL_20:
            if ( MEMORY[0x20003BFC] )
            {
              v4 = 1;
              v5 = v3;
              v6 = 0;
            }
            else
            {
              v6 = sub_3C08();
              v4 = 0;
              v5 = v3;
            }
            ramapi_transport_configure_route(v6, v5, v4);
            if ( MEMORY[0x20003BFC] )
            {
              v7 = get_active_profile_index();
              switch ( v3 )
              {
                case 1:
                  v8 = 0;
                  break;
                case 4:
                  v8 = 4;
                  break;
                case 5:
                  v8 = 3;
                  break;
                case 6:
                  v8 = 2;
                  break;
                default:
                  v8 = 1;
                  break;
              }
              persist_report_rate_setting_for_wireless_mode(v8, v7);
            }
            else
            {
              v9 = get_active_profile_index();
              switch ( v3 )
              {
                case 1:
                  v10 = 0;
                  break;
                case 4:
                  v10 = 4;
                  break;
                case 5:
                  v10 = 3;
                  break;
                case 6:
                  v10 = 2;
                  break;
                default:
                  v10 = 1;
                  break;
              }
              persist_report_rate_setting_for_link_mode(v10, v9);
            }
            if ( MEMORY[0x20003BFC] )
            {
              v11 = ramapi_transport_select_context(MEMORY[0x20003BFC]);
              ramapi_transport_commit_primary(v11);
            }
            else
            {
              ramapi_set_run_state_code(1);
              sub_3B48(1);
              clear_pending_vendor_slot(16);
            }
            sub_C284(v3);
            goto LABEL_47;
          }
        }
        v3 = 0;
        goto LABEL_20;
      }
    }
    else
    {
      MEMORY[0x20003C0A] = 1;
      MEMORY[0x20003C20] = 0;
      sub_FF78();
    }
    return 0;
  }
  MEMORY[0x20003C0C] = a2 & 0x1F;
  if ( (a2 & 0x1F) == 0x12 )
  {
    MEMORY[0x20003C0B] = 1;
    goto LABEL_8;
  }
  MEMORY[0x20003C0B] = 0;
LABEL_49:
  MEMORY[0x20003C0A] = 0;
  MEMORY[0x20003C20] = 0;
  return 0;
}
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 3BB4: using guessed type int __fastcall sub_3BB4(_DWORD);
// 3BC0: using guessed type int sub_3BC0(void);
// 3C08: using guessed type int sub_3C08(void);
// 3C14: using guessed type int __fastcall sub_3C14(_DWORD, _DWORD, _DWORD);
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);
// 3C2C: using guessed type int __fastcall sub_3C2C(_DWORD);
// 3CA4: using guessed type int sub_3CA4(void);
// 3CB0: using guessed type int sub_3CB0(void);
// 3CBC: using guessed type int sub_3CBC(void);
// 8E04: using guessed type int __fastcall sub_8E04(_DWORD, _DWORD);
// 996C: using guessed type int __fastcall sub_996C(_DWORD, _DWORD);
// 9F54: using guessed type int sub_9F54(void);
// BEA8: using guessed type int __fastcall sub_BEA8(_DWORD);
// C284: using guessed type int __fastcall sub_C284(_DWORD);
// FF78: using guessed type int sub_FF78(void);

//----- (0000CE58) --------------------------------------------------------
int __fastcall sub_CE58(int a1, char a2)
{
  int v2; // r0

  if ( a1 )
    LOBYTE(a1) = 1;
  MEMORY[0x20003BFC] = a1;
  if ( (a2 & 0x1F) == MEMORY[0x20003C13] )
  {
    if ( !MEMORY[0x20003C12] )
      goto LABEL_14;
  }
  else
  {
    MEMORY[0x20003C13] = a2 & 0x1F;
    if ( (a2 & 0x1F) != 0x1B )
    {
      MEMORY[0x20003C12] = 0;
LABEL_14:
      MEMORY[0x20003C11] = 0;
      MEMORY[0x20003C28] = 0;
      return 0;
    }
    MEMORY[0x20003C12] = 1;
  }
  if ( MEMORY[0x20003C11] )
  {
    ramapi_get_hold_elapsed_ticks(MEMORY[0x20003C11]);
    MEMORY[0x20003C28] += v2;
    if ( MEMORY[0x20003C28] > 0x2DC6C0u )
    {
      sub_11A5C();
      sub_11988(0);
      sub_7808(3);
      MEMORY[0x20003C11] = 0;
      MEMORY[0x20003C28] = 0;
      MEMORY[0x20003C12] = 0;
      return 1;
    }
    sub_FF78();
  }
  else
  {
    MEMORY[0x20003C11] = 1;
    MEMORY[0x20003C28] = 0;
  }
  return 0;
}
// CE96: variable 'v2' is possibly undefined
// 7808: using guessed type int __fastcall sub_7808(_DWORD);
// FF78: using guessed type int sub_FF78(void);
// 11988: using guessed type int __fastcall sub_11988(_DWORD);
// 11A5C: using guessed type int sub_11A5C(void);

//----- (0000CED4) --------------------------------------------------------
int __fastcall handle_system_mode_hold_event(int is_host_initiated, char raw_event_code)
{
  int v2; // r0
  int active_profile_index; // r0

  if ( is_host_initiated )
    LOBYTE(is_host_initiated) = 1;
  MEMORY[0x20003BFC] = is_host_initiated;
  if ( (raw_event_code & 0x1F) == MEMORY[0x20003C0F] )
  {
    if ( !MEMORY[0x20003C0E] )
      goto LABEL_19;
  }
  else
  {
    MEMORY[0x20003C0F] = raw_event_code & 0x1F;
    if ( (raw_event_code & 0x1F) != 0x1A )
    {
      MEMORY[0x20003C0E] = 0;
LABEL_19:
      MEMORY[0x20003C0D] = 0;
      MEMORY[0x20003C24] = 0;
      return 0;
    }
    MEMORY[0x20003C0E] = 1;
  }
  if ( !MEMORY[0x20003C0D] )
  {
    MEMORY[0x20003C0D] = 1;
    MEMORY[0x20003C24] = 0;
    sub_FF78();
    return 0;
  }
  MEMORY[0x20003C24] += ramapi_get_hold_elapsed_ticks(MEMORY[0x20003C0D]);
  if ( MEMORY[0x20003C24] <= 0x2DC6C0u )
    return 0;
  if ( MEMORY[0x20003C10] )                     // Long-hold event 0x1A rotates the 3-state system mode 0 -> 1 -> 2 -> 0, persists it per profile, and remaps it to apply_system_mode_register_script(0/2/4). Front-end labels for this product family are Highspeed / Competitive / Competitive+ (English bundle uses HS / Compt / Ultra).
  {
    if ( MEMORY[0x20003C10] == 1 )
    {
      MEMORY[0x20003C10] = 2;
      v2 = 4;
    }
    else
    {
      MEMORY[0x20003C10] = 0;
      v2 = 0;
    }
    apply_system_mode_register_script(v2);
  }
  else
  {
    MEMORY[0x20003C10] = 1;
    apply_system_mode_register_script(2);
  }
  set_active_system_mode_shadow(MEMORY[0x20003C10]);
  active_profile_index = get_active_profile_index();
  persist_system_mode_setting(MEMORY[0x20003C10], active_profile_index);
  MEMORY[0x20003C0D] = 0;
  MEMORY[0x20003C24] = 0;
  MEMORY[0x20003C0E] = 0;
  return 1;
}

//----- (0000CF74) --------------------------------------------------------
int __fastcall sub_CF74(int a1, char a2)
{
  BOOL v2; // r4
  int result; // r0
  int v4; // r0

  v2 = (a2 & 0x1F) == 24;
  if ( a1 )
    LOBYTE(a1) = 1;
  MEMORY[0x20003BFC] = a1;
  if ( !(_BYTE)a1 || (result = sub_BD2C()) != 0 )
  {
    if ( MEMORY[0x20003C14] > 0x11E1A300u )
    {
      result = 0;
LABEL_11:
      MEMORY[0x20003C04] = result;
      return result;
    }
    ramapi_get_hold_elapsed_ticks(MEMORY[0x20003C14]);
    result = v4 + MEMORY[0x20003C14];
    MEMORY[0x20003C14] = result;
    if ( v2 )
    {
      sub_FF78();
      result = MEMORY[0x20003C14];
      if ( MEMORY[0x20003C14] < 0x30D40u )
      {
        result = MEMORY[0x20003C04];
        if ( !MEMORY[0x20003C04] )
        {
          result = 1;
          goto LABEL_11;
        }
      }
    }
  }
  return result;
}
// CFAE: variable 'v4' is possibly undefined
// FF78: using guessed type int sub_FF78(void);

//----- (0000CFDC) --------------------------------------------------------
int sub_CFDC()
{
  sub_A3D8(0, 0x81000798);
  return sub_FEA0(0, 0, 0, 0);
}

//----- (0000CFF8) --------------------------------------------------------
void __fastcall sub_CFF8(int a1)
{
  MEMORY[0x20003BFE] = a1;
  sub_10BB8(a1);
  sub_10B90();
}

//----- (0000D010) --------------------------------------------------------
int __fastcall sub_D010(int a1)
{
  int v2; // r0
  unsigned int v3; // r4

  v2 = sub_A594(0);
  v3 = v2 | 0x80000000;
  sub_A488(0, v2 & 0x1000798 | 0x80000000, 0, 1, a1);
  sub_A488(0, ~v3 & 0x81000798, 0, 0, a1);
  return sub_FEA0(-2130704488, v3, 0, 0);
}

//----- (0000D058) --------------------------------------------------------
int __fastcall sub_D058(int a1)
{
  int v2; // r5

  v2 = sub_A594(0);
  sub_A488(0, v2 & 0x1000798, 0, 1, a1);
  sub_A488(0, ~v2 & 0x1000798, 0, 0, a1);
  return sub_FEA0(16779160, v2, 0, 0);
}

//----- (0000D0A4) --------------------------------------------------------
int sub_D0A4()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int result; // r0

  MEMORY[0x20003C02] = 1;
  v0 = sub_53E4(1);
  v1 = sub_BBF8(v0);
  v2 = sub_11F9C(v1);
  v3 = sub_BE74(v2);
  sub_BB54(v3);
  result = apply_system_mode_register_script(0);
  MEMORY[0x20003BFD] = 1;
  return result;
}
// 53E4: using guessed type int __fastcall sub_53E4(_DWORD);
// BB54: using guessed type int __fastcall sub_BB54(_DWORD);
// BBF8: using guessed type int __fastcall sub_BBF8(_DWORD);
// BE74: using guessed type int __fastcall sub_BE74(_DWORD);
// 11F9C: using guessed type int __fastcall sub_11F9C(_DWORD);

//----- (0000D0E4) --------------------------------------------------------
int sub_D0E4()
{
  return MEMORY[0x20003DEF];
}

//----- (0000D0F0) --------------------------------------------------------
int sub_D0F0()
{
  return MEMORY[0x20003BFE];
}

//----- (0000D122) --------------------------------------------------------
void sub_D122()
{
  sub_3B48(7);
}

//----- (0000D188) --------------------------------------------------------
int __fastcall sub_D188(int result)
{
  MEMORY[0x20003C40] = result;
  return result;
}

//----- (0000D194) --------------------------------------------------------
char __fastcall sub_D194(char result)
{
  MEMORY[0x20003C00] = result;
  return result;
}

//----- (0000D1A0) --------------------------------------------------------
int __fastcall sub_D1A0(int result)
{
  MEMORY[0x20003C44] = result;
  return result;
}

//----- (0000D248) --------------------------------------------------------
int __fastcall sub_D248(int a1)
{
  int result; // r0

  _R4 = __get_CPSR();
  __disable_irq();
  ramapi_transport_select_context(a1);
  MEMORY[0x20003D14] = 0;
  MEMORY[0x20003D15] = 0;
  MEMORY[0x20003D16] = 1;
  MEMORY[0x20003D17] = 1;
  result = sub_3B48(8);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);

//----- (0000D274) --------------------------------------------------------
int sub_D274()
{
  int v1; // r0
  int v2; // r0
  int result; // r0

  MEMORY[0x20003D17] = 1;
  _R4 = __get_CPSR();
  __disable_irq();
  v1 = sub_D1A0(536879477);
  v2 = ramapi_transport_select_context(v1);
  ramapi_transport_commit_primary(v2);
  MEMORY[0x20003D14] = 0;
  MEMORY[0x20003D16] = 0;
  result = sub_D194(6);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);
// 3C2C: using guessed type int __fastcall sub_3C2C(_DWORD);
// D194: using guessed type int __fastcall sub_D194(_DWORD);
// D1A0: using guessed type int __fastcall sub_D1A0(_DWORD);

//----- (0000D2AC) --------------------------------------------------------
int __fastcall sub_D2AC(_BYTE *a1)
{
  int result; // r0
  int v4; // r0

  MEMORY[0x20003D17] = 1;
  result = MEMORY[0x20003D15];
  if ( !MEMORY[0x20003D15] )
  {
    _R4 = __get_CPSR();
    __disable_irq();
    sub_D188(536879627);
    sub_D1A0(536879477);
    sub_D194(6);
    MEMORY[0x20003D15] = 1;
    MEMORY[0x20003D14] = 0;
    MEMORY[0x20003D16] = 0;
    sub_3B48(9);
    sub_11A68(536885296, 10);
    sub_11A68(536885288, 10);
    sub_B064(536885296);
    v4 = sub_B064(536885288);
    ramapi_transport_select_context(v4);
    sub_7808(4);
    if ( !apply_active_profile_configuration() )
      ramapi_transport_commit_primary(0);
    result = select_runtime_transport_callback_profile(2);
    *a1 = 1;
    __asm { MSR.W           PRIMASK, R4 }
  }
  return result;
}
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);
// 3C2C: using guessed type int __fastcall sub_3C2C(_DWORD);
// 7808: using guessed type int __fastcall sub_7808(_DWORD);
// B064: using guessed type int __fastcall sub_B064(_DWORD);
// D188: using guessed type int __fastcall sub_D188(_DWORD);
// D194: using guessed type int __fastcall sub_D194(_DWORD);
// D1A0: using guessed type int __fastcall sub_D1A0(_DWORD);
// DBF8: using guessed type int __fastcall sub_DBF8(_DWORD);
// 11A68: using guessed type int __fastcall sub_11A68(_DWORD, _DWORD);

//----- (0000D33C) --------------------------------------------------------
int sub_D33C()
{
  int result; // r0
  int v2; // r0

  MEMORY[0x20003D17] = 1;
  result = MEMORY[0x20003D15];
  if ( MEMORY[0x20003D15] )
  {
    result = sub_11F98();
    if ( !result )
    {
      _R4 = __get_CPSR();
      __disable_irq();
      v2 = ramapi_transport_select_context(0);
      sub_852C(v2);
      MEMORY[0x20003D14] = 1;
      MEMORY[0x20003D16] = 0;
      result = sub_D194(7);
      __asm { MSR.W           PRIMASK, R4 }
    }
  }
  return result;
}
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);
// 852C: using guessed type int __fastcall sub_852C(_DWORD);
// D194: using guessed type int __fastcall sub_D194(_DWORD);

//----- (0000D378) --------------------------------------------------------
int sub_D378()
{
  int result; // r0
  int v2; // r0

  MEMORY[0x20003D17] = 1;
  result = MEMORY[0x20003D15];
  if ( MEMORY[0x20003D15] )
  {
    _R4 = __get_CPSR();
    __disable_irq();
    v2 = sub_D1A0(536879477);
    ramapi_transport_commit_primary(v2);
    MEMORY[0x20003D14] = 0;
    MEMORY[0x20003D16] = 0;
    result = sub_D194(6);
    __asm { MSR.W           PRIMASK, R4 }
  }
  return result;
}
// 3C2C: using guessed type int __fastcall sub_3C2C(_DWORD);
// D194: using guessed type int __fastcall sub_D194(_DWORD);
// D1A0: using guessed type int __fastcall sub_D1A0(_DWORD);

//----- (0000D3B0) --------------------------------------------------------
int __fastcall sub_D3B0(int a1, int a2)
{
  sub_F918(a2);
  return (*(int (**)(void))(4 * a1 + 0x20003D2C))();
}

//----- (0000D3C8) --------------------------------------------------------
int (*sub_D3C8())(void)
{
  int (*result)(void); // r0

  result = *(int (**)(void))(28 * MEMORY[0x20003D3C] + 0x10014A80);
  if ( result )
    return (int (*)(void))result();
  return result;
}

//----- (0000D3E8) --------------------------------------------------------
int (*__fastcall sub_D3E8(int a1))(void)
{
  int (*result)(void); // r0

  sub_F7B0();
  MEMORY[0x20003D3C] = a1;
  result = *(int (**)(void))(28 * a1 + 0x10014A7C);
  if ( result )
    return (int (*)(void))result();
  return result;
}

//----- (0000D418) --------------------------------------------------------
int (*__fastcall sub_D418(int a1, int a2, int a3))(void)
{
  int (*result)(void); // r0

  drain_runtime_transport_queue(a1, a2, a3);
  result = MEMORY[0x20003D44];
  if ( MEMORY[0x20003D44] )
    return (int (*)(void))MEMORY[0x20003D44]();
  return result;
}
// 20003D44: using guessed type int (*)(void);

//----- (0000D430) --------------------------------------------------------
int service_transport_rx_queue()
{
  int v0; // r0
  int v1; // r0
  int result; // r0
  _BYTE v3[4]; // [sp+0h] [bp-8h] BYREF
  int frame_type; // [sp+4h] [bp-4h] BYREF

  while ( 1 )
  {
    sub_F874();
    if ( v0 || ramapi_transport_can_poll_channel(536886600, MEMORY[0x20003D4C], MEMORY[0x20003D4D]) )
      break;                                    // This loop bridges a runtime queue into the lower transport: poll readiness via ramapi_transport_can_poll_channel(), pull inbound metadata via ramapi_transport_pull_frame(), enqueue/ack via ramapi_transport_enqueue_frame(), then wait for idle and push the prepared frame via ramapi_transport_push_frame().
    if ( ramapi_transport_pull_frame((int)&frame_type, 536889472, (int)v3) )
    {
      MEMORY[0x200048A0] = frame_type;
      sub_141A(536889505, 536889472, v3[0]);
      ramapi_transport_enqueue_frame(536886600, 536889504, (unsigned __int8)(v3[0] + 1));
    }
  }
  while ( !ramapi_transport_channel_idle(MEMORY[0x20003D4C], MEMORY[0x20003D4D]) )
  {
    v3[0] = ramapi_transport_peek_frame_meta(536886600, 536889504);
    LOBYTE(frame_type) = MEMORY[0x200048A0];
    if ( MEMORY[0x20003D40] )
    {
      result = MEMORY[0x20003D40](MEMORY[0x200048A0], v3);
      if ( !result )
        return result;
    }
    ramapi_transport_consume_frame(536886600);
    ramapi_transport_push_frame(
      (unsigned __int8)frame_type,
      536889506,
      (unsigned __int8)(v3[0] - 2),
      MEMORY[0x200048A1]);
  }
  sub_F874();
  return v1 != 0;
}
// D440: variable 'v0' is possibly undefined
// D494: variable 'v1' is possibly undefined
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (0000D4EC) --------------------------------------------------------
int sub_D4EC()
{
  return sub_3CEC();
}
// 3CEC: using guessed type int sub_3CEC(void);

//----- (0000D4F8) --------------------------------------------------------
int service_transport_aux_queue()
{
  int v0; // r0
  int frame_len; // [sp+0h] [bp-8h] BYREF
  _BYTE v3[4]; // [sp+4h] [bp-4h] BYREF

  while ( 1 )
  {
    sub_F874();                                 // Auxiliary transport service loop. It waits until the transport channel is ready, collects a short frame through sub_F970(), and submits it via ramapi_transport_push_frame(..., class_id=2).
    if ( v0 )
      return 1;
    if ( ramapi_transport_can_poll_channel(536886608, MEMORY[0x20003D54], MEMORY[0x20003D55]) )
      break;
    sub_F970((int)v3, 536889537, (int)&frame_len);
    ramapi_transport_push_frame(0, 536889537, (unsigned __int8)frame_len, 2);
  }
  return 0;
}
// D504: variable 'v0' is possibly undefined

//----- (0000D54C) --------------------------------------------------------
int sub_D54C()
{
  return sub_3CEC();
}
// 3CEC: using guessed type int sub_3CEC(void);

//----- (0000D554) --------------------------------------------------------
void sub_D554()
{
  sub_FA0C();
  sub_F9F4();
}

//----- (0000D56C) --------------------------------------------------------
_DWORD *sub_D56C()
{
  return sub_9E9E(536886628);
}

//----- (0000D57C) --------------------------------------------------------
int sub_D57C()
{
  MEMORY[0x20003D58] = 0;
  return sub_11A68((unsigned int *)0x20003D64, 0x1Eu, 33);
}

//----- (0000D5A0) --------------------------------------------------------
void __fastcall sub_D5A0(int a1)
{
  MEMORY[0x20003D5A] = a1;
  if ( a1 )
  {
    if ( sub_BD44() )
    {
      sub_F9DE();
      sub_F9D6();
    }
  }
}

//----- (0000D5F6) --------------------------------------------------------
int sub_D5F6()
{
  sub_3CE0();
  return 1;
}
// 3CE0: using guessed type int sub_3CE0(void);

//----- (0000D600) --------------------------------------------------------
int sub_D600()
{
  return sub_3CEC();
}
// 3CEC: using guessed type int sub_3CEC(void);

//----- (0000D608) --------------------------------------------------------
int sub_D608()
{
  sub_C708(0);
  sub_F684(0);
  sub_F9DE(MEMORY[0x20003A2F]);
  return sub_F684(1);
}
// C708: using guessed type int __fastcall sub_C708(_DWORD);
// F684: using guessed type int __fastcall sub_F684(_DWORD);
// F9DE: using guessed type int __fastcall sub_F9DE(_DWORD);

//----- (0000D62C) --------------------------------------------------------
int sub_D62C()
{
  int v0; // r0

  MEMORY[0x2000425C] = 1;
  MEMORY[0x2000425D] = 0;
  v0 = sub_4D64(27, 536887900, 2);
  sub_D608(v0);
  return clear_pending_vendor_slot(6);
}
// 4D64: using guessed type int __fastcall sub_4D64(_DWORD, _DWORD, _DWORD);
// D608: using guessed type int __fastcall sub_D608(_DWORD);

//----- (0000D654) --------------------------------------------------------
_BYTE *sub_D654()
{
  return sub_BEE4(6, (char *)0x200039CC, MEMORY[0x200039B8]);
}

//----- (0000D66C) --------------------------------------------------------
int sub_D66C()
{
  MEMORY[0x20003A2F] = sub_F7A8();
  sub_F684(0);
  sub_F9DE(5);
  sub_C708(1);
  return sub_F684(1);
}
// C708: using guessed type int __fastcall sub_C708(_DWORD);
// F684: using guessed type int __fastcall sub_F684(_DWORD);
// F7A8: using guessed type int sub_F7A8(void);
// F9DE: using guessed type int __fastcall sub_F9DE(_DWORD);

//----- (0000D694) --------------------------------------------------------
int sub_D694()
{
  int v0; // r0

  MEMORY[0x2000425C] = 1;
  MEMORY[0x2000425D] = 0;
  v0 = sub_4D64(26, 536887900, 2);
  sub_D66C(v0);
  return clear_pending_vendor_slot(5);
}
// 4D64: using guessed type int __fastcall sub_4D64(_DWORD, _DWORD, _DWORD);
// D66C: using guessed type int __fastcall sub_D66C(_DWORD);

//----- (0000D6BC) --------------------------------------------------------
_BYTE *sub_D6BC()
{
  return sub_BEE4(5, (char *)0x200039CC, MEMORY[0x200039B8]);
}

//----- (0000D6D4) --------------------------------------------------------
// Fast path pushes payloads into the runtime byte ring when credits/MTU permit. Slow path interprets packet[0] and routes opcodes 0x10/0x18/0x22/0x23/0x25/0x27/0x28/0x29/0x2A/0x2B through callback slots at 0x20003BC0..0x20003BCC and the deferred-callback queue.
void __fastcall dispatch_runtime_packet_to_transport(
        unsigned __int8 *packet,
        unsigned int packet_len,
        int bypass_fast_path)
{                                               // Fast-path packet dispatcher: when queue credits permit it updates 0x20003B90/0x20003B94 and exits; otherwise it interprets packet[0] as an opcode and routes it to runtime callbacks and transport framing helpers.
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r0
  _BYTE v12[28]; // [sp+0h] [bp-1Ch] BYREF

  if ( !bypass_fast_path && MEMORY[0x20003B90] && MEMORY[0x20003B94] < MEMORY[0x20003B88] )
  {
    if ( packet_len <= MEMORY[0x20003B6A] )
    {
      _R4 = __get_CPSR();
      __disable_irq();
      if ( (unsigned int)MEMORY[0x20003B78] + 1 >= MEMORY[0x20003B76] )
      {
        while ( 1 )
          ;
      }
      MEMORY[0x20003B90] -= packet_len;
      MEMORY[0x20003B94] += packet_len;
      enqueue_runtime_fast_path_payload(packet);
      __asm { MSR.W           PRIMASK, R4 }
    }
    return;
  }
  if ( !MEMORY[0x20003B64] )
  {
    v8 = *packet;
    if ( v8 != 16 && v8 != 39 )
      return;
  }
  v9 = *packet;
  if ( v9 != 39 )
  {
    if ( *packet > 0x27u )
    {
      switch ( v9 )
      {
        case '(':
          reset_runtime_transport_session_window_state();
          return;
        case ')':
          MEMORY[0x20003B66] = 1;
          MEMORY[0x20003BC0](packet[1]);
          return;
        case '*':
          v12[1] = MEMORY[0x20003BC8]();
          v10 = 2;
          v12[0] = 0;
          v11 = 42;
          break;
        case '+':
          MEMORY[0x20003BCC](
            packet[1] | (unsigned __int16)(packet[2] << 8) | (packet[3] << 16) & 0xFF0000 | (packet[4] << 24),
            v12);
          v12[0] = 0;
          v10 = 22;
          v11 = 43;
          break;
        default:
          return;
      }
    }
    else
    {
      if ( v9 == 34 )
      {
LABEL_21:
        enqueue_runtime_deferred_callback();
        return;
      }
      if ( *packet > 0x22u )
      {
        if ( v9 != 35 )
        {
          if ( v9 != 37 )
            return;
          goto LABEL_21;
        }
        MEMORY[0x20003BC4](v12);
        v12[0] = 0;
        v10 = 8;
        v11 = 35;
      }
      else
      {
        if ( v9 != 16 )
        {
          if ( v9 != 24 )
            return;
          goto LABEL_21;
        }
        MEMORY[0x20003B64] = 1;
        v12[0] = 0;
        v10 = 1;
        v11 = 16;
      }
    }
    build_runtime_transport_reply_frame(v11, v12, v10);
    return;
  }
  open_runtime_transport_session_from_packet(packet + 1, packet_len, 39, 536886116);
  if ( !sub_BD2C() && ramapi_publish_run_state_code(0) == 4 )
  {
    ramapi_transport_configure_route(1, 5, 0);
    ramapi_set_run_state_code(1);
    sub_3B48(1);
  }
}
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 4B48: using guessed type int __fastcall sub_4B48(_DWORD, _DWORD, _DWORD);
// 7878: using guessed type int __fastcall sub_7878(_DWORD, _DWORD, _DWORD, _DWORD);
// DF48: using guessed type int sub_DF48(void);
// DF98: using guessed type int __fastcall sub_DF98(_DWORD);
// DFEC: using guessed type int sub_DFEC(void);
// 20003BC0: using guessed type int (__fastcall *)(_DWORD);
// 20003BC4: using guessed type int (__fastcall *)(_DWORD);
// 20003BC8: using guessed type int (*)(void);
// 20003BCC: using guessed type int (__fastcall *)(_DWORD, _DWORD);

//----- (0000D82C) --------------------------------------------------------
// Deferred callback worker used by the slow-path queue. If a stream write session is active it writes the chunk through callback slot 0x20003BB8 and sends opcode 0x17 progress/complete notifications via 0x20003BB4; otherwise it handles nested opcodes 0x18/0x22/0x25.
void __fastcall service_runtime_transport_deferred_callback(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v16; // r1
  int v17; // [sp+0h] [bp-4h] BYREF

  v17 = a4;
  if ( MEMORY[0x20003B8C] && (a3 = MEMORY[0x20003B88], MEMORY[0x20003B98] < MEMORY[0x20003B88]) )
  {
    _R5 = __get_CPSR();
    __disable_irq();
    write_runtime_stream_chunk_via_callback((int)a1, a2);
    MEMORY[0x20003B98] += a2;
    ++MEMORY[0x20003B6C];
    if ( MEMORY[0x20003B6C] >= (unsigned int)MEMORY[0x20003B6E]
      || !MEMORY[0x20003B8C]
      || MEMORY[0x20003B98] >= MEMORY[0x20003B88] )
    {
      MEMORY[0x20003B6C] = 0;
      MEMORY[0x20003B7C] = 0;
      MEMORY[0x20003B7E] = 0;
      if ( !MEMORY[0x20003B8C] )
      {
        ++MEMORY[0x20003B84];
        MEMORY[0x20003B72] = MEMORY[0x20003B70];
      }
      LOBYTE(v17) = 23;
      HIWORD(v17) = MEMORY[0x20003B70];
      while ( !MEMORY[0x20003BB4](4, &v17) && !MEMORY[0x20003B66] )
        ;
    }
    __asm { MSR.W           PRIMASK, R5 }
  }
  else
  {
    v16 = *a1;
    switch ( v16 )
    {
      case 24:
        handle_runtime_stream_read_request_packet(a1 + 1);
        break;
      case 34:
        MEMORY[0x20003BC0](3);
        break;
      case 37:
        begin_runtime_stream_write_session_from_packet(a1 + 1, 37, a3, a4);
        break;
    }
  }
}
// 20003BB4: using guessed type int (__fastcall *)(_DWORD, _DWORD);
// 20003BC0: using guessed type int (__fastcall *)(_DWORD);

//----- (0000D8D4) --------------------------------------------------------
int __fastcall sub_D8D4(int a1, _BYTE *a2)
{
  if ( *a2 == 23 )
    sub_D8F8(a2);
  return 1;
}

//----- (0000D8E6) --------------------------------------------------------
int __fastcall sub_D8E6(int a1, _BYTE *a2)
{
  if ( *a2 == 23 )
    sub_D930(a2);
  return 1;
}
// D930: using guessed type int __fastcall sub_D930(_DWORD);

//----- (0000D8F8) --------------------------------------------------------
int __fastcall sub_D8F8(_BYTE *a1)
{
  MEMORY[0x20003A54] = 4;
  MEMORY[0x20003A56] = 101;
  MEMORY[0x20003A55] = 0x80;
  MEMORY[0x20003A57] = *a1;
  MEMORY[0x20003A58] = a1[1];
  MEMORY[0x20003A59] = a1[2];
  MEMORY[0x20003A5A] = a1[3];
  MEMORY[0x20003A52] = 7;
  return clear_pending_vendor_slot(0);
}

//----- (0000D930) --------------------------------------------------------
int __fastcall sub_D930(int a1)
{
  int v1; // r2
  int v2; // r3

  MEMORY[0x20003A75] = 1;
  v1 = *(unsigned __int8 *)(a1 + 3);
  v2 = *(unsigned __int8 *)(a1 + 2);
  MEMORY[0x20003A78] = ((_WORD)v1 << 8) | v2;
  return (v1 << 8) | v2;
}

//----- (0000D948) --------------------------------------------------------
int sub_D948()
{
  int v0; // r0

  v0 = sub_11CF0(4, 268456205, 0x8000, 1);
  sub_F47C(v0);
  MEMORY[0xE000E100] = 0x2000;
  return 0x2000;
}
// F47C: using guessed type int __fastcall sub_F47C(_DWORD);
// 11CF0: using guessed type int __fastcall sub_11CF0(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (0000D970) --------------------------------------------------------
int __fastcall refresh_vendor_status_cache(unsigned __int8 *packet)
{
  int v2; // r1
  int v3; // r0
  int result; // r0
  int v5; // r0
  int v6; // r0
  _BYTE v7[4]; // [sp+0h] [bp-24h] BYREF
  int v8; // [sp+4h] [bp-20h] BYREF
  int v9; // [sp+8h] [bp-1Ch]
  int v10; // [sp+Ch] [bp-18h]
  int v11; // [sp+10h] [bp-14h]
  int v12; // [sp+14h] [bp-10h]
  int v13; // [sp+18h] [bp-Ch]
  int v14; // [sp+1Ch] [bp-8h]
  unsigned __int8 *v15; // [sp+20h] [bp-4h]

  v15 = packet + 3;
  v2 = *packet;
  v3 = packet[1];
  if ( v2 != 35 && v2 != 39 && v3 == MEMORY[0x20003A53] )
    return clear_pending_vendor_slot(0);
  MEMORY[0x20003A53] = v3;
  result = 0;
  if ( v2 != 37 )
  {
    if ( v2 > 37 )
    {
      if ( v2 != 39 && v2 != 64 )
      {
        if ( v2 != 66 )
          return result;
        v8 = 0;
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        copy_runtime_transport_reply_frame(&v8, v7);
        sub_141A(536885848, &v8, v7[0]);
        MEMORY[0x20003A52] = v7[0] + 4;
      }
    }
    else if ( v2 != 24 )
    {
      if ( v2 == 34 )
      {
        sub_D948(0);
      }
      else
      {
        if ( v2 != 35 )
          return result;
        v8 = 0;
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        dispatch_runtime_packet_to_transport(v15, packet[2], 0);
        copy_runtime_transport_reply_frame(&v8, v7);
        sub_141A(536885848, &v8, v7[0]);
        MEMORY[0x20003A52] = v7[0] + 4;
      }
    }
  }
  v5 = *packet;
  if ( v5 != 34
    && (v5 == 66
     || v5 == 35
     || (dispatch_runtime_packet_to_transport(v15, packet[2], 0), v6 = *packet, v6 == 66)
     || v6 == 35)
    || (MEMORY[0x20003A52] = 4, result = *packet, result != 64) )
  {
    MEMORY[0x20003A54] = 4;
    MEMORY[0x20003A56] = 101;
    MEMORY[0x20003A55] = 0x80;
    MEMORY[0x20003A57] = *packet;
    return clear_pending_vendor_slot(0);
  }
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);
// D6D4: using guessed type int __fastcall sub_D6D4(_DWORD, _DWORD, _DWORD);
// D948: using guessed type int __fastcall sub_D948(_DWORD);
// DF74: using guessed type int __fastcall sub_DF74(_DWORD, _DWORD);

//----- (0000DA70) --------------------------------------------------------
int __fastcall sub_DA70(unsigned __int8 *a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r5
  int v5; // r0
  int v6; // r2
  unsigned __int8 *v7; // r1
  int v8; // r0

  result = sub_A860();
  v3 = *a1;
  v4 = result;
  if ( v3 == 35 )
  {
    v7 = a1;
    v6 = a1[1] + 2;
    goto LABEL_19;
  }
  if ( *a1 > 0x23u )
  {
    if ( v3 == 37 || v3 == 39 )
    {
      MEMORY[0x20003A75] = 0;
      MEMORY[0x20003A74] = 0;
      return sub_5128(v4, 0);
    }
    if ( v3 != 66 )
      return result;
    v6 = 18;
    v7 = a1 + 1;
    ++result;
LABEL_19:
    sub_141A(result, v7, v6);
    return sub_5128(v4, 0);
  }
  if ( v3 != 23 )
  {
    if ( v3 != 24 )
    {
      if ( v3 == 34 )
      {
        v5 = sub_5128(result, 0);
        return clear_runtime_transport_session_state(v5);
      }
      return result;
    }
    return sub_5128(v4, 0);
  }
  v8 = (a1[3] << 8) | a1[2];
  MEMORY[0x20003A78] = (a1[3] << 8) | a1[2];
  MEMORY[0x20003A75] = 1;
  if ( MEMORY[0x20003A76] == v8 )
    return sub_5128(v4, 0);
  result = MEMORY[0x20003A74];
  if ( MEMORY[0x20003A74] )
    return sub_5128(v4, 3);
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);
// 5128: using guessed type int __fastcall sub_5128(_DWORD, _DWORD);
// A860: using guessed type int sub_A860(void);
// DEF8: using guessed type int __fastcall sub_DEF8(_DWORD);

//----- (0000DAF4) --------------------------------------------------------
int __fastcall dispatch_vendor_control_opcode(int source_port, unsigned __int8 *packet)
{
  unsigned __int8 *v4; // r6
  int result; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r2
  char v11[4]; // [sp+0h] [bp-24h] BYREF
  int v12; // [sp+4h] [bp-20h] BYREF
  int v13; // [sp+8h] [bp-1Ch]
  int v14; // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  int v16; // [sp+14h] [bp-10h]
  int v17; // [sp+18h] [bp-Ch]
  int v18; // [sp+1Ch] [bp-8h]

  v4 = packet + 3;                              // Dispatches a secondary vendor control packet family by opcode in packet[0]; visible handlers cover at least 24, 35, 37, 39, 42/43, 64, 65, and 66.
  result = sub_A860();
  v6 = result;
  if ( !source_port )
  {
    v7 = *packet;
    if ( v7 == 42 )
      goto LABEL_25;
    if ( *packet <= 0x2Au )
    {
      if ( v7 != 35 )
      {
        if ( *packet <= 0x23u )
        {
          if ( v7 != 24 )
          {
            if ( v7 == 34 )
            {
              v8 = sub_5128(v6, 0);
              return sub_D948(v8);
            }
            return sub_5128(v6, 3);
          }
          goto LABEL_17;
        }
        if ( v7 == 37 )
        {
LABEL_17:
          sub_5128(v6, 0);
          return dispatch_runtime_packet_to_transport(v4, packet[2], 0);
        }
        if ( v7 == 39 )
        {
          clear_runtime_transport_session_state();
          select_runtime_transport_callback_profile(2);
          goto LABEL_17;
        }
        return sub_5128(v6, 3);
      }
      goto LABEL_25;
    }
    if ( v7 == 43 )
    {
LABEL_25:
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      dispatch_runtime_packet_to_transport(v4, packet[2], 0);
      copy_runtime_transport_reply_frame(&v12, v11);
      v10 = (unsigned __int8)v11[0];
      v9 = v6 + 1;
LABEL_26:
      sub_141A(v9, &v12, v10);
      return sub_5128(v6, 0);
    }
    if ( v7 == 64 )
      return dispatch_runtime_packet_to_transport(v4, packet[2], 0);
    if ( v7 != 65 )
    {
      if ( v7 != 66 )
        return sub_5128(v6, 3);
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      copy_runtime_transport_reply_frame(&v12, v11);
      v9 = v6 + 1;
      v10 = (unsigned __int8)v11[0] - 2;
      goto LABEL_26;
    }
    MEMORY[0x20003A76] = packet[4] + (packet[5] << 8);
    MEMORY[0x20003A74] = 1;
    if ( MEMORY[0x20003A76] == MEMORY[0x20003A78] )
      return sub_5128(v6, 0);
    result = MEMORY[0x20003A75];
    if ( MEMORY[0x20003A75] )
      return sub_5128(v6, 3);
  }
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);
// 5128: using guessed type int __fastcall sub_5128(_DWORD, _DWORD);
// A860: using guessed type int sub_A860(void);
// D6D4: using guessed type int __fastcall sub_D6D4(_DWORD, _DWORD, _DWORD);
// D948: using guessed type int __fastcall sub_D948(_DWORD);
// DEF8: using guessed type int sub_DEF8(void);
// DF74: using guessed type int __fastcall sub_DF74(_DWORD, _DWORD);

//----- (0000DBF8) --------------------------------------------------------
// Selects one runtime transport callback profile by rewriting the function-pointer slots at 0x20003BB0/0x20003BB4 and, for profile 0, 0x20003BC8/0x20003BCC. Profile 0 uses a dynamic MTU getter; profiles 1/2 use fixed 25-byte and 55-byte MTUs.
int __fastcall select_runtime_transport_callback_profile(int a1)
{
  int result; // r0

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      MEMORY[0x20003BB0] = 268456213;
      result = 268490965;
    }
    else
    {
      MEMORY[0x20003BB0] = 268456229;
      result = 268490983;
    }
    MEMORY[0x20003BB4] = result;
  }
  else
  {
    MEMORY[0x20003BB4] = 268492417;
    MEMORY[0x20003BB0] = 268456217;
    MEMORY[0x20003BC8] = 268491943;
    MEMORY[0x20003BCC] = 268491941;
    return 268491941;
  }
  return result;
}

//----- (0000DC5C) --------------------------------------------------------
unsigned int __fastcall build_pmouse_identity_payload(unsigned __int8 *out_buf)
{
  unsigned int v2; // r0
  unsigned int result; // r0
  _BYTE v4[8]; // [sp+20h] [bp-14h] BYREF
  unsigned __int16 v5; // [sp+2Ch] [bp-8h]

  sub_141A(out_buf + 1, "PMOUSE", 7);           // Identity payload starts with ASCII "PMOUSE"; the tail bytes are filled from runtime device data and a trailing 16-bit field.
  out_buf[13] = 2;
  out_buf[14] = 0;
  sub_FCFE();
  sub_4718(out_buf + 15, v4);
  v2 = v5;
  out_buf[20] = v5;
  result = v2 >> 8;
  out_buf[21] = result;
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);
// FCFE: using guessed type int sub_FCFE(void);

//----- (0000DCA6) --------------------------------------------------------
int sub_DCA6()
{
  return 1;
}

//----- (0000DCAA) --------------------------------------------------------
int __fastcall sub_DCAA(int a1)
{
  sub_FF78();
  return sub_FCF4(a1);
}
// FCF4: using guessed type int __fastcall sub_FCF4(_DWORD);

//----- (0000DCBC) --------------------------------------------------------
int sub_DCBC()
{
  MEMORY[0x20003ACA] = 1;
  return nullsub_3();
}
// 774C: using guessed type int nullsub_3(void);

//----- (0000DCD0) --------------------------------------------------------
unsigned int __fastcall sub_DCD0(_BYTE *a1)
{
  unsigned int v2; // r0
  unsigned int result; // r0
  _BYTE v4[8]; // [sp+20h] [bp-14h] BYREF
  unsigned __int16 v5; // [sp+2Ch] [bp-8h]

  sub_FCFE();
  sub_4718(a1 + 1, v4);
  v2 = v5;
  a1[6] = v5;
  result = v2 >> 8;
  a1[7] = result;
  return result;
}
// FCFE: using guessed type int sub_FCFE(void);

//----- (0000DCFC) --------------------------------------------------------
int __fastcall sub_DCFC(int a1, _BYTE *a2)
{
  unsigned int v3; // r4
  int result; // r0
  char v5; // r0^1
  _BYTE v6[16]; // [sp+20h] [bp-2Ch] BYREF
  _DWORD v7[6]; // [sp+30h] [bp-1Ch] BYREF
  _BYTE *v8; // [sp+48h] [bp-4h]

  v3 = 0;
  sub_157C(a2, 22);
  memset(v7, 0, sizeof(v7));
  if ( MEMORY[0x20003AC9] )
  {
    while ( 1 )
    {
      result = (unsigned __int8)((1 << v3) & ~MEMORY[0x20003AC9]);
      if ( ((unsigned __int8)(1 << v3) & (unsigned __int8)~MEMORY[0x20003AC9]) == 0 )
        break;
      v3 = (unsigned __int8)(v3 + 1);
      if ( v3 >= 3 )
        return result;
    }
    if ( v3 == 2 )
    {
      sub_141A(a2 + 1, 268491932, 7);
      a2[13] = 2;
      a2[14] = 0;
      v8 = v6;
      sub_FCFE();
      sub_4718(a2 + 15, v8);
      v5 = v6[13];
      a2[20] = v6[12];
      a2[21] = v5;
    }
    else
    {
      sub_89A0(v3, v7);
      sub_141A(a2 + 1, v7, 21);
    }
    *a2 = 0;
    MEMORY[0x20003AC9] &= ~(1 << v3);
    return 536885961;
  }
  else
  {
    *a2 = 18;
    return 18;
  }
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);
// 157C: using guessed type int __fastcall sub_157C(_DWORD, _DWORD);
// 89A0: using guessed type int __fastcall sub_89A0(_DWORD, _DWORD);
// FCFE: using guessed type int sub_FCFE(void);

//----- (0000DDA8) --------------------------------------------------------
int __fastcall sub_DDA8(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r1
  int v7; // [sp+0h] [bp-4h] BYREF

  v7 = a4;
  v4 = 0;
  sub_89B8(&v7);
  if ( (unsigned __int8)v7 == 255 || !(_BYTE)v7 )
  {
    LOBYTE(v7) = 4;
    MEMORY[0x20003AC9] = 4;
  }
  else
  {
    MEMORY[0x20003AC9] = v7;
  }
  do
  {
    if ( (unsigned __int8)v7 << 31 )
      v4 = (unsigned __int8)(v4 + 1);
    v5 = (unsigned __int8)v7 >> 1;
    LOBYTE(v7) = (unsigned __int8)v7 >> 1;
  }
  while ( v5 );
  return v4;
}
// 89B8: using guessed type int __fastcall sub_89B8(_DWORD);

//----- (0000DE80) --------------------------------------------------------
int __fastcall runtime_transport_reply_callback_noop(int a1, int a2)
{
  return sub_774E();
}

//----- (0000DE94) --------------------------------------------------------
int __fastcall configure_runtime_read_callback_from_packet(unsigned __int8 *a1)
{
  unsigned int v2; // r1
  int v4; // r0
  int v5; // r0
  unsigned int v6; // [sp+0h] [bp-8h] BYREF
  _BYTE v7[4]; // [sp+4h] [bp-4h] BYREF

  sub_FD3C(v7, &v6);
  v2 = *a1 | (a1[1] << 8) | (a1[2] << 16) | (a1[3] << 24);
  if ( !v2 || v2 > v6 )
    return 2;
  v4 = a1[4];
  if ( v4 == 3 )
  {
    MEMORY[0x20003BAC] = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))268493105;
  }
  else
  {
    if ( v4 == 4 )
      v5 = 268493115;
    else
      v5 = 268500237;
    MEMORY[0x20003BAC] = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v5;
  }
  return 1;
}
// FD3C: using guessed type int __fastcall sub_FD3C(_DWORD, _DWORD);
// 20003BAC: using guessed type int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (0000DEF8) --------------------------------------------------------
int clear_runtime_transport_session_state()
{
  MEMORY[0x20003B64] = 0;
  MEMORY[0x20003B65] = 0;
  MEMORY[0x20003B6C] = 0;
  MEMORY[0x20003B70] = 0;
  MEMORY[0x20003B90] = 0;
  MEMORY[0x20003B94] = 0;
  MEMORY[0x20003B98] = 0;
  MEMORY[0x20003B8C] = 0;
  MEMORY[0x20003B68] = 0;
  MEMORY[0x20003B69] = 0;
  MEMORY[0x20003B76] = 0;
  MEMORY[0x20003B78] = 0;
  MEMORY[0x20003B72] = 0;
  MEMORY[0x20003B84] = 0;
  return 536886116;
}

//----- (0000DF20) --------------------------------------------------------
int prime_runtime_transport_stream_state()
{
  MEMORY[0x20003B64] = 1;
  MEMORY[0x20003B65] = 1;
  MEMORY[0x20003B6C] = 0;
  MEMORY[0x20003B70] = 0;
  MEMORY[0x20003B90] = 0;
  MEMORY[0x20003B94] = 0;
  MEMORY[0x20003B98] = 0;
  MEMORY[0x20003B8C] = 0;
  MEMORY[0x20003B68] = 0;
  MEMORY[0x20003B69] = 0;
  MEMORY[0x20003B78] = 0;
  MEMORY[0x20003B72] = 0;
  MEMORY[0x20003B84] = 0;
  return 536886116;
}

//----- (0000DF48) --------------------------------------------------------
int reset_runtime_transport_session_window_state()
{
  MEMORY[0x20003B64] = 0;
  MEMORY[0x20003B65] = 0;
  MEMORY[0x20003B6C] = 0;
  MEMORY[0x20003B70] = MEMORY[0x20003B72];
  MEMORY[0x20003B98] = MEMORY[0x20003B84] << 12;
  MEMORY[0x20003B8C] = 0;
  MEMORY[0x20003B90] = 0;
  MEMORY[0x20003B94] = MEMORY[0x20003B84] << 12;
  MEMORY[0x20003B68] = 0;
  MEMORY[0x20003B69] = 0;
  MEMORY[0x20003B76] = 0;
  MEMORY[0x20003B78] = 0;
  return 536886116;
}

//----- (0000DF74) --------------------------------------------------------
int __fastcall copy_runtime_transport_reply_frame(int a1, _BYTE *a2)
{
  int result; // r0

  sub_141A(a1, 536888200, *(unsigned __int8 *)(MEMORY[0x20003B80] + 1) + 2);
  result = *(unsigned __int8 *)(MEMORY[0x20003B80] + 1) + 2;
  *a2 = result;
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (0000DF98) --------------------------------------------------------
int __fastcall enqueue_runtime_fast_path_payload(int a1, unsigned int a2)
{
  int result; // r0
  int v4; // r2
  int v5; // r3

  result = 0;
  if ( a2 && a2 <= MEMORY[0x20003B6A] && MEMORY[0x20003B7A] + a2 < 0x400 )
  {
    v4 = MEMORY[0x20003B7E];
    MEMORY[0x20003B7A] += a2;
    v5 = MEMORY[0x20003B7E] + a2;
    if ( v5 >= 1024 )
      LOWORD(v5) = 0;
    MEMORY[0x20003B7E] = v5;
    if ( v4 != 0xFFFF )
    {
      if ( a1 )
        sub_141A(v4 + 536888288, a1, a2);
      return 1;
    }
  }
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (0000DFEC) --------------------------------------------------------
// Queues one deferred runtime callback record into the slow-path ring: R0=payload ptr, R1=payload len, R2=callback entry. dispatch_runtime_packet_to_transport() feeds 0x1000D82D here for opcodes 0x18/0x22/0x25.
int __fastcall enqueue_runtime_deferred_callback(int a1, unsigned int a2, int a3)
{
  int v4; // r3
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r5
  int v11; // r0

  v4 = MEMORY[0x20003B74];
  result = 0;
  if ( a2 <= MEMORY[0x20003B74] && (unsigned int)MEMORY[0x20003B78] + 1 < MEMORY[0x20003B76] )
  {
    v8 = MEMORY[0x20003B69];
    ++MEMORY[0x20003B78];
    v9 = MEMORY[0x20003B69] + 1;
    if ( v9 >= MEMORY[0x20003B76] )
      LOBYTE(v9) = 0;
    MEMORY[0x20003B69] = v9;
    v10 = 8 * v8;
    v11 = MEMORY[0x20003BA0];
    *(_DWORD *)(MEMORY[0x20003BA0] + 8 * v8) = a3;
    if ( a2 )
    {
      if ( a1 )
        sub_141A(v8 * v4 + MEMORY[0x20003BA4], a1, a2);
      *(_WORD *)(v10 + MEMORY[0x20003BA0] + 4) = a2;
    }
    else
    {
      *(_WORD *)(v10 + v11 + 4) = 0;
    }
    return 1;
  }
  return result;
}
// E01C: conditional instruction was optimized away because r1.4<100u
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (0000E058) --------------------------------------------------------
int rebuild_runtime_transport_queue_geometry()
{
  int v0; // r0
  int v1; // r6
  int v2; // r0
  int result; // r0

  v0 = MEMORY[0x20003BB0]();
  MEMORY[0x20003B6A] = v0;
  v1 = v0;
  MEMORY[0x20003B68] = 0;
  MEMORY[0x20003B69] = 0;
  v2 = sub_15AA(60, MEMORY[0x20003B67] + MEMORY[0x20003B74]);
  MEMORY[0x20003B76] = v2;
  MEMORY[0x20003BA0] = 536888228;
  MEMORY[0x20003BA4] = 8 * v2 + 536888228;
  MEMORY[0x20003B7C] = 0;
  MEMORY[0x20003B7E] = 0;
  result = sub_15AA(1024, v1);
  MEMORY[0x20003B6E] = result;
  return result;
}
// 15AA: using guessed type int __fastcall sub_15AA(_DWORD, _DWORD);
// 20003BB0: using guessed type int (*)(void);

//----- (0000E09C) --------------------------------------------------------
int __fastcall drain_runtime_transport_queue(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r6
  int v5; // r1
  int v7; // r4
  int v8; // r4

  result = 0;
  v4 = 0;
  v5 = 0;
  _R5 = __get_CPSR();
  __disable_irq();
  if ( MEMORY[0x20003B7A] )
  {
    a3 = 268490797;
    result = MEMORY[0x20003B7C] + 536888288;
    v5 = MEMORY[0x20003B6A];
    if ( MEMORY[0x20003B7A] < (unsigned int)MEMORY[0x20003B6A] )
      v5 = MEMORY[0x20003B7A];
    MEMORY[0x20003B7A] -= v5;
    v7 = MEMORY[0x20003B7C] + v5;
    if ( v7 >= 1024 )
      LOWORD(v7) = 0;
    MEMORY[0x20003B7C] = v7;
  }
  else if ( MEMORY[0x20003B78] )
  {
    result = MEMORY[0x20003B68] * MEMORY[0x20003B74] + MEMORY[0x20003BA4];
    v4 = *(unsigned __int16 *)(8 * MEMORY[0x20003B68] + MEMORY[0x20003BA0] + 4);
    a3 = *(_DWORD *)(MEMORY[0x20003BA0] + 8 * MEMORY[0x20003B68]);
    --MEMORY[0x20003B78];
    v8 = MEMORY[0x20003B68] + 1;
    if ( v8 >= MEMORY[0x20003B76] )
      LOBYTE(v8) = 0;
    MEMORY[0x20003B68] = v8;
  }
  __asm { MSR.W           PRIMASK, R5 }
  if ( v5 )
    return ((int (__fastcall *)(int))a3)(result);
  if ( result )
    return ((int (__fastcall *)(int, int))a3)(result, v4);
  return result;
}

//----- (0000E130) --------------------------------------------------------
int sub_E130()
{
  return sub_FBB8(6);
}
// FBB8: using guessed type int __fastcall sub_FBB8(_DWORD);

//----- (0000E13A) --------------------------------------------------------
int sub_E13A()
{
  return sub_FDB0(0, 1);
}
// FDB0: using guessed type int __fastcall sub_FDB0(_DWORD, _DWORD);

//----- (0000E146) --------------------------------------------------------
int __fastcall sub_E146(_BYTE *a1, char *a2, char *a3, _BYTE *a4)
{
  _BYTE v8[32]; // [sp+0h] [bp-40h] BYREF
  _BYTE v9[32]; // [sp+20h] [bp-20h] BYREF

  sub_141A(v8, a2, 0x20u);
  sub_141A(v9, a3, 0x20u);
  return sub_E7A(a4, v8, a1);
}

//----- (0000E170) --------------------------------------------------------
_BYTE *__fastcall sub_E170(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  char v6[32]; // [sp+0h] [bp-44h] BYREF
  char v7[36]; // [sp+20h] [bp-24h] BYREF

  sub_E72(v6, a1);
  sub_141A(a2, v6, 0x20u);
  return sub_141A(a3, v7, 0x20u);
}

//----- (0000E198) --------------------------------------------------------
int __fastcall sub_E198(int a1, int a2, int a3)
{
  int result; // r0

  if ( a1 )
  {
    if ( a3 )
      result = MEMORY[0x50001057] | a2;
    else
      result = MEMORY[0x50001057] & ~a2;
    MEMORY[0x50001057] = result;
  }
  else
  {
    if ( a3 )
      result = MEMORY[0x5000104C] | a2;
    else
      result = MEMORY[0x5000104C] & ~a2;
    MEMORY[0x5000104C] = result;
  }
  return result;
}

//----- (0000E1C8) --------------------------------------------------------
int __fastcall sub_E1C8(int a1, int a2, int a3)
{
  int result; // r0

  if ( a1 )
  {
    if ( a3 == 1 )
      result = MEMORY[0x50001055] | a2;
    else
      result = MEMORY[0x50001055] & ~a2;
    MEMORY[0x50001055] = result;
  }
  else
  {
    if ( a3 == 1 )
      result = MEMORY[0x50001044] | a2;
    else
      result = MEMORY[0x50001044] & ~a2;
    MEMORY[0x50001044] = result;
  }
  return result;
}

//----- (0000E1F8) --------------------------------------------------------
int __fastcall sub_E1F8(int a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r2
  int result; // r0
  int v5; // r1

  v2 = (unsigned int)(a1 << 26) >> 31;
  v3 = 1 << (a1 & 0xDF);
  result = 1342181440;
  if ( v2 )
  {
    if ( a2 )
      MEMORY[0x50001057] |= v3;
    else
      MEMORY[0x50001057] &= ~(_BYTE)v3;
  }
  else
  {
    if ( a2 )
      v5 = MEMORY[0x5000104C] | v3;
    else
      v5 = MEMORY[0x5000104C] & ~v3;
    MEMORY[0x5000104C] = v5;
  }
  return result;
}

//----- (0000E234) --------------------------------------------------------
_BYTE *__fastcall sub_E234(_BYTE *result, unsigned int a2)
{
  if ( (unsigned int)result < 0x28 && a2 <= 0x2A )
  {
    result += 1342181632;
    *result = a2;
  }
  return result;
}

//----- (0000E248) --------------------------------------------------------
int __fastcall sub_E248(int a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r2
  int result; // r0
  int v5; // r1

  v2 = (unsigned int)(a1 << 26) >> 31;
  v3 = 1 << (a1 & 0xDF);
  result = 1342181440;
  if ( v2 )
  {
    if ( a2 == 1 )
      MEMORY[0x50001055] |= v3;
    else
      MEMORY[0x50001055] &= ~(_BYTE)v3;
  }
  else
  {
    if ( a2 == 1 )
      v5 = MEMORY[0x50001044] | v3;
    else
      v5 = MEMORY[0x50001044] & ~v3;
    MEMORY[0x50001044] = v5;
  }
  return result;
}

//----- (0000E294) --------------------------------------------------------
void sub_E294()
{
  while ( *loc_680 == 1 )
    loc_7A0();
  sub_F624();
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000E2C2) --------------------------------------------------------
int sub_E2C2()
{
  int result; // r0

  while ( *loc_680 == 1 )
    loc_7A0();
  sub_F62C();
  while ( 1 )
  {
    result = *loc_688;
    if ( !*loc_688 )
      break;
    loc_7A0();
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000E2FE) --------------------------------------------------------
__int64 __fastcall sub_E2FE(unsigned __int8 *a1)
{
  __int64 v2; // [sp+0h] [bp-10h]

  BYTE4(v2) = 0;
  LODWORD(v2) = *a1;
  *(_WORD *)((char *)&v2 + 5) = *((_WORD *)a1 + 4);
  HIBYTE(v2) = a1[10];
  sub_F512();
  return v2;
}

//----- (0000E364) --------------------------------------------------------
int sub_E364()
{
  int result; // r0
  _DWORD v1[8]; // [sp+0h] [bp-34h] BYREF
  _DWORD v2[5]; // [sp+20h] [bp-14h] BYREF

  result = sub_A2A0();
  if ( !result )
  {
    sub_7A3C();
    sub_2F8(v1, (_DWORD *)0x10014DB4, 0x20u);
    v1[3] = loc_5B4;
    v1[4] = loc_57C;
    v1[6] = loc_5A0;
    sub_141A((_BYTE *)0x20004C5C, (char *)v1, 0x20u);
    sub_2F8(v2, (_DWORD *)0x10014DD4, 0x14u);
    v2[0] = loc_31C;
    v2[4] = loc_240;
    sub_141A((_BYTE *)0x20004C7C, (char *)v2, 0x14u);
    sub_A294(0);
    sub_A2C0(817963887);
    sub_A2CC(11);
    return sub_A2AC(1);
  }
  return result;
}

//----- (0000E3FC) --------------------------------------------------------
int __fastcall sub_E3FC(int a1)
{
  unsigned __int16 v1; // r0
  unsigned int v2; // r4
  unsigned int v3; // r0
  int v4; // r6
  int v5; // r7
  int v6; // r5
  int v7; // r4
  int v9; // [sp+0h] [bp-Ch]
  int v10; // [sp+4h] [bp-8h]

  sub_15AA(965 * a1, 0x3E8u);
  v2 = 5 * v1;
  sub_15AA(100 * v1, 0x12u);
  if ( v3 <= 0x1FFFF )
  {
    MEMORY[0x20003D7F] = 0;
  }
  else
  {
    MEMORY[0x20003D7F] = 1;
    v2 >>= 1;
    v3 >>= 1;
  }
  v10 = v2 << 20 >> 24;
  v4 = v2 >> 12;
  v5 = v3 << 12 >> 24;
  v9 = v3 << 20 >> 24;
  v6 = v2 & 0xF;
  v7 = v3 & 0xF;
  sub_ACE8(127, 0);
  sub_ACE8(9, 90);
  sub_ACE8(127, 1);
  sub_ACE8(16, v4);
  sub_ACE8(17, v10);
  sub_ACE8(18, v5);
  sub_ACE8(19, v9);
  sub_ACE8(20, (16 * v6) | v7);
  sub_ACE8(127, 0);
  return sub_ACE8(9, 0);
}
// E40C: variable 'v1' is possibly undefined
// E422: variable 'v3' is possibly undefined

//----- (0000E4B4) --------------------------------------------------------
int __fastcall configure_sensor_from_profile(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v6; // [sp+0h] [bp-4h] BYREF

  v6 = a4;
  if ( !MEMORY[0x20003D7C] || (result = MEMORY[0x20003D7D], MEMORY[0x20003D7D] != a1) )
  {
    sub_82D4("setting = %d(0:NORMAL, 1:BURST, 2:ULTRA)\r\n", a1);
    LOBYTE(v6) = 0;
    sub_A5DC(26, 1);
    sub_3CF8(0);
    sub_11C78(3605);
    sub_3C5C(0, &v6);
    sub_82D4("sensor ID %x\r\n", (unsigned __int8)v6);
    sub_ACE8(127, 0);
    sub_ACE8(6, 64);
    sub_3CF8(0);
    if ( a1 == 1 )
    {
      sub_11C78(197);
      sub_ACE8(127, 0);
      sub_ACE8(9, 90);
      sub_ACE8(52, 49);
      sub_ACE8(57, 0);
      sub_ACE8(67, 9);
      sub_ACE8(75, 18);
      sub_ACE8(79, 0);
      sub_ACE8(127, 2);
      sub_ACE8(76, 1);
      sub_ACE8(22, 32);
      sub_ACE8(17, 26);
      sub_ACE8(76, 0);
      sub_ACE8(14, 224);
      sub_ACE8(109, 192);
      sub_ACE8(110, 189);
      sub_ACE8(116, 156);
      sub_ACE8(43, 24);
      sub_ACE8(51, 48);
      sub_ACE8(115, 170);
      sub_ACE8(122, 64);
      sub_ACE8(26, 130);
      sub_ACE8(27, 157);
      sub_ACE8(70, 60);
      sub_ACE8(127, 4);
      sub_ACE8(109, 4);
      sub_ACE8(115, 1);
      sub_ACE8(121, 0);
      sub_ACE8(96, 251);
      sub_ACE8(110, 14);
      sub_ACE8(95, 136);
      sub_ACE8(111, 48);
      sub_ACE8(116, 15);
      sub_ACE8(117, 48);
      sub_ACE8(122, 15);
      sub_ACE8(123, 48);
      sub_ACE8(127, 3);
      sub_ACE8(45, 1);
      sub_ACE8(12, 160);
      sub_ACE8(18, 156);
      sub_ACE8(25, 32);
      sub_ACE8(31, 32);
      sub_ACE8(48, 64);
      sub_ACE8(57, 80);
      sub_ACE8(61, 28);
      sub_ACE8(71, 10);
      sub_ACE8(75, 12);
      sub_ACE8(84, 137);
      sub_ACE8(85, 9);
      sub_ACE8(86, 4);
      sub_ACE8(87, 4);
      sub_ACE8(94, 9);
      sub_ACE8(95, 4);
      sub_ACE8(56, 35);
      sub_ACE8(76, 0);
      sub_ACE8(88, 0);
      sub_ACE8(124, 35);
      sub_ACE8(99, 20);
      sub_ACE8(100, 7);
      sub_ACE8(102, 7);
      sub_ACE8(103, 28);
      sub_ACE8(104, 7);
      sub_ACE8(105, 8);
      sub_ACE8(106, 7);
      sub_ACE8(107, 165);
      sub_ACE8(108, 5);
      sub_ACE8(109, 213);
      sub_ACE8(110, 53);
      sub_ACE8(120, 6);
      sub_ACE8(53, 1);
      sub_ACE8(54, 72);
      sub_ACE8(55, 72);
      sub_ACE8(80, 126);
      sub_ACE8(125, 80);
      sub_ACE8(52, 3);
      sub_ACE8(58, 56);
      sub_ACE8(65, 32);
      sub_ACE8(10, 158);
      sub_ACE8(16, 156);
      sub_ACE8(1, 5);
      sub_ACE8(6, 8);
      sub_ACE8(24, 24);
      sub_ACE8(30, 22);
      sub_ACE8(77, 7);
      sub_ACE8(83, 128);
      sub_ACE8(93, 48);
      sub_ACE8(81, 45);
      sub_ACE8(36, 108);
      sub_ACE8(37, 36);
      sub_ACE8(38, 112);
      sub_ACE8(39, 176);
      sub_ACE8(41, 4);
      sub_ACE8(82, 20);
      sub_ACE8(45, 0);
      sub_ACE8(127, 4);
      sub_ACE8(1, 36);
      sub_ACE8(11, 16);
      sub_ACE8(18, 38);
      sub_ACE8(20, 76);
      sub_ACE8(34, 72);
      sub_ACE8(52, 32);
      sub_ACE8(53, 24);
      sub_ACE8(58, 3);
      sub_ACE8(60, 80);
      sub_ACE8(61, 64);
      sub_ACE8(39, 1);
      sub_ACE8(2, 124);
      sub_ACE8(3, 122);
      sub_ACE8(35, 34);
      sub_ACE8(36, 32);
      sub_ACE8(37, 10);
      sub_ACE8(38, 1);
      sub_ACE8(64, 148);
      sub_ACE8(65, 1);
      sub_ACE8(5, 1);
      sub_ACE8(57, 7);
      sub_ACE8(22, 132);
      sub_ACE8(29, 119);
      sub_ACE8(49, 93);
      sub_ACE8(12, 40);
      sub_ACE8(13, 60);
      sub_ACE8(28, 43);
      sub_ACE8(48, 192);
      sub_ACE8(30, 160);
      sub_ACE8(32, 76);
      sub_ACE8(4, 70);
      sub_ACE8(8, 10);
      sub_ACE8(9, 20);
      sub_ACE8(21, 36);
      sub_ACE8(31, 24);
      sub_ACE8(40, 17);
      sub_ACE8(50, 24);
      sub_ACE8(16, 34);
      sub_ACE8(41, 128);
      sub_ACE8(42, 32);
      sub_ACE8(0, 5);
      sub_ACE8(33, 2);
      sub_ACE8(43, 7);
      sub_ACE8(44, 1);
      sub_ACE8(45, 48);
      sub_ACE8(46, 16);
      sub_ACE8(47, 0);
    }
    else
    {
      sub_11C78(230);
      sub_ACE8(127, 0);
      sub_ACE8(9, 90);
      sub_ACE8(52, 49);
      sub_ACE8(57, 0);
      sub_ACE8(67, 9);
      sub_ACE8(75, 18);
      sub_ACE8(79, 0);
      sub_ACE8(127, 2);
      sub_ACE8(76, 1);
      sub_ACE8(22, 32);
      sub_ACE8(17, 26);
      sub_ACE8(76, 0);
      sub_ACE8(14, 224);
      sub_ACE8(109, 192);
      sub_ACE8(110, 189);
      sub_ACE8(116, 156);
      sub_ACE8(43, 24);
      sub_ACE8(51, 48);
      sub_ACE8(115, 170);
      sub_ACE8(122, 64);
      sub_ACE8(70, 44);
      sub_ACE8(26, 162);
      sub_ACE8(27, 189);
      sub_ACE8(127, 4);
      sub_ACE8(109, 4);
      sub_ACE8(115, 1);
      sub_ACE8(121, 0);
      sub_ACE8(123, 64);
      sub_ACE8(96, 251);
      sub_ACE8(110, 14);
      sub_ACE8(95, 136);
      sub_ACE8(111, 64);
      sub_ACE8(116, 19);
      sub_ACE8(117, 64);
      sub_ACE8(122, 20);
      sub_ACE8(127, 3);
      sub_ACE8(45, 1);
      sub_ACE8(12, 160);
      sub_ACE8(18, 156);
      sub_ACE8(25, 32);
      sub_ACE8(31, 32);
      sub_ACE8(48, 64);
      sub_ACE8(57, 80);
      sub_ACE8(61, 28);
      sub_ACE8(71, 10);
      sub_ACE8(75, 12);
      sub_ACE8(84, 137);
      sub_ACE8(85, 9);
      sub_ACE8(86, 4);
      sub_ACE8(87, 4);
      sub_ACE8(94, 9);
      sub_ACE8(95, 4);
      sub_ACE8(56, 35);
      sub_ACE8(76, 0);
      sub_ACE8(88, 0);
      sub_ACE8(124, 35);
      sub_ACE8(99, 20);
      sub_ACE8(100, 7);
      sub_ACE8(102, 7);
      sub_ACE8(103, 28);
      sub_ACE8(104, 7);
      sub_ACE8(105, 8);
      sub_ACE8(106, 7);
      sub_ACE8(107, 165);
      sub_ACE8(108, 5);
      sub_ACE8(109, 213);
      sub_ACE8(110, 53);
      sub_ACE8(120, 6);
      sub_ACE8(53, 1);
      sub_ACE8(54, 72);
      sub_ACE8(55, 72);
      sub_ACE8(80, 126);
      sub_ACE8(125, 80);
      sub_ACE8(52, 3);
      sub_ACE8(58, 56);
      sub_ACE8(65, 32);
      sub_ACE8(10, 158);
      sub_ACE8(16, 156);
      sub_ACE8(1, 5);
      sub_ACE8(6, 8);
      sub_ACE8(24, 24);
      sub_ACE8(30, 22);
      sub_ACE8(77, 7);
      sub_ACE8(83, 128);
      sub_ACE8(93, 48);
      sub_ACE8(81, 45);
      sub_ACE8(36, 108);
      sub_ACE8(37, 36);
      sub_ACE8(38, 112);
      sub_ACE8(39, 176);
      sub_ACE8(41, 4);
      sub_ACE8(82, 20);
      sub_ACE8(45, 0);
      sub_ACE8(127, 4);
      sub_ACE8(1, 36);
      sub_ACE8(11, 16);
      sub_ACE8(18, 38);
      sub_ACE8(20, 76);
      sub_ACE8(34, 72);
      sub_ACE8(43, 3);
      sub_ACE8(44, 8);
      sub_ACE8(45, 52);
      sub_ACE8(46, 18);
      sub_ACE8(47, 16);
      sub_ACE8(52, 32);
      sub_ACE8(53, 24);
      sub_ACE8(58, 3);
      sub_ACE8(60, 80);
      sub_ACE8(61, 64);
      sub_ACE8(39, 1);
      sub_ACE8(2, 124);
      sub_ACE8(3, 122);
      sub_ACE8(35, 34);
      sub_ACE8(36, 32);
      sub_ACE8(37, 10);
      sub_ACE8(38, 1);
      sub_ACE8(64, 148);
      sub_ACE8(65, 1);
      sub_ACE8(5, 1);
      sub_ACE8(57, 7);
      sub_ACE8(22, 132);
      sub_ACE8(29, 119);
      sub_ACE8(49, 93);
      sub_ACE8(12, 40);
      sub_ACE8(13, 60);
      sub_ACE8(28, 43);
      sub_ACE8(48, 192);
      sub_ACE8(30, 160);
      sub_ACE8(32, 76);
      sub_ACE8(4, 70);
      sub_ACE8(8, 10);
      sub_ACE8(9, 20);
      sub_ACE8(21, 36);
      sub_ACE8(31, 24);
      sub_ACE8(40, 17);
      sub_ACE8(33, 4);
      sub_ACE8(50, 24);
      sub_ACE8(16, 34);
      sub_ACE8(41, 128);
      sub_ACE8(42, 32);
    }
    sub_ACE8(127, 0);
    sub_ACE8(79, 15);
    sub_ACE8(6, 128);
    sub_ACE8(5, 8);
    sub_ACE8(127, 4);
    sub_ACE8(23, 104);
    sub_ACE8(24, 90);
    sub_ACE8(64, 228);
    sub_ACE8(65, 3);
    sub_ACE8(105, 16);
    sub_ACE8(106, 4);
    sub_ACE8(107, 8);
    sub_ACE8(108, 8);
    sub_ACE8(127, 0);
    MEMORY[0x20003D7C] = 1;
    MEMORY[0x20003D7D] = a1;
    return 1;
  }
  return result;
}
// 3C5C: using guessed type int __fastcall sub_3C5C(_DWORD, _DWORD);
// 3CF8: using guessed type int __fastcall sub_3CF8(_DWORD);
// 82D4: using guessed type int sub_82D4(const char *, ...);
// A5DC: using guessed type int __fastcall sub_A5DC(_DWORD, _DWORD);
// ACE8: using guessed type int __fastcall sub_ACE8(_DWORD, _DWORD);
// 11C78: using guessed type int __fastcall sub_11C78(_DWORD);

//----- (0000EF38) --------------------------------------------------------
int __fastcall apply_lod_and_optical_register_script(int lod_value, int active_optical_flag, int a3, int a4)
{
  int lod_setting; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  BOOL v9; // r6
  unsigned __int16 lod_override_register_pair; // r4
  int v12; // r6
  int v13; // r4
  int result; // r0

  lod_setting = get_lod_setting();              // This script writer combines the confirmed 3-valued LOD setting from 0x20004932 with a binary active optical-engine flag from 0x2000493E.
  v9 = load_lod_override_mode(lod_setting, v6, v7, v8) != 0;
  _R5 = __get_CPSR();
  __disable_irq();
  sub_ACE8(127, 0);
  sub_ACE8(9, 90);
  if ( v9 )
  {
    lod_override_register_pair = load_lod_override_register_pair(lod_value);// Likely optical-engine selector path: engine_mode chooses one of several hard-coded register pairs for 0x34..0x3C, while shadow_mode alters the exact constants. This aligns with the WebHID "Optical Engine" setting semantics, but the direct command handler should still be treated as an inference.
    sub_ACE8(127, 3);
    sub_3C5C(127);
    MEMORY[0x20003D7C] = 0;
    sub_FF60(255);
    v12 = (unsigned __int8)lod_override_register_pair;
    sub_ACE8(52, (unsigned __int8)lod_override_register_pair);
    v13 = HIBYTE(lod_override_register_pair);
    sub_ACE8(53, v13);
    sub_ACE8(54, v12);
    sub_ACE8(55, v13);
    sub_ACE8(57, v12);                          // For threshold selector 0, the hard-coded pair is D9/E1 when the optical-engine flag is 0 and EE/FF when it is 1.
    sub_ACE8(58, v13);
    sub_ACE8(59, v12);
    sub_ACE8(60, v13);
  }
  else
  {
    sub_ACE8(127, 3);
    sub_3C5C(127);
    MEMORY[0x20003D7C] = 0;
    sub_FF60(255);
    if ( lod_value )
    {
      if ( lod_value == 1 )
      {
        if ( MEMORY[0x2000493E] )
        {
          sub_ACE8(52, 227);
          sub_ACE8(53, 250);
          sub_ACE8(54, 227);
          sub_ACE8(55, 250);
          sub_ACE8(57, 227);
          sub_ACE8(58, 250);
          sub_ACE8(59, 227);
          sub_ACE8(60, 250);
        }
        else
        {
          sub_ACE8(52, 188);                    // For threshold selector 1, the hard-coded pair is BC/A3 when the optical-engine flag is 0 and E3/FA when it is 1.
          sub_ACE8(53, 163);
          sub_ACE8(54, 188);
          sub_ACE8(55, 163);
          sub_ACE8(57, 188);
          sub_ACE8(58, 163);
          sub_ACE8(59, 188);
          sub_ACE8(60, 163);
        }
      }
      else if ( MEMORY[0x2000493E] )
      {
        sub_ACE8(52, 216);
        sub_ACE8(53, 245);
        sub_ACE8(54, 216);
        sub_ACE8(55, 245);
        sub_ACE8(57, 216);
        sub_ACE8(58, 245);
        sub_ACE8(59, 216);
        sub_ACE8(60, 245);
      }
      else
      {
        sub_ACE8(52, 160);                      // For threshold selector 2, the hard-coded pair is A0/64 when the optical-engine flag is 0 and D8/F5 when it is 1.
        sub_ACE8(53, 100);
        sub_ACE8(54, 160);
        sub_ACE8(55, 100);
        sub_ACE8(57, 160);
        sub_ACE8(58, 100);
        sub_ACE8(59, 160);
        sub_ACE8(60, 100);
      }
    }
    else if ( MEMORY[0x2000493E] )
    {
      sub_ACE8(52, 238);
      sub_ACE8(53, 255);
      sub_ACE8(54, 238);
      sub_ACE8(55, 255);
      sub_ACE8(57, 238);
      sub_ACE8(58, 255);
      sub_ACE8(59, 238);
      sub_ACE8(60, 255);
    }
    else
    {
      sub_ACE8(52, 217);
      sub_ACE8(53, 225);
      sub_ACE8(54, 217);
      sub_ACE8(55, 225);
      sub_ACE8(57, 217);
      sub_ACE8(58, 225);
      sub_ACE8(59, 217);
      sub_ACE8(60, 225);
    }
  }
  sub_ACE8(127, 0);
  result = sub_ACE8(9, 0);
  __asm { MSR.W           PRIMASK, R5 }
  return result;
}
// EF40: variable 'v6' is possibly undefined
// EF40: variable 'v7' is possibly undefined
// EF40: variable 'v8' is possibly undefined

//----- (0000F1C8) --------------------------------------------------------
int __fastcall apply_sensor_dpi_registers(unsigned int dpi_value)
{
  unsigned __int16 v1; // r4
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r0
  unsigned int v9; // r4
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r5
  int v14; // r6
  unsigned int v15; // r7
  int result; // r0
  unsigned int v22; // [sp+0h] [bp-Ch]
  unsigned int v23; // [sp+4h] [bp-8h]
  unsigned int v24; // [sp+8h] [bp-4h]

  v1 = dpi_value;
  v2 = sub_2468(dpi_value << 8 >> 24);
  v3 = sub_2280(v2, 1092616192);
  v4 = sub_2468(v1);
  v5 = sub_1429C(v4, v3);
  v6 = sub_14328(v5, 1148272640);
  v7 = sub_2280(v6, 1148846080);
  v8 = sub_14328(v7, 1084227584);
  v9 = sub_23E0(v8);
  v10 = sub_14328(v7, 1120403456);
  v11 = sub_2280(v10, 1099956224);
  v12 = sub_23E0(v11);
  if ( v12 - 0x20000 > 0x1FFFE )
  {
    MEMORY[0x20003D7F] = 0;
  }
  else
  {
    MEMORY[0x20003D7F] = 1;
    v9 >>= 1;
    v12 >>= 1;
  }
  v24 = v9 << 20 >> 24;
  v23 = v9 << 12 >> 24;
  v13 = v9 & 0xF;
  v14 = v12 & 0xF;
  v15 = v12 << 12 >> 24;
  _R4 = __get_CPSR();
  v22 = v12 << 20 >> 24;
  __disable_irq();
  sub_ACE8(127, 0);
  sub_ACE8(9, 90);
  sub_ACE8(127, 1);                             // The scaled DPI value is split into packed fields and written to sensor registers 0x10..0x14 inside a short IRQ-disabled transaction.
  sub_ACE8(16, v23);
  sub_ACE8(17, v24);
  sub_ACE8(18, v15);
  sub_ACE8(19, v22);
  sub_ACE8(20, (16 * v13) | v14);
  sub_ACE8(127, 0);
  result = sub_ACE8(9, 0);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}
// 2280: using guessed type int __fastcall sub_2280(_DWORD, _DWORD);
// 23E0: using guessed type int __fastcall sub_23E0(_DWORD);
// 2468: using guessed type int __fastcall sub_2468(_DWORD);
// ACE8: using guessed type int __fastcall sub_ACE8(_DWORD, _DWORD);
// 1429C: using guessed type int __fastcall sub_1429C(_DWORD, _DWORD);
// 14328: using guessed type int __fastcall sub_14328(_DWORD, _DWORD);

//----- (0000F2CC) --------------------------------------------------------
unsigned int __fastcall sub_F2CC(unsigned int a1, int a2)
{
  int v4; // r0

  sub_FEE0();
  if ( v4 )
    return sub_657C(a1, a2);
  sub_FED8();
  sub_657C(a1, a2);
  return sub_FEC0(2);
}
// F2DA: variable 'v4' is possibly undefined

//----- (0000F304) --------------------------------------------------------
// attributes: thunk
int sub_F304()
{
  return (*(int (**)(void))((char *)&loc_98E + 2))();
}
// 990: using guessed type int (*)(void);

//----- (0000F30C) --------------------------------------------------------
// attributes: thunk
void sub_F30C()
{
  __asm { BX              R1 }
}

//----- (0000F314) --------------------------------------------------------
int sub_F314()
{
  return (unsigned __int16)loc_538();
}

//----- (0000F324) --------------------------------------------------------
int sub_F324()
{
  void (__fastcall *v0)(int, int); // r0
  int result; // r0
  void (__fastcall *v7)(int, int, int, int); // r0

  loc_7A0();
  if ( MEMORY[0x20003EE5] )
  {
    v0 = (void (__fastcall *)(int, int))sub_1584((unsigned __int8 *)0x20004C54);
    v0(817963694, 817963630);
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003EE5] = 0;
    __asm { MSR.W           PRIMASK, R0 }
  }
  result = MEMORY[0x20003EE6];
  if ( MEMORY[0x20003EE6] )
  {
    v7 = (void (__fastcall *)(int, int, int, int))sub_1584((unsigned __int8 *)0x20004C58);
    v7(817963694, 817963791, 817963823, 817963726);
    _R4 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003EE6] = 0;
    result = loc_65C(1, 0);
    __asm { MSR.W           PRIMASK, R4 }
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000F3D0) --------------------------------------------------------
int sub_F3D0()
{
  int result; // r0

  result = 255;
  if ( MEMORY[0x20003EB7] | MEMORY[0x20003EB9] )
    return sub_4A14();
  return result;
}

//----- (0000F3E8) --------------------------------------------------------
void sub_F3E8()
{
  sub_4A6C();
}

//----- (0000F3F0) --------------------------------------------------------
unsigned int __fastcall sub_F3F0(unsigned int a1)
{
  unsigned int v1; // r5
  unsigned int v2; // r1

  if ( MEMORY[0x20003EB1] )
  {
    v1 = sub_47B0(a1);
    sub_5538();
  }
  else
  {
    sub_15AA(a1 + 1, 0xCu);
    v1 = v2;
  }
  MEMORY[0x20003EC6] = 0;
  MEMORY[0x20003EB8] = 0;
  return v1;
}
// F40E: variable 'v2' is possibly undefined

//----- (0000F47C) --------------------------------------------------------
int sub_F47C()
{
  MEMORY[0x20003EB5] = 1;
  return 1;
}

//----- (0000F488) --------------------------------------------------------
int __fastcall sub_F488(int a1, int a2, char a3)
{
  char v3; // r0
  char v4; // r0

  MEMORY[0x20003EB0] = a1;
  MEMORY[0x20003EB1] = a2;
  if ( a2 )
  {
    MEMORY[0x20003EC8] = 500;
    MEMORY[0x20003ECA] = 300;
    MEMORY[0x20003ECC] = 100;
    MEMORY[0x20003EBB] = 25;
    if ( a1 )
      MEMORY[0x20003EBD] = 3;
    else
      MEMORY[0x20003EBD] = 6;
    MEMORY[0x20003ED0] = 12;
    MEMORY[0x20003ED1] = 37;
    v3 = 62;
  }
  else
  {
    MEMORY[0x20003EC8] = 25;
    MEMORY[0x20003ECA] = 15;
    MEMORY[0x20003ECC] = 5;
    MEMORY[0x20003EBB] = 2;
    if ( a1 )
    {
      v4 = 1;
    }
    else
    {
      MEMORY[0x20003EBC] = 3;
      v4 = 4;
    }
    MEMORY[0x20003EBD] = v4;
    MEMORY[0x20003ED0] = 5;
    MEMORY[0x20003ED1] = 73;
    v3 = 52;
  }
  MEMORY[0x20003ED2] = v3;
  MEMORY[0x20003ECE] = MEMORY[0x20003EC8];
  MEMORY[0x20003EC2] = a3;
  return MEMORY[0x20003EC8];
}

//----- (0000F4F8) --------------------------------------------------------
char __fastcall sub_F4F8(char result)
{
  MEMORY[0x20003EAD] = result;
  return result;
}

//----- (0000F512) --------------------------------------------------------
// attributes: thunk
void sub_F512()
{
  __asm { BX              R1 }
}

//----- (0000F51C) --------------------------------------------------------
int __fastcall sub_F51C(int result)
{
  int v1; // r4

  v1 = result;
  if ( result )
  {
    sub_141A(result, 817964667, 6);
    result = MEMORY[0x30C1267A];
    *(_BYTE *)(v1 + 6) = MEMORY[0x30C1267A];
  }
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);

//----- (0000F544) --------------------------------------------------------
int sub_F544()
{
  int v0; // r0

  v0 = loc_6A8();
  nullsub_2(v0);
  sub_E364();
  return 1;
}
// 7576: using guessed type int __fastcall nullsub_2(_DWORD);

//----- (0000F55A) --------------------------------------------------------
int __fastcall sub_F55A(int a1, int a2, int a3)
{
  int v6; // r0

  v6 = sub_1584((unsigned __int8 *)0x46176A58);
  return loc_7AC(v6 + a1, a2, a3);
}

//----- (0000F57C) --------------------------------------------------------
int __fastcall sub_F57C(unsigned int a1, unsigned int a2, char *a3)
{
  unsigned int v4; // r4
  unsigned int v5; // r6

  v4 = sub_1584((unsigned __int8 *)0x46176A58) + a1;
  v5 = v4 >> 12 << 12;
  if ( v5 != (v4 + a2 - 1) >> 12 << 12 || a1 > 0x1000 )
    return 0;
  while ( !loc_730() )
    loc_7A0();
  loc_7AC(v5, 4096, loc_684);
  sub_141A((_BYTE *)(loc_684 + (v4 & 0xFFF)), a3, a2);
  *loc_688 = 1;
  *loc_674 = v5;
  *loc_678 = 4096;
  _R7 = __get_CPSR();
  *loc_67C = 0;
  __disable_irq();
  loc_11C(v5, 1);
  __asm { MSR.W           PRIMASK, R7 }
  while ( *loc_688 )
    loc_7A0();
  return 1;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000F624) --------------------------------------------------------
// attributes: thunk
void sub_F624()
{
  __asm { BX              R3 }
}

//----- (0000F62C) --------------------------------------------------------
// attributes: thunk
void sub_F62C()
{
  __asm { BX              R3 }
}

//----- (0000F634) --------------------------------------------------------
// attributes: thunk
int __fastcall sub_F634(int a1, int a2, int a3)
{
  return (*(int (__fastcall **)(int, int, int))((char *)&loc_74E + 2))(a1, a2, a3);
}
// 750: using guessed type int (__fastcall *)(_DWORD, _DWORD, _DWORD);

//----- (0000F63C) --------------------------------------------------------
int __fastcall sub_F63C(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // r6
  int result; // r0
  int v6; // r0

  v3 = a2;
  result = 1175939625;
  if ( MEMORY[0x46176A60] > a1 )
  {
    if ( a2 + a1 > MEMORY[0x46176A60] )
      v3 = MEMORY[0x46176A60] - a1;
    if ( v3 )
    {
      _R4 = __get_CPSR();
      __disable_irq();
      v6 = sub_1584((unsigned __int8 *)0x46176A5C);
      result = loc_11C(v6 + (a1 << 12), v3);
      __asm { MSR.W           PRIMASK, R4 }
    }
  }
  return result;
}

//----- (0000F67A) --------------------------------------------------------
// attributes: thunk
void sub_F67A()
{
  JUMPOUT(0xF8B1F000);
}
// F680: control flows out of bounds to F8B1F000

//----- (0000F684) --------------------------------------------------------
void __fastcall sub_F684(int a1)
{
  int v2; // r4

  v2 = sub_11B94();
  if ( MEMORY[0x20003EA5] )
  {
    if ( !a1 )
    {
      ((void (__fastcall *)(int))byte_0)(40);
      goto LABEL_8;
    }
    ((void (__fastcall *)(_DWORD))byte_0)(MEMORY[0x20003EA6]);
  }
  if ( v2 != 8 && a1 )
  {
    loc_7F8(a1);
    MEMORY[0x50001079] &= ~0x80u;
    return;
  }
LABEL_8:
  sub_F894();
}
// 0: using guessed type char byte_0;

//----- (0000F6D4) --------------------------------------------------------
int __fastcall sub_F6D4(int a1)
{
  if ( sub_11B94() == 15 )
    a1 &= 7u;
  return loc_800(a1);
}

//----- (0000F6F0) --------------------------------------------------------
// attributes: thunk
void sub_F6F0()
{
  __asm { BX              R1 }
}

//----- (0000F6F8) --------------------------------------------------------
// attributes: thunk
void sub_F6F8()
{
  __asm { BX              R1 }
}

//----- (0000F700) --------------------------------------------------------
// attributes: thunk
void sub_F700()
{
  __asm { BX              R1 }
}

//----- (0000F708) --------------------------------------------------------
// attributes: thunk
void sub_F708()
{
  __asm { BX              R1 }
}

//----- (0000F710) --------------------------------------------------------
// attributes: thunk
void sub_F710()
{
  __asm { BX              R1 }
}

//----- (0000F718) --------------------------------------------------------
// attributes: thunk
void sub_F718()
{
  __asm { BX              R1 }
}

//----- (0000F720) --------------------------------------------------------
// attributes: thunk
void sub_F720()
{
  __asm { BX              R1 }
}

//----- (0000F728) --------------------------------------------------------
// attributes: thunk
void sub_F728()
{
  __asm { BX              R1 }
}

//----- (0000F730) --------------------------------------------------------
// attributes: thunk
void sub_F730()
{
  __asm { BX              R1 }
}

//----- (0000F738) --------------------------------------------------------
int __fastcall sub_F738(int a1)
{
  int v2; // r0
  int result; // r0
  char v4; // r1

  v2 = sub_11B94();
  if ( v2 && v2 != 4 && v2 != 7 )
    a1 = 0;
  loc_7C8(a1);
  result = 536886940;
  if ( a1 )
    v4 = MEMORY[0x50012820] & 1;
  else
    v4 = 0;
  MEMORY[0x20003EA0] = v4;
  return result;
}

//----- (0000F778) --------------------------------------------------------
// attributes: thunk
void sub_F778()
{
  __asm { BX              R0 }
}

//----- (0000F780) --------------------------------------------------------
// attributes: thunk
void sub_F780()
{
  __asm { BX              R1 }
}

//----- (0000F788) --------------------------------------------------------
// attributes: thunk
void sub_F788()
{
  __asm { BX              R1 }
}

//----- (0000F790) --------------------------------------------------------
// attributes: thunk
void sub_F790()
{
  __asm { BX              R0 }
}

//----- (0000F798) --------------------------------------------------------
// attributes: thunk
void sub_F798()
{
  __asm { BX              R0 }
}

//----- (0000F7A0) --------------------------------------------------------
// attributes: thunk
void sub_F7A0()
{
  __asm { BX              R0 }
}

//----- (0000F7A8) --------------------------------------------------------
// attributes: thunk
void sub_F7A8()
{
  __asm { BX              R0 }
}

//----- (0000F7B0) --------------------------------------------------------
// attributes: thunk
void sub_F7B0()
{
  __asm { BX              R2 }
}

//----- (0000F7D0) --------------------------------------------------------
int __fastcall sub_F7D0(int a1)
{
  int v3; // r0
  int result; // r0

  _R4 = __get_CPSR();
  __disable_irq();
  v3 = sub_1584(1175939668);
  result = loc_110(v3 + 19, 23, a1);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}
// 1584: using guessed type int __fastcall sub_1584(_DWORD);

//----- (0000F7F8) --------------------------------------------------------
int __fastcall sub_F7F8(int a1)
{
  int v3; // r0
  int result; // r0

  _R4 = __get_CPSR();
  __disable_irq();
  v3 = sub_1584(1175939668);
  result = loc_110(v3, 5, a1);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}
// 1584: using guessed type int __fastcall sub_1584(_DWORD);

//----- (0000F81E) --------------------------------------------------------
int __fastcall sub_F81E(int a1)
{
  int v3; // r0
  int result; // r0

  _R4 = __get_CPSR();
  __disable_irq();
  v3 = sub_1584((unsigned __int8 *)0x46176A54);
  result = loc_110(v3 + 5, 14, a1);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}

//----- (0000F848) --------------------------------------------------------
int __fastcall sub_F848(int a1)
{
  int result; // r0
  char v3; // r1

  loc_7C4(a1);
  result = 536886940;
  if ( a1 == 1 )
    v3 = MEMORY[0x5001286E] & 1;
  else
    v3 = 0;
  MEMORY[0x20003EA0] = v3;
  return result;
}

//----- (0000F874) --------------------------------------------------------
// attributes: thunk
void sub_F874(void)
{
  __asm { BX              R0 }
}

//----- (0000F87C) --------------------------------------------------------
// attributes: thunk
void sub_F87C()
{
  __asm { BX              R0 }
}

//----- (0000F894) --------------------------------------------------------
void sub_F894()
{
  int v0; // r0
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r3
  int v6; // r0
  int v7; // r2
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r0

  if ( MEMORY[0x4770600A](2) )
  {
    if ( MEMORY[0x20003EA0] )
    {
      sub_F790();
      if ( v0 )
      {
        while ( 1 )
        {
          v4 = sub_10680(v0, v1, v2, v3);
          if ( v4 == 14 )
            break;
          sub_F87C();
          if ( v0 )
          {
            if ( v4 == 2 )
              break;
          }
        }
        loc_214(127, 1);
        v6 = 1342181472;
        v7 = 128;
        MEMORY[0x50001079] |= 0x80u;
        v8 = (MEMORY[0x50001079] >> 7 << 7) + 4;
        MEMORY[0x50001079] = (MEMORY[0x50001079] >> 7 << 7) + 4;
        do
          v6 = sub_10680(v6, v8, v7, v5);
        while ( v6 != 2 );
      }
    }
    loc_7F8(0);
    do
    {
      do
        sub_F7A0();
      while ( v9 > 1 );
      sub_F798();
    }
    while ( v10 );
  }
}
// F8B2: variable 'v0' is possibly undefined
// F8B4: variable 'v1' is possibly undefined
// F8B4: variable 'v2' is possibly undefined
// F8B4: variable 'v3' is possibly undefined
// F8EA: variable 'v8' is possibly undefined
// F8EA: variable 'v7' is possibly undefined
// F8EA: variable 'v5' is possibly undefined
// F902: variable 'v9' is possibly undefined
// F90A: variable 'v10' is possibly undefined

//----- (0000F918) --------------------------------------------------------
int __fastcall sub_F918(int a1)
{
  unsigned int v2; // r4
  int v3; // r0
  int result; // r0

  v2 = sub_11B94();
  loc_7BC();
  if ( a1 )
    v3 = 5;
  else
    v3 = 4;
  loc_470(v3);
  if ( v2 >= 2 && v2 != 4 && v2 != 7 )
    sub_F9A4(0);
  result = sub_11B94();
  if ( result == 15 )
  {
    sub_F9F4(536886951, 5);
    return apply_system_mode_register_script(0);
  }
  return result;
}
// F9A4: using guessed type int __fastcall sub_F9A4(_DWORD);
// F9F4: using guessed type int __fastcall sub_F9F4(_DWORD, _DWORD);

//----- (0000F970) --------------------------------------------------------
// attributes: thunk
void __fastcall sub_F970(int a1, int a2, int a3)
{
  __asm { BX              R3 }
}

//----- (0000F978) --------------------------------------------------------
// attributes: thunk
void sub_F978()
{
  __asm { BX              R1 }
}

//----- (0000F980) --------------------------------------------------------
void __fastcall sub_F980(int a1)
{
  sub_F684(0);
  MEMORY[0x2101E6C0](a1);
  sub_F684(1);
}

//----- (0000F99C) --------------------------------------------------------
// attributes: thunk
void sub_F99C()
{
  __asm { BX              R1 }
}

//----- (0000F9A4) --------------------------------------------------------
int __fastcall sub_F9A4(int a1)
{
  int v1; // r4
  int v2; // r0

  v1 = a1;
  if ( a1 == 1 )
  {
    v2 = sub_11B94();
    if ( v2 == 3 || v2 == 2 || v2 == 12 || v2 == 15 )
      v1 = 0;
  }
  return loc_7E0(v1);
}

//----- (0000F9CE) --------------------------------------------------------
// attributes: thunk
void sub_F9CE()
{
  __asm { BX              R1 }
}

//----- (0000F9D6) --------------------------------------------------------
// attributes: thunk
void sub_F9D6()
{
  __asm { BX              R1 }
}

//----- (0000F9DE) --------------------------------------------------------
int sub_F9DE()
{
  int result; // r0

  _R4 = __get_CPSR();
  __disable_irq();
  result = loc_7EC();
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}

//----- (0000F9F4) --------------------------------------------------------
// attributes: thunk
void sub_F9F4()
{
  __asm { BX              R2 }
}

//----- (0000F9FC) --------------------------------------------------------
// attributes: thunk
void sub_F9FC()
{
  __asm { BX              R2 }
}

//----- (0000FA04) --------------------------------------------------------
// attributes: thunk
void sub_FA04()
{
  __asm { BX              R1 }
}

//----- (0000FA0C) --------------------------------------------------------
// attributes: thunk
void sub_FA0C()
{
  __asm { BX              R2 }
}

//----- (0000FA14) --------------------------------------------------------
int sub_FA14()
{
  int v0; // r1
  int v1; // r2
  int v2; // r3

  loc_884();
  return sub_108CC(1, v0, v1, v2);
}
// FA20: variable 'v0' is possibly undefined
// FA20: variable 'v1' is possibly undefined
// FA20: variable 'v2' is possibly undefined

//----- (0000FA36) --------------------------------------------------------
// attributes: thunk
void sub_FA36()
{
  __asm { BX              R1 }
}

//----- (0000FA48) --------------------------------------------------------
int __fastcall sub_FA48(char *a1)
{
  int v1; // r6
  int result; // r0
  int v8; // [sp+0h] [bp-Ch] BYREF
  char *v9; // [sp+8h] [bp-4h]

  v9 = a1;
  v1 = sub_1584((unsigned __int8 *)0x46176A54) + 19;
  result = loc_730();
  if ( result )
  {
    _R4 = __get_CPSR();
    __disable_irq();
    loc_10C(0, 4096, loc_684);
    sub_141A((_BYTE *)(loc_684 + v1), v9, 0x17u);
    loc_11C(0, 1);
    loc_118(0, 4096, loc_684);
    if ( MEMORY[0x20003EE8] )
      loc_10C(0, 1, &v8);
    __asm { MSR.W           PRIMASK, R4 }
    sub_734();
    return 1;
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000FAC4) --------------------------------------------------------
int __fastcall sub_FAC4(char *a1)
{
  int result; // r0
  int v7; // [sp+0h] [bp-Ch]
  _BYTE v8[4]; // [sp+4h] [bp-8h] BYREF
  char *v9; // [sp+8h] [bp-4h]

  v9 = a1;
  v7 = sub_1584((unsigned __int8 *)0x46176A54);
  result = loc_730();
  if ( result )
  {
    _R4 = __get_CPSR();
    __disable_irq();
    loc_10C(0, 4096, loc_684);
    sub_141A((_BYTE *)(loc_684 + v7), v9, 5u);
    loc_11C(0, 1);
    loc_118(0, 4096, loc_684);
    if ( MEMORY[0x20003EE8] )
      loc_10C(0, 1, v8);
    __asm { MSR.W           PRIMASK, R4 }
    sub_734();
    return 1;
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000FB3C) --------------------------------------------------------
int __fastcall sub_FB3C(char *a1)
{
  int v1; // r6
  int result; // r0
  int v8; // [sp+0h] [bp-Ch] BYREF
  char *v9; // [sp+8h] [bp-4h]

  v9 = a1;
  v1 = sub_1584((unsigned __int8 *)0x46176A54) + 5;
  result = loc_730();
  if ( result )
  {
    _R4 = __get_CPSR();
    __disable_irq();
    loc_10C(0, 4096, loc_684);
    sub_141A((_BYTE *)(loc_684 + v1), v9, 0xEu);
    loc_11C(0, 1);
    loc_118(0, 4096, loc_684);
    if ( MEMORY[0x20003EE8] )
      loc_10C(0, 1, &v8);
    __asm { MSR.W           PRIMASK, R4 }
    sub_734();
    return 1;
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000FBB8) --------------------------------------------------------
int __fastcall sub_FBB8(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r5
  int v15; // [sp+4h] [bp-20h]
  int v16; // [sp+4h] [bp-20h]
  int v17; // [sp+4h] [bp-20h]
  unsigned int CPSR; // [sp+18h] [bp-Ch]
  _BYTE v19[8]; // [sp+1Ch] [bp-8h] BYREF

  result = loc_730();
  if ( result )
  {
    CPSR = __get_CPSR();
    __disable_irq();
    loc_10C(0, 4096, loc_684);
    v3 = sub_1584((unsigned __int8 *)(12 * MEMORY[0x23006807]
                                    + 1175939625
                                    + 4 * (*(unsigned __int8 *)(49 * MEMORY[0x23006807] + 0x47886803) ^ 1)
                                    + 56));
    if ( a1 << 31 )
    {
      v15 = sub_1584((unsigned __int8 *)0x46176A2C);
      v4 = sub_1584((unsigned __int8 *)0x46176A30);
      loc_110(v3 + v15, v4 - v15, loc_684 + v15);
    }
    if ( (a1 & 2) != 0 )
    {
      v16 = sub_1584((unsigned __int8 *)0x46176A30);
      v5 = sub_1584((unsigned __int8 *)0x46176A34);
      loc_110(v3 + v16, v5 - v16, loc_684 + v16);
    }
    if ( (a1 & 4) != 0 )
    {
      v17 = sub_1584((unsigned __int8 *)0x46176A34);
      v6 = sub_1584((unsigned __int8 *)0x46176A54);
      loc_110(v3 + v17, v6 - v17, loc_684 + v17);
    }
    if ( (a1 & 8) != 0 )
    {
      v7 = sub_1584((unsigned __int8 *)0x46176A54);
      v8 = sub_1584((unsigned __int8 *)0x46176A58);
      loc_110(v3 + v7, v8 - v7, loc_684 + v7);
    }
    loc_11C(0, 1);
    v9 = loc_118(0, 4096, loc_684);
    if ( MEMORY[0x20003EE8] )
      loc_10C(0, 1, v19);
    _R1 = CPSR;
    __asm { MSR.W           PRIMASK, R1 }
    sub_734();
    return v9;
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000FCF4) --------------------------------------------------------
void sub_FCF4()
{
  __asm { BX              R2 }
}

//----- (0000FCFE) --------------------------------------------------------
int sub_FCFE()
{
  loc_798();
  return 1;
}

//----- (0000FD0C) --------------------------------------------------------
int sub_FD0C()
{
  return loc_79C();
}

//----- (0000FD1C) --------------------------------------------------------
int __fastcall sub_FD1C(int a1, int a2, int a3)
{
  MEMORY[0xD3013A10]();
  return loc_78C(a1, a2, a3);
}

//----- (0000FD3C) --------------------------------------------------------
_DWORD *__fastcall sub_FD3C(unsigned int *a1, _DWORD *a2)
{
  int v3; // r4
  unsigned int v4; // r6
  unsigned int v5; // r0
  unsigned int v6; // r0
  _DWORD *result; // r0
  int v8; // [sp+0h] [bp-Ch]

  v3 = MEMORY[0x23006807];
  v8 = *(unsigned __int8 *)(49 * MEMORY[0x23006807] + 0x47886803) ^ 1;
  if ( a1 )
  {
    v4 = loc_134();
    v5 = sub_1584((unsigned __int8 *)(12 * v3 + 1175939625 + 4 * v8 + 56)) & 0x7FFFF;
    *a1 = v5;
    if ( v5 < v4 )
      v6 = v5 + 0x80000 - v4;
    else
      v6 = v5 - v4;
    *a1 = v6 + 0x10000000;
  }
  result = a2;
  if ( a2 )
  {
    *a2 = *(unsigned __int8 *)(12 * v3 + 0x46176A69) << 12;
    return a2;
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000FDB0) --------------------------------------------------------
int __fastcall sub_FDB0(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int result; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r0
  unsigned int CPSR; // [sp+0h] [bp-Ch]
  int v17; // [sp+4h] [bp-8h]
  int v18; // [sp+8h] [bp-4h] BYREF

  v18 = a4;
  LOBYTE(v4) = a2;
  v5 = a1;
  if ( 2 * a1 > (unsigned int)MEMORY[0x46176A60] || !a2 )
    return 0;
  v17 = sub_1584((unsigned __int8 *)(12 * MEMORY[0x23006807]
                                   + 1175939625
                                   + 4 * (*(unsigned __int8 *)(49 * MEMORY[0x23006807] + 0x47886803) ^ 1)
                                   + 56));
  v6 = 1;
  result = loc_730();
  if ( result )
  {
    CPSR = __get_CPSR();
    __disable_irq();
    do
    {
      v8 = v6 & loc_110((v5 << 12) + v17, 16 * (_DWORD)sub_100, loc_684);
      v9 = sub_1584((unsigned __int8 *)0x46176A5C);
      loc_11C(v9 + (v5 << 12), 1);
      v10 = sub_1584((unsigned __int8 *)0x46176A5C);
      v6 = v8 & loc_118(v10 + (v5 << 12), 16 * (_DWORD)sub_100, loc_684, 1);
      if ( MEMORY[0x20003EE8] )
        loc_10C(0, 1, &v18);
      v5 = (unsigned __int8)(v5 + 1);
      v4 = (unsigned __int8)(v4 - 1);
    }
    while ( v4 );
    _R0 = CPSR;
    __asm { MSR.W           PRIMASK, R0 }
    sub_734();
    return v6;
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000FEA0) --------------------------------------------------------
int __fastcall sub_FEA0(int a1, int a2, char a3, char a4)
{
  MEMORY[0x50001070] = a1;
  MEMORY[0x50001074] = a2;
  MEMORY[0x50001088] = a3;
  MEMORY[0x50001089] = a4;
  return 1342181504;
}

//----- (0000FEB8) --------------------------------------------------------
// attributes: thunk
void sub_FEB8()
{
  JUMPOUT(0x26002500);
}
// FEBE: control flows out of bounds to 26002500

//----- (0000FEC0) --------------------------------------------------------
int __fastcall sub_FEC0(int a1)
{
  if ( (a1 & 2) != 0 )
    sub_F894();
  return MEMORY[0xD3000752](a1);
}

//----- (0000FED8) --------------------------------------------------------
// attributes: thunk
void sub_FED8()
{
  JUMPOUT(0xD500C130);
}
// FEDE: control flows out of bounds to D500C130

//----- (0000FEE0) --------------------------------------------------------
// attributes: thunk
void sub_FEE0()
{
  JUMPOUT(0x4770600A);
}
// FEE6: control flows out of bounds to 4770600A

//----- (0000FF60) --------------------------------------------------------
// attributes: thunk
void __fastcall sub_FF60(int a1)
{
  JUMPOUT(0xD89CDF62);
}
// FF66: control flows out of bounds to D89CDF62

//----- (0000FF70) --------------------------------------------------------
// attributes: thunk
void sub_FF70()
{
  __asm { BX              R3 }
}

//----- (0000FF78) --------------------------------------------------------
// attributes: thunk
void sub_FF78(void)
{
  JUMPOUT(0xD3013A10);
}
// FF7E: control flows out of bounds to D3013A10

//----- (0000FF8C) --------------------------------------------------------
int __fastcall sub_FF8C(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v5; // r1
  int result; // r0
  unsigned int v7; // r0

  v5 = MEMORY[0x46176A60] << 12;
  if ( !a3 || a1 >= v5 )
    return 0;
  if ( a1 + a2 > v5 )
    a2 = v5 - a1;
  v7 = sub_1584((unsigned __int8 *)0x46176A5C) + a1;
  _R4 = __get_CPSR();
  __disable_irq();
  result = loc_118(v7, a2, a3, 0);
  __asm { MSR.W           PRIMASK, R4 }
  return result;
}

//----- (0000FFD4) --------------------------------------------------------
int __fastcall sub_FFD4(int a1)
{
  int v2; // r1

  loc_214(127, 1);
  if ( a1 )
    v2 = 19;
  else
    v2 = 18;
  return loc_214(84, v2);
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0000FFF8) --------------------------------------------------------
int __fastcall sub_FFF8(int a1, int a2)
{
  loc_470(a2 != 0);
  sub_FFD4(1);
  loc_214(127, 1);
  loc_214(0, (a1 - 2400) & 0x7F);
  loc_37C(a2 == 1);
  MEMORY[0x50012002] |= 1u;
  MEMORY[0x50012002] &= ~2u;
  MEMORY[0x50012040] = MEMORY[0x50012040] & 0xFC | 1;
  MEMORY[0x20003E9C] = 1;
  return 536886940;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (00010074) --------------------------------------------------------
int __fastcall sub_10074(unsigned int a1)
{
  char v1; // r1

  v1 = 0;
  if ( a1 <= 6 )
    v1 = a1 | 0x10;
  MEMORY[0x50012D01] = v1;
  return 1342254336;
}

//----- (000100A0) --------------------------------------------------------
int sub_100A0()
{
  int v0; // r5

  v0 = 0;
  if ( MEMORY[0x20003E9C] == 1 )
  {
    if ( (MEMORY[0x50012040] & 2) != 0 )
      v0 = MEMORY[0x50012046];
    else
      v0 = MEMORY[0x50012044];
    MEMORY[0x50012000] |= 2u;
    loc_214(127, 1);
    loc_214(87, MEMORY[0x20003E9F]);
  }
  else if ( MEMORY[0x20003E9C] == 2 )
  {
    MEMORY[0x50012C01] = MEMORY[0x20003E9D];
    MEMORY[0x50012C03] = MEMORY[0x20003E9E];
    MEMORY[0x50001079] = 4;
    loc_214(127, 1);
    loc_214(0, 128);
  }
  MEMORY[0x20003E9C] = 0;
  return v0;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (00010118) --------------------------------------------------------
int __fastcall sub_10118(int a1, unsigned int a2, char a3, int a4, int a5)
{
  int v7; // r0
  char v8; // r5
  int v10; // r0

  v7 = a5;
  if ( a5 )
    v7 = 1;
  loc_470(v7);
  sub_FFD4(0);
  MEMORY[0x5001200E] = 20;
  v8 = a2 - 96;
  if ( a1 == 1 )
  {
    loc_214(127, 1);
    loc_210(87, 536886943);
    if ( a2 == 2402 && MEMORY[0x20003EA1] )
      loc_214(87, (unsigned __int8)(MEMORY[0x20003E9F] - 32) | 0x80);
    loc_214(127, 1);
    loc_214(0, v8 & 0x7F);
    v10 = a5;
    if ( a5 != 1 )
      v10 = 0;
    loc_37C(v10);
    MEMORY[0x50012002] |= 1u;
    MEMORY[0x50012002] |= 2u;
    MEMORY[0x500120C0] = a3;
    MEMORY[0x500120C8] = 1;
    MEMORY[0x50012040] |= 2u;
    MEMORY[0x50012040] |= 1u;
  }
  else
  {
    if ( a1 != 2 )
      return 0;
    if ( a2 < 0x960 )
      v8 = 0;
    MEMORY[0x50001079] = -120;
    loc_214(127, 1);
    loc_214(0, v8 & 0x7F);
    MEMORY[0x20003E9D] = MEMORY[0x50012C01];
    MEMORY[0x20003E9E] = MEMORY[0x50012C03];
    MEMORY[0x50012C01] = 13;
    MEMORY[0x50012C03] = 0x80;
  }
  MEMORY[0x20003E9C] = a1;
  return 1;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (0001022C) --------------------------------------------------------
int __fastcall apply_system_mode_register_script(int script_selector)
{
  int result; // r0

  result = sub_11B94();
  if ( result == 15 && (result = script_selector - 1, (unsigned int)(script_selector - 1) <= 4) )
  {
    result = 0;
    MEMORY[0x20003EA4] = 0;
  }
  else
  {
    MEMORY[0x20003EA4] = script_selector;
  }
  MEMORY[0x20003EA4] = script_selector;
  switch ( (char)script_selector )
  {
    case 0:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      loc_214(127, 0);                          // case selector 0: highspeed/base system-mode script. Verified in assembly: 0x30=0x00, 0x34=0xA3, 0x53=0x06, 0x61=0x8A, 0x62=0x27, 0x64=0xCC, 0x65=0xFF, default tail 0x66=0x2B, 0x6D=0x1D, 0x73=0x09.
      loc_214(48, 0);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 6);
      loc_214(97, 138);
      loc_214(98, 39);
      loc_214(100, 204);
      loc_214(101, 255);
      if ( !MEMORY[0x20003EA4] )
        goto LABEL_20;
      switch ( MEMORY[0x20003EA4] )
      {
        case 6u:
          loc_214(102, 42);
          loc_214(109, 26);
          return loc_214(115, 9);
        case 7u:
          loc_214(102, 41);
LABEL_24:
          loc_214(109, 24);
          return loc_214(115, 9);
        case 8u:
          loc_214(102, 39);
          goto LABEL_24;
        case 9u:
          loc_214(102, 36);
          loc_214(109, 27);
          break;
        case 0xAu:
          loc_214(102, 35);
          loc_214(109, 25);
          break;
      }
      return loc_214(115, 9);
    case 1:
      loc_214(127, 0);
      loc_214(48, 2);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 38);
      loc_214(97, 138);
      loc_214(98, 33);
      loc_214(100, 204);
      loc_214(101, 255);
      loc_214(102, 73);
      goto LABEL_12;
    case 2:
      loc_214(127, 0);                          // case selector 2: competitive system-mode script. Verified in assembly: 0x30=0x02, 0x34=0xA3, 0x53=0x26, 0x61=0x8A, 0x62=0x21, 0x64=0xCC, 0x65=0xFF, 0x66=0x4B, 0x6D=0x1C, 0x73=0x49.
      loc_214(48, 2);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 38);
      loc_214(97, 138);
      loc_214(98, 33);
      loc_214(100, 204);
      loc_214(101, 255);
      loc_214(102, 75);
      goto LABEL_12;
    case 3:
      loc_214(127, 0);
      loc_214(48, 2);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 38);
      loc_214(97, 138);
      loc_214(98, 33);
      loc_214(100, 204);
      loc_214(101, 255);
      loc_214(102, 77);
      loc_214(109);
      return loc_214(115, 73);
    case 4:
      loc_214(127, 0);                          // case selector 4: competitive+ / ultra system-mode script. Verified in assembly: 0x30=0x02, 0x34=0xA3, 0x53=0x26, 0x61=0x8A, 0x62=0x21, 0x64=0xCC, 0x65=0xFF, 0x66=0x50, 0x6D=0x1C, 0x73=0x49.
      loc_214(48, 2);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 38);
      loc_214(97, 138);
      loc_214(98, 33);
      loc_214(100, 204);
      loc_214(101, 255);
      loc_214(102, 80);
      goto LABEL_12;
    case 5:
      loc_214(127, 0);                          // case selector 5 in apply_system_mode_register_script(): stronger-than-competitive script with 0x53=0x26, 0x66=0x55, 0x6D=0x1C, 0x73=0x49. This path is not used by the visible 0/1/2 system-mode mapping in current callers.
      loc_214(48, 2);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 38);
      loc_214(97, 138);
      loc_214(98, 39);
      loc_214(100, 205);
      loc_214(101, 63);
      loc_214(102, 85);
LABEL_12:
      loc_214(109);
      return loc_214(115, 73);
    case 11:
      loc_214(127, 0);
      loc_214(48, 0);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 6);
      loc_214(97, 138);
      loc_214(98, 39);
      loc_214(100, 204);
      loc_214(101, 223);
      goto LABEL_20;
    case 12:
      loc_214(127, 0);
      loc_214(48, 0);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 6);
      loc_214(97, 138);
      loc_214(98, 39);
      loc_214(100, 204);
      loc_214(101, 207);
      goto LABEL_20;
    case 13:
      loc_214(127, 0);
      loc_214(48, 0);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 6);
      loc_214(97, 138);
      loc_214(98, 39);
      loc_214(100, 204);
      loc_214(101, 199);
      goto LABEL_20;
    case 14:
      loc_214(127, 0);
      loc_214(48, 0);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 6);
      loc_214(97, 138);
      loc_214(98, 39);
      loc_214(100, 204);
      loc_214(101, 195);
      goto LABEL_20;
    case 15:
      loc_214(127, 0);
      loc_214(48, 0);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 6);
      loc_214(97, 138);
      goto LABEL_34;
    case 16:
      loc_214(127, 0);
      loc_214(48, 0);
      loc_214(52, 163);
      loc_214(127, 1);
      loc_214(83, 6);
      loc_214(97, 136);
LABEL_34:
      loc_214(98, 39);
      loc_214(100, 204);
      loc_214(101, 193);
LABEL_20:
      loc_214(102, 43);
      loc_214(109, 29);
      return loc_214(115, 9);
    default:
      return result;
  }
}

//----- (00010680) --------------------------------------------------------
int __fastcall sub_10680(int a1, int a2, int a3, int a4)
{
  int v10; // [sp+0h] [bp-4h] BYREF

  v10 = a4;
  _R4 = __get_CPSR();
  __disable_irq();
  loc_214(127, 1);
  loc_210(126, &v10);
  __asm { MSR.W           PRIMASK, R4 }
  return v10 & 0x1F;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (000106AA) --------------------------------------------------------
// attributes: thunk
void sub_106AA()
{
  __asm { BX              R2 }
}

//----- (000106DC) --------------------------------------------------------
int __fastcall sub_106DC(_BYTE *a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r0
  unsigned int v10; // [sp+0h] [bp-Ch] BYREF
  _DWORD v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[1] = a4;
  v11[0] = 0;
  sub_7B0();
  v6 = v5;
  MEMORY[0x30C12690] = 12;
  v7 = sub_11BA0();
  nullsub_1(v7);
  v10 = 0;
  LOBYTE(v10) = *a1 + a1[6] + a1[14] + a1[15];
  *(_WORD *)((char *)&v10 + 1) = (unsigned __int8)(a1[3] - a1[4] - a1[9] - a1[10]);
  BYTE2(v10) = a1[2] * a1[7] * a1[12] * a1[13];
  HIBYTE(v10) = a1[1] ^ a1[5] ^ a1[8] ^ a1[11];
  sub_3D34(v11);
  v8 = HIBYTE(v11[0]);
  if ( !(HIBYTE(v11[0]) >> 6) )
    v8 = HIBYTE(v11[0]) | 0x40;
  HIBYTE(v10) |= (unsigned __int8)((v8 ^ 0xFFu) >> 6) << 6;
  MEMORY[0x46A2182C]();
  MEMORY[0x20003EA2] = 1;
  if ( a1 && sub_13B4((unsigned int *)0x30C1274D, &v10, 4u) )
  {
    while ( 1 )
      ;
  }
  return v6;
}
// 106F2: variable 'v5' is possibly undefined
// 1: using guessed type _BYTE byte_1[203];
// 7574: using guessed type int __fastcall nullsub_1(_DWORD);

//----- (000107AC) --------------------------------------------------------
#error "107D4: call analysis failed (funcsize=22)"

//----- (000107D8) --------------------------------------------------------
// attributes: thunk
void sub_107D8()
{
  JUMPOUT(0x465D4654);
}
// 107DE: control flows out of bounds to 465D4654

//----- (000107E0) --------------------------------------------------------
int sub_107E0()
{
  return MEMORY[0x18243808]() * *(_DWORD *)(loc_13C + 4);
}

//----- (000107F6) --------------------------------------------------------
// attributes: thunk
void sub_107F6()
{
  __asm { BX              R1 }
}

//----- (000107FE) --------------------------------------------------------
// attributes: thunk
void sub_107FE()
{
  __asm { BX              R0 }
}

//----- (00010808) --------------------------------------------------------
int __fastcall sub_10808(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  loc_214(127, 1);
  loc_938(7);
  loc_934(0);
  loc_214(9, 0);
  loc_214(9, 24);
  do
  {
    do
      loc_210(9, &v5);
    while ( (v5 & 4) == 0 );
  }
  while ( (v5 & 2) != 0 );
  if ( MEMORY[0x20003EA5] )
  {
    loc_214(127, 2);
    loc_218(64, 8);
  }
  loc_214(127, 1);
  loc_214(9, 0);
  loc_214(9, 16);
  do
  {
    do
      loc_210(9, &v5);
    while ( (v5 & 4) == 0 );
  }
  while ( (v5 & 2) != 0 );
  if ( MEMORY[0x20003EA5] )
  {
    loc_214(127, 2);
    loc_218(64, 0, 8);
  }
  loc_214(127, 1);
  loc_214(9, 0);
  loc_934(1);
  return loc_938(0);
}
// 1: using guessed type _BYTE byte_1[203];

//----- (000108CC) --------------------------------------------------------
int __fastcall sub_108CC(int a1, int a2, int a3, int a4)
{
  int result; // r0
  char v7; // r1
  char v8; // r0
  int v13; // [sp+0h] [bp-8h] BYREF
  int v14; // [sp+4h] [bp-4h] BYREF

  v13 = a3;
  v14 = a4;
  result = 536886940;
  if ( MEMORY[0x20003EA3] != a1 )
  {
    MEMORY[0x20003EA3] = a1;
    _R4 = __get_CPSR();
    __disable_irq();
    loc_214(127, 1);
    loc_210(40, &v13);
    if ( a1 )
    {
      LOBYTE(v14) = 0;
      do
        loc_210(86, &v14);
      while ( !((unsigned __int8)v14 << 31) );
      v7 = 14;
      v8 = 32 * ((unsigned __int8)v13 >> 5) + 1;
    }
    else
    {
      v7 = 4;
      v8 = 32 * ((unsigned __int8)v13 >> 5) + 3;
    }
    LOBYTE(v13) = v8 | v7;
    result = loc_214(40, (unsigned __int8)(v8 | v7));
    __asm { MSR.W           PRIMASK, R4 }
  }
  return result;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (00010944) --------------------------------------------------------
unsigned __int8 *__fastcall copy_amb_payload_bytes(read_amb_cmd_t *cmd, unsigned __int8 *out_buf)
{
  unsigned int i; // r3

  for ( i = 0; cmd->length > i; i = (unsigned __int8)(i + 1) )
    out_buf[i] = *(_BYTE *)((LOBYTE(cmd->address)
                           | (BYTE1(cmd->address) << 8)
                           | (BYTE2(cmd->address) << 16)
                           | (HIBYTE(cmd->address) << 24))
                          + i);                 // Command bytes 0..3 form an absolute address and byte 4 is the requested length; the handler copies that raw memory window into the response buffer.
  return (unsigned __int8 *)cmd;
}

//----- (00010978) --------------------------------------------------------
int __fastcall sub_10978(_BYTE *a1)
{
  _BYTE *v2; // r0

  v2 = (_BYTE *)sub_A860();
  sub_4718(v2, a1);
  return sub_A98C(3, 0, 5);
}

//----- (00010996) --------------------------------------------------------
int __fastcall sub_10996(int a1, read_amb_cmd_t *a2)
{
  _BYTE *v3; // r5
  _DWORD v5[9]; // [sp+0h] [bp-24h] BYREF

  memset(v5, 0, 32);
  v3 = (_BYTE *)sub_A860();
  copy_amb_payload_bytes(a2, (unsigned __int8 *)v5);
  sub_141A(v3, (char *)v5, a2->length);
  return sub_A98C(3, 0, a2->length);
}

//----- (000109D8) --------------------------------------------------------
void sub_109D8()
{
  sub_F624();
}

//----- (00010A14) --------------------------------------------------------
unsigned __int8 *__fastcall copy_reg_window_bytes(read_reg_cmd_t *cmd, unsigned __int8 *out_buf)
{
  unsigned int v2; // r2
  int v3; // r3
  unsigned int v4; // r2

  v2 = 0;
  if ( MEMORY[0x2000388C] )
  {                                             // Byte 0 selects a 5-byte region descriptor in the static table at 0x10014740, byte 1 is an intra-region offset, and byte 2 is the length to copy.
    while ( *(unsigned __int8 *)(5 * v2 + 0x10014740) != cmd->region_id )
    {
      v2 = (unsigned __int8)(v2 + 1);
      if ( v2 >= MEMORY[0x2000388C] )
        goto LABEL_5;
    }
    v3 = *(unsigned __int8 *)(5 * v2 + 0x10014741)
       | (*(unsigned __int8 *)(5 * v2 + 0x10014742) << 8)
       | (*(unsigned __int8 *)(5 * v2 + 0x10014743) << 16)
       | (*(unsigned __int8 *)(5 * v2 + 0x10014744) << 24);
  }
  else
  {
LABEL_5:
    v3 = 0;
  }
  v4 = 0;
  if ( v3 && cmd->length )
  {
    do
    {
      out_buf[v4] = *(_BYTE *)(cmd->offset + v3 + v4);
      v4 = (unsigned __int8)(v4 + 1);
    }
    while ( cmd->length > v4 );
  }
  return &cmd->region_id;
}

//----- (00010A84) --------------------------------------------------------
int __fastcall sub_10A84(_BYTE *a1)
{
  _BYTE *v2; // r0

  v2 = (_BYTE *)sub_A860();
  sub_4718(v2, a1);
  return sub_A98C(1, 0, 5);
}

//----- (00010AA2) --------------------------------------------------------
int __fastcall sub_10AA2(int a1, read_reg_cmd_t *a2)
{
  _BYTE *v3; // r5
  _DWORD v5[9]; // [sp+0h] [bp-24h] BYREF

  memset(v5, 0, 32);
  v3 = (_BYTE *)sub_A860();
  copy_reg_window_bytes(a2, (unsigned __int8 *)v5);
  sub_141A(v3, (char *)v5, a2->length);
  return sub_A98C(1, 0, a2->length);
}

//----- (00010AE4) --------------------------------------------------------
int advance_profile_switch_state_machine()
{
  int result; // r0
  int v1; // r0
  int v2; // r0

  if ( MEMORY[0x20003DDC] )
  {
    result = 536886744;
    if ( MEMORY[0x20003DD8] )
      MEMORY[0x20003DD8] = 0;
  }
  else
  {
    v1 = MEMORY[0x20003DD9];
    if ( MEMORY[0x20003DD9] )
    {
      MEMORY[0x20003DD9] = 0;
      sub_13FA4(v1);
      sub_F63C(2, 1);
      sub_F63C(3, 1);
      MEMORY[0x20004921] = 1;
      sub_FF8C(0x2000, 1, 536889633);
      MEMORY[0x20003DDA] = 1;
      clear_pending_vendor_slot(21);
      sub_C290(1);
    }
    v2 = MEMORY[0x20003DDA];
    if ( MEMORY[0x20003DDA] )
    {
      MEMORY[0x20003DDA] = 0;
      sub_13FA4(v2);
      sub_11994(MEMORY[0x20004921]);
      sub_119F4(MEMORY[0x20004921]);
      MEMORY[0x20003DDB] = 1;
    }
    else
    {
      result = MEMORY[0x20003DDB];
      if ( !MEMORY[0x20003DDB] )
        return result;
    }
    MEMORY[0x20003DDB] = 0;
    ++MEMORY[0x20004921];                       // Profile index is cycled through 1..3; once it wraps, the full active-profile configuration is applied again and the UI/event side is notified.
    result = MEMORY[0x20004921];
    if ( MEMORY[0x20004921] <= 3u )
    {
      MEMORY[0x20003DDA] = 1;
    }
    else
    {
      MEMORY[0x20004921] = 1;
      MEMORY[0x20003DDC] = 1;
      MEMORY[0x20003DDD] = 0;
      apply_active_profile_configuration();
      clear_pending_vendor_slot(21);
      return sub_C290(0);
    }
  }
  return result;
}
// BEA8: using guessed type int __fastcall sub_BEA8(_DWORD);
// C290: using guessed type int __fastcall sub_C290(_DWORD);
// F63C: using guessed type int __fastcall sub_F63C(_DWORD, _DWORD);
// FF8C: using guessed type int __fastcall sub_FF8C(_DWORD, _DWORD, _DWORD);
// 11994: using guessed type int __fastcall sub_11994(_DWORD);
// 119F4: using guessed type int __fastcall sub_119F4(_DWORD);
// 13FA4: using guessed type int __fastcall sub_13FA4(_DWORD);

//----- (00010B90) --------------------------------------------------------
void sub_10B90()
{
  int v0; // r0
  int v1; // r5

  sub_F790();
  v1 = v0;
  sub_F684(0);
  _R4 = __get_CPSR();
  __disable_irq();
  sub_10074(7u);
  __asm { MSR.W           PRIMASK, R4 }
  sub_F684(v1);
}
// 10B98: variable 'v0' is possibly undefined

//----- (00010BB8) --------------------------------------------------------
void __fastcall sub_10BB8(int a1)
{
  int v2; // r0
  int v3; // r5
  int v5; // r0

  sub_F790();
  v3 = v2;
  sub_F684(0);
  _R4 = __get_CPSR();
  __disable_irq();
  if ( a1 )
    v5 = 16;
  else
    v5 = 0;
  apply_system_mode_register_script(v5);
  __asm { MSR.W           PRIMASK, R4 }
  sub_F684(v3);
}
// 10BC0: variable 'v2' is possibly undefined

//----- (00010BE8) --------------------------------------------------------
unsigned __int8 *__fastcall sub_10BE8(unsigned __int8 *result)
{
  unsigned int v1; // r2

  v1 = 0;
  if ( MEMORY[0x20003E74] )
  {
    while ( *(unsigned __int8 *)(5 * v1 + 0x10014C5C) != *result
         || !(*(unsigned __int8 *)(5 * v1 + 0x10014C5D)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014C5E) << 8)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014C5F) << 16)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014C60) << 24)) )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x20003E74] )
        return result;
    }
    return (unsigned __int8 *)((int (__fastcall *)(int))(*(unsigned __int8 *)(5 * v1 + 0x10014C5D)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014C5E) << 8)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014C5F) << 16)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014C60) << 24)))(*((_DWORD *)result + 1) + 1);
  }
  return result;
}

//----- (00010C5C) --------------------------------------------------------
int __fastcall sub_10C5C(int result)
{
  int v1; // r5
  unsigned int v2; // r3

  v1 = *(unsigned __int8 *)result;
  v2 = 0;
  if ( MEMORY[0x20003E74] )
  {
    while ( *(unsigned __int8 *)(5 * v2 + 0x10014C5C) != v1
         || !(*(unsigned __int8 *)(5 * v2 + 0x10014C5D)
            | (*(unsigned __int8 *)(5 * v2 + 0x10014C5E) << 8)
            | (*(unsigned __int8 *)(5 * v2 + 0x10014C5F) << 16)
            | (*(unsigned __int8 *)(5 * v2 + 0x10014C60) << 24)) )
    {
      v2 = (unsigned __int8)(v2 + 1);
      if ( v2 >= MEMORY[0x20003E74] )
        return result;
    }
    result = **(unsigned __int8 **)(result + 4);
    if ( result != 1 )
    {
      result = 1;
      *(_BYTE *)(v1 + 536890063) = 1;
    }
  }
  return result;
}

//----- (00010CCC) --------------------------------------------------------
int __fastcall sub_10CCC(int a1)
{
  char v2[68]; // [sp+0h] [bp-44h] BYREF

  sub_A064(v2, (unsigned __int8 *)(a1 + 1));
  sub_4BC8(193, v2, (unsigned __int8)(v2[4] + 7));
  MEMORY[0x20003E63] = 1;
  return 1;
}

//----- (00010CF8) --------------------------------------------------------
unsigned __int8 *__fastcall sub_10CF8(unsigned __int8 *result)
{
  unsigned int v1; // r1

  v1 = 0;
  if ( MEMORY[0x2000389C] )
  {
    while ( *(unsigned __int8 *)(8 * v1 + 0x100148EC) != *result || !*(_DWORD *)(8 * v1 + 0x100148F0) )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x2000389C] )
        return result;
    }
    return (unsigned __int8 *)(*(int (__fastcall **)(int))(8 * v1 + 0x100148F0))(result[2]
                                                                               | (result[3] << 8)
                                                                               | (result[4] << 16) | (result[5] << 24));
  }
  return result;
}

//----- (00010D68) --------------------------------------------------------
int __fastcall sub_10D68(char *a1, int a2, int a3, int a4)
{
  int v5; // r4
  unsigned int v6; // r6
  int v8; // [sp+0h] [bp-4h] BYREF

  v8 = a4;
  v5 = (unsigned __int8)*a1;
  v6 = 13;
  if ( (unsigned __int8)a1[1] == 240 )
    return sub_712C((char *)0x20004B6E);
  if ( !*a1 )
    sub_1532((_WORD *)0x20004B6E, 0x40u, 0xFFu);
  if ( (unsigned int)(13 * (v5 + 1)) > 0x40 )
    v6 = (unsigned __int8)(64 - 13 * v5);
  sub_141A((_BYTE *)(13 * v5 + 536890222), a1 + 1, v6);
  LOBYTE(v8) = 0;
  BYTE1(v8) = v5;
  sub_4BC8(192, (char *)&v8, 2u);
  MEMORY[0x20003E62] = 1;
  return 1;
}

//----- (00010DD0) --------------------------------------------------------
int __fastcall sub_10DD0(char *a1)
{
  int v2; // r4
  unsigned int v3; // r6
  char v5[4]; // [sp+4h] [bp-4h] BYREF

  v2 = (unsigned __int8)*a1;
  v3 = 13;
  if ( (unsigned __int8)a1[1] == 240 )
  {
    sub_1127C(536890222);
    return sub_11CF0(4, 268454115, 0x4000, 1, 1);
  }
  else
  {
    if ( !*a1 )
      sub_1532((_WORD *)0x20004B6E, 0x40u, 0xFFu);
    if ( (unsigned int)(13 * (v2 + 1)) > 0x11 )
      v3 = (unsigned __int8)(17 - 13 * v2);
    sub_141A((_BYTE *)(13 * v2 + 536890222), a1 + 1, v3);
    v5[0] = 0;
    v5[1] = v2;
    sub_4BC8(170, v5, 2u);
    MEMORY[0x20003E66] = 1;
    return 1;
  }
}

//----- (00010E54) --------------------------------------------------------
int (*sub_10E54())(void)
{
  return sub_D3C8();
}

//----- (00010E74) --------------------------------------------------------
int sub_10E74()
{
  int result; // r0
  int v1; // r1
  int v2; // r2
  int v3; // r3

  result = MEMORY[0x200037B0];
  if ( !MEMORY[0x200037B0] )
  {
    if ( MEMORY[0x200037BC] )
      MEMORY[0x200037BC](MEMORY[0x200037D4], 1);
    sub_D3E8(MEMORY[0x200037D4]);
    sub_108CC(1, v1, v2, v3);
    MEMORY[0xE000E280] = 2;
    MEMORY[0xE000E100] = 2;
    MEMORY[0x200037B0] = 1;
    return 2;
  }
  return result;
}
// 10E96: variable 'v1' is possibly undefined
// 10E96: variable 'v2' is possibly undefined
// 10E96: variable 'v3' is possibly undefined

//----- (00010EB8) --------------------------------------------------------
unsigned __int8 *__fastcall sub_10EB8(unsigned __int8 *result)
{
  unsigned int v1; // r2

  v1 = 0;
  if ( MEMORY[0x20003E94] )
  {
    while ( *(unsigned __int8 *)(5 * v1 + 0x10014D8F) != *result
         || !(*(unsigned __int8 *)(5 * v1 + 0x10014D90)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014D91) << 8)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014D92) << 16)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014D93) << 24)) )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x20003E94] )
        return result;
    }
    return (unsigned __int8 *)((int (__fastcall *)(int))(*(unsigned __int8 *)(5 * v1 + 0x10014D90)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014D91) << 8)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014D92) << 16)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014D93) << 24)))(result[1] | (result[2] << 8) | (result[3] << 16) | (result[4] << 24));
  }
  return result;
}

//----- (00010F44) --------------------------------------------------------
int __fastcall sub_10F44(_BYTE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v6; // r3
  _BYTE *v7; // r0
  unsigned int i; // r2
  char v9; // r7
  int v10; // r0
  int v11; // r0
  int v13; // [sp+0h] [bp-4h] BYREF

  v13 = a4;
  v6 = 0;
  LOBYTE(v13) = 0;
  *a2 = a1[1];
  v7 = a1 + 4;
  *(_DWORD *)(a2 + 1) = v7;
  if ( !a2 )
    goto LABEL_12;
  for ( i = 0; (unsigned __int8)a1[3] > i; v6 = (unsigned __int8)(v9 + v6) )
  {
    v9 = v7[i];
    i = (unsigned __int8)(i + 1);
  }
  if ( (unsigned __int8)a1[2] == v6 )
  {
LABEL_12:
    MEMORY[0x20003E95] = 0;
    return 1;
  }
  else
  {
    ++MEMORY[0x20003E95];
    if ( MEMORY[0x20003E95] < 3u )
    {
      LOBYTE(v13) = 2;
    }
    else
    {
      MEMORY[0x20003E95] = 0;
      LOBYTE(v13) = 1;
    }
    sub_4D0C(*a2, (char *)&v13, 1u);
    v10 = *a2;
    if ( v10 == 170 )
      v11 = 4;
    else
      v11 = v10 & 3;
    *(_BYTE *)(v11 + 536886882) = 1;
    return 0;
  }
}

//----- (00010FD4) --------------------------------------------------------
int __fastcall sub_10FD4(int result, int a2, int a3, int a4)
{
  MEMORY[0x200037C4] = result;
  MEMORY[0x200037C8] = a2;
  MEMORY[0x200037CC] = a3;
  MEMORY[0x200037D0] = a4;
  return result;
}

//----- (00010FEC) --------------------------------------------------------
int __fastcall sub_10FEC(_BYTE *a1)
{
  *a1 = 0;
  MEMORY[0x20003DEF] = 1;
  return sub_11808();
}

//----- (00011008) --------------------------------------------------------
int sub_11008()
{
  int result; // r0
  int v1; // r0

  result = MEMORY[0x200037B1];
  if ( MEMORY[0x200037B1] )
  {
    sub_108CC(0);
    v1 = sub_F684(0);
    sub_3C80(v1);
    sub_FEC0(2);
    MEMORY[0x200037B0] = 0;
    MEMORY[0x200037B1] = 0;
    return 0;
  }
  return result;
}
// 3C80: using guessed type int __fastcall sub_3C80(_DWORD);
// F684: using guessed type int __fastcall sub_F684(_DWORD);
// FEC0: using guessed type int __fastcall sub_FEC0(_DWORD);
// 108CC: using guessed type int __fastcall sub_108CC(_DWORD);

//----- (00011034) --------------------------------------------------------
int sub_11034()
{
  int result; // r0
  int v1; // r0

  result = MEMORY[0x200037B1];
  if ( !MEMORY[0x200037B1] )
  {
    v1 = sub_FED8(2);
    sub_3C80(v1);
    MEMORY[0x200037B1] = 1;
    return 1;
  }
  return result;
}
// 3C80: using guessed type int __fastcall sub_3C80(_DWORD);
// FED8: using guessed type int __fastcall sub_FED8(_DWORD);

//----- (00011054) --------------------------------------------------------
int sub_11054()
{
  MEMORY[0x200037BC] = 268489649;
  MEMORY[0x200037D4] = 2;
  MEMORY[0x200037B4] = 268498889;
  MEMORY[0x200037B8] = 536880177;
  MEMORY[0x200037C0] = 536880325;
  return 536885168;
}

//----- (000110AA) --------------------------------------------------------
_BYTE *__fastcall sub_110AA(_BYTE *result, int a2, int a3, int a4)
{
  int v4; // [sp+0h] [bp-4h] BYREF

  v4 = a4;
  if ( *result )
  {
    if ( *result != 2 )
      return result;
  }
  else if ( result[2] )
  {
    sub_118F4(193, result[1]);
  }
  else
  {
    LOBYTE(v4) = -2;
    sub_118F4(193, 0);
    sub_4BC8(193, (char *)&v4, 1u);
  }
  return (_BYTE *)sub_BBD8(193, 1);
}

//----- (000110EC) --------------------------------------------------------
int __fastcall sub_110EC(int a1, unsigned __int8 *a2)
{
  int result; // r0
  unsigned int v3; // r2

  result = 536885404;
  v3 = 0;
  if ( MEMORY[0x2000389D] )
  {
    while ( 1 )
    {
      result = 8 * v3;
      if ( *(unsigned __int8 *)(8 * v3 + 0x100149A4) == *a2 )
      {
        result = *(_DWORD *)(8 * v3 + 0x100149A8);
        if ( result )
          break;
      }
      v3 = (unsigned __int8)(v3 + 1);
      if ( v3 >= MEMORY[0x2000389D] )
        return result;
    }
    return (*(int (__fastcall **)(int))(8 * v3 + 0x100149A8))(a2[2] | (a2[3] << 8) | (a2[4] << 16) | (a2[5] << 24));
  }
  return result;
}

//----- (00011158) --------------------------------------------------------
unsigned __int8 *__fastcall sub_11158(unsigned __int8 *result)
{
  unsigned int v1; // r2

  v1 = 0;
  if ( MEMORY[0x20003E96] )
  {
    while ( *(unsigned __int8 *)(5 * v1 + 0x10014DA3) != *result
         || !(*(unsigned __int8 *)(5 * v1 + 0x10014DA4)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014DA5) << 8)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014DA6) << 16)
            | (*(unsigned __int8 *)(5 * v1 + 0x10014DA7) << 24)) )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x20003E96] )
        return result;
    }
    return (unsigned __int8 *)((int (__fastcall *)(int))(*(unsigned __int8 *)(5 * v1 + 0x10014DA4)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014DA5) << 8)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014DA6) << 16)
                                                       | (*(unsigned __int8 *)(5 * v1 + 0x10014DA7) << 24)))(result[1] | (result[2] << 8) | (result[3] << 16) | (result[4] << 24));
  }
  return result;
}

//----- (00011208) --------------------------------------------------------
int sub_11208()
{
  return MEMORY[0x20004192];
}

//----- (00011214) --------------------------------------------------------
char __fastcall sub_11214(char result)
{
  MEMORY[0x20003852] = result;
  return result;
}

//----- (00011220) --------------------------------------------------------
void sub_11220()
{
  sub_106AA();
}

//----- (0001123C) --------------------------------------------------------
int __fastcall sub_1123C(int a1)
{
  int result; // r0

  _R6 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( sub_F634(2074, 26, a1) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (0001127C) --------------------------------------------------------
int __fastcall sub_1127C(int a1)
{
  int result; // r0

  _R6 = __get_CPSR();
  __disable_irq();
  do
  {
    if ( sub_F634(2057, 17, a1) || (++MEMORY[0x20003E77], MEMORY[0x20003E77] >= 3u) )
      MEMORY[0x20003E77] = 0;
    result = MEMORY[0x20003E77];
  }
  while ( MEMORY[0x20003E77] );
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}

//----- (000112BC) --------------------------------------------------------
int sub_112BC()
{
  int result; // r0
  int v2; // r7
  __int64 v3; // r0
  __int64 v4; // r0
  int v5; // r7
  int v6; // r4
  int v7; // r0
  int v8; // r1
  __int64 v9; // r0
  __int64 v10; // r0
  int v11; // r7
  int v12; // r4
  int v13; // r0
  int v14; // r1
  int v15; // r4
  __int64 v16; // r0
  __int64 v17; // r0
  int v18; // r7
  int v19; // r0
  int v20; // r1
  int v21; // r7
  __int64 v25; // r0
  __int64 v26; // r0
  int v27; // r7
  int v28; // r4
  int v29; // r0
  int v30; // r1
  __int64 v31; // r0
  __int64 v32; // r0
  __int64 v34; // r0
  __int64 v35; // r0
  int v36; // [sp+0h] [bp-1Ch] BYREF
  int v37; // [sp+4h] [bp-18h] BYREF
  int v38; // [sp+8h] [bp-14h] BYREF
  char v39; // [sp+Ch] [bp-10h]
  unsigned __int8 v40; // [sp+10h] [bp-Ch]
  int v41; // [sp+14h] [bp-8h]
  char v42[4]; // [sp+18h] [bp-4h] BYREF

  v39 = 0;
  v40 = 0;
  v42[0] = 4;
  v37 = 0;
  v38 = 0;
  v36 = *(_DWORD *)"abcd|=";
  result = *(unsigned __int8 *)(*(_DWORD *)"|=" + 2);
  if ( *(_BYTE *)(*(_DWORD *)"|=" + 2) )
  {
    while ( 1 )
    {
      _R5 = __get_CPSR();
      __disable_irq();
      sub_13FA4(result);
      sub_ACE8(127, 0);
      sub_ACE8(9, 90);
      sub_3C5C(25);
      v39 &= 7u;
      sub_ACE8(127, 1);
      sub_3C5C(96);
      if ( v40 << 31 )
        break;
LABEL_17:
      sub_ACE8(127, 0);
      sub_ACE8(9, 0);
      __asm { MSR.W           PRIMASK, R5 }
      result = *(unsigned __int8 *)(*(_DWORD *)"|=" + 2);
      if ( !*(_BYTE *)(*(_DWORD *)"|=" + 2) )
        return result;
    }
    sub_3D04(v42, &v36, &v37);
    v2 = BYTE1(v37) & 2 | (2 * (unsigned __int8)v37);
    v41 = BYTE1(v37) & 1 | (2 * HIBYTE(v37)) | (BYTE2(v37) << 9);
    if ( get_lod_setting() )
    {
      if ( get_lod_setting() == 1 )
      {
        v25 = sub_1FD2(v2);
        v26 = sub_1FD8(v25, HIDWORD(v25), 858993459, 1072378675, v36);
        v27 = HIDWORD(v26);
        v28 = v26;
        sub_14234(v26, HIDWORD(v26), 0, 1081073664);
        if ( _CF )
        {
          v29 = v28;
          v30 = v27;
        }
        else
        {
          v29 = 0;
          v30 = 1081073664;
        }
        v15 = (unsigned __int8)sub_1F38(v29, v30);
        v31 = sub_1FD2(v41);
        v32 = sub_1FD8(v31, HIDWORD(v31), -1717986918, 1070176665, v36);
        v18 = HIDWORD(v32);
        v41 = v32;
        sub_14234(v32, HIDWORD(v32), 0, 1081073664);
      }
      else
      {
        v3 = sub_1FD2(v2);
        v4 = sub_1FD8(v3, HIDWORD(v3), -858993459, 1071959244, v36);
        v5 = HIDWORD(v4);
        v6 = v4;
        sub_14234(v4, HIDWORD(v4), 0, 1081073664);
        if ( _CF )
        {
          v7 = v6;
          v8 = v5;
        }
        else
        {
          v7 = 0;
          v8 = 1081073664;
        }
        v15 = (unsigned __int8)sub_1F38(v7, v8);
        v34 = sub_1FD2(v41);
        v35 = sub_1FD8(v34, HIDWORD(v34), 858993459, 1069757235, v36);
        v18 = HIDWORD(v35);
        v41 = v35;
        sub_14234(v35, HIDWORD(v35), 0, 1081073664);
        if ( !_CF )
          goto LABEL_11;
      }
      if ( !_CF )
      {
LABEL_11:
        v19 = 0;
        v20 = 1081073664;
LABEL_14:
        v21 = (unsigned __int8)sub_1F38(v19, v20);
        if ( get_system_mode_setting() == 2 )
          sub_ACE8(127, 5);
        else
          sub_ACE8(127, 3);
        sub_ACE8(52, v15);
        sub_ACE8(53, v21);
        sub_ACE8(54, v15);
        sub_ACE8(55, v21);
        sub_ACE8(57, v15);
        sub_ACE8(58, v21);
        sub_ACE8(59, v15);
        sub_ACE8(60, v21);
        LOBYTE(v38) = v15;
        BYTE1(v38) = v21;
        sub_921C(&v38);
        sub_91B4(1);
        *(_BYTE *)(*(_DWORD *)"|=" + 2) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v9 = sub_1FD2(v2);
      v10 = sub_1FD8(v9, HIDWORD(v9), 1717986918, 1072588390, v36);
      v11 = HIDWORD(v10);
      v12 = v10;
      sub_14234(v10, HIDWORD(v10), 0, 1081073664);
      if ( _CF )
      {
        v13 = v12;
        v14 = v11;
      }
      else
      {
        v13 = 0;
        v14 = 1081073664;
      }
      v15 = (unsigned __int8)sub_1F38(v13, v14);
      v16 = sub_1FD2(v41);
      v17 = sub_2220(v16, HIDWORD(v16), -1);
      v18 = HIDWORD(v17);
      v41 = v17;
      sub_14234(v17, HIDWORD(v17), 0, 1081073664);
      if ( !_CF )
        goto LABEL_11;
    }
    v20 = v18;
    v19 = v41;
    goto LABEL_14;
  }
  return result;
}
// 1137A: variable '_CF' is possibly undefined
// 1F38: using guessed type int __fastcall sub_1F38(_DWORD, _DWORD);
// 1FD2: using guessed type __int64 __fastcall sub_1FD2(_DWORD);
// 1FD8: using guessed type __int64 __fastcall sub_1FD8(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 2220: using guessed type __int64 __fastcall sub_2220(_DWORD, _DWORD, _DWORD);
// 3D04: using guessed type int __fastcall sub_3D04(_DWORD, _DWORD, _DWORD);
// 91B4: using guessed type int __fastcall sub_91B4(_DWORD);
// 921C: using guessed type int __fastcall sub_921C(_DWORD);
// 13FA4: using guessed type int __fastcall sub_13FA4(_DWORD);
// 14234: using guessed type int __fastcall sub_14234(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (0001151C) --------------------------------------------------------
int sub_1151C()
{
  sub_ACE8(127, 0);
  sub_3C5C(9);
  return 1;
}

//----- (0001156C) --------------------------------------------------------
_BYTE *sub_1156C()
{
  sub_AB88(0, 0xF42400u, 3);
  sub_AC00(0, 0x78u);
  sub_AC00(2u, 0x78u);
  return sub_AC00(1u, 0x78u);
}

//----- (00011598) --------------------------------------------------------
int sub_11598()
{
  return nullsub_7();
}
// F1C4: using guessed type int nullsub_7(void);

//----- (000115A0) --------------------------------------------------------
int __fastcall set_active_system_mode_shadow(char system_mode)
{
  nullsub_6();
  MEMORY[0x20003D75] = system_mode;
  return 536886645;
}
// E4B0: using guessed type int nullsub_6(void);

//----- (000115CC) --------------------------------------------------------
void sub_115CC()
{
  int v0; // r0
  char v1[4]; // [sp+4h] [bp-4h] BYREF

  if ( MEMORY[0x20003D8C] )
  {
    if ( !sub_7760() && !MEMORY[0x20003D9B] )
    {
      sub_3D10(22);
      if ( !v0 )
      {
        v1[0] = 48;
        if ( sub_AF4C(100, 10, 1, (int)v1, 100) )
        {
          sub_820C(0);
          MEMORY[0x20003D9B] = 1;
        }
      }
    }
  }
}
// 115EE: variable 'v0' is possibly undefined

//----- (00011628) --------------------------------------------------------
// Applies the persisted active profile to runtime state: load profile index, copy the 57-byte profile blob into RAM mirrors, apply system-mode / DPI / LOD register scripts, then reconfigure the RAM-side transport route/context.
int apply_active_profile_configuration()
{
  int persisted_active_profile_index; // r0
  int active_profile_index; // r0
  int sensor_performance_setting; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  char v8; // r4
  int v9; // r0
  int active_dpi_stage; // r0
  unsigned int dpi_value_for_stage; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r1
  int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0

  persisted_active_profile_index = load_persisted_active_profile_index();
  if ( persisted_active_profile_index == 255 )
  {
    MEMORY[0x20003DD8] = 1;
    MEMORY[0x20003DDD] = 1;
    MEMORY[0x20003DD9] = 1;
    MEMORY[0x20003DDC] = 0;
    sub_53D8();
  }
  else
  {
    set_active_profile_index(persisted_active_profile_index);
  }
  if ( MEMORY[0x20003DD9] )
    return 0;
  active_profile_index = get_active_profile_index();// Reload the selected profile blob from NVM, resolve the effective sensor performance setting, and re-run the large sensor configuration routine.
  load_profile_blob_from_nvm(active_profile_index);
  sensor_performance_setting = get_system_mode_setting();// 0x20004935 is the persisted system-mode setting used to choose the main register script. The script selector mapping is 0 -> base/highspeed, 1 -> competitive, 2 -> competitive+ / ultra.
  if ( sensor_performance_setting != 2 )
    sensor_performance_setting = get_staged_optical_engine_mode();
  configure_sensor_from_profile(sensor_performance_setting, v4, v5, v6);
  v7 = get_system_mode_setting();
  v8 = v7;
  if ( v7 )
  {
    if ( v7 == 1 )
      v9 = 2;
    else
      v9 = 4;
    apply_system_mode_register_script(v9);
  }
  else
  {
    apply_system_mode_register_script(0);
  }
  set_active_system_mode_shadow(v8);
  active_dpi_stage = get_active_dpi_stage();
  dpi_value_for_stage = get_dpi_value_for_stage(active_dpi_stage);
  apply_sensor_dpi_registers(dpi_value_for_stage);
  v14 = get_lod_setting();
  v15 = MEMORY[0x2000493E];
  if ( MEMORY[0x2000493E] > 1u )
  {
    MEMORY[0x2000493E] = 0;
    persist_active_optical_engine_flag(0, MEMORY[0x20004921]);
  }
  apply_lod_and_optical_register_script(v14, v15, v12, v13);
  MEMORY[0x20003DD8] = 0;
  if ( (unsigned int)get_sleep_timeout_setting() >= 3 )
    v16 = 60000000 * get_sleep_timeout_setting() / 2;
  else
    v16 = 60000000 * get_sleep_timeout_setting();
  MEMORY[0x20003DD0] = v16;
  MEMORY[0x20003DD4] = 60000000 * get_sleep_timeout_setting();
  v17 = sub_A1BC();
  if ( sub_BD2C() )
  {
    v18 = ramapi_transport_configure_route(0, v17, 1);
    v19 = ramapi_transport_select_context(v18);
    ramapi_transport_commit_primary(v19);
  }
  else
  {
    sub_3C08(0);
    v21 = ramapi_transport_configure_route(v20, v17, 0);
    v22 = ramapi_transport_select_context(v21);
    ramapi_transport_commit_secondary(v22);
    ramapi_set_run_state_code(1);
    sub_3B48(1);
  }
  MEMORY[0x20003DDD] = 1;
  return 1;
}
// 1166A: variable 'v4' is possibly undefined
// 1166A: variable 'v5' is possibly undefined
// 1166A: variable 'v6' is possibly undefined
// 116AC: variable 'v15' is possibly undefined
// 116AC: variable 'v12' is possibly undefined
// 116AC: variable 'v13' is possibly undefined
// 1171A: variable 'v20' is possibly undefined
// 3B48: using guessed type int __fastcall sub_3B48(_DWORD);
// 3BB4: using guessed type int __fastcall sub_3BB4(_DWORD);
// 3C14: using guessed type int __fastcall sub_3C14(_DWORD, _DWORD, _DWORD);
// 3C20: using guessed type int __fastcall sub_3C20(_DWORD);
// 3C2C: using guessed type int __fastcall sub_3C2C(_DWORD);
// 3C38: using guessed type int __fastcall sub_3C38(_DWORD);
// 53D8: using guessed type int sub_53D8(void);

//----- (00011750) --------------------------------------------------------
int __fastcall set_profile_dpi_stage_value_and_mark_dirty(int a1, unsigned int a2, int a3, char a4)
{
  char v6; // r2
  unsigned int v7; // r1
  unsigned int v9; // r2
  int v10; // r1
  int v11; // r0

  v6 = a2;
  v7 = a2 >> 8;
  switch ( a1 )
  {
    case 0:
      MEMORY[0x20004924] = v6;
      MEMORY[0x20004925] = v7;
      MEMORY[0x20004926] = a4;
      v9 = a2;
      v10 = a3;
      v11 = 0;
LABEL_11:
      mark_profile_dpi_stage_dirty_descriptor(v11, v10, v9);
      return 0;
    case 1:
      MEMORY[0x20004927] = v6;
      MEMORY[0x20004928] = v7;
      MEMORY[0x20004929] = a4;
      v9 = a2;
      v10 = a3;
      v11 = 1;
      goto LABEL_11;
    case 2:
      MEMORY[0x2000492A] = v6;
      MEMORY[0x2000492B] = v7;
      MEMORY[0x2000492C] = a4;
      v9 = a2;
      v10 = a3;
      v11 = 2;
      goto LABEL_11;
    case 3:
      MEMORY[0x2000492D] = v6;
      MEMORY[0x2000492E] = v7;
      MEMORY[0x2000492F] = a4;
      v9 = a2;
      v10 = a3;
      v11 = 3;
      goto LABEL_11;
  }
  MEMORY[0x20004924] = v6;
  MEMORY[0x20004925] = v7;
  MEMORY[0x20004926] = a4;
  mark_profile_dpi_stage_dirty_descriptor(0, a3, a2);
  return 0;
}
// 117C4: using guessed type int __fastcall sub_117C4(_DWORD, _DWORD, _DWORD);

//----- (000117C4) --------------------------------------------------------
// Builds one 5-byte dirty descriptor at 0x20004BAE + 5*stage and sets dirty flag 0x20004BC9..0x20004BCC. Used for DPI stage 0..3 incremental writeback metadata.
int __fastcall mark_profile_dpi_stage_dirty_descriptor(int a1, char a2, __int16 a3, char a4)
{
  int v4; // r4
  int result; // r0

  *(_BYTE *)(5 * a1 + 0x20004BAE) = 1;
  v4 = 5 * a1 + 536890286;
  *(_BYTE *)(v4 + 1) = a2;
  *(_WORD *)(v4 + 2) = a3;
  *(_BYTE *)(v4 + 4) = a4;
  result = (unsigned __int8)(a1 + 7);
  *(_BYTE *)((unsigned __int8)result + 0x20004BC2) = 1;
  return result;
}

//----- (000117F0) --------------------------------------------------------
char __fastcall set_dpi_stage_count(char count)
{
  MEMORY[0x20004922] = count;
  return count;
}

//----- (000117FC) --------------------------------------------------------
int mark_profile_dpi_stage_count_dirty()
{
  MEMORY[0x20004BCD] = 1;
  return 1;
}

//----- (00011808) --------------------------------------------------------
int sub_11808()
{
  MEMORY[0x20003C49] = 1;
  return 1;
}

//----- (00011814) --------------------------------------------------------
int __fastcall sub_11814(int result, char a2)
{
  *(_BYTE *)(result + 536889633) = a2;          // Blob bytes 28..56 map linearly to 0x20004921 + j, with j in 1..29, i.e. profile scalars land in 0x20004922..0x2000493E.
  return result;
}

//----- (00011820) --------------------------------------------------------
int __fastcall sub_11820(int result, char a2)
{
  *(_BYTE *)(result + 536889697) = a2;          // Blob bytes 0..27 map linearly to 0x20004961 + index; A030 later reads this region back as 7 x 4-byte button binding records.
  return result;
}

//----- (000118F4) --------------------------------------------------------
int __fastcall sub_118F4(int a1, char a2)
{
  int result; // r0

  if ( a1 == 170 )
    result = 4;
  else
    result = a1 & 3;
  *(_BYTE *)(result + 536886887) = a2;
  return result;
}

//----- (0001190C) --------------------------------------------------------
char __fastcall set_active_profile_index(char profile_index)
{
  MEMORY[0x20004921] = profile_index;
  return profile_index;
}

//----- (00011918) --------------------------------------------------------
BOOL __fastcall sub_11918(int a1, int a2, int a3, int a4)
{
  char v4; // r5
  int v5; // r4
  char v6; // r6
  char i; // r1
  _BYTE v9[8]; // [sp+4h] [bp-18h] BYREF
  int v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+10h] [bp-Ch]
  int v12; // [sp+14h] [bp-8h]
  int v13; // [sp+18h] [bp-4h]

  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v4 = a2;
  v9[0] = 0;
  v5 = a3;
  v6 = 0;
  if ( !sub_AE64(11, a1, 1, (int)v9, 100) )
    return 1;
  for ( i = v13 << (v4 - v5 + 1); v5; v5 = (unsigned __int8)(v5 - 1) )
    v6 |= 1 << v4--;
  v9[0] = v9[0] & ~v6 | i;
  return !sub_AF4C(11, v10, 1, (int)v9, 100);
}

//----- (00011988) --------------------------------------------------------
int __fastcall sub_11988(int result)
{
  *(_BYTE *)(result + 536886745) = 1;
  return result;
}

//----- (00011994) --------------------------------------------------------
int __fastcall sub_11994(int a1)
{
  int v3; // r0
  int result; // r0
  _DWORD v9[7]; // [sp+0h] [bp-1Ch] BYREF

  memset(v9, 0, 24);
  _R5 = __get_CPSR();
  v9[6] = LOBYTE(v9[0]);
  __disable_irq();
  sub_141A(v9, 268520750, 28);
  v3 = 8193;
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
      v3 = 8448;
    }
    else if ( a1 == 3 )
    {
      v3 = 8704;
    }
  }
  result = sub_FF8C(v3, 28, v9);
  __asm { MSR.W           PRIMASK, R5 }
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);
// FF8C: using guessed type int __fastcall sub_FF8C(_DWORD, _DWORD, _DWORD);

//----- (000119F4) --------------------------------------------------------
int __fastcall sub_119F4(int a1)
{
  int *v3; // r0
  int result; // r0
  _DWORD v9[9]; // [sp+0h] [bp-24h] BYREF

  memset(v9, 0, 28);
  _R5 = __get_CPSR();
  v9[7] = LOBYTE(v9[0]);
  __disable_irq();
  sub_141A(v9, 268520778, 29);
  v3 = (_DWORD *)(&loc_201C + 1);
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
      v3 = (_DWORD *)&loc_211C;
    }
    else if ( a1 == 3 )
    {
      v3 = &dword_221C;
    }
  }
  result = sub_FF8C(v3, 29, v9);
  __asm { MSR.W           PRIMASK, R5 }
  return result;
}
// 141A: using guessed type int __fastcall sub_141A(_DWORD, _DWORD, _DWORD);
// 221C: using guessed type int dword_221C;
// FF8C: using guessed type int __fastcall sub_FF8C(_DWORD, _DWORD, _DWORD);

//----- (00011A5C) --------------------------------------------------------
int sub_11A5C()
{
  MEMORY[0x20003DD8] = 1;
  return 1;
}

//----- (00011A68) --------------------------------------------------------
int __fastcall sub_11A68(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int v4; // r6
  unsigned int i; // r5
  int v6; // r0
  unsigned int v7; // r5
  int v8; // r0
  int v9; // r2

  v4 = a2;
  if ( *a1 )
  {
    for ( i = 0; *((unsigned __int8 *)a1 + 6) > i; i = (unsigned __int8)(i + 1) )
    {
      v6 = *(_DWORD *)(*a1 + 4 * i);
      if ( v6 )
      {
        sub_F8E(v6, a2);
        a2 = *a1;
        *(_DWORD *)(*a1 + 4 * i) = 0;
      }
    }
    sub_F8E(*a1, a2);
    *a1 = 0;
  }
  v7 = 0;
  for ( *a1 = sub_F00(v4, 4); v7 < v4; *(_DWORD *)(*a1 + v9) = v8 )
  {
    v8 = sub_F00(a3, 1);
    v9 = 4 * v7;
    v7 = (unsigned __int8)(v7 + 1);
  }
  *((_BYTE *)a1 + 6) = v4;
  *((_BYTE *)a1 + 7) = a3;
  return a3;
}
// F00: using guessed type int __fastcall sub_F00(_DWORD, _DWORD);
// F8E: using guessed type int __fastcall sub_F8E(_DWORD, _DWORD);

//----- (00011AD4) --------------------------------------------------------
_BYTE *__fastcall sub_11AD4(char *a1, unsigned int a2, _BYTE *a3, unsigned int a4)
{
  unsigned int v9[28]; // [sp+0h] [bp-94h] BYREF
  char v10[36]; // [sp+70h] [bp-24h] BYREF

  sub_4004(v9);
  sub_4050(v9, a1, a2);
  sub_3F4E((int)v9, (int)v10);
  if ( a4 > 0x20 )
    a4 = 32;
  return sub_140E(a3, v10, a4);
}

//----- (00011B0C) --------------------------------------------------------
int __fastcall sub_11B0C(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  v5[0] = 0;
  v5[1] = 0;
  switch ( a1 )
  {
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 229:
    case 230:
    case 231:
      result = update_aux_event_bitmap_queue(1 << (a1 & 0xF), 0, a2, a3);
      break;
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
      sub_3D1C(a1 & 0xF);
      if ( !a3 )
        goto LABEL_5;
      goto LABEL_4;
    default:
      if ( a3 )
      {
LABEL_4:
        LOBYTE(v5[0]) = 1;
        result = ramapi_transport_enqueue_frame(536885288, (int)v5, 8);
      }
      else
      {
LABEL_5:
        result = ramapi_transport_emit_small_frame((int)v5, 7, 3);
      }
      break;
  }
  return result;
}

//----- (00011B94) --------------------------------------------------------
int sub_11B94()
{
  return MEMORY[0x20003EEE];
}

//----- (00011BA0) --------------------------------------------------------
int sub_11BA0()
{
  int v0; // r5
  char v6; // r1
  char v7; // r1

  v0 = *(unsigned __int16 *)(loc_104 + 4);
  _R4 = __get_CPSR();
  __disable_irq();
  sub_100(536890400);
  __asm { MSR.W           PRIMASK, R4 }
  switch ( MEMORY[0x30C126A7] )
  {
    case 2u:
      v6 = 3;
      break;
    case 4u:
      v6 = 5;
      break;
    case 6u:
      v6 = 7;
      break;
    default:
      goto LABEL_7;
  }
  MEMORY[0x30C126A7] = v6;
LABEL_7:
  if ( (MEMORY[0x50001018] & 0x80000) == 0 )
  {
    MEMORY[0x50001014] = MEMORY[0x50001018] | 0x80000;
    MEMORY[0x50001010] |= 1u;
  }
  MEMORY[0x20003EEE] = MEMORY[0x50001018] << 14 >> 28;
  if ( v0 == 24709 )
    goto LABEL_12;
  if ( v0 == 25800 )
  {
    MEMORY[0x20003EE8] = 1;
LABEL_12:
    v7 = -16;
    goto LABEL_13;
  }
  v7 = 32;
LABEL_13:
  MEMORY[0x50001051] = v7;
  if ( MEMORY[0x4770600A](2) )
  {
    loc_4D8();
  }
  else
  {
    MEMORY[0xD500C130](2);
    loc_4D8();
    MEMORY[0xD3000752](2);
  }
  MEMORY[0x4770600A](1);
  MEMORY[0xE000E280] = 64;
  return 64;
}
// 1: using guessed type _BYTE byte_1[203];

//----- (00011C78) --------------------------------------------------------
int __fastcall sub_11C78(int a1)
{
  int result; // r0

  MEMORY[0xE000E010] = 4 * (MEMORY[0xE000E010] >> 2);
  MEMORY[0xE000E014] = a1 - 1;
  MEMORY[0xE000E018] = 0;
  MEMORY[0xE000E010] |= 1u;
  while ( (MEMORY[0xE000E010] & 0x10000) == 0 )
    ;
  result = 2 * (MEMORY[0xE000E010] >> 1);
  MEMORY[0xE000E010] = result;
  return result;
}

//----- (00011CF0) --------------------------------------------------------
int __fastcall sub_11CF0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  _DWORD *v6; // r6
  int v7; // r6
  int v8; // r6
  int v9; // r0
  int v10; // r6
  int v11; // r0

  v5 = 4 * a1;
  v6 = *(_DWORD **)(4 * a1 + 0x20003B1C);
  if ( (v6[9] & 1) != 0 )
  {
    *v6 = 0;
    v7 = *(_DWORD *)(4 * a1 + 0x20003B1C);
    while ( (*(_DWORD *)(v7 + 36) & 1) != 0 )
      ;
    *(_DWORD *)(v7 + 24) = 1;
    v8 = (char)(a1 + 9);
    if ( v8 >= 0 )
      MEMORY[0xE000E280] = 1 << (v8 & 0x1F);
  }
  *(_DWORD *)(4 * a1 + 0x20004374) = a2;
  if ( a3 )
    --a3;
  *(_DWORD *)(*(_DWORD *)(4 * a1 + 0x20003B1C) + 4) = a3;
  v9 = (char)(a1 + 9);
  v10 = *(_DWORD *)(v5 + 536886044);
  if ( a4 )
  {
    *(_DWORD *)(v10 + 28) = 1;
    if ( v9 >= 0 )
      MEMORY[0xE000E100] = 1 << (v9 & 0x1F);
  }
  else
  {
    *(_DWORD *)(v10 + 32) = 1;
    if ( v9 >= 0 )
    {
      MEMORY[0xE000E180] = 1 << (v9 & 0x1F);
      __dsb(0xFu);
      __isb(0xFu);
    }
  }
  *(_DWORD *)(*(_DWORD *)(v5 + 536886044) + 44) = a5 != 0;
  **(_DWORD **)(v5 + 536886044) = 1;
  v11 = *(_DWORD *)(v5 + 536886044);
  while ( (*(_DWORD *)(v11 + 36) & 1) == 0 )
    ;
  return *(_DWORD *)(v11 + 4);
}

//----- (00011DEC) --------------------------------------------------------
int __fastcall sub_11DEC(unsigned int a1)
{
  unsigned __int64 v2; // r0
  unsigned int v3; // r5
  unsigned int v4; // r1
  unsigned int v5; // r6
  unsigned __int64 v6; // r0
  __int64 v7; // r0
  unsigned int v8; // r0

  MEMORY[0x2000383C] = a1;
  LODWORD(v2) = sub_1FD2(a1);
  v3 = sub_1FD8(v2, 0x3FE89374BC6A7EFAuLL);
  v5 = v4;
  LODWORD(v6) = sub_1FD2(32 * a1);
  LODWORD(v7) = sub_1A90(v6, __PAIR64__(v5, v3));
  v8 = sub_1F38(v7);
  return sub_11CF0(3, 536871589, v8, 1, 0);
}
// 11DFE: variable 'v2' is possibly undefined
// 11E04: variable 'v4' is possibly undefined
// 11E10: variable 'v6' is possibly undefined
// 11E14: variable 'v7' is possibly undefined

//----- (00011E3C) --------------------------------------------------------
int __fastcall sub_11E3C(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r3
  int i; // r4
  int v5; // r0
  int result; // r0

  v3 = 0;
  for ( i = 4 * a1; v3 < a3; ++v3 )
  {
    do
      v5 = *(_DWORD *)(i + 536886068);
    while ( (*(_BYTE *)(v5 + 3) & 8) != 0 );
    *(_BYTE *)(v5 + 1) = *(_BYTE *)(a2 + v3);
  }
  result = *(_DWORD *)(i + 536886068);
  while ( (*(_BYTE *)(result + 3) & 4) == 0 )
    ;
  return result;
}

//----- (00011E6C) --------------------------------------------------------
int sub_11E6C()
{
  sub_13A30(536885032, MEMORY[0x20003730]);
  sub_13A3C(536885020, MEMORY[0x20003724]);
  sub_13A5C(536885056, MEMORY[0x20003748]);
  sub_13A48(536885044, MEMORY[0x2000373C]);
  sub_13AE4(268469577);
  sub_13AF0(268469593);
  sub_13A88(268469561);
  sub_12E68(536885076, MEMORY[0x2000376C]);
  sub_12E48(536885104, MEMORY[0x20003788]);
  sub_12E74(536885132, MEMORY[0x20003794]);
  sub_12E54(536885144, MEMORY[0x200037A0]);
  sub_13978(268515645);
  sub_125B4(268510581);
  sub_13A24(268515717);
  sub_125C4(268510657);
  sub_13A94(0, 0, 0);
  sub_13AA8(0, 0, 0);
  sub_13A94(0, 0, 0);
  sub_13AA8(0, 0, 0);
  sub_13ABC(0, 0, 0);
  sub_13AD0(0, 0, 0);
  sub_13A70(536885296);
  return sub_13A7C(536885288);
}

//----- (00011F98) --------------------------------------------------------
int sub_11F98()
{
  return 1;
}

//----- (00011F9C) --------------------------------------------------------
void sub_11F9C()
{
  int v1; // r0
  int v2; // r0

  sub_F30C();
  sub_FEB8();
  _R4 = __get_CPSR();
  __disable_irq();
  sub_FF70();
  if ( v1 == 1 )
    v2 = 2;
  else
    v2 = 3;
  sub_3B48(v2);
  __asm { MSR.W           PRIMASK, R4 }
}
// 11FBA: variable 'v1' is possibly undefined

//----- (00011FF0) --------------------------------------------------------
int sub_11FF0()
{
  return *MEMORY[0x20003750] & 1;
}

//----- (00012000) --------------------------------------------------------
int sub_12000()
{
  return *(_BYTE *)(MEMORY[0x20003750] + 2) & 1;
}

//----- (00012010) --------------------------------------------------------
int sub_12010()
{
  int result; // r0

  result = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 17) &= ~0x80u;
  return result;
}

//----- (00012024) --------------------------------------------------------
char __fastcall sub_12024(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 35) = result;
  return result;
}

//----- (00012034) --------------------------------------------------------
int sub_12034()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 32;
  *(_BYTE *)(MEMORY[0x2000374C] + 35) |= 4u;
  return result;
}

//----- (00012048) --------------------------------------------------------
char __fastcall sub_12048(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 36) = result;
  return result;
}

//----- (00012058) --------------------------------------------------------
int sub_12058()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 32;
  *(_BYTE *)(MEMORY[0x2000374C] + 36) |= 4u;
  return result;
}

//----- (0001206C) --------------------------------------------------------
char __fastcall sub_1206C(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 37) = result;
  return result;
}

//----- (0001207C) --------------------------------------------------------
int sub_1207C()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 32;
  *(_BYTE *)(MEMORY[0x2000374C] + 37) |= 4u;
  return result;
}

//----- (00012090) --------------------------------------------------------
char __fastcall sub_12090(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 38) = result;
  return result;
}

//----- (000120A0) --------------------------------------------------------
int sub_120A0()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 32;
  *(_BYTE *)(MEMORY[0x2000374C] + 38) |= 4u;
  return result;
}

//----- (000120B4) --------------------------------------------------------
int sub_120B4()
{
  int result; // r0

  result = MEMORY[0x20003750];
  *(_BYTE *)(MEMORY[0x20003750] + 18) |= 1u;
  return result;
}

//----- (000120C8) --------------------------------------------------------
int sub_120C8()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 32;
  *(_BYTE *)(MEMORY[0x2000374C] + 34) &= ~8u;
  return result;
}

//----- (000120DC) --------------------------------------------------------
int sub_120DC()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 32;
  *(_BYTE *)(MEMORY[0x2000374C] + 34) = 2 * (*(_BYTE *)(MEMORY[0x2000374C] + 34) >> 1);
  return result;
}

//----- (000120F0) --------------------------------------------------------
int sub_120F0()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 32;
  *(_BYTE *)(MEMORY[0x2000374C] + 34) &= ~2u;
  return result;
}

//----- (00012104) --------------------------------------------------------
int sub_12104()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 32;
  *(_BYTE *)(MEMORY[0x2000374C] + 34) &= ~4u;
  return result;
}

//----- (00012118) --------------------------------------------------------
_BYTE *sub_12118()
{
  _BYTE *result; // r0

  result = (_BYTE *)MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = -1;
  result[18] = -1;
  result[19] = -1;
  result[20] = -1;
  result[21] = -1;
  result[22] = -1;
  return result;
}

//----- (00012130) --------------------------------------------------------
char __fastcall sub_12130(char result)
{
  *MEMORY[0x20003750] = (2 * (*MEMORY[0x20003750] >> 1)) | result;
  return result;
}

//----- (00012144) --------------------------------------------------------
char __fastcall sub_12144(char result)
{
  *(_BYTE *)(MEMORY[0x20003750] + 16) = (2 * (*(_BYTE *)(MEMORY[0x20003750] + 16) >> 1)) | result;
  return result;
}

//----- (00012158) --------------------------------------------------------
int __fastcall sub_12158(int a1, int a2)
{
  int result; // r0
  unsigned int v3; // r5
  unsigned int i; // r4
  char v5; // r0
  int v6; // r1

  if ( a1 )
  {
    MEMORY[0x20003654] = a1;
    result = a2;
LABEL_9:
    MEMORY[0x20003658] = result;
    return result;
  }
  v3 = MEMORY[0x20003658];
  if ( MEMORY[0x20003658] )
  {
    if ( MEMORY[0x20003658] >= 64 )
      v3 = 64;
    for ( i = 0; i < v3; MEMORY[0x20003654] = v6 + 1 )
    {
      v5 = sub_122A8();
      v6 = MEMORY[0x20003654];
      ++i;
      *MEMORY[0x20003654] = v5;
    }
    result = MEMORY[0x20003658] - v3;
    goto LABEL_9;
  }
  return -1;
}

//----- (0001219C) --------------------------------------------------------
int __fastcall sub_1219C(int a1)
{
  int result; // r0

  result = 8 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 5) = *(_BYTE *)(MEMORY[0x2000374C] + 5) & 0xF7 | result;
  return result;
}

//----- (000121B4) --------------------------------------------------------
int sub_121B4()
{
  int result; // r0

  result = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 5) |= 1u;
  return result;
}

//----- (000121C8) --------------------------------------------------------
int sub_121C8()
{
  int result; // r0

  result = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 5) |= 2u;
  return result;
}

//----- (000121DC) --------------------------------------------------------
int sub_121DC()
{
  int result; // r0

  result = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 5) |= 4u;
  return result;
}

//----- (000121F0) --------------------------------------------------------
int __fastcall sub_121F0(int a1, int a2)
{
  unsigned int v2; // r5
  char *v3; // r0
  unsigned int i; // r4
  int result; // r0

  if ( a1 )
  {
    MEMORY[0x20003650] = a2;
    MEMORY[0x2000364C] = a1;
  }
  if ( !MEMORY[0x20003650] )
    return -1;
  if ( MEMORY[0x20003650] == 64 )
    sub_121C8();
  v2 = MEMORY[0x20003650];
  if ( MEMORY[0x20003650] > 0x40u )
    v2 = 64;
  v3 = (char *)MEMORY[0x2000364C];
  if ( !MEMORY[0x2000364C] )
    return -1;
  for ( i = 0; i < v2; ++MEMORY[0x2000364C] )
  {
    sub_135B4(*v3);
    ++i;
    v3 = (char *)(MEMORY[0x2000364C] + 1);
  }
  result = MEMORY[0x20003650] - v2;
  MEMORY[0x20003650] -= v2;
  return result;
}

//----- (00012244) --------------------------------------------------------
int __fastcall sub_12244(int result, char a2)
{
  *(_BYTE *)(result + 536884940) = a2;
  return result;
}

//----- (00012250) --------------------------------------------------------
int sub_12250()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 1) >> 7;
}

//----- (00012260) --------------------------------------------------------
int sub_12260()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 33) & ~*(unsigned __int8 *)(MEMORY[0x2000374C] + 17);
}

//----- (00012274) --------------------------------------------------------
unsigned int sub_12274()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 9) << 25) >> 31;
}

//----- (00012284) --------------------------------------------------------
int sub_12284()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 9) >> 7;
}

//----- (00012294) --------------------------------------------------------
int sub_12294()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 34) & ~*(unsigned __int8 *)(MEMORY[0x2000374C] + 18);
}

//----- (000122A8) --------------------------------------------------------
int sub_122A8()
{
  int i; // r0

  for ( i = *(_BYTE *)(MEMORY[0x2000374C] + 12) & 0xF;
        i != 1 && i != 12 && i != 14;
        i = *(_BYTE *)(MEMORY[0x2000374C] + 12) & 0xF )
  {
    ;
  }
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 6);
}

//----- (000122D0) --------------------------------------------------------
unsigned int sub_122D0()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 97) << 27) >> 31;
}

//----- (000122E4) --------------------------------------------------------
int sub_122E4()
{
  return *(_BYTE *)(MEMORY[0x2000374C] + 65) & 1;
}

//----- (000122F8) --------------------------------------------------------
int sub_122F8()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 49);
}

//----- (00012308) --------------------------------------------------------
int sub_12308()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 35) & ~*(unsigned __int8 *)(MEMORY[0x2000374C] + 19);
}

//----- (0001231C) --------------------------------------------------------
int sub_1231C()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 96) | (*(unsigned __int8 *)(MEMORY[0x2000374C] + 97) >> 6 << 8);
}

//----- (00012334) --------------------------------------------------------
unsigned int sub_12334()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 65) << 28) >> 31;
}

//----- (00012348) --------------------------------------------------------
unsigned int sub_12348()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 99) << 27) >> 31;
}

//----- (0001235C) --------------------------------------------------------
int sub_1235C()
{
  return *(_BYTE *)(MEMORY[0x2000374C] + 67) & 1;
}

//----- (00012370) --------------------------------------------------------
int sub_12370()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 50);
}

//----- (00012380) --------------------------------------------------------
int sub_12380()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 36) & ~*(unsigned __int8 *)(MEMORY[0x2000374C] + 20);
}

//----- (00012394) --------------------------------------------------------
int sub_12394()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 98) | (*(unsigned __int8 *)(MEMORY[0x2000374C] + 99) >> 6 << 8);
}

//----- (000123AC) --------------------------------------------------------
unsigned int sub_123AC()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 67) << 28) >> 31;
}

//----- (000123C0) --------------------------------------------------------
unsigned int sub_123C0()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 101) << 27) >> 31;
}

//----- (000123D4) --------------------------------------------------------
int sub_123D4()
{
  return *(_BYTE *)(MEMORY[0x2000374C] + 69) & 1;
}

//----- (000123E8) --------------------------------------------------------
int sub_123E8()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 51);
}

//----- (000123F8) --------------------------------------------------------
int sub_123F8()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 37) & ~*(unsigned __int8 *)(MEMORY[0x2000374C] + 21);
}

//----- (0001240C) --------------------------------------------------------
int sub_1240C()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 100) | (*(unsigned __int8 *)(MEMORY[0x2000374C] + 101) >> 6 << 8);
}

//----- (00012424) --------------------------------------------------------
unsigned int sub_12424()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 69) << 28) >> 31;
}

//----- (00012438) --------------------------------------------------------
unsigned int sub_12438()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 103) << 27) >> 31;
}

//----- (0001244C) --------------------------------------------------------
int sub_1244C()
{
  return *(_BYTE *)(MEMORY[0x2000374C] + 71) & 1;
}

//----- (00012460) --------------------------------------------------------
int sub_12460()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 52);
}

//----- (00012470) --------------------------------------------------------
int sub_12470()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 38) & ~*(unsigned __int8 *)(MEMORY[0x2000374C] + 22);
}

//----- (00012484) --------------------------------------------------------
int sub_12484()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 102) | (*(unsigned __int8 *)(MEMORY[0x2000374C] + 103) >> 6 << 8);
}

//----- (0001249C) --------------------------------------------------------
unsigned int sub_1249C()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 71) << 28) >> 31;
}

//----- (000124B0) --------------------------------------------------------
int sub_124B0()
{
  return *(_BYTE *)(MEMORY[0x20003750] + 19) & 1;
}

//----- (000124C0) --------------------------------------------------------
int sub_124C0()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 35);
}

//----- (000124D0) --------------------------------------------------------
int sub_124D0()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 36);
}

//----- (000124E0) --------------------------------------------------------
int sub_124E0()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 37);
}

//----- (000124F0) --------------------------------------------------------
int sub_124F0()
{
  return *(unsigned __int8 *)(MEMORY[0x2000374C] + 38);
}

//----- (00012500) --------------------------------------------------------
int sub_12500()
{
  return MEMORY[0x200035C8];
}

//----- (0001250C) --------------------------------------------------------
int sub_1250C()
{
  return MEMORY[0x200035C4];
}

//----- (00012518) --------------------------------------------------------
int __fastcall sub_12518(int a1)
{
  return *(unsigned __int8 *)(2 * a1 + 0x200036E0);
}

//----- (00012524) --------------------------------------------------------
unsigned int sub_12524()
{
  return (unsigned int)(*(unsigned __int8 *)(MEMORY[0x2000374C] + 7) << 27) >> 31;
}

//----- (00012534) --------------------------------------------------------
int sub_12534()
{
  return *(_BYTE *)(MEMORY[0x20003750] + 4) & 1;
}

//----- (00012544) --------------------------------------------------------
int sub_12544()
{
  return *(_BYTE *)(MEMORY[0x20003750] + 6) & ((*(_BYTE *)(MEMORY[0x20003750] + 3) & 1) == 0);
}

//----- (00012558) --------------------------------------------------------
_WORD *__fastcall sub_12558(_WORD *result)
{
  *result = 5640;
  return result;
}

//----- (00012564) --------------------------------------------------------
int __fastcall sub_12564(_WORD *a1, _WORD *a2)
{
  int result; // r0

  *a1 = MEMORY[0x200035C0];
  result = MEMORY[0x200035C2];
  *a2 = MEMORY[0x200035C2];
  return result;
}

//----- (00012574) --------------------------------------------------------
int __fastcall sub_12574(int a1)
{
  _DWORD v3[16]; // [sp+0h] [bp-40h] BYREF

  if ( !*(_WORD *)(a1 + 6) )
    return sub_13F70(2u);
  if ( *(_BYTE *)(a1 + 2) != 8 )
    return 1;
  LOBYTE(v3[0]) = 8;
  sub_1580(v3, *(unsigned __int16 *)(a1 + 6));
  sub_121F0((int)v3, *(unsigned __int16 *)(a1 + 6));
  return sub_13F70(2u);
}

//----- (000125B4) --------------------------------------------------------
int __fastcall sub_125B4(int result)
{
  MEMORY[0x20003704] = result;
  return result;
}

//----- (000125C4) --------------------------------------------------------
int __fastcall sub_125C4(int result)
{
  MEMORY[0x20003698] = result;
  return result;
}

//----- (000125D0) --------------------------------------------------------
int sub_125D0()
{
  int result; // r0

  result = MEMORY[0x2000374C];
  *MEMORY[0x2000374C] |= 8u;
  return result;
}

//----- (000125E4) --------------------------------------------------------
void sub_125E4()
{
  int v13; // r5
  unsigned int i; // r7
  int v15; // r3
  unsigned int v16; // r0
  int v18; // r0
  int v20; // r0
  unsigned int v21; // r0
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r0
  unsigned int v26; // r0
  int v27; // r1
  int v28; // r0
  unsigned int v32; // r6
  _BYTE *v33; // r7
  int v34; // r1
  unsigned int v35; // r0
  unsigned int j; // r6
  unsigned int v38; // r6
  _BYTE *v39; // r7
  int v40; // r1
  unsigned int v41; // r0
  unsigned int k; // r6
  unsigned int v45; // r6
  _BYTE *v46; // r7
  int v47; // r1
  unsigned int v48; // r0
  unsigned int m; // r6
  unsigned int v52; // r6
  _BYTE *v53; // r7
  int v54; // r1
  unsigned int v55; // r0
  unsigned int n; // r6
  unsigned int v59; // [sp+0h] [bp-4h]
  unsigned int v60; // [sp+0h] [bp-4h]
  unsigned int v61; // [sp+0h] [bp-4h]
  unsigned int v62; // [sp+0h] [bp-4h]

  if ( (MEMORY[0x200035F7] & 2) == 0 )
    return;
  if ( MEMORY[0x20003FF0] )
  {
    sub_120B4();
    sub_12144(0);
    sub_3B48(6);
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FF0] = 0;
LABEL_208:
    __asm { MSR.W           PRIMASK, R0 }
    return;
  }
  if ( MEMORY[0x20003FF2] )
  {
    sub_12130(0);
    while ( sub_12000() )
    {
      if ( MEMORY[0x20003FF4] || !sub_12284() && !sub_12274() )
        goto LABEL_13;
    }
    if ( MEMORY[0x2000360C] )
      MEMORY[0x2000360C]();
LABEL_13:
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FF2] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFC] = 0;
    __asm { MSR.W           PRIMASK, R0 }
  }
  if ( MEMORY[0x20003FF4] )
  {
    sub_12130(1);
    while ( !sub_12000() )
      ;
    if ( MEMORY[0x20003610] )
      MEMORY[0x20003610]();
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FF4] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFC] = 0;
    __asm { MSR.W           PRIMASK, R0 }
  }
  if ( MEMORY[0x20003FF1] )
  {
    if ( !sub_11FF0() )
    {
      _R0 = __get_CPSR();
      __disable_irq();
      MEMORY[0x20003FF1] = 0;
      __asm { MSR.W           PRIMASK, R0 }
      sub_3B48(6);
      return;
    }
    sub_125D0();
    sub_13924(0);
    sub_132F4(0);
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FF1] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFC] = 0;
    __asm { MSR.W           PRIMASK, R0 }
  }
  if ( MEMORY[0x20003FF5] )
  {
    sub_133C4();
    if ( MEMORY[0x20003610] )
      MEMORY[0x20003610]();
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FF5] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFC] = 0;
    __asm { MSR.W           PRIMASK, R0 }
  }
  if ( MEMORY[0x20003FF6] && sub_BD2C() )
  {
    sub_1219C(1);
    v13 = 536884952;
    for ( i = 0; i < 8; ++i )
      *(_BYTE *)v13++ = sub_122A8();
    sub_13F70(1u);
    sub_121F0(-1, 0);
    v16 = (unsigned int)(MEMORY[0x200036D8] << 25) >> 30;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v18 = 0;
        if ( (MEMORY[0x200036D8] & 0x1F) == 1
          && (!MEMORY[0x200036DC] || MEMORY[0x200036DC] == 1 || MEMORY[0x200036DC] == 2) )
        {
          v18 = sub_12D34((unsigned __int8 *)0x200036D8, MEMORY[0x200036DC], 536884952, v15);
        }
      }
      else
      {
        if ( v16 != 2 )
          goto LABEL_48;
        v18 = sub_13F04((unsigned __int8 *)0x200036D8);
      }
    }
    else
    {
      v18 = sub_13AFC(536884952, MEMORY[0x200036D8], 536884952, v15);
    }
    if ( v18 )
    {
      sub_1219C(0);
      goto LABEL_46;
    }
LABEL_48:
    sub_121DC();
    sub_13F70(0);
LABEL_46:
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FF6] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    sub_132C0(0);
    if ( (unsigned int)MEMORY[0x200035FA] - 100 >= 0x63 )
    {
      if ( (unsigned int)MEMORY[0x200035FA] - 201 < 0x62 )
      {
        sub_1302C(0);
        sub_12FB4(0);
      }
    }
    else
    {
      sub_12FF0(0);
    }
  }
  if ( !MEMORY[0x20003FF7] )
    goto LABEL_80;
  if ( MEMORY[0x200035FA] != 100 )
  {
    if ( MEMORY[0x200035FA] == 102 )
    {
      v22 = 0;
      if ( MEMORY[0x200035F6] )
      {
        v23 = MEMORY[0x20003690];
        while ( *(unsigned __int16 *)(MEMORY[0x20003690] + 8 * v22) != MEMORY[0x200035FA]
             || !*(_DWORD *)(8 * v22 + MEMORY[0x20003690] + 4) )
        {
          v22 = (unsigned __int16)(v22 + 1);
          if ( v22 >= MEMORY[0x200035F6] )
            goto LABEL_75;
        }
        goto LABEL_73;
      }
    }
    else
    {
      if ( MEMORY[0x200035FA] == 103 && MEMORY[0x20003698] )
      {
        v24 = MEMORY[0x20003698]();
        goto LABEL_76;
      }
      v22 = 0;
      if ( MEMORY[0x200035F3] )
      {
        v23 = MEMORY[0x20003684];
        while ( *(unsigned __int16 *)(MEMORY[0x20003684] + 8 * v22) != MEMORY[0x200035FA]
             || !*(_DWORD *)(8 * v22 + MEMORY[0x20003684] + 4) )
        {
          v22 = (unsigned __int16)(v22 + 1);
          if ( v22 >= MEMORY[0x200035F3] )
            goto LABEL_75;
        }
LABEL_73:
        v24 = (*(int (**)(void))(8 * v22 + v23 + 4))();
        goto LABEL_76;
      }
    }
LABEL_75:
    sub_13F70(2u);
    v24 = 0;
LABEL_76:
    if ( v24 )
      goto LABEL_77;
    goto LABEL_88;
  }
  v20 = sub_121F0(0, 0);
  if ( v20 )
  {
    if ( v20 >= 0 )
      goto LABEL_77;
LABEL_88:
    v21 = 3;
    goto LABEL_60;
  }
  v21 = 2;
LABEL_60:
  sub_13F70(v21);
LABEL_77:
  _R0 = __get_CPSR();
  __disable_irq();
  MEMORY[0x20003FF7] = 0;
  __asm { MSR.W           PRIMASK, R0 }
  if ( MEMORY[0x200035FA] != 2 && MEMORY[0x200035FA] != 3 )
    sub_12FF0(0);
LABEL_80:
  if ( !MEMORY[0x20003FF8] )
    goto LABEL_102;
  v26 = 0;
  if ( MEMORY[0x200035FA] == 202 )
  {
    v26 = 0;
    if ( MEMORY[0x200035F5] )
    {
      v27 = MEMORY[0x2000368C];
      while ( *(unsigned __int16 *)(MEMORY[0x2000368C] + 8 * v26) != MEMORY[0x200035FA]
           || !*(_DWORD *)(8 * v26 + MEMORY[0x2000368C] + 4) )
      {
        v26 = (unsigned __int16)(v26 + 1);
        if ( v26 >= MEMORY[0x200035F5] )
          goto LABEL_98;
      }
      goto LABEL_87;
    }
LABEL_98:
    sub_13F70(2u);
    v28 = 0;
    goto LABEL_99;
  }
  if ( MEMORY[0x200035FA] == 203 )
  {
    if ( MEMORY[0x20003694] )
    {
      v28 = MEMORY[0x20003694]();
      goto LABEL_99;
    }
    goto LABEL_98;
  }
  if ( !MEMORY[0x200035F4] )
    goto LABEL_98;
  v27 = MEMORY[0x20003688];
  while ( *(unsigned __int16 *)(MEMORY[0x20003688] + 8 * v26) != MEMORY[0x200035FA]
       || !*(_DWORD *)(8 * v26 + MEMORY[0x20003688] + 4) )
  {
    v26 = (unsigned __int16)(v26 + 1);
    if ( v26 >= MEMORY[0x200035F4] )
      goto LABEL_98;
  }
LABEL_87:
  v28 = (*(int (**)(void))(8 * v26 + v27 + 4))();
LABEL_99:
  if ( !v28 )
  {
    sub_121DC();
    sub_13F70(0);
    sub_122A8();
  }
  _R0 = __get_CPSR();
  __disable_irq();
  MEMORY[0x20003FF8] = 0;
  __asm { MSR.W           PRIMASK, R0 }
  sub_1302C(0);
LABEL_102:
  if ( MEMORY[0x200035FA] == 4 )
  {
    if ( !MEMORY[0x20003FFA] )
      goto LABEL_114;
    goto LABEL_108;
  }
  if ( !MEMORY[0x200035FA] )
  {
    if ( !MEMORY[0x20003FFA] )
      goto LABEL_114;
LABEL_108:
    sub_121B4();
    sub_13F70(0);
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFA] = 0;
    __asm { MSR.W           PRIMASK, R0 }
  }
  if ( MEMORY[0x200035FA] == 3 )
  {
    sub_121DC();
    sub_13F70(0);
  }
  else if ( MEMORY[0x200035FA] == 2 )
  {
    sub_121B4();
    sub_13F70(0);
  }
LABEL_114:
  if ( MEMORY[0x20003FFB] )
  {
    if ( !MEMORY[0x200035FC]() )
    {
      sub_1365C(1);
      sub_135DC();
      MEMORY[0x200036CC] = 1;
    }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFB] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    sub_13068(0);
  }
  if ( MEMORY[0x20003FFF] )
  {
    if ( MEMORY[0x200036CC] == 1 || (MEMORY[0x200036BC] & 9) == 0 )
      goto LABEL_131;
    if ( !MEMORY[0x20003618] )
      goto LABEL_137;
    v32 = MEMORY[0x200036AC];
    v33 = (_BYTE *)MEMORY[0x2000369C];
    if ( MEMORY[0x200036AC] && (v59 = sub_1231C(), v32 >= v59) )
    {
      while ( sub_122E4() )
        ;
      v35 = v59;
      for ( j = 0; j < v59; ++v33 )
      {
        *v33 = sub_122F8();
        v35 = v59;
        ++j;
      }
      v34 = v35;
    }
    else
    {
      v34 = -1;
    }
    if ( v34 >= 0 && MEMORY[0x20003618](MEMORY[0x2000369C]) )
    {
LABEL_131:
      if ( MEMORY[0x200036BC] != 2 )
        sub_135DC();
    }
    else
    {
LABEL_137:
      sub_1365C(1);
      sub_135DC();
      MEMORY[0x200036CC] = 1;
    }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFF] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    sub_13068(0);
  }
  if ( MEMORY[0x20003FFC] )
  {
    if ( !MEMORY[0x20003600]() )
    {
      sub_13710(1);
      sub_13690();
      MEMORY[0x200036CD] = 1;
    }
    sub_130E8(0);
  }
  if ( MEMORY[0x20004000] )
  {
    if ( MEMORY[0x200036CD] == 1 || (MEMORY[0x200036C0] & 9) == 0 )
      goto LABEL_153;
    if ( !MEMORY[0x2000361C] )
      goto LABEL_159;
    v38 = MEMORY[0x200036B0];
    v39 = (_BYTE *)MEMORY[0x200036A0];
    if ( MEMORY[0x200036B0] && (v60 = sub_12394(), v38 >= v60) )
    {
      while ( sub_1235C() )
        ;
      v41 = v60;
      for ( k = 0; k < v60; ++v39 )
      {
        *v39 = sub_12370();
        v41 = v60;
        ++k;
      }
      v40 = v41;
    }
    else
    {
      v40 = -1;
    }
    if ( v40 >= 0 && MEMORY[0x2000361C](MEMORY[0x200036A0]) )
    {
LABEL_153:
      if ( MEMORY[0x200036C0] != 2 )
        sub_13690();
    }
    else
    {
LABEL_159:
      sub_13710(1);
      sub_13690();
      MEMORY[0x200036CD] = 1;
    }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20004000] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    sub_130E8(0);
  }
  if ( MEMORY[0x20003FFD] )
  {
    if ( !MEMORY[0x20003604]() )
    {
      sub_137C4(1);
      sub_13744();
      MEMORY[0x200036CE] = 1;
    }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFD] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    sub_13168(0);
  }
  if ( MEMORY[0x20004001] )
  {
    if ( MEMORY[0x200036CE] == 1 || (MEMORY[0x200036C4] & 9) == 0 )
      goto LABEL_175;
    if ( !MEMORY[0x20003620] )
      goto LABEL_181;
    v45 = MEMORY[0x200036B4];
    v46 = (_BYTE *)MEMORY[0x200036A4];
    if ( MEMORY[0x200036B4] && (v61 = sub_1240C(), v45 >= v61) )
    {
      while ( sub_123D4() )
        ;
      v48 = v61;
      for ( m = 0; m < v61; ++v46 )
      {
        *v46 = sub_123E8();
        v48 = v61;
        ++m;
      }
      v47 = v48;
    }
    else
    {
      v47 = -1;
    }
    if ( v47 >= 0 && MEMORY[0x20003620](MEMORY[0x200036A4]) )
    {
LABEL_175:
      if ( MEMORY[0x200036C4] != 2 )
        sub_13744();
    }
    else
    {
LABEL_181:
      sub_137C4(1);
      sub_13744();
      MEMORY[0x200036CE] = 1;
    }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20004001] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    sub_13168(0);
  }
  if ( MEMORY[0x20003FFE] )
  {
    if ( !MEMORY[0x20003608]() )
    {
      sub_13848(1);
      sub_137F8();
      MEMORY[0x200036CF] = 1;
    }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FFE] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    sub_131E8(0);
  }
  if ( MEMORY[0x20004002] )
  {
    if ( MEMORY[0x200036CF] == 1 || (MEMORY[0x200036C8] & 9) == 0 )
      goto LABEL_197;
    if ( !MEMORY[0x20003624] )
      goto LABEL_209;
    v52 = MEMORY[0x200036B8];
    v53 = (_BYTE *)MEMORY[0x200036A8];
    if ( MEMORY[0x200036B8] && (v62 = sub_12484(), v52 >= v62) )
    {
      while ( sub_1244C() )
        ;
      v55 = v62;
      for ( n = 0; n < v62; ++v53 )
      {
        *v53 = sub_12460();
        v55 = v62;
        ++n;
      }
      v54 = v55;
    }
    else
    {
      v54 = -1;
    }
    if ( v54 >= 0 && MEMORY[0x20003624](MEMORY[0x200036A8]) )
    {
LABEL_197:
      if ( MEMORY[0x200036C8] != 2 )
        sub_137F8();
    }
    else
    {
LABEL_209:
      sub_13848(1);
      sub_137F8();
      MEMORY[0x200036CF] = 1;
    }
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20004002] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    sub_131E8(0);
  }
  if ( MEMORY[0x20003FF9] )
  {
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FF9] = 0;
    __asm { MSR.W           PRIMASK, R0 }
  }
  if ( MEMORY[0x20003FF3] )
  {
    sub_12130(1);
    while ( !sub_12000() )
      ;
    sub_133FC();
    if ( MEMORY[0x20003614] )
      MEMORY[0x20003614]();
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20003FF3] = 0;
    goto LABEL_208;
  }
}
// 12870: conditional instruction was optimized away because %var_4.4==0
// 12916: conditional instruction was optimized away because %var_4.4==0
// 12758: variable 'v15' is possibly undefined
// 200035FC: using guessed type int (*)(void);
// 20003600: using guessed type int (*)(void);
// 20003604: using guessed type int (*)(void);
// 20003608: using guessed type int (*)(void);
// 20003614: using guessed type int (*)(void);
// 20003618: using guessed type int (__fastcall *)(_DWORD);
// 2000361C: using guessed type int (__fastcall *)(_DWORD);
// 20003620: using guessed type int (__fastcall *)(_DWORD);
// 20003624: using guessed type int (__fastcall *)(_DWORD);
// 20003694: using guessed type int (*)(void);
// 20003698: using guessed type int (*)(void);

//----- (00012D34) --------------------------------------------------------
int __fastcall sub_12D34(unsigned __int8 *a1, int a2, int a3, int a4)
{
  BOOL v4; // r4
  int v5; // r1
  int v6; // r1
  int v8; // r1
  unsigned int v9; // r1
  int v10; // r2
  int (__fastcall *v11)(unsigned __int8 *); // r1
  unsigned int v12; // r0
  int v13; // r1
  int v14; // [sp+0h] [bp-4h] BYREF

  v14 = a4;
  v4 = 1;
  if ( *a1 >> 7 )
  {
    v5 = a1[1];
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
      {
        if ( v5 == 3 )
        {
          LOBYTE(v14) = sub_12518(a1[4]);
          v4 = sub_121F0((int)&v14, 1) >= 0;
LABEL_37:
          sub_13F70(2u);
          return v4;
        }
        return 0;
      }
      sub_13F70(3u);
      return 1;
    }
    v13 = a1[3];
    v4 = 0;
    if ( v13 != 1 )
    {
      if ( v13 != 3 )
        goto LABEL_37;
      v9 = 0;
      if ( !MEMORY[0x200036F5] )
        goto LABEL_37;
      v10 = MEMORY[0x200036FC];
      while ( *(unsigned __int8 *)(MEMORY[0x200036FC] + 8 * v9) != a1[2]
           || !*(_DWORD *)(8 * v9 + MEMORY[0x200036FC] + 4) )
      {
        v9 = (unsigned __int8)(v9 + 1);
        if ( v9 >= MEMORY[0x200036F5] )
          goto LABEL_37;
      }
      return (*(int (__fastcall **)(unsigned __int8 *))(8 * v9 + v10 + 4))(a1);
    }
    v11 = (int (__fastcall *)(unsigned __int8 *))MEMORY[0x20003704];
    if ( !MEMORY[0x20003704] )
      goto LABEL_37;
    return v11(a1);
  }
  v6 = a1[1];
  if ( v6 == 9 )
  {
    v8 = a1[3];
    v4 = 0;
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        sub_13F70(2u);
        v4 = 1;
        goto LABEL_37;
      }
      v9 = 0;
      if ( !MEMORY[0x200036F4] )
        goto LABEL_37;
      v10 = MEMORY[0x200036F8];
      while ( *(unsigned __int8 *)(MEMORY[0x200036F8] + 8 * v9) != a1[2]
           || !*(_DWORD *)(8 * v9 + MEMORY[0x200036F8] + 4) )
      {
        v9 = (unsigned __int8)(v9 + 1);
        if ( v9 >= MEMORY[0x200036F4] )
          goto LABEL_37;
      }
      return (*(int (__fastcall **)(unsigned __int8 *))(8 * v9 + v10 + 4))(a1);
    }
    v11 = (int (__fastcall *)(unsigned __int8 *))MEMORY[0x20003700];
    if ( !MEMORY[0x20003700] )
      goto LABEL_37;
    return v11(a1);
  }
  if ( v6 != 10 )
  {
    if ( v6 == 11 )
    {
      sub_13890(*((unsigned __int16 *)a1 + 2), *((unsigned __int16 *)a1 + 1), 1);
      goto LABEL_37;
    }
    return 0;
  }
  if ( *((_WORD *)a1 + 1) )
    v12 = 3;
  else
    v12 = 2;
  sub_13F70(v12);
  return 1;
}
// 12D42: conditional instruction was optimized away because r1.4!=0

//----- (00012E48) --------------------------------------------------------
int __fastcall sub_12E48(int result, char a2)
{
  MEMORY[0x200036FC] = result;
  MEMORY[0x200036F5] = a2;
  return result;
}

//----- (00012E54) --------------------------------------------------------
int __fastcall sub_12E54(int a1, char a2)
{
  MEMORY[0x20003690] = a1;
  MEMORY[0x200035F6] = a2;
  return 536884720;
}

//----- (00012E68) --------------------------------------------------------
int __fastcall sub_12E68(int result, char a2)
{
  MEMORY[0x200036F8] = result;
  MEMORY[0x200036F4] = a2;
  return result;
}

//----- (00012E74) --------------------------------------------------------
int __fastcall sub_12E74(int a1, char a2)
{
  MEMORY[0x2000368C] = a1;
  MEMORY[0x200035F5] = a2;
  return 536884720;
}

//----- (00012FA8) --------------------------------------------------------
char __fastcall sub_12FA8(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 16) = result;
  return result;
}

//----- (00012FB4) --------------------------------------------------------
int __fastcall sub_12FB4(int a1)
{
  int result; // r0

  _R2 = __get_CPSR();
  __disable_irq();
  result = 8 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = *(_BYTE *)(MEMORY[0x2000374C] + 17) & 0xF7 | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (00012FD8) --------------------------------------------------------
int __fastcall sub_12FD8(int a1)
{
  int result; // r0

  result = 8 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = *(_BYTE *)(MEMORY[0x2000374C] + 17) & 0xF7 | result;
  return result;
}

//----- (00012FF0) --------------------------------------------------------
int __fastcall sub_12FF0(int a1)
{
  int result; // r0

  _R2 = __get_CPSR();
  __disable_irq();
  result = 2 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = *(_BYTE *)(MEMORY[0x2000374C] + 17) & 0xFD | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (00013014) --------------------------------------------------------
int __fastcall sub_13014(int a1)
{
  int result; // r0

  result = 2 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = *(_BYTE *)(MEMORY[0x2000374C] + 17) & 0xFD | result;
  return result;
}

//----- (0001302C) --------------------------------------------------------
int __fastcall sub_1302C(int a1)
{
  int result; // r0

  _R2 = __get_CPSR();
  __disable_irq();
  result = 4 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = *(_BYTE *)(MEMORY[0x2000374C] + 17) & 0xFB | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (00013050) --------------------------------------------------------
int __fastcall sub_13050(int a1)
{
  int result; // r0

  result = 4 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = *(_BYTE *)(MEMORY[0x2000374C] + 17) & 0xFB | result;
  return result;
}

//----- (00013068) --------------------------------------------------------
int __fastcall sub_13068(int a1)
{
  int v2; // r1
  int result; // r0

  _R2 = __get_CPSR();
  __disable_irq();
  v2 = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 19) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 19) >> 1)) | a1;
  *(_BYTE *)(v2 + 19) = *(_BYTE *)(v2 + 19) & 0xFD | (2 * a1);
  result = 8 * a1;
  *(_BYTE *)(v2 + 19) = *(_BYTE *)(v2 + 19) & 0xF7 | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (000130A4) --------------------------------------------------------
int __fastcall sub_130A4(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 19) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 19) >> 1)) | a1;
  *(_BYTE *)(v1 + 19) = *(_BYTE *)(v1 + 19) & 0xFD | (2 * a1);
  result = 8 * a1;
  *(_BYTE *)(v1 + 19) = *(_BYTE *)(v1 + 19) & 0xF7 | result;
  return result;
}

//----- (000130D0) --------------------------------------------------------
int __fastcall sub_130D0(int a1)
{
  int result; // r0

  result = 4 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 19) = *(_BYTE *)(MEMORY[0x2000374C] + 19) & 0xFB | result;
  return result;
}

//----- (000130E8) --------------------------------------------------------
int __fastcall sub_130E8(int a1)
{
  int v2; // r1
  int result; // r0

  _R2 = __get_CPSR();
  __disable_irq();
  v2 = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 20) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 20) >> 1)) | a1;
  *(_BYTE *)(v2 + 20) = *(_BYTE *)(v2 + 20) & 0xFD | (2 * a1);
  result = 8 * a1;
  *(_BYTE *)(v2 + 20) = *(_BYTE *)(v2 + 20) & 0xF7 | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (00013124) --------------------------------------------------------
int __fastcall sub_13124(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 20) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 20) >> 1)) | a1;
  *(_BYTE *)(v1 + 20) = *(_BYTE *)(v1 + 20) & 0xFD | (2 * a1);
  result = 8 * a1;
  *(_BYTE *)(v1 + 20) = *(_BYTE *)(v1 + 20) & 0xF7 | result;
  return result;
}

//----- (00013150) --------------------------------------------------------
int __fastcall sub_13150(int a1)
{
  int result; // r0

  result = 4 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 20) = *(_BYTE *)(MEMORY[0x2000374C] + 20) & 0xFB | result;
  return result;
}

//----- (00013168) --------------------------------------------------------
int __fastcall sub_13168(int a1)
{
  int v2; // r1
  int result; // r0

  _R2 = __get_CPSR();
  __disable_irq();
  v2 = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 21) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 21) >> 1)) | a1;
  *(_BYTE *)(v2 + 21) = *(_BYTE *)(v2 + 21) & 0xFD | (2 * a1);
  result = 8 * a1;
  *(_BYTE *)(v2 + 21) = *(_BYTE *)(v2 + 21) & 0xF7 | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (000131A4) --------------------------------------------------------
int __fastcall sub_131A4(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 21) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 21) >> 1)) | a1;
  *(_BYTE *)(v1 + 21) = *(_BYTE *)(v1 + 21) & 0xFD | (2 * a1);
  result = 8 * a1;
  *(_BYTE *)(v1 + 21) = *(_BYTE *)(v1 + 21) & 0xF7 | result;
  return result;
}

//----- (000131D0) --------------------------------------------------------
int __fastcall sub_131D0(int a1)
{
  int result; // r0

  result = 4 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 21) = *(_BYTE *)(MEMORY[0x2000374C] + 21) & 0xFB | result;
  return result;
}

//----- (000131E8) --------------------------------------------------------
int __fastcall sub_131E8(int a1)
{
  int v2; // r1
  int result; // r0

  _R2 = __get_CPSR();
  __disable_irq();
  v2 = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 22) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 22) >> 1)) | a1;
  *(_BYTE *)(v2 + 22) = *(_BYTE *)(v2 + 22) & 0xFD | (2 * a1);
  result = 8 * a1;
  *(_BYTE *)(v2 + 22) = *(_BYTE *)(v2 + 22) & 0xF7 | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (00013224) --------------------------------------------------------
int __fastcall sub_13224(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 22) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 22) >> 1)) | a1;
  *(_BYTE *)(v1 + 22) = *(_BYTE *)(v1 + 22) & 0xFD | (2 * a1);
  result = 8 * a1;
  *(_BYTE *)(v1 + 22) = *(_BYTE *)(v1 + 22) & 0xF7 | result;
  return result;
}

//----- (00013250) --------------------------------------------------------
int __fastcall sub_13250(int a1)
{
  int result; // r0

  result = 4 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 22) = *(_BYTE *)(MEMORY[0x2000374C] + 22) & 0xFB | result;
  return result;
}

//----- (0001327C) --------------------------------------------------------
int __fastcall sub_1327C(int a1)
{
  int result; // r0

  result = 8 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 18) = *(_BYTE *)(MEMORY[0x2000374C] + 18) & 0xF7 | result;
  return result;
}

//----- (00013294) --------------------------------------------------------
char __fastcall sub_13294(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 18) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 18) >> 1)) | result;
  return result;
}

//----- (000132A8) --------------------------------------------------------
int __fastcall sub_132A8(int a1)
{
  int result; // r0

  result = 2 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 18) = *(_BYTE *)(MEMORY[0x2000374C] + 18) & 0xFD | result;
  return result;
}

//----- (000132C0) --------------------------------------------------------
char __fastcall sub_132C0(char result)
{
  _R2 = __get_CPSR();
  __disable_irq();
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 17) >> 1)) | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (000132E0) --------------------------------------------------------
char __fastcall sub_132E0(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 17) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 17) >> 1)) | result;
  return result;
}

//----- (000132F4) --------------------------------------------------------
char __fastcall sub_132F4(char result)
{
  _R2 = __get_CPSR();
  __disable_irq();
  *(_BYTE *)(MEMORY[0x20003750] + 3) = (2 * (*(_BYTE *)(MEMORY[0x20003750] + 3) >> 1)) | result;
  __asm { MSR.W           PRIMASK, R2 }
  return result;
}

//----- (00013314) --------------------------------------------------------
char __fastcall sub_13314(char result)
{
  *(_BYTE *)(MEMORY[0x20003750] + 3) = (2 * (*(_BYTE *)(MEMORY[0x20003750] + 3) >> 1)) | result;
  return result;
}

//----- (00013328) --------------------------------------------------------
int __fastcall sub_13328(int a1)
{
  int result; // r0

  result = 4 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 18) = *(_BYTE *)(MEMORY[0x2000374C] + 18) & 0xFB | result;
  return result;
}

//----- (0001339C) --------------------------------------------------------
int sub_1339C()
{
  sub_FED8();
  sub_107FE();
  sub_107F6();
  sub_F304();
  MEMORY[0x200035F7] |= 1u;
  return 536884720;
}

//----- (000133C4) --------------------------------------------------------
int sub_133C4()
{
  int result; // r0

  sub_3CF8(0);
  sub_11C78(16000);
  *(_BYTE *)(MEMORY[0x2000374C] + 7) = *(_BYTE *)(MEMORY[0x2000374C] + 7) & 0xFE | 1;
  sub_11C78(480);
  result = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 7) = 2 * (*(_BYTE *)(MEMORY[0x2000374C] + 7) >> 1);
  return result;
}

//----- (000133FC) --------------------------------------------------------
unsigned int sub_133FC()
{
  unsigned int result; // r0

  MEMORY[0x200035F0] = 0;
  sub_12118();
  sub_13600(0x40u);
  sub_13620(1);
  sub_135C0(1);
  MEMORY[0x200035FC] = 268458733;
  sub_136B4(0x40u);
  sub_136D4(2);
  sub_13674(1);
  MEMORY[0x20003600] = 536871019;
  sub_13768(0x40u);
  sub_13788(3);
  sub_13728(1);
  MEMORY[0x20003604] = 268459013;
  sub_1380C(0x40u);
  sub_1382C(4);
  sub_137DC(0);
  sub_137F8();
  MEMORY[0x20003608] = 0;
  sub_12FA8(0);
  sub_13294(0);
  sub_132A8(0);
  sub_13328(0);
  sub_1327C(0);
  sub_132C0(0);
  sub_130A4(0);
  sub_13124(0);
  sub_131A4(0);
  sub_13224(0);
  sub_1365C(0);
  sub_1351C();
  sub_13710(0);
  sub_13530();
  sub_137C4(0);
  sub_13544();
  sub_13848(0);
  sub_13558();
  MEMORY[0x200036BC] = 0;
  MEMORY[0x200036C0] = 0;
  MEMORY[0x200036C4] = 0;
  MEMORY[0x200036C8] = 0;
  _R0 = __get_CPSR();
  __disable_irq();
  MEMORY[0x20003FFC] = 0;
  __asm { MSR.W           PRIMASK, R0 }
  for ( result = 0; result < 4; result = (unsigned __int8)(result + 1) )
  {
    *(_WORD *)(2 * result + 0x200036E0) = 1;
    if ( !result )
      MEMORY[0x20003CD6] = 0;
  }
  return result;
}

//----- (0001351C) --------------------------------------------------------
int sub_1351C()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 65) |= 4u;
  return result;
}

//----- (00013530) --------------------------------------------------------
int sub_13530()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 67) |= 4u;
  return result;
}

//----- (00013544) --------------------------------------------------------
int sub_13544()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 69) |= 4u;
  return result;
}

//----- (00013558) --------------------------------------------------------
int sub_13558()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 71) |= 4u;
  return result;
}

//----- (00013584) --------------------------------------------------------
int __fastcall sub_13584(int a1)
{
  int result; // r0

  result = a1 << 7;
  *(_BYTE *)(MEMORY[0x2000374C] + 1) = *(_BYTE *)(MEMORY[0x2000374C] + 1) & 0x7F | result;
  return result;
}

//----- (0001359C) --------------------------------------------------------
int __fastcall sub_1359C(char a1)
{
  int result; // r0

  result = a1 & 0x7F;
  *(_BYTE *)(MEMORY[0x2000374C] + 1) = (*(_BYTE *)(MEMORY[0x2000374C] + 1) >> 7 << 7) | result;
  return result;
}

//----- (000135B4) --------------------------------------------------------
char __fastcall sub_135B4(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 6) = result;
  return result;
}

//----- (000135C0) --------------------------------------------------------
int __fastcall sub_135C0(int a1)
{
  int result; // r0

  result = (16 * a1) & 0x1F;
  *(_BYTE *)(MEMORY[0x2000374C] + 97) = *(_BYTE *)(MEMORY[0x2000374C] + 97) & 0xEF | result;
  return result;
}

//----- (000135DC) --------------------------------------------------------
int sub_135DC()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 65) |= 1u;
  return result;
}

//----- (000135F0) --------------------------------------------------------
char __fastcall sub_135F0(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 49) = result;
  return result;
}

//----- (00013600) --------------------------------------------------------
int __fastcall sub_13600(unsigned int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 64) = a1;
  result = (a1 >> 2) & 0xC0;
  *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0x3F | result;
  return result;
}

//----- (00013620) --------------------------------------------------------
int __fastcall sub_13620(char a1)
{
  int result; // r0

  result = a1 & 0xF;
  *(_BYTE *)(MEMORY[0x2000374C] + 97) = (16 * (*(_BYTE *)(MEMORY[0x2000374C] + 97) >> 4)) | result;
  return result;
}

//----- (0001363C) --------------------------------------------------------
int __fastcall sub_1363C(unsigned int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C] + 96;
  *(_BYTE *)(MEMORY[0x2000374C] + 96) = a1;
  result = (a1 >> 2) & 0xC0;
  *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0x3F | result;
  return result;
}

//----- (0001365C) --------------------------------------------------------
int __fastcall sub_1365C(int a1)
{
  int result; // r0

  result = 8 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 65) = *(_BYTE *)(MEMORY[0x2000374C] + 65) & 0xF7 | result;
  return result;
}

//----- (00013674) --------------------------------------------------------
int __fastcall sub_13674(int a1)
{
  int result; // r0

  result = (16 * a1) & 0x1F;
  *(_BYTE *)(MEMORY[0x2000374C] + 99) = *(_BYTE *)(MEMORY[0x2000374C] + 99) & 0xEF | result;
  return result;
}

//----- (00013690) --------------------------------------------------------
int sub_13690()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 67) |= 1u;
  return result;
}

//----- (000136A4) --------------------------------------------------------
char __fastcall sub_136A4(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 50) = result;
  return result;
}

//----- (000136B4) --------------------------------------------------------
int __fastcall sub_136B4(unsigned int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 66) = a1;
  result = (a1 >> 2) & 0xC0;
  *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0x3F | result;
  return result;
}

//----- (000136D4) --------------------------------------------------------
int __fastcall sub_136D4(char a1)
{
  int result; // r0

  result = a1 & 0xF;
  *(_BYTE *)(MEMORY[0x2000374C] + 99) = (16 * (*(_BYTE *)(MEMORY[0x2000374C] + 99) >> 4)) | result;
  return result;
}

//----- (000136F0) --------------------------------------------------------
int __fastcall sub_136F0(unsigned int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C] + 96;
  *(_BYTE *)(MEMORY[0x2000374C] + 98) = a1;
  result = (a1 >> 2) & 0xC0;
  *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0x3F | result;
  return result;
}

//----- (00013710) --------------------------------------------------------
int __fastcall sub_13710(int a1)
{
  int result; // r0

  result = 8 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 67) = *(_BYTE *)(MEMORY[0x2000374C] + 67) & 0xF7 | result;
  return result;
}

//----- (00013728) --------------------------------------------------------
int __fastcall sub_13728(int a1)
{
  int result; // r0

  result = (16 * a1) & 0x1F;
  *(_BYTE *)(MEMORY[0x2000374C] + 101) = *(_BYTE *)(MEMORY[0x2000374C] + 101) & 0xEF | result;
  return result;
}

//----- (00013744) --------------------------------------------------------
int sub_13744()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 69) |= 1u;
  return result;
}

//----- (00013758) --------------------------------------------------------
char __fastcall sub_13758(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 51) = result;
  return result;
}

//----- (00013768) --------------------------------------------------------
int __fastcall sub_13768(unsigned int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 68) = a1;
  result = (a1 >> 2) & 0xC0;
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0x3F | result;
  return result;
}

//----- (00013788) --------------------------------------------------------
int __fastcall sub_13788(char a1)
{
  int result; // r0

  result = a1 & 0xF;
  *(_BYTE *)(MEMORY[0x2000374C] + 101) = (16 * (*(_BYTE *)(MEMORY[0x2000374C] + 101) >> 4)) | result;
  return result;
}

//----- (000137A4) --------------------------------------------------------
int __fastcall sub_137A4(unsigned int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C] + 96;
  *(_BYTE *)(MEMORY[0x2000374C] + 100) = a1;
  result = (a1 >> 2) & 0xC0;
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0x3F | result;
  return result;
}

//----- (000137C4) --------------------------------------------------------
int __fastcall sub_137C4(int a1)
{
  int result; // r0

  result = 8 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 69) = *(_BYTE *)(MEMORY[0x2000374C] + 69) & 0xF7 | result;
  return result;
}

//----- (000137DC) --------------------------------------------------------
int __fastcall sub_137DC(int a1)
{
  int result; // r0

  result = (16 * a1) & 0x1F;
  *(_BYTE *)(MEMORY[0x2000374C] + 103) = *(_BYTE *)(MEMORY[0x2000374C] + 103) & 0xEF | result;
  return result;
}

//----- (000137F8) --------------------------------------------------------
int sub_137F8()
{
  int result; // r0

  result = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 71) |= 1u;
  return result;
}

//----- (0001380C) --------------------------------------------------------
int __fastcall sub_1380C(unsigned int a1)
{
  int v1; // r1
  int result; // r0

  v1 = MEMORY[0x2000374C] + 64;
  *(_BYTE *)(MEMORY[0x2000374C] + 70) = a1;
  result = (a1 >> 2) & 0xC0;
  *(_BYTE *)(v1 + 7) = *(_BYTE *)(v1 + 7) & 0x3F | result;
  return result;
}

//----- (0001382C) --------------------------------------------------------
int __fastcall sub_1382C(char a1)
{
  int result; // r0

  result = a1 & 0xF;
  *(_BYTE *)(MEMORY[0x2000374C] + 103) = (16 * (*(_BYTE *)(MEMORY[0x2000374C] + 103) >> 4)) | result;
  return result;
}

//----- (00013848) --------------------------------------------------------
int __fastcall sub_13848(int a1)
{
  int result; // r0

  result = 8 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 71) = *(_BYTE *)(MEMORY[0x2000374C] + 71) & 0xF7 | result;
  return result;
}

//----- (00013878) --------------------------------------------------------
__int16 __fastcall sub_13878(__int16 result)
{
  MEMORY[0x200035C2] = result;
  return result;
}

//----- (00013884) --------------------------------------------------------
int __fastcall sub_13884(int result)
{
  MEMORY[0x200035C4] = result;
  return result;
}

//----- (00013890) --------------------------------------------------------
void __fastcall sub_13890(int a1, int a2, int a3)
{
  *(_WORD *)(2 * a1 + 0x200036E0) = a2;
  if ( !a1 )
  {
    MEMORY[0x20003CD6] = a2 == 0;
    if ( a3 )
      sub_3C74(a2 == 0);
  }
}

//----- (000138C8) --------------------------------------------------------
int sub_138C8()
{
  int v0; // r0
  int result; // r0

  v0 = MEMORY[0x20003750];
  *MEMORY[0x20003750] = *MEMORY[0x20003750] & 0xFE | 1;
  while ( (*(_BYTE *)(v0 + 2) & 1) == 0 )
    ;
  result = MEMORY[0x2000374C];
  *(_BYTE *)(MEMORY[0x2000374C] + 7) = *(_BYTE *)(MEMORY[0x2000374C] + 7) & 0xDF | 0x20;
  *(_BYTE *)(result + 7) &= ~0x20u;
  return result;
}

//----- (000138F8) --------------------------------------------------------
int __fastcall sub_138F8(int a1)
{
  int result; // r0

  result = 16 * a1;
  *(_BYTE *)(MEMORY[0x2000374C] + 7) = *(_BYTE *)(MEMORY[0x2000374C] + 7) & 0xEF | result;
  return result;
}

//----- (00013910) --------------------------------------------------------
char __fastcall sub_13910(char result)
{
  *(_BYTE *)(MEMORY[0x2000374C] + 7) = (2 * (*(_BYTE *)(MEMORY[0x2000374C] + 7) >> 1)) | result;
  return result;
}

//----- (00013924) --------------------------------------------------------
int __fastcall sub_13924(char a1)
{
  int result; // r0

  result = a1 & 1;
  *(_BYTE *)(MEMORY[0x20003750] + 4) = (2 * (*(_BYTE *)(MEMORY[0x20003750] + 4) >> 1)) | result;
  return result;
}

//----- (00013978) --------------------------------------------------------
int __fastcall sub_13978(int result)
{
  MEMORY[0x20003700] = result;
  return result;
}

//----- (00013984) --------------------------------------------------------
int sub_13984()
{
  int v0; // r0
  int result; // r0
  unsigned int v2; // r4
  unsigned int v3; // r2
  int v4; // r1
  unsigned __int8 v5[6]; // [sp+0h] [bp-48h] BYREF
  _BYTE v6[58]; // [sp+6h] [bp-42h] BYREF
  unsigned __int8 v7[8]; // [sp+40h] [bp-8h] BYREF

  v0 = sub_12158(0, 0);
  if ( v0 < 0 )
    return 0;
  if ( v0 > 0 )
  {
    sub_121B4();
    return 1;
  }
  v2 = 0;
  while ( sub_12518(v2) )
  {
    v2 = (unsigned __int8)(v2 + 1);
    if ( v2 >= 4 )
    {
      if ( MEMORY[0x200037AC] == 2 )
      {
        v3 = (unsigned __int8)--MEMORY[0x200037AC];
        v4 = 536887625;
        goto LABEL_12;
      }
      break;
    }
  }
  v3 = MEMORY[0x200037AC];
  v4 = 536887624;
LABEL_12:
  sub_141A(v6, (char *)v4, v3);
  v5[1] = MEMORY[0x200037AC] + 104;
  v5[2] = 104;
  v5[3] = MEMORY[0x200037AC];
  result = sub_A8F0(v5, (int)v7);
  if ( result )
  {
    sub_79C8(0xFFu, 0x20u, v7);
    sub_13F70(4u);
    return 1;
  }
  return result;
}

//----- (00013A24) --------------------------------------------------------
int __fastcall sub_13A24(int result)
{
  MEMORY[0x20003694] = result;
  return result;
}

//----- (00013A30) --------------------------------------------------------
int __fastcall sub_13A30(int result, char a2)
{
  MEMORY[0x20003718] = result;
  MEMORY[0x20003711] = a2;
  return result;
}

//----- (00013A3C) --------------------------------------------------------
int __fastcall sub_13A3C(int result, char a2)
{
  MEMORY[0x20003714] = result;
  MEMORY[0x20003710] = a2;
  return result;
}

//----- (00013A48) --------------------------------------------------------
int __fastcall sub_13A48(int a1, char a2)
{
  MEMORY[0x20003688] = a1;
  MEMORY[0x200035F4] = a2;
  return 536884720;
}

//----- (00013A5C) --------------------------------------------------------
int __fastcall sub_13A5C(int a1, char a2)
{
  MEMORY[0x20003684] = a1;
  MEMORY[0x200035F3] = a2;
  return 536884720;
}

//----- (00013A70) --------------------------------------------------------
int __fastcall sub_13A70(int result)
{
  MEMORY[0x20003674] = result;
  return result;
}

//----- (00013A7C) --------------------------------------------------------
int __fastcall sub_13A7C(int result)
{
  MEMORY[0x20003678] = result;
  return result;
}

//----- (00013A88) --------------------------------------------------------
int __fastcall sub_13A88(int result)
{
  MEMORY[0x20003614] = result;
  return result;
}

//----- (00013A94) --------------------------------------------------------
int __fastcall sub_13A94(int a1, int a2, int a3)
{
  MEMORY[0x20003618] = a1;
  MEMORY[0x200036AC] = a3;
  MEMORY[0x2000369C] = a2;
  return 536884848;
}

//----- (00013AA8) --------------------------------------------------------
int __fastcall sub_13AA8(int a1, int a2, int a3)
{
  MEMORY[0x2000361C] = a1;
  MEMORY[0x200036B0] = a3;
  MEMORY[0x200036A0] = a2;
  return 536884848;
}

//----- (00013ABC) --------------------------------------------------------
int __fastcall sub_13ABC(int a1, int a2, int a3)
{
  MEMORY[0x20003620] = a1;
  MEMORY[0x200036B4] = a3;
  MEMORY[0x200036A4] = a2;
  return 536884848;
}

//----- (00013AD0) --------------------------------------------------------
int __fastcall sub_13AD0(int a1, int a2, int a3)
{
  MEMORY[0x20003624] = a1;
  MEMORY[0x200036B8] = a3;
  MEMORY[0x200036A8] = a2;
  return 536884848;
}

//----- (00013AE4) --------------------------------------------------------
int __fastcall sub_13AE4(int result)
{
  MEMORY[0x2000360C] = result;
  return result;
}

//----- (00013AF0) --------------------------------------------------------
int __fastcall sub_13AF0(int result)
{
  MEMORY[0x20003610] = result;
  return result;
}

//----- (00013AFC) --------------------------------------------------------
int __fastcall sub_13AFC(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int result; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v17; // r0
  int v21; // r0
  int v22; // r0
  unsigned int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r5
  int v28; // r0
  int v29; // r0
  unsigned int v30; // r1
  int v31; // r0
  int v32; // r1
  int v33; // r0
  BOOL v34; // r4
  unsigned int v35; // r0
  int v36; // r0
  int v37; // r6
  int v38; // r5
  int v39; // r0
  int v40; // r0
  int v42; // [sp+0h] [bp-4h] BYREF

  v42 = a4;
  switch ( *(_BYTE *)(a1 + 1) )
  {
    case 0:
      LOWORD(v42) = 0;
      v5 = 1;
      v6 = *(_BYTE *)a1 & 0x1F;
      if ( (*(_BYTE *)a1 & 0x1F) != 0 )
      {
        if ( v6 == 1 )
        {
          LOWORD(v42) = 0;
          goto LABEL_27;
        }
        if ( v6 != 2 )
          return 0;
        v7 = *(unsigned __int16 *)(a1 + 4);
        if ( v7 != 128 )
        {
          if ( *(unsigned __int16 *)(a1 + 4) <= 0x80u )
          {
            switch ( *(_WORD *)(a1 + 4) )
            {
              case 0:
                goto LABEL_27;
              case 1:
                goto LABEL_19;
              case 2:
                goto LABEL_21;
              case 3:
                goto LABEL_23;
              case 4:
                goto LABEL_25;
              default:
                return 0;
            }
          }
          switch ( v7 )
          {
            case 129:
LABEL_19:
              if ( !sub_12334() )
                goto LABEL_27;
              goto LABEL_26;
            case 130:
LABEL_21:
              if ( !sub_123AC() )
                goto LABEL_27;
              goto LABEL_26;
            case 131:
LABEL_23:
              if ( !sub_12424() )
                goto LABEL_27;
              goto LABEL_26;
          }
          if ( v7 != 132 )
            return 0;
LABEL_25:
          if ( sub_1249C() )
LABEL_26:
            LOWORD(v42) = v42 | 1;
        }
      }
      else
      {
        if ( sub_B090() )
          LOWORD(v42) = v42 | 1;
        if ( sub_12524() )
          LOWORD(v42) = v42 | 2;
      }
LABEL_27:
      if ( sub_121F0((int)&v42, 2) < 0 )
        v5 = 0;
      sub_13F70(2u);
      return v5;
    case 1:
      v9 = *(_BYTE *)a1 & 0x1F;
      if ( (*(_BYTE *)a1 & 0x1F) == 0 )
      {
        if ( *(_WORD *)(a1 + 2) != 1 )
          return 0;
        sub_13910(0);
        v10 = 0;
LABEL_56:
        sub_138F8(v10);
        goto LABEL_133;
      }
      if ( v9 == 2 && !*(_WORD *)(a1 + 2) )
      {
        v11 = *(unsigned __int16 *)(a1 + 4);
        if ( v11 != 129 )
        {
          if ( *(unsigned __int16 *)(a1 + 4) > 0x81u )
          {
            if ( v11 != 130 )
            {
              if ( v11 != 131 )
              {
                if ( v11 != 132 )
                  return 0;
                goto LABEL_51;
              }
              goto LABEL_50;
            }
            goto LABEL_48;
          }
          if ( v11 != 1 )
          {
            if ( v11 != 2 )
            {
              if ( v11 != 3 )
              {
                if ( v11 != 4 )
                  return 0;
LABEL_51:
                _R4 = __get_CPSR();
                __disable_irq();
                sub_13848(0);
                sub_13558();
                __asm { MSR.W           PRIMASK, R4 }
                v17 = 3;
                goto LABEL_49;
              }
LABEL_50:
              _R4 = __get_CPSR();
              __disable_irq();
              sub_137C4(0);
              sub_13544();
              __asm { MSR.W           PRIMASK, R4 }
              v17 = 2;
              goto LABEL_49;
            }
LABEL_48:
            _R4 = __get_CPSR();
            __disable_irq();
            sub_13710(0);
            sub_1351C();
            __asm { MSR.W           PRIMASK, R4 }
            v17 = 1;
            goto LABEL_49;
          }
        }
        _R4 = __get_CPSR();
        __disable_irq();
        sub_1365C(0);
        sub_1351C();
        __asm { MSR.W           PRIMASK, R4 }
        v17 = 0;
LABEL_49:
        sub_12244(v17, 0);
        goto LABEL_133;
      }
      return 0;
    case 3:
      v21 = *(_BYTE *)a1 & 0x1F;
      if ( (*(_BYTE *)a1 & 0x1F) == 0 )
      {
        v10 = *(unsigned __int16 *)(a1 + 2);
        if ( v10 != 1 )
          return 0;
        goto LABEL_56;
      }
      if ( v21 != 2 )
        return 0;
      if ( *(_WORD *)(a1 + 2) )
        return 0;
      v22 = *(unsigned __int16 *)(a1 + 4);
      if ( v22 == 128 )
        return 0;
      if ( *(unsigned __int16 *)(a1 + 4) <= 0x80u )
      {
        switch ( *(_WORD *)(a1 + 4) )
        {
          case 1:
            goto LABEL_66;
          case 2:
            goto LABEL_67;
          case 3:
            goto LABEL_69;
          case 4:
            goto LABEL_70;
          default:
            return 0;
        }
      }
      switch ( v22 )
      {
        case 129:
LABEL_66:
          _R4 = __get_CPSR();
          __disable_irq();
          sub_1365C(1);
          break;
        case 130:
LABEL_67:
          _R4 = __get_CPSR();
          __disable_irq();
          sub_13710(1);
          break;
        case 131:
LABEL_69:
          _R4 = __get_CPSR();
          __disable_irq();
          sub_137C4(1);
          break;
        case 132:
LABEL_70:
          _R4 = __get_CPSR();
          __disable_irq();
          sub_13848(1);
          break;
        default:
          return 0;
      }
      goto LABEL_68;
    case 5:
      v24 = *(unsigned __int16 *)(a1 + 2);
      if ( v24 > 0xFF )
        return 0;
      sub_1359C(v24);
      goto LABEL_133;
    case 6:
      v25 = *(_BYTE *)a1 & 0x1F;
      if ( (*(_BYTE *)a1 & 0x1F) == 0 )
        return sub_58F8(a1);
      if ( v25 != 1 )
        return 0;
      v26 = *(unsigned __int8 *)(a1 + 3);
      v27 = 1;
      if ( v26 == 33 )
      {
        v28 = *(unsigned __int16 *)(a1 + 4);
        if ( *(_WORD *)(a1 + 4) )
        {
          if ( v28 == 1 )
          {
            v29 = 268518891;
          }
          else
          {
            if ( v28 != 2 )
              return 0;
            v29 = 268518916;
          }
        }
        else
        {
          v29 = 268518866;
        }
        v30 = 9;
      }
      else
      {
        if ( v26 != 34 )
          return 0;
        v31 = *(unsigned __int16 *)(a1 + 4);
        if ( *(_WORD *)(a1 + 4) )
        {
          if ( v31 == 1 )
          {
            v29 = 268518600;
            v32 = 536884708;
            goto LABEL_93;
          }
          if ( v31 == 2 )
          {
            v29 = 268518788;
            v32 = 536884716;
LABEL_93:
            v30 = *(_DWORD *)v32;
            goto LABEL_94;
          }
          return 0;
        }
        v29 = 268518723;
        v30 = MEMORY[0x200035E8];
      }
LABEL_94:
      if ( *(unsigned __int16 *)(a1 + 6) < v30 )
        v30 = *(unsigned __int16 *)(a1 + 6);
      v33 = sub_121F0(v29, v30);
      if ( v33 > 0 )
        return sub_13F70(0x64u);
      if ( v33 < 0 )
        return 0;
      sub_13F70(2u);
      return v27;
    case 7:
      return sub_13F70(3u);
    case 8:
      v34 = sub_121F0(536885000, 1) >= 0;
      sub_13F70(2u);
      return v34;
    case 9:
      v35 = *(unsigned __int8 *)(a1 + 2);
      if ( *(_BYTE *)(a1 + 2) )
      {
        if ( v35 >= 4 )
          return 0;
        sub_133FC();
        MEMORY[0x20003708] = *(_BYTE *)(a1 + 2);
        v36 = 1;
      }
      else
      {
        v36 = 0;
        MEMORY[0x20003708] = 0;
      }
      sub_13584(v36);
      goto LABEL_133;
    case 0xA:
      v37 = 1;
      v38 = 0;
      result = sub_12250();
      if ( !result )
        return result;
      if ( MEMORY[0x20003708] != 1 )
        return 0;
      v39 = *(unsigned __int16 *)(a1 + 4);
      if ( *(_WORD *)(a1 + 4) )
      {
        if ( v39 == 1 )
        {
          v38 = 536885004;
        }
        else if ( v39 == 2 )
        {
          v38 = 536885006;
        }
      }
      else
      {
        v38 = 536885002;
      }
      if ( sub_121F0(v38, 1) < 0 )
        v37 = 0;
      sub_13F70(2u);
      return v37;
    case 0xB:
      result = sub_12250();
      if ( !result )
        return result;
      v40 = *(unsigned __int16 *)(a1 + 4);
      if ( *(_WORD *)(a1 + 4) )
      {
        if ( v40 != 1 )
        {
          if ( v40 != 2 )
            return 0;
          if ( *(_WORD *)(a1 + 2) )
            goto LABEL_133;
          MEMORY[0x2000370E] = *(_WORD *)(a1 + 2);
          _R4 = __get_CPSR();
          __disable_irq();
          sub_13544();
          sub_13558();
LABEL_68:
          __asm { MSR.W           PRIMASK, R4 }
          goto LABEL_133;
        }
        if ( !*(_WORD *)(a1 + 2) )
        {
          MEMORY[0x2000370C] = *(_WORD *)(a1 + 2);
          _R4 = __get_CPSR();
          __disable_irq();
          sub_13530();
          goto LABEL_68;
        }
      }
      else if ( !*(_WORD *)(a1 + 2) )
      {
        MEMORY[0x2000370A] = *(_WORD *)(a1 + 2);
        _R4 = __get_CPSR();
        __disable_irq();
        sub_1351C();
        __asm { MSR.W           PRIMASK, R4 }
      }
LABEL_133:
      sub_13F70(2u);
      return 1;
    default:
      return 0;
  }
}

//----- (00013F04) --------------------------------------------------------
int __fastcall sub_13F04(unsigned __int8 *a1)
{
  unsigned int v1; // r1
  int v2; // r2

  if ( *a1 >> 7 )
  {
    v1 = 0;
    if ( MEMORY[0x20003711] )
    {
      v2 = MEMORY[0x20003718];
      while ( *(unsigned __int8 *)(MEMORY[0x20003718] + 8 * v1) != a1[1]
           || !*(_DWORD *)(8 * v1 + MEMORY[0x20003718] + 4) )
      {
        v1 = (unsigned __int8)(v1 + 1);
        if ( v1 >= MEMORY[0x20003711] )
          goto LABEL_14;
      }
      return (*(int (**)(void))(8 * v1 + v2 + 4))();
    }
  }
  else
  {
    v1 = 0;
    if ( MEMORY[0x20003710] )
    {
      v2 = MEMORY[0x20003714];
      while ( *(unsigned __int8 *)(MEMORY[0x20003714] + 8 * v1) != a1[1]
           || !*(_DWORD *)(8 * v1 + MEMORY[0x20003714] + 4) )
      {
        v1 = (unsigned __int8)(v1 + 1);
        if ( v1 >= MEMORY[0x20003710] )
          goto LABEL_14;
      }
      return (*(int (**)(void))(8 * v1 + v2 + 4))();
    }
  }
LABEL_14:
  sub_13F70(2u);
  return 0;
}

//----- (00013F70) --------------------------------------------------------
int __fastcall sub_13F70(unsigned int a1)
{
  if ( MEMORY[0x200035FA] == 1 || (unsigned int)MEMORY[0x200035FA] - 201 < 0x62 && a1 == 4 || a1 < 4 )
  {
    MEMORY[0x200035FA] = a1;
    return 1;
  }
  else
  {
    MEMORY[0x200035FA] = 3;
    return 0;
  }
}

//----- (00013FA4) --------------------------------------------------------
int sub_13FA4()
{
  int result; // r0

  result = MEMORY[0x20003885];
  if ( MEMORY[0x20003885] )
    return sub_13FAC();
  return result;
}
// 13FAC: using guessed type int sub_13FAC(void);

//----- (00013FAC) --------------------------------------------------------
int sub_13FAC()
{
  return sub_13FBC(1);
}

//----- (00013FBC) --------------------------------------------------------
int __fastcall sub_13FBC(int a1)
{
  int v1; // r2
  unsigned int v2; // r1

  v1 = 0;
  v2 = MEMORY[0x5000801C] & a1;
  if ( (MEMORY[0x5000801C] & a1) == 0 )
    return 0;
  do
  {
    if ( v2 << 31 )
      *(_DWORD *)(4 * v1 + 0x50008024) = 1601581588;
    v2 >>= 1;
    v1 = (unsigned __int8)(v1 + 1);
  }
  while ( v2 );
  return 1;
}

//----- (00014010) --------------------------------------------------------
int __fastcall sub_14010(int result)
{
  MEMORY[0x5000801C] = result;
  return result;
}

//----- (0001401C) --------------------------------------------------------
int __fastcall sub_1401C(int result)
{
  if ( result )
    --result;
  MEMORY[0x50008018] = result;
  return result;
}

//----- (0001402C) --------------------------------------------------------
int __fastcall sub_1402C(int a1)
{
  bool v1; // zf
  char v2; // r0
  int result; // r0

  if ( a1 == 1 )
  {
    MEMORY[0x50001001] &= ~8u;
    MEMORY[0x50001001] |= 2u;
    MEMORY[0x50001003] = 0;
    return 0;
  }
  else
  {
    v1 = a1 == 2;
    v2 = MEMORY[0x50001001];
    if ( v1 )
    {
      MEMORY[0x50001001] &= ~2u;
      result = v2 & 0xFD | 8;
    }
    else
    {
      MEMORY[0x50001001] &= ~8u;
      result = v2 & 0xF5;
    }
    MEMORY[0x50001001] = result;
  }
  return result;
}

//----- (00014070) --------------------------------------------------------
int sub_14070()
{
  int result; // r0

  result = 1342210048;
  if ( !MEMORY[0x50008010] )
  {
    MEMORY[0x50008000] = 1;
    while ( !MEMORY[0x50008010] )
      ;
  }
  return result;
}

//----- (0001408C) --------------------------------------------------------
int __fastcall sub_1408C(int a1)
{
  sub_140B8();
  sub_1401C(a1 << 15);
  sub_14010(1);
  sub_1402C(2);
  sub_14070();
  MEMORY[0x20003885] = 1;
  return 1;
}

//----- (000140B8) --------------------------------------------------------
int sub_140B8()
{
  int result; // r0

  result = 1342210048;
  if ( MEMORY[0x50008010] )
  {
    MEMORY[0x50008020] = 1;
    while ( MEMORY[0x50008010] )
      ;
  }
  return result;
}

//----- (000140D4) --------------------------------------------------------
int sub_140D4()
{
  sub_140B8();
  MEMORY[0x20003885] = 0;
  return 0;
}

//----- (000140E8) --------------------------------------------------------
unsigned __int8 *__fastcall sub_140E8(unsigned __int8 *result)
{
  unsigned int i; // r2

  for ( i = 0; result[4] > i; i = (unsigned __int8)(i + 1) )
    *(_BYTE *)((*result | (result[1] << 8) | (result[2] << 16) | (result[3] << 24)) + i) = result[i + 5];
  return result;
}

//----- (0001411E) --------------------------------------------------------
int sub_1411E()
{
  return sub_A98C(4, 0, 0);
}

//----- (0001412C) --------------------------------------------------------
int __fastcall sub_1412C(int a1, unsigned __int8 *a2)
{
  bool v2; // zf
  int result; // r0

  v2 = a1 == 0;
  result = (int)a2;
  if ( v2 )
  {
    sub_140E8(a2);
    return sub_A98C(4, 0, 0);
  }
  return result;
}

//----- (00014144) --------------------------------------------------------
unsigned __int8 *__fastcall sub_14144(unsigned __int8 *result)
{
  unsigned int v1; // r1
  int v2; // r2
  unsigned int i; // r1

  v1 = 0;
  if ( MEMORY[0x2000388C] )
  {
    while ( *(unsigned __int8 *)(5 * v1 + 0x10014740) != *result )
    {
      v1 = (unsigned __int8)(v1 + 1);
      if ( v1 >= MEMORY[0x2000388C] )
        goto LABEL_5;
    }
    v2 = *(unsigned __int8 *)(5 * v1 + 0x10014741)
       | (*(unsigned __int8 *)(5 * v1 + 0x10014742) << 8)
       | (*(unsigned __int8 *)(5 * v1 + 0x10014743) << 16)
       | (*(unsigned __int8 *)(5 * v1 + 0x10014744) << 24);
  }
  else
  {
LABEL_5:
    v2 = 0;
  }
  if ( v2 )
  {
    for ( i = 0; result[2] > i; i = (unsigned __int8)(i + 1) )
      *(_BYTE *)(result[1] + v2 + i) = result[i + 3];
  }
  return result;
}

//----- (000141B4) --------------------------------------------------------
int sub_141B4()
{
  return sub_A98C(2, 0, 0);
}

//----- (000141C2) --------------------------------------------------------
int __fastcall sub_141C2(int a1, unsigned __int8 *a2)
{
  bool v2; // zf
  int result; // r0

  v2 = a1 == 0;
  result = (int)a2;
  if ( v2 )
  {
    sub_14144(a2);
    return sub_A98C(2, 0, 0);
  }
  return result;
}

//----- (000141DC) --------------------------------------------------------
void *__fastcall sub_141DC(int a1, unsigned int *a2)
{
  if ( a2 && *(_BYTE *)a2 && sub_3A44((unsigned int *)&unk_15314, a2) )
    return 0;
  else
    return &unk_1531C;
}

//----- (00014208) --------------------------------------------------------
void *__fastcall sub_14208(int a1, unsigned int *a2)
{
  if ( a2 && *(_BYTE *)a2 && sub_3A44((unsigned int *)&unk_15330, a2) )
    return 0;
  else
    return &unk_15338;
}

//----- (00014234) --------------------------------------------------------
unsigned int __fastcall sub_14234(unsigned int result, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r4

  v4 = a4 | a2;
  if ( ((a4 | a2) & 0x80000000) == 0 )
  {
    if ( v4 + 0x100000 >= 0 || (int)(a4 + 0x100000) >= 0 && (int)(a2 + 0x100000) >= 0 )
      return result;
    return sub_28B4(a3, a4, result, a2, 68550681);
  }
  if ( v4 + 0x100000 >= 0 && (2 * a4 >= 0xFFE00000 || 2 * a2 >= 0xFFE00000) )
    return sub_28B4(a3, a4, result, a2, 68550681);
  return result;
}

//----- (0001429C) --------------------------------------------------------
int __fastcall sub_1429C(int a1, int a2)
{
  if ( (a1 ^ a2) < 0 )
    JUMPOUT(0x142EA);
  return sub_142A8();
}
// 142A6: control flows out of bounds to 142EA
// 142A8: using guessed type int sub_142A8(void);

//----- (000142A8) --------------------------------------------------------
void __fastcall sub_142A8(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v8; // r5
  unsigned int v9; // r4
  int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r4
  int v13; // r0

  v9 = a1 - a2;
  if ( a1 < a2 )
  {
    a1 = a2;
    a2 += v9;
  }
  v10 = (unsigned __int8)(a1 >> 23);
  if ( v10 != 255 )
  {
    v11 = (2 * a2) >> 24;
    if ( v11 )
    {
      v12 = ((a2 << 8) | v8) >> (v10 - v11);
      v13 = (a1 << 8) | v8;
      if ( __CFADD__(v13, v12) )
        ++v10;
      if ( v10 < 255 )
        __asm { POP             {R4-R6,PC} }
      __asm { POP             {R4-R6,PC} }
    }
    if ( !(unsigned __int8)(a1 >> 23) )
      __asm { POP             {R4-R6,PC} }
  }
  __asm { POP             {R4-R6,PC} }
}
// 14320: unbalanced stack, ignored a potential tail call
// 142C4: variable 'v8' is possibly undefined

//----- (00014328) --------------------------------------------------------
int __fastcall sub_14328(int a1, int a2)
{
  int v2; // r4
  unsigned int v3; // r3
  int v4; // r4
  unsigned int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r0
  unsigned int v8; // r1
  int v9; // r6
  int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r0

  v3 = 2 * a2;
  v4 = 2 * a2 + __CFSHL__(a2, 1) + v2 + __CFSHL__(a1, 1) + v2;
  v5 = (unsigned int)(2 * a1) >> 24;
  if ( v5 )
  {
    v6 = HIBYTE(v3);
    if ( v6 )
    {
      if ( v5 != 255 && v6 != 255 )
      {
        v7 = a1 & 0x7FFFFF;
        v8 = a2 & 0x7FFFFF;
        v9 = v7 * v8;
        v10 = v5 + v6 - 127;
        v11 = (v7 >> 8) * (v8 >> 8) + ((v7 + v8) << 7) + ((v7 * v8 - (((v7 >> 8) * (v8 >> 8)) << 16)) >> 16);
        if ( v11 >> 30 )
        {
          v11 = (v11 >> 1) - 0x20000000;
          ++v10;
        }
        v12 = v11 >> 7;
        if ( __CFSHR__(v11, 7) )
        {
          ++v12;
          if ( !(v9 << 15) && !(v11 << 26) )
            v12 &= ~1u;
        }
        if ( (unsigned int)v10 < 0xFF && v10 << 23 )
          return (v12 | (v4 << 31)) + (v10 << 23);
        if ( v10 <= 0 )
          return v4 << 31;
        return ((v4 << 8) | 0xFF) << 23;
      }
      goto LABEL_22;
    }
  }
  else
  {
    v6 = HIBYTE(v3);
  }
  if ( v5 != 255 && v6 != 255 )
    return v4 << 31;
LABEL_22:
  if ( (unsigned int)(2 * a1) <= 0xFF000000 && (unsigned int)(2 * a2) <= 0xFF000000 && v5 + v6 != 255 )
    return ((v4 << 8) | 0xFF) << 23;
  return 2143289344;
}
// 1432C: variable 'v2' is possibly undefined

//----- (000143D8) --------------------------------------------------------
int __fastcall sub_143D8(int a1, int a2)
{
  if ( (a1 ^ a2) < 0 )
    JUMPOUT(0x1442A);
  return sub_143E4();
}
// 143E2: control flows out of bounds to 1442A
// 143E4: using guessed type int sub_143E4(void);

//----- (000143E4) --------------------------------------------------------
void __fastcall sub_143E4(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v8; // r5
  int v9; // r4
  int v10; // r2
  unsigned int v11; // r3
  char v12; // r3
  unsigned int v13; // r4
  int v14; // r5
  bool v15; // cf
  unsigned int v16; // r5
  unsigned int v17; // r5
  int v18; // r0

  if ( a1 < a2 )
  {
    v9 = (a1 - a2) ^ v8;
    a1 -= v9;
    a2 += v9;
  }
  v10 = (unsigned __int8)(a1 >> 23);
  if ( v10 == 255 )
    __asm { POP             {R4-R6,PC} }
  v11 = (2 * a2) >> 24;
  if ( v11 )
  {
    v12 = v10 - v11;
    v13 = ((a2 << 8) | v8) >> v12;
    v14 = ((a1 << 8) & ~v8) - v13;
    if ( v14 < 0 )
    {
      v15 = __CFSHL__(v14, 2);
      v16 = 4 * v14;
      if ( !v15 )
      {
        v17 = v16 >> 1;
        if ( v17 )
        {
          v18 = 1;
          if ( !HIWORD(v17) )
          {
            v17 <<= 16;
            v18 = 17;
          }
          if ( !HIBYTE(v17) )
          {
            v17 <<= 8;
            v18 += 8;
          }
          if ( !(v17 >> 28) )
          {
            v17 *= 16;
            v18 += 4;
          }
          if ( !(v17 >> 30) )
          {
            v17 *= 4;
            v18 += 2;
          }
          if ( (v17 & 0x80000000) == 0 )
            ++v18;
          if ( v10 - v18 >= 1 )
            __asm { POP             {R4-R6,PC} }
LABEL_30:
          __asm { POP             {R4-R6,PC} }
        }
LABEL_29:
        __asm { POP             {R4-R6,PC} }
      }
      v14 = v16 >> 1;
      if ( v10 == 1 )
        goto LABEL_30;
    }
    if ( !__CFSHR__(v14, 8) )
      __asm { POP             {R4-R6,PC} }
    if ( v14 << 25 )
      __asm { POP             {R4-R6,PC} }
    if ( 2 * ((a2 << 8) ^ (v13 << v12)) )
      __asm { POP             {R4-R6,PC} }
    __asm { POP             {R4-R6,PC} }
  }
  if ( (unsigned __int8)(a1 >> 23) )
    __asm { POP             {R4-R6,PC} }
  goto LABEL_29;
}
// 144A2: unbalanced stack, ignored a potential tail call
// 143E8: variable 'v8' is possibly undefined

//----- (000144A8) --------------------------------------------------------
int __fastcall sub_144A8(int a1, int a2, int a3)
{
  return sub_2B9C(a1, a2, a3 + 7);
}
// 2B9C: using guessed type int __fastcall sub_2B9C(_DWORD, _DWORD, _DWORD);

//----- (000144B8) --------------------------------------------------------
int __fastcall sub_144B8(int a1, int a2, int a3)
{
  return sub_2E16(a1, a2, a3 + 7);
}
// 2E16: using guessed type int __fastcall sub_2E16(_DWORD, _DWORD, _DWORD);

//----- (0001527C) --------------------------------------------------------
void sub_1527C()
{
  JUMPOUT(0x157C2);
}
// 1527E: control flows out of bounds to 157C2

//----- (0001543C) --------------------------------------------------------
unsigned int __fastcall sub_1543C(int a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  unsigned int result; // r0
  unsigned __int8 *v8; // [sp+0h] [bp-14h] BYREF
  unsigned __int8 *v9; // [sp+4h] [bp-10h] BYREF
  int v10; // [sp+8h] [bp-Ch] BYREF
  int v11; // [sp+Ch] [bp-8h] BYREF

  result = *a2;
  if ( result == 1 )
  {
    while ( 1 )
    {
      result = sub_15E24(a1, *(unsigned __int8 *)(a1 + 4), *(unsigned __int8 *)(a1 + 5));
      if ( result > a4 )
        break;
      sub_15EBC(a1, &v9, &v10);
      sub_15ED4(a1, &v8, &v11);
      result = (unsigned int)v8;
      if ( v9[1] != v8[1] )
        break;
      v8[6] += v9[6];
      v8[7] += v9[7];
      sub_18044((int)a2);
      sub_15EFA(a1);
    }
  }
  return result;
}

//----- (000154A6) --------------------------------------------------------
void sub_154A6()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0

  if ( MEMORY[0x20003678] )
  {
    while ( !sub_15E68(*(unsigned __int8 *)(MEMORY[0x20003678] + 4), *(unsigned __int8 *)(MEMORY[0x20003678] + 5)) )
    {
      MEMORY[0x2000366C] = sub_15E9E(MEMORY[0x20003678], 536887152);
      sub_18050(536887152);
      if ( v0 )
      {
        sub_1805C(536887153);
        if ( !v1 )
          sub_18068(536887153);
        if ( MEMORY[0x200036E2] )
        {
          sub_1543C(MEMORY[0x20003678], (unsigned __int8 *)0x20003F70, 536884844, 2u);
        }
        else
        {
          sub_1543C(MEMORY[0x20003678], (unsigned __int8 *)0x20003F70, 536884844, 7u);
          sub_18074(536887152);
        }
        if ( !MEMORY[0x200036CD] || MEMORY[0x200036CD] == 4 )
        {
          MEMORY[0x200036CD] = 3;
          MEMORY[0x20003660] = 536887152;
          sub_18080(536884720);
          if ( v2 && !MEMORY[0x200036CD] )
            sub_15EFA(MEMORY[0x20003678]);
        }
        else if ( MEMORY[0x200036CD] == 2 )
        {
          sub_18080(2);
        }
        return;
      }
      sub_15EFA(MEMORY[0x20003678]);
    }
  }
  MEMORY[0x200036CD] = 0;
}
// 154DE: variable 'v0' is possibly undefined
// 154F2: variable 'v1' is possibly undefined
// 15554: variable 'v2' is possibly undefined

//----- (00015588) --------------------------------------------------------
void __fastcall sub_15588(int a1)
{
  sub_1808C(a1);
}

//----- (00015590) --------------------------------------------------------
int (*sub_15590())(void)
{
  int (*result)(void); // r0

  result = MEMORY[0x200037C4];
  if ( MEMORY[0x200037C4] )
    return (int (*)(void))MEMORY[0x200037C4]();
  return result;
}
// 200037C4: using guessed type int (*)(void);

//----- (0001559C) --------------------------------------------------------
int (*sub_1559C())(void)
{
  int (*result)(void); // r0

  result = MEMORY[0x200037C8];
  if ( MEMORY[0x200037C8] )
    return (int (*)(void))MEMORY[0x200037C8]();
  return result;
}
// 200037C8: using guessed type int (*)(void);

//----- (000155A8) --------------------------------------------------------
int sub_155A8()
{
  int result; // r0

  if ( MEMORY[0x200037CC] )
    return MEMORY[0x200037CC]();
  return result;
}
// 200037CC: using guessed type int (*)(void);

//----- (000155C0) --------------------------------------------------------
void __fastcall sub_155C0(unsigned int a1)
{
  *(_BYTE *)(a1 + 536887688) = 1;
  if ( a1 >= 2 )
    sub_18098(a1);
}

//----- (000155D8) --------------------------------------------------------
int __fastcall sub_155D8(int result)
{
  _R1 = __get_CPSR();
  __disable_irq();
  *(_BYTE *)(result + 536887688) = 0;
  __asm { MSR.W           PRIMASK, R1 }
  return result;
}

//----- (000155EA) --------------------------------------------------------
int sub_155EA()
{
  unsigned int i; // r0

  for ( i = 0; i < 0xA; i = (unsigned __int8)(i + 1) )
  {
    if ( *(_BYTE *)(i + 536887688) )
      return 1;
  }
  return 0;
}

//----- (00015604) --------------------------------------------------------
unsigned int sub_15604()
{
  unsigned int result; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0

  result = MEMORY[0x20004188];
  if ( MEMORY[0x20004188] )
  {
    _R0 = __get_CPSR();
    __disable_irq();
    MEMORY[0x20004188] = 0;
    __asm { MSR.W           PRIMASK, R0 }
    result = MEMORY[0x200037D8];
    if ( MEMORY[0x200037D8] )
    {
      MEMORY[0x200037D8] = 0;
    }
    else
    {
      result = MEMORY[0x20004189];
      if ( !MEMORY[0x20004189] )
      {
        v6 = MEMORY[0x200037E8];
        if ( MEMORY[0x200037E8] )
          v6 = MEMORY[0x200037E8]();
        v7 = sub_180A4(v6);
        v8 = sub_180B0(v7);
        if ( sub_180BC(v8) )
        {
          MEMORY[0x20003820] = 0;
        }
        else
        {
          v9 = sub_16556(++MEMORY[0x20003820]);
          if ( (unsigned int)sub_180D4(5000000, v9) < MEMORY[0x20003820] )
          {
            MEMORY[0x20003820] = 0;
            sub_180E0();
          }
        }
        result = sub_180C8();
        if ( result )
        {
          MEMORY[0x20003824] = 0;
        }
        else
        {
          v10 = sub_16556(++MEMORY[0x20003824]);
          result = sub_180D4(4000, v10);
          if ( result < MEMORY[0x20003824] )
          {
            MEMORY[0x20003824] = 0;
            return sub_180EC(1);
          }
        }
      }
    }
  }
  return result;
}
// 16556: using guessed type int __fastcall sub_16556(_DWORD);
// 180A4: using guessed type int __fastcall sub_180A4(_DWORD);
// 180B0: using guessed type int __fastcall sub_180B0(_DWORD);
// 180BC: using guessed type int __fastcall sub_180BC(_DWORD);
// 180C8: using guessed type int sub_180C8(void);
// 180D4: using guessed type int __fastcall sub_180D4(_DWORD, _DWORD);
// 180E0: using guessed type int sub_180E0(void);
// 180EC: using guessed type int __fastcall sub_180EC(_DWORD);

//----- (0001569A) --------------------------------------------------------
int sub_1569A()
{
  int result; // r0

  MEMORY[0x20004188] = 1;
  result = sub_15E18();
  if ( !result )
    return sub_15604();
  return result;
}
// 15604: using guessed type int sub_15604(void);
// 15E18: using guessed type int sub_15E18(void);

//----- (000156B0) --------------------------------------------------------
unsigned int sub_156B0()
{
  unsigned int result; // r0

  result = MEMORY[0x20004189];
  if ( MEMORY[0x20004189] )
  {
    if ( MEMORY[0x200037E4] )
      MEMORY[0x200037E4]();
    result = __get_CPSR();
    __disable_irq();
    MEMORY[0x20004189] = 0;
    __asm { MSR.W           PRIMASK, R0 }
  }
  return result;
}
// 200037E4: using guessed type int (*)(void);

//----- (000156F2) --------------------------------------------------------
unsigned int sub_156F2()
{
  return sub_15604();
}

//----- (000156FA) --------------------------------------------------------
unsigned int sub_156FA()
{
  return sub_156B0();
}

//----- (00015702) --------------------------------------------------------
int sub_15702()
{
  int result; // r0

  ++MEMORY[0x20003848];
  poll_and_cache_motion_sample();
  if ( MEMORY[0x20003848] << 31 )
    return sub_1569A();
  result = sub_16A84();
  if ( result )
  {
    ++MEMORY[0x20003848];
    return sub_1569A();
  }
  return result;
}
// 1569A: using guessed type int sub_1569A(void);
// 16A84: using guessed type int sub_16A84(void);

//----- (00015730) --------------------------------------------------------
int sub_15730()
{
  int v0; // r0

  v0 = poll_and_cache_motion_sample();
  return sub_1569A(v0);
}
// 1569A: using guessed type int __fastcall sub_1569A(_DWORD);

//----- (0001573C) --------------------------------------------------------
int sub_1573C()
{
  int result; // r0
  int v1; // r0

  sub_180F8(3);
  if ( *(_DWORD *)(4 * MEMORY[0x20003839] + 0x100146D8) != MEMORY[0x20003840]
    || (result = MEMORY[0x20003838], !MEMORY[0x20003838]) )
  {
    sub_15C7E(536871669);
    sub_15C84(1);
    sub_15C98(MEMORY[0x20003844], 1, 0);
    MEMORY[0x20003838] = 1;
    v1 = MEMORY[0x20003839];
    if ( MEMORY[0x20003839] > 3u )
      v1 = 0;
    result = *(_DWORD *)(4 * v1 + 0x100146D8);
    MEMORY[0x20003840] = result;
  }
  return result;
}

//----- (00015784) --------------------------------------------------------
void sub_15784()
{
  int v0; // r0

  sub_180F8(3);
  if ( *(_DWORD *)(4 * MEMORY[0x20003839] + 0x100146D8) != MEMORY[0x20003840] || !MEMORY[0x20003838] )
  {
    if ( MEMORY[0x20003839] == 4 )
      v0 = 536871623;
    else
      v0 = 536871669;
    sub_15C7E(v0);
    sub_15C84(1);
    sub_15C98(MEMORY[0x20003844], 1, 0);
    MEMORY[0x20003840] = *(_DWORD *)(4 * MEMORY[0x20003839] + 0x100146D8);
    MEMORY[0x20003838] = 1;
    MEMORY[0x20003848] = 0;
    sub_16AE8();
    sub_18104((int)"_current_timer_interval_us %d\r\n");
  }
}

//----- (000157DE) --------------------------------------------------------
void __fastcall sub_157DE(int a1)
{
  int v1; // r2
  int v2; // r0
  int v3; // r0

  v1 = MEMORY[0x20003839];
  if ( a1 )
  {
    if ( MEMORY[0x20003839] > 6u )
      v1 = 0;
    MEMORY[0x20003839] = v1;
    sub_15CD4(*(_DWORD *)(4 * v1 + 0x100146F4), 1000);
    MEMORY[0x20003844] = v2;
  }
  else
  {
    if ( MEMORY[0x20003839] > 3u )
      v1 = 0;
    sub_15CD4(*(_DWORD *)(4 * v1 + 0x10014710), 1000);
    MEMORY[0x20003844] = v3;
  }
}
// 157FE: variable 'v2' is possibly undefined
// 15812: variable 'v3' is possibly undefined

//----- (00015816) --------------------------------------------------------
int sub_15816()
{
  return MEMORY[0x20003839];
}

//----- (0001581C) --------------------------------------------------------
void __fastcall sub_1581C(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r0
  unsigned int v4; // r0
  int v5; // r0
  int v6; // r0

  if ( (a1 & ~a3) != 0 )
  {
    if ( a2 <= 6 )
      v3 = a2;
    else
      v3 = 0;
    MEMORY[0x20003839] = v3;
    sub_15CD4(*(_DWORD *)(4 * v3 + 0x100146F4), 1000);
    MEMORY[0x20003844] = v6;
  }
  else
  {
    if ( a2 <= 3 )
      v4 = a2;
    else
      v4 = 0;
    MEMORY[0x20003839] = v4;
    sub_15CD4(*(_DWORD *)(4 * v4 + 0x10014710), 1000);
    MEMORY[0x20003844] = v5;
  }
  sub_15F18(MEMORY[0x20003839]);
  sub_18104((int)"tick %d %d %d %d\r\n");
}
// 1584A: variable 'v5' is possibly undefined
// 1585C: variable 'v6' is possibly undefined

//----- (00015874) --------------------------------------------------------
BOOL sub_15874()
{
  int v0; // r0

  sub_18110(3);
  return (v0 | MEMORY[0x20003838]) != 0;
}
// 15880: variable 'v0' is possibly undefined

//----- (00015888) --------------------------------------------------------
int sub_15888()
{
  int v0; // r0

  if ( MEMORY[0x20003838] )
  {
    sub_15C50();
    MEMORY[0x20003838] = 0;
  }
  sub_18110(3);
  if ( v0 | MEMORY[0x20003838] )
    sub_180F8(3);
  return sub_155D8(0);
}
// 158A2: variable 'v0' is possibly undefined

//----- (000158B4) --------------------------------------------------------
int sub_158B4()
{
  return MEMORY[0x20003840];
}

//----- (00015910) --------------------------------------------------------
void __fastcall sub_15910(int a1)
{
  int v1; // r0
  int v2; // r0

  sub_1811C(a1);
  v1 = sub_15E18();
  if ( !v1 )
    v1 = sub_156F2();
  sub_18128(v1);
  sub_18134(1);
  sub_18140(v2);
}
// 1592C: variable 'v2' is possibly undefined

//----- (00015932) --------------------------------------------------------
void __fastcall sub_15932(int a1)
{
  int v1; // r0
  int v2; // r0
  unsigned int v3; // r0
  int v4; // r0

  sub_1814C(a1);
  sub_18158(v1);
  sub_18128(v2);
  v3 = sub_156FA();
  sub_1811C(v3);
  sub_18164(v4);
  sub_18134(0);
}
// 15938: variable 'v1' is possibly undefined
// 1593C: variable 'v2' is possibly undefined
// 15948: variable 'v4' is possibly undefined

//----- (00015954) --------------------------------------------------------
void __fastcall sub_15954(int a1)
{
  void (*v1)(void); // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0

  sub_18170(a1);
  v1 = *(void (**)(void))(4 * MEMORY[0x2000384C] + 0x10014720);
  if ( v1 )
    v1();
  sub_1817C(536885324);
  v2 = MEMORY[0x2000384D];
  if ( MEMORY[0x2000384D] )
  {
    sub_18188(MEMORY[0x2000384D]);
    if ( v2 || (v2 = MEMORY[0x2000384C], MEMORY[0x2000384C] == 2) )
    {
      sub_18194(v2);
      sub_181A0(v3);
      sub_181AC(v4);
      if ( v5 == 400000 )
      {
        sub_181B8(400000);
        if ( v6 )
          sub_181C4(v6);
        sub_181D0(v6);
        if ( v7 )
          sub_181DC(v7);
      }
      else
      {
        sub_181E8(v5);
      }
      sub_181F4(v7);
      v2 = 0;
      MEMORY[0x2000384D] = 0;
    }
  }
  sub_18200(v2);
  sub_1820C(v8);
  sub_18218(v9);
  sub_18224(v10);
  sub_18230(v11);
  sub_1823C(v12);
  sub_18248(v13);
  sub_18254(v14);
  sub_18260(v15);
}
// 1597C: variable 'v2' is possibly undefined
// 15988: variable 'v3' is possibly undefined
// 1598C: variable 'v4' is possibly undefined
// 15994: variable 'v5' is possibly undefined
// 1599C: variable 'v6' is possibly undefined
// 159A8: variable 'v7' is possibly undefined
// 159C0: variable 'v8' is possibly undefined
// 159C4: variable 'v9' is possibly undefined
// 159C8: variable 'v10' is possibly undefined
// 159CC: variable 'v11' is possibly undefined
// 159D0: variable 'v12' is possibly undefined
// 159D4: variable 'v13' is possibly undefined
// 159D8: variable 'v14' is possibly undefined
// 159DC: variable 'v15' is possibly undefined

//----- (000159F0) --------------------------------------------------------
BOOL __fastcall sub_159F0(int a1)
{
  int v1; // r3
  unsigned __int8 *v2; // r0

  v1 = 1 << (a1 & 0xDF);
  v2 = (unsigned __int8 *)(*(_DWORD *)(4 * ((unsigned int)(a1 << 26) >> 31) + 0x20003AD4) + 64);
  return ((v2[16] | (v2[17] << 8) | (v2[18] << 16) | (v2[19] << 24)) & v1) != 0;
}

//----- (00015A2C) --------------------------------------------------------
_BYTE *__fastcall sub_15A2C(_BYTE *result, int a2)
{
  if ( MEMORY[0x20003ADC] )
  {
    MEMORY[0x20003ADC] = 0;
    return 0;
  }
  if ( a2 && (MEMORY[0x50001059] & 4) == 0 )
  {
    result[2] = 0;
    result[1] = 0;
    result[3] = 0;
    return 0;
  }
  MEMORY[0x5002C001] |= 2u;
  while ( a2 && (MEMORY[0x5002C001] & 2) != 0 )
    ;
  if ( result )
  {
    *result = MEMORY[0x5002C028] & MEMORY[0x20003ADF];
    result[1] = MEMORY[0x5002C029] & MEMORY[0x20003AE0];
    result[2] = MEMORY[0x5002C02A] & MEMORY[0x20003AE1];
    result[3] = MEMORY[0x5002C02B] & MEMORY[0x20003AE2];
    MEMORY[0x20003ADC] = 1;
    return (_BYTE *)&byte_1;
  }
  return result;
}

//----- (00015A98) --------------------------------------------------------
_BYTE *__fastcall sub_15A98(_BYTE *result, int a2)
{
  if ( !a2 || (MEMORY[0x50001059] & 4) != 0 )
  {
    MEMORY[0x5002C001] |= 2u;
    while ( a2 && (MEMORY[0x5002C001] & 2) != 0 )
      ;
    if ( result )
    {
      *result = MEMORY[0x5002C028] & MEMORY[0x20003ADF];
      result[1] = MEMORY[0x5002C029] & MEMORY[0x20003AE0];
      result[2] = MEMORY[0x5002C02A] & MEMORY[0x20003AE1];
      result[3] = MEMORY[0x5002C02B] & MEMORY[0x20003AE2];
      return (_BYTE *)&byte_1;
    }
  }
  else
  {
    result[2] = 0;
    result[1] = 0;
    result[3] = 0;
    return 0;
  }
  return result;
}

//----- (00015AF6) --------------------------------------------------------
// Serial sensor exchange helper. Programs transfer length into 0x5002C008, copies TX bytes into the hardware window, kicks the transfer through 0x5002C001, waits on 0x5002C00B, then copies RX bytes back out.
unsigned __int8 *__fastcall sensor_exchange_bytes(unsigned __int8 *count_ptr, int tx_buf, int rx_buf)
{
  int v3; // r3
  int v4; // r1

  if ( *count_ptr > 7u )
    *count_ptr = 7;
  MEMORY[0x5002C008] = (8 * (MEMORY[0x5002C008] >> 3)) | *count_ptr & 7;
  MEMORY[0x5002C008] &= ~8u;
  v3 = 0;
  if ( *count_ptr )
  {
    do
    {
      *(_BYTE *)(v3 + 1342357516) = *(_BYTE *)(tx_buf + v3);
      ++v3;
    }
    while ( *count_ptr > v3 );
  }
  MEMORY[0x5002C001] = MEMORY[0x20003ADE] | 4;
  while ( !MEMORY[0x5002C00B] )
    ;
  v4 = 0;
  if ( *count_ptr )
  {
    do
    {
      *(_BYTE *)(rx_buf + v4) = *(_BYTE *)(v4 + 1342357532);
      ++v4;
    }
    while ( *count_ptr > v4 );
  }
  return count_ptr;
}

//----- (00015B5C) --------------------------------------------------------
// Single-register sensor read wrapper built on sensor_exchange_bytes(); callers pass the register/command byte and a 1-byte output buffer.
unsigned __int8 *__fastcall sensor_read_single_register(int reg_id, int out_buf)
{
  char v3[4]; // [sp+0h] [bp-Ch] BYREF
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[0] = reg_id;
  v4[1] = out_buf;
  v3[0] = 1;
  return sensor_exchange_bytes((unsigned __int8 *)v3, (int)v4, out_buf);
}

//----- (00015C50) --------------------------------------------------------
int sub_15C50()
{
  MEMORY[0xE000E010] = 2 * (MEMORY[0xE000E010] >> 1);
  return -536813568;
}

//----- (00015C7E) --------------------------------------------------------
int __fastcall sub_15C7E(int result)
{
  MEMORY[0x20003B18] = result;
  return result;
}

//----- (00015C84) --------------------------------------------------------
unsigned int __fastcall sub_15C84(int a1)
{
  unsigned int result; // r0

  if ( a1 )
    result = MEMORY[0xE000E010] | 4;
  else
    result = MEMORY[0xE000E010] & 0xFFFFFFFB;
  MEMORY[0xE000E010] = result;
  return result;
}

//----- (00015C98) --------------------------------------------------------
int __fastcall sub_15C98(int a1, int a2, char a3)
{
  unsigned int v3; // r1

  MEMORY[0xE000E010] = 4 * (MEMORY[0xE000E010] >> 2);
  MEMORY[0xE000E014] = a1 - 1;
  MEMORY[0xE000E018] = 0;
  if ( a2 )
    v3 = MEMORY[0xE000E010] | 2;
  else
    v3 = MEMORY[0xE000E010] & 0xFFFFFFFD;
  MEMORY[0xE000E010] = v3 | 1;
  MEMORY[0x20003B14] = a3;
  return 536886036;
}

//----- (00015CD4) --------------------------------------------------------
void __fastcall sub_15CD4(int a1, int a2)
{
  int v2; // r7
  int v3; // r6
  int v4; // r5
  int v5; // r4
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v20; // r2
  int v21; // [sp+0h] [bp-1Ch]
  int v22; // [sp+4h] [bp-18h]
  unsigned int CPSR; // [sp+8h] [bp-14h]
  int v24; // [sp+Ch] [bp-10h]

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  CPSR = __get_CPSR();
  __disable_irq();
  v6 = (_DWORD *)MEMORY[0x20003B60];
  if ( *MEMORY[0x20003B60] == 1 )
  {
    *MEMORY[0x20003B60] = 0;
    v2 = (unsigned __int8)v6[1];
    v3 = (unsigned __int8)v6[7];
    v4 = (unsigned __int8)v6[11];
    v5 = 1;
  }
  MEMORY[0xE000E100] = 4096;
  MEMORY[0xE000E010] &= ~2u;
  MEMORY[0xE000E280] = 4096;
  sub_1826C(4096);
  v24 = v7;
  sub_18278(2);
  MEMORY[0xE000E010] |= 4u;
  MEMORY[0xE000E010] = 4 * (MEMORY[0xE000E010] >> 2);
  MEMORY[0xE000E014] = -2;
  MEMORY[0xE000E018] = 0;
  MEMORY[0xE000E010] |= 1u;
  v8 = (_DWORD *)MEMORY[0x20003B60];
  *(_DWORD *)(MEMORY[0x20003B60] + 4) = a2;
  v8[7] = 1;
  v8[11] = 0;
  *v8 = 1;
  do
  {
    v9 = MEMORY[0xE000E200] & 0x1000;
    if ( (MEMORY[0xE000E200] & 0x1000) != 0 )
      v9 = 1;
  }
  while ( !v9 );
  v21 = MEMORY[0xE000E018];
  v8[6] = 1;
  MEMORY[0xE000E280] = 4096;
  do
  {
    v10 = MEMORY[0xE000E200] & 0x1000;
    if ( (MEMORY[0xE000E200] & 0x1000) != 0 )
      v10 = 1;
  }
  while ( !v10 );
  MEMORY[0xE000E010] = 2 * (MEMORY[0xE000E010] >> 1);
  v22 = MEMORY[0xE000E018];
  v8[6] = 1;
  *v8 = 0;
  MEMORY[0xE000E280] = 4096;
  sub_18278(v24);
  sub_18284(v21 - v22);
  sub_18284(a2);
  sub_18290(v11);
  sub_1829C(v12);
  sub_18284(a1);
  sub_1829C(v13);
  _R2 = CPSR;
  __asm { MSR.W           PRIMASK, R2 }
  if ( v5 )
  {
    v20 = MEMORY[0x20003B60];
    *(_DWORD *)(MEMORY[0x20003B60] + 4) = v2;
    *(_DWORD *)(v20 + 28) = v3;
    *(_DWORD *)(v20 + 44) = v4;
  }
  sub_182A8(v14);
}
// 15D20: variable 'v7' is possibly undefined
// 15DC6: variable 'v11' is possibly undefined
// 15DCE: variable 'v12' is possibly undefined
// 15DE0: variable 'v13' is possibly undefined
// 15DF8: variable 'v14' is possibly undefined

//----- (00015E18) --------------------------------------------------------
int sub_15E18()
{
  return MEMORY[0x20003B65];
}

//----- (00015E24) --------------------------------------------------------
int __fastcall sub_15E24(int a1, unsigned int a2, unsigned int a3)
{
  if ( a3 <= a2 )
    return (unsigned __int8)(*(_BYTE *)(a1 + 6) + a3 - a2 - 1);
  else
    return (unsigned __int8)(a3 - a2 - 1);
}

//----- (00015E3C) --------------------------------------------------------
int __fastcall sub_15E3C(int result, unsigned int a2, unsigned int a3)
{
  if ( a2 <= a3 )
    LOBYTE(result) = *(_BYTE *)(result + 6) + a2 - a3;
  else
    LOBYTE(result) = a2 - a3;
  return (unsigned __int8)result;
}

//----- (00015E4E) --------------------------------------------------------
BOOL __fastcall sub_15E4E(int a1, int a2, int a3)
{
  int v4; // r1

  sub_180D4(a2 + 1, *(unsigned __int8 *)(a1 + 6));
  return v4 == a3;
}
// 15E5E: variable 'v4' is possibly undefined
// 180D4: using guessed type int __fastcall sub_180D4(_DWORD, _DWORD);

//----- (00015E68) --------------------------------------------------------
BOOL __fastcall sub_15E68(int a1, int a2)
{
  return a1 == a2;
}

//----- (00015E74) --------------------------------------------------------
int __fastcall sub_15E74(int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  char v5; // r1

  if ( *(_DWORD *)result )
  {
    v3 = *(unsigned __int8 *)(result + 4);
    v4 = result;
    **(_BYTE **)(*(_DWORD *)result + 4 * v3) = a3;
    sub_18044(*(_DWORD *)(*(_DWORD *)result + 4 * v3) + 1, a2, a3);
    result = sub_180D4(v3 + 1, *(unsigned __int8 *)(v4 + 6));
    *(_BYTE *)(v4 + 4) = v5;
  }
  return result;
}
// 15E98: variable 'v5' is possibly undefined
// 18044: using guessed type int __fastcall sub_18044(_DWORD, _DWORD, _DWORD);
// 180D4: using guessed type int __fastcall sub_180D4(_DWORD, _DWORD);

//----- (00015E9E) --------------------------------------------------------
int __fastcall sub_15E9E(int a1, int a2)
{
  int v2; // r4

  v2 = **(unsigned __int8 **)(*(_DWORD *)a1 + 4 * *(unsigned __int8 *)(a1 + 5));
  sub_18044(a2);
  return v2;
}

//----- (00015EBC) --------------------------------------------------------
int __fastcall sub_15EBC(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r3
  int result; // r0

  v3 = 4 * *(unsigned __int8 *)(a1 + 5);
  *a2 = *(_DWORD *)(*(_DWORD *)a1 + v3) + 1;
  result = *(_DWORD *)(*(_DWORD *)a1 + v3);
  *a3 = result;
  return result;
}

//----- (00015ED4) --------------------------------------------------------
int __fastcall sub_15ED4(int a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r1
  int v7; // r0
  int result; // r0

  sub_180D4(*(unsigned __int8 *)(a1 + 5) + 1);
  v7 = (4 * v6) & 0x3FF;
  *a2 = *(_DWORD *)(*(_DWORD *)a1 + v7) + 1;
  result = *(_DWORD *)(*(_DWORD *)a1 + v7);
  *a3 = result;
  return result;
}
// 15EEA: variable 'v6' is possibly undefined

//----- (00015EFA) --------------------------------------------------------
void __fastcall sub_15EFA(int a1)
{
  char v3; // r1

  _R5 = __get_CPSR();
  __disable_irq();
  sub_180D4(*(unsigned __int8 *)(a1 + 5) + 1);
  *(_BYTE *)(a1 + 5) = v3;
  __asm { MSR.W           PRIMASK, R5 }
}
// 15F0E: variable 'v3' is possibly undefined

//----- (00015F18) --------------------------------------------------------
void __fastcall sub_15F18(int a1)
{
  if ( a1 == 4 || a1 == 5 )
  {
    sub_182B4(26);
    sub_182C0(259);
  }
  else
  {
    if ( a1 == 6 )
      sub_182B4(26);
    else
      sub_182B4(18);
    sub_182C0(259);
  }
}

//----- (00015F88) --------------------------------------------------------
int __fastcall sub_15F88(_BYTE *a1, int a2, unsigned int a3)
{
  char v4; // r6
  int v5; // r4
  unsigned int v6; // r2
  char v8; // r0

  v4 = 0;
  if ( a2 == 7 )
  {
    v5 = 4;
    v6 = (unsigned int)(MEMORY[0x20003BDE] << 30) >> 31;
    goto LABEL_12;
  }
  if ( a2 <= 7 )
  {
    if ( a2 == 3 )
    {
      v5 = 1;
    }
    else
    {
      if ( a2 != 4 )
        return 0;
      v5 = 2;
    }
    goto LABEL_11;
  }
  if ( a2 == 8 )
  {
    v5 = 0;
LABEL_11:
    v6 = sub_159F0(a2) == 0;
    goto LABEL_12;
  }
  if ( a2 != 24 )
    return 0;
  v5 = 3;
  v6 = MEMORY[0x20003BDE] & 1;
LABEL_12:
  if ( *(_BYTE *)(v5 + 536886256) || !v6 )
  {
    *(_DWORD *)(4 * v5 + 0x200047F4) = 0;
    if ( *(_BYTE *)(v5 + 536886256) )
    {
      if ( !v6 )
      {
        if ( *(_DWORD *)(4 * v5 + 0x200047E0) < a3 )
        {
          *(_DWORD *)(4 * v5 + 0x200047E0) += sub_16556();
          return 0;
        }
        *(_BYTE *)(v5 + 536886256) = 0;
        *(_DWORD *)(4 * v5 + 0x200047E0) = 0;
        if ( v5 == 3 )
        {
          MEMORY[0x20003BD3] = 2 * (MEMORY[0x20003BD3] >> 1);
          MEMORY[0x20003BD6] = 0;
          if ( MEMORY[0x20003BD4] )
            MEMORY[0x20003BD4] = 0;
        }
        else if ( v5 == 4 )
        {
          MEMORY[0x20003BD3] &= ~2u;
          MEMORY[0x20003BD8] = 0;
          if ( MEMORY[0x20003BD5] )
            MEMORY[0x20003BD5] = 0;
        }
      }
    }
    else if ( !v6 )
    {
      if ( MEMORY[0x20003BD5] )
      {
        if ( v5 == 4 )
        {
          MEMORY[0x200047F0] += sub_16556();
          if ( MEMORY[0x200047F0] >= a3 )
          {
            MEMORY[0x200047F0] = 0;
            MEMORY[0x20003BD5] = 0;
            *a1 &= ~2u;
            return 1;
          }
        }
      }
      if ( MEMORY[0x20003BD4] )
      {
        if ( v5 == 3 )
        {
          MEMORY[0x200047EC] += sub_16556();
          if ( MEMORY[0x200047EC] >= a3 )
          {
            MEMORY[0x200047EC] = 0;
            MEMORY[0x20003BD4] = 0;
            *a1 = 2 * (*a1 >> 1);
            return 1;
          }
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(4 * v5 + 0x200047E0) = 0;
    if ( *(_DWORD *)(4 * v5 + 0x200047F4) < a3 )
    {
      *(_DWORD *)(4 * v5 + 0x200047F4) += sub_16556();
      return 0;
    }
    *(_BYTE *)(v5 + 536886256) = 1;
    *(_DWORD *)(4 * v5 + 0x200047E0) = 0;
    *(_DWORD *)(4 * v5 + 0x200047F4) = 0;
    v4 = 1;
  }
  if ( *(unsigned __int8 *)(v5 + 536886261) == *(unsigned __int8 *)(v5 + 536886256) )
    return 0;
  *(_BYTE *)(v5 + 536886261) = *(_BYTE *)(v5 + 536886256);
  if ( a2 == 7 )
  {
    *a1 = *a1 & 0xFD | (2 * v4);
    return 1;
  }
  if ( a2 > 7 )
  {
    if ( a2 == 8 )
    {
      v8 = *a1 & 0xFB | (4 * v4);
    }
    else
    {
      if ( a2 != 24 )
        return 0;
      v8 = (2 * (*a1 >> 1)) | v4;
    }
    *a1 = v8;
    return 1;
  }
  if ( a2 == 3 )
  {
    *a1 = *a1 & 0xF7 | (8 * v4);
    return 1;
  }
  if ( a2 != 4 )
    return 0;
  *a1 = *a1 & 0xEF | (16 * v4);
  return 1;
}
// 159F0: using guessed type int __fastcall sub_159F0(_DWORD);

//----- (0001615C) --------------------------------------------------------
// Reads 0x20003BD0 and only latches the bad state once; repeated sensor fault edges do not re-arm the sequence while the latch is already set.
int latch_sensor_bad_state_if_clear()
{
  int result; // r0

  result = 536886224;
  if ( !MEMORY[0x20003BD0] )
    return latch_sensor_bad_state();
  return result;
}
// 16164: using guessed type int sub_16164(void);

//----- (00016164) --------------------------------------------------------
int __fastcall latch_sensor_bad_state(int a1)
{
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 1) = 0;
  return sub_182CC();
}
// 182CC: using guessed type int sub_182CC(void);

//----- (00016178) --------------------------------------------------------
// Clears 0x20003BD0, sets 0x20003BD1, and zeroes 0x20003BEC. This starts the post-fault recovery hold window.
int clear_sensor_bad_state_and_start_recovery_hold()
{
  MEMORY[0x20003BD0] = 0;
  MEMORY[0x20003BD1] = 1;
  MEMORY[0x20003BEC] = 0;
  return 536886224;
}

//----- (00016186) --------------------------------------------------------
// Returns 0x20003BD0, the bad-state latch tested in sample_and_decode_motion_delta().
int is_sensor_bad_state_latched()
{
  return MEMORY[0x20003BD0];
}

//----- (0001618C) --------------------------------------------------------
// Builds the 7-byte runtime input frame at 0x20003C78. Bytes 1..4 come from the cached motion sample, byte 0 is a runtime status bitmap assembled from local state machines, and bytes 5..6 mirror 0x20003BDF / 0x20003BE1.
int __fastcall build_runtime_input_frame(runtime_input_frame_t *frame, int frame_len, int mode)
{
  int v3; // r4
  runtime_input_frame_t *v4; // r6

  v3 = 0;
  v4 = frame;
  if ( mode == 2 )
  {
    frame->motion_x_lo = 0;
    frame->motion_x_hi = 0;
    frame->motion_y_lo = 0;
    frame->motion_y_hi = 0;
  }
  else
  {
    if ( sub_15816(frame) != 4 )
    {
      frame = (runtime_input_frame_t *)consume_cached_motion_sample_for_runtime_frame(&v4->motion_x_lo);
      if ( !frame )
        goto LABEL_5;
      goto LABEL_4;
    }
    frame = (runtime_input_frame_t *)consume_cached_motion_sample_for_mode4(&v4->motion_x_lo);
    if ( frame )
LABEL_4:
      v3 = 2;
  }
LABEL_5:
  if ( sub_15816(frame) != 4 )
  {
    if ( !sub_15A98(536886238, 1) )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( sub_15A2C(536886238, 1) )
LABEL_7:
    v3 |= 1u;
LABEL_8:
  if ( !MEMORY[0x20003BD0] )
  {
    if ( MEMORY[0x20003BD1] )
      goto LABEL_73;
    if ( !MEMORY[0x20003BD2] || !sub_182D8() )
    {
      if ( sub_15F88(536886242, 24, 8000) )
        v3 |= 1u;
      if ( sub_15F88(536886242, 7, 8000) )
        v3 |= 1u;
LABEL_71:
      if ( !sub_15F88(536886242, 8, 30000) )
        goto LABEL_73;
      goto LABEL_72;
    }
    if ( (MEMORY[0x20003BD3] & 4) != 0 )
    {
      MEMORY[0x20003BD4] = 0;
      if ( !(MEMORY[0x20003BE2] << 31) )
        goto LABEL_41;
      MEMORY[0x20003BE2] = 2 * (MEMORY[0x20003BE2] >> 1);
    }
    else
    {
      if ( MEMORY[0x20003BD3] << 31 )
      {
        if ( MEMORY[0x20003BD6] < 0x36B0u )
        {
          MEMORY[0x20003BD6] += sub_16556();
          MEMORY[0x20003BD4] = 1;
        }
        else if ( MEMORY[0x20003BDE] << 31 )
        {
          MEMORY[0x20003BD4] = 1;
          MEMORY[0x20003BD3] |= 0x10u;
        }
        else
        {
          MEMORY[0x20003BD4] = 0;
          v3 |= 1u;
          if ( MEMORY[0x20003BE2] << 31 )
            MEMORY[0x20003BE2] = 2 * (MEMORY[0x20003BE2] >> 1);
          MEMORY[0x20003BD6] = 0;
          MEMORY[0x20003BD3] = 2 * (MEMORY[0x20003BD3] >> 1);
          if ( (MEMORY[0x20003BD3] & 0x10) != 0 )
          {
            MEMORY[0x20003BD3] &= ~0x10u;
            MEMORY[0x20003BDA] = 0;
            MEMORY[0x20003BD3] |= 4u;
          }
        }
        goto LABEL_41;
      }
      if ( !(MEMORY[0x20003BDE] << 31) )
      {
        MEMORY[0x20003BD4] = 0;
        if ( MEMORY[0x20003BE2] << 31 )
        {
          MEMORY[0x20003BE2] = 2 * (MEMORY[0x20003BE2] >> 1);
          v3 |= 1u;
        }
LABEL_41:
        if ( (MEMORY[0x20003BD3] & 4) != 0 )
        {
          MEMORY[0x20003BDA] += sub_16556();
          if ( MEMORY[0x20003BDA] > 0x7530u )
          {
            MEMORY[0x20003BDA] = 0;
            MEMORY[0x20003BD3] &= ~4u;
          }
        }
        if ( (MEMORY[0x20003BD3] & 8) != 0 )
        {
          MEMORY[0x20003BD5] = 0;
          if ( (MEMORY[0x20003BE2] & 2) == 0 )
          {
LABEL_64:
            if ( (MEMORY[0x20003BD3] & 8) != 0 )
            {
              MEMORY[0x20003BDC] += sub_16556();
              if ( MEMORY[0x20003BDC] > 0x7530u )
              {
                MEMORY[0x20003BDC] = 0;
                MEMORY[0x20003BD3] &= ~8u;
              }
            }
            goto LABEL_71;
          }
          MEMORY[0x20003BE2] &= ~2u;
        }
        else
        {
          if ( (MEMORY[0x20003BD3] & 2) != 0 )
          {
            if ( MEMORY[0x20003BD8] < 0x36B0u )
            {
              MEMORY[0x20003BD8] += sub_16556();
              MEMORY[0x20003BD5] = 1;
            }
            else if ( (MEMORY[0x20003BDE] & 2) != 0 )
            {
              MEMORY[0x20003BD5] = 1;
              MEMORY[0x20003BD3] |= 0x20u;
            }
            else
            {
              MEMORY[0x20003BD5] = 0;
              v3 |= 1u;
              if ( (MEMORY[0x20003BE2] & 2) != 0 )
                MEMORY[0x20003BE2] &= ~2u;
              MEMORY[0x20003BD8] = 0;
              MEMORY[0x20003BD3] &= ~2u;
              if ( (MEMORY[0x20003BD3] & 0x20) != 0 )
              {
                MEMORY[0x20003BD3] &= ~0x20u;
                MEMORY[0x20003BDC] = 0;
                MEMORY[0x20003BD3] |= 8u;
              }
            }
            goto LABEL_64;
          }
          if ( (MEMORY[0x20003BDE] & 2) == 0 )
          {
            MEMORY[0x20003BD5] = 0;
            if ( (MEMORY[0x20003BE2] & 2) != 0 )
            {
              MEMORY[0x20003BE2] &= ~2u;
              v3 |= 1u;
            }
            goto LABEL_64;
          }
          MEMORY[0x20003BD5] = 1;
          MEMORY[0x20003BD3] |= 2u;
          MEMORY[0x20003BD8] = 0;
        }
        v3 |= 1u;
        goto LABEL_64;
      }
      MEMORY[0x20003BD4] = 1;
      MEMORY[0x20003BD3] |= 1u;
      MEMORY[0x20003BD6] = 0;
    }
    v3 |= 1u;
    goto LABEL_41;
  }
  if ( sub_15F88(536886242, 24, 8000) )
    v3 |= 1u;
  if ( sub_15F88(536886242, 7, 8000) )
    v3 |= 1u;
  if ( sub_15F88(536886242, 8, MEMORY[0x20003E6C]) )
LABEL_72:
    v3 |= 1u;
LABEL_73:
  if ( MEMORY[0x20003BD1] )
  {
    if ( MEMORY[0x20003BEC] <= MEMORY[0x20003E6C] )
    {
      MEMORY[0x20003BEC] += sub_16556();
    }
    else
    {
      MEMORY[0x20003BD1] = 0;
      MEMORY[0x20003BEC] = 0;
    }
  }
  if ( sub_15F88(536886242, 3, 30000) )
    v3 |= 1u;
  if ( sub_15F88(536886242, 4, 30000) )
    v3 |= 1u;
  v4->flags = MEMORY[0x20003BE2] | (2 * MEMORY[0x20003BD5]) | MEMORY[0x20003BD4];
  v4->aux_byte_0 = MEMORY[0x20003BDF];
  v4->aux_byte_1 = MEMORY[0x20003BE1];
  if ( MEMORY[0x20003E70] )
  {
    MEMORY[0x20003E70] = 0;
    if ( v4->flags != MEMORY[0x20003E72] )
      return v3 | 1;
  }
  return v3;
}
// 15816: using guessed type int __fastcall sub_15816(_DWORD);
// 15A2C: using guessed type int __fastcall sub_15A2C(_DWORD, _DWORD);
// 15A98: using guessed type int __fastcall sub_15A98(_DWORD, _DWORD);
// 15F88: using guessed type int __fastcall sub_15F88(_DWORD, _DWORD, _DWORD);
// 182D8: using guessed type int sub_182D8(void);

//----- (000164F8) --------------------------------------------------------
BOOL sub_164F8()
{
  return (*(_BYTE *)(MEMORY[0x20003BE8] + 25) & 4) != 0;
}

//----- (0001650A) --------------------------------------------------------
int __fastcall consume_cached_motion_sample_into_runtime_buffer(unsigned __int8 *dst)
{
  return consume_cached_motion_sample_for_mode4(dst);
}

//----- (00016512) --------------------------------------------------------
int __fastcall sub_16512(_BYTE *a1)
{
  return consume_cached_motion_sample_for_runtime_frame(a1);
}

//----- (00016556) --------------------------------------------------------
int sub_16556()
{
  return sub_158B4();
}
// 158B4: using guessed type int sub_158B4(void);

//----- (00016564) --------------------------------------------------------
void __fastcall sub_16564(int a1, int a2)
{
  unsigned int v5; // r0
  unsigned int v6; // r6
  int v7; // r0

  _R5 = __get_CPSR();
  __disable_irq();
  sub_182E4(a1);
  v6 = v5;
  if ( !a1 )
  {
    if ( a2 )
      goto LABEL_3;
    if ( v5 > 6 )
      v6 = 0;
LABEL_7:
    v7 = sub_172CA();
    sub_1581C(v7, v6, 0);
    sub_172B4(1);
    sub_155C0(1u);
    sub_182F0(16);
    goto LABEL_8;
  }
  if ( !a2 )
    goto LABEL_7;
LABEL_3:
  sub_1581C(0, v5, 1);
  sub_15888();
  sub_1573C();
LABEL_8:
  sub_182FC(v6);
  __asm { MSR.W           PRIMASK, R5 }
}
// 16574: variable 'v5' is possibly undefined

//----- (000165CC) --------------------------------------------------------
void __fastcall sub_165CC(int a1)
{
  char v1; // r4
  int v2; // r0
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  v1 = a1;
  sub_18308(a1);
  if ( v2 )
  {
    sub_18314(536889361);
    memset(&v3[1], 0, 16);
    v3[0] = 3;
    sub_18044((int)v3 + 1);
    sub_15E74(536886628, (int)v3, (unsigned __int8)(v1 + 1));
  }
}
// 165D8: variable 'v2' is possibly undefined

//----- (00016610) --------------------------------------------------------
void __fastcall sub_16610(int a1)
{
  int v1; // r0
  int v2; // r4

  sub_18320(a1);
  v2 = v1;
  MEMORY[0x20003C58] ^= MEMORY[0x20003C58] & 2;
  sub_1832C(536886628);
  sub_18338(0);
  sub_18344(0);
  sub_1775C();
  sub_18344(v2);
}
// 16618: variable 'v1' is possibly undefined

//----- (00016644) --------------------------------------------------------
int flush_chunked_runtime_transport_frame()
{
  int v0; // r0
  int result; // r0
  _BYTE *v2; // r0
  _DWORD v3[5]; // [sp+0h] [bp-14h] BYREF

  memset(v3, 0, sizeof(v3));
  while ( !sub_15E68(MEMORY[0x20003D68], MEMORY[0x20003D69]) )
  {
    v0 = sub_15E9E(536886628, v3);
    if ( LOBYTE(v3[0]) != 2 || BYTE1(v3[0]) != 5 )
      break;
    if ( v0 == 9 )
    {
      result = MEMORY[0x20003C4F];
      if ( MEMORY[0x20003C4F] != 1 )
        goto LABEL_11;
      sub_1776A(v3, 9);
      sub_15EFA(536886628);
      break;
    }
    if ( v0 != 6 )
      break;
    sub_15EFA(536886628);
    sub_18044(MEMORY[0x20003C4F] + 536886424, (char *)v3 + 2, 4);
    MEMORY[0x20003C4F] += 4;
    if ( MEMORY[0x20003C4F] == 9 )
      goto LABEL_13;
  }
  result = MEMORY[0x20003C4F];
  if ( MEMORY[0x20003C4F] == 1 )
    return result;
LABEL_11:
  v2 = (_BYTE *)(result + 536886424);
  *v2 = MEMORY[0x20003C70];
  v2[1] = MEMORY[0x20003C71];
  v2[2] = MEMORY[0x20003C72];
  v2[3] = MEMORY[0x20003C73];
LABEL_13:
  result = sub_1776A(536886424, 9);
  MEMORY[0x20003C4F] = 1;
  return result;
}
// 15E68: using guessed type int __fastcall sub_15E68(_DWORD, _DWORD);
// 15E9E: using guessed type int __fastcall sub_15E9E(_DWORD, _DWORD);
// 15EFA: using guessed type int __fastcall sub_15EFA(_DWORD);
// 1776A: using guessed type int __fastcall sub_1776A(_DWORD, _DWORD);
// 18044: using guessed type int __fastcall sub_18044(_DWORD, _DWORD, _DWORD);

//----- (000166EA) --------------------------------------------------------
// Encodes a short runtime payload into the active link queue at 0x20003D68/0x20003D69. Used by the default runtime pipeline and by pending-frame flush paths.
int __fastcall send_short_runtime_frame_over_link(int payload, int payload_len, int frame_class)
{
  unsigned __int8 v4; // r5
  int v5; // r0
  int v6; // r2
  int v7; // r3
  int v9; // [sp+0h] [bp-24h] BYREF
  int v10; // [sp+4h] [bp-20h]
  int v11; // [sp+8h] [bp-1Ch]
  int v12; // [sp+Ch] [bp-18h]
  int v13; // [sp+10h] [bp-14h]
  int v14; // [sp+18h] [bp-Ch]
  int v15; // [sp+1Ch] [bp-8h]
  int v16; // [sp+20h] [bp-4h]

  v14 = payload;
  v15 = payload_len;
  v16 = frame_class;
  if ( sub_15E18() )
    return 0;
  v4 = v15 + 2;
  if ( !sub_172CA(0) || sub_15E18() || frame_class == 1 || frame_class == 2 )
  {
    if ( !sub_15E4E(536886628, MEMORY[0x20003D68], MEMORY[0x20003D69]) )
    {
      HIWORD(v9) = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      LOBYTE(v9) = 2;
      BYTE1(v9) = frame_class;
      sub_18044((int)&v9 + 2);
      sub_15E74(536886628, (int)&v9, v4);
      return 1;
    }
    return 0;
  }
  sub_18308(0);
  if ( v5 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    if ( sub_15E68(MEMORY[0x20003D68], MEMORY[0x20003D69]) )
    {
      LOBYTE(v9) = 2;
      BYTE1(v9) = frame_class;
      sub_18044((int)&v9 + 2);
      sub_1776A((int)&v9, v4, v6, v7);
      sub_18344(1);
    }
    else
    {
      LOWORD(v9) = 1282;
      sub_18044((int)&v9 + 2);
      sub_15E74(536886628, (int)&v9, v4);
      if ( (unsigned int)sub_15E3C(536886628, MEMORY[0x20003D68], MEMORY[0x20003D69]) >= 2 )
        flush_chunked_runtime_transport_frame();
    }
    return 1;
  }
  if ( sub_15E4E(536886628, MEMORY[0x20003D68], MEMORY[0x20003D69]) )
    return 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v9 = 1282;
  sub_18044((int)&v9 + 2);
  sub_15E74(536886628, (int)&v9, v4);
  return 1;
}
// 16720: variable 'v5' is possibly undefined
// 1674C: variable 'v6' is possibly undefined
// 1674C: variable 'v7' is possibly undefined
// 15E3C: using guessed type int __fastcall sub_15E3C(_DWORD, _DWORD, _DWORD);
// 15E68: using guessed type int __fastcall sub_15E68(_DWORD, _DWORD);
// 172CA: using guessed type int __fastcall sub_172CA(_DWORD);
// 18344: using guessed type int __fastcall sub_18344(_DWORD);

//----- (00016800) --------------------------------------------------------
// Runtime pipeline for transport mode 4. Builds/updates the 7-byte runtime frame, refreshes the edge-change bitmap through sub_17F56(), and pushes the final 9-byte transport frame when new motion or pending status changes exist.
int service_runtime_frame_pipeline_mode4()
{
  int v0; // r4
  int v1; // r0
  int v2; // r7

  v0 = 0;
  if ( sub_15E4E(536886628, MEMORY[0x20003D68], MEMORY[0x20003D69]) )
  {
    if ( !sub_164F8() )
      goto LABEL_28;
LABEL_20:
    v0 = 1;
    MEMORY[0x20003C5C] = 0;
    goto LABEL_28;
  }
  switch ( MEMORY[0x20003C4C] )
  {
    case 1u:
      if ( MEMORY[0x20003C4D] )
      {
        MEMORY[0x20003C5C] = 0;
        v1 = sub_17FDC();
        if ( !sub_18308(v1) )
        {
          sub_18044(536889352, 536886415, 9);
          MEMORY[0x20003C4E] = 9;
          MEMORY[0x20003C4C] = 2;
LABEL_17:
          v0 = 1;
          break;
        }
        sub_1776A(536886415, 9);
        sub_18344(1);
        MEMORY[0x20003C4D] = 0;
      }
      else
      {
        consume_cached_motion_sample_into_runtime_buffer((unsigned __int8 *)0x20003C79);
        sub_18044(536886411, 536886393, 4);
        MEMORY[0x20003C5C] = 0;
        MEMORY[0x20003C4C] = 2;
        if ( !sub_18308(2) )
        {
          sub_18044(536889352, 536886406, 9);
          MEMORY[0x20003C4E] = 9;
          goto LABEL_17;
        }
        sub_1776A(536886406, 9);
        sub_18344(1);
      }
      MEMORY[0x20003C4C] = 0;
      goto LABEL_17;
    case 2u:
      if ( sub_18308(2) )
      {
        sub_1776A(536889352, MEMORY[0x20003C4E]);
        sub_18344(1);
        MEMORY[0x20003C4C] = 0;
      }
      goto LABEL_20;
    case 3u:
      MEMORY[0x20003C4C] = 0;
      v0 = 1;
      MEMORY[0x20003C5C] = 0;
      break;
    default:
      if ( !MEMORY[0x20003C4C] )
      {
        if ( sub_18308(0) )
        {
          v2 = build_runtime_input_frame((runtime_input_frame_t *)0x20003C78, 7, 0);
          sub_17F56(536886392, 0, 5, 0);
          if ( v2 || MEMORY[0x20003DE6] || is_runtime_frame_pending() && !MEMORY[0x20003DEB] )
          {
            mark_runtime_frame_pending(0);
            sub_18044(536886417, 536886758, 7);
            sub_1776A(536886415, 9);
            sub_18344(1);
            v0 = 1;
            MEMORY[0x20003C5C] = 0;
          }
        }
      }
      break;
  }
LABEL_28:
  if ( MEMORY[0x20003C78].flags << 27 )
    MEMORY[0x20003C5C] = 0;
  return v0;
}
// 1776A: using guessed type int __fastcall sub_1776A(_DWORD, _DWORD);
// 18044: using guessed type int __fastcall sub_18044(_DWORD, _DWORD, _DWORD);
// 18308: using guessed type int __fastcall sub_18308(_DWORD);
// 18344: using guessed type int __fastcall sub_18344(_DWORD);

//----- (00016940) --------------------------------------------------------
// Default runtime pipeline for non-mode-4 routes. If no lower-layer transfer is in flight, it builds the runtime frame, evaluates pending status changes, and either emits a short frame immediately or marks it for deferred flush.
int __fastcall service_runtime_frame_pipeline_default(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v11; // [sp+0h] [bp-4h] BYREF

  v11 = a4;
  v4 = 0;
  v5 = sub_15E4E(536886628, MEMORY[0x20003D68], MEMORY[0x20003D69]);
  if ( v5 )
  {
    v6 = sub_164F8(v5);
    if ( v6 )
    {
      v4 = 1;
      MEMORY[0x20003C5C] = 0;
    }
    v7 = sub_18308(v6);
    if ( v7 )
      flush_chunked_runtime_transport_frame(v7);
  }
  else
  {
    v8 = build_runtime_input_frame((unsigned __int8 *)0x20003C78, 7, 0);
    v9 = sub_17F56(536886392, 0, 5);
    if ( v8 )
    {
      v4 = 1;
      MEMORY[0x20003C5C] = 0;
      if ( v8 << 31 || MEMORY[0x20003C78] )
      {
        v9 = mark_runtime_frame_pending(1);
      }
      else
      {
        v11 = MEMORY[0x20003C79];
        v9 = send_short_runtime_frame_over_link((int)&v11, 4, 3);
      }
    }
    flush_pending_runtime_frame(v9);
  }
  return v4;
}
// 15E4E: using guessed type int __fastcall sub_15E4E(_DWORD, _DWORD, _DWORD);
// 164F8: using guessed type int __fastcall sub_164F8(_DWORD);
// 16644: using guessed type int __fastcall sub_16644(_DWORD);
// 17D34: using guessed type int __fastcall sub_17D34(_DWORD);
// 17F56: using guessed type int __fastcall sub_17F56(_DWORD, _DWORD, _DWORD);
// 17FE6: using guessed type int __fastcall sub_17FE6(_DWORD);
// 18308: using guessed type int __fastcall sub_18308(_DWORD);

//----- (000169FC) --------------------------------------------------------
// Top-level runtime-frame scheduler. Supports an immediate build path, a periodic service path every 0x3E80 ticks, and dispatches into the mode-4 or default runtime pipeline according to the current route/mode.
int __fastcall service_runtime_frame_scheduler(int force_mode, int run_pipeline)
{
  int v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0

  v4 = 0;
  if ( sub_18350() )
    sub_1835C();
  if ( force_mode )
  {
    if ( build_runtime_input_frame((runtime_input_frame_t *)0x20003C78, 7, force_mode) )
    {
      v4 = 1;
      MEMORY[0x20003C5C] = 0;
    }
  }
  else if ( run_pipeline )
  {
    v5 = sub_15816(0);
    if ( v5 == 4 )
      return service_runtime_frame_pipeline_mode4();
    else
      return service_runtime_frame_pipeline_default(v5, v6, v7, v8);
  }
  else
  {
    v10 = sub_16556() + MEMORY[0x20003C74];
    MEMORY[0x20003C74] = v10;
    if ( v10 >= 0x3E80 )
    {
      v11 = sub_15816(v10);
      if ( v11 == 4 )
        v15 = service_runtime_frame_pipeline_mode4();
      else
        v15 = service_runtime_frame_pipeline_default(v11, v12, v13, v14);
      v4 = v15;
      MEMORY[0x20003C74] = 0;
    }
  }
  return v4;
}
// 16A3C: variable 'v6' is possibly undefined
// 16A3C: variable 'v7' is possibly undefined
// 16A3C: variable 'v8' is possibly undefined
// 16A64: variable 'v12' is possibly undefined
// 16A64: variable 'v13' is possibly undefined
// 16A64: variable 'v14' is possibly undefined
// 15816: using guessed type int __fastcall sub_15816(_DWORD);
// 18350: using guessed type int sub_18350(void);
// 1835C: using guessed type int sub_1835C(void);

//----- (00016A76) --------------------------------------------------------
int __fastcall copy_runtime_frame_to_tx_buffer(int src_buf)
{
  int result; // r0

  sub_18044(536886417);
  return result;
}

//----- (00016A84) --------------------------------------------------------
int sub_16A84()
{
  int v0; // r5

  if ( !MEMORY[0x20003C4C] )
  {
    v0 = build_runtime_input_frame((unsigned __int8 *)0x20003C78, 7, 0);
    sub_17F56(536886392, 0, 5);
    if ( v0 )
    {
      MEMORY[0x20003C4C] = 1;
      if ( v0 << 31 )
      {
        if ( sub_18308(v0 << 31) )
        {
          sub_17FDC();
          sub_1776A(536886415, 9);
          sub_18344(1);
          MEMORY[0x20003C4C] = 3;
        }
        else
        {
          MEMORY[0x20003C4D] = 1;
        }
      }
      else
      {
        sub_18044(536886407, 536886393, 4);
        MEMORY[0x20003C4D] = 0;
      }
    }
  }
  return 0;
}
// 1776A: using guessed type int __fastcall sub_1776A(_DWORD, _DWORD);
// 17F56: using guessed type int __fastcall sub_17F56(_DWORD, _DWORD, _DWORD);
// 17FDC: using guessed type int sub_17FDC(void);
// 18044: using guessed type int __fastcall sub_18044(_DWORD, _DWORD, _DWORD);
// 18308: using guessed type int __fastcall sub_18308(_DWORD);
// 18344: using guessed type int __fastcall sub_18344(_DWORD);

//----- (00016AE8) --------------------------------------------------------
int sub_16AE8()
{
  MEMORY[0x20003C4C] = 0;
  return 0;
}

//----- (00016AF0) --------------------------------------------------------
// Higher-level runtime/link/power state machine. Services runtime-frame scheduling, accumulates inactivity timers, compares against 0x20003DD0 / 0x20003DD4, and triggers transport/power transitions plus some 2.4G MCU-speed changes.
int service_runtime_link_power_state_machine()
{
  int v0; // r5
  int v1; // r0
  int v2; // r0
  int v3; // r0
  unsigned int v4; // r0
  int v5; // r0
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0

  v0 = 0;
  sub_172B4(1);
  v1 = ~MEMORY[0x20003C58] & 2;
  if ( v1 )
  {
    v1 = ~MEMORY[0x20003C58] & 4;
    if ( v1 )
    {
      if ( (MEMORY[0x20003C58] & 1) != 0 )
        v2 = sub_183BC(0, 1);
      else
        v2 = sub_18368(0, 1);
      v0 = v2;
      goto LABEL_51;
    }
  }
  if ( sub_18374(v1) )
  {
    v3 = sub_18380(0, MEMORY[0x20003C78].flags);
    if ( v3 )
    {
      v4 = sub_15816(v3);
      if ( v4 < 4 )
      {
        v5 = 4 * v4;
        if ( (unsigned int)(v5 + 3) > 0xF )
          LOBYTE(v5) = 15;
        else
          LOBYTE(v5) = v5 + 3;
        v5 = (unsigned __int8)v5;
      }
      else
      {
        v5 = 3;
      }
      sub_18338(v5);
    }
  }
  if ( !service_runtime_frame_scheduler(0, 1) )
  {
    sub_17B8A(0);
    if ( (~MEMORY[0x20003C58] & 4) == 0 )
      MEMORY[0x20003C5C] = 0;
    if ( sub_1838C() == 2 && (unsigned int)sub_18398() < 3 )
    {
      v6 = 0;
      MEMORY[0x20003C5C] = 0;
    }
    else
    {
      v6 = sub_16556() + MEMORY[0x20003C5C];
      MEMORY[0x20003C5C] = v6;
    }
    if ( v6 > MEMORY[0x20003DD4] && MEMORY[0x20003C4A] )
      goto LABEL_29;
    if ( v6 > MEMORY[0x20003DD0] && MEMORY[0x20003C4A] )
    {
      if ( (unsigned int)sub_18398() < 3 )
      {
LABEL_29:
        v7 = 2;
        MEMORY[0x20003C5C] = 0;
        goto LABEL_38;
      }
      v7 = 4;
    }
    else
    {
      v8 = MEMORY[0x20003DC9];
      if ( MEMORY[0x20003DC9] )
        v8 = sub_183A4(0);
      v9 = sub_15816(v8);
      if ( (v9 == 4 || sub_15816(v9) == 5) && (sub_180D4(MEMORY[0x20003C5C], 500), v10) && !MEMORY[0x20003C78].flags )
        v7 = 3;
      else
        v7 = 0;
    }
LABEL_38:
    if ( v7 )
    {
      if ( v7 != 2 )
      {
        if ( v7 != 3 )
        {
          sub_165CC(1);
          v0 = 9;
          sub_172B4(4);
          MEMORY[0x20003E71] = 1;
        }
        goto LABEL_16;
      }
      sub_16610();
      v0 = 2;
      v11 = 3;
    }
    else
    {
      MEMORY[0x20003E71] = 0;
      sub_165CC(1);
      if ( (~MEMORY[0x20003C58] & 4) == 0 )
        goto LABEL_16;
      v11 = 1;
    }
    sub_172B4(v11);
    goto LABEL_16;
  }
  MEMORY[0x20003C5C] = 0;
  MEMORY[0x20003C60] = 0;
LABEL_16:
  if ( (~MEMORY[0x20003C58] & 4) == 0 )
  {
    MEMORY[0x20003C68] += sub_158B4();
    if ( MEMORY[0x20003C68] >= 0x4C4B40u )
    {
      MEMORY[0x20003C68] = 0;
      sub_183B0();
    }
  }
LABEL_51:
  sub_1823C();
  if ( !MEMORY[0x20003C4A] && !sub_183C8() && !sub_183D4() )
  {
    MEMORY[0x20003C6C] += sub_16556();
    if ( MEMORY[0x20003C6C] > 0xF4240u )
    {
      MEMORY[0x20003C4A] = 1;
      MEMORY[0x20003C6C] = 0;
      if ( sub_183E0() != 64000000 )
      {
        sub_15888();
        sub_183EC(257);
        sub_15C84(0);
        v12 = sub_183F8(328);
        v13 = sub_172CA(v12);
        v14 = sub_157DE(v13);
        sub_15784(v14);
      }
    }
  }
  if ( !MEMORY[0x20003C4A] )
  {
    if ( sub_183D4() )
    {
      if ( !sub_18404() )
      {
        MEMORY[0x20003C6C] += sub_16556();
        if ( MEMORY[0x20003C6C] > 0x2DC6C0u )
        {
          sub_18410(0);
          MEMORY[0x20003C4A] = 1;
          MEMORY[0x20003C6C] = 0;
          if ( sub_183E0() != 64000000 )
          {
            sub_15888();
            sub_183EC(257);
            sub_15C84(0);
            sub_183F8(328);
            MEMORY[0x50001004] |= 0x80u;
            MEMORY[0x50001001] &= 0x1Fu;
            v15 = sub_18104("-----2.4G MCU_SPEED_64MHZ\r\n");
            v16 = sub_172CA(v15);
            v17 = sub_157DE(v16);
            sub_15784(v17);
            MEMORY[0x50001004] &= ~0x80u;
            MEMORY[0x50001001] &= 0x1Fu;
          }
        }
      }
    }
  }
  sub_1841C(0, MEMORY[0x20003C78].flags);
  v18 = sub_18428(0, MEMORY[0x20003C78].flags);
  if ( sub_18374(v18) )
  {
    sub_18434(MEMORY[0x20003C78].flags);
    sub_18440(0, MEMORY[0x20003C78].flags);
    sub_1844C(0, MEMORY[0x20003C78].flags);
  }
  return v0;
}
// 16C12: conditional instruction was optimized away because r0.4==4
// 16BFA: variable 'v10' is possibly undefined
// 15784: using guessed type int __fastcall sub_15784(_DWORD);
// 157DE: using guessed type int __fastcall sub_157DE(_DWORD);
// 15816: using guessed type int __fastcall sub_15816(_DWORD);
// 15888: using guessed type int sub_15888(void);
// 158B4: using guessed type int sub_158B4(void);
// 15C84: using guessed type int __fastcall sub_15C84(_DWORD);
// 165CC: using guessed type int __fastcall sub_165CC(_DWORD);
// 16610: using guessed type int sub_16610(void);
// 172B4: using guessed type int __fastcall sub_172B4(_DWORD);
// 172CA: using guessed type int __fastcall sub_172CA(_DWORD);
// 17B8A: using guessed type int __fastcall sub_17B8A(_DWORD);
// 180D4: using guessed type int __fastcall sub_180D4(_DWORD, _DWORD);
// 18104: using guessed type int __fastcall sub_18104(_DWORD);
// 1823C: using guessed type int sub_1823C(void);
// 18338: using guessed type int __fastcall sub_18338(_DWORD);
// 18368: using guessed type int __fastcall sub_18368(_DWORD, _DWORD);
// 18374: using guessed type int __fastcall sub_18374(_DWORD);
// 18380: using guessed type int __fastcall sub_18380(_DWORD, _DWORD);
// 1838C: using guessed type int sub_1838C(void);
// 18398: using guessed type int sub_18398(void);
// 183A4: using guessed type int __fastcall sub_183A4(_DWORD);
// 183B0: using guessed type int sub_183B0(void);
// 183BC: using guessed type int __fastcall sub_183BC(_DWORD, _DWORD);
// 183C8: using guessed type int sub_183C8(void);
// 183D4: using guessed type int sub_183D4(void);
// 183E0: using guessed type int sub_183E0(void);
// 183EC: using guessed type int __fastcall sub_183EC(_DWORD);
// 183F8: using guessed type int __fastcall sub_183F8(_DWORD);
// 18404: using guessed type int sub_18404(void);
// 18410: using guessed type int __fastcall sub_18410(_DWORD);
// 1841C: using guessed type int __fastcall sub_1841C(_DWORD, _DWORD);
// 18428: using guessed type int __fastcall sub_18428(_DWORD, _DWORD);
// 18434: using guessed type int __fastcall sub_18434(_DWORD);
// 18440: using guessed type int __fastcall sub_18440(_DWORD, _DWORD);
// 1844C: using guessed type int __fastcall sub_1844C(_DWORD, _DWORD);

//----- (00016D9A) --------------------------------------------------------
void sub_16D9A()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0

  sub_18344(0);
  if ( (MEMORY[0x20003C58] & 1) != 0 )
  {
    sub_18458(536886344);
    if ( v0 == 3 )
    {
      sub_1832C(536886628);
      sub_18464(1);
    }
    else
    {
      sub_18464(1);
      sub_18470(v1);
      sub_1847C(v2);
    }
  }
  else
  {
    if ( (~MEMORY[0x20003C58] & 2) == 0 )
    {
      MEMORY[0x20003C58] ^= MEMORY[0x20003C58] & 2;
      MEMORY[0x20003C64] = 0;
    }
    sub_18488(268457313);
    sub_17270(5);
  }
}
// 16DBC: variable 'v0' is possibly undefined
// 16DC4: variable 'v1' is possibly undefined
// 16DC8: variable 'v2' is possibly undefined

//----- (0001706A) --------------------------------------------------------
void __fastcall sub_1706A(int a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned int v5; // r0
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r0
  char v9; // r1
  unsigned int v10; // r0
  char v11; // r2
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  char v17; // [sp+0h] [bp-24h] BYREF
  _BYTE v18[3]; // [sp+1h] [bp-23h] BYREF
  _BYTE v19[6]; // [sp+5h] [bp-1Fh] BYREF
  unsigned __int8 v20; // [sp+Bh] [bp-19h]
  unsigned int v21; // [sp+Ch] [bp-18h]
  int v22; // [sp+14h] [bp-10h]
  unsigned __int8 *v23; // [sp+18h] [bp-Ch]
  int v24; // [sp+1Ch] [bp-8h]
  int v25; // [sp+20h] [bp-4h]

  v22 = a1;
  v23 = a2;
  v24 = a3;
  v25 = a4;
  if ( a3 )
  {
    switch ( a4 )
    {
      case 1:
        sub_18320(a3);
        v21 = v5;
        sub_18044((int)&v17);
        sub_1805C((int)v18);
        if ( !v6 && (unsigned int)(v20 << 27) >> 30 == 3 )
        {
          sub_18044(536889377);
          sub_1832C(536886628);
          sub_18344(0);
          sub_1775C();
          sub_1859C((int)v19);
          v7 = sub_15816();
          if ( v7 < 4 )
          {
            v8 = 4 * v7;
            if ( (unsigned int)(v8 + 3) > 0xF )
              LOBYTE(v8) = 15;
            else
              LOBYTE(v8) = v8 + 3;
            v8 = (unsigned __int8)v8;
          }
          else
          {
            v8 = 3;
          }
          sub_18338(v8);
          sub_185A8((unsigned int)(v20 << 29) >> 31);
          if ( sub_172CA() )
          {
            v9 = 0;
            v10 = 0;
            do
            {
              v11 = v19[v10];
              v10 = (unsigned __int8)(v10 + 1);
              v9 += v11;
            }
            while ( v10 < 5 );
            MEMORY[0x200037AD] = v9 & 0xF;
          }
          sub_18344(v21);
          MEMORY[0x20003C58] ^= MEMORY[0x20003C58] & 1;
          MEMORY[0x20003C58] |= 2u;
          sub_185B4(0);
          v12 = MEMORY[0x20003C7F] >> 6;
          if ( v12 == 2 )
            sub_185C0(2);
          sub_182E4(v12);
          v21 = v13;
          v14 = sub_172CA();
          sub_1581C(v14, v21, 0);
          sub_172B4(1);
          sub_155C0(1u);
          MEMORY[0x20003C48] |= 0x5Fu;
          sub_185CC(1);
          sub_185D8(0);
          MEMORY[0x20003C50] = 0;
        }
        break;
      case 4:
        if ( (~MEMORY[0x20003C58] & 4) == 0 )
          MEMORY[0x20003C68] = 0;
        sub_185E4((int)a2);
        sub_185F0(-1);
        break;
      case 10:
        if ( (~MEMORY[0x20003C58] & 4) == 0 )
          MEMORY[0x20003C68] = 0;
        sub_185FC((int)a2);
        if ( v15 )
          sub_18608(*a2);
        break;
      case 11:
        if ( (~MEMORY[0x20003C58] & 4) == 0 )
          MEMORY[0x20003C68] = 0;
        sub_18614((int)a2);
        if ( v16 )
          sub_18620(*a2);
        break;
    }
  }
}
// 17098: variable 'v5' is possibly undefined
// 170B2: variable 'v6' is possibly undefined
// 1716A: variable 'v12' is possibly undefined
// 1716E: variable 'v13' is possibly undefined
// 171E6: variable 'v15' is possibly undefined
// 17200: variable 'v16' is possibly undefined

//----- (0001720E) --------------------------------------------------------
BOOL __fastcall sub_1720E(int a1)
{
  int v1; // r0
  int v2; // r0
  BOOL result; // r0

  sub_18308(a1);
  result = 0;
  if ( v1 )
  {
    sub_1862C(v1);
    if ( v2 )
      return 1;
  }
  return result;
}
// 17216: variable 'v1' is possibly undefined
// 1721E: variable 'v2' is possibly undefined

//----- (00017228) --------------------------------------------------------
void __fastcall sub_17228(unsigned __int8 a1)
{
  sub_18638(a1);
}

//----- (00017232) --------------------------------------------------------
BOOL sub_17232()
{
  return (~MEMORY[0x20003C58] & 2) == 0;
}

//----- (00017270) --------------------------------------------------------
void __fastcall sub_17270(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  if ( a1 != 2 && a1 && a1 != 4 )
  {
    if ( a1 != 5 )
      return;
    MEMORY[0x20003C4B] = 0;
    sub_18644(0);
    if ( v2 == 5 )
      return;
LABEL_10:
    sub_1865C(a1);
    return;
  }
  sub_18644(a1);
  if ( v3 != a1 )
  {
    sub_18650(v3);
    if ( v4 != 3 && v4 != 4 )
      goto LABEL_10;
  }
}
// 17290: variable 'v2' is possibly undefined
// 1729A: variable 'v3' is possibly undefined
// 172A2: variable 'v4' is possibly undefined

//----- (000172B4) --------------------------------------------------------
void __fastcall sub_172B4(int a1)
{
  if ( MEMORY[0x20003CDA] != a1 )
  {
    MEMORY[0x20003CDA] = a1;
    sub_155C0(1u);
  }
}

//----- (000172CA) --------------------------------------------------------
int sub_172CA()
{
  return MEMORY[0x20003CDB];
}

//----- (000172D0) --------------------------------------------------------
void __fastcall sub_172D0(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  void (*v21)(void); // r0
  int v22; // r4
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  unsigned int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r4
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  unsigned int v38; // r0

  v2 = sub_15816();
  if ( v2 >= 4 && !a1 )
  {
    MEMORY[0x20003CDC] = 0;
    MEMORY[0xE000ED10] &= ~4u;
    MEMORY[0x5000107A] |= 8u;
    MEMORY[0x5000107A] |= 4u;
    sub_18674(1342181472);
    sub_18680(1);
    if ( !v4 )
      __wfi();
    return;
  }
  sub_18668(v2);
  if ( v3 )
  {
LABEL_56:
    MEMORY[0x20003CDC] = 0;
    return;
  }
  _R7 = __get_CPSR();
  __disable_irq();
  v6 = sub_155EA();
  if ( v6 )
    goto LABEL_17;
  sub_1868C(0);
  if ( v6 )
    goto LABEL_17;
  v6 = MEMORY[0x20003D04](2);
  if ( v6 )
    goto LABEL_17;
  v7 = MEMORY[0x20003D00];
  if ( !MEMORY[0x20003D00] || (v7 = MEMORY[0x20003D00]()) != 0 )
    sub_18698(v7);
  v6 = MEMORY[0x20003CDD];
  if ( MEMORY[0x20003CDD] )
  {
    if ( a1 )
    {
      MEMORY[0x20003CDD] = 0;
      sub_186A4(v6);
      goto LABEL_19;
    }
LABEL_17:
    MEMORY[0x20003CDC] = 0;
    goto LABEL_28;
  }
  if ( !a1 )
  {
    sub_186B0(0);
    goto LABEL_28;
  }
LABEL_19:
  if ( a1 == 2 )
  {
    if ( !MEMORY[0x20003DC9] )
      sub_183A4(1);
    v8 = sub_15888();
    sub_186BC(v8);
    sub_186C8(v9);
    sub_186D4(v10);
    sub_184E8(5);
    sub_186E0(268455561);
    MEMORY[0x20003CDC] = 2;
    sub_186EC(2);
    sub_186F8(0);
    sub_18704(2);
    sub_18710(v11);
    sub_183A4(0);
  }
  else if ( a1 == 9 )
  {
    sub_186E0(268455581);
    sub_186B0(0);
  }
LABEL_28:
  __asm { MSR.W           PRIMASK, R7 }
  if ( a1 == 4 )
  {
    sub_186EC(v6);
    sub_186BC(v16);
    sub_18698(v17);
    sub_186C8(v18);
    sub_186D4(v19);
    sub_184E8(5);
    while ( 1 )
    {
      sub_18680(2);
      if ( v20 )
        break;
      sub_18728(0);
      sub_18734(0);
      MEMORY[0xE000E280] = 1;
      sub_18704(3);
    }
    MEMORY[0x20003CDC] = 2;
    sub_18710(2);
  }
  if ( MEMORY[0x20003CDC] )
  {
    sub_1871C(0);
    switch ( MEMORY[0x20003CDC] )
    {
      case 1:
        sub_18740(0);
        if ( MEMORY[0x20003CDA] != 1 )
        {
          MEMORY[0x20003CDA] = 1;
          sub_155C0(1u);
        }
        sub_1874C(MEMORY[0x20003CE4]);
        sub_155C0(0);
        v21 = (void (*)(void))MEMORY[0x20003D08];
        if ( MEMORY[0x20003D08] )
          goto LABEL_48;
        break;
      case 2:
      case 3:
      case 4:
        v22 = sub_15816();
        sub_182E4(v22);
        if ( v22 != v23 )
        {
          sub_182F0(16);
          sub_182E4(v24);
          sub_182FC(v25);
          sub_182E4(v26);
          sub_1581C(MEMORY[0x20003CDB], v27, 0);
          sub_15888();
          sub_15784();
        }
        sub_18740(0);
        if ( MEMORY[0x20003CDA] != 1 )
        {
          MEMORY[0x20003CDA] = 1;
          sub_155C0(1u);
        }
        sub_1874C(MEMORY[0x20003CE4]);
        sub_155C0(0);
        sub_18758(v28);
        sub_18764(v29);
        sub_184A0(v30);
        if ( v31 )
        {
          if ( v31 == 1 )
            v32 = 2;
          else
            v32 = 4;
          sub_1865C(v32);
        }
        else
        {
          sub_1865C(0);
        }
        v21 = (void (*)(void))MEMORY[0x20003D10];
        if ( MEMORY[0x20003D10] )
          goto LABEL_48;
        break;
      case 5:
        v33 = sub_15816();
        sub_182E4(v33);
        if ( v33 != v34 )
        {
          sub_182F0(16);
          sub_182E4(v35);
          sub_182FC(v36);
          sub_182E4(v37);
          sub_1581C(MEMORY[0x20003CDB], v38, 0);
          sub_15888();
          sub_15784();
        }
        sub_18740(0);
        if ( MEMORY[0x20003CDA] != 1 )
        {
          MEMORY[0x20003CDA] = 1;
          sub_155C0(1u);
        }
        sub_1874C(MEMORY[0x20003CE4]);
        sub_155C0(0);
        v21 = (void (*)(void))MEMORY[0x20003D08];
        if ( MEMORY[0x20003D08] )
LABEL_48:
          v21();
        break;
      default:
        goto LABEL_56;
    }
    goto LABEL_56;
  }
}
// 172EA: variable 'v3' is possibly undefined
// 17316: variable 'v4' is possibly undefined
// 17330: variable 'v6' is possibly undefined
// 17396: variable 'v9' is possibly undefined
// 1739A: variable 'v10' is possibly undefined
// 173C2: variable 'v11' is possibly undefined
// 173F0: variable 'v16' is possibly undefined
// 173F4: variable 'v17' is possibly undefined
// 173F8: variable 'v18' is possibly undefined
// 173FC: variable 'v19' is possibly undefined
// 17412: variable 'v20' is possibly undefined
// 17490: variable 'v23' is possibly undefined
// 17498: variable 'v24' is possibly undefined
// 1749C: variable 'v25' is possibly undefined
// 174A0: variable 'v26' is possibly undefined
// 174AA: variable 'v27' is possibly undefined
// 174D6: variable 'v28' is possibly undefined
// 174DA: variable 'v29' is possibly undefined
// 174DE: variable 'v30' is possibly undefined
// 174E4: variable 'v31' is possibly undefined
// 17512: variable 'v34' is possibly undefined
// 1751A: variable 'v35' is possibly undefined
// 1751E: variable 'v36' is possibly undefined
// 17522: variable 'v37' is possibly undefined
// 1752E: variable 'v38' is possibly undefined
// 20003D04: using guessed type int (__fastcall *)(_DWORD);

//----- (000175BC) --------------------------------------------------------
int sub_175BC()
{
  int v1; // r5
  int v2; // r0

  if ( sub_18770() )
    return 5;
  if ( sub_18350() )
    sub_1835C();
  if ( !sub_15E4E(536885288, MEMORY[0x2000382C], MEMORY[0x2000382D]) )
  {
    v1 = build_runtime_input_frame((runtime_input_frame_t *)0x20003D1D, 8, 0);
    sub_17F56(536886556, byte_1, 6, 1);
    if ( v1 )
      sub_17D28(1);
    flush_pending_runtime_frame();
  }
  sub_18428(1, MEMORY[0x20003D1D]);
  v2 = sub_1841C(1, MEMORY[0x20003D1D]);
  if ( sub_18374(v2) )
  {
    sub_18440(1, MEMORY[0x20003D1D]);
    sub_18380(1, MEMORY[0x20003D1D]);
    sub_1844C(1, MEMORY[0x20003D1D]);
  }
  sub_17B8A(1);
  return 6;
}
// 1: using guessed type _BYTE byte_1[203];
// 17B8A: using guessed type int __fastcall sub_17B8A(_DWORD);
// 18350: using guessed type int sub_18350(void);
// 1835C: using guessed type int sub_1835C(void);
// 18374: using guessed type int __fastcall sub_18374(_DWORD);
// 18380: using guessed type int __fastcall sub_18380(_DWORD, _DWORD);
// 1841C: using guessed type int __fastcall sub_1841C(_DWORD, _DWORD);
// 18428: using guessed type int __fastcall sub_18428(_DWORD, _DWORD);
// 18440: using guessed type int __fastcall sub_18440(_DWORD, _DWORD);
// 1844C: using guessed type int __fastcall sub_1844C(_DWORD, _DWORD);
// 18770: using guessed type int sub_18770(void);

//----- (00017646) --------------------------------------------------------
void __fastcall sub_17646(int a1)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0

  _R7 = __get_CPSR();
  __disable_irq();
  if ( a1 != 7 && (sub_155EA() || (sub_1868C(0), v3))
    || (sub_18680(2), v4)
    || (sub_18680(3), v5)
    || (sub_18680(5), v6)
    || (sub_18680(6), v7) )
  {
    sub_18740(6);
  }
  else
  {
    switch ( a1 )
    {
      case 6:
        MEMORY[0x20003D1B] = 0;
        break;
      case 7:
        sub_1832C(536885296);
        sub_1832C(536885288);
        v8 = sub_15888();
        sub_186BC(v8);
        sub_1877C(MEMORY[0x20003C56]);
        sub_1874C(268455613);
        sub_186E0(268455541);
        sub_186EC(v9);
        sub_18704(2);
        sub_18710(v10);
        break;
      case 8:
        sub_15888();
        sub_1877C(MEMORY[0x20003C54]);
        sub_1874C(268455601);
        sub_18704(2);
        break;
    }
  }
  __asm { MSR.W           PRIMASK, R7 }
  sub_1871C(0);
  if ( MEMORY[0x20003D1B] )
  {
    if ( MEMORY[0x20003D1B] == 1 || MEMORY[0x20003D1B] == 2 )
      sub_155C0(0);
    MEMORY[0x20003D1B] = 0;
  }
}
// 17666: variable 'v3' is possibly undefined
// 17670: variable 'v4' is possibly undefined
// 1767A: variable 'v5' is possibly undefined
// 17684: variable 'v6' is possibly undefined
// 1768E: variable 'v7' is possibly undefined
// 176D2: variable 'v9' is possibly undefined
// 176E0: variable 'v10' is possibly undefined

//----- (0001775C) --------------------------------------------------------
void sub_1775C()
{
  int v0; // r0

  sub_18464(1);
  sub_18788(v0);
}
// 17764: variable 'v0' is possibly undefined

//----- (0001776A) --------------------------------------------------------
int __fastcall sub_1776A(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int i; // r2
  char v8; // r0
  int v9; // r2
  int v10; // r0
  int result; // r0
  int v16; // [sp+0h] [bp-4h] BYREF

  v16 = a4;
  _R6 = __get_CPSR();
  __disable_irq();
  LOBYTE(v16) = 0;
  for ( i = 0; i < a2; LOBYTE(v16) = v8 )
  {
    v8 = *(_BYTE *)(a1 + i) + v16;
    i = (unsigned __int8)(i + 1);
  }
  sub_18794(&v16, 1, i);
  v10 = sub_18794(a1, a2, v9);
  result = sub_187A0(v10);
  __asm { MSR.W           PRIMASK, R6 }
  return result;
}
// 177A0: variable 'v9' is possibly undefined
// 18794: using guessed type int __fastcall sub_18794(_DWORD, _DWORD, _DWORD);
// 187A0: using guessed type int __fastcall sub_187A0(_DWORD);

//----- (000177AE) --------------------------------------------------------
void __fastcall sub_177AE(int a1)
{
  int v2; // r0

  _R4 = __get_CPSR();
  __disable_irq();
  sub_187AC(a1);
  sub_187A0(v2);
  __asm { MSR.W           PRIMASK, R4 }
}
// 177BA: variable 'v2' is possibly undefined

//----- (000177C4) --------------------------------------------------------
int __fastcall sub_177C4(int a1)
{
  unsigned __int8 v7; // [sp+0h] [bp-4h]

  v7 = 0;
  _R7 = __get_CPSR();
  __disable_irq();
  sub_187B8(a1);
  __asm { MSR.W           PRIMASK, R7 }
  return v7;
}
// 177E8: conditional instruction was optimized away because %var_4.1==0

//----- (0001781E) --------------------------------------------------------
int __fastcall sub_1781E(int a1, int a2, unsigned int a3)
{
  unsigned int v5; // r0
  char v7; // r1
  int v8; // r0
  char v14; // [sp+0h] [bp-4h]

  v5 = 0;
  v14 = 0;
  _R6 = __get_CPSR();
  __disable_irq();
  if ( a3 )
  {
    do
    {
      v7 = *(_BYTE *)(a2 + v5) + v14;
      v5 = (unsigned __int8)(v5 + 1);
      v14 = v7;
    }
    while ( v5 < a3 );
  }
  sub_187D0(a1);
  sub_187D0(a1);
  sub_187A0(v8);
  __asm { MSR.W           PRIMASK, R6 }
  return 1;
}
// 1785E: variable 'v8' is possibly undefined

//----- (0001786C) --------------------------------------------------------
void sub_1786C()
{
  int v0; // r0
  int v1; // r0
  int (*v2)(void); // r0
  int v3; // r0
  void (*v4)(void); // r0
  int v5; // r0
  void (*v6)(void); // r0
  int v7; // r0
  void (*v8)(void); // r0

  sub_18638(0);
  if ( v0 || (sub_1862C(0), !v1) )
  {
    v2 = *(int (**)(void))(28 * MEMORY[0x20003D3C] + 0x10014A84);
    if ( v2 )
    {
      if ( v2() )
        sub_187DC(0);
    }
  }
  sub_18638(1);
  if ( v3 )
  {
    v4 = *(void (**)(void))(28 * MEMORY[0x20003D3C] + 0x10014A88);
    if ( v4 )
      v4();
    sub_187DC(1);
  }
  sub_18638(2);
  if ( v5 )
  {
    v6 = *(void (**)(void))(28 * MEMORY[0x20003D3C] + 0x10014A8C);
    if ( v6 )
      v6();
    sub_187DC(2);
  }
  sub_18638(3);
  if ( v7 )
  {
    v8 = *(void (**)(void))(28 * MEMORY[0x20003D3C] + 0x10014A94);
    if ( v8 )
      v8();
    sub_187DC(3);
  }
}
// 1787A: variable 'v0' is possibly undefined
// 17882: variable 'v1' is possibly undefined
// 178A6: variable 'v3' is possibly undefined
// 178C6: variable 'v5' is possibly undefined
// 178E6: variable 'v7' is possibly undefined

//----- (00017920) --------------------------------------------------------
int __fastcall sub_17920(int a1)
{
  int v1; // r0
  _BYTE v3[4]; // [sp+4h] [bp-4h] BYREF

  while ( 1 )
  {
    sub_1862C(a1);
    if ( v1 )
      break;
    a1 = sub_177C4((int)v3);
    if ( a1 )
      a1 = sub_155A8();
  }
  return 1;
}
// 1792C: variable 'v1' is possibly undefined

//----- (0001795C) --------------------------------------------------------
int (*sub_1795C())(void)
{
  MEMORY[0x20003D58] = 2;
  return sub_15590();
}

//----- (0001796A) --------------------------------------------------------
int (*sub_1796A())(void)
{
  MEMORY[0x20003D58] = 1;
  return sub_1559C();
}

//----- (00017978) --------------------------------------------------------
int sub_17978()
{
  int v0; // r0
  int v1; // r0
  unsigned int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r3
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r6
  int v13; // r3
  int v14; // r0
  int v15; // r2
  char v16; // r4
  int v17; // r2
  _BYTE *v18; // r0
  int v19; // r2
  _BYTE *v20; // r0
  int v21; // r0
  int v22; // r3
  int v23; // r2
  int v24; // r0
  int v26; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v27[6]; // [sp+4h] [bp-18h] BYREF

  v0 = sub_18320();
  v1 = sub_187E8(v0);
  if ( !v1 )
  {
    MEMORY[0x20003D59] = sub_187F4(28);
    MEMORY[0x20003D5C] = sub_18800();
    v2 = sub_1880C();
    MEMORY[0x20003D5B] = v2;
    if ( MEMORY[0x20003D59] >= 0x1Cu )
    {
      if ( MEMORY[0x20003D5C] >= 5u )
      {
        if ( v2 < 0x3B )
        {
          v9 = sub_18830(536889569, &v26);
          sub_15588(v9);
          v2 = sub_1776A(536889569, (unsigned __int8)v26, v10, v11);
        }
      }
      else
      {
        v6 = sub_18824(536889569, &v26);
        sub_15588(v6);
        v2 = sub_1776A(536889569, (unsigned __int8)v26, v7, v8);
      }
    }
    else
    {
      v3 = sub_18818(536889569, &v26);
      sub_15588(v3);
      v2 = sub_1776A(536889569, (unsigned __int8)v26, v4, v5);
    }
    while ( 1 )
    {
      v1 = sub_187E8(v2);
      if ( v1 )
        break;
      sub_1883C();
      v1 = sub_15E68(MEMORY[0x20003D68], MEMORY[0x20003D69]);
      if ( v1 )
        break;
      sub_15588(0);
      v12 = 0;
      memset(v27, 0, 20);
      while ( !sub_15E68(MEMORY[0x20003D68], MEMORY[0x20003D69]) )
      {
        v14 = sub_15E9E(536886628, v27);
        v16 = v14;
        if ( BYTE1(v27[0]) != 5 )
          break;
        if ( v14 == 9 )
        {
          if ( MEMORY[0x20003D5D] == 1 )
          {
            sub_1776A((int)v27, 9u, v15, v13);
            sub_15EFA(536886628);
          }
          else
          {
            v18 = (_BYTE *)(MEMORY[0x20003D5D] + 536886636);
            *v18 = MEMORY[0x20003D5E];
            v18[1] = MEMORY[0x20003D5F];
            v19 = MEMORY[0x20003D60];
            v18[2] = MEMORY[0x20003D60];
            v18[3] = MEMORY[0x20003D61];
            sub_1776A(536886636, 9u, v19, v13);
            MEMORY[0x20003D5D] = 1;
          }
          v12 = 1;
          break;
        }
        sub_15EFA(536886628);
        sub_18044(MEMORY[0x20003D5D] + 536886636);
        MEMORY[0x20003D5D] = MEMORY[0x20003D5D] + v16 - 2;
        if ( MEMORY[0x20003D5D] == 9 )
          goto LABEL_15;
      }
      v1 = MEMORY[0x20003D5D];
      if ( MEMORY[0x20003D5D] != 1 )
      {
        v20 = (_BYTE *)(MEMORY[0x20003D5D] + 536886636);
        *v20 = MEMORY[0x20003D5E];
        v20[1] = MEMORY[0x20003D5F];
        v17 = MEMORY[0x20003D60];
        v20[2] = MEMORY[0x20003D60];
        v20[3] = MEMORY[0x20003D61];
LABEL_15:
        sub_1776A(536886636, 9u, v17, v13);
        v1 = 1;
        MEMORY[0x20003D5D] = 1;
        break;
      }
      if ( v12 )
        break;
      v21 = sub_15E9E(536886628, 536889569);
      LOBYTE(v26) = v21;
      v23 = MEMORY[0x200048E1];
      if ( MEMORY[0x200048E1] == 2 && MEMORY[0x200048E2] == 5 && v21 == 6 )
      {
        v1 = sub_17232(6, 5, 2, v22, v26, v27[0]);
        if ( v1 )
          break;
      }
      sub_1776A(536889569, (unsigned __int8)v26, v23, v22);
      v2 = sub_15EFA(536886628);
    }
  }
  sub_18308(v1);
  if ( !v24 )
    sub_18344(1);
  MEMORY[0x20003D58] = 0;
  return 0;
}
// 179B6: variable 'v4' is possibly undefined
// 179B6: variable 'v5' is possibly undefined
// 179D4: variable 'v7' is possibly undefined
// 179D4: variable 'v8' is possibly undefined
// 179F0: variable 'v10' is possibly undefined
// 179F0: variable 'v11' is possibly undefined
// 17A6A: variable 'v17' is possibly undefined
// 17A6A: variable 'v13' is possibly undefined
// 17ABE: variable 'v15' is possibly undefined
// 17AEC: variable 'v22' is possibly undefined
// 17AFA: variable 'v24' is possibly undefined
// 17B04: variable 'v23' is possibly undefined
// 15588: using guessed type int __fastcall sub_15588(_DWORD);
// 15E68: using guessed type int __fastcall sub_15E68(_DWORD, _DWORD);
// 15E9E: using guessed type int __fastcall sub_15E9E(_DWORD, _DWORD);
// 15EFA: using guessed type int __fastcall sub_15EFA(_DWORD);
// 17232: using guessed type int __fastcall sub_17232(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 18320: using guessed type int sub_18320(void);
// 18344: using guessed type int __fastcall sub_18344(_DWORD);
// 187E8: using guessed type int __fastcall sub_187E8(_DWORD);
// 187F4: using guessed type int __fastcall sub_187F4(_DWORD);
// 18800: using guessed type int sub_18800(void);
// 1880C: using guessed type int sub_1880C(void);
// 18818: using guessed type int __fastcall sub_18818(_DWORD, _DWORD);
// 18824: using guessed type int __fastcall sub_18824(_DWORD, _DWORD);
// 18830: using guessed type int __fastcall sub_18830(_DWORD, _DWORD);
// 1883C: using guessed type int sub_1883C(void);

//----- (00017B34) --------------------------------------------------------
int __fastcall consume_cached_motion_sample_for_mode4(_BYTE *a1)
{
  *a1 = MEMORY[0x20003D78];
  a1[1] = MEMORY[0x20003D79];
  a1[2] = MEMORY[0x20003D7A];
  a1[3] = MEMORY[0x20003D7B];
  MEMORY[0x20003D77] = 0;
  return MEMORY[0x20003D76];
}

//----- (00017B50) --------------------------------------------------------
int poll_and_cache_motion_sample()
{
  int result; // r0

  result = MEMORY[0x20003D77];
  if ( !MEMORY[0x20003D77] )
  {
    result = sample_and_decode_motion_delta((_BYTE *)0x20003D78);
    MEMORY[0x20003D76] = result;
    MEMORY[0x20003D77] = result;
  }
  return result;
}

//----- (00017B66) --------------------------------------------------------
int __fastcall consume_cached_motion_sample_for_runtime_frame(_BYTE *a1)
{
  *a1 = MEMORY[0x20003D78];
  a1[1] = MEMORY[0x20003D79];
  a1[2] = MEMORY[0x20003D7A];
  a1[3] = MEMORY[0x20003D7B];
  MEMORY[0x20003D77] = 0;
  return MEMORY[0x20003D76];
}

//----- (00017B82) --------------------------------------------------------
void __fastcall sub_17B82(int a1)
{
  sub_18848(a1);
}

//----- (00017B8A) --------------------------------------------------------
int __fastcall sub_17B8A(int a1, int a2, int a3, int a4)
{
  return sub_17CEC(a1, a2, a3, a4);
}

//----- (00017B9C) --------------------------------------------------------
// Reads one raw sensor sample, decodes a 4-byte X/Y delta, gates output using the staged optical-engine mode at 0x2000493D and status thresholds, and may run the recovery write sequence 0x7F/0x09/0x54/0x1D when the sensor enters a bad state.
int __fastcall sample_and_decode_motion_delta(unsigned __int8 *out_delta)
{
  int v2; // r7
  int v3; // r6
  unsigned int v4; // r5
  int v11; // r1
  __int16 v12; // r0
  int v13; // r2
  unsigned int v14; // r1
  unsigned int v15; // r0
  int v16; // [sp+0h] [bp-24h] BYREF
  int v17; // [sp+4h] [bp-20h]
  _BYTE v18[4]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v19[2]; // [sp+Ch] [bp-18h] BYREF
  int v20; // [sp+14h] [bp-10h]
  char v21[4]; // [sp+18h] [bp-Ch] BYREF
  int v22; // [sp+1Ch] [bp-8h]

  v21[0] = 7;
  v2 = 0;
  v19[1] = 1711122;
  v19[0] = 285475586;
  v16 = 0;
  v17 = 0;
  v18[0] = 0;
  v3 = 0;
  sensor_exchange_bytes((unsigned __int8 *)v21, (int)v19, (int)&v16);
  sensor_read_single_register(22, (int)v18);
  v4 = BYTE2(v17);
  v22 = BYTE1(v17);
  v20 = (unsigned __int8)v16 >> 7 << 7;
  if ( (is_sensor_bad_state_latched()
     || v4 >= 0xC0 && MEMORY[0x2000493D] == 1
     || v4 >= 0xE0 && (!MEMORY[0x2000493D] || MEMORY[0x2000493D] == 2))
    && !MEMORY[0x20003D80] )
  {
    clear_sensor_bad_state_and_start_recovery_hold();
    _R5 = __get_CPSR();
    __disable_irq();
    sub_18854(127);
    sub_18854(9);
    sub_18854(84);
    sub_18854(127);
    sub_18854(29);
    sub_18854(127);
    sub_18854(9);
    MEMORY[0x20003D80] = 1;
    MEMORY[0x20003D81] = 1;
    __asm { MSR.W           PRIMASK, R5 }
  }
  else if ( (v22 & 0x40) != 0 )
  {
    latch_sensor_bad_state_if_clear();
  }
  else if ( MEMORY[0x20003D81] )
  {
    if ( MEMORY[0x20003D82] < 0x50u || v18[0] < 0x50u )
      v3 = 1;
    else
      MEMORY[0x20003D81] = 0;
  }
  MEMORY[0x20003D82] = v18[0];
  if ( v20 && !v3 )
  {
    if ( MEMORY[0x20003D7F] )
    {
      v11 = BYTE2(v16);
      v12 = 2 * (BYTE1(v16) | (HIBYTE(v16) << 8));
      v13 = (unsigned __int8)v17 << 8;
      *out_delta = 2 * BYTE1(v16);
      v14 = 2 * (v11 | v13);
      out_delta[1] = HIBYTE(v12);
      out_delta[2] = v14;
      v15 = v14 >> 8;
    }
    else
    {
      *out_delta = BYTE1(v16);
      out_delta[2] = BYTE2(v16);
      out_delta[1] = HIBYTE(v16);
      LOBYTE(v15) = v17;
    }
    out_delta[3] = v15;
    return 1;
  }
  else
  {
    *out_delta = 0;
    out_delta[2] = 0;
    out_delta[1] = 0;
    out_delta[3] = 0;
  }
  return v2;
}

//----- (00017CEC) --------------------------------------------------------
int __fastcall sub_17CEC(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v5; // [sp+0h] [bp-4h] BYREF

  v5 = a4;
  LOBYTE(v5) = 0;
  sub_18854(127);
  sensor_read_single_register(0, (int)&v5);
  result = (unsigned __int8)v5;
  if ( (unsigned __int8)v5 != 51 )
  {
    MEMORY[0x20003D7C] = 0;
    return sub_18860();
  }
  return result;
}
// 18860: using guessed type int sub_18860(void);

//----- (00017D28) --------------------------------------------------------
char __fastcall sub_17D28(char result)
{
  MEMORY[0x20003DED] = result;
  return result;
}

//----- (00017D34) --------------------------------------------------------
char __fastcall mark_runtime_frame_pending(char result)
{
  MEMORY[0x20003DEE] = result;
  return result;
}

//----- (00017D3A) --------------------------------------------------------
int is_runtime_frame_pending()
{
  return MEMORY[0x20003DEE];
}

//----- (00017D40) --------------------------------------------------------
int __fastcall sub_17D40(int a1, int a2)
{
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r4
  unsigned int v6; // r0

  v3 = a1 << 31 != 0;
  if ( (a1 & 2) != 0 )
    v3 |= 2u;
  if ( (a1 & 4) != 0 )
    v3 |= 4u;
  if ( (a1 & 8) != 0 )
    v3 |= 8u;
  if ( (a1 & 0x10) != 0 )
    v3 |= 0x10u;
  if ( a2 == 1 )
  {
    v5 = v3 | 0x20;
    MEMORY[0x20003E84] = 1;
  }
  else
  {
    if ( MEMORY[0x20003E84] && (sub_1886C(MEMORY[0x20003E84]), sub_180D4(1000), v4 > MEMORY[0x20003E84]) )
    {
      v5 = v3 | 0x20;
      MEMORY[0x20003E84] += sub_158B4();
    }
    else
    {
      MEMORY[0x20003E84] = 0;
      v5 = v3 & 0xDF;
    }
    if ( a2 == 255 )
    {
      MEMORY[0x20003E88] = 1;
      return v5 | 0x40;
    }
  }
  if ( MEMORY[0x20003E88] && (sub_1886C(MEMORY[0x20003E88]), sub_180D4(1000), v6 > MEMORY[0x20003E88]) )
  {
    MEMORY[0x20003E88] += sub_158B4();
    return v5 | 0x40;
  }
  else
  {
    MEMORY[0x20003E88] = 0;
    return v5 & 0xBF;
  }
}
// 17D8C: variable 'v4' is possibly undefined
// 17DC8: variable 'v6' is possibly undefined

//----- (00017DEE) --------------------------------------------------------
int __fastcall sub_17DEE(int result, int a2, int a3, int a4)
{
  int v4; // r3
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r1

  if ( a4 )
  {
    v4 = 1;
    v5 = 6;
  }
  else
  {
    v4 = 0;
    v5 = 5;
  }
  switch ( result )
  {
    case 0:
      v6 = *(unsigned __int8 *)(a3 + v4);
      if ( a2 )
        result = v6 | 1;
      else
        result = 2 * (v6 >> 1);
      goto LABEL_22;
    case 1:
      v7 = *(unsigned __int8 *)(a3 + v4);
      if ( a2 )
      {
        v8 = 2;
        goto LABEL_19;
      }
      v9 = 253;
      goto LABEL_21;
    case 2:
      v7 = *(unsigned __int8 *)(a3 + v4);
      if ( a2 )
      {
        v8 = 4;
        goto LABEL_19;
      }
      v9 = 251;
      goto LABEL_21;
    case 3:
      v7 = *(unsigned __int8 *)(a3 + v4);
      if ( a2 )
      {
        v8 = 8;
        goto LABEL_19;
      }
      v9 = 247;
      goto LABEL_21;
    case 4:
      v7 = *(unsigned __int8 *)(a3 + v4);
      if ( a2 )
      {
        v8 = 16;
LABEL_19:
        result = v7 | v8;
      }
      else
      {
        v9 = 239;
LABEL_21:
        result = v7 & v9;
      }
LABEL_22:
      *(_BYTE *)(a3 + v4) = result;
      return result;
    case 5:
      if ( !a2 )
        goto LABEL_25;
      *(_BYTE *)(a3 + v5) = 1;
      return result;
    case 6:
      if ( a2 )
      {
        *(_BYTE *)(a3 + v5) = -1;
        return 255;
      }
      else
      {
LABEL_25:
        *(_BYTE *)(a3 + v5) = 0;
      }
      return result;
    default:
      return result;
  }
}

//----- (00017E84) --------------------------------------------------------
void __fastcall sub_17E84(int a1, int a2, int a3, int a4)
{
  unsigned __int8 v8; // r0
  unsigned __int8 v9; // r0
  char v10; // r0
  char v11; // r0
  int v12; // r1
  unsigned __int8 v13; // [sp+0h] [bp-4h] BYREF
  unsigned __int8 v14; // [sp+1h] [bp-3h]
  char v15; // [sp+2h] [bp-2h]
  char v16; // [sp+3h] [bp-1h]

  sub_18878(a1);
  v13 = v8;
  sub_18878(a1);
  v14 = v9;
  sub_18878(a1);
  v15 = v10;
  sub_18878(a1);
  v16 = v11;
  switch ( v13 )
  {
    case 0u:
      return;
    case 1u:
      sub_17DEE(v14, a2, a3, a4);
      if ( a4 )
        v12 = 536886765;
      else
        v12 = 536886766;
      *(_BYTE *)v12 = 1;
      break;
    case 2u:
      sub_18884(v14);
      break;
    case 3u:
      if ( v14 == 1 )
      {
        if ( a2 )
          sub_1889C(a4);
      }
      else if ( v14 == 2 )
      {
        if ( a2 )
          sub_188A8(a4);
      }
      else if ( v14 == 3 && a2 )
      {
        sub_18890(a4);
      }
      break;
    case 4u:
      sub_188B4(v14);
      break;
    case 5u:
      sub_188C0((int)&v13);
      break;
    default:
      sub_188CC(v13);
      break;
  }
}
// 17E96: variable 'v8' is possibly undefined
// 17EA2: variable 'v9' is possibly undefined
// 17EAE: variable 'v10' is possibly undefined
// 17EBA: variable 'v11' is possibly undefined

//----- (00017F56) --------------------------------------------------------
int __fastcall sub_17F56(int a1, _BYTE *a2, int a3, int a4)
{
  _BYTE *v4; // r4
  char v5; // r5
  int v7; // r0
  int v8; // r5
  int v9; // r7
  unsigned int i; // r4
  int v11; // r1

  v4 = &a2[a1];
  v5 = a2[a1 + 1];
  if ( a4 )
  {
    a2[536886751] = v5;
    a2[536886752] = v4[2];
    a2[536886753] = v4[3];
    a2[536886754] = v4[4];
  }
  else
  {
    a2[536886759] = v5;
    a2[536886760] = v4[2];
    a2[536886761] = v4[3];
    a2[536886762] = v4[4];
  }
  v7 = sub_17D40((unsigned __int8)a2[a1], *(unsigned __int8 *)(a1 + a3));
  v8 = v7;
  if ( MEMORY[0x20003E7D] != v7 )
  {
    v9 = MEMORY[0x20003E7D] ^ v7;
    MEMORY[0x20003E7D] = v7;
    for ( i = 0; i < 7; i = (unsigned __int8)(i + 1) )
    {
      if ( ((1 << i) & v9) != 0 )
      {
        MEMORY[0x20003E7C] = i;
        if ( ((1 << i) & v8) != 0 )
          v11 = 255;
        else
          v11 = 0;
        if ( a4 )
          sub_17E84(i, v11, 536886750);
        else
          sub_17E84(i, v11, 536886758);
      }
    }
  }
  return 0;
}
// 17D40: using guessed type int __fastcall sub_17D40(_DWORD, _DWORD);
// 17E84: using guessed type int __fastcall sub_17E84(_DWORD, _DWORD, _DWORD);

//----- (00017FDC) --------------------------------------------------------
int sub_17FDC()
{
  return copy_runtime_frame_to_tx_buffer(536886758);
}
// 16A76: using guessed type int __fastcall sub_16A76(_DWORD);

//----- (00017FE6) --------------------------------------------------------
// Flushes deferred runtime output. If 0x20003DED is set it emits the pending 8-byte frame; otherwise 0x20003DEE causes the cached 7-byte runtime frame to be sent through the route-specific helper.
int flush_pending_runtime_frame()
{
  int result; // r0

  if ( MEMORY[0x20003DED] )
  {
    MEMORY[0x20003DED] = 0;
    MEMORY[0x20003DDE] = 1;
    return sub_15E74(536885288, 536886750, 8);
  }
  else
  {
    result = MEMORY[0x20003DEE];
    if ( MEMORY[0x20003DEE] )
    {
      MEMORY[0x20003DEE] = 0;
      if ( sub_15816() == 4 )
        return copy_runtime_frame_to_tx_buffer(536886758);
      else
        return send_short_runtime_frame_over_link(536886758, 7, 3);
    }
  }
  return result;
}

//----- (00018044) --------------------------------------------------------
void __fastcall sub_18044(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268440603;
  JUMPOUT(0x1000141A);
}
// 1804A: control flows out of bounds to 1000141A

//----- (00018050) --------------------------------------------------------
void __fastcall sub_18050(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268453881;
  JUMPOUT(0x100047F8);
}
// 18056: control flows out of bounds to 100047F8

//----- (0001805C) --------------------------------------------------------
void __fastcall sub_1805C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268440501;
  JUMPOUT(0x100013B4);
}
// 18062: control flows out of bounds to 100013B4

//----- (00018068) --------------------------------------------------------
void __fastcall sub_18068(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268440957;
  JUMPOUT(0x1000157C);
}
// 1806E: control flows out of bounds to 1000157C

//----- (00018074) --------------------------------------------------------
void __fastcall sub_18074(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268456265;
  JUMPOUT(0x10005148);
}
// 1807A: control flows out of bounds to 10005148

//----- (00018080) --------------------------------------------------------
void __fastcall sub_18080(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268457825;
  JUMPOUT(0x10005760);
}
// 18086: control flows out of bounds to 10005760

//----- (0001808C) --------------------------------------------------------
void __fastcall sub_1808C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268502649;
  JUMPOUT(0x10010678);
}
// 18092: control flows out of bounds to 10010678

//----- (00018098) --------------------------------------------------------
void __fastcall sub_18098(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268500857;
  JUMPOUT(0x1000FF78);
}
// 1809E: control flows out of bounds to 1000FF78

//----- (000180A4) --------------------------------------------------------
void __fastcall sub_180A4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268481697;
  JUMPOUT(0x1000B4A0);
}
// 180AA: control flows out of bounds to 1000B4A0

//----- (000180B0) --------------------------------------------------------
void __fastcall sub_180B0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268465597;
  JUMPOUT(0x100075BC);
}
// 180B6: control flows out of bounds to 100075BC

//----- (000180BC) --------------------------------------------------------
void __fastcall sub_180BC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268453853;
  JUMPOUT(0x100047DC);
}
// 180C2: control flows out of bounds to 100047DC

//----- (000180C8) --------------------------------------------------------
void __fastcall sub_180C8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268453841;
  JUMPOUT(0x100047D0);
}
// 180CE: control flows out of bounds to 100047D0

//----- (000180D4) --------------------------------------------------------
void __fastcall sub_180D4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268441003;
  JUMPOUT(0x100015AA);
}
// 180DA: control flows out of bounds to 100015AA

//----- (000180E0) --------------------------------------------------------
void __fastcall sub_180E0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268456921;
  JUMPOUT(0x100053D8);
}
// 180E6: control flows out of bounds to 100053D8

//----- (000180EC) --------------------------------------------------------
void __fastcall sub_180EC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268506549;
  JUMPOUT(0x100115B4);
}
// 180F2: control flows out of bounds to 100115B4

//----- (000180F8) --------------------------------------------------------
void __fastcall sub_180F8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268508345;
  JUMPOUT(0x10011CB8);
}
// 180FE: control flows out of bounds to 10011CB8

//----- (00018104) --------------------------------------------------------
void __fastcall sub_18104(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268468949;
  JUMPOUT(0x100082D4);
}
// 1810A: control flows out of bounds to 100082D4

//----- (00018110) --------------------------------------------------------
void __fastcall sub_18110(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268480673;
  JUMPOUT(0x1000B0A0);
}
// 18116: control flows out of bounds to 1000B0A0

//----- (0001811C) --------------------------------------------------------
void __fastcall sub_1811C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268510693;
  JUMPOUT(0x100125E4);
}
// 18122: control flows out of bounds to 100125E4

//----- (00018128) --------------------------------------------------------
void __fastcall sub_18128(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268469077;
  JUMPOUT(0x10008354);
}
// 1812E: control flows out of bounds to 10008354

//----- (00018134) --------------------------------------------------------
void __fastcall sub_18134(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268481101;
  JUMPOUT(0x1000B24C);
}
// 1813A: control flows out of bounds to 1000B24C

//----- (00018140) --------------------------------------------------------
void __fastcall sub_18140(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268465825;
  JUMPOUT(0x100076A0);
}
// 18146: control flows out of bounds to 100076A0

//----- (0001814C) --------------------------------------------------------
void __fastcall sub_1814C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268504669;
  JUMPOUT(0x10010E5C);
}
// 18152: control flows out of bounds to 10010E5C

//----- (00018158) --------------------------------------------------------
void __fastcall sub_18158(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268505217;
  JUMPOUT(0x10011080);
}
// 1815E: control flows out of bounds to 10011080

//----- (00018164) --------------------------------------------------------
void __fastcall sub_18164(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268465557;
  JUMPOUT(0x10007594);
}
// 1816A: control flows out of bounds to 10007594

//----- (00018170) --------------------------------------------------------
void __fastcall sub_18170(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268517285;
  JUMPOUT(0x10013FA4);
}
// 18176: control flows out of bounds to 10013FA4

//----- (0001817C) --------------------------------------------------------
void __fastcall sub_1817C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268469293;
  JUMPOUT(0x1000842C);
}
// 18182: control flows out of bounds to 1000842C

//----- (00018188) --------------------------------------------------------
void __fastcall sub_18188(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268483885;
  JUMPOUT(0x1000BD2C);
}
// 1818E: control flows out of bounds to 1000BD2C

//----- (00018194) --------------------------------------------------------
void __fastcall sub_18194(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268479901;
  JUMPOUT(0x1000AD9C);
}
// 1819A: control flows out of bounds to 1000AD9C

//----- (000181A0) --------------------------------------------------------
void __fastcall sub_181A0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268479969;
  JUMPOUT(0x1000ADE0);
}
// 181A6: control flows out of bounds to 1000ADE0

//----- (000181AC) --------------------------------------------------------
void __fastcall sub_181AC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268479945;
  JUMPOUT(0x1000ADC8);
}
// 181B2: control flows out of bounds to 1000ADC8

//----- (000181B8) --------------------------------------------------------
void __fastcall sub_181B8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268468493;
  JUMPOUT(0x1000810C);
}
// 181BE: control flows out of bounds to 1000810C

//----- (000181C4) --------------------------------------------------------
void __fastcall sub_181C4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268506653;
  JUMPOUT(0x1001161C);
}
// 181CA: control flows out of bounds to 1001161C

//----- (000181D0) --------------------------------------------------------
void __fastcall sub_181D0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268467317;
  JUMPOUT(0x10007C74);
}
// 181D6: control flows out of bounds to 10007C74

//----- (000181DC) --------------------------------------------------------
void __fastcall sub_181DC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268506561;
  JUMPOUT(0x100115C0);
}
// 181E2: control flows out of bounds to 100115C0

//----- (000181E8) --------------------------------------------------------
void __fastcall sub_181E8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268466149;
  JUMPOUT(0x100077E4);
}
// 181EE: control flows out of bounds to 100077E4

//----- (000181F4) --------------------------------------------------------
void __fastcall sub_181F4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268480961;
  JUMPOUT(0x1000B1C0);
}
// 181FA: control flows out of bounds to 1000B1C0

//----- (00018200) --------------------------------------------------------
void __fastcall sub_18200(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268506573;
  JUMPOUT(0x100115CC);
}
// 18206: control flows out of bounds to 100115CC

//----- (0001820C) --------------------------------------------------------
void __fastcall sub_1820C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268497701;
  JUMPOUT(0x1000F324);
}
// 18212: control flows out of bounds to 1000F324

//----- (00018218) --------------------------------------------------------
void __fastcall sub_18218(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268492957;
  JUMPOUT(0x1000E09C);
}
// 1821E: control flows out of bounds to 1000E09C

//----- (00018224) --------------------------------------------------------
void __fastcall sub_18224(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268469025;
  JUMPOUT(0x10008320);
}
// 1822A: control flows out of bounds to 10008320

//----- (00018230) --------------------------------------------------------
void __fastcall sub_18230(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268503781;
  JUMPOUT(0x10010AE4);
}
// 18236: control flows out of bounds to 10010AE4

//----- (0001823C) --------------------------------------------------------
void __fastcall sub_1823C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268505061;
  JUMPOUT(0x10010FE4);
}
// 18242: control flows out of bounds to 10010FE4

//----- (00018248) --------------------------------------------------------
void __fastcall sub_18248(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268475025;
  JUMPOUT(0x10009A90);
}
// 1824E: control flows out of bounds to 10009A90

//----- (00018254) --------------------------------------------------------
void __fastcall sub_18254(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268505789;
  JUMPOUT(0x100112BC);
}
// 1825A: control flows out of bounds to 100112BC

//----- (00018260) --------------------------------------------------------
void __fastcall sub_18260(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268466013;
  JUMPOUT(0x1000775C);
}
// 18266: control flows out of bounds to 1000775C

//----- (0001826C) --------------------------------------------------------
void __fastcall sub_1826C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268502707;
  JUMPOUT(0x100106B2);
}
// 18272: control flows out of bounds to 100106B2

//----- (00018278) --------------------------------------------------------
void __fastcall sub_18278(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268502717;
  JUMPOUT(0x100106BC);
}
// 1827E: control flows out of bounds to 100106BC

//----- (00018284) --------------------------------------------------------
void __fastcall sub_18284(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268443603;
  JUMPOUT(0x10001FD2);
}
// 1828A: control flows out of bounds to 10001FD2

//----- (00018290) --------------------------------------------------------
void __fastcall sub_18290(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268443609;
  JUMPOUT(0x10001FD8);
}
// 18296: control flows out of bounds to 10001FD8

//----- (0001829C) --------------------------------------------------------
void __fastcall sub_1829C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268442353;
  JUMPOUT(0x10001AF0);
}
// 182A2: control flows out of bounds to 10001AF0

//----- (000182A8) --------------------------------------------------------
void __fastcall sub_182A8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268443449;
  JUMPOUT(0x10001F38);
}
// 182AE: control flows out of bounds to 10001F38

//----- (000182B4) --------------------------------------------------------
void __fastcall sub_182B4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268479269;
  JUMPOUT(0x1000AB24);
}
// 182BA: control flows out of bounds to 1000AB24

//----- (000182C0) --------------------------------------------------------
void __fastcall sub_182C0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268478237;
  JUMPOUT(0x1000A71C);
}
// 182C6: control flows out of bounds to 1000A71C

//----- (000182CC) --------------------------------------------------------
void __fastcall sub_182CC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268466065;
  JUMPOUT(0x10007790);
}
// 182D2: control flows out of bounds to 10007790

//----- (000182D8) --------------------------------------------------------
void __fastcall sub_182D8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268476141;
  JUMPOUT(0x10009EEC);
}
// 182DE: control flows out of bounds to 10009EEC

//----- (000182E4) --------------------------------------------------------
void __fastcall sub_182E4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268476861;
  JUMPOUT(0x1000A1BC);
}
// 182EA: control flows out of bounds to 1000A1BC

//----- (000182F0) --------------------------------------------------------
void __fastcall sub_182F0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268484265;
  JUMPOUT(0x1000BEA8);
}
// 182F6: control flows out of bounds to 1000BEA8

//----- (000182FC) --------------------------------------------------------
void __fastcall sub_182FC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268485253;
  JUMPOUT(0x1000C284);
}
// 18302: control flows out of bounds to 1000C284

//----- (00018308) --------------------------------------------------------
void __fastcall sub_18308(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499077;
  JUMPOUT(0x1000F884);
}
// 1830E: control flows out of bounds to 1000F884

//----- (00018314) --------------------------------------------------------
void __fastcall sub_18314(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268440883;
  JUMPOUT(0x10001532);
}
// 1831A: control flows out of bounds to 10001532

//----- (00018320) --------------------------------------------------------
void __fastcall sub_18320(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268498833;
  JUMPOUT(0x1000F790);
}
// 18326: control flows out of bounds to 1000F790

//----- (0001832C) --------------------------------------------------------
void __fastcall sub_1832C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268480613;
  JUMPOUT(0x1000B064);
}
// 18332: control flows out of bounds to 1000B064

//----- (00018338) --------------------------------------------------------
void __fastcall sub_18338(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499407;
  JUMPOUT(0x1000F9CE);
}
// 1833E: control flows out of bounds to 1000F9CE

//----- (00018344) --------------------------------------------------------
void __fastcall sub_18344(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268498565;
  JUMPOUT(0x1000F684);
}
// 1834A: control flows out of bounds to 1000F684

//----- (00018350) --------------------------------------------------------
void __fastcall sub_18350(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268478217;
  JUMPOUT(0x1000A708);
}
// 18356: control flows out of bounds to 1000A708

//----- (0001835C) --------------------------------------------------------
void __fastcall sub_1835C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268478201;
  JUMPOUT(0x1000A6F8);
}
// 18362: control flows out of bounds to 1000A6F8

//----- (00018368) --------------------------------------------------------
void __fastcall sub_18368(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268456617;
  JUMPOUT(0x100052A8);
}
// 1836E: control flows out of bounds to 100052A8

//----- (00018374) --------------------------------------------------------
void __fastcall sub_18374(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268477053;
  JUMPOUT(0x1000A27C);
}
// 1837A: control flows out of bounds to 1000A27C

//----- (00018380) --------------------------------------------------------
void __fastcall sub_18380(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268487921;
  JUMPOUT(0x1000CCF0);
}
// 18386: control flows out of bounds to 1000CCF0

//----- (0001838C) --------------------------------------------------------
void __fastcall sub_1838C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268480949;
  JUMPOUT(0x1000B1B4);
}
// 18392: control flows out of bounds to 1000B1B4

//----- (00018398) --------------------------------------------------------
void __fastcall sub_18398(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268476737;
  JUMPOUT(0x1000A140);
}
// 1839E: control flows out of bounds to 1000A140

//----- (000183A4) --------------------------------------------------------
void __fastcall sub_183A4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268470005;
  JUMPOUT(0x100086F4);
}
// 183AA: control flows out of bounds to 100086F4

//----- (000183B0) --------------------------------------------------------
void __fastcall sub_183B0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268490249;
  JUMPOUT(0x1000D608);
}
// 183B6: control flows out of bounds to 1000D608

//----- (000183BC) --------------------------------------------------------
void __fastcall sub_183BC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268456757;
  JUMPOUT(0x10005334);
}
// 183C2: control flows out of bounds to 10005334

//----- (000183C8) --------------------------------------------------------
void __fastcall sub_183C8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268483861;
  JUMPOUT(0x1000BD14);
}
// 183CE: control flows out of bounds to 1000BD14

//----- (000183D4) --------------------------------------------------------
void __fastcall sub_183D4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268483873;
  JUMPOUT(0x1000BD20);
}
// 183DA: control flows out of bounds to 1000BD20

//----- (000183E0) --------------------------------------------------------
void __fastcall sub_183E0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268502949;
  JUMPOUT(0x100107A4);
}
// 183E6: control flows out of bounds to 100107A4

//----- (000183EC) --------------------------------------------------------
void __fastcall sub_183EC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268502957;
  JUMPOUT(0x100107AC);
}
// 183F2: control flows out of bounds to 100107AC

//----- (000183F8) --------------------------------------------------------
void __fastcall sub_183F8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268508281;
  JUMPOUT(0x10011C78);
}
// 183FE: control flows out of bounds to 10011C78

//----- (00018404) --------------------------------------------------------
void __fastcall sub_18404(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268483897;
  JUMPOUT(0x1000BD38);
}
// 1840A: control flows out of bounds to 1000BD38

//----- (00018410) --------------------------------------------------------
void __fastcall sub_18410(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268503031;
  JUMPOUT(0x100107F6);
}
// 18416: control flows out of bounds to 100107F6

//----- (0001841C) --------------------------------------------------------
void __fastcall sub_1841C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268488565;
  JUMPOUT(0x1000CF74);
}
// 18422: control flows out of bounds to 1000CF74

//----- (00018428) --------------------------------------------------------
void __fastcall sub_18428(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268488281;
  JUMPOUT(0x1000CE58);
}
// 1842E: control flows out of bounds to 1000CE58

//----- (00018434) --------------------------------------------------------
void __fastcall sub_18434(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268487793;
  JUMPOUT(0x1000CC70);
}
// 1843A: control flows out of bounds to 1000CC70

//----- (00018440) --------------------------------------------------------
void __fastcall sub_18440(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268487649;
  JUMPOUT(0x1000CBE0);
}
// 18446: control flows out of bounds to 1000CBE0

//----- (0001844C) --------------------------------------------------------
void __fastcall sub_1844C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268488405;
  JUMPOUT(0x1000CED4);
}
// 18452: control flows out of bounds to 1000CED4

//----- (00018458) --------------------------------------------------------
void __fastcall sub_18458(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268488857;
  JUMPOUT(0x1000D098);
}
// 1845E: control flows out of bounds to 1000D098

//----- (00018464) --------------------------------------------------------
void __fastcall sub_18464(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268498817;
  JUMPOUT(0x1000F780);
}
// 1846A: control flows out of bounds to 1000F780

//----- (00018470) --------------------------------------------------------
void __fastcall sub_18470(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268497897;
  JUMPOUT(0x1000F3E8);
}
// 18476: control flows out of bounds to 1000F3E8

//----- (0001847C) --------------------------------------------------------
void __fastcall sub_1847C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268456973;
  JUMPOUT(0x1000540C);
}
// 18482: control flows out of bounds to 1000540C

//----- (00018488) --------------------------------------------------------
void __fastcall sub_18488(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268497953;
  JUMPOUT(0x1000F420);
}
// 1848E: control flows out of bounds to 1000F420

//----- (000184A0) --------------------------------------------------------
void __fastcall sub_184A0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268477041;
  JUMPOUT(0x1000A270);
}
// 184A6: control flows out of bounds to 1000A270

//----- (000184E8) --------------------------------------------------------
void __fastcall sub_184E8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268505649;
  JUMPOUT(0x10011230);
}
// 184EE: control flows out of bounds to 10011230

//----- (0001859C) --------------------------------------------------------
void __fastcall sub_1859C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268490069;
  JUMPOUT(0x1000D554);
}
// 185A2: control flows out of bounds to 1000D554

//----- (000185A8) --------------------------------------------------------
void __fastcall sub_185A8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268482789;
  JUMPOUT(0x1000B8E4);
}
// 185AE: control flows out of bounds to 1000B8E4

//----- (000185B4) --------------------------------------------------------
void __fastcall sub_185B4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268469993;
  JUMPOUT(0x100086E8);
}
// 185BA: control flows out of bounds to 100086E8

//----- (000185C0) --------------------------------------------------------
void __fastcall sub_185C0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268487369;
  JUMPOUT(0x1000CAC8);
}
// 185C6: control flows out of bounds to 1000CAC8

//----- (000185CC) --------------------------------------------------------
void __fastcall sub_185CC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268490145;
  JUMPOUT(0x1000D5A0);
}
// 185D2: control flows out of bounds to 1000D5A0

//----- (000185D8) --------------------------------------------------------
void __fastcall sub_185D8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268488697;
  JUMPOUT(0x1000CFF8);
}
// 185DE: control flows out of bounds to 1000CFF8

//----- (000185E4) --------------------------------------------------------
void __fastcall sub_185E4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268504401;
  JUMPOUT(0x10010D50);
}
// 185EA: control flows out of bounds to 10010D50

//----- (000185F0) --------------------------------------------------------
void __fastcall sub_185F0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268466633;
  JUMPOUT(0x100079C8);
}
// 185F6: control flows out of bounds to 100079C8

//----- (000185FC) --------------------------------------------------------
void __fastcall sub_185FC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268465305;
  JUMPOUT(0x10007498);
}
// 18602: control flows out of bounds to 10007498

//----- (00018608) --------------------------------------------------------
void __fastcall sub_18608(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268462347;
  JUMPOUT(0x1000690A);
}
// 1860E: control flows out of bounds to 1000690A

//----- (00018614) --------------------------------------------------------
void __fastcall sub_18614(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268504901;
  JUMPOUT(0x10010F44);
}
// 1861A: control flows out of bounds to 10010F44

//----- (00018620) --------------------------------------------------------
void __fastcall sub_18620(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268480981;
  JUMPOUT(0x1000B1D4);
}
// 18626: control flows out of bounds to 1000B1D4

//----- (0001862C) --------------------------------------------------------
void __fastcall sub_1862C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499061;
  JUMPOUT(0x1000F874);
}
// 18632: control flows out of bounds to 1000F874

//----- (00018638) --------------------------------------------------------
void __fastcall sub_18638(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268498881;
  JUMPOUT(0x1000F7C0);
}
// 1863E: control flows out of bounds to 1000F7C0

//----- (00018644) --------------------------------------------------------
void __fastcall sub_18644(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268502637;
  JUMPOUT(0x1001066C);
}
// 1864A: control flows out of bounds to 1001066C

//----- (00018650) --------------------------------------------------------
void __fastcall sub_18650(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268498849;
  JUMPOUT(0x1000F7A0);
}
// 18656: control flows out of bounds to 1000F7A0

//----- (0001865C) --------------------------------------------------------
void __fastcall sub_1865C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268501549;
  JUMPOUT(0x1001022C);
}
// 18662: control flows out of bounds to 1001022C

//----- (00018668) --------------------------------------------------------
void __fastcall sub_18668(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268480645;
  JUMPOUT(0x1000B084);
}
// 1866E: control flows out of bounds to 1000B084

//----- (00018674) --------------------------------------------------------
void __fastcall sub_18674(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268500865;
  JUMPOUT(0x1000FF80);
}
// 1867A: control flows out of bounds to 1000FF80

//----- (00018680) --------------------------------------------------------
void __fastcall sub_18680(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268469277;
  JUMPOUT(0x1000841C);
}
// 18686: control flows out of bounds to 1000841C

//----- (0001868C) --------------------------------------------------------
void __fastcall sub_1868C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268513161;
  JUMPOUT(0x10012F88);
}
// 18692: control flows out of bounds to 10012F88

//----- (00018698) --------------------------------------------------------
void __fastcall sub_18698(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268505589;
  JUMPOUT(0x100111F4);
}
// 1869E: control flows out of bounds to 100111F4

//----- (000186A4) --------------------------------------------------------
void __fastcall sub_186A4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268477301;
  JUMPOUT(0x1000A374);
}
// 186AA: control flows out of bounds to 1000A374

//----- (000186B0) --------------------------------------------------------
void __fastcall sub_186B0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268500797;
  JUMPOUT(0x1000FF3C);
}
// 186B6: control flows out of bounds to 1000FF3C

//----- (000186BC) --------------------------------------------------------
void __fastcall sub_186BC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268508329;
  JUMPOUT(0x10011CA8);
}
// 186C2: control flows out of bounds to 10011CA8

//----- (000186C8) --------------------------------------------------------
void __fastcall sub_186C8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268504661;
  JUMPOUT(0x10010E54);
}
// 186CE: control flows out of bounds to 10010E54

//----- (000186D4) --------------------------------------------------------
void __fastcall sub_186D4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268505097;
  JUMPOUT(0x10011008);
}
// 186DA: control flows out of bounds to 10011008

//----- (000186E0) --------------------------------------------------------
void __fastcall sub_186E0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268488721;
  JUMPOUT(0x1000D010);
}
// 186E6: control flows out of bounds to 1000D010

//----- (000186EC) --------------------------------------------------------
void __fastcall sub_186EC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268517589;
  JUMPOUT(0x100140D4);
}
// 186F2: control flows out of bounds to 100140D4

//----- (000186F8) --------------------------------------------------------
void __fastcall sub_186F8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268503245;
  JUMPOUT(0x100108CC);
}
// 186FE: control flows out of bounds to 100108CC

//----- (00018704) --------------------------------------------------------
void __fastcall sub_18704(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268500713;
  JUMPOUT(0x1000FEE8);
}
// 1870A: control flows out of bounds to 1000FEE8

//----- (00018710) --------------------------------------------------------
void __fastcall sub_18710(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268517361;
  JUMPOUT(0x10013FF0);
}
// 18716: control flows out of bounds to 10013FF0

//----- (0001871C) --------------------------------------------------------
void __fastcall sub_1871C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268488669;
  JUMPOUT(0x1000CFDC);
}
// 18722: control flows out of bounds to 1000CFDC

//----- (00018728) --------------------------------------------------------
void __fastcall sub_18728(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268477401;
  JUMPOUT(0x1000A3D8);
}
// 1872E: control flows out of bounds to 1000A3D8

//----- (00018734) --------------------------------------------------------
void __fastcall sub_18734(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268488793;
  JUMPOUT(0x1000D058);
}
// 1873A: control flows out of bounds to 1000D058

//----- (00018740) --------------------------------------------------------
void __fastcall sub_18740(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268489109;
  JUMPOUT(0x1000D194);
}
// 18746: control flows out of bounds to 1000D194

//----- (0001874C) --------------------------------------------------------
void __fastcall sub_1874C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268489121;
  JUMPOUT(0x1000D1A0);
}
// 18752: control flows out of bounds to 1000D1A0

//----- (00018758) --------------------------------------------------------
void __fastcall sub_18758(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268505141;
  JUMPOUT(0x10011034);
}
// 1875E: control flows out of bounds to 10011034

//----- (00018764) --------------------------------------------------------
void __fastcall sub_18764(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268504693;
  JUMPOUT(0x10010E74);
}
// 1876A: control flows out of bounds to 10010E74

//----- (00018770) --------------------------------------------------------
void __fastcall sub_18770(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268453865;
  JUMPOUT(0x100047E8);
}
// 18776: control flows out of bounds to 100047E8

//----- (0001877C) --------------------------------------------------------
void __fastcall sub_1877C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268508653;
  JUMPOUT(0x10011DEC);
}
// 18782: control flows out of bounds to 10011DEC

//----- (00018788) --------------------------------------------------------
void __fastcall sub_18788(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268498809;
  JUMPOUT(0x1000F778);
}
// 1878E: control flows out of bounds to 1000F778

//----- (00018794) --------------------------------------------------------
void __fastcall sub_18794(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499495;
  JUMPOUT(0x1000FA26);
}
// 1879A: control flows out of bounds to 1000FA26

//----- (000187A0) --------------------------------------------------------
void __fastcall sub_187A0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499477;
  JUMPOUT(0x1000FA14);
}
// 187A6: control flows out of bounds to 1000FA14

//----- (000187AC) --------------------------------------------------------
void __fastcall sub_187AC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499503;
  JUMPOUT(0x1000FA2E);
}
// 187B2: control flows out of bounds to 1000FA2E

//----- (000187B8) --------------------------------------------------------
void __fastcall sub_187B8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499313;
  JUMPOUT(0x1000F970);
}
// 187BE: control flows out of bounds to 1000F970

//----- (000187C4) --------------------------------------------------------
void __fastcall sub_187C4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268440803;
  JUMPOUT(0x100014E2);
}
// 187CA: control flows out of bounds to 100014E2

//----- (000187D0) --------------------------------------------------------
void __fastcall sub_187D0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499519;
  JUMPOUT(0x1000FA3E);
}
// 187D6: control flows out of bounds to 1000FA3E

//----- (000187DC) --------------------------------------------------------
void __fastcall sub_187DC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268498873;
  JUMPOUT(0x1000F7B8);
}
// 187E2: control flows out of bounds to 1000F7B8

//----- (000187E8) --------------------------------------------------------
void __fastcall sub_187E8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268499085;
  JUMPOUT(0x1000F88C);
}
// 187EE: control flows out of bounds to 1000F88C

//----- (000187F4) --------------------------------------------------------
void __fastcall sub_187F4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268483921;
  JUMPOUT(0x1000BD50);
}
// 187FA: control flows out of bounds to 1000BD50

//----- (00018800) --------------------------------------------------------
void __fastcall sub_18800(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268483437;
  JUMPOUT(0x1000BB6C);
}
// 18806: control flows out of bounds to 1000BB6C

//----- (0001880C) --------------------------------------------------------
void __fastcall sub_1880C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268483285;
  JUMPOUT(0x1000BAD4);
}
// 18812: control flows out of bounds to 1000BAD4

//----- (00018818) --------------------------------------------------------
void __fastcall sub_18818(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268484125;
  JUMPOUT(0x1000BE1C);
}
// 1881E: control flows out of bounds to 1000BE1C

//----- (00018824) --------------------------------------------------------
void __fastcall sub_18824(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268486301;
  JUMPOUT(0x1000C69C);
}
// 1882A: control flows out of bounds to 1000C69C

//----- (00018830) --------------------------------------------------------
void __fastcall sub_18830(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268483385;
  JUMPOUT(0x1000BB38);
}
// 18836: control flows out of bounds to 1000BB38

//----- (0001883C) --------------------------------------------------------
void __fastcall sub_1883C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268487453;
  JUMPOUT(0x1000CB1C);
}
// 18842: control flows out of bounds to 1000CB1C

//----- (00018848) --------------------------------------------------------
void __fastcall sub_18848(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268493821;
  JUMPOUT(0x1000E3FC);
}
// 1884E: control flows out of bounds to 1000E3FC

//----- (00018854) --------------------------------------------------------
void __fastcall sub_18854(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268479721;
  JUMPOUT(0x1000ACE8);
}
// 1885A: control flows out of bounds to 1000ACE8

//----- (00018860) --------------------------------------------------------
void __fastcall sub_18860(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268500833;
  JUMPOUT(0x1000FF60);
}
// 18866: control flows out of bounds to 1000FF60

//----- (0001886C) --------------------------------------------------------
void __fastcall sub_1886C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268476825;
  JUMPOUT(0x1000A198);
}
// 18872: control flows out of bounds to 1000A198

//----- (00018878) --------------------------------------------------------
void __fastcall sub_18878(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268476449;
  JUMPOUT(0x1000A020);
}
// 1887E: control flows out of bounds to 1000A020

//----- (00018884) --------------------------------------------------------
void __fastcall sub_18884(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268480693;
  JUMPOUT(0x1000B0B4);
}
// 1888A: control flows out of bounds to 1000B0B4

//----- (00018890) --------------------------------------------------------
void __fastcall sub_18890(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268507333;
  JUMPOUT(0x100118C4);
}
// 18896: control flows out of bounds to 100118C4

//----- (0001889C) --------------------------------------------------------
void __fastcall sub_1889C(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268507237;
  JUMPOUT(0x10011864);
}
// 188A2: control flows out of bounds to 10011864

//----- (000188A8) --------------------------------------------------------
void __fastcall sub_188A8(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268507285;
  JUMPOUT(0x10011894);
}
// 188AE: control flows out of bounds to 10011894

//----- (000188B4) --------------------------------------------------------
void __fastcall sub_188B4(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268466673;
  JUMPOUT(0x100079F0);
}
// 188BA: control flows out of bounds to 100079F0

//----- (000188C0) --------------------------------------------------------
void __fastcall sub_188C0(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268481765;
  JUMPOUT(0x1000B4E4);
}
// 188C6: control flows out of bounds to 1000B4E4

//----- (000188CC) --------------------------------------------------------
void __fastcall sub_188CC(int a1)
{
  int vars4; // [sp+4h] [bp+4h]

  vars4 = 268480585;
  JUMPOUT(0x1000B048);
}
// 188D2: control flows out of bounds to 1000B048

// nfuncs=1316 queued=1303 decompiled=1303 lumina nreq=0 worse=0 better=0
#error "There were 1 decompilation failure(s) on 1303 function(s)"
