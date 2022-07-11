#include "main.h"
#include <stdarg.h>
/**
 * print_string - prints a string input
 * @s: string passed in printf
 * Return: number of chars in string
 */

int print_string(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
