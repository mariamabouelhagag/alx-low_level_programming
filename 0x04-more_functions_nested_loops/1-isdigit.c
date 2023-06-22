#include "main.h"
/**
 * _isdigit - is function that checkes for a digit
 * @c: is the variable to be checked
 *
 * Return: gives 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
