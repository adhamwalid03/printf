#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - This function prints string
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int x = 0;

if (format == NULL)
return (-1);
if (format == "%s")
printf("%s", format);
if (format == "%c")
printf("%c", format);
x = strlen(format);
printf("%d", x);
return (x);
}
