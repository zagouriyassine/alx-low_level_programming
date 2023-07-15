#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase using putchar
 *
 * Return: Always 0 (Seccess)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'm'; letter++)
		putchar(letter);

	for (letter = 'n'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
