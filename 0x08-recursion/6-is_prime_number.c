#include "main.h"

/**
* is_prime_helper - detects if an input number is a prime number.
* @n: input number.
* @i: iterator.
* Return: 1 if n is a prime number. 0 if n is not a prime number.
*/
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}

/**
* is_prime_number - detects if an input number is a prime number.
* @n: input number.
* Return: 1 if n is a prime number. 0 if n is not a prime number.
*/
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

