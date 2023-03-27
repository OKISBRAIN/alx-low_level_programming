#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string lenth to be printed
 * Return: count
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}
