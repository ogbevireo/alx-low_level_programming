#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument parameter
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
