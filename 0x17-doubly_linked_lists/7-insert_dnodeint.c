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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @n: integer
 * @idx: the index of the list
 * @h: points to the node
 *
 * Return:  the address of the new node, or NULL if it failed
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current_node;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
current_node = get_dnodeint_at_index(*h, idx);
if (current_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->prev = current_node->prev;
new_node->next = current_node;
if (current_node->prev != NULL)
current_node->prev->next = new_node;
current_node->prev = new_node;
if (idx == 0)
*h = new_node;
return (new_node);
}
