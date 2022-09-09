#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line
* Return: 0 provided there is no error
*/
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		else
		 	putchar(n++);
	}
	putchar(10);
	return (0);
}
