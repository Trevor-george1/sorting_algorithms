#include "sort.h"
/**
 * swap - swaps two int values
 * @a: int a
 * @b: int b
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * selection_sort - sorts an array of ints in ascending order
 * @array: array of integers
 * @size: tthe size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;
		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}
