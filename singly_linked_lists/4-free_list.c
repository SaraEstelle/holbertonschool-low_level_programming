#include "lists.h"
/**
 * free_list - function that frees a linked list_t list
 * @head: pointer to the list_t list to be freed
 *
 * Return: nothing (void)
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
