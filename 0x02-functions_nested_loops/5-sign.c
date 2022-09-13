#include "main.h"
/**
* print_sign - Write a function that prints the sign of a number.
*
* @n: - Integer variable to output the characters in ASCII code
*
* Return: Always 0 (success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
}
