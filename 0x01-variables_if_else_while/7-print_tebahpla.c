#include <stdio.h>
/**
* main -  prints all single digit numbers of base 10 starting from 0.
*
* Return: Always 0 (Success)
*/

int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
