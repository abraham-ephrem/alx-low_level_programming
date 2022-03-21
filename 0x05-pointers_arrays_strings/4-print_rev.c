#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a reversed string
 * @s: the address of the first character in the string
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
		printf("%c", *(s + i));
	printf("\n");
}
