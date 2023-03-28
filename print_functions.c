#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - writes a character  to stdout
 * @list: The character to print
 *
 * Return: number of characters printed.
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_str - writes a string to stdout
 * @list: The string to print
 *
 * Return: number of characters printed.
 */
int print_str(va_list list)
{
	int i = 0;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	for (; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_percent - writes a '%' to stdout
 * @list: list of arguments
 *
 * Return: number of chars printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
* print_integer - prints integer to stdout
* @list: integer printed
*
* Return: number of integers  printed.
*/
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
* print_decimal - prints decimal to the stdout
* @list: decimal printed
*
* Return: number of decimals printed
*/
int print_decimal(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
