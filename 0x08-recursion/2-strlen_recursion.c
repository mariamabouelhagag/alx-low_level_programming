#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Retur
 * leng: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int leng = 0;
	if(*s)
	{
		leng++;
		leng += _strlen_recusion(*s + 1);
	}
	return(leng);
}
