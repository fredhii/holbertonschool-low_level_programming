#include "hash_tables.h"


/**
 * hash_table_get - Gets an element in table
 * @ht: Hash table
 * @key: Key
 * Return: Pointer to value, NULL if failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *aux;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	aux = ht->array[i];
	while (aux && strcmp(aux->key, key) != 0)
		aux = aux->next;

	if (aux && strcmp(aux->key, key) == 0)
		return (aux->value);


	return (NULL);
}
