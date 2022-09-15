#include "main.h"

/**
* print_diagonal - draw diagonal line in the terminal
* @n: parameter that determine line length
*/

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('/');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
