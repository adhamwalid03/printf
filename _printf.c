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
const char *ptr = format;

if (ptr == NULL)
return (-1);
printf("%s", ptr);
x = strlen(ptr);
printf("%d", x);
return (x);
}
