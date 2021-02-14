#ifndef VARIABLES_US_H
#define VARIABLES_US_H

#include "PR/sched.h"

// Overlay 1
// instuctions 0x80294E50 to 0x803A04E0
// bss 0x803A04E0 to 0x803C0420
// Overlay 2
// instuctions 0x80294E50 to 0x80299730
// bss 0x80299730 to 0x80302E60

// 0x2CB38 in ROM maps to D_80151438

extern s32 *D_801DDD88; // base of animal pointers

extern s32 D_803F2C20; // struct?
/*
  00 // something with camera
  04
  08
  0C x or z position
  10 x or z position
  14 y position
*/

// more position vars
extern s32 D_803D5564;
extern s32 D_803D5568;
extern u8  D_803D5575; // controller maginitude?

extern s16  D_80000302;
extern s32  D_80000400;
extern s32  D_80025C00;

extern s32  D_80100000;

extern OSSched D_801603D0;
extern struct008 D_80162658[];

extern u16  D_801D9E38;
extern s16 *D_801D9E70;
extern s32  D_801D9E74;
extern s32  D_801D9E78;
extern Gfx *D_801D9E7C;
extern Gfx *D_801D9E88;
extern Gfx *D_801D9E8C;
extern Gfx *D_801D9E90;
extern Gfx *D_801D9E94;
extern struct014 *D_801D9E98[];
extern Gfx *D_801D9EB8;

extern s32  D_801542D0;

extern s32  D_80154628; // display list?
extern s32  D_80154680; // some kind of counter?
extern u8   D_801546BC;
extern f32  D_801546C0;
extern f32  D_801546C4;
extern f32  D_801546C8;
extern f32  D_801546CC;
extern f32  D_801546D0;
extern f32  D_801546D4;
extern s32  D_8015C750;
extern s32  D_8014E300;
extern s32  D_8014F1D0;
extern s16  D_80152040[];
extern s8   D_80152248[];
extern struct013  D_80152350[];
extern u32  D_80152E80;
extern s16  D_80152E9C;
extern s32  D_80152EA8;
extern u16  D_80152EB8;
extern u16  D_80152EBC;
extern s32  D_801582C0; // display list?
extern s32  D_80158368;
extern s32  D_801584A0;
extern s16  D_80158540;
extern s32  D_80158544;
// extern OSViMode D_80159980[];
extern f64  D_8015AC60;
extern f64  D_8015AC68;
extern f64  D_8015AC70;
extern f64  D_8015AC78;
extern f64  D_8015AC80;
extern f64  D_8015AC88;
extern f64  D_8015AC90;
extern u8   D_8015AD10[]; // "\nASSERT: len < (_fontbufferSegmentEnd - _fontbufferSegmentStart), %s, %u\n"
extern u8   D_8015AD5C[]; // "../src/fontinit.c"

extern struct009 D_8019A658[];

extern struct002 *D_80200000;
extern s16  D_80200008;
extern RomHeader D_80204240;
extern s16  D_80204260;
extern u16  D_80204270;
extern s32  D_802042B0;
extern struct008 *D_80204274;
extern DisplayList *D_80204278;
extern s32  D_802042A0;
extern s16 *D_802042F0;
extern s16 *D_80204368;
extern s16  gScreenWidth;
extern s16  gScreenHeight;

extern s32  D_8022E0D4;
extern s32  D_8022E0DC;
extern s32  D_8022E3E0;
extern u8   D_8022E3E4;
extern s16  D_8022E3F0[]; // maps to ROM 0x12A390

extern ALSndPlayer *D_80286310;

extern s32  D_80286328;
extern ALCSeq *D_802863CC;
extern u8   D_802863B0[];


extern OSThread D_802868D0; // thread ID 1
extern OSThread D_80286A80; // thread ID 9
extern s32  D_8028D230;

extern s16  D_8028654C;
extern OSThread D_80286570; // thread ID 6
extern OSThread D_80286720; // thread ID 7
extern s32  D_80288E30;
extern s32  D_8028B030;

extern OSMesgQueue D_80291060;
extern OSMesgQueue D_80291078;
extern OSMesgQueue D_8028D030;
extern OSMesgQueue D_8028D048;
extern OSMesgQueue D_8028D060;
extern OSMesgQueue D_8028D078;
extern OSMesgQueue D_8028D090;
extern OSMesgQueue D_8028D0A8;
extern OSIoMesg    D_8028D0C0;
extern s32  D_8028E230;
extern OSMesg      D_8028F640;

extern f32  D_80299DB8;
extern f32  D_80299DBC;
extern f32  D_80299DC0;
extern f32  D_80299DC4;
extern f32  D_80299DC8;
extern f32  D_80299DCC;
extern f32  D_80299DD0;
extern f32  D_80299DD4;
extern f32  D_80299DD8;
extern f32  D_80299DDC;
extern f32  D_80299DE0;
extern f32  D_80299DE4;
extern f32  D_80299DE8;
extern f32  D_80299DEC;
extern f32  D_80299DF0;

extern s32  D_802AFBD0;
extern s32  D_802B12D0;
extern s32  D_802B2930;
extern s32  D_802B3F90;
extern s32  D_802B64A0; // ROM 0x659b40
extern s32  D_802BC430;
extern s32  D_802C11C0;
extern s32  D_802EEB20;
extern s32  D_802F4CA0;
extern s32  D_80302E88;
extern s32  D_8032AE88;
extern s32  D_80338688;
extern s32  D_8033CE88;
extern s32  D_80364E88;
extern s32  D_80376ED8;
extern s32  D_8039E2E8;
extern s32  D_803A38D8;
extern s32  D_803A8EC8;

extern f32  D_80302D20; // 15000.0f
extern u16  D_80302E60;

extern u32  D_80151430;
extern u16  D_80151434;
extern u8   D_80151438[]; // maps to ROM 0x2CB38 ?
extern f32  D_80151C38[];

extern s32  D_80155154;
extern s8   D_80155164;
extern f32  D_8015517C;
extern s16  D_80155180;
extern s16  D_80155184;
extern u16  D_801552A8;
extern s32  D_8015D710;

extern u16  D_8020427C;
extern s16  D_80204280;
extern u16  D_80204282;
extern u16  D_80204284;
extern s8   D_80204288;
extern struct018 *D_8020428C;
extern s16  D_80204290;
extern u16  D_80204292;
extern s16  D_80204294;
extern struct006 D_80204298; // OSMesg

extern struct012 D_802053E0;
extern struct012 D_802053F0; // pointer?
extern struct012 D_80205400;
extern u16  D_8020540C;
extern u16  D_8028645A;
extern s16  D_8028645C;
extern ALCSeqMarker D_80286460;
extern OSMesg D_80290F40;
extern OSMesg D_802902C0;
extern OSMesg D_80290FC8;
extern struct006 *D_80291054;
extern OSMesg D_80291058;
extern OSMesg D_8029105C;
extern Controller D_80291090[];
extern OSMesg D_80291048;
extern OSMesg D_8029104C;
extern u16   *D_802910D0;
extern OSContStatus *D_802910D8[];
extern ControllerMesg D_80291100;
extern OSPfs        *D_80291110[]; // ?
extern OSMesgQueue D_802912B0;
extern OSMesg      D_802912C8;
extern OSMesg      D_802912CC;
extern s32  D_802912D0;
extern s32  D_802912D4;
extern s16  D_802912D8;
extern u16  D_802912DA;
extern u16  D_802912DC;
extern u8   D_802912DE;
extern u8   D_802912DF;
extern u8   D_802912E0;
extern u8   D_802912E1;
extern u8   D_802912E2;
extern u8   D_802912E3;
extern u8   D_802912E4;
extern u8   D_802912E5;

extern u16  D_803B62B0;
extern s16  D_803B62B4;
extern u16  D_803B62B8;
extern s16  D_803B62BC;
extern u16  D_803B62C0;
extern s32  D_803BFAA0;
extern s32  D_803BFAA4;
extern s32  D_803BFAB4;
extern u8   D_803BFAC0[]; // WIZDIZWE
extern u8   D_803BFACC[]; // UDIZDUZD
extern u8   D_803BFAD8[]; // UDZIDEZD
extern u8   D_803BFAE4[]; // UDIZDWZD
extern u8   D_803BFAF0[]; // UDIZDLZD
extern u8   D_803BFAFC[]; // UDIZDRZD
extern u8   D_803BFB08[]; // DUZIDLZD
extern u8   D_803BFB14[]; // UIZDLZDU
extern u8   D_803BFB20[]; // IDZIDUIL
extern u8   D_803BFB2C[]; // ZDUIRILR
extern u8   D_803BFB38[]; // LRZILZRL
extern u8   D_803BFB44[]; // DANISIL
extern u8   D_803F6410[20];
extern u16  D_803F6428[13];
extern s16  D_803F642E;
extern s16  D_803F6432;
extern s16  D_803F6434;
extern s16  D_803F6436;
extern s16  D_803F6438;
extern s16  D_803F643A;
extern s16  D_803F643C;

extern u16  D_803C0420;
extern u8   D_803C0422;
extern s32  D_803C0640;
extern u16  D_803F2CE8;
extern s16  D_803F6680;
extern u16  D_803F6684;
extern struct000 D_803F2D50;
extern s64  D_803C0644;
extern s64  D_803C064C;
extern s32  D_803C0654;
extern s16  D_803D5534; // current animal (id within level)
extern u8   D_803F2D39; // map index
extern struct001 D_803F2D30;
extern s32  D_803E4D2C;
extern u16  D_803E1BC4; // buttons pressed
extern struct015 D_801DDD8C[]; // animals struct array

extern s32  D_80231AA0;
extern s32  D_80231D5C;
extern s8   D_8023F1F0;
extern s8   D_8023F1F1;
extern s8   D_8023F1F2;
extern s8   D_8023F1F3;
extern s32  D_8023F260[]; // likely Eeprom too
extern Eeprom D_8023F2A0;
extern s8   D_8023F2AE;

// display
extern s16  D_8023F3E0;

// audio
extern struct007   *D_8023F410[3];
extern OSThread    D_8023F428; // audio thread
extern OSMesg      D_8023F5F0;
extern OSMesg      D_8023F688;
extern OSMesgQueue D_8023F670;
extern OSMesgQueue D_8023F5D8;
extern OSMesg      D_802423E8;
extern u8   D_80241758;
extern ALHeap D_80241768[];
extern ALHeap D_8024177C[];
extern s16  D_80241D08;
extern s16  D_80241D0A;
extern s16  D_80241D0C;
extern OSMesgQueue D_802423D0;
extern ALGlobals   D_8023F708;
extern struct003 D_803F2D10;

extern s32  D_800E1220; // _fontbufferSegmentStart
extern s32  D_800EF0D0; // _fontbufferSegmentEnd


#endif
