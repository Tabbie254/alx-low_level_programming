#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return: Always 0 (if success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
