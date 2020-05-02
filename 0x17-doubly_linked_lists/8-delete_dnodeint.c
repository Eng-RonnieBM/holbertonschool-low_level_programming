#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes a node at an index
  * @head: double pointer to the head of the list
  * @index: index of the node to delete
  * Return: value of the node deleted
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *copy_head;

	if (head == NULL || *head == NULL)
		return (-1);
	copy_head = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(copy_head);
		return (1);
	}
	while(index > 1 && copy_head && copy_head->next)
	{
		copy_head = copy_head->next;
		index--;
	}
	if (copy_head->next == NULL)
		return (-1);
	temp = copy_head->next;
	copy_head->next = temp->next ? temp->next : NULL;
	if (temp->next)
		temp->next->prev = copy_head;
	free(temp);
	return (1);
}
