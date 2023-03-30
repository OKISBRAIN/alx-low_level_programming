#include "main.h"

/**
 * *_strncat - function that contatenates two strings
 * @dest: parameter that receives the appending
 * @src: parameter to be appended
 * @n: amount of char to be appended from src to dest
 * Return: to the pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
