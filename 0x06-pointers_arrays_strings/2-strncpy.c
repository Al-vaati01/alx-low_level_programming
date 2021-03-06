#include "main.h"
#include <string.h>
/**
 * *_strncpy-copies a string.
 * @dest:var 1
 * @src:var 2
 * @n: int var
 * Return:full string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
