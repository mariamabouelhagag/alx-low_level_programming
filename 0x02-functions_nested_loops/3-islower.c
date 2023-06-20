#include "main.h"

/**
 * int _islower(int c) - return to 1 if c is lower
 * Return: 1 if true , 0 if false
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
