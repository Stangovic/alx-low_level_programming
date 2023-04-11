#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer 
 * @text_content: create a file
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int a, w, sin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (sin = 0; text_content[sin];)
			sin++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(a, text_content, sin);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}	
