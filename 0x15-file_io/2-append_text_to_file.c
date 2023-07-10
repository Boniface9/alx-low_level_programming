#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with the specified name and writes the provided content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 * If the file already exists, truncate it.
 * If filename is NULL, return -1.
 * If text_content is NULL, create an empty file.
 * The created file has permissions rw-------.
 */
int create_file(const char *filename, char *text_content)
{
int fd, bytes_written, text_length = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[text_length])
text_length++;
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_length > 0)
{
bytes_written = write(fd, text_content, text_length);
if (bytes_written == -1 || bytes_written != text_length)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
