#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void){
int x=0;
int y=1;
int z=2;
while (x<=7)
{
while(y<=8)
{
while(z<=9)
{
putchar(x);
putchar(y);
putchar(z);
if (x != '7')
{
putchar(',');
putchar(' ');
}
z++;
}
y++;
z=y;
}
x++;
y=x;
}
putchar('\n');
return(0);
}
