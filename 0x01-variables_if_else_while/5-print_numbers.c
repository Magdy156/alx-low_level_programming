#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * * Description: main - program prints nums of base ten
 * * Return: 0 if success.
 */
int main(void)
{
int nums_tenBase[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i;
for (i = 0; i < 10; i++)
	printf("%d", nums_tenBase[i]);
putchar('\n');
return (0);
}

