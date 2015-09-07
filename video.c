#include "video.h"
#include "stdlib.h"

static struct Video* video;

void setVideoMode(vbyte mode) {
    video->intRegs.h.ah = 0x00; //mode set
    video->intRegs.h.al = mode;
    int86(0x10, &video->intRegs, &video->intRegs); //execute interrupt
}

void initVideo(void) {
    video = malloc(sizeof(struct Video));
    video->VGA = (vbyte far*)0xA0000000L;
    video->buffer = malloc(V_SCREEN_MEM);
    video->bgColor = 0;
    setVideoMode(0x13); /*320*200*8*/
}

void deinitVideo(void) {
    free(video);
    setVideoMode(0x03); /*text*/
}

void plotPixel(vuint x, vuint y, vbyte c) {
    video->intRegs.h.ah = 0x0C; //Pixel plot
    video->intRegs.h.al = c;
    video->intRegs.x.cx = x;
    video->intRegs.x.dx = y;
    int86(0x10, &video->intRegs, &video->intRegs); //execute interrupt
}

void setPixel(vuint x, vuint y, vbyte c) {
    //offset = V_MODE13_W*y + x;
    video->offset = (y<<8) + (y<<6) + x; //Shifting for speed. (256*y+64*y is same as 320*y)
    buffer[video->offset] = c;
}

void blitBuffer(void) {
    memcpy(VGA, buffer, V_SCREEN_MEM);
}
