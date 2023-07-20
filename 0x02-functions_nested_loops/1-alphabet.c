#include "main.h"

/**
<<<<<<< HEAD
 *main - Entry point
 *Description: Prints the alphabets in lowercase
=======
 *print_alphabet - print all the alphabet in lowercase
 *Description: prints alphabet
>>>>>>> b8315306a4004db3a36606d7d2754923189e4376
 *Return: Always 0
 */
char c;

void print_alphabet(void)
{
<<<<<<< HEAD
	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}	
	putchar('\n');

	return (0);
=======
	char c;

	for (c = 97 ; c <= 122; c++)

		_putchar(c);

	_putchar('\n');
>>>>>>> b8315306a4004db3a36606d7d2754923189e4376
}
