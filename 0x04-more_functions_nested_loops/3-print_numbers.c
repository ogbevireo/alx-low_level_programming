#include "main.h"
/**
* print_numbers - write a function that prints the number from 0 to 9
*
* Return: Always 0 (success)
*/
void print_numbers(void)
{
	char c;

	for (c = 48; c >= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
