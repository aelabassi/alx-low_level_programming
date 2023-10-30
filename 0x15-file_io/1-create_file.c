#include "main.h"

/**
 * create_file - create a file with rw-------
 * @filename: file to create
 * @text_content: content to write to the file
 * Return: number of bytes written
*/
int create_file(const char *filename, char *text_content)
{
	int wr, bytes = 0;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[bytes])
			bytes++;
		wr = write(file, text_content, bytes);
		if (wr != bytes)
			return (-1);
	}
	close(file);
	return (1);

}
