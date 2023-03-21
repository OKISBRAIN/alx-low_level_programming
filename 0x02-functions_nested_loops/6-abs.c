#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 * @j: parameter to be checked
 *
 * Return: always j
 */

int _abs(int j)
{
	if (j < 0)
		j = -(j);
	else if (j >= 0)
		j = j;
	return (j);
}
