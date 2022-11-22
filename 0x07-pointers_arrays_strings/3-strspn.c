#include "main.h"
/**
* _strspn - gets length of prefix substring
* @s: addr from which to calculate length of substring
* @accept: I don't know yet
* Return: int value
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int answer, x, y = 0;

	while (accept[x])
	{
		while (s[y] == accept[x])
		{
			answer += 1;
			x = 0;
			y += 1;
		}
		x += 1;
	}
	return (answer);
}

