#include "main.h"

/**
 * int _strspn - gets the length of a prefix substring.
 *
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accpet[r])
			{
				n++;
				break
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
