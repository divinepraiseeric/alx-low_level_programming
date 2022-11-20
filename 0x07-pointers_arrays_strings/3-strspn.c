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

	while (*accept++)
	{
		if (*s == *accept)
		{
			i = i + 1;
			accept = &accept[0];
			s = s + 1;
		}
	}
	return (i);
}

