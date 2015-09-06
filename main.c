#include <stdio.h>
#include "video.h"
#include <math.h>
#include "vtypes.h"

int main(int argc, char* argv[]) {
    vuint x=0;
    vuint y=0;
    
    initVideo();
    setVideoMode(0x13); /*320*200*8*/
    
    for (y=0; y<V_MODE13_H; y++) {
        for (x=0; x<V_MODE13_W; x++) {
            setPixel(x, y, 4);
        }
    }
    
    setPixel(20, 20, 15);
    
    sleep(5);
    
    setVideoMode(0x03); /*text*/
    deinitVideo();
    return 0;
}
