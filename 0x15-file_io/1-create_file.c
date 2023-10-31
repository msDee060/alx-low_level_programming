#include "main.h"

/**
  * create_file - function that creates a file.
  * @filename: name of the file to create and text_content is
  * a NULL terminated string to write to the file
  * @text_content: is a null terminated string.
  * Return: 1 on success, -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int n_letters, wr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;
	wr = write(file_d, text_content, n_letters);

	if (wr == -1)
		return (-1);
	close(file_d);

	return (1);
}
