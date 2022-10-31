#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads and prints file to the POSIX standard output
 *
 * @filename: target file
 * @letters: actual number of letters it would read and print
 * Return: if filename is NULL, else, actual number of letters
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	size_t res;
	char buff[sizeof(filename)];

	if (filename == NULL)
		return (0);

	for (i = 0; filename[i] != '\0'; i++)
		buff[i] = filename[i];

	fd = open(filename, letters);

	if (fd == -1)
		return (0);

	res = read(fd, buff, sizeof(filename));

	return (res);
}
