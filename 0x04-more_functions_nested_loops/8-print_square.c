#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: value
 * Return: Always 0.
 */
void print_square(int size)
{
	int k = 0, h;

	while (k < size && size > 0)
	{
		h = 0;
		while (h < size)
		{
			_putchar('#');
			h++;
		}
		_putchar('\n');
		k++;
	}
	if (k == 0)
		_putchar('\n');
}
