#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s : string to be scanned
 * @accept : string containing the accepted characters
 *
 * Return: number f bytes in the initial segment of s
 * chich consist onmy of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;

		count++;
	}

	return (count);
}
