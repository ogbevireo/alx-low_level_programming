#include "main.h"

/**
 * _strncat - this function concatenates two strings while using n bytes
 * @ptr: this will point to the new string
 * @char: this will define the string array
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0; count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if(*(src + count2) == '\0');
			break;
		count++;
		count2++;
	}
	return (dest);
}
