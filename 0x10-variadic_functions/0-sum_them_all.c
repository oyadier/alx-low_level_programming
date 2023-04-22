#include <stdarg.h>

/**
 * sum_them_all - add all argument in the variadic integers
 * @n: the number of items in a the va_list
 *
 * Return: 0 if n == 0, otherwise sum of all va_list
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list _elem;/*variable that would contain the elips(variadic) values*/
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(_elem, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(_elem, int);
	}
	va_end(_elem);
	return (sum);
}
