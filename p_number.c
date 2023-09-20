#include "main.h"
/**
* p_number - print integer(+\-\0).
* @ar: integer to print.
* Return: if (ar) then integer of length else 0;
*/
int p_number(int ar)
{
	long g = 0;
	long n = ar;
	char c;
	int counter = 0;
	int zero_ind = 0;

	if (ar == 0)
	{
	_putchar ('0');
	return (1);
	}

	if (ar < 0)
	{
	_putchar ('-');
	n = ar * -1;
	counter++;
	}
	while (n)
	{
	g = g * 10 + n % 10;
	if (!g)
	zero_ind++;

	n = n / 10;
	}
	while (g)
	{
	c = g % 10 + '0';
	_putchar (c);
	counter++;
	g /= 10;
	}
	if (zero_ind)
	{
	while (zero_ind)
	{
	_putchar('0');
	counter++;
	--zero_ind;
	}
	}

	return (counter);
}
