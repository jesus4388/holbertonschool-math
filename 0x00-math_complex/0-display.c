#include "holberton.h"
/**
 */
void display_complex_number(complex c)
{
	if (c.re > 0)
	{
		if (c.im > 0 && c.im != 1)
			printf("%g + %gi\n", c.re, c.im);
		else if (c.im < 0 && c.im != -1)
			printf("%g - %gi\n", c.re, c.im);
		else if (c.im == 1)
			printf("%g\n + i", c.re);
		else if (c.im == -1)
			printf("%g\n - i", c.re);
		else
			printf("%g\n", c.re);
	}
	
}
