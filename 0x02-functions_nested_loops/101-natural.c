#include <stdio.h>

/**
 * main - prints sum of multiples of 3 or 5
 * Return: 0 when successful
 */

int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
