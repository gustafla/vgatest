#include <stdio.h>
#include "video.h"
#include <math.h>
#include "vtypes.h"
#include "graphics.h"
#include "vectors.h"

int main(int argc, char* argv[]) {
    vuint x=0;
    vuint y=0;
    vec2 a = {20, 20};
    vec2 b = {80, 80};
    
    initVideo();
    
    setPixel(20, 20, 15);
    blitBuffer();
    sleep(5);
    
    deinitVideo();
    return 0;
}
