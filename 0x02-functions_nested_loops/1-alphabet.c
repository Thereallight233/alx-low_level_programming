#include "main.h"

/**
 *print_alphabet - print all the alphabet in lowercase
 *Description: prints alphabet
 *Return: Always 0
 */
char c;

void print_alphabet(void)
{
	for (c = 97 ; c <= 122; c++)

		_putchar(c);

	_putchar('\n');
}
