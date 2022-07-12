#include "main.h"
/**
 * print_char - prints characters in printf funct
 * @c: the character
 * Return: 1
 */
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
