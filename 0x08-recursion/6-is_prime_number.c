#include "main.h"
/**
 * is_prime_number - ascertain if an input integer is a prime number
 * @n: the input integer
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (1);
	}
	else
		return (0);
}
