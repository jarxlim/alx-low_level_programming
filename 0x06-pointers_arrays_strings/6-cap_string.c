#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: string to be capitalized
 * Return: capitalized first words
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
        {
		i++;
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}' || i == 0)
			i++;
		str[i] = str[i] - 32;
	}
	return str;
}

