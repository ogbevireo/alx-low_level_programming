#include "main.h"
/**
 *_strcmp - comapres two strings
 *@s1: string one
 *@s2: string two
 *Return: if s2 is equal to s1 return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, output = 0;

	while (output == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		output = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (output);
}
