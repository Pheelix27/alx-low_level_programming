#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: The numberthat the sign will be printed with
 *
 * Return: 1 if the number is bigger than zero
 *         0 if the number is zero itself
 *         -1 if the number is smaller than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
