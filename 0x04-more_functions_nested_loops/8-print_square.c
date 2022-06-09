#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of squar to be printed
 * Return: Void
 */

void print_square(int n)
{
	int i = 0, ii;
	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
