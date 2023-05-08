#include "main.h"
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 * print_error - prints an error message to the standard error stream,
 * @message: The message
 * @filename:the name of file
 * @fd: integar
 */
void print_error(const char *message, const char *filename, int fd)
{
dprintf(STDERR_FILENO, message, filename);
if (fd != -1)
close(fd);
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
int fd_to, fd_form;
char buffer[BUFFER_SIZE];
ssize_t num_read, num_written;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_form = open(argv[1], O_RDONLY);
if (fd_form == -1)
{
print_error("Error: Can't read from file %s\n", argv[1], -1);
exit(98);
}
fd_to = open(argv[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
print_error("Error: Can't write to %s\n", argv[2], fd_form);
exit(99);
}
while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
num_written = write(fd_to, buffer, num_read);
if (num_written == -1) 
print_error("Error: Can't write to %s\n", argv[2], fd_from);
exit(99);
}
if (num_read == -1)
{
print_error("Error: Can't read from file %s\n", argv[1], fd_from);
exit(98);
}
if (close(fd_from) == -1)
{
print_error("Error: Can't close fd %d\n", argv[1], fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
print_error("Error: Can't close fd %d\n", argv[2], fd_to);
exit(100);
}
return 0;
}
