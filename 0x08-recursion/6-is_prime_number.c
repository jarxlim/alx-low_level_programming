#include "main.h"
/**
 * is_divisible - to check whether a number is divisible
 * @number: the number to checked
 * @divider: the divisor to be used
 * Return: 1 if not divisible, 0 if divisible
 */
int is_divisible(int number, int divider)
{
	if (number % divider == 0)
	{
		return (0);
	}
	else if (number % divider != 0)
	{
		return (1);
	}
	return (is_divisible(number, divider + 1));
}

/**
 * is_prime_number - a function thatt checks for prime numbers
 * @n: number to be checkeeed
 * Return: 0 if its a prime, 1 if its not a prime
 */

int is_prime_number(int n)
{
	int divider = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, divider));
}
