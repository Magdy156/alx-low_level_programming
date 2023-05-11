#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: ptr to file to be read
 * @letters:  actual number of letters it could read and print
 * Return: num of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t no_bytes;
	int f;
	char buff[1024 * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	no_bytes = read(f, &buff[0], letters);
	no_bytes = write(STDOUT_FILENO, &buff[0], no_bytes);
	close(f);
	return (no_bytes);
}
