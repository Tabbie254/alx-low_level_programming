#include "main.h"
/**
 * _isdigit - checkif parameter c represents a digit
 * @c: represnts the didit
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
