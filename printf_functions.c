#include "main.h"
/**
*_printf - Our custom printf function.
*@format: format string.
*Return: number of characters printed.
*/
int _printf(const char *format, ...)
{va_list args;
int count = 0;
va_start(args, format);
while (*format)
{
if (*format == '%' && (format[1] == 'c' || format[1] == 's' || format[1] == '%'))
{format++;
switch (*format)
{
case 'c':
{char c = va_arg(args, int);
write(1, &c, 1);
count++;
break; }
case 's':
{char *str = va_arg(args, char*);
while (*str)
{write(1, str, 1);
count++;
str++; }
break; }
case '%':
{write(1, format, 1);
count++;
break; }}}
else
{write(1, format, 1);
count++; }
format++; }
va_end(args);
return (count); }
/**
*_printf - Custom printf function.
*@format: The format string.
*Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{unsigned int i = 0, count = 0;
va_list args;
va_start(args, format);
while (format && format[i])
{
if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
{count += print_integer(args);
i++;}
else
{write(1, &format[i], 1);
count++; }
i++; }
va_end(args);
return (count); }
