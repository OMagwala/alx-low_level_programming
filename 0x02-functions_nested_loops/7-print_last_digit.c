#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the number being checked
 * Return: the last digit in a umber
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
