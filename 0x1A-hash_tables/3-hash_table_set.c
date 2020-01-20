#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to the hash table
 * @value: value to hashing
 * Return: 1 if succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *new_node;
	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
		ht->array[idx]->key = strdup(key);
		ht->array[idx]->value = strdup(value);
		ht->array[idx]->next = NULL;
		return (1);
	}
	if (strcmp(ht->array[idx]->key, key) == 0)
	{
		free(ht->array[idx]->value);
		ht->array[idx]->value = strdup(value);
		free(new_node);
		return (1);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
