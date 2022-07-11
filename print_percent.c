#include "main.h"i

/**
 * print_percent - prints percent input
 * @p: the percentage
 * Return: number of output
 */

int print_percent(va_list p)
{
	char *str;
	int count = 0;

	str = malloc(2);
	if (str == NULL)
	{
