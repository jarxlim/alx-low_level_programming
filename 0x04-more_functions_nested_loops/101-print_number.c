#include "main.h"
/**
 * print_number - a function that prints an integer.
 * @n: integer number
 * Return: void
 */

void print_number(int n)
{
	unsigned int t;

	t = n;
	if (n < 0)
	{
		_putchar('-');
		t = -n;
	}
	if (t >= 10)
	{
		print_number(t / 10);
	}
	_putchar(t % 10 + '0');
}
