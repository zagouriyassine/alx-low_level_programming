#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings.
 * @s1: input one to contact
 * @s2: input two to contact
 *
 * Return: contact of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = r = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	conct = malloc(sizeof(char) * (i + r + 1));

	if (conct == NULL)
		return (NULL);
	i = r = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[r] != '\0')
	{
		conct[i] = s2[r];
		i++, r++;
	}
	conct[i] = '\0';
	return (conct);
}
