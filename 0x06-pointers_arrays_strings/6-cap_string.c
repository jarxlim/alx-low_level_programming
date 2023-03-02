#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * Return: capitalized first words
 */
char *cap_string(char *str)
{
	int i, len;
	int word_start = 1;
	
	for (len = 0; str[len] != '\0'; len++)
	{
		for (i = 0; i < len; i++) 
		{
			if (word_start && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
				word_start = 0;
			}
			else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
			{
				word_start = 1;
			}
		}
	}
	return str;
}

