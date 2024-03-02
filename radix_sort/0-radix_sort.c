#include "sort.h"

/**
* get_max - gets max value from array
* @array: array to pull max from
* @size: size of array
* Return: max value
*/

int get_max(int *array, size_t size)
{
	int max = array[0], i;

	for (i = 1; i < (int)size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
* radix_sort - sorts via radix algo
* @array: array to sor
* @size: size of array
*/

void radix_sort(int *array, size_t size)
{
	int bucket[1000][1000], count[10], i = 0, j = 0, k = 0, r = 0;
	int digits = 0, div = 1, max = 0, p = 0;

	if (size < 2)
		return;
	max = get_max(array, size);
	while (max > 0)
	{
		digits++;
		max /= 10;
	}
	for (p = 0; p < digits; p++)
	{
		for (i = 0; i < 10; i++)
			count[i] = 0;
		for (i = 0; i < (int)size; i++)
		{
			r = (array[i] / div) % 10;
			bucket[r][count[r]] = array[i];
			count[r] += 1;
		}
		i = 0;
		for (k = 0; k < 10; k++)
		{
			for (j = 0; j < count[k]; j++)
			{
				array[i] = bucket[k][j];
				i++;
			}
		}
		div *= 10;
		print_array(array, size);
	}
}
