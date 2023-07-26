0x11. C - printf (Group Project) by Ahmed Osama, Ahmed Osama

_printf.c is the main function, that is required to print it's input arguments and string to standard output
main.h is the header file that contains all the libraries required for the project and all the functions needed.
print_functions.c, contains the functions responsible for printing, that _printf calls .
	print_char : receives an argument and pointer to a flag (which gets neglected in this function) and prints a character to standard Out.
	print_string : receives an argument and pointer to a flag (neglected) and prints a string to standard Out using a pointer.
	print_percent : prints a "%" character to standard Out.
	print_int : receives an argument and pointer to a flag and prints an integer (decimal - hexadecimal - octal - binary) to standard Out.
writing_functions.c file, contains the basic writing functions using write() function like (_putchar and  _put_string)
	_putchar : receive a character and prints it 
	_put_string : recives a pointer and prints its content
format_spec.c is the file that contains the function that is resposible for selecting which function to proceed using a typedef struct,
this struct is called format_type (fmt_t).
num_functions.c contains helper functions to print numbers and integers,
And a converter function to help print different base numbers like octal, binary and hexadecimal

