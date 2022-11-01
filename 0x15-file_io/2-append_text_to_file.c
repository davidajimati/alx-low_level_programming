#include "main.h"

/**
 * append_text_to_file - program appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdir;
	int n_letters;
	int rwr;

	if (!filename)
		return (-1);

	fdir = open(filename, O_WRONLY | O_APPEND);

	if (fdir == -1)
		return (-1);

	if (text_content)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;

		rwr = write(fdir, text_content, n_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fdir);

	return (1);
}
