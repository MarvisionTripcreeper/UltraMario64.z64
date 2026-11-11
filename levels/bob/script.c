#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0E, LEVEL_BOB, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_BOB, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 135, -6558, 1351, 6464),
		OBJECT_WITH_ACTS(MODEL_NONE, 1535, 3840, -5561, 0, 0, 0, 0x00000000, bhvBobBowlingBallSpawner, ACT_2 | ACT_3),
		OBJECT_WITH_ACTS(MODEL_NONE, 524, 2825, -5400, 0, 0, 0, 0x00000000, bhvBobBowlingBallSpawner, ACT_2 | ACT_3),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, -5723, 140, 6017, 0, 0, 0, 0x00000000, bhvBobombBuddy, ACT_2),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, -6250, 0, 6680, 0, 0, 0, 0x00000000, bhvBobombBuddy, ACT_2),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, -6250, 0, 6680, 0, 0, 0, 0x00000000, bhvBobombBuddy, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, -5723, 140, 6017, 0, 0, 0, 0x00000000, bhvBobombBuddyOpensCannon, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_DL_CANNON_LID, -5694, 128, 5600, 0, -180, 0, 0x00000000, bhvCannonClosed, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_BOB_CHAIN_CHOMP_GATE, 1456, 768, 446, 0, -34, 0, 0x00000000, bhvChainChompGate),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 1612, 300, 4611, 0, 0, 0, 0x00000000, bhvCheckerboardElevatorGroup),
		OBJECT(MODEL_NONE, 583, 2683, -5387, 0, -154, 0, 0x000B0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 1680, 3835, -5523, 0, -153, 0, 0x00000000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -6612, 1024, -3351, 0, 107, 0, 0x00000000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 1980, 768, 6618, 0, -151, 0, 0x000E0000, bhvFadingWarp),
		OBJECT(MODEL_PURPLE_SWITCH, -2283, 0, -3682, 0, 27, 0, 0x00000000, bhvFloorSwitchGrills),
		OBJECT(MODEL_NONE, -6000, 1000, 2400, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, -6600, 1000, 1250, 0, 0, 0, 0x00000000, bhvHiddenStar),
		OBJECT_WITH_ACTS(MODEL_KING_BOBOMB, 1636, 4242, -5567, 0, -147, 0, 0x00000000, bhvKingBobomb, ACT_2),
		OBJECT_WITH_ACTS(MODEL_KOOPA_WITH_SHELL, 3400, 770, 6500, 0, 0, 0, 0x00000000, bhvKoopa, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_KOOPA_WITH_SHELL, -4004, 0, 5221, 0, 0, 0, 0x00000000, bhvKoopa, ACT_3),
		OBJECT_WITH_ACTS(MODEL_NONE, 3304, 4242, -4603, 0, 0, 0, 0x00000000, bhvKoopaRaceEndpoint, ACT_3),
		OBJECT(MODEL_NONE, -2050, 0, -3069, 0, 25, 0, 0x00000000, bhvOpenableGrill),
		OBJECT(MODEL_BOWLING_BALL, -993, 886, -3565, 0, 0, 0, 0x00000000, bhvPitBowlingBall),
		OBJECT(MODEL_BOWLING_BALL, -785, 886, -4301, 0, 0, 0, 0x00000000, bhvPitBowlingBall),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -93, 886, -3414, 0, 0, 0, 0x00000000, bhvPitBowlingBall, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_BOB_SEESAW_PLATFORM, -2303, 717, 1024, 0, 45, 0, 0x00000000, bhvSeesawPlatform),
		OBJECT(MODEL_NONE, -6558, 1000, 6464, 0, 135, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_STAR, 1550, 1200, 300, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT_WITH_ACTS(MODEL_NONE, 1535, 3840, -5561, 0, 0, 0, 0x00000000, bhvTtmBowlingBallSpawner, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, 524, 2825, -5400, 0, 0, 0, 0x00000000, bhvTtmBowlingBallSpawner, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_CANNON_BASE, -5694, 128, 5600, 0, 135, 0, 0x00000000, bhvWaterBombCannon, ACT_2),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		SHOW_DIALOG(0x00, DIALOG_000),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 135, -6558, 1351, 6464),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};