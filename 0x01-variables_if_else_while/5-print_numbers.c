#include <stdlib.h>

/*
* main -  prints all single digit numbers of base 10 starting from 0
* Return: 0 provided there is no error
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar(10);
	return (0);
}
