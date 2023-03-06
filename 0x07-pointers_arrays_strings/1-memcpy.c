#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory area
 * @src: memory source to be copied from
 * @n: bytes from memory area src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
