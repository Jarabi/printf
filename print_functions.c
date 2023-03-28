#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printChar - writes a character  to stdout
 * @list: The character to print
 *
 * Return: number of characters printed.
 */
int _printChar(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * _printStr - writes a string to stdout
 * @list: The string to print
 *
 * Return: number of characters printed.
 */
int _printStr(va_list list)
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
 * _printPercent - writes a '%' to stdout
 * @list: list of arguments
 *
 * Return: number of chars printed.
 */
int _printPercent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
* _printInteger - prints integer to stdout
* @list: integer printed
*
* Return: number of integers  printed.
*/
int _printInteger(va_list list)
{
	int num_length;

	num_length = print_num(list);
	return (num_length);
}

/**
* _printDeci - prints decimal to the stdout
* @list: decimal printed
*
* Return: number of decimals printed
*/
int _printDeci(va_list list)
{
	int num_length;

	num_length = print_num(list);
	return (num_length);
}
