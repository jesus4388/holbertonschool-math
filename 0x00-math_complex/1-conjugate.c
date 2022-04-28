#include "holberton.h"
#include <stdio.h>
/**
 * conjugate - conjugate
 * @c: estruct
 * Return: c
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
