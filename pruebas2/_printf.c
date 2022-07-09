#include "main.h"
/**
* _printf - copy of the original printf C Function
* @format: the format
*
*Return: the amount of chars printed
*/

int _printf(const char *format, ...)
{
	va_list parameters;
	unsigned int len = 0, i;
	/*char buff[200];*/

	va_start(parameters, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'c':
						print_char(va_arg(parameters, int));
						i += 2;
						len++;
						break;
					case 's':
						len += print_string(va_arg(parameters, char *));
						i += 2;
						break;
					case 'd':
						len += print_number(va_arg(parameters, int));
						i +=2;
						break;
					case 'i':
						len += print_number(va_arg(parameters, int));
						break;
					case '\0':
						return (-1);
					default:
						len += just_in_case(format[i + 1]);
						i += 2;
						break;
				}
			}
			else
			{
				len += print_char(format[i]);
				i++;
			}
		}
	}
	else
		return (-1);
	va_end(parameters);
	return (len);
}
