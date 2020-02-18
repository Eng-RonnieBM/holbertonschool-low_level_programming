#include "holberton.h"

/**
 * _puts - prints a string.
 * @str: The string
 *
 * Return: returns a string.
 */

void _puts(char *str)
{
int n;
for(str[n]; str[n] != '\0'; n++)
printf("%c", str[n]);
}
