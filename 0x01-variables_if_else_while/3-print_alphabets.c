#include <stdio.h>

/*
* main - prints the alphabet in lowercase, and then in uppercase
* Return: 0 provided there is no error
*/
int main(void)
{
	int x = 97, y = 65;

	while (x < 123)
		putchar(x++);
	while (y < 91)
		putchar(y++);
	putchar(10);
	return (0);
}
