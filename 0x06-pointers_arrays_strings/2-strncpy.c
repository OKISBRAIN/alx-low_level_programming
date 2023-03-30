#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: amount of char that is to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
