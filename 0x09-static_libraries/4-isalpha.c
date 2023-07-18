#include "main.h"

/**
 * _isalpha - main function
 * @c : a  character to compare
 * Return: 1 if c is letter ; 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
