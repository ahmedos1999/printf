#ifndef MAIN_H
#define MAIN_H



#define BUFF_SIZE 1024



#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct format_type
{
	char s;
	int (*frmt_spec)(va_list ap);

}fmt_t;







/****************** _PRINTF ******************/

int _printf(const char *format, ...);
int (*format_spec(char c))(va_list);

/****************** WRITE FUNCTIONS ******************/

int _put_string(char *s);
int _putchar(char c);

/****************** PRINT FUNCTIONS ******************/
int print_string(va_list str_arg);
int print_char(va_list char_arg);
int print_percent(va_list percent_arg);

#endif
