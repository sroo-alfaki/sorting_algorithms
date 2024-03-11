#include "sort.h"
/**
 * selection_sort - Sorts a doubly linked list of integers
 * @array: The list to be printed
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, s;
	int temp;

	for (size_t i = 0; i < size - 1; ++i)
	{
		for (j = size - 1, s = i + 1; j > i; j--)
		{
			if (array[j] < array[s])
			{
				s = j;
			}
			if (array[i] > array[s])
			{
				temp = array[i];
				array[i] = array[s];
				array[s] = temp;
				print_array(array, size);
			}
		}
	}
}

