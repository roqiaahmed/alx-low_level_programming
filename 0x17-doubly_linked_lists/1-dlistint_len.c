#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h : head of the list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
int num = 0;
const dlistint_t *curr = h;
while (curr != NULL)
{
curr = curr->next;
num += 1;
}
return (num);
}
