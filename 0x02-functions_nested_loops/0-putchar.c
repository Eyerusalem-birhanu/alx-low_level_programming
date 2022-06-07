#include "main.h"
/**
 * main - entry point
 * description: putchar
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
