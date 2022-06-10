#include "main.h"

/**
 * print_number - prints an integer
 * @n: param
 */
void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
