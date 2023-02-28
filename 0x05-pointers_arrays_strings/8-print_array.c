#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * @a: int type array pointer
 * @n: int type integer
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar("%d", a[i]);
		if (i < n - 1)
		{
			_putchar(", ");
		}
	}
	_putchar("\n");
}
