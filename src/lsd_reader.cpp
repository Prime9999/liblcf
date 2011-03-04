/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "ldb_reader.h"
#include "rpg_save.h"
#include "reader_util.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Load Save
////////////////////////////////////////////////////////////
std::auto_ptr<RPG::Save> LSD_Reader::Load(const std::string& filename) {
	Reader reader(filename, ReaderUtil::GetEncoding());
	if (!reader.IsOk()) {
		Reader::SetError("Couldn't find %s save file.\n", filename.c_str());
		return std::auto_ptr<RPG::Save>(NULL);
	}
	std::string header = reader.ReadString(reader.ReadInt());
	if (header != "LcfSaveData") {
		Reader::SetError("%s is not a valid RPG2000 save.\n", filename.c_str());
		return std::auto_ptr<RPG::Save>(NULL);
	}

	RPG::Save* save = new RPG::Save();
	Struct<RPG::Save>::ReadLcf(*save, reader);
	return std::auto_ptr<RPG::Save>(save);
}

void LSD_Reader::Save(const std::string& filename, const RPG::Save& save) {
	Writer writer(filename, ReaderUtil::GetEncoding());
	if (!writer.IsOk()) {
		Reader::SetError("Couldn't find %s save file.\n", filename.c_str());
		return;
	}
	const std::string header("LcfSaveData");
	writer.WriteInt(header.size());
	writer.WriteString(header);

	Struct<RPG::Save>::WriteLcf(save, writer);
}
