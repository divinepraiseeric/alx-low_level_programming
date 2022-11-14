#include "main.h"
/**
* _strchr - locates a character in a str
* @s: address of string
* @c: character to locate
* Return: a pointer or NULL
*/
char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
			return (s);
		else
		{
			char *nullptr = 0;
			return (nullptr);
		}
	}
	return (s);
}

