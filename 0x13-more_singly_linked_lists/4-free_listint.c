#include "lists.h"

/**
 * free_listint - it makes free memory to a list_t list.
 * @head: head of the list.
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *copy;
	listint_t *next;

	copy = head;

	while (copy != NULL)
	{
		next = copy->next;
		free(copy->n);
		free(copy);
		copy = next;
	}
}
