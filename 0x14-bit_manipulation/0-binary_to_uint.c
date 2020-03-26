#include "holberton.h"

/**
 * _pow - "a" power to the "b" number.
 * @a: base number.
 * @b: power of the base number.
 * Return: power of a number.
 */

unsigned int _pow(unsigned int a, unsigned b)
{
	unsigned int result = 1;
	if (b == 0)
		return (1);
	while (b > 0)
	{
		result = result * a;
		b--;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string.
 * Return: decimal conversion.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int power = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[i + 1] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
			i++;
		else
			return (sum);
	}
	while (i >= 0)
	{
		sum = sum + (((unsigned int)b[i] - 48) * _pow(2, power));
		power++;
		i--;
	}
return (sum);
}
