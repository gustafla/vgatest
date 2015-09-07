#ifndef VIDEO_H
#define VIDEO_H

#include <dos.h>
#include "vtypes.h"

#define V_MODE13_W 320
#define V_MODE13_H 200
#define V_SCREEN_MEM 320*200*1

struct Video {
    union REGS intRegs;
    vbyte far* VGA;
    vbyte* buffer;
    unsigned short offset;
    vbyte bgColor;
};

void initVideo(void);
void deinitVideo(void);
//void setVideoMode(vbyte mode);
void plotPixel(vuint x, vuint y, vbyte c);
void setPixel(vuint x, vuint y, vbyte c);

void blitBuffer(void);

#endif
