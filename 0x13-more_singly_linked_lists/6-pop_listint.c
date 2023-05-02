#include "lists.h"
/**
 * pop_listint - Delete the head node of a listint_t list
 * @head: Pointer to the first element in the listint_t list
 * Return: Data inside the elements that was deleted,
 * 0 if empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
