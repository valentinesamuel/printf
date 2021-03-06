#include "main.h"
/**
* get_format_function - search and return the correct function
* @format: array to check
* Return: return a function (if written correctly)
*/
int (*get_format_function(char format))(va_list)
{
	unsigned int i = 0;
	code_format get_func[] = {
	{"c", print_char},
	{"s", print_string},
	{"S", print_upper_string},
	{"i", print_int},
	{"d", print_dec},
	{"r", print_rev},
	{"b", print_bin},
	{"u", print_unsig},
	{"o", print_octal},
	{"x", print_x},
	{"X", print_X},
	{"R", print_rot13},
	{"%", print_percent},
	{NULL, NULL}
	};
	while (get_func[i].specifier != NULL)
	{
		if (get_func[i].specifier[0] == format)
			return (get_func[i].fp);
		i++;
	}
	return (NULL);
}
