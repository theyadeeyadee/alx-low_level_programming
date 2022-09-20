#include <stdio.h>
#include "main.h"

/**
 * swap_int- interchanges variables a and b
 *
 * @a:check
 * @b: checked
 *
 * Return:nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
