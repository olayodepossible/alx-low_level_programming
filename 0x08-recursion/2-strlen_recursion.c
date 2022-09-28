#include "main.h"

/**
 * _strlen_recursion - prints a string in reverse
 * @s: string to count its length
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
