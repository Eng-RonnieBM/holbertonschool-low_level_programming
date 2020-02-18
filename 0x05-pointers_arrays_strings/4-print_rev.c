#include "holberton.h"

/**
 * print_rev - prints a string in reverse order.
 * @s: The string
 *
 * Return: returns a string in reverse order.
 */

void print_rev(char *s)
{
int n;
int d;

for (n = 0; s[n] != '\0'; n++)
d++;
for (d = d; d >= 1; d--)
_putchar(s[d]);
_putchar('\n');
}
