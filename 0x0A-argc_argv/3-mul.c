#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - program that multiplies two numbers
 * @argc: the size of the argv array.
 * @argv: An array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int times;

	if (argc == 3)
	{
		times = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%i\n", times);

		return (0);
	}
	else if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
}
