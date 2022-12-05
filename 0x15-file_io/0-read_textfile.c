#include "main.h"

/**
 * ssize - read and print file
 * filename: file name
 * letters: no. of letters
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, k;
	char *buf;

	if (!filename)
	{
		return (0);
	}
	i = open(filename, O_RDONLY);
	if (i < 0)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}
	j = read(i, buf, letters);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	buf[j] = '\0';
	close(i);
	k = write(STDOUT_FILENO, buf, j);
	if (k < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return(y);
}
