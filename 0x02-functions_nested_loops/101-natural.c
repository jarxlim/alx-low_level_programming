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

			if (sum == 0)
			{
				_putchar('0');
			}
			else
			{
				int digits[10];
				int num_digits = 0;

				while (sum > 0)
				{
					digits[num_digits] = sum % 10;
					sum /= 10;
					num_digits++;
				}
				for (int i = num_digits - 1; i >= 0; i--)
				{
					_putchar(digits[i] + '0');
				}
			}

			_putchar('\n');

			return (0);
}
