#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	long factor = 2;
	long largest_prime = 0;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			number = number / factor;
			largest_prime = factor;
		}
		factor++;
	}
	printf("%ld\n", largest_prime);
	return (0);
}
