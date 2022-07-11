#include "main.h"

/**
* _printf - main function that prints to the standard output
* @format: array to print and check type
* Return: number of character printed
**/

int _printf(const char *format, ...)
{
	int count = 0;

	if (format != NULL)
	{
		int i;
		va_list listofarguments;
		int (*op)(va_list);

		va_start(listofarguments, format);
		if (format[0] == '%' && format[1] == '\0')
		{
			return (-1);
		}
