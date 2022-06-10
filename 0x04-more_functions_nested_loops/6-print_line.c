#include "main.h"

/**
 * print_line - function with one int type argument
 * @n: first argument
 *
 * Description: while loop to draw a straight line
 * Return: na
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
