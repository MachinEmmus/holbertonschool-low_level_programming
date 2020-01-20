/**
 * hash_djb2 - algoritm that create a hash
 * @str: is string or input
 * Return: Hash;
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long hash = 5381;
int c;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
