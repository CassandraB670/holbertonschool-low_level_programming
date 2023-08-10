#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the key
 * @size: size of the hash table
 * Return: index at wich the key/value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashValue = hash_djb2(key);
	unsigned long int index = hashValue % size;

	return (index);
}
