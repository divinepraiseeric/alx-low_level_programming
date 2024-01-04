/**
 * main - The central function
 *
 * Descrption: A function that utilises write() from the unistd lib
 * Return: Value is 1 and always 1
 */

#include <unistd.h>

int main(void)
{
	const char *msg;
	*msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, msg, sizeof(msg) - 1);
		return (1);
}
