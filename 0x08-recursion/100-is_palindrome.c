#include "main.h"
#include <string.h>
/**
 * is_palindrome - function returns 1 if string palindrome and 0 if not.
 * @s: string to be checked
 * Return: 1 if palindrome, 0 if its not.
 */
int is_palindrome(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
