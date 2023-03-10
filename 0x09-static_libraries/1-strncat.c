#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings using n bytes
 * @dest: first parameter
 * @src: second parameter
 * @n: thirdr parameter
 * Return: a string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

