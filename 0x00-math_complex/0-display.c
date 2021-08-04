#include "holberton.h"
#include <complex.h>
/**
 */

void display_complex_number(complex c)
{
	printf("%f + %f\n", creal(c), cimag(c));
}

