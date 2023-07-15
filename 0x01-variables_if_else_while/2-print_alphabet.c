#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'm'; ch++)
		putchar(ch);

	for (ch = 'n'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
