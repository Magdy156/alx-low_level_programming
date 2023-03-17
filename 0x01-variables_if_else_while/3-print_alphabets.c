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
char alpha_upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K'
	, 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

for (int i = 0; i < 26; i++)
	putchar(alpha_lower[i]);
for (int j = 0; j < 26; j++)
	putchar(alpha_upper[j]);
putchar('\n');
return (0);
}
