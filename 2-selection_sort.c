#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of integer
 * @size: size array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int tmp = 0;
	size_t i = 0, j = 0, swap = 0;

	if (!array || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swap = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[swap])
			{
				swap = j;
			}
		}

		if (swap != i)
		{
			tmp = array[i];
			array[i] = array[swap];
			array[swap] = tmp;
			print_array(array, size);
		}
	}
}
