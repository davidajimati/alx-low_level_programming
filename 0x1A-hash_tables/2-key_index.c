#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key.
 * @key: key of the value
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int idx, temp;

	temp = hash_djb2(key);
	if (temp < size)
		idx = temp;
	return (idx);
}
