#include "main.h"

/**
 * _islower - cheecks for lowercase character
 * @c: ASCII code
 *
 * Return: 1 for lowercase character. 0 for other.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
