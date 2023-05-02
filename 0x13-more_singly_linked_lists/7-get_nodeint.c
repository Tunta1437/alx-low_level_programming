#include "lists.h"
/**
 * get_nodeint_at_index - Return the nth node of a listint_t list
 * @head: First node in the listint_t list
 * @index: Index of the node to return
 * Return: Pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
