#include "main.h"
/**
 * str_length - length of a string.
 * @s: string to check the lenght.
 * Return: length of the string.
 */
int str_length(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len = len + str_length(s + len);
	}

	return (len);
}

/**
 * palind_check - checks if a string is a palindrome.
 * @s: string to be checked.
 * @len: length of the string.
 * @i: Index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
 */
int palind_check(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (palind_check(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = str_length(s);

	if (!(*s))
		return (1);

	return (palind_check(s, len, i));
}
