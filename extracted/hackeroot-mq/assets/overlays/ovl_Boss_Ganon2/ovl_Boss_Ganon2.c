#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ovl_Boss_Ganon2.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
static u64 gGanonLightOrbTex[512];
static Vtx ovl_Boss_Ganon2Vtx_001000[4];
static Gfx gGanonLightOrbMaterialDL[14];
static Gfx gGanonLightOrbModelDL[3];
static Vtx ovl_Boss_Ganon2Vtx_0010C8[4];
static Gfx gGanonShadowMaterialDL[4];
static Gfx gGanonShadowModelDL[6];
static u64 gGanonSwordTrailTex[128];
static u64 gGanonSwordTrailMaskTex[64];
static Vtx gGanonSwordTrailVtx[22];
static Gfx gGanonSwordTrailDL[35];
static u64 gGanonTriforceTex[512];
static Vtx ovl_Boss_Ganon2Vtx_0029D0[4];
static Gfx gGanonTriforceDL[16];
static u64 gGanonLightningTex[320];
static Vtx ovl_Boss_Ganon2Vtx_003490[4];
static Gfx gGanonLightningDL[17];
static u64 gGanonFireRingTex[256];
static Vtx ovl_Boss_Ganon2Vtx_003D58[26];
static Gfx gGanonFireRingDL[36];
static u64 gGanonZeldaMagicTex[256];
static Vtx ovl_Boss_Ganon2Vtx_004818[22];
static Gfx gGanonZeldaMagicDL[33];
static u64 gGanonMasterSwordShadowTex[128];
static Vtx ovl_Boss_Ganon2Vtx_004E80[4];
static Gfx gGanonMasterSwordShadowDL[16];
static u64 gGanonMasterSwordPommelTex[64];
static u64 gGanonMasterSwordGuardTex[256];
static Vtx ovl_Boss_Ganon2Vtx_005940[122];
static Gfx gGanonMasterSwordDL[122];

static u64 gGanonLightOrbTex[512] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_light_orb.i8.inc.c"
};

static Vtx ovl_Boss_Ganon2Vtx_001000[4] = {
#include "assets/overlays/ovl_Boss_Ganon2/ovl_Boss_Ganon2Vtx_001000.vtx.inc"
};

static Gfx gGanonLightOrbMaterialDL[14] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGanonLightOrbTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

static Gfx gGanonLightOrbModelDL[3] = {
    gsSPVertex(ovl_Boss_Ganon2Vtx_001000, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static Vtx ovl_Boss_Ganon2Vtx_0010C8[4] = {
#include "assets/overlays/ovl_Boss_Ganon2/ovl_Boss_Ganon2Vtx_0010C8.vtx.inc"
};

static Gfx gGanonShadowMaterialDL[4] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};

static Gfx gGanonShadowModelDL[6] = {
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(ovl_Boss_Ganon2Vtx_0010C8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static u64 gGanonSwordTrailTex[128] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_sword_trail.i8.inc.c"
};

static u64 gGanonSwordTrailMaskTex[64] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_sword_trail_mask.i4.inc.c"
};

static Vtx gGanonSwordTrailVtx[22] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonSwordTrailVtx.vtx.inc"
};

static Gfx gGanonSwordTrailDL[35] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGanonSwordTrailTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gGanonSwordTrailMaskTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL0, TEXEL1, ENVIRONMENT, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetEnvColor(255, 200, 50, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gGanonSwordTrailVtx, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 3, 5, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSPEndDisplayList(),
};

static u64 gGanonTriforceTex[512] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_triforce.i8.inc.c"
};

static Vtx ovl_Boss_Ganon2Vtx_0029D0[4] = {
#include "assets/overlays/ovl_Boss_Ganon2/ovl_Boss_Ganon2Vtx_0029D0.vtx.inc"
};

static Gfx gGanonTriforceDL[16] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGanonTriforceTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, ENV_ALPHA, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED,
                       ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(ovl_Boss_Ganon2Vtx_0029D0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static u64 gGanonLightningTex[320] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_lightning.i4.inc.c"
};

static Vtx ovl_Boss_Ganon2Vtx_003490[4] = {
#include "assets/overlays/ovl_Boss_Ganon2/ovl_Boss_Ganon2Vtx_003490.vtx.inc"
};

static Gfx gGanonLightningDL[17] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gGanonLightningTex, G_IM_FMT_I, 32, 160, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 5, 8, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(0, 255, 155, 255),
    gsSPVertex(ovl_Boss_Ganon2Vtx_003490, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static u64 gGanonFireRingTex[256] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_fire_ring.i8.inc.c"
};

static Vtx ovl_Boss_Ganon2Vtx_003D58[26] = {
#include "assets/overlays/ovl_Boss_Ganon2/ovl_Boss_Ganon2Vtx_003D58.vtx.inc"
};

static Gfx gGanonFireRingDL[36] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGanonFireRingTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 5, 6, 2, 1),
    gsDPLoadMultiBlock(gEffUnknown12Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsSPDisplayList(0x08000000),
    gsSPVertex(ovl_Boss_Ganon2Vtx_003D58, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(3, 2, 25, 0, 3, 25, 24, 0),
    gsSPEndDisplayList(),
};

static u64 gGanonZeldaMagicTex[256] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_zelda_magic.i8.inc.c"
};

static Vtx ovl_Boss_Ganon2Vtx_004818[22] = {
#include "assets/overlays/ovl_Boss_Ganon2/ovl_Boss_Ganon2Vtx_004818.vtx.inc"
};

static Gfx gGanonZeldaMagicDL[33] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGanonZeldaMagicTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(gEffUnknown12Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(ovl_Boss_Ganon2Vtx_004818, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 1, 0, 0),
    gsSP2Triangles(6, 7, 4, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 13, 10, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 12, 0, 15, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 15, 14, 0),
    gsSP2Triangles(20, 21, 16, 0, 21, 17, 16, 0),
    gsSP2Triangles(2, 3, 20, 0, 3, 21, 20, 0),
    gsSPEndDisplayList(),
};

static u64 gGanonMasterSwordShadowTex[128] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_master_sword_shadow.i8.inc.c"
};

static Vtx ovl_Boss_Ganon2Vtx_004E80[4] = {
#include "assets/overlays/ovl_Boss_Ganon2/ovl_Boss_Ganon2Vtx_004E80.vtx.inc"
};

static Gfx gGanonMasterSwordShadowDL[16] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGanonMasterSwordShadowTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, 0, TEXEL0, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(ovl_Boss_Ganon2Vtx_004E80, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static u64 gGanonMasterSwordPommelTex[64] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_master_sword_pommel.rgba16.inc.c"
};

static u64 gGanonMasterSwordGuardTex[256] = {
#include "assets/overlays/ovl_Boss_Ganon2/ganon_master_sword_guard.rgba16.inc.c"
};

static Vtx ovl_Boss_Ganon2Vtx_005940[122] = {
#include "assets/overlays/ovl_Boss_Ganon2/ovl_Boss_Ganon2Vtx_005940.vtx.inc"
};

static Gfx gGanonMasterSwordDL[122] = {
    gsSPTexture(0x1770, 0x1770, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT,
                       0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(90, 100, 110, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(ovl_Boss_Ganon2Vtx_005940, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&ovl_Boss_Ganon2Vtx_005940[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 3, 19, 0, 20, 16, 15, 0),
    gsSP2Triangles(21, 7, 9, 0, 13, 22, 11, 0),
    gsSP2Triangles(11, 22, 23, 0, 24, 3, 18, 0),
    gsSP2Triangles(25, 21, 9, 0, 17, 26, 27, 0),
    gsSP2Triangles(24, 4, 3, 0, 2, 26, 17, 0),
    gsSP2Triangles(19, 28, 18, 0, 29, 30, 31, 0),
    gsSPVertex(&ovl_Boss_Ganon2Vtx_005940[35], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP1Triangle(1, 7, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 120, 0, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&ovl_Boss_Ganon2Vtx_005940[105], 17, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 4, 3, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 15, 16, 0),
    gsSP2Triangles(14, 13, 16, 0, 0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGanonMasterSwordGuardTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&ovl_Boss_Ganon2Vtx_005940[50], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(0, 4, 6, 0, 0, 6, 1, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP1Triangle(8, 6, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGanonMasterSwordPommelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_Boss_Ganon2Vtx_005940[61], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 1, 0, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGanonMasterSwordGuardTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_Boss_Ganon2Vtx_005940[67], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 7, 6, 9, 0),
    gsSP2Triangles(6, 5, 10, 0, 6, 10, 11, 0),
    gsSP1Triangle(6, 11, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGanonMasterSwordPommelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_Boss_Ganon2Vtx_005940[79], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 0, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGanonMasterSwordGuardTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_Boss_Ganon2Vtx_005940[89], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 0, 2, 5, 0),
    gsSP2Triangles(2, 6, 5, 0, 2, 4, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 10, 7, 0),
    gsSP2Triangles(7, 10, 11, 0, 8, 7, 12, 0),
    gsSP2Triangles(13, 12, 7, 0, 13, 7, 4, 0),
    gsSP2Triangles(2, 7, 14, 0, 7, 11, 14, 0),
    gsSP2Triangles(6, 14, 15, 0, 14, 11, 15, 0),
    gsSP2Triangles(15, 11, 10, 0, 6, 2, 14, 0),
    gsSPEndDisplayList(),
};

