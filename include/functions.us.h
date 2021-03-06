#ifndef FUNCTIONS_US_H
#define FUNCTIONS_US_H

#include "functions.h"


// main_1050.c
void func_80125950(s32 arg0);
void func_80125980(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5, s16 arg6, s32 arg7, s32 arg8, s32 arg9);
void func_8012635C(s32 arg0, s32 arg1, s32 arg2[]);
void func_80125FE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5, s32 arg6, s32 arg7, s32 arg8);

// core/controller.c
u32  func_80128200(void);
void func_8012822C(s32 time);
u16  func_8012826C(void);
void func_801282C4(void);
s16  func_8012835C(s16 idx);
s16  func_801283AC(s16 arg0);
s8   func_8012840C(u8 idx);
s8   func_80128424(u8 idx);
s16  func_8012844C(s16 arg0);
s16  func_801284B8(s16 arg0, s16 arg1);
f32  func_801286B8(f32 arg0, f32 arg1);
s16  func_80128C10(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

// core/string.c
u16  func_80128DD0(u8 *arg0);
void func_80128E18(u8 *dst, u8 *src);

// main_4790.c
u8  *strncpy(u8 *src, u8 *dst, u32 len);

// main_4910.c
void read_rom_header(void);
void set_region(void);
void dma_read(u32 devAddr, void *vAddr, s32 nbytes);
void func_80129300(Gfx **arg0, DisplayList *ddl);
void func_80129430(Gfx **arg0);
void func_80129594(Gfx **dl, DisplayList *ddl);
void func_80129784(Gfx **dl, DisplayList *ddl);
void func_8012991C(Gfx **dl, DisplayList *ddl);
void func_80129AD0(void);
void func_80129B10(s32);
void func_80129DC0(void);
void func_8012A260(void);
void func_8012A400(void);
void func_8012A490(void);
void func_8012A588(void);
void func_8012A750(void);
void func_8012A870(void);
void func_8012AB94(void);
void func_8012ABF0(void);
void func_8012AC40(void);
void func_8012AC8C(void);
void func_8012AD08(void);
void draw_rectangle(Gfx **arg0, s16 x0, s16 y0, s16 x1, s16 y1, u8 r, u8 g, u8 b, u8 a);

// core/rnc.c
u16  rnc_decompress(u8 *src, u8* dst);
u32  func_8012BB6C(u8 *arg0);
s32  func_8012C010(u32 arg0, u8 arg1);

// main_7770.c
void func_8012C070(u8);

// main_78F0
void func_8012C1F0(Gfx**);
void set_menu_text_color(u8 r, u8 g, u8 b, u8 a);
void select_font(u8, u8, u8, u8);
void select_comic_sans_font(void);
void select_lcd_font(void);
s16  func_8012C314(f32 arg0);
void func_8012DCA8(Gfx **arg0, s16 *arg1, u16 x, u16 y, f32 width, f32 height);
s32  func_8012E724(u16 *arg0, s32 arg1, s32 arg2);
s32  func_8012E78C(s32, f32, f32, s32);
void func_8012FA78(Gfx **arg0);
void func_8012FAD4(Gfx **dl, s32 arg1);
void func_8012FB4C(Gfx **arg0, s16 arg1);
void func_801304EC(Gfx **arg0, s32, u16, u16);
void func_801308B4(u8 *src, u16 *dst);
s16  func_801308E8(s16 arg0, s16 arg1, s32 *arg2, s32 *arg3);
s16* func_80130A90(s16 arg0);
s16  func_80130AC0(s16 *arg0);

void func_8012C214(s32, s32, s32, s32);
void func_8012C978(Gfx *, s32, u16, s32, f32, f32);
void func_8012DEF8(Gfx *, u16*, u16, s32, f32, f32);
void func_8012EB4C(Gfx *, s32, u16, u16, f32, f32, u8);
void func_80131070(void);
s32  func_80131BF0(s32);
void func_80130C04(void);


// core/fontinit.c
void font_init(void);

// core/eeprom.c
s16  func_80130C30(s16 arg0);
s16  func_80130CD4(s16 slot);
s32  func_80130E10(u8 *arg0);
void func_80130E44(void);

// core/audio.c
void func_80131290(ALSynConfig *c, s32 priority);
void *func_80131AA0(s32 *arg0);
void func_80132394(void);
struct017 *func_801323B8(s16 slot); // get_sound_by_slot
struct017 *func_80132414(u16 id);   // get_sound_by_id
struct017 *func_80132568(void);
void *func_80132580(s32 arg0, s16 id);
void func_801325E8(s32 arg0, s8 arg1);
s32  func_8013266C(s8 arg0); // get_seqp_state

// main_E3C0.c
void func_80132CC0(s32 arg0);
s16  func_80132D54(void);
s32  func_80132D84(ALSndPlayer *sndp);
void func_8013307C(s32, s32, s32, f32, s32);
s16  func_8013328C(s32 arg0, s16 arg1, s16 arg2, f32 arg3, s16 arg4, s16 arg5);
void func_80133528(u8 arg0, s16 vol);
void func_8013359C(u8 arg0);
void func_80133608(s16 arg0);
void func_8013364C(void);
void func_80133738(void);
void func_801337BC(s8 arg0, s32 arg1);
void func_801337DC(s16 arg0, f32 arg1, f32 arg2, f32 arg3);
void func_8013385C(f32 arg0, f32 arg1, f32 arg2);
void func_801338A8(s16 arg0);
void func_801339F8(void);
void func_80133B74(s16 arg0);
void func_80133BA0(s16 arg0);
void func_80133BE4(void);
void func_80133C50(void);
void func_80133E44(void);
void func_80133E84(void);

// main_10CB0.c
void func_801355B0(void);
void func_80135604(void);
void func_80136418(Gfx **dl, u8 color);
void func_801366BC(Gfx **dl, u8 r, u8 g, u8 b, u8 a);
void func_80136938(Gfx **dl, s32 arg1, u16 arg2, u16 arg3, u16 arg4, u16 arg5, u8 arg6, u8 arg7, u16 arg8, u16 arg9, u8 argA);

// main_123E0.c
s32  func_80136CE0(void); // initialise controllers?
void func_80136F64(void);
void func_801370A4(void);
void func_801370F4(void);
void func_8013713C(void);
void func_80137204(s16 arg0);
void func_8013724C(s16 arg0);
void func_80137840(void);



void func_80137294(void);
void func_801373CC(s32, s32, s32, s32, s32);
void func_80139200(f32);
void func_80139330(f32);

void func_80296544_6A7BF4(void);

void func_802B3FAC_6C565C(void);

// overlay1_6384F0.c
void func_80294E50_6384F0(void); // overlay1 entrypoint
void func_80294E70_638510(Gfx **dl, u8 alpha);
void func_80294EB8_638558(Gfx **dl);
void func_802950B8_638758(void);
void func_80295234_6388D4(void);
void func_8029548C_638B2C(void);
void func_80295494_638B34(Gfx **arg0, u16 arg1);
void func_802958B8_638F58(Gfx **dl);
void func_80298C70_63C310(u8 arg0);
void func_80295EB0_639550(s32 arg0);
void func_802988E8_63BF88(void);

void func_802C9340_6DA9F0(void);
void func_802C9834_6DAEE4(void);
void func_802CB360_6DCA10(void);

s32  func_802F8160_709810(s32, s32, s32, s32, s32, s32, s32, s32, f32);

// overlay2_6A6500.c
void func_80294E50_6A6500(void); // overlay2 entrypoint
void func_8029614C_6A77FC(void);
void func_8029619C_6A784C(void);
void func_802961D4_6A7884(void);
void func_80296310_6A79C0(void);
s32  func_80296320_6A79D0(void);

// overlay2_6AB090.c
void func_802999E0_6AB090(DisplayList *arg0);
void func_80299AA8_6AB158(DisplayList *arg0, Gfx **arg1);
void func_8029A32C_6AB9DC(s32 arg0);
void func_8029A3B0_6ABA60(s32, s32, s32);
u16  func_8029A52C_6ABBDC(u8 arg0);
u16  func_8029A568_6ABC18(s16 arg0);
void func_8029A5B4_6ABC64(Gfx **dl, u8 r, u8 g, u8 b);
void func_8029A624_6ABCD4(Gfx **dl);
void func_8029ABCC_6AC27C(void);

// overlay2_6B5380
void func_802A3E70_6B5520(Animal *arg0, u32 *arg1, u32 *arg2);

// overlay2_739290.c
void func_8032AA94_73C144(void);
struct025* func_803284C4_739B74(void);
void func_8032AAF0_73C1A0(s16 arg0);
void func_8032AE34_73C4E4(void);
void func_8032AC98_73C348(void);
void func_8032AEA0_73C550(void);
void func_8032B084_73C734(void);
void func_8032B1C8_73C878(void);
u8   func_8032BCF8_73D3A8(s32 arg0, s16 arg1);
s32  func_8032BD5C_73D40C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5);
void func_8032C0EC_73D79C(s32 arg0, s16 x, s16 y, s16 z, s16 r, s16 g, s16 b);
void func_8032C2D0_73D980(s16 arg0, s16 arg1, f32 arg2);
void func_8032C508_73DBB8(s16 arg0, s16 arg1, s16 arg2, f32 arg3);
void func_8032CD20_73E3D0(s32 arg0, s16 arg1, s16 arg2, s16 arg3, f32 arg4);

void func_80304170_715820(void);
void func_80304194_715844(void);

void func_8031B390_72CA40(s32);
void func_80322064_733714(s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8032C360_73DA10(u8, u16, s32, s16, s16, s16, f32); // tbd

void func_8034220C_7538BC(s32, s32, s32, s32);

// sssv/osd.c
void func_80348230_7598E0(s32 arg0);
void func_803491F0_75A8A0(void);
void func_80349278_75A928(void);
void func_80349280_75A930(Animal *arg0, s16 arg1);
void func_803493C8_75AA78(void);
void func_8034967C_75AD2C(void);
void func_80349720_75ADD0(void);
void func_80349748_75ADF8(void);
void func_80349778_75AE28(void);
void func_803497DC_75AE8C(void);
u8   func_80349874_75AF24(void);
void func_80349900_75AFB0(s32 arg0, u16 arg1);
u8   func_80349A14_75B0C4(void); // dupe of func_80349874_75AF24
void func_80349AA0_75B150(u16 arg0);
void func_80349B84_75B234(u16 arg0);
void func_80349CA4_75B354(u16 arg0);
void func_80349D34_75B3E4(void);

void func_80352280_763930(void); // load display list segment
void func_80352310_7639C0(void); // load water texture?
void func_80355EDC_76758C(void);
void func_80355EFC_7675AC(void);
void func_80355F64_767614(void);
void func_80355FFC_7676AC(void);
void func_80356064_767714(void);
void func_803560CC_76777C(void);
void func_80356134_7677E4(s32 arg0);
void func_803562C8_767978(s16 arg0);
void func_80356348_7679F8(s16 arg0);
void func_803563C8_767A78(s16 arg0);

// load 1 tile(?)
void func_80356410_767AC0(s32 arg0, s32 arg1);
void func_803565D4_767C84(s32 arg0, s32 arg1, s32 arg2);
void func_80356870_767F20(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80356BD8_768288(s32 arg0, s32 arg1, s16 arg2);
void func_80356D84_768434(s32 arg0, s32 arg1);
void func_80356F64_768614(s32 arg0, s32 arg1, s32 arg2);

// overlay2_78E970
void func_8037D2C0_78E970(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8037D2D4_78E984(s32 arg0, s32 arg1, s32 arg2);
void func_8037D2E4_78E994(s32 arg0);
void func_8037D310_78E9C0(s32 arg0, s32 arg1, s32 arg2);
void func_8037D320_78E9D0(s32 arg0, s32 arg1);
void func_8037D32C_78E9DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8037D994_78F044(s8 arg0);
void func_8037D9D4_78F084(void);
void func_8037FE24_7914D4(void) ;

// sssv/animinit.c
void func_80380620_791CD0(Animal *arg0, s16 arg1, s16 arg2, s16 arg3, u8 arg4);
void func_80380644_791CF4(Animal *arg0);
void func_8038064C_791CFC(void);

// sssv/cheats.c
void func_8038BA30_79D0E0(void);
void func_8038BAC0_79D170(u16 *buttonMaskPtr);
s32  func_8038C13C_79D7EC(u8 *buttonPresses, u8 *cheatCode);

// overlay2_79E640
void func_8038CF90_79E640(void);
void func_8038DA70_79F120(void);
void func_8038F694_7A0D44(void);


// overlay2_7A0DA0
void func_8038F6F0_7A0DA0(void);
void func_8038F708_7A0DB8(void);
void func_8038F794_7A0E44(void);
void func_8038F8C8_7A0F78(void);
void func_8038F968_7A1018(void);
void func_8038FA00_7A10B0(void);
void func_8038FAB4_7A1164(void);
void func_8038FB68_7A1218(void);
void func_8038FB94_7A1244(s16 arg0);
void func_8038FC04_7A12B4(void);
void func_8038FC58_7A1308(void);
void func_8038FCF8_7A13A8(void);
void func_8038FD74_7A1424(void);
void func_8038FF48_7A15F8(void);
void func_8039264C_7A3CFC(void);
void func_80395074_7A6724(s32 arg0);
void func_80395088_7A6738(Gfx **arg0, s16 ulx, s16 uly, s16 lrx, s16 lry, u8 color);
void func_803951BC_7A686C(Gfx **arg0, s16 arg1, s16 arg2, s16 arg3);
void func_80395314_7A69C4(Gfx **arg0, s16 arg1, s16 arg2, s16 arg3);
void func_8039546C_7A6B1C(Gfx **arg0, s16 arg1, s16 arg2, s16 arg3);
void func_80395480_7A6B30(void);
void func_80395854_7A6F04(void);
void func_80395B58_7A7208(void);
void func_80395E98_7A7548(Gfx **arg0);
void func_803960F4_7A77A4(Gfx **arg0);
void func_8039661C_7A7CCC(s16 arg0, s16 arg1, s16 arg2);
s32  func_80396714_7A7DC4(void);
s32  func_80396748_7A7DF8(void);

void func_8039C834_7ADEE4(s32, s32, s32, s32, f32, f32, s32, s32, s32, u16);

#endif
