#include "variadic_functions.h"

/**
 * sum_them_all -  function that adds all the numbers
 * @n: the number of parameters executed.
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int x;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
