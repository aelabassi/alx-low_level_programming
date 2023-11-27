#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: pointer to a const a char
 * @letters: size_t
 * Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int r;
	int file;
	ssize_t w;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(letters));
	if (!buffer)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		free(buffer);
		return (0);
	}
	r = read(file, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';
	close(file);
	w = write(STDOUT_FILENO, buffer, r);
	if (w < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (w);

}
