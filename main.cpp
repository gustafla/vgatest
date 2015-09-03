#include <iostream>
#include <video.h>
#include <math.h>
#include "types.h"

int main(int argc, char* argv[]) {
    initVideo();
    setVideoMode(0x13); //320*200*8
    
    //for(int t=0; t<1000; t++) {
        for (uint y=0; y<V_MODE13_H; y++) {
            for (uint x=0; x<V_MODE13_W; x++) {
                setPixel(x, y, 4);
            }
        }
    //}
    
    setPixel(20, 20, 15);
    
    sleep(5);
    
    setVideoMode(0x03); //text
    deinitVideo();
    return 0;
}
