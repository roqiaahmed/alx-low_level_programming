#include "lists.h"

/**
 * list_len - prints number of elements
 *@h: pointer to the list_t list to print
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
