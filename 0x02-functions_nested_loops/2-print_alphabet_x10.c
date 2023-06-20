#include "main.h"

/**
 * print_alphabet_x10 - print alphabet lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		int j = 0;

		while (j < 10)
		{
			_putchar (letter);
				 j++;
		}
		letter++;
		_putchar('\n');
	}
}
