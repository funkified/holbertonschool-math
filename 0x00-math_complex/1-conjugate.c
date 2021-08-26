#include "holberton.h"

/**
 * conjugate - conjugate a given complex nuber
 * @c: complex number to ve conjugate
 * Return: complex number
 */

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
