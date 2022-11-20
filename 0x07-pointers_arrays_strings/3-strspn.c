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

	for (accept = &accept[0]; *accept != 0; accept++)
	{
		for (s = &s[0]; *s == *accept; s++)
		{
			i = i + 1;
			accept = &accept[0];
		}
	}
	return (i);
}

