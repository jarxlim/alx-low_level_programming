#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	if (s == NULL)
	{
		return;
	}
	int len = strlen(s);
	
	for (int i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

