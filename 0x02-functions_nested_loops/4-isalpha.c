/*
 * File: 4-isalpha.c
 * Auth:Tabbie Mutiso
 */

#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: checked character
 *
 * Return: 1 if char is .etter else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
