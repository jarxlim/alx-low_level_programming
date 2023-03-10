#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers.
 * @argv: array containing the command-line arguments
 * @argc: number of the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j; 
	int len;
	int sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum = sum + atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
