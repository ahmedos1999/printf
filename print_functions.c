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
	_put_string(st);
	return (0);
}

int print_percent(va_list percent_arg)
{
	(void) percent_arg;
	return (_putchar('%'));
}

int print_int(va_list int_arg)
{
	int n = va_arg(int_arg, int);
	int res = count_digit(n);

	if (n <= 0)
		res++;

	print_number(n);
	return(res);
}

void print_number(int n)
{
	unsigned int n1;
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 **/
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int j;

	if (i < 0)
		j = i * -1;
	else
		j = i;
	while (j != 0)
	{
		j /= 10;
		d++;
	}
return (d);
}
