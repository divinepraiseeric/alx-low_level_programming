#include "main.h"
/**
* _strspn - gets length of prefix substring
* @s: addr from which to calculate length of substring
* @accept: I don't know yet
* Return: int value
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, answer = 0;
	unsigned int test;

	do {
		test = chkfrx(accept, s[i]);
		if (test > 0)
		{
			answer += 1;
			i += 1;
		}
	} while (test > 0);
	return (answer);
}

