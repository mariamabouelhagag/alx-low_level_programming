#include "main.h"
/**
 * factorial - the finction that returns the factorial of a given number.
 * @n: the given number.
 * Return: factorial of given number.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial - 1);
}
