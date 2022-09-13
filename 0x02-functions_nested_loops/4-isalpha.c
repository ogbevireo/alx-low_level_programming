#include "main.h"
/**
* _isalpha - Check if output is an alphabet or not
*
* @c: - Integer variable to output the characters in ASCII code
*
* Return: Always 0 (success)
*/
int _isalpha(int c)
{

	if (c >= 97 && c <= 122 || c>= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
