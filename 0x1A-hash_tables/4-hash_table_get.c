#include "hash_tables.h"

/**
 * hash_table_get - Main entry point
 * Description: Retrieve the value associated with a key
 * @ht: pointer to hash table
 * @key: key to find value of
 * Return: Value of key (Success) NULL (Fail)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
