#include "main.h"

/**
* print_alphabet_x10 - prints alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int y = 0;

	while (y < 10)
	{
		int n = 97;

		while (n < 123)
			_putchar(n++);
		_putchar(10);
		y++;
	}
}
