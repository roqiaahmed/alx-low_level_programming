#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set -  adds an element to the hash table.
 * @key: the key
 * @value: the value associated with the key.
 * @ht: the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index, i;
char *value_copy;
hash_node_t *new_node;
index = key_index((const unsigned char *)key, ht->size);
value_copy = strdup(value);
if (value_copy == NULL)
return (0);
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value_copy;
return 1;
}
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(value_copy);
return (0);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return 0;
}
new_node->value = value_copy;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return 1;
}
