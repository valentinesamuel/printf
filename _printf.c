#include "main.h"

/**
* _printf - main function that prints to the standard output
* @format: array to print and check input type
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
			return (-1);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '\0')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					op = get_format_function(format[i + 1]);
					if (op != NULL)
						count += op(listofarguments);
					else
						count += _putchar(format[i]) + _putchar(format[i + 1]);
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(listofarguments);
	}
	return (count);
}
