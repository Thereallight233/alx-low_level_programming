#include "main.h"
/**
 * strlen - main entry point
 * Description:  returns the length of a string.
 * @s: integer parameter
 * Return: length of string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		counter;
		s++;
	}
	return (counter);
}
