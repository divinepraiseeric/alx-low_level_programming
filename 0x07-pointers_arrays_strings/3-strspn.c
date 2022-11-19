#include "main.h"
/**
* _strspn - gets length of prefix substring
* @s: addr from which to calculate length of substring
* @accept: I don't know yet
* Return: int value
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, final_i = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				*s = *s++;
				final_i = ++i;
				*accept = accept[0];
			}
			else
				*accept = *accept++;
		}
	}
	return (final_i);
}

