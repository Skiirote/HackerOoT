#include "meatdungeon_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_MEATDUNGEON_ROOM_4_HEADER00_OBJECTLIST 1
#define LENGTH_MEATDUNGEON_ROOM_4_HEADER00_ACTORLIST 2
SceneCmd meatdungeon_room_4_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&meatdungeon_room_4_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_MEATDUNGEON_ROOM_4_HEADER00_OBJECTLIST, meatdungeon_room_4_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_MEATDUNGEON_ROOM_4_HEADER00_ACTORLIST, meatdungeon_room_4_header00_actorList),
    SCENE_CMD_END(),
};

s16 meatdungeon_room_4_header00_objectList[LENGTH_MEATDUNGEON_ROOM_4_HEADER00_OBJECTLIST] = {
    OBJECT_BROB,
};

ActorEntry meatdungeon_room_4_header00_actorList[LENGTH_MEATDUNGEON_ROOM_4_HEADER00_ACTORLIST] = {
    // Flobbery Muscle Block
    {
        /* Actor ID   */ ACTOR_EN_BROB,
        /* Position   */ { -1824, -236, 34 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x00FF
    },

    // Flobbery Muscle Block
    {
        /* Actor ID   */ ACTOR_EN_BROB,
        /* Position   */ { -2059, -236, -61 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(329.420), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x00FF
    },
};

RoomShapeNormal meatdungeon_room_4_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(meatdungeon_room_4_shapeDListsEntry),
    meatdungeon_room_4_shapeDListsEntry,
    meatdungeon_room_4_shapeDListsEntry + ARRAY_COUNT(meatdungeon_room_4_shapeDListsEntry)
};

RoomShapeDListsEntry meatdungeon_room_4_shapeDListsEntry[1] = {
    { meatdungeon_room_4_shapeHeader_entry_0_opaque, NULL }
};

Gfx meatdungeon_room_4_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 meatdungeon_room_4_dl_bek_wht1_w03_1_i4[] = {
	0xcbbcb999c999b999, 0xb9bbbb9bb999c9bc, 0x999bb99cb9bcb9bb, 0xb99c9999b99bb9bc, 0xb99bb99bb9bbc99b, 0x9999cbbcc9bbb99b, 0xb9bbb99bb999c99b, 0xbbbcb99bb99bb999, 
	0xcbbc9bbbb9bbbbbb, 0xbb9bccbbbb99cbbc, 0xb9bbbbbbb9bcbbbb, 0xbbbc977799bbbbbc, 0xbbbbb99cbbbbcbbb, 0xbbbccbbbcbbcb9bc, 0xbb9bbbbcb99bcb99, 0xbbbcbb9bbbbbbbbb, 
	0xccccbb99bbbbcbbb, 0xcb9bccbbbbbbcccc, 0xb9cbbbbbbb9cb9bb, 0xc99b997779bbbbbc, 0xcbbbbcbcbb9bccbc, 0xb77bcbbbbbbbbbbc, 0x99bbbbbcb999bbbb, 0xbbbcbcbbbbbbbbbb, 
	0xcbbbb97bcbbbbbbb, 0xb79bcbbbb99ccbbb, 0xb79bbcbbbbbcbbbb, 0xbbbbb77779bcbbbc, 0xbcccbbbbbbb9ccbb, 0xb77bcbbbbbbcb77c, 0xb77bbbbbbbbbcbbb, 0xbbbbbb9cbbbbb77b, 
	0xcbbbbb9bbbbcbbcb, 0x977bccbbb99bbcbc, 0xb77bbbbbbbbcbbbc, 0xbbbb9777779b9bbc, 0xbccbbccbbbbccbbc, 0xbbcbbbbbbbbbbcbc, 0x977cbccccb7bb77c, 0xbbbbcbbbbbbbbb9b, 
	0xcbbc977bbb9bb99b, 0x9bbbccbb977bcbbc, 0xbbbbbbcbbbbcbbbc, 0xb77c9777979bbbbb, 0xcccbbcccbbb9cbbb, 0xbb9bc97bcbbcbbbb, 0xccbbcbccb97cb779, 0xbbbbbcccbb7bbccb, 
	0xcbbbb779b77bb977, 0xb799cb9bb779bcbc, 0xb77c9b9bbbbb999b, 0xbcbbb77977b9b7bc, 0x9999b79bbccccbbc, 0xb97bcbcb977b9779, 0x7779bbccb99bc99b, 0x99bbb999bb799779, 
	0xccbbbbbbb77bb979, 0xb77bcbb9b99bcbbb, 0x977b999bbbbb99bb, 0xb77bb979777b779c, 0xb97bb79bc77bb97c, 0xb777cbbbb97b7779, 0x9779bbbc9779b77b, 0xb7cbbc7bb7777779, 
	0xcbbcb779b99b9779, 0x979bcbcbb979c79c, 0xb99bb77bbbbbc77b, 0xb77b99999779979b, 0xb77bb77cb777b77b, 0x9777c97bb779b77b, 0x9777c77c97779799, 0xb9bbb779b779b97b, 
	0xc99bb77bb7799979, 0xc79bc77b9777b77b, 0xb77bb799b9bc97bb, 0x997cbbb9977999bc, 0x999cb97bc7799779, 0x9779b77bb799977b, 0x7979c9bc9777977b, 0x979bb779bbbbb99b, 
	0x977bb7799997b97b, 0xb9bcc79bbbbb999b, 0xb779bb7bb79cb9bb, 0x977bbb9b997b777c, 0x7779c779b77bb97b, 0x9999b9bb9999977b, 0x99bbc79cb7779979, 0x7779b77b9779b99b, 
	0x977b9b9c9779cbbb, 0xb79bc77b9779b99b, 0xbbbbb97bb77bb77b, 0xb97cb97b997977bc, 0x777bc79bbbc9999b, 0xb799b77ccbbb977c, 0xb77bc79cb779c77b, 0x979bb77b977b9779, 
	0x979bbbbbbbbcbccb, 0xb79bcb999777c77b, 0xb779b99bb77bb77b, 0xcb9cbbbb997bb79c, 0xb79bb77bb779b999, 0x9779b77bbbbbbb9c, 0xbbbcc79cb779b97b, 0xb77bb97b9999b779, 
	0x977bb77b977bb79b, 0xb779b979b77bc97b, 0xb77bcbbbb77cb97b, 0xb77cbbbb977b979c, 0xc9bbb99bb779b77b, 0x9779b77bb779b79c, 0x9979bbbc97979979, 0xb77bcb9bbbbbc79b, 
	0xb79bc77bb777b77b, 0xb79bc77bb79b97bb, 0xb9bbc97cb77bb99c, 0xb99cbb9bb97c97bb, 0x777bbbbbb799c79b, 0xb977c999bb9b979c, 0xb979cb9cbb99c979, 0xb77bb7799777cbcb, 
	0xbbcbbb9bbc7bb99b, 0xb77cc97bb97b999c, 0xb99bb99cbb7bc9bb, 0xcbbcb9b9b999979b, 0xb77bbcccb77b9b7b, 0x997bc77bbbc9cbbc, 0xc77cb79cb779cccb, 0xb79bb999779bcbcc, 
	0xb77bb77bbccbcbbb, 0xb99bbb9bcccbbccb, 0x997bbccbccccbb7b, 0xb77cb97bc97b799c, 0xbcccb9bbb77cb79b, 0x997bc79bb97bcccc, 0xccccb99cb999cb99, 0xcccccbcc977bc997, 
	0x9bbbb77b977b9779, 0xb79bcb9bb97bb77c, 0xbbbbc9bcb77bbbbb, 0xb79cb97bccbb977b, 0x977bbbccb979b979, 0xb997c99cbb9bb97c, 0xb99bb99c977bb99b, 0x979bc99bb9bb9999, 
	0xb79bbbbbb77bb77b, 0xb99bcccbb779b99c, 0xb97bc77bb97cccbc, 0xcbbcbc7bb77bb9bc, 0xb77bb77bbb9cb77b, 0xb979c9bbb77b977c, 0xb77bb99cbbb9c97b, 0xb77bccccb799b779, 
	0xb7bbb77bccc9b97b, 0xb79bc99bc79b977c, 0xb77bb979c99c9bbb, 0x999b9979b99bb9cc, 0xb79b977b9999bbbb, 0xb99bcccc999bc9bc, 0xc77cccccccbcbb99, 0xcbccbcbbcb9bc77b, 
	0xb77bb77bbb7bb97b, 0xb97bc97bc779977c, 0xb7bbbb9bb779b79b, 0xb77cc9bbc999979c, 0xcccccccbb97b9999, 0xb77bb99bc97cb77b, 0xccccccccccbcb99b, 0xb99bbc9bbbbccccb, 
	0x977bc99bc779b77b, 0x999bccccbbbccccc, 0x99bbccbbb79bbc9b, 0xcccc9779b77b977c, 0xbcbbccccbcccb77b, 0x9777cccb9979977c, 0xc77bb7bccbbbb97b, 0x977bbccbb97cbbbb, 
	0xb77bc99cc77b977b, 0xb7bbbb9bb779979c, 0xc77bb99bc97bb779, 0xb99bb999b999977c, 0xbb9b997bb799b9b9, 0x7797c97bb77bbbbc, 0xbb9ccccccccccb7b, 0x977bc999b79bb97b, 
	0xcbccccbbb77bcbcc, 0xcb99b77bb9799779, 0xbbccc77bbcbbbb9b, 0x7779b799b97bcbcc, 0xbbcb97779779977b, 0x9797b97bb79b977b, 0xcbbbc77c9779c77b, 0x999bb97bc99cc9bb, 
	0xc77cb77bbcbbbccb, 0x9777c97bbcbcb77b, 0x9779cbbbb77b977c, 0x9777977bcccbc9bc, 0xc99bb779b779979b, 0xb979c97bb99b979b, 0x9779c77c77799b99, 0x979bb979b79bc79b, 
	0xb79bc779bbbbb9bb, 0x979bcccbbb9bc97c, 0x7779cccc7779bb9b, 0xb97bb99bc79b977c, 0xc77bcbbcb99bb97b, 0xcccccbbbb99c9979, 0xb77bb79cc9bbb97b, 0x977bc99ccb9ccccc, 
	0xcbcbb79bbbbbc79b, 0xbbccbccccb9bb99c, 0xb79bcccb9777bb9b, 0xc99cc9ccccccc99c, 0xcccccb9bb97bbb9b, 0xbbcccccbccbcb77b, 0xcbccb79cc77cb97b, 0xb99b9bccc77cccc9, 
	0xccccc79bb779b77c, 0x997bcccbb77bcccc, 0xb99bcccc997bcccb, 0xccccbccccccccccc, 0xccccbbcccc9cccbb, 0xccccccccccccb97b, 0xb99bbc9cbccccb9c, 0xb97cbcbccccccccc, 
	0xb779cb9cc777cbbb, 0xb77bbb9bb777979b, 0xccbcb779b97b977c, 0xb77bb779997c997b, 0xb979b77bb779977b, 0xb779cccb999bbccc, 0x977bbccc977b99bc, 0xcbbbb77999bbb779, 
	0xb77bb799b777b77b, 0x9979cbbbcbb9b99b, 0x9999c77b9b99b779, 0xb77bb779777cb77c, 0x977997999799977b, 0x979ccbbcb97c977b, 0xb77bbbbcbb7bb77b, 0x997bb999b77cb79b, 
	0xb79cb77bbcbcb97b, 0x7777c77bc77b997b, 0xb99b9777bcbbb77b, 0xb77bc9b9b77cb99c, 0xb7799779b779cbbc, 0xb799ccbcb77cbb9b, 0x999bc79cb79bc79b, 0xbb7b9779b77cb97b, 
	0xccccc97bb77bcccc, 0xb77bc77bc99ccbbb, 0x9779b77b977bbb9c, 0xb99cccccc9cccccc, 0x97799779b77bcccc, 0xc9bccccccccc997b, 0x979bb7bcb97bcccb, 0xb9999779977bb99b, 
	0xb79ccb9c9799999b, 0x977bc77bcbcbcb9c, 0x9777b999b99cbccc, 0xccccbccbcbcbbcbc, 0xb77bb799cb9cbccc, 0xbcbcccccbcbcb77b, 0xb77bb9bcbb9cc97c, 0xb77cb77b977bbb9b, 
	0xb9bccb9c9777977b, 0xb77bccccb79bcccc, 0x7777cb9b999bcccc, 0xcccccb9bb99bbbbc, 0xcbbcb9bbcbccb9bc, 0x999bcbcb977bb77b, 0xb77bcb9cb9bcc99b, 0xb99cb99cccccb79b, 
	0xb77bc97bb79bb99b, 0xbbbbbb9bc779cbcc, 0xb77b9799b9bc9bbb, 0xbbbbcbbbb9bbbbbc, 0xc9999bb9b99bc97b, 0xb77bcccbc97c977c, 0xbbbcb99b977bb77b, 0xb9b9bbcbb9bcc77b, 
	0x997bc9bcbbbbc77b, 0x977bcbb9b77bb99b, 0xccbc9779b9bbb77b, 0xb77bb99bb999b99b, 0x97799779b7799bcc, 0xcccbcbbbcb999bb9, 0xb99bb77b999bcccb, 0xb9bbbb9b979bb7bb, 
	0x977bb77c999bb79b, 0xb77bb77bb9999779, 0x977bbbb99779b779, 0xbbbcbc99b97bb77c, 0xb79b9779999bb77b, 0x9779c77b9779b99b, 0xb9999779b97cb9bc, 0xb99bb779977cbcbb, 
	0xb77bc999b77bb99b, 0xbcb9b77cb999777b, 0xbbcbb77999b9bbbb, 0xb77b97799779b99b, 0xb77bb79b9779b99c, 0x9779c779979b977b, 0x97799779bbbcb99b, 0xb77bb77bb77b7779, 
	0xbbbbc77bb979b779, 0xb99bb79bb979c79c, 0xb79bb77cb77bb79b, 0xccbbc779b779b97b, 0xc79bbccb977bbbbc, 0x9777c979997bb9bb, 0x9779b97cb79cb77b, 0xb79bb99bb77cb97b, 
	0xcbccc97bbb9cbbbc, 0xb77bc99b9b7bbcbc, 0x9bbbbb9bcbbcbccb, 0xbbbbbbccbbbbb97b, 0xcccbb79bc99bcccc, 0xbb9bb97bccccb97b, 0xb779b77bb97cccbb, 0xbbbc979bbcccb79b, 
	0xbbb9cbbbb99bb99b, 0xb77bccccb97ccccc, 0xb779bbcbb97ccccc, 0xccccb799b77999c9, 0x9b9bbbb9cccc977c, 0x9799ccccb99bc99b, 0xbbbbbb99bbccb97b, 0xbbbbb79bb79bb979, 
	0x977bccccb999b77b, 0xb77bb77bb779b97c, 0xb779b779977bb779, 0xb99bc999977bb999, 0xb77b9779b97b777b, 0x9777c77ccbbcb99b, 0x9779977b977c979b, 0xb79cb97b979c977b, 
	0x999bcbbcb77bb77b, 0xb77b9779b779999b, 0xbbbcb79bb77b9779, 0xbbcbb97bb79b9779, 0xbb7b977b9779b77b, 0x9779cbcbb99cc77b, 0xbbbbb77b9779977b, 0xbbbbb79b979b9799, 
	0x9779cbbbc97bb79b, 0x977bb779b77b977b, 0x9779b77bb99bb77b, 0xb99bb97bb97bb77b, 0xb77bb77b9779b9bb, 0xb779c77b977cb97b, 0x9777977bb97cb77b, 0xb9bcb9bbb9bcb9bb, 
	0x9779cc9cb9bbcbbb, 0xb79cb77bc77b997b, 0xb779c79bb779b79b, 0xb79bb99bb77bb77b, 0xb77b997b9999b9bc, 0xb797c77b977bc99c, 0x977bb77bb99cb77b, 0xb77bb77bb79cb79b, 
	0xb99bc97cbbbbcbbb, 0xcbbcc99b999cb799, 0xb7bcb79bb799b99b, 0xb77bbb9bb97bb79b, 0xb779b779c77bc99c, 0x999bccbbb97bb77b, 0xb99bcb9ccbccb9b9, 0x979c977b999cb77b, 
	0xb79bc77cb97bc99b, 0xb99cb97bbcccbbbc, 0xbbbc9b9bbbbbbccc, 0xb77bb99b9cc9bbbb, 0x99b9977bccccbbbb, 0xcbbbccccccccb77b, 0xc77bb99bbbbcb79b, 0xb9bcb779977cb799, 
	0x9779ccbbb77bb779, 0xc9bcc99bb77bb99b, 0xb999c9bb979bb97b, 0x977b9779b97bb779, 0xcbbc997bb77bbbcb, 0xb779cccc977cbb9b, 0xb79bbcbbc9bc9779, 0xb77cb97cb79c977b, 
	0x9777c77cb97bc77b, 0xb77b97799777b79c, 0xb779c979977bb79b, 0xb77bbb9bb979b79b, 0xb99b977bb999b77c, 0xbb9bcccb977bb77b, 0xb9bb999bb97bb999, 0xc9bcb99cb77cb979, 
	0xb799b77cb99bc77b, 0x977bb77bb77bcbbc, 0x997bb979b77bb97c, 0xbccbb779b97bb77b, 0x979bb99b9799977c, 0x9779c97c9779c77b, 0xbb7c977bb77c977b, 0x977cbcbc97bc9779, 
	0xb77bbccbb77bb99b, 0xc9bbb79bb979977b, 0xbbbbb77cbbcbb77b, 0xb97cbbb9cbbbb79c, 0xb999979bb779c97c, 0xb77bc9bcbb9bb79b, 0xbb9bb97bb9bcb79b, 0xb99cb77cc9bc9779, 
	0x9799ccbbb999b77b, 0xbbbbb99bb77bb77c, 0xcccc979b977b9999, 0xb99bb77bb99bb97b, 0x977bb79bc779b77c, 0x9979c9799779b9bb, 0xb77bb97cb79c999b, 0xb77cbcbb799cb99b, 
	0x9777c979977b9979, 0xb77bb97b9999b99b, 0x9779bbbb9b79b779, 0xb79bb979b99bb77b, 0xb779b77bb77bb77c, 0x9777c779b779b77b, 0xb97bb77bb79c9779, 0xb79bb77b777cb799, 
	0x9779bbcbb77bb97b, 0x777bb99cb979c77b, 0x777799999779b7bb, 0xb7bbb77b97799bbb, 0x977b977bb97bc77c, 0x7777c979b9bbb77b, 0xb97cb77b977c977b, 0xb79cb779977cbb9b, 
	0xb779ccbbbb9bb77b, 0x7777997bb79bb97b, 0x9777b9799779b77b, 0xb77bc799b779b779, 0xb77bbbbbb79bb79c, 0xb779c97bb99bc79b, 0x979b9779977b979b, 0xb7bcb77c977cb77b, 
	0x9bbbcbbb997bb79b, 0xc77cb77bb97bb77b, 0x7779c99b9999c77b, 0x977bbbbbbbbbb77b, 0x9779b77bb77bc79c, 0xbb9bc77bb77bbbbc, 0x977bb779b77b977b, 0xb79cc99c777b9779, 
	0xb779ccbbb97bb79b, 0xbbbb9779977bb79b, 0xbb9bb797b79bb9bb, 0xbccbb97bb77bbcbc, 0xc97cb77bc77bbbbc, 0xb779cc9b9779bbbc, 0x977b997c999c977b, 0xb77cb77bb99c997b, 
	0xb97bccbbb9bbbbb9, 0x977bb77bb99bc79c, 0xb77bc79bb79bbccb, 0xccbbc99cbb9bb77b, 0xc99bb77bb97bbccc, 0x9779ccbcc79bcbbc, 0xc79bc77bbbbc999b, 0xb9bcc9bb999c977b, 
	0xb77bcbbb99cbbcbb, 0xb79bb77bb77bcccc, 0x9779cb9b99bbbbbc, 0xcccb9b9bb77bb97c, 0xcbbcc79bbcccccbc, 0xc77bcccbb97bcccb, 0xbbbbbbbcbcccb79b, 0xccbcb77bb7bc9779, 
	0xb97ccbbbb779bbbb, 0xb9bbb97bb77ccbbc, 0x9779c99b99bcbbb9, 0xb9cbb77cb79bb97c, 0xcccbb9cbbbbbbbcc, 0xb979cb99bb7bcbcc, 0xbb9bbb9bbbccb79b, 0xbbbcb77bb7bb997b, 
	0xb77bcccbb97bbbbb, 0xb99bbcccb97ccbcc, 0xb79bcc9bbbbbbbcb, 0xbcbb9cbbb77cb79b, 0xcbcccccbbccbcbcc, 0xb77bcbbbbb9cccbc, 0xbbbbb9bbbb9cbcbb, 0xbbbc979c97bcc999, 
	0xc97bccbbc77bbbcb, 0xc77bbcccbbcccccc, 0xb77bc99bcbbbcccc, 0xbccbbbbbbbbbbbbb, 0xcbbcb9cbbbbbbbbc, 0xc77bcbbb9bbbcbbc, 0xbbbbbbbbbbbcbccb, 0xccbcbbccb9bcb99b, 
	0xbbbbccbbb9bbbccb, 0xbccbcbc9bbccbbbc, 0xc97bccbbbccbcbbb, 0xbbbbcbcbbccc9bcc, 0xcccbbbbcbbbbbcbc, 0xbcbbcbbbbbccbbbc, 0xb9bbbbbbbcbccbcb, 0xcbbcbbccc9bcbccb, 
	0xcccccccccccccccc, 0xccbccccbcccccccc, 0xcccccccccccbcccc, 0xbccbbbcccccccccc, 0xcccbccbccccbbccb, 0xcccccbcbbcccbbbb, 0xbbcccccccccccccc, 0xbccbccccccbccccc, 
	
};

Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-2911, -236, 326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2911, 175, 326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2911, 175, -993}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2911, -236, -993}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, -236, 326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, 175, 326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, 175, -993}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, -236, -993}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_0[8] = {
	{{ {-2154, -236, -207}, 0, {-247, 3318}, {113, 87, 117, 255} }},
	{{ {-2065, -236, -374}, 0, {79, 4022}, {61, 45, 58, 255} }},
	{{ {-2065, -125, -374}, 0, {79, 4022}, {61, 45, 58, 255} }},
	{{ {-2154, -125, -207}, 0, {-247, 3318}, {113, 87, 117, 255} }},
	{{ {-2170, -125, -505}, 0, {79, 4022}, {61, 45, 58, 255} }},
	{{ {-2327, -125, -400}, 0, {-247, 3318}, {113, 87, 117, 255} }},
	{{ {-2170, -236, -505}, 0, {79, 4022}, {61, 45, 58, 255} }},
	{{ {-2327, -236, -400}, 0, {-247, 3318}, {113, 87, 117, 255} }},
};

Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(7, 3, 5, 0, 7, 0, 3, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_1[27] = {
	{{ {-1349, -125, -212}, 0, {1475, 2020}, {29, 21, 27, 255} }},
	{{ {-1437, 75, -212}, 0, {1068, 1025}, {61, 45, 58, 255} }},
	{{ {-1437, -125, -212}, 0, {1068, 2020}, {61, 45, 58, 255} }},
	{{ {-1349, 75, -212}, 0, {1475, 1025}, {17, 13, 16, 255} }},
	{{ {-1437, -125, 213}, 0, {3003, 2020}, {61, 45, 58, 255} }},
	{{ {-1349, 75, 213}, 0, {2597, 1025}, {17, 13, 16, 255} }},
	{{ {-1349, -125, 213}, 0, {2597, 2020}, {17, 13, 16, 255} }},
	{{ {-1437, 75, 213}, 0, {3003, 1025}, {61, 45, 58, 255} }},
	{{ {-1349, 75, -212}, 0, {1068, 1420}, {17, 13, 16, 255} }},
	{{ {-1349, 134, 1}, 0, {2036, 888}, {17, 13, 16, 255} }},
	{{ {-1427, 175, -1}, 0, {2029, 603}, {61, 45, 58, 255} }},
	{{ {-1349, 75, 213}, 0, {3003, 1422}, {17, 13, 16, 255} }},
	{{ {-1349, -125, -29}, 0, {1761, 2029}, {75, 55, 70, 255} }},
	{{ {-1319, -125, -29}, 0, {1992, 2029}, {0, 0, 0, 255} }},
	{{ {-1319, -25, -29}, 0, {1992, 1258}, {0, 0, 0, 255} }},
	{{ {-1349, -25, -29}, 0, {1761, 1258}, {75, 55, 70, 255} }},
	{{ {-1349, -125, -212}, 0, {355, 2029}, {29, 21, 27, 255} }},
	{{ {-1349, 75, -212}, 0, {355, 486}, {17, 13, 16, 255} }},
	{{ {-1349, 134, 1}, 0, {1992, 35}, {17, 13, 16, 255} }},
	{{ {-1349, -25, 31}, 0, {2224, 1258}, {75, 55, 70, 255} }},
	{{ {-1319, -25, 31}, 0, {2224, 1489}, {0, 0, 0, 255} }},
	{{ {-1319, -25, -29}, 0, {1761, 1489}, {0, 0, 0, 255} }},
	{{ {-1349, 75, 213}, 0, {3629, 486}, {17, 13, 16, 255} }},
	{{ {-1349, -125, 213}, 0, {3629, 2029}, {17, 13, 16, 255} }},
	{{ {-1349, -125, 31}, 0, {2224, 2029}, {75, 55, 70, 255} }},
	{{ {-1319, -125, 31}, 0, {1992, 2029}, {0, 0, 0, 255} }},
	{{ {-1319, -25, 31}, 0, {1992, 1258}, {0, 0, 0, 255} }},
};

Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_1 + 0, 27, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(1, 8, 9, 0, 1, 9, 10, 0),
	gsSP2Triangles(9, 7, 10, 0, 9, 11, 7, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
	gsSP2Triangles(15, 18, 17, 0, 15, 19, 18, 0),
	gsSP2Triangles(15, 20, 19, 0, 15, 21, 20, 0),
	gsSP2Triangles(18, 19, 22, 0, 19, 23, 22, 0),
	gsSP2Triangles(19, 24, 23, 0, 19, 25, 24, 0),
	gsSP1Triangle(19, 26, 25, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_2[8] = {
	{{ {-1567, -125, 326}, 0, {4058, -18}, {61, 45, 58, 255} }},
	{{ {-1670, -236, 137}, 0, {1852, 2034}, {113, 87, 117, 255} }},
	{{ {-1567, -236, 326}, 0, {4058, 2034}, {61, 45, 58, 255} }},
	{{ {-1670, -125, 137}, 0, {1852, -18}, {113, 87, 117, 255} }},
	{{ {-1670, -236, -136}, 0, {-951, 2034}, {113, 87, 117, 255} }},
	{{ {-1670, -125, -136}, 0, {-951, -18}, {113, 87, 117, 255} }},
	{{ {-1567, -236, -325}, 0, {-3157, 2034}, {61, 45, 58, 255} }},
	{{ {-1567, -125, -325}, 0, {-3157, -18}, {61, 45, 58, 255} }},
};

Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_2[] = {
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_2 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(5, 6, 4, 0, 5, 7, 6, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_3[47] = {
	{{ {-1349, -125, 31}, 0, {-458, -503}, {75, 55, 70, 255} }},
	{{ {-1319, -125, 31}, 0, {-716, -761}, {0, 0, 0, 255} }},
	{{ {-1319, -125, -29}, 0, {-1233, -245}, {0, 0, 0, 255} }},
	{{ {-1349, -125, -29}, 0, {-975, 14}, {75, 55, 70, 255} }},
	{{ {-1495, -125, 90}, 0, {1314, 251}, {113, 87, 117, 255} }},
	{{ {-1349, -125, -212}, 0, {-2544, 1583}, {29, 21, 27, 255} }},
	{{ {-1495, -125, -89}, 0, {-220, 1786}, {113, 87, 117, 255} }},
	{{ {-1437, -125, -212}, 0, {-1787, 2340}, {61, 45, 58, 255} }},
	{{ {-1567, -125, -325}, 0, {-1639, 4435}, {61, 45, 58, 255} }},
	{{ {-1670, -125, -136}, 0, {871, 3695}, {113, 87, 117, 255} }},
	{{ {-1670, -125, 137}, 0, {3223, 1343}, {113, 87, 117, 255} }},
	{{ {-1437, -125, 213}, 0, {1869, -1315}, {61, 45, 58, 255} }},
	{{ {-1567, -125, 326}, 0, {3964, -1167}, {61, 45, 58, 255} }},
	{{ {-1349, -125, 213}, 0, {1112, -2072}, {17, 13, 16, 255} }},
	{{ {-1670, -236, -136}, 0, {-3355, 4534}, {113, 87, 117, 255} }},
	{{ {-1567, -236, -325}, 0, {-2732, 6648}, {61, 45, 58, 255} }},
	{{ {-1864, -236, -321}, 0, {-210, 4126}, {61, 45, 58, 255} }},
	{{ {-1893, -236, -134}, 0, {-1578, 2758}, {113, 87, 117, 255} }},
	{{ {-2065, -236, -374}, 0, {1241, 3388}, {61, 45, 58, 255} }},
	{{ {-2154, -236, -207}, 0, {675, 1537}, {113, 87, 117, 255} }},
	{{ {-1936, -236, 135}, 0, {-3559, 777}, {113, 87, 117, 255} }},
	{{ {-2282, -236, 34}, 0, {-145, -1141}, {113, 87, 117, 255} }},
	{{ {-2327, -236, -400}, 0, {3328, 1681}, {113, 87, 117, 255} }},
	{{ {-2554, -236, -248}, 0, {3871, -1066}, {113, 87, 117, 255} }},
	{{ {-2459, -236, -683}, 0, {5705, 3433}, {113, 87, 117, 255} }},
	{{ {-2274, -236, -721}, 0, {4336, 4802}, {61, 45, 58, 255} }},
	{{ {-2170, -236, -505}, 0, {2953, 3580}, {61, 45, 58, 255} }},
	{{ {-2274, -236, -993}, 0, {4336, 4802}, {61, 45, 58, 255} }},
	{{ {-2459, -236, -993}, 0, {5705, 3433}, {113, 87, 117, 255} }},
	{{ {-2727, -236, -629}, 0, {7685, 1453}, {113, 87, 117, 255} }},
	{{ {-2727, -236, -993}, 0, {7685, 1453}, {113, 87, 117, 255} }},
	{{ {-2911, -236, -592}, 0, {9053, 85}, {61, 45, 58, 255} }},
	{{ {-2911, -236, -592}, 0, {9053, 85}, {61, 45, 58, 255} }},
	{{ {-2727, -236, -993}, 0, {7685, 1453}, {113, 87, 117, 255} }},
	{{ {-2911, -236, -993}, 0, {9053, 85}, {61, 45, 58, 255} }},
	{{ {-2710, -236, -143}, 0, {4246, -2965}, {61, 45, 58, 255} }},
	{{ {-2727, -236, -629}, 0, {7685, 1453}, {113, 87, 117, 255} }},
	{{ {-2554, -236, -248}, 0, {3871, -1066}, {113, 87, 117, 255} }},
	{{ {-2370, -236, 201}, 0, {-711, -2991}, {61, 45, 58, 255} }},
	{{ {-2282, -236, 34}, 0, {-145, -1141}, {113, 87, 117, 255} }},
	{{ {-1965, -236, 322}, 0, {-4927, -591}, {61, 45, 58, 255} }},
	{{ {-1936, -236, 135}, 0, {-3559, 777}, {113, 87, 117, 255} }},
	{{ {-1567, -236, 326}, 0, {-7449, 1931}, {61, 45, 58, 255} }},
	{{ {-1670, -236, 137}, 0, {-5335, 2554}, {113, 87, 117, 255} }},
	{{ {-1893, -236, -134}, 0, {-1578, 2758}, {113, 87, 117, 255} }},
	{{ {-1670, -236, -136}, 0, {-3355, 4534}, {113, 87, 117, 255} }},
	{{ {-2459, -236, -683}, 0, {5705, 3433}, {113, 87, 117, 255} }},
};

Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_3[] = {
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_3 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 3, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(4, 6, 9, 0, 4, 9, 10, 0),
	gsSP2Triangles(11, 4, 10, 0, 11, 10, 12, 0),
	gsSP2Triangles(4, 11, 13, 0, 4, 13, 0, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
	gsSP2Triangles(20, 17, 19, 0, 20, 19, 21, 0),
	gsSP2Triangles(21, 19, 22, 0, 21, 22, 23, 0),
	gsSP2Triangles(23, 22, 24, 0, 22, 25, 24, 0),
	gsSP2Triangles(22, 26, 25, 0, 24, 25, 27, 0),
	gsSP2Triangles(24, 27, 28, 0, 29, 24, 28, 0),
	gsSP2Triangles(29, 28, 30, 0, 31, 29, 30, 0),
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_3 + 32, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
	gsSP2Triangles(3, 5, 4, 0, 6, 5, 3, 0),
	gsSP2Triangles(6, 7, 5, 0, 8, 7, 6, 0),
	gsSP2Triangles(8, 9, 7, 0, 10, 9, 8, 0),
	gsSP2Triangles(10, 11, 9, 0, 11, 12, 9, 0),
	gsSP2Triangles(11, 13, 12, 0, 5, 14, 4, 0),
	gsSPEndDisplayList(),
};

Gfx mat_meatdungeon_room_4_dl_ClimbWall_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, meatdungeon_room_4_dl_bek_wht1_w03_1_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPSetTileSize(0, 0, 0, 508, 252),
	gsSPEndDisplayList(),
};

Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_Wall_layerOpaque),
	gsSPDisplayList(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_1),
	gsSPDisplayList(mat_meatdungeon_room_4_dl_ClimbWall_layerOpaque),
	gsSPDisplayList(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_2),
	gsSPDisplayList(mat_meatdungeon_room_2_dl_MeatFloor_layerOpaque),
	gsSPDisplayList(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_3),
	gsSPEndDisplayList(),
};

