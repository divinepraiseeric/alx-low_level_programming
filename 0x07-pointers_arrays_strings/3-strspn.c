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
	char npt[] = "";

	while (x++)
	{
		if (*(accept + x) == *(s + y))
		{
			if (*(accept + x) != *npt)
			{
				answer = answer + 1;
				y = y + 1;
			}
		}
		else if (*(accept + x) != *(s + y))
		{
			if (*(accept + x) != *npt)
				x = x + 1;
		}
		else if (*(accept + x) == *npt)
			break;
	}
	return (answer);
}

