#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: (ulint) size of the array
 * Return: a new created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht_;
	unsigned long index;

	ht_ = malloc(sizeof(hash_table_t));
	if (!ht_)
		return (NULL);
	ht_->size = size;
	ht_->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht_->array)
		return (NULL);
	for (index = 0; index < size; index++)
	{
		ht_->array[index] = NULL;
	}
	return (ht_);
}
