#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 *
 *@size: the size of the array
 * Return: newly created or NULL if it fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    hash_table_t *table = NULL;
    hash_node_t **array = NULL;
    table = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (table == NULL)
    {
        return NULL;
    }
    array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
    if (array == NULL)
    {
        free(table);
        return NULL;
    }
    for (i = 0; i < size; i++)
    {
        array[i] = NULL;
    }

    table->size = size;
    table->array = array;
    return (table);
}
