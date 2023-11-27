#include "main.h"

/**
 * create_file - create a file with rw------- permissions
 * @filename: filename, a pointer ro const char
 * @text_content: content to write
 * Return: 1 on sccess, and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	int w;
	int size = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[size])
		{
			size++;
		}
		w = write(file, text_content, size);
		if (w != size)
			return (-1);
	}
	close(file);
	return (1);
}
