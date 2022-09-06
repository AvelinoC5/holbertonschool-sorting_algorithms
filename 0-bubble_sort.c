#include "sort.h"

/**
 * bubble_sort - bubble sort algorithms
 * @size: size input
 * @array: pointer input
 * Return: No Return
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, n, swap;

	if (size < 2)
    {
        return;
    }

	for (i = 0; i < size - 1; i++)
	{
		for (n = 0; n < size - i - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				swap = array[n];
				array[n] = array[n + 1];
				array[n + 1] = swap;
				print_array(array, size);
			}
		}
	}
}