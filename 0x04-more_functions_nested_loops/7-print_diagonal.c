#include "main.h"

/**
* print_diagonal - draw diagonal line in the terminal
* @n: parameter that determine line length
*/

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
