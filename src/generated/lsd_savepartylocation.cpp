/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SavePartyLocation.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SavePartyLocation

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(bool, active, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, map_id, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, position_x, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, position_y, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, direction, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_direction, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_frame, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, transparency, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, remaining_step, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_frequency, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, layer, 0),
	LCF_STRUCT_TYPED_FIELD(bool, overlap_forbidden, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_type, 0),
	LCF_STRUCT_TYPED_FIELD(bool, lock_facing, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_speed, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::MoveRoute, move_route, 0),
	LCF_STRUCT_TYPED_FIELD(bool, move_route_overwrite, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_route_index, 0),
	LCF_STRUCT_TYPED_FIELD(bool, move_route_repeated, 0),
	LCF_STRUCT_TYPED_FIELD(bool, sprite_transparent, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_2f_overlap, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_paused, 0),
	LCF_STRUCT_TYPED_FIELD(bool, through, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, stop_count, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_count, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, max_stop_count, 0),
	LCF_STRUCT_TYPED_FIELD(bool, jumping, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, begin_jump_x, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, begin_jump_y, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_47_pause, 0),
	LCF_STRUCT_TYPED_FIELD(bool, flying, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, sprite_name, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_id, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_4b_sprite_move, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_red, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_green, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_blue, 0),
	LCF_STRUCT_TYPED_FIELD(double, flash_current_level, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_time_left, 0),
	LCF_STRUCT_TYPED_FIELD(bool, boarding, 0),
	LCF_STRUCT_TYPED_FIELD(bool, aboard, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, vehicle, 0),
	LCF_STRUCT_TYPED_FIELD(bool, unboarding, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, preboard_move_speed, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_6c_menu_calling, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_state, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_current_x, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_current_y, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_finish_x, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_finish_y, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_speed, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, encounter_steps, 0),
	LCF_STRUCT_TYPED_FIELD(bool, unknown_7d_encounter_calling, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, map_save_count, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, database_save_count, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
