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

// Read SaveSystem.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveSystem

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, screen, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, frame_count, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, graphics_name, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, message_stretch, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, font_id, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, switches_size, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, switches, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, variables_size, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, variables, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, message_transparent, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, message_position, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, message_prevent_overlap, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, message_continue_events, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, face_name, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, face_id, 0),
	LCF_STRUCT_TYPED_FIELD(bool, face_right, 0),
	LCF_STRUCT_TYPED_FIELD(bool, face_flip, 0),
	LCF_STRUCT_TYPED_FIELD(bool, transparent, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_3d_music_fadeout, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, title_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, battle_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, battle_end_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, inn_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, current_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, before_vehicle_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, before_battle_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, stored_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, boat_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, ship_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, airship_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, gameover_music, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, cursor_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, decision_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, cancel_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, buzzer_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, battle_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, escape_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_attack_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_damaged_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, actor_damaged_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, dodge_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_death_se, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, item_se, 0),
	LCF_STRUCT_TYPED_FIELD(uint8_t, transition_out, 0),
	LCF_STRUCT_TYPED_FIELD(uint8_t, transition_in, 0),
	LCF_STRUCT_TYPED_FIELD(uint8_t, battle_start_fadeout, 0),
	LCF_STRUCT_TYPED_FIELD(uint8_t, battle_start_fadein, 0),
	LCF_STRUCT_TYPED_FIELD(uint8_t, battle_end_fadeout, 0),
	LCF_STRUCT_TYPED_FIELD(uint8_t, battle_end_fadein, 0),
	LCF_STRUCT_TYPED_FIELD(bool, teleport_allowed, 0),
	LCF_STRUCT_TYPED_FIELD(bool, escape_allowed, 0),
	LCF_STRUCT_TYPED_FIELD(bool, save_allowed, 0),
	LCF_STRUCT_TYPED_FIELD(bool, menu_allowed, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, background, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, save_count, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, save_slot, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, atb_mode, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
