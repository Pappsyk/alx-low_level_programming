#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 * Return: 0 (Success)
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');
	
	return (0);
}
