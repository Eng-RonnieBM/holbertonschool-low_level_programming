#include "holberton.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first pointer variable.
 * @s2: second pointer variable.
 * Return: comparision of two strings.
 */

int _strcmp(char *s1, char *s2)
{
int i;
int diff;

for (i = 0; s1[i] != '\0' || s2[i] != '\0' ; i++)

{

if (s1[i] != s2[i])
{
diff = s1[i] - s2[i];
break;
}

if (s1[i] == s2[i])
{
diff = 0;
break;
}

}

return (diff);
}
