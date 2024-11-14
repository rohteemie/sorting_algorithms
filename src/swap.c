#include "sort.h"

/**
 * swap - switches value of first input withthe value of the second input
 * @a: First value to swap
 * @b: Second value to swap
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}