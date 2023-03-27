#include "main.h"
#include <stdarg.h>

/**
 * _printChar - writes a character  to stdout
 * @list: The character to print
 *
 * Return: 0.
 */
int _printChar(va_list list)
{
	_putchar(va_arg(list, int));
	return (0);
}

/**
 * _printStr - writes a string to stdout
 * @list: The string to print
 *
 * Return: 0.
 */
int _printStr(va_list list)
{
	_puts(va_arg(list, char *));
	return (0);
}

/**
 * _printPercent - writes a '%' to stdout
 *
 * Return: 0.
 */
int _printPercent()
{
	_putchar('%');
	return (0);
}
