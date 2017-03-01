#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: pointer to string
 * Description: prints a string, followed by a new line
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
	}
	else
	{
		_putchar (*s);
	_puts_recursion(s + 1);
	}
}
