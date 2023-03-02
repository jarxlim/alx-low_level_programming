#include "main.h"
#include "string.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: first parameter
 * @s2: second parameter
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int comp;

	comp = strcmp(s1, s2);
	return (comp);
}
