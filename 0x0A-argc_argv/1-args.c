#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: vector argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%i\n", argc - 1);

return (0);
}
