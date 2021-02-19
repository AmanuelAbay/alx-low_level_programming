#include "holberton.h"
/**
 * reverse_array - reverse n number of array
 *
 * @a: integer array
 * @n: number of array to reverse
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int len = 0;
int temp;
n = n - 1;
while (len <= n)
{
temp = *(a + len);
*(a + len) = *(a + n);
*(a + n) = temp;
len++;
n--;
}
}
