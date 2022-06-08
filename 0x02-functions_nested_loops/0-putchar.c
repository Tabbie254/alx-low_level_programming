/*
 * File: 0-putchar.c
 * Auth: Tabbie Muiso
 *
 */

#include "main.h"

/**
 * main - prints "_putchar" followed by new line
 *
 * Return : 0 always when successful.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i <9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

