#include <unistd.h>

/**
 * _putchar - writes the c character
 * @c: the character printed
 * Return: 1 when successful
 * Error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
