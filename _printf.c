#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: the string to print with following conversion specifiers.
 * Return: the length of the printed characters.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *fmt = (char *)format;
	int  arg1;
	int arg2;
	char *arg3;

	va_start(args, format);
	while (*fmt)
	{
	if (*fmt != '%')
	{
	_putchar(*fmt);
	count++;
	}
	else
	{
	if (!*(fmt + 1))
	break;

	fmt++;
	switch (*fmt)
	{
	case('d'):
	case('i'):
	arg1 = va_arg(args, int);
	count += p_number(arg1);
	break;

	case('c'):
	arg2 = va_arg(args, int);
	_putchar(arg2);
	++count;
	break;

	case('s'):
	arg3 = va_arg(args, char *);
	if (arg3 == NULL)
	{
	count += print_string("(null)");
	break;
	}
	count += print_string(arg3);
	break;

	default:
	_putchar(*fmt);
	count++;
	}
	}
	++fmt;
	}
	va_end(args);
	return (count);
}
