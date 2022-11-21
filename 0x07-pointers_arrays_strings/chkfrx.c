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

