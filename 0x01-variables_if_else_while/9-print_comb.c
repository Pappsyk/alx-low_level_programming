#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between.
 * Return: 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
