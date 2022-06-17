#include "main.h"

/**
 * print_number - print numbers
 * @n: integer number input
 * Return: nothing
 * */

void print_number(int n)
{
  unsigned int size = n;
  int digits = 0;
  int i;

  if (n < 0)
    size = -n;
  if (n == 0)
    digits = 1;
  while (size >= 1)
  {
    size = size / 10;
    digits++;
  }

  while (i < digits)
  {
    int pow = 1;
    int j;
    int d;

    for (j = 0; j < digits - i - 1; j++)
      pow = pow * 10;

    d = ((n / pow) % 10);
    if (n < 0)
    {
      d = -d;
      if (i == 0)
        _putchar(45);
    }
    _putchar(48 + d);

    i++;
  }
}
