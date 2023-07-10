#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * handle_error - Prints an error message and exits the program.
 * @msg: The error message to print.
 */
void handle_error(const char *msg)
{
dprintf(STDERR_FILENO, "Error: %s\n", msg);
exit(1);
}

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUF_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
handle_error("Can't read from file");
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
handle_error("Can't write to file");
while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
handle_error("Can't write to file");
}
if (bytes_read == -1)
handle_error("Can't read from file");
if (close(fd_from) == -1)
handle_error("Can't close file descriptor");
if (close(fd_to) == -1)
handle_error("Can't close file descriptor");
return (0);
}
