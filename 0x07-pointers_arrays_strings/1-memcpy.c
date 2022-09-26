#include "main.h"
/**
 * _memcpy - copies from one part of memory to another
 * @dest: destination in memory
 * @src: source in memory
 * @n:n bytes to be filled
 * Return: returns the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
