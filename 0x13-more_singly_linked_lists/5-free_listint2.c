#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
listint_t *currnt = *head;
listint_t *temp;
while (currnt)
{
temp = currnt->next;
free(currnt);
currnt = temp;
}
*head =  NULL;
}
