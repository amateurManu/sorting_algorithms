#include "sort.h"

/**
 * quick_sort - sorts an array of ints in ascending
 * order using Quick sort algorithm
 *
 * @array: input array
 * @size: size of array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}

/**
 * _qsort - aux function of quick_sort function
 *
 * @a: input array
 * @low: index of first element
 * @high: index of last element
 * @size: size of the array
 * Return: void
 */

void _qsort(int *a, int low, int high, int size)
{
	int p, w, j;
	int tmp;

	if (low < high)
	{
		p = high;
		w = low;
		for (j = low; j < high; j++)
		{
			if (a[j] < a[p])
			{
				if (j != w)
				{
					tmp = a[j];
					a[j] = a[w];
					a[w] = tmp;
					print_array(a, size);
				}
				w++;
			}
		}
		if (w != p && a[w] != a[p])
		{
			tmp = a[w];
			a[w] = a[p];
			a[p] = tmp;
			print_array(a, size);
		}
		_qsort(a, low, w - 1, size);
		_qsort(a, w + 1, high, size);
	}
}
