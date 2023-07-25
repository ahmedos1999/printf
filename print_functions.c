#include "main.h"

/**
 * print_char - prints a character to stdout
 * @char_arg: va_list arguments from _printf
 * Return: 1 on success
 */
int print_char(va_list char_arg)
{
	_putchar(va_arg(char_arg, int));
	return (1);
}

/**
 * print_string - prints a string to stdout
 * @str_arg: va_list arguments from _printf
 * Return: 1 on success
 */
int print_string(va_list str_arg)
{
	char *st = va_arg(str_arg, char *);

	if (!st)
		st = "(Null)";
	return (_put_string(st));
}

/**
 * print_percent - prints a percent sign to stdout
 * @percent_arg: va_list arguments from _printf
 * Return: 1 on success
 **/
int print_percent(va_list percent_arg)
{
	(void) percent_arg;
	_putchar('%');
	return (1);
}
/**
 * print_int - prints a percent sign to stdout
 * @int_arg: va_list arguments from _printf
 * Return: numbers printed
 */
int print_int(va_list int_arg)
{
	int n = va_arg(int_arg, int);
	int res = count_digit(n);

	if (n <= 0)
		res++;

	print_number(n);
	return (res);
}
/**
 * print_address - prints address of input in hexa format
 * @pointer_arg: va_list arguments from _printf
 * Return: number of char printed
 */
int print_address(va_list pointer_arg)
{
	char *p_str;
	unsigned long int p_address = va_arg(pointer_arg, unsigned long int);

	register int count = 0;

	if (!p_address)
	{
		return (_put_string("(nil)"));
	}
	p_str = convert(p_address, 16, 1);
	count += _put_string("0x");
	count += _put_string(p_str);
return (count);
}
