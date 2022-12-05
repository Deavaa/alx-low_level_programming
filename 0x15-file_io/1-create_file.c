#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (!filename)
	{
		return (-1);
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (i < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[k])
		{
			i++;
		}
		j = write(i, text_content, k);
		if (j != k)
		{			
			return (-1);
		}
	}
	close(i);
	return (1);
}
