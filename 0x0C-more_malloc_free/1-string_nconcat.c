#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of characters of s2 to be copyed.
 * Return: a pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

int i, counter;
char *ptr;

if (s1 == NULL)
	return (NULL);

if (s2 == NULL)
	return (NULL);

if (sizeof(s2) > n)
	counter = n;

else if (n >= sizeof(s2))
	counter = sizeof(s2);

ptr = malloc(strlen(s1) + counter);

if (ptr == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	ptr[i] = s1[i];

for (i = 0; i != counter; i++)
	ptr[i + strlen(s1)] = s2[i];

return (ptr);
}
