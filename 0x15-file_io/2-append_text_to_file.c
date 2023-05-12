#include "main.h"
/**
 * append_text_to_file - creates a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string to be write
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, bytes, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	f = open(filename, O_WRONLY | O_APPEND);
	bytes = write(f, text_content, len);
	if (f == -1 || bytes == -1)
		return (-1);
	close(f);
	return (1);
}
