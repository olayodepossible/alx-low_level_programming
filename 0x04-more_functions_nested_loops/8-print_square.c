#include "main.h"

/**
* print_square - prints a square
* @size: parameter for the square size
*/

void print_square(int size)
{
	int x, y = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (y < size)
		{
			for (; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
			x = 0;
			y++;
		}
	}
}
