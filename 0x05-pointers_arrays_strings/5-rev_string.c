#include "main.h"
/**
  * rev_string - reverses a string
  * @s: string reversed
  * Return: void
  */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char c;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
