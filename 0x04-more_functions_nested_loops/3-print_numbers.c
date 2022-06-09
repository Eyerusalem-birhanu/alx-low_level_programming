#include "main.h"
/**
 * print_numbers - prints numbers between 0 to 9 incl.
 * Return: void.
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;

	}
	_putchar('\n');

}
