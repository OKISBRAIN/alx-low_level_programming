#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input string
 * @accept: input
 * Return: return s or else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
