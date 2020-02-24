#include "holberton.h"

/**
 * _strchr - it returns an address of first character match.
 * @s: char pointer variable.
 * @c: char to find.
 *
 * Return: an address.
 */

char *_strchr(char *s, char c)
{
int counter;

for (counter = 0; s[counter] != '\0'; counter++)
{

if (s[counter] == c)
{
return (&s[counter]);
}

}
return ('\0');
}
