#include "main.h"
/**
 * _memset - Fll memory with a constant byte
 * @s: Starting address of memory to be filled
 * @b: The constant byte
 * @n: Number of bytes to be changed
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int x = 0;

for (; n > 0; x++)
{
s[x] = b;
n--;
}
return (s);
}
