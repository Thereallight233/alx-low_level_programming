#include "main.h"

/**
 *print_alphabet - print all the alphabet in lowercase
 *Description: prints alphabet
 *Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	for(c = 97 ; c <= 122; c++)
	
		_putchar(c);

	_putchar('\n');
}
