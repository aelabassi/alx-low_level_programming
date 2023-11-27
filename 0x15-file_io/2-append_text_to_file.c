#include "main.h"

/**
 * append_text_to_file - append a text to a file
 * @filename: filename to write to
 * @text_content: content to append
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, size = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[size])
			size++;
		w = write(file, text_content, size);
		if (w != size)
			return (-1);
	}
	close(file);
	return (1);
}
