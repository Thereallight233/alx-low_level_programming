#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		putchar(a);
	}
	for (b = a + 1; b <= 9; b++)
	{
		putchar(b);
	}
	for (c = b + 1; c <= 9; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
