#include "main.h"
/**
*print_last_digit - Print the last digit of a number
*
*Return: The value of the last digit.
*
*@i: Integer
*/

int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
