/*
 * File: 3-islower.c
 * Auth: Tabbie Mutiso
 */

#include "main.h"

/**
 * _islower -checks is a character is lowercase.
 * @c: checked character
 * Return: 1 if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
