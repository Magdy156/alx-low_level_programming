#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * * Description: main - program prints combination of two two
 * * Return: 0 if success.
 */
int main(void)
{
int i, j, k, l;
for (i = '0'; i <= '9'; i++)
{
	for (j = '0'; j <= '8'; j++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(k);
				putchar(l);
				if (i != '9' || j != '8' || k != '9' || l != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
