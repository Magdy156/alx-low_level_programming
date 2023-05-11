#include "main.h"
#include <string.h>
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, bytes, len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(f, text_content, len);
	if (f == -1 || bytes == -1)
		return (-1);
	close(f);
	return (1);
}

