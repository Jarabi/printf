#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int hex_check(int num, char x);

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
	len = base_len(num, 2);

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
 * print_octal - Prints the numeric representation of a number in base 8
 * @list: List of all the arguments passed to the program
 *
 * Return: Number of symbols printed to stdout
 */
int print_octal(va_list list)
{
	unsigned int num;
	int len, i;
	char *octal_rev;
	char *rev_str;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = base_len(num, 8);

	octal_rev = malloc(sizeof(char) * len + 1);

	if (octal_rev == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		octal_rev[len] = (num % 8) + 48;
		num /= 8;
	}

	octal_rev[len] = '\0';

	rev_str = rev_string(octal_rev);

	if (rev_str == NULL)
		return (-1);

	/* print out the octal string */
	for (i = 0; rev_str[i] != '\0'; i++)
		_putchar(rev_str[i]);

	free(octal_rev);
	free(rev_str);

	return (len);
}

/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @list: List of the arguments passed to the function
 *
 * Return: Number of characters printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int len, i;
	int rem;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = base_len(num, 16);

	hex_rep = malloc(sizeof(char) * len + 1);

	if (hex_rep == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		rem = num % 16;
		if (rem > 9)
		{
			rem = hex_check(rem, 'x');
			hex_rep[len] = rem;
		}
		else
			hex_rep[len] = rem + 48;
		num /= 16;
	}

	hex_rep[len] = '\0';

	rev_hex = rev_string(hex_rep);

	if (rev_hex == NULL)
		return (-1);

	/* print out the hex string */
	for (i = 0; rev_hex[i] != '\0'; i++)
		_putchar(rev_hex[i]);

	free(hex_rep);
	free(rev_hex);
	return (len);
}


/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 *
 * Return: Number of characters printed
 */
int print_heX(va_list list)
{
	unsigned int num;
	int len, i;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = base_len(num, 16);

	hex_rep = malloc(sizeof(char) * len + 1);

	if (hex_rep == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';

	rev_hex = rev_string(hex_rep);

	if (rev_hex == NULL)
		return (-1);

	/* print out the heX string */
	for (i = 0; rev_hex[i] != '\0'; i++)
		_putchar(rev_hex[i]);

	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 *
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num -= 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
