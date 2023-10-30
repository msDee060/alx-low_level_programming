#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX.
* @filename: name of file.
* @letters: the number of letters it should read and print.
* Return: actual number of letters it could read and print.
* if the file can not be opened or read, return 0
* if filename is NULL return 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int script_s;
ssize_t rd, wr;
char *buffer;

if (filename == NULL)
return (0);

script_s = open(filename, O_RDONLY);
if (script_s == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

rd = read(script_s, buffer, letters);
wr = write(STDOUT_FILENO, buffer, rd);

close(script_s);
free(buffer);

return (wr);
}
