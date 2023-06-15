#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - func that prints passwords for the crackme5 executable.
 * @argc: number of arguments inputed
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passwords[7], *co;
	int length = strlen(argv[1]), index, temp;

	co = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (length ^ 59) & 63;
	passwords[0] = co[temp];

	temp = 0;
	for (index = 0; index < length; index++)
		temp += argv[1][index];
	passwords[1] = co[(temp ^ 79) & 63];

	temp = 1;
	for (index = 0; index < length; index++)
		temp *= argv[1][index];
	passwords[2] = co[(temp ^ 85) & 63];

	temp = 0;
	for (index = 0; index < length; index++)
	{
		if (argv[1][index] > temp)
			temp = argv[1][index];
	}
	srand(temp ^ 14);
	passwords[3] = co[rand() & 63];

	temp = 0;
	for (index = 0; index < length; index++)
		temp += (argv[1][index] * argv[1][index]);
	passwords[4] = co[(temp ^ 239) & 63];

	for (index = 0; index < argv[1][0]; index++)
		temp = rand();
	passwords[5] = co[(temp ^ 229) & 63];

	passwords[6] = '\0';
	printf("%s", passwords);
	return (0);
}
