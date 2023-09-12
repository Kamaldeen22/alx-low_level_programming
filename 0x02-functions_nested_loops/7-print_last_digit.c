#include "main.h"
/**
 * print_last_digit - Function that computes the absolute value of an integer
 * @a:  is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int a)

{

	int last;

	last = a % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
