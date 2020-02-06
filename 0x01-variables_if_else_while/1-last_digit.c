#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "Last digit of";
int n;
int is;
srand(time(0));
n = rand() - RAND_MAX / 2;
is = n % 10;

if (Last_digit_of > 5)
printf("%s %d is %d and is greater than 5\n", str, n, is);
else if (Last_digit_of == 0)
printf("%s %d is %d and is 0\n", str, n, is);
else if (Last_digit_of < 6)
printf("%s %d and is less than 6 and not 0\n", str, n, is);
return (0);
}
