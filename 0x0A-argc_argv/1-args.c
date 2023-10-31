#include <stdio.h>

/**
* main - Prints the number of arguments passed to the program.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1); /** Subtract 1 to exclude the program name. */
	return (0);
}

