#include <main.h>
/**
 * _memtest - fills memory with a constant byte n
 * @s: memory area
 * @n: bytes to be filled
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}

