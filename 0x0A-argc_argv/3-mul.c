#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argv: array containing the command-line arguments
 * @argc: number of the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j = j * atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
