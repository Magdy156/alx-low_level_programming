#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: A pointer to a hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *ptr;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				ptr = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = ptr;
			}
		}
	}
	free(ht->array);
	free(ht);
}
