#include "main.h"

/**
 * print_octal - prints number in octal base.
 * @o: list containing octal number to be printed
 * Return: number of octals printed
 */

int print_octal(va_list o)
{
	unsigned int num = va_arg(o, unsigned int);
	unsigned int copy;
	char *octa;
	int i, j = 0, charPrinted = 0;

	if (num == 0)
		return (_putchar('0'));
	for (copy = num; copy != 0; j++)
	{
		copy = copy / 8;
	}
	octa = malloc(j);
