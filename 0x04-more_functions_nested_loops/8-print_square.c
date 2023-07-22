#include "main.h"

/**
 * print_square - prints a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int x, y;

	for (x = 0; x <= size; x++)
	{
		for (y = 0; y <= size; y++)
			_putchar(35);
		_putchar('\n');
	}
}
