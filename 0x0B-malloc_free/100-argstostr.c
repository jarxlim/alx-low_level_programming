#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer specifying number of arguements
 * @av: array of strings
 * Return: a pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	int total_length;
	int pos;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	result = (char *) malloc(sizeof(char) * total_length);
	if (result == NULL)
	{
		return (NULL);
	}

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + pos, av[i]);
		pos = pos + strlen(av[i]);
		result[pos++] = '\n';
	}
	result[pos] = '\0';
}
