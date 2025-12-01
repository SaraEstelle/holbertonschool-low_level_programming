#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @h: Pointer to the list_t list to print
 *
 * Return: The number of the nodes or nil if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
