#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - print the last digit of the number stored in the variable n
* Return: 0 provided no error
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int n_modulo = n % 10;

	if (n_modulo == 0)
		printf("Last digit of %d is %d and is 0\n", n, n_modulo);
	else
		if (n_modulo > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, n_modulo);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_modulo);
	return (0);
}
