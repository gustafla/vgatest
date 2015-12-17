#include "fnum.h"

fnum float2fnum(float x) {
    return (fnum)(x*(1l<<FNUM_N) + (x>=0 ? 0.5f : -0.5f));
}

float fnum2float(fnum x) {
    return (float)x/(1l<<FNUM_N);
}

fnum fsqrt(fnum a) { /*Turkowski's algorith*/
    register unsigned long root, remHi, remLo, testDiv, count;
    
    root = 0;
    remHi = 0;                  /*High part of partial remainder*/
    remLo = a;                  /*Low part of partial remainder*/
    count = 15+(FNUM_N >> 1);   /*Loop counter*/
    
    do {
        remHi = (remHi << 2) | (remLo >> 30); remLo <<= 2;
        root <<= 1;
        testDiv = (root << 1) + 1;
        if (remHi >= testDiv) {
            remHi -= testDiv;
            root += 1;
        }
    } while (count-- != 0);
    
    return root; /*Root is 8.8?? TODO*/
}

fnum fmult(fnum a, fnum b) { /*TODO*/
    register fnum ta, tb;
    ta = a>>FNUM_N;
    tb = b>>FNUM_N;
    return 0l;
}
