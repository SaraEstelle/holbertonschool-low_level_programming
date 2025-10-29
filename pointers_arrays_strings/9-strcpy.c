#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
