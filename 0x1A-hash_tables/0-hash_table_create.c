#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: size of the matriz
 * Return: Pointer to hash_table if is Sucess or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL || size <= 0)
		return (NULL);
	new_hash->array = malloc(sizeof(hash_node_t * ) * size);
	if (new_hash->array == NULL)
		return (NULL);
	new_hash->size = size;
	return (new_hash);
}
