#include "main.h"

/**
 *main - Entry point
 *Description: Prints the alphabets in lowercase
 *Return: Always 0
 */
char c;

void print_alphabet(void)
{
	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}	
	putchar('\n');

	return (0);
}
