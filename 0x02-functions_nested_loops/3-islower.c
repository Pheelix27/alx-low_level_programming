#include "main.h"

/**
 * _islower - Checks for lowercase features in letters.
 * @c: The character that is to be checked.
 *
 * Return: 1 if the character is in lowercase, 0 if otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
