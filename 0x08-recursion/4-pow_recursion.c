#include "main.h"

/**
 * _pow_recursion - funtion that raised x to the power of y
 * @x: parameter that raise
 * @y: power to be raised
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
