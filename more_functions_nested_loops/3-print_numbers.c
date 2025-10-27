#include "main.h"
/**
 * print_numbers - functions thats prints the numbers, from 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
}
