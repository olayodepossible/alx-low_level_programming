#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a phrase exactly the way it was written to the standard error.
 * Return: 1 regardless
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
