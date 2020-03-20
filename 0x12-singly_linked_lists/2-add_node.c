#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list..
 * @head: the head.
 * @str: a string.
 * Return: starting node in a linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *_strcopy = strdup(str);
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = (char *)_strcopy;
	while (new_node->str[i] != '\0')
		i++;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
