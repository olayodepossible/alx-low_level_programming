#include "main.h"

int boundary_watch(char *s1, char *s2);
char *step_up(char *s2);

/**
 * wildcmp - compares two strings recursively,
 * checking for wildcards expansion
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if the strings can be considered identical
 * otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/**
	 * this is going to be a sum of return values
	 */
	int sum = 0;

	/**
	 * if we reach the end of s1 and the char in s2 is a *
	 * and if the next chars of s2 are *, return 1
	 */
	if (*s1 == '\0' && *s2 == '*' && !*step_up(s2))
		return (1);

	/**
	 * if the chars are equal in both strings,
	 * if we reached the end of s1, return 1
	 * else increment s1 and s2 by 1
	 */
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/**
	 * if we reached the end of both strings,
	 * return 0
	 */
	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	/**
	 * if the char in s2 is a *
	 * finds the address of the first char after the *
	 * if we reached the end of s2, return 1
	 * if the chars are equal, add the return values
	 * of wildcmp() to sum
	 * add the return value of boundary_watch() to sum
	 * convert non-zero to 1, keeps 0 at 0, return
	 */
	if (*s2 == '*')
	{
		s2 = step_up(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += boundary_watch(s1 + 1, s2);
		return (!!sum);
	}
	return (0);
}

/**
 * boundary_watch - checks recursively for all the paths when the
 * characters are equal
 * @s1: first string
 * @s2: second string
 *
 * Return: return value of wildcmp() or of itself
 */
int boundary_watch(char *s1, char *s2)
{
	/**
	 * if we reached the end of s1, return 0
	 * if chars are equal, return the return value of wildcmp()
	 * increment s1 by 1, not s2
	 */
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (boundary_watch(s1 + 1, s2));
}

/**
 * *step_up - moves the current char past the *
 * @s2: string to iterate over
 *
 * Return: the address of the character after the *
 */
char *step_up(char *s2)
{
	/**
	 * if the current char is a *
	 * increment s2 by 1
	 * else return the address of
	 * the first char past all *
	 */
	if (*s2 == '*')
		return (step_up(s2 + 1));
	else
		return (s2);
}
