#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		n--;
		a[x] = a[n];
		a[n] = y;
	}
}
