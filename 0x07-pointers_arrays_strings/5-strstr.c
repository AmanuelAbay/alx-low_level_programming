#include "holberton.h"
/**
 * _strstr - locate a substring
 *
 * @haystack: string to check
 * @needle: substring
 *
 * Return: substring or NULL if not located
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *Begin = haystack;
char *pattern = needle;
while (*haystack && *pattern && *haystack == *pattern)
haystack++,
pattern++;
if (!*pattern)
return (Begin);
haystack = Begin + 1;
}
return (0);
}
