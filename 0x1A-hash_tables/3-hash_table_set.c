#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp;
    char *key_2, *val_2;
    if (!ht || !ht->array || !key || !*key)
        return (0);
    key_2 = strdup(key);
    val_2 = strdup(value);
    if (key_2 == NULL || val_2 == NULL)
        {
            free(key_2);
            free(val_2);
            return (0);
        }           
    index = key_index((const unsigned char *) key, ht->size);
    temp = ht->array[index];
    while (temp != NULL)    
    {
        if (strcmp(key_2, temp->key) == 0)
        {
            free(temp->key);
            if (temp->value)
                free(temp->value);
            temp->key = key_2;
            temp->value = val_2;
            return (1);
        }
        temp = temp->next;
    }
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(key_2);
        free(val_2);
        return (0);
    }
    new_node->key = key_2;
    new_node->value = val_2;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
