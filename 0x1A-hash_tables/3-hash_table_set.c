#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: (char) key
 * @value: (char) value
 * Return: a if it successful, o otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ht_;
	char *new_value;
	unsigned long int index, i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	new_value = strdup(value);
	if (!new_value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}
	new_ht_ = malloc(sizeof(hash_node_t));
	if (!new_ht_)
	{
		free(new_value);
		return (0);
	}
	new_ht_->key = strdup(key);
	if (!new_ht_->key)
	{
		free(new_ht_);
		return (0);
	}
	new_ht_->value = new_value;
	new_ht_->next = ht->array[index];
	ht->array[index] = new_ht_;
	return (1);
}
