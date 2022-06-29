#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes charachter c to stdout
 * @c: print character
 *
 * Return: 1 always
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return(write(1, &c,1));
}
