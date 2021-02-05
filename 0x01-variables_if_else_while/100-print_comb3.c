#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
int j = '1';
int k = '1';
while (i <= '8')
{
while (j <= '9')
{
putchar(i);
putchar(j);
if(i!='8')
{
putchar(',');
putchar(' ');
}
j+=1;
 }
i+=1;
k+=1;
j=k;
}
putchar('\n');
return (0);
}
