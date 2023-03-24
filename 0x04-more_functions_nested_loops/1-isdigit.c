#include "main.h"

/**
 * _isdigit -  function that checks for a digit 0 through 9
 * @c: parameter to be checked
 * Return: 1 if it is between 0 to 9
 * and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
