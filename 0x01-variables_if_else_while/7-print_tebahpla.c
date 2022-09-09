#include <stdio.h>

/*
* main - prints the lowercase alphabet in reverse order
* Return: 0 provided there is no error
*/
int main(void)
{
	int n = 122;

	while (n > 96)
		putchar(n--);
	putchar(10);
	return (0);
}
