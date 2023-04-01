#include <stdio.h>

/**
 * main - prints the value of a[2] followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
int a[5] = {98, 102, 402, -102, 298};
int *p;

p = &a[2];

printf("a[2] = %d\n", *(p));
return (0);
}

