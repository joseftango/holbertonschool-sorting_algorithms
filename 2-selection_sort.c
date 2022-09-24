#include "sort.h"
/**
* swap_two_int - function that swap two integers
* @a: integer
* @b: integer
* Return: void
**/

void swap_two_int(int *a, int *b)
{
int tmp = 0;

tmp = *a;
*a = *b;
*b = tmp;

}

/**
* selection_sort - function that sorts an array in ascending order
* @array: our array
* @size: size of array
* Return: void
**/

void selection_sort(int *array, size_t size)
{
unsigned int i, j, min = 0;

for (i = 0; i < size - 1; i++)
{
min = i;

for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
min = j;

}

if (min != i)
swap_two_int(&array[i], &array[min]);

print_array(array, size);

}

}
