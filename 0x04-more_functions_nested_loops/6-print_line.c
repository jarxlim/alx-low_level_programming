#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: ingteger
 * Return: Always 0.
 */

void print_line(int n)
{
	int o = 0;

	while (o < n && n > 0)
	{
		_putchar('_');
		o++;
	}
	_putchar('\n');
}
