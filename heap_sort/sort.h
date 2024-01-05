#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void heapify(int *array, int k, int i, int size);
void heap_sort(int *array, size_t size);
void swap(int *a, int *b);
void print_array(const int *array, size_t size);


#endif /* SORT_H */
