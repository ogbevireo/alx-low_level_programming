#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* main - This is the entry point
*
* Return: Always returns 0 (success)
*/
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
	return (0);
}
