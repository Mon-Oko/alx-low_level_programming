#include "main.h"
#include <string.h>
/**
 * _strncpy -> copys the strings.
 * @dest: para1
 * @src: para2
 * @n: para3
 */
char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);
	return (dest);
}
