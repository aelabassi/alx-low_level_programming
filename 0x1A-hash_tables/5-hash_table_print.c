#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_;
	unsigned long int i;
	unsigned char comma = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma == 1)
				printf(", ");
		node_ = ht->array[i];
		while (node_)
		{
			printf("'%s': '%s'", node_->key, node_->value);
			node_ = node_->next;
			if (node_)
				printf(", ");
		}
		comma = 1;
		}
	}
	printf("}\n");
}
