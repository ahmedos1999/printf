#include "main.h"

int print_char(va_list char_arg)
{
	_putchar(va_arg(char_arg, int));
	 return (1);
}

int print_string(va_list str_arg)
{
	char *st = va_arg(str_arg, char *);
	if (!st)
		st = "(Null)";
	return (_put_string(st));
}

int print_percent(va_list percent_arg)
{

	return (_putchar('%'));
}
