#include <stdio.h>

/**
 * main - prints numbers from 0 -9
 *
 * Return:Always0 (if success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
