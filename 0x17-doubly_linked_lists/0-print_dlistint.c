#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h : head of the list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
int num = 0;
const dlistint_t *curr = h;
while (curr != NULL)
{
printf("%d\n", curr->n);
curr = curr->next;
num += 1;
}
return (num);
}
