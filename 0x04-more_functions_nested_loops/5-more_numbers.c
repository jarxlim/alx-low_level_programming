#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int y, z;

	for (y = 0; y < 10; y++)
	{
		  for (z = 0; z <= 14; z++)
		  {
			  _putchar(z + '0');
		  }
		  _putchar('\n');
	}
}
