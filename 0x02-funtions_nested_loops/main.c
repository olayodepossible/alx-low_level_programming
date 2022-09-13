#include "main.h"

/**
 * main - Prints _putchar  as a message.
 *
 * Return: 0 provided it runs successfully
 */
int main(void)
{
	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int count, charSize;

	charSize = sizeof(str);
	for (count = 0; count < charSize; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	print_alphabet();

	return (0);
}
