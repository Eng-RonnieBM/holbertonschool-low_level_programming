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
int Last_digit_of;
int n;
int is;
srand(time(0));
n = rand() - RAND_MAX / 2;
Last_digit_of = n % 10;

if (Last_digit_of > 5)
printf("%d is %d and is greater than 5\n", n, Last_digit_of);
else if (Last_digit_of == 0)
printf("%d is %d and is 0\n", n, Last_digit_of);
else if (Last_digit_of < 6)
printf("%d is %d and is less than 6 and not 0\n", n, Last_digit_of);
return (0);
}
