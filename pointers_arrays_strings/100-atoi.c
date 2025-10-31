#include "main.h"
#include <limits.h>

/**
 * _atoi - Convertit une chaîne de caractères en entier
 * @s: La chaîne à convertir
 *
 * Return: L'entier converti, ou 0 si aucun chiffre trouvé
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;
	int started = 0;
	int digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !started)
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';

			if (num > (unsigned int)INT_MAX / 10 ||
				(num == (unsigned int)INT_MAX / 10 &&
				 (unsigned int)digit > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			num = num * 10 + digit;
		}
		else if (started)
		{
			break;
		}

		i++;
	}
	if (!started)
		return (0);

	return ((int)(num * sign));
}
