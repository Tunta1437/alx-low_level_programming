#include "lists.h"
/**
 * print_listint - Print all the elements of a listint_t lis
 * @h: listint_t to print
 * Return: Num of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
