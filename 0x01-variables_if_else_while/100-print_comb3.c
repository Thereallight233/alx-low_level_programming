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

	a = 48;
	b = 49;
	for (a = 48; a <= 57; a++)
	{
		for (b = a + '1'; b <= 57; b++)
		{
			putchar(a);
			putchar(b);

			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
