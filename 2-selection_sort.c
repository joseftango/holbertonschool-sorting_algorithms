#include "sort.h"
/**
* selection_sort - function that sorts an array in ascending order
* @array: our array
* @size: size of array
* Return: void
**/

void selection_sort(int *array, size_t size)
{
unsigned int i, j, min = 0, tmp = 0;

for (i = 0; i < size - 1; i++)
{
min = i;

for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
min = j;

}

if (min != i)
{
tmp = array[i];
array[i] = array[min];
array[min] = tmp;
}
print_array(array, size);

}

}
