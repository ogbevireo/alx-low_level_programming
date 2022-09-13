#include "main.h"
/**
* main - Print the alphabet in lowercase
*
* Return: Always returns 0 (success)
*/
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
	return (0);
}
