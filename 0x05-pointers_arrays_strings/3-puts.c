#include "main.h"
/**
* _puts - prints a string
* @str: parameter to print
*/
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\n')
		{
			_purchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
