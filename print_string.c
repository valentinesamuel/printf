#include "main.h"
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
	else if (*str == '\0')
	{
		return (-1);
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
