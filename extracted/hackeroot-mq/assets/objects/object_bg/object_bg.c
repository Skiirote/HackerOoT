#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_bg.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

s16 sChuGirlWakeUpAnimFrameData[] = {
    0x0004, 0x0C7F, 0x0000, 0xE8C7, 0x4000, 0x002B, 0xFFA3, 0xFAB1, 0x0128, 0xE3EE, 0xFF4F, 0xF615, 0x1E6C, 0xEC1D, 
    0xFD46, 0xDD6B, 0x9B4B, 0x9625, 0x060C, 0xFAC0, 0x1161, 0x2951, 0xF929, 0xF0E0, 0x6FF7, 0x7DC3, 0xCFCB, 0x76C4, 
    0xED42, 0x06E7, 
};

JointIndex sChuGirlWakeUpAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0002 },
    { 0x0002, 0x0003, 0x0004 },
    { 0x0005, 0x0006, 0x0007 },
    { 0x0008, 0x0009, 0x000A },
    { 0x000B, 0x000C, 0x000D },
    { 0x000E, 0x000F, 0x0010 },
    { 0x0002, 0x0011, 0x0012 },
    { 0x0013, 0x0014, 0x0015 },
    { 0x0016, 0x0017, 0x0018 },
    { 0x0019, 0x001A, 0x001B },
    { 0x001C, 0x0002, 0x001D },
};

AnimationHeader gChuGirlWakeUpAnim = { 
    { 71 }, sChuGirlWakeUpAnimFrameData,
    sChuGirlWakeUpAnimJointIndices, 30
};

s16 sChuGirlNoddingOffAnimFrameData[] = {
    0x0004, 0x0C7F, 0x0000, 0xE8C7, 0x4000, 0x01F9, 0xFED2, 0x9AF5, 0x060C, 0xF929, 0xF0E0, 0x6FF7, 0xED42, 0x06E7, 
    0x002B, 0x002B, 0x002B, 0x002A, 0x002A, 0x002A, 0x0029, 0x002A, 0x002A, 0x002B, 0x002D, 0x002F, 0x0031, 0x0033, 
    0x0035, 0x0037, 0x003A, 0x003C, 0x003E, 0x0041, 0x0044, 0x0046, 0x0049, 0x004B, 0x004E, 0x0051, 0x0053, 0x0056, 
    0x0058, 0x005A, 0x005D, 0x005F, 0x0061, 0x0063, 0x0064, 0x0066, 0x0067, 0x0069, 0x006A, 0x006B, 0x006B, 0x006C, 
    0x006C, 0x0063, 0x0059, 0x0050, 0x0047, 0x003E, 0x0035, 0xFFEC, 0xFFE3, 0xFFD4, 0xFFC0, 0xFFA8, 0xFF8E, 0xFF74, 
    0xFF5B, 0xFF45, 0xFF34, 0xFF25, 0xFF15, 0xFF04, 0xFEF3, 0xFEE1, 0xFECF, 0xFEBC, 0xFEAA, 0xFE96, 0xFE83, 0xFE70, 
    0xFE5D, 0xFE4A, 0xFE38, 0xFE26, 0xFE14, 0xFE03, 0xFDF2, 0xFDE2, 0xFDD3, 0xFDC5, 0xFDB8, 0xFDAC, 0xFDA1, 0xFD97, 
    0xFD8F, 0xFD88, 0xFD83, 0xFD7F, 0xFD7D, 0xFD7D, 0xFD7E, 0xFD82, 0xFDDA, 0xFE33, 0xFE8B, 0xFEE3, 0xFF3B, 0xFF93, 
    0xFAB4, 0xFAB3, 0xFAB4, 0xFAB5, 0xFAB6, 0xFAB7, 0xFAB7, 0xFAB7, 0xFAB6, 0xFAB4, 0xFAB0, 0xFAAC, 0xFAA8, 0xFAA3, 
    0xFA9F, 0xFA9A, 0xFA94, 0xFA8F, 0xFA8A, 0xFA84, 0xFA7E, 0xFA78, 0xFA73, 0xFA6D, 0xFA67, 0xFA61, 0xFA5C, 0xFA56, 
    0xFA51, 0xFA4C, 0xFA47, 0xFA42, 0xFA3E, 0xFA39, 0xFA36, 0xFA32, 0xFA2F, 0xFA2C, 0xFA2A, 0xFA28, 0xFA27, 0xFA26, 
    0xFA25, 0xFA3A, 0xFA4E, 0xFA62, 0xFA77, 0xFA8B, 0xFA9F, 0xE055, 0xE04B, 0xE045, 0xE044, 0xE045, 0xE048, 0xE04C, 
    0xE051, 0xE054, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 
    0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 
    0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 0xE055, 
    0xF689, 0xF65C, 0xF63E, 0xF62D, 0xF627, 0xF62C, 0xF639, 0xF64E, 0xF669, 0xF689, 0xF6AD, 0xF6D4, 0xF6FE, 0xF72B, 
    0xF75B, 0xF78D, 0xF7C1, 0xF7F7, 0xF82E, 0xF866, 0xF89F, 0xF8D9, 0xF913, 0xF94D, 0xF987, 0xF9C0, 0xF9F8, 0xFA2F, 
    0xFA65, 0xFA99, 0xFACA, 0xFAFA, 0xFB27, 0xFB51, 0xFB77, 0xFB9B, 0xFBBA, 0xFBD6, 0xFBED, 0xFBFF, 0xFC0D, 0xFC15, 
    0xFC18, 0xFBD1, 0xFB1A, 0xFA1A, 0xF8FB, 0xF7E8, 0xF70A, 0x1DD1, 0x1E11, 0x1E45, 0x1E6B, 0x1E81, 0x1E86, 0x1E78, 
    0x1E57, 0x1E1F, 0x1DD1, 0x1D71, 0x1D08, 0x1C97, 0x1C1E, 0x1B9F, 0x1B19, 0x1A8E, 0x19FE, 0x196A, 0x18D3, 0x183A, 
    0x17A0, 0x1705, 0x166A, 0x15CF, 0x1537, 0x14A0, 0x140D, 0x137E, 0x12F3, 0x126E, 0x11EF, 0x1177, 0x1107, 0x109F, 
    0x1040, 0x0FEC, 0x0FA3, 0x0F65, 0x0F33, 0x0F0F, 0x0EF9, 0x0EF1, 0x0FAE, 0x119A, 0x1447, 0x1745, 0x1A25, 0x1C79, 
    0xECA3, 0xEC72, 0xEC54, 0xEC46, 0xEC46, 0xEC50, 0xEC62, 0xEC78, 0xEC8E, 0xECA3, 0xECB7, 0xECCD, 0xECE4, 0xECFE, 
    0xED18, 0xED34, 0xED51, 0xED6F, 0xED8E, 0xEDAD, 0xEDCD, 0xEDED, 0xEE0D, 0xEE2D, 0xEE4E, 0xEE6D, 0xEE8D, 0xEEAB, 
    0xEEC9, 0xEEE6, 0xEF02, 0xEF1C, 0xEF35, 0xEF4C, 0xEF62, 0xEF76, 0xEF87, 0xEF96, 0xEFA3, 0xEFAE, 0xEFB5, 0xEFBA, 
    0xEFBB, 0xEF94, 0xEF2E, 0xEE9F, 0xEE00, 0xED67, 0xECEB, 0xFD46, 0xFD46, 0xFD46, 0xFD46, 0xFD46, 0xFD46, 0xFD46, 
    0xFD46, 0xFD46, 0xFD46, 0xFD36, 0xFD26, 0xFD16, 0xFD05, 0xFCF5, 0xFCE5, 0xFCD5, 0xFCC5, 0xFCB5, 0xFCA5, 0xFC94, 
    0xFC84, 0xFC74, 0xFC64, 0xFC54, 0xFC44, 0xFC34, 0xFC23, 0xFC13, 0xFC03, 0xFBF3, 0xFBE3, 0xFBD3, 0xFBC3, 0xFBB2, 
    0xFBA2, 0xFB92, 0xFB82, 0xFB72, 0xFB62, 0xFB52, 0xFB41, 0xFB31, 0xFB7D, 0xFBC9, 0xFC16, 0xFC62, 0xFCAE, 0xFCFA, 
    0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 
    0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 0xDD6B, 
    0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 
    0xDD6C, 0xDD6C, 0xDD6C, 0xDD6C, 0xDD6B, 0xDD6B, 0xDD6B, 0x9B4B, 0x9B4B, 0x9B4B, 0x9B4B, 0x9B4B, 0x9B4B, 0x9B4B, 
    0x9B4B, 0x9B4B, 0x9B4B, 0x9B5E, 0x9B70, 0x9B83, 0x9B95, 0x9BA8, 0x9BBA, 0x9BCD, 0x9BDF, 0x9BF2, 0x9C04, 0x9C17, 
    0x9C29, 0x9C3C, 0x9C4E, 0x9C61, 0x9C73, 0x9C86, 0x9C98, 0x9CAB, 0x9CBD, 0x9CD0, 0x9CE2, 0x9CF5, 0x9D07, 0x9D1A, 
    0x9D2C, 0x9D3F, 0x9D51, 0x9D64, 0x9D76, 0x9D89, 0x9D9B, 0x9DAE, 0x9D57, 0x9CFF, 0x9CA8, 0x9C51, 0x9BFA, 0x9BA2, 
    0xFAC0, 0xFAC0, 0xFAC0, 0xFAC0, 0xFAC0, 0xFAC0, 0xFAC0, 0xFAC0, 0xFAC0, 0xFAC0, 0xFAA8, 0xFA91, 0xFA79, 0xFA62, 
    0xFA4B, 0xFA33, 0xFA1C, 0xFA04, 0xF9ED, 0xF9D6, 0xF9BE, 0xF9D4, 0xF9EF, 0xFA0F, 0xFA34, 0xFA5D, 0xFA89, 0xFAB8, 
    0xFAE9, 0xFB1C, 0xFB4F, 0xFB83, 0xFBB6, 0xFBE8, 0xFC19, 0xFC47, 0xFC72, 0xFC9A, 0xFCBD, 0xFCDC, 0xFCF5, 0xFD09, 
    0xFD15, 0xFCFE, 0xFCB3, 0xFC47, 0xFBCD, 0xFB57, 0xFAF7, 0x1161, 0x1161, 0x1161, 0x1161, 0x1161, 0x1161, 0x1161, 
    0x1161, 0x1161, 0x1161, 0x1185, 0x11A9, 0x11CC, 0x11F0, 0x1214, 0x1238, 0x125C, 0x127F, 0x12A3, 0x12C7, 0x12EB, 
    0x12F9, 0x1307, 0x1315, 0x1322, 0x132E, 0x133A, 0x1344, 0x134E, 0x1357, 0x135E, 0x1365, 0x136A, 0x136E, 0x1370, 
    0x1371, 0x1370, 0x136E, 0x1369, 0x1363, 0x135B, 0x1350, 0x1344, 0x1322, 0x12E0, 0x128A, 0x122C, 0x11D3, 0x118B, 
    0x2951, 0x2951, 0x2951, 0x2951, 0x2951, 0x2951, 0x2951, 0x2951, 0x2951, 0x2951, 0x2A0F, 0x2ACC, 0x2B8A, 0x2C48, 
    0x2D05, 0x2DC3, 0x2E81, 0x2F3E, 0x2FFC, 0x30BA, 0x3177, 0x31BA, 0x31F8, 0x3233, 0x3269, 0x329A, 0x32C6, 0x32ED, 
    0x330F, 0x332B, 0x3341, 0x3351, 0x335B, 0x335E, 0x335A, 0x334F, 0x333D, 0x3323, 0x3301, 0x32D7, 0x32A5, 0x326A, 
    0x3227, 0x3182, 0x3049, 0x2EB5, 0x2D00, 0x2B62, 0x2A15, 0x7DC3, 0x7DC3, 0x7DC3, 0x7DC3, 0x7DC3, 0x7DC3, 0x7DC3, 
    0x7DC3, 0x7DC3, 0x7DC3, 0x7DC6, 0x7DC8, 0x7DCB, 0x7DCE, 0x7DD0, 0x7DD3, 0x7DD5, 0x7DD8, 0x7DDB, 0x7DDD, 0x7DE0, 
    0x7DE2, 0x7DE5, 0x7DE8, 0x7DEA, 0x7DED, 0x7DEF, 0x7DF2, 0x7DF5, 0x7DF7, 0x7DFA, 0x7DFC, 0x7DFF, 0x7E02, 0x7E04, 
    0x7E07, 0x7E09, 0x7E0C, 0x7E0F, 0x7E11, 0x7E14, 0x7E16, 0x7E17, 0x7E0B, 0x7DFF, 0x7DF3, 0x7DE7, 0x7DDB, 0x7DCF, 
    0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFD8, 0xCFE6, 0xCFF3, 0xD001, 
    0xD00E, 0xD01C, 0xD029, 0xD037, 0xD044, 0xD051, 0xD05F, 0xD06C, 0xD07A, 0xD087, 0xD095, 0xD0A2, 0xD0B0, 0xD0BD, 
    0xD0CB, 0xD0D8, 0xD0E6, 0xD0F3, 0xD100, 0xD10E, 0xD11B, 0xD129, 0xD136, 0xD144, 0xD151, 0xD15F, 0xD16C, 0xD17A, 
    0xD187, 0xD148, 0xD108, 0xD0C9, 0xD089, 0xD04A, 0xD00A, 0x76C4, 0x76C4, 0x76C4, 0x76C4, 0x76C4, 0x76C4, 0x76C4, 
    0x76C4, 0x76C4, 0x76C4, 0x76D9, 0x76EE, 0x7703, 0x7719, 0x772E, 0x7743, 0x7758, 0x776D, 0x7782, 0x7797, 0x77AC, 
    0x77C1, 0x77D6, 0x77EC, 0x7801, 0x7816, 0x782B, 0x7840, 0x7855, 0x786A, 0x787F, 0x7894, 0x78AA, 0x78BF, 0x78D4, 
    0x78E9, 0x78FE, 0x7913, 0x7928, 0x793D, 0x7952, 0x7967, 0x797D, 0x7919, 0x78B6, 0x7852, 0x77EF, 0x778B, 0x7728, 
    
};

JointIndex sChuGirlNoddingOffAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0002 },
    { 0x0002, 0x0003, 0x0004 },
    { 0x000E, 0x003F, 0x0070 },
    { 0x0005, 0x00A1, 0x0006 },
    { 0x00D2, 0x0103, 0x0134 },
    { 0x0165, 0x0196, 0x01C7 },
    { 0x0002, 0x0007, 0x0008 },
    { 0x01F8, 0x0229, 0x025A },
    { 0x0009, 0x000A, 0x000B },
    { 0x028B, 0x02BC, 0x02ED },
    { 0x000C, 0x0002, 0x000D },
};

AnimationHeader gChuGirlNoddingOffAnim = { 
    { 49 }, sChuGirlNoddingOffAnimFrameData,
    sChuGirlNoddingOffAnimJointIndices, 14
};

Vtx object_bgVtx_000720[] = {
#include "assets/objects/object_bg/object_bgVtx_000720.vtx.inc"
};

Gfx gChuGirlHeadDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_bgVtx_000720, 7, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[7], 21, 7),
    gsSP2Triangles(7, 8, 1, 0, 0, 9, 10, 0),
    gsSP2Triangles(11, 1, 0, 0, 2, 1, 12, 0),
    gsSP1Triangle(0, 4, 13, 0),
    gsSP2Triangles(14, 6, 15, 0, 16, 6, 17, 0),
    gsSP2Triangles(18, 19, 5, 0, 3, 20, 21, 0),
    gsSP2Triangles(22, 23, 6, 0, 5, 6, 24, 0),
    gsSP2Triangles(25, 6, 3, 0, 26, 6, 27, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_bgVtx_000720[28], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 0, 0, 6, 0, 8, 0),
    gsSP2Triangles(1, 0, 7, 0, 4, 9, 10, 0),
    gsSP2Triangles(5, 9, 4, 0, 5, 1, 7, 0),
    gsSP2Triangles(8, 0, 11, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 13, 12, 0, 14, 12, 8, 0),
    gsSP2Triangles(6, 15, 5, 0, 16, 1, 4, 0),
    gsSPVertex(&object_bgVtx_000720[45], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 3, 8, 0),
    gsSP2Triangles(4, 3, 7, 0, 6, 4, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 8, 9, 7, 0),
    gsSP2Triangles(4, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 8, 3, 0),
    gsSP2Triangles(14, 10, 12, 0, 2, 4, 16, 0),
    gsSP1Triangle(2, 1, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_bgVtx_000720[62], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(8, 9, 6, 0, 10, 5, 4, 0),
    gsSP2Triangles(6, 9, 3, 0, 7, 6, 11, 0),
    gsSP2Triangles(6, 3, 5, 0, 1, 12, 4, 0),
    gsSP2Triangles(11, 6, 5, 0, 13, 14, 4, 0),
    gsSP2Triangles(9, 2, 1, 0, 5, 15, 13, 0),
    gsSP2Triangles(1, 3, 9, 0, 0, 12, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 22, 19, 0, 19, 22, 23, 0),
    gsSP2Triangles(24, 25, 18, 0, 18, 25, 16, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlUmbEarLicusTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(26, 27, 28, 0, 27, 26, 29, 0),
    gsSP1Triangle(30, 29, 26, 0),
    gsSPVertex(&object_bgVtx_000720[93], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x063C, 0x017C),
    gsSPVertex(&object_bgVtx_000720[97], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 6, 5, 0),
    gsSP2Triangles(6, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(18, 17, 19, 0, 11, 20, 12, 0),
    gsSP2Triangles(8, 21, 22, 0, 4, 3, 23, 0),
    gsSP2Triangles(14, 24, 25, 0, 5, 4, 22, 0),
    gsSP2Triangles(10, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&object_bgVtx_000720[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 6, 0, 10, 11, 12, 0),
    gsSP2Triangles(5, 4, 13, 0, 13, 4, 7, 0),
    gsSP2Triangles(12, 11, 14, 0, 15, 14, 16, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 15, 0),
    gsSP2Triangles(17, 16, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 24, 0, 14, 15, 12, 0),
    gsSP2Triangles(25, 1, 21, 0, 22, 26, 27, 0),
    gsSP2Triangles(25, 21, 20, 0, 15, 18, 28, 0),
    gsSP2Triangles(29, 10, 30, 0, 26, 31, 27, 0),
    gsSP2Triangles(30, 10, 12, 0, 21, 1, 0, 0),
    gsSP1Triangle(15, 28, 12, 0),
    gsSPVertex(&object_bgVtx_000720[160], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(5, 4, 12, 0, 10, 9, 13, 0),
    gsSP2Triangles(5, 14, 3, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 10, 0, 13, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 9, 11, 0, 8, 7, 25, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 7, 0),
    gsSP2Triangles(28, 29, 1, 0, 30, 31, 22, 0),
    gsSPVertex(&object_bgVtx_000720[192], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 7, 6, 0),
    gsSP2Triangles(8, 12, 9, 0, 13, 12, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 10, 9, 16, 0),
    gsSP2Triangles(17, 18, 5, 0, 19, 9, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(26, 25, 23, 0, 7, 26, 27, 0),
    gsSP1Triangle(28, 26, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlNeckDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[221], 6, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSweaterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[227], 25, 6),
    gsSP2Triangles(6, 4, 5, 0, 7, 1, 8, 0),
    gsSP2Triangles(9, 1, 4, 0, 10, 2, 11, 0),
    gsSP2Triangles(5, 12, 13, 0, 3, 14, 5, 0),
    gsSP2Triangles(15, 0, 1, 0, 2, 0, 16, 0),
    gsSP2Triangles(17, 4, 18, 0, 19, 5, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 25, 28, 0, 21, 24, 22, 0),
    gsSP2Triangles(29, 30, 23, 0, 24, 21, 25, 0),
    gsSP2Triangles(28, 29, 27, 0, 30, 29, 28, 0),
    gsSP2Triangles(26, 25, 27, 0, 29, 23, 22, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlLeftHandDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[252], 4, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[256], 12, 4),
    gsSP2Triangles(4, 5, 2, 0, 6, 2, 3, 0),
    gsSP2Triangles(7, 0, 8, 0, 9, 3, 0, 0),
    gsSP2Triangles(10, 11, 0, 0, 12, 2, 13, 0),
    gsSP2Triangles(14, 1, 2, 0, 15, 0, 1, 0),
    gsSPVertex(&object_bgVtx_000720[268], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 5, 4, 0),
    gsSP2Triangles(2, 3, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 12, 11, 10, 0),
    gsSP2Triangles(6, 12, 10, 0, 12, 3, 2, 0),
    gsSP2Triangles(5, 12, 6, 0, 5, 3, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 11, 14, 13, 0),
    gsSP2Triangles(16, 13, 15, 0, 17, 18, 16, 0),
    gsSP2Triangles(12, 14, 11, 0, 17, 2, 18, 0),
    gsSP2Triangles(17, 19, 20, 0, 14, 21, 15, 0),
    gsSP2Triangles(20, 2, 17, 0, 12, 21, 14, 0),
    gsSP2Triangles(12, 20, 21, 0, 12, 2, 20, 0),
    gsSP2Triangles(16, 18, 7, 0, 9, 11, 13, 0),
    gsSP2Triangles(9, 8, 10, 0, 2, 1, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlLeftForearmDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[290], 5, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[295], 15, 5),
    gsSP2Triangles(1, 0, 5, 0, 6, 4, 7, 0),
    gsSP2Triangles(2, 8, 4, 0, 1, 9, 2, 0),
    gsSP2Triangles(10, 4, 11, 0, 1, 12, 13, 0),
    gsSP2Triangles(3, 4, 14, 0, 0, 3, 15, 0),
    gsSP2Triangles(0, 16, 17, 0, 0, 18, 19, 0),
    gsSPVertex(&object_bgVtx_000720[310], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 1, 0),
    gsSP2Triangles(8, 2, 1, 0, 0, 3, 5, 0),
    gsSP2Triangles(0, 2, 3, 0, 6, 4, 7, 0),
    gsSP1Triangle(7, 1, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlLeftUpperArmDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[319], 10, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSweaterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[329], 20, 10),
    gsSP2Triangles(6, 10, 11, 0, 1, 2, 12, 0),
    gsSP2Triangles(6, 13, 8, 0, 9, 8, 14, 0),
    gsSP2Triangles(3, 15, 16, 0, 17, 5, 9, 0),
    gsSP2Triangles(18, 0, 19, 0, 20, 0, 21, 0),
    gsSP2Triangles(22, 7, 0, 0, 23, 2, 24, 0),
    gsSP2Triangles(3, 25, 2, 0, 26, 0, 1, 0),
    gsSP2Triangles(5, 27, 4, 0, 5, 28, 29, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(&object_bgVtx_000720[349], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 6, 4, 0),
    gsSP2Triangles(4, 6, 1, 0, 7, 3, 2, 0),
    gsSP2Triangles(8, 3, 7, 0, 8, 9, 3, 0),
    gsSP2Triangles(5, 10, 6, 0, 10, 5, 9, 0),
    gsSP1Triangle(10, 9, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSweaterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x007C),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 14, 17, 0, 13, 12, 18, 0),
    gsSP2Triangles(19, 20, 17, 0, 12, 11, 21, 0),
    gsSP2Triangles(22, 17, 14, 0, 22, 19, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlRightHandDL[] = {
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[372], 4, 0),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[376], 12, 4),
    gsSP2Triangles(2, 4, 5, 0, 2, 0, 6, 0),
    gsSP2Triangles(1, 7, 0, 0, 8, 9, 1, 0),
    gsSP2Triangles(1, 3, 10, 0, 11, 12, 1, 0),
    gsSP2Triangles(13, 14, 3, 0, 15, 3, 2, 0),
    gsSPVertex(&object_bgVtx_000720[388], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 0, 7, 0, 9, 10, 0, 0),
    gsSP2Triangles(11, 12, 13, 0, 10, 12, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 10, 14, 0, 0),
    gsSP2Triangles(11, 0, 14, 0, 7, 15, 5, 0),
    gsSP2Triangles(4, 8, 5, 0, 4, 1, 8, 0),
    gsSP2Triangles(1, 13, 8, 0, 1, 11, 13, 0),
    gsSP2Triangles(1, 0, 11, 0, 16, 17, 6, 0),
    gsSP2Triangles(15, 17, 16, 0, 18, 6, 17, 0),
    gsSP2Triangles(17, 3, 18, 0, 17, 2, 19, 0),
    gsSP2Triangles(17, 0, 2, 0, 18, 4, 6, 0),
    gsSP2Triangles(1, 18, 3, 0, 1, 4, 18, 0),
    gsSP2Triangles(7, 17, 15, 0, 7, 0, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlRightForearmDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[408], 5, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[413], 15, 5),
    gsSP2Triangles(5, 4, 6, 0, 2, 7, 8, 0),
    gsSP2Triangles(2, 3, 9, 0, 3, 4, 10, 0),
    gsSP2Triangles(11, 4, 0, 0, 12, 4, 13, 0),
    gsSP2Triangles(14, 1, 2, 0, 15, 0, 1, 0),
    gsSP2Triangles(2, 16, 17, 0, 18, 0, 19, 0),
    gsSPVertex(&object_bgVtx_000720[428], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(4, 6, 7, 0, 5, 6, 4, 0),
    gsSP2Triangles(2, 8, 0, 0, 7, 8, 2, 0),
    gsSP1Triangle(6, 8, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlRightUpperArmDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[437], 8, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSweaterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[445], 20, 8),
    gsSP2Triangles(0, 8, 3, 0, 0, 9, 10, 0),
    gsSP2Triangles(5, 7, 11, 0, 12, 0, 1, 0),
    gsSP2Triangles(13, 1, 2, 0, 14, 15, 2, 0),
    gsSP2Triangles(4, 16, 2, 0, 4, 6, 17, 0),
    gsSP2Triangles(18, 6, 5, 0, 7, 3, 19, 0),
    gsSP2Triangles(7, 20, 21, 0, 22, 23, 4, 0),
    gsSP2Triangles(24, 25, 3, 0, 4, 26, 27, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSkinGradientTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(&object_bgVtx_000720[465], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(9, 4, 10, 0, 9, 10, 8, 0),
    gsSP2Triangles(3, 10, 4, 0, 1, 6, 2, 0),
    gsSP1Triangle(2, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSweaterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x007C),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 13, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 12, 18, 13, 0),
    gsSP2Triangles(14, 20, 19, 0, 14, 19, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlTorsoDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[486], 6, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlUmbEarLicusTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_bgVtx_000720[492], 18, 6),
    gsSP2Triangles(6, 7, 0, 0, 8, 9, 0, 0),
    gsSP2Triangles(10, 5, 2, 0, 11, 0, 5, 0),
    gsSP2Triangles(12, 13, 2, 0, 14, 15, 2, 0),
    gsSP2Triangles(0, 16, 1, 0, 1, 17, 18, 0),
    gsSP2Triangles(19, 4, 1, 0, 20, 2, 3, 0),
    gsSP2Triangles(3, 21, 22, 0, 23, 3, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSweaterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x007C),
    gsSPVertex(&object_bgVtx_000720[510], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 14, 12, 5, 0),
    gsSP2Triangles(12, 11, 15, 0, 16, 1, 0, 0),
    gsSP2Triangles(6, 17, 7, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 19, 22, 0, 23, 19, 18, 0),
    gsSP2Triangles(24, 23, 18, 0, 22, 19, 25, 0),
    gsSP2Triangles(5, 4, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 8, 7, 0),
    gsSPVertex(&object_bgVtx_000720[541], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 3, 5, 0, 13, 6, 14, 0),
    gsSP2Triangles(0, 15, 16, 0, 9, 11, 16, 0),
    gsSP2Triangles(16, 1, 0, 0, 17, 18, 8, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 9, 16, 0),
    gsSP2Triangles(23, 17, 24, 0, 24, 25, 23, 0),
    gsSP2Triangles(6, 26, 7, 0, 17, 27, 18, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_bgVtx_000720[572], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 4, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(7, 19, 8, 0, 7, 20, 19, 0),
    gsSP2Triangles(11, 10, 21, 0, 16, 14, 13, 0),
    gsSP2Triangles(6, 8, 10, 0, 6, 10, 12, 0),
    gsSP2Triangles(18, 17, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 26, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&object_bgVtx_000720[603], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 0, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 9, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(0, 2, 13, 0, 10, 14, 11, 0),
    gsSP2Triangles(15, 12, 11, 0, 16, 12, 15, 0),
    gsSP2Triangles(15, 7, 9, 0, 6, 16, 9, 0),
    gsSP2Triangles(16, 15, 9, 0, 16, 17, 12, 0),
    gsSP2Triangles(16, 6, 17, 0, 18, 12, 17, 0),
    gsSP2Triangles(7, 19, 14, 0, 19, 15, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gChuGirlWaistDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuGirlSweaterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_bgVtx_000720[623], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 3, 4, 0, 5, 3, 0, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 2, 1, 0),
    gsSP2Triangles(5, 0, 2, 0, 4, 3, 6, 0),
    gsSP2Triangles(6, 8, 4, 0, 8, 9, 4, 0),
    gsSP2Triangles(10, 11, 2, 0, 7, 10, 2, 0),
    gsSP2Triangles(1, 4, 12, 0, 9, 12, 4, 0),
    gsSP2Triangles(12, 7, 1, 0, 9, 7, 12, 0),
    gsSPEndDisplayList(),
};

u64 gChuGirlEyeOpenTex[] = {
#include "assets/objects/object_bg/chu_girl_eye_open.rgba16.inc.c"
};

u64 gChuGirlEyeHalfTex[] = {
#include "assets/objects/object_bg/chu_girl_eye_half.rgba16.inc.c"
};

u64 gChuGirlEyeClosedTex[] = {
#include "assets/objects/object_bg/chu_girl_eye_closed.rgba16.inc.c"
};

u64 gChuGirlMouthTex[] = {
#include "assets/objects/object_bg/chu_girl_mouth.rgba16.inc.c"
};

u64 gChuGirlSkinGradientTex[] = {
#include "assets/objects/object_bg/chu_girl_skin_gradient.rgba16.inc.c"
};

u64 gChuGirlUmbEarLicusTex[] = {
#include "assets/objects/object_bg/chu_girl_umb_ear_licus.rgba16.inc.c"
};

u64 gChuGirlSweaterTex[] = {
#include "assets/objects/object_bg/chu_girl_sweater.rgba16.inc.c"
};

u64 gChuGirlHairTex[] = {
#include "assets/objects/object_bg/chu_girl_hair.rgba16.inc.c"
};

StandardLimb gChuGirlWaistLimb = { 
    { 4, 3199, 0 }, 0x01, LIMB_DONE,
    gChuGirlWaistDL
};

StandardLimb gChuGirlTorsoLimb = { 
    { 797, 0, 0 }, 0x02, LIMB_DONE,
    gChuGirlTorsoDL
};

StandardLimb gChuGirlNeckLimb = { 
    { 1398, 0, 0 }, 0x03, 0x04,
    gChuGirlNeckDL
};

StandardLimb gChuGirlHeadLimb = { 
    { 286, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gChuGirlHeadDL
};

StandardLimb gChuGirlLeftUpperArmLimb = { 
    { 1331, -571, 0 }, 0x05, 0x07,
    gChuGirlLeftUpperArmDL
};

StandardLimb gChuGirlLeftForearmLimb = { 
    { 885, 0, 0 }, 0x06, LIMB_DONE,
    gChuGirlLeftForearmDL
};

StandardLimb gChuGirlLeftHandLimb = { 
    { 797, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gChuGirlLeftHandDL
};

StandardLimb gChuGirlRightUpperArmLimb = { 
    { 1331, 571, 0 }, 0x08, LIMB_DONE,
    gChuGirlRightUpperArmDL
};

StandardLimb gChuGirlRightForearmLimb = { 
    { 892, 0, 0 }, 0x09, LIMB_DONE,
    gChuGirlRightForearmDL
};

StandardLimb gChuGirlRightHandLimb = { 
    { 774, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gChuGirlRightHandDL
};

void* gChuGirlSkelLimbs[] = {
    &gChuGirlWaistLimb,
    &gChuGirlTorsoLimb,
    &gChuGirlNeckLimb,
    &gChuGirlHeadLimb,
    &gChuGirlLeftUpperArmLimb,
    &gChuGirlLeftForearmLimb,
    &gChuGirlLeftHandLimb,
    &gChuGirlRightUpperArmLimb,
    &gChuGirlRightForearmLimb,
    &gChuGirlRightHandLimb,
};

FlexSkeletonHeader gChuGirlSkel = { 
    { gChuGirlSkelLimbs, ARRAY_COUNT(gChuGirlSkelLimbs) }, 10
};

u8 object_bg_possiblePadding_006EBC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

s16 sChuGirlLeanOverCounterAnimFrameData[] = {
    0x0004, 0x0C7F, 0x0000, 0x4000, 0x0983, 0xF432, 0xDECB, 0x0000, 0x0075, 0x00D1, 0x0118, 0x014B, 0x016C, 0x017C, 
    0x017E, 0x0174, 0x0160, 0x0143, 0x0120, 0x00F8, 0x00CE, 0x00A3, 0x0079, 0x0053, 0x0031, 0x0017, 0x0006, 0x0000, 
    0xFFFF, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFF, 
    0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0xEDAA, 0xED52, 0xED0C, 0xECD7, 0xECB0, 0xEC98, 0xEC8B, 0xEC8A, 0xEC91, 
    0xECA1, 0xECB6, 0xECD1, 0xECEF, 0xED0F, 0xED2F, 0xED4F, 0xED6C, 0xED85, 0xED99, 0xEDA6, 0x0000, 0x001B, 0x0030, 
    0x0040, 0x004B, 0x0053, 0x0057, 0x0057, 0x0055, 0x0050, 0x004A, 0x0042, 0x0039, 0x002F, 0x0025, 0x001C, 0x0013, 
    0x000B, 0x0005, 0x0001, 0xEE7B, 0xEE2A, 0xEDE9, 0xEDB7, 0xED94, 0xED7D, 0xED72, 0xED70, 0xED77, 0xED85, 0xED99, 
    0xEDB2, 0xEDCE, 0xEDEB, 0xEE09, 0xEE26, 0xEE41, 0xEE58, 0xEE6B, 0xEE77, 0x0000, 0x001B, 0x002E, 0x0039, 0x003F, 
    0x0041, 0x0041, 0x0040, 0x003F, 0x003C, 0x0038, 0x0032, 0x002B, 0x0024, 0x001D, 0x0015, 0x000F, 0x0009, 0x0004, 
    0x0001, 0x1256, 0x1166, 0x1040, 0x0F04, 0x0DD5, 0x0CD3, 0x0C1F, 0x0BDC, 0x0BF8, 0x0C46, 0x0CBC, 0x0D52, 0x0DFF, 
    0x0EB9, 0x0F78, 0x1033, 0x10DF, 0x1176, 0x11EC, 0x123A, 0x0000, 0xFFEE, 0xFFE1, 0xFFD8, 0xFFD2, 0xFFCE, 0xFFCD, 
    0xFFCD, 0xFFCD, 0xFFD0, 0xFFD4, 0xFFD8, 0xFFDE, 0xFFE3, 0xFFE9, 0xFFEF, 0xFFF4, 0xFFF9, 0xFFFD, 0xFFFF, 0x0774, 
    0x080E, 0x08A8, 0x0942, 0x09DB, 0x0A75, 0x0B0F, 0x0BA9, 0x0C43, 0x0CDC, 0x0D76, 0x0CDC, 0x0C43, 0x0BA9, 0x0B0F, 
    0x0A75, 0x09DB, 0x0942, 0x08A8, 0x080E, 0xF5B5, 0xF557, 0xF4F9, 0xF49B, 0xF43D, 0xF3E0, 0xF382, 0xF324, 0xF2C6, 
    0xF268, 0xF20A, 0xF268, 0xF2C6, 0xF324, 0xF382, 0xF3E0, 0xF43D, 0xF49B, 0xF4F9, 0xF557, 0x9285, 0x9260, 0x923B, 
    0x9215, 0x91F0, 0x91CB, 0x91A5, 0x9180, 0x915B, 0x9135, 0x9110, 0x9135, 0x915B, 0x9180, 0x91A5, 0x91CB, 0x91F0, 
    0x9215, 0x923B, 0x9260, 0xE611, 0xE5AE, 0xE54B, 0xE4E7, 0xE484, 0xE421, 0xE3BE, 0xE35B, 0xE2F8, 0xE295, 0xE232, 
    0xE295, 0xE2F8, 0xE35B, 0xE3BE, 0xE421, 0xE484, 0xE4E7, 0xE54B, 0xE5AE, 0xDDCC, 0xDE96, 0xDF60, 0xE02A, 0xE0F3, 
    0xE1BD, 0xE287, 0xE351, 0xE41A, 0xE4E4, 0xE5AE, 0xE4E4, 0xE41A, 0xE351, 0xE287, 0xE1BD, 0xE0F3, 0xE02A, 0xDF60, 
    0xDE96, 0x25E8, 0x2602, 0x261D, 0x2637, 0x2652, 0x266C, 0x2686, 0x26A1, 0x26BB, 0x26D6, 0x26F0, 0x26E9, 0x26D5, 
    0x26B7, 0x2693, 0x266C, 0x2645, 0x2621, 0x2603, 0x25EF, 0xFFD0, 0xFFE7, 0x000E, 0x0039, 0x005B, 0x0069, 0x004B, 
    0x002C, 0x000D, 0xFFEE, 0xFFD0, 0xFFB0, 0xFF8F, 0xFF6F, 0xFF4F, 0xFF2F, 0xFF4F, 0xFF6F, 0xFF8F, 0xFFB0, 0x0543, 
    0x0551, 0x055F, 0x056E, 0x057C, 0x058A, 0x057C, 0x056E, 0x055F, 0x0551, 0x0543, 0x0531, 0x051E, 0x050B, 0x04F9, 
    0x04E6, 0x04F9, 0x050B, 0x051E, 0x0531, 0x129C, 0x1281, 0x1267, 0x124C, 0x1231, 0x1216, 0x1231, 0x124C, 0x1267, 
    0x1281, 0x129C, 0x12B3, 0x12C9, 0x12E0, 0x12F7, 0x130D, 0x12F7, 0x12E0, 0x12C9, 0x12B3, 0xFA9A, 0xFA9E, 0xFAA3, 
    0xFAA7, 0xFAAB, 0xFAAF, 0xFAB4, 0xFAB8, 0xFABC, 0xFAC0, 0xFAC5, 0xFAC0, 0xFABC, 0xFAB8, 0xFAB4, 0xFAAF, 0xFAAB, 
    0xFAA7, 0xFAA3, 0xFA9E, 0xF053, 0xF055, 0xF057, 0xF05A, 0xF05C, 0xF05E, 0xF060, 0xF062, 0xF064, 0xF066, 0xF068, 
    0xF066, 0xF064, 0xF062, 0xF060, 0xF05E, 0xF05C, 0xF05A, 0xF057, 0xF055, 0x6C11, 0x6C06, 0x6BFB, 0x6BF0, 0x6BE5, 
    0x6BDA, 0x6BCF, 0x6BC4, 0x6BB9, 0x6BAE, 0x6BA3, 0x6BAE, 0x6BB9, 0x6BC4, 0x6BCF, 0x6BDA, 0x6BE5, 0x6BF0, 0x6BFB, 
    0x6C06, 0x0000, 0x0042, 0x0084, 0x00C6, 0x0108, 0x014A, 0x00E4, 0x007D, 0x0017, 0xFFB1, 0xFF4B, 0xFFB1, 0x0017, 
    0x007E, 0x00E4, 0x014B, 0x0109, 0x00C7, 0x0084, 0x0042, 0x0000, 0xFFD4, 0xFFA8, 0xFF7B, 0xFF4F, 0xFF23, 0xFF27, 
    0xFF2B, 0xFF2E, 0xFF32, 0xFF36, 0xFF46, 0xFF57, 0xFF68, 0xFF78, 0xFF89, 0xFFA1, 0xFFB9, 0xFFD0, 0xFFE8, 0xF14F, 
    0xF160, 0xF171, 0xF182, 0xF193, 0xF1A4, 0xF1AE, 0xF1B8, 0xF1C2, 0xF1CC, 0xF1D7, 0xF1C9, 0xF1BC, 0xF1AF, 0xF1A2, 
    0xF194, 0xF187, 0xF179, 0xF16B, 0xF15D, 0x0000, 
};

JointIndex sChuGirlLeanOverCounterAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0002 },
    { 0x0002, 0x0007, 0x0003 },
    { 0x001B, 0x002F, 0x0043 },
    { 0x0002, 0x0057, 0x0002 },
    { 0x006B, 0x007F, 0x0093 },
    { 0x00A7, 0x00BB, 0x00CF },
    { 0x00E3, 0x00F7, 0x010B },
    { 0x011F, 0x0133, 0x0147 },
    { 0x015B, 0x016F, 0x0183 },
    { 0x0004, 0x0005, 0x0006 },
    { 0x0197, 0x01AB, 0x01BF },
};

AnimationHeader gChuGirlLeanOverCounterAnim = { 
    { 20 }, sChuGirlLeanOverCounterAnimFrameData,
    sChuGirlLeanOverCounterAnimJointIndices, 7
};

