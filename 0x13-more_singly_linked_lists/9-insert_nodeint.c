#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: head of the list.
  * @index: index position to insert the node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *copy;
	listint_t *new;

	if (*head == NULL)
		return (NULL);
	copy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = copy;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		copy = copy->next;
		index--;
		if (!copy)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
