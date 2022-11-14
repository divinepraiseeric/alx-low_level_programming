#include "main.h"
/**
* _strchr - locates a character in a str
* @s: address of string
* @c: character to locate
* Return: a pointer or NULL
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
		else if (*s == EOF)
			return (0);
	}
	while (*s++)
	return (0);
}

