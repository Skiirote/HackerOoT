#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_bosskey.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_bosskeyVtx_000000[] = {
#include "assets/objects/object_gi_bosskey/object_gi_bosskeyVtx_000000.vtx.inc"
};

Gfx gGiBossKeyDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, PRIM_LOD_FRAC, 1, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetEnvColor(140, 120, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown9Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_bosskeyVtx_000000, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000000[4], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(12, 9, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(9, 8, 16, 0, 9, 16, 15, 0),
    gsSP2Triangles(8, 11, 14, 0, 8, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(19, 18, 23, 0, 19, 23, 21, 0),
    gsSP2Triangles(18, 17, 24, 0, 18, 24, 23, 0),
    gsSP2Triangles(17, 25, 26, 0, 17, 26, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000000[35], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 5, 9, 0, 7, 5, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 16, 11, 0),
    gsSP2Triangles(17, 18, 3, 0, 13, 19, 20, 0),
    gsSP2Triangles(2, 6, 7, 0, 21, 22, 9, 0),
    gsSP2Triangles(23, 1, 24, 0, 19, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 20, 19, 26, 0),
    gsSP1Triangle(30, 13, 25, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000000[66], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 3, 0, 3, 20, 18, 0),
    gsSP2Triangles(21, 5, 20, 0, 22, 23, 18, 0),
    gsSP2Triangles(18, 15, 22, 0, 24, 25, 16, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000000[98], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 8, 9, 0, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 18, 0),
    gsSP2Triangles(0, 21, 8, 0, 7, 22, 6, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 24, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000000[129], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 4, 0, 12, 10, 4, 0),
    gsSP2Triangles(5, 13, 14, 0, 15, 16, 6, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 17, 24, 0, 25, 23, 20, 0),
    gsSP2Triangles(0, 26, 27, 0, 28, 29, 15, 0),
    gsSP2Triangles(27, 1, 0, 0, 5, 4, 11, 0),
    gsSP2Triangles(13, 5, 30, 0, 13, 26, 14, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000000[160], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 2, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gGiBossKeyGemDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x80, 255, 170, 255, 255),
    gsDPSetEnvColor(255, 0, 100, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x1770, 0x1770, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown9Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 15, G_TX_NOMIRROR | G_TX_WRAP,
                5, 15),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_bosskeyVtx_000000[179], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000000[182], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 2, 4, 5, 0),
    gsSP2Triangles(2, 5, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(2, 7, 8, 0, 2, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(10, 14, 13, 0, 15, 14, 10, 0),
    gsSP2Triangles(16, 15, 10, 0, 17, 16, 10, 0),
    gsSP2Triangles(18, 17, 10, 0, 19, 18, 10, 0),
    gsSP1Triangle(12, 19, 10, 0),
    gsSPEndDisplayList(),
};

