#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: pointer to the  address of memory to be filled
 * @b: value
 * @n: bytes of the memory area
 * Return:  a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
