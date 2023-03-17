#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char low;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
