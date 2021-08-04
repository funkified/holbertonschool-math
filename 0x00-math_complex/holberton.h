#ifndef MATH_H
#define MATH_H

#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

typedef struct math_complex
{
	double re, im;
} complex;

void display_complex_number(complex c);

#endif
