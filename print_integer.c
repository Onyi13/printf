#include "main.h"
/**
*print_integer - Print an integer as a string.
*@args: The va_list arguments.
*Return: The number of digits printed.
*/
int print_integer(va_list args)
{int n = va_arg(args, int);
int div = 1;
int len = 0;
unsigned int num;
char c;
if (n < 0)
{len += write(1, "-", 1);
num = n * -1; }
else
num = n;
while (num / div > 9)
div *= 10;
while (div != 0)
{c = ((num / div) % 10) + '0';
len += write(1, &c, 1);
div /= 10; }
return (len); }
