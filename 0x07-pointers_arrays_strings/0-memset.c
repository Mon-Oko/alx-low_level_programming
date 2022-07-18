#include "main.h"
/**
 * _memset -> this memory set function
 * @s: string
 * @b: character
 * @n: an integer
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
