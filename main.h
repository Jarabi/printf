#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* struct operators - defines a structure for symbols and functions
* @spec: The operator
* @f: The function associated
*/
typedef struct operators
{
	char spec;
	int (*f)(va_list);
} ops_t;

/* main functions*/
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_integer(va_list list);
int print_decimal(va_list list);
int print_number(va_list list);
int _printf(const char *format, ...);
int process(const char *format, ops_t func_list[], va_list list);
unsigned int base_len(unsigned int num, int base);
int unsigned_integer(va_list list);
int print_unsgined_number(unsigned int n);

/* base conversion */
int print_binary(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/* helper functions */
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int len);
#endif
