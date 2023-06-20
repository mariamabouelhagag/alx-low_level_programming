#include "main.h"

/**
 * print_alphabet_x10 - print alphabet lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char letter;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
