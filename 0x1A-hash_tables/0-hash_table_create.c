#include "hash_tables.h"

/**
 * hash_table_create - Is a function that creates a hash table.
 * @size: The size of teh array to create the hash table
 * Return: Pointer to recnt created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_t;
    size_t index;

    if (size == 0)
        return NULL;

    hash_t = malloc(sizeof(hash_table_t));
    if (hash_t == NULL)
        {
            free(hash_t);
            return NULL;
        }
        

    hash_t->size = size;

    hash_t->array = malloc(sizeof(hash_node_t *) * size);
    if (hash_t->array == NULL)
    {
        free(hash_t->array);
        free(hash_t);
        return NULL;
    }

    for (index = 0; index < size; index++)
        *(hash_t->array + index) = NULL;

    return hash_t;
}