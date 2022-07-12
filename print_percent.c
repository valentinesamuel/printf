#include "main.h"

/**
 * print_percent - prints percent input
 * @p: the percentage
 * Return: number of output
 */

int print_percent(va_list p)
{
	return (_putchar(va_arg(p, int)));
}
