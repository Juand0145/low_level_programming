#include "hash_tables.h"

/**
 * key_index - Return the index(number) of a key(string)
 * in a hash table
 * @key: The string to look for in the hash table
 * @size: The size of the arrays were are stored the indexes
 * Return: The index of the key that is stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index;
    unsigned long int hash;

    if (size == 0)
        return 0;

    hash = hash_djb2(key);
    index = hash % size;

    return (index);
}
