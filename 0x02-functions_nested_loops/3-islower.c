#include "main.h"

/**
 * _islower - checks lowercase characters
 * @c: character being checked
 * Return: 1 for lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
