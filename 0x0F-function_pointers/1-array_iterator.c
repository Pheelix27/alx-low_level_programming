#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter on each element
 *
 * @array: array to execute function
 * @size: is the size of the array
 * @action:  is a pointer to the function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			i++;
		}
	}
}
