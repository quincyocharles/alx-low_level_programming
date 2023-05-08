#include "main.h"

/**
 * my_append_text_to_file - Appends text at the end of a file.
 * @my_filename: A pointer to the name of the file.
 * @my_text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or my_filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int my_append_text_to_file(const char *my_filename, char *my_text_content)
{
	int my_fd, my_write, my_len = 0;

	if (my_filename == NULL)
		return (-1);

	if (my_text_content != NULL)
	{
		for (my_len = 0; my_text_content[my_len];)
			my_len++;
	}

	my_fd = open(my_filename, O_WRONLY | O_APPEND);
	my_write = write(my_fd, my_text_content, my_len);

	if (my_fd == -1 || my_write == -1)
		return (-1);

	close(my_fd);

	return (1);
}
