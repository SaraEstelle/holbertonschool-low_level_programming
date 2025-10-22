#include <stdio.h>

/**
 * main - Prints all possible different combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			/* print first number (two digits) */
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			/* print second number (two digits)*/
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			/* print separator unless last combination */
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
