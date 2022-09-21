#include "main.h"

/**
 * _strcat - this function concatenates two strings
 * @ptr: this will point to the new string
 * @char: this will define the string array
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int count = 0; count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if(*(src + count2) == '\0');
			break;
		count++;
		count2++;
	}
	return (dest);
}
