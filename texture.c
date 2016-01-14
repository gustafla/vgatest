#include "texture.h"
#include "fnum.h"

vbyte textureSample(vec2 p, Texture* texture) {
    register unsigned long int x, y;
    x = fmult(p.x, (texture->w << FNUM_N)) >> FNUM_N;
    y = fmult(p.y, (texture->h << FNUM_N)) >> FNUM_N;
    x %= texture->w;
    y %= texture->h;
    return texture->pixels[x + y*texture->w];
}
