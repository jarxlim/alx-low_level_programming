#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int i, j, mark = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 20; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
		{
			mark = 1;
			_putchar('1');
		}
		else if (mark == 1)
		{
			_putchar('0');
		}
	}
}
