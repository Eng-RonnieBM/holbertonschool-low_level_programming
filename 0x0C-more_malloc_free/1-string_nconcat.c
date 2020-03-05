#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of characters of s2 to be copyed.
 * Return: a pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i;
unsigned int counter1 = 0;
unsigned int counter2 = 1;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

for (i = 0; s1[i] != '\0'; i++)
	counter1++;

for (i = 0; s2[i] != '\0'; i++)
	counter2++;

if (n < counter2)
	p = malloc(counter1 + n + 1);

else
	p = malloc(counter1 + counter2 + 1);

if (p == NULL)
	return (NULL);

for (i = 0; i < counter1; i++)
	p[i] = s1[i];

for (i = 0; i < n; i++)
	p[counter1 + i] = s2[i];

p[counter1 + i] = '\0';

return (p);
}
