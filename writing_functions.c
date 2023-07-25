#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _put_string - prints a string to standard output
 * @s: pointer to a string to be printed
 * @i: counter to count chars printed
 * Return: numbers of characters written
 */
int _put_string(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		_putchar(*s++);
		i++;
	}
return (i);
}
