#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase alphabet 10 times.
*/
void print_alphabet_x10(void)

{
	int k;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
