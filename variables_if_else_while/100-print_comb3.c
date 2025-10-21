#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)

	{
		for (b = 0; b < 10; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (!(a == 8 && b == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
