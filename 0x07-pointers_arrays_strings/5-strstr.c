#include "main.h"

/*
 *_strstr - searches a string for any of a set of bytes
 *@s: the string to be searched
 *@accept: the set of bytes to be searched for
 *
 *Return: if a set is matched - a pointer to the matched byte
 *If no set matched - NULL
 */
char *_strstr(char *haystack, char *needle)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accpet[index])
return (s);
}
s++;
}
return ('\0');
}
