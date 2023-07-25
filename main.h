#ifndef MAIN_H
#define MAIN_H



#define BUFF_SIZE 1024



#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_type - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @s: format specifier
 * @frmt_spec: pointer to the correct printing function
 */
typedef struct format_type
{
	char s;
	int (*frmt_spec)(va_list ap);
} fmt_t;







/****************** _PRINTF ******************/

int _printf(const char *format, ...);
int (*format_spec(char c))(va_list);
void spec_check(char *s, int *k);

/****************** WRITE FUNCTIONS ******************/

int _put_string(char *s);
int _putchar(char c);

/****************** PRINT FUNCTIONS ******************/
int print_string(va_list str_arg);
int print_char(va_list char_arg);
int print_percent(va_list percent_arg);
int print_int(va_list int_arg);
int print_unsigned(va_list unsign_arg);
int print_hexa(va_list hexa_arg);
int print_hexa_cap(va_list hexa_cap_arg);
int print_binary(va_list bin_arg);
int print_octal(va_list octal_arg);
int print_custom_s(va_list custom_s_arg);
int print_address(va_list pointer_arg);


/****************** COMPELEMENTARY FUNCTIONS ******************/
int count_digit(int i);
void print_number(int n);
char *convert(unsigned long int num, int base, int lowercase);

#endif
