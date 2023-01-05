#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */

void delete_hash_table(hash_table *ht) {
    unsigned long int i;
    // Free each bucket
    for (i = 0; i < ht->size; i++) {
	if(ht->buckets[i] != NULL){    
		bucket *b = ht->buckets[i];
		while (b) {
		    bucket *next = b->next;
		    free(b);
		    b = next;
		}
	}
    }
    // Free the array of buckets
    free(ht->buckets);
    // Free the hash table structure itself
    free(ht);
}
