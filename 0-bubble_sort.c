#include "sort.h"
/**
* bubble_sort - function that arrange array to ascending order
* @array: array
* @size: size of the array
* Return: void
**/

void bubble_sort(int *array, size_t size)
{
unsigned int i, j, k, flag, tmp = 0;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
flag = 0;

for (j = 0; j < size - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
flag = 1;
k = 0;
while (k < size)
{
if (k > 0)
{
printf(", ");
}

printf("%d", array[k]);
k++;
}
putchar('\n');
}

}

if (flag == 0)
break;
}

}
