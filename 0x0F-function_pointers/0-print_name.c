#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: name of the person.
 * @f: function passed.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
