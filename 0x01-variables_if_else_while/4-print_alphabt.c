#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * * Description: main - program prints alphabet
 * * Return: 0 if success.
 */
int main(void)
{
char alpha_lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'
	, 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int i;
for (i = 0; i < 26; i++)
{
	if (alpha_lower[i] != 'q' && alpha_lower[i] != 'e')
	putchar(alpha_lower[i]);
}
putchar('\n');
return (0);
}
