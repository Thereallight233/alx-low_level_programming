#include "main.h"

/*
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * followed by a new line.
 * Desrcription: prints more numbers.
 * Return: Always 0
 */
void more_numbers(void)
{
	int j;

	for (j = '0'; j <= '14'; j++)
	{
		_putchar(j * '10');
	}
	_putchar('\n');
}
