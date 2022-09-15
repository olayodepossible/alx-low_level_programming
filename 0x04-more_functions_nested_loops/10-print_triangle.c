#include "main.h"

/**
* print_triangle - prints a triangle
* @size: parameter for the square size
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
				_putchar(' ');
			for (j--; j < size; j++)
				_putchar('#');
			if (i < (size - 1))
				_putchar('\n');
		}
		_putchar('\n');
	}
}
