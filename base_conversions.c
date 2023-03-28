#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int base_len(unsigned int num, int base);
char *rev_string(char *s);

/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 *
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	int i, len;
	unsigned int num;
	char *s;
	char *rev_s;

	num = va_arg(list, unsigned int);

	/* check if num is 0 or < 0 */
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	/* get length of num in base 2 */
	len = base_len(num ,2);

	/* allocate memory for decimal string */
	s = malloc(sizeof(char) * (len + 1));

	/* check if s == NULL */
	if (s == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			s[i] = '0';
		else
			s[i] = '1';
		num /= 2;
	}
	s[i] = '\0';

	/* reverse string */
	rev_s = rev_string(s);

	if (rev_s == NULL)
		return (-1);

	/* print out the binary string */
	for (i = 0; rev_s[i] != '\0'; i++)
		_putchar(rev_s[i]);

	/* free memory allocations */
	free(s);
	free(rev_s);
	return (len);
}

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
