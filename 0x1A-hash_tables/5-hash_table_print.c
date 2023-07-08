#include "hash_tables.h"
#include <stdbool.h>

/**
 * hash_table_print - prints a hash table.
 * @ht: A pointer to the hash table to be printed.
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	bool comma_flag = 0;

	if (!ht)
		return;

	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma_flag)
				printf(", ");

			temp = ht->array[i];
			while (temp)
			{
				printf("'%s' : '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
