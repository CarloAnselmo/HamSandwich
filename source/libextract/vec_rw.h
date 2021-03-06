#ifndef LIBEXTRACT_VEC_RW_H
#define LIBEXTRACT_VEC_RW_H

#include <vector>
#include <stdint.h>

struct SDL_RWops;

// Create an SDL_RWops from an owned byte buffer. It will be freed when closed.
SDL_RWops* create_vec_rwops(std::vector<uint8_t>&& buffer);

#endif  // LIBEXTRACT_VEC_RW_H
