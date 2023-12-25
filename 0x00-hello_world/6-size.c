/**
 * main - The central function
 *
 * Descrption: A function that prints the size of varying c types
 * Return: Value is 0
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(double));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
