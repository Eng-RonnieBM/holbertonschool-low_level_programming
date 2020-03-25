#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: head of the list.
  * @idx: index position to insert the node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i = 0;

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp || (i == idx - 1 || idx == 0))
	{
		new = malloc(sizeof(listint_t));
		if (new)
		{
			new->n = n;
			if (idx == 0)
			{
				new->next = *head;
				*head = new;
			}
			else
			{
				new->next = temp->next;
				temp->next = new;
			}
			return (new);
		}
	}
	return (NULL);
}
