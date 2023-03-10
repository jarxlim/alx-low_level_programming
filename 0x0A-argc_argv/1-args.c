#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argv: array containing the command-line arguments
 * @argc: number of the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
