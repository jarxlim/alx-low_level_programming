#include "main.h"
/**
 * _sqrt_helper - Functions that returns sqrt of the number when called
 * @n: The number to return the square root of.
 * @start: param
 * @end: param 2
 * Return: returns the natural sqrt of a number.
 */
int _sqrt_helper(int n, int start, int end)
{
	int square = ((start + end) / 2) * ((start + end) / 2);

	if (start > end)
	{
		return (-1);
	}
	else if (square == n)
	{
		return ((start + end) / 2);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, ((start + end) / 2) + 1, end));
	}
	else
	{
		return (_sqrt_helper(n, start, ((start + end) / 2) - 1));
	}
}

/**
 * _sqrt_recursion - a function that returns the sqrt of a number.
 * @n: the number to return its square root
 *
 * Return: -1 if n<0, 0 if n==0, else return the natural sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}
