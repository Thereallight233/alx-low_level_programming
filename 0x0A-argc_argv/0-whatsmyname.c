#include <stdio.h>

/**
* main - Prints the program name, followed by a new line.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	if (argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Unable to determine program name\n");
	}

	return (0);
}
