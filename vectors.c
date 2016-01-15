#include "vectors.h"
#include "fnum.h"

vec2 vneg2(const vec2 a) {
    register vec2 v;
    v.x=-a.x;
    v.y=-a.y;
    return v;
}

vec2 vsum2(const vec2 a, const vec2 b) {
    register vec2 v;
    v.x=a.x+b.x;
    v.y=a.y+b.y;
    return v;
}

vec2 vdif2(const vec2 a, const vec2 b) {
    register vec2 v;
    v.x=a.x-b.x;
    v.y=a.y-b.y;
    return v;
}

vec2 vmul2(const vec2 a, const vec2 b) {
    register vec2 v;
    v.x=fmult(a.x,b.x);
    v.y=fmult(a.y,b.y);
    return v;
}

vec2 vscl2(const vec2 a, const fnum b) {
    register vec2 v;
    v.x=fmult(a.x,b);
    v.y=fmult(a.y,b);
    return v;
}

vec2 vdiv2(const vec2 a, const vec2 b) {
    register vec2 v;
    v.x=fdiv(a.x,b.x);
    v.y=fdiv(a.y,b.y);
    return v;
}

fnum vdot2(const vec2 a, const vec2 b) {
    return (fmult(a.x,b.x) + fmult(a.y,b.y));
}

vec2 vcro2(const vec2 a, const vec2 b) {
    /*TODO: implement!*/
    const vec2 v = {0,0};
    return v;
}

vec2 vnml2(const vec2 a) {
    register fnum l;
    register vec2 v;
    l = vlen2(a);
    v.x=fdiv(a.x,l);
    v.y=fdiv(a.y,l);
    return v;
}

fnum vlen2(const vec2 a) {
    return fsqrt(fmult(a.x, a.x) + fmult(a.y, a.y));
}

/*-------------------------------------------------------------------*/

vec3 vneg3(const vec3 a) {
    register vec3 v;
    v.x=-a.x;
    v.y=-a.y;
    v.z=-a.z;
    return v;
}

vec3 vsum3(const vec3 a, const vec3 b) {
    register vec3 v;
    v.x=a.x+b.x;
    v.y=a.y+b.y;
    v.z=a.z+b.z;
    return v;
}

vec3 vdif3(const vec3 a, const vec3 b) {
    register vec3 v;
    v.x=a.x-b.x;
    v.y=a.y-b.y;
    v.z=a.z-b.z;
    return v;
}

vec3 vmul3(const vec3 a, const vec3 b) {
    register vec3 v;
    v.x=fmult(a.x,b.x);
    v.y=fmult(a.y,b.y);
    v.z=fmult(a.z,b.z);
    return v;
}

vec3 vdiv3(const vec3 a, const vec3 b) {
    register vec3 v;
    v.x=fdiv(a.x,b.x);
    v.y=fdiv(a.y,b.y);
    v.z=fdiv(a.z,b.z);
    return v;
}

fnum vdot3(const vec3 a, const vec3 b) {
    return (fmult(a.x,b.x) + fmult(a.y,b.y) + fmult(a.z,b.z));
}

vec3 vcro3(const vec3 a, const vec3 b) {
    /*TODO: implement!*/
    const vec3 v = {0,0,0};
    return v;
}

vec3 vnml3(const vec3 a) {
    register fnum l;
    register vec3 v;
    l = vlen3(a);
    v.x=fdiv(a.x,l);
    v.y=fdiv(a.y,l);
    v.z=fdiv(a.z,l);
    return v;
}

fnum vlen3(const vec3 a) {
    return fsqrt(fmult(a.x, a.x) + fmult(a.y, a.y) + fmult(a.z, a.z));
}

/*-------------------------------------------------------------------*/

vec4 vneg4(const vec4 a) {
    register vec4 v;
    v.x=-a.x;
    v.y=-a.y;
    v.z=-a.z;
    v.w=-a.w;
    return v;
}

vec4 vsum4(const vec4 a, const vec4 b) {
    register vec4 v;
    v.x=a.x+b.x;
    v.y=a.y+b.y;
    v.z=a.z+b.z;
    v.w=a.w+b.w;
    return v;
}

vec4 vdif4(const vec4 a, const vec4 b) {
    register vec4 v;
    v.x=a.x-b.x;
    v.y=a.y-b.y;
    v.z=a.z-b.z;
    v.w=a.w-b.w;
    return v;
}

vec4 vmul4(const vec4 a, const vec4 b) {
    register vec4 v;
    v.x=fmult(a.x,b.x);
    v.y=fmult(a.y,b.y);
    v.z=fmult(a.z,b.z);
    v.w=fmult(a.w,b.w);
    return v;
}

vec4 vdiv4(const vec4 a, const vec4 b) {
    register vec4 v;
    v.x=fdiv(a.x,b.x);
    v.y=fdiv(a.y,b.y);
    v.z=fdiv(a.z,b.z);
    v.w=fdiv(a.w,b.w);
    return v;
}

fnum vdot4(const vec4 a, const vec4 b) {
    return (fmult(a.x,b.x) + fmult(a.y,b.y) + fmult(a.z,b.z) + fmult(a.w,b.w));
}

vec4 vcro4(const vec4 a, const vec4 b) {
    /*TODO: implement!*/
    const vec4 v = {0,0,0,0};
    return v;
}

vec4 vnml4(const vec4 a) {
    register fnum l;
    register vec4 v;
    l = vlen4(a);
    v.x=fdiv(a.x,l);
    v.y=fdiv(a.y,l);
    v.z=fdiv(a.z,l);
    v.w=fdiv(a.w,l);
    return v;
}

fnum vlen4(const vec4 a) {
    return fsqrt(fmult(a.x, a.x) + fmult(a.y, a.y) + fmult(a.z, a.z) + fmult(a.w, a.w));
}
