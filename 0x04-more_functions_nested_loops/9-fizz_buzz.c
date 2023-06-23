#include <stdio.h>
#include "main.h"
/**
 *main - function to  print numbers from 1 to 100
 *for multiples of teree print Fizz instead of the number
 *for the multiples of five print Buzz
 *numbers which are multiples of both three and five print FizzBuzz
 *Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a < 100)
		{
			printf(" ");
		}
	}
	return (0);
}
