#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
  unsigned int n1;

  if (n < 0)
  {
    n1 = -n;
    _putchar('-');
  } else
  {
    n1 = n;
  }

  if (n1 / 10)
    print_number(n1 / 10);

  _putchar((n1 % 10) + '0');
}
<<<<<<< HEAD

int _putchar(char c);
{
  return 0;
}
=======
>>>>>>> b26a1c89711310bad3e3bed4eee8b1795f1e1f8d
