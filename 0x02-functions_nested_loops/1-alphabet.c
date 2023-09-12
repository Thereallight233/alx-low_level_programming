#include "main.h"
#include <stdio.h>

/**
 *print_alphabet - print all the alphabet in lowercase
 *Description: prints alphabet
 *Return: Always 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 97 ; c <= 122; c++)

		putchar(c);

	putchar('\n');
}
