#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: firsst parameter
 * @s2: second parameter
 * Return: NULL on failuer
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concat_str = malloc(s1_len + s2_len + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strcpy(concat_str + s1_len, s2);
	return (concat_str);
}
