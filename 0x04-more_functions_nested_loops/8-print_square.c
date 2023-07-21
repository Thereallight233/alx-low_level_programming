#include "main.h"

/**
 * print_square - prints a square, followed ny a new line;
 * @size: size of the sqaure
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}else 
	{
		int r, s;

		for (r = 0; r < size; r++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
