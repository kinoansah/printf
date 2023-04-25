#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
		return (precision);

	precision = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			precision = (precision + format[curr_i] - '0') * 10;
		}
		else if (format[curr_i] == 'x')
		{
			curr_i++;
			int hex_precision = 0;
			for (; isxdigit(format[curr_i]; curr_i++)
			     {
				     hex_precision *= 16;
				     if (isdigit(format[curr_i]))
					     hex_precision += format[curr_i] - '0';
				     else
					     hex_precision += tolower(format[curr_i] - 'a' + 10;
			     }
			precision = hex_precision;
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (precision);
}

