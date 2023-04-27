#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int i = 0;
list_t *curr = *head;
list_t *new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
while (str[i])
i++;
new_node->str = strdup(str);
new_node->len = i;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (curr->next)
curr = curr->next;
curr->next = new_node;
return (new_node);
}
