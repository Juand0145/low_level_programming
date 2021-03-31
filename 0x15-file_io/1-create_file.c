#include "holberton.h"

/**
 * create_file - is a function that creates a file.
 * @filename: The name of the new file.
 * @text_content: The content of the text.
 * Return: 1 if it works and -1 if it dont
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, words, write_words;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (words = 0; text_content[words] !=  '\0'; words++)
			;

		write_words = write(file_descriptor, text_content, words);

		if (write_words == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
