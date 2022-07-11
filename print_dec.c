#include "main.h"

/**
 * print_dec - prints decimal numbers in printf
 * @d: decimal integers
 * Return: number of intergers printed
 */

int print_dec(va_list d)
{
	unsigned int absolutenum, count, auxnumber, zerocount;
	int numbers;

	count = 0;

	numbers = va_arg(d, int);

	if (numbers < 0)
	{
		absolutenum = (numbers * -1);
		count += _putchar(45);
	}
	else
	{
		absolutenum = numbers;
	}
