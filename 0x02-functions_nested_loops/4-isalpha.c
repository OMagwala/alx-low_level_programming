#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: character that is checked
 * Return: 1 for an alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
