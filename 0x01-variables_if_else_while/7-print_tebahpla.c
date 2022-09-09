#include <stdlib.h>

/*
* main - prints the alphabet in lowercase, followed by a new line
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
