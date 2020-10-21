#include "sort.h"
/**
 * partition - reorder the elements of the array in the order: <= pivot >=
 * @array: array to be sorted
 * @lo: lower number
 * @hi: higher number
 * @size: size of the original array.
 * Return: The pivot after being ordered.
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int i, j, tmp, pivot;

	pivot = array[hi];
	i = lo;
	j = lo;
	for (; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				tmp =array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != hi)
	{
		tmp = array[i];
		array[i] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}
	return (i);
}
/**
 * quicksort - sorts an array in ascending order by Quick sort algorithm
 * @array: array to be sorted
 * @lo: lower index
 * @hi: higher index
 * @size: size of the full array
 */
void quicksort(int *array, int lo, int hi, size_t size)
{
	int r;

	if (lo < hi)
	{
		r = partition(array, lo, hi, size);
		quicksort(array, lo, r - 1, size);
		quicksort(array, r + 1, hi, size);
	}

}
/**
 * quick_sort - Applying the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
