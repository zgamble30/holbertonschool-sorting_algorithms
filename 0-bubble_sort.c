#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size to array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 1, j = 0;
	int tmp = 0;

	if (!array || size <= 0)
		return;

	while (array[j])
	{
		for (i = 1; i <= size - 1; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}

		}
		j++;
	}
}
