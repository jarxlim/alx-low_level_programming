#include "main.h"
#include "string.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed
 * Return: uppercase letters
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		i++;
	}
	return (str);
}
