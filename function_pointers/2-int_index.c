#include "function_pointers.h"
/**
 * int_index - function that ssearches for an integer
 * @size: number of elements in the arrays
 * @cmp: pointer ti the function used to compare
 * @array: an array of integer
 *
 *Return: index of the 1st element for which the cmp function does not return 0
 *or , -1 if no elements matches of if size < = 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
