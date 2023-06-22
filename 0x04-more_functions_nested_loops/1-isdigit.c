#include "main.h"
/**
 * _isdigit - is function that checkes for a digit from 0 to 9
 * @c: is the character to be checked
 *
 * Return: gives 1 or 0
 */
int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
