#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - craetes a file
 *
 * @filename: name of new file
 * @text_content: content of filename
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC, O_WRONLY);

	if (fd != -1)
	{
		write(fd, text_content, sizeof(text_content));
		return (1);
	}
	return (-1);
}
