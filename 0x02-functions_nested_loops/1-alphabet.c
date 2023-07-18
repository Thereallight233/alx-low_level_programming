#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
