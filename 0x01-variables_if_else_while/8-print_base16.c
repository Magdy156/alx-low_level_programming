#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * * Description: main - program prints nums of base sixteen
 * * Return: 0 if success.
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
	putchar(i);
for (i = 'a'; i <= 'f'; i++)
	putchar(i);
putchar('\n');
return (0);
}
