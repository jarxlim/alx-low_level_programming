#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural sqrt of a number.
 * _sqrt_helper - functions that returns sqrt of the number when called
 * @n: The number to return the square root of.
 * @mid: The root to be tested.
 * @start: param
 * @end: param 2
 * Return: returns the natural sqrt of a number.
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}
	int mi;
	int square;

	mi = (start + end) / 2;
	square = mi * mi;

	if (square == n)
	{
		return (mi);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, mi + 1, end));
	}
	else
	{
		return (_sqrt_helper(n, start, mi - 1));
	}
}

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
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}
