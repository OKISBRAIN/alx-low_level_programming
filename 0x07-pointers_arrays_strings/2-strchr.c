#include "main.h"

/**
 * _strchr - Entry point
 * @s: input string
 * @c: char we need to locate
 * Return: return 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
