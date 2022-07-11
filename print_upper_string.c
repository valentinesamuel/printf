#include "main.h"
/**
 * print_upper_string - prints custom S conversion specifier
 * @S: variadic list
 * Return: number of characters printed
 */
int print_upper_string(va_list S)
{
	char *s;
	char hex[17] = "0123456789ABCDEF";
	int total = 0, i = 0, c = 0;

	(void)hex;
	s = va_arg(S, char *);

	while (s[i])
	{
		if (((s[i] >= 0) && (s[i] < 32)) || (s[i] >= 127))
		{
