#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: a string
 * @n: number of element of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
