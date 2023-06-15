#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node
 * @head: head of the list
 * @index: the index
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;
unsigned int num = 0;
const dlistint_t *curr = head;
while (curr != NULL)
{
curr = curr->next;
num += 1;
}
if (num - 1 < index)
return (NULL);
else
{
while (i != index)
{
current = current->next;
i++;
}
return (current);
}
}
