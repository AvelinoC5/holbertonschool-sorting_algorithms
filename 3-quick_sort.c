#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array
 * @size: array's size
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick(array, 0, size - 1, size);
}

/**
 * quick - quick sort
 * @array: given array
 * @lo: lower
 * @hi: higher
 * @size: array's size
 * Return: Nothing
 */
void quick(int *array, int lo, int hi, size_t size)
{
	int pivot, i = lo - 1, j, partition = array[hi], aux = 0;
	if (lo < hi)
	{
		for (j = lo; j < hi; j++)
		{
			if (array[j] < partition)
			{
				i++;
				if (array[i] != array[j])
				{
					aux = array[i];
					array[i] = array[j];
					array[j] = aux;
					print_array(array, size);
				}
			}
		}
		if (array[i + 1] != array[hi])
		{
			aux = array[i + 1];
			array[i + 1] = array[hi];
			array[hi] = aux;
			print_array(array, size);
		}
		pivot = i + 1;
		quick(array, lo, pivot - 1, size);
		quick(array, pivot + 1, hi, size);
	}
}
