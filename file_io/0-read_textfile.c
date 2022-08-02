#include "main.h"

/**
 *read_textfile - reads a text file and prints
 *it to the POSIX standard output.
 *@filename: read file name
 *@letters: lenght of the file
 *
 *Return: read and print file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, _rd, wrt;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	opn = open(filename, O_RDONLY);
	_rd = read(opn, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, _rd);

	if (opn == -1 || _rd == -1 || wrt == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);
	return (wrt);
}


