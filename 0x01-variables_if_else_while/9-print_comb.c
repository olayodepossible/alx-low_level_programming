#include <stdio.h>

/**
* main -  prints all single digit numbers of base 10 starting from 0
* Return: 0 provided there is no error
*/
int main(void)
{
	int i, n = 48;

	for (i = 0; i < 10; i++)
	{
		putchar(n++);
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
