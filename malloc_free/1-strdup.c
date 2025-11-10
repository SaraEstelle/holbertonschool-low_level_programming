#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 *@str: string to be diplucated
 *
 * Return: pointer to the duplicated string
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
