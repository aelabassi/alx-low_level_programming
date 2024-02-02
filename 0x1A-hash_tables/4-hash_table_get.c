#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: (char) the key
 * Return: the value associated with that key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node_;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node_ = ht->array[index];
	while (node_ && strcmp(node_->key, key) != 0)
		node_ = node_->next;
	return ((node_ == NULL) ? NULL : node_->value);

}
