#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */

void more_numbers(void)
{
		char y, z;
	int i = 0;

	while (i < 10)
	{
		for (y = 0; y <= 14; y++)
		{
			z = y;
			if (y > 9)
			{
				_putchar('1');
				z = y % 10;
			}
			_putchar('0' + z);
		}

		_putchar('\n');
		i++;
	}
}
