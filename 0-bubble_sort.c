#include "sort.h"
/**
* bubble_sort - sort
* @array: array of
* @size: sizeof
*/

void bubble_sort(int *array, size_t size)
{
   int tmp;
   size_t i,y;
   
    for (i = 0; i < size - 1; i++)
   {
        for (y = 0; y  < size -1 ; y++)
        {
            if (array[y] > array[y+1])
            {
                tmp = array[y];
                array[y]= array[y+1];
                array[y+1]= tmp;
                 print_array(array, size);
                
            }
        }
    }
}
