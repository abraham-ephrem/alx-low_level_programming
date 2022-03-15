#ifndef MAIN
#define MAIN

#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * print_alphabet - writes small letters
 *
 * Return: void
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - print small letters 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void);
/**
 * _islower - checks for small letters
 * @c: The letter to be checked
 *
 * Return: 1 if the letter is a small letter or 0 otherwise
 */
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
#endif
