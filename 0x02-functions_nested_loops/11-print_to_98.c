#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - this function prints all natural numbers from n to 98
 * followed by a new line
 * @n: input integer
 * Return: Nothing
 */
void print_to_98(int n)

{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
	if (n == 98)
		continue;
			printf(", ");
		}
			printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
	if (n == 98)
		continue;
			printf(", ");
		}
			printf("\n");
	}
}
