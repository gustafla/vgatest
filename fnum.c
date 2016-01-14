#include "fnum.h"

fnum float2fnum(float a) {
    return (fnum)(a*(1l<<FNUM_N) + (a>=0 ? 0.5f : -0.5f));
}

float fnum2float(fnum a) {
    return (float)a/(1l<<FNUM_N);
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
    
    return root;
}

fnum fmult(fnum a, fnum b) { /*TODO*/
    /*register fnum sourceMask, a8, b8;
    
    unsigned long int sourceMask = 0x00FFFF00;
    a8 = a&sourceMask >> 8;
    b8 = b&sourceMask >> 8;*/
    
    return (a>>8)*(b>>8);
}

fnum fdiv(fnum a, fnum b) {
    return ((a << 6) / (b >> 6)) << 4;
}
