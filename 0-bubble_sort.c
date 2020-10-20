#include "sort.h"
/**
 * bubble_sort - The function use Bubble sort algorithm.
 * @array: array to be sorted in ascending order.
 * @size: size of the array.
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t step, i, lenght = size - 1;
	int swapped = 0;

	for (step = 0; step < size - 1; step++)
	{
		for (i = 0; i < lenght; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		lenght--;
		if (swapped == 0)
			break;
	}
}
