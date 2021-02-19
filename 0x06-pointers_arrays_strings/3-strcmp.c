#include "holberton.h"
/**
 * _strcmp - compares two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: result, if s1>s2 positive, if s1<s2 negative and 0 if s1=s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int resu = 0;
while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
{
resu = *(s1 + i) - *(s2 + i);
if (resu == 0)
{
i++;
}
else
break;
}
return (resu);
}
