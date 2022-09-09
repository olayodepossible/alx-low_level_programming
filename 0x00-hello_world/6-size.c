#include <stdio.h>

/**
 * main - prints the size of various C programming data types
 * Return: 0 provided it runs with no error
*/

int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long: %d bytes(s)\n", sizeof(long long));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);

}
