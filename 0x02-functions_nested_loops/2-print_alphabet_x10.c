#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabtes 10 times.
 *
 * Return: (0) Success
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
