#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename to write to
 * @text_content: content to append
 * Return: number appended bytes
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int writeme, bytes = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[bytes])
			bytes++;
		writeme = write(file, text_content, bytes);
		if (writeme != bytes)
			return (-1);
	}
	close(file);
	return (1);

}
