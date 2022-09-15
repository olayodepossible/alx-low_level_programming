#include "main.h"

/**
* print_line - draw straight line in the terminal
* @n: parameter that determine line length
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
