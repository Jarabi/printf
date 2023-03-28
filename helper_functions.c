#include "main.h"

/**
 * base_len - Calculates the length for a binary number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 *
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
        unsigned int i;

        for (i = 0; num > 0; i++)
                num /= base;
        return (i);
}

/**
 * rev_string - reverses a string in place
 * @s: string to reverse
 *
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
        unsigned int len = 0, i;
        char *dest, temp;

        /* get length of s */
        while (s[len] != '\0')
                len++;

        /* allocate memory for dest */
        dest = malloc(sizeof(char) * (len + 1));

        if (dest == NULL)
                return (NULL);

        /* copy s to dest */
        _memcpy(dest, s, len);

        /* reverse string */
        for (i = 0; i < len; i++, len--)
        {
                temp = dest[len -1];
                dest[len - 1] = dest[i];
                dest[i] = temp;
        }
        return (dest);
}

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
