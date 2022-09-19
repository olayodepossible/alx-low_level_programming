#include "main.h"

/**
* main - prints results
* Return: 0
*/

int main(void)
{
	int n = 402;
	int *p = &n;

	reset_to_98(p);
	_putchar(n);

	return (0);
}
