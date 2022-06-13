#include "main.h"

/**
 * swap_int - take two a parameter and swaps the values of two integers
 * @a: pointer
 * @b: pointer
 * Return:0 or 1
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
return;
}
