#include "main.h"
#include <string.h>
/**
 * _strncpy - copies n bytes from src to dest
 * @src: the first string
 * @dest: the second string
 * @n: number of bytes
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
