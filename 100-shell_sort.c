#include "sort.h"

/**
 * shell_sort - sorts an array of ints using
 * Shell sort algorithm, using the Knuth sequence
 *
 * @array: input array
 * @size: size of array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t n = 1;

	while (n < size)
		n = (n * 3) + 1;

	while ((n = (n - 1) / 3) > 0)
		_ssort(array, size, n);
}

/**
 * _ssort - aux function for shell_sort function
 *
 * @a: input array
 * @size: size of the array
 * @n: intervals
 * Return: void
 */

void _ssort(int *a, int size, int n)
{
	int tmp, i, b;

	for (i = 0; (i + n) < size; i++)
	{
		for (b = i + n; (b - n) >= 0; b = b - n)
		{
			if (a[b] < a[b - n])
			{
				tmp = a[b];
				a[b] = a[b - n];
				a[b - n] = tmp;
			}
		}
	}
	print_array(a, size);
}
