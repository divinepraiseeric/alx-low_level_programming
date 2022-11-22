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
	char n[1];

	for (x = 0; s[x] == accept[y]; x++)
	{
		for (y = 0; accept[y] != n[1]; y++)
		{
			if (accept[y] != s[x])
				answer = answer + 0;
			else if (accept[y] == s[x])
			{
				y = 0;
				answer = answer + 1;
				x = x + 1;
			}
		}
	}
	return (answer);
}

