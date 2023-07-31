#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int Q;

	while (*s)
	{
		for (Q = 0; accpet[Q]; Q++)
		{
			if (*s == accept[Q])
			return (s);
		}
		s++;
	}

	return ('\0');
}
