#include "hash_tables.h"

/**
 * hash_table_print - Main entry point
 * Description: Prints a hash table
 * Key pairs printed in order
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char com_flag = 0;
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (com_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			com_flag = 1;
		}
	}
	printf("}\n");
}
