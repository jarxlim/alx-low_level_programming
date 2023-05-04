#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int a = 63, b;
	int mask = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (a >= 0)
	{
		b = n >> a;
		if (b & 1)
		{
			mask = 1;
			_putchar('1');
		}
		else if (mask == 1)
		{
			_putchar('0');
		}
		a--;
	}
}
