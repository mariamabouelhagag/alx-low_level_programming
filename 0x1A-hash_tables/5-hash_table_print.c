#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_print;

	if (ht == NULL)
		return;

	printf("{");
	first_print = 1;
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (!first_print)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			first_print = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
