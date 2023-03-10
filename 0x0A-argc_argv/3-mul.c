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
	int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);
        int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
