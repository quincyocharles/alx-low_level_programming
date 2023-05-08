#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @max_chars: maximum number of characters to be read and printed
 *
 * Return: The number of characters actually printed
 */
ssize_t read_textfile(const char *filename, size_t max_chars)
{
	char *buffer;
	ssize_t file_descriptor, chars_read, chars_printed;

	if (filename == NULL)
	return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	return (0);

	buffer = malloc(sizeof(char) * max_chars);
	if (buffer == NULL)
	{
	close(file_descriptor);
	return (0);
	}

	chars_read = read(file_descriptor, buffer, max_chars);
	if (chars_read == -1)
	{
	free(buffer);
	close(file_descriptor);
	return (0);
	}

	chars_printed = write(STDOUT_FILENO, buffer, chars_read);
	if (chars_printed == -1 || chars_printed != chars_read)
	{
	free(buffer);
	close(file_descriptor);
	return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (chars_printed);
}
