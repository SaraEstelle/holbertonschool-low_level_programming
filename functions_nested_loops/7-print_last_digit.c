#include "main.h"

/**
 * print_last_digit - function that prints the last digit of number
 * @r: the number that we wont to get the last digit form
 *
 * Return: the value of the last digit
 */

int print_last_digit(int r)
{
	int last_digit = 0;
	last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0' + last_digit);

	return (last_digit);
}
