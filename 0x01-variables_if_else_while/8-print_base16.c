#include <stdio.h>
/**
 * main - print all hexadecimal characters in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	}
	for (c = 97; c < 103; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
