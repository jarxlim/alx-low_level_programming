#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size : integer
 * Return: always 0
 */

void print_triangle(int size)
{
	int n = 1, p;

	while (n <= size && size > 0)
	{
		p = 0;
		while (p < size - n)
		{
			_putchar(' ');
			p++;
		}
		p = 0;
		while (p < n)
		{
			_putchar('#');
			p++;
		}

		_putchar('\n');
		n++;
	}
	if (n == 1)
		_putchar('\n');
}
