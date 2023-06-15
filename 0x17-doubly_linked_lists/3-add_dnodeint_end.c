#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: the value
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *current = *head;
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (*head == NULL) {
*head = new_node;
return (new_node);
}
while (current->next != NULL)
current = current->next;
current->next = new_node;
new_node->prev = current;
return (new_node);
}
