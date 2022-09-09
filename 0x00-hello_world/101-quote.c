#include <unistd.h>
/**
* main - printing to standard error
*
* Return: Always 1 (Not sure what this meanshere)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
