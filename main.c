#include <stdio.h>
#include "video.h"
#include <math.h>
#include "vtypes.h"
#include "graphics.h"
#include "vectors.h"
#include "fnum.h"
#include "texture.h"
#include "malloc.h"
#include "string.h"

int main(int argc, char* argv[]) {
    vbyte pixels[] = {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 1, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 1, 1, 0, 0, 0, 
        0, 0, 0, 1, 1, 0, 0, 0,
        0, 0, 0, 1, 1, 0, 0, 0,
        0, 0, 0, 1, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0
    };
    
    long int x, y;
    fnum t;
    Texture testTex;
    vec2 uv;
    vec2 s;
    vec2 sy;
    
    s.x = ((fnum)V_MODE13_W) << FNUM_N;
    s.y = ((fnum)V_MODE13_H) << FNUM_N;
    sy.x = s.y;
    sy.y = s.y;
    
    testTex.w=8;
    testTex.h=8;
    testTex.pixels = malloc(testTex.w*testTex.h*sizeof(vbyte));
    memcpy(testTex.pixels, pixels, testTex.w*testTex.h*sizeof(vbyte));
    
    initVideo();
    
    for(t=0; 1; t+=1l<<FNUM_N) {
        for(y=0; y<V_MODE13_H; y++) {
            for (x=0; x<V_MODE13_W; x++) {
                uv.x = x<<FNUM_N;
                uv.y = y<<FNUM_N;
                uv = vdiv2(vdif2(vscl2(uv, 2l<<FNUM_N), s), sy);
                uv = vscl2(uv, t+(1l<<FNUM_N));
                setPixelUnbuffered(x, y, textureSample(uv, &testTex));
            }
        }
        //blitBuffer();
    }
    
    deinitVideo();
    return 0;
}
