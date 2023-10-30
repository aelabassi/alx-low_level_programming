#include "main.h"

/**
* main - copies the content of a file to another file
* @argc: number of arguemnts
* @argv: the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, writeme, ff, ft;
	char *buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((writeme = read(file_from, buffer, BUFSIZ)) > 0)
	{
		if (file_to < 0 || write(file_to, buffer, writeme) != writeme)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
	if (writeme < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ff = close(file_from);
	ft = close(file_to);
	if (ff < 0 || ft < 0)
	{
		if (ff < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (ft < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
