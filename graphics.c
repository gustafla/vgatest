#include "graphics.h"
#include "video.h"

void drawLine(vec2 a, vec2 b, vbyte c) {
    float slope = ((float)(b.y - a.y)) / ((float)(b.x - a.x));
    int x, x1, x2, y1;
    if (a.x<b.x) {
        x1=a.x;
        x2=b.x;
        y1=a.y;
    } else {
        x1=b.x;
        x2=a.x;
        y1=b.y;
    }
    for (x=x1; x<x2; x++) {
        setPixel(x, slope*(x-x1)+y1, 4);
    }
}
