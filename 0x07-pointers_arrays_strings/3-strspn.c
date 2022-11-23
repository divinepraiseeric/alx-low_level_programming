#include "main.h"
/**
* _strspn - gets length of prefix substring
* @s: addr from which to calculate length of substring
* @accept: I don't know yet
* Return: int value
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int answer = 0;
	unsigned int x = 0;
	unsigned int y = 0;

	for (y = 0; accept[y]; y++)
	{
		if (s[x] == accept[y])
		{
			answer += 1;
			x += 1;
			y = 0;
		}
	}
	return (answer);
}

