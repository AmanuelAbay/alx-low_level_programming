#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - check alphabet, lowercase or uppercase
 *
 * @c: character to be checked
 *
 *Return: 1 if it's a character, 0 if otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}