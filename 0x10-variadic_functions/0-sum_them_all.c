#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 * Return: If n == 0 - 0. Otherwise the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list intPtr;

	va_start(intPtr, n)
		for (i = 0; i < n; i++)
		{
			sum += va_arg(intPtr, n);
		}
	va_end(intPtr);
	
	return (sum);
}
