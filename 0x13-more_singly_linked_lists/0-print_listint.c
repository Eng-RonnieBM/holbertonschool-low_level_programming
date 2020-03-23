#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a pointer to the struct.
 * Return: number of elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		_print(h->n);
		_putchar('\n');
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * _print - prints a number using _putchar.
 * @n: number to be printed.
 * Return: void.
 */
void _print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		_print(n / 10);
	_putchar((n % 10) + '0');
}
