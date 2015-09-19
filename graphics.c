#include "graphics.h"
#include "video.h"

void drawLine(vec2 a, vec2 b, vbyte c) {
    float slope = ((float)(b.y - a.y)) / ((float)(b.x - a.x));
    float slope2 = ((float)(b.x - a.x)) / ((float)(b.y - a.y));
    int x, y, x1, x2, y1, y2, yx1, xy1;
    if (a.x<b.x) {
        x1=a.x;
        x2=b.x;
        yx1=a.y;
    } else {
        x1=b.x;
        x2=a.x;
        yx1=b.y;
    }
    if (a.y<b.y) {
        y1=a.y;
        y2=b.y;
        xy1=a.x;
    } else {
        y1=b.y;
        y2=a.y;
        xy1=b.x;
    }
    for (x=x1; x<x2; x++) {
        setPixel(x, slope*(x-x1)+yx1, c);
    }
    for (y=y1; y<y2; y++) {
        setPixel(slope2*(y-y1)+xy1, y, c);
    }
}
