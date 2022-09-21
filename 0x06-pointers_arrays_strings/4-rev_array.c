#include "main.h"
/**
* reverse_array - reverse the content of an array of integer
* @a: array param
* @n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		int temp = *(a + i);

		*(a + i) = *(a + (--n));
		*(a + n) = temp;
	}
}
