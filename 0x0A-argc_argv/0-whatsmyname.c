#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argv: array containing the command-line arguments
 * @argc: number of the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
