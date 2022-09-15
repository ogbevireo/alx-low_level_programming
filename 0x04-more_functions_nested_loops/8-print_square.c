#include "main.h"
/**
* print_square -  prints a square
* @size: - integer variable for square
* Return: no return
*/
void print_square(int size)
{
	int c, b;

	for (c = 0; c < size; c++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		if (c != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
