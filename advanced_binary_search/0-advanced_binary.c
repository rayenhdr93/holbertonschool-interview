#include "search.h"
#include <stdio.h>

/**
 *print_array - print the array being searched
 *@array: a pointer to the first element of the array to search in
 *@right: the right subarray
 *@left: the left subarray
 */
void print_array(int *array, size_t right, size_t left)
{
printf("Searching in array: ");
while (right <= left)
{
	printf("%d", array[right]);
	if (right != left)
		printf(", ");
	right++;
}
printf("\n");
}

/**
*binary_search - searches for a value in a sorted array of integers
*using the Binary search algorithm with recursion
*@array: a pointer to the first element of the array to search in
*@value: the value to search for
*@right: the first element of the array
*@left: the last element of the array
*Return: the index of the value or -1 if the value is not found
 */
int binary_search(int *array, int value, int right, int left)
{
	int mid;

	if (!array)
		return (-1);
	if (right <= left)
	{
		mid = (right + left) / 2;
		print_array(array, right, left);
		if (value == array[mid] && array[mid] != (array[mid - 1]))
			return (mid);
		else if (value <= array[mid])
			return (binary_search(array, value, right, mid));
		else
			return (binary_search(array, value, mid + 1, left));
	}
	return (-1);
}

/**
*advanced_binary - searches for a value in a sorted array of integers
*@array: a pointer to the first element of the array to search in
*@size: the number of elements in array
*@value: the value to search for
*Return: the index of the value or -1 if the value is not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search(array, value, 0, size - 1));
}
