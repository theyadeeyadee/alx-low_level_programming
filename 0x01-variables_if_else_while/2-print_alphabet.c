#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print alphabets
 *
 * Description - using the main function
 * this program prints
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

