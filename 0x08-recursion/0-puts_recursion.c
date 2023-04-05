#include "main.h"
#include <stdio.h>

/*
 *base case: end of string
 *_puts_recursion - make a recursive call with the next character
 **s: string to be copied
 *
 *Return: 0
 */
void _puts_recursion(char *s);
{
if (*s == '\0')
{
putchar ('\n');
return (0);
}

putchar(*s);
_puts_recursion(s + 1);
{
int main(void);
}
char str[] = "Hello, world!";
_puts_recursion(str);
return (0);
}

