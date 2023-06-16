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
