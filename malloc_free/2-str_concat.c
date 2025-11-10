#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - function that concatenates two strings
 *@s1: string number 1
 *@s2: string number 2
 *
 * Return: pointer to newly allocated space in memory which contains
 *  the contents of s1,followed by the contents of s2, and null terminated
 * or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
