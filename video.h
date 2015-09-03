#ifndef VIDEO_H
#define VIDEO_H

#include <dos.h>
#include "types.h"

#define V_MODE13_W 320
#define V_MODE13_H 200

struct Video {
    union REGS intRegs;
    byte far* VGA;
    unsigned short offset;
    byte bgColor;
};

void initVideo();
void deinitVideo();
void setVideoMode(unsigned char mode);
void plotPixel(unsigned int x, unsigned int y, unsigned char c);
void setPixel(unsigned int x, unsigned int y, unsigned char c);

#endif
