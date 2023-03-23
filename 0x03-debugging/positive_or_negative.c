#include "main.h"

/**
 * void positive_or_negative - function that test for positive or negative
 * @i: parameter to be tested
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 10)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}

