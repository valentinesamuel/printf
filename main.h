#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int (*get_format_function(char format))(va_list listOfArgs);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_upper_string(va_list S);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_percent(va_list p);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);

int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);

int _strlen(char *s);
void _string_upper(char *str);
char *_strcpy(char *dest, char *src);
int is_printable(char c);
int _isalpha(char c);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);

/**
 * struct c_format - code format foe each function
 * @specifier: specifier after % sign
 * @fp: function pointer to appropriate print function
 **/
typedef struct c_format
{
	char *specifier;
	int (*fp)(va_list);
} code_format;

#endif
