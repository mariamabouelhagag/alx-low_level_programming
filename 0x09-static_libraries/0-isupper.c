#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: is the charcater that will be use for the urgument of the function
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
