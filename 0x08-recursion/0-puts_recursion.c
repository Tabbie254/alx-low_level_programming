#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer block of memory to fill
 * Reurn: void
 */
void _puts_recursion(chr *s)
{
	if (*s == '\0')
	{
		_putschar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
