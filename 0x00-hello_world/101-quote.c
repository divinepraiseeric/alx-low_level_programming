/**
 * main - The central function
 *
 * Descrption: A function that utilises write() from the unistd lib
 * Return: Value is 1 and always 1
 */

#include <unistd.h>

int main(void)
{
	char *i = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, i, sizeof(i) - 1);
		return (1);
}
