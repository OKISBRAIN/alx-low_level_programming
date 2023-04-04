#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: pointer address of the memory to be filled
 * @b: our desired value
 * @n: bytes to be changed
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
