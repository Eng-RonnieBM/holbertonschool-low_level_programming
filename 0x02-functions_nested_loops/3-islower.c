#include <holberton.h>

/**
 * _islower - check the code for Holberton School students.
 *@c: print int
 * Return: Always 0.
 */

int _islower(int c)
{
int result;
if (c >= 97 && c <= 122)
{
result = 1;
return (result);
}
else
{
result = 0;
return (result);
}
}
