#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: a string
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	len++;
	_putchar('\n');
	return (len);
}
