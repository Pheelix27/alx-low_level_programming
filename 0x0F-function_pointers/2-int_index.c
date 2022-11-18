#include "function_pointers.h"

/**
  * @array: ... 
  * @cmp: is a pointer to the function to be used to compare value
  * @size: is the number of elements in the array.
  * int_index: returns the index of the first element
  *
  * Return: void
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}
	return (-1);
}
