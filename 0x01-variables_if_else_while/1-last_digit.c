#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main  print the last digit of the number stored in the variable n
 * it execute, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
int n,s;

srand(time(0));
	s = rand() - RAND_MAX / 2;
	n = s % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	if (n < 5)
		printf("Last digit of %d is %d and is less than 5\n", n, n);
	if (n == 0)
		printf("Last digit of %d is 0\n", n);
	return (0);
}
