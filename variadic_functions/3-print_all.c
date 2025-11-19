#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0, j, printed = 0;
	char *str;
	const char types[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j])
			{
				if (printed)
					printf(", ");
				switch (format[i])
				{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("(nil)");
					}
					else
					{
						printf("%s", str);
					}
					break;
				}
				printed = 1;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
