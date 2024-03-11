#include "sort.h"
/**
 * selection_sort - Sorts a doubly linked list of integers
 * @array: The list to be printed
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	int temp;

	for (size_t i = 0; i < size - 1; ++i)
	{
		size_t min_index = i;

		for (size_t j = i + 1; j < size; ++j)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		temp = array[min_index];
		array[min_index] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
