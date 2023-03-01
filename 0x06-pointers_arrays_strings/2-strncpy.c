#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that copies a string.
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
