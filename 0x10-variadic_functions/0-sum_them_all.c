#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Return the sum of all its parameters
 * @n: Num of parameters
 * @...: A variable num of parameters to calculate the sum of
 * Return: If n == 0 - 0, if not the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int x, sum = 0;

va_start(ap, n);

for (x = 0; x < n; x++)
{
sum += va_arg(ap, int);
}
va_end(ap);

return (sum);
}
