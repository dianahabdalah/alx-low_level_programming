#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @num_chars: number of characters to be read
 * Return: num_written - actual number of bytes read and printed
 *         0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t num_chars)
{
char *bf;
ssize_t fd, rd, num_written;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
bf = malloc(sizeof(char) * num_chars);
rd = read(fd, bf, num_chars);
num_written = write(STDOUT_FILENO, bf, rd);
free(bf);
close(fd);
return (num_written);
}
