#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - helper function: implementation of memcpy
 * @dest: destination of copy
 * @src: source of copy
 * @len: bytes to copy
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
