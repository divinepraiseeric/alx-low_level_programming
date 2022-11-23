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
	unsigned int state = 1;

	for (y = 0; state != 0; y++)
	{
		if ((s[x] == accept[y]) && (accept[y] != 0))
		{
			answer += 1;
			x += 1;
			y = 0;
		}
		else if ((s[x] != accept[y]) && (accept[y] != 0))
		{
			y += 0;
		}
		else if ((s[x] != accept[y]) && (accept[y] == 0))
		{
			state = 0;
		}
/**
*		else if ((s[x] == accept[y]) && (accept[y] == 0))
*		{
*			answer += 1;
*			x += 1;
*		}
*/
		else
			state = 0;
	}
	return (answer);
}

