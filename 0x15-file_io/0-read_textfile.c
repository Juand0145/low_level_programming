#include "holberton.h"

/**
 * read_textfile - is  a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the file we want to transcript.
 * @letters: The number of letter to read and print.
 * Return: The number of character that were transcripted
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_n_words, write_n_words;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	read_n_words = read(file_descriptor, buffer, letters);

	if (read_n_words == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[read_n_words] = '\n';

	close(file_descriptor);

	write_n_words = write(STDOUT_FILENO, buffer, read_n_words);

	if (write_n_words == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (write_n_words);
}
