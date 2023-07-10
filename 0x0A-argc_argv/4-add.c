#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
int string_digit(char *s);
/**
 * main -main function.
 * @argc: the size of the argv array.
 * @argv: An array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	UNUSED(argv);

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc ; i++)
		{
			if (string_digit(argv[i]))
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
/**
  * string_digit -  checks if a string consists only of digits
  * @s: pointer to string
  * Return: 1 if all string is digits otherwise 0
  */
int string_digit(char *s)
{
	int i;
	int c = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!((s[i] <= 48) && (s[i] <= 57)))
		{
			c = c * 0;
		}
	}
	return (c);
}
