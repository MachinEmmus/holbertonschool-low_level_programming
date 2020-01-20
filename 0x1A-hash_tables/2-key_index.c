#include "hash_tables.h"
/**
 * key_index - function that return a key index
 * @key: key of hash
 * @size: Matriz size
 * Return: Key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
