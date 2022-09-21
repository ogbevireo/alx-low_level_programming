#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: variable to hold the copied string
 *@src: variable that is to be cpoied
 *@n: n bytes to be copied
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
