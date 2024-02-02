#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: (uchar) the key
 * @size: (ulint) size of the hash table
 * Return: (ulint) the index of the hey
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
