#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print strings
 * @separator: String to be printed between strings
 * @n: Num of strings
 * @...: A variable num of strings to be printed
 * Description: If separator is NULL, don't print it
 *              If one of the strings if NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list s;
char *str;
unsigned int i;

va_start(s, n);

for (i = 0; i < n; i++)
{
str = va_arg(s, char *);

if (str == NULL)
printf("(nil)");

else
printf("%s", str);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");

va_end(s);
}
