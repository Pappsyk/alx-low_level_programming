#include "main.h"

/**
 * print_array - a function that prints n elemnts of an array
 * @a: array name
 * @n: Number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
		if (i != (n - 1))
		{
			printf(", ");
		}
			printf("\n");
}
