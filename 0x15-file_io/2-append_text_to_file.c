#include "main.h"

/**
 * append_text_to_file - Appends
 * @filename: A pointer to the name of the file.
 * @text_content: The string 
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, sin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (sin = 0; text_content[sin];)
			sin++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, sin);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
