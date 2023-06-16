#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;

while (digit < 10)
{
putchar(digit + '0'); /* Print the current digit */

if (digit != 9)
{
putchar(',');
putchar(' ');
}

digit++;
}

putchar('\n');

return (0);
}

