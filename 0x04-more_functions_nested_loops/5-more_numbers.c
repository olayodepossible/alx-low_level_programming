#include "main.h"

/**
* more_numbers - prints the numbers from 0 to 9 in 10 times
*/

void more_numbers(void)
{
	int c = 1;
	int x, y = 0;

	while (y < 10)
	{
		int i = 47;

		for (; x < 15; x++)
		{
			if (c == 11)
				c = 1;
			if (x >= 10)
				_putchar(49);
			_putchar(i + c++);
		}
		_putchar('\n');
		x = 0;
		c = 1;
		y++;
	}
}
