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
	char c[] = "_putchar";
	int a;
	
	for (a = 0; a < 8; a++)
	{
		_putchar(c[a]);
	}

	_putchar('\n');
	return (0);
}
