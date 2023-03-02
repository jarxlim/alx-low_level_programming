#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str: the string that contains the letters to be replaced
 * Return: the encoded words
 */
char *leet(char *str)
{
	int i = 0;
	int b;
	int len = 5;
	char rep_l[] =  {'A', 'E', 'O', 'T', 'L'};
	char rep[] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		b = 0;
		while (b < len)
		{
			if (str[i] == rep_l[b] || str[i] - 32 == rep_l[b])
				str[i] = rep[b];
			b++;
		}
		i++;
	}
	return (str);
}

