#include "main.h"
/**
 * _isalpha - Entry point
 * Description: a function that checks for alphabetic character.
 * @c: the integer value it receives
 * Return: Returns 1 if c is a letter, returns 0 if its not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
