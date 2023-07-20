#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 * followed by a new line.
 * @c: ASCII character.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 57; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
