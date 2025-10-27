#include "main.h"

/**
 * print_line - function that draws a straight line in thr terminal$
 * @n : number of times the caracter _ should be printed
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
