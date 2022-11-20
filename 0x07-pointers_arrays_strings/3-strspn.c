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

	while (*accept != 0)
	{
		while (*s != *accept)
		{
			if (*accept != 0)
				accept = accept + 1;
		}
		i = i + 1;
		s = s + 1;
	}
	return (i);
}

