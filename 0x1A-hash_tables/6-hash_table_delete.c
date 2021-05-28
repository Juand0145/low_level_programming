#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the has table we want to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp_1 = NULL, *temp_2 = NULL;
	unsigned int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		temp_1 = ht->array[i];
		while (temp_1 != NULL)
		{
			temp_2 = temp_1;
			temp_1 = temp_1->next;
			free(temp_2->key);
			free(temp_2->value);
			free(temp_2);
		}
		i++;
	}
	free(temp_1);
	free(ht->array);
	free(ht);
}