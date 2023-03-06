#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer to the memory area to be filled with the constant byte
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to be filled with the constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

