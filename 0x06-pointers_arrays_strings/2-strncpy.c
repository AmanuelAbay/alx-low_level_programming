#include "holberton.h"
/**
 * _strncpy - copy string
 *
 * @dest: string copied to
 * @src: string to be copied
 * @n: number of character to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = -1;
while (++i < n && src[i])
{
dest[i] = src[i];
}
while (i < n)
{
dest[i++] = '\0';
}
return (dest);
}
