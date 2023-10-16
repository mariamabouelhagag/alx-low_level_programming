#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: A pointer to the destination string
 * @src: A pointer to the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, const char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
