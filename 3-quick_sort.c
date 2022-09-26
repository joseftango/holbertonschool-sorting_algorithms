#include "sort.h"
/**
* swap - function that swaps two integer
* @a: pointer to integer
* @b: pointer to integer
* Return: void
**/

void swap(int *a, int *b)
{
int tmp = 0;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
* partition - function that applicates Lomuto partition scheme
* @a: array
* @start: first index
* @end: last index
* @size: size of array
* Return: index of pivot
**/

int partition(int *a, int start, int end, size_t size)
{
int pivot = a[end], partition_i = start, i;

for (i = start; i < end ; i++)
{
if (a[i] <= pivot)
{
swap(&a[i], &a[partition_i]);
partition_i++;
print_array(a, size);
}

}

swap(&a[partition_i], &a[end]);
print_array(a, size);

return (partition_i);
}

/**
* sort - function that sorts an array
* @a: array
* @start: first index
* @end: last index
* @size: length of array
* Return: void
**/

void sort(int *a, int start, int end, size_t size)
{
int pivot_i = 0;

if (start >= end)
return;

pivot_i = partition(a, start, end, size);

sort(a, start, pivot_i - 1, size);

sort(a, pivot_i + 1, end, size);

}

/**
* quick_sort - initial function
* @array: array to sort
* @size: array size
* Return: void
*/

void quick_sort(int *array, size_t size)
{
unsigned int l = 0, r = size - 1;

if (array == NULL || size < 2)
return;

sort(array, l, r, size);

}
