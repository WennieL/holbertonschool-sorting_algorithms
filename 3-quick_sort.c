#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * partition - divide the array into two partitions
 * @array: Array to be partitioned
 * @left: Starting index of the partition
 * @right: Ending index of the partition
 * @size: Size of the array
 *
 * Return: Index of the pivot
 */

int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int temp;
	int i = left - 1, j = left;

	while (j < right)
	{
		if (array[j] <= pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			if (array[i] != array[j])
				print_array(array, size);
		}
		j++;
	}

	i++;
	temp = array[i];
	array[i] = array[right];
	array[right] = temp;
	if (array[i] != array[right])
		print_array(array, size);

	return (i);
}

/**
 * quick_sort_recursive - Quick sort implementation
 * @array: Array to be sorted
 * @left: Starting index of the partition
 * @right: Ending index of the partition
 * @size: Size of the array
 *
 * Return: void
 */

void quick_sort_recursive(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left >= right || left < 0)
		return;
	pivot = partition(array, left, right, size);

	quick_sort_recursive(array, left, pivot - 1, size);
	quick_sort_recursive(array, pivot + 1, right, size);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *              using quick sort algorithm
 * @array: pointer point to the address of the head of the array
 * @size: the amount of integers in an array
 *
 * Return: sorted array with the use of quick sort
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
