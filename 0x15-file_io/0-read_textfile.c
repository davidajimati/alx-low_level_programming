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
	int fdir;
	ssize_t nr, nw;
	char *buff;

	if (!filename)
		return (0);

	fdir = open(filename, O_RDONLY);

	if (fdir == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nr = read(fdir, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);

	close(fdir);

	free(buff);

	return (nw);
}
