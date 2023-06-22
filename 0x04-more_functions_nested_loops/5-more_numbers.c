#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 * prints from 0 to 14
 */
void more_numbers(void)
	void more_numbers(void)
{
	int a;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
