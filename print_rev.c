#include "main.h"

/**
 * print_rev - prints in reverse
 * @r: input to print in rev
 * Return: the output count
 */
int print_rev(va_list r)
{
	int i;
	int length;
	char *str;

	str = va_arg(r, char *);
	length = _strlen(str);

	if (str == NULL)
	{
		str = "(null)";
	}
