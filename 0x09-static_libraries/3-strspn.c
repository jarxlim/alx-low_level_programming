#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: first parameter
 * @accept: second parameter
 * Return: number of bytes 'c' in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		c++;
		s++;
	}
	return (c);
}
