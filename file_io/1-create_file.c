#include "main.h"

/**
 *create_file - create a file
 *@filename: name of the file
 *@text_content: conten of the file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, slen = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[slen])
			slen++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, slen);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
