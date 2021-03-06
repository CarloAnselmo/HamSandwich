#ifndef LIBEXTRACT_NSIS_H
#define LIBEXTRACT_NSIS_H

#include <vector>
#include <string>
#include <map>
#include <stdio.h>
#include <stdint.h>
#include "common.h"

struct SDL_RWops;

namespace nsis {

class Archive : public sauce::Archive
{
	SDL_RWops* archive_rw;
	size_t datablock_start;

	const char* navigate_nsis(const char* path, Directory*& current);
	bool extract_internal(bool compressed, uint32_t size, std::vector<uint8_t>& result);

public:
	explicit Archive(FILE* fptr);
	~Archive();

	bool is_ok() { return archive_rw != nullptr; }
	SDL_RWops* open_file(const char* path);
};

}  // namespace nsis

#endif  // LIBEXTRACT_NSIS_H
