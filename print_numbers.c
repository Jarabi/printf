#include "main.h"

/**
 * print_number - prints a number send to this function
 * @list: List of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list list)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(list, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of argumets
 *
 * Return: count of printed numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);

	return (print_unsgined_number(num));
}

/**
 * print_unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 *
 * Return: Count of digits printed
 */
int print_unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
