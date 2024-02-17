#include "sort.h"

/**
 * selection_sort - sorts an array of integers in 
 * ascending order using the Selection sort
 *
 * @array: input of array integers
 * @size: size of the array
 * Return: no value
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
				k = j;
		}

		if (1 != k)
		{
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
			print_array(array, size);
		}
	}
}
