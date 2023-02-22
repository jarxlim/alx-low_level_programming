#include "main.h"
/**
 * main - Prints the sum of all multiples of 3 || 5 up to 1024
 * Return: Always (Success)
 */

int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		{
		}
		_putchar('\n');
		return (0);

}
