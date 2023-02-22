#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: an integer
 */

int print_last_digit(int num)
{
	int last = num % 10;
	_putchar(last);
		return (last);
}
