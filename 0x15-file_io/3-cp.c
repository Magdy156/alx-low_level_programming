#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - create a buffer
 * @filename: file name
 * Return: pointer
 */
char *create_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - closes file
 * @f: file to be closed
 */
void close_file(int f)
{
	int c;

	c = close(f);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
 * main - cp program
 * @argc: argument counter
 * @argv: arguments array
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, readf, writef;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readf = read(from, buff, 1024);
	writef = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (readf > 0)
	{
		if (from == -1 || readf == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		writef = write(to, buff, readf);
		if (to == -1 || writef == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		readf = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	close_file(from);
	close_file(to);

return (0);
}
