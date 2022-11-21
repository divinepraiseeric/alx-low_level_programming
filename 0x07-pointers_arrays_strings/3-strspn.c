#include "main.h"
/**
* chkfrx - checks if a character is in a string pool
* @pool: pointer var for the sub function
* @x: character to find using the sub function
* Return: int value
*/
unsigned int chkfrx(char *pool, char x)
{
	unsigned int result, p = 0;

	for (result = 0; pool[p] > 0; p++)
	{
		if (x == pool[p])
			result += 1;
		else
			result += 0;
	}
	return (result);
}

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

