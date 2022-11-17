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

	while (*s++)
	{
		if (*(_strchr(accept, *s)) != '\0')
			i = ++i;
		else
			final_i = i;
	}
	return (final_i);
}

