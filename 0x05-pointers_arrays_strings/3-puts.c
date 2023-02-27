#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to print
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
		_putchar(str[i]);
	}
		_putchar('\n');
	return (0);
}
