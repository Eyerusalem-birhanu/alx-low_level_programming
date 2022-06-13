#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str : to be printed
 * Return:void
 */

void puts2(char *str)
{
int l, i;
l = strlen(str);
for (i = 0; i < l ; i++)
{
if (i % 2 == 0)
{
_putchar(*str);
}
str++;
}
_putchar('\n');
}
