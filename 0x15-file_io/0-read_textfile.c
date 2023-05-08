#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *sim;
	ssize_t ps;
	ssize_t v;
	ssize_t c;

	ps = open(filename, O_RDONLY);
	if (ps == -1)
		return (0);
	sim = malloc(sizeof(char) * letters);
	c = read(ps, sim, letters);
	v = write(STDOUT_FILENO, sim, c);

	free(sim);
	close(ps);
	return (w);
}
