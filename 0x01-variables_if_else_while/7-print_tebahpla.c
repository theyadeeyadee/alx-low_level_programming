#include <stdio.h>

/**
 * main - print numbers
 *
 * Description - using the main function
 * this program that prints the lowercase alphabet in reverse, followed by a nl
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
