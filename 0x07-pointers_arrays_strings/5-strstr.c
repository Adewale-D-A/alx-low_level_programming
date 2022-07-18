#include "main.h"
#include <stdio.h>
/**
 * _strncmp - compares two strings within b bytes.
 * @s1: string to check
 * @s2: string to check from
 * @b: number of bytes to check
 * Return: 0 if strings are the same
 * any other number if they are different.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int len;
	/*Get length of needle for strncmp*/
	len = 0;
	while (needle[len] != '\0')
		len++;
	/*compare substring*/
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
