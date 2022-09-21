#include "main.h"

/**
 * _strcat - this function concatenates two strings
 * @src: this will be the string that will be concatenated to the 2nd string
 * @dest: this will store the resultant string after the copy
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
