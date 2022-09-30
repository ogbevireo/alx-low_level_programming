#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
