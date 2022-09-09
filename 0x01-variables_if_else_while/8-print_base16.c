#include <stdlib.h>

/*
* main -  prints all the numbers of base 16 in lowercase
* Return: 0 provided there is no error
*/
int main(void)
{
	int i, x = 48, y = 97;

	for (i = 0; i < 16; i++)
	{
		if (i > 9)
		{
			putchar(y++);
		}
		else
			putchar(x++);
	}
	putchar(10);
	return (0);
}
