#include "vectors.h"
#include <math.h>

vec2 vneg2(const vec2 a) {
    vec2 v;
    v.x=-a.x;
    v.y=-a.y;
    return v;
}

vec2 vsum2(const vec2 a, const vec2 b) {
    vec2 v;
    v.x=a.x+b.x;
    v.y=a.y+b.y;
    return v;
}

vec2 vdif2(const vec2 a, const vec2 b) {
    vec2 v;
    v.x=a.x-b.x;
    v.y=a.y-b.y;
    return v;
}

vec2 vmul2(const vec2 a, const vec2 b) {
    vec2 v;
    v.x=a.x*b.x;
    v.y=a.y*b.y;
    return v;
}

vec2 vdiv2(const vec2 a, const vec2 b) {
    vec2 v;
    v.x=a.x/b.x;
    v.y=a.y/b.y;
    return v;
}

int  vdot2(const vec2 a, const vec2 b) {
    return (a.x*b.x + a.y*b.y);
}

vec2 vcro2(const vec2 a, const vec2 b) {
    //TODO: implement!
    const vec2 v = {0,0};
    return v;
}

vec2 vnml2(const vec2 a) {
    const int l = vlen2(a);
    vec2 v;
    v.x=a.x/l;
    v.y=a.y/l;
    return v;
}

int  vlen2(const vec2 a) { /*TODO: Fast inverse sqrt*/
    float x, y;
    x=(float)a.x;
    y=(float)a.y;
    return (int)sqrt(x*x + y*y);
}

/*-------------------------------------------------------------------*/

vec3 vneg3(const vec3 a) {
    vec3 v;
    v.x=-a.x;
    v.y=-a.y;
    v.z=-a.z;
    return v;
}

vec3 vsum3(const vec3 a, const vec3 b) {
    vec3 v;
    v.x=a.x+b.x;
    v.y=a.y+b.y;
    v.z=a.z+b.z;
    return v;
}

vec3 vdif3(const vec3 a, const vec3 b) {
    vec3 v;
    v.x=a.x-b.x;
    v.y=a.y-b.y;
    v.z=a.z-b.z;
    return v;
}

vec3 vmul3(const vec3 a, const vec3 b) {
    vec3 v;
    v.x=a.x*b.x;
    v.y=a.y*b.y;
    v.z=a.z*b.z;
    return v;
}

vec3 vdiv3(const vec3 a, const vec3 b) {
    vec3 v;
    v.x=a.x/b.x;
    v.y=a.y/b.y;
    v.z=a.z/b.z;
    return v;
}

int  vdot3(const vec3 a, const vec3 b) {
    return (a.x*b.x + a.y*b.y + a.z*b.z);
}

vec3 vcro3(const vec3 a, const vec3 b) {
    //TODO: implement!
    const vec3 v = {0,0,0};
    return v;
}

vec3 vnml3(const vec3 a) {
    const int l = vlen3(a);
    vec3 v;
    v.x=a.x/l;
    v.y=a.y/l;
    v.z=a.z/l;
    return v;
}

int  vlen3(const vec3 a) { /*TODO: Fast inverse sqrt*/
    float x, y, z;
    x=(float)a.x;
    y=(float)a.y;
    z=(float)a.z;
    return (int)sqrt(x*x + y*y + z*z);
}

/*-------------------------------------------------------------------*/

vec4 vneg4(const vec4 a) {
    vec4 v;
    v.x=-a.x;
    v.y=-a.y;
    v.z=-a.z;
    v.w=-a.w;
    return v;
}

vec4 vsum4(const vec4 a, const vec4 b) {
    vec4 v;
    v.x=a.x+b.x;
    v.y=a.y+b.y;
    v.z=a.z+b.z;
    v.w=a.w+b.w;
    return v;
}

vec4 vdif4(const vec4 a, const vec4 b) {
    vec4 v;
    v.x=a.x-b.x;
    v.y=a.y-b.y;
    v.z=a.z-b.z;
    v.w=a.w-b.w;
    return v;
}

vec4 vmul4(const vec4 a, const vec4 b) {
    vec4 v;
    v.x=a.x*b.x;
    v.y=a.y*b.y;
    v.z=a.z*b.z;
    v.w=a.w*b.w;
    return v;
}

vec4 vdiv4(const vec4 a, const vec4 b) {
    vec4 v;
    v.x=a.x/b.x;
    v.y=a.y/b.y;
    v.z=a.z/b.z;
    v.w=a.w/b.w;
    return v;
}

int  vdot4(const vec4 a, const vec4 b) {
    return (a.x*b.x + a.y*b.y + a.z*b.z + a.w*b.w);
}

vec4 vcro4(const vec4 a, const vec4 b) {
    //TODO: implement!
    const vec4 v = {0,0,0,0};
    return v;
}

vec4 vnml4(const vec4 a) {
    const int l = vlen4(a);
    vec4 v;
    v.x=a.x/l;
    v.y=a.y/l;
    v.z=a.z/l;
    v.w=a.w/l;
    return v;
}

int  vlen4(const vec4 a) { /*TODO: Fast inverse sqrt*/
    float x, y, z, w;
    x=(float)a.x;
    y=(float)a.y;
    z=(float)a.z;
    w=(float)a.w;
    return (int)sqrt(x*x + y*y + z*z + w*w);
}
