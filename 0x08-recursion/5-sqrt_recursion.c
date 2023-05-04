#include "main.h"
/**
 * _sqrt_helper - Functions that returns sqrt of the number when called
 * @number: param
 * @root: param 2
 * Return: returns the natural sqrt of a number.
 */
int _sqrt_helper(int number, int root)
{
	if ((root * root) == number)
	{
		return (root);
	}
	if (root == number / 2)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(number, root + 1));
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
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_helper(n, root));
	}
}
