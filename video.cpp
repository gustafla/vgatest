#include "video.h"

static struct Video* video;

void initVideo() {
    video = new Video;
    video->VGA = (byte far*)0xA0000000L;
    video->bgColor = 0;
}

void deinitVideo() {
    delete video;
}

void setVideoMode(byte mode) {
    video->intRegs.h.ah = 0x00; //mode set
    video->intRegs.h.al = mode;
    int86(0x10, &video->intRegs, &video->intRegs); //execute interrupt
}

void plotPixel(unsigned int x, unsigned int y, byte c) {
    video->intRegs.h.ah = 0x0C; //Pixel plot
    video->intRegs.h.al = c;
    video->intRegs.x.cx = x;
    video->intRegs.x.dx = y;
    int86(0x10, &video->intRegs, &video->intRegs); //execute interrupt
}

void setPixel(unsigned int x, unsigned int y, byte c) {
    //offset = V_MODE13_W*y + x;
    video->offset = (y<<8) + (y<<6) + x; //Shifting for speed. (256*y+64*y is same as 320*y)
    video->VGA[video->offset] = c;
}
