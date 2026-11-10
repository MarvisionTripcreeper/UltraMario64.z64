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
#include "levels/yellow_switch_palace/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_yellow_switch_palace_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x07, _yellow_switch_palace_segment_7SegmentRomStart, _yellow_switch_palace_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_9), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, yellow_switch_palace_area_1),
		MARIO_POS(0x01, 0, 0, 264, -2151),
		OBJECT(MODEL_NONE, 0, 264, -2336, 0, 0, 0, 0x00000000, bhvSpinAirborneWarp),
		OBJECT(MODEL_CAP_SWITCH, 0, 34, 4496, 0, 0, 0, (4 << 16), bhvCapSwitch),
		TERRAIN(yellow_switch_palace_area_1_collision),
		MACRO_OBJECTS(yellow_switch_palace_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_YELLOW_SWITCH_PALACE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 264, -2151),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};