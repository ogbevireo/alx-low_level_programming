#include "main.h"
/**
* more_numbers - write a function that prints the number from 0 to 14
* in ten places followed by a new line
* Return: no return
*/
void more_numbers(void)
{
	int c;

	for (c = 0; c <= 14; c++)
	{
		_putchar(c / 10 + 48);
		_putchar(c % 10 + 48);
	}
	_putchar('\n');
}
