#include "main.h"
/**
 * _isdigit -checks for a digit
 * @c:int 
 * Return: 1if digit, 0 otherwise
 */

int _isdigit(int c)
{
	char digit;
	for (digit = '0'; digit <= '9'; digits++)
	{
		if (digit == c)
			return (1);
	}
	return (0);
}
