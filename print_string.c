#include "main.h"

/**
* string_length - to get string length.
* @chr: the string we want the length for.
* Return: if (chr) then integer of lentgth else 0.
*/
int string_length(char *chr)
{
	char *c = chr;

	if (!c)
	return (0);

	while (*c)
	c++;

	return (c - chr);
}
/**
* print_string - print string argument.
* @ar: string to print.
* Return: if (ar) then integer of length else 0.
*/
int print_string(char *ar)
{
	if (ar)
	{
	char *ch = ar;

	while (*ch)
	putchar(*ch++);

	return (string_length(ar));
	}
	return (0);
}
