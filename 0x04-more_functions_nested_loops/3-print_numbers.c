#include "holberton.h"
int _putchar(char c);

/**
 * print_numbers - prints numbers from 0 to 9 then a jump-line.
 *
 * Return: numbers from 0 to 9.
 */
void print_numbers(void)
{
int i;

for (i = 48 ; i <= 57; i++)
_putchar(i);
_putchar('\n');
}
