#include "sort.h"

/**
 * swap -swaps intergers
 *
 * @c: first interger
 * @d: second interger
*/
void swap(int *c, int *d)
{
int temp = *c;
*c = *d;
*d = temp;
}

/**
 * selection_sort - Sorts array form small to big
 * @array: array of ints to sort
 * @size: The size of the array will sort
*/
void selection_sort(int *array, size_t size)
{
size_t x, y;
int min_idz;

if (array == NULL || size < 2)
{

}

for (x = 0; x < size - 1; x++)
{
	min_idz = x;
	for (y = x + 1; y < size; y++)
	{
		if (array[y] < array[min_idz])
		{
			min_idz = y;
		}
	}
	if (min_idz != (int)x)
	{
		swap(&array[x], &array[min_idz]);
		print_array(array, size);
	}
}
}
