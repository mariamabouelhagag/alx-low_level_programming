#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 * prints from 0 to 14
 */
void more_numbers(void)
{
	int a;
	int j;

	for (a = 0; a < 10; a++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
