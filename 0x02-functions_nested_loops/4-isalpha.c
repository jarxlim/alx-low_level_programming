#include "main.h"
/** _isalpha - Entry point
 * description: a function that checks for alphabetic character.
 * return: Returns 1 if c is a letter, lowercase or uppercase, returns 0 if not
 */

int _isalpha(int c)
{
	if (c == 'a' || c == 'A' || c == 'z' || c == 'Z')
	{
		return (1);
	}
	{
		return (0);
	}
}
