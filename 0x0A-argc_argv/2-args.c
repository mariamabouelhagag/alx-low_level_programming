#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main -main function.
 * @argc: the size of the argv array.
 * @argv: An array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
