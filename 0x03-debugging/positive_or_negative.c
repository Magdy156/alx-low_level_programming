#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * * positive_or_negative - program that states whether the number is +ve or -ve
 * * Return: 0 if success.
 */
void  positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
}
