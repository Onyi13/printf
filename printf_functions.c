#include "main.h"
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
