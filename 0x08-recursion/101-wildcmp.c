#include "main.h"
/**
 * len_only - Returns the length of a sing without wildcards.
 * @s: The string to be used
 *
 * Return: length of sing
 */
int len_only(char *s)
{
	int len = 0, i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			len++;

		i++;
		len = len + len_only(s + i);
	}

	return (len);
}

/**
 * locate_wildcmp - loops through every wildcard character in a string
 * until it points to a non-wildcard character.
 * @str: The string to be looped.
 */
void locate_wildcmp(char **str)
{
	if (**str == '*')
	{
		(*str)++;
		locate_wildcmp(str);
	}
}

/**
 * check_match - Checks if a sing str matches the postfix of
 *                 another sing potentially containing wildcards.
 * @s: The string to be matched.
 * @postfix: The postfix.
 *
 * Return: If s and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
 */
char *check_match(char *s, char *postfix)
{
	int s_len = len_only(s) - 1;
	int postfix_len = len_only(postfix) - 1;

	if (*postfix == '*')
		locate_wildcmp(&postfix);

	if (*(s + s_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (check_match(s, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Compares two sings, considering wildcard characters.
 * @s1: The first sing to be compared.
 * @s2: The second sing to be compared - may contain wildcards.
 *
 * Return: If the sings can be considered identical - 1.
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		locate_wildcmp(&s2);
		s2 = check_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
