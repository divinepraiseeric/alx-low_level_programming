#include "main.h"
#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{

if (num == 100)
{
printf("Buzz \n");
}
else if (num % 3 == 0 && (num % 5 != 0))
{
printf("Fizz ");
}
else if (num % 5 == 0 && (num % 3 != 0))
{
printf("Buzz ");
}
else if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz ");
}
else if (num > 100)
{
printf("");
}
else
{
printf("%d ", num);
}

}

return (0);
}
