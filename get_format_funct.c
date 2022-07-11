#include "main.h"
#define NULL 0
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
	{"i", print_int},
	{"d", print_dec},
	{"r", print_rev},
	{"b", print_bin},
