#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @index: the index of the list
 * @head: points to the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = get_dnodeint_at_index(*head, index);
if (current == NULL)
return (-1);
if (current->prev != NULL)
current->prev->next = current->next;
else
*head = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
