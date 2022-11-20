#include "main.h"
/**
* _strspn - gets length of prefix substring
* @s: addr from which to calculate length of substring
* @accept: I don't know yet
* Return: int value
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *test;

	for (*s = s[0]; test != 0; s++)
	{
		test = _strchr(accept, *s);
		i += 1;
	}
	return (i - 1);
}

