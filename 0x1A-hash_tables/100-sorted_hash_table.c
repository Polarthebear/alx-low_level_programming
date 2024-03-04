#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Main entry point
 * Description: Create a hash table thats been sorted
 * @size: size of new shash table
 * Return: *shash (Success) or NULL(Fail)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int i;

	hash_t = malloc(sizeof(shash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		hash_t->array[i] = NULL;
	}
	hash_t->shead = NULL;
	hash_t->stail = NULL;


	return (hash_t);
}


/**
 * shash_table_set - Main entry point
 * Description: Add new element to a sorted hash table
 * @ht: pointer to sorted hash table
 * @key: key to add
 * @value: value of said key
 * Return: 1 (Success) or 0 (Fail)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *value_cpy;
	unsigned long int idx;
	shash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_cpy;
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_cpy);
		free(new);
		return (0);
	}
	new->value = value_cpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->next = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}

	return (1);
}


/**
 * shash_table_get - Main entry point
 * Description: Retrieve the value associated with a key
 * @ht: pointer to hash table
 * @key: key to get value of
 * Return: NULL (Fail) or value of key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}


/**
 * shash_table_print - Main entry point
 * Description: Print the sorted hash table in order
 * @ht: pointer to sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_print_rev - Main enrty point
 * Description: print sorted hash table in reverse order
 * @ht: pointet to sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

        if (ht == NULL)
                return;

        node = ht->stail;
        printf("{");
        while (node != NULL)
        {
                printf("'%s': '%s'", node->key, node->value);
                node = node->sprev;
                if (node != NULL)
                	printf(", ");
        }
        printf("}\n");
}

/**
 * shash_table_delete - Main entry point
 * Description: Delete a sorted hash table
 * @ht: pointer to sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
	
	free(head->array);
	free(head);
}
