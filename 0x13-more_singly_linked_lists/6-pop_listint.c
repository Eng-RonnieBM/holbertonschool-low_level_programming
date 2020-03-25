#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: head of the list.
  * Return: returns the head node’s data (n).
  */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *copy;
	listint_t *temp;

	if (head == NULL)
		return (0);
	if (copy == NULL)
		return (0);
	if (temp == NULL)
		return (0);
	temp = *head;
	copy = *head;
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
