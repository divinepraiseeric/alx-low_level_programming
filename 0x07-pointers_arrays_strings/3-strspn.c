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

	while (*s > 0)
	{
		while (*accept++ > 0)
		{
			if (*s == *accept)
			{
				*s = *s++;
				i = ++i;
			}
		}
	}
	return (i);
}

