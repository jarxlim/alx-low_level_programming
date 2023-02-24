#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size : integer
 * Return: always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
