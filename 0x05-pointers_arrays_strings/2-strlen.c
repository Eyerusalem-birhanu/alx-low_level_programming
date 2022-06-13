#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s : number of _ to be printed
 * Return:void
 */

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
