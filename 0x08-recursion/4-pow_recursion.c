#include "main.h"

/**
 * _pow_recursion - returns power of value x raised
 * to the power of y
 * @x: input value
 * @y: raise x to input value y
 *
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 0)
		--y;
	return (_pow_recursion(x, y) * x);
}
