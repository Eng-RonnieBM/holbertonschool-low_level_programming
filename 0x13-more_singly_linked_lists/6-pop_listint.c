include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: head of the list.
  * Return: returns the head node’s data (n).
  */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *copy, *temp;

	if (head == NULL)
		return (0);
	tmp = copy = *head;
	if (*head)
	{
		i = copy->n;
		*head = copy->next;
		free(temp);
	}
	else
	i = 0;
	return (i);
}
