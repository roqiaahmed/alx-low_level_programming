#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_ APPEND)
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;
}
write(fd, text_content, len);
close(fd);
return (1);
}
