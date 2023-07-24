#include "main.h"

/**
 * print_char - Prints a char
 * @argument: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_char(va_list argument, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(argument, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
