#include "main.h"

/**
 * _abs - returns absolute value of an integer
 * @c: computed number
 * Return: return absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
