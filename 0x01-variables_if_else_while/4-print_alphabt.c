#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Description - using the main function
 * this program prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
