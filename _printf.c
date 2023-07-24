#include "main.h"
int _printf(const char *format, ...)
{
	int (*func_p)(va_list);
	va_list arguments;
	int i= 0, l = 0, printed_chars = 0;
 	char buffer[BUFF_SIZE];		/* Character array to store the value from format pointer */
	char *p = buffer;		/* ponter to character buffer Array */

	va_start (arguments, format);

	/* Returns (-1) if it fails */
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	
	/* Loop to store the value of format to buffer */
	while (i < BUFF_SIZE)
	{
		buffer[i] = format[i];
		i++;
	}
	
	/* writing loop */
	for (l = 0; p[l] != '\0'; l++)
	{
		if (p[l] == '%')
		{
			l++;
			func_p = format_spec(p[l]);
			(func_p) ? func_p(arguments) : _printf("%%%c", p[l]);
		}
		else 
		{
			_putchar(p[l]);
		}
		printed_chars++;
	}
	
	va_end (arguments);

return (printed_chars);
}
