#include "sort.h"
/**
 * heapify - heapify
 * @array: array
 * @k: k
 * @i: i
 * @size: size of array
*/
void heapify(int *array, int k, int i, int size)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < k && array[left] > array[largest])
		largest = left;

	if (right < k && array[right] > array[largest])
		largest = right;

	if (largest != i)
	{

		swap(&array[i], &array[largest]);
		print_array(array, size);
		heapify(array, k, largest, size);
	}
}
/**
 * heap_sort - heap_sort
 * @array: array
 * @size: size of array
*/
void heap_sort(int *array, size_t size)
{
	int i;

	if (array && size)
	{
	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i, size);

	for (i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		heapify(array, i, 0, size);
	}
	}
}
/**
 * swap - function to swap
 * @a: a
 * @b: b
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
