#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get -  retrieves a value associated with a key.
 * @key: the key
 * @ht: the hash table
 *
 * Return: the value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *currnet_node;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
return (NULL);
currnet_node = ht->array[index];
if (currnet_node)
{
while (strcmp(currnet_node->key, key) != 0)
{
currnet_node = currnet_node->next;
}
return (currnet_node->value);
}
return (NULL);
}
