#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of characters of s2 to be copyed.
 *
 * Return: a pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, counter;
char *ptr;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

if (n >= strlen(s2))
	counter = strlen(s2);
else
	counter = n;

ptr = malloc(strlen(s1) + counter + 1);

if (ptr == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	ptr[i] = s1[i];

for (i = 0; i < counter; i++)
	ptr[i + strlen(s1)] = s2[i];

ptr[i + strlen(s1) + 1] = '\0';
return (ptr);
}
