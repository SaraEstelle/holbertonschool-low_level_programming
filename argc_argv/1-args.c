#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: arrays content the past arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d,n", argc - 1);
	return (0);
}
