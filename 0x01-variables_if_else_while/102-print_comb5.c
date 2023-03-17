#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * * Description: main - program prints combination of two two
 * * Return: 0 if success.
 */
int main(void)
{
int i, j;
for (i = 0; i <= 98; i++)
{
	for (j = i + 1; j <= 99; j++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
		if (i != 98 || j != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
