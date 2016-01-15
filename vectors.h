#ifndef VECTORS_H
#define VECTORS_H

#include "fnum.h"

typedef struct _vec2 {
    fnum x;
    fnum y;
} vec2;

typedef struct _vec3 {
    fnum x;
    fnum y;
    fnum z;
} vec3;

typedef struct _vec4 {
    fnum x;
    fnum y;
    fnum z;
    fnum w;
} vec4;

vec2 vneg2(vec2 a);
vec2 vsum2(vec2 a, vec2 b);
vec2 vdif2(vec2 a, vec2 b);
vec2 vmul2(vec2 a, vec2 b);
vec2 vscl2(vec2 a, fnum b);
vec2 vdiv2(vec2 a, vec2 b);
fnum vdot2(vec2 a, vec2 b);
vec2 vcro2(vec2 a, vec2 b);
vec2 vnml2(vec2 a);
fnum vlen2(vec2 a);

vec3 vneg3(vec3 a);
vec3 vsum3(vec3 a, vec3 b);
vec3 vdif3(vec3 a, vec3 b);
vec3 vmul3(vec3 a, vec3 b);
vec3 vdiv3(vec3 a, vec3 b);
fnum vdot3(vec3 a, vec3 b);
vec3 vcro3(vec3 a, vec3 b);
vec3 vnml3(vec3 a);
fnum vlen3(vec3 a);

vec4 vneg4(vec4 a);
vec4 vsum4(vec4 a, vec4 b);
vec4 vdif4(vec4 a, vec4 b);
vec4 vmul4(vec4 a, vec4 b);
vec4 vdiv4(vec4 a, vec4 b);
fnum vdot4(vec4 a, vec4 b);
vec4 vcro4(vec4 a, vec4 b);
vec4 vnml4(vec4 a);
fnum vlen4(vec4 a);

#endif
