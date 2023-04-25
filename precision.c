#include "main.h"

/**

get_precision - Calculates the precision for printing

@format: Formatted string in which to print the arguments

@i: Pointer to the index of the current character in format

@list: List of arguments to be printed

Return: The precision, or -1 if there is no precision
*/
int get_precision(const char *format, int *i, va_list list)
{
int curr_i = *i + 1;
int precision = -1;

// Check if there is a precision specifier
if (format[curr_i] != '.')
return (precision);

// Parse the precision
precision = 0;
curr_i++;
if (format[curr_i] == '*')
{
precision = va_arg(list, int);
curr_i++;
}
else
{
while (is_digit(format[curr_i]))
{
precision = precision * 10 + (format[curr_i] - '0');
curr_i++;
}
}

*i = curr_i - 1;
return (precision);
}

/**

is_digit - Checks if a character is a digit
@c: Character to be checked
Return: 1 if c is a digit, 0 otherwise
*/
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}

