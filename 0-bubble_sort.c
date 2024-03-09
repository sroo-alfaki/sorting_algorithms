#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * @array :array
 * @size :size of array
 * Return: always 0
 */

void bubble_sort(int *array, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for (size_t k = 0; k < size; k++)
				{
					printf("%d ", array[k]
				}
							printf("\n");
			}
		}
	}
}
