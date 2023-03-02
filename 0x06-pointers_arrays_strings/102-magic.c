#include "main.h"
#include "stdio.h"
/*
 * main - Entry point
 *
 * Description: not allowed to use the variable a in your new line of code
 * Return: Always 0
 */

int main(void)
{
	int i;
	int a[];
	int *p;

	a[2] = 1024;
	p = &i;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
