#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string param
 * @s2: second string param
 * @n: integer to be used
 * Return: return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	char *result = (char *) malloc(s1_len + n + 1);

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
