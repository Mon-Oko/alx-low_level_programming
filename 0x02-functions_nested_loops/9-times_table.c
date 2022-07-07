#include "main.h"
/**
 *  times_table - prints the times table from 0 - 9.
 *  Return: Nothing.
 */
void times_table(void)
{
	int i, j, mon;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mon = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mon >= 10)
			{
				_putchar((mon / 10) + '0');
				_putchar((mon % 10) + '0');
			}
			else if (mon < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((mon % 10) + '0');
			}
			else
				_putchar((mon % 10) + '0');
		}
		_putchar('\n');
	}
}
