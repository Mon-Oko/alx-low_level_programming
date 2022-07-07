#include "main.h"
/**
 * print_last_digit -> prints last digit of a number
 * @n: The passed argument
 * Return: The  last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * (n % 10);
	else
		r = n % 10;
	_putchar((r % 10) + '0');
	return (r % 10);
}
