#include "main.h"
/**
 * main - Prints the sum of all multiples of 3 || 5 up to 1024
 * Return: Always (Success)
 */

int main(void)
{
	int sum = 0;
	int i;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
		_putchar('\n');
		return (0);

}
