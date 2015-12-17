#include "video.h"
#include <stdlib.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>
#include <malloc.h>

static struct Video* video;

void setVideoMode(vbyte mode) {
    video->intRegs.h.ah = 0x00; /*mode set*/
    video->intRegs.h.al = mode;
    int86(0x10, &video->intRegs, &video->intRegs); /*execute interrupt*/
}

void clearBuffer(void) {
    _fmemset(video->buffer, video->bgColor, V_SCREEN_MEM);
}

void initVideo(void) {
    video = malloc(sizeof(struct Video));
    if (video==NULL) {
        printf("Out of near memory.\n");
        exit(1);
    }
    video->VGA = (vbyte far*)0xA0000000L;
    video->buffer = _fmalloc(V_SCREEN_MEM);
    if (video->buffer==NULL) {
        printf("Out of memory when allocating buffer, get a better PC u nub!\n");
        exit(1);
    }
    video->bgColor = 0;
    clearBuffer();
    setVideoMode(0x13); /*320*200*8*/
}

void deinitVideo(void) {
    free(video);
    setVideoMode(0x03); /*text*/
}

void plotPixel(vuint x, vuint y, vbyte c) {
    video->intRegs.h.ah = 0x0C; /*Pixel plot*/
    video->intRegs.h.al = c;
    video->intRegs.x.cx = x;
    video->intRegs.x.dx = y;
    int86(0x10, &video->intRegs, &video->intRegs); /*execute interrupt*/
}

void plotPixelVec(vec2 p, vbyte c) {
    video->intRegs.h.ah = 0x0C; /*Pixel plot*/
    video->intRegs.h.al = c;
    video->intRegs.x.cx = p.x;
    video->intRegs.x.dx = p.y;
    int86(0x10, &video->intRegs, &video->intRegs); /*execute interrupt*/
}

void setPixel(vuint x, vuint y, vbyte c) {
    vuint offset = (y<<8) + (y<<6) + x; /*Shifting for speed. (256*y+64*y is same as 320*y)*/
    video->buffer[offset] = c;
}

void setPixelVec(vec2 p, vbyte c) {
    vuint offset = (p.y<<8) + (p.y<<6) + p.x; /*Shifting for speed. (256*y+64*y is same as 320*y)*/
    video->buffer[offset] = c;
}

void blitBuffer(void) {
    _fmemcpy(video->VGA, video->buffer, V_SCREEN_MEM);
}
