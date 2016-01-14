#ifndef TEXTURE_H
#define TEXTURE_H

#include "vtypes.h"
#include "vectors.h"

typedef struct _Texture {
    unsigned long int w;
    unsigned long int h;
    vbyte* pixels;
} Texture;

vbyte textureSample(vec2 p, Texture* texture);

#endif
