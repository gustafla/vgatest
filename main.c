#include <stdio.h>
#include "video.h"
#include <math.h>
#include "vtypes.h"
#include "graphics.h"
#include "vectors.h"

int main(int argc, char* argv[]) {
    vuint t=0;
    vec2 a, a2;
    vec2 b, b2;
    
    initVideo();
    
    for (;;) {
        a.x=(int)(sin(((float)t)*0.01f)*60.0f+120.0f);
        b.x=(int)(sin(((float)t)*0.01f+3.1f)*60.0f+120.0f);
        a.y=(int)(cos(((float)t)*0.01f)*60.0f+120.0f);
        b.y=(int)(cos(((float)t)*0.01f+3.1f)*60.0f+120.0f);
        drawLine(a, b, 2);
        
        a2.x=(int)(sin(((float)t)*0.01f)*20.0f+80.0f);
        b2.x=(int)(sin(((float)t)*0.01f+3.1f)*20.0f+80.0f);
        a2.y=(int)(cos(((float)t)*0.01f)*20.0f+80.0f);
        b2.y=(int)(cos(((float)t)*0.01f+3.1f)*20.0f+80.0f);
        drawLine(a2, b2, 2);
        
        blitBuffer();
        clearBuffer();
        t++;
    }
    
    blitBuffer();
    sleep(5);
    
    deinitVideo();
    return 0;
}
