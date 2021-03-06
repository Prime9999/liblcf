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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Actor.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Actor

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, title, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, character_name, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, character_index, 0),
	LCF_STRUCT_TYPED_FIELD(bool, transparent, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, initial_level, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, final_level, 0),
	LCF_STRUCT_TYPED_FIELD(bool, critical_hit, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, critical_hit_chance, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, face_name, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, face_index, 0),
	LCF_STRUCT_TYPED_FIELD(bool, two_weapon, 0),
	LCF_STRUCT_TYPED_FIELD(bool, lock_equipment, 0),
	LCF_STRUCT_TYPED_FIELD(bool, auto_battle, 0),
	LCF_STRUCT_TYPED_FIELD(bool, super_guard, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Parameters, parameters, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, exp_base, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, exp_inflation, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, exp_correction, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Equipment, initial_equipment, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, unarmed_animation, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, class_id, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_x, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_y, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, battler_animation, 1),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Learning>, skills, 0),
	LCF_STRUCT_TYPED_FIELD(bool, rename_skill, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_name, 0),
	LCF_STRUCT_SIZE_FIELD(uint8_t, state_ranks, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, state_ranks, 0),
	LCF_STRUCT_SIZE_FIELD(uint8_t, attribute_ranks, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, attribute_ranks, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int32_t>, battle_commands, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
