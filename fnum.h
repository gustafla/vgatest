#ifndef FP_H
#define FP_H

/*
 *  Fixed point numbers, 16.16
 */

#define FNUM_N 16

typedef unsigned long int fnum;

fnum float2fnum(float x);
float fnum2float(fnum x);


/* Math */

#define FNUM_PI (fnum)(3.1415f*(1l<<FNUM_N))

fnum fmult(fnum a, fnum b)
fnum fsqrt(fnum a);

#endif
