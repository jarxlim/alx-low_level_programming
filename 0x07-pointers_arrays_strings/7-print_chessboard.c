#include "main.h"
/**
 * print_chessboard -  a function that prints the chessboard.
 * @a: the paramaeter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar("\n");
	}
}
