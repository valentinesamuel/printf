#include "main.h"

/**
 * print_bin - prints binary in printf function
 * @b: binary passed in
 * Return: count of what is printed
 */
int print_bin(va_list b)
{
	unsigned int i, count, num, binary, arr[32];

	i = 0;
	count = 0;
	num = va_arg(b, int);

	if (num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
