#include <stdio.h>

/**
 * main -text input
 *
 * Return: always 0 (if success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}

		c++;
	}
	putchar('\n');

	return (0);
}
