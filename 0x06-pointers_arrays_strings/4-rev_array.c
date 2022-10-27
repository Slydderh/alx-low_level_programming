#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int u, v, tmp;

	v = n - 1;

	for (u = 0; u < n / 2; u++)
	{
		tmp = a[u];
		a[u] = a[v];
		a[v--] = tmp;
	}
}

