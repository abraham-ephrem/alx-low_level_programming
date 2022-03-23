#include "main.h"
#include <string.h>
/**
 * _strncat - concats two integer upto n bytes from src
 * @dest: the second string
 * @src: the first string
 * @n: the number of bytes
 * Return: the concatnated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
