#include "main.h"
/**
 * print_string - prints a string input
 * @s: string passed in printf
 * Return: number of chars in string
 */

int print_string(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
