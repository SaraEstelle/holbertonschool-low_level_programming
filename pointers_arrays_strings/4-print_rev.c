#include "main.h"

/**
 * print_rev - function that prints a string in reverse, fllowed by a new line
 * @s : pointer to the string
 * Return : nothing
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
