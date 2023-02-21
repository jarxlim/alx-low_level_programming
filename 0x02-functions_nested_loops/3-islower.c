#include "main.h"
/**
 * _islower - checks for alphabetic character.
 * Description: checks is a character is lowercase.
 * @alpha: the value it receives.
 * Return: 1 if true. 0 if false.
 */

int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	{
		return (0);
	}
}
