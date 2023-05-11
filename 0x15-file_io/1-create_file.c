#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string to be write
 * Return: 1 (success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int f, bytes = 0, len = strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (len)
		bytes = write(f, text_content, len);
	close(f);
	return (bytes == len ? 1 : -1);
}
