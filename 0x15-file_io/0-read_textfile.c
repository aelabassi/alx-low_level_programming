#include "main.h"
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: pointer to const char
 * @letters: number of letters
 * Return: number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int re, wr;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	re = read(file, buffer, letters);
	if (re < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[re] = '\0';
	close(file);

	wr = write(STDOUT_FILENO, buffer, re);
	if (wr < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (wr);
}
