#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the area copied
 * @src: pointer to source area
 * @n:number of byte to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
