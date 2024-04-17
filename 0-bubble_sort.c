#include "sort.h"
#include <stddef.h>
/**
 * 
 * 
 * 
 * 
 * 
*/

void bubble_sort(int *array, size_t size)
{
	bool swapped;
	int i;
	int temp;
	int iter;

	if (array == NULL || size == 0)
		return;
	do {
		swapped = false;
		i = 0;
		for (iter = size - 1; i < iter; i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		iter--;
	} while (swapped);
}