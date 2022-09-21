#include "main.h"

/**
 * _strncat - this function concatenates two strings while using n bytes
 * @dest: this will store the values concatenated
 * @src: this will be the string that will be added to the 2nd
 * @n: the n bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
