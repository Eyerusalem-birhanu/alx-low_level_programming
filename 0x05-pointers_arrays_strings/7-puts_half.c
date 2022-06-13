#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str : to be printed
 * Return:void
 */

void puts_half(char *str)
{
int l, i, n;
l = strlen(str);
n = (l - 1) / 2;
for (i = 0; i < l ; i++)
{
if (i > n)
{
_putchar(*str);
}
str++;
}
_putchar('\n');
}
