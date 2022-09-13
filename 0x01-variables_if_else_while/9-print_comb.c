#include <stdio.h>

/**
 * main - print numbers
 *
 * Description - using the main function
 * this program that prints all possible combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
