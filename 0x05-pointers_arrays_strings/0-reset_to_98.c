#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - it resets variable to 98
 * @n: checked
 *
 * Return: none
 *
 */

void reset_to_98(int *n)
{
	int *ptr;

	ptr = n;

	*ptr = 98;
}
