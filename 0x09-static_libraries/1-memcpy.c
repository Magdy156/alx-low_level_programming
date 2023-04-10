#include "main.h"
/**
 * _memcpy -   copies memory area
 * @dest: pointer to the  address of memory to be filled
 * @src: pointer to the  address of memory to be coppied
 * @n: bytes of the memory area
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
