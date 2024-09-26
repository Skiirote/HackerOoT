#include "ultra64.h"
#include "global.h"

u64 object_st_DL_001FD0_tex_00000320_i4_png_002_i4[] = {
	0x0000000000000000, 0x0000012333100000, 0x888888abcb988888, 0xeeeeeeeeeeeeeeee, 0xddddddddddeeeedd, 0x568acdb988acca87, 0x0013665211344310, 0x0000000000000000, 
	
};

Vtx object_st_DL_001FD0_object_st_DL_001FD0_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {6, -1185, -169}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {6, -1185, 49}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {6, 20, 49}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {6, 20, -169}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {278, -1185, -169}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {278, -1185, 49}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {278, 20, 49}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {278, 20, -169}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx object_st_DL_001FD0_object_st_DL_001FD0_mesh_layer_Opaque_vtx_0[12] = {
	{{ {44, -1136, -143}, 0, {256, 256}, {0, 198, 113, 255} }},
	{{ {69, -1185, -169}, 0, {-53, 256}, {0, 198, 113, 255} }},
	{{ {192, -1000, -73}, 0, {662, 4}, {0, 198, 113, 255} }},
	{{ {169, -268, 32}, 0, {-674, 265}, {216, 251, 120, 255} }},
	{{ {216, -238, 49}, 0, {-771, 234}, {216, 251, 120, 255} }},
	{{ {6, 20, -10}, 0, {-340, -31}, {216, 251, 120, 255} }},
	{{ {220, -584, 31}, 0, {325, 219}, {0, 251, 127, 255} }},
	{{ {278, -579, 31}, 0, {205, 219}, {0, 251, 127, 255} }},
	{{ {160, -194, 48}, 0, {373, -69}, {0, 251, 127, 255} }},
	{{ {150, -1023, -104}, 0, {365, 258}, {255, 218, 121, 255} }},
	{{ {206, -1039, -109}, 0, {164, 267}, {255, 218, 121, 255} }},
	{{ {242, -547, 45}, 0, {384, -64}, {255, 218, 121, 255} }},
};

Gfx object_st_DL_001FD0_object_st_DL_001FD0_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(object_st_DL_001FD0_object_st_DL_001FD0_mesh_layer_Opaque_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSPEndDisplayList(),
};

Gfx mat_object_st_DL_001FD0_f3dlite_material_014_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 0, 5, 255),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_st_DL_001FD0_tex_00000320_i4_png_002_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 28),
	gsSPEndDisplayList(),
};

Gfx object_st_DL_001FD0[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(object_st_DL_001FD0_object_st_DL_001FD0_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_object_st_DL_001FD0_f3dlite_material_014_layerOpaque),
	gsSPDisplayList(object_st_DL_001FD0_object_st_DL_001FD0_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

