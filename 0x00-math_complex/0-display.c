#include "holberton.h"

/**
 * display_complex_number - displayc complex number
 * @c: complex
 */

void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
	{
		;
	}
	else if (c.im == 1)
	{
		if (c.re != 0)
			printf("%.0f + i\n", c.re);
		else
			printf("i\n");
	}
	else if (c.im == -1)
	{
		if (c.re != 0)
			printf("%.0f - i\n", c.re);
		else
			printf("-i\n");
	}
	else if (c.im == 0 && c.re != 0)
		printf("%.0f\n", c.re);
	else if (c.re == 0 && c.im != 0)
		printf("%.0fi\n", c.im);
	else if (c.im < 0)
		printf("%.0f - %.0fi\n", c.re, c.im * -1);
	else
		printf("%.0f + %.0fi\n", c.re, c.im);
}
