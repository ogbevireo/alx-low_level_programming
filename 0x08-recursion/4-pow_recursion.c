#include "main.h"
/**
 * _pow_recursion - find the value of x raised to the power of y
 * @x: initial value
 * @y: value of after power is raised
 * Return: returns value of y
 */
int _pow_recursion(int x, int y)
{
	int x, y;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
