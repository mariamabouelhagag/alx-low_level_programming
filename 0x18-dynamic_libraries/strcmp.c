#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 *
 * Return: A negative integer if s1 is less than s2
 *				0 if they are equal,
 *        A positive integer if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] < str2[i])
		{
			return (-1);
		}
		else if (str1[i] > str2[i])
		{
			return (1);
		}
		i++;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
	{
		return (0);
	}
	else if (str1[i] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
