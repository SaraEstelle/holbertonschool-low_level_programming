#include "main.h"

/**
 * _islower - writing a function that checks for lowercase characters
 * @c: the character to be checked
 * Return: 1 if c is lowercase and 0 otherise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
