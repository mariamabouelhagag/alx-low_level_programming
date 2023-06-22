#include "main.h"
/**
 * print_numbers - is a function to print numbers from 0 to 9
 *
 * REturn: 0
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar ("%d\n", a);
	}
	return (0);
}
