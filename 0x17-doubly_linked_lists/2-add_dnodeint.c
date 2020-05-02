#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: head of node.
 * @n: data to be added.
 *
 * Return: address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	*head = new;
	new->n = n;
	new->prev = NULL;
	if (aux == NULL)
		new->next = NULL;
	else
	{
		new->next = aux;
		aux->prev = *head;
		aux = NULL;
	}
	return (*head);
}
