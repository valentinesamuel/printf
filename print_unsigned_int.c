#include "main.h"

/**
 * print_unsig - print unsigned integers
 * @u: variadic list
 * Return: output count
 */
int print_unsig(va_list u)
{
	int divisor = 1, i, resp;
	unsigned int n = va_arg(u, unsigned int);

	for (i = 0; n / divisor > 9; i++, divisor *= 10)

