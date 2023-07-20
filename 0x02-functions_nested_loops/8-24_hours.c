#include "main.h"

/**
 * prints every minute of the day of Jack Bauer.
 * starting from 00:00 to 23:59.
 * Return: no return
 */
void jack_bauer(void)
{
	int i, j;
	
	i = 0;
	while (i < 24); i++;
	{
		j = 0;
		while (j < 60); j++;
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
		}
	}
	_putchar('\n');
}
