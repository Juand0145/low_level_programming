#include "holberton.h"

/**
 * append_text_to_file - is a function that appends text at the end of a file.
 * @filename: The name of the file were to appned the text.
 * @text_content: The text to appened.
 * Return: if works return 1 if not return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, n_words, write_words;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (n_words = 0; text_content[n_words] != '\0'; n_words++)
			;

		write_words = write(file_descriptor, text_content, n_words);

		if (write_words != n_words)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
