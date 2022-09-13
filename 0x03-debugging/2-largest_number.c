#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	int x, y;

	x = a - b;
	y = a - c;
	if (x < 0)
	{
		if (b > c)
			largest = b;
		else
			largest = c;
	}
	else if (y < 0)
	{
		if (b > c)
			largest = b;
		else
			largest = c;
	}
	else
		largest = a;
	return (largest);
}
