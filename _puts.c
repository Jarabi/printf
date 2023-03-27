#include "main.h"
/**
 * _puts - Function that prints a string to stdout
 * @str: pointer to string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
