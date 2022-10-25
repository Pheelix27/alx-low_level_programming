#include "main.h"

/**
 * _strlen - To write a function that returns the length of a string
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
