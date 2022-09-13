#include "main.h"
/**
* _islower - Check if output is in lowercase or otherwise
* @c - Integer variable to output the characters in ASCII code
* Return: Always 0 (success)
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
