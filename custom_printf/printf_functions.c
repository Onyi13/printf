#include "print_functions.h"
/**
*_printf - Custom printf function.
*@format: format string.
*Return: number of characters printed.
*/
int _printf(const char *format, ...)
{va_list args;
int count = 0;
char *str;
va_start(args, format);
while (*format)
{
if (*format == '%' && (format[1] == 'c' || format[1] == 's' || format[1] == '%'))
{format++;
if (*format == 'c')
{char c = va_arg(args, int);
write(1, &c, 1);
count++;}
else if (*format == 's')
{str = va_arg(args, char*);
while (*str)
{write(1, str, 1);
count++;
str++; }}
else if (*format == '%')
{write(1, format, 1);
count++; }}
else
{write(1, format, 1);
count++; }
format++; }
va_end(args);
return count; }
