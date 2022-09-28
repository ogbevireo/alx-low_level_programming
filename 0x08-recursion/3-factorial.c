#include "main.h"
/**
 * factorial - prints the factorial of a given number
 * @n: given number
 * Return: returns the factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
