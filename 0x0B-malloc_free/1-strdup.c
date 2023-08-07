#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Retuen: 0
 */

char *_strdup(char *str)
{
	char *m;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)

	/*+1 on the size puts the end of string character*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
