#include "hash_tables.h"

/**
 * key_index - Main entry point
 * Description: func to get the index of a key
 * @key: key to get indexed
 * @size: size of array in hash table
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
