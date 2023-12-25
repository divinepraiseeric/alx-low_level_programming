/**
 * main - The central function
 *
 * Descrption: A function that prints the size of varying c types
 * Return: Value is 0
 */

#include <stdio.h>

int main(void)
{
	puts("Size of a char: %d byte(s)" sizeof(char));
	puts("Size of an int: %d byte(s)" sizeof(int));
	puts("Size of a long int: %d byte(s)" sizeof(long));
	puts("Size of a long long int: %d byte(s)" sizeof(double));
	puts("Size of a float: %d byte(s)" sizeof(float));
	return (0);
}
