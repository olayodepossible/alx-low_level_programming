#include "main.h"

/**
* swap_int - swap two integer value via pointer
* @a: first parameter
* @b: second parameter
*/
void swap_int(int *a, int *b)
{
	int *temp = *a;

	*a = *b;
	*b = *temp;
}
